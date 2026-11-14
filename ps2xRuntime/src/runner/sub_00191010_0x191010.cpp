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

// Function: sub_00191010
// Address: 0x191010 - 0x191030
void sub_00191010_0x191010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191010_0x191010");
#endif

    ctx->pc = 0x191010u;

    // 0x191010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x191010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x191014: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x191014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x191018: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x191018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19101c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x19101cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x191020: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x191020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x191024: 0x3e00008  jr          $ra
    ctx->pc = 0x191024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19102Cu;
    // 0x19102c: 0x0  nop
    ctx->pc = 0x19102cu;
    // NOP
    ctx->pc = 0x191030u;
}
