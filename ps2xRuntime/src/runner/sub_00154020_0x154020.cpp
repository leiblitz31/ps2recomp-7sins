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

// Function: sub_00154020
// Address: 0x154020 - 0x154060
void sub_00154020_0x154020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154020_0x154020");
#endif

    switch (ctx->pc) {
        case 0x154040u: goto label_154040;
        default: break;
    }

    ctx->pc = 0x154020u;

    // 0x154020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x154020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x154024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x154028: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x154028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15402c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x15402cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x154030: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x154030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154034: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x154034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154038: 0xc055018  jal         func_154060
    ctx->pc = 0x154038u;
    SET_GPR_U32(ctx, 31, 0x154040u);
    ctx->pc = 0x154060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154060u, 0x154038u, 0x154040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154040u;
label_154040:
    // 0x154040: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x154040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154048: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x154048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15404c: 0x3e00008  jr          $ra
    ctx->pc = 0x15404Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15404Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154054u;
    // 0x154054: 0x0  nop
    ctx->pc = 0x154054u;
    // NOP
    // 0x154058: 0x0  nop
    ctx->pc = 0x154058u;
    // NOP
    // 0x15405c: 0x0  nop
    ctx->pc = 0x15405cu;
    // NOP
    ctx->pc = 0x154060u;
}
