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

// Function: sub_001E05F0
// Address: 0x1e05f0 - 0x1e0640
void sub_001E05F0_0x1e05f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E05F0_0x1e05f0");
#endif

    switch (ctx->pc) {
        case 0x1e0628u: goto label_1e0628;
        default: break;
    }

    ctx->pc = 0x1e05f0u;

    // 0x1e05f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e05f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e05f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e05f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e05f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e05f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e05fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e05fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e0600: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e0600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0604: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1e0604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e0608: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e0608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e060c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e060cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e0610: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e0610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0614: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1e0614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e0618: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e0618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e061c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e061cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0620: 0xc078190  jal         func_1E0640
    ctx->pc = 0x1E0620u;
    SET_GPR_U32(ctx, 31, 0x1E0628u);
    ctx->pc = 0x1E0640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0640u, 0x1E0620u, 0x1E0628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0628u;
label_1e0628:
    // 0x1e0628: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e0628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e062c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e062cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0630: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e0630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e0634: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E063Cu;
    // 0x1e063c: 0x0  nop
    ctx->pc = 0x1e063cu;
    // NOP
    ctx->pc = 0x1e0640u;
}
