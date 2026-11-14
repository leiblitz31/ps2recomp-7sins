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

// Function: sub_003F1A40
// Address: 0x3f1a40 - 0x3f1a88
void sub_003F1A40_0x3f1a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1A40_0x3f1a40");
#endif

    ctx->pc = 0x3f1a40u;

    // 0x3f1a40: 0xdc820108  ld          $v0, 0x108($a0)
    ctx->pc = 0x3f1a40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x3f1a44: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x3f1a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x3f1a48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f1a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3f1a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1A4Cu;
        // 0x3f1a50: 0xfc820108  sd          $v0, 0x108($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 264), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F1A54u;
    // 0x3f1a54: 0x0  nop
    ctx->pc = 0x3f1a54u;
    // NOP
    // 0x3f1a58: 0xdc820108  ld          $v0, 0x108($a0)
    ctx->pc = 0x3f1a58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x3f1a5c: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x3f1a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x3f1a60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f1a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3f1a64: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1A64u;
        // 0x3f1a68: 0xfc820108  sd          $v0, 0x108($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 264), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F1A6Cu;
    // 0x3f1a6c: 0x0  nop
    ctx->pc = 0x3f1a6cu;
    // NOP
    // 0x3f1a70: 0xdc820108  ld          $v0, 0x108($a0)
    ctx->pc = 0x3f1a70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x3f1a74: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x3f1a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x3f1a78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f1a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3f1a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x3F1A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F1A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1A7Cu;
        // 0x3f1a80: 0xfc820108  sd          $v0, 0x108($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 264), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F1A84u;
    // 0x3f1a84: 0x0  nop
    ctx->pc = 0x3f1a84u;
    // NOP
    ctx->pc = 0x3f1a88u;
}
