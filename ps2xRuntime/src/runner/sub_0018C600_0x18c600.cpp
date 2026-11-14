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

// Function: sub_0018C600
// Address: 0x18c600 - 0x18c640
void sub_0018C600_0x18c600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C600_0x18c600");
#endif

    switch (ctx->pc) {
        case 0x18c618u: goto label_18c618;
        case 0x18c628u: goto label_18c628;
        default: break;
    }

    ctx->pc = 0x18c600u;

    // 0x18c600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18c600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18c604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c608: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x18c608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x18c60c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x18c60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x18c610: 0xc0631d0  jal         func_18C740
    ctx->pc = 0x18C610u;
    SET_GPR_U32(ctx, 31, 0x18C618u);
    ctx->pc = 0x18C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C740u, 0x18C610u, 0x18C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C618u;
label_18c618:
    // 0x18c618: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x18c618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c61c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18c61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c620: 0xc063190  jal         func_18C640
    ctx->pc = 0x18C620u;
    SET_GPR_U32(ctx, 31, 0x18C628u);
    ctx->pc = 0x18C640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C640u, 0x18C620u, 0x18C628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C628u;
label_18c628:
    // 0x18c628: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x18c628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c62c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c630: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18c630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18c634: 0x3e00008  jr          $ra
    ctx->pc = 0x18C634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C63Cu;
    // 0x18c63c: 0x0  nop
    ctx->pc = 0x18c63cu;
    // NOP
    ctx->pc = 0x18c640u;
}
