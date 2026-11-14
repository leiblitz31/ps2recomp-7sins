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

// Function: sub_003884A0
// Address: 0x3884a0 - 0x388df0
void sub_003884A0_0x3884a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003884A0_0x3884a0");
#endif

    switch (ctx->pc) {
        case 0x3884a0u: goto label_3884a0;
        case 0x3884a4u: goto label_3884a4;
        case 0x3884a8u: goto label_3884a8;
        case 0x3884acu: goto label_3884ac;
        case 0x3884b0u: goto label_3884b0;
        case 0x3884b4u: goto label_3884b4;
        case 0x3884b8u: goto label_3884b8;
        case 0x3884bcu: goto label_3884bc;
        case 0x3884c0u: goto label_3884c0;
        case 0x3884c4u: goto label_3884c4;
        case 0x3884c8u: goto label_3884c8;
        case 0x3884ccu: goto label_3884cc;
        case 0x3884d0u: goto label_3884d0;
        case 0x3884d4u: goto label_3884d4;
        case 0x3884d8u: goto label_3884d8;
        case 0x3884dcu: goto label_3884dc;
        case 0x3884e0u: goto label_3884e0;
        case 0x3884e4u: goto label_3884e4;
        case 0x3884e8u: goto label_3884e8;
        case 0x3884ecu: goto label_3884ec;
        case 0x3884f0u: goto label_3884f0;
        case 0x3884f4u: goto label_3884f4;
        case 0x3884f8u: goto label_3884f8;
        case 0x3884fcu: goto label_3884fc;
        case 0x388500u: goto label_388500;
        case 0x388504u: goto label_388504;
        case 0x388508u: goto label_388508;
        case 0x38850cu: goto label_38850c;
        case 0x388510u: goto label_388510;
        case 0x388514u: goto label_388514;
        case 0x388518u: goto label_388518;
        case 0x38851cu: goto label_38851c;
        case 0x388520u: goto label_388520;
        case 0x388524u: goto label_388524;
        case 0x388528u: goto label_388528;
        case 0x38852cu: goto label_38852c;
        case 0x388530u: goto label_388530;
        case 0x388534u: goto label_388534;
        case 0x388538u: goto label_388538;
        case 0x38853cu: goto label_38853c;
        case 0x388540u: goto label_388540;
        case 0x388544u: goto label_388544;
        case 0x388548u: goto label_388548;
        case 0x38854cu: goto label_38854c;
        case 0x388550u: goto label_388550;
        case 0x388554u: goto label_388554;
        case 0x388558u: goto label_388558;
        case 0x38855cu: goto label_38855c;
        case 0x388560u: goto label_388560;
        case 0x388564u: goto label_388564;
        case 0x388568u: goto label_388568;
        case 0x38856cu: goto label_38856c;
        case 0x388570u: goto label_388570;
        case 0x388574u: goto label_388574;
        case 0x388578u: goto label_388578;
        case 0x38857cu: goto label_38857c;
        case 0x388580u: goto label_388580;
        case 0x388584u: goto label_388584;
        case 0x388588u: goto label_388588;
        case 0x38858cu: goto label_38858c;
        case 0x388590u: goto label_388590;
        case 0x388594u: goto label_388594;
        case 0x388598u: goto label_388598;
        case 0x38859cu: goto label_38859c;
        case 0x3885a0u: goto label_3885a0;
        case 0x3885a4u: goto label_3885a4;
        case 0x3885a8u: goto label_3885a8;
        case 0x3885acu: goto label_3885ac;
        case 0x3885b0u: goto label_3885b0;
        case 0x3885b4u: goto label_3885b4;
        case 0x3885b8u: goto label_3885b8;
        case 0x3885bcu: goto label_3885bc;
        case 0x3885c0u: goto label_3885c0;
        case 0x3885c4u: goto label_3885c4;
        case 0x3885c8u: goto label_3885c8;
        case 0x3885ccu: goto label_3885cc;
        case 0x3885d0u: goto label_3885d0;
        case 0x3885d4u: goto label_3885d4;
        case 0x3885d8u: goto label_3885d8;
        case 0x3885dcu: goto label_3885dc;
        case 0x3885e0u: goto label_3885e0;
        case 0x3885e4u: goto label_3885e4;
        case 0x3885e8u: goto label_3885e8;
        case 0x3885ecu: goto label_3885ec;
        case 0x3885f0u: goto label_3885f0;
        case 0x3885f4u: goto label_3885f4;
        case 0x3885f8u: goto label_3885f8;
        case 0x3885fcu: goto label_3885fc;
        case 0x388600u: goto label_388600;
        case 0x388604u: goto label_388604;
        case 0x388608u: goto label_388608;
        case 0x38860cu: goto label_38860c;
        case 0x388610u: goto label_388610;
        case 0x388614u: goto label_388614;
        case 0x388618u: goto label_388618;
        case 0x38861cu: goto label_38861c;
        case 0x388620u: goto label_388620;
        case 0x388624u: goto label_388624;
        case 0x388628u: goto label_388628;
        case 0x38862cu: goto label_38862c;
        case 0x388630u: goto label_388630;
        case 0x388634u: goto label_388634;
        case 0x388638u: goto label_388638;
        case 0x38863cu: goto label_38863c;
        case 0x388640u: goto label_388640;
        case 0x388644u: goto label_388644;
        case 0x388648u: goto label_388648;
        case 0x38864cu: goto label_38864c;
        case 0x388650u: goto label_388650;
        case 0x388654u: goto label_388654;
        case 0x388658u: goto label_388658;
        case 0x38865cu: goto label_38865c;
        case 0x388660u: goto label_388660;
        case 0x388664u: goto label_388664;
        case 0x388668u: goto label_388668;
        case 0x38866cu: goto label_38866c;
        case 0x388670u: goto label_388670;
        case 0x388674u: goto label_388674;
        case 0x388678u: goto label_388678;
        case 0x38867cu: goto label_38867c;
        case 0x388680u: goto label_388680;
        case 0x388684u: goto label_388684;
        case 0x388688u: goto label_388688;
        case 0x38868cu: goto label_38868c;
        case 0x388690u: goto label_388690;
        case 0x388694u: goto label_388694;
        case 0x388698u: goto label_388698;
        case 0x38869cu: goto label_38869c;
        case 0x3886a0u: goto label_3886a0;
        case 0x3886a4u: goto label_3886a4;
        case 0x3886a8u: goto label_3886a8;
        case 0x3886acu: goto label_3886ac;
        case 0x3886b0u: goto label_3886b0;
        case 0x3886b4u: goto label_3886b4;
        case 0x3886b8u: goto label_3886b8;
        case 0x3886bcu: goto label_3886bc;
        case 0x3886c0u: goto label_3886c0;
        case 0x3886c4u: goto label_3886c4;
        case 0x3886c8u: goto label_3886c8;
        case 0x3886ccu: goto label_3886cc;
        case 0x3886d0u: goto label_3886d0;
        case 0x3886d4u: goto label_3886d4;
        case 0x3886d8u: goto label_3886d8;
        case 0x3886dcu: goto label_3886dc;
        case 0x3886e0u: goto label_3886e0;
        case 0x3886e4u: goto label_3886e4;
        case 0x3886e8u: goto label_3886e8;
        case 0x3886ecu: goto label_3886ec;
        case 0x3886f0u: goto label_3886f0;
        case 0x3886f4u: goto label_3886f4;
        case 0x3886f8u: goto label_3886f8;
        case 0x3886fcu: goto label_3886fc;
        case 0x388700u: goto label_388700;
        case 0x388704u: goto label_388704;
        case 0x388708u: goto label_388708;
        case 0x38870cu: goto label_38870c;
        case 0x388710u: goto label_388710;
        case 0x388714u: goto label_388714;
        case 0x388718u: goto label_388718;
        case 0x38871cu: goto label_38871c;
        case 0x388720u: goto label_388720;
        case 0x388724u: goto label_388724;
        case 0x388728u: goto label_388728;
        case 0x38872cu: goto label_38872c;
        case 0x388730u: goto label_388730;
        case 0x388734u: goto label_388734;
        case 0x388738u: goto label_388738;
        case 0x38873cu: goto label_38873c;
        case 0x388740u: goto label_388740;
        case 0x388744u: goto label_388744;
        case 0x388748u: goto label_388748;
        case 0x38874cu: goto label_38874c;
        case 0x388750u: goto label_388750;
        case 0x388754u: goto label_388754;
        case 0x388758u: goto label_388758;
        case 0x38875cu: goto label_38875c;
        case 0x388760u: goto label_388760;
        case 0x388764u: goto label_388764;
        case 0x388768u: goto label_388768;
        case 0x38876cu: goto label_38876c;
        case 0x388770u: goto label_388770;
        case 0x388774u: goto label_388774;
        case 0x388778u: goto label_388778;
        case 0x38877cu: goto label_38877c;
        case 0x388780u: goto label_388780;
        case 0x388784u: goto label_388784;
        case 0x388788u: goto label_388788;
        case 0x38878cu: goto label_38878c;
        case 0x388790u: goto label_388790;
        case 0x388794u: goto label_388794;
        case 0x388798u: goto label_388798;
        case 0x38879cu: goto label_38879c;
        case 0x3887a0u: goto label_3887a0;
        case 0x3887a4u: goto label_3887a4;
        case 0x3887a8u: goto label_3887a8;
        case 0x3887acu: goto label_3887ac;
        case 0x3887b0u: goto label_3887b0;
        case 0x3887b4u: goto label_3887b4;
        case 0x3887b8u: goto label_3887b8;
        case 0x3887bcu: goto label_3887bc;
        case 0x3887c0u: goto label_3887c0;
        case 0x3887c4u: goto label_3887c4;
        case 0x3887c8u: goto label_3887c8;
        case 0x3887ccu: goto label_3887cc;
        case 0x3887d0u: goto label_3887d0;
        case 0x3887d4u: goto label_3887d4;
        case 0x3887d8u: goto label_3887d8;
        case 0x3887dcu: goto label_3887dc;
        case 0x3887e0u: goto label_3887e0;
        case 0x3887e4u: goto label_3887e4;
        case 0x3887e8u: goto label_3887e8;
        case 0x3887ecu: goto label_3887ec;
        case 0x3887f0u: goto label_3887f0;
        case 0x3887f4u: goto label_3887f4;
        case 0x3887f8u: goto label_3887f8;
        case 0x3887fcu: goto label_3887fc;
        case 0x388800u: goto label_388800;
        case 0x388804u: goto label_388804;
        case 0x388808u: goto label_388808;
        case 0x38880cu: goto label_38880c;
        case 0x388810u: goto label_388810;
        case 0x388814u: goto label_388814;
        case 0x388818u: goto label_388818;
        case 0x38881cu: goto label_38881c;
        case 0x388820u: goto label_388820;
        case 0x388824u: goto label_388824;
        case 0x388828u: goto label_388828;
        case 0x38882cu: goto label_38882c;
        case 0x388830u: goto label_388830;
        case 0x388834u: goto label_388834;
        case 0x388838u: goto label_388838;
        case 0x38883cu: goto label_38883c;
        case 0x388840u: goto label_388840;
        case 0x388844u: goto label_388844;
        case 0x388848u: goto label_388848;
        case 0x38884cu: goto label_38884c;
        case 0x388850u: goto label_388850;
        case 0x388854u: goto label_388854;
        case 0x388858u: goto label_388858;
        case 0x38885cu: goto label_38885c;
        case 0x388860u: goto label_388860;
        case 0x388864u: goto label_388864;
        case 0x388868u: goto label_388868;
        case 0x38886cu: goto label_38886c;
        case 0x388870u: goto label_388870;
        case 0x388874u: goto label_388874;
        case 0x388878u: goto label_388878;
        case 0x38887cu: goto label_38887c;
        case 0x388880u: goto label_388880;
        case 0x388884u: goto label_388884;
        case 0x388888u: goto label_388888;
        case 0x38888cu: goto label_38888c;
        case 0x388890u: goto label_388890;
        case 0x388894u: goto label_388894;
        case 0x388898u: goto label_388898;
        case 0x38889cu: goto label_38889c;
        case 0x3888a0u: goto label_3888a0;
        case 0x3888a4u: goto label_3888a4;
        case 0x3888a8u: goto label_3888a8;
        case 0x3888acu: goto label_3888ac;
        case 0x3888b0u: goto label_3888b0;
        case 0x3888b4u: goto label_3888b4;
        case 0x3888b8u: goto label_3888b8;
        case 0x3888bcu: goto label_3888bc;
        case 0x3888c0u: goto label_3888c0;
        case 0x3888c4u: goto label_3888c4;
        case 0x3888c8u: goto label_3888c8;
        case 0x3888ccu: goto label_3888cc;
        case 0x3888d0u: goto label_3888d0;
        case 0x3888d4u: goto label_3888d4;
        case 0x3888d8u: goto label_3888d8;
        case 0x3888dcu: goto label_3888dc;
        case 0x3888e0u: goto label_3888e0;
        case 0x3888e4u: goto label_3888e4;
        case 0x3888e8u: goto label_3888e8;
        case 0x3888ecu: goto label_3888ec;
        case 0x3888f0u: goto label_3888f0;
        case 0x3888f4u: goto label_3888f4;
        case 0x3888f8u: goto label_3888f8;
        case 0x3888fcu: goto label_3888fc;
        case 0x388900u: goto label_388900;
        case 0x388904u: goto label_388904;
        case 0x388908u: goto label_388908;
        case 0x38890cu: goto label_38890c;
        case 0x388910u: goto label_388910;
        case 0x388914u: goto label_388914;
        case 0x388918u: goto label_388918;
        case 0x38891cu: goto label_38891c;
        case 0x388920u: goto label_388920;
        case 0x388924u: goto label_388924;
        case 0x388928u: goto label_388928;
        case 0x38892cu: goto label_38892c;
        case 0x388930u: goto label_388930;
        case 0x388934u: goto label_388934;
        case 0x388938u: goto label_388938;
        case 0x38893cu: goto label_38893c;
        case 0x388940u: goto label_388940;
        case 0x388944u: goto label_388944;
        case 0x388948u: goto label_388948;
        case 0x38894cu: goto label_38894c;
        case 0x388950u: goto label_388950;
        case 0x388954u: goto label_388954;
        case 0x388958u: goto label_388958;
        case 0x38895cu: goto label_38895c;
        case 0x388960u: goto label_388960;
        case 0x388964u: goto label_388964;
        case 0x388968u: goto label_388968;
        case 0x38896cu: goto label_38896c;
        case 0x388970u: goto label_388970;
        case 0x388974u: goto label_388974;
        case 0x388978u: goto label_388978;
        case 0x38897cu: goto label_38897c;
        case 0x388980u: goto label_388980;
        case 0x388984u: goto label_388984;
        case 0x388988u: goto label_388988;
        case 0x38898cu: goto label_38898c;
        case 0x388990u: goto label_388990;
        case 0x388994u: goto label_388994;
        case 0x388998u: goto label_388998;
        case 0x38899cu: goto label_38899c;
        case 0x3889a0u: goto label_3889a0;
        case 0x3889a4u: goto label_3889a4;
        case 0x3889a8u: goto label_3889a8;
        case 0x3889acu: goto label_3889ac;
        case 0x3889b0u: goto label_3889b0;
        case 0x3889b4u: goto label_3889b4;
        case 0x3889b8u: goto label_3889b8;
        case 0x3889bcu: goto label_3889bc;
        case 0x3889c0u: goto label_3889c0;
        case 0x3889c4u: goto label_3889c4;
        case 0x3889c8u: goto label_3889c8;
        case 0x3889ccu: goto label_3889cc;
        case 0x3889d0u: goto label_3889d0;
        case 0x3889d4u: goto label_3889d4;
        case 0x3889d8u: goto label_3889d8;
        case 0x3889dcu: goto label_3889dc;
        case 0x3889e0u: goto label_3889e0;
        case 0x3889e4u: goto label_3889e4;
        case 0x3889e8u: goto label_3889e8;
        case 0x3889ecu: goto label_3889ec;
        case 0x3889f0u: goto label_3889f0;
        case 0x3889f4u: goto label_3889f4;
        case 0x3889f8u: goto label_3889f8;
        case 0x3889fcu: goto label_3889fc;
        case 0x388a00u: goto label_388a00;
        case 0x388a04u: goto label_388a04;
        case 0x388a08u: goto label_388a08;
        case 0x388a0cu: goto label_388a0c;
        case 0x388a10u: goto label_388a10;
        case 0x388a14u: goto label_388a14;
        case 0x388a18u: goto label_388a18;
        case 0x388a1cu: goto label_388a1c;
        case 0x388a20u: goto label_388a20;
        case 0x388a24u: goto label_388a24;
        case 0x388a28u: goto label_388a28;
        case 0x388a2cu: goto label_388a2c;
        case 0x388a30u: goto label_388a30;
        case 0x388a34u: goto label_388a34;
        case 0x388a38u: goto label_388a38;
        case 0x388a3cu: goto label_388a3c;
        case 0x388a40u: goto label_388a40;
        case 0x388a44u: goto label_388a44;
        case 0x388a48u: goto label_388a48;
        case 0x388a4cu: goto label_388a4c;
        case 0x388a50u: goto label_388a50;
        case 0x388a54u: goto label_388a54;
        case 0x388a58u: goto label_388a58;
        case 0x388a5cu: goto label_388a5c;
        case 0x388a60u: goto label_388a60;
        case 0x388a64u: goto label_388a64;
        case 0x388a68u: goto label_388a68;
        case 0x388a6cu: goto label_388a6c;
        case 0x388a70u: goto label_388a70;
        case 0x388a74u: goto label_388a74;
        case 0x388a78u: goto label_388a78;
        case 0x388a7cu: goto label_388a7c;
        case 0x388a80u: goto label_388a80;
        case 0x388a84u: goto label_388a84;
        case 0x388a88u: goto label_388a88;
        case 0x388a8cu: goto label_388a8c;
        case 0x388a90u: goto label_388a90;
        case 0x388a94u: goto label_388a94;
        case 0x388a98u: goto label_388a98;
        case 0x388a9cu: goto label_388a9c;
        case 0x388aa0u: goto label_388aa0;
        case 0x388aa4u: goto label_388aa4;
        case 0x388aa8u: goto label_388aa8;
        case 0x388aacu: goto label_388aac;
        case 0x388ab0u: goto label_388ab0;
        case 0x388ab4u: goto label_388ab4;
        case 0x388ab8u: goto label_388ab8;
        case 0x388abcu: goto label_388abc;
        case 0x388ac0u: goto label_388ac0;
        case 0x388ac4u: goto label_388ac4;
        case 0x388ac8u: goto label_388ac8;
        case 0x388accu: goto label_388acc;
        case 0x388ad0u: goto label_388ad0;
        case 0x388ad4u: goto label_388ad4;
        case 0x388ad8u: goto label_388ad8;
        case 0x388adcu: goto label_388adc;
        case 0x388ae0u: goto label_388ae0;
        case 0x388ae4u: goto label_388ae4;
        case 0x388ae8u: goto label_388ae8;
        case 0x388aecu: goto label_388aec;
        case 0x388af0u: goto label_388af0;
        case 0x388af4u: goto label_388af4;
        case 0x388af8u: goto label_388af8;
        case 0x388afcu: goto label_388afc;
        case 0x388b00u: goto label_388b00;
        case 0x388b04u: goto label_388b04;
        case 0x388b08u: goto label_388b08;
        case 0x388b0cu: goto label_388b0c;
        case 0x388b10u: goto label_388b10;
        case 0x388b14u: goto label_388b14;
        case 0x388b18u: goto label_388b18;
        case 0x388b1cu: goto label_388b1c;
        case 0x388b20u: goto label_388b20;
        case 0x388b24u: goto label_388b24;
        case 0x388b28u: goto label_388b28;
        case 0x388b2cu: goto label_388b2c;
        case 0x388b30u: goto label_388b30;
        case 0x388b34u: goto label_388b34;
        case 0x388b38u: goto label_388b38;
        case 0x388b3cu: goto label_388b3c;
        case 0x388b40u: goto label_388b40;
        case 0x388b44u: goto label_388b44;
        case 0x388b48u: goto label_388b48;
        case 0x388b4cu: goto label_388b4c;
        case 0x388b50u: goto label_388b50;
        case 0x388b54u: goto label_388b54;
        case 0x388b58u: goto label_388b58;
        case 0x388b5cu: goto label_388b5c;
        case 0x388b60u: goto label_388b60;
        case 0x388b64u: goto label_388b64;
        case 0x388b68u: goto label_388b68;
        case 0x388b6cu: goto label_388b6c;
        case 0x388b70u: goto label_388b70;
        case 0x388b74u: goto label_388b74;
        case 0x388b78u: goto label_388b78;
        case 0x388b7cu: goto label_388b7c;
        case 0x388b80u: goto label_388b80;
        case 0x388b84u: goto label_388b84;
        case 0x388b88u: goto label_388b88;
        case 0x388b8cu: goto label_388b8c;
        case 0x388b90u: goto label_388b90;
        case 0x388b94u: goto label_388b94;
        case 0x388b98u: goto label_388b98;
        case 0x388b9cu: goto label_388b9c;
        case 0x388ba0u: goto label_388ba0;
        case 0x388ba4u: goto label_388ba4;
        case 0x388ba8u: goto label_388ba8;
        case 0x388bacu: goto label_388bac;
        case 0x388bb0u: goto label_388bb0;
        case 0x388bb4u: goto label_388bb4;
        case 0x388bb8u: goto label_388bb8;
        case 0x388bbcu: goto label_388bbc;
        case 0x388bc0u: goto label_388bc0;
        case 0x388bc4u: goto label_388bc4;
        case 0x388bc8u: goto label_388bc8;
        case 0x388bccu: goto label_388bcc;
        case 0x388bd0u: goto label_388bd0;
        case 0x388bd4u: goto label_388bd4;
        case 0x388bd8u: goto label_388bd8;
        case 0x388bdcu: goto label_388bdc;
        case 0x388be0u: goto label_388be0;
        case 0x388be4u: goto label_388be4;
        case 0x388be8u: goto label_388be8;
        case 0x388becu: goto label_388bec;
        case 0x388bf0u: goto label_388bf0;
        case 0x388bf4u: goto label_388bf4;
        case 0x388bf8u: goto label_388bf8;
        case 0x388bfcu: goto label_388bfc;
        case 0x388c00u: goto label_388c00;
        case 0x388c04u: goto label_388c04;
        case 0x388c08u: goto label_388c08;
        case 0x388c0cu: goto label_388c0c;
        case 0x388c10u: goto label_388c10;
        case 0x388c14u: goto label_388c14;
        case 0x388c18u: goto label_388c18;
        case 0x388c1cu: goto label_388c1c;
        case 0x388c20u: goto label_388c20;
        case 0x388c24u: goto label_388c24;
        case 0x388c28u: goto label_388c28;
        case 0x388c2cu: goto label_388c2c;
        case 0x388c30u: goto label_388c30;
        case 0x388c34u: goto label_388c34;
        case 0x388c38u: goto label_388c38;
        case 0x388c3cu: goto label_388c3c;
        case 0x388c40u: goto label_388c40;
        case 0x388c44u: goto label_388c44;
        case 0x388c48u: goto label_388c48;
        case 0x388c4cu: goto label_388c4c;
        case 0x388c50u: goto label_388c50;
        case 0x388c54u: goto label_388c54;
        case 0x388c58u: goto label_388c58;
        case 0x388c5cu: goto label_388c5c;
        case 0x388c60u: goto label_388c60;
        case 0x388c64u: goto label_388c64;
        case 0x388c68u: goto label_388c68;
        case 0x388c6cu: goto label_388c6c;
        case 0x388c70u: goto label_388c70;
        case 0x388c74u: goto label_388c74;
        case 0x388c78u: goto label_388c78;
        case 0x388c7cu: goto label_388c7c;
        case 0x388c80u: goto label_388c80;
        case 0x388c84u: goto label_388c84;
        case 0x388c88u: goto label_388c88;
        case 0x388c8cu: goto label_388c8c;
        case 0x388c90u: goto label_388c90;
        case 0x388c94u: goto label_388c94;
        case 0x388c98u: goto label_388c98;
        case 0x388c9cu: goto label_388c9c;
        case 0x388ca0u: goto label_388ca0;
        case 0x388ca4u: goto label_388ca4;
        case 0x388ca8u: goto label_388ca8;
        case 0x388cacu: goto label_388cac;
        case 0x388cb0u: goto label_388cb0;
        case 0x388cb4u: goto label_388cb4;
        case 0x388cb8u: goto label_388cb8;
        case 0x388cbcu: goto label_388cbc;
        case 0x388cc0u: goto label_388cc0;
        case 0x388cc4u: goto label_388cc4;
        case 0x388cc8u: goto label_388cc8;
        case 0x388cccu: goto label_388ccc;
        case 0x388cd0u: goto label_388cd0;
        case 0x388cd4u: goto label_388cd4;
        case 0x388cd8u: goto label_388cd8;
        case 0x388cdcu: goto label_388cdc;
        case 0x388ce0u: goto label_388ce0;
        case 0x388ce4u: goto label_388ce4;
        case 0x388ce8u: goto label_388ce8;
        case 0x388cecu: goto label_388cec;
        case 0x388cf0u: goto label_388cf0;
        case 0x388cf4u: goto label_388cf4;
        case 0x388cf8u: goto label_388cf8;
        case 0x388cfcu: goto label_388cfc;
        case 0x388d00u: goto label_388d00;
        case 0x388d04u: goto label_388d04;
        case 0x388d08u: goto label_388d08;
        case 0x388d0cu: goto label_388d0c;
        case 0x388d10u: goto label_388d10;
        case 0x388d14u: goto label_388d14;
        case 0x388d18u: goto label_388d18;
        case 0x388d1cu: goto label_388d1c;
        case 0x388d20u: goto label_388d20;
        case 0x388d24u: goto label_388d24;
        case 0x388d28u: goto label_388d28;
        case 0x388d2cu: goto label_388d2c;
        case 0x388d30u: goto label_388d30;
        case 0x388d34u: goto label_388d34;
        case 0x388d38u: goto label_388d38;
        case 0x388d3cu: goto label_388d3c;
        case 0x388d40u: goto label_388d40;
        case 0x388d44u: goto label_388d44;
        case 0x388d48u: goto label_388d48;
        case 0x388d4cu: goto label_388d4c;
        case 0x388d50u: goto label_388d50;
        case 0x388d54u: goto label_388d54;
        case 0x388d58u: goto label_388d58;
        case 0x388d5cu: goto label_388d5c;
        case 0x388d60u: goto label_388d60;
        case 0x388d64u: goto label_388d64;
        case 0x388d68u: goto label_388d68;
        case 0x388d6cu: goto label_388d6c;
        case 0x388d70u: goto label_388d70;
        case 0x388d74u: goto label_388d74;
        case 0x388d78u: goto label_388d78;
        case 0x388d7cu: goto label_388d7c;
        case 0x388d80u: goto label_388d80;
        case 0x388d84u: goto label_388d84;
        case 0x388d88u: goto label_388d88;
        case 0x388d8cu: goto label_388d8c;
        case 0x388d90u: goto label_388d90;
        case 0x388d94u: goto label_388d94;
        case 0x388d98u: goto label_388d98;
        case 0x388d9cu: goto label_388d9c;
        case 0x388da0u: goto label_388da0;
        case 0x388da4u: goto label_388da4;
        case 0x388da8u: goto label_388da8;
        case 0x388dacu: goto label_388dac;
        case 0x388db0u: goto label_388db0;
        case 0x388db4u: goto label_388db4;
        case 0x388db8u: goto label_388db8;
        case 0x388dbcu: goto label_388dbc;
        case 0x388dc0u: goto label_388dc0;
        case 0x388dc4u: goto label_388dc4;
        case 0x388dc8u: goto label_388dc8;
        case 0x388dccu: goto label_388dcc;
        case 0x388dd0u: goto label_388dd0;
        case 0x388dd4u: goto label_388dd4;
        case 0x388dd8u: goto label_388dd8;
        case 0x388ddcu: goto label_388ddc;
        case 0x388de0u: goto label_388de0;
        case 0x388de4u: goto label_388de4;
        case 0x388de8u: goto label_388de8;
        case 0x388decu: goto label_388dec;
        default: break;
    }

    ctx->pc = 0x3884a0u;

label_3884a0:
    // 0x3884a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3884a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3884a4:
    // 0x3884a4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x3884a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3884a8:
    // 0x3884a8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3884a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_3884ac:
    // 0x3884ac: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x3884acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_3884b0:
    // 0x3884b0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3884b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3884b4:
    // 0x3884b4: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x3884b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_3884b8:
    // 0x3884b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3884b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3884bc:
    // 0x3884bc: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3884bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_3884c0:
    // 0x3884c0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3884c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_3884c4:
    // 0x3884c4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3884c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_3884c8:
    // 0x3884c8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3884c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3884cc:
    // 0x3884cc: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x3884ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_3884d0:
    // 0x3884d0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3884d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3884d4:
    // 0x3884d4: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x3884d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3884d8:
    // 0x3884d8: 0xc1056de  jal         func_415B78
label_3884dc:
    if (ctx->pc == 0x3884DCu) {
        ctx->pc = 0x3884DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3884D8u;
        // 0x3884dc: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3884E0u;
        goto label_3884e0;
    }
    ctx->pc = 0x3884D8u;
    SET_GPR_U32(ctx, 31, 0x3884E0u);
    ctx->pc = 0x3884DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3884D8u;
    // 0x3884dc: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415B78u, 0x3884D8u, 0x3884E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3884E0u;
label_3884e0:
    // 0x3884e0: 0x104000d1  beqz        $v0, . + 4 + (0xD1 << 2)
label_3884e4:
    if (ctx->pc == 0x3884E4u) {
        ctx->pc = 0x3884E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3884E0u;
        // 0x3884e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3884E8u;
        goto label_3884e8;
    }
    ctx->pc = 0x3884E0u;
    {
        const bool branch_taken_0x3884e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3884E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3884E0u;
        // 0x3884e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3884e0) {
            ctx->pc = 0x388828u;
            goto label_388828;
        }
    }
    ctx->pc = 0x3884E8u;
label_3884e8:
    // 0x3884e8: 0xc10573c  jal         func_415CF0
label_3884ec:
    if (ctx->pc == 0x3884ECu) {
        ctx->pc = 0x3884ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3884E8u;
        // 0x3884ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3884F0u;
        goto label_3884f0;
    }
    ctx->pc = 0x3884E8u;
    SET_GPR_U32(ctx, 31, 0x3884F0u);
    ctx->pc = 0x3884ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3884E8u;
    // 0x3884ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415CF0u, 0x3884E8u, 0x3884F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3884F0u;
label_3884f0:
    // 0x3884f0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x3884f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3884f4:
    // 0x3884f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3884f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3884f8:
    // 0x3884f8: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x3884f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_3884fc:
    // 0x3884fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3884fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_388500:
    // 0x388500: 0xc10572c  jal         func_415CB0
label_388504:
    if (ctx->pc == 0x388504u) {
        ctx->pc = 0x388504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388500u;
        // 0x388504: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388508u;
        goto label_388508;
    }
    ctx->pc = 0x388500u;
    SET_GPR_U32(ctx, 31, 0x388508u);
    ctx->pc = 0x388504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388500u;
    // 0x388504: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415CB0u, 0x388500u, 0x388508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388508u;
label_388508:
    // 0x388508: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x388508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_38850c:
    // 0x38850c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x38850cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_388510:
    // 0x388510: 0xc0e2876  jal         func_38A1D8
label_388514:
    if (ctx->pc == 0x388514u) {
        ctx->pc = 0x388514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388510u;
        // 0x388514: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388518u;
        goto label_388518;
    }
    ctx->pc = 0x388510u;
    SET_GPR_U32(ctx, 31, 0x388518u);
    ctx->pc = 0x388514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388510u;
    // 0x388514: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A1D8u, 0x388510u, 0x388518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388518u;
label_388518:
    // 0x388518: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
label_38851c:
    if (ctx->pc == 0x38851Cu) {
        ctx->pc = 0x38851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388518u;
        // 0x38851c: 0x28080  sll         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388520u;
        goto label_388520;
    }
    ctx->pc = 0x388518u;
    {
        const bool branch_taken_0x388518 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x38851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388518u;
        // 0x38851c: 0x28080  sll         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388518) {
            ctx->pc = 0x388570u;
            goto label_388570;
        }
    }
    ctx->pc = 0x388520u;
label_388520:
    // 0x388520: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x388520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_388524:
    // 0x388524: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x388524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_388528:
    // 0x388528: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x388528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_38852c:
    // 0x38852c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38852cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_388530:
    // 0x388530: 0x40f809  jalr        $v0
label_388534:
    if (ctx->pc == 0x388534u) {
        ctx->pc = 0x388534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388530u;
        // 0x388534: 0x34a5000f  ori         $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x388538u;
        goto label_388538;
    }
    ctx->pc = 0x388530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x388538u);
        ctx->pc = 0x388534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388530u;
        // 0x388534: 0x34a5000f  ori         $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388530u, 0x388538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x388538u;
label_388538:
    // 0x388538: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_38853c:
    if (ctx->pc == 0x38853Cu) {
        ctx->pc = 0x38853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388538u;
        // 0x38853c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388540u;
        goto label_388540;
    }
    ctx->pc = 0x388538u;
    {
        const bool branch_taken_0x388538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388538u;
        // 0x38853c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388538) {
            ctx->pc = 0x388574u;
            goto label_388574;
        }
    }
    ctx->pc = 0x388540u;
label_388540:
    // 0x388540: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x388540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_388544:
    // 0x388544: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x388544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_388548:
    // 0x388548: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x388548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_38854c:
    // 0x38854c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38854cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_388550:
    // 0x388550: 0xc1035f6  jal         func_40D7D8
label_388554:
    if (ctx->pc == 0x388554u) {
        ctx->pc = 0x388554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388550u;
        // 0x388554: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x388558u;
        goto label_388558;
    }
    ctx->pc = 0x388550u;
    SET_GPR_U32(ctx, 31, 0x388558u);
    ctx->pc = 0x388554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388550u;
    // 0x388554: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x388550u, 0x388558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388558u;
label_388558:
    // 0x388558: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x388558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_38855c:
    // 0x38855c: 0xc103628  jal         func_40D8A0
label_388560:
    if (ctx->pc == 0x388560u) {
        ctx->pc = 0x388560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38855Cu;
        // 0x388560: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388564u;
        goto label_388564;
    }
    ctx->pc = 0x38855Cu;
    SET_GPR_U32(ctx, 31, 0x388564u);
    ctx->pc = 0x388560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38855Cu;
    // 0x388560: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x38855Cu, 0x388564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388564u;
label_388564:
    // 0x388564: 0x1000004d  b           . + 4 + (0x4D << 2)
label_388568:
    if (ctx->pc == 0x388568u) {
        ctx->pc = 0x388568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388564u;
        // 0x388568: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38856Cu;
        goto label_38856c;
    }
    ctx->pc = 0x388564u;
    {
        const bool branch_taken_0x388564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388564u;
        // 0x388568: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388564) {
            ctx->pc = 0x38869Cu;
            goto label_38869c;
        }
    }
    ctx->pc = 0x38856Cu;
label_38856c:
    // 0x38856c: 0x0  nop
    ctx->pc = 0x38856cu;
    // NOP
label_388570:
    // 0x388570: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x388570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_388574:
    // 0x388574: 0x26b20008  addiu       $s2, $s5, 0x8
    ctx->pc = 0x388574u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_388578:
    // 0x388578: 0x8eb10008  lw          $s1, 0x8($s5)
    ctx->pc = 0x388578u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_38857c:
    // 0x38857c: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x38857cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_388580:
    // 0x388580: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x388580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_388584:
    // 0x388584: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x388584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_388588:
    // 0x388588: 0x12320043  beq         $s1, $s2, . + 4 + (0x43 << 2)
label_38858c:
    if (ctx->pc == 0x38858Cu) {
        ctx->pc = 0x38858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388588u;
        // 0x38858c: 0x27b40010  addiu       $s4, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388590u;
        goto label_388590;
    }
    ctx->pc = 0x388588u;
    {
        const bool branch_taken_0x388588 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x38858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388588u;
        // 0x38858c: 0x27b40010  addiu       $s4, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388588) {
            ctx->pc = 0x388698u;
            goto label_388698;
        }
    }
    ctx->pc = 0x388590u;
label_388590:
    // 0x388590: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x388590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_388594:
    // 0x388594: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x388594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_388598:
    // 0x388598: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x388598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38859c:
    // 0x38859c: 0x18400031  blez        $v0, . + 4 + (0x31 << 2)
label_3885a0:
    if (ctx->pc == 0x3885A0u) {
        ctx->pc = 0x3885A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38859Cu;
        // 0x3885a0: 0x8e30ffd8  lw          $s0, -0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3885A4u;
        goto label_3885a4;
    }
    ctx->pc = 0x38859Cu;
    {
        const bool branch_taken_0x38859c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3885A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38859Cu;
        // 0x3885a0: 0x8e30ffd8  lw          $s0, -0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38859c) {
            ctx->pc = 0x388664u;
            goto label_388664;
        }
    }
    ctx->pc = 0x3885A4u;
label_3885a4:
    // 0x3885a4: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x3885a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3885a8:
    // 0x3885a8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3885a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3885ac:
    // 0x3885ac: 0x30e40003  andi        $a0, $a3, 0x3
    ctx->pc = 0x3885acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
label_3885b0:
    // 0x3885b0: 0x18e00013  blez        $a3, . + 4 + (0x13 << 2)
label_3885b4:
    if (ctx->pc == 0x3885B4u) {
        ctx->pc = 0x3885B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3885B0u;
        // 0x3885b4: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3885B8u;
        goto label_3885b8;
    }
    ctx->pc = 0x3885B0u;
    {
        const bool branch_taken_0x3885b0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x3885B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3885B0u;
        // 0x3885b4: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3885b0) {
            ctx->pc = 0x388600u;
            goto label_388600;
        }
    }
    ctx->pc = 0x3885B8u;
label_3885b8:
    // 0x3885b8: 0x5080001a  beql        $a0, $zero, . + 4 + (0x1A << 2)
label_3885bc:
    if (ctx->pc == 0x3885BCu) {
        ctx->pc = 0x3885BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3885B8u;
        // 0x3885bc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3885C0u;
        goto label_3885c0;
    }
    ctx->pc = 0x3885B8u;
    {
        const bool branch_taken_0x3885b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3885b8) {
            ctx->pc = 0x3885BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3885B8u;
            // 0x3885bc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388624u;
            goto label_388624;
        }
    }
    ctx->pc = 0x3885C0u;
label_3885c0:
    // 0x3885c0: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x3885c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_3885c4:
    // 0x3885c4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_3885c8:
    if (ctx->pc == 0x3885C8u) {
        ctx->pc = 0x3885C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3885C4u;
        // 0x3885c8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3885CCu;
        goto label_3885cc;
    }
    ctx->pc = 0x3885C4u;
    {
        const bool branch_taken_0x3885c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3885c4) {
            ctx->pc = 0x3885C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3885C4u;
            // 0x3885c8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388604u;
            goto label_388604;
        }
    }
    ctx->pc = 0x3885CCu;
label_3885cc:
    // 0x3885cc: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3885ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_3885d0:
    // 0x3885d0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3885d4:
    if (ctx->pc == 0x3885D4u) {
        ctx->pc = 0x3885D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3885D0u;
        // 0x3885d4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3885D8u;
        goto label_3885d8;
    }
    ctx->pc = 0x3885D0u;
    {
        const bool branch_taken_0x3885d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3885d0) {
            ctx->pc = 0x3885D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3885D0u;
            // 0x3885d4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3885F0u;
            goto label_3885f0;
        }
    }
    ctx->pc = 0x3885D8u;
label_3885d8:
    // 0x3885d8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3885d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3885dc:
    // 0x3885dc: 0x10500022  beq         $v0, $s0, . + 4 + (0x22 << 2)
label_3885e0:
    if (ctx->pc == 0x3885E0u) {
        ctx->pc = 0x3885E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3885DCu;
        // 0x3885e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3885E4u;
        goto label_3885e4;
    }
    ctx->pc = 0x3885DCu;
    {
        const bool branch_taken_0x3885dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3885E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3885DCu;
        // 0x3885e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3885dc) {
            ctx->pc = 0x388668u;
            goto label_388668;
        }
    }
    ctx->pc = 0x3885E4u;
label_3885e4:
    // 0x3885e4: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x3885e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_3885e8:
    // 0x3885e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3885e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3885ec:
    // 0x3885ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3885ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3885f0:
    // 0x3885f0: 0x1050001d  beq         $v0, $s0, . + 4 + (0x1D << 2)
label_3885f4:
    if (ctx->pc == 0x3885F4u) {
        ctx->pc = 0x3885F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3885F0u;
        // 0x3885f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3885F8u;
        goto label_3885f8;
    }
    ctx->pc = 0x3885F0u;
    {
        const bool branch_taken_0x3885f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3885F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3885F0u;
        // 0x3885f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3885f0) {
            ctx->pc = 0x388668u;
            goto label_388668;
        }
    }
    ctx->pc = 0x3885F8u;
label_3885f8:
    // 0x3885f8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3885f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3885fc:
    // 0x3885fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3885fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_388600:
    // 0x388600: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x388600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_388604:
    // 0x388604: 0x10500018  beq         $v0, $s0, . + 4 + (0x18 << 2)
label_388608:
    if (ctx->pc == 0x388608u) {
        ctx->pc = 0x388608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388604u;
        // 0x388608: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38860Cu;
        goto label_38860c;
    }
    ctx->pc = 0x388604u;
    {
        const bool branch_taken_0x388604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x388608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388604u;
        // 0x388608: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388604) {
            ctx->pc = 0x388668u;
            goto label_388668;
        }
    }
    ctx->pc = 0x38860Cu;
label_38860c:
    // 0x38860c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x38860cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_388610:
    // 0x388610: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x388610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_388614:
    // 0x388614: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_388618:
    if (ctx->pc == 0x388618u) {
        ctx->pc = 0x388618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388614u;
        // 0x388618: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38861Cu;
        goto label_38861c;
    }
    ctx->pc = 0x388614u;
    {
        const bool branch_taken_0x388614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388614u;
        // 0x388618: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388614) {
            ctx->pc = 0x388664u;
            goto label_388664;
        }
    }
    ctx->pc = 0x38861Cu;
label_38861c:
    // 0x38861c: 0x0  nop
    ctx->pc = 0x38861cu;
    // NOP
label_388620:
    // 0x388620: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x388620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_388624:
    // 0x388624: 0x54500003  bnel        $v0, $s0, . + 4 + (0x3 << 2)
label_388628:
    if (ctx->pc == 0x388628u) {
        ctx->pc = 0x388628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388624u;
        // 0x388628: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38862Cu;
        goto label_38862c;
    }
    ctx->pc = 0x388624u;
    {
        const bool branch_taken_0x388624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x388624) {
            ctx->pc = 0x388628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x388624u;
            // 0x388628: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388634u;
            goto label_388634;
        }
    }
    ctx->pc = 0x38862Cu;
label_38862c:
    // 0x38862c: 0x1000000e  b           . + 4 + (0xE << 2)
label_388630:
    if (ctx->pc == 0x388630u) {
        ctx->pc = 0x388630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38862Cu;
        // 0x388630: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388634u;
        goto label_388634;
    }
    ctx->pc = 0x38862Cu;
    {
        const bool branch_taken_0x38862c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38862Cu;
        // 0x388630: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38862c) {
            ctx->pc = 0x388668u;
            goto label_388668;
        }
    }
    ctx->pc = 0x388634u;
label_388634:
    // 0x388634: 0x1050000c  beq         $v0, $s0, . + 4 + (0xC << 2)
label_388638:
    if (ctx->pc == 0x388638u) {
        ctx->pc = 0x388638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388634u;
        // 0x388638: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38863Cu;
        goto label_38863c;
    }
    ctx->pc = 0x388634u;
    {
        const bool branch_taken_0x388634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x388638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388634u;
        // 0x388638: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388634) {
            ctx->pc = 0x388668u;
            goto label_388668;
        }
    }
    ctx->pc = 0x38863Cu;
label_38863c:
    // 0x38863c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x38863cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_388640:
    // 0x388640: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
label_388644:
    if (ctx->pc == 0x388644u) {
        ctx->pc = 0x388644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388640u;
        // 0x388644: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388648u;
        goto label_388648;
    }
    ctx->pc = 0x388640u;
    {
        const bool branch_taken_0x388640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x388644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388640u;
        // 0x388644: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388640) {
            ctx->pc = 0x388668u;
            goto label_388668;
        }
    }
    ctx->pc = 0x388648u;
label_388648:
    // 0x388648: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x388648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_38864c:
    // 0x38864c: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
label_388650:
    if (ctx->pc == 0x388650u) {
        ctx->pc = 0x388650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38864Cu;
        // 0x388650: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388654u;
        goto label_388654;
    }
    ctx->pc = 0x38864Cu;
    {
        const bool branch_taken_0x38864c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x388650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38864Cu;
        // 0x388650: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38864c) {
            ctx->pc = 0x388668u;
            goto label_388668;
        }
    }
    ctx->pc = 0x388654u;
label_388654:
    // 0x388654: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x388654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_388658:
    // 0x388658: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x388658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_38865c:
    // 0x38865c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_388660:
    if (ctx->pc == 0x388660u) {
        ctx->pc = 0x388660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38865Cu;
        // 0x388660: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388664u;
        goto label_388664;
    }
    ctx->pc = 0x38865Cu;
    {
        const bool branch_taken_0x38865c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38865Cu;
        // 0x388660: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38865c) {
            ctx->pc = 0x388620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388620;
        }
    }
    ctx->pc = 0x388664u;
label_388664:
    // 0x388664: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x388664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_388668:
    // 0x388668: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_38866c:
    if (ctx->pc == 0x38866Cu) {
        ctx->pc = 0x38866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388668u;
        // 0x38866c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388670u;
        goto label_388670;
    }
    ctx->pc = 0x388668u;
    {
        const bool branch_taken_0x388668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x388668) {
            ctx->pc = 0x38866Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x388668u;
            // 0x38866c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388690u;
            goto label_388690;
        }
    }
    ctx->pc = 0x388670u;
label_388670:
    // 0x388670: 0xc0e3444  jal         func_38D110
label_388674:
    if (ctx->pc == 0x388674u) {
        ctx->pc = 0x388674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388670u;
        // 0x388674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388678u;
        goto label_388678;
    }
    ctx->pc = 0x388670u;
    SET_GPR_U32(ctx, 31, 0x388678u);
    ctx->pc = 0x388674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388670u;
    // 0x388674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D110u, 0x388670u, 0x388678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388678u;
label_388678:
    // 0x388678: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x388678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_38867c:
    // 0x38867c: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x38867cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_388680:
    // 0x388680: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x388680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_388684:
    // 0x388684: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x388684u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_388688:
    // 0x388688: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x388688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_38868c:
    // 0x38868c: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x38868cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_388690:
    // 0x388690: 0x1633ffc1  bne         $s1, $s3, . + 4 + (-0x3F << 2)
label_388694:
    if (ctx->pc == 0x388694u) {
        ctx->pc = 0x388694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388690u;
        // 0x388694: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388698u;
        goto label_388698;
    }
    ctx->pc = 0x388690u;
    {
        const bool branch_taken_0x388690 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x388694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388690u;
        // 0x388694: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388690) {
            ctx->pc = 0x388598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388598;
        }
    }
    ctx->pc = 0x388698u;
label_388698:
    // 0x388698: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x388698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38869c:
    // 0x38869c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3886a0:
    if (ctx->pc == 0x3886A0u) {
        ctx->pc = 0x3886A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38869Cu;
        // 0x3886a0: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3886A4u;
        goto label_3886a4;
    }
    ctx->pc = 0x38869Cu;
    {
        const bool branch_taken_0x38869c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3886A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38869Cu;
        // 0x3886a0: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38869c) {
            ctx->pc = 0x3886ACu;
            goto label_3886ac;
        }
    }
    ctx->pc = 0x3886A4u;
label_3886a4:
    // 0x3886a4: 0x10000060  b           . + 4 + (0x60 << 2)
label_3886a8:
    if (ctx->pc == 0x3886A8u) {
        ctx->pc = 0x3886A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3886A4u;
        // 0x3886a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3886ACu;
        goto label_3886ac;
    }
    ctx->pc = 0x3886A4u;
    {
        const bool branch_taken_0x3886a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3886A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3886A4u;
        // 0x3886a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3886a4) {
            ctx->pc = 0x388828u;
            goto label_388828;
        }
    }
    ctx->pc = 0x3886ACu;
label_3886ac:
    // 0x3886ac: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x3886acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3886b0:
    // 0x3886b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3886b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3886b4:
    // 0x3886b4: 0x26b20008  addiu       $s2, $s5, 0x8
    ctx->pc = 0x3886b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_3886b8:
    // 0x3886b8: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x3886b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3886bc:
    // 0x3886bc: 0x26b60010  addiu       $s6, $s5, 0x10
    ctx->pc = 0x3886bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_3886c0:
    // 0x3886c0: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
label_3886c4:
    if (ctx->pc == 0x3886C4u) {
        ctx->pc = 0x3886C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3886C0u;
        // 0x3886c4: 0x26b70018  addiu       $s7, $s5, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3886C8u;
        goto label_3886c8;
    }
    ctx->pc = 0x3886C0u;
    {
        const bool branch_taken_0x3886c0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3886C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3886C0u;
        // 0x3886c4: 0x26b70018  addiu       $s7, $s5, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3886c0) {
            ctx->pc = 0x3886FCu;
            goto label_3886fc;
        }
    }
    ctx->pc = 0x3886C8u;
label_3886c8:
    // 0x3886c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3886c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3886cc:
    // 0x3886cc: 0x0  nop
    ctx->pc = 0x3886ccu;
    // NOP
label_3886d0:
    // 0x3886d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3886d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3886d4:
    // 0x3886d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3886d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3886d8:
    // 0x3886d8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3886d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3886dc:
    // 0x3886dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3886dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3886e0:
    // 0x3886e0: 0xc0e2ea2  jal         func_38BA88
label_3886e4:
    if (ctx->pc == 0x3886E4u) {
        ctx->pc = 0x3886E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3886E0u;
        // 0x3886e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3886E8u;
        goto label_3886e8;
    }
    ctx->pc = 0x3886E0u;
    SET_GPR_U32(ctx, 31, 0x3886E8u);
    ctx->pc = 0x3886E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3886E0u;
    // 0x3886e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38BA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38BA88u, 0x3886E0u, 0x3886E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3886E8u;
label_3886e8:
    // 0x3886e8: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x3886e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3886ec:
    // 0x3886ec: 0x2663000c  addiu       $v1, $s3, 0xC
    ctx->pc = 0x3886ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_3886f0:
    // 0x3886f0: 0x204202a  slt         $a0, $s0, $a0
    ctx->pc = 0x3886f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3886f4:
    // 0x3886f4: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
label_3886f8:
    if (ctx->pc == 0x3886F8u) {
        ctx->pc = 0x3886F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3886F4u;
        // 0x3886f8: 0x629821  addu        $s3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3886FCu;
        goto label_3886fc;
    }
    ctx->pc = 0x3886F4u;
    {
        const bool branch_taken_0x3886f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3886F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3886F4u;
        // 0x3886f8: 0x629821  addu        $s3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3886f4) {
            ctx->pc = 0x3886D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3886d0;
        }
    }
    ctx->pc = 0x3886FCu;
label_3886fc:
    // 0x3886fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3886fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_388700:
    // 0x388700: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x388700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_388704:
    // 0x388704: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x388704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_388708:
    // 0x388708: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x388708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_38870c:
    // 0x38870c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x38870cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_388710:
    // 0x388710: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_388714:
    if (ctx->pc == 0x388714u) {
        ctx->pc = 0x388714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388710u;
        // 0x388714: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388718u;
        goto label_388718;
    }
    ctx->pc = 0x388710u;
    {
        const bool branch_taken_0x388710 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x388714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388710u;
        // 0x388714: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388710) {
            ctx->pc = 0x388744u;
            goto label_388744;
        }
    }
    ctx->pc = 0x388718u;
label_388718:
    // 0x388718: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x388718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38871c:
    // 0x38871c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x38871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_388720:
    // 0x388720: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x388720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_388724:
    // 0x388724: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x388724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_388728:
    // 0x388728: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x388728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38872c:
    // 0x38872c: 0xc0e3414  jal         func_38D050
label_388730:
    if (ctx->pc == 0x388730u) {
        ctx->pc = 0x388730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38872Cu;
        // 0x388730: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388734u;
        goto label_388734;
    }
    ctx->pc = 0x38872Cu;
    SET_GPR_U32(ctx, 31, 0x388734u);
    ctx->pc = 0x388730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38872Cu;
    // 0x388730: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x38872Cu, 0x388734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388734u;
label_388734:
    // 0x388734: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x388734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_388738:
    // 0x388738: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x388738u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_38873c:
    // 0x38873c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_388740:
    if (ctx->pc == 0x388740u) {
        ctx->pc = 0x388740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38873Cu;
        // 0x388740: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388744u;
        goto label_388744;
    }
    ctx->pc = 0x38873Cu;
    {
        const bool branch_taken_0x38873c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x388740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38873Cu;
        // 0x388740: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38873c) {
            ctx->pc = 0x388720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388720;
        }
    }
    ctx->pc = 0x388744u;
label_388744:
    // 0x388744: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x388744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_388748:
    // 0x388748: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_38874c:
    if (ctx->pc == 0x38874Cu) {
        ctx->pc = 0x38874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388748u;
        // 0x38874c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388750u;
        goto label_388750;
    }
    ctx->pc = 0x388748u;
    {
        const bool branch_taken_0x388748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388748u;
        // 0x38874c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388748) {
            ctx->pc = 0x388760u;
            goto label_388760;
        }
    }
    ctx->pc = 0x388750u;
label_388750:
    // 0x388750: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x388750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_388754:
    // 0x388754: 0x40f809  jalr        $v0
label_388758:
    if (ctx->pc == 0x388758u) {
        ctx->pc = 0x38875Cu;
        goto label_38875c;
    }
    ctx->pc = 0x388754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38875Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388754u, 0x38875Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38875Cu;
label_38875c:
    // 0x38875c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x38875cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_388760:
    // 0x388760: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x388760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_388764:
    // 0x388764: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x388764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_388768:
    // 0x388768: 0x1072000a  beq         $v1, $s2, . + 4 + (0xA << 2)
label_38876c:
    if (ctx->pc == 0x38876Cu) {
        ctx->pc = 0x38876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388768u;
        // 0x38876c: 0x2451aa60  addiu       $s1, $v0, -0x55A0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388770u;
        goto label_388770;
    }
    ctx->pc = 0x388768u;
    {
        const bool branch_taken_0x388768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x38876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388768u;
        // 0x38876c: 0x2451aa60  addiu       $s1, $v0, -0x55A0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388768) {
            ctx->pc = 0x388794u;
            goto label_388794;
        }
    }
    ctx->pc = 0x388770u;
label_388770:
    // 0x388770: 0x2464ffc0  addiu       $a0, $v1, -0x40
    ctx->pc = 0x388770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_388774:
    // 0x388774: 0x0  nop
    ctx->pc = 0x388774u;
    // NOP
label_388778:
    // 0x388778: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x388778u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38877c:
    // 0x38877c: 0x220f809  jalr        $s1
label_388780:
    if (ctx->pc == 0x388780u) {
        ctx->pc = 0x388780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38877Cu;
        // 0x388780: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388784u;
        goto label_388784;
    }
    ctx->pc = 0x38877Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x388784u);
        ctx->pc = 0x388780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38877Cu;
        // 0x388780: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38877Cu, 0x388784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x388784u;
label_388784:
    // 0x388784: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_388788:
    if (ctx->pc == 0x388788u) {
        ctx->pc = 0x388788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388784u;
        // 0x388788: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38878Cu;
        goto label_38878c;
    }
    ctx->pc = 0x388784u;
    {
        const bool branch_taken_0x388784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388784u;
        // 0x388788: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388784) {
            ctx->pc = 0x388794u;
            goto label_388794;
        }
    }
    ctx->pc = 0x38878Cu;
label_38878c:
    // 0x38878c: 0x1472fffa  bne         $v1, $s2, . + 4 + (-0x6 << 2)
label_388790:
    if (ctx->pc == 0x388790u) {
        ctx->pc = 0x388790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38878Cu;
        // 0x388790: 0x2464ffc0  addiu       $a0, $v1, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388794u;
        goto label_388794;
    }
    ctx->pc = 0x38878Cu;
    {
        const bool branch_taken_0x38878c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x388790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38878Cu;
        // 0x388790: 0x2464ffc0  addiu       $a0, $v1, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38878c) {
            ctx->pc = 0x388778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388778;
        }
    }
    ctx->pc = 0x388794u;
label_388794:
    // 0x388794: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x388794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_388798:
    // 0x388798: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x388798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_38879c:
    // 0x38879c: 0x1076000b  beq         $v1, $s6, . + 4 + (0xB << 2)
label_3887a0:
    if (ctx->pc == 0x3887A0u) {
        ctx->pc = 0x3887A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38879Cu;
        // 0x3887a0: 0x2451a990  addiu       $s1, $v0, -0x5670 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3887A4u;
        goto label_3887a4;
    }
    ctx->pc = 0x38879Cu;
    {
        const bool branch_taken_0x38879c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x3887A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38879Cu;
        // 0x3887a0: 0x2451a990  addiu       $s1, $v0, -0x5670 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38879c) {
            ctx->pc = 0x3887CCu;
            goto label_3887cc;
        }
    }
    ctx->pc = 0x3887A4u;
label_3887a4:
    // 0x3887a4: 0x8f84a98c  lw          $a0, -0x5674($gp)
    ctx->pc = 0x3887a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945164)));
label_3887a8:
    // 0x3887a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3887a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3887ac:
    // 0x3887ac: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3887acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3887b0:
    // 0x3887b0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3887b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3887b4:
    // 0x3887b4: 0x220f809  jalr        $s1
label_3887b8:
    if (ctx->pc == 0x3887B8u) {
        ctx->pc = 0x3887B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3887B4u;
        // 0x3887b8: 0x642023  subu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3887BCu;
        goto label_3887bc;
    }
    ctx->pc = 0x3887B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x3887BCu);
        ctx->pc = 0x3887B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3887B4u;
        // 0x3887b8: 0x642023  subu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3887B4u, 0x3887BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3887BCu;
label_3887bc:
    // 0x3887bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3887c0:
    if (ctx->pc == 0x3887C0u) {
        ctx->pc = 0x3887C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3887BCu;
        // 0x3887c0: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3887C4u;
        goto label_3887c4;
    }
    ctx->pc = 0x3887BCu;
    {
        const bool branch_taken_0x3887bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3887C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3887BCu;
        // 0x3887c0: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3887bc) {
            ctx->pc = 0x3887CCu;
            goto label_3887cc;
        }
    }
    ctx->pc = 0x3887C4u;
label_3887c4:
    // 0x3887c4: 0x5476fff8  bnel        $v1, $s6, . + 4 + (-0x8 << 2)
label_3887c8:
    if (ctx->pc == 0x3887C8u) {
        ctx->pc = 0x3887C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3887C4u;
        // 0x3887c8: 0x8f84a98c  lw          $a0, -0x5674($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3887CCu;
        goto label_3887cc;
    }
    ctx->pc = 0x3887C4u;
    {
        const bool branch_taken_0x3887c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        if (branch_taken_0x3887c4) {
            ctx->pc = 0x3887C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3887C4u;
            // 0x3887c8: 0x8f84a98c  lw          $a0, -0x5674($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3887A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3887a8;
        }
    }
    ctx->pc = 0x3887CCu;
label_3887cc:
    // 0x3887cc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3887ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_3887d0:
    // 0x3887d0: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x3887d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_3887d4:
    // 0x3887d4: 0x1077000b  beq         $v1, $s7, . + 4 + (0xB << 2)
label_3887d8:
    if (ctx->pc == 0x3887D8u) {
        ctx->pc = 0x3887D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3887D4u;
        // 0x3887d8: 0x2451a9e0  addiu       $s1, $v0, -0x5620 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3887DCu;
        goto label_3887dc;
    }
    ctx->pc = 0x3887D4u;
    {
        const bool branch_taken_0x3887d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x3887D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3887D4u;
        // 0x3887d8: 0x2451a9e0  addiu       $s1, $v0, -0x5620 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3887d4) {
            ctx->pc = 0x388804u;
            goto label_388804;
        }
    }
    ctx->pc = 0x3887DCu;
label_3887dc:
    // 0x3887dc: 0x8f84a988  lw          $a0, -0x5678($gp)
    ctx->pc = 0x3887dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945160)));
label_3887e0:
    // 0x3887e0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3887e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3887e4:
    // 0x3887e4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3887e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3887e8:
    // 0x3887e8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3887e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3887ec:
    // 0x3887ec: 0x220f809  jalr        $s1
label_3887f0:
    if (ctx->pc == 0x3887F0u) {
        ctx->pc = 0x3887F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3887ECu;
        // 0x3887f0: 0x642023  subu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3887F4u;
        goto label_3887f4;
    }
    ctx->pc = 0x3887ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x3887F4u);
        ctx->pc = 0x3887F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3887ECu;
        // 0x3887f0: 0x642023  subu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3887ECu, 0x3887F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3887F4u;
label_3887f4:
    // 0x3887f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3887f8:
    if (ctx->pc == 0x3887F8u) {
        ctx->pc = 0x3887F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3887F4u;
        // 0x3887f8: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3887FCu;
        goto label_3887fc;
    }
    ctx->pc = 0x3887F4u;
    {
        const bool branch_taken_0x3887f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3887F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3887F4u;
        // 0x3887f8: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3887f4) {
            ctx->pc = 0x388804u;
            goto label_388804;
        }
    }
    ctx->pc = 0x3887FCu;
label_3887fc:
    // 0x3887fc: 0x5477fff8  bnel        $v1, $s7, . + 4 + (-0x8 << 2)
label_388800:
    if (ctx->pc == 0x388800u) {
        ctx->pc = 0x388800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3887FCu;
        // 0x388800: 0x8f84a988  lw          $a0, -0x5678($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388804u;
        goto label_388804;
    }
    ctx->pc = 0x3887FCu;
    {
        const bool branch_taken_0x3887fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        if (branch_taken_0x3887fc) {
            ctx->pc = 0x388800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3887FCu;
            // 0x388800: 0x8f84a988  lw          $a0, -0x5678($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3887E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3887e0;
        }
    }
    ctx->pc = 0x388804u;
label_388804:
    // 0x388804: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x388804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_388808:
    // 0x388808: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x388808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_38880c:
    // 0x38880c: 0xc104aec  jal         func_412BB0
label_388810:
    if (ctx->pc == 0x388810u) {
        ctx->pc = 0x388810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38880Cu;
        // 0x388810: 0x2484adb8  addiu       $a0, $a0, -0x5248 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388814u;
        goto label_388814;
    }
    ctx->pc = 0x38880Cu;
    SET_GPR_U32(ctx, 31, 0x388814u);
    ctx->pc = 0x388810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38880Cu;
    // 0x388810: 0x2484adb8  addiu       $a0, $a0, -0x5248 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412BB0u, 0x38880Cu, 0x388814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388814u;
label_388814:
    // 0x388814: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x388814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_388818:
    // 0x388818: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x388818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_38881c:
    // 0x38881c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38881cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_388820:
    // 0x388820: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x388820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_388824:
    // 0x388824: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x388824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_388828:
    // 0x388828: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x388828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_38882c:
    // 0x38882c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x38882cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_388830:
    // 0x388830: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x388830u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_388834:
    // 0x388834: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x388834u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_388838:
    // 0x388838: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x388838u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_38883c:
    // 0x38883c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x38883cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_388840:
    // 0x388840: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x388840u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_388844:
    // 0x388844: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x388844u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_388848:
    // 0x388848: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x388848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_38884c:
    // 0x38884c: 0x3e00008  jr          $ra
label_388850:
    if (ctx->pc == 0x388850u) {
        ctx->pc = 0x388850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38884Cu;
        // 0x388850: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388854u;
        goto label_388854;
    }
    ctx->pc = 0x38884Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38884Cu;
        // 0x388850: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38884Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x388854u;
label_388854:
    // 0x388854: 0x0  nop
    ctx->pc = 0x388854u;
    // NOP
label_388858:
    // 0x388858: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x388858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_38885c:
    // 0x38885c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x38885cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_388860:
    // 0x388860: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x388860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_388864:
    // 0x388864: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x388864u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_388868:
    // 0x388868: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x388868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_38886c:
    // 0x38886c: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x38886cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_388870:
    // 0x388870: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x388870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_388874:
    // 0x388874: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x388874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_388878:
    // 0x388878: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x388878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_38887c:
    // 0x38887c: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x38887cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_388880:
    // 0x388880: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x388880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_388884:
    // 0x388884: 0xc0e2128  jal         func_3884A0
label_388888:
    if (ctx->pc == 0x388888u) {
        ctx->pc = 0x388888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388884u;
        // 0x388888: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38888Cu;
        goto label_38888c;
    }
    ctx->pc = 0x388884u;
    SET_GPR_U32(ctx, 31, 0x38888Cu);
    ctx->pc = 0x388888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388884u;
    // 0x388888: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3884A0u;
    goto label_3884a0;
    ctx->pc = 0x38888Cu;
label_38888c:
    // 0x38888c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x38888cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_388890:
    // 0x388890: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x388890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_388894:
    // 0x388894: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x388894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_388898:
    // 0x388898: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x388898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_38889c:
    // 0x38889c: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x38889cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_3888a0:
    // 0x3888a0: 0xc103404  jal         func_40D010
label_3888a4:
    if (ctx->pc == 0x3888A4u) {
        ctx->pc = 0x3888A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3888A0u;
        // 0x3888a4: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3888A8u;
        goto label_3888a8;
    }
    ctx->pc = 0x3888A0u;
    SET_GPR_U32(ctx, 31, 0x3888A8u);
    ctx->pc = 0x3888A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3888A0u;
    // 0x3888a4: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x3888A0u, 0x3888A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3888A8u;
label_3888a8:
    // 0x3888a8: 0x10400145  beqz        $v0, . + 4 + (0x145 << 2)
label_3888ac:
    if (ctx->pc == 0x3888ACu) {
        ctx->pc = 0x3888ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3888A8u;
        // 0x3888ac: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3888B0u;
        goto label_3888b0;
    }
    ctx->pc = 0x3888A8u;
    {
        const bool branch_taken_0x3888a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3888ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3888A8u;
        // 0x3888ac: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3888a8) {
            ctx->pc = 0x388DC0u;
            goto label_388dc0;
        }
    }
    ctx->pc = 0x3888B0u;
label_3888b0:
    // 0x3888b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3888b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3888b4:
    // 0x3888b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3888b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3888b8:
    // 0x3888b8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x3888b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3888bc:
    // 0x3888bc: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x3888bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_3888c0:
    // 0x3888c0: 0xc103404  jal         func_40D010
label_3888c4:
    if (ctx->pc == 0x3888C4u) {
        ctx->pc = 0x3888C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3888C0u;
        // 0x3888c4: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3888C8u;
        goto label_3888c8;
    }
    ctx->pc = 0x3888C0u;
    SET_GPR_U32(ctx, 31, 0x3888C8u);
    ctx->pc = 0x3888C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3888C0u;
    // 0x3888c4: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x3888C0u, 0x3888C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3888C8u;
label_3888c8:
    // 0x3888c8: 0x1040013d  beqz        $v0, . + 4 + (0x13D << 2)
label_3888cc:
    if (ctx->pc == 0x3888CCu) {
        ctx->pc = 0x3888CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3888C8u;
        // 0x3888cc: 0x3c050039  lui         $a1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3888D0u;
        goto label_3888d0;
    }
    ctx->pc = 0x3888C8u;
    {
        const bool branch_taken_0x3888c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3888CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3888C8u;
        // 0x3888cc: 0x3c050039  lui         $a1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3888c8) {
            ctx->pc = 0x388DC0u;
            goto label_388dc0;
        }
    }
    ctx->pc = 0x3888D0u;
label_3888d0:
    // 0x3888d0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3888d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3888d4:
    // 0x3888d4: 0x24a5a660  addiu       $a1, $a1, -0x59A0
    ctx->pc = 0x3888d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944352));
label_3888d8:
    // 0x3888d8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x3888d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_3888dc:
    // 0x3888dc: 0xc0e2628  jal         func_3898A0
label_3888e0:
    if (ctx->pc == 0x3888E0u) {
        ctx->pc = 0x3888E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3888DCu;
        // 0x3888e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3888E4u;
        goto label_3888e4;
    }
    ctx->pc = 0x3888DCu;
    SET_GPR_U32(ctx, 31, 0x3888E4u);
    ctx->pc = 0x3888E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3888DCu;
    // 0x3888e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x3888DCu, 0x3888E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3888E4u;
label_3888e4:
    // 0x3888e4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x3888e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_3888e8:
    // 0x3888e8: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x3888e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_3888ec:
    // 0x3888ec: 0x24a5a678  addiu       $a1, $a1, -0x5988
    ctx->pc = 0x3888ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944376));
label_3888f0:
    // 0x3888f0: 0x27a60044  addiu       $a2, $sp, 0x44
    ctx->pc = 0x3888f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_3888f4:
    // 0x3888f4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3888f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_3888f8:
    // 0x3888f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3888f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3888fc:
    // 0x3888fc: 0xc0e2646  jal         func_389918
label_388900:
    if (ctx->pc == 0x388900u) {
        ctx->pc = 0x388900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3888FCu;
        // 0x388900: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388904u;
        goto label_388904;
    }
    ctx->pc = 0x3888FCu;
    SET_GPR_U32(ctx, 31, 0x388904u);
    ctx->pc = 0x388900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3888FCu;
    // 0x388900: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389918u, 0x3888FCu, 0x388904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388904u;
label_388904:
    // 0x388904: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x388904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_388908:
    // 0x388908: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x388908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
label_38890c:
    // 0x38890c: 0x24a5a690  addiu       $a1, $a1, -0x5970
    ctx->pc = 0x38890cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944400));
label_388910:
    // 0x388910: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x388910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_388914:
    // 0x388914: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x388914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_388918:
    // 0x388918: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x388918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_38891c:
    // 0x38891c: 0xc0e2666  jal         func_389998
label_388920:
    if (ctx->pc == 0x388920u) {
        ctx->pc = 0x388920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38891Cu;
        // 0x388920: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388924u;
        goto label_388924;
    }
    ctx->pc = 0x38891Cu;
    SET_GPR_U32(ctx, 31, 0x388924u);
    ctx->pc = 0x388920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38891Cu;
    // 0x388920: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389998u, 0x38891Cu, 0x388924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388924u;
label_388924:
    // 0x388924: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x388924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_388928:
    // 0x388928: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x388928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_38892c:
    // 0x38892c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x38892cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_388930:
    // 0x388930: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x388930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_388934:
    // 0x388934: 0xc10486e  jal         func_4121B8
label_388938:
    if (ctx->pc == 0x388938u) {
        ctx->pc = 0x388938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388934u;
        // 0x388938: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38893Cu;
        goto label_38893c;
    }
    ctx->pc = 0x388934u;
    SET_GPR_U32(ctx, 31, 0x38893Cu);
    ctx->pc = 0x388938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388934u;
    // 0x388938: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x388934u, 0x38893Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38893Cu;
label_38893c:
    // 0x38893c: 0x10400120  beqz        $v0, . + 4 + (0x120 << 2)
label_388940:
    if (ctx->pc == 0x388940u) {
        ctx->pc = 0x388940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38893Cu;
        // 0x388940: 0x27a40014  addiu       $a0, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388944u;
        goto label_388944;
    }
    ctx->pc = 0x38893Cu;
    {
        const bool branch_taken_0x38893c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38893Cu;
        // 0x388940: 0x27a40014  addiu       $a0, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38893c) {
            ctx->pc = 0x388DC0u;
            goto label_388dc0;
        }
    }
    ctx->pc = 0x388944u;
label_388944:
    // 0x388944: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x388944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_388948:
    // 0x388948: 0xc1056de  jal         func_415B78
label_38894c:
    if (ctx->pc == 0x38894Cu) {
        ctx->pc = 0x38894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388948u;
        // 0x38894c: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388950u;
        goto label_388950;
    }
    ctx->pc = 0x388948u;
    SET_GPR_U32(ctx, 31, 0x388950u);
    ctx->pc = 0x38894Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388948u;
    // 0x38894c: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415B78u, 0x388948u, 0x388950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388950u;
label_388950:
    // 0x388950: 0x1040011b  beqz        $v0, . + 4 + (0x11B << 2)
label_388954:
    if (ctx->pc == 0x388954u) {
        ctx->pc = 0x388954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388950u;
        // 0x388954: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388958u;
        goto label_388958;
    }
    ctx->pc = 0x388950u;
    {
        const bool branch_taken_0x388950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388950u;
        // 0x388954: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388950) {
            ctx->pc = 0x388DC0u;
            goto label_388dc0;
        }
    }
    ctx->pc = 0x388958u;
label_388958:
    // 0x388958: 0xc105534  jal         func_4154D0
label_38895c:
    if (ctx->pc == 0x38895Cu) {
        ctx->pc = 0x38895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388958u;
        // 0x38895c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388960u;
        goto label_388960;
    }
    ctx->pc = 0x388958u;
    SET_GPR_U32(ctx, 31, 0x388960u);
    ctx->pc = 0x38895Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388958u;
    // 0x38895c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4154D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4154D0u, 0x388958u, 0x388960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388960u;
label_388960:
    // 0x388960: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_388964:
    if (ctx->pc == 0x388964u) {
        ctx->pc = 0x388964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388960u;
        // 0x388964: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388968u;
        goto label_388968;
    }
    ctx->pc = 0x388960u;
    {
        const bool branch_taken_0x388960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x388960) {
            ctx->pc = 0x388964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x388960u;
            // 0x388964: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388978u;
            goto label_388978;
        }
    }
    ctx->pc = 0x388968u;
label_388968:
    // 0x388968: 0xc10572c  jal         func_415CB0
label_38896c:
    if (ctx->pc == 0x38896Cu) {
        ctx->pc = 0x38896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388968u;
        // 0x38896c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388970u;
        goto label_388970;
    }
    ctx->pc = 0x388968u;
    SET_GPR_U32(ctx, 31, 0x388970u);
    ctx->pc = 0x38896Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388968u;
    // 0x38896c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415CB0u, 0x388968u, 0x388970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388970u;
label_388970:
    // 0x388970: 0x10000114  b           . + 4 + (0x114 << 2)
label_388974:
    if (ctx->pc == 0x388974u) {
        ctx->pc = 0x388974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388970u;
        // 0x388974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388978u;
        goto label_388978;
    }
    ctx->pc = 0x388970u;
    {
        const bool branch_taken_0x388970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388970u;
        // 0x388974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388970) {
            ctx->pc = 0x388DC4u;
            goto label_388dc4;
        }
    }
    ctx->pc = 0x388978u;
label_388978:
    // 0x388978: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x388978u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_38897c:
    // 0x38897c: 0xc0e2876  jal         func_38A1D8
label_388980:
    if (ctx->pc == 0x388980u) {
        ctx->pc = 0x388980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38897Cu;
        // 0x388980: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388984u;
        goto label_388984;
    }
    ctx->pc = 0x38897Cu;
    SET_GPR_U32(ctx, 31, 0x388984u);
    ctx->pc = 0x388980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38897Cu;
    // 0x388980: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A1D8u, 0x38897Cu, 0x388984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388984u;
label_388984:
    // 0x388984: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
label_388988:
    if (ctx->pc == 0x388988u) {
        ctx->pc = 0x388988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388984u;
        // 0x388988: 0x28080  sll         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38898Cu;
        goto label_38898c;
    }
    ctx->pc = 0x388984u;
    {
        const bool branch_taken_0x388984 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x388988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388984u;
        // 0x388988: 0x28080  sll         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388984) {
            ctx->pc = 0x3889D8u;
            goto label_3889d8;
        }
    }
    ctx->pc = 0x38898Cu;
label_38898c:
    // 0x38898c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x38898cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_388990:
    // 0x388990: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x388990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_388994:
    // 0x388994: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x388994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_388998:
    // 0x388998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x388998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38899c:
    // 0x38899c: 0x40f809  jalr        $v0
label_3889a0:
    if (ctx->pc == 0x3889A0u) {
        ctx->pc = 0x3889A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38899Cu;
        // 0x3889a0: 0x34a5000f  ori         $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3889A4u;
        goto label_3889a4;
    }
    ctx->pc = 0x38899Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3889A4u);
        ctx->pc = 0x3889A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38899Cu;
        // 0x3889a0: 0x34a5000f  ori         $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38899Cu, 0x3889A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3889A4u;
label_3889a4:
    // 0x3889a4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_3889a8:
    if (ctx->pc == 0x3889A8u) {
        ctx->pc = 0x3889A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3889A4u;
        // 0x3889a8: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3889ACu;
        goto label_3889ac;
    }
    ctx->pc = 0x3889A4u;
    {
        const bool branch_taken_0x3889a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3889A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3889A4u;
        // 0x3889a8: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3889a4) {
            ctx->pc = 0x3889DCu;
            goto label_3889dc;
        }
    }
    ctx->pc = 0x3889ACu;
label_3889ac:
    // 0x3889ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3889acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3889b0:
    // 0x3889b0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3889b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3889b4:
    // 0x3889b4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x3889b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_3889b8:
    // 0x3889b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3889b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3889bc:
    // 0x3889bc: 0xc1035f6  jal         func_40D7D8
label_3889c0:
    if (ctx->pc == 0x3889C0u) {
        ctx->pc = 0x3889C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3889BCu;
        // 0x3889c0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3889C4u;
        goto label_3889c4;
    }
    ctx->pc = 0x3889BCu;
    SET_GPR_U32(ctx, 31, 0x3889C4u);
    ctx->pc = 0x3889C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3889BCu;
    // 0x3889c0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3889BCu, 0x3889C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3889C4u;
label_3889c4:
    // 0x3889c4: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x3889c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_3889c8:
    // 0x3889c8: 0xc103628  jal         func_40D8A0
label_3889cc:
    if (ctx->pc == 0x3889CCu) {
        ctx->pc = 0x3889CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3889C8u;
        // 0x3889cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3889D0u;
        goto label_3889d0;
    }
    ctx->pc = 0x3889C8u;
    SET_GPR_U32(ctx, 31, 0x3889D0u);
    ctx->pc = 0x3889CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3889C8u;
    // 0x3889cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3889C8u, 0x3889D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3889D0u;
label_3889d0:
    // 0x3889d0: 0x1000004c  b           . + 4 + (0x4C << 2)
label_3889d4:
    if (ctx->pc == 0x3889D4u) {
        ctx->pc = 0x3889D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3889D0u;
        // 0x3889d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3889D8u;
        goto label_3889d8;
    }
    ctx->pc = 0x3889D0u;
    {
        const bool branch_taken_0x3889d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3889D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3889D0u;
        // 0x3889d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3889d0) {
            ctx->pc = 0x388B04u;
            goto label_388b04;
        }
    }
    ctx->pc = 0x3889D8u;
label_3889d8:
    // 0x3889d8: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x3889d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_3889dc:
    // 0x3889dc: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x3889dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3889e0:
    // 0x3889e0: 0x26750008  addiu       $s5, $s3, 0x8
    ctx->pc = 0x3889e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_3889e4:
    // 0x3889e4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3889e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_3889e8:
    // 0x3889e8: 0x27b6001c  addiu       $s6, $sp, 0x1C
    ctx->pc = 0x3889e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_3889ec:
    // 0x3889ec: 0x12350044  beq         $s1, $s5, . + 4 + (0x44 << 2)
label_3889f0:
    if (ctx->pc == 0x3889F0u) {
        ctx->pc = 0x3889F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3889ECu;
        // 0x3889f0: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3889F4u;
        goto label_3889f4;
    }
    ctx->pc = 0x3889ECu;
    {
        const bool branch_taken_0x3889ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        ctx->pc = 0x3889F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3889ECu;
        // 0x3889f0: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3889ec) {
            ctx->pc = 0x388B00u;
            goto label_388b00;
        }
    }
    ctx->pc = 0x3889F4u;
label_3889f4:
    // 0x3889f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3889f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3889f8:
    // 0x3889f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3889f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3889fc:
    // 0x3889fc: 0x0  nop
    ctx->pc = 0x3889fcu;
    // NOP
label_388a00:
    // 0x388a00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x388a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_388a04:
    // 0x388a04: 0x18400031  blez        $v0, . + 4 + (0x31 << 2)
label_388a08:
    if (ctx->pc == 0x388A08u) {
        ctx->pc = 0x388A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A04u;
        // 0x388a08: 0x8e30ffd8  lw          $s0, -0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388A0Cu;
        goto label_388a0c;
    }
    ctx->pc = 0x388A04u;
    {
        const bool branch_taken_0x388a04 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x388A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A04u;
        // 0x388a08: 0x8e30ffd8  lw          $s0, -0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388a04) {
            ctx->pc = 0x388ACCu;
            goto label_388acc;
        }
    }
    ctx->pc = 0x388A0Cu;
label_388a0c:
    // 0x388a0c: 0x8fa6001c  lw          $a2, 0x1C($sp)
    ctx->pc = 0x388a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_388a10:
    // 0x388a10: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x388a10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_388a14:
    // 0x388a14: 0x30e40003  andi        $a0, $a3, 0x3
    ctx->pc = 0x388a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
label_388a18:
    // 0x388a18: 0x18e00013  blez        $a3, . + 4 + (0x13 << 2)
label_388a1c:
    if (ctx->pc == 0x388A1Cu) {
        ctx->pc = 0x388A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A18u;
        // 0x388a1c: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388A20u;
        goto label_388a20;
    }
    ctx->pc = 0x388A18u;
    {
        const bool branch_taken_0x388a18 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x388A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A18u;
        // 0x388a1c: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388a18) {
            ctx->pc = 0x388A68u;
            goto label_388a68;
        }
    }
    ctx->pc = 0x388A20u;
label_388a20:
    // 0x388a20: 0x5080001a  beql        $a0, $zero, . + 4 + (0x1A << 2)
label_388a24:
    if (ctx->pc == 0x388A24u) {
        ctx->pc = 0x388A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A20u;
        // 0x388a24: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388A28u;
        goto label_388a28;
    }
    ctx->pc = 0x388A20u;
    {
        const bool branch_taken_0x388a20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x388a20) {
            ctx->pc = 0x388A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x388A20u;
            // 0x388a24: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388A8Cu;
            goto label_388a8c;
        }
    }
    ctx->pc = 0x388A28u;
label_388a28:
    // 0x388a28: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x388a28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_388a2c:
    // 0x388a2c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_388a30:
    if (ctx->pc == 0x388A30u) {
        ctx->pc = 0x388A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A2Cu;
        // 0x388a30: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388A34u;
        goto label_388a34;
    }
    ctx->pc = 0x388A2Cu;
    {
        const bool branch_taken_0x388a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x388a2c) {
            ctx->pc = 0x388A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x388A2Cu;
            // 0x388a30: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388A6Cu;
            goto label_388a6c;
        }
    }
    ctx->pc = 0x388A34u;
label_388a34:
    // 0x388a34: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x388a34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_388a38:
    // 0x388a38: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_388a3c:
    if (ctx->pc == 0x388A3Cu) {
        ctx->pc = 0x388A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A38u;
        // 0x388a3c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388A40u;
        goto label_388a40;
    }
    ctx->pc = 0x388A38u;
    {
        const bool branch_taken_0x388a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x388a38) {
            ctx->pc = 0x388A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x388A38u;
            // 0x388a3c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388A58u;
            goto label_388a58;
        }
    }
    ctx->pc = 0x388A40u;
label_388a40:
    // 0x388a40: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x388a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_388a44:
    // 0x388a44: 0x10500022  beq         $v0, $s0, . + 4 + (0x22 << 2)
label_388a48:
    if (ctx->pc == 0x388A48u) {
        ctx->pc = 0x388A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A44u;
        // 0x388a48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388A4Cu;
        goto label_388a4c;
    }
    ctx->pc = 0x388A44u;
    {
        const bool branch_taken_0x388a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x388A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A44u;
        // 0x388a48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388a44) {
            ctx->pc = 0x388AD0u;
            goto label_388ad0;
        }
    }
    ctx->pc = 0x388A4Cu;
label_388a4c:
    // 0x388a4c: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x388a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_388a50:
    // 0x388a50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x388a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388a54:
    // 0x388a54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x388a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_388a58:
    // 0x388a58: 0x1050001d  beq         $v0, $s0, . + 4 + (0x1D << 2)
label_388a5c:
    if (ctx->pc == 0x388A5Cu) {
        ctx->pc = 0x388A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A58u;
        // 0x388a5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388A60u;
        goto label_388a60;
    }
    ctx->pc = 0x388A58u;
    {
        const bool branch_taken_0x388a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x388A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A58u;
        // 0x388a5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388a58) {
            ctx->pc = 0x388AD0u;
            goto label_388ad0;
        }
    }
    ctx->pc = 0x388A60u;
label_388a60:
    // 0x388a60: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x388a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_388a64:
    // 0x388a64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x388a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_388a68:
    // 0x388a68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x388a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_388a6c:
    // 0x388a6c: 0x10500018  beq         $v0, $s0, . + 4 + (0x18 << 2)
label_388a70:
    if (ctx->pc == 0x388A70u) {
        ctx->pc = 0x388A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A6Cu;
        // 0x388a70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388A74u;
        goto label_388a74;
    }
    ctx->pc = 0x388A6Cu;
    {
        const bool branch_taken_0x388a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x388A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A6Cu;
        // 0x388a70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388a6c) {
            ctx->pc = 0x388AD0u;
            goto label_388ad0;
        }
    }
    ctx->pc = 0x388A74u;
label_388a74:
    // 0x388a74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x388a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_388a78:
    // 0x388a78: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x388a78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_388a7c:
    // 0x388a7c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_388a80:
    if (ctx->pc == 0x388A80u) {
        ctx->pc = 0x388A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A7Cu;
        // 0x388a80: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388A84u;
        goto label_388a84;
    }
    ctx->pc = 0x388A7Cu;
    {
        const bool branch_taken_0x388a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A7Cu;
        // 0x388a80: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388a7c) {
            ctx->pc = 0x388ACCu;
            goto label_388acc;
        }
    }
    ctx->pc = 0x388A84u;
label_388a84:
    // 0x388a84: 0x0  nop
    ctx->pc = 0x388a84u;
    // NOP
label_388a88:
    // 0x388a88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x388a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_388a8c:
    // 0x388a8c: 0x54500003  bnel        $v0, $s0, . + 4 + (0x3 << 2)
label_388a90:
    if (ctx->pc == 0x388A90u) {
        ctx->pc = 0x388A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A8Cu;
        // 0x388a90: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388A94u;
        goto label_388a94;
    }
    ctx->pc = 0x388A8Cu;
    {
        const bool branch_taken_0x388a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x388a8c) {
            ctx->pc = 0x388A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x388A8Cu;
            // 0x388a90: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388A9Cu;
            goto label_388a9c;
        }
    }
    ctx->pc = 0x388A94u;
label_388a94:
    // 0x388a94: 0x1000000e  b           . + 4 + (0xE << 2)
label_388a98:
    if (ctx->pc == 0x388A98u) {
        ctx->pc = 0x388A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A94u;
        // 0x388a98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388A9Cu;
        goto label_388a9c;
    }
    ctx->pc = 0x388A94u;
    {
        const bool branch_taken_0x388a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A94u;
        // 0x388a98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388a94) {
            ctx->pc = 0x388AD0u;
            goto label_388ad0;
        }
    }
    ctx->pc = 0x388A9Cu;
label_388a9c:
    // 0x388a9c: 0x1050000c  beq         $v0, $s0, . + 4 + (0xC << 2)
label_388aa0:
    if (ctx->pc == 0x388AA0u) {
        ctx->pc = 0x388AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A9Cu;
        // 0x388aa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388AA4u;
        goto label_388aa4;
    }
    ctx->pc = 0x388A9Cu;
    {
        const bool branch_taken_0x388a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x388AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A9Cu;
        // 0x388aa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388a9c) {
            ctx->pc = 0x388AD0u;
            goto label_388ad0;
        }
    }
    ctx->pc = 0x388AA4u;
label_388aa4:
    // 0x388aa4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x388aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_388aa8:
    // 0x388aa8: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
label_388aac:
    if (ctx->pc == 0x388AACu) {
        ctx->pc = 0x388AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388AA8u;
        // 0x388aac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388AB0u;
        goto label_388ab0;
    }
    ctx->pc = 0x388AA8u;
    {
        const bool branch_taken_0x388aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x388AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388AA8u;
        // 0x388aac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388aa8) {
            ctx->pc = 0x388AD0u;
            goto label_388ad0;
        }
    }
    ctx->pc = 0x388AB0u;
label_388ab0:
    // 0x388ab0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x388ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_388ab4:
    // 0x388ab4: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
label_388ab8:
    if (ctx->pc == 0x388AB8u) {
        ctx->pc = 0x388AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388AB4u;
        // 0x388ab8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388ABCu;
        goto label_388abc;
    }
    ctx->pc = 0x388AB4u;
    {
        const bool branch_taken_0x388ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x388AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388AB4u;
        // 0x388ab8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388ab4) {
            ctx->pc = 0x388AD0u;
            goto label_388ad0;
        }
    }
    ctx->pc = 0x388ABCu;
label_388abc:
    // 0x388abc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x388abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_388ac0:
    // 0x388ac0: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x388ac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_388ac4:
    // 0x388ac4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_388ac8:
    if (ctx->pc == 0x388AC8u) {
        ctx->pc = 0x388AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388AC4u;
        // 0x388ac8: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388ACCu;
        goto label_388acc;
    }
    ctx->pc = 0x388AC4u;
    {
        const bool branch_taken_0x388ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388AC4u;
        // 0x388ac8: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388ac4) {
            ctx->pc = 0x388A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388a88;
        }
    }
    ctx->pc = 0x388ACCu;
label_388acc:
    // 0x388acc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x388accu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_388ad0:
    // 0x388ad0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_388ad4:
    if (ctx->pc == 0x388AD4u) {
        ctx->pc = 0x388AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388AD0u;
        // 0x388ad4: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388AD8u;
        goto label_388ad8;
    }
    ctx->pc = 0x388AD0u;
    {
        const bool branch_taken_0x388ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x388ad0) {
            ctx->pc = 0x388AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x388AD0u;
            // 0x388ad4: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388AF8u;
            goto label_388af8;
        }
    }
    ctx->pc = 0x388AD8u;
label_388ad8:
    // 0x388ad8: 0xc0e3444  jal         func_38D110
label_388adc:
    if (ctx->pc == 0x388ADCu) {
        ctx->pc = 0x388ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388AD8u;
        // 0x388adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388AE0u;
        goto label_388ae0;
    }
    ctx->pc = 0x388AD8u;
    SET_GPR_U32(ctx, 31, 0x388AE0u);
    ctx->pc = 0x388ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388AD8u;
    // 0x388adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D110u, 0x388AD8u, 0x388AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388AE0u;
label_388ae0:
    // 0x388ae0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x388ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_388ae4:
    // 0x388ae4: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x388ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_388ae8:
    // 0x388ae8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x388ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_388aec:
    // 0x388aec: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x388aecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_388af0:
    // 0x388af0: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x388af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_388af4:
    // 0x388af4: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x388af4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_388af8:
    // 0x388af8: 0x1635ffc1  bne         $s1, $s5, . + 4 + (-0x3F << 2)
label_388afc:
    if (ctx->pc == 0x388AFCu) {
        ctx->pc = 0x388AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388AF8u;
        // 0x388afc: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388B00u;
        goto label_388b00;
    }
    ctx->pc = 0x388AF8u;
    {
        const bool branch_taken_0x388af8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x388AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388AF8u;
        // 0x388afc: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388af8) {
            ctx->pc = 0x388A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388a00;
        }
    }
    ctx->pc = 0x388B00u;
label_388b00:
    // 0x388b00: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x388b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_388b04:
    // 0x388b04: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
label_388b08:
    if (ctx->pc == 0x388B08u) {
        ctx->pc = 0x388B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388B04u;
        // 0x388b08: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388B0Cu;
        goto label_388b0c;
    }
    ctx->pc = 0x388B04u;
    {
        const bool branch_taken_0x388b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388B04u;
        // 0x388b08: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388b04) {
            ctx->pc = 0x388DC0u;
            goto label_388dc0;
        }
    }
    ctx->pc = 0x388B0Cu;
label_388b0c:
    // 0x388b0c: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x388b0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_388b10:
    // 0x388b10: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
label_388b14:
    if (ctx->pc == 0x388B14u) {
        ctx->pc = 0x388B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388B10u;
        // 0x388b14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388B18u;
        goto label_388b18;
    }
    ctx->pc = 0x388B10u;
    {
        const bool branch_taken_0x388b10 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x388B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388B10u;
        // 0x388b14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388b10) {
            ctx->pc = 0x388B4Cu;
            goto label_388b4c;
        }
    }
    ctx->pc = 0x388B18u;
label_388b18:
    // 0x388b18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x388b18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_388b1c:
    // 0x388b1c: 0x0  nop
    ctx->pc = 0x388b1cu;
    // NOP
label_388b20:
    // 0x388b20: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x388b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_388b24:
    // 0x388b24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x388b24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_388b28:
    // 0x388b28: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x388b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_388b2c:
    // 0x388b2c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x388b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_388b30:
    // 0x388b30: 0xc0e2ea2  jal         func_38BA88
label_388b34:
    if (ctx->pc == 0x388B34u) {
        ctx->pc = 0x388B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388B30u;
        // 0x388b34: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388B38u;
        goto label_388b38;
    }
    ctx->pc = 0x388B30u;
    SET_GPR_U32(ctx, 31, 0x388B38u);
    ctx->pc = 0x388B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388B30u;
    // 0x388b34: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38BA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38BA88u, 0x388B30u, 0x388B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388B38u;
label_388b38:
    // 0x388b38: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x388b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_388b3c:
    // 0x388b3c: 0x2643000c  addiu       $v1, $s2, 0xC
    ctx->pc = 0x388b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_388b40:
    // 0x388b40: 0x204202a  slt         $a0, $s0, $a0
    ctx->pc = 0x388b40u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_388b44:
    // 0x388b44: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
label_388b48:
    if (ctx->pc == 0x388B48u) {
        ctx->pc = 0x388B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388B44u;
        // 0x388b48: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388B4Cu;
        goto label_388b4c;
    }
    ctx->pc = 0x388B44u;
    {
        const bool branch_taken_0x388b44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x388B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388B44u;
        // 0x388b48: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388b44) {
            ctx->pc = 0x388B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388b20;
        }
    }
    ctx->pc = 0x388B4Cu;
label_388b4c:
    // 0x388b4c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x388b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_388b50:
    // 0x388b50: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x388b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_388b54:
    // 0x388b54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x388b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_388b58:
    // 0x388b58: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x388b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_388b5c:
    // 0x388b5c: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x388b5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_388b60:
    // 0x388b60: 0xc103404  jal         func_40D010
label_388b64:
    if (ctx->pc == 0x388B64u) {
        ctx->pc = 0x388B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388B60u;
        // 0x388b64: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388B68u;
        goto label_388b68;
    }
    ctx->pc = 0x388B60u;
    SET_GPR_U32(ctx, 31, 0x388B68u);
    ctx->pc = 0x388B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388B60u;
    // 0x388b64: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x388B60u, 0x388B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388B68u;
label_388b68:
    // 0x388b68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_388b6c:
    if (ctx->pc == 0x388B6Cu) {
        ctx->pc = 0x388B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388B68u;
        // 0x388b6c: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388B70u;
        goto label_388b70;
    }
    ctx->pc = 0x388B68u;
    {
        const bool branch_taken_0x388b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388B68u;
        // 0x388b6c: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388b68) {
            ctx->pc = 0x388B90u;
            goto label_388b90;
        }
    }
    ctx->pc = 0x388B70u;
label_388b70:
    // 0x388b70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x388b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_388b74:
    // 0x388b74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x388b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388b78:
    // 0x388b78: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x388b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_388b7c:
    // 0x388b7c: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x388b7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
label_388b80:
    // 0x388b80: 0xc103404  jal         func_40D010
label_388b84:
    if (ctx->pc == 0x388B84u) {
        ctx->pc = 0x388B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388B80u;
        // 0x388b84: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388B88u;
        goto label_388b88;
    }
    ctx->pc = 0x388B80u;
    SET_GPR_U32(ctx, 31, 0x388B88u);
    ctx->pc = 0x388B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388B80u;
    // 0x388b84: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x388B80u, 0x388B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388B88u;
label_388b88:
    // 0x388b88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_388b8c:
    if (ctx->pc == 0x388B8Cu) {
        ctx->pc = 0x388B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388B88u;
        // 0x388b8c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388B90u;
        goto label_388b90;
    }
    ctx->pc = 0x388B88u;
    {
        const bool branch_taken_0x388b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388B88u;
        // 0x388b8c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388b88) {
            ctx->pc = 0x388B98u;
            goto label_388b98;
        }
    }
    ctx->pc = 0x388B90u;
label_388b90:
    // 0x388b90: 0x10000017  b           . + 4 + (0x17 << 2)
label_388b94:
    if (ctx->pc == 0x388B94u) {
        ctx->pc = 0x388B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388B90u;
        // 0x388b94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388B98u;
        goto label_388b98;
    }
    ctx->pc = 0x388B90u;
    {
        const bool branch_taken_0x388b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388B90u;
        // 0x388b94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388b90) {
            ctx->pc = 0x388BF0u;
            goto label_388bf0;
        }
    }
    ctx->pc = 0x388B98u;
label_388b98:
    // 0x388b98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x388b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_388b9c:
    // 0x388b9c: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x388b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_388ba0:
    // 0x388ba0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x388ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_388ba4:
    // 0x388ba4: 0xc10486e  jal         func_4121B8
label_388ba8:
    if (ctx->pc == 0x388BA8u) {
        ctx->pc = 0x388BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BA4u;
        // 0x388ba8: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388BACu;
        goto label_388bac;
    }
    ctx->pc = 0x388BA4u;
    SET_GPR_U32(ctx, 31, 0x388BACu);
    ctx->pc = 0x388BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388BA4u;
    // 0x388ba8: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x388BA4u, 0x388BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388BACu;
label_388bac:
    // 0x388bac: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
label_388bb0:
    if (ctx->pc == 0x388BB0u) {
        ctx->pc = 0x388BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BACu;
        // 0x388bb0: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388BB4u;
        goto label_388bb4;
    }
    ctx->pc = 0x388BACu;
    {
        const bool branch_taken_0x388bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BACu;
        // 0x388bb0: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388bac) {
            ctx->pc = 0x388B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388b90;
        }
    }
    ctx->pc = 0x388BB4u;
label_388bb4:
    // 0x388bb4: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
label_388bb8:
    if (ctx->pc == 0x388BB8u) {
        ctx->pc = 0x388BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BB4u;
        // 0x388bb8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388BBCu;
        goto label_388bbc;
    }
    ctx->pc = 0x388BB4u;
    {
        const bool branch_taken_0x388bb4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x388BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BB4u;
        // 0x388bb8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388bb4) {
            ctx->pc = 0x388BECu;
            goto label_388bec;
        }
    }
    ctx->pc = 0x388BBCu;
label_388bbc:
    // 0x388bbc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x388bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_388bc0:
    // 0x388bc0: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x388bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_388bc4:
    // 0x388bc4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x388bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_388bc8:
    // 0x388bc8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x388bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_388bcc:
    // 0x388bcc: 0xc0e2f1c  jal         func_38BC70
label_388bd0:
    if (ctx->pc == 0x388BD0u) {
        ctx->pc = 0x388BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BCCu;
        // 0x388bd0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388BD4u;
        goto label_388bd4;
    }
    ctx->pc = 0x388BCCu;
    SET_GPR_U32(ctx, 31, 0x388BD4u);
    ctx->pc = 0x388BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388BCCu;
    // 0x388bd0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38BC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38BC70u, 0x388BCCu, 0x388BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388BD4u;
label_388bd4:
    // 0x388bd4: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
label_388bd8:
    if (ctx->pc == 0x388BD8u) {
        ctx->pc = 0x388BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BD4u;
        // 0x388bd8: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388BDCu;
        goto label_388bdc;
    }
    ctx->pc = 0x388BD4u;
    {
        const bool branch_taken_0x388bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BD4u;
        // 0x388bd8: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388bd4) {
            ctx->pc = 0x388B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388b90;
        }
    }
    ctx->pc = 0x388BDCu;
label_388bdc:
    // 0x388bdc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x388bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_388be0:
    // 0x388be0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x388be0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_388be4:
    // 0x388be4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_388be8:
    if (ctx->pc == 0x388BE8u) {
        ctx->pc = 0x388BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BE4u;
        // 0x388be8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388BECu;
        goto label_388bec;
    }
    ctx->pc = 0x388BE4u;
    {
        const bool branch_taken_0x388be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BE4u;
        // 0x388be8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388be4) {
            ctx->pc = 0x388BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388bc0;
        }
    }
    ctx->pc = 0x388BECu;
label_388bec:
    // 0x388bec: 0x27a2001c  addiu       $v0, $sp, 0x1C
    ctx->pc = 0x388becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_388bf0:
    // 0x388bf0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_388bf4:
    if (ctx->pc == 0x388BF4u) {
        ctx->pc = 0x388BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BF0u;
        // 0x388bf4: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388BF8u;
        goto label_388bf8;
    }
    ctx->pc = 0x388BF0u;
    {
        const bool branch_taken_0x388bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BF0u;
        // 0x388bf4: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388bf0) {
            ctx->pc = 0x388C54u;
            goto label_388c54;
        }
    }
    ctx->pc = 0x388BF8u;
label_388bf8:
    // 0x388bf8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x388bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_388bfc:
    // 0x388bfc: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
label_388c00:
    if (ctx->pc == 0x388C00u) {
        ctx->pc = 0x388C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BFCu;
        // 0x388c00: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388C04u;
        goto label_388c04;
    }
    ctx->pc = 0x388BFCu;
    {
        const bool branch_taken_0x388bfc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x388C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BFCu;
        // 0x388c00: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388bfc) {
            ctx->pc = 0x388C34u;
            goto label_388c34;
        }
    }
    ctx->pc = 0x388C04u;
label_388c04:
    // 0x388c04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x388c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_388c08:
    // 0x388c08: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x388c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_388c0c:
    // 0x388c0c: 0x0  nop
    ctx->pc = 0x388c0cu;
    // NOP
label_388c10:
    // 0x388c10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x388c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_388c14:
    // 0x388c14: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x388c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_388c18:
    // 0x388c18: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x388c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_388c1c:
    // 0x388c1c: 0xc0e3414  jal         func_38D050
label_388c20:
    if (ctx->pc == 0x388C20u) {
        ctx->pc = 0x388C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C1Cu;
        // 0x388c20: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388C24u;
        goto label_388c24;
    }
    ctx->pc = 0x388C1Cu;
    SET_GPR_U32(ctx, 31, 0x388C24u);
    ctx->pc = 0x388C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388C1Cu;
    // 0x388c20: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x388C1Cu, 0x388C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388C24u;
label_388c24:
    // 0x388c24: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x388c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_388c28:
    // 0x388c28: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x388c28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_388c2c:
    // 0x388c2c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_388c30:
    if (ctx->pc == 0x388C30u) {
        ctx->pc = 0x388C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C2Cu;
        // 0x388c30: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388C34u;
        goto label_388c34;
    }
    ctx->pc = 0x388C2Cu;
    {
        const bool branch_taken_0x388c2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x388C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C2Cu;
        // 0x388c30: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388c2c) {
            ctx->pc = 0x388C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388c10;
        }
    }
    ctx->pc = 0x388C34u;
label_388c34:
    // 0x388c34: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x388c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_388c38:
    // 0x388c38: 0x10800061  beqz        $a0, . + 4 + (0x61 << 2)
label_388c3c:
    if (ctx->pc == 0x388C3Cu) {
        ctx->pc = 0x388C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C38u;
        // 0x388c3c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388C40u;
        goto label_388c40;
    }
    ctx->pc = 0x388C38u;
    {
        const bool branch_taken_0x388c38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C38u;
        // 0x388c3c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388c38) {
            ctx->pc = 0x388DC0u;
            goto label_388dc0;
        }
    }
    ctx->pc = 0x388C40u;
label_388c40:
    // 0x388c40: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x388c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_388c44:
    // 0x388c44: 0x40f809  jalr        $v0
label_388c48:
    if (ctx->pc == 0x388C48u) {
        ctx->pc = 0x388C4Cu;
        goto label_388c4c;
    }
    ctx->pc = 0x388C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x388C4Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388C44u, 0x388C4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x388C4Cu;
label_388c4c:
    // 0x388c4c: 0x1000005c  b           . + 4 + (0x5C << 2)
label_388c50:
    if (ctx->pc == 0x388C50u) {
        ctx->pc = 0x388C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C4Cu;
        // 0x388c50: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388C54u;
        goto label_388c54;
    }
    ctx->pc = 0x388C4Cu;
    {
        const bool branch_taken_0x388c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C4Cu;
        // 0x388c50: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388c4c) {
            ctx->pc = 0x388DC0u;
            goto label_388dc0;
        }
    }
    ctx->pc = 0x388C54u;
label_388c54:
    // 0x388c54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x388c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388c58:
    // 0x388c58: 0x24527af0  addiu       $s2, $v0, 0x7AF0
    ctx->pc = 0x388c58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 31472));
label_388c5c:
    // 0x388c5c: 0x26710008  addiu       $s1, $s3, 0x8
    ctx->pc = 0x388c5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_388c60:
    // 0x388c60: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x388c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_388c64:
    // 0x388c64: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x388c64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_388c68:
    // 0x388c68: 0x1051000a  beq         $v0, $s1, . + 4 + (0xA << 2)
label_388c6c:
    if (ctx->pc == 0x388C6Cu) {
        ctx->pc = 0x388C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C68u;
        // 0x388c6c: 0xafb40010  sw          $s4, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388C70u;
        goto label_388c70;
    }
    ctx->pc = 0x388C68u;
    {
        const bool branch_taken_0x388c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x388C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C68u;
        // 0x388c6c: 0xafb40010  sw          $s4, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388c68) {
            ctx->pc = 0x388C94u;
            goto label_388c94;
        }
    }
    ctx->pc = 0x388C70u;
label_388c70:
    // 0x388c70: 0x2444ffc0  addiu       $a0, $v0, -0x40
    ctx->pc = 0x388c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_388c74:
    // 0x388c74: 0x0  nop
    ctx->pc = 0x388c74u;
    // NOP
label_388c78:
    // 0x388c78: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x388c78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_388c7c:
    // 0x388c7c: 0x240f809  jalr        $s2
label_388c80:
    if (ctx->pc == 0x388C80u) {
        ctx->pc = 0x388C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C7Cu;
        // 0x388c80: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388C84u;
        goto label_388c84;
    }
    ctx->pc = 0x388C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x388C84u);
        ctx->pc = 0x388C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C7Cu;
        // 0x388c80: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388C7Cu, 0x388C84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x388C84u;
label_388c84:
    // 0x388c84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_388c88:
    if (ctx->pc == 0x388C88u) {
        ctx->pc = 0x388C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C84u;
        // 0x388c88: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388C8Cu;
        goto label_388c8c;
    }
    ctx->pc = 0x388C84u;
    {
        const bool branch_taken_0x388c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C84u;
        // 0x388c88: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388c84) {
            ctx->pc = 0x388C94u;
            goto label_388c94;
        }
    }
    ctx->pc = 0x388C8Cu;
label_388c8c:
    // 0x388c8c: 0x1451fffa  bne         $v0, $s1, . + 4 + (-0x6 << 2)
label_388c90:
    if (ctx->pc == 0x388C90u) {
        ctx->pc = 0x388C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C8Cu;
        // 0x388c90: 0x2444ffc0  addiu       $a0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388C94u;
        goto label_388c94;
    }
    ctx->pc = 0x388C8Cu;
    {
        const bool branch_taken_0x388c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x388C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C8Cu;
        // 0x388c90: 0x2444ffc0  addiu       $a0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388c8c) {
            ctx->pc = 0x388C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388c78;
        }
    }
    ctx->pc = 0x388C94u;
label_388c94:
    // 0x388c94: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x388c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_388c98:
    // 0x388c98: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
label_388c9c:
    if (ctx->pc == 0x388C9Cu) {
        ctx->pc = 0x388C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C98u;
        // 0x388c9c: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388CA0u;
        goto label_388ca0;
    }
    ctx->pc = 0x388C98u;
    {
        const bool branch_taken_0x388c98 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x388C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C98u;
        // 0x388c9c: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388c98) {
            ctx->pc = 0x388CE8u;
            goto label_388ce8;
        }
    }
    ctx->pc = 0x388CA0u;
label_388ca0:
    // 0x388ca0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_388ca4:
    if (ctx->pc == 0x388CA4u) {
        ctx->pc = 0x388CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388CA0u;
        // 0x388ca4: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388CA8u;
        goto label_388ca8;
    }
    ctx->pc = 0x388CA0u;
    {
        const bool branch_taken_0x388ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388CA0u;
        // 0x388ca4: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388ca0) {
            ctx->pc = 0x388CE8u;
            goto label_388ce8;
        }
    }
    ctx->pc = 0x388CA8u;
label_388ca8:
    // 0x388ca8: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x388ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_388cac:
    // 0x388cac: 0x26710010  addiu       $s1, $s3, 0x10
    ctx->pc = 0x388cacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_388cb0:
    // 0x388cb0: 0x1071000d  beq         $v1, $s1, . + 4 + (0xD << 2)
label_388cb4:
    if (ctx->pc == 0x388CB4u) {
        ctx->pc = 0x388CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388CB0u;
        // 0x388cb4: 0x2452a860  addiu       $s2, $v0, -0x57A0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388CB8u;
        goto label_388cb8;
    }
    ctx->pc = 0x388CB0u;
    {
        const bool branch_taken_0x388cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x388CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388CB0u;
        // 0x388cb4: 0x2452a860  addiu       $s2, $v0, -0x57A0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388cb0) {
            ctx->pc = 0x388CE8u;
            goto label_388ce8;
        }
    }
    ctx->pc = 0x388CB8u;
label_388cb8:
    // 0x388cb8: 0x8f84a98c  lw          $a0, -0x5674($gp)
    ctx->pc = 0x388cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945164)));
label_388cbc:
    // 0x388cbc: 0x0  nop
    ctx->pc = 0x388cbcu;
    // NOP
label_388cc0:
    // 0x388cc0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x388cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_388cc4:
    // 0x388cc4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x388cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_388cc8:
    // 0x388cc8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x388cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_388ccc:
    // 0x388ccc: 0x240f809  jalr        $s2
label_388cd0:
    if (ctx->pc == 0x388CD0u) {
        ctx->pc = 0x388CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388CCCu;
        // 0x388cd0: 0x642023  subu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388CD4u;
        goto label_388cd4;
    }
    ctx->pc = 0x388CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x388CD4u);
        ctx->pc = 0x388CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388CCCu;
        // 0x388cd0: 0x642023  subu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388CCCu, 0x388CD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x388CD4u;
label_388cd4:
    // 0x388cd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_388cd8:
    if (ctx->pc == 0x388CD8u) {
        ctx->pc = 0x388CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388CD4u;
        // 0x388cd8: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388CDCu;
        goto label_388cdc;
    }
    ctx->pc = 0x388CD4u;
    {
        const bool branch_taken_0x388cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388CD4u;
        // 0x388cd8: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388cd4) {
            ctx->pc = 0x388CECu;
            goto label_388cec;
        }
    }
    ctx->pc = 0x388CDCu;
label_388cdc:
    // 0x388cdc: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x388cdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_388ce0:
    // 0x388ce0: 0x5471fff7  bnel        $v1, $s1, . + 4 + (-0x9 << 2)
label_388ce4:
    if (ctx->pc == 0x388CE4u) {
        ctx->pc = 0x388CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388CE0u;
        // 0x388ce4: 0x8f84a98c  lw          $a0, -0x5674($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388CE8u;
        goto label_388ce8;
    }
    ctx->pc = 0x388CE0u;
    {
        const bool branch_taken_0x388ce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x388ce0) {
            ctx->pc = 0x388CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x388CE0u;
            // 0x388ce4: 0x8f84a98c  lw          $a0, -0x5674($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388cc0;
        }
    }
    ctx->pc = 0x388CE8u;
label_388ce8:
    // 0x388ce8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x388ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_388cec:
    // 0x388cec: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_388cf0:
    if (ctx->pc == 0x388CF0u) {
        ctx->pc = 0x388CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388CECu;
        // 0x388cf0: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388CF4u;
        goto label_388cf4;
    }
    ctx->pc = 0x388CECu;
    {
        const bool branch_taken_0x388cec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x388CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388CECu;
        // 0x388cf0: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388cec) {
            ctx->pc = 0x388D38u;
            goto label_388d38;
        }
    }
    ctx->pc = 0x388CF4u;
label_388cf4:
    // 0x388cf4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_388cf8:
    if (ctx->pc == 0x388CF8u) {
        ctx->pc = 0x388CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388CF4u;
        // 0x388cf8: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388CFCu;
        goto label_388cfc;
    }
    ctx->pc = 0x388CF4u;
    {
        const bool branch_taken_0x388cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388CF4u;
        // 0x388cf8: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388cf4) {
            ctx->pc = 0x388D38u;
            goto label_388d38;
        }
    }
    ctx->pc = 0x388CFCu;
label_388cfc:
    // 0x388cfc: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x388cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_388d00:
    // 0x388d00: 0x26710018  addiu       $s1, $s3, 0x18
    ctx->pc = 0x388d00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_388d04:
    // 0x388d04: 0x1071000c  beq         $v1, $s1, . + 4 + (0xC << 2)
label_388d08:
    if (ctx->pc == 0x388D08u) {
        ctx->pc = 0x388D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D04u;
        // 0x388d08: 0x2452a8f8  addiu       $s2, $v0, -0x5708 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388D0Cu;
        goto label_388d0c;
    }
    ctx->pc = 0x388D04u;
    {
        const bool branch_taken_0x388d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x388D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D04u;
        // 0x388d08: 0x2452a8f8  addiu       $s2, $v0, -0x5708 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d04) {
            ctx->pc = 0x388D38u;
            goto label_388d38;
        }
    }
    ctx->pc = 0x388D0Cu;
label_388d0c:
    // 0x388d0c: 0x8f84a988  lw          $a0, -0x5678($gp)
    ctx->pc = 0x388d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945160)));
label_388d10:
    // 0x388d10: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x388d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_388d14:
    // 0x388d14: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x388d14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_388d18:
    // 0x388d18: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x388d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_388d1c:
    // 0x388d1c: 0x240f809  jalr        $s2
label_388d20:
    if (ctx->pc == 0x388D20u) {
        ctx->pc = 0x388D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D1Cu;
        // 0x388d20: 0x642023  subu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388D24u;
        goto label_388d24;
    }
    ctx->pc = 0x388D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x388D24u);
        ctx->pc = 0x388D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D1Cu;
        // 0x388d20: 0x642023  subu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388D1Cu, 0x388D24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x388D24u;
label_388d24:
    // 0x388d24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_388d28:
    if (ctx->pc == 0x388D28u) {
        ctx->pc = 0x388D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D24u;
        // 0x388d28: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388D2Cu;
        goto label_388d2c;
    }
    ctx->pc = 0x388D24u;
    {
        const bool branch_taken_0x388d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D24u;
        // 0x388d28: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d24) {
            ctx->pc = 0x388D3Cu;
            goto label_388d3c;
        }
    }
    ctx->pc = 0x388D2Cu;
label_388d2c:
    // 0x388d2c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x388d2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_388d30:
    // 0x388d30: 0x1471fff7  bne         $v1, $s1, . + 4 + (-0x9 << 2)
label_388d34:
    if (ctx->pc == 0x388D34u) {
        ctx->pc = 0x388D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D30u;
        // 0x388d34: 0x8f84a988  lw          $a0, -0x5678($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388D38u;
        goto label_388d38;
    }
    ctx->pc = 0x388D30u;
    {
        const bool branch_taken_0x388d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x388D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D30u;
        // 0x388d34: 0x8f84a988  lw          $a0, -0x5678($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d30) {
            ctx->pc = 0x388D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388d10;
        }
    }
    ctx->pc = 0x388D38u;
label_388d38:
    // 0x388d38: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x388d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_388d3c:
    // 0x388d3c: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
label_388d40:
    if (ctx->pc == 0x388D40u) {
        ctx->pc = 0x388D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D3Cu;
        // 0x388d40: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388D44u;
        goto label_388d44;
    }
    ctx->pc = 0x388D3Cu;
    {
        const bool branch_taken_0x388d3c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x388D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D3Cu;
        // 0x388d40: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d3c) {
            ctx->pc = 0x388D74u;
            goto label_388d74;
        }
    }
    ctx->pc = 0x388D44u;
label_388d44:
    // 0x388d44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x388d44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_388d48:
    // 0x388d48: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x388d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_388d4c:
    // 0x388d4c: 0x0  nop
    ctx->pc = 0x388d4cu;
    // NOP
label_388d50:
    // 0x388d50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x388d50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_388d54:
    // 0x388d54: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x388d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_388d58:
    // 0x388d58: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x388d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_388d5c:
    // 0x388d5c: 0xc0e3414  jal         func_38D050
label_388d60:
    if (ctx->pc == 0x388D60u) {
        ctx->pc = 0x388D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D5Cu;
        // 0x388d60: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388D64u;
        goto label_388d64;
    }
    ctx->pc = 0x388D5Cu;
    SET_GPR_U32(ctx, 31, 0x388D64u);
    ctx->pc = 0x388D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388D5Cu;
    // 0x388d60: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x388D5Cu, 0x388D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388D64u;
label_388d64:
    // 0x388d64: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x388d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_388d68:
    // 0x388d68: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x388d68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_388d6c:
    // 0x388d6c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_388d70:
    if (ctx->pc == 0x388D70u) {
        ctx->pc = 0x388D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D6Cu;
        // 0x388d70: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388D74u;
        goto label_388d74;
    }
    ctx->pc = 0x388D6Cu;
    {
        const bool branch_taken_0x388d6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x388D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D6Cu;
        // 0x388d70: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d6c) {
            ctx->pc = 0x388D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388d50;
        }
    }
    ctx->pc = 0x388D74u;
label_388d74:
    // 0x388d74: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x388d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_388d78:
    // 0x388d78: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_388d7c:
    if (ctx->pc == 0x388D7Cu) {
        ctx->pc = 0x388D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D78u;
        // 0x388d7c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388D80u;
        goto label_388d80;
    }
    ctx->pc = 0x388D78u;
    {
        const bool branch_taken_0x388d78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D78u;
        // 0x388d7c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d78) {
            ctx->pc = 0x388D90u;
            goto label_388d90;
        }
    }
    ctx->pc = 0x388D80u;
label_388d80:
    // 0x388d80: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x388d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_388d84:
    // 0x388d84: 0x40f809  jalr        $v0
label_388d88:
    if (ctx->pc == 0x388D88u) {
        ctx->pc = 0x388D8Cu;
        goto label_388d8c;
    }
    ctx->pc = 0x388D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x388D8Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388D84u, 0x388D8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x388D8Cu;
label_388d8c:
    // 0x388d8c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x388d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_388d90:
    // 0x388d90: 0xc10572c  jal         func_415CB0
label_388d94:
    if (ctx->pc == 0x388D94u) {
        ctx->pc = 0x388D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D90u;
        // 0x388d94: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388D98u;
        goto label_388d98;
    }
    ctx->pc = 0x388D90u;
    SET_GPR_U32(ctx, 31, 0x388D98u);
    ctx->pc = 0x388D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388D90u;
    // 0x388d94: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415CB0u, 0x388D90u, 0x388D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388D98u;
label_388d98:
    // 0x388d98: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x388d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_388d9c:
    // 0x388d9c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_388da0:
    if (ctx->pc == 0x388DA0u) {
        ctx->pc = 0x388DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D9Cu;
        // 0x388da0: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388DA4u;
        goto label_388da4;
    }
    ctx->pc = 0x388D9Cu;
    {
        const bool branch_taken_0x388d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x388DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D9Cu;
        // 0x388da0: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d9c) {
            ctx->pc = 0x388DC0u;
            goto label_388dc0;
        }
    }
    ctx->pc = 0x388DA4u;
label_388da4:
    // 0x388da4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x388da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_388da8:
    // 0x388da8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x388da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_388dac:
    // 0x388dac: 0xc104a72  jal         func_4129C8
label_388db0:
    if (ctx->pc == 0x388DB0u) {
        ctx->pc = 0x388DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388DACu;
        // 0x388db0: 0x2484adb8  addiu       $a0, $a0, -0x5248 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388DB4u;
        goto label_388db4;
    }
    ctx->pc = 0x388DACu;
    SET_GPR_U32(ctx, 31, 0x388DB4u);
    ctx->pc = 0x388DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388DACu;
    // 0x388db0: 0x2484adb8  addiu       $a0, $a0, -0x5248 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4129C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4129C8u, 0x388DACu, 0x388DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388DB4u;
label_388db4:
    // 0x388db4: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x388db4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
label_388db8:
    // 0x388db8: 0x10000002  b           . + 4 + (0x2 << 2)
label_388dbc:
    if (ctx->pc == 0x388DBCu) {
        ctx->pc = 0x388DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388DB8u;
        // 0x388dbc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388DC0u;
        goto label_388dc0;
    }
    ctx->pc = 0x388DB8u;
    {
        const bool branch_taken_0x388db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388DB8u;
        // 0x388dbc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388db8) {
            ctx->pc = 0x388DC4u;
            goto label_388dc4;
        }
    }
    ctx->pc = 0x388DC0u;
label_388dc0:
    // 0x388dc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x388dc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_388dc4:
    // 0x388dc4: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x388dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_388dc8:
    // 0x388dc8: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x388dc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_388dcc:
    // 0x388dcc: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x388dccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_388dd0:
    // 0x388dd0: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x388dd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_388dd4:
    // 0x388dd4: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x388dd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_388dd8:
    // 0x388dd8: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x388dd8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_388ddc:
    // 0x388ddc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x388ddcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_388de0:
    // 0x388de0: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x388de0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_388de4:
    // 0x388de4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x388de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_388de8:
    // 0x388de8: 0x3e00008  jr          $ra
label_388dec:
    if (ctx->pc == 0x388DECu) {
        ctx->pc = 0x388DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388DE8u;
        // 0x388dec: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x388DF0u;
        goto label_fallthrough_0x388de8;
    }
    ctx->pc = 0x388DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388DE8u;
        // 0x388dec: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x388de8:
    ctx->pc = 0x388DF0u;
}
