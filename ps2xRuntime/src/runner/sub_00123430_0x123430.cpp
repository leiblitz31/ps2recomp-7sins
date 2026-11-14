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

// Function: sub_00123430
// Address: 0x123430 - 0x123470
void sub_00123430_0x123430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123430_0x123430");
#endif

    switch (ctx->pc) {
        case 0x123458u: goto label_123458;
        default: break;
    }

    ctx->pc = 0x123430u;

    // 0x123430: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x123430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x123434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x123434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x123438: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x123438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x12343c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x12343cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x123440: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x123440u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x123444: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x123444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123448: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x123448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12344c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x12344cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x123450: 0xc048d1c  jal         func_123470
    ctx->pc = 0x123450u;
    SET_GPR_U32(ctx, 31, 0x123458u);
    ctx->pc = 0x123470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123470u, 0x123450u, 0x123458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123458u;
label_123458:
    // 0x123458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x123458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12345c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x12345cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x123460: 0x3e00008  jr          $ra
    ctx->pc = 0x123460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123468u;
    // 0x123468: 0x0  nop
    ctx->pc = 0x123468u;
    // NOP
    // 0x12346c: 0x0  nop
    ctx->pc = 0x12346cu;
    // NOP
    ctx->pc = 0x123470u;
}
