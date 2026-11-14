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

// Function: sub_00138430
// Address: 0x138430 - 0x138480
void sub_00138430_0x138430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138430_0x138430");
#endif

    switch (ctx->pc) {
        case 0x138468u: goto label_138468;
        default: break;
    }

    ctx->pc = 0x138430u;

    // 0x138430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x138430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x138434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138438: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x138438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13843c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13843cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x138440: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x138440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138444: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x138444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x138448: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x138448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13844c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x13844cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x138450: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x138450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138454: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x138454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x138458: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x138458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13845c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13845cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138460: 0xc04e120  jal         func_138480
    ctx->pc = 0x138460u;
    SET_GPR_U32(ctx, 31, 0x138468u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x138460u, 0x138468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138468u;
label_138468:
    // 0x138468: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x138468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13846c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13846cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138470: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x138470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x138474: 0x3e00008  jr          $ra
    ctx->pc = 0x138474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13847Cu;
    // 0x13847c: 0x0  nop
    ctx->pc = 0x13847cu;
    // NOP
    ctx->pc = 0x138480u;
}
