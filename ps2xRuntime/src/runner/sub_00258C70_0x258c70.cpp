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

// Function: sub_00258C70
// Address: 0x258c70 - 0x258ce0
void sub_00258C70_0x258c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258C70_0x258c70");
#endif

    switch (ctx->pc) {
        case 0x258ca8u: goto label_258ca8;
        case 0x258cc0u: goto label_258cc0;
        default: break;
    }

    ctx->pc = 0x258c70u;

    // 0x258c70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x258c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x258c74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x258c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x258c78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x258c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258c7c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x258c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x258c80: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x258c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x258c84: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x258c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x258c88: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x258c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258c8c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x258c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x258c90: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x258c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x258c94: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x258c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x258c98: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x258c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x258c9c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x258c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x258ca0: 0xc096338  jal         func_258CE0
    ctx->pc = 0x258CA0u;
    SET_GPR_U32(ctx, 31, 0x258CA8u);
    ctx->pc = 0x258CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258CE0u, 0x258CA0u, 0x258CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258CA8u;
label_258ca8:
    // 0x258ca8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x258ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258cac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x258cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258cb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258cb4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x258cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x258cb8: 0xc0961c4  jal         func_258710
    ctx->pc = 0x258CB8u;
    SET_GPR_U32(ctx, 31, 0x258CC0u);
    ctx->pc = 0x258710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258710u, 0x258CB8u, 0x258CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258CC0u;
label_258cc0:
    // 0x258cc0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x258cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258cc4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x258cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x258cc8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x258cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x258ccc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x258cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258cd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x258cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258cd4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x258cd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x258cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x258CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258CE0u;
}
