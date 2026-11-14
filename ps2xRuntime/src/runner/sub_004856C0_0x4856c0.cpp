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

// Function: sub_004856C0
// Address: 0x4856c0 - 0x485700
void sub_004856C0_0x4856c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004856C0_0x4856c0");
#endif

    switch (ctx->pc) {
        case 0x4856ecu: goto label_4856ec;
        default: break;
    }

    ctx->pc = 0x4856c0u;

    // 0x4856c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4856c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4856c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4856c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4856c8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x4856c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x4856cc: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x4856ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x4856d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4856d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4856d4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4856d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4856d8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x4856d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x4856dc: 0x24a55af0  addiu       $a1, $a1, 0x5AF0
    ctx->pc = 0x4856dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23280));
    // 0x4856e0: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x4856e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x4856e4: 0xc1066c2  jal         func_419B08
    ctx->pc = 0x4856E4u;
    SET_GPR_U32(ctx, 31, 0x4856ECu);
    ctx->pc = 0x419B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B08u, 0x4856E4u, 0x4856ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4856ECu;
label_4856ec:
    // 0x4856ec: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x4856ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x4856f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4856f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4856f4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4856f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4856f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4856F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4856F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x485700u;
}
