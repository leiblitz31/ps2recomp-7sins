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

// Function: sub_0046C450
// Address: 0x46c450 - 0x46c490
void sub_0046C450_0x46c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C450_0x46c450");
#endif

    switch (ctx->pc) {
        case 0x46c470u: goto label_46c470;
        default: break;
    }

    ctx->pc = 0x46c450u;

    // 0x46c450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46c450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46c454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46c454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46c458: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46c458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46c45c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46c460: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46c460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c464: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46c464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c468: 0xc11b124  jal         func_46C490
    ctx->pc = 0x46C468u;
    SET_GPR_U32(ctx, 31, 0x46C470u);
    ctx->pc = 0x46C490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C490u, 0x46C468u, 0x46C470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C470u;
label_46c470:
    // 0x46c470: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46c470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46c474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46c478: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46c478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46c47c: 0x3e00008  jr          $ra
    ctx->pc = 0x46C47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C484u;
    // 0x46c484: 0x0  nop
    ctx->pc = 0x46c484u;
    // NOP
    // 0x46c488: 0x0  nop
    ctx->pc = 0x46c488u;
    // NOP
    // 0x46c48c: 0x0  nop
    ctx->pc = 0x46c48cu;
    // NOP
    ctx->pc = 0x46c490u;
}
