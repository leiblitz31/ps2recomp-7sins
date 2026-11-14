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

// Function: sub_00307D08
// Address: 0x307d08 - 0x307d40
void sub_00307D08_0x307d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307D08_0x307d08");
#endif

    switch (ctx->pc) {
        case 0x307d18u: goto label_307d18;
        default: break;
    }

    ctx->pc = 0x307d08u;

    // 0x307d08: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x307d08u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x307d0c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x307D0Cu;
    {
        const bool branch_taken_0x307d0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x307D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D0Cu;
        // 0x307d10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307d0c) {
            ctx->pc = 0x307D38u;
            goto label_307d38;
        }
    }
    ctx->pc = 0x307D14u;
    // 0x307d14: 0x0  nop
    ctx->pc = 0x307d14u;
    // NOP
label_307d18:
    // 0x307d18: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x307d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x307d1c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x307d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x307d20: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x307d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x307d24: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x307d24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x307d28: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x307d28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x307d2c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x307d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x307d30: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x307D30u;
    {
        const bool branch_taken_0x307d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307d30) {
            ctx->pc = 0x307D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307d18;
        }
    }
    ctx->pc = 0x307D38u;
label_307d38:
    // 0x307d38: 0x3e00008  jr          $ra
    ctx->pc = 0x307D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307D38u;
        // 0x307d3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307D40u;
}
