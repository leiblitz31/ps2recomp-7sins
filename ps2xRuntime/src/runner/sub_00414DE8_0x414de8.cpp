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

// Function: sub_00414DE8
// Address: 0x414de8 - 0x414e30
void sub_00414DE8_0x414de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414DE8_0x414de8");
#endif

    switch (ctx->pc) {
        case 0x414e00u: goto label_414e00;
        default: break;
    }

    ctx->pc = 0x414de8u;

    // 0x414de8: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x414DE8u;
    {
        const bool branch_taken_0x414de8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x414de8) {
            ctx->pc = 0x414E24u;
            goto label_414e24;
        }
    }
    ctx->pc = 0x414DF0u;
    // 0x414df0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x414df0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x414df4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x414DF4u;
    {
        const bool branch_taken_0x414df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x414DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414DF4u;
        // 0x414df8: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414df4) {
            ctx->pc = 0x414E24u;
            goto label_414e24;
        }
    }
    ctx->pc = 0x414DFCu;
    // 0x414dfc: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x414dfcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_414e00:
    // 0x414e00: 0x24a2ff9f  addiu       $v0, $a1, -0x61
    ctx->pc = 0x414e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967199));
    // 0x414e04: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x414e04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x414e08: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x414E08u;
    {
        const bool branch_taken_0x414e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x414E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414E08u;
        // 0x414e0c: 0x24a2ffe0  addiu       $v0, $a1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x414e08) {
            ctx->pc = 0x414E14u;
            goto label_414e14;
        }
    }
    ctx->pc = 0x414E10u;
    // 0x414e10: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x414e10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_414e14:
    // 0x414e14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x414e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x414e18: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x414e18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x414e1c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x414E1Cu;
    {
        const bool branch_taken_0x414e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x414e1c) {
            ctx->pc = 0x414E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x414E1Cu;
            // 0x414e20: 0x80650000  lb          $a1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x414E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_414e00;
        }
    }
    ctx->pc = 0x414E24u;
label_414e24:
    // 0x414e24: 0x3e00008  jr          $ra
    ctx->pc = 0x414E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414E24u;
        // 0x414e28: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414E2Cu;
    // 0x414e2c: 0x0  nop
    ctx->pc = 0x414e2cu;
    // NOP
    ctx->pc = 0x414e30u;
}
