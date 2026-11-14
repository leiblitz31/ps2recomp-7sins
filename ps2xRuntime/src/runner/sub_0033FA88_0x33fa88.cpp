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

// Function: sub_0033FA88
// Address: 0x33fa88 - 0x33fb40
void sub_0033FA88_0x33fa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033FA88_0x33fa88");
#endif

    switch (ctx->pc) {
        case 0x33fabcu: goto label_33fabc;
        case 0x33fad4u: goto label_33fad4;
        case 0x33fae4u: goto label_33fae4;
        case 0x33faf4u: goto label_33faf4;
        case 0x33fb14u: goto label_33fb14;
        case 0x33fb24u: goto label_33fb24;
        default: break;
    }

    ctx->pc = 0x33fa88u;

    // 0x33fa88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33fa88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33fa8c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x33fa8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x33fa90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33fa90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33fa94: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33fa94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fa98: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x33fa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x33fa9c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33fa9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33faa0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33faa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33faa4: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33faa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33faa8: 0x34a50007  ori         $a1, $a1, 0x7
    ctx->pc = 0x33faa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
    // 0x33faac: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x33faacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x33fab0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x33fab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x33fab4: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33FAB4u;
    SET_GPR_U32(ctx, 31, 0x33FABCu);
    ctx->pc = 0x33FAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FAB4u;
    // 0x33fab8: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33FAB4u, 0x33FABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FABCu;
label_33fabc:
    // 0x33fabc: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x33FABCu;
    {
        const bool branch_taken_0x33fabc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FABCu;
        // 0x33fac0: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fabc) {
            ctx->pc = 0x33FB24u;
            goto label_33fb24;
        }
    }
    ctx->pc = 0x33FAC4u;
    // 0x33fac4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33fac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fac8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33fac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33facc: 0xc10341a  jal         func_40D068
    ctx->pc = 0x33FACCu;
    SET_GPR_U32(ctx, 31, 0x33FAD4u);
    ctx->pc = 0x33FAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FACCu;
    // 0x33fad0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x33FACCu, 0x33FAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FAD4u;
label_33fad4:
    // 0x33fad4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33fad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fad8: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x33fad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x33fadc: 0xc10341a  jal         func_40D068
    ctx->pc = 0x33FADCu;
    SET_GPR_U32(ctx, 31, 0x33FAE4u);
    ctx->pc = 0x33FAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FADCu;
    // 0x33fae0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x33FADCu, 0x33FAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FAE4u;
label_33fae4:
    // 0x33fae4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33fae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fae8: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x33fae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x33faec: 0xc10341a  jal         func_40D068
    ctx->pc = 0x33FAECu;
    SET_GPR_U32(ctx, 31, 0x33FAF4u);
    ctx->pc = 0x33FAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FAECu;
    // 0x33faf0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x33FAECu, 0x33FAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FAF4u;
label_33faf4:
    // 0x33faf4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x33faf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33faf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33faf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33fafc: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x33FAFCu;
    {
        const bool branch_taken_0x33fafc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33fafc) {
            ctx->pc = 0x33FB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FAFCu;
            // 0x33fb00: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FB04u;
            goto label_33fb04;
        }
    }
    ctx->pc = 0x33FB04u;
label_33fb04:
    // 0x33fb04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33fb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fb08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33fb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fb0c: 0xc103440  jal         func_40D100
    ctx->pc = 0x33FB0Cu;
    SET_GPR_U32(ctx, 31, 0x33FB14u);
    ctx->pc = 0x33FB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FB0Cu;
    // 0x33fb10: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x33FB0Cu, 0x33FB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FB14u;
label_33fb14:
    // 0x33fb14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33fb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fb18: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x33fb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33fb1c: 0xc10341a  jal         func_40D068
    ctx->pc = 0x33FB1Cu;
    SET_GPR_U32(ctx, 31, 0x33FB24u);
    ctx->pc = 0x33FB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FB1Cu;
    // 0x33fb20: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x33FB1Cu, 0x33FB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FB24u;
label_33fb24:
    // 0x33fb24: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x33fb24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fb28: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x33fb28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33fb2c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x33fb2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33fb30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33fb30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33fb34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33fb34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33fb38: 0x3e00008  jr          $ra
    ctx->pc = 0x33FB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FB38u;
        // 0x33fb3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33FB40u;
}
