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

// Function: sub_001377F0
// Address: 0x1377f0 - 0x137830
void sub_001377F0_0x1377f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001377F0_0x1377f0");
#endif

    ctx->pc = 0x1377f0u;

    // 0x1377f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1377f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1377f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1377f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1377f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1377f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1377fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1377fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x137800: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x137800u;
    {
        const bool branch_taken_0x137800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137800) {
            ctx->pc = 0x137814u;
            goto label_137814;
        }
    }
    ctx->pc = 0x137808u;
    // 0x137808: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x137808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13780c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13780Cu;
    {
        const bool branch_taken_0x13780c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13780c) {
            ctx->pc = 0x13781Cu;
            goto label_13781c;
        }
    }
    ctx->pc = 0x137814u;
label_137814:
    // 0x137814: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x137814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137818: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x137818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_13781c:
    // 0x13781c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x13781cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x137820: 0x3e00008  jr          $ra
    ctx->pc = 0x137820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137828u;
    // 0x137828: 0x0  nop
    ctx->pc = 0x137828u;
    // NOP
    // 0x13782c: 0x0  nop
    ctx->pc = 0x13782cu;
    // NOP
    ctx->pc = 0x137830u;
}
