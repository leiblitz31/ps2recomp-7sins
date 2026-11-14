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

// Function: sub_0032AF38
// Address: 0x32af38 - 0x32b020
void sub_0032AF38_0x32af38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032AF38_0x32af38");
#endif

    switch (ctx->pc) {
        case 0x32af80u: goto label_32af80;
        case 0x32afc8u: goto label_32afc8;
        case 0x32afe0u: goto label_32afe0;
        default: break;
    }

    ctx->pc = 0x32af38u;

    // 0x32af38: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x32af38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32af3c: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x32AF3Cu;
    {
        const bool branch_taken_0x32af3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF3Cu;
        // 0x32af40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32af3c) {
            ctx->pc = 0x32B014u;
            goto label_32b014;
        }
    }
    ctx->pc = 0x32AF44u;
    // 0x32af44: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x32af44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32af48: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x32af48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32af4c: 0x31060003  andi        $a2, $t0, 0x3
    ctx->pc = 0x32af4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x32af50: 0x19000014  blez        $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x32AF50u;
    {
        const bool branch_taken_0x32af50 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x32AF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF50u;
        // 0x32af54: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32af50) {
            ctx->pc = 0x32AFA4u;
            goto label_32afa4;
        }
    }
    ctx->pc = 0x32AF58u;
    // 0x32af58: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x32AF58u;
    {
        const bool branch_taken_0x32af58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF58u;
        // 0x32af5c: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32af58) {
            ctx->pc = 0x32AFC0u;
            goto label_32afc0;
        }
    }
    ctx->pc = 0x32AF60u;
    // 0x32af60: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x32AF60u;
    {
        const bool branch_taken_0x32af60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32af60) {
            ctx->pc = 0x32AF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32AF60u;
            // 0x32af64: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32AFA8u;
            goto label_32afa8;
        }
    }
    ctx->pc = 0x32AF68u;
    // 0x32af68: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x32af68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x32af6c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x32AF6Cu;
    {
        const bool branch_taken_0x32af6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32af6c) {
            ctx->pc = 0x32AF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32AF6Cu;
            // 0x32af70: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32AF94u;
            goto label_32af94;
        }
    }
    ctx->pc = 0x32AF74u;
    // 0x32af74: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32af74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x32af78: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32AF78u;
    {
        const bool branch_taken_0x32af78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x32AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF78u;
        // 0x32af7c: 0x2483001c  addiu       $v1, $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32af78) {
            ctx->pc = 0x32AF88u;
            goto label_32af88;
        }
    }
    ctx->pc = 0x32AF80u;
label_32af80:
    // 0x32af80: 0x3e00008  jr          $ra
    ctx->pc = 0x32AF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF80u;
        // 0x32af84: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AF88u;
label_32af88:
    // 0x32af88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x32af88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32af8c: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x32af8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x32af90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32af90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32af94:
    // 0x32af94: 0x10a2fffa  beq         $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32AF94u;
    {
        const bool branch_taken_0x32af94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x32AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AF94u;
        // 0x32af98: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32af94) {
            ctx->pc = 0x32AF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32af80;
        }
    }
    ctx->pc = 0x32AF9Cu;
    // 0x32af9c: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x32af9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x32afa0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x32afa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_32afa4:
    // 0x32afa4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_32afa8:
    // 0x32afa8: 0x10a2fff5  beq         $a1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x32AFA8u;
    {
        const bool branch_taken_0x32afa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x32AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFA8u;
        // 0x32afac: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32afa8) {
            ctx->pc = 0x32AF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32af80;
        }
    }
    ctx->pc = 0x32AFB0u;
    // 0x32afb0: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x32afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x32afb4: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x32afb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x32afb8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x32AFB8u;
    {
        const bool branch_taken_0x32afb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFB8u;
        // 0x32afbc: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32afb8) {
            ctx->pc = 0x32B014u;
            goto label_32b014;
        }
    }
    ctx->pc = 0x32AFC0u;
label_32afc0:
    // 0x32afc0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x32afc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32afc4: 0x0  nop
    ctx->pc = 0x32afc4u;
    // NOP
label_32afc8:
    // 0x32afc8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x32afc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32afcc: 0x10a2ffec  beq         $a1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x32AFCCu;
    {
        const bool branch_taken_0x32afcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x32afcc) {
            ctx->pc = 0x32AF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32af80;
        }
    }
    ctx->pc = 0x32AFD4u;
    // 0x32afd4: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x32afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x32afd8: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32AFD8u;
    {
        const bool branch_taken_0x32afd8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x32AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFD8u;
        // 0x32afdc: 0x24830014  addiu       $v1, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32afd8) {
            ctx->pc = 0x32AFE8u;
            goto label_32afe8;
        }
    }
    ctx->pc = 0x32AFE0u;
label_32afe0:
    // 0x32afe0: 0x3e00008  jr          $ra
    ctx->pc = 0x32AFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFE0u;
        // 0x32afe4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AFE8u;
label_32afe8:
    // 0x32afe8: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x32afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x32afec: 0x10a2fffc  beq         $a1, $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x32AFECu;
    {
        const bool branch_taken_0x32afec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x32AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFECu;
        // 0x32aff0: 0x24830028  addiu       $v1, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32afec) {
            ctx->pc = 0x32AFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32afe0;
        }
    }
    ctx->pc = 0x32AFF4u;
    // 0x32aff4: 0x8cc2003c  lw          $v0, 0x3C($a2)
    ctx->pc = 0x32aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x32aff8: 0x10a2fff9  beq         $a1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x32AFF8u;
    {
        const bool branch_taken_0x32aff8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x32AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AFF8u;
        // 0x32affc: 0x2483003c  addiu       $v1, $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32aff8) {
            ctx->pc = 0x32AFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32afe0;
        }
    }
    ctx->pc = 0x32B000u;
    // 0x32b000: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x32b000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x32b004: 0x24c60050  addiu       $a2, $a2, 0x50
    ctx->pc = 0x32b004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x32b008: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x32b008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x32b00c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x32B00Cu;
    {
        const bool branch_taken_0x32b00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B00Cu;
        // 0x32b010: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b00c) {
            ctx->pc = 0x32AFC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32afc8;
        }
    }
    ctx->pc = 0x32B014u;
label_32b014:
    // 0x32b014: 0x3e00008  jr          $ra
    ctx->pc = 0x32B014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B014u;
        // 0x32b018: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B01Cu;
    // 0x32b01c: 0x0  nop
    ctx->pc = 0x32b01cu;
    // NOP
    ctx->pc = 0x32b020u;
}
