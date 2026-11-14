#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B6D80
// Address: 0x2b6d80 - 0x2b6f20
void sub_002B6D80_0x2b6d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6D80_0x2b6d80");
#endif

    switch (ctx->pc) {
        case 0x2b6de0u: goto label_2b6de0;
        case 0x2b6df4u: goto label_2b6df4;
        case 0x2b6e04u: goto label_2b6e04;
        case 0x2b6e24u: goto label_2b6e24;
        case 0x2b6e5cu: goto label_2b6e5c;
        case 0x2b6e9cu: goto label_2b6e9c;
        case 0x2b6eb0u: goto label_2b6eb0;
        case 0x2b6ef4u: goto label_2b6ef4;
        case 0x2b6f08u: goto label_2b6f08;
        default: break;
    }

    ctx->pc = 0x2b6d80u;

    // 0x2b6d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b6d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b6d84: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2b6d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2b6d88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2b6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6d8c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b6d8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b6d90: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6D98u;
    // 0x2b6d98: 0x0  nop
    ctx->pc = 0x2b6d98u;
    // NOP
    // 0x2b6d9c: 0x0  nop
    ctx->pc = 0x2b6d9cu;
    // NOP
    // 0x2b6da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b6da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b6da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b6da8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b6da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b6dac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2b6dacu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b6db0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6db4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B6DB4u;
    {
        const bool branch_taken_0x2b6db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6db4) {
            ctx->pc = 0x2B6E24u;
            goto label_2b6e24;
        }
    }
    ctx->pc = 0x2B6DBCu;
    // 0x2b6dbc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2b6dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2b6dc0: 0x24636740  addiu       $v1, $v1, 0x6740
    ctx->pc = 0x2b6dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26432));
    // 0x2b6dc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6dc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b6dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b6dcc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6dd0: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x2b6dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2b6dd4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2b6dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b6dd8: 0xc0ad9a8  jal         func_2B66A0
    ctx->pc = 0x2B6DD8u;
    SET_GPR_U32(ctx, 31, 0x2B6DE0u);
    ctx->pc = 0x2B66A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B66A0u, 0x2B6DD8u, 0x2B6DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6DE0u;
label_2b6de0:
    // 0x2b6de0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6de4: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x2b6de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x2b6de8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2b6de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b6dec: 0xc0ada30  jal         func_2B68C0
    ctx->pc = 0x2B6DECu;
    SET_GPR_U32(ctx, 31, 0x2B6DF4u);
    ctx->pc = 0x2B68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B68C0u, 0x2B6DECu, 0x2B6DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6DF4u;
label_2b6df4:
    // 0x2b6df4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b6df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6df8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b6df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6dfc: 0xc091188  jal         func_244620
    ctx->pc = 0x2B6DFCu;
    SET_GPR_U32(ctx, 31, 0x2B6E04u);
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x2B6DFCu, 0x2B6E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6E04u;
label_2b6e04:
    // 0x2b6e04: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2b6e04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6e08: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2b6e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2b6e0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b6e0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b6e10: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6E10u;
    {
        const bool branch_taken_0x2b6e10 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b6e10) {
            ctx->pc = 0x2B6E24u;
            goto label_2b6e24;
        }
    }
    ctx->pc = 0x2B6E18u;
    // 0x2b6e18: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b6e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6e1c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2B6E1Cu;
    SET_GPR_U32(ctx, 31, 0x2B6E24u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2B6E1Cu, 0x2B6E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6E24u;
label_2b6e24:
    // 0x2b6e24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6e28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b6e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6e2c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b6e2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b6e30: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6E38u;
    // 0x2b6e38: 0x0  nop
    ctx->pc = 0x2b6e38u;
    // NOP
    // 0x2b6e3c: 0x0  nop
    ctx->pc = 0x2b6e3cu;
    // NOP
    // 0x2b6e40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b6e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b6e44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b6e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b6e48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b6e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b6e4c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b6e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2b6e50: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b6e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6e54: 0xc0911a4  jal         func_244690
    ctx->pc = 0x2B6E54u;
    SET_GPR_U32(ctx, 31, 0x2B6E5Cu);
    ctx->pc = 0x244690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244690u, 0x2B6E54u, 0x2B6E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6E5Cu;
label_2b6e5c:
    // 0x2b6e5c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2b6e5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b6e60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b6e60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6e64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b6e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6e68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b6e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6e6c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b6e6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b6e70: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6E78u;
    // 0x2b6e78: 0x0  nop
    ctx->pc = 0x2b6e78u;
    // NOP
    // 0x2b6e7c: 0x0  nop
    ctx->pc = 0x2b6e7cu;
    // NOP
    // 0x2b6e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b6e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b6e84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b6e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b6e88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b6e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b6e8c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b6e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2b6e90: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b6e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6e94: 0xc0911bc  jal         func_2446F0
    ctx->pc = 0x2B6E94u;
    SET_GPR_U32(ctx, 31, 0x2B6E9Cu);
    ctx->pc = 0x2446F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2446F0u, 0x2B6E94u, 0x2B6E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6E9Cu;
label_2b6e9c:
    // 0x2b6e9c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2b6e9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b6ea0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b6ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6ea4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b6ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b6ea8: 0xc0ae044  jal         func_2B8110
    ctx->pc = 0x2B6EA8u;
    SET_GPR_U32(ctx, 31, 0x2B6EB0u);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x2B6EA8u, 0x2B6EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6EB0u;
label_2b6eb0:
    // 0x2b6eb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b6eb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6eb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b6eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6eb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b6eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6ebc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b6ebcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b6ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6EC8u;
    // 0x2b6ec8: 0x0  nop
    ctx->pc = 0x2b6ec8u;
    // NOP
    // 0x2b6ecc: 0x0  nop
    ctx->pc = 0x2b6eccu;
    // NOP
    // 0x2b6ed0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b6ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b6ed4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b6ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b6ed8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b6ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b6edc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b6edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2b6ee0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2b6ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2b6ee4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b6ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6ee8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2b6ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b6eec: 0xc0911dc  jal         func_244770
    ctx->pc = 0x2B6EECu;
    SET_GPR_U32(ctx, 31, 0x2B6EF4u);
    ctx->pc = 0x244770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244770u, 0x2B6EECu, 0x2B6EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6EF4u;
label_2b6ef4:
    // 0x2b6ef4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2b6ef4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b6ef8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b6ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6efc: 0x24440038  addiu       $a0, $v0, 0x38
    ctx->pc = 0x2b6efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x2b6f00: 0xc0adbc8  jal         func_2B6F20
    ctx->pc = 0x2B6F00u;
    SET_GPR_U32(ctx, 31, 0x2B6F08u);
    ctx->pc = 0x2B6F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6F20u, 0x2B6F00u, 0x2B6F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6F08u;
label_2b6f08:
    // 0x2b6f08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b6f08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6f0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b6f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6f10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b6f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6f14: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2b6f14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b6f18: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6F20u;
}
