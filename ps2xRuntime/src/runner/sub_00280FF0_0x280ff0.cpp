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

// Function: sub_00280FF0
// Address: 0x280ff0 - 0x281030
void sub_00280FF0_0x280ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280FF0_0x280ff0");
#endif

    switch (ctx->pc) {
        case 0x281008u: goto label_281008;
        case 0x281018u: goto label_281018;
        default: break;
    }

    ctx->pc = 0x280ff0u;

    // 0x280ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x280ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x280ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280ff8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x280ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x280ffc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x280ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281000: 0xc0a0414  jal         func_281050
    ctx->pc = 0x281000u;
    SET_GPR_U32(ctx, 31, 0x281008u);
    ctx->pc = 0x281050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281050u, 0x281000u, 0x281008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281008u;
label_281008:
    // 0x281008: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x281008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x28100c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28100cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281010: 0xc0a040c  jal         func_281030
    ctx->pc = 0x281010u;
    SET_GPR_U32(ctx, 31, 0x281018u);
    ctx->pc = 0x281030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281030u, 0x281010u, 0x281018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281018u;
label_281018:
    // 0x281018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28101c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28101cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x281020: 0x3e00008  jr          $ra
    ctx->pc = 0x281020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281028u;
    // 0x281028: 0x0  nop
    ctx->pc = 0x281028u;
    // NOP
    // 0x28102c: 0x0  nop
    ctx->pc = 0x28102cu;
    // NOP
    ctx->pc = 0x281030u;
}
