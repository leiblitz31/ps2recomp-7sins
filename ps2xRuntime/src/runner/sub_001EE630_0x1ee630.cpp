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

// Function: sub_001EE630
// Address: 0x1ee630 - 0x1ee670
void sub_001EE630_0x1ee630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE630_0x1ee630");
#endif

    ctx->pc = 0x1ee630u;

    // 0x1ee630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ee630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ee634: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1ee634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1ee638: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ee638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee63c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE63Cu;
    {
        const bool branch_taken_0x1ee63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee63c) {
            ctx->pc = 0x1EE650u;
            goto label_1ee650;
        }
    }
    ctx->pc = 0x1EE644u;
    // 0x1ee644: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ee644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee648: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE648u;
    {
        const bool branch_taken_0x1ee648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee648) {
            ctx->pc = 0x1EE65Cu;
            goto label_1ee65c;
        }
    }
    ctx->pc = 0x1EE650u;
label_1ee650:
    // 0x1ee650: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ee650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee654: 0xa0400004  sb          $zero, 0x4($v0)
    ctx->pc = 0x1ee654u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ee658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ee65c:
    // 0x1ee65c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ee65cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ee660: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE668u;
    // 0x1ee668: 0x0  nop
    ctx->pc = 0x1ee668u;
    // NOP
    // 0x1ee66c: 0x0  nop
    ctx->pc = 0x1ee66cu;
    // NOP
    ctx->pc = 0x1ee670u;
}
