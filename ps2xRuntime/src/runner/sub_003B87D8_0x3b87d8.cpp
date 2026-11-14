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

// Function: sub_003B87D8
// Address: 0x3b87d8 - 0x3b89a8
void sub_003B87D8_0x3b87d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B87D8_0x3b87d8");
#endif

    switch (ctx->pc) {
        case 0x3b87d8u: goto label_3b87d8;
        case 0x3b87dcu: goto label_3b87dc;
        case 0x3b87e0u: goto label_3b87e0;
        case 0x3b87e4u: goto label_3b87e4;
        case 0x3b87e8u: goto label_3b87e8;
        case 0x3b87ecu: goto label_3b87ec;
        case 0x3b87f0u: goto label_3b87f0;
        case 0x3b87f4u: goto label_3b87f4;
        case 0x3b87f8u: goto label_3b87f8;
        case 0x3b87fcu: goto label_3b87fc;
        case 0x3b8800u: goto label_3b8800;
        case 0x3b8804u: goto label_3b8804;
        case 0x3b8808u: goto label_3b8808;
        case 0x3b880cu: goto label_3b880c;
        case 0x3b8810u: goto label_3b8810;
        case 0x3b8814u: goto label_3b8814;
        case 0x3b8818u: goto label_3b8818;
        case 0x3b881cu: goto label_3b881c;
        case 0x3b8820u: goto label_3b8820;
        case 0x3b8824u: goto label_3b8824;
        case 0x3b8828u: goto label_3b8828;
        case 0x3b882cu: goto label_3b882c;
        case 0x3b8830u: goto label_3b8830;
        case 0x3b8834u: goto label_3b8834;
        case 0x3b8838u: goto label_3b8838;
        case 0x3b883cu: goto label_3b883c;
        case 0x3b8840u: goto label_3b8840;
        case 0x3b8844u: goto label_3b8844;
        case 0x3b8848u: goto label_3b8848;
        case 0x3b884cu: goto label_3b884c;
        case 0x3b8850u: goto label_3b8850;
        case 0x3b8854u: goto label_3b8854;
        case 0x3b8858u: goto label_3b8858;
        case 0x3b885cu: goto label_3b885c;
        case 0x3b8860u: goto label_3b8860;
        case 0x3b8864u: goto label_3b8864;
        case 0x3b8868u: goto label_3b8868;
        case 0x3b886cu: goto label_3b886c;
        case 0x3b8870u: goto label_3b8870;
        case 0x3b8874u: goto label_3b8874;
        case 0x3b8878u: goto label_3b8878;
        case 0x3b887cu: goto label_3b887c;
        case 0x3b8880u: goto label_3b8880;
        case 0x3b8884u: goto label_3b8884;
        case 0x3b8888u: goto label_3b8888;
        case 0x3b888cu: goto label_3b888c;
        case 0x3b8890u: goto label_3b8890;
        case 0x3b8894u: goto label_3b8894;
        case 0x3b8898u: goto label_3b8898;
        case 0x3b889cu: goto label_3b889c;
        case 0x3b88a0u: goto label_3b88a0;
        case 0x3b88a4u: goto label_3b88a4;
        case 0x3b88a8u: goto label_3b88a8;
        case 0x3b88acu: goto label_3b88ac;
        case 0x3b88b0u: goto label_3b88b0;
        case 0x3b88b4u: goto label_3b88b4;
        case 0x3b88b8u: goto label_3b88b8;
        case 0x3b88bcu: goto label_3b88bc;
        case 0x3b88c0u: goto label_3b88c0;
        case 0x3b88c4u: goto label_3b88c4;
        case 0x3b88c8u: goto label_3b88c8;
        case 0x3b88ccu: goto label_3b88cc;
        case 0x3b88d0u: goto label_3b88d0;
        case 0x3b88d4u: goto label_3b88d4;
        case 0x3b88d8u: goto label_3b88d8;
        case 0x3b88dcu: goto label_3b88dc;
        case 0x3b88e0u: goto label_3b88e0;
        case 0x3b88e4u: goto label_3b88e4;
        case 0x3b88e8u: goto label_3b88e8;
        case 0x3b88ecu: goto label_3b88ec;
        case 0x3b88f0u: goto label_3b88f0;
        case 0x3b88f4u: goto label_3b88f4;
        case 0x3b88f8u: goto label_3b88f8;
        case 0x3b88fcu: goto label_3b88fc;
        case 0x3b8900u: goto label_3b8900;
        case 0x3b8904u: goto label_3b8904;
        case 0x3b8908u: goto label_3b8908;
        case 0x3b890cu: goto label_3b890c;
        case 0x3b8910u: goto label_3b8910;
        case 0x3b8914u: goto label_3b8914;
        case 0x3b8918u: goto label_3b8918;
        case 0x3b891cu: goto label_3b891c;
        case 0x3b8920u: goto label_3b8920;
        case 0x3b8924u: goto label_3b8924;
        case 0x3b8928u: goto label_3b8928;
        case 0x3b892cu: goto label_3b892c;
        case 0x3b8930u: goto label_3b8930;
        case 0x3b8934u: goto label_3b8934;
        case 0x3b8938u: goto label_3b8938;
        case 0x3b893cu: goto label_3b893c;
        case 0x3b8940u: goto label_3b8940;
        case 0x3b8944u: goto label_3b8944;
        case 0x3b8948u: goto label_3b8948;
        case 0x3b894cu: goto label_3b894c;
        case 0x3b8950u: goto label_3b8950;
        case 0x3b8954u: goto label_3b8954;
        case 0x3b8958u: goto label_3b8958;
        case 0x3b895cu: goto label_3b895c;
        case 0x3b8960u: goto label_3b8960;
        case 0x3b8964u: goto label_3b8964;
        case 0x3b8968u: goto label_3b8968;
        case 0x3b896cu: goto label_3b896c;
        case 0x3b8970u: goto label_3b8970;
        case 0x3b8974u: goto label_3b8974;
        case 0x3b8978u: goto label_3b8978;
        case 0x3b897cu: goto label_3b897c;
        case 0x3b8980u: goto label_3b8980;
        case 0x3b8984u: goto label_3b8984;
        case 0x3b8988u: goto label_3b8988;
        case 0x3b898cu: goto label_3b898c;
        case 0x3b8990u: goto label_3b8990;
        case 0x3b8994u: goto label_3b8994;
        case 0x3b8998u: goto label_3b8998;
        case 0x3b899cu: goto label_3b899c;
        case 0x3b89a0u: goto label_3b89a0;
        case 0x3b89a4u: goto label_3b89a4;
        default: break;
    }

    ctx->pc = 0x3b87d8u;

label_3b87d8:
    // 0x3b87d8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3b87d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3b87dc:
    // 0x3b87dc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x3b87dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3b87e0:
    // 0x3b87e0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3b87e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3b87e4:
    // 0x3b87e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b87e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b87e8:
    // 0x3b87e8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3b87e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3b87ec:
    // 0x3b87ec: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3b87ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3b87f0:
    // 0x3b87f0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3b87f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3b87f4:
    // 0x3b87f4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3b87f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3b87f8:
    // 0x3b87f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3b87f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3b87fc:
    // 0x3b87fc: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3b87fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_3b8800:
    // 0x3b8800: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3b8800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_3b8804:
    // 0x3b8804: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b8804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3b8808:
    // 0x3b8808: 0xc10480a  jal         func_412028
label_3b880c:
    if (ctx->pc == 0x3B880Cu) {
        ctx->pc = 0x3B880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8808u;
        // 0x3b880c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8810u;
        goto label_3b8810;
    }
    ctx->pc = 0x3B8808u;
    SET_GPR_U32(ctx, 31, 0x3B8810u);
    ctx->pc = 0x3B880Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8808u;
    // 0x3b880c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3B8808u, 0x3B8810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8810u;
label_3b8810:
    // 0x3b8810: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3b8810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3b8814:
    // 0x3b8814: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_3b8818:
    if (ctx->pc == 0x3B8818u) {
        ctx->pc = 0x3B8818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8814u;
        // 0x3b8818: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B881Cu;
        goto label_3b881c;
    }
    ctx->pc = 0x3B8814u;
    {
        const bool branch_taken_0x3b8814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B8818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8814u;
        // 0x3b8818: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8814) {
            ctx->pc = 0x3B8824u;
            goto label_3b8824;
        }
    }
    ctx->pc = 0x3B881Cu;
label_3b881c:
    // 0x3b881c: 0x10000056  b           . + 4 + (0x56 << 2)
label_3b8820:
    if (ctx->pc == 0x3B8820u) {
        ctx->pc = 0x3B8820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B881Cu;
        // 0x3b8820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8824u;
        goto label_3b8824;
    }
    ctx->pc = 0x3B881Cu;
    {
        const bool branch_taken_0x3b881c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B881Cu;
        // 0x3b8820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b881c) {
            ctx->pc = 0x3B8978u;
            goto label_3b8978;
        }
    }
    ctx->pc = 0x3B8824u;
label_3b8824:
    // 0x3b8824: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b8824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b8828:
    // 0x3b8828: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3b8828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3b882c:
    // 0x3b882c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3b882cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3b8830:
    // 0x3b8830: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x3b8830u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3b8834:
    // 0x3b8834: 0x40f809  jalr        $v0
label_3b8838:
    if (ctx->pc == 0x3B8838u) {
        ctx->pc = 0x3B8838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8834u;
        // 0x3b8838: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B883Cu;
        goto label_3b883c;
    }
    ctx->pc = 0x3B8834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B883Cu);
        ctx->pc = 0x3B8838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8834u;
        // 0x3b8838: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B8834u, 0x3B883Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B883Cu;
label_3b883c:
    // 0x3b883c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3b883cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b8840:
    // 0x3b8840: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b8840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b8844:
    // 0x3b8844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b8844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b8848:
    // 0x3b8848: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3b8848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3b884c:
    // 0x3b884c: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x3b884cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_3b8850:
    // 0x3b8850: 0xc103642  jal         func_40D908
label_3b8854:
    if (ctx->pc == 0x3B8854u) {
        ctx->pc = 0x3B8854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8850u;
        // 0x3b8854: 0x34a501a4  ori         $a1, $a1, 0x1A4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)420);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8858u;
        goto label_3b8858;
    }
    ctx->pc = 0x3B8850u;
    SET_GPR_U32(ctx, 31, 0x3B8858u);
    ctx->pc = 0x3B8854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8850u;
    // 0x3b8854: 0x34a501a4  ori         $a1, $a1, 0x1A4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)420);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3B8850u, 0x3B8858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8858u;
label_3b8858:
    // 0x3b8858: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x3b8858u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
label_3b885c:
    // 0x3b885c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_3b8860:
    if (ctx->pc == 0x3B8860u) {
        ctx->pc = 0x3B8860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B885Cu;
        // 0x3b8860: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8864u;
        goto label_3b8864;
    }
    ctx->pc = 0x3B885Cu;
    {
        const bool branch_taken_0x3b885c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B885Cu;
        // 0x3b8860: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b885c) {
            ctx->pc = 0x3B8878u;
            goto label_3b8878;
        }
    }
    ctx->pc = 0x3B8864u;
label_3b8864:
    // 0x3b8864: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x3b8864u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
label_3b8868:
    // 0x3b8868: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b8868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b886c:
    // 0x3b886c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b886cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b8870:
    // 0x3b8870: 0xc103722  jal         func_40DC88
label_3b8874:
    if (ctx->pc == 0x3B8874u) {
        ctx->pc = 0x3B8874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8870u;
        // 0x3b8874: 0x34c601a4  ori         $a2, $a2, 0x1A4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)420);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8878u;
        goto label_3b8878;
    }
    ctx->pc = 0x3B8870u;
    SET_GPR_U32(ctx, 31, 0x3B8878u);
    ctx->pc = 0x3B8874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8870u;
    // 0x3b8874: 0x34c601a4  ori         $a2, $a2, 0x1A4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)420);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DC88u, 0x3B8870u, 0x3B8878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8878u;
label_3b8878:
    // 0x3b8878: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x3b8878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3b887c:
    // 0x3b887c: 0xc1036d2  jal         func_40DB48
label_3b8880:
    if (ctx->pc == 0x3B8880u) {
        ctx->pc = 0x3B8880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B887Cu;
        // 0x3b8880: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8884u;
        goto label_3b8884;
    }
    ctx->pc = 0x3B887Cu;
    SET_GPR_U32(ctx, 31, 0x3B8884u);
    ctx->pc = 0x3B8880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B887Cu;
    // 0x3b8880: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B887Cu, 0x3B8884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8884u;
label_3b8884:
    // 0x3b8884: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3b8884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3b8888:
    // 0x3b8888: 0x18600037  blez        $v1, . + 4 + (0x37 << 2)
label_3b888c:
    if (ctx->pc == 0x3B888Cu) {
        ctx->pc = 0x3B888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8888u;
        // 0x3b888c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8890u;
        goto label_3b8890;
    }
    ctx->pc = 0x3B8888u;
    {
        const bool branch_taken_0x3b8888 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3B888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8888u;
        // 0x3b888c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8888) {
            ctx->pc = 0x3B8968u;
            goto label_3b8968;
        }
    }
    ctx->pc = 0x3B8890u;
label_3b8890:
    // 0x3b8890: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x3b8890u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b8894:
    // 0x3b8894: 0x26900008  addiu       $s0, $s4, 0x8
    ctx->pc = 0x3b8894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_3b8898:
    // 0x3b8898: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b8898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b889c:
    // 0x3b889c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3b889cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3b88a0:
    // 0x3b88a0: 0xc10480a  jal         func_412028
label_3b88a4:
    if (ctx->pc == 0x3B88A4u) {
        ctx->pc = 0x3B88A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B88A0u;
        // 0x3b88a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B88A8u;
        goto label_3b88a8;
    }
    ctx->pc = 0x3B88A0u;
    SET_GPR_U32(ctx, 31, 0x3B88A8u);
    ctx->pc = 0x3B88A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B88A0u;
    // 0x3b88a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3B88A0u, 0x3B88A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B88A8u;
label_3b88a8:
    // 0x3b88a8: 0x1457ffdc  bne         $v0, $s7, . + 4 + (-0x24 << 2)
label_3b88ac:
    if (ctx->pc == 0x3B88ACu) {
        ctx->pc = 0x3B88ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B88A8u;
        // 0x3b88ac: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B88B0u;
        goto label_3b88b0;
    }
    ctx->pc = 0x3B88A8u;
    {
        const bool branch_taken_0x3b88a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x3B88ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B88A8u;
        // 0x3b88ac: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b88a8) {
            ctx->pc = 0x3B881Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b881c;
        }
    }
    ctx->pc = 0x3B88B0u;
label_3b88b0:
    // 0x3b88b0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3b88b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3b88b4:
    // 0x3b88b4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_3b88b8:
    if (ctx->pc == 0x3B88B8u) {
        ctx->pc = 0x3B88B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B88B4u;
        // 0x3b88b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B88BCu;
        goto label_3b88bc;
    }
    ctx->pc = 0x3B88B4u;
    {
        const bool branch_taken_0x3b88b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B88B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B88B4u;
        // 0x3b88b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b88b4) {
            ctx->pc = 0x3B8948u;
            goto label_3b8948;
        }
    }
    ctx->pc = 0x3B88BCu;
label_3b88bc:
    // 0x3b88bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3b88bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b88c0:
    // 0x3b88c0: 0xc103468  jal         func_40D1A0
label_3b88c4:
    if (ctx->pc == 0x3B88C4u) {
        ctx->pc = 0x3B88C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B88C0u;
        // 0x3b88c4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B88C8u;
        goto label_3b88c8;
    }
    ctx->pc = 0x3B88C0u;
    SET_GPR_U32(ctx, 31, 0x3B88C8u);
    ctx->pc = 0x3B88C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B88C0u;
    // 0x3b88c4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3B88C0u, 0x3B88C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B88C8u;
label_3b88c8:
    // 0x3b88c8: 0x27b10014  addiu       $s1, $sp, 0x14
    ctx->pc = 0x3b88c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_3b88cc:
    // 0x3b88cc: 0x27b20018  addiu       $s2, $sp, 0x18
    ctx->pc = 0x3b88ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_3b88d0:
    // 0x3b88d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b88d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b88d4:
    // 0x3b88d4: 0x240501a1  addiu       $a1, $zero, 0x1A1
    ctx->pc = 0x3b88d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 417));
label_3b88d8:
    // 0x3b88d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3b88d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b88dc:
    // 0x3b88dc: 0xc103322  jal         func_40CC88
label_3b88e0:
    if (ctx->pc == 0x3B88E0u) {
        ctx->pc = 0x3B88E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B88DCu;
        // 0x3b88e0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B88E4u;
        goto label_3b88e4;
    }
    ctx->pc = 0x3B88DCu;
    SET_GPR_U32(ctx, 31, 0x3B88E4u);
    ctx->pc = 0x3B88E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B88DCu;
    // 0x3b88e0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3B88DCu, 0x3B88E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B88E4u;
label_3b88e4:
    // 0x3b88e4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_3b88e8:
    if (ctx->pc == 0x3B88E8u) {
        ctx->pc = 0x3B88E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B88E4u;
        // 0x3b88e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B88ECu;
        goto label_3b88ec;
    }
    ctx->pc = 0x3B88E4u;
    {
        const bool branch_taken_0x3b88e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B88E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B88E4u;
        // 0x3b88e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b88e4) {
            ctx->pc = 0x3B8978u;
            goto label_3b8978;
        }
    }
    ctx->pc = 0x3B88ECu;
label_3b88ec:
    // 0x3b88ec: 0xc0ec604  jal         func_3B1810
label_3b88f0:
    if (ctx->pc == 0x3B88F0u) {
        ctx->pc = 0x3B88F4u;
        goto label_3b88f4;
    }
    ctx->pc = 0x3B88ECu;
    SET_GPR_U32(ctx, 31, 0x3B88F4u);
    ctx->pc = 0x3B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1810u, 0x3B88ECu, 0x3B88F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B88F4u;
label_3b88f4:
    // 0x3b88f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b88f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b88f8:
    // 0x3b88f8: 0xc0ec68a  jal         func_3B1A28
label_3b88fc:
    if (ctx->pc == 0x3B88FCu) {
        ctx->pc = 0x3B88FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B88F8u;
        // 0x3b88fc: 0xae02fffc  sw          $v0, -0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8900u;
        goto label_3b8900;
    }
    ctx->pc = 0x3B88F8u;
    SET_GPR_U32(ctx, 31, 0x3B8900u);
    ctx->pc = 0x3B88FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B88F8u;
    // 0x3b88fc: 0xae02fffc  sw          $v0, -0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A28u, 0x3B88F8u, 0x3B8900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8900u;
label_3b8900:
    // 0x3b8900: 0x8e04fffc  lw          $a0, -0x4($s0)
    ctx->pc = 0x3b8900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
label_3b8904:
    // 0x3b8904: 0xc0ec93a  jal         func_3B24E8
label_3b8908:
    if (ctx->pc == 0x3B8908u) {
        ctx->pc = 0x3B8908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8904u;
        // 0x3b8908: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B890Cu;
        goto label_3b890c;
    }
    ctx->pc = 0x3B8904u;
    SET_GPR_U32(ctx, 31, 0x3B890Cu);
    ctx->pc = 0x3B8908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8904u;
    // 0x3b8908: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B24E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B24E8u, 0x3B8904u, 0x3B890Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B890Cu;
label_3b890c:
    // 0x3b890c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3b890cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b8910:
    // 0x3b8910: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3b8910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b8914:
    // 0x3b8914: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b8914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b8918:
    // 0x3b8918: 0xc103322  jal         func_40CC88
label_3b891c:
    if (ctx->pc == 0x3B891Cu) {
        ctx->pc = 0x3B891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8918u;
        // 0x3b891c: 0x240501a2  addiu       $a1, $zero, 0x1A2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 418));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8920u;
        goto label_3b8920;
    }
    ctx->pc = 0x3B8918u;
    SET_GPR_U32(ctx, 31, 0x3B8920u);
    ctx->pc = 0x3B891Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8918u;
    // 0x3b891c: 0x240501a2  addiu       $a1, $zero, 0x1A2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 418));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3B8918u, 0x3B8920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8920u;
label_3b8920:
    // 0x3b8920: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_3b8924:
    if (ctx->pc == 0x3B8924u) {
        ctx->pc = 0x3B8924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8920u;
        // 0x3b8924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8928u;
        goto label_3b8928;
    }
    ctx->pc = 0x3B8920u;
    {
        const bool branch_taken_0x3b8920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8920u;
        // 0x3b8924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8920) {
            ctx->pc = 0x3B8978u;
            goto label_3b8978;
        }
    }
    ctx->pc = 0x3B8928u;
label_3b8928:
    // 0x3b8928: 0xc0e9e2a  jal         func_3A78A8
label_3b892c:
    if (ctx->pc == 0x3B892Cu) {
        ctx->pc = 0x3B8930u;
        goto label_3b8930;
    }
    ctx->pc = 0x3B8928u;
    SET_GPR_U32(ctx, 31, 0x3B8930u);
    ctx->pc = 0x3A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A78A8u, 0x3B8928u, 0x3B8930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8930u;
label_3b8930:
    // 0x3b8930: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3b8930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b8934:
    // 0x3b8934: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b8934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b8938:
    // 0x3b8938: 0xc0e9f58  jal         func_3A7D60
label_3b893c:
    if (ctx->pc == 0x3B893Cu) {
        ctx->pc = 0x3B893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8938u;
        // 0x3b893c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8940u;
        goto label_3b8940;
    }
    ctx->pc = 0x3B8938u;
    SET_GPR_U32(ctx, 31, 0x3B8940u);
    ctx->pc = 0x3B893Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8938u;
    // 0x3b893c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7D60u, 0x3B8938u, 0x3B8940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8940u;
label_3b8940:
    // 0x3b8940: 0x10000004  b           . + 4 + (0x4 << 2)
label_3b8944:
    if (ctx->pc == 0x3B8944u) {
        ctx->pc = 0x3B8944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8940u;
        // 0x3b8944: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8948u;
        goto label_3b8948;
    }
    ctx->pc = 0x3B8940u;
    {
        const bool branch_taken_0x3b8940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B8944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8940u;
        // 0x3b8944: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8940) {
            ctx->pc = 0x3B8954u;
            goto label_3b8954;
        }
    }
    ctx->pc = 0x3B8948u;
label_3b8948:
    // 0x3b8948: 0xae00fffc  sw          $zero, -0x4($s0)
    ctx->pc = 0x3b8948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 0));
label_3b894c:
    // 0x3b894c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3b894cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3b8950:
    // 0x3b8950: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3b8950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3b8954:
    // 0x3b8954: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3b8954u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b8958:
    // 0x3b8958: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x3b8958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_3b895c:
    // 0x3b895c: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x3b895cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3b8960:
    // 0x3b8960: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
label_3b8964:
    if (ctx->pc == 0x3B8964u) {
        ctx->pc = 0x3B8964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8960u;
        // 0x3b8964: 0x2694000c  addiu       $s4, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8968u;
        goto label_3b8968;
    }
    ctx->pc = 0x3B8960u;
    {
        const bool branch_taken_0x3b8960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B8964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8960u;
        // 0x3b8964: 0x2694000c  addiu       $s4, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b8960) {
            ctx->pc = 0x3B8898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b8898;
        }
    }
    ctx->pc = 0x3B8968u;
label_3b8968:
    // 0x3b8968: 0xc0ee028  jal         func_3B80A0
label_3b896c:
    if (ctx->pc == 0x3B896Cu) {
        ctx->pc = 0x3B896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B8968u;
        // 0x3b896c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B8970u;
        goto label_3b8970;
    }
    ctx->pc = 0x3B8968u;
    SET_GPR_U32(ctx, 31, 0x3B8970u);
    ctx->pc = 0x3B896Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B8968u;
    // 0x3b896c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B80A0u, 0x3B8968u, 0x3B8970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B8970u;
label_3b8970:
    // 0x3b8970: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x3b8970u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
label_3b8974:
    // 0x3b8974: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3b8974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b8978:
    // 0x3b8978: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3b8978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b897c:
    // 0x3b897c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3b897cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b8980:
    // 0x3b8980: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3b8980u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b8984:
    // 0x3b8984: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3b8984u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b8988:
    // 0x3b8988: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3b8988u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b898c:
    // 0x3b898c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3b898cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b8990:
    // 0x3b8990: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3b8990u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b8994:
    // 0x3b8994: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3b8994u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b8998:
    // 0x3b8998: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b8998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3b899c:
    // 0x3b899c: 0x3e00008  jr          $ra
label_3b89a0:
    if (ctx->pc == 0x3B89A0u) {
        ctx->pc = 0x3B89A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B899Cu;
        // 0x3b89a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B89A4u;
        goto label_3b89a4;
    }
    ctx->pc = 0x3B899Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B89A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B899Cu;
        // 0x3b89a0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B899Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B89A4u;
label_3b89a4:
    // 0x3b89a4: 0x0  nop
    ctx->pc = 0x3b89a4u;
    // NOP
    ctx->pc = 0x3b89a8u;
}
