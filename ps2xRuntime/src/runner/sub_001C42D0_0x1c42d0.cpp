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

// Function: sub_001C42D0
// Address: 0x1c42d0 - 0x1c4310
void sub_001C42D0_0x1c42d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C42D0_0x1c42d0");
#endif

    ctx->pc = 0x1c42d0u;

    // 0x1c42d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c42d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c42d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1c42d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1c42d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c42d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c42dc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c42dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c42e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c42e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c42e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c42e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c42e8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c42e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c42ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c42ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c42f0: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x1c42f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1c42f4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C42F4u;
    {
        const bool branch_taken_0x1c42f4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1c42f4) {
            ctx->pc = 0x1C4304u;
            goto label_1c4304;
        }
    }
    ctx->pc = 0x1C42FCu;
    // 0x1c42fc: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1c42fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1c4300: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1c4300u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1c4304:
    // 0x1c4304: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1c4304u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c4308: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4310u;
}
