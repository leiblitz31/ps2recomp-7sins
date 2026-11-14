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

// Function: sub_001EA060
// Address: 0x1ea060 - 0x1ea0a0
void sub_001EA060_0x1ea060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA060_0x1ea060");
#endif

    switch (ctx->pc) {
        case 0x1ea078u: goto label_1ea078;
        case 0x1ea088u: goto label_1ea088;
        default: break;
    }

    ctx->pc = 0x1ea060u;

    // 0x1ea060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ea060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ea064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ea064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ea068: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1ea068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1ea06c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1ea06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1ea070: 0xc07a868  jal         func_1EA1A0
    ctx->pc = 0x1EA070u;
    SET_GPR_U32(ctx, 31, 0x1EA078u);
    ctx->pc = 0x1EA1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA1A0u, 0x1EA070u, 0x1EA078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA078u;
label_1ea078:
    // 0x1ea078: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ea078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea07c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ea07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea080: 0xc07a828  jal         func_1EA0A0
    ctx->pc = 0x1EA080u;
    SET_GPR_U32(ctx, 31, 0x1EA088u);
    ctx->pc = 0x1EA0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA0A0u, 0x1EA080u, 0x1EA088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA088u;
label_1ea088:
    // 0x1ea088: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ea088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea08c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ea08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea090: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ea090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ea094: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA09Cu;
    // 0x1ea09c: 0x0  nop
    ctx->pc = 0x1ea09cu;
    // NOP
    ctx->pc = 0x1ea0a0u;
}
