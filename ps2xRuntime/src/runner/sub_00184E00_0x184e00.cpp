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

// Function: sub_00184E00
// Address: 0x184e00 - 0x184f60
void sub_00184E00_0x184e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184E00_0x184e00");
#endif

    switch (ctx->pc) {
        case 0x184e34u: goto label_184e34;
        case 0x184e48u: goto label_184e48;
        case 0x184e6cu: goto label_184e6c;
        case 0x184e94u: goto label_184e94;
        case 0x184eb8u: goto label_184eb8;
        case 0x184ee0u: goto label_184ee0;
        case 0x184f10u: goto label_184f10;
        case 0x184f20u: goto label_184f20;
        case 0x184f44u: goto label_184f44;
        default: break;
    }

    ctx->pc = 0x184e00u;

    // 0x184e00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x184e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x184e04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x184e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x184e08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x184e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x184e0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x184e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x184e10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x184e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x184e14: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x184e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x184e18: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x184e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x184e1c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x184e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x184e20: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x184e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x184e24: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x184e24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x184e28: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x184e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x184e2c: 0xc05ddd0  jal         func_177740
    ctx->pc = 0x184E2Cu;
    SET_GPR_U32(ctx, 31, 0x184E34u);
    ctx->pc = 0x177740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177740u, 0x184E2Cu, 0x184E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184E34u;
label_184e34:
    // 0x184e34: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x184e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x184e38: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x184e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x184e3c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x184e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x184e40: 0xc041954  jal         func_106550
    ctx->pc = 0x184E40u;
    SET_GPR_U32(ctx, 31, 0x184E48u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x184E40u, 0x184E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184E48u;
label_184e48:
    // 0x184e48: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x184e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x184e4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x184e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x184e50: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x184e50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x184e54: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x184e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x184e58: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x184e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x184e5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x184e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184e60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x184e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184e64: 0xc061d04  jal         func_187410
    ctx->pc = 0x184E64u;
    SET_GPR_U32(ctx, 31, 0x184E6Cu);
    ctx->pc = 0x187410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187410u, 0x184E64u, 0x184E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184E6Cu;
label_184e6c:
    // 0x184e6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x184e6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184e70: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x184e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184e74: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x184e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x184e78: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x184e78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x184e7c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x184e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x184e80: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x184e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x184e84: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x184e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184e88: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x184e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x184e8c: 0xc05e94c  jal         func_17A530
    ctx->pc = 0x184E8Cu;
    SET_GPR_U32(ctx, 31, 0x184E94u);
    ctx->pc = 0x17A530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A530u, 0x184E8Cu, 0x184E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184E94u;
label_184e94:
    // 0x184e94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x184e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184e98: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x184e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x184e9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x184e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184ea0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x184EA0u;
    {
        const bool branch_taken_0x184ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x184ea0) {
            ctx->pc = 0x184EC4u;
            goto label_184ec4;
        }
    }
    ctx->pc = 0x184EA8u;
    // 0x184ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184eac: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x184eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x184eb0: 0xc05e8dc  jal         func_17A370
    ctx->pc = 0x184EB0u;
    SET_GPR_U32(ctx, 31, 0x184EB8u);
    ctx->pc = 0x17A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A370u, 0x184EB0u, 0x184EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184EB8u;
label_184eb8:
    // 0x184eb8: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x184eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x184ebc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x184EBCu;
    {
        const bool branch_taken_0x184ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184ebc) {
            ctx->pc = 0x184EE4u;
            goto label_184ee4;
        }
    }
    ctx->pc = 0x184EC4u;
label_184ec4:
    // 0x184ec4: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x184ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x184ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x184ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184ecc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x184eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x184ed0: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x184ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x184ed4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x184ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x184ed8: 0xc05e8bc  jal         func_17A2F0
    ctx->pc = 0x184ED8u;
    SET_GPR_U32(ctx, 31, 0x184EE0u);
    ctx->pc = 0x17A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A2F0u, 0x184ED8u, 0x184EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184EE0u;
label_184ee0:
    // 0x184ee0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x184ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184ee4:
    // 0x184ee4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x184ee4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x184ee8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x184EE8u;
    {
        const bool branch_taken_0x184ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x184ee8) {
            ctx->pc = 0x184F14u;
            goto label_184f14;
        }
    }
    ctx->pc = 0x184EF0u;
    // 0x184ef0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x184ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x184ef4: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x184ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x184ef8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x184ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x184efc: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x184efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x184f00: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x184f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184f04: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x184f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x184f08: 0xc05e94c  jal         func_17A530
    ctx->pc = 0x184F08u;
    SET_GPR_U32(ctx, 31, 0x184F10u);
    ctx->pc = 0x17A530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A530u, 0x184F08u, 0x184F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184F10u;
label_184f10:
    // 0x184f10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x184f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184f14:
    // 0x184f14: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x184f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x184f18: 0xc0613ec  jal         func_184FB0
    ctx->pc = 0x184F18u;
    SET_GPR_U32(ctx, 31, 0x184F20u);
    ctx->pc = 0x184FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184FB0u, 0x184F18u, 0x184F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184F20u;
label_184f20:
    // 0x184f20: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x184f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x184f24: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x184f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x184f28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x184f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x184f2c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x184f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x184f30: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x184f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x184f34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x184f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184f38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x184f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184f3c: 0xc0613d8  jal         func_184F60
    ctx->pc = 0x184F3Cu;
    SET_GPR_U32(ctx, 31, 0x184F44u);
    ctx->pc = 0x184F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184F60u, 0x184F3Cu, 0x184F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184F44u;
label_184f44:
    // 0x184f44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x184f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x184f48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x184f48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184f4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x184f4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184f50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x184f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184f54: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x184f54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x184f58: 0x3e00008  jr          $ra
    ctx->pc = 0x184F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184F60u;
}
