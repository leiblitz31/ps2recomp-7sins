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

// Function: sub_00411CA8
// Address: 0x411ca8 - 0x411d30
void sub_00411CA8_0x411ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00411CA8_0x411ca8");
#endif

    ctx->pc = 0x411ca8u;

    // 0x411ca8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x411ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x411cac: 0x8f83bdd0  lw          $v1, -0x4230($gp)
    ctx->pc = 0x411cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950352)));
    // 0x411cb0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x411cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411cb4: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x411cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x411cb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x411cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x411cbc: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x411cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x411cc0: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x411cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x411cc4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x411cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x411cc8: 0x10640012  beq         $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x411CC8u;
    {
        const bool branch_taken_0x411cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x411CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411CC8u;
        // 0x411ccc: 0x8f82bdd0  lw          $v0, -0x4230($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411cc8) {
            ctx->pc = 0x411D14u;
            goto label_411d14;
        }
    }
    ctx->pc = 0x411CD0u;
    // 0x411cd0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x411cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x411cd4: 0x54450007  bnel        $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x411CD4u;
    {
        const bool branch_taken_0x411cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x411cd4) {
            ctx->pc = 0x411CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x411CD4u;
            // 0x411cd8: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x411CF4u;
            goto label_411cf4;
        }
    }
    ctx->pc = 0x411CDCu;
    // 0x411cdc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x411cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x411ce0: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x411ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x411ce4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x411ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x411ce8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x411ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x411cec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x411CECu;
    {
        const bool branch_taken_0x411cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x411CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411CECu;
        // 0x411cf0: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411cec) {
            ctx->pc = 0x411D08u;
            goto label_411d08;
        }
    }
    ctx->pc = 0x411CF4u;
label_411cf4:
    // 0x411cf4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x411cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x411cf8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x411cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x411cfc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x411cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x411d00: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x411d00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x411d04: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x411d04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_411d08:
    // 0x411d08: 0xac840000  sw          $a0, 0x0($a0)
    ctx->pc = 0x411d08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
    // 0x411d0c: 0xac840004  sw          $a0, 0x4($a0)
    ctx->pc = 0x411d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 4));
    // 0x411d10: 0x8f82bdd0  lw          $v0, -0x4230($gp)
    ctx->pc = 0x411d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950352)));
label_411d14:
    // 0x411d14: 0x24c3e880  addiu       $v1, $a2, -0x1780
    ctx->pc = 0x411d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961280));
    // 0x411d18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x411d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x411d1c: 0xac440024  sw          $a0, 0x24($v0)
    ctx->pc = 0x411d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 4));
    // 0x411d20: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x411d20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
    // 0x411d24: 0x3e00008  jr          $ra
    ctx->pc = 0x411D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x411D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411D24u;
        // 0x411d28: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x411D2Cu;
    // 0x411d2c: 0x0  nop
    ctx->pc = 0x411d2cu;
    // NOP
    ctx->pc = 0x411d30u;
}
