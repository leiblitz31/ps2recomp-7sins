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

// Function: sub_002663F0
// Address: 0x2663f0 - 0x266460
void sub_002663F0_0x2663f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002663F0_0x2663f0");
#endif

    switch (ctx->pc) {
        case 0x266428u: goto label_266428;
        case 0x266440u: goto label_266440;
        default: break;
    }

    ctx->pc = 0x2663f0u;

    // 0x2663f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2663f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2663f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2663f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2663f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2663f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2663fc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2663fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x266400: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x266400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x266404: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x266404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x266408: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x266408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26640c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x26640cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x266410: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x266410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x266414: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x266414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x266418: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x266418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26641c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x26641cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x266420: 0xc099918  jal         func_266460
    ctx->pc = 0x266420u;
    SET_GPR_U32(ctx, 31, 0x266428u);
    ctx->pc = 0x266460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266460u, 0x266420u, 0x266428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266428u;
label_266428:
    // 0x266428: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x266428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26642c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26642cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x266430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266434: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x266434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x266438: 0xc048b90  jal         func_122E40
    ctx->pc = 0x266438u;
    SET_GPR_U32(ctx, 31, 0x266440u);
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x266438u, 0x266440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266440u;
label_266440:
    // 0x266440: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x266440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x266444: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x266444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x266448: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x266448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26644c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26644cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266450: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x266450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266454: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x266454u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x266458: 0x3e00008  jr          $ra
    ctx->pc = 0x266458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266460u;
}
