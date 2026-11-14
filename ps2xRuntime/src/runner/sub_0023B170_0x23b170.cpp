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

// Function: sub_0023B170
// Address: 0x23b170 - 0x23b1a0
void sub_0023B170_0x23b170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B170_0x23b170");
#endif

    ctx->pc = 0x23b170u;

    // 0x23b170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23b170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23b174: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23b174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23b178: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23b178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23b17c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23b17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b180: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x23b180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x23b184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23b184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23b188: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x23b188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23b18c: 0x3e00008  jr          $ra
    ctx->pc = 0x23B18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B194u;
    // 0x23b194: 0x0  nop
    ctx->pc = 0x23b194u;
    // NOP
    // 0x23b198: 0x0  nop
    ctx->pc = 0x23b198u;
    // NOP
    // 0x23b19c: 0x0  nop
    ctx->pc = 0x23b19cu;
    // NOP
    ctx->pc = 0x23b1a0u;
}
