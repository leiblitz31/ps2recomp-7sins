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

// Function: sub_00484230
// Address: 0x484230 - 0x484250
void sub_00484230_0x484230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484230_0x484230");
#endif

    ctx->pc = 0x484230u;

    // 0x484230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x484230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x484234: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x484234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x484238: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x484238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48423c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x48423cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x484240: 0x3e00008  jr          $ra
    ctx->pc = 0x484240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x484248u;
    // 0x484248: 0x0  nop
    ctx->pc = 0x484248u;
    // NOP
    // 0x48424c: 0x0  nop
    ctx->pc = 0x48424cu;
    // NOP
    ctx->pc = 0x484250u;
}
