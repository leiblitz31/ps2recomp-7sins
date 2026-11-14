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

// Function: sub_00216A40
// Address: 0x216a40 - 0x216ae0
void sub_00216A40_0x216a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216A40_0x216a40");
#endif

    switch (ctx->pc) {
        case 0x216a6cu: goto label_216a6c;
        case 0x216a84u: goto label_216a84;
        case 0x216a9cu: goto label_216a9c;
        case 0x216ab8u: goto label_216ab8;
        default: break;
    }

    ctx->pc = 0x216a40u;

    // 0x216a40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x216a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x216a44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x216a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x216a48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x216a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x216a4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x216a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x216a50: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x216a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x216a54: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x216a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x216a58: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x216a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x216a5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x216a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x216a60: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x216a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x216a64: 0xc085b90  jal         func_216E40
    ctx->pc = 0x216A64u;
    SET_GPR_U32(ctx, 31, 0x216A6Cu);
    ctx->pc = 0x216E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216E40u, 0x216A64u, 0x216A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A6Cu;
label_216a6c:
    // 0x216a6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x216a6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a70: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x216a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x216a74: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x216a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x216a78: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x216a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x216a7c: 0xc085ad0  jal         func_216B40
    ctx->pc = 0x216A7Cu;
    SET_GPR_U32(ctx, 31, 0x216A84u);
    ctx->pc = 0x216B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216B40u, 0x216A7Cu, 0x216A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A84u;
label_216a84:
    // 0x216a84: 0x8fb10040  lw          $s1, 0x40($sp)
    ctx->pc = 0x216a84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x216a88: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x216a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x216a8c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x216a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x216a90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x216a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a94: 0xc085ab8  jal         func_216AE0
    ctx->pc = 0x216A94u;
    SET_GPR_U32(ctx, 31, 0x216A9Cu);
    ctx->pc = 0x216AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216AE0u, 0x216A94u, 0x216A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A9Cu;
label_216a9c:
    // 0x216a9c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x216a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x216aa0: 0x8fb10050  lw          $s1, 0x50($sp)
    ctx->pc = 0x216aa0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x216aa4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x216aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x216aa8: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x216aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x216aac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x216aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216ab0: 0xc085ab8  jal         func_216AE0
    ctx->pc = 0x216AB0u;
    SET_GPR_U32(ctx, 31, 0x216AB8u);
    ctx->pc = 0x216AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216AE0u, 0x216AB0u, 0x216AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216AB8u;
label_216ab8:
    // 0x216ab8: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x216ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x216abc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x216abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216ac0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x216ac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216ac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x216ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216ac8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x216ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x216acc: 0x3e00008  jr          $ra
    ctx->pc = 0x216ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216AD4u;
    // 0x216ad4: 0x0  nop
    ctx->pc = 0x216ad4u;
    // NOP
    // 0x216ad8: 0x0  nop
    ctx->pc = 0x216ad8u;
    // NOP
    // 0x216adc: 0x0  nop
    ctx->pc = 0x216adcu;
    // NOP
    ctx->pc = 0x216ae0u;
}
