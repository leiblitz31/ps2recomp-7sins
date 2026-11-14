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

// Function: sub_00217C60
// Address: 0x217c60 - 0x217cd0
void sub_00217C60_0x217c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217C60_0x217c60");
#endif

    switch (ctx->pc) {
        case 0x217c98u: goto label_217c98;
        case 0x217cb0u: goto label_217cb0;
        default: break;
    }

    ctx->pc = 0x217c60u;

    // 0x217c60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x217c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x217c64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x217c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x217c68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x217c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x217c6c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x217c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x217c70: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x217c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x217c74: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x217c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x217c78: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x217c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217c7c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x217c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x217c80: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x217c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x217c84: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x217c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x217c88: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x217c88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x217c8c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x217c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x217c90: 0xc085f34  jal         func_217CD0
    ctx->pc = 0x217C90u;
    SET_GPR_U32(ctx, 31, 0x217C98u);
    ctx->pc = 0x217CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217CD0u, 0x217C90u, 0x217C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217C98u;
label_217c98:
    // 0x217c98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x217c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c9c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x217c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217ca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ca4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x217ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x217ca8: 0xc085e20  jal         func_217880
    ctx->pc = 0x217CA8u;
    SET_GPR_U32(ctx, 31, 0x217CB0u);
    ctx->pc = 0x217880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217880u, 0x217CA8u, 0x217CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217CB0u;
label_217cb0:
    // 0x217cb0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x217cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217cb4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x217cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x217cb8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x217cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x217cbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x217cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217cc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x217cc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217cc4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x217cc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x217cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x217CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217CD0u;
}
