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

// Function: sub_004699B0
// Address: 0x4699b0 - 0x4699f0
void sub_004699B0_0x4699b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004699B0_0x4699b0");
#endif

    switch (ctx->pc) {
        case 0x4699d4u: goto label_4699d4;
        default: break;
    }

    ctx->pc = 0x4699b0u;

    // 0x4699b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4699b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4699b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4699b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4699b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4699b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4699bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x4699bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4699c0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x4699c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x4699c4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4699c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4699c8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x4699c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4699cc: 0xc04eda8  jal         func_13B6A0
    ctx->pc = 0x4699CCu;
    SET_GPR_U32(ctx, 31, 0x4699D4u);
    ctx->pc = 0x13B6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B6A0u, 0x4699CCu, 0x4699D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4699D4u;
label_4699d4:
    // 0x4699d4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x4699d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4699d8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x4699d8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4699dc: 0x1010  mfhi        $v0
    ctx->pc = 0x4699dcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x4699e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4699e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4699e4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4699e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4699e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4699E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4699E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4699F0u;
}
