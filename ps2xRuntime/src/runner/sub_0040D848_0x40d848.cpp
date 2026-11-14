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

// Function: sub_0040D848
// Address: 0x40d848 - 0x40d860
void sub_0040D848_0x40d848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040D848_0x40d848");
#endif

    ctx->pc = 0x40d848u;

    // 0x40d848: 0x8f83bdbc  lw          $v1, -0x4244($gp)
    ctx->pc = 0x40d848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950332)));
    // 0x40d84c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x40d84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x40d850: 0xaf83bdbc  sw          $v1, -0x4244($gp)
    ctx->pc = 0x40d850u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950332), GPR_U32(ctx, 3));
    // 0x40d854: 0x3e00008  jr          $ra
    ctx->pc = 0x40D854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D854u;
        // 0x40d858: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40D85Cu;
    // 0x40d85c: 0x0  nop
    ctx->pc = 0x40d85cu;
    // NOP
    ctx->pc = 0x40d860u;
}
