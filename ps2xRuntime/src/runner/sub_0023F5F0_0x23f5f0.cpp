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

// Function: sub_0023F5F0
// Address: 0x23f5f0 - 0x23f630
void sub_0023F5F0_0x23f5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F5F0_0x23f5f0");
#endif

    switch (ctx->pc) {
        case 0x23f608u: goto label_23f608;
        case 0x23f618u: goto label_23f618;
        default: break;
    }

    ctx->pc = 0x23f5f0u;

    // 0x23f5f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23f5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23f5f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f5f8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23f5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23f5fc: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x23f5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x23f600: 0xc08fdcc  jal         func_23F730
    ctx->pc = 0x23F600u;
    SET_GPR_U32(ctx, 31, 0x23F608u);
    ctx->pc = 0x23F730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F730u, 0x23F600u, 0x23F608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F608u;
label_23f608:
    // 0x23f608: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23f608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f60c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23f60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f610: 0xc08fd8c  jal         func_23F630
    ctx->pc = 0x23F610u;
    SET_GPR_U32(ctx, 31, 0x23F618u);
    ctx->pc = 0x23F630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F630u, 0x23F610u, 0x23F618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F618u;
label_23f618:
    // 0x23f618: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23f618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f61c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f620: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23f620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23f624: 0x3e00008  jr          $ra
    ctx->pc = 0x23F624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F62Cu;
    // 0x23f62c: 0x0  nop
    ctx->pc = 0x23f62cu;
    // NOP
    ctx->pc = 0x23f630u;
}
