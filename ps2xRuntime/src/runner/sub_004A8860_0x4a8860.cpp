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

// Function: sub_004A8860
// Address: 0x4a8860 - 0x4a8980
void sub_004A8860_0x4a8860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8860_0x4a8860");
#endif

    switch (ctx->pc) {
        case 0x4a8860u: goto label_4a8860;
        case 0x4a8864u: goto label_4a8864;
        case 0x4a8868u: goto label_4a8868;
        case 0x4a886cu: goto label_4a886c;
        case 0x4a8870u: goto label_4a8870;
        case 0x4a8874u: goto label_4a8874;
        case 0x4a8878u: goto label_4a8878;
        case 0x4a887cu: goto label_4a887c;
        case 0x4a8880u: goto label_4a8880;
        case 0x4a8884u: goto label_4a8884;
        case 0x4a8888u: goto label_4a8888;
        case 0x4a888cu: goto label_4a888c;
        case 0x4a8890u: goto label_4a8890;
        case 0x4a8894u: goto label_4a8894;
        case 0x4a8898u: goto label_4a8898;
        case 0x4a889cu: goto label_4a889c;
        case 0x4a88a0u: goto label_4a88a0;
        case 0x4a88a4u: goto label_4a88a4;
        case 0x4a88a8u: goto label_4a88a8;
        case 0x4a88acu: goto label_4a88ac;
        case 0x4a88b0u: goto label_4a88b0;
        case 0x4a88b4u: goto label_4a88b4;
        case 0x4a88b8u: goto label_4a88b8;
        case 0x4a88bcu: goto label_4a88bc;
        case 0x4a88c0u: goto label_4a88c0;
        case 0x4a88c4u: goto label_4a88c4;
        case 0x4a88c8u: goto label_4a88c8;
        case 0x4a88ccu: goto label_4a88cc;
        case 0x4a88d0u: goto label_4a88d0;
        case 0x4a88d4u: goto label_4a88d4;
        case 0x4a88d8u: goto label_4a88d8;
        case 0x4a88dcu: goto label_4a88dc;
        case 0x4a88e0u: goto label_4a88e0;
        case 0x4a88e4u: goto label_4a88e4;
        case 0x4a88e8u: goto label_4a88e8;
        case 0x4a88ecu: goto label_4a88ec;
        case 0x4a88f0u: goto label_4a88f0;
        case 0x4a88f4u: goto label_4a88f4;
        case 0x4a88f8u: goto label_4a88f8;
        case 0x4a88fcu: goto label_4a88fc;
        case 0x4a8900u: goto label_4a8900;
        case 0x4a8904u: goto label_4a8904;
        case 0x4a8908u: goto label_4a8908;
        case 0x4a890cu: goto label_4a890c;
        case 0x4a8910u: goto label_4a8910;
        case 0x4a8914u: goto label_4a8914;
        case 0x4a8918u: goto label_4a8918;
        case 0x4a891cu: goto label_4a891c;
        case 0x4a8920u: goto label_4a8920;
        case 0x4a8924u: goto label_4a8924;
        case 0x4a8928u: goto label_4a8928;
        case 0x4a892cu: goto label_4a892c;
        case 0x4a8930u: goto label_4a8930;
        case 0x4a8934u: goto label_4a8934;
        case 0x4a8938u: goto label_4a8938;
        case 0x4a893cu: goto label_4a893c;
        case 0x4a8940u: goto label_4a8940;
        case 0x4a8944u: goto label_4a8944;
        case 0x4a8948u: goto label_4a8948;
        case 0x4a894cu: goto label_4a894c;
        case 0x4a8950u: goto label_4a8950;
        case 0x4a8954u: goto label_4a8954;
        case 0x4a8958u: goto label_4a8958;
        case 0x4a895cu: goto label_4a895c;
        case 0x4a8960u: goto label_4a8960;
        case 0x4a8964u: goto label_4a8964;
        case 0x4a8968u: goto label_4a8968;
        case 0x4a896cu: goto label_4a896c;
        case 0x4a8970u: goto label_4a8970;
        case 0x4a8974u: goto label_4a8974;
        case 0x4a8978u: goto label_4a8978;
        case 0x4a897cu: goto label_4a897c;
        default: break;
    }

    ctx->pc = 0x4a8860u;

label_4a8860:
    // 0x4a8860: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a8860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4a8864:
    // 0x4a8864: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4a8864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4a8868:
    // 0x4a8868: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a8868u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a886c:
    // 0x4a886c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4a886cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4a8870:
    // 0x4a8870: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x4a8870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_4a8874:
    // 0x4a8874: 0x2650002c  addiu       $s0, $s2, 0x2C
    ctx->pc = 0x4a8874u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
label_4a8878:
    // 0x4a8878: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a8878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4a887c:
    // 0x4a887c: 0xa5200b  movn        $a0, $a1, $a1
    ctx->pc = 0x4a887cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
label_4a8880:
    // 0x4a8880: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a8880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a8884:
    // 0x4a8884: 0xc129844  jal         func_4A6110
label_4a8888:
    if (ctx->pc == 0x4A8888u) {
        ctx->pc = 0x4A8888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8884u;
        // 0x4a8888: 0xc6800b  movn        $s0, $a2, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A888Cu;
        goto label_4a888c;
    }
    ctx->pc = 0x4A8884u;
    SET_GPR_U32(ctx, 31, 0x4A888Cu);
    ctx->pc = 0x4A8888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8884u;
    // 0x4a8888: 0xc6800b  movn        $s0, $a2, $a2 (Delay Slot)
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6110u, 0x4A8884u, 0x4A888Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A888Cu;
label_4a888c:
    // 0x4a888c: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x4a888cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_4a8890:
    // 0x4a8890: 0xc129844  jal         func_4A6110
label_4a8894:
    if (ctx->pc == 0x4A8894u) {
        ctx->pc = 0x4A8894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8890u;
        // 0x4a8894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8898u;
        goto label_4a8898;
    }
    ctx->pc = 0x4A8890u;
    SET_GPR_U32(ctx, 31, 0x4A8898u);
    ctx->pc = 0x4A8894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8890u;
    // 0x4a8894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6110u, 0x4A8890u, 0x4A8898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8898u;
label_4a8898:
    // 0x4a8898: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x4a8898u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4a889c:
    // 0x4a889c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4a889cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a88a0:
    // 0x4a88a0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x4a88a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4a88a4:
    // 0x4a88a4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x4a88a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4a88a8:
    // 0x4a88a8: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x4a88a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4a88ac:
    // 0x4a88ac: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_4a88b0:
    if (ctx->pc == 0x4A88B0u) {
        ctx->pc = 0x4A88B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A88ACu;
        // 0x4a88b0: 0x43880b  movn        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A88B4u;
        goto label_4a88b4;
    }
    ctx->pc = 0x4A88ACu;
    {
        const bool branch_taken_0x4a88ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A88B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A88ACu;
        // 0x4a88b0: 0x43880b  movn        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a88ac) {
            ctx->pc = 0x4A88D8u;
            goto label_4a88d8;
        }
    }
    ctx->pc = 0x4A88B4u;
label_4a88b4:
    // 0x4a88b4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4a88b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_4a88b8:
    // 0x4a88b8: 0x8c62e974  lw          $v0, -0x168C($v1)
    ctx->pc = 0x4a88b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961524)));
label_4a88bc:
    // 0x4a88bc: 0x40f809  jalr        $v0
label_4a88c0:
    if (ctx->pc == 0x4A88C0u) {
        ctx->pc = 0x4A88C4u;
        goto label_4a88c4;
    }
    ctx->pc = 0x4A88BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A88C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A88BCu, 0x4A88C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A88C4u;
label_4a88c4:
    // 0x4a88c4: 0x8f83c1e8  lw          $v1, -0x3E18($gp)
    ctx->pc = 0x4a88c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951400)));
label_4a88c8:
    // 0x4a88c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a88c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a88cc:
    // 0x4a88cc: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4a88ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_4a88d0:
    // 0x4a88d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a88d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4a88d4:
    // 0x4a88d4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x4a88d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4a88d8:
    // 0x4a88d8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x4a88d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_4a88dc:
    // 0x4a88dc: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x4a88dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4a88e0:
    // 0x4a88e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4a88e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a88e4:
    // 0x4a88e4: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x4a88e4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_4a88e8:
    // 0x4a88e8: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x4a88e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_4a88ec:
    // 0x4a88ec: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x4a88ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4a88f0:
    // 0x4a88f0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4a88f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a88f4:
    // 0x4a88f4: 0x224100a  movz        $v0, $s1, $a0
    ctx->pc = 0x4a88f4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
label_4a88f8:
    // 0x4a88f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a88f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a88fc:
    // 0x4a88fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a88fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a8900:
    // 0x4a8900: 0x3e00008  jr          $ra
label_4a8904:
    if (ctx->pc == 0x4A8904u) {
        ctx->pc = 0x4A8904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8900u;
        // 0x4a8904: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8908u;
        goto label_4a8908;
    }
    ctx->pc = 0x4A8900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8900u;
        // 0x4a8904: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8908u;
label_4a8908:
    // 0x4a8908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a8908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4a890c:
    // 0x4a890c: 0x3c080066  lui         $t0, 0x66
    ctx->pc = 0x4a890cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)102 << 16));
label_4a8910:
    // 0x4a8910: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x4a8910u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
label_4a8914:
    // 0x4a8914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a8914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a8918:
    // 0x4a8918: 0x25088880  addiu       $t0, $t0, -0x7780
    ctx->pc = 0x4a8918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294936704));
label_4a891c:
    // 0x4a891c: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x4a891cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_4a8920:
    // 0x4a8920: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x4a8920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4a8924:
    // 0x4a8924: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x4a8924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4a8928:
    // 0x4a8928: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a8928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a892c:
    // 0x4a892c: 0xc12aa26  jal         func_4AA898
label_4a8930:
    if (ctx->pc == 0x4A8930u) {
        ctx->pc = 0x4A8930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A892Cu;
        // 0x4a8930: 0x35290806  ori         $t1, $t1, 0x806 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2054);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8934u;
        goto label_4a8934;
    }
    ctx->pc = 0x4A892Cu;
    SET_GPR_U32(ctx, 31, 0x4A8934u);
    ctx->pc = 0x4A8930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A892Cu;
    // 0x4a8930: 0x35290806  ori         $t1, $t1, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA898u, 0x4A892Cu, 0x4A8934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A8934u;
label_4a8934:
    // 0x4a8934: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4a8938:
    if (ctx->pc == 0x4A8938u) {
        ctx->pc = 0x4A8938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8934u;
        // 0x4a8938: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A893Cu;
        goto label_4a893c;
    }
    ctx->pc = 0x4A8934u;
    {
        const bool branch_taken_0x4a8934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A8938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8934u;
        // 0x4a8938: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8934) {
            ctx->pc = 0x4A8944u;
            goto label_4a8944;
        }
    }
    ctx->pc = 0x4A893Cu;
label_4a893c:
    // 0x4a893c: 0x10000003  b           . + 4 + (0x3 << 2)
label_4a8940:
    if (ctx->pc == 0x4A8940u) {
        ctx->pc = 0x4A8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A893Cu;
        // 0x4a8940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8944u;
        goto label_4a8944;
    }
    ctx->pc = 0x4A893Cu;
    {
        const bool branch_taken_0x4a893c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A893Cu;
        // 0x4a8940: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a893c) {
            ctx->pc = 0x4A894Cu;
            goto label_4a894c;
        }
    }
    ctx->pc = 0x4A8944u;
label_4a8944:
    // 0x4a8944: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a8944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a8948:
    // 0x4a8948: 0xaf83b858  sw          $v1, -0x47A8($gp)
    ctx->pc = 0x4a8948u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948952), GPR_U32(ctx, 3));
label_4a894c:
    // 0x4a894c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a894cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a8950:
    // 0x4a8950: 0x3e00008  jr          $ra
label_4a8954:
    if (ctx->pc == 0x4A8954u) {
        ctx->pc = 0x4A8954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8950u;
        // 0x4a8954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A8958u;
        goto label_4a8958;
    }
    ctx->pc = 0x4A8950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8950u;
        // 0x4a8954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8958u;
label_4a8958:
    // 0x4a8958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a8958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4a895c:
    // 0x4a895c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4a895cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4a8960:
    // 0x4a8960: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a8960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a8964:
    // 0x4a8964: 0xc12aa86  jal         func_4AAA18
label_4a8968:
    if (ctx->pc == 0x4A8968u) {
        ctx->pc = 0x4A8968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8964u;
        // 0x4a8968: 0x24848880  addiu       $a0, $a0, -0x7780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A896Cu;
        goto label_4a896c;
    }
    ctx->pc = 0x4A8964u;
    SET_GPR_U32(ctx, 31, 0x4A896Cu);
    ctx->pc = 0x4A8968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8964u;
    // 0x4a8968: 0x24848880  addiu       $a0, $a0, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x4A8964u, 0x4A896Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A896Cu;
label_4a896c:
    // 0x4a896c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a896cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a8970:
    // 0x4a8970: 0xaf80b858  sw          $zero, -0x47A8($gp)
    ctx->pc = 0x4a8970u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948952), GPR_U32(ctx, 0));
label_4a8974:
    // 0x4a8974: 0x3e00008  jr          $ra
label_4a8978:
    if (ctx->pc == 0x4A8978u) {
        ctx->pc = 0x4A8978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8974u;
        // 0x4a8978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A897Cu;
        goto label_4a897c;
    }
    ctx->pc = 0x4A8974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8974u;
        // 0x4a8978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A897Cu;
label_4a897c:
    // 0x4a897c: 0x0  nop
    ctx->pc = 0x4a897cu;
    // NOP
    ctx->pc = 0x4a8980u;
}
