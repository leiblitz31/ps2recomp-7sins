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

// Function: sub_0013CD90
// Address: 0x13cd90 - 0x13cdd0
void sub_0013CD90_0x13cd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CD90_0x13cd90");
#endif

    switch (ctx->pc) {
        case 0x13cdb4u: goto label_13cdb4;
        default: break;
    }

    ctx->pc = 0x13cd90u;

    // 0x13cd90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13cd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13cd94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13cd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13cd98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13cd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13cd9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13cd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x13cda0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x13cda0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x13cda4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13cda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13cda8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x13cda8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13cdac: 0xc04eda8  jal         func_13B6A0
    ctx->pc = 0x13CDACu;
    SET_GPR_U32(ctx, 31, 0x13CDB4u);
    ctx->pc = 0x13B6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B6A0u, 0x13CDACu, 0x13CDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CDB4u;
label_13cdb4:
    // 0x13cdb4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x13cdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13cdb8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x13cdb8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x13cdbc: 0x1010  mfhi        $v0
    ctx->pc = 0x13cdbcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x13cdc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13cdc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cdc4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x13cdc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13cdc8: 0x3e00008  jr          $ra
    ctx->pc = 0x13CDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CDD0u;
}
