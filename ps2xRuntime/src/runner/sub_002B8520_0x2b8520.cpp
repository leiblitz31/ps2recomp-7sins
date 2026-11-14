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

// Function: sub_002B8520
// Address: 0x2b8520 - 0x2b8550
void sub_002B8520_0x2b8520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8520_0x2b8520");
#endif

    ctx->pc = 0x2b8520u;

    // 0x2b8520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b8520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b8524: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2b8524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2b8528: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2b8528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b852c: 0x8c63005c  lw          $v1, 0x5C($v1)
    ctx->pc = 0x2b852cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x2b8530: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B8530u;
    {
        const bool branch_taken_0x2b8530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8530) {
            ctx->pc = 0x2B8544u;
            goto label_2b8544;
        }
    }
    ctx->pc = 0x2B8538u;
    // 0x2b8538: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b8538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b853c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2b853cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b8540: 0xa0640049  sb          $a0, 0x49($v1)
    ctx->pc = 0x2b8540u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 73), (uint8_t)GPR_U32(ctx, 4));
label_2b8544:
    // 0x2b8544: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b8544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b8548: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8550u;
}
