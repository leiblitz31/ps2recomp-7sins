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

// Function: sub_0022C730
// Address: 0x22c730 - 0x22c770
void sub_0022C730_0x22c730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C730_0x22c730");
#endif

    switch (ctx->pc) {
        case 0x22c748u: goto label_22c748;
        case 0x22c758u: goto label_22c758;
        default: break;
    }

    ctx->pc = 0x22c730u;

    // 0x22c730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22c730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22c734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c738: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22c738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22c73c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x22c73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x22c740: 0xc08b21c  jal         func_22C870
    ctx->pc = 0x22C740u;
    SET_GPR_U32(ctx, 31, 0x22C748u);
    ctx->pc = 0x22C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C870u, 0x22C740u, 0x22C748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C748u;
label_22c748:
    // 0x22c748: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x22c748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c74c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22c74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c750: 0xc08b1dc  jal         func_22C770
    ctx->pc = 0x22C750u;
    SET_GPR_U32(ctx, 31, 0x22C758u);
    ctx->pc = 0x22C770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C770u, 0x22C750u, 0x22C758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C758u;
label_22c758:
    // 0x22c758: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22c758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c75c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c760: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22c760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22c764: 0x3e00008  jr          $ra
    ctx->pc = 0x22C764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C76Cu;
    // 0x22c76c: 0x0  nop
    ctx->pc = 0x22c76cu;
    // NOP
    ctx->pc = 0x22c770u;
}
