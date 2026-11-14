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

// Function: sub_00214B40
// Address: 0x214b40 - 0x214b90
void sub_00214B40_0x214b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214B40_0x214b40");
#endif

    ctx->pc = 0x214b40u;

    // 0x214b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214b44: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x214b44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x214b48: 0x3e00008  jr          $ra
    ctx->pc = 0x214B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214B50u;
    // 0x214b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214b54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x214b54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x214b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x214b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x214B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214B64u;
    // 0x214b64: 0x0  nop
    ctx->pc = 0x214b64u;
    // NOP
    // 0x214b68: 0x0  nop
    ctx->pc = 0x214b68u;
    // NOP
    // 0x214b6c: 0x0  nop
    ctx->pc = 0x214b6cu;
    // NOP
    // 0x214b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x214b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214b74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x214b74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214b78: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x214b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x214b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x214B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214B84u;
    // 0x214b84: 0x0  nop
    ctx->pc = 0x214b84u;
    // NOP
    // 0x214b88: 0x0  nop
    ctx->pc = 0x214b88u;
    // NOP
    // 0x214b8c: 0x0  nop
    ctx->pc = 0x214b8cu;
    // NOP
    ctx->pc = 0x214b90u;
}
