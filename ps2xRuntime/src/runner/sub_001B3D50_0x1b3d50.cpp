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

// Function: sub_001B3D50
// Address: 0x1b3d50 - 0x1b3d90
void sub_001B3D50_0x1b3d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3D50_0x1b3d50");
#endif

    ctx->pc = 0x1b3d50u;

    // 0x1b3d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3d54: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b3d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1b3d58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b3d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3d5c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1b3d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b3d60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b3d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3d64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b3d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b3d68: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b3d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b3d6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b3d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3d70: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x1b3d70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1b3d74: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3D74u;
    {
        const bool branch_taken_0x1b3d74 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1b3d74) {
            ctx->pc = 0x1B3D84u;
            goto label_1b3d84;
        }
    }
    ctx->pc = 0x1B3D7Cu;
    // 0x1b3d7c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1b3d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1b3d80: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1b3d80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1b3d84:
    // 0x1b3d84: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1b3d84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b3d88: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3D90u;
}
