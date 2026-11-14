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

// Function: sub_002D0AA0
// Address: 0x2d0aa0 - 0x2d0b10
void sub_002D0AA0_0x2d0aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0AA0_0x2d0aa0");
#endif

    switch (ctx->pc) {
        case 0x2d0ad8u: goto label_2d0ad8;
        case 0x2d0af0u: goto label_2d0af0;
        default: break;
    }

    ctx->pc = 0x2d0aa0u;

    // 0x2d0aa0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d0aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d0aa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d0aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d0aa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d0aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d0aac: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2d0aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2d0ab0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2d0ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2d0ab4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2d0ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2d0ab8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d0ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0abc: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2d0abcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0ac0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2d0ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d0ac4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2d0ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d0ac8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2d0ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0acc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2d0accu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2d0ad0: 0xc0b42c4  jal         func_2D0B10
    ctx->pc = 0x2D0AD0u;
    SET_GPR_U32(ctx, 31, 0x2D0AD8u);
    ctx->pc = 0x2D0B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0B10u, 0x2D0AD0u, 0x2D0AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0AD8u;
label_2d0ad8:
    // 0x2d0ad8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d0ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0adc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d0adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ae4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2d0ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d0ae8: 0xc0b4128  jal         func_2D04A0
    ctx->pc = 0x2D0AE8u;
    SET_GPR_U32(ctx, 31, 0x2D0AF0u);
    ctx->pc = 0x2D04A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D04A0u, 0x2D0AE8u, 0x2D0AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0AF0u;
label_2d0af0:
    // 0x2d0af0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2d0af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0af4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x2d0af4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x2d0af8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d0af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d0afc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0b00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d0b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0b04: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2d0b04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d0b08: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0B10u;
}
