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

// Function: sub_00457A70
// Address: 0x457a70 - 0x457aa0
void sub_00457A70_0x457a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00457A70_0x457a70");
#endif

    ctx->pc = 0x457a70u;

    // 0x457a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x457a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x457a74: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x457a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x457a78: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x457a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x457a7c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x457a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457a80: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x457a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x457a84: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x457a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x457a88: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x457a88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x457a8c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x457a8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x457a90: 0x3e00008  jr          $ra
    ctx->pc = 0x457A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x457A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x457A98u;
    // 0x457a98: 0x0  nop
    ctx->pc = 0x457a98u;
    // NOP
    // 0x457a9c: 0x0  nop
    ctx->pc = 0x457a9cu;
    // NOP
    ctx->pc = 0x457aa0u;
}
