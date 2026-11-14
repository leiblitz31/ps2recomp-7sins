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

// Function: sub_0020B140
// Address: 0x20b140 - 0x20b180
void sub_0020B140_0x20b140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B140_0x20b140");
#endif

    ctx->pc = 0x20b140u;

    // 0x20b140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20b140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20b144: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x20b144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x20b148: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x20b148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b14c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x20b14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20b150: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x20b150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b154: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20b154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b158: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x20b158u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20b15c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20b160: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x20b160u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x20b164: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20B164u;
    {
        const bool branch_taken_0x20b164 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x20b164) {
            ctx->pc = 0x20B174u;
            goto label_20b174;
        }
    }
    ctx->pc = 0x20B16Cu;
    // 0x20b16c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x20b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x20b170: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x20b170u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_20b174:
    // 0x20b174: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x20b174u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20b178: 0x3e00008  jr          $ra
    ctx->pc = 0x20B178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B180u;
}
