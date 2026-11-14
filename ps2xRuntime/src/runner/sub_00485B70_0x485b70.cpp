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

// Function: sub_00485B70
// Address: 0x485b70 - 0x485bb0
void sub_00485B70_0x485b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485B70_0x485b70");
#endif

    switch (ctx->pc) {
        case 0x485b90u: goto label_485b90;
        default: break;
    }

    ctx->pc = 0x485b70u;

    // 0x485b70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x485b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x485b74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x485b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x485b78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x485b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x485b7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x485b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x485b80: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x485b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485b84: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x485b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x485b88: 0xc0de5ec  jal         func_3797B0
    ctx->pc = 0x485B88u;
    SET_GPR_U32(ctx, 31, 0x485B90u);
    ctx->pc = 0x3797B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3797B0u, 0x485B88u, 0x485B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485B90u;
label_485b90:
    // 0x485b90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485b94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x485b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x485b98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x485b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x485b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x485B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x485BA4u;
    // 0x485ba4: 0x0  nop
    ctx->pc = 0x485ba4u;
    // NOP
    // 0x485ba8: 0x0  nop
    ctx->pc = 0x485ba8u;
    // NOP
    // 0x485bac: 0x0  nop
    ctx->pc = 0x485bacu;
    // NOP
    ctx->pc = 0x485bb0u;
}
