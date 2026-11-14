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

// Function: sub_001B3C80
// Address: 0x1b3c80 - 0x1b3cf0
void sub_001B3C80_0x1b3c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3C80_0x1b3c80");
#endif

    switch (ctx->pc) {
        case 0x1b3cb8u: goto label_1b3cb8;
        case 0x1b3cd0u: goto label_1b3cd0;
        default: break;
    }

    ctx->pc = 0x1b3c80u;

    // 0x1b3c80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b3c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b3c84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b3c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b3c88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b3c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b3c8c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1b3c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1b3c90: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1b3c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1b3c94: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1b3c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1b3c98: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b3c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3c9c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x1b3c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3ca0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1b3ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b3ca4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1b3ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b3ca8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1b3ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3cac: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1b3cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1b3cb0: 0xc06cf3c  jal         func_1B3CF0
    ctx->pc = 0x1B3CB0u;
    SET_GPR_U32(ctx, 31, 0x1B3CB8u);
    ctx->pc = 0x1B3CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3CF0u, 0x1B3CB0u, 0x1B3CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3CB8u;
label_1b3cb8:
    // 0x1b3cb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3cbc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b3cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3cc4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1b3cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b3cc8: 0xc06bc58  jal         func_1AF160
    ctx->pc = 0x1B3CC8u;
    SET_GPR_U32(ctx, 31, 0x1B3CD0u);
    ctx->pc = 0x1AF160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF160u, 0x1B3CC8u, 0x1B3CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3CD0u;
label_1b3cd0:
    // 0x1b3cd0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b3cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3cd4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1b3cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1b3cd8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3cdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b3cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3ce0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b3ce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3ce4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1b3ce4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b3ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3CF0u;
}
