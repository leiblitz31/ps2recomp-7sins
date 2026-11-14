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

// Function: sub_0048BCB0
// Address: 0x48bcb0 - 0x48bcf0
void sub_0048BCB0_0x48bcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048BCB0_0x48bcb0");
#endif

    switch (ctx->pc) {
        case 0x48bcd4u: goto label_48bcd4;
        default: break;
    }

    ctx->pc = 0x48bcb0u;

    // 0x48bcb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48bcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48bcb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48bcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48bcb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48bcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48bcbc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x48bcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x48bcc0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48bcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48bcc4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x48bcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48bcc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x48bcc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48bccc: 0xc122f3c  jal         func_48BCF0
    ctx->pc = 0x48BCCCu;
    SET_GPR_U32(ctx, 31, 0x48BCD4u);
    ctx->pc = 0x48BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BCF0u, 0x48BCCCu, 0x48BCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48BCD4u;
label_48bcd4:
    // 0x48bcd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48bcd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48bcd8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48bcd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48bcdc: 0x3e00008  jr          $ra
    ctx->pc = 0x48BCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48BCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48BCE4u;
    // 0x48bce4: 0x0  nop
    ctx->pc = 0x48bce4u;
    // NOP
    // 0x48bce8: 0x0  nop
    ctx->pc = 0x48bce8u;
    // NOP
    // 0x48bcec: 0x0  nop
    ctx->pc = 0x48bcecu;
    // NOP
    ctx->pc = 0x48bcf0u;
}
