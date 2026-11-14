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

// Function: sub_00327D18
// Address: 0x327d18 - 0x327d40
void sub_00327D18_0x327d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327D18_0x327d18");
#endif

    ctx->pc = 0x327d18u;

    // 0x327d18: 0x8f83a654  lw          $v1, -0x59AC($gp)
    ctx->pc = 0x327d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944340)));
    // 0x327d1c: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x327d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x327d20: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x327d20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327d24: 0x24a57d40  addiu       $a1, $a1, 0x7D40
    ctx->pc = 0x327d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32064));
    // 0x327d28: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x327d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x327d2c: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x327d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x327d30: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x327d30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x327d34: 0x3e00008  jr          $ra
    ctx->pc = 0x327D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D34u;
        // 0x327d38: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327D3Cu;
    // 0x327d3c: 0x0  nop
    ctx->pc = 0x327d3cu;
    // NOP
    ctx->pc = 0x327d40u;
}
