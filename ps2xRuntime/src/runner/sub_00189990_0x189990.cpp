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

// Function: sub_00189990
// Address: 0x189990 - 0x189a00
void sub_00189990_0x189990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189990_0x189990");
#endif

    switch (ctx->pc) {
        case 0x1899c8u: goto label_1899c8;
        case 0x1899e0u: goto label_1899e0;
        default: break;
    }

    ctx->pc = 0x189990u;

    // 0x189990: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x189990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x189994: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x189994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x189998: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18999c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x18999cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1899a0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1899a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1899a4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1899a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1899a8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1899a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1899ac: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x1899acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x1899b0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1899b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1899b4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1899b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1899b8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1899b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1899bc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1899bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1899c0: 0xc062680  jal         func_189A00
    ctx->pc = 0x1899C0u;
    SET_GPR_U32(ctx, 31, 0x1899C8u);
    ctx->pc = 0x189A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189A00u, 0x1899C0u, 0x1899C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1899C8u;
label_1899c8:
    // 0x1899c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1899c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1899cc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1899ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1899d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1899d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1899d4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1899d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1899d8: 0xc06247c  jal         func_1891F0
    ctx->pc = 0x1899D8u;
    SET_GPR_U32(ctx, 31, 0x1899E0u);
    ctx->pc = 0x1891F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1891F0u, 0x1899D8u, 0x1899E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1899E0u;
label_1899e0:
    // 0x1899e0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1899e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1899e4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1899e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1899e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1899e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1899ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1899ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1899f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1899f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1899f4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1899f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1899f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1899F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1899F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189A00u;
}
