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

// Function: sub_002F7538
// Address: 0x2f7538 - 0x2f7970
void sub_002F7538_0x2f7538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7538_0x2f7538");
#endif

    switch (ctx->pc) {
        case 0x2f757cu: goto label_2f757c;
        case 0x2f7584u: goto label_2f7584;
        case 0x2f759cu: goto label_2f759c;
        case 0x2f75a4u: goto label_2f75a4;
        case 0x2f75b0u: goto label_2f75b0;
        case 0x2f75c4u: goto label_2f75c4;
        case 0x2f75d4u: goto label_2f75d4;
        case 0x2f75f0u: goto label_2f75f0;
        case 0x2f75f8u: goto label_2f75f8;
        case 0x2f7618u: goto label_2f7618;
        case 0x2f762cu: goto label_2f762c;
        case 0x2f764cu: goto label_2f764c;
        case 0x2f7658u: goto label_2f7658;
        case 0x2f76a8u: goto label_2f76a8;
        case 0x2f76d4u: goto label_2f76d4;
        case 0x2f76e8u: goto label_2f76e8;
        case 0x2f770cu: goto label_2f770c;
        case 0x2f7720u: goto label_2f7720;
        case 0x2f7790u: goto label_2f7790;
        case 0x2f7798u: goto label_2f7798;
        case 0x2f77a4u: goto label_2f77a4;
        case 0x2f77bcu: goto label_2f77bc;
        case 0x2f77d0u: goto label_2f77d0;
        case 0x2f77e0u: goto label_2f77e0;
        case 0x2f7804u: goto label_2f7804;
        case 0x2f7818u: goto label_2f7818;
        case 0x2f7838u: goto label_2f7838;
        case 0x2f7840u: goto label_2f7840;
        case 0x2f7880u: goto label_2f7880;
        case 0x2f7894u: goto label_2f7894;
        case 0x2f78acu: goto label_2f78ac;
        case 0x2f78dcu: goto label_2f78dc;
        case 0x2f78f0u: goto label_2f78f0;
        case 0x2f7910u: goto label_2f7910;
        case 0x2f7918u: goto label_2f7918;
        case 0x2f7930u: goto label_2f7930;
        case 0x2f7944u: goto label_2f7944;
        default: break;
    }

    ctx->pc = 0x2f7538u;

label_2f7538:
    // 0x2f7538: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2f7538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2f753c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2f753cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2f7540: 0x3c16004f  lui         $s6, 0x4F
    ctx->pc = 0x2f7540u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)79 << 16));
    // 0x2f7544: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f7544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f7548: 0x8ec2ef10  lw          $v0, -0x10F0($s6)
    ctx->pc = 0x2f7548u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4EEF10u));
    // 0x2f754c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f754cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7550: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2f7550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2f7554: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2f7554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2f7558: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2f7558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2f755c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2f755cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2f7560: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f7560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f7564: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f7564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f7568: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7568u;
    {
        const bool branch_taken_0x2f7568 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7568u;
        // 0x2f756c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7568) {
            ctx->pc = 0x2F757Cu;
            goto label_2f757c;
        }
    }
    ctx->pc = 0x2F7570u;
    // 0x2f7570: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f7570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f7574: 0xc0c0212  jal         func_300848
    ctx->pc = 0x2F7574u;
    SET_GPR_U32(ctx, 31, 0x2F757Cu);
    ctx->pc = 0x2F7578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7574u;
    // 0x2f7578: 0x24849bb8  addiu       $a0, $a0, -0x6448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300848u, 0x2F7574u, 0x2F757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F757Cu;
label_2f757c:
    // 0x2f757c: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x2F757Cu;
    SET_GPR_U32(ctx, 31, 0x2F7584u);
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x2F757Cu, 0x2F7584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7584u;
label_2f7584:
    // 0x2f7584: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2f7584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x2f7588: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f7588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f758c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F758Cu;
    {
        const bool branch_taken_0x2f758c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f758c) {
            ctx->pc = 0x2F759Cu;
            goto label_2f759c;
        }
    }
    ctx->pc = 0x2F7594u;
    // 0x2f7594: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x2F7594u;
    SET_GPR_U32(ctx, 31, 0x2F759Cu);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x2F7594u, 0x2F759Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F759Cu;
label_2f759c:
    // 0x2f759c: 0xc0bd9d4  jal         func_2F6750
    ctx->pc = 0x2F759Cu;
    SET_GPR_U32(ctx, 31, 0x2F75A4u);
    ctx->pc = 0x2F75A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F759Cu;
    // 0x2f75a0: 0x3c13004f  lui         $s3, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)79 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6750u, 0x2F759Cu, 0x2F75A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F75A4u;
label_2f75a4:
    // 0x2f75a4: 0x8e64ef2c  lw          $a0, -0x10D4($s3)
    ctx->pc = 0x2f75a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962988)));
    // 0x2f75a8: 0xc0bf6ec  jal         func_2FDBB0
    ctx->pc = 0x2F75A8u;
    SET_GPR_U32(ctx, 31, 0x2F75B0u);
    ctx->pc = 0x2FDBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBB0u, 0x2F75A8u, 0x2F75B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F75B0u;
label_2f75b0:
    // 0x2f75b0: 0x8e63ef2c  lw          $v1, -0x10D4($s3)
    ctx->pc = 0x2f75b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962988)));
    // 0x2f75b4: 0x1462005b  bne         $v1, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2F75B4u;
    {
        const bool branch_taken_0x2f75b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F75B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F75B4u;
        // 0x2f75b8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f75b4) {
            ctx->pc = 0x2F7724u;
            goto label_2f7724;
        }
    }
    ctx->pc = 0x2F75BCu;
    // 0x2f75bc: 0xc0bdbf6  jal         func_2F6FD8
    ctx->pc = 0x2F75BCu;
    SET_GPR_U32(ctx, 31, 0x2F75C4u);
    ctx->pc = 0x2F75C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F75BCu;
    // 0x2f75c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6FD8u, 0x2F75BCu, 0x2F75C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F75C4u;
label_2f75c4:
    // 0x2f75c4: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2F75C4u;
    {
        const bool branch_taken_0x2f75c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F75C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F75C4u;
        // 0x2f75c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f75c4) {
            ctx->pc = 0x2F76DCu;
            goto label_2f76dc;
        }
    }
    ctx->pc = 0x2F75CCu;
    // 0x2f75cc: 0xc0c0448  jal         func_301120
    ctx->pc = 0x2F75CCu;
    SET_GPR_U32(ctx, 31, 0x2F75D4u);
    ctx->pc = 0x2F75D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F75CCu;
    // 0x2f75d0: 0x3c11004f  lui         $s1, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)79 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301120u, 0x2F75CCu, 0x2F75D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F75D4u;
label_2f75d4:
    // 0x2f75d4: 0x8e22ef50  lw          $v0, -0x10B0($s1)
    ctx->pc = 0x2f75d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963024)));
    // 0x2f75d8: 0x441002c  bgez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2F75D8u;
    {
        const bool branch_taken_0x2f75d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F75DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F75D8u;
        // 0x2f75dc: 0x3c150061  lui         $s5, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f75d8) {
            ctx->pc = 0x2F768Cu;
            goto label_2f768c;
        }
    }
    ctx->pc = 0x2F75E0u;
    // 0x2f75e0: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x2f75e0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
    // 0x2f75e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F75E4u;
    {
        const bool branch_taken_0x2f75e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F75E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F75E4u;
        // 0x2f75e8: 0x3c17004f  lui         $s7, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f75e4) {
            ctx->pc = 0x2F7614u;
            goto label_2f7614;
        }
    }
    ctx->pc = 0x2F75ECu;
    // 0x2f75ec: 0x0  nop
    ctx->pc = 0x2f75ecu;
    // NOP
label_2f75f0:
    // 0x2f75f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f75f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f75f4: 0x0  nop
    ctx->pc = 0x2f75f4u;
    // NOP
label_2f75f8:
    // 0x2f75f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f75f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f75fc: 0x0  nop
    ctx->pc = 0x2f75fcu;
    // NOP
    // 0x2f7600: 0x0  nop
    ctx->pc = 0x2f7600u;
    // NOP
    // 0x2f7604: 0x0  nop
    ctx->pc = 0x2f7604u;
    // NOP
    // 0x2f7608: 0x0  nop
    ctx->pc = 0x2f7608u;
    // NOP
    // 0x2f760c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F760Cu;
    {
        const bool branch_taken_0x2f760c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f760c) {
            ctx->pc = 0x2F75F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f75f8;
        }
    }
    ctx->pc = 0x2F7614u;
label_2f7614:
    // 0x2f7614: 0x26b0c5d0  addiu       $s0, $s5, -0x3A30
    ctx->pc = 0x2f7614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952400));
label_2f7618:
    // 0x2f7618: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f7618u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f761c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f761cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7620: 0x34a5059a  ori         $a1, $a1, 0x59A
    ctx->pc = 0x2f7620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1434);
    // 0x2f7624: 0xc0c0632  jal         func_3018C8
    ctx->pc = 0x2F7624u;
    SET_GPR_U32(ctx, 31, 0x2F762Cu);
    ctx->pc = 0x2F7628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7624u;
    // 0x2f7628: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3018C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3018C8u, 0x2F7624u, 0x2F762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F762Cu;
label_2f762c:
    // 0x2f762c: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F762Cu;
    {
        const bool branch_taken_0x2f762c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f762c) {
            ctx->pc = 0x2F7630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F762Cu;
            // 0x2f7630: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F767Cu;
            goto label_2f767c;
        }
    }
    ctx->pc = 0x2F7634u;
    // 0x2f7634: 0x8ec2ef10  lw          $v0, -0x10F0($s6)
    ctx->pc = 0x2f7634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962960)));
    // 0x2f7638: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F7638u;
    {
        const bool branch_taken_0x2f7638 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7638u;
        // 0x2f763c: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7638) {
            ctx->pc = 0x2F7650u;
            goto label_2f7650;
        }
    }
    ctx->pc = 0x2F7640u;
    // 0x2f7640: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f7640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f7644: 0xc0c0212  jal         func_300848
    ctx->pc = 0x2F7644u;
    SET_GPR_U32(ctx, 31, 0x2F764Cu);
    ctx->pc = 0x2F7648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7644u;
    // 0x2f7648: 0x24849bd0  addiu       $a0, $a0, -0x6430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300848u, 0x2F7644u, 0x2F764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F764Cu;
label_2f764c:
    // 0x2f764c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2f764cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_2f7650:
    // 0x2f7650: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f7650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f7654: 0x0  nop
    ctx->pc = 0x2f7654u;
    // NOP
label_2f7658:
    // 0x2f7658: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f7658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f765c: 0x0  nop
    ctx->pc = 0x2f765cu;
    // NOP
    // 0x2f7660: 0x0  nop
    ctx->pc = 0x2f7660u;
    // NOP
    // 0x2f7664: 0x0  nop
    ctx->pc = 0x2f7664u;
    // NOP
    // 0x2f7668: 0x0  nop
    ctx->pc = 0x2f7668u;
    // NOP
    // 0x2f766c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F766Cu;
    {
        const bool branch_taken_0x2f766c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f766c) {
            ctx->pc = 0x2F7658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7658;
        }
    }
    ctx->pc = 0x2F7674u;
    // 0x2f7674: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x2F7674u;
    {
        const bool branch_taken_0x2f7674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7674u;
        // 0x2f7678: 0x26b0c5d0  addiu       $s0, $s5, -0x3A30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7674) {
            ctx->pc = 0x2F7618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7618;
        }
    }
    ctx->pc = 0x2F767Cu;
label_2f767c:
    // 0x2f767c: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2F767Cu;
    {
        const bool branch_taken_0x2f767c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F767Cu;
        // 0x2f7680: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f767c) {
            ctx->pc = 0x2F75F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f75f0;
        }
    }
    ctx->pc = 0x2F7684u;
    // 0x2f7684: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7684u;
    {
        const bool branch_taken_0x2f7684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7684u;
        // 0x2f7688: 0xae20ef50  sw          $zero, -0x10B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294963024), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7684) {
            ctx->pc = 0x2F7694u;
            goto label_2f7694;
        }
    }
    ctx->pc = 0x2F768Cu;
label_2f768c:
    // 0x2f768c: 0x3c140061  lui         $s4, 0x61
    ctx->pc = 0x2f768cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)97 << 16));
    // 0x2f7690: 0x3c17004f  lui         $s7, 0x4F
    ctx->pc = 0x2f7690u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)79 << 16));
label_2f7694:
    // 0x2f7694: 0x2690c610  addiu       $s0, $s4, -0x39F0
    ctx->pc = 0x2f7694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952464));
    // 0x2f7698: 0xae92c610  sw          $s2, -0x39F0($s4)
    ctx->pc = 0x2f7698u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294952464), GPR_U32(ctx, 18));
    // 0x2f769c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f769cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f76a0: 0xc0c041c  jal         func_301070
    ctx->pc = 0x2F76A0u;
    SET_GPR_U32(ctx, 31, 0x2F76A8u);
    ctx->pc = 0x2F76A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F76A0u;
    // 0x2f76a4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301070u, 0x2F76A0u, 0x2F76A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F76A8u;
label_2f76a8:
    // 0x2f76a8: 0x26f10100  addiu       $s1, $s7, 0x100
    ctx->pc = 0x2f76a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 256));
    // 0x2f76ac: 0x26a4c5d0  addiu       $a0, $s5, -0x3A30
    ctx->pc = 0x2f76acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952400));
    // 0x2f76b0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2f76b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f76b4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f76b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f76b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f76b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f76bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f76bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f76c0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2f76c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f76c4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2f76c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f76c8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2f76c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f76cc: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x2F76CCu;
    SET_GPR_U32(ctx, 31, 0x2F76D4u);
    ctx->pc = 0x2F76D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F76CCu;
    // 0x2f76d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x2F76CCu, 0x2F76D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F76D4u;
label_2f76d4:
    // 0x2f76d4: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F76D4u;
    {
        const bool branch_taken_0x2f76d4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f76d4) {
            ctx->pc = 0x2F76D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F76D4u;
            // 0x2f76d8: 0x8ec2ef10  lw          $v0, -0x10F0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962960)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F76FCu;
            goto label_2f76fc;
        }
    }
    ctx->pc = 0x2F76DCu;
label_2f76dc:
    // 0x2f76dc: 0x8e64ef2c  lw          $a0, -0x10D4($s3)
    ctx->pc = 0x2f76dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962988)));
    // 0x2f76e0: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x2F76E0u;
    SET_GPR_U32(ctx, 31, 0x2F76E8u);
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x2F76E0u, 0x2F76E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F76E8u;
label_2f76e8:
    // 0x2f76e8: 0x3a440008  xori        $a0, $s2, 0x8
    ctx->pc = 0x2f76e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
    // 0x2f76ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f76ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f76f0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f76f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f76f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F76F4u;
    {
        const bool branch_taken_0x2f76f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F76F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F76F4u;
        // 0x2f76f8: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f76f4) {
            ctx->pc = 0x2F7724u;
            goto label_2f7724;
        }
    }
    ctx->pc = 0x2F76FCu;
label_2f76fc:
    // 0x2f76fc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F76FCu;
    {
        const bool branch_taken_0x2f76fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F7700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F76FCu;
        // 0x2f7700: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f76fc) {
            ctx->pc = 0x2F770Cu;
            goto label_2f770c;
        }
    }
    ctx->pc = 0x2F7704u;
    // 0x2f7704: 0xc0c0212  jal         func_300848
    ctx->pc = 0x2F7704u;
    SET_GPR_U32(ctx, 31, 0x2F770Cu);
    ctx->pc = 0x2F7708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7704u;
    // 0x2f7708: 0x24849bf0  addiu       $a0, $a0, -0x6410 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300848u, 0x2F7704u, 0x2F770Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F770Cu;
label_2f770c:
    // 0x2f770c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2f770cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2f7710: 0x8e64ef2c  lw          $a0, -0x10D4($s3)
    ctx->pc = 0x2f7710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962988)));
    // 0x2f7714: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x2f7714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x2f7718: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x2F7718u;
    SET_GPR_U32(ctx, 31, 0x2F7720u);
    ctx->pc = 0x2F771Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7718u;
    // 0x2f771c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x2F7718u, 0x2F7720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7720u;
label_2f7720:
    // 0x2f7720: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f7720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f7724:
    // 0x2f7724: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2f7724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f7728: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2f7728u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f772c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2f772cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f7730: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2f7730u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f7734: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2f7734u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f7738: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f7738u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f773c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f773cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7740: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f7740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7744: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f7744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7748: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7748u;
        // 0x2f774c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7750u;
    // 0x2f7750: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2f7750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2f7754: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2f7754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2f7758: 0x3c16004f  lui         $s6, 0x4F
    ctx->pc = 0x2f7758u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)79 << 16));
    // 0x2f775c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f775cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f7760: 0x8ec2ef10  lw          $v0, -0x10F0($s6)
    ctx->pc = 0x2f7760u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4EEF10u));
    // 0x2f7764: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f7764u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7768: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2f7768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2f776c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2f776cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2f7770: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2f7770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2f7774: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f7774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f7778: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f7778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f777c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F777Cu;
    {
        const bool branch_taken_0x2f777c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F7780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F777Cu;
        // 0x2f7780: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f777c) {
            ctx->pc = 0x2F7790u;
            goto label_2f7790;
        }
    }
    ctx->pc = 0x2F7784u;
    // 0x2f7784: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f7784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f7788: 0xc0c0212  jal         func_300848
    ctx->pc = 0x2F7788u;
    SET_GPR_U32(ctx, 31, 0x2F7790u);
    ctx->pc = 0x2F778Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7788u;
    // 0x2f778c: 0x24849c08  addiu       $a0, $a0, -0x63F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300848u, 0x2F7788u, 0x2F7790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7790u;
label_2f7790:
    // 0x2f7790: 0xc0bd9d4  jal         func_2F6750
    ctx->pc = 0x2F7790u;
    SET_GPR_U32(ctx, 31, 0x2F7798u);
    ctx->pc = 0x2F7794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7790u;
    // 0x2f7794: 0x3c14004f  lui         $s4, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)79 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6750u, 0x2F7790u, 0x2F7798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7798u;
label_2f7798:
    // 0x2f7798: 0x8e84ef30  lw          $a0, -0x10D0($s4)
    ctx->pc = 0x2f7798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962992)));
    // 0x2f779c: 0xc0bf6ec  jal         func_2FDBB0
    ctx->pc = 0x2F779Cu;
    SET_GPR_U32(ctx, 31, 0x2F77A4u);
    ctx->pc = 0x2FDBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBB0u, 0x2F779Cu, 0x2F77A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F77A4u;
label_2f77a4:
    // 0x2f77a4: 0x8e83ef30  lw          $v1, -0x10D0($s4)
    ctx->pc = 0x2f77a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962992)));
    // 0x2f77a8: 0x14620052  bne         $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2F77A8u;
    {
        const bool branch_taken_0x2f77a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F77ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77A8u;
        // 0x2f77ac: 0x3a440008  xori        $a0, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f77a8) {
            ctx->pc = 0x2F78F4u;
            goto label_2f78f4;
        }
    }
    ctx->pc = 0x2F77B0u;
    // 0x2f77b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f77b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f77b4: 0xc0c0448  jal         func_301120
    ctx->pc = 0x2F77B4u;
    SET_GPR_U32(ctx, 31, 0x2F77BCu);
    ctx->pc = 0x2F77B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F77B4u;
    // 0x2f77b8: 0x3c13004f  lui         $s3, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)79 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301120u, 0x2F77B4u, 0x2F77BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F77BCu;
label_2f77bc:
    // 0x2f77bc: 0x8e62ef50  lw          $v0, -0x10B0($s3)
    ctx->pc = 0x2f77bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294963024)));
    // 0x2f77c0: 0x441002c  bgez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2F77C0u;
    {
        const bool branch_taken_0x2f77c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2F77C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77C0u;
        // 0x2f77c4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f77c0) {
            ctx->pc = 0x2F7874u;
            goto label_2f7874;
        }
    }
    ctx->pc = 0x2F77C8u;
    // 0x2f77c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2F77C8u;
    {
        const bool branch_taken_0x2f77c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F77CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77C8u;
        // 0x2f77cc: 0x3c150061  lui         $s5, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f77c8) {
            ctx->pc = 0x2F7800u;
            goto label_2f7800;
        }
    }
    ctx->pc = 0x2F77D0u;
label_2f77d0:
    // 0x2f77d0: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x2F77D0u;
    {
        const bool branch_taken_0x2f77d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F77D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77D0u;
        // 0x2f77d4: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f77d0) {
            ctx->pc = 0x2F7904u;
            goto label_2f7904;
        }
    }
    ctx->pc = 0x2F77D8u;
    // 0x2f77d8: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x2f77d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x2f77dc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2f77dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f77e0:
    // 0x2f77e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f77e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f77e4: 0x0  nop
    ctx->pc = 0x2f77e4u;
    // NOP
    // 0x2f77e8: 0x0  nop
    ctx->pc = 0x2f77e8u;
    // NOP
    // 0x2f77ec: 0x0  nop
    ctx->pc = 0x2f77ecu;
    // NOP
    // 0x2f77f0: 0x0  nop
    ctx->pc = 0x2f77f0u;
    // NOP
    // 0x2f77f4: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F77F4u;
    {
        const bool branch_taken_0x2f77f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2f77f4) {
            ctx->pc = 0x2F77E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f77e0;
        }
    }
    ctx->pc = 0x2F77FCu;
    // 0x2f77fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f77fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f7800:
    // 0x2f7800: 0x26b0c5d0  addiu       $s0, $s5, -0x3A30
    ctx->pc = 0x2f7800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952400));
label_2f7804:
    // 0x2f7804: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f7804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f7808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f780c: 0x34a5059c  ori         $a1, $a1, 0x59C
    ctx->pc = 0x2f780cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1436);
    // 0x2f7810: 0xc0c0632  jal         func_3018C8
    ctx->pc = 0x2F7810u;
    SET_GPR_U32(ctx, 31, 0x2F7818u);
    ctx->pc = 0x2F7814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7810u;
    // 0x2f7814: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3018C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3018C8u, 0x2F7810u, 0x2F7818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7818u;
label_2f7818:
    // 0x2f7818: 0x4430012  bgezl       $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F7818u;
    {
        const bool branch_taken_0x2f7818 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f7818) {
            ctx->pc = 0x2F781Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7818u;
            // 0x2f781c: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7864u;
            goto label_2f7864;
        }
    }
    ctx->pc = 0x2F7820u;
    // 0x2f7820: 0x8ec2ef10  lw          $v0, -0x10F0($s6)
    ctx->pc = 0x2f7820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962960)));
    // 0x2f7824: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F7824u;
    {
        const bool branch_taken_0x2f7824 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F7828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7824u;
        // 0x2f7828: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7824) {
            ctx->pc = 0x2F783Cu;
            goto label_2f783c;
        }
    }
    ctx->pc = 0x2F782Cu;
    // 0x2f782c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f782cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f7830: 0xc0c0212  jal         func_300848
    ctx->pc = 0x2F7830u;
    SET_GPR_U32(ctx, 31, 0x2F7838u);
    ctx->pc = 0x2F7834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7830u;
    // 0x2f7834: 0x24849bd0  addiu       $a0, $a0, -0x6430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300848u, 0x2F7830u, 0x2F7838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7838u;
label_2f7838:
    // 0x2f7838: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x2f7838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_2f783c:
    // 0x2f783c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f783cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f7840:
    // 0x2f7840: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f7840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f7844: 0x0  nop
    ctx->pc = 0x2f7844u;
    // NOP
    // 0x2f7848: 0x0  nop
    ctx->pc = 0x2f7848u;
    // NOP
    // 0x2f784c: 0x0  nop
    ctx->pc = 0x2f784cu;
    // NOP
    // 0x2f7850: 0x0  nop
    ctx->pc = 0x2f7850u;
    // NOP
    // 0x2f7854: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F7854u;
    {
        const bool branch_taken_0x2f7854 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f7854) {
            ctx->pc = 0x2F7840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7840;
        }
    }
    ctx->pc = 0x2F785Cu;
    // 0x2f785c: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x2F785Cu;
    {
        const bool branch_taken_0x2f785c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F785Cu;
        // 0x2f7860: 0x26b0c5d0  addiu       $s0, $s5, -0x3A30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f785c) {
            ctx->pc = 0x2F7804u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7804;
        }
    }
    ctx->pc = 0x2F7864u;
label_2f7864:
    // 0x2f7864: 0x1040ffda  beqz        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2F7864u;
    {
        const bool branch_taken_0x2f7864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7864u;
        // 0x2f7868: 0x2a220011  slti        $v0, $s1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7864) {
            ctx->pc = 0x2F77D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f77d0;
        }
    }
    ctx->pc = 0x2F786Cu;
    // 0x2f786c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F786Cu;
    {
        const bool branch_taken_0x2f786c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F786Cu;
        // 0x2f7870: 0xae60ef50  sw          $zero, -0x10B0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294963024), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f786c) {
            ctx->pc = 0x2F7878u;
            goto label_2f7878;
        }
    }
    ctx->pc = 0x2F7874u;
label_2f7874:
    // 0x2f7874: 0x3c150061  lui         $s5, 0x61
    ctx->pc = 0x2f7874u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
label_2f7878:
    // 0x2f7878: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x2F7878u;
    SET_GPR_U32(ctx, 31, 0x2F7880u);
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x2F7878u, 0x2F7880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7880u;
label_2f7880:
    // 0x2f7880: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x2f7880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x2f7884: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7884u;
    {
        const bool branch_taken_0x2f7884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7884) {
            ctx->pc = 0x2F7894u;
            goto label_2f7894;
        }
    }
    ctx->pc = 0x2F788Cu;
    // 0x2f788c: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x2F788Cu;
    SET_GPR_U32(ctx, 31, 0x2F7894u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x2F788Cu, 0x2F7894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7894u;
label_2f7894:
    // 0x2f7894: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2f7894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2f7898: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2f7898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f789c: 0x2450c610  addiu       $s0, $v0, -0x39F0
    ctx->pc = 0x2f789cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952464));
    // 0x2f78a0: 0xac52c610  sw          $s2, -0x39F0($v0)
    ctx->pc = 0x2f78a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x60C610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C610u, _value); } while (0);
    // 0x2f78a4: 0xc0c041c  jal         func_301070
    ctx->pc = 0x2F78A4u;
    SET_GPR_U32(ctx, 31, 0x2F78ACu);
    ctx->pc = 0x2F78A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F78A4u;
    // 0x2f78a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301070u, 0x2F78A4u, 0x2F78ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F78ACu;
label_2f78ac:
    // 0x2f78ac: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f78acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f78b0: 0x26a4c5d0  addiu       $a0, $s5, -0x3A30
    ctx->pc = 0x2f78b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952400));
    // 0x2f78b4: 0x24510980  addiu       $s1, $v0, 0x980
    ctx->pc = 0x2f78b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2432));
    // 0x2f78b8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2f78b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f78bc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f78bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f78c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f78c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f78c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f78c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f78c8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2f78c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f78cc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2f78ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f78d0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2f78d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f78d4: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x2F78D4u;
    SET_GPR_U32(ctx, 31, 0x2F78DCu);
    ctx->pc = 0x2F78D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F78D4u;
    // 0x2f78d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x2F78D4u, 0x2F78DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F78DCu;
label_2f78dc:
    // 0x2f78dc: 0x4430010  bgezl       $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F78DCu;
    {
        const bool branch_taken_0x2f78dc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f78dc) {
            ctx->pc = 0x2F78E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F78DCu;
            // 0x2f78e0: 0x8ec2ef10  lw          $v0, -0x10F0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962960)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7920u;
            goto label_2f7920;
        }
    }
    ctx->pc = 0x2F78E4u;
    // 0x2f78e4: 0x8e84ef30  lw          $a0, -0x10D0($s4)
    ctx->pc = 0x2f78e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962992)));
    // 0x2f78e8: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x2F78E8u;
    SET_GPR_U32(ctx, 31, 0x2F78F0u);
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x2F78E8u, 0x2F78F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F78F0u;
label_2f78f0:
    // 0x2f78f0: 0x3a440008  xori        $a0, $s2, 0x8
    ctx->pc = 0x2f78f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
label_2f78f4:
    // 0x2f78f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f78f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f78f8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f78f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f78fc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2F78FCu;
    {
        const bool branch_taken_0x2f78fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F78FCu;
        // 0x2f7900: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f78fc) {
            ctx->pc = 0x2F7948u;
            goto label_2f7948;
        }
    }
    ctx->pc = 0x2F7904u;
label_2f7904:
    // 0x2f7904: 0x8e84ef30  lw          $a0, -0x10D0($s4)
    ctx->pc = 0x2f7904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962992)));
    // 0x2f7908: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x2F7908u;
    SET_GPR_U32(ctx, 31, 0x2F7910u);
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x2F7908u, 0x2F7910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7910u;
label_2f7910:
    // 0x2f7910: 0xc0bdd4e  jal         func_2F7538
    ctx->pc = 0x2F7910u;
    SET_GPR_U32(ctx, 31, 0x2F7918u);
    ctx->pc = 0x2F7914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7910u;
    // 0x2f7914: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7538u;
    goto label_2f7538;
    ctx->pc = 0x2F7918u;
label_2f7918:
    // 0x2f7918: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2F7918u;
    {
        const bool branch_taken_0x2f7918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7918u;
        // 0x2f791c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7918) {
            ctx->pc = 0x2F794Cu;
            goto label_2f794c;
        }
    }
    ctx->pc = 0x2F7920u;
label_2f7920:
    // 0x2f7920: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7920u;
    {
        const bool branch_taken_0x2f7920 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F7924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7920u;
        // 0x2f7924: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7920) {
            ctx->pc = 0x2F7930u;
            goto label_2f7930;
        }
    }
    ctx->pc = 0x2F7928u;
    // 0x2f7928: 0xc0c0212  jal         func_300848
    ctx->pc = 0x2F7928u;
    SET_GPR_U32(ctx, 31, 0x2F7930u);
    ctx->pc = 0x2F792Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7928u;
    // 0x2f792c: 0x24849bf0  addiu       $a0, $a0, -0x6410 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300848u, 0x2F7928u, 0x2F7930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7930u;
label_2f7930:
    // 0x2f7930: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2f7930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2f7934: 0x8e84ef30  lw          $a0, -0x10D0($s4)
    ctx->pc = 0x2f7934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294962992)));
    // 0x2f7938: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x2f7938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x2f793c: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x2F793Cu;
    SET_GPR_U32(ctx, 31, 0x2F7944u);
    ctx->pc = 0x2F7940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F793Cu;
    // 0x2f7940: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x2F793Cu, 0x2F7944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7944u;
label_2f7944:
    // 0x2f7944: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f7944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f7948:
    // 0x2f7948: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2f7948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2f794c:
    // 0x2f794c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2f794cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f7950: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2f7950u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f7954: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2f7954u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f7958: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f7958u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f795c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f795cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7960: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f7960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7964: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f7964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7968: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7968u;
        // 0x2f796c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7970u;
}
