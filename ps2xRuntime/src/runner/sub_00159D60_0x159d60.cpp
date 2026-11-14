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

// Function: sub_00159D60
// Address: 0x159d60 - 0x159dd0
void sub_00159D60_0x159d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159D60_0x159d60");
#endif

    switch (ctx->pc) {
        case 0x159d98u: goto label_159d98;
        case 0x159db0u: goto label_159db0;
        default: break;
    }

    ctx->pc = 0x159d60u;

    // 0x159d60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x159d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x159d64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x159d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x159d68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x159d6c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x159d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x159d70: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x159d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x159d74: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x159d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x159d78: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x159d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159d7c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x159d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x159d80: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x159d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159d84: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x159d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x159d88: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x159d88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159d8c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x159d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x159d90: 0xc056774  jal         func_159DD0
    ctx->pc = 0x159D90u;
    SET_GPR_U32(ctx, 31, 0x159D98u);
    ctx->pc = 0x159DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159DD0u, 0x159D90u, 0x159D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D98u;
label_159d98:
    // 0x159d98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x159d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159d9c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x159d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159da4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x159da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x159da8: 0xc0560f8  jal         func_1583E0
    ctx->pc = 0x159DA8u;
    SET_GPR_U32(ctx, 31, 0x159DB0u);
    ctx->pc = 0x1583E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1583E0u, 0x159DA8u, 0x159DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159DB0u;
label_159db0:
    // 0x159db0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x159db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159db4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x159db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x159db8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x159db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159dbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x159dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159dc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x159dc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159dc4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x159dc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x159dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x159DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159DD0u;
}
