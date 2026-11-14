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

// Function: sub_0018C760
// Address: 0x18c760 - 0x18c7a0
void sub_0018C760_0x18c760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C760_0x18c760");
#endif

    switch (ctx->pc) {
        case 0x18c778u: goto label_18c778;
        case 0x18c788u: goto label_18c788;
        default: break;
    }

    ctx->pc = 0x18c760u;

    // 0x18c760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18c760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18c764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c768: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x18c768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x18c76c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x18c76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x18c770: 0xc063228  jal         func_18C8A0
    ctx->pc = 0x18C770u;
    SET_GPR_U32(ctx, 31, 0x18C778u);
    ctx->pc = 0x18C8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C8A0u, 0x18C770u, 0x18C778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C778u;
label_18c778:
    // 0x18c778: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x18c778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c77c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18c77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c780: 0xc0631e8  jal         func_18C7A0
    ctx->pc = 0x18C780u;
    SET_GPR_U32(ctx, 31, 0x18C788u);
    ctx->pc = 0x18C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7A0u, 0x18C780u, 0x18C788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C788u;
label_18c788:
    // 0x18c788: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x18c788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c78c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c790: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18c790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18c794: 0x3e00008  jr          $ra
    ctx->pc = 0x18C794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C79Cu;
    // 0x18c79c: 0x0  nop
    ctx->pc = 0x18c79cu;
    // NOP
    ctx->pc = 0x18c7a0u;
}
