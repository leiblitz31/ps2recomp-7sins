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

// Function: sub_0023BD40
// Address: 0x23bd40 - 0x23bd90
void sub_0023BD40_0x23bd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BD40_0x23bd40");
#endif

    ctx->pc = 0x23bd40u;

    // 0x23bd40: 0x8f82bbe8  lw          $v0, -0x4418($gp)
    ctx->pc = 0x23bd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949864)));
    // 0x23bd44: 0x1002000f  beq         $zero, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23BD44u;
    {
        const bool branch_taken_0x23bd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x23bd44) {
            ctx->pc = 0x23BD84u;
            goto label_23bd84;
        }
    }
    ctx->pc = 0x23BD4Cu;
    // 0x23bd4c: 0x8f82bbe8  lw          $v0, -0x4418($gp)
    ctx->pc = 0x23bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949864)));
    // 0x23bd50: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x23bd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x23bd54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23bd58: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23BD58u;
    {
        const bool branch_taken_0x23bd58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23bd58) {
            ctx->pc = 0x23BD84u;
            goto label_23bd84;
        }
    }
    ctx->pc = 0x23BD60u;
    // 0x23bd60: 0x8f84bbe8  lw          $a0, -0x4418($gp)
    ctx->pc = 0x23bd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949864)));
    // 0x23bd64: 0x8f82bbe8  lw          $v0, -0x4418($gp)
    ctx->pc = 0x23bd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949864)));
    // 0x23bd68: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x23bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x23bd6c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x23bd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23bd70: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x23bd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x23bd74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23bd78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23bd7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23BD7Cu;
    {
        const bool branch_taken_0x23bd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bd7c) {
            ctx->pc = 0x23BD88u;
            goto label_23bd88;
        }
    }
    ctx->pc = 0x23BD84u;
label_23bd84:
    // 0x23bd84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23bd84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23bd88:
    // 0x23bd88: 0x3e00008  jr          $ra
    ctx->pc = 0x23BD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BD90u;
}
