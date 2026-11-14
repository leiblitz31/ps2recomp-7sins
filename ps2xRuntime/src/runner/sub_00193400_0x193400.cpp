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

// Function: sub_00193400
// Address: 0x193400 - 0x193440
void sub_00193400_0x193400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193400_0x193400");
#endif

    ctx->pc = 0x193400u;

    // 0x193400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x193404: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x193404u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x193408: 0x3e00008  jr          $ra
    ctx->pc = 0x193408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193410u;
    // 0x193410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x193414: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x193414u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x193418: 0x3e00008  jr          $ra
    ctx->pc = 0x193418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193420u;
    // 0x193420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193424: 0x2782923c  addiu       $v0, $gp, -0x6DC4
    ctx->pc = 0x193424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939196));
    // 0x193428: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x193428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19342c: 0x3e00008  jr          $ra
    ctx->pc = 0x19342Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19342Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193434u;
    // 0x193434: 0x0  nop
    ctx->pc = 0x193434u;
    // NOP
    // 0x193438: 0x0  nop
    ctx->pc = 0x193438u;
    // NOP
    // 0x19343c: 0x0  nop
    ctx->pc = 0x19343cu;
    // NOP
    ctx->pc = 0x193440u;
}
