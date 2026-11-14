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

// Function: sub_00222230
// Address: 0x222230 - 0x222250
void sub_00222230_0x222230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222230_0x222230");
#endif

    ctx->pc = 0x222230u;

    // 0x222230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x222230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x222234: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x222234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x222238: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x222238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22223c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x22223cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x222240: 0x3e00008  jr          $ra
    ctx->pc = 0x222240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222248u;
    // 0x222248: 0x0  nop
    ctx->pc = 0x222248u;
    // NOP
    // 0x22224c: 0x0  nop
    ctx->pc = 0x22224cu;
    // NOP
    ctx->pc = 0x222250u;
}
