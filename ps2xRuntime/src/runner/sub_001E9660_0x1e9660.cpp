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

// Function: sub_001E9660
// Address: 0x1e9660 - 0x1e96a0
void sub_001E9660_0x1e9660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9660_0x1e9660");
#endif

    switch (ctx->pc) {
        case 0x1e9690u: goto label_1e9690;
        default: break;
    }

    ctx->pc = 0x1e9660u;

    // 0x1e9660: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e9660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e9664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e9668: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e9668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e966c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e966cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e9670: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1e9670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1e9674: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e9674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9678: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e9678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e967c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1e967cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e9680: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1e9680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1e9684: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e9684u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9688: 0xc07a5a8  jal         func_1E96A0
    ctx->pc = 0x1E9688u;
    SET_GPR_U32(ctx, 31, 0x1E9690u);
    ctx->pc = 0x1E96A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E96A0u, 0x1E9688u, 0x1E9690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9690u;
label_1e9690:
    // 0x1e9690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9694: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1e9694u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e9698: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E96A0u;
}
