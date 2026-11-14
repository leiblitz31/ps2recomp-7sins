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

// Function: sub_0040FD78
// Address: 0x40fd78 - 0x40fda8
void sub_0040FD78_0x40fd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040FD78_0x40fd78");
#endif

    ctx->pc = 0x40fd78u;

    // 0x40fd78: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x40fd78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40fd7c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x40FD7Cu;
    {
        const bool branch_taken_0x40fd7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x40FD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FD7Cu;
        // 0x40fd80: 0x8f84bdc0  lw          $a0, -0x4240($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fd7c) {
            ctx->pc = 0x40FD8Cu;
            goto label_40fd8c;
        }
    }
    ctx->pc = 0x40FD84u;
    // 0x40fd84: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x40fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x40fd88: 0x2445de58  addiu       $a1, $v0, -0x21A8
    ctx->pc = 0x40fd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958680));
label_40fd8c:
    // 0x40fd8c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x40fd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x40fd90: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x40fd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x40fd94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40fd98: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x40fd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x40fd9c: 0x3e00008  jr          $ra
    ctx->pc = 0x40FD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40FDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FD9Cu;
        // 0x40fda0: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40FD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40FDA4u;
    // 0x40fda4: 0x0  nop
    ctx->pc = 0x40fda4u;
    // NOP
    ctx->pc = 0x40fda8u;
}
