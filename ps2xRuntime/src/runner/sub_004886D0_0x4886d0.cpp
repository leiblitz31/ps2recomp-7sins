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

// Function: sub_004886D0
// Address: 0x4886d0 - 0x488700
void sub_004886D0_0x4886d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004886D0_0x4886d0");
#endif

    switch (ctx->pc) {
        case 0x4886f0u: goto label_4886f0;
        default: break;
    }

    ctx->pc = 0x4886d0u;

    // 0x4886d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4886d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4886d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4886d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4886d8: 0xaf80c0c4  sw          $zero, -0x3F3C($gp)
    ctx->pc = 0x4886d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951108), GPR_U32(ctx, 0));
    // 0x4886dc: 0xaf80c0c8  sw          $zero, -0x3F38($gp)
    ctx->pc = 0x4886dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951112), GPR_U32(ctx, 0));
    // 0x4886e0: 0xaf80c0cc  sw          $zero, -0x3F34($gp)
    ctx->pc = 0x4886e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951116), GPR_U32(ctx, 0));
    // 0x4886e4: 0xaf80c0d0  sw          $zero, -0x3F30($gp)
    ctx->pc = 0x4886e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951120), GPR_U32(ctx, 0));
    // 0x4886e8: 0xc11dce0  jal         func_477380
    ctx->pc = 0x4886E8u;
    SET_GPR_U32(ctx, 31, 0x4886F0u);
    ctx->pc = 0x477380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477380u, 0x4886E8u, 0x4886F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4886F0u;
label_4886f0:
    // 0x4886f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4886f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4886f4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4886f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4886f8: 0x3e00008  jr          $ra
    ctx->pc = 0x4886F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4886F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488700u;
}
