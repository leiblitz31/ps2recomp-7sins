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

// Function: sub_004696F0
// Address: 0x4696f0 - 0x469730
void sub_004696F0_0x4696f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004696F0_0x4696f0");
#endif

    ctx->pc = 0x4696f0u;

    // 0x4696f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4696f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4696f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4696f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4696f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4696f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4696fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x4696fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x469700: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x469700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469704: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x469704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x469708: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x469708u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x46970c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x46970cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x469710: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x469710u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x469714: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x469714u;
    {
        const bool branch_taken_0x469714 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x469714) {
            ctx->pc = 0x469724u;
            goto label_469724;
        }
    }
    ctx->pc = 0x46971Cu;
    // 0x46971c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x46971cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x469720: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x469720u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_469724:
    // 0x469724: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x469724u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x469728: 0x3e00008  jr          $ra
    ctx->pc = 0x469728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469730u;
}
