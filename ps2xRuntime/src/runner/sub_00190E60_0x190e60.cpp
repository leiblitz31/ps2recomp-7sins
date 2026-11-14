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

// Function: sub_00190E60
// Address: 0x190e60 - 0x190ea0
void sub_00190E60_0x190e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190E60_0x190e60");
#endif

    switch (ctx->pc) {
        case 0x190e78u: goto label_190e78;
        case 0x190e88u: goto label_190e88;
        default: break;
    }

    ctx->pc = 0x190e60u;

    // 0x190e60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x190e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x190e64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190e68: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x190e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x190e6c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x190e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190e70: 0xc0643a8  jal         func_190EA0
    ctx->pc = 0x190E70u;
    SET_GPR_U32(ctx, 31, 0x190E78u);
    ctx->pc = 0x190EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190EA0u, 0x190E70u, 0x190E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E78u;
label_190e78:
    // 0x190e78: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x190e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x190e7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x190e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190e80: 0xc064428  jal         func_1910A0
    ctx->pc = 0x190E80u;
    SET_GPR_U32(ctx, 31, 0x190E88u);
    ctx->pc = 0x1910A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1910A0u, 0x190E80u, 0x190E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E88u;
label_190e88:
    // 0x190e88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190e8c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x190e8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x190e90: 0x3e00008  jr          $ra
    ctx->pc = 0x190E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190E98u;
    // 0x190e98: 0x0  nop
    ctx->pc = 0x190e98u;
    // NOP
    // 0x190e9c: 0x0  nop
    ctx->pc = 0x190e9cu;
    // NOP
    ctx->pc = 0x190ea0u;
}
