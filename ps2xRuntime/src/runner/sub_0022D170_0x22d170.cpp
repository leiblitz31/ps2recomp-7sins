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

// Function: sub_0022D170
// Address: 0x22d170 - 0x22d1e0
void sub_0022D170_0x22d170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D170_0x22d170");
#endif

    switch (ctx->pc) {
        case 0x22d1a8u: goto label_22d1a8;
        case 0x22d1c0u: goto label_22d1c0;
        default: break;
    }

    ctx->pc = 0x22d170u;

    // 0x22d170: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22d170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22d174: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22d174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22d178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22d178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22d17c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x22d17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x22d180: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x22d180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x22d184: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x22d184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x22d188: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x22d188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d18c: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x22d18cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x22d190: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x22d190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22d194: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x22d194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22d198: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x22d198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d19c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x22d19cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x22d1a0: 0xc08b478  jal         func_22D1E0
    ctx->pc = 0x22D1A0u;
    SET_GPR_U32(ctx, 31, 0x22D1A8u);
    ctx->pc = 0x22D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D1E0u, 0x22D1A0u, 0x22D1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D1A8u;
label_22d1a8:
    // 0x22d1a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22d1a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d1ac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x22d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d1b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22d1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d1b4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x22d1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22d1b8: 0xc08af7c  jal         func_22BDF0
    ctx->pc = 0x22D1B8u;
    SET_GPR_U32(ctx, 31, 0x22D1C0u);
    ctx->pc = 0x22BDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BDF0u, 0x22D1B8u, 0x22D1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D1C0u;
label_22d1c0:
    // 0x22d1c0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x22d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d1c4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x22d1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x22d1c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x22d1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d1cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22d1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d1d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22d1d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d1d4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x22d1d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22d1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x22D1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D1E0u;
}
