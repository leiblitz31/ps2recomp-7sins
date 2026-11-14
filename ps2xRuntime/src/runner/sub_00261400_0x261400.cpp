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

// Function: sub_00261400
// Address: 0x261400 - 0x261430
void sub_00261400_0x261400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261400_0x261400");
#endif

    ctx->pc = 0x261400u;

    // 0x261400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x261400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x261404: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x261404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x261408: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x261408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x26140c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x26140cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261410: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x261410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261414: 0xac640050  sw          $a0, 0x50($v1)
    ctx->pc = 0x261414u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 4));
    // 0x261418: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x261418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26141c: 0x3e00008  jr          $ra
    ctx->pc = 0x26141Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26141Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261424u;
    // 0x261424: 0x0  nop
    ctx->pc = 0x261424u;
    // NOP
    // 0x261428: 0x0  nop
    ctx->pc = 0x261428u;
    // NOP
    // 0x26142c: 0x0  nop
    ctx->pc = 0x26142cu;
    // NOP
    ctx->pc = 0x261430u;
}
