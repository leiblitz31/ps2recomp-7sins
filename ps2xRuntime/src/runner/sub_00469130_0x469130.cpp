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

// Function: sub_00469130
// Address: 0x469130 - 0x469170
void sub_00469130_0x469130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469130_0x469130");
#endif

    ctx->pc = 0x469130u;

    // 0x469130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x469130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x469134: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x469134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x469138: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x469138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46913c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x46913cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x469140: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x469140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469144: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x469144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x469148: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x469148u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x46914c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x46914cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x469150: 0x31183  sra         $v0, $v1, 6
    ctx->pc = 0x469150u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
    // 0x469154: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x469154u;
    {
        const bool branch_taken_0x469154 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x469154) {
            ctx->pc = 0x469164u;
            goto label_469164;
        }
    }
    ctx->pc = 0x46915Cu;
    // 0x46915c: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x46915cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x469160: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x469160u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_469164:
    // 0x469164: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x469164u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x469168: 0x3e00008  jr          $ra
    ctx->pc = 0x469168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469170u;
}
