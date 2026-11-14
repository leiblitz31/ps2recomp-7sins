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

// Function: sub_004A8FE0
// Address: 0x4a8fe0 - 0x4a9090
void sub_004A8FE0_0x4a8fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8FE0_0x4a8fe0");
#endif

    switch (ctx->pc) {
        case 0x4a8fe0u: goto label_4a8fe0;
        case 0x4a8fe4u: goto label_4a8fe4;
        case 0x4a8fe8u: goto label_4a8fe8;
        case 0x4a8fecu: goto label_4a8fec;
        case 0x4a8ff0u: goto label_4a8ff0;
        case 0x4a8ff4u: goto label_4a8ff4;
        case 0x4a8ff8u: goto label_4a8ff8;
        case 0x4a8ffcu: goto label_4a8ffc;
        case 0x4a9000u: goto label_4a9000;
        case 0x4a9004u: goto label_4a9004;
        case 0x4a9008u: goto label_4a9008;
        case 0x4a900cu: goto label_4a900c;
        case 0x4a9010u: goto label_4a9010;
        case 0x4a9014u: goto label_4a9014;
        case 0x4a9018u: goto label_4a9018;
        case 0x4a901cu: goto label_4a901c;
        case 0x4a9020u: goto label_4a9020;
        case 0x4a9024u: goto label_4a9024;
        case 0x4a9028u: goto label_4a9028;
        case 0x4a902cu: goto label_4a902c;
        case 0x4a9030u: goto label_4a9030;
        case 0x4a9034u: goto label_4a9034;
        case 0x4a9038u: goto label_4a9038;
        case 0x4a903cu: goto label_4a903c;
        case 0x4a9040u: goto label_4a9040;
        case 0x4a9044u: goto label_4a9044;
        case 0x4a9048u: goto label_4a9048;
        case 0x4a904cu: goto label_4a904c;
        case 0x4a9050u: goto label_4a9050;
        case 0x4a9054u: goto label_4a9054;
        case 0x4a9058u: goto label_4a9058;
        case 0x4a905cu: goto label_4a905c;
        case 0x4a9060u: goto label_4a9060;
        case 0x4a9064u: goto label_4a9064;
        case 0x4a9068u: goto label_4a9068;
        case 0x4a906cu: goto label_4a906c;
        case 0x4a9070u: goto label_4a9070;
        case 0x4a9074u: goto label_4a9074;
        case 0x4a9078u: goto label_4a9078;
        case 0x4a907cu: goto label_4a907c;
        case 0x4a9080u: goto label_4a9080;
        case 0x4a9084u: goto label_4a9084;
        case 0x4a9088u: goto label_4a9088;
        case 0x4a908cu: goto label_4a908c;
        default: break;
    }

    ctx->pc = 0x4a8fe0u;

label_4a8fe0:
    // 0x4a8fe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a8fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4a8fe4:
    // 0x4a8fe4: 0x10850007  beq         $a0, $a1, . + 4 + (0x7 << 2)
label_4a8fe8:
    if (ctx->pc == 0x4A8FE8u) {
        ctx->pc = 0x4A8FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8FE4u;
        // 0x4a8fe8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8FECu;
        goto label_4a8fec;
    }
    ctx->pc = 0x4A8FE4u;
    {
        const bool branch_taken_0x4a8fe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x4A8FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8FE4u;
        // 0x4a8fe8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8fe4) {
            ctx->pc = 0x4A9004u;
            goto label_4a9004;
        }
    }
    ctx->pc = 0x4A8FECu;
label_4a8fec:
    // 0x4a8fec: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4a8fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_4a8ff0:
    // 0x4a8ff0: 0x8c62e968  lw          $v0, -0x1698($v1)
    ctx->pc = 0x4a8ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961512)));
label_4a8ff4:
    // 0x4a8ff4: 0x40f809  jalr        $v0
label_4a8ff8:
    if (ctx->pc == 0x4A8FF8u) {
        ctx->pc = 0x4A8FFCu;
        goto label_4a8ffc;
    }
    ctx->pc = 0x4A8FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A8FFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8FF4u, 0x4A8FFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A8FFCu;
label_4a8ffc:
    // 0x4a8ffc: 0x10000003  b           . + 4 + (0x3 << 2)
label_4a9000:
    if (ctx->pc == 0x4A9000u) {
        ctx->pc = 0x4A9000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8FFCu;
        // 0x4a9000: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9004u;
        goto label_4a9004;
    }
    ctx->pc = 0x4A8FFCu;
    {
        const bool branch_taken_0x4a8ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8FFCu;
        // 0x4a9000: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8ffc) {
            ctx->pc = 0x4A900Cu;
            goto label_4a900c;
        }
    }
    ctx->pc = 0x4A9004u;
label_4a9004:
    // 0x4a9004: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a9004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a9008:
    // 0x4a9008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a9008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a900c:
    // 0x4a900c: 0x3e00008  jr          $ra
label_4a9010:
    if (ctx->pc == 0x4A9010u) {
        ctx->pc = 0x4A9010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A900Cu;
        // 0x4a9010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9014u;
        goto label_4a9014;
    }
    ctx->pc = 0x4A900Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A900Cu;
        // 0x4a9010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A900Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9014u;
label_4a9014:
    // 0x4a9014: 0x0  nop
    ctx->pc = 0x4a9014u;
    // NOP
label_4a9018:
    // 0x4a9018: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a9018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4a901c:
    // 0x4a901c: 0x3c080066  lui         $t0, 0x66
    ctx->pc = 0x4a901cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)102 << 16));
label_4a9020:
    // 0x4a9020: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x4a9020u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
label_4a9024:
    // 0x4a9024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a9024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a9028:
    // 0x4a9028: 0x250888a8  addiu       $t0, $t0, -0x7758
    ctx->pc = 0x4a9028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294936744));
label_4a902c:
    // 0x4a902c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x4a902cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4a9030:
    // 0x4a9030: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4a9030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4a9034:
    // 0x4a9034: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x4a9034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4a9038:
    // 0x4a9038: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a9038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a903c:
    // 0x4a903c: 0xc12aa26  jal         func_4AA898
label_4a9040:
    if (ctx->pc == 0x4A9040u) {
        ctx->pc = 0x4A9040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A903Cu;
        // 0x4a9040: 0x35290802  ori         $t1, $t1, 0x802 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2050);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9044u;
        goto label_4a9044;
    }
    ctx->pc = 0x4A903Cu;
    SET_GPR_U32(ctx, 31, 0x4A9044u);
    ctx->pc = 0x4A9040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A903Cu;
    // 0x4a9040: 0x35290802  ori         $t1, $t1, 0x802 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2050);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA898u, 0x4A903Cu, 0x4A9044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9044u;
label_4a9044:
    // 0x4a9044: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4a9048:
    if (ctx->pc == 0x4A9048u) {
        ctx->pc = 0x4A9048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9044u;
        // 0x4a9048: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A904Cu;
        goto label_4a904c;
    }
    ctx->pc = 0x4A9044u;
    {
        const bool branch_taken_0x4a9044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9044u;
        // 0x4a9048: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9044) {
            ctx->pc = 0x4A9054u;
            goto label_4a9054;
        }
    }
    ctx->pc = 0x4A904Cu;
label_4a904c:
    // 0x4a904c: 0x10000003  b           . + 4 + (0x3 << 2)
label_4a9050:
    if (ctx->pc == 0x4A9050u) {
        ctx->pc = 0x4A9050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A904Cu;
        // 0x4a9050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9054u;
        goto label_4a9054;
    }
    ctx->pc = 0x4A904Cu;
    {
        const bool branch_taken_0x4a904c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A904Cu;
        // 0x4a9050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a904c) {
            ctx->pc = 0x4A905Cu;
            goto label_4a905c;
        }
    }
    ctx->pc = 0x4A9054u;
label_4a9054:
    // 0x4a9054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a9054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a9058:
    // 0x4a9058: 0xaf83b860  sw          $v1, -0x47A0($gp)
    ctx->pc = 0x4a9058u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948960), GPR_U32(ctx, 3));
label_4a905c:
    // 0x4a905c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a905cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a9060:
    // 0x4a9060: 0x3e00008  jr          $ra
label_4a9064:
    if (ctx->pc == 0x4A9064u) {
        ctx->pc = 0x4A9064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9060u;
        // 0x4a9064: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9068u;
        goto label_4a9068;
    }
    ctx->pc = 0x4A9060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9060u;
        // 0x4a9064: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9068u;
label_4a9068:
    // 0x4a9068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a9068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4a906c:
    // 0x4a906c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4a906cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4a9070:
    // 0x4a9070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a9070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a9074:
    // 0x4a9074: 0xc12aa86  jal         func_4AAA18
label_4a9078:
    if (ctx->pc == 0x4A9078u) {
        ctx->pc = 0x4A9078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9074u;
        // 0x4a9078: 0x248488a8  addiu       $a0, $a0, -0x7758 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A907Cu;
        goto label_4a907c;
    }
    ctx->pc = 0x4A9074u;
    SET_GPR_U32(ctx, 31, 0x4A907Cu);
    ctx->pc = 0x4A9078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9074u;
    // 0x4a9078: 0x248488a8  addiu       $a0, $a0, -0x7758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x4A9074u, 0x4A907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A907Cu;
label_4a907c:
    // 0x4a907c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a907cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a9080:
    // 0x4a9080: 0xaf80b860  sw          $zero, -0x47A0($gp)
    ctx->pc = 0x4a9080u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948960), GPR_U32(ctx, 0));
label_4a9084:
    // 0x4a9084: 0x3e00008  jr          $ra
label_4a9088:
    if (ctx->pc == 0x4A9088u) {
        ctx->pc = 0x4A9088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9084u;
        // 0x4a9088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A908Cu;
        goto label_4a908c;
    }
    ctx->pc = 0x4A9084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9084u;
        // 0x4a9088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A908Cu;
label_4a908c:
    // 0x4a908c: 0x0  nop
    ctx->pc = 0x4a908cu;
    // NOP
    ctx->pc = 0x4a9090u;
}
