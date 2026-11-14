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

// Function: sub_001B9930
// Address: 0x1b9930 - 0x1b9970
void sub_001B9930_0x1b9930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9930_0x1b9930");
#endif

    switch (ctx->pc) {
        case 0x1b9948u: goto label_1b9948;
        case 0x1b9958u: goto label_1b9958;
        default: break;
    }

    ctx->pc = 0x1b9930u;

    // 0x1b9930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b9930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b9934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9938: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1b9938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1b993c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1b993cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1b9940: 0xc06e69c  jal         func_1B9A70
    ctx->pc = 0x1B9940u;
    SET_GPR_U32(ctx, 31, 0x1B9948u);
    ctx->pc = 0x1B9A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9A70u, 0x1B9940u, 0x1B9948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9948u;
label_1b9948:
    // 0x1b9948: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1b9948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b994c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b994cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9950: 0xc06e65c  jal         func_1B9970
    ctx->pc = 0x1B9950u;
    SET_GPR_U32(ctx, 31, 0x1B9958u);
    ctx->pc = 0x1B9970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9970u, 0x1B9950u, 0x1B9958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9958u;
label_1b9958:
    // 0x1b9958: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b9958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b995c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b995cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9960: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b9960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b9964: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B996Cu;
    // 0x1b996c: 0x0  nop
    ctx->pc = 0x1b996cu;
    // NOP
    ctx->pc = 0x1b9970u;
}
