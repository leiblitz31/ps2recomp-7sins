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

// Function: sub_004A6610
// Address: 0x4a6610 - 0x4a6880
void sub_004A6610_0x4a6610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6610_0x4a6610");
#endif

    switch (ctx->pc) {
        case 0x4a6610u: goto label_4a6610;
        case 0x4a6614u: goto label_4a6614;
        case 0x4a6618u: goto label_4a6618;
        case 0x4a661cu: goto label_4a661c;
        case 0x4a6620u: goto label_4a6620;
        case 0x4a6624u: goto label_4a6624;
        case 0x4a6628u: goto label_4a6628;
        case 0x4a662cu: goto label_4a662c;
        case 0x4a6630u: goto label_4a6630;
        case 0x4a6634u: goto label_4a6634;
        case 0x4a6638u: goto label_4a6638;
        case 0x4a663cu: goto label_4a663c;
        case 0x4a6640u: goto label_4a6640;
        case 0x4a6644u: goto label_4a6644;
        case 0x4a6648u: goto label_4a6648;
        case 0x4a664cu: goto label_4a664c;
        case 0x4a6650u: goto label_4a6650;
        case 0x4a6654u: goto label_4a6654;
        case 0x4a6658u: goto label_4a6658;
        case 0x4a665cu: goto label_4a665c;
        case 0x4a6660u: goto label_4a6660;
        case 0x4a6664u: goto label_4a6664;
        case 0x4a6668u: goto label_4a6668;
        case 0x4a666cu: goto label_4a666c;
        case 0x4a6670u: goto label_4a6670;
        case 0x4a6674u: goto label_4a6674;
        case 0x4a6678u: goto label_4a6678;
        case 0x4a667cu: goto label_4a667c;
        case 0x4a6680u: goto label_4a6680;
        case 0x4a6684u: goto label_4a6684;
        case 0x4a6688u: goto label_4a6688;
        case 0x4a668cu: goto label_4a668c;
        case 0x4a6690u: goto label_4a6690;
        case 0x4a6694u: goto label_4a6694;
        case 0x4a6698u: goto label_4a6698;
        case 0x4a669cu: goto label_4a669c;
        case 0x4a66a0u: goto label_4a66a0;
        case 0x4a66a4u: goto label_4a66a4;
        case 0x4a66a8u: goto label_4a66a8;
        case 0x4a66acu: goto label_4a66ac;
        case 0x4a66b0u: goto label_4a66b0;
        case 0x4a66b4u: goto label_4a66b4;
        case 0x4a66b8u: goto label_4a66b8;
        case 0x4a66bcu: goto label_4a66bc;
        case 0x4a66c0u: goto label_4a66c0;
        case 0x4a66c4u: goto label_4a66c4;
        case 0x4a66c8u: goto label_4a66c8;
        case 0x4a66ccu: goto label_4a66cc;
        case 0x4a66d0u: goto label_4a66d0;
        case 0x4a66d4u: goto label_4a66d4;
        case 0x4a66d8u: goto label_4a66d8;
        case 0x4a66dcu: goto label_4a66dc;
        case 0x4a66e0u: goto label_4a66e0;
        case 0x4a66e4u: goto label_4a66e4;
        case 0x4a66e8u: goto label_4a66e8;
        case 0x4a66ecu: goto label_4a66ec;
        case 0x4a66f0u: goto label_4a66f0;
        case 0x4a66f4u: goto label_4a66f4;
        case 0x4a66f8u: goto label_4a66f8;
        case 0x4a66fcu: goto label_4a66fc;
        case 0x4a6700u: goto label_4a6700;
        case 0x4a6704u: goto label_4a6704;
        case 0x4a6708u: goto label_4a6708;
        case 0x4a670cu: goto label_4a670c;
        case 0x4a6710u: goto label_4a6710;
        case 0x4a6714u: goto label_4a6714;
        case 0x4a6718u: goto label_4a6718;
        case 0x4a671cu: goto label_4a671c;
        case 0x4a6720u: goto label_4a6720;
        case 0x4a6724u: goto label_4a6724;
        case 0x4a6728u: goto label_4a6728;
        case 0x4a672cu: goto label_4a672c;
        case 0x4a6730u: goto label_4a6730;
        case 0x4a6734u: goto label_4a6734;
        case 0x4a6738u: goto label_4a6738;
        case 0x4a673cu: goto label_4a673c;
        case 0x4a6740u: goto label_4a6740;
        case 0x4a6744u: goto label_4a6744;
        case 0x4a6748u: goto label_4a6748;
        case 0x4a674cu: goto label_4a674c;
        case 0x4a6750u: goto label_4a6750;
        case 0x4a6754u: goto label_4a6754;
        case 0x4a6758u: goto label_4a6758;
        case 0x4a675cu: goto label_4a675c;
        case 0x4a6760u: goto label_4a6760;
        case 0x4a6764u: goto label_4a6764;
        case 0x4a6768u: goto label_4a6768;
        case 0x4a676cu: goto label_4a676c;
        case 0x4a6770u: goto label_4a6770;
        case 0x4a6774u: goto label_4a6774;
        case 0x4a6778u: goto label_4a6778;
        case 0x4a677cu: goto label_4a677c;
        case 0x4a6780u: goto label_4a6780;
        case 0x4a6784u: goto label_4a6784;
        case 0x4a6788u: goto label_4a6788;
        case 0x4a678cu: goto label_4a678c;
        case 0x4a6790u: goto label_4a6790;
        case 0x4a6794u: goto label_4a6794;
        case 0x4a6798u: goto label_4a6798;
        case 0x4a679cu: goto label_4a679c;
        case 0x4a67a0u: goto label_4a67a0;
        case 0x4a67a4u: goto label_4a67a4;
        case 0x4a67a8u: goto label_4a67a8;
        case 0x4a67acu: goto label_4a67ac;
        case 0x4a67b0u: goto label_4a67b0;
        case 0x4a67b4u: goto label_4a67b4;
        case 0x4a67b8u: goto label_4a67b8;
        case 0x4a67bcu: goto label_4a67bc;
        case 0x4a67c0u: goto label_4a67c0;
        case 0x4a67c4u: goto label_4a67c4;
        case 0x4a67c8u: goto label_4a67c8;
        case 0x4a67ccu: goto label_4a67cc;
        case 0x4a67d0u: goto label_4a67d0;
        case 0x4a67d4u: goto label_4a67d4;
        case 0x4a67d8u: goto label_4a67d8;
        case 0x4a67dcu: goto label_4a67dc;
        case 0x4a67e0u: goto label_4a67e0;
        case 0x4a67e4u: goto label_4a67e4;
        case 0x4a67e8u: goto label_4a67e8;
        case 0x4a67ecu: goto label_4a67ec;
        case 0x4a67f0u: goto label_4a67f0;
        case 0x4a67f4u: goto label_4a67f4;
        case 0x4a67f8u: goto label_4a67f8;
        case 0x4a67fcu: goto label_4a67fc;
        case 0x4a6800u: goto label_4a6800;
        case 0x4a6804u: goto label_4a6804;
        case 0x4a6808u: goto label_4a6808;
        case 0x4a680cu: goto label_4a680c;
        case 0x4a6810u: goto label_4a6810;
        case 0x4a6814u: goto label_4a6814;
        case 0x4a6818u: goto label_4a6818;
        case 0x4a681cu: goto label_4a681c;
        case 0x4a6820u: goto label_4a6820;
        case 0x4a6824u: goto label_4a6824;
        case 0x4a6828u: goto label_4a6828;
        case 0x4a682cu: goto label_4a682c;
        case 0x4a6830u: goto label_4a6830;
        case 0x4a6834u: goto label_4a6834;
        case 0x4a6838u: goto label_4a6838;
        case 0x4a683cu: goto label_4a683c;
        case 0x4a6840u: goto label_4a6840;
        case 0x4a6844u: goto label_4a6844;
        case 0x4a6848u: goto label_4a6848;
        case 0x4a684cu: goto label_4a684c;
        case 0x4a6850u: goto label_4a6850;
        case 0x4a6854u: goto label_4a6854;
        case 0x4a6858u: goto label_4a6858;
        case 0x4a685cu: goto label_4a685c;
        case 0x4a6860u: goto label_4a6860;
        case 0x4a6864u: goto label_4a6864;
        case 0x4a6868u: goto label_4a6868;
        case 0x4a686cu: goto label_4a686c;
        case 0x4a6870u: goto label_4a6870;
        case 0x4a6874u: goto label_4a6874;
        case 0x4a6878u: goto label_4a6878;
        case 0x4a687cu: goto label_4a687c;
        default: break;
    }

    ctx->pc = 0x4a6610u;

label_4a6610:
    // 0x4a6610: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4a6610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4a6614:
    // 0x4a6614: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4a6614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4a6618:
    // 0x4a6618: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4a6618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4a661c:
    // 0x4a661c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4a661cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a6620:
    // 0x4a6620: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4a6620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4a6624:
    // 0x4a6624: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4a6624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4a6628:
    // 0x4a6628: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4a6628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4a662c:
    // 0x4a662c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4a662cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4a6630:
    // 0x4a6630: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4a6630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4a6634:
    // 0x4a6634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a6634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a6638:
    // 0x4a6638: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4a6638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4a663c:
    // 0x4a663c: 0x8c940024  lw          $s4, 0x24($a0)
    ctx->pc = 0x4a663cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_4a6640:
    // 0x4a6640: 0x12800028  beqz        $s4, . + 4 + (0x28 << 2)
label_4a6644:
    if (ctx->pc == 0x4A6644u) {
        ctx->pc = 0x4A6644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6640u;
        // 0x4a6644: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6648u;
        goto label_4a6648;
    }
    ctx->pc = 0x4A6640u;
    {
        const bool branch_taken_0x4a6640 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6640u;
        // 0x4a6644: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6640) {
            ctx->pc = 0x4A66E4u;
            goto label_4a66e4;
        }
    }
    ctx->pc = 0x4A6648u;
label_4a6648:
    // 0x4a6648: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4a6648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4a664c:
    // 0x4a664c: 0x12800026  beqz        $s4, . + 4 + (0x26 << 2)
label_4a6650:
    if (ctx->pc == 0x4A6650u) {
        ctx->pc = 0x4A6650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A664Cu;
        // 0x4a6650: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6654u;
        goto label_4a6654;
    }
    ctx->pc = 0x4A664Cu;
    {
        const bool branch_taken_0x4a664c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A664Cu;
        // 0x4a6650: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a664c) {
            ctx->pc = 0x4A66E8u;
            goto label_4a66e8;
        }
    }
    ctx->pc = 0x4A6654u;
label_4a6654:
    // 0x4a6654: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4a6654u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a6658:
    // 0x4a6658: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x4a6658u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a665c:
    // 0x4a665c: 0x0  nop
    ctx->pc = 0x4a665cu;
    // NOP
label_4a6660:
    // 0x4a6660: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x4a6660u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a6664:
    // 0x4a6664: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x4a6664u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_4a6668:
    // 0x4a6668: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x4a6668u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_4a666c:
    // 0x4a666c: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_4a6670:
    if (ctx->pc == 0x4A6670u) {
        ctx->pc = 0x4A6670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A666Cu;
        // 0x4a6670: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6674u;
        goto label_4a6674;
    }
    ctx->pc = 0x4A666Cu;
    {
        const bool branch_taken_0x4a666c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A6670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A666Cu;
        // 0x4a6670: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a666c) {
            ctx->pc = 0x4A66C8u;
            goto label_4a66c8;
        }
    }
    ctx->pc = 0x4A6674u;
label_4a6674:
    // 0x4a6674: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4a6674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4a6678:
    // 0x4a6678: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4a6678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a667c:
    // 0x4a667c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4a667cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a6680:
    // 0x4a6680: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_4a6684:
    if (ctx->pc == 0x4A6684u) {
        ctx->pc = 0x4A6688u;
        goto label_4a6688;
    }
    ctx->pc = 0x4A6680u;
    {
        const bool branch_taken_0x4a6680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a6680) {
            ctx->pc = 0x4A66C8u;
            goto label_4a66c8;
        }
    }
    ctx->pc = 0x4A6688u;
label_4a6688:
    // 0x4a6688: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4a6688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4a668c:
    // 0x4a668c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4a668cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4a6690:
    // 0x4a6690: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_4a6694:
    if (ctx->pc == 0x4A6694u) {
        ctx->pc = 0x4A6698u;
        goto label_4a6698;
    }
    ctx->pc = 0x4A6690u;
    {
        const bool branch_taken_0x4a6690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a6690) {
            ctx->pc = 0x4A66C8u;
            goto label_4a66c8;
        }
    }
    ctx->pc = 0x4A6698u;
label_4a6698:
    // 0x4a6698: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x4a6698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4a669c:
    // 0x4a669c: 0xc12a3ec  jal         func_4A8FB0
label_4a66a0:
    if (ctx->pc == 0x4A66A0u) {
        ctx->pc = 0x4A66A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A669Cu;
        // 0x4a66a0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A66A4u;
        goto label_4a66a4;
    }
    ctx->pc = 0x4A669Cu;
    SET_GPR_U32(ctx, 31, 0x4A66A4u);
    ctx->pc = 0x4A66A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A669Cu;
    // 0x4a66a0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A669Cu, 0x4A66A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A66A4u;
label_4a66a4:
    // 0x4a66a4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_4a66a8:
    if (ctx->pc == 0x4A66A8u) {
        ctx->pc = 0x4A66ACu;
        goto label_4a66ac;
    }
    ctx->pc = 0x4A66A4u;
    {
        const bool branch_taken_0x4a66a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a66a4) {
            ctx->pc = 0x4A66C8u;
            goto label_4a66c8;
        }
    }
    ctx->pc = 0x4A66ACu;
label_4a66ac:
    // 0x4a66ac: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x4a66acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_4a66b0:
    // 0x4a66b0: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x4a66b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4a66b4:
    // 0x4a66b4: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x4a66b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
label_4a66b8:
    // 0x4a66b8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4a66b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4a66bc:
    // 0x4a66bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a66bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4a66c0:
    // 0x4a66c0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x4a66c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_4a66c4:
    // 0x4a66c4: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x4a66c4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_4a66c8:
    // 0x4a66c8: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
label_4a66cc:
    if (ctx->pc == 0x4A66CCu) {
        ctx->pc = 0x4A66CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A66C8u;
        // 0x4a66cc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A66D0u;
        goto label_4a66d0;
    }
    ctx->pc = 0x4A66C8u;
    {
        const bool branch_taken_0x4a66c8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A66CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A66C8u;
        // 0x4a66cc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a66c8) {
            ctx->pc = 0x4A66E4u;
            goto label_4a66e4;
        }
    }
    ctx->pc = 0x4A66D0u;
label_4a66d0:
    // 0x4a66d0: 0x2b4102b  sltu        $v0, $s5, $s4
    ctx->pc = 0x4a66d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_4a66d4:
    // 0x4a66d4: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_4a66d8:
    if (ctx->pc == 0x4A66D8u) {
        ctx->pc = 0x4A66D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A66D4u;
        // 0x4a66d8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A66DCu;
        goto label_4a66dc;
    }
    ctx->pc = 0x4A66D4u;
    {
        const bool branch_taken_0x4a66d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A66D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A66D4u;
        // 0x4a66d8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a66d4) {
            ctx->pc = 0x4A6660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6660;
        }
    }
    ctx->pc = 0x4A66DCu;
label_4a66dc:
    // 0x4a66dc: 0x10000003  b           . + 4 + (0x3 << 2)
label_4a66e0:
    if (ctx->pc == 0x4A66E0u) {
        ctx->pc = 0x4A66E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A66DCu;
        // 0x4a66e0: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A66E4u;
        goto label_4a66e4;
    }
    ctx->pc = 0x4A66DCu;
    {
        const bool branch_taken_0x4a66dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A66E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A66DCu;
        // 0x4a66e0: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a66dc) {
            ctx->pc = 0x4A66ECu;
            goto label_4a66ec;
        }
    }
    ctx->pc = 0x4A66E4u;
label_4a66e4:
    // 0x4a66e4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x4a66e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a66e8:
    // 0x4a66e8: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x4a66e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4a66ec:
    // 0x4a66ec: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4a66ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4a66f0:
    // 0x4a66f0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4a66f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4a66f4:
    // 0x4a66f4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4a66f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a66f8:
    // 0x4a66f8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4a66f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a66fc:
    // 0x4a66fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4a66fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a6700:
    // 0x4a6700: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4a6700u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a6704:
    // 0x4a6704: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4a6704u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a6708:
    // 0x4a6708: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4a6708u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a670c:
    // 0x4a670c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a670cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a6710:
    // 0x4a6710: 0x3e00008  jr          $ra
label_4a6714:
    if (ctx->pc == 0x4A6714u) {
        ctx->pc = 0x4A6714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6710u;
        // 0x4a6714: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6718u;
        goto label_4a6718;
    }
    ctx->pc = 0x4A6710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6710u;
        // 0x4a6714: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A6718u;
label_4a6718:
    // 0x4a6718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a6718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4a671c:
    // 0x4a671c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a671cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a6720:
    // 0x4a6720: 0x3c080066  lui         $t0, 0x66
    ctx->pc = 0x4a6720u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)102 << 16));
label_4a6724:
    // 0x4a6724: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x4a6724u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
label_4a6728:
    // 0x4a6728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a6728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a672c:
    // 0x4a672c: 0x25088858  addiu       $t0, $t0, -0x77A8
    ctx->pc = 0x4a672cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294936664));
label_4a6730:
    // 0x4a6730: 0xaf82b854  sw          $v0, -0x47AC($gp)
    ctx->pc = 0x4a6730u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948948), GPR_U32(ctx, 2));
label_4a6734:
    // 0x4a6734: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x4a6734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_4a6738:
    // 0x4a6738: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4a6738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4a673c:
    // 0x4a673c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x4a673cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4a6740:
    // 0x4a6740: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a6740u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6744:
    // 0x4a6744: 0xc12aa26  jal         func_4AA898
label_4a6748:
    if (ctx->pc == 0x4A6748u) {
        ctx->pc = 0x4A6748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6744u;
        // 0x4a6748: 0x35290805  ori         $t1, $t1, 0x805 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2053);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A674Cu;
        goto label_4a674c;
    }
    ctx->pc = 0x4A6744u;
    SET_GPR_U32(ctx, 31, 0x4A674Cu);
    ctx->pc = 0x4A6748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6744u;
    // 0x4a6748: 0x35290805  ori         $t1, $t1, 0x805 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2053);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA898u, 0x4A6744u, 0x4A674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A674Cu;
label_4a674c:
    // 0x4a674c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4a6750:
    if (ctx->pc == 0x4A6750u) {
        ctx->pc = 0x4A6750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A674Cu;
        // 0x4a6750: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6754u;
        goto label_4a6754;
    }
    ctx->pc = 0x4A674Cu;
    {
        const bool branch_taken_0x4a674c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A674Cu;
        // 0x4a6750: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a674c) {
            ctx->pc = 0x4A675Cu;
            goto label_4a675c;
        }
    }
    ctx->pc = 0x4A6754u;
label_4a6754:
    // 0x4a6754: 0xaf80b854  sw          $zero, -0x47AC($gp)
    ctx->pc = 0x4a6754u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948948), GPR_U32(ctx, 0));
label_4a6758:
    // 0x4a6758: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a6758u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a675c:
    // 0x4a675c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a675cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a6760:
    // 0x4a6760: 0x3e00008  jr          $ra
label_4a6764:
    if (ctx->pc == 0x4A6764u) {
        ctx->pc = 0x4A6764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6760u;
        // 0x4a6764: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6768u;
        goto label_4a6768;
    }
    ctx->pc = 0x4A6760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6760u;
        // 0x4a6764: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A6768u;
label_4a6768:
    // 0x4a6768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a6768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4a676c:
    // 0x4a676c: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x4a676cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
label_4a6770:
    // 0x4a6770: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a6770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a6774:
    // 0x4a6774: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4a6774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6778:
    // 0x4a6778: 0x24c669a8  addiu       $a2, $a2, 0x69A8
    ctx->pc = 0x4a6778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27048));
label_4a677c:
    // 0x4a677c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a677cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6780:
    // 0x4a6780: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a6780u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a6784:
    // 0x4a6784: 0xc1269c6  jal         func_49A718
label_4a6788:
    if (ctx->pc == 0x4A6788u) {
        ctx->pc = 0x4A6788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6784u;
        // 0x4a6788: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A678Cu;
        goto label_4a678c;
    }
    ctx->pc = 0x4A6784u;
    SET_GPR_U32(ctx, 31, 0x4A678Cu);
    ctx->pc = 0x4A6788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6784u;
    // 0x4a6788: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A718u, 0x4A6784u, 0x4A678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A678Cu;
label_4a678c:
    // 0x4a678c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4a678cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4a6790:
    // 0x4a6790: 0xc12aa86  jal         func_4AAA18
label_4a6794:
    if (ctx->pc == 0x4A6794u) {
        ctx->pc = 0x4A6794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6790u;
        // 0x4a6794: 0x24848858  addiu       $a0, $a0, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6798u;
        goto label_4a6798;
    }
    ctx->pc = 0x4A6790u;
    SET_GPR_U32(ctx, 31, 0x4A6798u);
    ctx->pc = 0x4A6794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6790u;
    // 0x4a6794: 0x24848858  addiu       $a0, $a0, -0x77A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x4A6790u, 0x4A6798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6798u;
label_4a6798:
    // 0x4a6798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a6798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a679c:
    // 0x4a679c: 0xaf80b854  sw          $zero, -0x47AC($gp)
    ctx->pc = 0x4a679cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948948), GPR_U32(ctx, 0));
label_4a67a0:
    // 0x4a67a0: 0x3e00008  jr          $ra
label_4a67a4:
    if (ctx->pc == 0x4A67A4u) {
        ctx->pc = 0x4A67A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A67A0u;
        // 0x4a67a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A67A8u;
        goto label_4a67a8;
    }
    ctx->pc = 0x4A67A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A67A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A67A0u;
        // 0x4a67a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A67A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A67A8u;
label_4a67a8:
    // 0x4a67a8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4a67a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4a67ac:
    // 0x4a67ac: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4a67acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4a67b0:
    // 0x4a67b0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4a67b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4a67b4:
    // 0x4a67b4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4a67b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a67b8:
    // 0x4a67b8: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4a67b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4a67bc:
    // 0x4a67bc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x4a67bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a67c0:
    // 0x4a67c0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4a67c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4a67c4:
    // 0x4a67c4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x4a67c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a67c8:
    // 0x4a67c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4a67c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4a67cc:
    // 0x4a67cc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4a67ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4a67d0:
    // 0x4a67d0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4a67d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4a67d4:
    // 0x4a67d4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4a67d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4a67d8:
    // 0x4a67d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a67d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a67dc:
    // 0x4a67dc: 0xc12821c  jal         func_4A0870
label_4a67e0:
    if (ctx->pc == 0x4A67E0u) {
        ctx->pc = 0x4A67E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A67DCu;
        // 0x4a67e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A67E4u;
        goto label_4a67e4;
    }
    ctx->pc = 0x4A67DCu;
    SET_GPR_U32(ctx, 31, 0x4A67E4u);
    ctx->pc = 0x4A67E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A67DCu;
    // 0x4a67e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0870u, 0x4A67DCu, 0x4A67E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A67E4u;
label_4a67e4:
    // 0x4a67e4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4a67e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a67e8:
    // 0x4a67e8: 0x12800019  beqz        $s4, . + 4 + (0x19 << 2)
label_4a67ec:
    if (ctx->pc == 0x4A67ECu) {
        ctx->pc = 0x4A67ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A67E8u;
        // 0x4a67ec: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A67F0u;
        goto label_4a67f0;
    }
    ctx->pc = 0x4A67E8u;
    {
        const bool branch_taken_0x4a67e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A67ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A67E8u;
        // 0x4a67ec: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a67e8) {
            ctx->pc = 0x4A6850u;
            goto label_4a6850;
        }
    }
    ctx->pc = 0x4A67F0u;
label_4a67f0:
    // 0x4a67f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a67f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a67f4:
    // 0x4a67f4: 0x0  nop
    ctx->pc = 0x4a67f4u;
    // NOP
label_4a67f8:
    // 0x4a67f8: 0xc128210  jal         func_4A0840
label_4a67fc:
    if (ctx->pc == 0x4A67FCu) {
        ctx->pc = 0x4A67FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A67F8u;
        // 0x4a67fc: 0x26130001  addiu       $s3, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6800u;
        goto label_4a6800;
    }
    ctx->pc = 0x4A67F8u;
    SET_GPR_U32(ctx, 31, 0x4A6800u);
    ctx->pc = 0x4A67FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A67F8u;
    // 0x4a67fc: 0x26130001  addiu       $s3, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0840u, 0x4A67F8u, 0x4A6800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6800u;
label_4a6800:
    // 0x4a6800: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x4a6800u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4a6804:
    // 0x4a6804: 0x2452000c  addiu       $s2, $v0, 0xC
    ctx->pc = 0x4a6804u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_4a6808:
    // 0x4a6808: 0x1232000d  beq         $s1, $s2, . + 4 + (0xD << 2)
label_4a680c:
    if (ctx->pc == 0x4A680Cu) {
        ctx->pc = 0x4A680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6808u;
        // 0x4a680c: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6810u;
        goto label_4a6810;
    }
    ctx->pc = 0x4A6808u;
    {
        const bool branch_taken_0x4a6808 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x4A680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6808u;
        // 0x4a680c: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6808) {
            ctx->pc = 0x4A6840u;
            goto label_4a6840;
        }
    }
    ctx->pc = 0x4A6810u;
label_4a6810:
    // 0x4a6810: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x4a6810u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4a6814:
    // 0x4a6814: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4a6814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a6818:
    // 0x4a6818: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x4a6818u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4a681c:
    // 0x4a681c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4a681cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4a6820:
    // 0x4a6820: 0xc12a3ec  jal         func_4A8FB0
label_4a6824:
    if (ctx->pc == 0x4A6824u) {
        ctx->pc = 0x4A6824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6820u;
        // 0x4a6824: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6828u;
        goto label_4a6828;
    }
    ctx->pc = 0x4A6820u;
    SET_GPR_U32(ctx, 31, 0x4A6828u);
    ctx->pc = 0x4A6824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A6820u;
    // 0x4a6824: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A6820u, 0x4A6828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6828u;
label_4a6828:
    // 0x4a6828: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_4a682c:
    if (ctx->pc == 0x4A682Cu) {
        ctx->pc = 0x4A682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6828u;
        // 0x4a682c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6830u;
        goto label_4a6830;
    }
    ctx->pc = 0x4A6828u;
    {
        const bool branch_taken_0x4a6828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6828u;
        // 0x4a682c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6828) {
            ctx->pc = 0x4A6808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6808;
        }
    }
    ctx->pc = 0x4A6830u;
label_4a6830:
    // 0x4a6830: 0x2e0f809  jalr        $s7
label_4a6834:
    if (ctx->pc == 0x4A6834u) {
        ctx->pc = 0x4A6834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6830u;
        // 0x4a6834: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6838u;
        goto label_4a6838;
    }
    ctx->pc = 0x4A6830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x4A6838u);
        ctx->pc = 0x4A6834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6830u;
        // 0x4a6834: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6830u, 0x4A6838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A6838u;
label_4a6838:
    // 0x4a6838: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_4a683c:
    if (ctx->pc == 0x4A683Cu) {
        ctx->pc = 0x4A683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6838u;
        // 0x4a683c: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A6840u;
        goto label_4a6840;
    }
    ctx->pc = 0x4A6838u;
    {
        const bool branch_taken_0x4a6838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6838u;
        // 0x4a683c: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6838) {
            ctx->pc = 0x4A6808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6808;
        }
    }
    ctx->pc = 0x4A6840u;
label_4a6840:
    // 0x4a6840: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x4a6840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_4a6844:
    // 0x4a6844: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_4a6848:
    if (ctx->pc == 0x4A6848u) {
        ctx->pc = 0x4A6848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6844u;
        // 0x4a6848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A684Cu;
        goto label_4a684c;
    }
    ctx->pc = 0x4A6844u;
    {
        const bool branch_taken_0x4a6844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A6848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6844u;
        // 0x4a6848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6844) {
            ctx->pc = 0x4A67F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a67f8;
        }
    }
    ctx->pc = 0x4A684Cu;
label_4a684c:
    // 0x4a684c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x4a684cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a6850:
    // 0x4a6850: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4a6850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4a6854:
    // 0x4a6854: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4a6854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4a6858:
    // 0x4a6858: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4a6858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a685c:
    // 0x4a685c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4a685cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a6860:
    // 0x4a6860: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4a6860u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a6864:
    // 0x4a6864: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4a6864u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a6868:
    // 0x4a6868: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4a6868u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a686c:
    // 0x4a686c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4a686cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a6870:
    // 0x4a6870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a6870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a6874:
    // 0x4a6874: 0x3e00008  jr          $ra
label_4a6878:
    if (ctx->pc == 0x4A6878u) {
        ctx->pc = 0x4A6878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6874u;
        // 0x4a6878: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A687Cu;
        goto label_4a687c;
    }
    ctx->pc = 0x4A6874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6874u;
        // 0x4a6878: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A687Cu;
label_4a687c:
    // 0x4a687c: 0x0  nop
    ctx->pc = 0x4a687cu;
    // NOP
    ctx->pc = 0x4a6880u;
}
