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

// Function: sub_002B5A50
// Address: 0x2b5a50 - 0x2b5aa0
void sub_002B5A50_0x2b5a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5A50_0x2b5a50");
#endif

    ctx->pc = 0x2b5a50u;

    // 0x2b5a50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b5a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b5a54: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2b5a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2b5a58: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2b5a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2b5a5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b5a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5a60: 0x10020007  beq         $zero, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B5A60u;
    {
        const bool branch_taken_0x2b5a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b5a60) {
            ctx->pc = 0x2B5A80u;
            goto label_2b5a80;
        }
    }
    ctx->pc = 0x2B5A68u;
    // 0x2b5a68: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2b5a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5a6c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2b5a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5a70: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x2b5a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x2b5a74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b5a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5a78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B5A78u;
    {
        const bool branch_taken_0x2b5a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5a78) {
            ctx->pc = 0x2B5A84u;
            goto label_2b5a84;
        }
    }
    ctx->pc = 0x2B5A80u;
label_2b5a80:
    // 0x2b5a80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b5a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b5a84:
    // 0x2b5a84: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b5a84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b5a88: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5A90u;
    // 0x2b5a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b5a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b5a94: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b5a94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b5a98: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5AA0u;
}
