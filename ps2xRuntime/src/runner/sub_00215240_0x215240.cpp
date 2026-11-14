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

// Function: sub_00215240
// Address: 0x215240 - 0x215280
void sub_00215240_0x215240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215240_0x215240");
#endif

    ctx->pc = 0x215240u;

    // 0x215240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x215240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x215244: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x215244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x215248: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x215248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21524c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x21524cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x215250: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x215250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215254: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x215254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215258: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x215258u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21525c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21525cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x215260: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x215260u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x215264: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x215264u;
    {
        const bool branch_taken_0x215264 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x215264) {
            ctx->pc = 0x215274u;
            goto label_215274;
        }
    }
    ctx->pc = 0x21526Cu;
    // 0x21526c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x21526cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x215270: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x215270u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_215274:
    // 0x215274: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x215274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x215278: 0x3e00008  jr          $ra
    ctx->pc = 0x215278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215280u;
}
