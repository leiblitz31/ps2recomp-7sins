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

// Function: sub_002B6F80
// Address: 0x2b6f80 - 0x2b6ff0
void sub_002B6F80_0x2b6f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6F80_0x2b6f80");
#endif

    switch (ctx->pc) {
        case 0x2b6fb8u: goto label_2b6fb8;
        case 0x2b6fd0u: goto label_2b6fd0;
        default: break;
    }

    ctx->pc = 0x2b6f80u;

    // 0x2b6f80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b6f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b6f84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b6f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b6f88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b6f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b6f8c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2b6f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2b6f90: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2b6f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2b6f94: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2b6f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2b6f98: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b6f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b6f9c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2b6f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6fa0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2b6fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b6fa4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2b6fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b6fa8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2b6fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b6fac: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2b6facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2b6fb0: 0xc0adbfc  jal         func_2B6FF0
    ctx->pc = 0x2B6FB0u;
    SET_GPR_U32(ctx, 31, 0x2B6FB8u);
    ctx->pc = 0x2B6FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6FF0u, 0x2B6FB0u, 0x2B6FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6FB8u;
label_2b6fb8:
    // 0x2b6fb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b6fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6fbc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b6fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b6fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6fc4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2b6fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b6fc8: 0xc0ada94  jal         func_2B6A50
    ctx->pc = 0x2B6FC8u;
    SET_GPR_U32(ctx, 31, 0x2B6FD0u);
    ctx->pc = 0x2B6A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6A50u, 0x2B6FC8u, 0x2B6FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6FD0u;
label_2b6fd0:
    // 0x2b6fd0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b6fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b6fd4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x2b6fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x2b6fd8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b6fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b6fdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b6fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6fe0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b6fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6fe4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2b6fe4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b6fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6FF0u;
}
