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

// Function: sub_00259320
// Address: 0x259320 - 0x259360
void sub_00259320_0x259320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259320_0x259320");
#endif

    ctx->pc = 0x259320u;

    // 0x259320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x259320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x259324: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x259324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x259328: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x259328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25932c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x25932cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x259330: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x259330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259334: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x259334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259338: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x259338u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25933c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x25933cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x259340: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x259340u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x259344: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x259344u;
    {
        const bool branch_taken_0x259344 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x259344) {
            ctx->pc = 0x259354u;
            goto label_259354;
        }
    }
    ctx->pc = 0x25934Cu;
    // 0x25934c: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x25934cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x259350: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x259350u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_259354:
    // 0x259354: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x259354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x259358: 0x3e00008  jr          $ra
    ctx->pc = 0x259358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259360u;
}
