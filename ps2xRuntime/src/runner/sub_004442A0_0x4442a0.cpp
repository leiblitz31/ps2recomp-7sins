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

// Function: sub_004442A0
// Address: 0x4442a0 - 0x444428
void sub_004442A0_0x4442a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004442A0_0x4442a0");
#endif

    switch (ctx->pc) {
        case 0x4442d8u: goto label_4442d8;
        case 0x4443b8u: goto label_4443b8;
        case 0x4443c4u: goto label_4443c4;
        case 0x4443d8u: goto label_4443d8;
        case 0x4443f8u: goto label_4443f8;
        case 0x444404u: goto label_444404;
        default: break;
    }

    ctx->pc = 0x4442a0u;

    // 0x4442a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4442a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4442a4: 0x8f82bf18  lw          $v0, -0x40E8($gp)
    ctx->pc = 0x4442a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x4442a8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4442a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x4442ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4442acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4442b0: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x4442b0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
    // 0x4442b4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4442b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x4442b8: 0x2633e880  addiu       $s3, $s1, -0x1780
    ctx->pc = 0x4442b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
    // 0x4442bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4442bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4442c0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4442c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x4442c4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4442c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x4442c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4442c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4442cc: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x4442ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x4442d0: 0xc111716  jal         func_445C58
    ctx->pc = 0x4442D0u;
    SET_GPR_U32(ctx, 31, 0x4442D8u);
    ctx->pc = 0x4442D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4442D0u;
    // 0x4442d4: 0x10802b  sltu        $s0, $zero, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C58u, 0x4442D0u, 0x4442D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4442D8u;
label_4442d8:
    // 0x4442d8: 0x12000043  beqz        $s0, . + 4 + (0x43 << 2)
    ctx->pc = 0x4442D8u;
    {
        const bool branch_taken_0x4442d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4442DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4442D8u;
        // 0x4442dc: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4442d8) {
            ctx->pc = 0x4443E8u;
            goto label_4443e8;
        }
    }
    ctx->pc = 0x4442E0u;
    // 0x4442e0: 0x8f82bf18  lw          $v0, -0x40E8($gp)
    ctx->pc = 0x4442e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x4442e4: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x4442e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x4442e8: 0x2cc50005  sltiu       $a1, $a2, 0x5
    ctx->pc = 0x4442e8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x4442ec: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x4442ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x4442f0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x4442f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x4442f4: 0x94830040  lhu         $v1, 0x40($a0)
    ctx->pc = 0x4442f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x4442f8: 0x2451004c  addiu       $s1, $v0, 0x4C
    ctx->pc = 0x4442f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x4442fc: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x4442fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x444300: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x444300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x444304: 0xae320024  sw          $s2, 0x24($s1)
    ctx->pc = 0x444304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 18));
    // 0x444308: 0x10a00026  beqz        $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x444308u;
    {
        const bool branch_taken_0x444308 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x44430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444308u;
        // 0x44430c: 0xae200028  sw          $zero, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444308) {
            ctx->pc = 0x4443A4u;
            goto label_4443a4;
        }
    }
    ctx->pc = 0x444310u;
    // 0x444310: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x444310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x444314: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x444314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x444318: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x444318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x44431c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x44431cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x444320: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x444320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x444324: 0x800008  jr          $a0
    ctx->pc = 0x444324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x44432Cu: goto label_44432c;
            case 0x444344u: goto label_444344;
            case 0x44435Cu: goto label_44435c;
            case 0x444374u: goto label_444374;
            case 0x44438Cu: goto label_44438c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444324u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x44432Cu;
label_44432c:
    // 0x44432c: 0x8f82bf18  lw          $v0, -0x40E8($gp)
    ctx->pc = 0x44432cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444330: 0x24e3e880  addiu       $v1, $a3, -0x1780
    ctx->pc = 0x444330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961280));
    // 0x444334: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x444334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x444338: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x444338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x44433c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x44433Cu;
    {
        const bool branch_taken_0x44433c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44433Cu;
        // 0x444340: 0xae240020  sw          $a0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44433c) {
            ctx->pc = 0x4443C8u;
            goto label_4443c8;
        }
    }
    ctx->pc = 0x444344u;
label_444344:
    // 0x444344: 0x8f82bf18  lw          $v0, -0x40E8($gp)
    ctx->pc = 0x444344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444348: 0x24e3e880  addiu       $v1, $a3, -0x1780
    ctx->pc = 0x444348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961280));
    // 0x44434c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x44434cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x444350: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x444350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x444354: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x444354u;
    {
        const bool branch_taken_0x444354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444354u;
        // 0x444358: 0xae240020  sw          $a0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444354) {
            ctx->pc = 0x4443C8u;
            goto label_4443c8;
        }
    }
    ctx->pc = 0x44435Cu;
label_44435c:
    // 0x44435c: 0x8f82bf18  lw          $v0, -0x40E8($gp)
    ctx->pc = 0x44435cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444360: 0x24e3e880  addiu       $v1, $a3, -0x1780
    ctx->pc = 0x444360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961280));
    // 0x444364: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x444364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x444368: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x444368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x44436c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x44436Cu;
    {
        const bool branch_taken_0x44436c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44436Cu;
        // 0x444370: 0xae240020  sw          $a0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44436c) {
            ctx->pc = 0x4443C8u;
            goto label_4443c8;
        }
    }
    ctx->pc = 0x444374u;
label_444374:
    // 0x444374: 0x8f82bf18  lw          $v0, -0x40E8($gp)
    ctx->pc = 0x444374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444378: 0x24e3e880  addiu       $v1, $a3, -0x1780
    ctx->pc = 0x444378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961280));
    // 0x44437c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x44437cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x444380: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x444380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x444384: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x444384u;
    {
        const bool branch_taken_0x444384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x444388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444384u;
        // 0x444388: 0xae240020  sw          $a0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x444384) {
            ctx->pc = 0x4443C8u;
            goto label_4443c8;
        }
    }
    ctx->pc = 0x44438Cu;
label_44438c:
    // 0x44438c: 0x8f82bf18  lw          $v0, -0x40E8($gp)
    ctx->pc = 0x44438cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
    // 0x444390: 0x24e3e880  addiu       $v1, $a3, -0x1780
    ctx->pc = 0x444390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961280));
    // 0x444394: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x444394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x444398: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x444398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x44439c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x44439Cu;
    {
        const bool branch_taken_0x44439c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4443A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44439Cu;
        // 0x4443a0: 0xae240020  sw          $a0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44439c) {
            ctx->pc = 0x4443C8u;
            goto label_4443c8;
        }
    }
    ctx->pc = 0x4443A4u;
label_4443a4:
    // 0x4443a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4443a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4443a8: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x4443a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4443ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4443acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4443b0: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x4443B0u;
    SET_GPR_U32(ctx, 31, 0x4443B8u);
    ctx->pc = 0x4443B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4443B0u;
    // 0x4443b4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x4443B0u, 0x4443B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4443B8u;
label_4443b8:
    // 0x4443b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4443b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4443bc: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x4443BCu;
    SET_GPR_U32(ctx, 31, 0x4443C4u);
    ctx->pc = 0x4443C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4443BCu;
    // 0x4443c0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x4443BCu, 0x4443C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4443C4u;
label_4443c4:
    // 0x4443c4: 0x0  nop
    ctx->pc = 0x4443c4u;
    // NOP
label_4443c8:
    // 0x4443c8: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x4443c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x4443cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4443ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4443d0: 0xc111718  jal         func_445C60
    ctx->pc = 0x4443D0u;
    SET_GPR_U32(ctx, 31, 0x4443D8u);
    ctx->pc = 0x4443D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4443D0u;
    // 0x4443d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x4443D0u, 0x4443D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4443D8u;
label_4443d8:
    // 0x4443d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4443D8u;
    {
        const bool branch_taken_0x4443d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4443DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4443D8u;
        // 0x4443dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4443d8) {
            ctx->pc = 0x444408u;
            goto label_444408;
        }
    }
    ctx->pc = 0x4443E0u;
    // 0x4443e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4443E0u;
    {
        const bool branch_taken_0x4443e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4443E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4443E0u;
        // 0x4443e4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4443e0) {
            ctx->pc = 0x444410u;
            goto label_444410;
        }
    }
    ctx->pc = 0x4443E8u;
label_4443e8:
    // 0x4443e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4443e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4443ec: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x4443ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x4443f0: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x4443F0u;
    SET_GPR_U32(ctx, 31, 0x4443F8u);
    ctx->pc = 0x4443F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4443F0u;
    // 0x4443f4: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x4443F0u, 0x4443F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4443F8u;
label_4443f8:
    // 0x4443f8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x4443f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x4443fc: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x4443FCu;
    SET_GPR_U32(ctx, 31, 0x444404u);
    ctx->pc = 0x444400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4443FCu;
    // 0x444400: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x4443FCu, 0x444404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x444404u;
label_444404:
    // 0x444404: 0x0  nop
    ctx->pc = 0x444404u;
    // NOP
label_444408:
    // 0x444408: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x444408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44440c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x44440cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_444410:
    // 0x444410: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x444410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x444414: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x444414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x444418: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x444418u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44441c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44441cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x444420: 0x3e00008  jr          $ra
    ctx->pc = 0x444420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444420u;
        // 0x444424: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x444428u;
}
