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

// Function: sub_002D9130
// Address: 0x2d9130 - 0x2d9170
void sub_002D9130_0x2d9130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9130_0x2d9130");
#endif

    ctx->pc = 0x2d9130u;

    // 0x2d9130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9134: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2d9134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2d9138: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d9138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d913c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2d913cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d9140: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d9140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9144: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d9144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d9148: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2d9148u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d914c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2d914cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d9150: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x2d9150u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2d9154: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9154u;
    {
        const bool branch_taken_0x2d9154 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2d9154) {
            ctx->pc = 0x2D9164u;
            goto label_2d9164;
        }
    }
    ctx->pc = 0x2D915Cu;
    // 0x2d915c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2d915cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2d9160: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2d9160u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2d9164:
    // 0x2d9164: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d9164u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d9168: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9170u;
}
