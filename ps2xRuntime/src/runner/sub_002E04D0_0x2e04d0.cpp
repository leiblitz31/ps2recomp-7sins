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

// Function: sub_002E04D0
// Address: 0x2e04d0 - 0x2e0510
void sub_002E04D0_0x2e04d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E04D0_0x2e04d0");
#endif

    switch (ctx->pc) {
        case 0x2e04f4u: goto label_2e04f4;
        default: break;
    }

    ctx->pc = 0x2e04d0u;

    // 0x2e04d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e04d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e04d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e04d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e04d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e04d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e04dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2e04dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2e04e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e04e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e04e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e04e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e04e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2e04e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e04ec: 0xc0b8144  jal         func_2E0510
    ctx->pc = 0x2E04ECu;
    SET_GPR_U32(ctx, 31, 0x2E04F4u);
    ctx->pc = 0x2E0510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0510u, 0x2E04ECu, 0x2E04F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E04F4u;
label_2e04f4:
    // 0x2e04f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e04f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e04f8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e04f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e04fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E04FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E04FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0504u;
    // 0x2e0504: 0x0  nop
    ctx->pc = 0x2e0504u;
    // NOP
    // 0x2e0508: 0x0  nop
    ctx->pc = 0x2e0508u;
    // NOP
    // 0x2e050c: 0x0  nop
    ctx->pc = 0x2e050cu;
    // NOP
    ctx->pc = 0x2e0510u;
}
