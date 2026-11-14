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

// Function: sub_00195300
// Address: 0x195300 - 0x195350
void sub_00195300_0x195300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195300_0x195300");
#endif

    switch (ctx->pc) {
        case 0x195338u: goto label_195338;
        default: break;
    }

    ctx->pc = 0x195300u;

    // 0x195300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195308: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x195308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19530c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19530cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x195310: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x195310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195314: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x195314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x195318: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x195318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19531c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19531cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x195320: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x195320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195324: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x195324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x195328: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x195328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19532c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19532cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195330: 0xc0654d4  jal         func_195350
    ctx->pc = 0x195330u;
    SET_GPR_U32(ctx, 31, 0x195338u);
    ctx->pc = 0x195350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195350u, 0x195330u, 0x195338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195338u;
label_195338:
    // 0x195338: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x195338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19533c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19533cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195340: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x195340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x195344: 0x3e00008  jr          $ra
    ctx->pc = 0x195344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19534Cu;
    // 0x19534c: 0x0  nop
    ctx->pc = 0x19534cu;
    // NOP
    ctx->pc = 0x195350u;
}
