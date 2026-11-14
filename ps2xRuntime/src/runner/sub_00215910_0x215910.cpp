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

// Function: sub_00215910
// Address: 0x215910 - 0x215950
void sub_00215910_0x215910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215910_0x215910");
#endif

    ctx->pc = 0x215910u;

    // 0x215910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x215910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x215914: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x215914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x215918: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x215918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21591c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21591cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x215920: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x215920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215924: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x215924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215928: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x215928u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21592c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21592cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x215930: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x215930u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x215934: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x215934u;
    {
        const bool branch_taken_0x215934 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x215934) {
            ctx->pc = 0x215944u;
            goto label_215944;
        }
    }
    ctx->pc = 0x21593Cu;
    // 0x21593c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x21593cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x215940: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x215940u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_215944:
    // 0x215944: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x215944u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x215948: 0x3e00008  jr          $ra
    ctx->pc = 0x215948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215950u;
}
