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

// Function: sub_00498030
// Address: 0x498030 - 0x4981a8
void sub_00498030_0x498030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498030_0x498030");
#endif

    switch (ctx->pc) {
        case 0x49805cu: goto label_49805c;
        case 0x498064u: goto label_498064;
        case 0x498094u: goto label_498094;
        case 0x4980a0u: goto label_4980a0;
        case 0x4980d4u: goto label_4980d4;
        case 0x4980e4u: goto label_4980e4;
        case 0x498124u: goto label_498124;
        case 0x498150u: goto label_498150;
        case 0x498168u: goto label_498168;
        case 0x49817cu: goto label_49817c;
        case 0x49818cu: goto label_49818c;
        default: break;
    }

    ctx->pc = 0x498030u;

    // 0x498030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x498030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x498034: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x498034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x498038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x498038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49803c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49803cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498040: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x498040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x498044: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x498044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x498048: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x498048u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x49804c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x49804cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x498050: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x498050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x498054: 0xc12a492  jal         func_4A9248
    ctx->pc = 0x498054u;
    SET_GPR_U32(ctx, 31, 0x49805Cu);
    ctx->pc = 0x498058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498054u;
    // 0x498058: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9248u, 0x498054u, 0x49805Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49805Cu;
label_49805c:
    // 0x49805c: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x49805Cu;
    SET_GPR_U32(ctx, 31, 0x498064u);
    ctx->pc = 0x498060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49805Cu;
    // 0x498060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x49805Cu, 0x498064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498064u;
label_498064:
    // 0x498064: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x498064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x498068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x498068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49806c: 0x3e00008  jr          $ra
    ctx->pc = 0x49806Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49806Cu;
        // 0x498070: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49806Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498074u;
    // 0x498074: 0x0  nop
    ctx->pc = 0x498074u;
    // NOP
    // 0x498078: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x498078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49807c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x49807cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x498080: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x498080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x498084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x498084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x498088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49808c: 0xc12a47e  jal         func_4A91F8
    ctx->pc = 0x49808Cu;
    SET_GPR_U32(ctx, 31, 0x498094u);
    ctx->pc = 0x498090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49808Cu;
    // 0x498090: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A91F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A91F8u, 0x49808Cu, 0x498094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498094u;
label_498094:
    // 0x498094: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x498094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498098: 0xc12a448  jal         func_4A9120
    ctx->pc = 0x498098u;
    SET_GPR_U32(ctx, 31, 0x4980A0u);
    ctx->pc = 0x49809Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498098u;
    // 0x49809c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9120u, 0x498098u, 0x4980A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4980A0u;
label_4980a0:
    // 0x4980a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4980a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4980a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4980a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4980a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4980a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4980ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4980acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4980b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4980B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4980B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4980B0u;
        // 0x4980b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4980B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4980B8u;
    // 0x4980b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4980b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4980bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4980bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4980c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4980c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4980c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4980c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4980c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4980c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4980cc: 0xc12a45c  jal         func_4A9170
    ctx->pc = 0x4980CCu;
    SET_GPR_U32(ctx, 31, 0x4980D4u);
    ctx->pc = 0x4980D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4980CCu;
    // 0x4980d0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9170u, 0x4980CCu, 0x4980D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4980D4u;
label_4980d4:
    // 0x4980d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4980D4u;
    {
        const bool branch_taken_0x4980d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4980D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4980D4u;
        // 0x4980d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4980d4) {
            ctx->pc = 0x4980F0u;
            goto label_4980f0;
        }
    }
    ctx->pc = 0x4980DCu;
    // 0x4980dc: 0xc12a424  jal         func_4A9090
    ctx->pc = 0x4980DCu;
    SET_GPR_U32(ctx, 31, 0x4980E4u);
    ctx->pc = 0x4980E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4980DCu;
    // 0x4980e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9090u, 0x4980DCu, 0x4980E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4980E4u;
label_4980e4:
    // 0x4980e4: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x4980e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x4980e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4980E8u;
    {
        const bool branch_taken_0x4980e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4980ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4980E8u;
        // 0x4980ec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4980e8) {
            ctx->pc = 0x4980F4u;
            goto label_4980f4;
        }
    }
    ctx->pc = 0x4980F0u;
label_4980f0:
    // 0x4980f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4980f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4980f4:
    // 0x4980f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4980f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4980f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4980f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4980fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4980fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x498100: 0x3e00008  jr          $ra
    ctx->pc = 0x498100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x498104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498100u;
        // 0x498104: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498108u;
    // 0x498108: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x498108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x49810c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x49810cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x498110: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x498110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498114: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x498114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x498118: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x498118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x49811c: 0xc1033a6  jal         func_40CE98
    ctx->pc = 0x49811Cu;
    SET_GPR_U32(ctx, 31, 0x498124u);
    ctx->pc = 0x498120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49811Cu;
    // 0x498120: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CE98u, 0x49811Cu, 0x498124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498124u;
label_498124:
    // 0x498124: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x498124u;
    {
        const bool branch_taken_0x498124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x498128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498124u;
        // 0x498128: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498124) {
            ctx->pc = 0x49818Cu;
            goto label_49818c;
        }
    }
    ctx->pc = 0x49812Cu;
    // 0x49812c: 0x24020801  addiu       $v0, $zero, 0x801
    ctx->pc = 0x49812cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
    // 0x498130: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x498130u;
    {
        const bool branch_taken_0x498130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x498134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498130u;
        // 0x498134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498130) {
            ctx->pc = 0x498190u;
            goto label_498190;
        }
    }
    ctx->pc = 0x498138u;
    // 0x498138: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x498138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49813c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x49813Cu;
    {
        const bool branch_taken_0x49813c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x498140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49813Cu;
        // 0x498140: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49813c) {
            ctx->pc = 0x49818Cu;
            goto label_49818c;
        }
    }
    ctx->pc = 0x498144u;
    // 0x498144: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x498144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x498148: 0xc127ca4  jal         func_49F290
    ctx->pc = 0x498148u;
    SET_GPR_U32(ctx, 31, 0x498150u);
    ctx->pc = 0x49814Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498148u;
    // 0x49814c: 0x34a50809  ori         $a1, $a1, 0x809 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2057);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F290u, 0x498148u, 0x498150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498150u;
label_498150:
    // 0x498150: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x498150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498154: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x498154u;
    {
        const bool branch_taken_0x498154 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x498158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498154u;
        // 0x498158: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498154) {
            ctx->pc = 0x49818Cu;
            goto label_49818c;
        }
    }
    ctx->pc = 0x49815Cu;
    // 0x49815c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x49815cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498160: 0xc10480a  jal         func_412028
    ctx->pc = 0x498160u;
    SET_GPR_U32(ctx, 31, 0x498168u);
    ctx->pc = 0x498164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498160u;
    // 0x498164: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x498160u, 0x498168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498168u;
label_498168:
    // 0x498168: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x498168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x49816c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x49816Cu;
    {
        const bool branch_taken_0x49816c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x498170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49816Cu;
        // 0x498170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49816c) {
            ctx->pc = 0x498190u;
            goto label_498190;
        }
    }
    ctx->pc = 0x498174u;
    // 0x498174: 0xc125f16  jal         func_497C58
    ctx->pc = 0x498174u;
    SET_GPR_U32(ctx, 31, 0x49817Cu);
    ctx->pc = 0x498178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498174u;
    // 0x498178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x497C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497C58u, 0x498174u, 0x49817Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49817Cu;
label_49817c:
    // 0x49817c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49817Cu;
    {
        const bool branch_taken_0x49817c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x498180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49817Cu;
        // 0x498180: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49817c) {
            ctx->pc = 0x498190u;
            goto label_498190;
        }
    }
    ctx->pc = 0x498184u;
    // 0x498184: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x498184u;
    SET_GPR_U32(ctx, 31, 0x49818Cu);
    ctx->pc = 0x498188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498184u;
    // 0x498188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x498184u, 0x49818Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49818Cu;
label_49818c:
    // 0x49818c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49818cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_498190:
    // 0x498190: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x498190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x498194: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x498194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x498198: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x498198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49819c: 0x3e00008  jr          $ra
    ctx->pc = 0x49819Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4981A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49819Cu;
        // 0x4981a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49819Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4981A4u;
    // 0x4981a4: 0x0  nop
    ctx->pc = 0x4981a4u;
    // NOP
    ctx->pc = 0x4981a8u;
}
