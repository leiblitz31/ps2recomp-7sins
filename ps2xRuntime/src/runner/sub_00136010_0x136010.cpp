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

// Function: sub_00136010
// Address: 0x136010 - 0x136050
void sub_00136010_0x136010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136010_0x136010");
#endif

    switch (ctx->pc) {
        case 0x136040u: goto label_136040;
        default: break;
    }

    ctx->pc = 0x136010u;

    // 0x136010: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x136010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x136014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x136014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x136018: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x136018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x13601c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x13601cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x136020: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x136020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x136024: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x136024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136028: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x136028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13602c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x13602cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x136030: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x136030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x136034: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x136034u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136038: 0xc04d814  jal         func_136050
    ctx->pc = 0x136038u;
    SET_GPR_U32(ctx, 31, 0x136040u);
    ctx->pc = 0x136050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136050u, 0x136038u, 0x136040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136040u;
label_136040:
    // 0x136040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x136040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136044: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x136044u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x136048: 0x3e00008  jr          $ra
    ctx->pc = 0x136048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136050u;
}
