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

// Function: sub_002AD470
// Address: 0x2ad470 - 0x2ad4e0
void sub_002AD470_0x2ad470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD470_0x2ad470");
#endif

    switch (ctx->pc) {
        case 0x2ad4a8u: goto label_2ad4a8;
        case 0x2ad4c0u: goto label_2ad4c0;
        default: break;
    }

    ctx->pc = 0x2ad470u;

    // 0x2ad470: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ad470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ad474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ad474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ad478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ad478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ad47c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2ad47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2ad480: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2ad480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2ad484: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2ad484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2ad488: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2ad488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad48c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2ad48cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ad490: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2ad490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ad494: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2ad494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ad498: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2ad498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ad49c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2ad49cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2ad4a0: 0xc0ab538  jal         func_2AD4E0
    ctx->pc = 0x2AD4A0u;
    SET_GPR_U32(ctx, 31, 0x2AD4A8u);
    ctx->pc = 0x2AD4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD4E0u, 0x2AD4A0u, 0x2AD4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD4A8u;
label_2ad4a8:
    // 0x2ad4a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ad4a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad4ac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2ad4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad4b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ad4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad4b4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2ad4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ad4b8: 0xc0ab1d0  jal         func_2AC740
    ctx->pc = 0x2AD4B8u;
    SET_GPR_U32(ctx, 31, 0x2AD4C0u);
    ctx->pc = 0x2AC740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC740u, 0x2AD4B8u, 0x2AD4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD4C0u;
label_2ad4c0:
    // 0x2ad4c0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2ad4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad4c4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x2ad4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x2ad4c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2ad4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ad4cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ad4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad4d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ad4d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad4d4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2ad4d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2ad4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD4E0u;
}
