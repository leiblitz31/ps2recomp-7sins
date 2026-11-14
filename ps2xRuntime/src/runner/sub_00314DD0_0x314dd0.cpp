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

// Function: sub_00314DD0
// Address: 0x314dd0 - 0x314e00
void sub_00314DD0_0x314dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314DD0_0x314dd0");
#endif

    ctx->pc = 0x314dd0u;

    // 0x314dd0: 0x94820084  lhu         $v0, 0x84($a0)
    ctx->pc = 0x314dd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x314dd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x314DD4u;
    {
        const bool branch_taken_0x314dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314DD4u;
        // 0x314dd8: 0x8f82a5b4  lw          $v0, -0x5A4C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314dd4) {
            ctx->pc = 0x314DF8u;
            goto label_314df8;
        }
    }
    ctx->pc = 0x314DDCu;
    // 0x314ddc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x314ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x314de0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x314de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x314de4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x314DE4u;
    {
        const bool branch_taken_0x314de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x314DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314DE4u;
        // 0x314de8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314de4) {
            ctx->pc = 0x314DF8u;
            goto label_314df8;
        }
    }
    ctx->pc = 0x314DECu;
    // 0x314dec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x314decu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314df0: 0x3e00008  jr          $ra
    ctx->pc = 0x314DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314DF0u;
        // 0x314df4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314DF8u;
label_314df8:
    // 0x314df8: 0x3e00008  jr          $ra
    ctx->pc = 0x314DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314DF8u;
        // 0x314dfc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314E00u;
}
