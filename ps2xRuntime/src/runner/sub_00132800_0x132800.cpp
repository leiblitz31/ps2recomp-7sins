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

// Function: sub_00132800
// Address: 0x132800 - 0x132850
void sub_00132800_0x132800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132800_0x132800");
#endif

    switch (ctx->pc) {
        case 0x132838u: goto label_132838;
        default: break;
    }

    ctx->pc = 0x132800u;

    // 0x132800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x132800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x132804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x132804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132808: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x132808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13280c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13280cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x132810: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x132810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132814: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x132814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x132818: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x132818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13281c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x13281cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x132820: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x132820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132824: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x132824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x132828: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x132828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13282c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13282cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132830: 0xc04ca14  jal         func_132850
    ctx->pc = 0x132830u;
    SET_GPR_U32(ctx, 31, 0x132838u);
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x132830u, 0x132838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132838u;
label_132838:
    // 0x132838: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x132838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13283c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13283cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132840: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x132840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x132844: 0x3e00008  jr          $ra
    ctx->pc = 0x132844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13284Cu;
    // 0x13284c: 0x0  nop
    ctx->pc = 0x13284cu;
    // NOP
    ctx->pc = 0x132850u;
}
