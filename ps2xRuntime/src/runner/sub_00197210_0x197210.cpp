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

// Function: sub_00197210
// Address: 0x197210 - 0x197250
void sub_00197210_0x197210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197210_0x197210");
#endif

    ctx->pc = 0x197210u;

    // 0x197210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x197210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x197214: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x197214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x197218: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x197218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19721c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x19721cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x197220: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x197220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197224: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x197224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197228: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x197228u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19722c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x19722cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x197230: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x197230u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x197234: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x197234u;
    {
        const bool branch_taken_0x197234 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x197234) {
            ctx->pc = 0x197244u;
            goto label_197244;
        }
    }
    ctx->pc = 0x19723Cu;
    // 0x19723c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x19723cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x197240: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x197240u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_197244:
    // 0x197244: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x197244u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x197248: 0x3e00008  jr          $ra
    ctx->pc = 0x197248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197250u;
}
