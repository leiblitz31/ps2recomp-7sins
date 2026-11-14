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

// Function: sub_00478B50
// Address: 0x478b50 - 0x478b90
void sub_00478B50_0x478b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00478B50_0x478b50");
#endif

    ctx->pc = 0x478b50u;

    // 0x478b50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x478b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x478b54: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x478b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x478b58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x478b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x478b5c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x478b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x478b60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x478b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x478b64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x478b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x478b68: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x478b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x478b6c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x478b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x478b70: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x478b70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x478b74: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x478B74u;
    {
        const bool branch_taken_0x478b74 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x478b74) {
            ctx->pc = 0x478B84u;
            goto label_478b84;
        }
    }
    ctx->pc = 0x478B7Cu;
    // 0x478b7c: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x478b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x478b80: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x478b80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_478b84:
    // 0x478b84: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x478b84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x478b88: 0x3e00008  jr          $ra
    ctx->pc = 0x478B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x478B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x478B90u;
}
