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

// Function: sub_0048E210
// Address: 0x48e210 - 0x48e250
void sub_0048E210_0x48e210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E210_0x48e210");
#endif

    switch (ctx->pc) {
        case 0x48e230u: goto label_48e230;
        default: break;
    }

    ctx->pc = 0x48e210u;

    // 0x48e210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48e210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48e214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48e214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48e218: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48e218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48e21c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x48e21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x48e220: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48e220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48e224: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x48e224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48e228: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x48E228u;
    SET_GPR_U32(ctx, 31, 0x48E230u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x48E228u, 0x48E230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E230u;
label_48e230:
    // 0x48e230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48e230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48e234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48e234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e238: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48e238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48e23c: 0x3e00008  jr          $ra
    ctx->pc = 0x48E23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E244u;
    // 0x48e244: 0x0  nop
    ctx->pc = 0x48e244u;
    // NOP
    // 0x48e248: 0x0  nop
    ctx->pc = 0x48e248u;
    // NOP
    // 0x48e24c: 0x0  nop
    ctx->pc = 0x48e24cu;
    // NOP
    ctx->pc = 0x48e250u;
}
