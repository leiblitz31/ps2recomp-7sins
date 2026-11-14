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

// Function: sub_00282C50
// Address: 0x282c50 - 0x282c90
void sub_00282C50_0x282c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282C50_0x282c50");
#endif

    switch (ctx->pc) {
        case 0x282c68u: goto label_282c68;
        case 0x282c78u: goto label_282c78;
        default: break;
    }

    ctx->pc = 0x282c50u;

    // 0x282c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x282c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x282c54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282c58: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x282c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x282c5c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x282c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282c60: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x282C60u;
    SET_GPR_U32(ctx, 31, 0x282C68u);
    ctx->pc = 0x282AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282AC0u, 0x282C60u, 0x282C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282C68u;
label_282c68:
    // 0x282c68: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x282c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x282c6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x282c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282c70: 0xc0a0b24  jal         func_282C90
    ctx->pc = 0x282C70u;
    SET_GPR_U32(ctx, 31, 0x282C78u);
    ctx->pc = 0x282C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282C90u, 0x282C70u, 0x282C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282C78u;
label_282c78:
    // 0x282c78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282c7c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x282c7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x282c80: 0x3e00008  jr          $ra
    ctx->pc = 0x282C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282C88u;
    // 0x282c88: 0x0  nop
    ctx->pc = 0x282c88u;
    // NOP
    // 0x282c8c: 0x0  nop
    ctx->pc = 0x282c8cu;
    // NOP
    ctx->pc = 0x282c90u;
}
