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

// Function: sub_00308000
// Address: 0x308000 - 0x3080b0
void sub_00308000_0x308000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308000_0x308000");
#endif

    switch (ctx->pc) {
        case 0x308018u: goto label_308018;
        case 0x308038u: goto label_308038;
        case 0x308050u: goto label_308050;
        case 0x308058u: goto label_308058;
        case 0x308060u: goto label_308060;
        case 0x30806cu: goto label_30806c;
        case 0x308070u: goto label_308070;
        case 0x308078u: goto label_308078;
        case 0x308088u: goto label_308088;
        default: break;
    }

    ctx->pc = 0x308000u;

    // 0x308000: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x308000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x308004: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x308004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x308008: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x308008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x30800c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x30800cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x308010: 0xc0c1fe6  jal         func_307F98
    ctx->pc = 0x308010u;
    SET_GPR_U32(ctx, 31, 0x308018u);
    ctx->pc = 0x308014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308010u;
    // 0x308014: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307F98u, 0x308010u, 0x308018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308018u;
label_308018:
    // 0x308018: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x308018u;
    {
        const bool branch_taken_0x308018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308018u;
        // 0x30801c: 0x3c02004f  lui         $v0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308018) {
            ctx->pc = 0x308094u;
            goto label_308094;
        }
    }
    ctx->pc = 0x308020u;
    // 0x308020: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x308020u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x308024: 0x24501a60  addiu       $s0, $v0, 0x1A60
    ctx->pc = 0x308024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 6752));
    // 0x308028: 0x8c441a60  lw          $a0, 0x1A60($v0)
    ctx->pc = 0x308028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6752)));
    // 0x30802c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x30802cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x308030: 0xc0c1fcc  jal         func_307F30
    ctx->pc = 0x308030u;
    SET_GPR_U32(ctx, 31, 0x308038u);
    ctx->pc = 0x308034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308030u;
    // 0x308034: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307F30u, 0x308030u, 0x308038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308038u;
label_308038:
    // 0x308038: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x308038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x30803c: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x30803cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x308040: 0x240607a8  addiu       $a2, $zero, 0x7A8
    ctx->pc = 0x308040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1960));
    // 0x308044: 0x24a512b8  addiu       $a1, $a1, 0x12B8
    ctx->pc = 0x308044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4792));
    // 0x308048: 0xc0c1fd0  jal         func_307F40
    ctx->pc = 0x308048u;
    SET_GPR_U32(ctx, 31, 0x308050u);
    ctx->pc = 0x30804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308048u;
    // 0x30804c: 0x34844000  ori         $a0, $a0, 0x4000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    ctx->in_delay_slot = false;
    ctx->pc = 0x307F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307F40u, 0x308048u, 0x308050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308050u;
label_308050:
    // 0x308050: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x308050u;
    SET_GPR_U32(ctx, 31, 0x308058u);
    ctx->pc = 0x308054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308050u;
    // 0x308054: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x308050u, 0x308058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308058u;
label_308058:
    // 0x308058: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x308058u;
    SET_GPR_U32(ctx, 31, 0x308060u);
    ctx->pc = 0x30805Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308058u;
    // 0x30805c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x308058u, 0x308060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308060u;
label_308060:
    // 0x308060: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x308060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x308064: 0xc0c1fcc  jal         func_307F30
    ctx->pc = 0x308064u;
    SET_GPR_U32(ctx, 31, 0x30806Cu);
    ctx->pc = 0x308068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308064u;
    // 0x308068: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307F30u, 0x308064u, 0x30806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30806Cu;
label_30806c:
    // 0x30806c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x30806cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_308070:
    // 0x308070: 0xc0c1fe2  jal         func_307F88
    ctx->pc = 0x308070u;
    SET_GPR_U32(ctx, 31, 0x308078u);
    ctx->pc = 0x308074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308070u;
    // 0x308074: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307F88u, 0x308070u, 0x308078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308078u;
label_308078:
    // 0x308078: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x308078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x30807c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30807cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308080: 0xc0c1fcc  jal         func_307F30
    ctx->pc = 0x308080u;
    SET_GPR_U32(ctx, 31, 0x308088u);
    ctx->pc = 0x308084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308080u;
    // 0x308084: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307F30u, 0x308080u, 0x308088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308088u;
label_308088:
    // 0x308088: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x308088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x30808c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x30808Cu;
    {
        const bool branch_taken_0x30808c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30808c) {
            ctx->pc = 0x308090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30808Cu;
            // 0x308090: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308070;
        }
    }
    ctx->pc = 0x308094u;
label_308094:
    // 0x308094: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x308094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x308098: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x308098u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30809c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x30809cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3080a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3080a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3080a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3080A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3080A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080A4u;
        // 0x3080a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3080A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3080ACu;
    // 0x3080ac: 0x0  nop
    ctx->pc = 0x3080acu;
    // NOP
    ctx->pc = 0x3080b0u;
}
