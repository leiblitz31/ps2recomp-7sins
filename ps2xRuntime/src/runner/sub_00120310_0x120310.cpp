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

// Function: sub_00120310
// Address: 0x120310 - 0x120360
void sub_00120310_0x120310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120310_0x120310");
#endif

    switch (ctx->pc) {
        case 0x120348u: goto label_120348;
        default: break;
    }

    ctx->pc = 0x120310u;

    // 0x120310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x120310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x120314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x120314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x120318: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x120318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12031c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x12031cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x120320: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120324: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x120324u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x120328: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12032c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x12032cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x120330: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120334: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x120334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x120338: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x120338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12033c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12033cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120340: 0xc0480d8  jal         func_120360
    ctx->pc = 0x120340u;
    SET_GPR_U32(ctx, 31, 0x120348u);
    ctx->pc = 0x120360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120360u, 0x120340u, 0x120348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120348u;
label_120348:
    // 0x120348: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12034c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12034cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120350: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x120350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x120354: 0x3e00008  jr          $ra
    ctx->pc = 0x120354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12035Cu;
    // 0x12035c: 0x0  nop
    ctx->pc = 0x12035cu;
    // NOP
    ctx->pc = 0x120360u;
}
