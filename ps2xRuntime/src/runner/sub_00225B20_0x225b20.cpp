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

// Function: sub_00225B20
// Address: 0x225b20 - 0x225b60
void sub_00225B20_0x225b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225B20_0x225b20");
#endif

    ctx->pc = 0x225b20u;

    // 0x225b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225b24: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x225b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x225b28: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x225b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225b2c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x225b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x225b30: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x225b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225b34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x225b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x225b38: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x225b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x225b3c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x225b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x225b40: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x225b40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x225b44: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x225B44u;
    {
        const bool branch_taken_0x225b44 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x225b44) {
            ctx->pc = 0x225B54u;
            goto label_225b54;
        }
    }
    ctx->pc = 0x225B4Cu;
    // 0x225b4c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x225b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x225b50: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x225b50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_225b54:
    // 0x225b54: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x225b54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x225b58: 0x3e00008  jr          $ra
    ctx->pc = 0x225B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225B60u;
}
