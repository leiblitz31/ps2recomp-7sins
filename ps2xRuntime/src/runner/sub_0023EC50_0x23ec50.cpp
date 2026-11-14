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

// Function: sub_0023EC50
// Address: 0x23ec50 - 0x23ec90
void sub_0023EC50_0x23ec50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023EC50_0x23ec50");
#endif

    switch (ctx->pc) {
        case 0x23ec68u: goto label_23ec68;
        case 0x23ec78u: goto label_23ec78;
        default: break;
    }

    ctx->pc = 0x23ec50u;

    // 0x23ec50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23ec50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23ec54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ec54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23ec58: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23ec58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23ec5c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23ec5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ec60: 0xc08f464  jal         func_23D190
    ctx->pc = 0x23EC60u;
    SET_GPR_U32(ctx, 31, 0x23EC68u);
    ctx->pc = 0x23D190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D190u, 0x23EC60u, 0x23EC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC68u;
label_23ec68:
    // 0x23ec68: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x23ec68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x23ec6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23ec6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ec70: 0xc08f45c  jal         func_23D170
    ctx->pc = 0x23EC70u;
    SET_GPR_U32(ctx, 31, 0x23EC78u);
    ctx->pc = 0x23D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D170u, 0x23EC70u, 0x23EC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC78u;
label_23ec78:
    // 0x23ec78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23ec78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ec7c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23ec7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23ec80: 0x3e00008  jr          $ra
    ctx->pc = 0x23EC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23EC88u;
    // 0x23ec88: 0x0  nop
    ctx->pc = 0x23ec88u;
    // NOP
    // 0x23ec8c: 0x0  nop
    ctx->pc = 0x23ec8cu;
    // NOP
    ctx->pc = 0x23ec90u;
}
