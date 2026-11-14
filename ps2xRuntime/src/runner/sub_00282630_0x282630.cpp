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

// Function: sub_00282630
// Address: 0x282630 - 0x282680
void sub_00282630_0x282630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282630_0x282630");
#endif

    switch (ctx->pc) {
        case 0x282650u: goto label_282650;
        case 0x282664u: goto label_282664;
        default: break;
    }

    ctx->pc = 0x282630u;

    // 0x282630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x282630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x282634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282638: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x282638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28263c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28263cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x282640: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x282640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282644: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x282644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x282648: 0xc04e50c  jal         func_139430
    ctx->pc = 0x282648u;
    SET_GPR_U32(ctx, 31, 0x282650u);
    ctx->pc = 0x139430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139430u, 0x282648u, 0x282650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282650u;
label_282650:
    // 0x282650: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x282650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282654: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x282654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282658: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x282658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28265c: 0xc0a09a0  jal         func_282680
    ctx->pc = 0x28265Cu;
    SET_GPR_U32(ctx, 31, 0x282664u);
    ctx->pc = 0x282680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282680u, 0x28265Cu, 0x282664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282664u;
label_282664:
    // 0x282664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282668: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x282668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28266c: 0x3e00008  jr          $ra
    ctx->pc = 0x28266Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28266Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282674u;
    // 0x282674: 0x0  nop
    ctx->pc = 0x282674u;
    // NOP
    // 0x282678: 0x0  nop
    ctx->pc = 0x282678u;
    // NOP
    // 0x28267c: 0x0  nop
    ctx->pc = 0x28267cu;
    // NOP
    ctx->pc = 0x282680u;
}
