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

// Function: sub_001E31E0
// Address: 0x1e31e0 - 0x1e3250
void sub_001E31E0_0x1e31e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E31E0_0x1e31e0");
#endif

    switch (ctx->pc) {
        case 0x1e3218u: goto label_1e3218;
        case 0x1e3230u: goto label_1e3230;
        default: break;
    }

    ctx->pc = 0x1e31e0u;

    // 0x1e31e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e31e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e31e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e31e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e31e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e31e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e31ec: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e31ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e31f0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e31f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x1e31f4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1e31f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1e31f8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e31f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e31fc: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x1e31fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e3200: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e3200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e3204: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1e3204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e3208: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1e3208u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e320c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x1e320cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x1e3210: 0xc078c94  jal         func_1E3250
    ctx->pc = 0x1E3210u;
    SET_GPR_U32(ctx, 31, 0x1E3218u);
    ctx->pc = 0x1E3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3250u, 0x1E3210u, 0x1E3218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3218u;
label_1e3218:
    // 0x1e3218: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e3218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e321c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e321cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3224: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1e3224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e3228: 0xc075800  jal         func_1D6000
    ctx->pc = 0x1E3228u;
    SET_GPR_U32(ctx, 31, 0x1E3230u);
    ctx->pc = 0x1D6000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6000u, 0x1E3228u, 0x1E3230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3230u;
label_1e3230:
    // 0x1e3230: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e3230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3234: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1e3234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1e3238: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e3238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e323c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e323cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3240: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3244: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1e3244u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e3248: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3250u;
}
