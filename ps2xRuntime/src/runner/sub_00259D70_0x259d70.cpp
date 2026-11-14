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

// Function: sub_00259D70
// Address: 0x259d70 - 0x259e80
void sub_00259D70_0x259d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259D70_0x259d70");
#endif

    switch (ctx->pc) {
        case 0x259da0u: goto label_259da0;
        case 0x259dc0u: goto label_259dc0;
        case 0x259e0cu: goto label_259e0c;
        case 0x259e54u: goto label_259e54;
        case 0x259e60u: goto label_259e60;
        default: break;
    }

    ctx->pc = 0x259d70u;

    // 0x259d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259d74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259d78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x259d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x259d7c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x259d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x259d80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x259d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259d84: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x259D84u;
    {
        const bool branch_taken_0x259d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259d84) {
            ctx->pc = 0x259DC0u;
            goto label_259dc0;
        }
    }
    ctx->pc = 0x259D8Cu;
    // 0x259d8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x259d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259d90: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x259d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x259d94: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x259d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x259d98: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x259D98u;
    SET_GPR_U32(ctx, 31, 0x259DA0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x259D98u, 0x259DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259DA0u;
label_259da0:
    // 0x259da0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x259da0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259da4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x259da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x259da8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x259da8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x259dac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x259DACu;
    {
        const bool branch_taken_0x259dac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x259dac) {
            ctx->pc = 0x259DC0u;
            goto label_259dc0;
        }
    }
    ctx->pc = 0x259DB4u;
    // 0x259db4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x259db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259db8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x259DB8u;
    SET_GPR_U32(ctx, 31, 0x259DC0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x259DB8u, 0x259DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259DC0u;
label_259dc0:
    // 0x259dc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x259dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259dc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259dc8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x259dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x259dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x259DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259DD4u;
    // 0x259dd4: 0x0  nop
    ctx->pc = 0x259dd4u;
    // NOP
    // 0x259dd8: 0x0  nop
    ctx->pc = 0x259dd8u;
    // NOP
    // 0x259ddc: 0x0  nop
    ctx->pc = 0x259ddcu;
    // NOP
    // 0x259de0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x259de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x259de4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x259de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x259de8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x259de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x259dec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x259df0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x259df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x259df4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x259df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x259df8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x259df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x259dfc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x259dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259e00: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x259e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x259e04: 0xc0911dc  jal         func_244770
    ctx->pc = 0x259E04u;
    SET_GPR_U32(ctx, 31, 0x259E0Cu);
    ctx->pc = 0x244770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244770u, 0x259E04u, 0x259E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259E0Cu;
label_259e0c:
    // 0x259e0c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x259e0cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x259e10: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x259e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x259e14: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x259e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x259e18: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x259E18u;
    {
        const bool branch_taken_0x259e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x259e18) {
            ctx->pc = 0x259E30u;
            goto label_259e30;
        }
    }
    ctx->pc = 0x259E20u;
    // 0x259e20: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x259e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x259e24: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x259e24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x259e28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x259E28u;
    {
        const bool branch_taken_0x259e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259e28) {
            ctx->pc = 0x259E38u;
            goto label_259e38;
        }
    }
    ctx->pc = 0x259E30u;
label_259e30:
    // 0x259e30: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x259e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x259e34: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x259e34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_259e38:
    // 0x259e38: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x259e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e3c: 0x10110005  beq         $zero, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x259E3Cu;
    {
        const bool branch_taken_0x259e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x259e3c) {
            ctx->pc = 0x259E54u;
            goto label_259e54;
        }
    }
    ctx->pc = 0x259E44u;
    // 0x259e44: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x259e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259e48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x259e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e4c: 0xc096b98  jal         func_25AE60
    ctx->pc = 0x259E4Cu;
    SET_GPR_U32(ctx, 31, 0x259E54u);
    ctx->pc = 0x25AE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AE60u, 0x259E4Cu, 0x259E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259E54u;
label_259e54:
    // 0x259e54: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x259e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259e58: 0xc0967a0  jal         func_259E80
    ctx->pc = 0x259E58u;
    SET_GPR_U32(ctx, 31, 0x259E60u);
    ctx->pc = 0x259E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E80u, 0x259E58u, 0x259E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259E60u;
label_259e60:
    // 0x259e60: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x259e60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259e64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x259e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259e68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x259e68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259e6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259e6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259e70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259e70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259e74: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x259e74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x259e78: 0x3e00008  jr          $ra
    ctx->pc = 0x259E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259E80u;
}
