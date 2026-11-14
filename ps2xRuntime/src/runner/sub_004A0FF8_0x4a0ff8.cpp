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

// Function: sub_004A0FF8
// Address: 0x4a0ff8 - 0x4a10b0
void sub_004A0FF8_0x4a0ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0FF8_0x4a0ff8");
#endif

    switch (ctx->pc) {
        case 0x4a0ff8u: goto label_4a0ff8;
        case 0x4a0ffcu: goto label_4a0ffc;
        case 0x4a1000u: goto label_4a1000;
        case 0x4a1004u: goto label_4a1004;
        case 0x4a1008u: goto label_4a1008;
        case 0x4a100cu: goto label_4a100c;
        case 0x4a1010u: goto label_4a1010;
        case 0x4a1014u: goto label_4a1014;
        case 0x4a1018u: goto label_4a1018;
        case 0x4a101cu: goto label_4a101c;
        case 0x4a1020u: goto label_4a1020;
        case 0x4a1024u: goto label_4a1024;
        case 0x4a1028u: goto label_4a1028;
        case 0x4a102cu: goto label_4a102c;
        case 0x4a1030u: goto label_4a1030;
        case 0x4a1034u: goto label_4a1034;
        case 0x4a1038u: goto label_4a1038;
        case 0x4a103cu: goto label_4a103c;
        case 0x4a1040u: goto label_4a1040;
        case 0x4a1044u: goto label_4a1044;
        case 0x4a1048u: goto label_4a1048;
        case 0x4a104cu: goto label_4a104c;
        case 0x4a1050u: goto label_4a1050;
        case 0x4a1054u: goto label_4a1054;
        case 0x4a1058u: goto label_4a1058;
        case 0x4a105cu: goto label_4a105c;
        case 0x4a1060u: goto label_4a1060;
        case 0x4a1064u: goto label_4a1064;
        case 0x4a1068u: goto label_4a1068;
        case 0x4a106cu: goto label_4a106c;
        case 0x4a1070u: goto label_4a1070;
        case 0x4a1074u: goto label_4a1074;
        case 0x4a1078u: goto label_4a1078;
        case 0x4a107cu: goto label_4a107c;
        case 0x4a1080u: goto label_4a1080;
        case 0x4a1084u: goto label_4a1084;
        case 0x4a1088u: goto label_4a1088;
        case 0x4a108cu: goto label_4a108c;
        case 0x4a1090u: goto label_4a1090;
        case 0x4a1094u: goto label_4a1094;
        case 0x4a1098u: goto label_4a1098;
        case 0x4a109cu: goto label_4a109c;
        case 0x4a10a0u: goto label_4a10a0;
        case 0x4a10a4u: goto label_4a10a4;
        case 0x4a10a8u: goto label_4a10a8;
        case 0x4a10acu: goto label_4a10ac;
        default: break;
    }

    ctx->pc = 0x4a0ff8u;

label_4a0ff8:
    // 0x4a0ff8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a0ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4a0ffc:
    // 0x4a0ffc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a0ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4a1000:
    // 0x4a1000: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a1000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a1004:
    // 0x4a1004: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a1004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a1008:
    // 0x4a1008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a1008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a100c:
    // 0x4a100c: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x4a100cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_4a1010:
    // 0x4a1010: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x4a1010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_4a1014:
    // 0x4a1014: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x4a1014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_4a1018:
    // 0x4a1018: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x4a1018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_4a101c:
    // 0x4a101c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a101cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a1020:
    // 0x4a1020: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_4a1024:
    if (ctx->pc == 0x4A1024u) {
        ctx->pc = 0x4A1024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1020u;
        // 0x4a1024: 0x26110024  addiu       $s1, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1028u;
        goto label_4a1028;
    }
    ctx->pc = 0x4A1020u;
    {
        const bool branch_taken_0x4a1020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1020u;
        // 0x4a1024: 0x26110024  addiu       $s1, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a1020) {
            ctx->pc = 0x4A1048u;
            goto label_4a1048;
        }
    }
    ctx->pc = 0x4A1028u;
label_4a1028:
    // 0x4a1028: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4a1028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a102c:
    // 0x4a102c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a102cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a1030:
    // 0x4a1030: 0xc12a4d4  jal         func_4A9350
label_4a1034:
    if (ctx->pc == 0x4A1034u) {
        ctx->pc = 0x4A1034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1030u;
        // 0x4a1034: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1038u;
        goto label_4a1038;
    }
    ctx->pc = 0x4A1030u;
    SET_GPR_U32(ctx, 31, 0x4A1038u);
    ctx->pc = 0x4A1034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1030u;
    // 0x4a1034: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9350u, 0x4A1030u, 0x4A1038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1038u;
label_4a1038:
    // 0x4a1038: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a1038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a103c:
    // 0x4a103c: 0xc12a47e  jal         func_4A91F8
label_4a1040:
    if (ctx->pc == 0x4A1040u) {
        ctx->pc = 0x4A1040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A103Cu;
        // 0x4a1040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1044u;
        goto label_4a1044;
    }
    ctx->pc = 0x4A103Cu;
    SET_GPR_U32(ctx, 31, 0x4A1044u);
    ctx->pc = 0x4A1040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A103Cu;
    // 0x4a1040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A91F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A91F8u, 0x4A103Cu, 0x4A1044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A1044u;
label_4a1044:
    // 0x4a1044: 0x26110034  addiu       $s1, $s0, 0x34
    ctx->pc = 0x4a1044u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
label_4a1048:
    // 0x4a1048: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4a1048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4a104c:
    // 0x4a104c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4a1050:
    if (ctx->pc == 0x4A1050u) {
        ctx->pc = 0x4A1050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A104Cu;
        // 0x4a1050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A1054u;
        goto label_4a1054;
    }
    ctx->pc = 0x4A104Cu;
    {
        const bool branch_taken_0x4a104c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A1050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A104Cu;
        // 0x4a1050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a104c) {
            ctx->pc = 0x4A106Cu;
            goto label_4a106c;
        }
    }
    ctx->pc = 0x4A1054u;
label_4a1054:
    // 0x4a1054: 0xc12a448  jal         func_4A9120
label_4a1058:
    if (ctx->pc == 0x4A1058u) {
        ctx->pc = 0x4A1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1054u;
        // 0x4a1058: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A105Cu;
        goto label_4a105c;
    }
    ctx->pc = 0x4A1054u;
    SET_GPR_U32(ctx, 31, 0x4A105Cu);
    ctx->pc = 0x4A1058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A1054u;
    // 0x4a1058: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9120u, 0x4A1054u, 0x4A105Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A105Cu;
label_4a105c:
    // 0x4a105c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4a105cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_4a1060:
    // 0x4a1060: 0x8c62e974  lw          $v0, -0x168C($v1)
    ctx->pc = 0x4a1060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961524)));
label_4a1064:
    // 0x4a1064: 0x40f809  jalr        $v0
label_4a1068:
    if (ctx->pc == 0x4A1068u) {
        ctx->pc = 0x4A1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1064u;
        // 0x4a1068: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A106Cu;
        goto label_4a106c;
    }
    ctx->pc = 0x4A1064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A106Cu);
        ctx->pc = 0x4A1068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A1064u;
        // 0x4a1068: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A1064u, 0x4A106Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A106Cu;
label_4a106c:
    // 0x4a106c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x4a106cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_4a1070:
    // 0x4a1070: 0x2783c1f0  addiu       $v1, $gp, -0x3E10
    ctx->pc = 0x4a1070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951408));
label_4a1074:
    // 0x4a1074: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x4a1074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_4a1078:
    // 0x4a1078: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x4a1078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_4a107c:
    // 0x4a107c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a107cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a1080:
    // 0x4a1080: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a1080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a1084:
    // 0x4a1084: 0x8f84c1f0  lw          $a0, -0x3E10($gp)
    ctx->pc = 0x4a1084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
label_4a1088:
    // 0x4a1088: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x4a1088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_4a108c:
    // 0x4a108c: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x4a108cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
label_4a1090:
    // 0x4a1090: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a1090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a1094:
    // 0x4a1094: 0x8f83c1f0  lw          $v1, -0x3E10($gp)
    ctx->pc = 0x4a1094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
label_4a1098:
    // 0x4a1098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a1098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a109c:
    // 0x4a109c: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x4a109cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_4a10a0:
    // 0x4a10a0: 0xaf85c1f0  sw          $a1, -0x3E10($gp)
    ctx->pc = 0x4a10a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951408), GPR_U32(ctx, 5));
label_4a10a4:
    // 0x4a10a4: 0x3e00008  jr          $ra
label_4a10a8:
    if (ctx->pc == 0x4A10A8u) {
        ctx->pc = 0x4A10A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A10A4u;
        // 0x4a10a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A10ACu;
        goto label_4a10ac;
    }
    ctx->pc = 0x4A10A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A10A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A10A4u;
        // 0x4a10a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A10A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A10ACu;
label_4a10ac:
    // 0x4a10ac: 0x0  nop
    ctx->pc = 0x4a10acu;
    // NOP
    ctx->pc = 0x4a10b0u;
}
