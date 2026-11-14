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

// Function: sub_001E2EB0
// Address: 0x1e2eb0 - 0x1e2f00
void sub_001E2EB0_0x1e2eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2EB0_0x1e2eb0");
#endif

    ctx->pc = 0x1e2eb0u;

    // 0x1e2eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2eb4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1e2eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1e2eb8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1e2eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2ebc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1e2ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e2ec0: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1e2ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1e2ec4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1e2ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x1e2ec8: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2EC8u;
    {
        const bool branch_taken_0x1e2ec8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2ec8) {
            ctx->pc = 0x1E2EF0u;
            goto label_1e2ef0;
        }
    }
    ctx->pc = 0x1E2ED0u;
    // 0x1e2ed0: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1e2ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1e2ed4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e2ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2ed8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1e2ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1e2edc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e2edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2ee0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e2ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e2ee4: 0x2464fffc  addiu       $a0, $v1, -0x4
    ctx->pc = 0x1e2ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1e2ee8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e2ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2eec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1e2eecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1e2ef0:
    // 0x1e2ef0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e2ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e2ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2EFCu;
    // 0x1e2efc: 0x0  nop
    ctx->pc = 0x1e2efcu;
    // NOP
    ctx->pc = 0x1e2f00u;
}
