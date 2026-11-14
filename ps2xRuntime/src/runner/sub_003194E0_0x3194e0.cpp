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

// Function: sub_003194E0
// Address: 0x3194e0 - 0x319b40
void sub_003194E0_0x3194e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003194E0_0x3194e0");
#endif

    switch (ctx->pc) {
        case 0x3194e0u: goto label_3194e0;
        case 0x3194e4u: goto label_3194e4;
        case 0x3194e8u: goto label_3194e8;
        case 0x3194ecu: goto label_3194ec;
        case 0x3194f0u: goto label_3194f0;
        case 0x3194f4u: goto label_3194f4;
        case 0x3194f8u: goto label_3194f8;
        case 0x3194fcu: goto label_3194fc;
        case 0x319500u: goto label_319500;
        case 0x319504u: goto label_319504;
        case 0x319508u: goto label_319508;
        case 0x31950cu: goto label_31950c;
        case 0x319510u: goto label_319510;
        case 0x319514u: goto label_319514;
        case 0x319518u: goto label_319518;
        case 0x31951cu: goto label_31951c;
        case 0x319520u: goto label_319520;
        case 0x319524u: goto label_319524;
        case 0x319528u: goto label_319528;
        case 0x31952cu: goto label_31952c;
        case 0x319530u: goto label_319530;
        case 0x319534u: goto label_319534;
        case 0x319538u: goto label_319538;
        case 0x31953cu: goto label_31953c;
        case 0x319540u: goto label_319540;
        case 0x319544u: goto label_319544;
        case 0x319548u: goto label_319548;
        case 0x31954cu: goto label_31954c;
        case 0x319550u: goto label_319550;
        case 0x319554u: goto label_319554;
        case 0x319558u: goto label_319558;
        case 0x31955cu: goto label_31955c;
        case 0x319560u: goto label_319560;
        case 0x319564u: goto label_319564;
        case 0x319568u: goto label_319568;
        case 0x31956cu: goto label_31956c;
        case 0x319570u: goto label_319570;
        case 0x319574u: goto label_319574;
        case 0x319578u: goto label_319578;
        case 0x31957cu: goto label_31957c;
        case 0x319580u: goto label_319580;
        case 0x319584u: goto label_319584;
        case 0x319588u: goto label_319588;
        case 0x31958cu: goto label_31958c;
        case 0x319590u: goto label_319590;
        case 0x319594u: goto label_319594;
        case 0x319598u: goto label_319598;
        case 0x31959cu: goto label_31959c;
        case 0x3195a0u: goto label_3195a0;
        case 0x3195a4u: goto label_3195a4;
        case 0x3195a8u: goto label_3195a8;
        case 0x3195acu: goto label_3195ac;
        case 0x3195b0u: goto label_3195b0;
        case 0x3195b4u: goto label_3195b4;
        case 0x3195b8u: goto label_3195b8;
        case 0x3195bcu: goto label_3195bc;
        case 0x3195c0u: goto label_3195c0;
        case 0x3195c4u: goto label_3195c4;
        case 0x3195c8u: goto label_3195c8;
        case 0x3195ccu: goto label_3195cc;
        case 0x3195d0u: goto label_3195d0;
        case 0x3195d4u: goto label_3195d4;
        case 0x3195d8u: goto label_3195d8;
        case 0x3195dcu: goto label_3195dc;
        case 0x3195e0u: goto label_3195e0;
        case 0x3195e4u: goto label_3195e4;
        case 0x3195e8u: goto label_3195e8;
        case 0x3195ecu: goto label_3195ec;
        case 0x3195f0u: goto label_3195f0;
        case 0x3195f4u: goto label_3195f4;
        case 0x3195f8u: goto label_3195f8;
        case 0x3195fcu: goto label_3195fc;
        case 0x319600u: goto label_319600;
        case 0x319604u: goto label_319604;
        case 0x319608u: goto label_319608;
        case 0x31960cu: goto label_31960c;
        case 0x319610u: goto label_319610;
        case 0x319614u: goto label_319614;
        case 0x319618u: goto label_319618;
        case 0x31961cu: goto label_31961c;
        case 0x319620u: goto label_319620;
        case 0x319624u: goto label_319624;
        case 0x319628u: goto label_319628;
        case 0x31962cu: goto label_31962c;
        case 0x319630u: goto label_319630;
        case 0x319634u: goto label_319634;
        case 0x319638u: goto label_319638;
        case 0x31963cu: goto label_31963c;
        case 0x319640u: goto label_319640;
        case 0x319644u: goto label_319644;
        case 0x319648u: goto label_319648;
        case 0x31964cu: goto label_31964c;
        case 0x319650u: goto label_319650;
        case 0x319654u: goto label_319654;
        case 0x319658u: goto label_319658;
        case 0x31965cu: goto label_31965c;
        case 0x319660u: goto label_319660;
        case 0x319664u: goto label_319664;
        case 0x319668u: goto label_319668;
        case 0x31966cu: goto label_31966c;
        case 0x319670u: goto label_319670;
        case 0x319674u: goto label_319674;
        case 0x319678u: goto label_319678;
        case 0x31967cu: goto label_31967c;
        case 0x319680u: goto label_319680;
        case 0x319684u: goto label_319684;
        case 0x319688u: goto label_319688;
        case 0x31968cu: goto label_31968c;
        case 0x319690u: goto label_319690;
        case 0x319694u: goto label_319694;
        case 0x319698u: goto label_319698;
        case 0x31969cu: goto label_31969c;
        case 0x3196a0u: goto label_3196a0;
        case 0x3196a4u: goto label_3196a4;
        case 0x3196a8u: goto label_3196a8;
        case 0x3196acu: goto label_3196ac;
        case 0x3196b0u: goto label_3196b0;
        case 0x3196b4u: goto label_3196b4;
        case 0x3196b8u: goto label_3196b8;
        case 0x3196bcu: goto label_3196bc;
        case 0x3196c0u: goto label_3196c0;
        case 0x3196c4u: goto label_3196c4;
        case 0x3196c8u: goto label_3196c8;
        case 0x3196ccu: goto label_3196cc;
        case 0x3196d0u: goto label_3196d0;
        case 0x3196d4u: goto label_3196d4;
        case 0x3196d8u: goto label_3196d8;
        case 0x3196dcu: goto label_3196dc;
        case 0x3196e0u: goto label_3196e0;
        case 0x3196e4u: goto label_3196e4;
        case 0x3196e8u: goto label_3196e8;
        case 0x3196ecu: goto label_3196ec;
        case 0x3196f0u: goto label_3196f0;
        case 0x3196f4u: goto label_3196f4;
        case 0x3196f8u: goto label_3196f8;
        case 0x3196fcu: goto label_3196fc;
        case 0x319700u: goto label_319700;
        case 0x319704u: goto label_319704;
        case 0x319708u: goto label_319708;
        case 0x31970cu: goto label_31970c;
        case 0x319710u: goto label_319710;
        case 0x319714u: goto label_319714;
        case 0x319718u: goto label_319718;
        case 0x31971cu: goto label_31971c;
        case 0x319720u: goto label_319720;
        case 0x319724u: goto label_319724;
        case 0x319728u: goto label_319728;
        case 0x31972cu: goto label_31972c;
        case 0x319730u: goto label_319730;
        case 0x319734u: goto label_319734;
        case 0x319738u: goto label_319738;
        case 0x31973cu: goto label_31973c;
        case 0x319740u: goto label_319740;
        case 0x319744u: goto label_319744;
        case 0x319748u: goto label_319748;
        case 0x31974cu: goto label_31974c;
        case 0x319750u: goto label_319750;
        case 0x319754u: goto label_319754;
        case 0x319758u: goto label_319758;
        case 0x31975cu: goto label_31975c;
        case 0x319760u: goto label_319760;
        case 0x319764u: goto label_319764;
        case 0x319768u: goto label_319768;
        case 0x31976cu: goto label_31976c;
        case 0x319770u: goto label_319770;
        case 0x319774u: goto label_319774;
        case 0x319778u: goto label_319778;
        case 0x31977cu: goto label_31977c;
        case 0x319780u: goto label_319780;
        case 0x319784u: goto label_319784;
        case 0x319788u: goto label_319788;
        case 0x31978cu: goto label_31978c;
        case 0x319790u: goto label_319790;
        case 0x319794u: goto label_319794;
        case 0x319798u: goto label_319798;
        case 0x31979cu: goto label_31979c;
        case 0x3197a0u: goto label_3197a0;
        case 0x3197a4u: goto label_3197a4;
        case 0x3197a8u: goto label_3197a8;
        case 0x3197acu: goto label_3197ac;
        case 0x3197b0u: goto label_3197b0;
        case 0x3197b4u: goto label_3197b4;
        case 0x3197b8u: goto label_3197b8;
        case 0x3197bcu: goto label_3197bc;
        case 0x3197c0u: goto label_3197c0;
        case 0x3197c4u: goto label_3197c4;
        case 0x3197c8u: goto label_3197c8;
        case 0x3197ccu: goto label_3197cc;
        case 0x3197d0u: goto label_3197d0;
        case 0x3197d4u: goto label_3197d4;
        case 0x3197d8u: goto label_3197d8;
        case 0x3197dcu: goto label_3197dc;
        case 0x3197e0u: goto label_3197e0;
        case 0x3197e4u: goto label_3197e4;
        case 0x3197e8u: goto label_3197e8;
        case 0x3197ecu: goto label_3197ec;
        case 0x3197f0u: goto label_3197f0;
        case 0x3197f4u: goto label_3197f4;
        case 0x3197f8u: goto label_3197f8;
        case 0x3197fcu: goto label_3197fc;
        case 0x319800u: goto label_319800;
        case 0x319804u: goto label_319804;
        case 0x319808u: goto label_319808;
        case 0x31980cu: goto label_31980c;
        case 0x319810u: goto label_319810;
        case 0x319814u: goto label_319814;
        case 0x319818u: goto label_319818;
        case 0x31981cu: goto label_31981c;
        case 0x319820u: goto label_319820;
        case 0x319824u: goto label_319824;
        case 0x319828u: goto label_319828;
        case 0x31982cu: goto label_31982c;
        case 0x319830u: goto label_319830;
        case 0x319834u: goto label_319834;
        case 0x319838u: goto label_319838;
        case 0x31983cu: goto label_31983c;
        case 0x319840u: goto label_319840;
        case 0x319844u: goto label_319844;
        case 0x319848u: goto label_319848;
        case 0x31984cu: goto label_31984c;
        case 0x319850u: goto label_319850;
        case 0x319854u: goto label_319854;
        case 0x319858u: goto label_319858;
        case 0x31985cu: goto label_31985c;
        case 0x319860u: goto label_319860;
        case 0x319864u: goto label_319864;
        case 0x319868u: goto label_319868;
        case 0x31986cu: goto label_31986c;
        case 0x319870u: goto label_319870;
        case 0x319874u: goto label_319874;
        case 0x319878u: goto label_319878;
        case 0x31987cu: goto label_31987c;
        case 0x319880u: goto label_319880;
        case 0x319884u: goto label_319884;
        case 0x319888u: goto label_319888;
        case 0x31988cu: goto label_31988c;
        case 0x319890u: goto label_319890;
        case 0x319894u: goto label_319894;
        case 0x319898u: goto label_319898;
        case 0x31989cu: goto label_31989c;
        case 0x3198a0u: goto label_3198a0;
        case 0x3198a4u: goto label_3198a4;
        case 0x3198a8u: goto label_3198a8;
        case 0x3198acu: goto label_3198ac;
        case 0x3198b0u: goto label_3198b0;
        case 0x3198b4u: goto label_3198b4;
        case 0x3198b8u: goto label_3198b8;
        case 0x3198bcu: goto label_3198bc;
        case 0x3198c0u: goto label_3198c0;
        case 0x3198c4u: goto label_3198c4;
        case 0x3198c8u: goto label_3198c8;
        case 0x3198ccu: goto label_3198cc;
        case 0x3198d0u: goto label_3198d0;
        case 0x3198d4u: goto label_3198d4;
        case 0x3198d8u: goto label_3198d8;
        case 0x3198dcu: goto label_3198dc;
        case 0x3198e0u: goto label_3198e0;
        case 0x3198e4u: goto label_3198e4;
        case 0x3198e8u: goto label_3198e8;
        case 0x3198ecu: goto label_3198ec;
        case 0x3198f0u: goto label_3198f0;
        case 0x3198f4u: goto label_3198f4;
        case 0x3198f8u: goto label_3198f8;
        case 0x3198fcu: goto label_3198fc;
        case 0x319900u: goto label_319900;
        case 0x319904u: goto label_319904;
        case 0x319908u: goto label_319908;
        case 0x31990cu: goto label_31990c;
        case 0x319910u: goto label_319910;
        case 0x319914u: goto label_319914;
        case 0x319918u: goto label_319918;
        case 0x31991cu: goto label_31991c;
        case 0x319920u: goto label_319920;
        case 0x319924u: goto label_319924;
        case 0x319928u: goto label_319928;
        case 0x31992cu: goto label_31992c;
        case 0x319930u: goto label_319930;
        case 0x319934u: goto label_319934;
        case 0x319938u: goto label_319938;
        case 0x31993cu: goto label_31993c;
        case 0x319940u: goto label_319940;
        case 0x319944u: goto label_319944;
        case 0x319948u: goto label_319948;
        case 0x31994cu: goto label_31994c;
        case 0x319950u: goto label_319950;
        case 0x319954u: goto label_319954;
        case 0x319958u: goto label_319958;
        case 0x31995cu: goto label_31995c;
        case 0x319960u: goto label_319960;
        case 0x319964u: goto label_319964;
        case 0x319968u: goto label_319968;
        case 0x31996cu: goto label_31996c;
        case 0x319970u: goto label_319970;
        case 0x319974u: goto label_319974;
        case 0x319978u: goto label_319978;
        case 0x31997cu: goto label_31997c;
        case 0x319980u: goto label_319980;
        case 0x319984u: goto label_319984;
        case 0x319988u: goto label_319988;
        case 0x31998cu: goto label_31998c;
        case 0x319990u: goto label_319990;
        case 0x319994u: goto label_319994;
        case 0x319998u: goto label_319998;
        case 0x31999cu: goto label_31999c;
        case 0x3199a0u: goto label_3199a0;
        case 0x3199a4u: goto label_3199a4;
        case 0x3199a8u: goto label_3199a8;
        case 0x3199acu: goto label_3199ac;
        case 0x3199b0u: goto label_3199b0;
        case 0x3199b4u: goto label_3199b4;
        case 0x3199b8u: goto label_3199b8;
        case 0x3199bcu: goto label_3199bc;
        case 0x3199c0u: goto label_3199c0;
        case 0x3199c4u: goto label_3199c4;
        case 0x3199c8u: goto label_3199c8;
        case 0x3199ccu: goto label_3199cc;
        case 0x3199d0u: goto label_3199d0;
        case 0x3199d4u: goto label_3199d4;
        case 0x3199d8u: goto label_3199d8;
        case 0x3199dcu: goto label_3199dc;
        case 0x3199e0u: goto label_3199e0;
        case 0x3199e4u: goto label_3199e4;
        case 0x3199e8u: goto label_3199e8;
        case 0x3199ecu: goto label_3199ec;
        case 0x3199f0u: goto label_3199f0;
        case 0x3199f4u: goto label_3199f4;
        case 0x3199f8u: goto label_3199f8;
        case 0x3199fcu: goto label_3199fc;
        case 0x319a00u: goto label_319a00;
        case 0x319a04u: goto label_319a04;
        case 0x319a08u: goto label_319a08;
        case 0x319a0cu: goto label_319a0c;
        case 0x319a10u: goto label_319a10;
        case 0x319a14u: goto label_319a14;
        case 0x319a18u: goto label_319a18;
        case 0x319a1cu: goto label_319a1c;
        case 0x319a20u: goto label_319a20;
        case 0x319a24u: goto label_319a24;
        case 0x319a28u: goto label_319a28;
        case 0x319a2cu: goto label_319a2c;
        case 0x319a30u: goto label_319a30;
        case 0x319a34u: goto label_319a34;
        case 0x319a38u: goto label_319a38;
        case 0x319a3cu: goto label_319a3c;
        case 0x319a40u: goto label_319a40;
        case 0x319a44u: goto label_319a44;
        case 0x319a48u: goto label_319a48;
        case 0x319a4cu: goto label_319a4c;
        case 0x319a50u: goto label_319a50;
        case 0x319a54u: goto label_319a54;
        case 0x319a58u: goto label_319a58;
        case 0x319a5cu: goto label_319a5c;
        case 0x319a60u: goto label_319a60;
        case 0x319a64u: goto label_319a64;
        case 0x319a68u: goto label_319a68;
        case 0x319a6cu: goto label_319a6c;
        case 0x319a70u: goto label_319a70;
        case 0x319a74u: goto label_319a74;
        case 0x319a78u: goto label_319a78;
        case 0x319a7cu: goto label_319a7c;
        case 0x319a80u: goto label_319a80;
        case 0x319a84u: goto label_319a84;
        case 0x319a88u: goto label_319a88;
        case 0x319a8cu: goto label_319a8c;
        case 0x319a90u: goto label_319a90;
        case 0x319a94u: goto label_319a94;
        case 0x319a98u: goto label_319a98;
        case 0x319a9cu: goto label_319a9c;
        case 0x319aa0u: goto label_319aa0;
        case 0x319aa4u: goto label_319aa4;
        case 0x319aa8u: goto label_319aa8;
        case 0x319aacu: goto label_319aac;
        case 0x319ab0u: goto label_319ab0;
        case 0x319ab4u: goto label_319ab4;
        case 0x319ab8u: goto label_319ab8;
        case 0x319abcu: goto label_319abc;
        case 0x319ac0u: goto label_319ac0;
        case 0x319ac4u: goto label_319ac4;
        case 0x319ac8u: goto label_319ac8;
        case 0x319accu: goto label_319acc;
        case 0x319ad0u: goto label_319ad0;
        case 0x319ad4u: goto label_319ad4;
        case 0x319ad8u: goto label_319ad8;
        case 0x319adcu: goto label_319adc;
        case 0x319ae0u: goto label_319ae0;
        case 0x319ae4u: goto label_319ae4;
        case 0x319ae8u: goto label_319ae8;
        case 0x319aecu: goto label_319aec;
        case 0x319af0u: goto label_319af0;
        case 0x319af4u: goto label_319af4;
        case 0x319af8u: goto label_319af8;
        case 0x319afcu: goto label_319afc;
        case 0x319b00u: goto label_319b00;
        case 0x319b04u: goto label_319b04;
        case 0x319b08u: goto label_319b08;
        case 0x319b0cu: goto label_319b0c;
        case 0x319b10u: goto label_319b10;
        case 0x319b14u: goto label_319b14;
        case 0x319b18u: goto label_319b18;
        case 0x319b1cu: goto label_319b1c;
        case 0x319b20u: goto label_319b20;
        case 0x319b24u: goto label_319b24;
        case 0x319b28u: goto label_319b28;
        case 0x319b2cu: goto label_319b2c;
        case 0x319b30u: goto label_319b30;
        case 0x319b34u: goto label_319b34;
        case 0x319b38u: goto label_319b38;
        case 0x319b3cu: goto label_319b3c;
        default: break;
    }

    ctx->pc = 0x3194e0u;

label_3194e0:
    // 0x3194e0: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x3194e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_3194e4:
    // 0x3194e4: 0x8f82a5b0  lw          $v0, -0x5A50($gp)
    ctx->pc = 0x3194e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944176)));
label_3194e8:
    // 0x3194e8: 0x7fb50220  sq          $s5, 0x220($sp)
    ctx->pc = 0x3194e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 21));
label_3194ec:
    // 0x3194ec: 0x7fb00270  sq          $s0, 0x270($sp)
    ctx->pc = 0x3194ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 16));
label_3194f0:
    // 0x3194f0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3194f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3194f4:
    // 0x3194f4: 0x7fb10260  sq          $s1, 0x260($sp)
    ctx->pc = 0x3194f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 17));
label_3194f8:
    // 0x3194f8: 0x7fb20250  sq          $s2, 0x250($sp)
    ctx->pc = 0x3194f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 18));
label_3194fc:
    // 0x3194fc: 0x7fb30240  sq          $s3, 0x240($sp)
    ctx->pc = 0x3194fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 19));
label_319500:
    // 0x319500: 0x7fb40230  sq          $s4, 0x230($sp)
    ctx->pc = 0x319500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 20));
label_319504:
    // 0x319504: 0x7fb70200  sq          $s7, 0x200($sp)
    ctx->pc = 0x319504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 23));
label_319508:
    // 0x319508: 0x7fbe01f0  sq          $fp, 0x1F0($sp)
    ctx->pc = 0x319508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 30));
label_31950c:
    // 0x31950c: 0xffbf01e0  sd          $ra, 0x1E0($sp)
    ctx->pc = 0x31950cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 31));
label_319510:
    // 0x319510: 0xe7b50288  swc1        $f21, 0x288($sp)
    ctx->pc = 0x319510u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_319514:
    // 0x319514: 0xe7b40280  swc1        $f20, 0x280($sp)
    ctx->pc = 0x319514u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_319518:
    // 0x319518: 0xafa601b0  sw          $a2, 0x1B0($sp)
    ctx->pc = 0x319518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 6));
label_31951c:
    // 0x31951c: 0xafa701b4  sw          $a3, 0x1B4($sp)
    ctx->pc = 0x31951cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 7));
label_319520:
    // 0x319520: 0x7fb60210  sq          $s6, 0x210($sp)
    ctx->pc = 0x319520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 22));
label_319524:
    // 0x319524: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x319524u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_319528:
    // 0x319528: 0x12c00173  beqz        $s6, . + 4 + (0x173 << 2)
label_31952c:
    if (ctx->pc == 0x31952Cu) {
        ctx->pc = 0x31952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319528u;
        // 0x31952c: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319530u;
        goto label_319530;
    }
    ctx->pc = 0x319528u;
    {
        const bool branch_taken_0x319528 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x31952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319528u;
        // 0x31952c: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319528) {
            ctx->pc = 0x319AF8u;
            goto label_319af8;
        }
    }
    ctx->pc = 0x319530u;
label_319530:
    // 0x319530: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x319530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_319534:
    // 0x319534: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x319534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_319538:
    // 0x319538: 0xafa401b8  sw          $a0, 0x1B8($sp)
    ctx->pc = 0x319538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 4));
label_31953c:
    // 0x31953c: 0xc6c10010  lwc1        $f1, 0x10($s6)
    ctx->pc = 0x31953cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319540:
    // 0x319540: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x319540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319544:
    // 0x319544: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x319544u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319548:
    // 0x319548: 0x0  nop
    ctx->pc = 0x319548u;
    // NOP
label_31954c:
    // 0x31954c: 0x4500006e  bc1f        . + 4 + (0x6E << 2)
label_319550:
    if (ctx->pc == 0x319550u) {
        ctx->pc = 0x319550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31954Cu;
        // 0x319550: 0x8c490014  lw          $t1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319554u;
        goto label_319554;
    }
    ctx->pc = 0x31954Cu;
    {
        const bool branch_taken_0x31954c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x319550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31954Cu;
        // 0x319550: 0x8c490014  lw          $t1, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31954c) {
            ctx->pc = 0x319708u;
            goto label_319708;
        }
    }
    ctx->pc = 0x319554u;
label_319554:
    // 0x319554: 0xc6c10014  lwc1        $f1, 0x14($s6)
    ctx->pc = 0x319554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319558:
    // 0x319558: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x319558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31955c:
    // 0x31955c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31955cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319560:
    // 0x319560: 0x0  nop
    ctx->pc = 0x319560u;
    // NOP
label_319564:
    // 0x319564: 0x45020069  bc1fl       . + 4 + (0x69 << 2)
label_319568:
    if (ctx->pc == 0x319568u) {
        ctx->pc = 0x319568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319564u;
        // 0x319568: 0x27a2003c  addiu       $v0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31956Cu;
        goto label_31956c;
    }
    ctx->pc = 0x319564u;
    {
        const bool branch_taken_0x319564 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x319564) {
            ctx->pc = 0x319568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319564u;
            // 0x319568: 0x27a2003c  addiu       $v0, $sp, 0x3C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31970Cu;
            goto label_31970c;
        }
    }
    ctx->pc = 0x31956Cu;
label_31956c:
    // 0x31956c: 0xc6c10018  lwc1        $f1, 0x18($s6)
    ctx->pc = 0x31956cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319570:
    // 0x319570: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x319570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319574:
    // 0x319574: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x319574u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319578:
    // 0x319578: 0x0  nop
    ctx->pc = 0x319578u;
    // NOP
label_31957c:
    // 0x31957c: 0x45000063  bc1f        . + 4 + (0x63 << 2)
label_319580:
    if (ctx->pc == 0x319580u) {
        ctx->pc = 0x319580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31957Cu;
        // 0x319580: 0x27a2003c  addiu       $v0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319584u;
        goto label_319584;
    }
    ctx->pc = 0x31957Cu;
    {
        const bool branch_taken_0x31957c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x319580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31957Cu;
        // 0x319580: 0x27a2003c  addiu       $v0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31957c) {
            ctx->pc = 0x31970Cu;
            goto label_31970c;
        }
    }
    ctx->pc = 0x319584u;
label_319584:
    // 0x319584: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x319584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319588:
    // 0x319588: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x319588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31958c:
    // 0x31958c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31958cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319590:
    // 0x319590: 0x4500005e  bc1f        . + 4 + (0x5E << 2)
label_319594:
    if (ctx->pc == 0x319594u) {
        ctx->pc = 0x319598u;
        goto label_319598;
    }
    ctx->pc = 0x319590u;
    {
        const bool branch_taken_0x319590 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x319590) {
            ctx->pc = 0x31970Cu;
            goto label_31970c;
        }
    }
    ctx->pc = 0x319598u;
label_319598:
    // 0x319598: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x319598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31959c:
    // 0x31959c: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x31959cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3195a0:
    // 0x3195a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3195a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3195a4:
    // 0x3195a4: 0x0  nop
    ctx->pc = 0x3195a4u;
    // NOP
label_3195a8:
    // 0x3195a8: 0x45020059  bc1fl       . + 4 + (0x59 << 2)
label_3195ac:
    if (ctx->pc == 0x3195ACu) {
        ctx->pc = 0x3195ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3195A8u;
        // 0x3195ac: 0xafa20144  sw          $v0, 0x144($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3195B0u;
        goto label_3195b0;
    }
    ctx->pc = 0x3195A8u;
    {
        const bool branch_taken_0x3195a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3195a8) {
            ctx->pc = 0x3195ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3195A8u;
            // 0x3195ac: 0xafa20144  sw          $v0, 0x144($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319710u;
            goto label_319710;
        }
    }
    ctx->pc = 0x3195B0u;
label_3195b0:
    // 0x3195b0: 0xc6c1000c  lwc1        $f1, 0xC($s6)
    ctx->pc = 0x3195b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3195b4:
    // 0x3195b4: 0xc6a00014  lwc1        $f0, 0x14($s5)
    ctx->pc = 0x3195b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3195b8:
    // 0x3195b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3195b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3195bc:
    // 0x3195bc: 0x0  nop
    ctx->pc = 0x3195bcu;
    // NOP
label_3195c0:
    // 0x3195c0: 0x45000051  bc1f        . + 4 + (0x51 << 2)
label_3195c4:
    if (ctx->pc == 0x3195C4u) {
        ctx->pc = 0x3195C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3195C0u;
        // 0x3195c4: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3195C8u;
        goto label_3195c8;
    }
    ctx->pc = 0x3195C0u;
    {
        const bool branch_taken_0x3195c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3195C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3195C0u;
        // 0x3195c4: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3195c0) {
            ctx->pc = 0x319708u;
            goto label_319708;
        }
    }
    ctx->pc = 0x3195C8u;
label_3195c8:
    // 0x3195c8: 0xa7a00036  sh          $zero, 0x36($sp)
    ctx->pc = 0x3195c8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 54), (uint16_t)GPR_U32(ctx, 0));
label_3195cc:
    // 0x3195cc: 0xa3a20035  sb          $v0, 0x35($sp)
    ctx->pc = 0x3195ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 53), (uint8_t)GPR_U32(ctx, 2));
label_3195d0:
    // 0x3195d0: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x3195d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_3195d4:
    // 0x3195d4: 0x96c2001e  lhu         $v0, 0x1E($s6)
    ctx->pc = 0x3195d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 30)));
label_3195d8:
    // 0x3195d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3195dc:
    if (ctx->pc == 0x3195DCu) {
        ctx->pc = 0x3195E0u;
        goto label_3195e0;
    }
    ctx->pc = 0x3195D8u;
    {
        const bool branch_taken_0x3195d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3195d8) {
            ctx->pc = 0x3195E8u;
            goto label_3195e8;
        }
    }
    ctx->pc = 0x3195E0u;
label_3195e0:
    // 0x3195e0: 0x92c2001c  lbu         $v0, 0x1C($s6)
    ctx->pc = 0x3195e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 28)));
label_3195e4:
    // 0x3195e4: 0xa3a20035  sb          $v0, 0x35($sp)
    ctx->pc = 0x3195e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 53), (uint8_t)GPR_U32(ctx, 2));
label_3195e8:
    // 0x3195e8: 0x6aa20007  ldl         $v0, 0x7($s5)
    ctx->pc = 0x3195e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3195ec:
    // 0x3195ec: 0x6ea20000  ldr         $v0, 0x0($s5)
    ctx->pc = 0x3195ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3195f0:
    // 0x3195f0: 0x6aa3000f  ldl         $v1, 0xF($s5)
    ctx->pc = 0x3195f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3195f4:
    // 0x3195f4: 0x6ea30008  ldr         $v1, 0x8($s5)
    ctx->pc = 0x3195f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3195f8:
    // 0x3195f8: 0x6aa40017  ldl         $a0, 0x17($s5)
    ctx->pc = 0x3195f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3195fc:
    // 0x3195fc: 0x6ea40010  ldr         $a0, 0x10($s5)
    ctx->pc = 0x3195fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_319600:
    // 0x319600: 0xb3a2000b  sdl         $v0, 0xB($sp)
    ctx->pc = 0x319600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_319604:
    // 0x319604: 0xb7a20004  sdr         $v0, 0x4($sp)
    ctx->pc = 0x319604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_319608:
    // 0x319608: 0xb3a30013  sdl         $v1, 0x13($sp)
    ctx->pc = 0x319608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_31960c:
    // 0x31960c: 0xb7a3000c  sdr         $v1, 0xC($sp)
    ctx->pc = 0x31960cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_319610:
    // 0x319610: 0xb3a4001b  sdl         $a0, 0x1B($sp)
    ctx->pc = 0x319610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_319614:
    // 0x319614: 0xb7a40014  sdr         $a0, 0x14($sp)
    ctx->pc = 0x319614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_319618:
    // 0x319618: 0x6aa60007  ldl         $a2, 0x7($s5)
    ctx->pc = 0x319618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_31961c:
    // 0x31961c: 0x6ea60000  ldr         $a2, 0x0($s5)
    ctx->pc = 0x31961cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_319620:
    // 0x319620: 0x6aa7000f  ldl         $a3, 0xF($s5)
    ctx->pc = 0x319620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_319624:
    // 0x319624: 0x6ea70008  ldr         $a3, 0x8($s5)
    ctx->pc = 0x319624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_319628:
    // 0x319628: 0x6aa30017  ldl         $v1, 0x17($s5)
    ctx->pc = 0x319628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_31962c:
    // 0x31962c: 0x6ea30010  ldr         $v1, 0x10($s5)
    ctx->pc = 0x31962cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_319630:
    // 0x319630: 0xb3a60023  sdl         $a2, 0x23($sp)
    ctx->pc = 0x319630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_319634:
    // 0x319634: 0xb7a6001c  sdr         $a2, 0x1C($sp)
    ctx->pc = 0x319634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_319638:
    // 0x319638: 0xb3a7002b  sdl         $a3, 0x2B($sp)
    ctx->pc = 0x319638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_31963c:
    // 0x31963c: 0xb7a70024  sdr         $a3, 0x24($sp)
    ctx->pc = 0x31963cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_319640:
    // 0x319640: 0xb3a30033  sdl         $v1, 0x33($sp)
    ctx->pc = 0x319640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_319644:
    // 0x319644: 0xb7a3002c  sdr         $v1, 0x2C($sp)
    ctx->pc = 0x319644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_319648:
    // 0x319648: 0x27a20034  addiu       $v0, $sp, 0x34
    ctx->pc = 0x319648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_31964c:
    // 0x31964c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31964cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_319650:
    // 0x319650: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x319650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319654:
    // 0x319654: 0xc6c00010  lwc1        $f0, 0x10($s6)
    ctx->pc = 0x319654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319658:
    // 0x319658: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x319658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31965c:
    // 0x31965c: 0x0  nop
    ctx->pc = 0x31965cu;
    // NOP
label_319660:
    // 0x319660: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_319664:
    if (ctx->pc == 0x319664u) {
        ctx->pc = 0x319664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319660u;
        // 0x319664: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319668u;
        goto label_319668;
    }
    ctx->pc = 0x319660u;
    {
        const bool branch_taken_0x319660 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x319664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319660u;
        // 0x319664: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319660) {
            ctx->pc = 0x319670u;
            goto label_319670;
        }
    }
    ctx->pc = 0x319668u;
label_319668:
    // 0x319668: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x319668u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31966c:
    // 0x31966c: 0x0  nop
    ctx->pc = 0x31966cu;
    // NOP
label_319670:
    // 0x319670: 0xc6c10014  lwc1        $f1, 0x14($s6)
    ctx->pc = 0x319670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319674:
    // 0x319674: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x319674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319678:
    // 0x319678: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x319678u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31967c:
    // 0x31967c: 0x0  nop
    ctx->pc = 0x31967cu;
    // NOP
label_319680:
    // 0x319680: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_319684:
    if (ctx->pc == 0x319684u) {
        ctx->pc = 0x319684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319680u;
        // 0x319684: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319688u;
        goto label_319688;
    }
    ctx->pc = 0x319680u;
    {
        const bool branch_taken_0x319680 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x319684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319680u;
        // 0x319684: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319680) {
            ctx->pc = 0x31968Cu;
            goto label_31968c;
        }
    }
    ctx->pc = 0x319688u;
label_319688:
    // 0x319688: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x319688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_31968c:
    // 0x31968c: 0xc6c10018  lwc1        $f1, 0x18($s6)
    ctx->pc = 0x31968cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319690:
    // 0x319690: 0xc6a00014  lwc1        $f0, 0x14($s5)
    ctx->pc = 0x319690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319694:
    // 0x319694: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x319694u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319698:
    // 0x319698: 0x0  nop
    ctx->pc = 0x319698u;
    // NOP
label_31969c:
    // 0x31969c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3196a0:
    if (ctx->pc == 0x3196A0u) {
        ctx->pc = 0x3196A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31969Cu;
        // 0x3196a0: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3196A4u;
        goto label_3196a4;
    }
    ctx->pc = 0x31969Cu;
    {
        const bool branch_taken_0x31969c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31969c) {
            ctx->pc = 0x3196A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31969Cu;
            // 0x3196a0: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3196A4u;
            goto label_3196a4;
        }
    }
    ctx->pc = 0x3196A4u;
label_3196a4:
    // 0x3196a4: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x3196a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3196a8:
    // 0x3196a8: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x3196a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3196ac:
    // 0x3196ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3196acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3196b0:
    // 0x3196b0: 0x0  nop
    ctx->pc = 0x3196b0u;
    // NOP
label_3196b4:
    // 0x3196b4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3196b8:
    if (ctx->pc == 0x3196B8u) {
        ctx->pc = 0x3196B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3196B4u;
        // 0x3196b8: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3196BCu;
        goto label_3196bc;
    }
    ctx->pc = 0x3196B4u;
    {
        const bool branch_taken_0x3196b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3196b4) {
            ctx->pc = 0x3196B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3196B4u;
            // 0x3196b8: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3196BCu;
            goto label_3196bc;
        }
    }
    ctx->pc = 0x3196BCu;
label_3196bc:
    // 0x3196bc: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x3196bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3196c0:
    // 0x3196c0: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x3196c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3196c4:
    // 0x3196c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3196c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3196c8:
    // 0x3196c8: 0x0  nop
    ctx->pc = 0x3196c8u;
    // NOP
label_3196cc:
    // 0x3196cc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3196d0:
    if (ctx->pc == 0x3196D0u) {
        ctx->pc = 0x3196D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3196CCu;
        // 0x3196d0: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3196D4u;
        goto label_3196d4;
    }
    ctx->pc = 0x3196CCu;
    {
        const bool branch_taken_0x3196cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3196cc) {
            ctx->pc = 0x3196D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3196CCu;
            // 0x3196d0: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3196D4u;
            goto label_3196d4;
        }
    }
    ctx->pc = 0x3196D4u;
label_3196d4:
    // 0x3196d4: 0xc6c1000c  lwc1        $f1, 0xC($s6)
    ctx->pc = 0x3196d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3196d8:
    // 0x3196d8: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x3196d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3196dc:
    // 0x3196dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3196dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3196e0:
    // 0x3196e0: 0x0  nop
    ctx->pc = 0x3196e0u;
    // NOP
label_3196e4:
    // 0x3196e4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3196e8:
    if (ctx->pc == 0x3196E8u) {
        ctx->pc = 0x3196E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3196E4u;
        // 0x3196e8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3196ECu;
        goto label_3196ec;
    }
    ctx->pc = 0x3196E4u;
    {
        const bool branch_taken_0x3196e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3196E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3196E4u;
        // 0x3196e8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3196e4) {
            ctx->pc = 0x3196F0u;
            goto label_3196f0;
        }
    }
    ctx->pc = 0x3196ECu;
label_3196ec:
    // 0x3196ec: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x3196ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_3196f0:
    // 0x3196f0: 0x27a20044  addiu       $v0, $sp, 0x44
    ctx->pc = 0x3196f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_3196f4:
    // 0x3196f4: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x3196f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_3196f8:
    // 0x3196f8: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x3196f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
label_3196fc:
    // 0x3196fc: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x3196fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_319700:
    // 0x319700: 0x10000004  b           . + 4 + (0x4 << 2)
label_319704:
    if (ctx->pc == 0x319704u) {
        ctx->pc = 0x319704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319700u;
        // 0x319704: 0xafa501bc  sw          $a1, 0x1BC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319708u;
        goto label_319708;
    }
    ctx->pc = 0x319700u;
    {
        const bool branch_taken_0x319700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319700u;
        // 0x319704: 0xafa501bc  sw          $a1, 0x1BC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319700) {
            ctx->pc = 0x319714u;
            goto label_319714;
        }
    }
    ctx->pc = 0x319708u;
label_319708:
    // 0x319708: 0x27a2003c  addiu       $v0, $sp, 0x3C
    ctx->pc = 0x319708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_31970c:
    // 0x31970c: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x31970cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
label_319710:
    // 0x319710: 0xafa201bc  sw          $v0, 0x1BC($sp)
    ctx->pc = 0x319710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 2));
label_319714:
    // 0x319714: 0x8fa30144  lw          $v1, 0x144($sp)
    ctx->pc = 0x319714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_319718:
    // 0x319718: 0x8fa601bc  lw          $a2, 0x1BC($sp)
    ctx->pc = 0x319718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_31971c:
    // 0x31971c: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x31971cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_319720:
    // 0x319720: 0x104000f9  beqz        $v0, . + 4 + (0xF9 << 2)
label_319724:
    if (ctx->pc == 0x319724u) {
        ctx->pc = 0x319724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319720u;
        // 0x319724: 0x241e00ff  addiu       $fp, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319728u;
        goto label_319728;
    }
    ctx->pc = 0x319720u;
    {
        const bool branch_taken_0x319720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319720u;
        // 0x319724: 0x241e00ff  addiu       $fp, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319720) {
            ctx->pc = 0x319B08u;
            goto label_319b08;
        }
    }
    ctx->pc = 0x319728u;
label_319728:
    // 0x319728: 0x8c64fff8  lw          $a0, -0x8($v1)
    ctx->pc = 0x319728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_31972c:
    // 0x31972c: 0x0  nop
    ctx->pc = 0x31972cu;
    // NOP
label_319730:
    // 0x319730: 0x2465fff8  addiu       $a1, $v1, -0x8
    ctx->pc = 0x319730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_319734:
    // 0x319734: 0x10000061  b           . + 4 + (0x61 << 2)
label_319738:
    if (ctx->pc == 0x319738u) {
        ctx->pc = 0x319738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319734u;
        // 0x319738: 0xafa50144  sw          $a1, 0x144($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31973Cu;
        goto label_31973c;
    }
    ctx->pc = 0x319734u;
    {
        const bool branch_taken_0x319734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319734u;
        // 0x319738: 0xafa50144  sw          $a1, 0x144($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319734) {
            ctx->pc = 0x3198BCu;
            goto label_3198bc;
        }
    }
    ctx->pc = 0x31973Cu;
label_31973c:
    // 0x31973c: 0x0  nop
    ctx->pc = 0x31973cu;
    // NOP
label_319740:
    // 0x319740: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x319740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_319744:
    // 0x319744: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_319748:
    if (ctx->pc == 0x319748u) {
        ctx->pc = 0x319748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319744u;
        // 0x319748: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31974Cu;
        goto label_31974c;
    }
    ctx->pc = 0x319744u;
    {
        const bool branch_taken_0x319744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319744u;
        // 0x319748: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319744) {
            ctx->pc = 0x3197FCu;
            goto label_3197fc;
        }
    }
    ctx->pc = 0x31974Cu;
label_31974c:
    // 0x31974c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x31974cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_319750:
    // 0x319750: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x319750u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_319754:
    // 0x319754: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x319754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_319758:
    // 0x319758: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x319758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_31975c:
    // 0x31975c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31975cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_319760:
    // 0x319760: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x319760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_319764:
    // 0x319764: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x319764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_319768:
    // 0x319768: 0x145e000c  bne         $v0, $fp, . + 4 + (0xC << 2)
label_31976c:
    if (ctx->pc == 0x31976Cu) {
        ctx->pc = 0x31976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319768u;
        // 0x31976c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319770u;
        goto label_319770;
    }
    ctx->pc = 0x319768u;
    {
        const bool branch_taken_0x319768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x31976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319768u;
        // 0x31976c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319768) {
            ctx->pc = 0x31979Cu;
            goto label_31979c;
        }
    }
    ctx->pc = 0x319770u;
label_319770:
    // 0x319770: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x319770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_319774:
    // 0x319774: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x319774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_319778:
    // 0x319778: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x319778u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_31977c:
    // 0x31977c: 0x0  nop
    ctx->pc = 0x31977cu;
    // NOP
label_319780:
    // 0x319780: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x319780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_319784:
    // 0x319784: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x319784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_319788:
    // 0x319788: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x319788u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_31978c:
    // 0x31978c: 0x0  nop
    ctx->pc = 0x31978cu;
    // NOP
label_319790:
    // 0x319790: 0x0  nop
    ctx->pc = 0x319790u;
    // NOP
label_319794:
    // 0x319794: 0x5066fffa  beql        $v1, $a2, . + 4 + (-0x6 << 2)
label_319798:
    if (ctx->pc == 0x319798u) {
        ctx->pc = 0x319798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319794u;
        // 0x319798: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31979Cu;
        goto label_31979c;
    }
    ctx->pc = 0x319794u;
    {
        const bool branch_taken_0x319794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x319794) {
            ctx->pc = 0x319798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319794u;
            // 0x319798: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319780;
        }
    }
    ctx->pc = 0x31979Cu;
label_31979c:
    // 0x31979c: 0x24e50008  addiu       $a1, $a3, 0x8
    ctx->pc = 0x31979cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_3197a0:
    // 0x3197a0: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x3197a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_3197a4:
    // 0x3197a4: 0x145e000b  bne         $v0, $fp, . + 4 + (0xB << 2)
label_3197a8:
    if (ctx->pc == 0x3197A8u) {
        ctx->pc = 0x3197A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3197A4u;
        // 0x3197a8: 0x94860002  lhu         $a2, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3197ACu;
        goto label_3197ac;
    }
    ctx->pc = 0x3197A4u;
    {
        const bool branch_taken_0x3197a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x3197A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3197A4u;
        // 0x3197a8: 0x94860002  lhu         $a2, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3197a4) {
            ctx->pc = 0x3197D4u;
            goto label_3197d4;
        }
    }
    ctx->pc = 0x3197ACu;
label_3197ac:
    // 0x3197ac: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x3197acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_3197b0:
    // 0x3197b0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x3197b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3197b4:
    // 0x3197b4: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x3197b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_3197b8:
    // 0x3197b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3197b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3197bc:
    // 0x3197bc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3197bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3197c0:
    // 0x3197c0: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x3197c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3197c4:
    // 0x3197c4: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x3197c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_3197c8:
    // 0x3197c8: 0x0  nop
    ctx->pc = 0x3197c8u;
    // NOP
label_3197cc:
    // 0x3197cc: 0x5067fffa  beql        $v1, $a3, . + 4 + (-0x6 << 2)
label_3197d0:
    if (ctx->pc == 0x3197D0u) {
        ctx->pc = 0x3197D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3197CCu;
        // 0x3197d0: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3197D4u;
        goto label_3197d4;
    }
    ctx->pc = 0x3197CCu;
    {
        const bool branch_taken_0x3197cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x3197cc) {
            ctx->pc = 0x3197D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3197CCu;
            // 0x3197d0: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3197B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3197b8;
        }
    }
    ctx->pc = 0x3197D4u;
label_3197d4:
    // 0x3197d4: 0xa7a60150  sh          $a2, 0x150($sp)
    ctx->pc = 0x3197d4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 336), (uint16_t)GPR_U32(ctx, 6));
label_3197d8:
    // 0x3197d8: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x3197d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_3197dc:
    // 0x3197dc: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x3197dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_3197e0:
    // 0x3197e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3197e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3197e4:
    // 0x3197e4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3197e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3197e8:
    // 0x3197e8: 0xa7a20152  sh          $v0, 0x152($sp)
    ctx->pc = 0x3197e8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 338), (uint16_t)GPR_U32(ctx, 2));
label_3197ec:
    // 0x3197ec: 0x1000003b  b           . + 4 + (0x3B << 2)
label_3197f0:
    if (ctx->pc == 0x3197F0u) {
        ctx->pc = 0x3197F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3197ECu;
        // 0x3197f0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3197F4u;
        goto label_3197f4;
    }
    ctx->pc = 0x3197ECu;
    {
        const bool branch_taken_0x3197ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3197F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3197ECu;
        // 0x3197f0: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3197ec) {
            ctx->pc = 0x3198DCu;
            goto label_3198dc;
        }
    }
    ctx->pc = 0x3197F4u;
label_3197f4:
    // 0x3197f4: 0x1000002f  b           . + 4 + (0x2F << 2)
label_3197f8:
    if (ctx->pc == 0x3197F8u) {
        ctx->pc = 0x3197F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3197F4u;
        // 0x3197f8: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3197FCu;
        goto label_3197fc;
    }
    ctx->pc = 0x3197F4u;
    {
        const bool branch_taken_0x3197f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3197F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3197F4u;
        // 0x3197f8: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3197f4) {
            ctx->pc = 0x3198B4u;
            goto label_3198b4;
        }
    }
    ctx->pc = 0x3197FCu;
label_3197fc:
    // 0x3197fc: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x3197fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_319800:
    // 0x319800: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x319800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_319804:
    // 0x319804: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x319804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_319808:
    // 0x319808: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x319808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_31980c:
    // 0x31980c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x31980cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_319810:
    // 0x319810: 0x3043000c  andi        $v1, $v0, 0xC
    ctx->pc = 0x319810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
label_319814:
    // 0x319814: 0x7d4021  addu        $t0, $v1, $sp
    ctx->pc = 0x319814u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_319818:
    // 0x319818: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x319818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31981c:
    // 0x31981c: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x31981cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319820:
    // 0x319820: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x319820u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319824:
    // 0x319824: 0x0  nop
    ctx->pc = 0x319824u;
    // NOP
label_319828:
    // 0x319828: 0x4501fff2  bc1t        . + 4 + (-0xE << 2)
label_31982c:
    if (ctx->pc == 0x31982Cu) {
        ctx->pc = 0x31982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319828u;
        // 0x31982c: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319830u;
        goto label_319830;
    }
    ctx->pc = 0x319828u;
    {
        const bool branch_taken_0x319828 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319828u;
        // 0x31982c: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319828) {
            ctx->pc = 0x3197F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3197f4;
        }
    }
    ctx->pc = 0x319830u;
label_319830:
    // 0x319830: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x319830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319834:
    // 0x319834: 0xc5000010  lwc1        $f0, 0x10($t0)
    ctx->pc = 0x319834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319838:
    // 0x319838: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x319838u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31983c:
    // 0x31983c: 0x0  nop
    ctx->pc = 0x31983cu;
    // NOP
label_319840:
    // 0x319840: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_319844:
    if (ctx->pc == 0x319844u) {
        ctx->pc = 0x319844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319840u;
        // 0x319844: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319848u;
        goto label_319848;
    }
    ctx->pc = 0x319840u;
    {
        const bool branch_taken_0x319840 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x319844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319840u;
        // 0x319844: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319840) {
            ctx->pc = 0x3198B4u;
            goto label_3198b4;
        }
    }
    ctx->pc = 0x319848u;
label_319848:
    // 0x319848: 0xc500001c  lwc1        $f0, 0x1C($t0)
    ctx->pc = 0x319848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31984c:
    // 0x31984c: 0x24e50008  addiu       $a1, $a3, 0x8
    ctx->pc = 0x31984cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_319850:
    // 0x319850: 0x8ca6fffc  lw          $a2, -0x4($a1)
    ctx->pc = 0x319850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
label_319854:
    // 0x319854: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x319854u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
label_319858:
    // 0x319858: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x319858u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31985c:
    // 0x31985c: 0xafa50144  sw          $a1, 0x144($sp)
    ctx->pc = 0x31985cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 5));
label_319860:
    // 0x319860: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_319864:
    if (ctx->pc == 0x319864u) {
        ctx->pc = 0x319864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319860u;
        // 0x319864: 0xaca60004  sw          $a2, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319868u;
        goto label_319868;
    }
    ctx->pc = 0x319860u;
    {
        const bool branch_taken_0x319860 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x319864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319860u;
        // 0x319864: 0xaca60004  sw          $a2, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319860) {
            ctx->pc = 0x319880u;
            goto label_319880;
        }
    }
    ctx->pc = 0x319868u;
label_319868:
    // 0x319868: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x319868u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_31986c:
    // 0x31986c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x31986cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_319870:
    // 0x319870: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x319870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_319874:
    // 0x319874: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x319874u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_319878:
    // 0x319878: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x319878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_31987c:
    // 0x31987c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x31987cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_319880:
    // 0x319880: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x319880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319884:
    // 0x319884: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x319884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319888:
    // 0x319888: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x319888u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31988c:
    // 0x31988c: 0x0  nop
    ctx->pc = 0x31988cu;
    // NOP
label_319890:
    // 0x319890: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_319894:
    if (ctx->pc == 0x319894u) {
        ctx->pc = 0x319894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319890u;
        // 0x319894: 0x8fa20144  lw          $v0, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319898u;
        goto label_319898;
    }
    ctx->pc = 0x319890u;
    {
        const bool branch_taken_0x319890 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x319894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319890u;
        // 0x319894: 0x8fa20144  lw          $v0, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319890) {
            ctx->pc = 0x3198B4u;
            goto label_3198b4;
        }
    }
    ctx->pc = 0x319898u;
label_319898:
    // 0x319898: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x319898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31989c:
    // 0x31989c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x31989cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_3198a0:
    // 0x3198a0: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x3198a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_3198a4:
    // 0x3198a4: 0x8c44fffc  lw          $a0, -0x4($v0)
    ctx->pc = 0x3198a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_3198a8:
    // 0x3198a8: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x3198a8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_3198ac:
    // 0x3198ac: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3198acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3198b0:
    // 0x3198b0: 0xac44fffc  sw          $a0, -0x4($v0)
    ctx->pc = 0x3198b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 4));
label_3198b4:
    // 0x3198b4: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x3198b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_3198b8:
    // 0x3198b8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3198b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3198bc:
    // 0x3198bc: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x3198bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_3198c0:
    // 0x3198c0: 0x105eff9f  beq         $v0, $fp, . + 4 + (-0x61 << 2)
label_3198c4:
    if (ctx->pc == 0x3198C4u) {
        ctx->pc = 0x3198C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3198C0u;
        // 0x3198c4: 0x8fa70144  lw          $a3, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3198C8u;
        goto label_3198c8;
    }
    ctx->pc = 0x3198C0u;
    {
        const bool branch_taken_0x3198c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x3198C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3198C0u;
        // 0x3198c4: 0x8fa70144  lw          $a3, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3198c0) {
            ctx->pc = 0x319740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319740;
        }
    }
    ctx->pc = 0x3198C8u;
label_3198c8:
    // 0x3198c8: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x3198c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_3198cc:
    // 0x3198cc: 0x8cb70004  lw          $s7, 0x4($a1)
    ctx->pc = 0x3198ccu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3198d0:
    // 0x3198d0: 0xa7a30150  sh          $v1, 0x150($sp)
    ctx->pc = 0x3198d0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 336), (uint16_t)GPR_U32(ctx, 3));
label_3198d4:
    // 0x3198d4: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x3198d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_3198d8:
    // 0x3198d8: 0xa7a20152  sh          $v0, 0x152($sp)
    ctx->pc = 0x3198d8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 338), (uint16_t)GPR_U32(ctx, 2));
label_3198dc:
    // 0x3198dc: 0x97b40150  lhu         $s4, 0x150($sp)
    ctx->pc = 0x3198dcu;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
label_3198e0:
    // 0x3198e0: 0x97a20152  lhu         $v0, 0x152($sp)
    ctx->pc = 0x3198e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 338)));
label_3198e4:
    // 0x3198e4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x3198e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3198e8:
    // 0x3198e8: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x3198e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3198ec:
    // 0x3198ec: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
label_3198f0:
    if (ctx->pc == 0x3198F0u) {
        ctx->pc = 0x3198F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3198ECu;
        // 0x3198f0: 0x8fa30144  lw          $v1, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3198F4u;
        goto label_3198f4;
    }
    ctx->pc = 0x3198ECu;
    {
        const bool branch_taken_0x3198ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3198F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3198ECu;
        // 0x3198f0: 0x8fa30144  lw          $v1, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3198ec) {
            ctx->pc = 0x319AE0u;
            goto label_319ae0;
        }
    }
    ctx->pc = 0x3198F4u;
label_3198f4:
    // 0x3198f4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x3198f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3198f8:
    // 0x3198f8: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x3198f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3198fc:
    // 0x3198fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3198fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_319900:
    // 0x319900: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x319900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_319904:
    // 0x319904: 0x8ec30024  lw          $v1, 0x24($s6)
    ctx->pc = 0x319904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_319908:
    // 0x319908: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_31990c:
    if (ctx->pc == 0x31990Cu) {
        ctx->pc = 0x31990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319908u;
        // 0x31990c: 0x141040  sll         $v0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319910u;
        goto label_319910;
    }
    ctx->pc = 0x319908u;
    {
        const bool branch_taken_0x319908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319908u;
        // 0x31990c: 0x141040  sll         $v0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319908) {
            ctx->pc = 0x31991Cu;
            goto label_31991c;
        }
    }
    ctx->pc = 0x319910u;
label_319910:
    // 0x319910: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x319910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_319914:
    // 0x319914: 0x10000002  b           . + 4 + (0x2 << 2)
label_319918:
    if (ctx->pc == 0x319918u) {
        ctx->pc = 0x319918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319914u;
        // 0x319918: 0x94530000  lhu         $s3, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31991Cu;
        goto label_31991c;
    }
    ctx->pc = 0x319914u;
    {
        const bool branch_taken_0x319914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319914u;
        // 0x319918: 0x94530000  lhu         $s3, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319914) {
            ctx->pc = 0x319920u;
            goto label_319920;
        }
    }
    ctx->pc = 0x31991Cu;
label_31991c:
    // 0x31991c: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x31991cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_319920:
    // 0x319920: 0x8fa501b8  lw          $a1, 0x1B8($sp)
    ctx->pc = 0x319920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_319924:
    // 0x319924: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x319924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_319928:
    // 0x319928: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x319928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_31992c:
    // 0x31992c: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x31992cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_319930:
    // 0x319930: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x319930u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_319934:
    // 0x319934: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x319934u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_319938:
    // 0x319938: 0x681018  mult        $v0, $v1, $t0
    ctx->pc = 0x319938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_31993c:
    // 0x31993c: 0x499021  addu        $s2, $v0, $t1
    ctx->pc = 0x31993cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_319940:
    // 0x319940: 0x881018  mult        $v0, $a0, $t0
    ctx->pc = 0x319940u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_319944:
    // 0x319944: 0x498021  addu        $s0, $v0, $t1
    ctx->pc = 0x319944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_319948:
    // 0x319948: 0xa81018  mult        $v0, $a1, $t0
    ctx->pc = 0x319948u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_31994c:
    // 0x31994c: 0x12e0000b  beqz        $s7, . + 4 + (0xB << 2)
label_319950:
    if (ctx->pc == 0x319950u) {
        ctx->pc = 0x319950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31994Cu;
        // 0x319950: 0x498821  addu        $s1, $v0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319954u;
        goto label_319954;
    }
    ctx->pc = 0x31994Cu;
    {
        const bool branch_taken_0x31994c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x319950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31994Cu;
        // 0x319950: 0x498821  addu        $s1, $v0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31994c) {
            ctx->pc = 0x31997Cu;
            goto label_31997c;
        }
    }
    ctx->pc = 0x319954u;
label_319954:
    // 0x319954: 0x7fa801c0  sq          $t0, 0x1C0($sp)
    ctx->pc = 0x319954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 8));
label_319958:
    // 0x319958: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x319958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31995c:
    // 0x31995c: 0x7fa901d0  sq          $t1, 0x1D0($sp)
    ctx->pc = 0x31995cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 9));
label_319960:
    // 0x319960: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x319960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_319964:
    // 0x319964: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x319964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_319968:
    // 0x319968: 0xc0f172c  jal         func_3C5CB0
label_31996c:
    if (ctx->pc == 0x31996Cu) {
        ctx->pc = 0x31996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319968u;
        // 0x31996c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319970u;
        goto label_319970;
    }
    ctx->pc = 0x319968u;
    SET_GPR_U32(ctx, 31, 0x319970u);
    ctx->pc = 0x31996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319968u;
    // 0x31996c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5CB0u, 0x319968u, 0x319970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319970u;
label_319970:
    // 0x319970: 0x7ba801c0  lq          $t0, 0x1C0($sp)
    ctx->pc = 0x319970u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_319974:
    // 0x319974: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
label_319978:
    if (ctx->pc == 0x319978u) {
        ctx->pc = 0x319978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319974u;
        // 0x319978: 0x7ba901d0  lq          $t1, 0x1D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31997Cu;
        goto label_31997c;
    }
    ctx->pc = 0x319974u;
    {
        const bool branch_taken_0x319974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319974u;
        // 0x319978: 0x7ba901d0  lq          $t1, 0x1D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319974) {
            ctx->pc = 0x319ABCu;
            goto label_319abc;
        }
    }
    ctx->pc = 0x31997Cu;
label_31997c:
    // 0x31997c: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x31997cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_319980:
    // 0x319980: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x319980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_319984:
    // 0x319984: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x319984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_319988:
    // 0x319988: 0xb3a30173  sdl         $v1, 0x173($sp)
    ctx->pc = 0x319988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 371); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_31998c:
    // 0x31998c: 0xb7a3016c  sdr         $v1, 0x16C($sp)
    ctx->pc = 0x31998cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 364); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_319990:
    // 0x319990: 0xafa40174  sw          $a0, 0x174($sp)
    ctx->pc = 0x319990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 4));
label_319994:
    // 0x319994: 0xafb30178  sw          $s3, 0x178($sp)
    ctx->pc = 0x319994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 19));
label_319998:
    // 0x319998: 0xafb0017c  sw          $s0, 0x17C($sp)
    ctx->pc = 0x319998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 16));
label_31999c:
    // 0x31999c: 0xafb10180  sw          $s1, 0x180($sp)
    ctx->pc = 0x31999cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 17));
label_3199a0:
    // 0x3199a0: 0xafb20184  sw          $s2, 0x184($sp)
    ctx->pc = 0x3199a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 18));
label_3199a4:
    // 0x3199a4: 0xc6270000  lwc1        $f7, 0x0($s1)
    ctx->pc = 0x3199a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3199a8:
    // 0x3199a8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3199a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3199ac:
    // 0x3199ac: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x3199acu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_3199b0:
    // 0x3199b0: 0xe7a70190  swc1        $f7, 0x190($sp)
    ctx->pc = 0x3199b0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_3199b4:
    // 0x3199b4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3199b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3199b8:
    // 0x3199b8: 0xc6260004  lwc1        $f6, 0x4($s1)
    ctx->pc = 0x3199b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3199bc:
    // 0x3199bc: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x3199bcu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_3199c0:
    // 0x3199c0: 0xe7a60194  swc1        $f6, 0x194($sp)
    ctx->pc = 0x3199c0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_3199c4:
    // 0x3199c4: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x3199c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3199c8:
    // 0x3199c8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3199c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3199cc:
    // 0x3199cc: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x3199ccu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_3199d0:
    // 0x3199d0: 0xe7a50198  swc1        $f5, 0x198($sp)
    ctx->pc = 0x3199d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_3199d4:
    // 0x3199d4: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x3199d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3199d8:
    // 0x3199d8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3199d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3199dc:
    // 0x3199dc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3199dcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3199e0:
    // 0x3199e0: 0xe7a201a0  swc1        $f2, 0x1A0($sp)
    ctx->pc = 0x3199e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_3199e4:
    // 0x3199e4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3199e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3199e8:
    // 0x3199e8: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x3199e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3199ec:
    // 0x3199ec: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x3199ecu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_3199f0:
    // 0x3199f0: 0xe7a401a4  swc1        $f4, 0x1A4($sp)
    ctx->pc = 0x3199f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_3199f4:
    // 0x3199f4: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x3199f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3199f8:
    // 0x3199f8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3199f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3199fc:
    // 0x3199fc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3199fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_319a00:
    // 0x319a00: 0xe7a101a8  swc1        $f1, 0x1A8($sp)
    ctx->pc = 0x319a00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_319a04:
    // 0x319a04: 0x46013002  mul.s       $f0, $f6, $f1
    ctx->pc = 0x319a04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_319a08:
    // 0x319a08: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x319a08u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_319a0c:
    // 0x319a0c: 0x460438c2  mul.s       $f3, $f7, $f4
    ctx->pc = 0x319a0cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_319a10:
    // 0x319a10: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x319a10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_319a14:
    // 0x319a14: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x319a14u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_319a18:
    // 0x319a18: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x319a18u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_319a1c:
    // 0x319a1c: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x319a1cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
label_319a20:
    // 0x319a20: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x319a20u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_319a24:
    // 0x319a24: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x319a24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_319a28:
    // 0x319a28: 0xe7a30168  swc1        $f3, 0x168($sp)
    ctx->pc = 0x319a28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_319a2c:
    // 0x319a2c: 0xe7a20164  swc1        $f2, 0x164($sp)
    ctx->pc = 0x319a2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_319a30:
    // 0x319a30: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x319a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_319a34:
    // 0x319a34: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x319a34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_319a38:
    // 0x319a38: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x319a38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_319a3c:
    // 0x319a3c: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x319a3cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_319a40:
    // 0x319a40: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x319a40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_319a44:
    // 0x319a44: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x319a44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_319a48:
    // 0x319a48: 0x46000004  c1          0x4
    ctx->pc = 0x319a48u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_319a4c:
    // 0x319a4c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x319a4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319a50:
    // 0x319a50: 0x0  nop
    ctx->pc = 0x319a50u;
    // NOP
label_319a54:
    // 0x319a54: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_319a58:
    if (ctx->pc == 0x319A58u) {
        ctx->pc = 0x319A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319A54u;
        // 0x319a58: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x319A5Cu;
        goto label_319a5c;
    }
    ctx->pc = 0x319A54u;
    {
        const bool branch_taken_0x319a54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x319A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319A54u;
        // 0x319a58: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319a54) {
            ctx->pc = 0x319A68u;
            goto label_319a68;
        }
    }
    ctx->pc = 0x319A5Cu;
label_319a5c:
    // 0x319a5c: 0x4600a1c3  div.s       $f7, $f20, $f0
    ctx->pc = 0x319a5cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_319a60:
    // 0x319a60: 0x10000003  b           . + 4 + (0x3 << 2)
label_319a64:
    if (ctx->pc == 0x319A64u) {
        ctx->pc = 0x319A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319A60u;
        // 0x319a64: 0xc7a00160  lwc1        $f0, 0x160($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x319A68u;
        goto label_319a68;
    }
    ctx->pc = 0x319A60u;
    {
        const bool branch_taken_0x319a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319A60u;
        // 0x319a64: 0xc7a00160  lwc1        $f0, 0x160($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x319a60) {
            ctx->pc = 0x319A70u;
            goto label_319a70;
        }
    }
    ctx->pc = 0x319A68u;
label_319a68:
    // 0x319a68: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x319a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319a6c:
    // 0x319a6c: 0x0  nop
    ctx->pc = 0x319a6cu;
    // NOP
label_319a70:
    // 0x319a70: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x319a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319a74:
    // 0x319a74: 0xc7a20168  lwc1        $f2, 0x168($sp)
    ctx->pc = 0x319a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_319a78:
    // 0x319a78: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x319a78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_319a7c:
    // 0x319a7c: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x319a7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_319a80:
    // 0x319a80: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x319a80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_319a84:
    // 0x319a84: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x319a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_319a88:
    // 0x319a88: 0xe7a10164  swc1        $f1, 0x164($sp)
    ctx->pc = 0x319a88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_319a8c:
    // 0x319a8c: 0xe7a20168  swc1        $f2, 0x168($sp)
    ctx->pc = 0x319a8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_319a90:
    // 0x319a90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x319a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_319a94:
    // 0x319a94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x319a94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_319a98:
    // 0x319a98: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x319a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_319a9c:
    // 0x319a9c: 0x8fa601b4  lw          $a2, 0x1B4($sp)
    ctx->pc = 0x319a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_319aa0:
    // 0x319aa0: 0x8fa701b0  lw          $a3, 0x1B0($sp)
    ctx->pc = 0x319aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_319aa4:
    // 0x319aa4: 0x7fa801c0  sq          $t0, 0x1C0($sp)
    ctx->pc = 0x319aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 8));
label_319aa8:
    // 0x319aa8: 0xe0f809  jalr        $a3
label_319aac:
    if (ctx->pc == 0x319AACu) {
        ctx->pc = 0x319AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319AA8u;
        // 0x319aac: 0x7fa901d0  sq          $t1, 0x1D0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319AB0u;
        goto label_319ab0;
    }
    ctx->pc = 0x319AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x319AB0u);
        ctx->pc = 0x319AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319AA8u;
        // 0x319aac: 0x7fa901d0  sq          $t1, 0x1D0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319AA8u, 0x319AB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x319AB0u;
label_319ab0:
    // 0x319ab0: 0x7ba801c0  lq          $t0, 0x1C0($sp)
    ctx->pc = 0x319ab0u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_319ab4:
    // 0x319ab4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_319ab8:
    if (ctx->pc == 0x319AB8u) {
        ctx->pc = 0x319AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319AB4u;
        // 0x319ab8: 0x7ba901d0  lq          $t1, 0x1D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319ABCu;
        goto label_319abc;
    }
    ctx->pc = 0x319AB4u;
    {
        const bool branch_taken_0x319ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319AB4u;
        // 0x319ab8: 0x7ba901d0  lq          $t1, 0x1D0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319ab4) {
            ctx->pc = 0x319B08u;
            goto label_319b08;
        }
    }
    ctx->pc = 0x319ABCu;
label_319abc:
    // 0x319abc: 0x97a20150  lhu         $v0, 0x150($sp)
    ctx->pc = 0x319abcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
label_319ac0:
    // 0x319ac0: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x319ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_319ac4:
    // 0x319ac4: 0x97a40152  lhu         $a0, 0x152($sp)
    ctx->pc = 0x319ac4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 338)));
label_319ac8:
    // 0x319ac8: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x319ac8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_319acc:
    // 0x319acc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x319accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_319ad0:
    // 0x319ad0: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x319ad0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_319ad4:
    // 0x319ad4: 0x5440ff8c  bnel        $v0, $zero, . + 4 + (-0x74 << 2)
label_319ad8:
    if (ctx->pc == 0x319AD8u) {
        ctx->pc = 0x319AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319AD4u;
        // 0x319ad8: 0x8ec30024  lw          $v1, 0x24($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319ADCu;
        goto label_319adc;
    }
    ctx->pc = 0x319AD4u;
    {
        const bool branch_taken_0x319ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319ad4) {
            ctx->pc = 0x319AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319AD4u;
            // 0x319ad8: 0x8ec30024  lw          $v1, 0x24($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319908;
        }
    }
    ctx->pc = 0x319ADCu;
label_319adc:
    // 0x319adc: 0x8fa30144  lw          $v1, 0x144($sp)
    ctx->pc = 0x319adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_319ae0:
    // 0x319ae0: 0x8fa401bc  lw          $a0, 0x1BC($sp)
    ctx->pc = 0x319ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_319ae4:
    // 0x319ae4: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x319ae4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_319ae8:
    // 0x319ae8: 0x5440ff11  bnel        $v0, $zero, . + 4 + (-0xEF << 2)
label_319aec:
    if (ctx->pc == 0x319AECu) {
        ctx->pc = 0x319AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319AE8u;
        // 0x319aec: 0x8c64fff8  lw          $a0, -0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319AF0u;
        goto label_319af0;
    }
    ctx->pc = 0x319AE8u;
    {
        const bool branch_taken_0x319ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319ae8) {
            ctx->pc = 0x319AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319AE8u;
            // 0x319aec: 0x8c64fff8  lw          $a0, -0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319730;
        }
    }
    ctx->pc = 0x319AF0u;
label_319af0:
    // 0x319af0: 0x10000006  b           . + 4 + (0x6 << 2)
label_319af4:
    if (ctx->pc == 0x319AF4u) {
        ctx->pc = 0x319AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319AF0u;
        // 0x319af4: 0x7bb00270  lq          $s0, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319AF8u;
        goto label_319af8;
    }
    ctx->pc = 0x319AF0u;
    {
        const bool branch_taken_0x319af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319AF0u;
        // 0x319af4: 0x7bb00270  lq          $s0, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319af0) {
            ctx->pc = 0x319B0Cu;
            goto label_319b0c;
        }
    }
    ctx->pc = 0x319AF8u;
label_319af8:
    // 0x319af8: 0x8fa601b0  lw          $a2, 0x1B0($sp)
    ctx->pc = 0x319af8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_319afc:
    // 0x319afc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x319afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_319b00:
    // 0x319b00: 0xc0c61d2  jal         func_318748
label_319b04:
    if (ctx->pc == 0x319B04u) {
        ctx->pc = 0x319B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B00u;
        // 0x319b04: 0x8fa701b4  lw          $a3, 0x1B4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319B08u;
        goto label_319b08;
    }
    ctx->pc = 0x319B00u;
    SET_GPR_U32(ctx, 31, 0x319B08u);
    ctx->pc = 0x319B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319B00u;
    // 0x319b04: 0x8fa701b4  lw          $a3, 0x1B4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x318748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318748u, 0x319B00u, 0x319B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319B08u;
label_319b08:
    // 0x319b08: 0x7bb00270  lq          $s0, 0x270($sp)
    ctx->pc = 0x319b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_319b0c:
    // 0x319b0c: 0x7bb10260  lq          $s1, 0x260($sp)
    ctx->pc = 0x319b0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_319b10:
    // 0x319b10: 0x7bb20250  lq          $s2, 0x250($sp)
    ctx->pc = 0x319b10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_319b14:
    // 0x319b14: 0x7bb30240  lq          $s3, 0x240($sp)
    ctx->pc = 0x319b14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_319b18:
    // 0x319b18: 0x7bb40230  lq          $s4, 0x230($sp)
    ctx->pc = 0x319b18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_319b1c:
    // 0x319b1c: 0x7bb50220  lq          $s5, 0x220($sp)
    ctx->pc = 0x319b1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_319b20:
    // 0x319b20: 0x7bb60210  lq          $s6, 0x210($sp)
    ctx->pc = 0x319b20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_319b24:
    // 0x319b24: 0x7bb70200  lq          $s7, 0x200($sp)
    ctx->pc = 0x319b24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_319b28:
    // 0x319b28: 0x7bbe01f0  lq          $fp, 0x1F0($sp)
    ctx->pc = 0x319b28u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_319b2c:
    // 0x319b2c: 0xdfbf01e0  ld          $ra, 0x1E0($sp)
    ctx->pc = 0x319b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 480)));
label_319b30:
    // 0x319b30: 0xc7b50288  lwc1        $f21, 0x288($sp)
    ctx->pc = 0x319b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_319b34:
    // 0x319b34: 0xc7b40280  lwc1        $f20, 0x280($sp)
    ctx->pc = 0x319b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_319b38:
    // 0x319b38: 0x3e00008  jr          $ra
label_319b3c:
    if (ctx->pc == 0x319B3Cu) {
        ctx->pc = 0x319B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B38u;
        // 0x319b3c: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319B40u;
        goto label_fallthrough_0x319b38;
    }
    ctx->pc = 0x319B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B38u;
        // 0x319b3c: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x319b38:
    ctx->pc = 0x319B40u;
}
