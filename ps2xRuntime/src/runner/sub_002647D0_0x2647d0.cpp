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

// Function: sub_002647D0
// Address: 0x2647d0 - 0x264810
void sub_002647D0_0x2647d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002647D0_0x2647d0");
#endif

    ctx->pc = 0x2647d0u;

    // 0x2647d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2647d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2647d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2647d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2647d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2647d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2647dc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2647dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2647e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2647e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2647e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2647e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2647e8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2647e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2647ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2647ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2647f0: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x2647f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2647f4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2647F4u;
    {
        const bool branch_taken_0x2647f4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2647f4) {
            ctx->pc = 0x264804u;
            goto label_264804;
        }
    }
    ctx->pc = 0x2647FCu;
    // 0x2647fc: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2647fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x264800: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x264800u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_264804:
    // 0x264804: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x264804u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x264808: 0x3e00008  jr          $ra
    ctx->pc = 0x264808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264810u;
}
