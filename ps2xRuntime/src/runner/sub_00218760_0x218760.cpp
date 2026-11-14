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

// Function: sub_00218760
// Address: 0x218760 - 0x218790
void sub_00218760_0x218760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218760_0x218760");
#endif

    ctx->pc = 0x218760u;

    // 0x218760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x218760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x218764: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x218764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x218768: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x218768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x21876c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x21876cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218770: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x218770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218774: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x218774u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x218778: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x218778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21877c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x21877cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x218780: 0x3e00008  jr          $ra
    ctx->pc = 0x218780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218788u;
    // 0x218788: 0x0  nop
    ctx->pc = 0x218788u;
    // NOP
    // 0x21878c: 0x0  nop
    ctx->pc = 0x21878cu;
    // NOP
    ctx->pc = 0x218790u;
}
