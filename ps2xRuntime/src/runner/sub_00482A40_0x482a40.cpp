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

// Function: sub_00482A40
// Address: 0x482a40 - 0x482aa0
void sub_00482A40_0x482a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482A40_0x482a40");
#endif

    switch (ctx->pc) {
        case 0x482a74u: goto label_482a74;
        case 0x482a80u: goto label_482a80;
        default: break;
    }

    ctx->pc = 0x482a40u;

    // 0x482a40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x482a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x482a44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x482a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x482a48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x482a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x482a4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x482a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x482a50: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x482a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x482a54: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x482a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x482a58: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x482a58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x482a5c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x482a5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x482a60: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x482a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x482a64: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x482a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x482a68: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x482a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x482a6c: 0xc120aa8  jal         func_482AA0
    ctx->pc = 0x482A6Cu;
    SET_GPR_U32(ctx, 31, 0x482A74u);
    ctx->pc = 0x482AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482AA0u, 0x482A6Cu, 0x482A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482A74u;
label_482a74:
    // 0x482a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x482a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482a78: 0xc119c5c  jal         func_467170
    ctx->pc = 0x482A78u;
    SET_GPR_U32(ctx, 31, 0x482A80u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x482A78u, 0x482A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482A80u;
label_482a80:
    // 0x482a80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x482a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482a84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x482a84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482a88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x482a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482a8c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x482a8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x482a90: 0x3e00008  jr          $ra
    ctx->pc = 0x482A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482A98u;
    // 0x482a98: 0x0  nop
    ctx->pc = 0x482a98u;
    // NOP
    // 0x482a9c: 0x0  nop
    ctx->pc = 0x482a9cu;
    // NOP
    ctx->pc = 0x482aa0u;
}
