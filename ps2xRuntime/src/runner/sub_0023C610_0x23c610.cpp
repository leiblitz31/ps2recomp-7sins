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

// Function: sub_0023C610
// Address: 0x23c610 - 0x23c650
void sub_0023C610_0x23c610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C610_0x23c610");
#endif

    switch (ctx->pc) {
        case 0x23c628u: goto label_23c628;
        case 0x23c638u: goto label_23c638;
        default: break;
    }

    ctx->pc = 0x23c610u;

    // 0x23c610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23c610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23c614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23c614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c618: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23c618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23c61c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x23c61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x23c620: 0xc08f1d4  jal         func_23C750
    ctx->pc = 0x23C620u;
    SET_GPR_U32(ctx, 31, 0x23C628u);
    ctx->pc = 0x23C750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C750u, 0x23C620u, 0x23C628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C628u;
label_23c628:
    // 0x23c628: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23c628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c62c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23c62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c630: 0xc08f194  jal         func_23C650
    ctx->pc = 0x23C630u;
    SET_GPR_U32(ctx, 31, 0x23C638u);
    ctx->pc = 0x23C650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C650u, 0x23C630u, 0x23C638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C638u;
label_23c638:
    // 0x23c638: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x23c638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23c63c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c640: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23c640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23c644: 0x3e00008  jr          $ra
    ctx->pc = 0x23C644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C64Cu;
    // 0x23c64c: 0x0  nop
    ctx->pc = 0x23c64cu;
    // NOP
    ctx->pc = 0x23c650u;
}
