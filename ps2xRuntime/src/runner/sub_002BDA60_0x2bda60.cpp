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

// Function: sub_002BDA60
// Address: 0x2bda60 - 0x2bdaa0
void sub_002BDA60_0x2bda60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDA60_0x2bda60");
#endif

    switch (ctx->pc) {
        case 0x2bda88u: goto label_2bda88;
        default: break;
    }

    ctx->pc = 0x2bda60u;

    // 0x2bda60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bda60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bda64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bda64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bda68: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2bda68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2bda6c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2bda6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2bda70: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2bda70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bda74: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2bda74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bda78: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2bda78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bda7c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x2bda7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2bda80: 0xc0af6a8  jal         func_2BDAA0
    ctx->pc = 0x2BDA80u;
    SET_GPR_U32(ctx, 31, 0x2BDA88u);
    ctx->pc = 0x2BDAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDAA0u, 0x2BDA80u, 0x2BDA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDA88u;
label_2bda88:
    // 0x2bda88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bda88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bda8c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2bda8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bda90: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDA98u;
    // 0x2bda98: 0x0  nop
    ctx->pc = 0x2bda98u;
    // NOP
    // 0x2bda9c: 0x0  nop
    ctx->pc = 0x2bda9cu;
    // NOP
    ctx->pc = 0x2bdaa0u;
}
