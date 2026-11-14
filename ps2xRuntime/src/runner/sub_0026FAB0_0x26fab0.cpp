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

// Function: sub_0026FAB0
// Address: 0x26fab0 - 0x26faf0
void sub_0026FAB0_0x26fab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FAB0_0x26fab0");
#endif

    ctx->pc = 0x26fab0u;

    // 0x26fab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26fab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26fab4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26fab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26fab8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fabc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x26fabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26fac0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26fac4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26fac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26fac8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x26fac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26facc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26faccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26fad0: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x26fad0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x26fad4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26FAD4u;
    {
        const bool branch_taken_0x26fad4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x26fad4) {
            ctx->pc = 0x26FAE4u;
            goto label_26fae4;
        }
    }
    ctx->pc = 0x26FADCu;
    // 0x26fadc: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x26fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x26fae0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x26fae0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_26fae4:
    // 0x26fae4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26fae4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26fae8: 0x3e00008  jr          $ra
    ctx->pc = 0x26FAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26FAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26FAF0u;
}
