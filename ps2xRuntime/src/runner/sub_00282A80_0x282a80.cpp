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

// Function: sub_00282A80
// Address: 0x282a80 - 0x282ac0
void sub_00282A80_0x282a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282A80_0x282a80");
#endif

    switch (ctx->pc) {
        case 0x282a98u: goto label_282a98;
        case 0x282aa8u: goto label_282aa8;
        default: break;
    }

    ctx->pc = 0x282a80u;

    // 0x282a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x282a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x282a84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282a88: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x282a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x282a8c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x282a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282a90: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x282A90u;
    SET_GPR_U32(ctx, 31, 0x282A98u);
    ctx->pc = 0x282AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282AC0u, 0x282A90u, 0x282A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282A98u;
label_282a98:
    // 0x282a98: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x282a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x282a9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x282a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282aa0: 0xc0a0b24  jal         func_282C90
    ctx->pc = 0x282AA0u;
    SET_GPR_U32(ctx, 31, 0x282AA8u);
    ctx->pc = 0x282C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282C90u, 0x282AA0u, 0x282AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282AA8u;
label_282aa8:
    // 0x282aa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282aac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x282aacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x282ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x282AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282AB8u;
    // 0x282ab8: 0x0  nop
    ctx->pc = 0x282ab8u;
    // NOP
    // 0x282abc: 0x0  nop
    ctx->pc = 0x282abcu;
    // NOP
    ctx->pc = 0x282ac0u;
}
