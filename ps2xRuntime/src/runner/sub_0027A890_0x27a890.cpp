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

// Function: sub_0027A890
// Address: 0x27a890 - 0x27a8d0
void sub_0027A890_0x27a890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A890_0x27a890");
#endif

    ctx->pc = 0x27a890u;

    // 0x27a890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27a890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27a894: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x27a894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x27a898: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x27a898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a89c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x27a89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27a8a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x27a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a8a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27a8a8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x27a8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27a8ac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27a8b0: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x27a8b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x27a8b4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A8B4u;
    {
        const bool branch_taken_0x27a8b4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x27a8b4) {
            ctx->pc = 0x27A8C4u;
            goto label_27a8c4;
        }
    }
    ctx->pc = 0x27A8BCu;
    // 0x27a8bc: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x27a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x27a8c0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x27a8c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_27a8c4:
    // 0x27a8c4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27a8c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27a8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x27A8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A8D0u;
}
