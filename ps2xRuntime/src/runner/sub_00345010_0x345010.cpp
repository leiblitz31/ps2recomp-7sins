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

// Function: sub_00345010
// Address: 0x345010 - 0x345150
void sub_00345010_0x345010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345010_0x345010");
#endif

    switch (ctx->pc) {
        case 0x345010u: goto label_345010;
        case 0x345014u: goto label_345014;
        case 0x345018u: goto label_345018;
        case 0x34501cu: goto label_34501c;
        case 0x345020u: goto label_345020;
        case 0x345024u: goto label_345024;
        case 0x345028u: goto label_345028;
        case 0x34502cu: goto label_34502c;
        case 0x345030u: goto label_345030;
        case 0x345034u: goto label_345034;
        case 0x345038u: goto label_345038;
        case 0x34503cu: goto label_34503c;
        case 0x345040u: goto label_345040;
        case 0x345044u: goto label_345044;
        case 0x345048u: goto label_345048;
        case 0x34504cu: goto label_34504c;
        case 0x345050u: goto label_345050;
        case 0x345054u: goto label_345054;
        case 0x345058u: goto label_345058;
        case 0x34505cu: goto label_34505c;
        case 0x345060u: goto label_345060;
        case 0x345064u: goto label_345064;
        case 0x345068u: goto label_345068;
        case 0x34506cu: goto label_34506c;
        case 0x345070u: goto label_345070;
        case 0x345074u: goto label_345074;
        case 0x345078u: goto label_345078;
        case 0x34507cu: goto label_34507c;
        case 0x345080u: goto label_345080;
        case 0x345084u: goto label_345084;
        case 0x345088u: goto label_345088;
        case 0x34508cu: goto label_34508c;
        case 0x345090u: goto label_345090;
        case 0x345094u: goto label_345094;
        case 0x345098u: goto label_345098;
        case 0x34509cu: goto label_34509c;
        case 0x3450a0u: goto label_3450a0;
        case 0x3450a4u: goto label_3450a4;
        case 0x3450a8u: goto label_3450a8;
        case 0x3450acu: goto label_3450ac;
        case 0x3450b0u: goto label_3450b0;
        case 0x3450b4u: goto label_3450b4;
        case 0x3450b8u: goto label_3450b8;
        case 0x3450bcu: goto label_3450bc;
        case 0x3450c0u: goto label_3450c0;
        case 0x3450c4u: goto label_3450c4;
        case 0x3450c8u: goto label_3450c8;
        case 0x3450ccu: goto label_3450cc;
        case 0x3450d0u: goto label_3450d0;
        case 0x3450d4u: goto label_3450d4;
        case 0x3450d8u: goto label_3450d8;
        case 0x3450dcu: goto label_3450dc;
        case 0x3450e0u: goto label_3450e0;
        case 0x3450e4u: goto label_3450e4;
        case 0x3450e8u: goto label_3450e8;
        case 0x3450ecu: goto label_3450ec;
        case 0x3450f0u: goto label_3450f0;
        case 0x3450f4u: goto label_3450f4;
        case 0x3450f8u: goto label_3450f8;
        case 0x3450fcu: goto label_3450fc;
        case 0x345100u: goto label_345100;
        case 0x345104u: goto label_345104;
        case 0x345108u: goto label_345108;
        case 0x34510cu: goto label_34510c;
        case 0x345110u: goto label_345110;
        case 0x345114u: goto label_345114;
        case 0x345118u: goto label_345118;
        case 0x34511cu: goto label_34511c;
        case 0x345120u: goto label_345120;
        case 0x345124u: goto label_345124;
        case 0x345128u: goto label_345128;
        case 0x34512cu: goto label_34512c;
        case 0x345130u: goto label_345130;
        case 0x345134u: goto label_345134;
        case 0x345138u: goto label_345138;
        case 0x34513cu: goto label_34513c;
        case 0x345140u: goto label_345140;
        case 0x345144u: goto label_345144;
        case 0x345148u: goto label_345148;
        case 0x34514cu: goto label_34514c;
        default: break;
    }

    ctx->pc = 0x345010u;

label_345010:
    // 0x345010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x345010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_345014:
    // 0x345014: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x345014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_345018:
    // 0x345018: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x345018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_34501c:
    // 0x34501c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x34501cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_345020:
    // 0x345020: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x345020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_345024:
    // 0x345024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x345024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_345028:
    // 0x345028: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x345028u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34502c:
    // 0x34502c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x34502cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_345030:
    // 0x345030: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x345030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_345034:
    // 0x345034: 0xc0d120c  jal         func_344830
label_345038:
    if (ctx->pc == 0x345038u) {
        ctx->pc = 0x345038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345034u;
        // 0x345038: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34503Cu;
        goto label_34503c;
    }
    ctx->pc = 0x345034u;
    SET_GPR_U32(ctx, 31, 0x34503Cu);
    ctx->pc = 0x345038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345034u;
    // 0x345038: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x345034u, 0x34503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34503Cu;
label_34503c:
    // 0x34503c: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x34503cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_345040:
    // 0x345040: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x345040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_345044:
    // 0x345044: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
label_345048:
    if (ctx->pc == 0x345048u) {
        ctx->pc = 0x345048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345044u;
        // 0x345048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34504Cu;
        goto label_34504c;
    }
    ctx->pc = 0x345044u;
    {
        const bool branch_taken_0x345044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x345048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345044u;
        // 0x345048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345044) {
            ctx->pc = 0x345138u;
            goto label_345138;
        }
    }
    ctx->pc = 0x34504Cu;
label_34504c:
    // 0x34504c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x34504cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_345050:
    // 0x345050: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x345050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_345054:
    // 0x345054: 0xc0d120c  jal         func_344830
label_345058:
    if (ctx->pc == 0x345058u) {
        ctx->pc = 0x345058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345054u;
        // 0x345058: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34505Cu;
        goto label_34505c;
    }
    ctx->pc = 0x345054u;
    SET_GPR_U32(ctx, 31, 0x34505Cu);
    ctx->pc = 0x345058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345054u;
    // 0x345058: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x345054u, 0x34505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34505Cu;
label_34505c:
    // 0x34505c: 0xc0d434e  jal         func_350D38
label_345060:
    if (ctx->pc == 0x345060u) {
        ctx->pc = 0x345060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34505Cu;
        // 0x345060: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345064u;
        goto label_345064;
    }
    ctx->pc = 0x34505Cu;
    SET_GPR_U32(ctx, 31, 0x345064u);
    ctx->pc = 0x345060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34505Cu;
    // 0x345060: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350D38u, 0x34505Cu, 0x345064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345064u;
label_345064:
    // 0x345064: 0x8f83a858  lw          $v1, -0x57A8($gp)
    ctx->pc = 0x345064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_345068:
    // 0x345068: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x345068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
label_34506c:
    // 0x34506c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x34506cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_345070:
    // 0x345070: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x345070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_345074:
    // 0x345074: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x345074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_345078:
    // 0x345078: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x345078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
label_34507c:
    // 0x34507c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x34507cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_345080:
    // 0x345080: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x345080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_345084:
    // 0x345084: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x345084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_345088:
    // 0x345088: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x345088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_34508c:
    // 0x34508c: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x34508cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_345090:
    // 0x345090: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x345090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_345094:
    // 0x345094: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x345094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_345098:
    // 0x345098: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x345098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_34509c:
    // 0x34509c: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x34509cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
label_3450a0:
    // 0x3450a0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x3450a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_3450a4:
    // 0x3450a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3450a8:
    if (ctx->pc == 0x3450A8u) {
        ctx->pc = 0x3450A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3450A4u;
        // 0x3450a8: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3450ACu;
        goto label_3450ac;
    }
    ctx->pc = 0x3450A4u;
    {
        const bool branch_taken_0x3450a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3450A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3450A4u;
        // 0x3450a8: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3450a4) {
            ctx->pc = 0x3450B8u;
            goto label_3450b8;
        }
    }
    ctx->pc = 0x3450ACu;
label_3450ac:
    // 0x3450ac: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x3450acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_3450b0:
    // 0x3450b0: 0x40f809  jalr        $v0
label_3450b4:
    if (ctx->pc == 0x3450B4u) {
        ctx->pc = 0x3450B8u;
        goto label_3450b8;
    }
    ctx->pc = 0x3450B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3450B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3450B0u, 0x3450B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3450B8u;
label_3450b8:
    // 0x3450b8: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x3450b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_3450bc:
    // 0x3450bc: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3450bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_3450c0:
    // 0x3450c0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x3450c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_3450c4:
    // 0x3450c4: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_3450c8:
    if (ctx->pc == 0x3450C8u) {
        ctx->pc = 0x3450C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3450C4u;
        // 0x3450c8: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3450CCu;
        goto label_3450cc;
    }
    ctx->pc = 0x3450C4u;
    {
        const bool branch_taken_0x3450c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3450C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3450C4u;
        // 0x3450c8: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3450c4) {
            ctx->pc = 0x345128u;
            goto label_345128;
        }
    }
    ctx->pc = 0x3450CCu;
label_3450cc:
    // 0x3450cc: 0xc0d434e  jal         func_350D38
label_3450d0:
    if (ctx->pc == 0x3450D0u) {
        ctx->pc = 0x3450D4u;
        goto label_3450d4;
    }
    ctx->pc = 0x3450CCu;
    SET_GPR_U32(ctx, 31, 0x3450D4u);
    ctx->pc = 0x350D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350D38u, 0x3450CCu, 0x3450D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3450D4u;
label_3450d4:
    // 0x3450d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3450d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3450d8:
    // 0x3450d8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x3450d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3450dc:
    // 0x3450dc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3450dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3450e0:
    // 0x3450e0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3450e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3450e4:
    // 0x3450e4: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3450e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3450e8:
    // 0x3450e8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3450e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3450ec:
    // 0x3450ec: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x3450ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3450f0:
    // 0x3450f0: 0x2012  mflo        $a0
    ctx->pc = 0x3450f0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_3450f4:
    // 0x3450f4: 0x40f809  jalr        $v0
label_3450f8:
    if (ctx->pc == 0x3450F8u) {
        ctx->pc = 0x3450F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3450F4u;
        // 0x3450f8: 0x34a50130  ori         $a1, $a1, 0x130 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3450FCu;
        goto label_3450fc;
    }
    ctx->pc = 0x3450F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3450FCu);
        ctx->pc = 0x3450F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3450F4u;
        // 0x3450f8: 0x34a50130  ori         $a1, $a1, 0x130 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3450F4u, 0x3450FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3450FCu;
label_3450fc:
    // 0x3450fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3450fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_345100:
    // 0x345100: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_345104:
    if (ctx->pc == 0x345104u) {
        ctx->pc = 0x345104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345100u;
        // 0x345104: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345108u;
        goto label_345108;
    }
    ctx->pc = 0x345100u;
    {
        const bool branch_taken_0x345100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x345104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345100u;
        // 0x345104: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345100) {
            ctx->pc = 0x345110u;
            goto label_345110;
        }
    }
    ctx->pc = 0x345108u;
label_345108:
    // 0x345108: 0x10000008  b           . + 4 + (0x8 << 2)
label_34510c:
    if (ctx->pc == 0x34510Cu) {
        ctx->pc = 0x34510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345108u;
        // 0x34510c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345110u;
        goto label_345110;
    }
    ctx->pc = 0x345108u;
    {
        const bool branch_taken_0x345108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345108u;
        // 0x34510c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345108) {
            ctx->pc = 0x34512Cu;
            goto label_34512c;
        }
    }
    ctx->pc = 0x345110u;
label_345110:
    // 0x345110: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x345110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_345114:
    // 0x345114: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x345114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_345118:
    // 0x345118: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x345118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_34511c:
    // 0x34511c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34511cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_345120:
    // 0x345120: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x345120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_345124:
    // 0x345124: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x345124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_345128:
    // 0x345128: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x345128u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34512c:
    // 0x34512c: 0x701826  xor         $v1, $v1, $s0
    ctx->pc = 0x34512cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 16));
label_345130:
    // 0x345130: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x345130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_345134:
    // 0x345134: 0x243100a  movz        $v0, $s2, $v1
    ctx->pc = 0x345134u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
label_345138:
    // 0x345138: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x345138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_34513c:
    // 0x34513c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x34513cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_345140:
    // 0x345140: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x345140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_345144:
    // 0x345144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x345144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_345148:
    // 0x345148: 0x3e00008  jr          $ra
label_34514c:
    if (ctx->pc == 0x34514Cu) {
        ctx->pc = 0x34514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345148u;
        // 0x34514c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345150u;
        goto label_fallthrough_0x345148;
    }
    ctx->pc = 0x345148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345148u;
        // 0x34514c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x345148:
    ctx->pc = 0x345150u;
}
