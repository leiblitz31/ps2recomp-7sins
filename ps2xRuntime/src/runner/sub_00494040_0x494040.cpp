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

// Function: sub_00494040
// Address: 0x494040 - 0x494070
void sub_00494040_0x494040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494040_0x494040");
#endif

    switch (ctx->pc) {
        case 0x494060u: goto label_494060;
        default: break;
    }

    ctx->pc = 0x494040u;

    // 0x494040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x494040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x494044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x494044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x494048: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x494048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x49404c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x49404cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x494050: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x494050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x494054: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x494054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x494058: 0xc12501c  jal         func_494070
    ctx->pc = 0x494058u;
    SET_GPR_U32(ctx, 31, 0x494060u);
    ctx->pc = 0x494070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x494070u, 0x494058u, 0x494060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494060u;
label_494060:
    // 0x494060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x494060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x494064: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x494064u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x494068: 0x3e00008  jr          $ra
    ctx->pc = 0x494068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x494070u;
}
