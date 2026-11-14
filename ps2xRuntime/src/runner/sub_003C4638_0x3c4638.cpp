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

// Function: sub_003C4638
// Address: 0x3c4638 - 0x3c49b0
void sub_003C4638_0x3c4638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4638_0x3c4638");
#endif

    switch (ctx->pc) {
        case 0x3c4638u: goto label_3c4638;
        case 0x3c463cu: goto label_3c463c;
        case 0x3c4640u: goto label_3c4640;
        case 0x3c4644u: goto label_3c4644;
        case 0x3c4648u: goto label_3c4648;
        case 0x3c464cu: goto label_3c464c;
        case 0x3c4650u: goto label_3c4650;
        case 0x3c4654u: goto label_3c4654;
        case 0x3c4658u: goto label_3c4658;
        case 0x3c465cu: goto label_3c465c;
        case 0x3c4660u: goto label_3c4660;
        case 0x3c4664u: goto label_3c4664;
        case 0x3c4668u: goto label_3c4668;
        case 0x3c466cu: goto label_3c466c;
        case 0x3c4670u: goto label_3c4670;
        case 0x3c4674u: goto label_3c4674;
        case 0x3c4678u: goto label_3c4678;
        case 0x3c467cu: goto label_3c467c;
        case 0x3c4680u: goto label_3c4680;
        case 0x3c4684u: goto label_3c4684;
        case 0x3c4688u: goto label_3c4688;
        case 0x3c468cu: goto label_3c468c;
        case 0x3c4690u: goto label_3c4690;
        case 0x3c4694u: goto label_3c4694;
        case 0x3c4698u: goto label_3c4698;
        case 0x3c469cu: goto label_3c469c;
        case 0x3c46a0u: goto label_3c46a0;
        case 0x3c46a4u: goto label_3c46a4;
        case 0x3c46a8u: goto label_3c46a8;
        case 0x3c46acu: goto label_3c46ac;
        case 0x3c46b0u: goto label_3c46b0;
        case 0x3c46b4u: goto label_3c46b4;
        case 0x3c46b8u: goto label_3c46b8;
        case 0x3c46bcu: goto label_3c46bc;
        case 0x3c46c0u: goto label_3c46c0;
        case 0x3c46c4u: goto label_3c46c4;
        case 0x3c46c8u: goto label_3c46c8;
        case 0x3c46ccu: goto label_3c46cc;
        case 0x3c46d0u: goto label_3c46d0;
        case 0x3c46d4u: goto label_3c46d4;
        case 0x3c46d8u: goto label_3c46d8;
        case 0x3c46dcu: goto label_3c46dc;
        case 0x3c46e0u: goto label_3c46e0;
        case 0x3c46e4u: goto label_3c46e4;
        case 0x3c46e8u: goto label_3c46e8;
        case 0x3c46ecu: goto label_3c46ec;
        case 0x3c46f0u: goto label_3c46f0;
        case 0x3c46f4u: goto label_3c46f4;
        case 0x3c46f8u: goto label_3c46f8;
        case 0x3c46fcu: goto label_3c46fc;
        case 0x3c4700u: goto label_3c4700;
        case 0x3c4704u: goto label_3c4704;
        case 0x3c4708u: goto label_3c4708;
        case 0x3c470cu: goto label_3c470c;
        case 0x3c4710u: goto label_3c4710;
        case 0x3c4714u: goto label_3c4714;
        case 0x3c4718u: goto label_3c4718;
        case 0x3c471cu: goto label_3c471c;
        case 0x3c4720u: goto label_3c4720;
        case 0x3c4724u: goto label_3c4724;
        case 0x3c4728u: goto label_3c4728;
        case 0x3c472cu: goto label_3c472c;
        case 0x3c4730u: goto label_3c4730;
        case 0x3c4734u: goto label_3c4734;
        case 0x3c4738u: goto label_3c4738;
        case 0x3c473cu: goto label_3c473c;
        case 0x3c4740u: goto label_3c4740;
        case 0x3c4744u: goto label_3c4744;
        case 0x3c4748u: goto label_3c4748;
        case 0x3c474cu: goto label_3c474c;
        case 0x3c4750u: goto label_3c4750;
        case 0x3c4754u: goto label_3c4754;
        case 0x3c4758u: goto label_3c4758;
        case 0x3c475cu: goto label_3c475c;
        case 0x3c4760u: goto label_3c4760;
        case 0x3c4764u: goto label_3c4764;
        case 0x3c4768u: goto label_3c4768;
        case 0x3c476cu: goto label_3c476c;
        case 0x3c4770u: goto label_3c4770;
        case 0x3c4774u: goto label_3c4774;
        case 0x3c4778u: goto label_3c4778;
        case 0x3c477cu: goto label_3c477c;
        case 0x3c4780u: goto label_3c4780;
        case 0x3c4784u: goto label_3c4784;
        case 0x3c4788u: goto label_3c4788;
        case 0x3c478cu: goto label_3c478c;
        case 0x3c4790u: goto label_3c4790;
        case 0x3c4794u: goto label_3c4794;
        case 0x3c4798u: goto label_3c4798;
        case 0x3c479cu: goto label_3c479c;
        case 0x3c47a0u: goto label_3c47a0;
        case 0x3c47a4u: goto label_3c47a4;
        case 0x3c47a8u: goto label_3c47a8;
        case 0x3c47acu: goto label_3c47ac;
        case 0x3c47b0u: goto label_3c47b0;
        case 0x3c47b4u: goto label_3c47b4;
        case 0x3c47b8u: goto label_3c47b8;
        case 0x3c47bcu: goto label_3c47bc;
        case 0x3c47c0u: goto label_3c47c0;
        case 0x3c47c4u: goto label_3c47c4;
        case 0x3c47c8u: goto label_3c47c8;
        case 0x3c47ccu: goto label_3c47cc;
        case 0x3c47d0u: goto label_3c47d0;
        case 0x3c47d4u: goto label_3c47d4;
        case 0x3c47d8u: goto label_3c47d8;
        case 0x3c47dcu: goto label_3c47dc;
        case 0x3c47e0u: goto label_3c47e0;
        case 0x3c47e4u: goto label_3c47e4;
        case 0x3c47e8u: goto label_3c47e8;
        case 0x3c47ecu: goto label_3c47ec;
        case 0x3c47f0u: goto label_3c47f0;
        case 0x3c47f4u: goto label_3c47f4;
        case 0x3c47f8u: goto label_3c47f8;
        case 0x3c47fcu: goto label_3c47fc;
        case 0x3c4800u: goto label_3c4800;
        case 0x3c4804u: goto label_3c4804;
        case 0x3c4808u: goto label_3c4808;
        case 0x3c480cu: goto label_3c480c;
        case 0x3c4810u: goto label_3c4810;
        case 0x3c4814u: goto label_3c4814;
        case 0x3c4818u: goto label_3c4818;
        case 0x3c481cu: goto label_3c481c;
        case 0x3c4820u: goto label_3c4820;
        case 0x3c4824u: goto label_3c4824;
        case 0x3c4828u: goto label_3c4828;
        case 0x3c482cu: goto label_3c482c;
        case 0x3c4830u: goto label_3c4830;
        case 0x3c4834u: goto label_3c4834;
        case 0x3c4838u: goto label_3c4838;
        case 0x3c483cu: goto label_3c483c;
        case 0x3c4840u: goto label_3c4840;
        case 0x3c4844u: goto label_3c4844;
        case 0x3c4848u: goto label_3c4848;
        case 0x3c484cu: goto label_3c484c;
        case 0x3c4850u: goto label_3c4850;
        case 0x3c4854u: goto label_3c4854;
        case 0x3c4858u: goto label_3c4858;
        case 0x3c485cu: goto label_3c485c;
        case 0x3c4860u: goto label_3c4860;
        case 0x3c4864u: goto label_3c4864;
        case 0x3c4868u: goto label_3c4868;
        case 0x3c486cu: goto label_3c486c;
        case 0x3c4870u: goto label_3c4870;
        case 0x3c4874u: goto label_3c4874;
        case 0x3c4878u: goto label_3c4878;
        case 0x3c487cu: goto label_3c487c;
        case 0x3c4880u: goto label_3c4880;
        case 0x3c4884u: goto label_3c4884;
        case 0x3c4888u: goto label_3c4888;
        case 0x3c488cu: goto label_3c488c;
        case 0x3c4890u: goto label_3c4890;
        case 0x3c4894u: goto label_3c4894;
        case 0x3c4898u: goto label_3c4898;
        case 0x3c489cu: goto label_3c489c;
        case 0x3c48a0u: goto label_3c48a0;
        case 0x3c48a4u: goto label_3c48a4;
        case 0x3c48a8u: goto label_3c48a8;
        case 0x3c48acu: goto label_3c48ac;
        case 0x3c48b0u: goto label_3c48b0;
        case 0x3c48b4u: goto label_3c48b4;
        case 0x3c48b8u: goto label_3c48b8;
        case 0x3c48bcu: goto label_3c48bc;
        case 0x3c48c0u: goto label_3c48c0;
        case 0x3c48c4u: goto label_3c48c4;
        case 0x3c48c8u: goto label_3c48c8;
        case 0x3c48ccu: goto label_3c48cc;
        case 0x3c48d0u: goto label_3c48d0;
        case 0x3c48d4u: goto label_3c48d4;
        case 0x3c48d8u: goto label_3c48d8;
        case 0x3c48dcu: goto label_3c48dc;
        case 0x3c48e0u: goto label_3c48e0;
        case 0x3c48e4u: goto label_3c48e4;
        case 0x3c48e8u: goto label_3c48e8;
        case 0x3c48ecu: goto label_3c48ec;
        case 0x3c48f0u: goto label_3c48f0;
        case 0x3c48f4u: goto label_3c48f4;
        case 0x3c48f8u: goto label_3c48f8;
        case 0x3c48fcu: goto label_3c48fc;
        case 0x3c4900u: goto label_3c4900;
        case 0x3c4904u: goto label_3c4904;
        case 0x3c4908u: goto label_3c4908;
        case 0x3c490cu: goto label_3c490c;
        case 0x3c4910u: goto label_3c4910;
        case 0x3c4914u: goto label_3c4914;
        case 0x3c4918u: goto label_3c4918;
        case 0x3c491cu: goto label_3c491c;
        case 0x3c4920u: goto label_3c4920;
        case 0x3c4924u: goto label_3c4924;
        case 0x3c4928u: goto label_3c4928;
        case 0x3c492cu: goto label_3c492c;
        case 0x3c4930u: goto label_3c4930;
        case 0x3c4934u: goto label_3c4934;
        case 0x3c4938u: goto label_3c4938;
        case 0x3c493cu: goto label_3c493c;
        case 0x3c4940u: goto label_3c4940;
        case 0x3c4944u: goto label_3c4944;
        case 0x3c4948u: goto label_3c4948;
        case 0x3c494cu: goto label_3c494c;
        case 0x3c4950u: goto label_3c4950;
        case 0x3c4954u: goto label_3c4954;
        case 0x3c4958u: goto label_3c4958;
        case 0x3c495cu: goto label_3c495c;
        case 0x3c4960u: goto label_3c4960;
        case 0x3c4964u: goto label_3c4964;
        case 0x3c4968u: goto label_3c4968;
        case 0x3c496cu: goto label_3c496c;
        case 0x3c4970u: goto label_3c4970;
        case 0x3c4974u: goto label_3c4974;
        case 0x3c4978u: goto label_3c4978;
        case 0x3c497cu: goto label_3c497c;
        case 0x3c4980u: goto label_3c4980;
        case 0x3c4984u: goto label_3c4984;
        case 0x3c4988u: goto label_3c4988;
        case 0x3c498cu: goto label_3c498c;
        case 0x3c4990u: goto label_3c4990;
        case 0x3c4994u: goto label_3c4994;
        case 0x3c4998u: goto label_3c4998;
        case 0x3c499cu: goto label_3c499c;
        case 0x3c49a0u: goto label_3c49a0;
        case 0x3c49a4u: goto label_3c49a4;
        case 0x3c49a8u: goto label_3c49a8;
        case 0x3c49acu: goto label_3c49ac;
        default: break;
    }

    ctx->pc = 0x3c4638u;

label_3c4638:
    // 0x3c4638: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3c4638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3c463c:
    // 0x3c463c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c463cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c4640:
    // 0x3c4640: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3c4640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3c4644:
    // 0x3c4644: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3c4644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3c4648:
    // 0x3c4648: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c4648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c464c:
    // 0x3c464c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c464cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3c4650:
    // 0x3c4650: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c4650u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c4654:
    // 0x3c4654: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3c4654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3c4658:
    // 0x3c4658: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c4658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3c465c:
    // 0x3c465c: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x3c465cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3c4660:
    // 0x3c4660: 0x10e2000f  beq         $a3, $v0, . + 4 + (0xF << 2)
label_3c4664:
    if (ctx->pc == 0x3C4664u) {
        ctx->pc = 0x3C4664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4660u;
        // 0x3c4664: 0x24730028  addiu       $s3, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4668u;
        goto label_3c4668;
    }
    ctx->pc = 0x3C4660u;
    {
        const bool branch_taken_0x3c4660 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C4664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4660u;
        // 0x3c4664: 0x24730028  addiu       $s3, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4660) {
            ctx->pc = 0x3C46A0u;
            goto label_3c46a0;
        }
    }
    ctx->pc = 0x3C4668u;
label_3c4668:
    // 0x3c4668: 0x2ce20003  sltiu       $v0, $a3, 0x3
    ctx->pc = 0x3c4668u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3c466c:
    // 0x3c466c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3c4670:
    if (ctx->pc == 0x3C4670u) {
        ctx->pc = 0x3C4670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C466Cu;
        // 0x3c4670: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4674u;
        goto label_3c4674;
    }
    ctx->pc = 0x3C466Cu;
    {
        const bool branch_taken_0x3c466c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C466Cu;
        // 0x3c4670: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c466c) {
            ctx->pc = 0x3C4684u;
            goto label_3c4684;
        }
    }
    ctx->pc = 0x3C4674u;
label_3c4674:
    // 0x3c4674: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
label_3c4678:
    if (ctx->pc == 0x3C4678u) {
        ctx->pc = 0x3C4678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4674u;
        // 0x3c4678: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C467Cu;
        goto label_3c467c;
    }
    ctx->pc = 0x3C4674u;
    {
        const bool branch_taken_0x3c4674 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C4678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4674u;
        // 0x3c4678: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4674) {
            ctx->pc = 0x3C4698u;
            goto label_3c4698;
        }
    }
    ctx->pc = 0x3C467Cu;
label_3c467c:
    // 0x3c467c: 0x10000010  b           . + 4 + (0x10 << 2)
label_3c4680:
    if (ctx->pc == 0x3C4680u) {
        ctx->pc = 0x3C4680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C467Cu;
        // 0x3c4680: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4684u;
        goto label_3c4684;
    }
    ctx->pc = 0x3C467Cu;
    {
        const bool branch_taken_0x3c467c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C467Cu;
        // 0x3c4680: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c467c) {
            ctx->pc = 0x3C46C0u;
            goto label_3c46c0;
        }
    }
    ctx->pc = 0x3C4684u;
label_3c4684:
    // 0x3c4684: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3c4684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c4688:
    // 0x3c4688: 0x10e20009  beq         $a3, $v0, . + 4 + (0x9 << 2)
label_3c468c:
    if (ctx->pc == 0x3C468Cu) {
        ctx->pc = 0x3C468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4688u;
        // 0x3c468c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4690u;
        goto label_3c4690;
    }
    ctx->pc = 0x3C4688u;
    {
        const bool branch_taken_0x3c4688 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4688u;
        // 0x3c468c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4688) {
            ctx->pc = 0x3C46B0u;
            goto label_3c46b0;
        }
    }
    ctx->pc = 0x3C4690u;
label_3c4690:
    // 0x3c4690: 0x1000000b  b           . + 4 + (0xB << 2)
label_3c4694:
    if (ctx->pc == 0x3C4694u) {
        ctx->pc = 0x3C4694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4690u;
        // 0x3c4694: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4698u;
        goto label_3c4698;
    }
    ctx->pc = 0x3C4690u;
    {
        const bool branch_taken_0x3c4690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4690u;
        // 0x3c4694: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4690) {
            ctx->pc = 0x3C46C0u;
            goto label_3c46c0;
        }
    }
    ctx->pc = 0x3C4698u;
label_3c4698:
    // 0x3c4698: 0x1000000b  b           . + 4 + (0xB << 2)
label_3c469c:
    if (ctx->pc == 0x3C469Cu) {
        ctx->pc = 0x3C469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4698u;
        // 0x3c469c: 0xffa60010  sd          $a2, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C46A0u;
        goto label_3c46a0;
    }
    ctx->pc = 0x3C4698u;
    {
        const bool branch_taken_0x3c4698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4698u;
        // 0x3c469c: 0xffa60010  sd          $a2, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4698) {
            ctx->pc = 0x3C46C8u;
            goto label_3c46c8;
        }
    }
    ctx->pc = 0x3C46A0u;
label_3c46a0:
    // 0x3c46a0: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x3c46a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_3c46a4:
    // 0x3c46a4: 0xc2102d  daddu       $v0, $a2, $v0
    ctx->pc = 0x3c46a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
label_3c46a8:
    // 0x3c46a8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3c46ac:
    if (ctx->pc == 0x3C46ACu) {
        ctx->pc = 0x3C46ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C46A8u;
        // 0x3c46ac: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C46B0u;
        goto label_3c46b0;
    }
    ctx->pc = 0x3C46A8u;
    {
        const bool branch_taken_0x3c46a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C46ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C46A8u;
        // 0x3c46ac: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c46a8) {
            ctx->pc = 0x3C46C8u;
            goto label_3c46c8;
        }
    }
    ctx->pc = 0x3C46B0u;
label_3c46b0:
    // 0x3c46b0: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x3c46b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_3c46b4:
    // 0x3c46b4: 0x46102f  dsubu       $v0, $v0, $a2
    ctx->pc = 0x3c46b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
label_3c46b8:
    // 0x3c46b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_3c46bc:
    if (ctx->pc == 0x3C46BCu) {
        ctx->pc = 0x3C46BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C46B8u;
        // 0x3c46bc: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C46C0u;
        goto label_3c46c0;
    }
    ctx->pc = 0x3C46B8u;
    {
        const bool branch_taken_0x3c46b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C46BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C46B8u;
        // 0x3c46bc: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c46b8) {
            ctx->pc = 0x3C46C8u;
            goto label_3c46c8;
        }
    }
    ctx->pc = 0x3C46C0u;
label_3c46c0:
    // 0x3c46c0: 0x1000004b  b           . + 4 + (0x4B << 2)
label_3c46c4:
    if (ctx->pc == 0x3C46C4u) {
        ctx->pc = 0x3C46C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C46C0u;
        // 0x3c46c4: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C46C8u;
        goto label_3c46c8;
    }
    ctx->pc = 0x3C46C0u;
    {
        const bool branch_taken_0x3c46c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C46C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C46C0u;
        // 0x3c46c4: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c46c0) {
            ctx->pc = 0x3C47F0u;
            goto label_3c47f0;
        }
    }
    ctx->pc = 0x3C46C8u;
label_3c46c8:
    // 0x3c46c8: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x3c46c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3c46cc:
    // 0x3c46cc: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x3c46ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_3c46d0:
    // 0x3c46d0: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x3c46d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3c46d4:
    // 0x3c46d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3c46d8:
    if (ctx->pc == 0x3C46D8u) {
        ctx->pc = 0x3C46DCu;
        goto label_3c46dc;
    }
    ctx->pc = 0x3C46D4u;
    {
        const bool branch_taken_0x3c46d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c46d4) {
            ctx->pc = 0x3C46E4u;
            goto label_3c46e4;
        }
    }
    ctx->pc = 0x3C46DCu;
label_3c46dc:
    // 0x3c46dc: 0x10000003  b           . + 4 + (0x3 << 2)
label_3c46e0:
    if (ctx->pc == 0x3C46E0u) {
        ctx->pc = 0x3C46E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C46DCu;
        // 0x3c46e0: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C46E4u;
        goto label_3c46e4;
    }
    ctx->pc = 0x3C46DCu;
    {
        const bool branch_taken_0x3c46dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C46E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C46DCu;
        // 0x3c46e0: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c46dc) {
            ctx->pc = 0x3C46ECu;
            goto label_3c46ec;
        }
    }
    ctx->pc = 0x3C46E4u;
label_3c46e4:
    // 0x3c46e4: 0x4820001  bltzl       $a0, . + 4 + (0x1 << 2)
label_3c46e8:
    if (ctx->pc == 0x3C46E8u) {
        ctx->pc = 0x3C46E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C46E4u;
        // 0x3c46e8: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C46ECu;
        goto label_3c46ec;
    }
    ctx->pc = 0x3C46E4u;
    {
        const bool branch_taken_0x3c46e4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3c46e4) {
            ctx->pc = 0x3C46E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C46E4u;
            // 0x3c46e8: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C46ECu;
            goto label_3c46ec;
        }
    }
    ctx->pc = 0x3C46ECu;
label_3c46ec:
    // 0x3c46ec: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x3c46ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_3c46f0:
    // 0x3c46f0: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x3c46f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_3c46f4:
    // 0x3c46f4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3c46f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c46f8:
    // 0x3c46f8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3c46f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3c46fc:
    // 0x3c46fc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_3c4700:
    if (ctx->pc == 0x3C4700u) {
        ctx->pc = 0x3C4700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C46FCu;
        // 0x3c4700: 0xe31023  subu        $v0, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4704u;
        goto label_3c4704;
    }
    ctx->pc = 0x3C46FCu;
    {
        const bool branch_taken_0x3c46fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C46FCu;
        // 0x3c4700: 0xe31023  subu        $v0, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c46fc) {
            ctx->pc = 0x3C4750u;
            goto label_3c4750;
        }
    }
    ctx->pc = 0x3C4704u;
label_3c4704:
    // 0x3c4704: 0xde240010  ld          $a0, 0x10($s1)
    ctx->pc = 0x3c4704u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_3c4708:
    // 0x3c4708: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x3c4708u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3c470c:
    // 0x3c470c: 0x82302d  daddu       $a2, $a0, $v0
    ctx->pc = 0x3c470cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_3c4710:
    // 0x3c4710: 0x83202f  dsubu       $a0, $a0, $v1
    ctx->pc = 0x3c4710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
label_3c4714:
    // 0x3c4714: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x3c4714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3c4718:
    // 0x3c4718: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_3c471c:
    if (ctx->pc == 0x3C471Cu) {
        ctx->pc = 0x3C471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4718u;
        // 0x3c471c: 0xdfa40010  ld          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4720u;
        goto label_3c4720;
    }
    ctx->pc = 0x3C4718u;
    {
        const bool branch_taken_0x3c4718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c4718) {
            ctx->pc = 0x3C471Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4718u;
            // 0x3c471c: 0xdfa40010  ld          $a0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4754u;
            goto label_3c4754;
        }
    }
    ctx->pc = 0x3C4720u;
label_3c4720:
    // 0x3c4720: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x3c4720u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3c4724:
    // 0x3c4724: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_3c4728:
    if (ctx->pc == 0x3C4728u) {
        ctx->pc = 0x3C4728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4724u;
        // 0x3c4728: 0xdfa40010  ld          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C472Cu;
        goto label_3c472c;
    }
    ctx->pc = 0x3C4724u;
    {
        const bool branch_taken_0x3c4724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c4724) {
            ctx->pc = 0x3C4728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4724u;
            // 0x3c4728: 0xdfa40010  ld          $a0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4754u;
            goto label_3c4754;
        }
    }
    ctx->pc = 0x3C472Cu;
label_3c472c:
    // 0x3c472c: 0xa4102f  dsubu       $v0, $a1, $a0
    ctx->pc = 0x3c472cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) - GPR_U64(ctx, 4));
label_3c4730:
    // 0x3c4730: 0xfe250010  sd          $a1, 0x10($s1)
    ctx->pc = 0x3c4730u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 5));
label_3c4734:
    // 0x3c4734: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c4734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3c4738:
    // 0x3c4738: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3c4738u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3c473c:
    // 0x3c473c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c473cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4740:
    // 0x3c4740: 0xc0f0930  jal         func_3C24C0
label_3c4744:
    if (ctx->pc == 0x3C4744u) {
        ctx->pc = 0x3C4744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4740u;
        // 0x3c4744: 0xae22006c  sw          $v0, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4748u;
        goto label_3c4748;
    }
    ctx->pc = 0x3C4740u;
    SET_GPR_U32(ctx, 31, 0x3C4748u);
    ctx->pc = 0x3C4744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4740u;
    // 0x3c4744: 0xae22006c  sw          $v0, 0x6C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C24C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C24C0u, 0x3C4740u, 0x3C4748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4748u;
label_3c4748:
    // 0x3c4748: 0x10000029  b           . + 4 + (0x29 << 2)
label_3c474c:
    if (ctx->pc == 0x3C474Cu) {
        ctx->pc = 0x3C474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4748u;
        // 0x3c474c: 0x7a220010  lq          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4750u;
        goto label_3c4750;
    }
    ctx->pc = 0x3C4748u;
    {
        const bool branch_taken_0x3c4748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4748u;
        // 0x3c474c: 0x7a220010  lq          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4748) {
            ctx->pc = 0x3C47F0u;
            goto label_3c47f0;
        }
    }
    ctx->pc = 0x3C4750u;
label_3c4750:
    // 0x3c4750: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x3c4750u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3c4754:
    // 0x3c4754: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c4754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c4758:
    // 0x3c4758: 0x8e260064  lw          $a2, 0x64($s1)
    ctx->pc = 0x3c4758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_3c475c:
    // 0x3c475c: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3c475cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_3c4760:
    // 0x3c4760: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3c4760u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3c4764:
    // 0x3c4764: 0x648307ff  daddiu      $v1, $a0, 0x7FF
    ctx->pc = 0x3c4764u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)2047);
label_3c4768:
    // 0x3c4768: 0xae27006c  sw          $a3, 0x6C($s1)
    ctx->pc = 0x3c4768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 7));
label_3c476c:
    // 0x3c476c: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x3c476cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_3c4770:
    // 0x3c4770: 0xfe240010  sd          $a0, 0x10($s1)
    ctx->pc = 0x3c4770u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 4));
label_3c4774:
    // 0x3c4774: 0x31d78  dsll        $v1, $v1, 21
    ctx->pc = 0x3c4774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 21);
label_3c4778:
    // 0x3c4778: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3c4778u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_3c477c:
    // 0x3c477c: 0x24b0e0c0  addiu       $s0, $a1, -0x1F40
    ctx->pc = 0x3c477cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959296));
label_3c4780:
    // 0x3c4780: 0x8f84bd94  lw          $a0, -0x426C($gp)
    ctx->pc = 0x3c4780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
label_3c4784:
    // 0x3c4784: 0xaca6e0c0  sw          $a2, -0x1F40($a1)
    ctx->pc = 0x3c4784u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294959296), GPR_U32(ctx, 6));
label_3c4788:
    // 0x3c4788: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3c4788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c478c:
    // 0x3c478c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3c478cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3c4790:
    // 0x3c4790: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x3c4790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
label_3c4794:
    // 0x3c4794: 0xc0bf6e8  jal         func_2FDBA0
label_3c4798:
    if (ctx->pc == 0x3C4798u) {
        ctx->pc = 0x3C4798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4794u;
        // 0x3c4798: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C479Cu;
        goto label_3c479c;
    }
    ctx->pc = 0x3C4794u;
    SET_GPR_U32(ctx, 31, 0x3C479Cu);
    ctx->pc = 0x3C4798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4794u;
    // 0x3c4798: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3C4794u, 0x3C479Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C479Cu;
label_3c479c:
    // 0x3c479c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3c479cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_3c47a0:
    // 0x3c47a0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3c47a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c47a4:
    // 0x3c47a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c47a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c47a8:
    // 0x3c47a8: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x3c47a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3c47ac:
    // 0x3c47ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c47acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c47b0:
    // 0x3c47b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c47b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c47b4:
    // 0x3c47b4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c47b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c47b8:
    // 0x3c47b8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3c47b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3c47bc:
    // 0x3c47bc: 0x2484e088  addiu       $a0, $a0, -0x1F78
    ctx->pc = 0x3c47bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959240));
label_3c47c0:
    // 0x3c47c0: 0xc0c06aa  jal         func_301AA8
label_3c47c4:
    if (ctx->pc == 0x3C47C4u) {
        ctx->pc = 0x3C47C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C47C0u;
        // 0x3c47c4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C47C8u;
        goto label_3c47c8;
    }
    ctx->pc = 0x3C47C0u;
    SET_GPR_U32(ctx, 31, 0x3C47C8u);
    ctx->pc = 0x3C47C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C47C0u;
    // 0x3c47c4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x3C47C0u, 0x3C47C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C47C8u;
label_3c47c8:
    // 0x3c47c8: 0xc0bf6e0  jal         func_2FDB80
label_3c47cc:
    if (ctx->pc == 0x3C47CCu) {
        ctx->pc = 0x3C47CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C47C8u;
        // 0x3c47cc: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C47D0u;
        goto label_3c47d0;
    }
    ctx->pc = 0x3C47C8u;
    SET_GPR_U32(ctx, 31, 0x3C47D0u);
    ctx->pc = 0x3C47CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C47C8u;
    // 0x3c47cc: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x3C47C8u, 0x3C47D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C47D0u;
label_3c47d0:
    // 0x3c47d0: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x3c47d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3c47d4:
    // 0x3c47d4: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_3c47d8:
    if (ctx->pc == 0x3C47D8u) {
        ctx->pc = 0x3C47D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C47D4u;
        // 0x3c47d8: 0x7a220010  lq          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C47DCu;
        goto label_3c47dc;
    }
    ctx->pc = 0x3C47D4u;
    {
        const bool branch_taken_0x3c47d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c47d4) {
            ctx->pc = 0x3C47D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C47D4u;
            // 0x3c47d8: 0x7a220010  lq          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C47F0u;
            goto label_3c47f0;
        }
    }
    ctx->pc = 0x3C47DCu;
label_3c47dc:
    // 0x3c47dc: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x3c47dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3c47e0:
    // 0x3c47e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c47e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c47e4:
    // 0x3c47e4: 0x40f809  jalr        $v0
label_3c47e8:
    if (ctx->pc == 0x3C47E8u) {
        ctx->pc = 0x3C47E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C47E4u;
        // 0x3c47e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C47ECu;
        goto label_3c47ec;
    }
    ctx->pc = 0x3C47E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C47ECu);
        ctx->pc = 0x3C47E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C47E4u;
        // 0x3c47e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C47E4u, 0x3C47ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C47ECu;
label_3c47ec:
    // 0x3c47ec: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x3c47ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3c47f0:
    // 0x3c47f0: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x3c47f0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_3c47f4:
    // 0x3c47f4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3c47f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c47f8:
    // 0x3c47f8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3c47f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c47fc:
    // 0x3c47fc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3c47fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c4800:
    // 0x3c4800: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3c4800u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c4804:
    // 0x3c4804: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c4804u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c4808:
    // 0x3c4808: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c4808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3c480c:
    // 0x3c480c: 0x3e00008  jr          $ra
label_3c4810:
    if (ctx->pc == 0x3C4810u) {
        ctx->pc = 0x3C4810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C480Cu;
        // 0x3c4810: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4814u;
        goto label_3c4814;
    }
    ctx->pc = 0x3C480Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C480Cu;
        // 0x3c4810: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C480Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C4814u;
label_3c4814:
    // 0x3c4814: 0x0  nop
    ctx->pc = 0x3c4814u;
    // NOP
label_3c4818:
    // 0x3c4818: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3c4818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3c481c:
    // 0x3c481c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3c481cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3c4820:
    // 0x3c4820: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3c4820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3c4824:
    // 0x3c4824: 0x3c120062  lui         $s2, 0x62
    ctx->pc = 0x3c4824u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
label_3c4828:
    // 0x3c4828: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3c4828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3c482c:
    // 0x3c482c: 0x2652e880  addiu       $s2, $s2, -0x1780
    ctx->pc = 0x3c482cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961280));
label_3c4830:
    // 0x3c4830: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3c4830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3c4834:
    // 0x3c4834: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3c4834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3c4838:
    // 0x3c4838: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3c4838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_3c483c:
    // 0x3c483c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3c483cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c4840:
    // 0x3c4840: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x3c4840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_3c4844:
    // 0x3c4844: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3c4844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c4848:
    // 0x3c4848: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c4848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3c484c:
    // 0x3c484c: 0x3c160062  lui         $s6, 0x62
    ctx->pc = 0x3c484cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)98 << 16));
label_3c4850:
    // 0x3c4850: 0x26d0e0c0  addiu       $s0, $s6, -0x1F40
    ctx->pc = 0x3c4850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959296));
label_3c4854:
    // 0x3c4854: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3c4854u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c4858:
    // 0x3c4858: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x3c4858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_3c485c:
    // 0x3c485c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3c485cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3c4860:
    // 0x3c4860: 0x40f809  jalr        $v0
label_3c4864:
    if (ctx->pc == 0x3C4864u) {
        ctx->pc = 0x3C4864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4860u;
        // 0x3c4864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4868u;
        goto label_3c4868;
    }
    ctx->pc = 0x3C4860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C4868u);
        ctx->pc = 0x3C4864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4860u;
        // 0x3c4864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4860u, 0x3C4868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C4868u;
label_3c4868:
    // 0x3c4868: 0xc0bf6e8  jal         func_2FDBA0
label_3c486c:
    if (ctx->pc == 0x3C486Cu) {
        ctx->pc = 0x3C486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4868u;
        // 0x3c486c: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4870u;
        goto label_3c4870;
    }
    ctx->pc = 0x3C4868u;
    SET_GPR_U32(ctx, 31, 0x3C4870u);
    ctx->pc = 0x3C486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4868u;
    // 0x3c486c: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3C4868u, 0x3C4870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4870u;
label_3c4870:
    // 0x3c4870: 0x3c130062  lui         $s3, 0x62
    ctx->pc = 0x3c4870u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)98 << 16));
label_3c4874:
    // 0x3c4874: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x3c4874u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
label_3c4878:
    // 0x3c4878: 0x2673e088  addiu       $s3, $s3, -0x1F78
    ctx->pc = 0x3c4878u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959240));
label_3c487c:
    // 0x3c487c: 0x2631e180  addiu       $s1, $s1, -0x1E80
    ctx->pc = 0x3c487cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294959488));
label_3c4880:
    // 0x3c4880: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3c4880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3c4884:
    // 0x3c4884: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3c4884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4888:
    // 0x3c4888: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x3c4888u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c488c:
    // 0x3c488c: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x3c488cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3c4890:
    // 0x3c4890: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x3c4890u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3c4894:
    // 0x3c4894: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c4894u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c4898:
    // 0x3c4898: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3c4898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3c489c:
    // 0x3c489c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c489cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c48a0:
    // 0x3c48a0: 0xc0c06aa  jal         func_301AA8
label_3c48a4:
    if (ctx->pc == 0x3C48A4u) {
        ctx->pc = 0x3C48A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C48A0u;
        // 0x3c48a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C48A8u;
        goto label_3c48a8;
    }
    ctx->pc = 0x3C48A0u;
    SET_GPR_U32(ctx, 31, 0x3C48A8u);
    ctx->pc = 0x3C48A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C48A0u;
    // 0x3c48a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x3C48A0u, 0x3C48A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C48A8u;
label_3c48a8:
    // 0x3c48a8: 0xc0bf6e0  jal         func_2FDB80
label_3c48ac:
    if (ctx->pc == 0x3C48ACu) {
        ctx->pc = 0x3C48ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C48A8u;
        // 0x3c48ac: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C48B0u;
        goto label_3c48b0;
    }
    ctx->pc = 0x3C48A8u;
    SET_GPR_U32(ctx, 31, 0x3C48B0u);
    ctx->pc = 0x3C48ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C48A8u;
    // 0x3c48ac: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x3C48A8u, 0x3C48B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C48B0u;
label_3c48b0:
    // 0x3c48b0: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x3c48b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_3c48b4:
    // 0x3c48b4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3c48b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c48b8:
    // 0x3c48b8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3c48b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3c48bc:
    // 0x3c48bc: 0x40f809  jalr        $v0
label_3c48c0:
    if (ctx->pc == 0x3C48C0u) {
        ctx->pc = 0x3C48C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C48BCu;
        // 0x3c48c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C48C4u;
        goto label_3c48c4;
    }
    ctx->pc = 0x3C48BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C48C4u);
        ctx->pc = 0x3C48C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C48BCu;
        // 0x3c48c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C48BCu, 0x3C48C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C48C4u;
label_3c48c4:
    // 0x3c48c4: 0xc0bf6e8  jal         func_2FDBA0
label_3c48c8:
    if (ctx->pc == 0x3C48C8u) {
        ctx->pc = 0x3C48C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C48C4u;
        // 0x3c48c8: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C48CCu;
        goto label_3c48cc;
    }
    ctx->pc = 0x3C48C4u;
    SET_GPR_U32(ctx, 31, 0x3C48CCu);
    ctx->pc = 0x3C48C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C48C4u;
    // 0x3c48c8: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3C48C4u, 0x3C48CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C48CCu;
label_3c48cc:
    // 0x3c48cc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3c48ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3c48d0:
    // 0x3c48d0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3c48d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c48d4:
    // 0x3c48d4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x3c48d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c48d8:
    // 0x3c48d8: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x3c48d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3c48dc:
    // 0x3c48dc: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x3c48dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3c48e0:
    // 0x3c48e0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c48e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c48e4:
    // 0x3c48e4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3c48e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3c48e8:
    // 0x3c48e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c48e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c48ec:
    // 0x3c48ec: 0xc0c06aa  jal         func_301AA8
label_3c48f0:
    if (ctx->pc == 0x3C48F0u) {
        ctx->pc = 0x3C48F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C48ECu;
        // 0x3c48f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C48F4u;
        goto label_3c48f4;
    }
    ctx->pc = 0x3C48ECu;
    SET_GPR_U32(ctx, 31, 0x3C48F4u);
    ctx->pc = 0x3C48F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C48ECu;
    // 0x3c48f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x3C48ECu, 0x3C48F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C48F4u;
label_3c48f4:
    // 0x3c48f4: 0xc0bf6e0  jal         func_2FDB80
label_3c48f8:
    if (ctx->pc == 0x3C48F8u) {
        ctx->pc = 0x3C48F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C48F4u;
        // 0x3c48f8: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C48FCu;
        goto label_3c48fc;
    }
    ctx->pc = 0x3C48F4u;
    SET_GPR_U32(ctx, 31, 0x3C48FCu);
    ctx->pc = 0x3C48F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C48F4u;
    // 0x3c48f8: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x3C48F4u, 0x3C48FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C48FCu;
label_3c48fc:
    // 0x3c48fc: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x3c48fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_3c4900:
    // 0x3c4900: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3c4900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c4904:
    // 0x3c4904: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3c4904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3c4908:
    // 0x3c4908: 0x40f809  jalr        $v0
label_3c490c:
    if (ctx->pc == 0x3C490Cu) {
        ctx->pc = 0x3C490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4908u;
        // 0x3c490c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4910u;
        goto label_3c4910;
    }
    ctx->pc = 0x3C4908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C4910u);
        ctx->pc = 0x3C490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4908u;
        // 0x3c490c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4908u, 0x3C4910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C4910u;
label_3c4910:
    // 0x3c4910: 0xc0bf6e8  jal         func_2FDBA0
label_3c4914:
    if (ctx->pc == 0x3C4914u) {
        ctx->pc = 0x3C4914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4910u;
        // 0x3c4914: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4918u;
        goto label_3c4918;
    }
    ctx->pc = 0x3C4910u;
    SET_GPR_U32(ctx, 31, 0x3C4918u);
    ctx->pc = 0x3C4914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4910u;
    // 0x3c4914: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3C4910u, 0x3C4918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4918u;
label_3c4918:
    // 0x3c4918: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x3c4918u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c491c:
    // 0x3c491c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3c491cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3c4920:
    // 0x3c4920: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3c4920u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4924:
    // 0x3c4924: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x3c4924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3c4928:
    // 0x3c4928: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c4928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c492c:
    // 0x3c492c: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x3c492cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3c4930:
    // 0x3c4930: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x3c4930u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3c4934:
    // 0x3c4934: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c4934u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c4938:
    // 0x3c4938: 0xc0c06aa  jal         func_301AA8
label_3c493c:
    if (ctx->pc == 0x3C493Cu) {
        ctx->pc = 0x3C493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4938u;
        // 0x3c493c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4940u;
        goto label_3c4940;
    }
    ctx->pc = 0x3C4938u;
    SET_GPR_U32(ctx, 31, 0x3C4940u);
    ctx->pc = 0x3C493Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4938u;
    // 0x3c493c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x3C4938u, 0x3C4940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4940u;
label_3c4940:
    // 0x3c4940: 0xc0bf6e0  jal         func_2FDB80
label_3c4944:
    if (ctx->pc == 0x3C4944u) {
        ctx->pc = 0x3C4944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4940u;
        // 0x3c4944: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4948u;
        goto label_3c4948;
    }
    ctx->pc = 0x3C4940u;
    SET_GPR_U32(ctx, 31, 0x3C4948u);
    ctx->pc = 0x3C4944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4940u;
    // 0x3c4944: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x3C4940u, 0x3C4948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4948u;
label_3c4948:
    // 0x3c4948: 0x8f84bd94  lw          $a0, -0x426C($gp)
    ctx->pc = 0x3c4948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
label_3c494c:
    // 0x3c494c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3c494cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c4950:
    // 0x3c4950: 0xc0bf6e8  jal         func_2FDBA0
label_3c4954:
    if (ctx->pc == 0x3C4954u) {
        ctx->pc = 0x3C4954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4950u;
        // 0x3c4954: 0xaec2e0c0  sw          $v0, -0x1F40($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294959296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4958u;
        goto label_3c4958;
    }
    ctx->pc = 0x3C4950u;
    SET_GPR_U32(ctx, 31, 0x3C4958u);
    ctx->pc = 0x3C4954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4950u;
    // 0x3c4954: 0xaec2e0c0  sw          $v0, -0x1F40($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294959296), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3C4950u, 0x3C4958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4958u;
label_3c4958:
    // 0x3c4958: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c4958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c495c:
    // 0x3c495c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3c495cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4960:
    // 0x3c4960: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3c4960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3c4964:
    // 0x3c4964: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3c4964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3c4968:
    // 0x3c4968: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c4968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c496c:
    // 0x3c496c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x3c496cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c4970:
    // 0x3c4970: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c4970u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c4974:
    // 0x3c4974: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c4974u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c4978:
    // 0x3c4978: 0xc0c06aa  jal         func_301AA8
label_3c497c:
    if (ctx->pc == 0x3C497Cu) {
        ctx->pc = 0x3C497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4978u;
        // 0x3c497c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4980u;
        goto label_3c4980;
    }
    ctx->pc = 0x3C4978u;
    SET_GPR_U32(ctx, 31, 0x3C4980u);
    ctx->pc = 0x3C497Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4978u;
    // 0x3c497c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x3C4978u, 0x3C4980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4980u;
label_3c4980:
    // 0x3c4980: 0xc0bf6e0  jal         func_2FDB80
label_3c4984:
    if (ctx->pc == 0x3C4984u) {
        ctx->pc = 0x3C4984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4980u;
        // 0x3c4984: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4988u;
        goto label_3c4988;
    }
    ctx->pc = 0x3C4980u;
    SET_GPR_U32(ctx, 31, 0x3C4988u);
    ctx->pc = 0x3C4984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4980u;
    // 0x3c4984: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x3C4980u, 0x3C4988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4988u;
label_3c4988:
    // 0x3c4988: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3c4988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c498c:
    // 0x3c498c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3c498cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c4990:
    // 0x3c4990: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3c4990u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c4994:
    // 0x3c4994: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3c4994u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c4998:
    // 0x3c4998: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3c4998u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c499c:
    // 0x3c499c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3c499cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c49a0:
    // 0x3c49a0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x3c49a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c49a4:
    // 0x3c49a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c49a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3c49a8:
    // 0x3c49a8: 0x3e00008  jr          $ra
label_3c49ac:
    if (ctx->pc == 0x3C49ACu) {
        ctx->pc = 0x3C49ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C49A8u;
        // 0x3c49ac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C49B0u;
        goto label_fallthrough_0x3c49a8;
    }
    ctx->pc = 0x3C49A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C49ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C49A8u;
        // 0x3c49ac: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C49A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c49a8:
    ctx->pc = 0x3C49B0u;
}
