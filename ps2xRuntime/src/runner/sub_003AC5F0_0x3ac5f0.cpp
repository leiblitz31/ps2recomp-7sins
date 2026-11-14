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

// Function: sub_003AC5F0
// Address: 0x3ac5f0 - 0x3acb10
void sub_003AC5F0_0x3ac5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC5F0_0x3ac5f0");
#endif

    switch (ctx->pc) {
        case 0x3ac5f0u: goto label_3ac5f0;
        case 0x3ac5f4u: goto label_3ac5f4;
        case 0x3ac5f8u: goto label_3ac5f8;
        case 0x3ac5fcu: goto label_3ac5fc;
        case 0x3ac600u: goto label_3ac600;
        case 0x3ac604u: goto label_3ac604;
        case 0x3ac608u: goto label_3ac608;
        case 0x3ac60cu: goto label_3ac60c;
        case 0x3ac610u: goto label_3ac610;
        case 0x3ac614u: goto label_3ac614;
        case 0x3ac618u: goto label_3ac618;
        case 0x3ac61cu: goto label_3ac61c;
        case 0x3ac620u: goto label_3ac620;
        case 0x3ac624u: goto label_3ac624;
        case 0x3ac628u: goto label_3ac628;
        case 0x3ac62cu: goto label_3ac62c;
        case 0x3ac630u: goto label_3ac630;
        case 0x3ac634u: goto label_3ac634;
        case 0x3ac638u: goto label_3ac638;
        case 0x3ac63cu: goto label_3ac63c;
        case 0x3ac640u: goto label_3ac640;
        case 0x3ac644u: goto label_3ac644;
        case 0x3ac648u: goto label_3ac648;
        case 0x3ac64cu: goto label_3ac64c;
        case 0x3ac650u: goto label_3ac650;
        case 0x3ac654u: goto label_3ac654;
        case 0x3ac658u: goto label_3ac658;
        case 0x3ac65cu: goto label_3ac65c;
        case 0x3ac660u: goto label_3ac660;
        case 0x3ac664u: goto label_3ac664;
        case 0x3ac668u: goto label_3ac668;
        case 0x3ac66cu: goto label_3ac66c;
        case 0x3ac670u: goto label_3ac670;
        case 0x3ac674u: goto label_3ac674;
        case 0x3ac678u: goto label_3ac678;
        case 0x3ac67cu: goto label_3ac67c;
        case 0x3ac680u: goto label_3ac680;
        case 0x3ac684u: goto label_3ac684;
        case 0x3ac688u: goto label_3ac688;
        case 0x3ac68cu: goto label_3ac68c;
        case 0x3ac690u: goto label_3ac690;
        case 0x3ac694u: goto label_3ac694;
        case 0x3ac698u: goto label_3ac698;
        case 0x3ac69cu: goto label_3ac69c;
        case 0x3ac6a0u: goto label_3ac6a0;
        case 0x3ac6a4u: goto label_3ac6a4;
        case 0x3ac6a8u: goto label_3ac6a8;
        case 0x3ac6acu: goto label_3ac6ac;
        case 0x3ac6b0u: goto label_3ac6b0;
        case 0x3ac6b4u: goto label_3ac6b4;
        case 0x3ac6b8u: goto label_3ac6b8;
        case 0x3ac6bcu: goto label_3ac6bc;
        case 0x3ac6c0u: goto label_3ac6c0;
        case 0x3ac6c4u: goto label_3ac6c4;
        case 0x3ac6c8u: goto label_3ac6c8;
        case 0x3ac6ccu: goto label_3ac6cc;
        case 0x3ac6d0u: goto label_3ac6d0;
        case 0x3ac6d4u: goto label_3ac6d4;
        case 0x3ac6d8u: goto label_3ac6d8;
        case 0x3ac6dcu: goto label_3ac6dc;
        case 0x3ac6e0u: goto label_3ac6e0;
        case 0x3ac6e4u: goto label_3ac6e4;
        case 0x3ac6e8u: goto label_3ac6e8;
        case 0x3ac6ecu: goto label_3ac6ec;
        case 0x3ac6f0u: goto label_3ac6f0;
        case 0x3ac6f4u: goto label_3ac6f4;
        case 0x3ac6f8u: goto label_3ac6f8;
        case 0x3ac6fcu: goto label_3ac6fc;
        case 0x3ac700u: goto label_3ac700;
        case 0x3ac704u: goto label_3ac704;
        case 0x3ac708u: goto label_3ac708;
        case 0x3ac70cu: goto label_3ac70c;
        case 0x3ac710u: goto label_3ac710;
        case 0x3ac714u: goto label_3ac714;
        case 0x3ac718u: goto label_3ac718;
        case 0x3ac71cu: goto label_3ac71c;
        case 0x3ac720u: goto label_3ac720;
        case 0x3ac724u: goto label_3ac724;
        case 0x3ac728u: goto label_3ac728;
        case 0x3ac72cu: goto label_3ac72c;
        case 0x3ac730u: goto label_3ac730;
        case 0x3ac734u: goto label_3ac734;
        case 0x3ac738u: goto label_3ac738;
        case 0x3ac73cu: goto label_3ac73c;
        case 0x3ac740u: goto label_3ac740;
        case 0x3ac744u: goto label_3ac744;
        case 0x3ac748u: goto label_3ac748;
        case 0x3ac74cu: goto label_3ac74c;
        case 0x3ac750u: goto label_3ac750;
        case 0x3ac754u: goto label_3ac754;
        case 0x3ac758u: goto label_3ac758;
        case 0x3ac75cu: goto label_3ac75c;
        case 0x3ac760u: goto label_3ac760;
        case 0x3ac764u: goto label_3ac764;
        case 0x3ac768u: goto label_3ac768;
        case 0x3ac76cu: goto label_3ac76c;
        case 0x3ac770u: goto label_3ac770;
        case 0x3ac774u: goto label_3ac774;
        case 0x3ac778u: goto label_3ac778;
        case 0x3ac77cu: goto label_3ac77c;
        case 0x3ac780u: goto label_3ac780;
        case 0x3ac784u: goto label_3ac784;
        case 0x3ac788u: goto label_3ac788;
        case 0x3ac78cu: goto label_3ac78c;
        case 0x3ac790u: goto label_3ac790;
        case 0x3ac794u: goto label_3ac794;
        case 0x3ac798u: goto label_3ac798;
        case 0x3ac79cu: goto label_3ac79c;
        case 0x3ac7a0u: goto label_3ac7a0;
        case 0x3ac7a4u: goto label_3ac7a4;
        case 0x3ac7a8u: goto label_3ac7a8;
        case 0x3ac7acu: goto label_3ac7ac;
        case 0x3ac7b0u: goto label_3ac7b0;
        case 0x3ac7b4u: goto label_3ac7b4;
        case 0x3ac7b8u: goto label_3ac7b8;
        case 0x3ac7bcu: goto label_3ac7bc;
        case 0x3ac7c0u: goto label_3ac7c0;
        case 0x3ac7c4u: goto label_3ac7c4;
        case 0x3ac7c8u: goto label_3ac7c8;
        case 0x3ac7ccu: goto label_3ac7cc;
        case 0x3ac7d0u: goto label_3ac7d0;
        case 0x3ac7d4u: goto label_3ac7d4;
        case 0x3ac7d8u: goto label_3ac7d8;
        case 0x3ac7dcu: goto label_3ac7dc;
        case 0x3ac7e0u: goto label_3ac7e0;
        case 0x3ac7e4u: goto label_3ac7e4;
        case 0x3ac7e8u: goto label_3ac7e8;
        case 0x3ac7ecu: goto label_3ac7ec;
        case 0x3ac7f0u: goto label_3ac7f0;
        case 0x3ac7f4u: goto label_3ac7f4;
        case 0x3ac7f8u: goto label_3ac7f8;
        case 0x3ac7fcu: goto label_3ac7fc;
        case 0x3ac800u: goto label_3ac800;
        case 0x3ac804u: goto label_3ac804;
        case 0x3ac808u: goto label_3ac808;
        case 0x3ac80cu: goto label_3ac80c;
        case 0x3ac810u: goto label_3ac810;
        case 0x3ac814u: goto label_3ac814;
        case 0x3ac818u: goto label_3ac818;
        case 0x3ac81cu: goto label_3ac81c;
        case 0x3ac820u: goto label_3ac820;
        case 0x3ac824u: goto label_3ac824;
        case 0x3ac828u: goto label_3ac828;
        case 0x3ac82cu: goto label_3ac82c;
        case 0x3ac830u: goto label_3ac830;
        case 0x3ac834u: goto label_3ac834;
        case 0x3ac838u: goto label_3ac838;
        case 0x3ac83cu: goto label_3ac83c;
        case 0x3ac840u: goto label_3ac840;
        case 0x3ac844u: goto label_3ac844;
        case 0x3ac848u: goto label_3ac848;
        case 0x3ac84cu: goto label_3ac84c;
        case 0x3ac850u: goto label_3ac850;
        case 0x3ac854u: goto label_3ac854;
        case 0x3ac858u: goto label_3ac858;
        case 0x3ac85cu: goto label_3ac85c;
        case 0x3ac860u: goto label_3ac860;
        case 0x3ac864u: goto label_3ac864;
        case 0x3ac868u: goto label_3ac868;
        case 0x3ac86cu: goto label_3ac86c;
        case 0x3ac870u: goto label_3ac870;
        case 0x3ac874u: goto label_3ac874;
        case 0x3ac878u: goto label_3ac878;
        case 0x3ac87cu: goto label_3ac87c;
        case 0x3ac880u: goto label_3ac880;
        case 0x3ac884u: goto label_3ac884;
        case 0x3ac888u: goto label_3ac888;
        case 0x3ac88cu: goto label_3ac88c;
        case 0x3ac890u: goto label_3ac890;
        case 0x3ac894u: goto label_3ac894;
        case 0x3ac898u: goto label_3ac898;
        case 0x3ac89cu: goto label_3ac89c;
        case 0x3ac8a0u: goto label_3ac8a0;
        case 0x3ac8a4u: goto label_3ac8a4;
        case 0x3ac8a8u: goto label_3ac8a8;
        case 0x3ac8acu: goto label_3ac8ac;
        case 0x3ac8b0u: goto label_3ac8b0;
        case 0x3ac8b4u: goto label_3ac8b4;
        case 0x3ac8b8u: goto label_3ac8b8;
        case 0x3ac8bcu: goto label_3ac8bc;
        case 0x3ac8c0u: goto label_3ac8c0;
        case 0x3ac8c4u: goto label_3ac8c4;
        case 0x3ac8c8u: goto label_3ac8c8;
        case 0x3ac8ccu: goto label_3ac8cc;
        case 0x3ac8d0u: goto label_3ac8d0;
        case 0x3ac8d4u: goto label_3ac8d4;
        case 0x3ac8d8u: goto label_3ac8d8;
        case 0x3ac8dcu: goto label_3ac8dc;
        case 0x3ac8e0u: goto label_3ac8e0;
        case 0x3ac8e4u: goto label_3ac8e4;
        case 0x3ac8e8u: goto label_3ac8e8;
        case 0x3ac8ecu: goto label_3ac8ec;
        case 0x3ac8f0u: goto label_3ac8f0;
        case 0x3ac8f4u: goto label_3ac8f4;
        case 0x3ac8f8u: goto label_3ac8f8;
        case 0x3ac8fcu: goto label_3ac8fc;
        case 0x3ac900u: goto label_3ac900;
        case 0x3ac904u: goto label_3ac904;
        case 0x3ac908u: goto label_3ac908;
        case 0x3ac90cu: goto label_3ac90c;
        case 0x3ac910u: goto label_3ac910;
        case 0x3ac914u: goto label_3ac914;
        case 0x3ac918u: goto label_3ac918;
        case 0x3ac91cu: goto label_3ac91c;
        case 0x3ac920u: goto label_3ac920;
        case 0x3ac924u: goto label_3ac924;
        case 0x3ac928u: goto label_3ac928;
        case 0x3ac92cu: goto label_3ac92c;
        case 0x3ac930u: goto label_3ac930;
        case 0x3ac934u: goto label_3ac934;
        case 0x3ac938u: goto label_3ac938;
        case 0x3ac93cu: goto label_3ac93c;
        case 0x3ac940u: goto label_3ac940;
        case 0x3ac944u: goto label_3ac944;
        case 0x3ac948u: goto label_3ac948;
        case 0x3ac94cu: goto label_3ac94c;
        case 0x3ac950u: goto label_3ac950;
        case 0x3ac954u: goto label_3ac954;
        case 0x3ac958u: goto label_3ac958;
        case 0x3ac95cu: goto label_3ac95c;
        case 0x3ac960u: goto label_3ac960;
        case 0x3ac964u: goto label_3ac964;
        case 0x3ac968u: goto label_3ac968;
        case 0x3ac96cu: goto label_3ac96c;
        case 0x3ac970u: goto label_3ac970;
        case 0x3ac974u: goto label_3ac974;
        case 0x3ac978u: goto label_3ac978;
        case 0x3ac97cu: goto label_3ac97c;
        case 0x3ac980u: goto label_3ac980;
        case 0x3ac984u: goto label_3ac984;
        case 0x3ac988u: goto label_3ac988;
        case 0x3ac98cu: goto label_3ac98c;
        case 0x3ac990u: goto label_3ac990;
        case 0x3ac994u: goto label_3ac994;
        case 0x3ac998u: goto label_3ac998;
        case 0x3ac99cu: goto label_3ac99c;
        case 0x3ac9a0u: goto label_3ac9a0;
        case 0x3ac9a4u: goto label_3ac9a4;
        case 0x3ac9a8u: goto label_3ac9a8;
        case 0x3ac9acu: goto label_3ac9ac;
        case 0x3ac9b0u: goto label_3ac9b0;
        case 0x3ac9b4u: goto label_3ac9b4;
        case 0x3ac9b8u: goto label_3ac9b8;
        case 0x3ac9bcu: goto label_3ac9bc;
        case 0x3ac9c0u: goto label_3ac9c0;
        case 0x3ac9c4u: goto label_3ac9c4;
        case 0x3ac9c8u: goto label_3ac9c8;
        case 0x3ac9ccu: goto label_3ac9cc;
        case 0x3ac9d0u: goto label_3ac9d0;
        case 0x3ac9d4u: goto label_3ac9d4;
        case 0x3ac9d8u: goto label_3ac9d8;
        case 0x3ac9dcu: goto label_3ac9dc;
        case 0x3ac9e0u: goto label_3ac9e0;
        case 0x3ac9e4u: goto label_3ac9e4;
        case 0x3ac9e8u: goto label_3ac9e8;
        case 0x3ac9ecu: goto label_3ac9ec;
        case 0x3ac9f0u: goto label_3ac9f0;
        case 0x3ac9f4u: goto label_3ac9f4;
        case 0x3ac9f8u: goto label_3ac9f8;
        case 0x3ac9fcu: goto label_3ac9fc;
        case 0x3aca00u: goto label_3aca00;
        case 0x3aca04u: goto label_3aca04;
        case 0x3aca08u: goto label_3aca08;
        case 0x3aca0cu: goto label_3aca0c;
        case 0x3aca10u: goto label_3aca10;
        case 0x3aca14u: goto label_3aca14;
        case 0x3aca18u: goto label_3aca18;
        case 0x3aca1cu: goto label_3aca1c;
        case 0x3aca20u: goto label_3aca20;
        case 0x3aca24u: goto label_3aca24;
        case 0x3aca28u: goto label_3aca28;
        case 0x3aca2cu: goto label_3aca2c;
        case 0x3aca30u: goto label_3aca30;
        case 0x3aca34u: goto label_3aca34;
        case 0x3aca38u: goto label_3aca38;
        case 0x3aca3cu: goto label_3aca3c;
        case 0x3aca40u: goto label_3aca40;
        case 0x3aca44u: goto label_3aca44;
        case 0x3aca48u: goto label_3aca48;
        case 0x3aca4cu: goto label_3aca4c;
        case 0x3aca50u: goto label_3aca50;
        case 0x3aca54u: goto label_3aca54;
        case 0x3aca58u: goto label_3aca58;
        case 0x3aca5cu: goto label_3aca5c;
        case 0x3aca60u: goto label_3aca60;
        case 0x3aca64u: goto label_3aca64;
        case 0x3aca68u: goto label_3aca68;
        case 0x3aca6cu: goto label_3aca6c;
        case 0x3aca70u: goto label_3aca70;
        case 0x3aca74u: goto label_3aca74;
        case 0x3aca78u: goto label_3aca78;
        case 0x3aca7cu: goto label_3aca7c;
        case 0x3aca80u: goto label_3aca80;
        case 0x3aca84u: goto label_3aca84;
        case 0x3aca88u: goto label_3aca88;
        case 0x3aca8cu: goto label_3aca8c;
        case 0x3aca90u: goto label_3aca90;
        case 0x3aca94u: goto label_3aca94;
        case 0x3aca98u: goto label_3aca98;
        case 0x3aca9cu: goto label_3aca9c;
        case 0x3acaa0u: goto label_3acaa0;
        case 0x3acaa4u: goto label_3acaa4;
        case 0x3acaa8u: goto label_3acaa8;
        case 0x3acaacu: goto label_3acaac;
        case 0x3acab0u: goto label_3acab0;
        case 0x3acab4u: goto label_3acab4;
        case 0x3acab8u: goto label_3acab8;
        case 0x3acabcu: goto label_3acabc;
        case 0x3acac0u: goto label_3acac0;
        case 0x3acac4u: goto label_3acac4;
        case 0x3acac8u: goto label_3acac8;
        case 0x3acaccu: goto label_3acacc;
        case 0x3acad0u: goto label_3acad0;
        case 0x3acad4u: goto label_3acad4;
        case 0x3acad8u: goto label_3acad8;
        case 0x3acadcu: goto label_3acadc;
        case 0x3acae0u: goto label_3acae0;
        case 0x3acae4u: goto label_3acae4;
        case 0x3acae8u: goto label_3acae8;
        case 0x3acaecu: goto label_3acaec;
        case 0x3acaf0u: goto label_3acaf0;
        case 0x3acaf4u: goto label_3acaf4;
        case 0x3acaf8u: goto label_3acaf8;
        case 0x3acafcu: goto label_3acafc;
        case 0x3acb00u: goto label_3acb00;
        case 0x3acb04u: goto label_3acb04;
        case 0x3acb08u: goto label_3acb08;
        case 0x3acb0cu: goto label_3acb0c;
        default: break;
    }

    ctx->pc = 0x3ac5f0u;

label_3ac5f0:
    // 0x3ac5f0: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x3ac5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
label_3ac5f4:
    // 0x3ac5f4: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3ac5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_3ac5f8:
    // 0x3ac5f8: 0x7fb10200  sq          $s1, 0x200($sp)
    ctx->pc = 0x3ac5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 17));
label_3ac5fc:
    // 0x3ac5fc: 0x24a5ce80  addiu       $a1, $a1, -0x3180
    ctx->pc = 0x3ac5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954624));
label_3ac600:
    // 0x3ac600: 0x7fb601b0  sq          $s6, 0x1B0($sp)
    ctx->pc = 0x3ac600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 22));
label_3ac604:
    // 0x3ac604: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3ac604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3ac608:
    // 0x3ac608: 0x7fb00210  sq          $s0, 0x210($sp)
    ctx->pc = 0x3ac608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 16));
label_3ac60c:
    // 0x3ac60c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3ac60cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ac610:
    // 0x3ac610: 0x7fb201f0  sq          $s2, 0x1F0($sp)
    ctx->pc = 0x3ac610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 18));
label_3ac614:
    // 0x3ac614: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3ac614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3ac618:
    // 0x3ac618: 0x7fb301e0  sq          $s3, 0x1E0($sp)
    ctx->pc = 0x3ac618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 19));
label_3ac61c:
    // 0x3ac61c: 0x7fb401d0  sq          $s4, 0x1D0($sp)
    ctx->pc = 0x3ac61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 20));
label_3ac620:
    // 0x3ac620: 0x7fb501c0  sq          $s5, 0x1C0($sp)
    ctx->pc = 0x3ac620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 21));
label_3ac624:
    // 0x3ac624: 0x7fb701a0  sq          $s7, 0x1A0($sp)
    ctx->pc = 0x3ac624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 23));
label_3ac628:
    // 0x3ac628: 0x7fbe0190  sq          $fp, 0x190($sp)
    ctx->pc = 0x3ac628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 30));
label_3ac62c:
    // 0x3ac62c: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x3ac62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
label_3ac630:
    // 0x3ac630: 0x8ca40508  lw          $a0, 0x508($a1)
    ctx->pc = 0x3ac630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1288)));
label_3ac634:
    // 0x3ac634: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x3ac634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_3ac638:
    // 0x3ac638: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3ac638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3ac63c:
    // 0x3ac63c: 0x40f809  jalr        $v0
label_3ac640:
    if (ctx->pc == 0x3AC640u) {
        ctx->pc = 0x3AC640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC63Cu;
        // 0x3ac640: 0x34a50199  ori         $a1, $a1, 0x199 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)409);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC644u;
        goto label_3ac644;
    }
    ctx->pc = 0x3AC63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC644u);
        ctx->pc = 0x3AC640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC63Cu;
        // 0x3ac640: 0x34a50199  ori         $a1, $a1, 0x199 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)409);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC63Cu, 0x3AC644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC644u;
label_3ac644:
    // 0x3ac644: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ac644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ac648:
    // 0x3ac648: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_3ac64c:
    if (ctx->pc == 0x3AC64Cu) {
        ctx->pc = 0x3AC64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC648u;
        // 0x3ac64c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC650u;
        goto label_3ac650;
    }
    ctx->pc = 0x3AC648u;
    {
        const bool branch_taken_0x3ac648 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC648u;
        // 0x3ac64c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac648) {
            ctx->pc = 0x3AC658u;
            goto label_3ac658;
        }
    }
    ctx->pc = 0x3AC650u;
label_3ac650:
    // 0x3ac650: 0x10000033  b           . + 4 + (0x33 << 2)
label_3ac654:
    if (ctx->pc == 0x3AC654u) {
        ctx->pc = 0x3AC654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC650u;
        // 0x3ac654: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC658u;
        goto label_3ac658;
    }
    ctx->pc = 0x3AC650u;
    {
        const bool branch_taken_0x3ac650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC650u;
        // 0x3ac654: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac650) {
            ctx->pc = 0x3AC720u;
            goto label_3ac720;
        }
    }
    ctx->pc = 0x3AC658u;
label_3ac658:
    // 0x3ac658: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ac658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ac65c:
    // 0x3ac65c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ac65cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ac660:
    // 0x3ac660: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3ac660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3ac664:
    // 0x3ac664: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x3ac664u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
label_3ac668:
    // 0x3ac668: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x3ac668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3ac66c:
    // 0x3ac66c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x3ac66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_3ac670:
    // 0x3ac670: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3ac670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_3ac674:
    // 0x3ac674: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x3ac674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_3ac678:
    // 0x3ac678: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3ac678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_3ac67c:
    // 0x3ac67c: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x3ac67cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_3ac680:
    // 0x3ac680: 0xac40fff4  sw          $zero, -0xC($v0)
    ctx->pc = 0x3ac680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 0));
label_3ac684:
    // 0x3ac684: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x3ac684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
label_3ac688:
    // 0x3ac688: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x3ac688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
label_3ac68c:
    // 0x3ac68c: 0xae200128  sw          $zero, 0x128($s1)
    ctx->pc = 0x3ac68cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 0));
label_3ac690:
    // 0x3ac690: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3ac690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3ac694:
    // 0x3ac694: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3ac694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3ac698:
    // 0x3ac698: 0xae200130  sw          $zero, 0x130($s1)
    ctx->pc = 0x3ac698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 0));
label_3ac69c:
    // 0x3ac69c: 0x34a50190  ori         $a1, $a1, 0x190
    ctx->pc = 0x3ac69cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
label_3ac6a0:
    // 0x3ac6a0: 0xae200124  sw          $zero, 0x124($s1)
    ctx->pc = 0x3ac6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 0));
label_3ac6a4:
    // 0x3ac6a4: 0xc103642  jal         func_40D908
label_3ac6a8:
    if (ctx->pc == 0x3AC6A8u) {
        ctx->pc = 0x3AC6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC6A4u;
        // 0x3ac6a8: 0xae20012c  sw          $zero, 0x12C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC6ACu;
        goto label_3ac6ac;
    }
    ctx->pc = 0x3AC6A4u;
    SET_GPR_U32(ctx, 31, 0x3AC6ACu);
    ctx->pc = 0x3AC6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC6A4u;
    // 0x3ac6a8: 0xae20012c  sw          $zero, 0x12C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3AC6A4u, 0x3AC6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC6ACu;
label_3ac6ac:
    // 0x3ac6ac: 0x26109268  addiu       $s0, $s0, -0x6D98
    ctx->pc = 0x3ac6acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939240));
label_3ac6b0:
    // 0x3ac6b0: 0xae220134  sw          $v0, 0x134($s1)
    ctx->pc = 0x3ac6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 2));
label_3ac6b4:
    // 0x3ac6b4: 0xae300138  sw          $s0, 0x138($s1)
    ctx->pc = 0x3ac6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 16));
label_3ac6b8:
    // 0x3ac6b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3ac6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ac6bc:
    // 0x3ac6bc: 0xae20013c  sw          $zero, 0x13C($s1)
    ctx->pc = 0x3ac6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 316), GPR_U32(ctx, 0));
label_3ac6c0:
    // 0x3ac6c0: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x3ac6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_3ac6c4:
    // 0x3ac6c4: 0xae200140  sw          $zero, 0x140($s1)
    ctx->pc = 0x3ac6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
label_3ac6c8:
    // 0x3ac6c8: 0x26220122  addiu       $v0, $s1, 0x122
    ctx->pc = 0x3ac6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 290));
label_3ac6cc:
    // 0x3ac6cc: 0x0  nop
    ctx->pc = 0x3ac6ccu;
    // NOP
label_3ac6d0:
    // 0x3ac6d0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x3ac6d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_3ac6d4:
    // 0x3ac6d4: 0x2484fff0  addiu       $a0, $a0, -0x10
    ctx->pc = 0x3ac6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
label_3ac6d8:
    // 0x3ac6d8: 0xa443fffe  sh          $v1, -0x2($v0)
    ctx->pc = 0x3ac6d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967294), (uint16_t)GPR_U32(ctx, 3));
label_3ac6dc:
    // 0x3ac6dc: 0xa443fffc  sh          $v1, -0x4($v0)
    ctx->pc = 0x3ac6dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967292), (uint16_t)GPR_U32(ctx, 3));
label_3ac6e0:
    // 0x3ac6e0: 0xa443fffa  sh          $v1, -0x6($v0)
    ctx->pc = 0x3ac6e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967290), (uint16_t)GPR_U32(ctx, 3));
label_3ac6e4:
    // 0x3ac6e4: 0xa443fff8  sh          $v1, -0x8($v0)
    ctx->pc = 0x3ac6e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967288), (uint16_t)GPR_U32(ctx, 3));
label_3ac6e8:
    // 0x3ac6e8: 0xa443fff6  sh          $v1, -0xA($v0)
    ctx->pc = 0x3ac6e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967286), (uint16_t)GPR_U32(ctx, 3));
label_3ac6ec:
    // 0x3ac6ec: 0xa443fff4  sh          $v1, -0xC($v0)
    ctx->pc = 0x3ac6ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967284), (uint16_t)GPR_U32(ctx, 3));
label_3ac6f0:
    // 0x3ac6f0: 0xa443fff2  sh          $v1, -0xE($v0)
    ctx->pc = 0x3ac6f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967282), (uint16_t)GPR_U32(ctx, 3));
label_3ac6f4:
    // 0x3ac6f4: 0xa443fff0  sh          $v1, -0x10($v0)
    ctx->pc = 0x3ac6f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967280), (uint16_t)GPR_U32(ctx, 3));
label_3ac6f8:
    // 0x3ac6f8: 0xa443ffee  sh          $v1, -0x12($v0)
    ctx->pc = 0x3ac6f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967278), (uint16_t)GPR_U32(ctx, 3));
label_3ac6fc:
    // 0x3ac6fc: 0xa443ffec  sh          $v1, -0x14($v0)
    ctx->pc = 0x3ac6fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967276), (uint16_t)GPR_U32(ctx, 3));
label_3ac700:
    // 0x3ac700: 0xa443ffea  sh          $v1, -0x16($v0)
    ctx->pc = 0x3ac700u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967274), (uint16_t)GPR_U32(ctx, 3));
label_3ac704:
    // 0x3ac704: 0xa443ffe8  sh          $v1, -0x18($v0)
    ctx->pc = 0x3ac704u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967272), (uint16_t)GPR_U32(ctx, 3));
label_3ac708:
    // 0x3ac708: 0xa443ffe6  sh          $v1, -0x1A($v0)
    ctx->pc = 0x3ac708u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967270), (uint16_t)GPR_U32(ctx, 3));
label_3ac70c:
    // 0x3ac70c: 0xa443ffe4  sh          $v1, -0x1C($v0)
    ctx->pc = 0x3ac70cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967268), (uint16_t)GPR_U32(ctx, 3));
label_3ac710:
    // 0x3ac710: 0xa443ffe2  sh          $v1, -0x1E($v0)
    ctx->pc = 0x3ac710u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967266), (uint16_t)GPR_U32(ctx, 3));
label_3ac714:
    // 0x3ac714: 0x481ffee  bgez        $a0, . + 4 + (-0x12 << 2)
label_3ac718:
    if (ctx->pc == 0x3AC718u) {
        ctx->pc = 0x3AC718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC714u;
        // 0x3ac718: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC71Cu;
        goto label_3ac71c;
    }
    ctx->pc = 0x3AC714u;
    {
        const bool branch_taken_0x3ac714 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x3AC718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC714u;
        // 0x3ac718: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac714) {
            ctx->pc = 0x3AC6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac6d0;
        }
    }
    ctx->pc = 0x3AC71Cu;
label_3ac71c:
    // 0x3ac71c: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x3ac71cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ac720:
    // 0x3ac720: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_3ac724:
    if (ctx->pc == 0x3AC724u) {
        ctx->pc = 0x3AC724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC720u;
        // 0x3ac724: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC728u;
        goto label_3ac728;
    }
    ctx->pc = 0x3AC720u;
    {
        const bool branch_taken_0x3ac720 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC720u;
        // 0x3ac724: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac720) {
            ctx->pc = 0x3AC730u;
            goto label_3ac730;
        }
    }
    ctx->pc = 0x3AC728u;
label_3ac728:
    // 0x3ac728: 0x100000ed  b           . + 4 + (0xED << 2)
label_3ac72c:
    if (ctx->pc == 0x3AC72Cu) {
        ctx->pc = 0x3AC72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC728u;
        // 0x3ac72c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC730u;
        goto label_3ac730;
    }
    ctx->pc = 0x3AC728u;
    {
        const bool branch_taken_0x3ac728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC728u;
        // 0x3ac72c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac728) {
            ctx->pc = 0x3ACAE0u;
            goto label_3acae0;
        }
    }
    ctx->pc = 0x3AC730u;
label_3ac730:
    // 0x3ac730: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3ac730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3ac734:
    // 0x3ac734: 0x2454e880  addiu       $s4, $v0, -0x1780
    ctx->pc = 0x3ac734u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3ac738:
    // 0x3ac738: 0x2471ce80  addiu       $s1, $v1, -0x3180
    ctx->pc = 0x3ac738u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_3ac73c:
    // 0x3ac73c: 0x8e8200f4  lw          $v0, 0xF4($s4)
    ctx->pc = 0x3ac73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
label_3ac740:
    // 0x3ac740: 0x40f809  jalr        $v0
label_3ac744:
    if (ctx->pc == 0x3AC744u) {
        ctx->pc = 0x3AC744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC740u;
        // 0x3ac744: 0x8e24050c  lw          $a0, 0x50C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC748u;
        goto label_3ac748;
    }
    ctx->pc = 0x3AC740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC748u);
        ctx->pc = 0x3AC744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC740u;
        // 0x3ac744: 0x8e24050c  lw          $a0, 0x50C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1292)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC740u, 0x3AC748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC748u;
label_3ac748:
    // 0x3ac748: 0x8e8300f4  lw          $v1, 0xF4($s4)
    ctx->pc = 0x3ac748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
label_3ac74c:
    // 0x3ac74c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ac74cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ac750:
    // 0x3ac750: 0x60f809  jalr        $v1
label_3ac754:
    if (ctx->pc == 0x3AC754u) {
        ctx->pc = 0x3AC754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC750u;
        // 0x3ac754: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC758u;
        goto label_3ac758;
    }
    ctx->pc = 0x3AC750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AC758u);
        ctx->pc = 0x3AC754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC750u;
        // 0x3ac754: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC750u, 0x3AC758u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC758u;
label_3ac758:
    // 0x3ac758: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3ac758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3ac75c:
    // 0x3ac75c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3ac75cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3ac760:
    // 0x3ac760: 0x8e820108  lw          $v0, 0x108($s4)
    ctx->pc = 0x3ac760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 264)));
label_3ac764:
    // 0x3ac764: 0x26040005  addiu       $a0, $s0, 0x5
    ctx->pc = 0x3ac764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
label_3ac768:
    // 0x3ac768: 0x40f809  jalr        $v0
label_3ac76c:
    if (ctx->pc == 0x3AC76Cu) {
        ctx->pc = 0x3AC76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC768u;
        // 0x3ac76c: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC770u;
        goto label_3ac770;
    }
    ctx->pc = 0x3AC768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC770u);
        ctx->pc = 0x3AC76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC768u;
        // 0x3ac76c: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC768u, 0x3AC770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC770u;
label_3ac770:
    // 0x3ac770: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3ac770u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ac774:
    // 0x3ac774: 0x12400099  beqz        $s2, . + 4 + (0x99 << 2)
label_3ac778:
    if (ctx->pc == 0x3AC778u) {
        ctx->pc = 0x3AC778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC774u;
        // 0x3ac778: 0x280a82d  daddu       $s5, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC77Cu;
        goto label_3ac77c;
    }
    ctx->pc = 0x3AC774u;
    {
        const bool branch_taken_0x3ac774 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC774u;
        // 0x3ac778: 0x280a82d  daddu       $s5, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac774) {
            ctx->pc = 0x3AC9DCu;
            goto label_3ac9dc;
        }
    }
    ctx->pc = 0x3AC77Cu;
label_3ac77c:
    // 0x3ac77c: 0x8e31050c  lw          $s1, 0x50C($s1)
    ctx->pc = 0x3ac77cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1292)));
label_3ac780:
    // 0x3ac780: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3ac780u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ac784:
    // 0x3ac784: 0x3c1e0061  lui         $fp, 0x61
    ctx->pc = 0x3ac784u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)97 << 16));
label_3ac788:
    // 0x3ac788: 0x10000003  b           . + 4 + (0x3 << 2)
label_3ac78c:
    if (ctx->pc == 0x3AC78Cu) {
        ctx->pc = 0x3AC78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC788u;
        // 0x3ac78c: 0x3c170061  lui         $s7, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC790u;
        goto label_3ac790;
    }
    ctx->pc = 0x3AC788u;
    {
        const bool branch_taken_0x3ac788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC788u;
        // 0x3ac78c: 0x3c170061  lui         $s7, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac788) {
            ctx->pc = 0x3AC798u;
            goto label_3ac798;
        }
    }
    ctx->pc = 0x3AC790u;
label_3ac790:
    // 0x3ac790: 0x16800019  bnez        $s4, . + 4 + (0x19 << 2)
label_3ac794:
    if (ctx->pc == 0x3AC794u) {
        ctx->pc = 0x3AC798u;
        goto label_3ac798;
    }
    ctx->pc = 0x3AC790u;
    {
        const bool branch_taken_0x3ac790 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ac790) {
            ctx->pc = 0x3AC7F8u;
            goto label_3ac7f8;
        }
    }
    ctx->pc = 0x3AC798u;
label_3ac798:
    // 0x3ac798: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x3ac798u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3ac79c:
    // 0x3ac79c: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x3ac79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_3ac7a0:
    // 0x3ac7a0: 0x52030004  beql        $s0, $v1, . + 4 + (0x4 << 2)
label_3ac7a4:
    if (ctx->pc == 0x3AC7A4u) {
        ctx->pc = 0x3AC7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC7A0u;
        // 0x3ac7a4: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC7A8u;
        goto label_3ac7a8;
    }
    ctx->pc = 0x3AC7A0u;
    {
        const bool branch_taken_0x3ac7a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ac7a0) {
            ctx->pc = 0x3AC7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC7A0u;
            // 0x3ac7a4: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC7B4u;
            goto label_3ac7b4;
        }
    }
    ctx->pc = 0x3AC7A8u;
label_3ac7a8:
    // 0x3ac7a8: 0x56000010  bnel        $s0, $zero, . + 4 + (0x10 << 2)
label_3ac7ac:
    if (ctx->pc == 0x3AC7ACu) {
        ctx->pc = 0x3AC7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC7A8u;
        // 0x3ac7ac: 0xa0500000  sb          $s0, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC7B0u;
        goto label_3ac7b0;
    }
    ctx->pc = 0x3AC7A8u;
    {
        const bool branch_taken_0x3ac7a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ac7a8) {
            ctx->pc = 0x3AC7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC7A8u;
            // 0x3ac7ac: 0xa0500000  sb          $s0, 0x0($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC7ECu;
            goto label_3ac7ec;
        }
    }
    ctx->pc = 0x3AC7B0u;
label_3ac7b0:
    // 0x3ac7b0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x3ac7b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_3ac7b4:
    // 0x3ac7b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ac7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ac7b8:
    // 0x3ac7b8: 0x8ea200d4  lw          $v0, 0xD4($s5)
    ctx->pc = 0x3ac7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 212)));
label_3ac7bc:
    // 0x3ac7bc: 0x40f809  jalr        $v0
label_3ac7c0:
    if (ctx->pc == 0x3AC7C0u) {
        ctx->pc = 0x3AC7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC7BCu;
        // 0x3ac7c0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC7C4u;
        goto label_3ac7c4;
    }
    ctx->pc = 0x3AC7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC7C4u);
        ctx->pc = 0x3AC7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC7BCu;
        // 0x3ac7c0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC7BCu, 0x3AC7C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC7C4u;
label_3ac7c4:
    // 0x3ac7c4: 0x8ea200d4  lw          $v0, 0xD4($s5)
    ctx->pc = 0x3ac7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 212)));
label_3ac7c8:
    // 0x3ac7c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ac7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ac7cc:
    // 0x3ac7cc: 0x40f809  jalr        $v0
label_3ac7d0:
    if (ctx->pc == 0x3AC7D0u) {
        ctx->pc = 0x3AC7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC7CCu;
        // 0x3ac7d0: 0x27c59a80  addiu       $a1, $fp, -0x6580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC7D4u;
        goto label_3ac7d4;
    }
    ctx->pc = 0x3AC7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC7D4u);
        ctx->pc = 0x3AC7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC7CCu;
        // 0x3ac7d0: 0x27c59a80  addiu       $a1, $fp, -0x6580 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941312));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC7CCu, 0x3AC7D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC7D4u;
label_3ac7d4:
    // 0x3ac7d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ac7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ac7d8:
    // 0x3ac7d8: 0xc0f0ab6  jal         func_3C2AD8
label_3ac7dc:
    if (ctx->pc == 0x3AC7DCu) {
        ctx->pc = 0x3AC7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC7D8u;
        // 0x3ac7dc: 0x26e59a88  addiu       $a1, $s7, -0x6578 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC7E0u;
        goto label_3ac7e0;
    }
    ctx->pc = 0x3AC7D8u;
    SET_GPR_U32(ctx, 31, 0x3AC7E0u);
    ctx->pc = 0x3AC7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC7D8u;
    // 0x3ac7dc: 0x26e59a88  addiu       $a1, $s7, -0x6578 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AD8u, 0x3AC7D8u, 0x3AC7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC7E0u;
label_3ac7e0:
    // 0x3ac7e0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3ac7e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ac7e4:
    // 0x3ac7e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3ac7e8:
    if (ctx->pc == 0x3AC7E8u) {
        ctx->pc = 0x3AC7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC7E4u;
        // 0x3ac7e8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC7ECu;
        goto label_3ac7ec;
    }
    ctx->pc = 0x3AC7E4u;
    {
        const bool branch_taken_0x3ac7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC7E4u;
        // 0x3ac7e8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac7e4) {
            ctx->pc = 0x3AC7F0u;
            goto label_3ac7f0;
        }
    }
    ctx->pc = 0x3AC7ECu;
label_3ac7ec:
    // 0x3ac7ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ac7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ac7f0:
    // 0x3ac7f0: 0x1600ffe7  bnez        $s0, . + 4 + (-0x19 << 2)
label_3ac7f4:
    if (ctx->pc == 0x3AC7F4u) {
        ctx->pc = 0x3AC7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC7F0u;
        // 0x3ac7f4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC7F8u;
        goto label_3ac7f8;
    }
    ctx->pc = 0x3AC7F0u;
    {
        const bool branch_taken_0x3ac7f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC7F0u;
        // 0x3ac7f4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac7f0) {
            ctx->pc = 0x3AC790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac790;
        }
    }
    ctx->pc = 0x3AC7F8u;
label_3ac7f8:
    // 0x3ac7f8: 0x12800030  beqz        $s4, . + 4 + (0x30 << 2)
label_3ac7fc:
    if (ctx->pc == 0x3AC7FCu) {
        ctx->pc = 0x3AC7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC7F8u;
        // 0x3ac7fc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC800u;
        goto label_3ac800;
    }
    ctx->pc = 0x3AC7F8u;
    {
        const bool branch_taken_0x3ac7f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC7F8u;
        // 0x3ac7fc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac7f8) {
            ctx->pc = 0x3AC8BCu;
            goto label_3ac8bc;
        }
    }
    ctx->pc = 0x3AC800u;
label_3ac800:
    // 0x3ac800: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x3ac800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3ac804:
    // 0x3ac804: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x3ac804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3ac808:
    // 0x3ac808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ac808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ac80c:
    // 0x3ac80c: 0xc0f0a5a  jal         func_3C2968
label_3ac810:
    if (ctx->pc == 0x3AC810u) {
        ctx->pc = 0x3AC810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC80Cu;
        // 0x3ac810: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC814u;
        goto label_3ac814;
    }
    ctx->pc = 0x3AC80Cu;
    SET_GPR_U32(ctx, 31, 0x3AC814u);
    ctx->pc = 0x3AC810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC80Cu;
    // 0x3ac810: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2968u, 0x3AC80Cu, 0x3AC814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC814u;
label_3ac814:
    // 0x3ac814: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3ac814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3ac818:
    // 0x3ac818: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3ac818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3ac81c:
    // 0x3ac81c: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x3ac81cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3ac820:
    // 0x3ac820: 0x24a5c038  addiu       $a1, $a1, -0x3FC8
    ctx->pc = 0x3ac820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950968));
label_3ac824:
    // 0x3ac824: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x3ac824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_3ac828:
    // 0x3ac828: 0x40f809  jalr        $v0
label_3ac82c:
    if (ctx->pc == 0x3AC82Cu) {
        ctx->pc = 0x3AC82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC828u;
        // 0x3ac82c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC830u;
        goto label_3ac830;
    }
    ctx->pc = 0x3AC828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC830u);
        ctx->pc = 0x3AC82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC828u;
        // 0x3ac82c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC828u, 0x3AC830u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC830u;
label_3ac830:
    // 0x3ac830: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3ac834:
    if (ctx->pc == 0x3AC834u) {
        ctx->pc = 0x3AC834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC830u;
        // 0x3ac834: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC838u;
        goto label_3ac838;
    }
    ctx->pc = 0x3AC830u;
    {
        const bool branch_taken_0x3ac830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC830u;
        // 0x3ac834: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac830) {
            ctx->pc = 0x3AC854u;
            goto label_3ac854;
        }
    }
    ctx->pc = 0x3AC838u;
label_3ac838:
    // 0x3ac838: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3ac838u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ac83c:
    // 0x3ac83c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ac83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ac840:
    // 0x3ac840: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ac840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ac844:
    // 0x3ac844: 0xc0ea76a  jal         func_3A9DA8
label_3ac848:
    if (ctx->pc == 0x3AC848u) {
        ctx->pc = 0x3AC848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC844u;
        // 0x3ac848: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC84Cu;
        goto label_3ac84c;
    }
    ctx->pc = 0x3AC844u;
    SET_GPR_U32(ctx, 31, 0x3AC84Cu);
    ctx->pc = 0x3AC848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC844u;
    // 0x3ac848: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9DA8u, 0x3AC844u, 0x3AC84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC84Cu;
label_3ac84c:
    // 0x3ac84c: 0x10000019  b           . + 4 + (0x19 << 2)
label_3ac850:
    if (ctx->pc == 0x3AC850u) {
        ctx->pc = 0x3AC850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC84Cu;
        // 0x3ac850: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC854u;
        goto label_3ac854;
    }
    ctx->pc = 0x3AC84Cu;
    {
        const bool branch_taken_0x3ac84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC84Cu;
        // 0x3ac850: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac84c) {
            ctx->pc = 0x3AC8B4u;
            goto label_3ac8b4;
        }
    }
    ctx->pc = 0x3AC854u;
label_3ac854:
    // 0x3ac854: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x3ac854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_3ac858:
    // 0x3ac858: 0x24a5c048  addiu       $a1, $a1, -0x3FB8
    ctx->pc = 0x3ac858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950984));
label_3ac85c:
    // 0x3ac85c: 0x40f809  jalr        $v0
label_3ac860:
    if (ctx->pc == 0x3AC860u) {
        ctx->pc = 0x3AC860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC85Cu;
        // 0x3ac860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC864u;
        goto label_3ac864;
    }
    ctx->pc = 0x3AC85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC864u);
        ctx->pc = 0x3AC860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC85Cu;
        // 0x3ac860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC85Cu, 0x3AC864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC864u;
label_3ac864:
    // 0x3ac864: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3ac868:
    if (ctx->pc == 0x3AC868u) {
        ctx->pc = 0x3AC868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC864u;
        // 0x3ac868: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC86Cu;
        goto label_3ac86c;
    }
    ctx->pc = 0x3AC864u;
    {
        const bool branch_taken_0x3ac864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC864u;
        // 0x3ac868: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac864) {
            ctx->pc = 0x3AC888u;
            goto label_3ac888;
        }
    }
    ctx->pc = 0x3AC86Cu;
label_3ac86c:
    // 0x3ac86c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3ac86cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ac870:
    // 0x3ac870: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ac870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ac874:
    // 0x3ac874: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ac874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ac878:
    // 0x3ac878: 0xc0ea8b8  jal         func_3AA2E0
label_3ac87c:
    if (ctx->pc == 0x3AC87Cu) {
        ctx->pc = 0x3AC87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC878u;
        // 0x3ac87c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC880u;
        goto label_3ac880;
    }
    ctx->pc = 0x3AC878u;
    SET_GPR_U32(ctx, 31, 0x3AC880u);
    ctx->pc = 0x3AC87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC878u;
    // 0x3ac87c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA2E0u, 0x3AC878u, 0x3AC880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC880u;
label_3ac880:
    // 0x3ac880: 0x1000000c  b           . + 4 + (0xC << 2)
label_3ac884:
    if (ctx->pc == 0x3AC884u) {
        ctx->pc = 0x3AC884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC880u;
        // 0x3ac884: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC888u;
        goto label_3ac888;
    }
    ctx->pc = 0x3AC880u;
    {
        const bool branch_taken_0x3ac880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC880u;
        // 0x3ac884: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac880) {
            ctx->pc = 0x3AC8B4u;
            goto label_3ac8b4;
        }
    }
    ctx->pc = 0x3AC888u;
label_3ac888:
    // 0x3ac888: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x3ac888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_3ac88c:
    // 0x3ac88c: 0x24a5c058  addiu       $a1, $a1, -0x3FA8
    ctx->pc = 0x3ac88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951000));
label_3ac890:
    // 0x3ac890: 0x40f809  jalr        $v0
label_3ac894:
    if (ctx->pc == 0x3AC894u) {
        ctx->pc = 0x3AC894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC890u;
        // 0x3ac894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC898u;
        goto label_3ac898;
    }
    ctx->pc = 0x3AC890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC898u);
        ctx->pc = 0x3AC894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC890u;
        // 0x3ac894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC890u, 0x3AC898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC898u;
label_3ac898:
    // 0x3ac898: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3ac89c:
    if (ctx->pc == 0x3AC89Cu) {
        ctx->pc = 0x3AC89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC898u;
        // 0x3ac89c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC8A0u;
        goto label_3ac8a0;
    }
    ctx->pc = 0x3AC898u;
    {
        const bool branch_taken_0x3ac898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC898u;
        // 0x3ac89c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac898) {
            ctx->pc = 0x3AC8B4u;
            goto label_3ac8b4;
        }
    }
    ctx->pc = 0x3AC8A0u;
label_3ac8a0:
    // 0x3ac8a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ac8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ac8a4:
    // 0x3ac8a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ac8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ac8a8:
    // 0x3ac8a8: 0xc0eab26  jal         func_3AAC98
label_3ac8ac:
    if (ctx->pc == 0x3AC8ACu) {
        ctx->pc = 0x3AC8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8A8u;
        // 0x3ac8ac: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC8B0u;
        goto label_3ac8b0;
    }
    ctx->pc = 0x3AC8A8u;
    SET_GPR_U32(ctx, 31, 0x3AC8B0u);
    ctx->pc = 0x3AC8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC8A8u;
    // 0x3ac8ac: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AAC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AAC98u, 0x3AC8A8u, 0x3AC8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC8B0u;
label_3ac8b0:
    // 0x3ac8b0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3ac8b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ac8b4:
    // 0x3ac8b4: 0xc0f0af2  jal         func_3C2BC8
label_3ac8b8:
    if (ctx->pc == 0x3AC8B8u) {
        ctx->pc = 0x3AC8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8B4u;
        // 0x3ac8b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC8BCu;
        goto label_3ac8bc;
    }
    ctx->pc = 0x3AC8B4u;
    SET_GPR_U32(ctx, 31, 0x3AC8BCu);
    ctx->pc = 0x3AC8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC8B4u;
    // 0x3ac8b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2BC8u, 0x3AC8B4u, 0x3AC8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC8BCu;
label_3ac8bc:
    // 0x3ac8bc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3ac8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3ac8c0:
    // 0x3ac8c0: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x3ac8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3ac8c4:
    // 0x3ac8c4: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3ac8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3ac8c8:
    // 0x3ac8c8: 0x40f809  jalr        $v0
label_3ac8cc:
    if (ctx->pc == 0x3AC8CCu) {
        ctx->pc = 0x3AC8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8C8u;
        // 0x3ac8cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC8D0u;
        goto label_3ac8d0;
    }
    ctx->pc = 0x3AC8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC8D0u);
        ctx->pc = 0x3AC8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8C8u;
        // 0x3ac8cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC8C8u, 0x3AC8D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC8D0u;
label_3ac8d0:
    // 0x3ac8d0: 0x12b30083  beq         $s5, $s3, . + 4 + (0x83 << 2)
label_3ac8d4:
    if (ctx->pc == 0x3AC8D4u) {
        ctx->pc = 0x3AC8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8D0u;
        // 0x3ac8d4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC8D8u;
        goto label_3ac8d8;
    }
    ctx->pc = 0x3AC8D0u;
    {
        const bool branch_taken_0x3ac8d0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 19));
        ctx->pc = 0x3AC8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8D0u;
        // 0x3ac8d4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac8d0) {
            ctx->pc = 0x3ACAE0u;
            goto label_3acae0;
        }
    }
    ctx->pc = 0x3AC8D8u;
label_3ac8d8:
    // 0x3ac8d8: 0x52600080  beql        $s3, $zero, . + 4 + (0x80 << 2)
label_3ac8dc:
    if (ctx->pc == 0x3AC8DCu) {
        ctx->pc = 0x3AC8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8D8u;
        // 0x3ac8dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC8E0u;
        goto label_3ac8e0;
    }
    ctx->pc = 0x3AC8D8u;
    {
        const bool branch_taken_0x3ac8d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac8d8) {
            ctx->pc = 0x3AC8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC8D8u;
            // 0x3ac8dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ACADCu;
            goto label_3acadc;
        }
    }
    ctx->pc = 0x3AC8E0u;
label_3ac8e0:
    // 0x3ac8e0: 0x8e640134  lw          $a0, 0x134($s3)
    ctx->pc = 0x3ac8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 308)));
label_3ac8e4:
    // 0x3ac8e4: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_3ac8e8:
    if (ctx->pc == 0x3AC8E8u) {
        ctx->pc = 0x3AC8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8E4u;
        // 0x3ac8e8: 0x26710014  addiu       $s1, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC8ECu;
        goto label_3ac8ec;
    }
    ctx->pc = 0x3AC8E4u;
    {
        const bool branch_taken_0x3ac8e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8E4u;
        // 0x3ac8e8: 0x26710014  addiu       $s1, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac8e4) {
            ctx->pc = 0x3AC93Cu;
            goto label_3ac93c;
        }
    }
    ctx->pc = 0x3AC8ECu;
label_3ac8ec:
    // 0x3ac8ec: 0xc1036d2  jal         func_40DB48
label_3ac8f0:
    if (ctx->pc == 0x3AC8F0u) {
        ctx->pc = 0x3AC8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8ECu;
        // 0x3ac8f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC8F4u;
        goto label_3ac8f4;
    }
    ctx->pc = 0x3AC8ECu;
    SET_GPR_U32(ctx, 31, 0x3AC8F4u);
    ctx->pc = 0x3AC8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC8ECu;
    // 0x3ac8f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3AC8ECu, 0x3AC8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC8F4u;
label_3ac8f4:
    // 0x3ac8f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3ac8f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ac8f8:
    // 0x3ac8f8: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x3ac8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
label_3ac8fc:
    // 0x3ac8fc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3ac900:
    if (ctx->pc == 0x3AC900u) {
        ctx->pc = 0x3AC904u;
        goto label_3ac904;
    }
    ctx->pc = 0x3AC8FCu;
    {
        const bool branch_taken_0x3ac8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac8fc) {
            ctx->pc = 0x3AC934u;
            goto label_3ac934;
        }
    }
    ctx->pc = 0x3AC904u;
label_3ac904:
    // 0x3ac904: 0x24700018  addiu       $s0, $v1, 0x18
    ctx->pc = 0x3ac904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_3ac908:
    // 0x3ac908: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3ac908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ac90c:
    // 0x3ac90c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3ac910:
    if (ctx->pc == 0x3AC910u) {
        ctx->pc = 0x3AC910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC90Cu;
        // 0x3ac910: 0x8e620130  lw          $v0, 0x130($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC914u;
        goto label_3ac914;
    }
    ctx->pc = 0x3AC90Cu;
    {
        const bool branch_taken_0x3ac90c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac90c) {
            ctx->pc = 0x3AC910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC90Cu;
            // 0x3ac910: 0x8e620130  lw          $v0, 0x130($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC924u;
            goto label_3ac924;
        }
    }
    ctx->pc = 0x3AC914u;
label_3ac914:
    // 0x3ac914: 0xc0ec620  jal         func_3B1880
label_3ac918:
    if (ctx->pc == 0x3AC918u) {
        ctx->pc = 0x3AC91Cu;
        goto label_3ac91c;
    }
    ctx->pc = 0x3AC914u;
    SET_GPR_U32(ctx, 31, 0x3AC91Cu);
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3AC914u, 0x3AC91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC91Cu;
label_3ac91c:
    // 0x3ac91c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3ac91cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3ac920:
    // 0x3ac920: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x3ac920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
label_3ac924:
    // 0x3ac924: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3ac924u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3ac928:
    // 0x3ac928: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x3ac928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ac92c:
    // 0x3ac92c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3ac930:
    if (ctx->pc == 0x3AC930u) {
        ctx->pc = 0x3AC930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC92Cu;
        // 0x3ac930: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC934u;
        goto label_3ac934;
    }
    ctx->pc = 0x3AC92Cu;
    {
        const bool branch_taken_0x3ac92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC92Cu;
        // 0x3ac930: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac92c) {
            ctx->pc = 0x3AC908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac908;
        }
    }
    ctx->pc = 0x3AC934u;
label_3ac934:
    // 0x3ac934: 0xc103684  jal         func_40DA10
label_3ac938:
    if (ctx->pc == 0x3AC938u) {
        ctx->pc = 0x3AC938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC934u;
        // 0x3ac938: 0x8e640134  lw          $a0, 0x134($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC93Cu;
        goto label_3ac93c;
    }
    ctx->pc = 0x3AC934u;
    SET_GPR_U32(ctx, 31, 0x3AC93Cu);
    ctx->pc = 0x3AC938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC934u;
    // 0x3ac938: 0x8e640134  lw          $a0, 0x134($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3AC934u, 0x3AC93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC93Cu;
label_3ac93c:
    // 0x3ac93c: 0x8e64012c  lw          $a0, 0x12C($s3)
    ctx->pc = 0x3ac93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
label_3ac940:
    // 0x3ac940: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3ac944:
    if (ctx->pc == 0x3AC944u) {
        ctx->pc = 0x3AC944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC940u;
        // 0x3ac944: 0xae600134  sw          $zero, 0x134($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC948u;
        goto label_3ac948;
    }
    ctx->pc = 0x3AC940u;
    {
        const bool branch_taken_0x3ac940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC940u;
        // 0x3ac944: 0xae600134  sw          $zero, 0x134($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac940) {
            ctx->pc = 0x3AC95Cu;
            goto label_3ac95c;
        }
    }
    ctx->pc = 0x3AC948u;
label_3ac948:
    // 0x3ac948: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3ac948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3ac94c:
    // 0x3ac94c: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x3ac94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3ac950:
    // 0x3ac950: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3ac950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3ac954:
    // 0x3ac954: 0x40f809  jalr        $v0
label_3ac958:
    if (ctx->pc == 0x3AC958u) {
        ctx->pc = 0x3AC95Cu;
        goto label_3ac95c;
    }
    ctx->pc = 0x3AC954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC95Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC954u, 0x3AC95Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC95Cu;
label_3ac95c:
    // 0x3ac95c: 0xae60012c  sw          $zero, 0x12C($s3)
    ctx->pc = 0x3ac95cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 300), GPR_U32(ctx, 0));
label_3ac960:
    // 0x3ac960: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3ac960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ac964:
    // 0x3ac964: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3ac968:
    if (ctx->pc == 0x3AC968u) {
        ctx->pc = 0x3AC968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC964u;
        // 0x3ac968: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC96Cu;
        goto label_3ac96c;
    }
    ctx->pc = 0x3AC964u;
    {
        const bool branch_taken_0x3ac964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac964) {
            ctx->pc = 0x3AC968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC964u;
            // 0x3ac968: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC978u;
            goto label_3ac978;
        }
    }
    ctx->pc = 0x3AC96Cu;
label_3ac96c:
    // 0x3ac96c: 0xc10822c  jal         func_4208B0
label_3ac970:
    if (ctx->pc == 0x3AC970u) {
        ctx->pc = 0x3AC974u;
        goto label_3ac974;
    }
    ctx->pc = 0x3AC96Cu;
    SET_GPR_U32(ctx, 31, 0x3AC974u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x3AC96Cu, 0x3AC974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC974u;
label_3ac974:
    // 0x3ac974: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3ac974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ac978:
    // 0x3ac978: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3ac97c:
    if (ctx->pc == 0x3AC97Cu) {
        ctx->pc = 0x3AC97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC978u;
        // 0x3ac97c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC980u;
        goto label_3ac980;
    }
    ctx->pc = 0x3AC978u;
    {
        const bool branch_taken_0x3ac978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC978u;
        // 0x3ac97c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac978) {
            ctx->pc = 0x3AC988u;
            goto label_3ac988;
        }
    }
    ctx->pc = 0x3AC980u;
label_3ac980:
    // 0x3ac980: 0xc10822c  jal         func_4208B0
label_3ac984:
    if (ctx->pc == 0x3AC984u) {
        ctx->pc = 0x3AC988u;
        goto label_3ac988;
    }
    ctx->pc = 0x3AC980u;
    SET_GPR_U32(ctx, 31, 0x3AC988u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x3AC980u, 0x3AC988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC988u;
label_3ac988:
    // 0x3ac988: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3ac988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3ac98c:
    // 0x3ac98c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3ac990:
    if (ctx->pc == 0x3AC990u) {
        ctx->pc = 0x3AC990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC98Cu;
        // 0x3ac990: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC994u;
        goto label_3ac994;
    }
    ctx->pc = 0x3AC98Cu;
    {
        const bool branch_taken_0x3ac98c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC98Cu;
        // 0x3ac990: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac98c) {
            ctx->pc = 0x3AC99Cu;
            goto label_3ac99c;
        }
    }
    ctx->pc = 0x3AC994u;
label_3ac994:
    // 0x3ac994: 0xc10822c  jal         func_4208B0
label_3ac998:
    if (ctx->pc == 0x3AC998u) {
        ctx->pc = 0x3AC99Cu;
        goto label_3ac99c;
    }
    ctx->pc = 0x3AC994u;
    SET_GPR_U32(ctx, 31, 0x3AC99Cu);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x3AC994u, 0x3AC99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC99Cu;
label_3ac99c:
    // 0x3ac99c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x3ac99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3ac9a0:
    // 0x3ac9a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3ac9a4:
    if (ctx->pc == 0x3AC9A4u) {
        ctx->pc = 0x3AC9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC9A0u;
        // 0x3ac9a4: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC9A8u;
        goto label_3ac9a8;
    }
    ctx->pc = 0x3AC9A0u;
    {
        const bool branch_taken_0x3ac9a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC9A0u;
        // 0x3ac9a4: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac9a0) {
            ctx->pc = 0x3AC9B0u;
            goto label_3ac9b0;
        }
    }
    ctx->pc = 0x3AC9A8u;
label_3ac9a8:
    // 0x3ac9a8: 0xc10822c  jal         func_4208B0
label_3ac9ac:
    if (ctx->pc == 0x3AC9ACu) {
        ctx->pc = 0x3AC9B0u;
        goto label_3ac9b0;
    }
    ctx->pc = 0x3AC9A8u;
    SET_GPR_U32(ctx, 31, 0x3AC9B0u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x3AC9A8u, 0x3AC9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC9B0u;
label_3ac9b0:
    // 0x3ac9b0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x3ac9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_3ac9b4:
    // 0x3ac9b4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3ac9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3ac9b8:
    // 0x3ac9b8: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x3ac9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3ac9bc:
    // 0x3ac9bc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3ac9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3ac9c0:
    // 0x3ac9c0: 0x2445ce80  addiu       $a1, $v0, -0x3180
    ctx->pc = 0x3ac9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
label_3ac9c4:
    // 0x3ac9c4: 0x8ca40508  lw          $a0, 0x508($a1)
    ctx->pc = 0x3ac9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1288)));
label_3ac9c8:
    // 0x3ac9c8: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x3ac9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_3ac9cc:
    // 0x3ac9cc: 0x40f809  jalr        $v0
label_3ac9d0:
    if (ctx->pc == 0x3AC9D0u) {
        ctx->pc = 0x3AC9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC9CCu;
        // 0x3ac9d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC9D4u;
        goto label_3ac9d4;
    }
    ctx->pc = 0x3AC9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC9D4u);
        ctx->pc = 0x3AC9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC9CCu;
        // 0x3ac9d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC9CCu, 0x3AC9D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC9D4u;
label_3ac9d4:
    // 0x3ac9d4: 0x10000041  b           . + 4 + (0x41 << 2)
label_3ac9d8:
    if (ctx->pc == 0x3AC9D8u) {
        ctx->pc = 0x3AC9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC9D4u;
        // 0x3ac9d8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC9DCu;
        goto label_3ac9dc;
    }
    ctx->pc = 0x3AC9D4u;
    {
        const bool branch_taken_0x3ac9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC9D4u;
        // 0x3ac9d8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac9d4) {
            ctx->pc = 0x3ACADCu;
            goto label_3acadc;
        }
    }
    ctx->pc = 0x3AC9DCu;
label_3ac9dc:
    // 0x3ac9dc: 0x8e640134  lw          $a0, 0x134($s3)
    ctx->pc = 0x3ac9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 308)));
label_3ac9e0:
    // 0x3ac9e0: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_3ac9e4:
    if (ctx->pc == 0x3AC9E4u) {
        ctx->pc = 0x3AC9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC9E0u;
        // 0x3ac9e4: 0x26710014  addiu       $s1, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC9E8u;
        goto label_3ac9e8;
    }
    ctx->pc = 0x3AC9E0u;
    {
        const bool branch_taken_0x3ac9e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC9E0u;
        // 0x3ac9e4: 0x26710014  addiu       $s1, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac9e0) {
            ctx->pc = 0x3ACA34u;
            goto label_3aca34;
        }
    }
    ctx->pc = 0x3AC9E8u;
label_3ac9e8:
    // 0x3ac9e8: 0xc1036d2  jal         func_40DB48
label_3ac9ec:
    if (ctx->pc == 0x3AC9ECu) {
        ctx->pc = 0x3AC9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC9E8u;
        // 0x3ac9ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC9F0u;
        goto label_3ac9f0;
    }
    ctx->pc = 0x3AC9E8u;
    SET_GPR_U32(ctx, 31, 0x3AC9F0u);
    ctx->pc = 0x3AC9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC9E8u;
    // 0x3ac9ec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3AC9E8u, 0x3AC9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC9F0u;
label_3ac9f0:
    // 0x3ac9f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3ac9f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ac9f4:
    // 0x3ac9f4: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x3ac9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
label_3ac9f8:
    // 0x3ac9f8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3ac9fc:
    if (ctx->pc == 0x3AC9FCu) {
        ctx->pc = 0x3AC9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC9F8u;
        // 0x3ac9fc: 0x24700018  addiu       $s0, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACA00u;
        goto label_3aca00;
    }
    ctx->pc = 0x3AC9F8u;
    {
        const bool branch_taken_0x3ac9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC9F8u;
        // 0x3ac9fc: 0x24700018  addiu       $s0, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac9f8) {
            ctx->pc = 0x3ACA2Cu;
            goto label_3aca2c;
        }
    }
    ctx->pc = 0x3ACA00u;
label_3aca00:
    // 0x3aca00: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3aca00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3aca04:
    // 0x3aca04: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3aca08:
    if (ctx->pc == 0x3ACA08u) {
        ctx->pc = 0x3ACA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACA04u;
        // 0x3aca08: 0x8e620130  lw          $v0, 0x130($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACA0Cu;
        goto label_3aca0c;
    }
    ctx->pc = 0x3ACA04u;
    {
        const bool branch_taken_0x3aca04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aca04) {
            ctx->pc = 0x3ACA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACA04u;
            // 0x3aca08: 0x8e620130  lw          $v0, 0x130($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ACA1Cu;
            goto label_3aca1c;
        }
    }
    ctx->pc = 0x3ACA0Cu;
label_3aca0c:
    // 0x3aca0c: 0xc0ec620  jal         func_3B1880
label_3aca10:
    if (ctx->pc == 0x3ACA10u) {
        ctx->pc = 0x3ACA14u;
        goto label_3aca14;
    }
    ctx->pc = 0x3ACA0Cu;
    SET_GPR_U32(ctx, 31, 0x3ACA14u);
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3ACA0Cu, 0x3ACA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACA14u;
label_3aca14:
    // 0x3aca14: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3aca14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3aca18:
    // 0x3aca18: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x3aca18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
label_3aca1c:
    // 0x3aca1c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3aca1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3aca20:
    // 0x3aca20: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x3aca20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3aca24:
    // 0x3aca24: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3aca28:
    if (ctx->pc == 0x3ACA28u) {
        ctx->pc = 0x3ACA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACA24u;
        // 0x3aca28: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACA2Cu;
        goto label_3aca2c;
    }
    ctx->pc = 0x3ACA24u;
    {
        const bool branch_taken_0x3aca24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ACA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACA24u;
        // 0x3aca28: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aca24) {
            ctx->pc = 0x3ACA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aca00;
        }
    }
    ctx->pc = 0x3ACA2Cu;
label_3aca2c:
    // 0x3aca2c: 0xc103684  jal         func_40DA10
label_3aca30:
    if (ctx->pc == 0x3ACA30u) {
        ctx->pc = 0x3ACA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACA2Cu;
        // 0x3aca30: 0x8e640134  lw          $a0, 0x134($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACA34u;
        goto label_3aca34;
    }
    ctx->pc = 0x3ACA2Cu;
    SET_GPR_U32(ctx, 31, 0x3ACA34u);
    ctx->pc = 0x3ACA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACA2Cu;
    // 0x3aca30: 0x8e640134  lw          $a0, 0x134($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3ACA2Cu, 0x3ACA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACA34u;
label_3aca34:
    // 0x3aca34: 0x8e64012c  lw          $a0, 0x12C($s3)
    ctx->pc = 0x3aca34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
label_3aca38:
    // 0x3aca38: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3aca3c:
    if (ctx->pc == 0x3ACA3Cu) {
        ctx->pc = 0x3ACA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACA38u;
        // 0x3aca3c: 0xae600134  sw          $zero, 0x134($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACA40u;
        goto label_3aca40;
    }
    ctx->pc = 0x3ACA38u;
    {
        const bool branch_taken_0x3aca38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACA38u;
        // 0x3aca3c: 0xae600134  sw          $zero, 0x134($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aca38) {
            ctx->pc = 0x3ACA54u;
            goto label_3aca54;
        }
    }
    ctx->pc = 0x3ACA40u;
label_3aca40:
    // 0x3aca40: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3aca40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3aca44:
    // 0x3aca44: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x3aca44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3aca48:
    // 0x3aca48: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3aca48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3aca4c:
    // 0x3aca4c: 0x40f809  jalr        $v0
label_3aca50:
    if (ctx->pc == 0x3ACA50u) {
        ctx->pc = 0x3ACA54u;
        goto label_3aca54;
    }
    ctx->pc = 0x3ACA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ACA54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACA4Cu, 0x3ACA54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ACA54u;
label_3aca54:
    // 0x3aca54: 0xae60012c  sw          $zero, 0x12C($s3)
    ctx->pc = 0x3aca54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 300), GPR_U32(ctx, 0));
label_3aca58:
    // 0x3aca58: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3aca58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3aca5c:
    // 0x3aca5c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3aca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3aca60:
    // 0x3aca60: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3aca64:
    if (ctx->pc == 0x3ACA64u) {
        ctx->pc = 0x3ACA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACA60u;
        // 0x3aca64: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACA68u;
        goto label_3aca68;
    }
    ctx->pc = 0x3ACA60u;
    {
        const bool branch_taken_0x3aca60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aca60) {
            ctx->pc = 0x3ACA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACA60u;
            // 0x3aca64: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ACA78u;
            goto label_3aca78;
        }
    }
    ctx->pc = 0x3ACA68u;
label_3aca68:
    // 0x3aca68: 0xc10822c  jal         func_4208B0
label_3aca6c:
    if (ctx->pc == 0x3ACA6Cu) {
        ctx->pc = 0x3ACA70u;
        goto label_3aca70;
    }
    ctx->pc = 0x3ACA68u;
    SET_GPR_U32(ctx, 31, 0x3ACA70u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x3ACA68u, 0x3ACA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACA70u;
label_3aca70:
    // 0x3aca70: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3aca70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3aca74:
    // 0x3aca74: 0x0  nop
    ctx->pc = 0x3aca74u;
    // NOP
label_3aca78:
    // 0x3aca78: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3aca78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3aca7c:
    // 0x3aca7c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3aca80:
    if (ctx->pc == 0x3ACA80u) {
        ctx->pc = 0x3ACA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACA7Cu;
        // 0x3aca80: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACA84u;
        goto label_3aca84;
    }
    ctx->pc = 0x3ACA7Cu;
    {
        const bool branch_taken_0x3aca7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aca7c) {
            ctx->pc = 0x3ACA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACA7Cu;
            // 0x3aca80: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ACA90u;
            goto label_3aca90;
        }
    }
    ctx->pc = 0x3ACA84u;
label_3aca84:
    // 0x3aca84: 0xc10822c  jal         func_4208B0
label_3aca88:
    if (ctx->pc == 0x3ACA88u) {
        ctx->pc = 0x3ACA8Cu;
        goto label_3aca8c;
    }
    ctx->pc = 0x3ACA84u;
    SET_GPR_U32(ctx, 31, 0x3ACA8Cu);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x3ACA84u, 0x3ACA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACA8Cu;
label_3aca8c:
    // 0x3aca8c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3aca8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3aca90:
    // 0x3aca90: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3aca94:
    if (ctx->pc == 0x3ACA94u) {
        ctx->pc = 0x3ACA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACA90u;
        // 0x3aca94: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACA98u;
        goto label_3aca98;
    }
    ctx->pc = 0x3ACA90u;
    {
        const bool branch_taken_0x3aca90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACA90u;
        // 0x3aca94: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aca90) {
            ctx->pc = 0x3ACAA0u;
            goto label_3acaa0;
        }
    }
    ctx->pc = 0x3ACA98u;
label_3aca98:
    // 0x3aca98: 0xc10822c  jal         func_4208B0
label_3aca9c:
    if (ctx->pc == 0x3ACA9Cu) {
        ctx->pc = 0x3ACAA0u;
        goto label_3acaa0;
    }
    ctx->pc = 0x3ACA98u;
    SET_GPR_U32(ctx, 31, 0x3ACAA0u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x3ACA98u, 0x3ACAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACAA0u;
label_3acaa0:
    // 0x3acaa0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x3acaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3acaa4:
    // 0x3acaa4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3acaa8:
    if (ctx->pc == 0x3ACAA8u) {
        ctx->pc = 0x3ACAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACAA4u;
        // 0x3acaa8: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACAACu;
        goto label_3acaac;
    }
    ctx->pc = 0x3ACAA4u;
    {
        const bool branch_taken_0x3acaa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACAA4u;
        // 0x3acaa8: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acaa4) {
            ctx->pc = 0x3ACAB4u;
            goto label_3acab4;
        }
    }
    ctx->pc = 0x3ACAACu;
label_3acaac:
    // 0x3acaac: 0xc10822c  jal         func_4208B0
label_3acab0:
    if (ctx->pc == 0x3ACAB0u) {
        ctx->pc = 0x3ACAB4u;
        goto label_3acab4;
    }
    ctx->pc = 0x3ACAACu;
    SET_GPR_U32(ctx, 31, 0x3ACAB4u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x3ACAACu, 0x3ACAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACAB4u;
label_3acab4:
    // 0x3acab4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x3acab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_3acab8:
    // 0x3acab8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3acab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3acabc:
    // 0x3acabc: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x3acabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3acac0:
    // 0x3acac0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3acac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3acac4:
    // 0x3acac4: 0x2445ce80  addiu       $a1, $v0, -0x3180
    ctx->pc = 0x3acac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
label_3acac8:
    // 0x3acac8: 0x8ca40508  lw          $a0, 0x508($a1)
    ctx->pc = 0x3acac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1288)));
label_3acacc:
    // 0x3acacc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3acaccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3acad0:
    // 0x3acad0: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x3acad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_3acad4:
    // 0x3acad4: 0x40f809  jalr        $v0
label_3acad8:
    if (ctx->pc == 0x3ACAD8u) {
        ctx->pc = 0x3ACAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACAD4u;
        // 0x3acad8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACADCu;
        goto label_3acadc;
    }
    ctx->pc = 0x3ACAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ACADCu);
        ctx->pc = 0x3ACAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACAD4u;
        // 0x3acad8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACAD4u, 0x3ACADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ACADCu;
label_3acadc:
    // 0x3acadc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3acadcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3acae0:
    // 0x3acae0: 0x7bb00210  lq          $s0, 0x210($sp)
    ctx->pc = 0x3acae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_3acae4:
    // 0x3acae4: 0x7bb10200  lq          $s1, 0x200($sp)
    ctx->pc = 0x3acae4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_3acae8:
    // 0x3acae8: 0x7bb201f0  lq          $s2, 0x1F0($sp)
    ctx->pc = 0x3acae8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_3acaec:
    // 0x3acaec: 0x7bb301e0  lq          $s3, 0x1E0($sp)
    ctx->pc = 0x3acaecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_3acaf0:
    // 0x3acaf0: 0x7bb401d0  lq          $s4, 0x1D0($sp)
    ctx->pc = 0x3acaf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_3acaf4:
    // 0x3acaf4: 0x7bb501c0  lq          $s5, 0x1C0($sp)
    ctx->pc = 0x3acaf4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_3acaf8:
    // 0x3acaf8: 0x7bb601b0  lq          $s6, 0x1B0($sp)
    ctx->pc = 0x3acaf8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_3acafc:
    // 0x3acafc: 0x7bb701a0  lq          $s7, 0x1A0($sp)
    ctx->pc = 0x3acafcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_3acb00:
    // 0x3acb00: 0x7bbe0190  lq          $fp, 0x190($sp)
    ctx->pc = 0x3acb00u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_3acb04:
    // 0x3acb04: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x3acb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_3acb08:
    // 0x3acb08: 0x3e00008  jr          $ra
label_3acb0c:
    if (ctx->pc == 0x3ACB0Cu) {
        ctx->pc = 0x3ACB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB08u;
        // 0x3acb0c: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACB10u;
        goto label_fallthrough_0x3acb08;
    }
    ctx->pc = 0x3ACB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACB08u;
        // 0x3acb0c: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3acb08:
    ctx->pc = 0x3ACB10u;
}
