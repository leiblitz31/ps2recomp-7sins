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

// Function: sub_0047AE30
// Address: 0x47ae30 - 0x47ae70
void sub_0047AE30_0x47ae30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047AE30_0x47ae30");
#endif

    ctx->pc = 0x47ae30u;

    // 0x47ae30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x47ae30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x47ae34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x47ae34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x47ae38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x47ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47ae3c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x47ae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x47ae40: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x47ae40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47ae44: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47ae48: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x47ae48u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x47ae4c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x47ae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x47ae50: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x47ae50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x47ae54: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x47AE54u;
    {
        const bool branch_taken_0x47ae54 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x47ae54) {
            ctx->pc = 0x47AE64u;
            goto label_47ae64;
        }
    }
    ctx->pc = 0x47AE5Cu;
    // 0x47ae5c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x47ae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x47ae60: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x47ae60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_47ae64:
    // 0x47ae64: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x47ae64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x47ae68: 0x3e00008  jr          $ra
    ctx->pc = 0x47AE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47AE68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47AE70u;
}
