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

// Function: sub_0018E680
// Address: 0x18e680 - 0x18e6f0
void sub_0018E680_0x18e680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E680_0x18e680");
#endif

    switch (ctx->pc) {
        case 0x18e6b8u: goto label_18e6b8;
        case 0x18e6d0u: goto label_18e6d0;
        default: break;
    }

    ctx->pc = 0x18e680u;

    // 0x18e680: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18e680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18e684: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18e684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18e688: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18e688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18e68c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x18e68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x18e690: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x18e690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x18e694: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x18e694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x18e698: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x18e698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e69c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x18e69cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x18e6a0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x18e6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18e6a4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x18e6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18e6a8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x18e6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e6ac: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x18e6acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x18e6b0: 0xc0639bc  jal         func_18E6F0
    ctx->pc = 0x18E6B0u;
    SET_GPR_U32(ctx, 31, 0x18E6B8u);
    ctx->pc = 0x18E6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E6F0u, 0x18E6B0u, 0x18E6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E6B8u;
label_18e6b8:
    // 0x18e6b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18e6b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e6bc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x18e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e6c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e6c4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x18e6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18e6c8: 0xc0630a4  jal         func_18C290
    ctx->pc = 0x18E6C8u;
    SET_GPR_U32(ctx, 31, 0x18E6D0u);
    ctx->pc = 0x18C290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C290u, 0x18E6C8u, 0x18E6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E6D0u;
label_18e6d0:
    // 0x18e6d0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x18e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e6d4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x18e6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x18e6d8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e6dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18e6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e6e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18e6e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e6e4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x18e6e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x18e6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x18E6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E6F0u;
}
