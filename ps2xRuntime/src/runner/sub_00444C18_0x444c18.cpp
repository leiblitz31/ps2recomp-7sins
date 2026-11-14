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

// Function: sub_00444C18
// Address: 0x444c18 - 0x444c68
void sub_00444C18_0x444c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00444C18_0x444c18");
#endif

    ctx->pc = 0x444c18u;

    // 0x444c18: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x444c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x444c1c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x444C1Cu;
    {
        const bool branch_taken_0x444c1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x444C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444C1Cu;
        // 0x444c20: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444c1c) {
            ctx->pc = 0x444C38u;
            goto label_444c38;
        }
    }
    ctx->pc = 0x444C24u;
    // 0x444c24: 0x8f83bf18  lw          $v1, -0x40E8($gp)
    ctx->pc = 0x444c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444c28: 0x2444e880  addiu       $a0, $v0, -0x1780
    ctx->pc = 0x444c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x444c2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x444c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x444c30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x444C30u;
    {
        const bool branch_taken_0x444c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444C30u;
        // 0x444c34: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444c30) {
            ctx->pc = 0x444C54u;
            goto label_444c54;
        }
    }
    ctx->pc = 0x444C38u;
label_444c38:
    // 0x444c38: 0x8f84bf18  lw          $a0, -0x40E8($gp)
    ctx->pc = 0x444c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444c3c: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x444c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x444c40: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x444c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x444c44: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x444c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x444c48: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x444C48u;
    {
        const bool branch_taken_0x444c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x444c48) {
            ctx->pc = 0x444C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x444C48u;
            // 0x444c4c: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x444C54u;
            goto label_444c54;
        }
    }
    ctx->pc = 0x444C50u;
    // 0x444c50: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x444c50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_444c54:
    // 0x444c54: 0x8f83bf18  lw          $v1, -0x40E8($gp)
    ctx->pc = 0x444c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444c58: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x444c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x444c5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x444c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x444c60: 0x3e00008  jr          $ra
    ctx->pc = 0x444C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444C60u;
        // 0x444c64: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x444C68u;
}
