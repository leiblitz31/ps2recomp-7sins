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

// Function: sub_0046CB70
// Address: 0x46cb70 - 0x46cbb0
void sub_0046CB70_0x46cb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046CB70_0x46cb70");
#endif

    switch (ctx->pc) {
        case 0x46cb90u: goto label_46cb90;
        default: break;
    }

    ctx->pc = 0x46cb70u;

    // 0x46cb70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46cb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46cb74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46cb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46cb78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46cb78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46cb7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46cb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46cb80: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46cb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46cb84: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46cb84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46cb88: 0xc11b2ec  jal         func_46CBB0
    ctx->pc = 0x46CB88u;
    SET_GPR_U32(ctx, 31, 0x46CB90u);
    ctx->pc = 0x46CBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CBB0u, 0x46CB88u, 0x46CB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46CB90u;
label_46cb90:
    // 0x46cb90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46cb94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46cb94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46cb98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46cb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46cb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x46CB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46CB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46CBA4u;
    // 0x46cba4: 0x0  nop
    ctx->pc = 0x46cba4u;
    // NOP
    // 0x46cba8: 0x0  nop
    ctx->pc = 0x46cba8u;
    // NOP
    // 0x46cbac: 0x0  nop
    ctx->pc = 0x46cbacu;
    // NOP
    ctx->pc = 0x46cbb0u;
}
