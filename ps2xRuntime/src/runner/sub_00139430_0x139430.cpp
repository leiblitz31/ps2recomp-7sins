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

// Function: sub_00139430
// Address: 0x139430 - 0x139470
void sub_00139430_0x139430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139430_0x139430");
#endif

    ctx->pc = 0x139430u;

    // 0x139430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x139430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x139434: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x139434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x139438: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x139438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13943c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13943cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x139440: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x139440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139444: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x139444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139448: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x139448u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13944c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13944cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x139450: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x139450u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x139454: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x139454u;
    {
        const bool branch_taken_0x139454 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x139454) {
            ctx->pc = 0x139464u;
            goto label_139464;
        }
    }
    ctx->pc = 0x13945Cu;
    // 0x13945c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x13945cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x139460: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x139460u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_139464:
    // 0x139464: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x139464u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x139468: 0x3e00008  jr          $ra
    ctx->pc = 0x139468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139470u;
}
