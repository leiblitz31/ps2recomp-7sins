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

// Function: sub_0046F620
// Address: 0x46f620 - 0x46f660
void sub_0046F620_0x46f620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046F620_0x46f620");
#endif

    switch (ctx->pc) {
        case 0x46f644u: goto label_46f644;
        default: break;
    }

    ctx->pc = 0x46f620u;

    // 0x46f620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46f620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46f624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46f624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46f628: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46f628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46f62c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46f62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46f630: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46f630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46f634: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x46f634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x46f638: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46f638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46f63c: 0xc11a464  jal         func_469190
    ctx->pc = 0x46F63Cu;
    SET_GPR_U32(ctx, 31, 0x46F644u);
    ctx->pc = 0x469190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469190u, 0x46F63Cu, 0x46F644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F644u;
label_46f644:
    // 0x46f644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46f644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46f648: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46f648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46f64c: 0x3e00008  jr          $ra
    ctx->pc = 0x46F64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46F654u;
    // 0x46f654: 0x0  nop
    ctx->pc = 0x46f654u;
    // NOP
    // 0x46f658: 0x0  nop
    ctx->pc = 0x46f658u;
    // NOP
    // 0x46f65c: 0x0  nop
    ctx->pc = 0x46f65cu;
    // NOP
    ctx->pc = 0x46f660u;
}
