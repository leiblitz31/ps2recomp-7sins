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

// Function: sub_00467710
// Address: 0x467710 - 0x467940
void sub_00467710_0x467710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00467710_0x467710");
#endif

    switch (ctx->pc) {
        case 0x467710u: goto label_467710;
        case 0x467714u: goto label_467714;
        case 0x467718u: goto label_467718;
        case 0x46771cu: goto label_46771c;
        case 0x467720u: goto label_467720;
        case 0x467724u: goto label_467724;
        case 0x467728u: goto label_467728;
        case 0x46772cu: goto label_46772c;
        case 0x467730u: goto label_467730;
        case 0x467734u: goto label_467734;
        case 0x467738u: goto label_467738;
        case 0x46773cu: goto label_46773c;
        case 0x467740u: goto label_467740;
        case 0x467744u: goto label_467744;
        case 0x467748u: goto label_467748;
        case 0x46774cu: goto label_46774c;
        case 0x467750u: goto label_467750;
        case 0x467754u: goto label_467754;
        case 0x467758u: goto label_467758;
        case 0x46775cu: goto label_46775c;
        case 0x467760u: goto label_467760;
        case 0x467764u: goto label_467764;
        case 0x467768u: goto label_467768;
        case 0x46776cu: goto label_46776c;
        case 0x467770u: goto label_467770;
        case 0x467774u: goto label_467774;
        case 0x467778u: goto label_467778;
        case 0x46777cu: goto label_46777c;
        case 0x467780u: goto label_467780;
        case 0x467784u: goto label_467784;
        case 0x467788u: goto label_467788;
        case 0x46778cu: goto label_46778c;
        case 0x467790u: goto label_467790;
        case 0x467794u: goto label_467794;
        case 0x467798u: goto label_467798;
        case 0x46779cu: goto label_46779c;
        case 0x4677a0u: goto label_4677a0;
        case 0x4677a4u: goto label_4677a4;
        case 0x4677a8u: goto label_4677a8;
        case 0x4677acu: goto label_4677ac;
        case 0x4677b0u: goto label_4677b0;
        case 0x4677b4u: goto label_4677b4;
        case 0x4677b8u: goto label_4677b8;
        case 0x4677bcu: goto label_4677bc;
        case 0x4677c0u: goto label_4677c0;
        case 0x4677c4u: goto label_4677c4;
        case 0x4677c8u: goto label_4677c8;
        case 0x4677ccu: goto label_4677cc;
        case 0x4677d0u: goto label_4677d0;
        case 0x4677d4u: goto label_4677d4;
        case 0x4677d8u: goto label_4677d8;
        case 0x4677dcu: goto label_4677dc;
        case 0x4677e0u: goto label_4677e0;
        case 0x4677e4u: goto label_4677e4;
        case 0x4677e8u: goto label_4677e8;
        case 0x4677ecu: goto label_4677ec;
        case 0x4677f0u: goto label_4677f0;
        case 0x4677f4u: goto label_4677f4;
        case 0x4677f8u: goto label_4677f8;
        case 0x4677fcu: goto label_4677fc;
        case 0x467800u: goto label_467800;
        case 0x467804u: goto label_467804;
        case 0x467808u: goto label_467808;
        case 0x46780cu: goto label_46780c;
        case 0x467810u: goto label_467810;
        case 0x467814u: goto label_467814;
        case 0x467818u: goto label_467818;
        case 0x46781cu: goto label_46781c;
        case 0x467820u: goto label_467820;
        case 0x467824u: goto label_467824;
        case 0x467828u: goto label_467828;
        case 0x46782cu: goto label_46782c;
        case 0x467830u: goto label_467830;
        case 0x467834u: goto label_467834;
        case 0x467838u: goto label_467838;
        case 0x46783cu: goto label_46783c;
        case 0x467840u: goto label_467840;
        case 0x467844u: goto label_467844;
        case 0x467848u: goto label_467848;
        case 0x46784cu: goto label_46784c;
        case 0x467850u: goto label_467850;
        case 0x467854u: goto label_467854;
        case 0x467858u: goto label_467858;
        case 0x46785cu: goto label_46785c;
        case 0x467860u: goto label_467860;
        case 0x467864u: goto label_467864;
        case 0x467868u: goto label_467868;
        case 0x46786cu: goto label_46786c;
        case 0x467870u: goto label_467870;
        case 0x467874u: goto label_467874;
        case 0x467878u: goto label_467878;
        case 0x46787cu: goto label_46787c;
        case 0x467880u: goto label_467880;
        case 0x467884u: goto label_467884;
        case 0x467888u: goto label_467888;
        case 0x46788cu: goto label_46788c;
        case 0x467890u: goto label_467890;
        case 0x467894u: goto label_467894;
        case 0x467898u: goto label_467898;
        case 0x46789cu: goto label_46789c;
        case 0x4678a0u: goto label_4678a0;
        case 0x4678a4u: goto label_4678a4;
        case 0x4678a8u: goto label_4678a8;
        case 0x4678acu: goto label_4678ac;
        case 0x4678b0u: goto label_4678b0;
        case 0x4678b4u: goto label_4678b4;
        case 0x4678b8u: goto label_4678b8;
        case 0x4678bcu: goto label_4678bc;
        case 0x4678c0u: goto label_4678c0;
        case 0x4678c4u: goto label_4678c4;
        case 0x4678c8u: goto label_4678c8;
        case 0x4678ccu: goto label_4678cc;
        case 0x4678d0u: goto label_4678d0;
        case 0x4678d4u: goto label_4678d4;
        case 0x4678d8u: goto label_4678d8;
        case 0x4678dcu: goto label_4678dc;
        case 0x4678e0u: goto label_4678e0;
        case 0x4678e4u: goto label_4678e4;
        case 0x4678e8u: goto label_4678e8;
        case 0x4678ecu: goto label_4678ec;
        case 0x4678f0u: goto label_4678f0;
        case 0x4678f4u: goto label_4678f4;
        case 0x4678f8u: goto label_4678f8;
        case 0x4678fcu: goto label_4678fc;
        case 0x467900u: goto label_467900;
        case 0x467904u: goto label_467904;
        case 0x467908u: goto label_467908;
        case 0x46790cu: goto label_46790c;
        case 0x467910u: goto label_467910;
        case 0x467914u: goto label_467914;
        case 0x467918u: goto label_467918;
        case 0x46791cu: goto label_46791c;
        case 0x467920u: goto label_467920;
        case 0x467924u: goto label_467924;
        case 0x467928u: goto label_467928;
        case 0x46792cu: goto label_46792c;
        case 0x467930u: goto label_467930;
        case 0x467934u: goto label_467934;
        case 0x467938u: goto label_467938;
        case 0x46793cu: goto label_46793c;
        default: break;
    }

    ctx->pc = 0x467710u;

label_467710:
    // 0x467710: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x467710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_467714:
    // 0x467714: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x467714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_467718:
    // 0x467718: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x467718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_46771c:
    // 0x46771c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46771cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_467720:
    // 0x467720: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x467720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_467724:
    // 0x467724: 0xafa40170  sw          $a0, 0x170($sp)
    ctx->pc = 0x467724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 4));
label_467728:
    // 0x467728: 0xafa50180  sw          $a1, 0x180($sp)
    ctx->pc = 0x467728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 5));
label_46772c:
    // 0x46772c: 0xafa60190  sw          $a2, 0x190($sp)
    ctx->pc = 0x46772cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 6));
label_467730:
    // 0x467730: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x467730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_467734:
    // 0x467734: 0x24050072  addiu       $a1, $zero, 0x72
    ctx->pc = 0x467734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_467738:
    // 0x467738: 0xc119f04  jal         func_467C10
label_46773c:
    if (ctx->pc == 0x46773Cu) {
        ctx->pc = 0x467740u;
        goto label_467740;
    }
    ctx->pc = 0x467738u;
    SET_GPR_U32(ctx, 31, 0x467740u);
    ctx->pc = 0x467C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467C10u, 0x467738u, 0x467740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467740u;
label_467740:
    // 0x467740: 0x401027  not         $v0, $v0
    ctx->pc = 0x467740u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_467744:
    // 0x467744: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x467744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_467748:
    // 0x467748: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x467748u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46774c:
    // 0x46774c: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x46774cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_467750:
    // 0x467750: 0x24050077  addiu       $a1, $zero, 0x77
    ctx->pc = 0x467750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_467754:
    // 0x467754: 0xc119f04  jal         func_467C10
label_467758:
    if (ctx->pc == 0x467758u) {
        ctx->pc = 0x46775Cu;
        goto label_46775c;
    }
    ctx->pc = 0x467754u;
    SET_GPR_U32(ctx, 31, 0x46775Cu);
    ctx->pc = 0x467C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467C10u, 0x467754u, 0x46775Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46775Cu;
label_46775c:
    // 0x46775c: 0x401027  not         $v0, $v0
    ctx->pc = 0x46775cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_467760:
    // 0x467760: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x467760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_467764:
    // 0x467764: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x467764u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_467768:
    // 0x467768: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x467768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46776c:
    // 0x46776c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_467770:
    if (ctx->pc == 0x467770u) {
        ctx->pc = 0x467774u;
        goto label_467774;
    }
    ctx->pc = 0x46776Cu;
    {
        const bool branch_taken_0x46776c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x46776c) {
            ctx->pc = 0x467784u;
            goto label_467784;
        }
    }
    ctx->pc = 0x467774u;
label_467774:
    // 0x467774: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_467778:
    if (ctx->pc == 0x467778u) {
        ctx->pc = 0x46777Cu;
        goto label_46777c;
    }
    ctx->pc = 0x467774u;
    {
        const bool branch_taken_0x467774 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x467774) {
            ctx->pc = 0x467784u;
            goto label_467784;
        }
    }
    ctx->pc = 0x46777Cu;
label_46777c:
    // 0x46777c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46777cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_467780:
    // 0x467780: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x467780u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_467784:
    // 0x467784: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x467784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_467788:
    // 0x467788: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x467788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_46778c:
    // 0x46778c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x46778cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_467790:
    // 0x467790: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x467790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_467794:
    // 0x467794: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_467798:
    if (ctx->pc == 0x467798u) {
        ctx->pc = 0x46779Cu;
        goto label_46779c;
    }
    ctx->pc = 0x467794u;
    {
        const bool branch_taken_0x467794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x467794) {
            ctx->pc = 0x467844u;
            goto label_467844;
        }
    }
    ctx->pc = 0x46779Cu;
label_46779c:
    // 0x46779c: 0x8f82b2c0  lw          $v0, -0x4D40($gp)
    ctx->pc = 0x46779cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947520)));
label_4677a0:
    // 0x4677a0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4677a4:
    if (ctx->pc == 0x4677A4u) {
        ctx->pc = 0x4677A8u;
        goto label_4677a8;
    }
    ctx->pc = 0x4677A0u;
    {
        const bool branch_taken_0x4677a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4677a0) {
            ctx->pc = 0x467844u;
            goto label_467844;
        }
    }
    ctx->pc = 0x4677A8u;
label_4677a8:
    // 0x4677a8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4677a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4677ac:
    // 0x4677ac: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4677acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4677b0:
    // 0x4677b0: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x4677b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_4677b4:
    // 0x4677b4: 0xc115ee8  jal         func_457BA0
label_4677b8:
    if (ctx->pc == 0x4677B8u) {
        ctx->pc = 0x4677BCu;
        goto label_4677bc;
    }
    ctx->pc = 0x4677B4u;
    SET_GPR_U32(ctx, 31, 0x4677BCu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4677B4u, 0x4677BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4677BCu;
label_4677bc:
    // 0x4677bc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4677c0:
    if (ctx->pc == 0x4677C0u) {
        ctx->pc = 0x4677C4u;
        goto label_4677c4;
    }
    ctx->pc = 0x4677BCu;
    {
        const bool branch_taken_0x4677bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4677bc) {
            ctx->pc = 0x467844u;
            goto label_467844;
        }
    }
    ctx->pc = 0x4677C4u;
label_4677c4:
    // 0x4677c4: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x4677c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_4677c8:
    // 0x4677c8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4677cc:
    if (ctx->pc == 0x4677CCu) {
        ctx->pc = 0x4677D0u;
        goto label_4677d0;
    }
    ctx->pc = 0x4677C8u;
    {
        const bool branch_taken_0x4677c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4677c8) {
            ctx->pc = 0x467844u;
            goto label_467844;
        }
    }
    ctx->pc = 0x4677D0u;
label_4677d0:
    // 0x4677d0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4677d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4677d4:
    // 0x4677d4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4677d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4677d8:
    // 0x4677d8: 0x8fa60164  lw          $a2, 0x164($sp)
    ctx->pc = 0x4677d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_4677dc:
    // 0x4677dc: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4677dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4677e0:
    // 0x4677e0: 0x24e7f6f0  addiu       $a3, $a3, -0x910
    ctx->pc = 0x4677e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964976));
label_4677e4:
    // 0x4677e4: 0x2408004a  addiu       $t0, $zero, 0x4A
    ctx->pc = 0x4677e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_4677e8:
    // 0x4677e8: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4677e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4677ec:
    // 0x4677ec: 0x2529f700  addiu       $t1, $t1, -0x900
    ctx->pc = 0x4677ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964992));
label_4677f0:
    // 0x4677f0: 0xc113940  jal         func_44E500
label_4677f4:
    if (ctx->pc == 0x4677F4u) {
        ctx->pc = 0x4677F8u;
        goto label_4677f8;
    }
    ctx->pc = 0x4677F0u;
    SET_GPR_U32(ctx, 31, 0x4677F8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4677F0u, 0x4677F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4677F8u;
label_4677f8:
    // 0x4677f8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4677f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4677fc:
    // 0x4677fc: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4677fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_467800:
    // 0x467800: 0x24a5f730  addiu       $a1, $a1, -0x8D0
    ctx->pc = 0x467800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965040));
label_467804:
    // 0x467804: 0xc115c24  jal         func_457090
label_467808:
    if (ctx->pc == 0x467808u) {
        ctx->pc = 0x46780Cu;
        goto label_46780c;
    }
    ctx->pc = 0x467804u;
    SET_GPR_U32(ctx, 31, 0x46780Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x467804u, 0x46780Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46780Cu;
label_46780c:
    // 0x46780c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x46780cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_467810:
    // 0x467810: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x467810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_467814:
    // 0x467814: 0x40f809  jalr        $v0
label_467818:
    if (ctx->pc == 0x467818u) {
        ctx->pc = 0x46781Cu;
        goto label_46781c;
    }
    ctx->pc = 0x467814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46781Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x467814u, 0x46781Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46781Cu;
label_46781c:
    // 0x46781c: 0xaf82b2c0  sw          $v0, -0x4D40($gp)
    ctx->pc = 0x46781cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947520), GPR_U32(ctx, 2));
label_467820:
    // 0x467820: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x467820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_467824:
    // 0x467824: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_467828:
    if (ctx->pc == 0x467828u) {
        ctx->pc = 0x46782Cu;
        goto label_46782c;
    }
    ctx->pc = 0x467824u;
    {
        const bool branch_taken_0x467824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x467824) {
            ctx->pc = 0x467834u;
            goto label_467834;
        }
    }
    ctx->pc = 0x46782Cu;
label_46782c:
    // 0x46782c: 0xd  break       0
    ctx->pc = 0x46782cu;
    runtime->handleBreak(rdram, ctx);
label_467830:
    // 0x467830: 0x0  nop
    ctx->pc = 0x467830u;
    // NOP
label_467834:
    // 0x467834: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x467834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_467838:
    // 0x467838: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x467838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46783c:
    // 0x46783c: 0xc11392c  jal         func_44E4B0
label_467840:
    if (ctx->pc == 0x467840u) {
        ctx->pc = 0x467844u;
        goto label_467844;
    }
    ctx->pc = 0x46783Cu;
    SET_GPR_U32(ctx, 31, 0x467844u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x46783Cu, 0x467844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467844u;
label_467844:
    // 0x467844: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_467848:
    if (ctx->pc == 0x467848u) {
        ctx->pc = 0x46784Cu;
        goto label_46784c;
    }
    ctx->pc = 0x467844u;
    {
        const bool branch_taken_0x467844 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x467844) {
            ctx->pc = 0x467860u;
            goto label_467860;
        }
    }
    ctx->pc = 0x46784Cu;
label_46784c:
    // 0x46784c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_467850:
    if (ctx->pc == 0x467850u) {
        ctx->pc = 0x467854u;
        goto label_467854;
    }
    ctx->pc = 0x46784Cu;
    {
        const bool branch_taken_0x46784c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x46784c) {
            ctx->pc = 0x467860u;
            goto label_467860;
        }
    }
    ctx->pc = 0x467854u;
label_467854:
    // 0x467854: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x467854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_467858:
    // 0x467858: 0x10000032  b           . + 4 + (0x32 << 2)
label_46785c:
    if (ctx->pc == 0x46785Cu) {
        ctx->pc = 0x467860u;
        goto label_467860;
    }
    ctx->pc = 0x467858u;
    {
        const bool branch_taken_0x467858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x467858) {
            ctx->pc = 0x467924u;
            goto label_467924;
        }
    }
    ctx->pc = 0x467860u;
label_467860:
    // 0x467860: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_467864:
    if (ctx->pc == 0x467864u) {
        ctx->pc = 0x467868u;
        goto label_467868;
    }
    ctx->pc = 0x467860u;
    {
        const bool branch_taken_0x467860 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x467860) {
            ctx->pc = 0x467894u;
            goto label_467894;
        }
    }
    ctx->pc = 0x467868u;
label_467868:
    // 0x467868: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x467868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_46786c:
    // 0x46786c: 0xc041b38  jal         func_106CE0
label_467870:
    if (ctx->pc == 0x467870u) {
        ctx->pc = 0x467874u;
        goto label_467874;
    }
    ctx->pc = 0x46786Cu;
    SET_GPR_U32(ctx, 31, 0x467874u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x46786Cu, 0x467874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467874u;
label_467874:
    // 0x467874: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x467874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_467878:
    // 0x467878: 0x2785b2c4  addiu       $a1, $gp, -0x4D3C
    ctx->pc = 0x467878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947524));
label_46787c:
    // 0x46787c: 0xc0f0ab6  jal         func_3C2AD8
label_467880:
    if (ctx->pc == 0x467880u) {
        ctx->pc = 0x467884u;
        goto label_467884;
    }
    ctx->pc = 0x46787Cu;
    SET_GPR_U32(ctx, 31, 0x467884u);
    ctx->pc = 0x3C2AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AD8u, 0x46787Cu, 0x467884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467884u;
label_467884:
    // 0x467884: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x467884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_467888:
    // 0x467888: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x467888u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_46788c:
    // 0x46788c: 0x1000000a  b           . + 4 + (0xA << 2)
label_467890:
    if (ctx->pc == 0x467890u) {
        ctx->pc = 0x467894u;
        goto label_467894;
    }
    ctx->pc = 0x46788Cu;
    {
        const bool branch_taken_0x46788c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46788c) {
            ctx->pc = 0x4678B8u;
            goto label_4678b8;
        }
    }
    ctx->pc = 0x467894u;
label_467894:
    // 0x467894: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x467894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_467898:
    // 0x467898: 0xc041b38  jal         func_106CE0
label_46789c:
    if (ctx->pc == 0x46789Cu) {
        ctx->pc = 0x4678A0u;
        goto label_4678a0;
    }
    ctx->pc = 0x467898u;
    SET_GPR_U32(ctx, 31, 0x4678A0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x467898u, 0x4678A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4678A0u;
label_4678a0:
    // 0x4678a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4678a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4678a4:
    // 0x4678a4: 0x2785b2c8  addiu       $a1, $gp, -0x4D38
    ctx->pc = 0x4678a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947528));
label_4678a8:
    // 0x4678a8: 0xc0f0ab6  jal         func_3C2AD8
label_4678ac:
    if (ctx->pc == 0x4678ACu) {
        ctx->pc = 0x4678B0u;
        goto label_4678b0;
    }
    ctx->pc = 0x4678A8u;
    SET_GPR_U32(ctx, 31, 0x4678B0u);
    ctx->pc = 0x3C2AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AD8u, 0x4678A8u, 0x4678B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4678B0u;
label_4678b0:
    // 0x4678b0: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x4678b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_4678b4:
    // 0x4678b4: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x4678b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_4678b8:
    // 0x4678b8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x4678b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_4678bc:
    // 0x4678bc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x4678bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_4678c0:
    // 0x4678c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_4678c4:
    if (ctx->pc == 0x4678C4u) {
        ctx->pc = 0x4678C8u;
        goto label_4678c8;
    }
    ctx->pc = 0x4678C0u;
    {
        const bool branch_taken_0x4678c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4678c0) {
            ctx->pc = 0x4678D4u;
            goto label_4678d4;
        }
    }
    ctx->pc = 0x4678C8u;
label_4678c8:
    // 0x4678c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4678c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4678cc:
    // 0x4678cc: 0x10000015  b           . + 4 + (0x15 << 2)
label_4678d0:
    if (ctx->pc == 0x4678D0u) {
        ctx->pc = 0x4678D4u;
        goto label_4678d4;
    }
    ctx->pc = 0x4678CCu;
    {
        const bool branch_taken_0x4678cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4678cc) {
            ctx->pc = 0x467924u;
            goto label_467924;
        }
    }
    ctx->pc = 0x4678D4u;
label_4678d4:
    // 0x4678d4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4678d8:
    if (ctx->pc == 0x4678D8u) {
        ctx->pc = 0x4678DCu;
        goto label_4678dc;
    }
    ctx->pc = 0x4678D4u;
    {
        const bool branch_taken_0x4678d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4678d4) {
            ctx->pc = 0x4678FCu;
            goto label_4678fc;
        }
    }
    ctx->pc = 0x4678DCu;
label_4678dc:
    // 0x4678dc: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x4678dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_4678e0:
    // 0x4678e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4678e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4678e4:
    // 0x4678e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4678e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4678e8:
    // 0x4678e8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4678e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4678ec:
    // 0x4678ec: 0x320f809  jalr        $t9
label_4678f0:
    if (ctx->pc == 0x4678F0u) {
        ctx->pc = 0x4678F4u;
        goto label_4678f4;
    }
    ctx->pc = 0x4678ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4678F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4678ECu, 0x4678F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4678F4u;
label_4678f4:
    // 0x4678f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_4678f8:
    if (ctx->pc == 0x4678F8u) {
        ctx->pc = 0x4678FCu;
        goto label_4678fc;
    }
    ctx->pc = 0x4678F4u;
    {
        const bool branch_taken_0x4678f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4678f4) {
            ctx->pc = 0x467914u;
            goto label_467914;
        }
    }
    ctx->pc = 0x4678FCu;
label_4678fc:
    // 0x4678fc: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x4678fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_467900:
    // 0x467900: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x467900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_467904:
    // 0x467904: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x467904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_467908:
    // 0x467908: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x467908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_46790c:
    // 0x46790c: 0x320f809  jalr        $t9
label_467910:
    if (ctx->pc == 0x467910u) {
        ctx->pc = 0x467914u;
        goto label_467914;
    }
    ctx->pc = 0x46790Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x467914u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46790Cu, 0x467914u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x467914u;
label_467914:
    // 0x467914: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x467914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_467918:
    // 0x467918: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x467918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_46791c:
    // 0x46791c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x46791cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_467920:
    // 0x467920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x467920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_467924:
    // 0x467924: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x467924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_467928:
    // 0x467928: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x467928u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46792c:
    // 0x46792c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46792cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_467930:
    // 0x467930: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x467930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_467934:
    // 0x467934: 0x27bd01a0  addiu       $sp, $sp, 0x1A0
    ctx->pc = 0x467934u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_467938:
    // 0x467938: 0x3e00008  jr          $ra
label_46793c:
    if (ctx->pc == 0x46793Cu) {
        ctx->pc = 0x467940u;
        goto label_fallthrough_0x467938;
    }
    ctx->pc = 0x467938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x467938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x467938:
    ctx->pc = 0x467940u;
}
