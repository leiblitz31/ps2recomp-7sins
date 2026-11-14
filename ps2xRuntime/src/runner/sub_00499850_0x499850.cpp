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

// Function: sub_00499850
// Address: 0x499850 - 0x499a30
void sub_00499850_0x499850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499850_0x499850");
#endif

    switch (ctx->pc) {
        case 0x499850u: goto label_499850;
        case 0x499854u: goto label_499854;
        case 0x499858u: goto label_499858;
        case 0x49985cu: goto label_49985c;
        case 0x499860u: goto label_499860;
        case 0x499864u: goto label_499864;
        case 0x499868u: goto label_499868;
        case 0x49986cu: goto label_49986c;
        case 0x499870u: goto label_499870;
        case 0x499874u: goto label_499874;
        case 0x499878u: goto label_499878;
        case 0x49987cu: goto label_49987c;
        case 0x499880u: goto label_499880;
        case 0x499884u: goto label_499884;
        case 0x499888u: goto label_499888;
        case 0x49988cu: goto label_49988c;
        case 0x499890u: goto label_499890;
        case 0x499894u: goto label_499894;
        case 0x499898u: goto label_499898;
        case 0x49989cu: goto label_49989c;
        case 0x4998a0u: goto label_4998a0;
        case 0x4998a4u: goto label_4998a4;
        case 0x4998a8u: goto label_4998a8;
        case 0x4998acu: goto label_4998ac;
        case 0x4998b0u: goto label_4998b0;
        case 0x4998b4u: goto label_4998b4;
        case 0x4998b8u: goto label_4998b8;
        case 0x4998bcu: goto label_4998bc;
        case 0x4998c0u: goto label_4998c0;
        case 0x4998c4u: goto label_4998c4;
        case 0x4998c8u: goto label_4998c8;
        case 0x4998ccu: goto label_4998cc;
        case 0x4998d0u: goto label_4998d0;
        case 0x4998d4u: goto label_4998d4;
        case 0x4998d8u: goto label_4998d8;
        case 0x4998dcu: goto label_4998dc;
        case 0x4998e0u: goto label_4998e0;
        case 0x4998e4u: goto label_4998e4;
        case 0x4998e8u: goto label_4998e8;
        case 0x4998ecu: goto label_4998ec;
        case 0x4998f0u: goto label_4998f0;
        case 0x4998f4u: goto label_4998f4;
        case 0x4998f8u: goto label_4998f8;
        case 0x4998fcu: goto label_4998fc;
        case 0x499900u: goto label_499900;
        case 0x499904u: goto label_499904;
        case 0x499908u: goto label_499908;
        case 0x49990cu: goto label_49990c;
        case 0x499910u: goto label_499910;
        case 0x499914u: goto label_499914;
        case 0x499918u: goto label_499918;
        case 0x49991cu: goto label_49991c;
        case 0x499920u: goto label_499920;
        case 0x499924u: goto label_499924;
        case 0x499928u: goto label_499928;
        case 0x49992cu: goto label_49992c;
        case 0x499930u: goto label_499930;
        case 0x499934u: goto label_499934;
        case 0x499938u: goto label_499938;
        case 0x49993cu: goto label_49993c;
        case 0x499940u: goto label_499940;
        case 0x499944u: goto label_499944;
        case 0x499948u: goto label_499948;
        case 0x49994cu: goto label_49994c;
        case 0x499950u: goto label_499950;
        case 0x499954u: goto label_499954;
        case 0x499958u: goto label_499958;
        case 0x49995cu: goto label_49995c;
        case 0x499960u: goto label_499960;
        case 0x499964u: goto label_499964;
        case 0x499968u: goto label_499968;
        case 0x49996cu: goto label_49996c;
        case 0x499970u: goto label_499970;
        case 0x499974u: goto label_499974;
        case 0x499978u: goto label_499978;
        case 0x49997cu: goto label_49997c;
        case 0x499980u: goto label_499980;
        case 0x499984u: goto label_499984;
        case 0x499988u: goto label_499988;
        case 0x49998cu: goto label_49998c;
        case 0x499990u: goto label_499990;
        case 0x499994u: goto label_499994;
        case 0x499998u: goto label_499998;
        case 0x49999cu: goto label_49999c;
        case 0x4999a0u: goto label_4999a0;
        case 0x4999a4u: goto label_4999a4;
        case 0x4999a8u: goto label_4999a8;
        case 0x4999acu: goto label_4999ac;
        case 0x4999b0u: goto label_4999b0;
        case 0x4999b4u: goto label_4999b4;
        case 0x4999b8u: goto label_4999b8;
        case 0x4999bcu: goto label_4999bc;
        case 0x4999c0u: goto label_4999c0;
        case 0x4999c4u: goto label_4999c4;
        case 0x4999c8u: goto label_4999c8;
        case 0x4999ccu: goto label_4999cc;
        case 0x4999d0u: goto label_4999d0;
        case 0x4999d4u: goto label_4999d4;
        case 0x4999d8u: goto label_4999d8;
        case 0x4999dcu: goto label_4999dc;
        case 0x4999e0u: goto label_4999e0;
        case 0x4999e4u: goto label_4999e4;
        case 0x4999e8u: goto label_4999e8;
        case 0x4999ecu: goto label_4999ec;
        case 0x4999f0u: goto label_4999f0;
        case 0x4999f4u: goto label_4999f4;
        case 0x4999f8u: goto label_4999f8;
        case 0x4999fcu: goto label_4999fc;
        case 0x499a00u: goto label_499a00;
        case 0x499a04u: goto label_499a04;
        case 0x499a08u: goto label_499a08;
        case 0x499a0cu: goto label_499a0c;
        case 0x499a10u: goto label_499a10;
        case 0x499a14u: goto label_499a14;
        case 0x499a18u: goto label_499a18;
        case 0x499a1cu: goto label_499a1c;
        case 0x499a20u: goto label_499a20;
        case 0x499a24u: goto label_499a24;
        case 0x499a28u: goto label_499a28;
        case 0x499a2cu: goto label_499a2c;
        default: break;
    }

    ctx->pc = 0x499850u;

label_499850:
    // 0x499850: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x499850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_499854:
    // 0x499854: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x499854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_499858:
    // 0x499858: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x499858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_49985c:
    // 0x49985c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49985cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_499860:
    // 0x499860: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x499860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_499864:
    // 0x499864: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x499864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_499868:
    // 0x499868: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x499868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_49986c:
    // 0x49986c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49986cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_499870:
    // 0x499870: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x499870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_499874:
    // 0x499874: 0x5090000a  beql        $a0, $s0, . + 4 + (0xA << 2)
label_499878:
    if (ctx->pc == 0x499878u) {
        ctx->pc = 0x499878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499874u;
        // 0x499878: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49987Cu;
        goto label_49987c;
    }
    ctx->pc = 0x499874u;
    {
        const bool branch_taken_0x499874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x499874) {
            ctx->pc = 0x499878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x499874u;
            // 0x499878: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4998A0u;
            goto label_4998a0;
        }
    }
    ctx->pc = 0x49987Cu;
label_49987c:
    // 0x49987c: 0x0  nop
    ctx->pc = 0x49987cu;
    // NOP
label_499880:
    // 0x499880: 0xc126614  jal         func_499850
label_499884:
    if (ctx->pc == 0x499884u) {
        ctx->pc = 0x499884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499880u;
        // 0x499884: 0x2484ffe8  addiu       $a0, $a0, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499888u;
        goto label_499888;
    }
    ctx->pc = 0x499880u;
    SET_GPR_U32(ctx, 31, 0x499888u);
    ctx->pc = 0x499884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499880u;
    // 0x499884: 0x2484ffe8  addiu       $a0, $a0, -0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499850u;
    goto label_499850;
    ctx->pc = 0x499888u;
label_499888:
    // 0x499888: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_49988c:
    if (ctx->pc == 0x49988Cu) {
        ctx->pc = 0x49988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499888u;
        // 0x49988c: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499890u;
        goto label_499890;
    }
    ctx->pc = 0x499888u;
    {
        const bool branch_taken_0x499888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499888u;
        // 0x49988c: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499888) {
            ctx->pc = 0x499950u;
            goto label_499950;
        }
    }
    ctx->pc = 0x499890u;
label_499890:
    // 0x499890: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x499890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_499894:
    // 0x499894: 0x1490fffa  bne         $a0, $s0, . + 4 + (-0x6 << 2)
label_499898:
    if (ctx->pc == 0x499898u) {
        ctx->pc = 0x49989Cu;
        goto label_49989c;
    }
    ctx->pc = 0x499894u;
    {
        const bool branch_taken_0x499894 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x499894) {
            ctx->pc = 0x499880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_499880;
        }
    }
    ctx->pc = 0x49989Cu;
label_49989c:
    // 0x49989c: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x49989cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_4998a0:
    // 0x4998a0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4998a4:
    if (ctx->pc == 0x4998A4u) {
        ctx->pc = 0x4998A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4998A0u;
        // 0x4998a4: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4998A8u;
        goto label_4998a8;
    }
    ctx->pc = 0x4998A0u;
    {
        const bool branch_taken_0x4998a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4998a0) {
            ctx->pc = 0x4998A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4998A0u;
            // 0x4998a4: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4998B4u;
            goto label_4998b4;
        }
    }
    ctx->pc = 0x4998A8u;
label_4998a8:
    // 0x4998a8: 0x40f809  jalr        $v0
label_4998ac:
    if (ctx->pc == 0x4998ACu) {
        ctx->pc = 0x4998ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4998A8u;
        // 0x4998ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4998B0u;
        goto label_4998b0;
    }
    ctx->pc = 0x4998A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4998B0u);
        ctx->pc = 0x4998ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4998A8u;
        // 0x4998ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4998A8u, 0x4998B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4998B0u;
label_4998b0:
    // 0x4998b0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4998b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4998b4:
    // 0x4998b4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x4998b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_4998b8:
    // 0x4998b8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_4998bc:
    if (ctx->pc == 0x4998BCu) {
        ctx->pc = 0x4998BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4998B8u;
        // 0x4998bc: 0x3c130066  lui         $s3, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4998C0u;
        goto label_4998c0;
    }
    ctx->pc = 0x4998B8u;
    {
        const bool branch_taken_0x4998b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4998BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4998B8u;
        // 0x4998bc: 0x3c130066  lui         $s3, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4998b8) {
            ctx->pc = 0x4998ECu;
            goto label_4998ec;
        }
    }
    ctx->pc = 0x4998C0u;
label_4998c0:
    // 0x4998c0: 0x8e32004c  lw          $s2, 0x4C($s1)
    ctx->pc = 0x4998c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_4998c4:
    // 0x4998c4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4998c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4998c8:
    // 0x4998c8: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x4998c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_4998cc:
    // 0x4998cc: 0x50900008  beql        $a0, $s0, . + 4 + (0x8 << 2)
label_4998d0:
    if (ctx->pc == 0x4998D0u) {
        ctx->pc = 0x4998D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4998CCu;
        // 0x4998d0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4998D4u;
        goto label_4998d4;
    }
    ctx->pc = 0x4998CCu;
    {
        const bool branch_taken_0x4998cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x4998cc) {
            ctx->pc = 0x4998D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4998CCu;
            // 0x4998d0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4998F0u;
            goto label_4998f0;
        }
    }
    ctx->pc = 0x4998D4u;
label_4998d4:
    // 0x4998d4: 0x0  nop
    ctx->pc = 0x4998d4u;
    // NOP
label_4998d8:
    // 0x4998d8: 0xc1275a0  jal         func_49D680
label_4998dc:
    if (ctx->pc == 0x4998DCu) {
        ctx->pc = 0x4998DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4998D8u;
        // 0x4998dc: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4998E0u;
        goto label_4998e0;
    }
    ctx->pc = 0x4998D8u;
    SET_GPR_U32(ctx, 31, 0x4998E0u);
    ctx->pc = 0x4998DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4998D8u;
    // 0x4998dc: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49D680u, 0x4998D8u, 0x4998E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4998E0u;
label_4998e0:
    // 0x4998e0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4998e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4998e4:
    // 0x4998e4: 0x1490fffc  bne         $a0, $s0, . + 4 + (-0x4 << 2)
label_4998e8:
    if (ctx->pc == 0x4998E8u) {
        ctx->pc = 0x4998ECu;
        goto label_4998ec;
    }
    ctx->pc = 0x4998E4u;
    {
        const bool branch_taken_0x4998e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x4998e4) {
            ctx->pc = 0x4998D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4998d8;
        }
    }
    ctx->pc = 0x4998ECu;
label_4998ec:
    // 0x4998ec: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4998ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4998f0:
    // 0x4998f0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x4998f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_4998f4:
    // 0x4998f4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_4998f8:
    if (ctx->pc == 0x4998F8u) {
        ctx->pc = 0x4998F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4998F4u;
        // 0x4998f8: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4998FCu;
        goto label_4998fc;
    }
    ctx->pc = 0x4998F4u;
    {
        const bool branch_taken_0x4998f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4998f4) {
            ctx->pc = 0x4998F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4998F4u;
            // 0x4998f8: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x499928u;
            goto label_499928;
        }
    }
    ctx->pc = 0x4998FCu;
label_4998fc:
    // 0x4998fc: 0x8e320050  lw          $s2, 0x50($s1)
    ctx->pc = 0x4998fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_499900:
    // 0x499900: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x499900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_499904:
    // 0x499904: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x499904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_499908:
    // 0x499908: 0x50900007  beql        $a0, $s0, . + 4 + (0x7 << 2)
label_49990c:
    if (ctx->pc == 0x49990Cu) {
        ctx->pc = 0x49990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499908u;
        // 0x49990c: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499910u;
        goto label_499910;
    }
    ctx->pc = 0x499908u;
    {
        const bool branch_taken_0x499908 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x499908) {
            ctx->pc = 0x49990Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x499908u;
            // 0x49990c: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x499928u;
            goto label_499928;
        }
    }
    ctx->pc = 0x499910u;
label_499910:
    // 0x499910: 0xc12600c  jal         func_498030
label_499914:
    if (ctx->pc == 0x499914u) {
        ctx->pc = 0x499914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499910u;
        // 0x499914: 0x2484ffe0  addiu       $a0, $a0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499918u;
        goto label_499918;
    }
    ctx->pc = 0x499910u;
    SET_GPR_U32(ctx, 31, 0x499918u);
    ctx->pc = 0x499914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499910u;
    // 0x499914: 0x2484ffe0  addiu       $a0, $a0, -0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498030u, 0x499910u, 0x499918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499918u;
label_499918:
    // 0x499918: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x499918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_49991c:
    // 0x49991c: 0x1490fffc  bne         $a0, $s0, . + 4 + (-0x4 << 2)
label_499920:
    if (ctx->pc == 0x499920u) {
        ctx->pc = 0x499924u;
        goto label_499924;
    }
    ctx->pc = 0x49991Cu;
    {
        const bool branch_taken_0x49991c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x49991c) {
            ctx->pc = 0x499910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_499910;
        }
    }
    ctx->pc = 0x499924u;
label_499924:
    // 0x499924: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x499924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_499928:
    // 0x499928: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_49992c:
    if (ctx->pc == 0x49992Cu) {
        ctx->pc = 0x49992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499928u;
        // 0x49992c: 0x26628258  addiu       $v0, $s3, -0x7DA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499930u;
        goto label_499930;
    }
    ctx->pc = 0x499928u;
    {
        const bool branch_taken_0x499928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499928u;
        // 0x49992c: 0x26628258  addiu       $v0, $s3, -0x7DA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499928) {
            ctx->pc = 0x499970u;
            goto label_499970;
        }
    }
    ctx->pc = 0x499930u;
label_499930:
    // 0x499930: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x499930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_499934:
    // 0x499934: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x499934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_499938:
    // 0x499938: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_49993c:
    if (ctx->pc == 0x49993Cu) {
        ctx->pc = 0x49993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499938u;
        // 0x49993c: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x499940u;
        goto label_499940;
    }
    ctx->pc = 0x499938u;
    {
        const bool branch_taken_0x499938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499938u;
        // 0x49993c: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x499938) {
            ctx->pc = 0x499958u;
            goto label_499958;
        }
    }
    ctx->pc = 0x499940u;
label_499940:
    // 0x499940: 0xc12aa86  jal         func_4AAA18
label_499944:
    if (ctx->pc == 0x499944u) {
        ctx->pc = 0x499948u;
        goto label_499948;
    }
    ctx->pc = 0x499940u;
    SET_GPR_U32(ctx, 31, 0x499948u);
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x499940u, 0x499948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499948u;
label_499948:
    // 0x499948: 0x10000008  b           . + 4 + (0x8 << 2)
label_49994c:
    if (ctx->pc == 0x49994Cu) {
        ctx->pc = 0x49994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499948u;
        // 0x49994c: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499950u;
        goto label_499950;
    }
    ctx->pc = 0x499948u;
    {
        const bool branch_taken_0x499948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499948u;
        // 0x49994c: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499948) {
            ctx->pc = 0x49996Cu;
            goto label_49996c;
        }
    }
    ctx->pc = 0x499950u;
label_499950:
    // 0x499950: 0x1000002f  b           . + 4 + (0x2F << 2)
label_499954:
    if (ctx->pc == 0x499954u) {
        ctx->pc = 0x499954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499950u;
        // 0x499954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499958u;
        goto label_499958;
    }
    ctx->pc = 0x499950u;
    {
        const bool branch_taken_0x499950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499950u;
        // 0x499954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499950) {
            ctx->pc = 0x499A10u;
            goto label_499a10;
        }
    }
    ctx->pc = 0x499958u;
label_499958:
    // 0x499958: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_49995c:
    if (ctx->pc == 0x49995Cu) {
        ctx->pc = 0x49995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499958u;
        // 0x49995c: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499960u;
        goto label_499960;
    }
    ctx->pc = 0x499958u;
    {
        const bool branch_taken_0x499958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x499958) {
            ctx->pc = 0x49995Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x499958u;
            // 0x49995c: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49996Cu;
            goto label_49996c;
        }
    }
    ctx->pc = 0x499960u;
label_499960:
    // 0x499960: 0xc12ad4e  jal         func_4AB538
label_499964:
    if (ctx->pc == 0x499964u) {
        ctx->pc = 0x499968u;
        goto label_499968;
    }
    ctx->pc = 0x499960u;
    SET_GPR_U32(ctx, 31, 0x499968u);
    ctx->pc = 0x4AB538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB538u, 0x499960u, 0x499968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499968u;
label_499968:
    // 0x499968: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x499968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_49996c:
    // 0x49996c: 0x26628258  addiu       $v0, $s3, -0x7DA8
    ctx->pc = 0x49996cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294935128));
label_499970:
    // 0x499970: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
label_499974:
    if (ctx->pc == 0x499974u) {
        ctx->pc = 0x499978u;
        goto label_499978;
    }
    ctx->pc = 0x499970u;
    {
        const bool branch_taken_0x499970 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x499970) {
            ctx->pc = 0x499990u;
            goto label_499990;
        }
    }
    ctx->pc = 0x499978u;
label_499978:
    // 0x499978: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x499978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_49997c:
    // 0x49997c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x49997cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_499980:
    // 0x499980: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x499980u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_499984:
    // 0x499984: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x499984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_499988:
    // 0x499988: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x499988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_49998c:
    // 0x49998c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x49998cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_499990:
    // 0x499990: 0xc126abe  jal         func_49AAF8
label_499994:
    if (ctx->pc == 0x499994u) {
        ctx->pc = 0x499994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499990u;
        // 0x499994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499998u;
        goto label_499998;
    }
    ctx->pc = 0x499990u;
    SET_GPR_U32(ctx, 31, 0x499998u);
    ctx->pc = 0x499994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499990u;
    // 0x499994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49AAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49AAF8u, 0x499990u, 0x499998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499998u;
label_499998:
    // 0x499998: 0xc12a492  jal         func_4A9248
label_49999c:
    if (ctx->pc == 0x49999Cu) {
        ctx->pc = 0x49999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499998u;
        // 0x49999c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4999A0u;
        goto label_4999a0;
    }
    ctx->pc = 0x499998u;
    SET_GPR_U32(ctx, 31, 0x4999A0u);
    ctx->pc = 0x49999Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499998u;
    // 0x49999c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9248u, 0x499998u, 0x4999A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4999A0u;
label_4999a0:
    // 0x4999a0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x4999a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4999a4:
    // 0x4999a4: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x4999a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_4999a8:
    // 0x4999a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4999ac:
    if (ctx->pc == 0x4999ACu) {
        ctx->pc = 0x4999ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4999A8u;
        // 0x4999ac: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4999B0u;
        goto label_4999b0;
    }
    ctx->pc = 0x4999A8u;
    {
        const bool branch_taken_0x4999a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4999ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4999A8u;
        // 0x4999ac: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4999a8) {
            ctx->pc = 0x4999CCu;
            goto label_4999cc;
        }
    }
    ctx->pc = 0x4999B0u;
label_4999b0:
    // 0x4999b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_4999b4:
    if (ctx->pc == 0x4999B4u) {
        ctx->pc = 0x4999B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4999B0u;
        // 0x4999b4: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4999B8u;
        goto label_4999b8;
    }
    ctx->pc = 0x4999B0u;
    {
        const bool branch_taken_0x4999b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4999B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4999B0u;
        // 0x4999b4: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4999b0) {
            ctx->pc = 0x4999D0u;
            goto label_4999d0;
        }
    }
    ctx->pc = 0x4999B8u;
label_4999b8:
    // 0x4999b8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4999b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4999bc:
    // 0x4999bc: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x4999bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4999c0:
    // 0x4999c0: 0xc12a9a0  jal         func_4AA680
label_4999c4:
    if (ctx->pc == 0x4999C4u) {
        ctx->pc = 0x4999C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4999C0u;
        // 0x4999c4: 0x24848230  addiu       $a0, $a0, -0x7DD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4999C8u;
        goto label_4999c8;
    }
    ctx->pc = 0x4999C0u;
    SET_GPR_U32(ctx, 31, 0x4999C8u);
    ctx->pc = 0x4999C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4999C0u;
    // 0x4999c4: 0x24848230  addiu       $a0, $a0, -0x7DD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4999C0u, 0x4999C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4999C8u;
label_4999c8:
    // 0x4999c8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x4999c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4999cc:
    // 0x4999cc: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x4999ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_4999d0:
    // 0x4999d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4999d4:
    if (ctx->pc == 0x4999D4u) {
        ctx->pc = 0x4999D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4999D0u;
        // 0x4999d4: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4999D8u;
        goto label_4999d8;
    }
    ctx->pc = 0x4999D0u;
    {
        const bool branch_taken_0x4999d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4999D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4999D0u;
        // 0x4999d4: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4999d0) {
            ctx->pc = 0x4999F0u;
            goto label_4999f0;
        }
    }
    ctx->pc = 0x4999D8u;
label_4999d8:
    // 0x4999d8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_4999dc:
    if (ctx->pc == 0x4999DCu) {
        ctx->pc = 0x4999DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4999D8u;
        // 0x4999dc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4999E0u;
        goto label_4999e0;
    }
    ctx->pc = 0x4999D8u;
    {
        const bool branch_taken_0x4999d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4999d8) {
            ctx->pc = 0x4999DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4999D8u;
            // 0x4999dc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4999F4u;
            goto label_4999f4;
        }
    }
    ctx->pc = 0x4999E0u;
label_4999e0:
    // 0x4999e0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4999e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4999e4:
    // 0x4999e4: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x4999e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_4999e8:
    // 0x4999e8: 0xc12a9a0  jal         func_4AA680
label_4999ec:
    if (ctx->pc == 0x4999ECu) {
        ctx->pc = 0x4999ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4999E8u;
        // 0x4999ec: 0x24848208  addiu       $a0, $a0, -0x7DF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4999F0u;
        goto label_4999f0;
    }
    ctx->pc = 0x4999E8u;
    SET_GPR_U32(ctx, 31, 0x4999F0u);
    ctx->pc = 0x4999ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4999E8u;
    // 0x4999ec: 0x24848208  addiu       $a0, $a0, -0x7DF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4999E8u, 0x4999F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4999F0u;
label_4999f0:
    // 0x4999f0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4999f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4999f4:
    // 0x4999f4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4999f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_4999f8:
    // 0x4999f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4999fc:
    if (ctx->pc == 0x4999FCu) {
        ctx->pc = 0x4999FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4999F8u;
        // 0x4999fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499A00u;
        goto label_499a00;
    }
    ctx->pc = 0x4999F8u;
    {
        const bool branch_taken_0x4999f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4999FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4999F8u;
        // 0x4999fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4999f8) {
            ctx->pc = 0x499A0Cu;
            goto label_499a0c;
        }
    }
    ctx->pc = 0x499A00u;
label_499a00:
    // 0x499a00: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x499a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_499a04:
    // 0x499a04: 0xc12a9a0  jal         func_4AA680
label_499a08:
    if (ctx->pc == 0x499A08u) {
        ctx->pc = 0x499A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499A04u;
        // 0x499a08: 0x248481e0  addiu       $a0, $a0, -0x7E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499A0Cu;
        goto label_499a0c;
    }
    ctx->pc = 0x499A04u;
    SET_GPR_U32(ctx, 31, 0x499A0Cu);
    ctx->pc = 0x499A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499A04u;
    // 0x499a08: 0x248481e0  addiu       $a0, $a0, -0x7E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x499A04u, 0x499A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499A0Cu;
label_499a0c:
    // 0x499a0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x499a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_499a10:
    // 0x499a10: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x499a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_499a14:
    // 0x499a14: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x499a14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_499a18:
    // 0x499a18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x499a18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_499a1c:
    // 0x499a1c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x499a1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_499a20:
    // 0x499a20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x499a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_499a24:
    // 0x499a24: 0x3e00008  jr          $ra
label_499a28:
    if (ctx->pc == 0x499A28u) {
        ctx->pc = 0x499A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499A24u;
        // 0x499a28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499A2Cu;
        goto label_499a2c;
    }
    ctx->pc = 0x499A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499A24u;
        // 0x499a28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x499A2Cu;
label_499a2c:
    // 0x499a2c: 0x0  nop
    ctx->pc = 0x499a2cu;
    // NOP
    ctx->pc = 0x499a30u;
}
