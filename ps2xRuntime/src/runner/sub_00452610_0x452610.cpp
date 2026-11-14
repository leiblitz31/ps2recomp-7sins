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

// Function: sub_00452610
// Address: 0x452610 - 0x452660
void sub_00452610_0x452610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452610_0x452610");
#endif

    switch (ctx->pc) {
        case 0x452648u: goto label_452648;
        default: break;
    }

    ctx->pc = 0x452610u;

    // 0x452610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x452610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x452614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x452614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x452618: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x452618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45261c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x45261cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x452620: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x452620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452624: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x452624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x452628: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x452628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45262c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x45262cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x452630: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x452630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452634: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x452634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x452638: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x452638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45263c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45263cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452640: 0xc114998  jal         func_452660
    ctx->pc = 0x452640u;
    SET_GPR_U32(ctx, 31, 0x452648u);
    ctx->pc = 0x452660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452660u, 0x452640u, 0x452648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452648u;
label_452648:
    // 0x452648: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x452648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45264c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45264cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x452650: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x452650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x452654: 0x3e00008  jr          $ra
    ctx->pc = 0x452654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x452654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45265Cu;
    // 0x45265c: 0x0  nop
    ctx->pc = 0x45265cu;
    // NOP
    ctx->pc = 0x452660u;
}
