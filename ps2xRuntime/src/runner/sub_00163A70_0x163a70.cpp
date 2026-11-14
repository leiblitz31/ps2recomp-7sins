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

// Function: sub_00163A70
// Address: 0x163a70 - 0x163aa0
void sub_00163A70_0x163a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163A70_0x163a70");
#endif

    switch (ctx->pc) {
        case 0x163a88u: goto label_163a88;
        default: break;
    }

    ctx->pc = 0x163a70u;

    // 0x163a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x163a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x163a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x163a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x163a78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x163a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x163a7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x163a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163a80: 0xc055a84  jal         func_156A10
    ctx->pc = 0x163A80u;
    SET_GPR_U32(ctx, 31, 0x163A88u);
    ctx->pc = 0x156A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156A10u, 0x163A80u, 0x163A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163A88u;
label_163a88:
    // 0x163a88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x163a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163a8c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x163a8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x163a90: 0x3e00008  jr          $ra
    ctx->pc = 0x163A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163A98u;
    // 0x163a98: 0x0  nop
    ctx->pc = 0x163a98u;
    // NOP
    // 0x163a9c: 0x0  nop
    ctx->pc = 0x163a9cu;
    // NOP
    ctx->pc = 0x163aa0u;
}
