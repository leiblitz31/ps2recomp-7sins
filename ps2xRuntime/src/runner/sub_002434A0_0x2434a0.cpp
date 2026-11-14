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

// Function: sub_002434A0
// Address: 0x2434a0 - 0x243510
void sub_002434A0_0x2434a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002434A0_0x2434a0");
#endif

    switch (ctx->pc) {
        case 0x2434d8u: goto label_2434d8;
        case 0x2434f0u: goto label_2434f0;
        default: break;
    }

    ctx->pc = 0x2434a0u;

    // 0x2434a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2434a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2434a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2434a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2434a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2434a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2434ac: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2434acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2434b0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2434b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2434b4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2434b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2434b8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2434b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2434bc: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x2434bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2434c0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2434c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2434c4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2434c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2434c8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2434c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2434cc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2434ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2434d0: 0xc090d44  jal         func_243510
    ctx->pc = 0x2434D0u;
    SET_GPR_U32(ctx, 31, 0x2434D8u);
    ctx->pc = 0x243510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243510u, 0x2434D0u, 0x2434D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2434D8u;
label_2434d8:
    // 0x2434d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2434d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2434dc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2434dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2434e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2434e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2434e4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2434e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2434e8: 0xc090a28  jal         func_2428A0
    ctx->pc = 0x2434E8u;
    SET_GPR_U32(ctx, 31, 0x2434F0u);
    ctx->pc = 0x2428A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2428A0u, 0x2434E8u, 0x2434F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2434F0u;
label_2434f0:
    // 0x2434f0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2434f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2434f4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x2434f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x2434f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2434f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2434fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2434fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x243500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243504: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x243504u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x243508: 0x3e00008  jr          $ra
    ctx->pc = 0x243508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243510u;
}
