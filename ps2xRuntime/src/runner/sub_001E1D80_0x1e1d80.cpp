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

// Function: sub_001E1D80
// Address: 0x1e1d80 - 0x1e1df0
void sub_001E1D80_0x1e1d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1D80_0x1e1d80");
#endif

    switch (ctx->pc) {
        case 0x1e1db8u: goto label_1e1db8;
        case 0x1e1dd0u: goto label_1e1dd0;
        default: break;
    }

    ctx->pc = 0x1e1d80u;

    // 0x1e1d80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e1d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e1d84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e1d88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e1d8c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e1d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e1d90: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e1d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1e1d94: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1e1d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1e1d98: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e1d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1d9c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x1e1d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e1da0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e1da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e1da4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1e1da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e1da8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1e1da8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1dac: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1e1dacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1e1db0: 0xc07877c  jal         func_1E1DF0
    ctx->pc = 0x1E1DB0u;
    SET_GPR_U32(ctx, 31, 0x1E1DB8u);
    ctx->pc = 0x1E1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1DF0u, 0x1E1DB0u, 0x1E1DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1DB8u;
label_1e1db8:
    // 0x1e1db8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e1db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1dbc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e1dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e1dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1dc4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1e1dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e1dc8: 0xc0759a4  jal         func_1D6690
    ctx->pc = 0x1E1DC8u;
    SET_GPR_U32(ctx, 31, 0x1E1DD0u);
    ctx->pc = 0x1D6690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6690u, 0x1E1DC8u, 0x1E1DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1DD0u;
label_1e1dd0:
    // 0x1e1dd0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e1dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1dd4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1e1dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1e1dd8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e1dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1ddc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e1ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1de0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1de4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1e1de4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e1de8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1DF0u;
}
