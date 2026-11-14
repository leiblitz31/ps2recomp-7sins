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

// Function: sub_0048FE00
// Address: 0x48fe00 - 0x48fe50
void sub_0048FE00_0x48fe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048FE00_0x48fe00");
#endif

    switch (ctx->pc) {
        case 0x48fe20u: goto label_48fe20;
        case 0x48fe34u: goto label_48fe34;
        default: break;
    }

    ctx->pc = 0x48fe00u;

    // 0x48fe00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48fe00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48fe04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48fe04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48fe08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48fe08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48fe0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x48fe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x48fe10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48fe14: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x48fe14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x48fe18: 0xc04e50c  jal         func_139430
    ctx->pc = 0x48FE18u;
    SET_GPR_U32(ctx, 31, 0x48FE20u);
    ctx->pc = 0x139430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139430u, 0x48FE18u, 0x48FE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FE20u;
label_48fe20:
    // 0x48fe20: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48fe20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48fe24: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x48fe24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48fe28: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x48fe28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48fe2c: 0xc123f94  jal         func_48FE50
    ctx->pc = 0x48FE2Cu;
    SET_GPR_U32(ctx, 31, 0x48FE34u);
    ctx->pc = 0x48FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48FE50u, 0x48FE2Cu, 0x48FE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48FE34u;
label_48fe34:
    // 0x48fe34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48fe34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48fe38: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x48fe38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48fe3c: 0x3e00008  jr          $ra
    ctx->pc = 0x48FE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48FE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48FE44u;
    // 0x48fe44: 0x0  nop
    ctx->pc = 0x48fe44u;
    // NOP
    // 0x48fe48: 0x0  nop
    ctx->pc = 0x48fe48u;
    // NOP
    // 0x48fe4c: 0x0  nop
    ctx->pc = 0x48fe4cu;
    // NOP
    ctx->pc = 0x48fe50u;
}
