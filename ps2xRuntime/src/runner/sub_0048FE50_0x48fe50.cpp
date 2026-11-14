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

// Function: sub_0048FE50
// Address: 0x48fe50 - 0x48fe90
void sub_0048FE50_0x48fe50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048FE50_0x48fe50");
#endif

    switch (ctx->pc) {
        case 0x48fe74u: goto label_48fe74;
        default: break;
    }

    ctx->pc = 0x48fe50u;

    // 0x48fe50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48fe50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x48fe54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48fe54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48fe58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48fe58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48fe5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x48fe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x48fe60: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x48fe60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x48fe64: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48fe64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48fe68: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x48fe68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48fe6c: 0xc04eda8  jal         func_13B6A0
    ctx->pc = 0x48FE6Cu;
    SET_GPR_U32(ctx, 31, 0x48FE74u);
    ctx->pc = 0x13B6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B6A0u, 0x48FE6Cu, 0x48FE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FE74u;
label_48fe74:
    // 0x48fe74: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x48fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48fe78: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x48fe78u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x48fe7c: 0x1010  mfhi        $v0
    ctx->pc = 0x48fe7cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x48fe80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48fe80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48fe84: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x48fe84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48fe88: 0x3e00008  jr          $ra
    ctx->pc = 0x48FE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48FE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48FE90u;
}
