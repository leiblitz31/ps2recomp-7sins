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

// Function: sub_00494950
// Address: 0x494950 - 0x494980
void sub_00494950_0x494950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494950_0x494950");
#endif

    ctx->pc = 0x494950u;

    // 0x494950: 0xaf80c15c  sw          $zero, -0x3EA4($gp)
    ctx->pc = 0x494950u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951260), GPR_U32(ctx, 0));
    // 0x494954: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x494954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x494958: 0xaf83b730  sw          $v1, -0x48D0($gp)
    ctx->pc = 0x494958u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948656), GPR_U32(ctx, 3));
    // 0x49495c: 0xaf80c16c  sw          $zero, -0x3E94($gp)
    ctx->pc = 0x49495cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951276), GPR_U32(ctx, 0));
    // 0x494960: 0xaf80c150  sw          $zero, -0x3EB0($gp)
    ctx->pc = 0x494960u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951248), GPR_U32(ctx, 0));
    // 0x494964: 0xaf80c154  sw          $zero, -0x3EAC($gp)
    ctx->pc = 0x494964u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951252), GPR_U32(ctx, 0));
    // 0x494968: 0xaf80c158  sw          $zero, -0x3EA8($gp)
    ctx->pc = 0x494968u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951256), GPR_U32(ctx, 0));
    // 0x49496c: 0x3e00008  jr          $ra
    ctx->pc = 0x49496Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49496Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x494974u;
    // 0x494974: 0x0  nop
    ctx->pc = 0x494974u;
    // NOP
    // 0x494978: 0x0  nop
    ctx->pc = 0x494978u;
    // NOP
    // 0x49497c: 0x0  nop
    ctx->pc = 0x49497cu;
    // NOP
    ctx->pc = 0x494980u;
}
