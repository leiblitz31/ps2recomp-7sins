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

// Function: sub_004733C0
// Address: 0x4733c0 - 0x473f80
void sub_004733C0_0x4733c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004733C0_0x4733c0");
#endif

    switch (ctx->pc) {
        case 0x4733c0u: goto label_4733c0;
        case 0x4733c4u: goto label_4733c4;
        case 0x4733c8u: goto label_4733c8;
        case 0x4733ccu: goto label_4733cc;
        case 0x4733d0u: goto label_4733d0;
        case 0x4733d4u: goto label_4733d4;
        case 0x4733d8u: goto label_4733d8;
        case 0x4733dcu: goto label_4733dc;
        case 0x4733e0u: goto label_4733e0;
        case 0x4733e4u: goto label_4733e4;
        case 0x4733e8u: goto label_4733e8;
        case 0x4733ecu: goto label_4733ec;
        case 0x4733f0u: goto label_4733f0;
        case 0x4733f4u: goto label_4733f4;
        case 0x4733f8u: goto label_4733f8;
        case 0x4733fcu: goto label_4733fc;
        case 0x473400u: goto label_473400;
        case 0x473404u: goto label_473404;
        case 0x473408u: goto label_473408;
        case 0x47340cu: goto label_47340c;
        case 0x473410u: goto label_473410;
        case 0x473414u: goto label_473414;
        case 0x473418u: goto label_473418;
        case 0x47341cu: goto label_47341c;
        case 0x473420u: goto label_473420;
        case 0x473424u: goto label_473424;
        case 0x473428u: goto label_473428;
        case 0x47342cu: goto label_47342c;
        case 0x473430u: goto label_473430;
        case 0x473434u: goto label_473434;
        case 0x473438u: goto label_473438;
        case 0x47343cu: goto label_47343c;
        case 0x473440u: goto label_473440;
        case 0x473444u: goto label_473444;
        case 0x473448u: goto label_473448;
        case 0x47344cu: goto label_47344c;
        case 0x473450u: goto label_473450;
        case 0x473454u: goto label_473454;
        case 0x473458u: goto label_473458;
        case 0x47345cu: goto label_47345c;
        case 0x473460u: goto label_473460;
        case 0x473464u: goto label_473464;
        case 0x473468u: goto label_473468;
        case 0x47346cu: goto label_47346c;
        case 0x473470u: goto label_473470;
        case 0x473474u: goto label_473474;
        case 0x473478u: goto label_473478;
        case 0x47347cu: goto label_47347c;
        case 0x473480u: goto label_473480;
        case 0x473484u: goto label_473484;
        case 0x473488u: goto label_473488;
        case 0x47348cu: goto label_47348c;
        case 0x473490u: goto label_473490;
        case 0x473494u: goto label_473494;
        case 0x473498u: goto label_473498;
        case 0x47349cu: goto label_47349c;
        case 0x4734a0u: goto label_4734a0;
        case 0x4734a4u: goto label_4734a4;
        case 0x4734a8u: goto label_4734a8;
        case 0x4734acu: goto label_4734ac;
        case 0x4734b0u: goto label_4734b0;
        case 0x4734b4u: goto label_4734b4;
        case 0x4734b8u: goto label_4734b8;
        case 0x4734bcu: goto label_4734bc;
        case 0x4734c0u: goto label_4734c0;
        case 0x4734c4u: goto label_4734c4;
        case 0x4734c8u: goto label_4734c8;
        case 0x4734ccu: goto label_4734cc;
        case 0x4734d0u: goto label_4734d0;
        case 0x4734d4u: goto label_4734d4;
        case 0x4734d8u: goto label_4734d8;
        case 0x4734dcu: goto label_4734dc;
        case 0x4734e0u: goto label_4734e0;
        case 0x4734e4u: goto label_4734e4;
        case 0x4734e8u: goto label_4734e8;
        case 0x4734ecu: goto label_4734ec;
        case 0x4734f0u: goto label_4734f0;
        case 0x4734f4u: goto label_4734f4;
        case 0x4734f8u: goto label_4734f8;
        case 0x4734fcu: goto label_4734fc;
        case 0x473500u: goto label_473500;
        case 0x473504u: goto label_473504;
        case 0x473508u: goto label_473508;
        case 0x47350cu: goto label_47350c;
        case 0x473510u: goto label_473510;
        case 0x473514u: goto label_473514;
        case 0x473518u: goto label_473518;
        case 0x47351cu: goto label_47351c;
        case 0x473520u: goto label_473520;
        case 0x473524u: goto label_473524;
        case 0x473528u: goto label_473528;
        case 0x47352cu: goto label_47352c;
        case 0x473530u: goto label_473530;
        case 0x473534u: goto label_473534;
        case 0x473538u: goto label_473538;
        case 0x47353cu: goto label_47353c;
        case 0x473540u: goto label_473540;
        case 0x473544u: goto label_473544;
        case 0x473548u: goto label_473548;
        case 0x47354cu: goto label_47354c;
        case 0x473550u: goto label_473550;
        case 0x473554u: goto label_473554;
        case 0x473558u: goto label_473558;
        case 0x47355cu: goto label_47355c;
        case 0x473560u: goto label_473560;
        case 0x473564u: goto label_473564;
        case 0x473568u: goto label_473568;
        case 0x47356cu: goto label_47356c;
        case 0x473570u: goto label_473570;
        case 0x473574u: goto label_473574;
        case 0x473578u: goto label_473578;
        case 0x47357cu: goto label_47357c;
        case 0x473580u: goto label_473580;
        case 0x473584u: goto label_473584;
        case 0x473588u: goto label_473588;
        case 0x47358cu: goto label_47358c;
        case 0x473590u: goto label_473590;
        case 0x473594u: goto label_473594;
        case 0x473598u: goto label_473598;
        case 0x47359cu: goto label_47359c;
        case 0x4735a0u: goto label_4735a0;
        case 0x4735a4u: goto label_4735a4;
        case 0x4735a8u: goto label_4735a8;
        case 0x4735acu: goto label_4735ac;
        case 0x4735b0u: goto label_4735b0;
        case 0x4735b4u: goto label_4735b4;
        case 0x4735b8u: goto label_4735b8;
        case 0x4735bcu: goto label_4735bc;
        case 0x4735c0u: goto label_4735c0;
        case 0x4735c4u: goto label_4735c4;
        case 0x4735c8u: goto label_4735c8;
        case 0x4735ccu: goto label_4735cc;
        case 0x4735d0u: goto label_4735d0;
        case 0x4735d4u: goto label_4735d4;
        case 0x4735d8u: goto label_4735d8;
        case 0x4735dcu: goto label_4735dc;
        case 0x4735e0u: goto label_4735e0;
        case 0x4735e4u: goto label_4735e4;
        case 0x4735e8u: goto label_4735e8;
        case 0x4735ecu: goto label_4735ec;
        case 0x4735f0u: goto label_4735f0;
        case 0x4735f4u: goto label_4735f4;
        case 0x4735f8u: goto label_4735f8;
        case 0x4735fcu: goto label_4735fc;
        case 0x473600u: goto label_473600;
        case 0x473604u: goto label_473604;
        case 0x473608u: goto label_473608;
        case 0x47360cu: goto label_47360c;
        case 0x473610u: goto label_473610;
        case 0x473614u: goto label_473614;
        case 0x473618u: goto label_473618;
        case 0x47361cu: goto label_47361c;
        case 0x473620u: goto label_473620;
        case 0x473624u: goto label_473624;
        case 0x473628u: goto label_473628;
        case 0x47362cu: goto label_47362c;
        case 0x473630u: goto label_473630;
        case 0x473634u: goto label_473634;
        case 0x473638u: goto label_473638;
        case 0x47363cu: goto label_47363c;
        case 0x473640u: goto label_473640;
        case 0x473644u: goto label_473644;
        case 0x473648u: goto label_473648;
        case 0x47364cu: goto label_47364c;
        case 0x473650u: goto label_473650;
        case 0x473654u: goto label_473654;
        case 0x473658u: goto label_473658;
        case 0x47365cu: goto label_47365c;
        case 0x473660u: goto label_473660;
        case 0x473664u: goto label_473664;
        case 0x473668u: goto label_473668;
        case 0x47366cu: goto label_47366c;
        case 0x473670u: goto label_473670;
        case 0x473674u: goto label_473674;
        case 0x473678u: goto label_473678;
        case 0x47367cu: goto label_47367c;
        case 0x473680u: goto label_473680;
        case 0x473684u: goto label_473684;
        case 0x473688u: goto label_473688;
        case 0x47368cu: goto label_47368c;
        case 0x473690u: goto label_473690;
        case 0x473694u: goto label_473694;
        case 0x473698u: goto label_473698;
        case 0x47369cu: goto label_47369c;
        case 0x4736a0u: goto label_4736a0;
        case 0x4736a4u: goto label_4736a4;
        case 0x4736a8u: goto label_4736a8;
        case 0x4736acu: goto label_4736ac;
        case 0x4736b0u: goto label_4736b0;
        case 0x4736b4u: goto label_4736b4;
        case 0x4736b8u: goto label_4736b8;
        case 0x4736bcu: goto label_4736bc;
        case 0x4736c0u: goto label_4736c0;
        case 0x4736c4u: goto label_4736c4;
        case 0x4736c8u: goto label_4736c8;
        case 0x4736ccu: goto label_4736cc;
        case 0x4736d0u: goto label_4736d0;
        case 0x4736d4u: goto label_4736d4;
        case 0x4736d8u: goto label_4736d8;
        case 0x4736dcu: goto label_4736dc;
        case 0x4736e0u: goto label_4736e0;
        case 0x4736e4u: goto label_4736e4;
        case 0x4736e8u: goto label_4736e8;
        case 0x4736ecu: goto label_4736ec;
        case 0x4736f0u: goto label_4736f0;
        case 0x4736f4u: goto label_4736f4;
        case 0x4736f8u: goto label_4736f8;
        case 0x4736fcu: goto label_4736fc;
        case 0x473700u: goto label_473700;
        case 0x473704u: goto label_473704;
        case 0x473708u: goto label_473708;
        case 0x47370cu: goto label_47370c;
        case 0x473710u: goto label_473710;
        case 0x473714u: goto label_473714;
        case 0x473718u: goto label_473718;
        case 0x47371cu: goto label_47371c;
        case 0x473720u: goto label_473720;
        case 0x473724u: goto label_473724;
        case 0x473728u: goto label_473728;
        case 0x47372cu: goto label_47372c;
        case 0x473730u: goto label_473730;
        case 0x473734u: goto label_473734;
        case 0x473738u: goto label_473738;
        case 0x47373cu: goto label_47373c;
        case 0x473740u: goto label_473740;
        case 0x473744u: goto label_473744;
        case 0x473748u: goto label_473748;
        case 0x47374cu: goto label_47374c;
        case 0x473750u: goto label_473750;
        case 0x473754u: goto label_473754;
        case 0x473758u: goto label_473758;
        case 0x47375cu: goto label_47375c;
        case 0x473760u: goto label_473760;
        case 0x473764u: goto label_473764;
        case 0x473768u: goto label_473768;
        case 0x47376cu: goto label_47376c;
        case 0x473770u: goto label_473770;
        case 0x473774u: goto label_473774;
        case 0x473778u: goto label_473778;
        case 0x47377cu: goto label_47377c;
        case 0x473780u: goto label_473780;
        case 0x473784u: goto label_473784;
        case 0x473788u: goto label_473788;
        case 0x47378cu: goto label_47378c;
        case 0x473790u: goto label_473790;
        case 0x473794u: goto label_473794;
        case 0x473798u: goto label_473798;
        case 0x47379cu: goto label_47379c;
        case 0x4737a0u: goto label_4737a0;
        case 0x4737a4u: goto label_4737a4;
        case 0x4737a8u: goto label_4737a8;
        case 0x4737acu: goto label_4737ac;
        case 0x4737b0u: goto label_4737b0;
        case 0x4737b4u: goto label_4737b4;
        case 0x4737b8u: goto label_4737b8;
        case 0x4737bcu: goto label_4737bc;
        case 0x4737c0u: goto label_4737c0;
        case 0x4737c4u: goto label_4737c4;
        case 0x4737c8u: goto label_4737c8;
        case 0x4737ccu: goto label_4737cc;
        case 0x4737d0u: goto label_4737d0;
        case 0x4737d4u: goto label_4737d4;
        case 0x4737d8u: goto label_4737d8;
        case 0x4737dcu: goto label_4737dc;
        case 0x4737e0u: goto label_4737e0;
        case 0x4737e4u: goto label_4737e4;
        case 0x4737e8u: goto label_4737e8;
        case 0x4737ecu: goto label_4737ec;
        case 0x4737f0u: goto label_4737f0;
        case 0x4737f4u: goto label_4737f4;
        case 0x4737f8u: goto label_4737f8;
        case 0x4737fcu: goto label_4737fc;
        case 0x473800u: goto label_473800;
        case 0x473804u: goto label_473804;
        case 0x473808u: goto label_473808;
        case 0x47380cu: goto label_47380c;
        case 0x473810u: goto label_473810;
        case 0x473814u: goto label_473814;
        case 0x473818u: goto label_473818;
        case 0x47381cu: goto label_47381c;
        case 0x473820u: goto label_473820;
        case 0x473824u: goto label_473824;
        case 0x473828u: goto label_473828;
        case 0x47382cu: goto label_47382c;
        case 0x473830u: goto label_473830;
        case 0x473834u: goto label_473834;
        case 0x473838u: goto label_473838;
        case 0x47383cu: goto label_47383c;
        case 0x473840u: goto label_473840;
        case 0x473844u: goto label_473844;
        case 0x473848u: goto label_473848;
        case 0x47384cu: goto label_47384c;
        case 0x473850u: goto label_473850;
        case 0x473854u: goto label_473854;
        case 0x473858u: goto label_473858;
        case 0x47385cu: goto label_47385c;
        case 0x473860u: goto label_473860;
        case 0x473864u: goto label_473864;
        case 0x473868u: goto label_473868;
        case 0x47386cu: goto label_47386c;
        case 0x473870u: goto label_473870;
        case 0x473874u: goto label_473874;
        case 0x473878u: goto label_473878;
        case 0x47387cu: goto label_47387c;
        case 0x473880u: goto label_473880;
        case 0x473884u: goto label_473884;
        case 0x473888u: goto label_473888;
        case 0x47388cu: goto label_47388c;
        case 0x473890u: goto label_473890;
        case 0x473894u: goto label_473894;
        case 0x473898u: goto label_473898;
        case 0x47389cu: goto label_47389c;
        case 0x4738a0u: goto label_4738a0;
        case 0x4738a4u: goto label_4738a4;
        case 0x4738a8u: goto label_4738a8;
        case 0x4738acu: goto label_4738ac;
        case 0x4738b0u: goto label_4738b0;
        case 0x4738b4u: goto label_4738b4;
        case 0x4738b8u: goto label_4738b8;
        case 0x4738bcu: goto label_4738bc;
        case 0x4738c0u: goto label_4738c0;
        case 0x4738c4u: goto label_4738c4;
        case 0x4738c8u: goto label_4738c8;
        case 0x4738ccu: goto label_4738cc;
        case 0x4738d0u: goto label_4738d0;
        case 0x4738d4u: goto label_4738d4;
        case 0x4738d8u: goto label_4738d8;
        case 0x4738dcu: goto label_4738dc;
        case 0x4738e0u: goto label_4738e0;
        case 0x4738e4u: goto label_4738e4;
        case 0x4738e8u: goto label_4738e8;
        case 0x4738ecu: goto label_4738ec;
        case 0x4738f0u: goto label_4738f0;
        case 0x4738f4u: goto label_4738f4;
        case 0x4738f8u: goto label_4738f8;
        case 0x4738fcu: goto label_4738fc;
        case 0x473900u: goto label_473900;
        case 0x473904u: goto label_473904;
        case 0x473908u: goto label_473908;
        case 0x47390cu: goto label_47390c;
        case 0x473910u: goto label_473910;
        case 0x473914u: goto label_473914;
        case 0x473918u: goto label_473918;
        case 0x47391cu: goto label_47391c;
        case 0x473920u: goto label_473920;
        case 0x473924u: goto label_473924;
        case 0x473928u: goto label_473928;
        case 0x47392cu: goto label_47392c;
        case 0x473930u: goto label_473930;
        case 0x473934u: goto label_473934;
        case 0x473938u: goto label_473938;
        case 0x47393cu: goto label_47393c;
        case 0x473940u: goto label_473940;
        case 0x473944u: goto label_473944;
        case 0x473948u: goto label_473948;
        case 0x47394cu: goto label_47394c;
        case 0x473950u: goto label_473950;
        case 0x473954u: goto label_473954;
        case 0x473958u: goto label_473958;
        case 0x47395cu: goto label_47395c;
        case 0x473960u: goto label_473960;
        case 0x473964u: goto label_473964;
        case 0x473968u: goto label_473968;
        case 0x47396cu: goto label_47396c;
        case 0x473970u: goto label_473970;
        case 0x473974u: goto label_473974;
        case 0x473978u: goto label_473978;
        case 0x47397cu: goto label_47397c;
        case 0x473980u: goto label_473980;
        case 0x473984u: goto label_473984;
        case 0x473988u: goto label_473988;
        case 0x47398cu: goto label_47398c;
        case 0x473990u: goto label_473990;
        case 0x473994u: goto label_473994;
        case 0x473998u: goto label_473998;
        case 0x47399cu: goto label_47399c;
        case 0x4739a0u: goto label_4739a0;
        case 0x4739a4u: goto label_4739a4;
        case 0x4739a8u: goto label_4739a8;
        case 0x4739acu: goto label_4739ac;
        case 0x4739b0u: goto label_4739b0;
        case 0x4739b4u: goto label_4739b4;
        case 0x4739b8u: goto label_4739b8;
        case 0x4739bcu: goto label_4739bc;
        case 0x4739c0u: goto label_4739c0;
        case 0x4739c4u: goto label_4739c4;
        case 0x4739c8u: goto label_4739c8;
        case 0x4739ccu: goto label_4739cc;
        case 0x4739d0u: goto label_4739d0;
        case 0x4739d4u: goto label_4739d4;
        case 0x4739d8u: goto label_4739d8;
        case 0x4739dcu: goto label_4739dc;
        case 0x4739e0u: goto label_4739e0;
        case 0x4739e4u: goto label_4739e4;
        case 0x4739e8u: goto label_4739e8;
        case 0x4739ecu: goto label_4739ec;
        case 0x4739f0u: goto label_4739f0;
        case 0x4739f4u: goto label_4739f4;
        case 0x4739f8u: goto label_4739f8;
        case 0x4739fcu: goto label_4739fc;
        case 0x473a00u: goto label_473a00;
        case 0x473a04u: goto label_473a04;
        case 0x473a08u: goto label_473a08;
        case 0x473a0cu: goto label_473a0c;
        case 0x473a10u: goto label_473a10;
        case 0x473a14u: goto label_473a14;
        case 0x473a18u: goto label_473a18;
        case 0x473a1cu: goto label_473a1c;
        case 0x473a20u: goto label_473a20;
        case 0x473a24u: goto label_473a24;
        case 0x473a28u: goto label_473a28;
        case 0x473a2cu: goto label_473a2c;
        case 0x473a30u: goto label_473a30;
        case 0x473a34u: goto label_473a34;
        case 0x473a38u: goto label_473a38;
        case 0x473a3cu: goto label_473a3c;
        case 0x473a40u: goto label_473a40;
        case 0x473a44u: goto label_473a44;
        case 0x473a48u: goto label_473a48;
        case 0x473a4cu: goto label_473a4c;
        case 0x473a50u: goto label_473a50;
        case 0x473a54u: goto label_473a54;
        case 0x473a58u: goto label_473a58;
        case 0x473a5cu: goto label_473a5c;
        case 0x473a60u: goto label_473a60;
        case 0x473a64u: goto label_473a64;
        case 0x473a68u: goto label_473a68;
        case 0x473a6cu: goto label_473a6c;
        case 0x473a70u: goto label_473a70;
        case 0x473a74u: goto label_473a74;
        case 0x473a78u: goto label_473a78;
        case 0x473a7cu: goto label_473a7c;
        case 0x473a80u: goto label_473a80;
        case 0x473a84u: goto label_473a84;
        case 0x473a88u: goto label_473a88;
        case 0x473a8cu: goto label_473a8c;
        case 0x473a90u: goto label_473a90;
        case 0x473a94u: goto label_473a94;
        case 0x473a98u: goto label_473a98;
        case 0x473a9cu: goto label_473a9c;
        case 0x473aa0u: goto label_473aa0;
        case 0x473aa4u: goto label_473aa4;
        case 0x473aa8u: goto label_473aa8;
        case 0x473aacu: goto label_473aac;
        case 0x473ab0u: goto label_473ab0;
        case 0x473ab4u: goto label_473ab4;
        case 0x473ab8u: goto label_473ab8;
        case 0x473abcu: goto label_473abc;
        case 0x473ac0u: goto label_473ac0;
        case 0x473ac4u: goto label_473ac4;
        case 0x473ac8u: goto label_473ac8;
        case 0x473accu: goto label_473acc;
        case 0x473ad0u: goto label_473ad0;
        case 0x473ad4u: goto label_473ad4;
        case 0x473ad8u: goto label_473ad8;
        case 0x473adcu: goto label_473adc;
        case 0x473ae0u: goto label_473ae0;
        case 0x473ae4u: goto label_473ae4;
        case 0x473ae8u: goto label_473ae8;
        case 0x473aecu: goto label_473aec;
        case 0x473af0u: goto label_473af0;
        case 0x473af4u: goto label_473af4;
        case 0x473af8u: goto label_473af8;
        case 0x473afcu: goto label_473afc;
        case 0x473b00u: goto label_473b00;
        case 0x473b04u: goto label_473b04;
        case 0x473b08u: goto label_473b08;
        case 0x473b0cu: goto label_473b0c;
        case 0x473b10u: goto label_473b10;
        case 0x473b14u: goto label_473b14;
        case 0x473b18u: goto label_473b18;
        case 0x473b1cu: goto label_473b1c;
        case 0x473b20u: goto label_473b20;
        case 0x473b24u: goto label_473b24;
        case 0x473b28u: goto label_473b28;
        case 0x473b2cu: goto label_473b2c;
        case 0x473b30u: goto label_473b30;
        case 0x473b34u: goto label_473b34;
        case 0x473b38u: goto label_473b38;
        case 0x473b3cu: goto label_473b3c;
        case 0x473b40u: goto label_473b40;
        case 0x473b44u: goto label_473b44;
        case 0x473b48u: goto label_473b48;
        case 0x473b4cu: goto label_473b4c;
        case 0x473b50u: goto label_473b50;
        case 0x473b54u: goto label_473b54;
        case 0x473b58u: goto label_473b58;
        case 0x473b5cu: goto label_473b5c;
        case 0x473b60u: goto label_473b60;
        case 0x473b64u: goto label_473b64;
        case 0x473b68u: goto label_473b68;
        case 0x473b6cu: goto label_473b6c;
        case 0x473b70u: goto label_473b70;
        case 0x473b74u: goto label_473b74;
        case 0x473b78u: goto label_473b78;
        case 0x473b7cu: goto label_473b7c;
        case 0x473b80u: goto label_473b80;
        case 0x473b84u: goto label_473b84;
        case 0x473b88u: goto label_473b88;
        case 0x473b8cu: goto label_473b8c;
        case 0x473b90u: goto label_473b90;
        case 0x473b94u: goto label_473b94;
        case 0x473b98u: goto label_473b98;
        case 0x473b9cu: goto label_473b9c;
        case 0x473ba0u: goto label_473ba0;
        case 0x473ba4u: goto label_473ba4;
        case 0x473ba8u: goto label_473ba8;
        case 0x473bacu: goto label_473bac;
        case 0x473bb0u: goto label_473bb0;
        case 0x473bb4u: goto label_473bb4;
        case 0x473bb8u: goto label_473bb8;
        case 0x473bbcu: goto label_473bbc;
        case 0x473bc0u: goto label_473bc0;
        case 0x473bc4u: goto label_473bc4;
        case 0x473bc8u: goto label_473bc8;
        case 0x473bccu: goto label_473bcc;
        case 0x473bd0u: goto label_473bd0;
        case 0x473bd4u: goto label_473bd4;
        case 0x473bd8u: goto label_473bd8;
        case 0x473bdcu: goto label_473bdc;
        case 0x473be0u: goto label_473be0;
        case 0x473be4u: goto label_473be4;
        case 0x473be8u: goto label_473be8;
        case 0x473becu: goto label_473bec;
        case 0x473bf0u: goto label_473bf0;
        case 0x473bf4u: goto label_473bf4;
        case 0x473bf8u: goto label_473bf8;
        case 0x473bfcu: goto label_473bfc;
        case 0x473c00u: goto label_473c00;
        case 0x473c04u: goto label_473c04;
        case 0x473c08u: goto label_473c08;
        case 0x473c0cu: goto label_473c0c;
        case 0x473c10u: goto label_473c10;
        case 0x473c14u: goto label_473c14;
        case 0x473c18u: goto label_473c18;
        case 0x473c1cu: goto label_473c1c;
        case 0x473c20u: goto label_473c20;
        case 0x473c24u: goto label_473c24;
        case 0x473c28u: goto label_473c28;
        case 0x473c2cu: goto label_473c2c;
        case 0x473c30u: goto label_473c30;
        case 0x473c34u: goto label_473c34;
        case 0x473c38u: goto label_473c38;
        case 0x473c3cu: goto label_473c3c;
        case 0x473c40u: goto label_473c40;
        case 0x473c44u: goto label_473c44;
        case 0x473c48u: goto label_473c48;
        case 0x473c4cu: goto label_473c4c;
        case 0x473c50u: goto label_473c50;
        case 0x473c54u: goto label_473c54;
        case 0x473c58u: goto label_473c58;
        case 0x473c5cu: goto label_473c5c;
        case 0x473c60u: goto label_473c60;
        case 0x473c64u: goto label_473c64;
        case 0x473c68u: goto label_473c68;
        case 0x473c6cu: goto label_473c6c;
        case 0x473c70u: goto label_473c70;
        case 0x473c74u: goto label_473c74;
        case 0x473c78u: goto label_473c78;
        case 0x473c7cu: goto label_473c7c;
        case 0x473c80u: goto label_473c80;
        case 0x473c84u: goto label_473c84;
        case 0x473c88u: goto label_473c88;
        case 0x473c8cu: goto label_473c8c;
        case 0x473c90u: goto label_473c90;
        case 0x473c94u: goto label_473c94;
        case 0x473c98u: goto label_473c98;
        case 0x473c9cu: goto label_473c9c;
        case 0x473ca0u: goto label_473ca0;
        case 0x473ca4u: goto label_473ca4;
        case 0x473ca8u: goto label_473ca8;
        case 0x473cacu: goto label_473cac;
        case 0x473cb0u: goto label_473cb0;
        case 0x473cb4u: goto label_473cb4;
        case 0x473cb8u: goto label_473cb8;
        case 0x473cbcu: goto label_473cbc;
        case 0x473cc0u: goto label_473cc0;
        case 0x473cc4u: goto label_473cc4;
        case 0x473cc8u: goto label_473cc8;
        case 0x473cccu: goto label_473ccc;
        case 0x473cd0u: goto label_473cd0;
        case 0x473cd4u: goto label_473cd4;
        case 0x473cd8u: goto label_473cd8;
        case 0x473cdcu: goto label_473cdc;
        case 0x473ce0u: goto label_473ce0;
        case 0x473ce4u: goto label_473ce4;
        case 0x473ce8u: goto label_473ce8;
        case 0x473cecu: goto label_473cec;
        case 0x473cf0u: goto label_473cf0;
        case 0x473cf4u: goto label_473cf4;
        case 0x473cf8u: goto label_473cf8;
        case 0x473cfcu: goto label_473cfc;
        case 0x473d00u: goto label_473d00;
        case 0x473d04u: goto label_473d04;
        case 0x473d08u: goto label_473d08;
        case 0x473d0cu: goto label_473d0c;
        case 0x473d10u: goto label_473d10;
        case 0x473d14u: goto label_473d14;
        case 0x473d18u: goto label_473d18;
        case 0x473d1cu: goto label_473d1c;
        case 0x473d20u: goto label_473d20;
        case 0x473d24u: goto label_473d24;
        case 0x473d28u: goto label_473d28;
        case 0x473d2cu: goto label_473d2c;
        case 0x473d30u: goto label_473d30;
        case 0x473d34u: goto label_473d34;
        case 0x473d38u: goto label_473d38;
        case 0x473d3cu: goto label_473d3c;
        case 0x473d40u: goto label_473d40;
        case 0x473d44u: goto label_473d44;
        case 0x473d48u: goto label_473d48;
        case 0x473d4cu: goto label_473d4c;
        case 0x473d50u: goto label_473d50;
        case 0x473d54u: goto label_473d54;
        case 0x473d58u: goto label_473d58;
        case 0x473d5cu: goto label_473d5c;
        case 0x473d60u: goto label_473d60;
        case 0x473d64u: goto label_473d64;
        case 0x473d68u: goto label_473d68;
        case 0x473d6cu: goto label_473d6c;
        case 0x473d70u: goto label_473d70;
        case 0x473d74u: goto label_473d74;
        case 0x473d78u: goto label_473d78;
        case 0x473d7cu: goto label_473d7c;
        case 0x473d80u: goto label_473d80;
        case 0x473d84u: goto label_473d84;
        case 0x473d88u: goto label_473d88;
        case 0x473d8cu: goto label_473d8c;
        case 0x473d90u: goto label_473d90;
        case 0x473d94u: goto label_473d94;
        case 0x473d98u: goto label_473d98;
        case 0x473d9cu: goto label_473d9c;
        case 0x473da0u: goto label_473da0;
        case 0x473da4u: goto label_473da4;
        case 0x473da8u: goto label_473da8;
        case 0x473dacu: goto label_473dac;
        case 0x473db0u: goto label_473db0;
        case 0x473db4u: goto label_473db4;
        case 0x473db8u: goto label_473db8;
        case 0x473dbcu: goto label_473dbc;
        case 0x473dc0u: goto label_473dc0;
        case 0x473dc4u: goto label_473dc4;
        case 0x473dc8u: goto label_473dc8;
        case 0x473dccu: goto label_473dcc;
        case 0x473dd0u: goto label_473dd0;
        case 0x473dd4u: goto label_473dd4;
        case 0x473dd8u: goto label_473dd8;
        case 0x473ddcu: goto label_473ddc;
        case 0x473de0u: goto label_473de0;
        case 0x473de4u: goto label_473de4;
        case 0x473de8u: goto label_473de8;
        case 0x473decu: goto label_473dec;
        case 0x473df0u: goto label_473df0;
        case 0x473df4u: goto label_473df4;
        case 0x473df8u: goto label_473df8;
        case 0x473dfcu: goto label_473dfc;
        case 0x473e00u: goto label_473e00;
        case 0x473e04u: goto label_473e04;
        case 0x473e08u: goto label_473e08;
        case 0x473e0cu: goto label_473e0c;
        case 0x473e10u: goto label_473e10;
        case 0x473e14u: goto label_473e14;
        case 0x473e18u: goto label_473e18;
        case 0x473e1cu: goto label_473e1c;
        case 0x473e20u: goto label_473e20;
        case 0x473e24u: goto label_473e24;
        case 0x473e28u: goto label_473e28;
        case 0x473e2cu: goto label_473e2c;
        case 0x473e30u: goto label_473e30;
        case 0x473e34u: goto label_473e34;
        case 0x473e38u: goto label_473e38;
        case 0x473e3cu: goto label_473e3c;
        case 0x473e40u: goto label_473e40;
        case 0x473e44u: goto label_473e44;
        case 0x473e48u: goto label_473e48;
        case 0x473e4cu: goto label_473e4c;
        case 0x473e50u: goto label_473e50;
        case 0x473e54u: goto label_473e54;
        case 0x473e58u: goto label_473e58;
        case 0x473e5cu: goto label_473e5c;
        case 0x473e60u: goto label_473e60;
        case 0x473e64u: goto label_473e64;
        case 0x473e68u: goto label_473e68;
        case 0x473e6cu: goto label_473e6c;
        case 0x473e70u: goto label_473e70;
        case 0x473e74u: goto label_473e74;
        case 0x473e78u: goto label_473e78;
        case 0x473e7cu: goto label_473e7c;
        case 0x473e80u: goto label_473e80;
        case 0x473e84u: goto label_473e84;
        case 0x473e88u: goto label_473e88;
        case 0x473e8cu: goto label_473e8c;
        case 0x473e90u: goto label_473e90;
        case 0x473e94u: goto label_473e94;
        case 0x473e98u: goto label_473e98;
        case 0x473e9cu: goto label_473e9c;
        case 0x473ea0u: goto label_473ea0;
        case 0x473ea4u: goto label_473ea4;
        case 0x473ea8u: goto label_473ea8;
        case 0x473eacu: goto label_473eac;
        case 0x473eb0u: goto label_473eb0;
        case 0x473eb4u: goto label_473eb4;
        case 0x473eb8u: goto label_473eb8;
        case 0x473ebcu: goto label_473ebc;
        case 0x473ec0u: goto label_473ec0;
        case 0x473ec4u: goto label_473ec4;
        case 0x473ec8u: goto label_473ec8;
        case 0x473eccu: goto label_473ecc;
        case 0x473ed0u: goto label_473ed0;
        case 0x473ed4u: goto label_473ed4;
        case 0x473ed8u: goto label_473ed8;
        case 0x473edcu: goto label_473edc;
        case 0x473ee0u: goto label_473ee0;
        case 0x473ee4u: goto label_473ee4;
        case 0x473ee8u: goto label_473ee8;
        case 0x473eecu: goto label_473eec;
        case 0x473ef0u: goto label_473ef0;
        case 0x473ef4u: goto label_473ef4;
        case 0x473ef8u: goto label_473ef8;
        case 0x473efcu: goto label_473efc;
        case 0x473f00u: goto label_473f00;
        case 0x473f04u: goto label_473f04;
        case 0x473f08u: goto label_473f08;
        case 0x473f0cu: goto label_473f0c;
        case 0x473f10u: goto label_473f10;
        case 0x473f14u: goto label_473f14;
        case 0x473f18u: goto label_473f18;
        case 0x473f1cu: goto label_473f1c;
        case 0x473f20u: goto label_473f20;
        case 0x473f24u: goto label_473f24;
        case 0x473f28u: goto label_473f28;
        case 0x473f2cu: goto label_473f2c;
        case 0x473f30u: goto label_473f30;
        case 0x473f34u: goto label_473f34;
        case 0x473f38u: goto label_473f38;
        case 0x473f3cu: goto label_473f3c;
        case 0x473f40u: goto label_473f40;
        case 0x473f44u: goto label_473f44;
        case 0x473f48u: goto label_473f48;
        case 0x473f4cu: goto label_473f4c;
        case 0x473f50u: goto label_473f50;
        case 0x473f54u: goto label_473f54;
        case 0x473f58u: goto label_473f58;
        case 0x473f5cu: goto label_473f5c;
        case 0x473f60u: goto label_473f60;
        case 0x473f64u: goto label_473f64;
        case 0x473f68u: goto label_473f68;
        case 0x473f6cu: goto label_473f6c;
        case 0x473f70u: goto label_473f70;
        case 0x473f74u: goto label_473f74;
        case 0x473f78u: goto label_473f78;
        case 0x473f7cu: goto label_473f7c;
        default: break;
    }

    ctx->pc = 0x4733c0u;

label_4733c0:
    // 0x4733c0: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x4733c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_4733c4:
    // 0x4733c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4733c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4733c8:
    // 0x4733c8: 0xafa40270  sw          $a0, 0x270($sp)
    ctx->pc = 0x4733c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 4));
label_4733cc:
    // 0x4733cc: 0xafa50280  sw          $a1, 0x280($sp)
    ctx->pc = 0x4733ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 5));
label_4733d0:
    // 0x4733d0: 0xc11c1fc  jal         func_4707F0
label_4733d4:
    if (ctx->pc == 0x4733D4u) {
        ctx->pc = 0x4733D8u;
        goto label_4733d8;
    }
    ctx->pc = 0x4733D0u;
    SET_GPR_U32(ctx, 31, 0x4733D8u);
    ctx->pc = 0x4707F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4707F0u, 0x4733D0u, 0x4733D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4733D8u;
label_4733d8:
    // 0x4733d8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4733dc:
    if (ctx->pc == 0x4733DCu) {
        ctx->pc = 0x4733E0u;
        goto label_4733e0;
    }
    ctx->pc = 0x4733D8u;
    {
        const bool branch_taken_0x4733d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4733d8) {
            ctx->pc = 0x473488u;
            goto label_473488;
        }
    }
    ctx->pc = 0x4733E0u;
label_4733e0:
    // 0x4733e0: 0x8f82b3dc  lw          $v0, -0x4C24($gp)
    ctx->pc = 0x4733e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947804)));
label_4733e4:
    // 0x4733e4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4733e8:
    if (ctx->pc == 0x4733E8u) {
        ctx->pc = 0x4733ECu;
        goto label_4733ec;
    }
    ctx->pc = 0x4733E4u;
    {
        const bool branch_taken_0x4733e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4733e4) {
            ctx->pc = 0x473488u;
            goto label_473488;
        }
    }
    ctx->pc = 0x4733ECu;
label_4733ec:
    // 0x4733ec: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4733ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4733f0:
    // 0x4733f0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4733f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4733f4:
    // 0x4733f4: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x4733f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_4733f8:
    // 0x4733f8: 0xc115ee8  jal         func_457BA0
label_4733fc:
    if (ctx->pc == 0x4733FCu) {
        ctx->pc = 0x473400u;
        goto label_473400;
    }
    ctx->pc = 0x4733F8u;
    SET_GPR_U32(ctx, 31, 0x473400u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4733F8u, 0x473400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473400u;
label_473400:
    // 0x473400: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_473404:
    if (ctx->pc == 0x473404u) {
        ctx->pc = 0x473408u;
        goto label_473408;
    }
    ctx->pc = 0x473400u;
    {
        const bool branch_taken_0x473400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473400) {
            ctx->pc = 0x473488u;
            goto label_473488;
        }
    }
    ctx->pc = 0x473408u;
label_473408:
    // 0x473408: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x473408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_47340c:
    // 0x47340c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_473410:
    if (ctx->pc == 0x473410u) {
        ctx->pc = 0x473414u;
        goto label_473414;
    }
    ctx->pc = 0x47340Cu;
    {
        const bool branch_taken_0x47340c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47340c) {
            ctx->pc = 0x473488u;
            goto label_473488;
        }
    }
    ctx->pc = 0x473414u;
label_473414:
    // 0x473414: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x473414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_473418:
    // 0x473418: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x473418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47341c:
    // 0x47341c: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x47341cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_473420:
    // 0x473420: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x473420u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_473424:
    // 0x473424: 0x24e702c8  addiu       $a3, $a3, 0x2C8
    ctx->pc = 0x473424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 712));
label_473428:
    // 0x473428: 0x240800c6  addiu       $t0, $zero, 0xC6
    ctx->pc = 0x473428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
label_47342c:
    // 0x47342c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47342cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_473430:
    // 0x473430: 0x25290340  addiu       $t1, $t1, 0x340
    ctx->pc = 0x473430u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 832));
label_473434:
    // 0x473434: 0xc113940  jal         func_44E500
label_473438:
    if (ctx->pc == 0x473438u) {
        ctx->pc = 0x47343Cu;
        goto label_47343c;
    }
    ctx->pc = 0x473434u;
    SET_GPR_U32(ctx, 31, 0x47343Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x473434u, 0x47343Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47343Cu;
label_47343c:
    // 0x47343c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x47343cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_473440:
    // 0x473440: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x473440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_473444:
    // 0x473444: 0x24a50680  addiu       $a1, $a1, 0x680
    ctx->pc = 0x473444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1664));
label_473448:
    // 0x473448: 0xc115c24  jal         func_457090
label_47344c:
    if (ctx->pc == 0x47344Cu) {
        ctx->pc = 0x473450u;
        goto label_473450;
    }
    ctx->pc = 0x473448u;
    SET_GPR_U32(ctx, 31, 0x473450u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x473448u, 0x473450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473450u;
label_473450:
    // 0x473450: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x473450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_473454:
    // 0x473454: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x473454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_473458:
    // 0x473458: 0x40f809  jalr        $v0
label_47345c:
    if (ctx->pc == 0x47345Cu) {
        ctx->pc = 0x473460u;
        goto label_473460;
    }
    ctx->pc = 0x473458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x473460u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473458u, 0x473460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x473460u;
label_473460:
    // 0x473460: 0xaf82b3dc  sw          $v0, -0x4C24($gp)
    ctx->pc = 0x473460u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947804), GPR_U32(ctx, 2));
label_473464:
    // 0x473464: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x473464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_473468:
    // 0x473468: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47346c:
    if (ctx->pc == 0x47346Cu) {
        ctx->pc = 0x473470u;
        goto label_473470;
    }
    ctx->pc = 0x473468u;
    {
        const bool branch_taken_0x473468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473468) {
            ctx->pc = 0x473478u;
            goto label_473478;
        }
    }
    ctx->pc = 0x473470u;
label_473470:
    // 0x473470: 0xd  break       0
    ctx->pc = 0x473470u;
    runtime->handleBreak(rdram, ctx);
label_473474:
    // 0x473474: 0x0  nop
    ctx->pc = 0x473474u;
    // NOP
label_473478:
    // 0x473478: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x473478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_47347c:
    // 0x47347c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47347cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_473480:
    // 0x473480: 0xc11392c  jal         func_44E4B0
label_473484:
    if (ctx->pc == 0x473484u) {
        ctx->pc = 0x473488u;
        goto label_473488;
    }
    ctx->pc = 0x473480u;
    SET_GPR_U32(ctx, 31, 0x473488u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x473480u, 0x473488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473488u;
label_473488:
    // 0x473488: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x473488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_47348c:
    // 0x47348c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x47348cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_473490:
    // 0x473490: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x473490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_473494:
    // 0x473494: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x473494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_473498:
    // 0x473498: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_47349c:
    if (ctx->pc == 0x47349Cu) {
        ctx->pc = 0x4734A0u;
        goto label_4734a0;
    }
    ctx->pc = 0x473498u;
    {
        const bool branch_taken_0x473498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x473498) {
            ctx->pc = 0x473548u;
            goto label_473548;
        }
    }
    ctx->pc = 0x4734A0u;
label_4734a0:
    // 0x4734a0: 0x8f82b3e0  lw          $v0, -0x4C20($gp)
    ctx->pc = 0x4734a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947808)));
label_4734a4:
    // 0x4734a4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4734a8:
    if (ctx->pc == 0x4734A8u) {
        ctx->pc = 0x4734ACu;
        goto label_4734ac;
    }
    ctx->pc = 0x4734A4u;
    {
        const bool branch_taken_0x4734a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4734a4) {
            ctx->pc = 0x473548u;
            goto label_473548;
        }
    }
    ctx->pc = 0x4734ACu;
label_4734ac:
    // 0x4734ac: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4734acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4734b0:
    // 0x4734b0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4734b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4734b4:
    // 0x4734b4: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x4734b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_4734b8:
    // 0x4734b8: 0xc115ee8  jal         func_457BA0
label_4734bc:
    if (ctx->pc == 0x4734BCu) {
        ctx->pc = 0x4734C0u;
        goto label_4734c0;
    }
    ctx->pc = 0x4734B8u;
    SET_GPR_U32(ctx, 31, 0x4734C0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4734B8u, 0x4734C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4734C0u;
label_4734c0:
    // 0x4734c0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4734c4:
    if (ctx->pc == 0x4734C4u) {
        ctx->pc = 0x4734C8u;
        goto label_4734c8;
    }
    ctx->pc = 0x4734C0u;
    {
        const bool branch_taken_0x4734c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4734c0) {
            ctx->pc = 0x473548u;
            goto label_473548;
        }
    }
    ctx->pc = 0x4734C8u;
label_4734c8:
    // 0x4734c8: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x4734c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_4734cc:
    // 0x4734cc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4734d0:
    if (ctx->pc == 0x4734D0u) {
        ctx->pc = 0x4734D4u;
        goto label_4734d4;
    }
    ctx->pc = 0x4734CCu;
    {
        const bool branch_taken_0x4734cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4734cc) {
            ctx->pc = 0x473548u;
            goto label_473548;
        }
    }
    ctx->pc = 0x4734D4u;
label_4734d4:
    // 0x4734d4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4734d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4734d8:
    // 0x4734d8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4734d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4734dc:
    // 0x4734dc: 0x8fa60254  lw          $a2, 0x254($sp)
    ctx->pc = 0x4734dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_4734e0:
    // 0x4734e0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4734e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4734e4:
    // 0x4734e4: 0x24e702c8  addiu       $a3, $a3, 0x2C8
    ctx->pc = 0x4734e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 712));
label_4734e8:
    // 0x4734e8: 0x240800c7  addiu       $t0, $zero, 0xC7
    ctx->pc = 0x4734e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
label_4734ec:
    // 0x4734ec: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4734ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4734f0:
    // 0x4734f0: 0x252903c0  addiu       $t1, $t1, 0x3C0
    ctx->pc = 0x4734f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 960));
label_4734f4:
    // 0x4734f4: 0xc113940  jal         func_44E500
label_4734f8:
    if (ctx->pc == 0x4734F8u) {
        ctx->pc = 0x4734FCu;
        goto label_4734fc;
    }
    ctx->pc = 0x4734F4u;
    SET_GPR_U32(ctx, 31, 0x4734FCu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4734F4u, 0x4734FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4734FCu;
label_4734fc:
    // 0x4734fc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4734fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_473500:
    // 0x473500: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x473500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_473504:
    // 0x473504: 0x24a506e0  addiu       $a1, $a1, 0x6E0
    ctx->pc = 0x473504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1760));
label_473508:
    // 0x473508: 0xc115c24  jal         func_457090
label_47350c:
    if (ctx->pc == 0x47350Cu) {
        ctx->pc = 0x473510u;
        goto label_473510;
    }
    ctx->pc = 0x473508u;
    SET_GPR_U32(ctx, 31, 0x473510u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x473508u, 0x473510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473510u;
label_473510:
    // 0x473510: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x473510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_473514:
    // 0x473514: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x473514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_473518:
    // 0x473518: 0x40f809  jalr        $v0
label_47351c:
    if (ctx->pc == 0x47351Cu) {
        ctx->pc = 0x473520u;
        goto label_473520;
    }
    ctx->pc = 0x473518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x473520u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473518u, 0x473520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x473520u;
label_473520:
    // 0x473520: 0xaf82b3e0  sw          $v0, -0x4C20($gp)
    ctx->pc = 0x473520u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947808), GPR_U32(ctx, 2));
label_473524:
    // 0x473524: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x473524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_473528:
    // 0x473528: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47352c:
    if (ctx->pc == 0x47352Cu) {
        ctx->pc = 0x473530u;
        goto label_473530;
    }
    ctx->pc = 0x473528u;
    {
        const bool branch_taken_0x473528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473528) {
            ctx->pc = 0x473538u;
            goto label_473538;
        }
    }
    ctx->pc = 0x473530u;
label_473530:
    // 0x473530: 0xd  break       0
    ctx->pc = 0x473530u;
    runtime->handleBreak(rdram, ctx);
label_473534:
    // 0x473534: 0x0  nop
    ctx->pc = 0x473534u;
    // NOP
label_473538:
    // 0x473538: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x473538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_47353c:
    // 0x47353c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47353cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_473540:
    // 0x473540: 0xc11392c  jal         func_44E4B0
label_473544:
    if (ctx->pc == 0x473544u) {
        ctx->pc = 0x473548u;
        goto label_473548;
    }
    ctx->pc = 0x473540u;
    SET_GPR_U32(ctx, 31, 0x473548u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x473540u, 0x473548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473548u;
label_473548:
    // 0x473548: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x473548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_47354c:
    // 0x47354c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x47354cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_473550:
    // 0x473550: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_473554:
    if (ctx->pc == 0x473554u) {
        ctx->pc = 0x473558u;
        goto label_473558;
    }
    ctx->pc = 0x473550u;
    {
        const bool branch_taken_0x473550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x473550) {
            ctx->pc = 0x473564u;
            goto label_473564;
        }
    }
    ctx->pc = 0x473558u;
label_473558:
    // 0x473558: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x473558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47355c:
    // 0x47355c: 0x10000008  b           . + 4 + (0x8 << 2)
label_473560:
    if (ctx->pc == 0x473560u) {
        ctx->pc = 0x473564u;
        goto label_473564;
    }
    ctx->pc = 0x47355Cu;
    {
        const bool branch_taken_0x47355c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47355c) {
            ctx->pc = 0x473580u;
            goto label_473580;
        }
    }
    ctx->pc = 0x473564u;
label_473564:
    // 0x473564: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x473564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_473568:
    // 0x473568: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x473568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_47356c:
    // 0x47356c: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x47356cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_473570:
    // 0x473570: 0xc0ed180  jal         func_3B4600
label_473574:
    if (ctx->pc == 0x473574u) {
        ctx->pc = 0x473578u;
        goto label_473578;
    }
    ctx->pc = 0x473570u;
    SET_GPR_U32(ctx, 31, 0x473578u);
    ctx->pc = 0x3B4600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4600u, 0x473570u, 0x473578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473578u;
label_473578:
    // 0x473578: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x473578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47357c:
    // 0x47357c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x47357cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_473580:
    // 0x473580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x473580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_473584:
    // 0x473584: 0x27bd0290  addiu       $sp, $sp, 0x290
    ctx->pc = 0x473584u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_473588:
    // 0x473588: 0x3e00008  jr          $ra
label_47358c:
    if (ctx->pc == 0x47358Cu) {
        ctx->pc = 0x473590u;
        goto label_473590;
    }
    ctx->pc = 0x473588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473590u;
label_473590:
    // 0x473590: 0x27bdfbe0  addiu       $sp, $sp, -0x420
    ctx->pc = 0x473590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966240));
label_473594:
    // 0x473594: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x473594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_473598:
    // 0x473598: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x473598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47359c:
    // 0x47359c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47359cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4735a0:
    // 0x4735a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4735a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4735a4:
    // 0x4735a4: 0xafa403e0  sw          $a0, 0x3E0($sp)
    ctx->pc = 0x4735a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 992), GPR_U32(ctx, 4));
label_4735a8:
    // 0x4735a8: 0xe7ac03f0  swc1        $f12, 0x3F0($sp)
    ctx->pc = 0x4735a8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1008), bits); }
label_4735ac:
    // 0x4735ac: 0xe7ad0400  swc1        $f13, 0x400($sp)
    ctx->pc = 0x4735acu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1024), bits); }
label_4735b0:
    // 0x4735b0: 0xafa50410  sw          $a1, 0x410($sp)
    ctx->pc = 0x4735b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1040), GPR_U32(ctx, 5));
label_4735b4:
    // 0x4735b4: 0xc11c1fc  jal         func_4707F0
label_4735b8:
    if (ctx->pc == 0x4735B8u) {
        ctx->pc = 0x4735BCu;
        goto label_4735bc;
    }
    ctx->pc = 0x4735B4u;
    SET_GPR_U32(ctx, 31, 0x4735BCu);
    ctx->pc = 0x4707F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4707F0u, 0x4735B4u, 0x4735BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4735BCu;
label_4735bc:
    // 0x4735bc: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_4735c0:
    if (ctx->pc == 0x4735C0u) {
        ctx->pc = 0x4735C4u;
        goto label_4735c4;
    }
    ctx->pc = 0x4735BCu;
    {
        const bool branch_taken_0x4735bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4735bc) {
            ctx->pc = 0x47366Cu;
            goto label_47366c;
        }
    }
    ctx->pc = 0x4735C4u;
label_4735c4:
    // 0x4735c4: 0x8f82b3e4  lw          $v0, -0x4C1C($gp)
    ctx->pc = 0x4735c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947812)));
label_4735c8:
    // 0x4735c8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4735cc:
    if (ctx->pc == 0x4735CCu) {
        ctx->pc = 0x4735D0u;
        goto label_4735d0;
    }
    ctx->pc = 0x4735C8u;
    {
        const bool branch_taken_0x4735c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4735c8) {
            ctx->pc = 0x47366Cu;
            goto label_47366c;
        }
    }
    ctx->pc = 0x4735D0u;
label_4735d0:
    // 0x4735d0: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4735d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4735d4:
    // 0x4735d4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4735d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4735d8:
    // 0x4735d8: 0x27a603d0  addiu       $a2, $sp, 0x3D0
    ctx->pc = 0x4735d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_4735dc:
    // 0x4735dc: 0xc115ee8  jal         func_457BA0
label_4735e0:
    if (ctx->pc == 0x4735E0u) {
        ctx->pc = 0x4735E4u;
        goto label_4735e4;
    }
    ctx->pc = 0x4735DCu;
    SET_GPR_U32(ctx, 31, 0x4735E4u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4735DCu, 0x4735E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4735E4u;
label_4735e4:
    // 0x4735e4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4735e8:
    if (ctx->pc == 0x4735E8u) {
        ctx->pc = 0x4735ECu;
        goto label_4735ec;
    }
    ctx->pc = 0x4735E4u;
    {
        const bool branch_taken_0x4735e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4735e4) {
            ctx->pc = 0x47366Cu;
            goto label_47366c;
        }
    }
    ctx->pc = 0x4735ECu;
label_4735ec:
    // 0x4735ec: 0x8fa203d8  lw          $v0, 0x3D8($sp)
    ctx->pc = 0x4735ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 984)));
label_4735f0:
    // 0x4735f0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4735f4:
    if (ctx->pc == 0x4735F4u) {
        ctx->pc = 0x4735F8u;
        goto label_4735f8;
    }
    ctx->pc = 0x4735F0u;
    {
        const bool branch_taken_0x4735f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4735f0) {
            ctx->pc = 0x47366Cu;
            goto label_47366c;
        }
    }
    ctx->pc = 0x4735F8u;
label_4735f8:
    // 0x4735f8: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x4735f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_4735fc:
    // 0x4735fc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4735fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_473600:
    // 0x473600: 0x8fa603d4  lw          $a2, 0x3D4($sp)
    ctx->pc = 0x473600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 980)));
label_473604:
    // 0x473604: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x473604u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_473608:
    // 0x473608: 0x24e702c8  addiu       $a3, $a3, 0x2C8
    ctx->pc = 0x473608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 712));
label_47360c:
    // 0x47360c: 0x240800d4  addiu       $t0, $zero, 0xD4
    ctx->pc = 0x47360cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
label_473610:
    // 0x473610: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x473610u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_473614:
    // 0x473614: 0x25290340  addiu       $t1, $t1, 0x340
    ctx->pc = 0x473614u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 832));
label_473618:
    // 0x473618: 0xc113940  jal         func_44E500
label_47361c:
    if (ctx->pc == 0x47361Cu) {
        ctx->pc = 0x473620u;
        goto label_473620;
    }
    ctx->pc = 0x473618u;
    SET_GPR_U32(ctx, 31, 0x473620u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x473618u, 0x473620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473620u;
label_473620:
    // 0x473620: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x473620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_473624:
    // 0x473624: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x473624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_473628:
    // 0x473628: 0x24a50730  addiu       $a1, $a1, 0x730
    ctx->pc = 0x473628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1840));
label_47362c:
    // 0x47362c: 0xc115c24  jal         func_457090
label_473630:
    if (ctx->pc == 0x473630u) {
        ctx->pc = 0x473634u;
        goto label_473634;
    }
    ctx->pc = 0x47362Cu;
    SET_GPR_U32(ctx, 31, 0x473634u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47362Cu, 0x473634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473634u;
label_473634:
    // 0x473634: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x473634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_473638:
    // 0x473638: 0x8fa203d8  lw          $v0, 0x3D8($sp)
    ctx->pc = 0x473638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 984)));
label_47363c:
    // 0x47363c: 0x40f809  jalr        $v0
label_473640:
    if (ctx->pc == 0x473640u) {
        ctx->pc = 0x473644u;
        goto label_473644;
    }
    ctx->pc = 0x47363Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x473644u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47363Cu, 0x473644u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x473644u;
label_473644:
    // 0x473644: 0xaf82b3e4  sw          $v0, -0x4C1C($gp)
    ctx->pc = 0x473644u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947812), GPR_U32(ctx, 2));
label_473648:
    // 0x473648: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x473648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_47364c:
    // 0x47364c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_473650:
    if (ctx->pc == 0x473650u) {
        ctx->pc = 0x473654u;
        goto label_473654;
    }
    ctx->pc = 0x47364Cu;
    {
        const bool branch_taken_0x47364c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47364c) {
            ctx->pc = 0x47365Cu;
            goto label_47365c;
        }
    }
    ctx->pc = 0x473654u;
label_473654:
    // 0x473654: 0xd  break       0
    ctx->pc = 0x473654u;
    runtime->handleBreak(rdram, ctx);
label_473658:
    // 0x473658: 0x0  nop
    ctx->pc = 0x473658u;
    // NOP
label_47365c:
    // 0x47365c: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x47365cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_473660:
    // 0x473660: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x473660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_473664:
    // 0x473664: 0xc11392c  jal         func_44E4B0
label_473668:
    if (ctx->pc == 0x473668u) {
        ctx->pc = 0x47366Cu;
        goto label_47366c;
    }
    ctx->pc = 0x473664u;
    SET_GPR_U32(ctx, 31, 0x47366Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x473664u, 0x47366Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47366Cu;
label_47366c:
    // 0x47366c: 0x8fa203e0  lw          $v0, 0x3E0($sp)
    ctx->pc = 0x47366cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
label_473670:
    // 0x473670: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x473670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_473674:
    // 0x473674: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x473674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_473678:
    // 0x473678: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x473678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47367c:
    // 0x47367c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_473680:
    if (ctx->pc == 0x473680u) {
        ctx->pc = 0x473684u;
        goto label_473684;
    }
    ctx->pc = 0x47367Cu;
    {
        const bool branch_taken_0x47367c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47367c) {
            ctx->pc = 0x47372Cu;
            goto label_47372c;
        }
    }
    ctx->pc = 0x473684u;
label_473684:
    // 0x473684: 0x8f82b3e8  lw          $v0, -0x4C18($gp)
    ctx->pc = 0x473684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947816)));
label_473688:
    // 0x473688: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_47368c:
    if (ctx->pc == 0x47368Cu) {
        ctx->pc = 0x473690u;
        goto label_473690;
    }
    ctx->pc = 0x473688u;
    {
        const bool branch_taken_0x473688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473688) {
            ctx->pc = 0x47372Cu;
            goto label_47372c;
        }
    }
    ctx->pc = 0x473690u;
label_473690:
    // 0x473690: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x473690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_473694:
    // 0x473694: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x473694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_473698:
    // 0x473698: 0x27a603c0  addiu       $a2, $sp, 0x3C0
    ctx->pc = 0x473698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_47369c:
    // 0x47369c: 0xc115ee8  jal         func_457BA0
label_4736a0:
    if (ctx->pc == 0x4736A0u) {
        ctx->pc = 0x4736A4u;
        goto label_4736a4;
    }
    ctx->pc = 0x47369Cu;
    SET_GPR_U32(ctx, 31, 0x4736A4u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47369Cu, 0x4736A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4736A4u;
label_4736a4:
    // 0x4736a4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4736a8:
    if (ctx->pc == 0x4736A8u) {
        ctx->pc = 0x4736ACu;
        goto label_4736ac;
    }
    ctx->pc = 0x4736A4u;
    {
        const bool branch_taken_0x4736a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4736a4) {
            ctx->pc = 0x47372Cu;
            goto label_47372c;
        }
    }
    ctx->pc = 0x4736ACu;
label_4736ac:
    // 0x4736ac: 0x8fa203c8  lw          $v0, 0x3C8($sp)
    ctx->pc = 0x4736acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 968)));
label_4736b0:
    // 0x4736b0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4736b4:
    if (ctx->pc == 0x4736B4u) {
        ctx->pc = 0x4736B8u;
        goto label_4736b8;
    }
    ctx->pc = 0x4736B0u;
    {
        const bool branch_taken_0x4736b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4736b0) {
            ctx->pc = 0x47372Cu;
            goto label_47372c;
        }
    }
    ctx->pc = 0x4736B8u;
label_4736b8:
    // 0x4736b8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x4736b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_4736bc:
    // 0x4736bc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4736bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4736c0:
    // 0x4736c0: 0x8fa603c4  lw          $a2, 0x3C4($sp)
    ctx->pc = 0x4736c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 964)));
label_4736c4:
    // 0x4736c4: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4736c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4736c8:
    // 0x4736c8: 0x24e702c8  addiu       $a3, $a3, 0x2C8
    ctx->pc = 0x4736c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 712));
label_4736cc:
    // 0x4736cc: 0x240800d5  addiu       $t0, $zero, 0xD5
    ctx->pc = 0x4736ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
label_4736d0:
    // 0x4736d0: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4736d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4736d4:
    // 0x4736d4: 0x252903c0  addiu       $t1, $t1, 0x3C0
    ctx->pc = 0x4736d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 960));
label_4736d8:
    // 0x4736d8: 0xc113940  jal         func_44E500
label_4736dc:
    if (ctx->pc == 0x4736DCu) {
        ctx->pc = 0x4736E0u;
        goto label_4736e0;
    }
    ctx->pc = 0x4736D8u;
    SET_GPR_U32(ctx, 31, 0x4736E0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4736D8u, 0x4736E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4736E0u;
label_4736e0:
    // 0x4736e0: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x4736e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_4736e4:
    // 0x4736e4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4736e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4736e8:
    // 0x4736e8: 0x24a50790  addiu       $a1, $a1, 0x790
    ctx->pc = 0x4736e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1936));
label_4736ec:
    // 0x4736ec: 0xc115c24  jal         func_457090
label_4736f0:
    if (ctx->pc == 0x4736F0u) {
        ctx->pc = 0x4736F4u;
        goto label_4736f4;
    }
    ctx->pc = 0x4736ECu;
    SET_GPR_U32(ctx, 31, 0x4736F4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4736ECu, 0x4736F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4736F4u;
label_4736f4:
    // 0x4736f4: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x4736f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_4736f8:
    // 0x4736f8: 0x8fa203c8  lw          $v0, 0x3C8($sp)
    ctx->pc = 0x4736f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 968)));
label_4736fc:
    // 0x4736fc: 0x40f809  jalr        $v0
label_473700:
    if (ctx->pc == 0x473700u) {
        ctx->pc = 0x473704u;
        goto label_473704;
    }
    ctx->pc = 0x4736FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x473704u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4736FCu, 0x473704u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x473704u;
label_473704:
    // 0x473704: 0xaf82b3e8  sw          $v0, -0x4C18($gp)
    ctx->pc = 0x473704u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947816), GPR_U32(ctx, 2));
label_473708:
    // 0x473708: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x473708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_47370c:
    // 0x47370c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_473710:
    if (ctx->pc == 0x473710u) {
        ctx->pc = 0x473714u;
        goto label_473714;
    }
    ctx->pc = 0x47370Cu;
    {
        const bool branch_taken_0x47370c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47370c) {
            ctx->pc = 0x47371Cu;
            goto label_47371c;
        }
    }
    ctx->pc = 0x473714u;
label_473714:
    // 0x473714: 0xd  break       0
    ctx->pc = 0x473714u;
    runtime->handleBreak(rdram, ctx);
label_473718:
    // 0x473718: 0x0  nop
    ctx->pc = 0x473718u;
    // NOP
label_47371c:
    // 0x47371c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x47371cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_473720:
    // 0x473720: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x473720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_473724:
    // 0x473724: 0xc11392c  jal         func_44E4B0
label_473728:
    if (ctx->pc == 0x473728u) {
        ctx->pc = 0x47372Cu;
        goto label_47372c;
    }
    ctx->pc = 0x473724u;
    SET_GPR_U32(ctx, 31, 0x47372Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x473724u, 0x47372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47372Cu;
label_47372c:
    // 0x47372c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x47372cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_473730:
    // 0x473730: 0x27a403b0  addiu       $a0, $sp, 0x3B0
    ctx->pc = 0x473730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_473734:
    // 0x473734: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x473734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_473738:
    // 0x473738: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_47373c:
    if (ctx->pc == 0x47373Cu) {
        ctx->pc = 0x473740u;
        goto label_473740;
    }
    ctx->pc = 0x473738u;
    {
        const bool branch_taken_0x473738 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x473738) {
            ctx->pc = 0x473760u;
            goto label_473760;
        }
    }
    ctx->pc = 0x473740u;
label_473740:
    // 0x473740: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x473740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_473744:
    // 0x473744: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x473744u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_473748:
    // 0x473748: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x473748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_47374c:
    // 0x47374c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x47374cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_473750:
    // 0x473750: 0x0  nop
    ctx->pc = 0x473750u;
    // NOP
label_473754:
    // 0x473754: 0x0  nop
    ctx->pc = 0x473754u;
    // NOP
label_473758:
    // 0x473758: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_47375c:
    if (ctx->pc == 0x47375Cu) {
        ctx->pc = 0x473760u;
        goto label_473760;
    }
    ctx->pc = 0x473758u;
    {
        const bool branch_taken_0x473758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x473758) {
            ctx->pc = 0x473744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_473744;
        }
    }
    ctx->pc = 0x473760u;
label_473760:
    // 0x473760: 0xc7a003f0  lwc1        $f0, 0x3F0($sp)
    ctx->pc = 0x473760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_473764:
    // 0x473764: 0xe7a003b0  swc1        $f0, 0x3B0($sp)
    ctx->pc = 0x473764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 944), bits); }
label_473768:
    // 0x473768: 0xc7a00400  lwc1        $f0, 0x400($sp)
    ctx->pc = 0x473768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47376c:
    // 0x47376c: 0xe7a003b4  swc1        $f0, 0x3B4($sp)
    ctx->pc = 0x47376cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 948), bits); }
label_473770:
    // 0x473770: 0xe7a003dc  swc1        $f0, 0x3DC($sp)
    ctx->pc = 0x473770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 988), bits); }
label_473774:
    // 0x473774: 0x8fa203e0  lw          $v0, 0x3E0($sp)
    ctx->pc = 0x473774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
label_473778:
    // 0x473778: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x473778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_47377c:
    // 0x47377c: 0xc0ed194  jal         func_3B4650
label_473780:
    if (ctx->pc == 0x473780u) {
        ctx->pc = 0x473784u;
        goto label_473784;
    }
    ctx->pc = 0x47377Cu;
    SET_GPR_U32(ctx, 31, 0x473784u);
    ctx->pc = 0x3B4650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4650u, 0x47377Cu, 0x473784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473784u;
label_473784:
    // 0x473784: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x473784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_473788:
    // 0x473788: 0x8fa20410  lw          $v0, 0x410($sp)
    ctx->pc = 0x473788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1040)));
label_47378c:
    // 0x47378c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_473790:
    if (ctx->pc == 0x473790u) {
        ctx->pc = 0x473794u;
        goto label_473794;
    }
    ctx->pc = 0x47378Cu;
    {
        const bool branch_taken_0x47378c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47378c) {
            ctx->pc = 0x4737A0u;
            goto label_4737a0;
        }
    }
    ctx->pc = 0x473794u;
label_473794:
    // 0x473794: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x473794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_473798:
    // 0x473798: 0x10000002  b           . + 4 + (0x2 << 2)
label_47379c:
    if (ctx->pc == 0x47379Cu) {
        ctx->pc = 0x4737A0u;
        goto label_4737a0;
    }
    ctx->pc = 0x473798u;
    {
        const bool branch_taken_0x473798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x473798) {
            ctx->pc = 0x4737A4u;
            goto label_4737a4;
        }
    }
    ctx->pc = 0x4737A0u;
label_4737a0:
    // 0x4737a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4737a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4737a4:
    // 0x4737a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4737a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4737a8:
    // 0x4737a8: 0x27a503b0  addiu       $a1, $sp, 0x3B0
    ctx->pc = 0x4737a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_4737ac:
    // 0x4737ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4737acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4737b0:
    // 0x4737b0: 0xc103d16  jal         func_40F458
label_4737b4:
    if (ctx->pc == 0x4737B4u) {
        ctx->pc = 0x4737B8u;
        goto label_4737b8;
    }
    ctx->pc = 0x4737B0u;
    SET_GPR_U32(ctx, 31, 0x4737B8u);
    ctx->pc = 0x40F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F458u, 0x4737B0u, 0x4737B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4737B8u;
label_4737b8:
    // 0x4737b8: 0x8fa203e0  lw          $v0, 0x3E0($sp)
    ctx->pc = 0x4737b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
label_4737bc:
    // 0x4737bc: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x4737bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4737c0:
    // 0x4737c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4737c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4737c4:
    // 0x4737c4: 0xc0ed196  jal         func_3B4658
label_4737c8:
    if (ctx->pc == 0x4737C8u) {
        ctx->pc = 0x4737CCu;
        goto label_4737cc;
    }
    ctx->pc = 0x4737C4u;
    SET_GPR_U32(ctx, 31, 0x4737CCu);
    ctx->pc = 0x3B4658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4658u, 0x4737C4u, 0x4737CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4737CCu;
label_4737cc:
    // 0x4737cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4737ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4737d0:
    // 0x4737d0: 0x8fa203e0  lw          $v0, 0x3E0($sp)
    ctx->pc = 0x4737d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
label_4737d4:
    // 0x4737d4: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x4737d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4737d8:
    // 0x4737d8: 0xc0ed18e  jal         func_3B4638
label_4737dc:
    if (ctx->pc == 0x4737DCu) {
        ctx->pc = 0x4737E0u;
        goto label_4737e0;
    }
    ctx->pc = 0x4737D8u;
    SET_GPR_U32(ctx, 31, 0x4737E0u);
    ctx->pc = 0x3B4638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4638u, 0x4737D8u, 0x4737E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4737E0u;
label_4737e0:
    // 0x4737e0: 0x8fa20410  lw          $v0, 0x410($sp)
    ctx->pc = 0x4737e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1040)));
label_4737e4:
    // 0x4737e4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_4737e8:
    if (ctx->pc == 0x4737E8u) {
        ctx->pc = 0x4737ECu;
        goto label_4737ec;
    }
    ctx->pc = 0x4737E4u;
    {
        const bool branch_taken_0x4737e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4737e4) {
            ctx->pc = 0x47381Cu;
            goto label_47381c;
        }
    }
    ctx->pc = 0x4737ECu;
label_4737ec:
    // 0x4737ec: 0x8fa203e0  lw          $v0, 0x3E0($sp)
    ctx->pc = 0x4737ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
label_4737f0:
    // 0x4737f0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x4737f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4737f4:
    // 0x4737f4: 0xc7a003f0  lwc1        $f0, 0x3F0($sp)
    ctx->pc = 0x4737f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4737f8:
    // 0x4737f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4737f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4737fc:
    // 0x4737fc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x4737fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_473800:
    // 0x473800: 0x8fa203e0  lw          $v0, 0x3E0($sp)
    ctx->pc = 0x473800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
label_473804:
    // 0x473804: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x473804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_473808:
    // 0x473808: 0xc7a00400  lwc1        $f0, 0x400($sp)
    ctx->pc = 0x473808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47380c:
    // 0x47380c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x47380cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_473810:
    // 0x473810: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x473810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_473814:
    // 0x473814: 0x1000000d  b           . + 4 + (0xD << 2)
label_473818:
    if (ctx->pc == 0x473818u) {
        ctx->pc = 0x47381Cu;
        goto label_47381c;
    }
    ctx->pc = 0x473814u;
    {
        const bool branch_taken_0x473814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x473814) {
            ctx->pc = 0x47384Cu;
            goto label_47384c;
        }
    }
    ctx->pc = 0x47381Cu;
label_47381c:
    // 0x47381c: 0x8fa203e0  lw          $v0, 0x3E0($sp)
    ctx->pc = 0x47381cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
label_473820:
    // 0x473820: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x473820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_473824:
    // 0x473824: 0xc7a003f0  lwc1        $f0, 0x3F0($sp)
    ctx->pc = 0x473824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_473828:
    // 0x473828: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x473828u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_47382c:
    // 0x47382c: 0x8fa203e0  lw          $v0, 0x3E0($sp)
    ctx->pc = 0x47382cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
label_473830:
    // 0x473830: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x473830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_473834:
    // 0x473834: 0x8fa203e0  lw          $v0, 0x3E0($sp)
    ctx->pc = 0x473834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
label_473838:
    // 0x473838: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x473838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47383c:
    // 0x47383c: 0xc7a00400  lwc1        $f0, 0x400($sp)
    ctx->pc = 0x47383cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_473840:
    // 0x473840: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x473840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_473844:
    // 0x473844: 0x8fa203e0  lw          $v0, 0x3E0($sp)
    ctx->pc = 0x473844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
label_473848:
    // 0x473848: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x473848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_47384c:
    // 0x47384c: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x47384cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_473850:
    // 0x473850: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x473850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_473854:
    // 0x473854: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_473858:
    if (ctx->pc == 0x473858u) {
        ctx->pc = 0x47385Cu;
        goto label_47385c;
    }
    ctx->pc = 0x473854u;
    {
        const bool branch_taken_0x473854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x473854) {
            ctx->pc = 0x473900u;
            goto label_473900;
        }
    }
    ctx->pc = 0x47385Cu;
label_47385c:
    // 0x47385c: 0x8f82b3ec  lw          $v0, -0x4C14($gp)
    ctx->pc = 0x47385cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947820)));
label_473860:
    // 0x473860: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_473864:
    if (ctx->pc == 0x473864u) {
        ctx->pc = 0x473868u;
        goto label_473868;
    }
    ctx->pc = 0x473860u;
    {
        const bool branch_taken_0x473860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473860) {
            ctx->pc = 0x473900u;
            goto label_473900;
        }
    }
    ctx->pc = 0x473868u;
label_473868:
    // 0x473868: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x473868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47386c:
    // 0x47386c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47386cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_473870:
    // 0x473870: 0x27a603a0  addiu       $a2, $sp, 0x3A0
    ctx->pc = 0x473870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_473874:
    // 0x473874: 0xc115ee8  jal         func_457BA0
label_473878:
    if (ctx->pc == 0x473878u) {
        ctx->pc = 0x47387Cu;
        goto label_47387c;
    }
    ctx->pc = 0x473874u;
    SET_GPR_U32(ctx, 31, 0x47387Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x473874u, 0x47387Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47387Cu;
label_47387c:
    // 0x47387c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_473880:
    if (ctx->pc == 0x473880u) {
        ctx->pc = 0x473884u;
        goto label_473884;
    }
    ctx->pc = 0x47387Cu;
    {
        const bool branch_taken_0x47387c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47387c) {
            ctx->pc = 0x473900u;
            goto label_473900;
        }
    }
    ctx->pc = 0x473884u;
label_473884:
    // 0x473884: 0x8fa203a8  lw          $v0, 0x3A8($sp)
    ctx->pc = 0x473884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
label_473888:
    // 0x473888: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_47388c:
    if (ctx->pc == 0x47388Cu) {
        ctx->pc = 0x473890u;
        goto label_473890;
    }
    ctx->pc = 0x473888u;
    {
        const bool branch_taken_0x473888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473888) {
            ctx->pc = 0x473900u;
            goto label_473900;
        }
    }
    ctx->pc = 0x473890u;
label_473890:
    // 0x473890: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x473890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_473894:
    // 0x473894: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x473894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_473898:
    // 0x473898: 0x8fa603a4  lw          $a2, 0x3A4($sp)
    ctx->pc = 0x473898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 932)));
label_47389c:
    // 0x47389c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47389cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4738a0:
    // 0x4738a0: 0x24e702c8  addiu       $a3, $a3, 0x2C8
    ctx->pc = 0x4738a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 712));
label_4738a4:
    // 0x4738a4: 0x240800ee  addiu       $t0, $zero, 0xEE
    ctx->pc = 0x4738a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
label_4738a8:
    // 0x4738a8: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4738a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4738ac:
    // 0x4738ac: 0x252907e0  addiu       $t1, $t1, 0x7E0
    ctx->pc = 0x4738acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2016));
label_4738b0:
    // 0x4738b0: 0xc113940  jal         func_44E500
label_4738b4:
    if (ctx->pc == 0x4738B4u) {
        ctx->pc = 0x4738B8u;
        goto label_4738b8;
    }
    ctx->pc = 0x4738B0u;
    SET_GPR_U32(ctx, 31, 0x4738B8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4738B0u, 0x4738B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4738B8u;
label_4738b8:
    // 0x4738b8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4738b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4738bc:
    // 0x4738bc: 0x2785b3f0  addiu       $a1, $gp, -0x4C10
    ctx->pc = 0x4738bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947824));
label_4738c0:
    // 0x4738c0: 0xc115c24  jal         func_457090
label_4738c4:
    if (ctx->pc == 0x4738C4u) {
        ctx->pc = 0x4738C8u;
        goto label_4738c8;
    }
    ctx->pc = 0x4738C0u;
    SET_GPR_U32(ctx, 31, 0x4738C8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4738C0u, 0x4738C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4738C8u;
label_4738c8:
    // 0x4738c8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4738c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4738cc:
    // 0x4738cc: 0x8fa203a8  lw          $v0, 0x3A8($sp)
    ctx->pc = 0x4738ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
label_4738d0:
    // 0x4738d0: 0x40f809  jalr        $v0
label_4738d4:
    if (ctx->pc == 0x4738D4u) {
        ctx->pc = 0x4738D8u;
        goto label_4738d8;
    }
    ctx->pc = 0x4738D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4738D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4738D0u, 0x4738D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4738D8u;
label_4738d8:
    // 0x4738d8: 0xaf82b3ec  sw          $v0, -0x4C14($gp)
    ctx->pc = 0x4738d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947820), GPR_U32(ctx, 2));
label_4738dc:
    // 0x4738dc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4738dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4738e0:
    // 0x4738e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4738e4:
    if (ctx->pc == 0x4738E4u) {
        ctx->pc = 0x4738E8u;
        goto label_4738e8;
    }
    ctx->pc = 0x4738E0u;
    {
        const bool branch_taken_0x4738e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4738e0) {
            ctx->pc = 0x4738F0u;
            goto label_4738f0;
        }
    }
    ctx->pc = 0x4738E8u;
label_4738e8:
    // 0x4738e8: 0xd  break       0
    ctx->pc = 0x4738e8u;
    runtime->handleBreak(rdram, ctx);
label_4738ec:
    // 0x4738ec: 0x0  nop
    ctx->pc = 0x4738ecu;
    // NOP
label_4738f0:
    // 0x4738f0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4738f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4738f4:
    // 0x4738f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4738f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4738f8:
    // 0x4738f8: 0xc11392c  jal         func_44E4B0
label_4738fc:
    if (ctx->pc == 0x4738FCu) {
        ctx->pc = 0x473900u;
        goto label_473900;
    }
    ctx->pc = 0x4738F8u;
    SET_GPR_U32(ctx, 31, 0x473900u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4738F8u, 0x473900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473900u;
label_473900:
    // 0x473900: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x473900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_473904:
    // 0x473904: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x473904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_473908:
    // 0x473908: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x473908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_47390c:
    // 0x47390c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47390cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_473910:
    // 0x473910: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x473910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_473914:
    // 0x473914: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x473914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_473918:
    // 0x473918: 0x27bd0420  addiu       $sp, $sp, 0x420
    ctx->pc = 0x473918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_47391c:
    // 0x47391c: 0x3e00008  jr          $ra
label_473920:
    if (ctx->pc == 0x473920u) {
        ctx->pc = 0x473924u;
        goto label_473924;
    }
    ctx->pc = 0x47391Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47391Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473924u;
label_473924:
    // 0x473924: 0x0  nop
    ctx->pc = 0x473924u;
    // NOP
label_473928:
    // 0x473928: 0x0  nop
    ctx->pc = 0x473928u;
    // NOP
label_47392c:
    // 0x47392c: 0x0  nop
    ctx->pc = 0x47392cu;
    // NOP
label_473930:
    // 0x473930: 0x27bdfbd0  addiu       $sp, $sp, -0x430
    ctx->pc = 0x473930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966224));
label_473934:
    // 0x473934: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x473934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_473938:
    // 0x473938: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x473938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47393c:
    // 0x47393c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47393cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_473940:
    // 0x473940: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x473940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_473944:
    // 0x473944: 0xafa403f0  sw          $a0, 0x3F0($sp)
    ctx->pc = 0x473944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1008), GPR_U32(ctx, 4));
label_473948:
    // 0x473948: 0xe7ac0400  swc1        $f12, 0x400($sp)
    ctx->pc = 0x473948u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1024), bits); }
label_47394c:
    // 0x47394c: 0xe7ad0410  swc1        $f13, 0x410($sp)
    ctx->pc = 0x47394cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1040), bits); }
label_473950:
    // 0x473950: 0xafa50420  sw          $a1, 0x420($sp)
    ctx->pc = 0x473950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 5));
label_473954:
    // 0x473954: 0xc11c1fc  jal         func_4707F0
label_473958:
    if (ctx->pc == 0x473958u) {
        ctx->pc = 0x47395Cu;
        goto label_47395c;
    }
    ctx->pc = 0x473954u;
    SET_GPR_U32(ctx, 31, 0x47395Cu);
    ctx->pc = 0x4707F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4707F0u, 0x473954u, 0x47395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47395Cu;
label_47395c:
    // 0x47395c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_473960:
    if (ctx->pc == 0x473960u) {
        ctx->pc = 0x473964u;
        goto label_473964;
    }
    ctx->pc = 0x47395Cu;
    {
        const bool branch_taken_0x47395c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47395c) {
            ctx->pc = 0x473A0Cu;
            goto label_473a0c;
        }
    }
    ctx->pc = 0x473964u;
label_473964:
    // 0x473964: 0x8f82b3f4  lw          $v0, -0x4C0C($gp)
    ctx->pc = 0x473964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947828)));
label_473968:
    // 0x473968: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_47396c:
    if (ctx->pc == 0x47396Cu) {
        ctx->pc = 0x473970u;
        goto label_473970;
    }
    ctx->pc = 0x473968u;
    {
        const bool branch_taken_0x473968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473968) {
            ctx->pc = 0x473A0Cu;
            goto label_473a0c;
        }
    }
    ctx->pc = 0x473970u;
label_473970:
    // 0x473970: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x473970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_473974:
    // 0x473974: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x473974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_473978:
    // 0x473978: 0x27a603d0  addiu       $a2, $sp, 0x3D0
    ctx->pc = 0x473978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_47397c:
    // 0x47397c: 0xc115ee8  jal         func_457BA0
label_473980:
    if (ctx->pc == 0x473980u) {
        ctx->pc = 0x473984u;
        goto label_473984;
    }
    ctx->pc = 0x47397Cu;
    SET_GPR_U32(ctx, 31, 0x473984u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47397Cu, 0x473984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473984u;
label_473984:
    // 0x473984: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_473988:
    if (ctx->pc == 0x473988u) {
        ctx->pc = 0x47398Cu;
        goto label_47398c;
    }
    ctx->pc = 0x473984u;
    {
        const bool branch_taken_0x473984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473984) {
            ctx->pc = 0x473A0Cu;
            goto label_473a0c;
        }
    }
    ctx->pc = 0x47398Cu;
label_47398c:
    // 0x47398c: 0x8fa203d8  lw          $v0, 0x3D8($sp)
    ctx->pc = 0x47398cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 984)));
label_473990:
    // 0x473990: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_473994:
    if (ctx->pc == 0x473994u) {
        ctx->pc = 0x473998u;
        goto label_473998;
    }
    ctx->pc = 0x473990u;
    {
        const bool branch_taken_0x473990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473990) {
            ctx->pc = 0x473A0Cu;
            goto label_473a0c;
        }
    }
    ctx->pc = 0x473998u;
label_473998:
    // 0x473998: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x473998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_47399c:
    // 0x47399c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47399cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4739a0:
    // 0x4739a0: 0x8fa603d4  lw          $a2, 0x3D4($sp)
    ctx->pc = 0x4739a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 980)));
label_4739a4:
    // 0x4739a4: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4739a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4739a8:
    // 0x4739a8: 0x24e702c8  addiu       $a3, $a3, 0x2C8
    ctx->pc = 0x4739a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 712));
label_4739ac:
    // 0x4739ac: 0x240800f8  addiu       $t0, $zero, 0xF8
    ctx->pc = 0x4739acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_4739b0:
    // 0x4739b0: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4739b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4739b4:
    // 0x4739b4: 0x25290340  addiu       $t1, $t1, 0x340
    ctx->pc = 0x4739b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 832));
label_4739b8:
    // 0x4739b8: 0xc113940  jal         func_44E500
label_4739bc:
    if (ctx->pc == 0x4739BCu) {
        ctx->pc = 0x4739C0u;
        goto label_4739c0;
    }
    ctx->pc = 0x4739B8u;
    SET_GPR_U32(ctx, 31, 0x4739C0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4739B8u, 0x4739C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4739C0u;
label_4739c0:
    // 0x4739c0: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x4739c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_4739c4:
    // 0x4739c4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4739c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4739c8:
    // 0x4739c8: 0x24a50800  addiu       $a1, $a1, 0x800
    ctx->pc = 0x4739c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2048));
label_4739cc:
    // 0x4739cc: 0xc115c24  jal         func_457090
label_4739d0:
    if (ctx->pc == 0x4739D0u) {
        ctx->pc = 0x4739D4u;
        goto label_4739d4;
    }
    ctx->pc = 0x4739CCu;
    SET_GPR_U32(ctx, 31, 0x4739D4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4739CCu, 0x4739D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4739D4u;
label_4739d4:
    // 0x4739d4: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x4739d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_4739d8:
    // 0x4739d8: 0x8fa203d8  lw          $v0, 0x3D8($sp)
    ctx->pc = 0x4739d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 984)));
label_4739dc:
    // 0x4739dc: 0x40f809  jalr        $v0
label_4739e0:
    if (ctx->pc == 0x4739E0u) {
        ctx->pc = 0x4739E4u;
        goto label_4739e4;
    }
    ctx->pc = 0x4739DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4739E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4739DCu, 0x4739E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4739E4u;
label_4739e4:
    // 0x4739e4: 0xaf82b3f4  sw          $v0, -0x4C0C($gp)
    ctx->pc = 0x4739e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947828), GPR_U32(ctx, 2));
label_4739e8:
    // 0x4739e8: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x4739e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_4739ec:
    // 0x4739ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4739f0:
    if (ctx->pc == 0x4739F0u) {
        ctx->pc = 0x4739F4u;
        goto label_4739f4;
    }
    ctx->pc = 0x4739ECu;
    {
        const bool branch_taken_0x4739ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4739ec) {
            ctx->pc = 0x4739FCu;
            goto label_4739fc;
        }
    }
    ctx->pc = 0x4739F4u;
label_4739f4:
    // 0x4739f4: 0xd  break       0
    ctx->pc = 0x4739f4u;
    runtime->handleBreak(rdram, ctx);
label_4739f8:
    // 0x4739f8: 0x0  nop
    ctx->pc = 0x4739f8u;
    // NOP
label_4739fc:
    // 0x4739fc: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x4739fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_473a00:
    // 0x473a00: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x473a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_473a04:
    // 0x473a04: 0xc11392c  jal         func_44E4B0
label_473a08:
    if (ctx->pc == 0x473A08u) {
        ctx->pc = 0x473A0Cu;
        goto label_473a0c;
    }
    ctx->pc = 0x473A04u;
    SET_GPR_U32(ctx, 31, 0x473A0Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x473A04u, 0x473A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473A0Cu;
label_473a0c:
    // 0x473a0c: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x473a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_473a10:
    // 0x473a10: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x473a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_473a14:
    // 0x473a14: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x473a14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_473a18:
    // 0x473a18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x473a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_473a1c:
    // 0x473a1c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_473a20:
    if (ctx->pc == 0x473A20u) {
        ctx->pc = 0x473A24u;
        goto label_473a24;
    }
    ctx->pc = 0x473A1Cu;
    {
        const bool branch_taken_0x473a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x473a1c) {
            ctx->pc = 0x473ACCu;
            goto label_473acc;
        }
    }
    ctx->pc = 0x473A24u;
label_473a24:
    // 0x473a24: 0x8f82b3f8  lw          $v0, -0x4C08($gp)
    ctx->pc = 0x473a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947832)));
label_473a28:
    // 0x473a28: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_473a2c:
    if (ctx->pc == 0x473A2Cu) {
        ctx->pc = 0x473A30u;
        goto label_473a30;
    }
    ctx->pc = 0x473A28u;
    {
        const bool branch_taken_0x473a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473a28) {
            ctx->pc = 0x473ACCu;
            goto label_473acc;
        }
    }
    ctx->pc = 0x473A30u;
label_473a30:
    // 0x473a30: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x473a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_473a34:
    // 0x473a34: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x473a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_473a38:
    // 0x473a38: 0x27a603c0  addiu       $a2, $sp, 0x3C0
    ctx->pc = 0x473a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_473a3c:
    // 0x473a3c: 0xc115ee8  jal         func_457BA0
label_473a40:
    if (ctx->pc == 0x473A40u) {
        ctx->pc = 0x473A44u;
        goto label_473a44;
    }
    ctx->pc = 0x473A3Cu;
    SET_GPR_U32(ctx, 31, 0x473A44u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x473A3Cu, 0x473A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473A44u;
label_473a44:
    // 0x473a44: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_473a48:
    if (ctx->pc == 0x473A48u) {
        ctx->pc = 0x473A4Cu;
        goto label_473a4c;
    }
    ctx->pc = 0x473A44u;
    {
        const bool branch_taken_0x473a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473a44) {
            ctx->pc = 0x473ACCu;
            goto label_473acc;
        }
    }
    ctx->pc = 0x473A4Cu;
label_473a4c:
    // 0x473a4c: 0x8fa203c8  lw          $v0, 0x3C8($sp)
    ctx->pc = 0x473a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 968)));
label_473a50:
    // 0x473a50: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_473a54:
    if (ctx->pc == 0x473A54u) {
        ctx->pc = 0x473A58u;
        goto label_473a58;
    }
    ctx->pc = 0x473A50u;
    {
        const bool branch_taken_0x473a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473a50) {
            ctx->pc = 0x473ACCu;
            goto label_473acc;
        }
    }
    ctx->pc = 0x473A58u;
label_473a58:
    // 0x473a58: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x473a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_473a5c:
    // 0x473a5c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x473a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_473a60:
    // 0x473a60: 0x8fa603c4  lw          $a2, 0x3C4($sp)
    ctx->pc = 0x473a60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 964)));
label_473a64:
    // 0x473a64: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x473a64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_473a68:
    // 0x473a68: 0x24e702c8  addiu       $a3, $a3, 0x2C8
    ctx->pc = 0x473a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 712));
label_473a6c:
    // 0x473a6c: 0x240800f9  addiu       $t0, $zero, 0xF9
    ctx->pc = 0x473a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
label_473a70:
    // 0x473a70: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x473a70u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_473a74:
    // 0x473a74: 0x252903c0  addiu       $t1, $t1, 0x3C0
    ctx->pc = 0x473a74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 960));
label_473a78:
    // 0x473a78: 0xc113940  jal         func_44E500
label_473a7c:
    if (ctx->pc == 0x473A7Cu) {
        ctx->pc = 0x473A80u;
        goto label_473a80;
    }
    ctx->pc = 0x473A78u;
    SET_GPR_U32(ctx, 31, 0x473A80u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x473A78u, 0x473A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473A80u;
label_473a80:
    // 0x473a80: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x473a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_473a84:
    // 0x473a84: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x473a84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_473a88:
    // 0x473a88: 0x24a50860  addiu       $a1, $a1, 0x860
    ctx->pc = 0x473a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2144));
label_473a8c:
    // 0x473a8c: 0xc115c24  jal         func_457090
label_473a90:
    if (ctx->pc == 0x473A90u) {
        ctx->pc = 0x473A94u;
        goto label_473a94;
    }
    ctx->pc = 0x473A8Cu;
    SET_GPR_U32(ctx, 31, 0x473A94u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x473A8Cu, 0x473A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473A94u;
label_473a94:
    // 0x473a94: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x473a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_473a98:
    // 0x473a98: 0x8fa203c8  lw          $v0, 0x3C8($sp)
    ctx->pc = 0x473a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 968)));
label_473a9c:
    // 0x473a9c: 0x40f809  jalr        $v0
label_473aa0:
    if (ctx->pc == 0x473AA0u) {
        ctx->pc = 0x473AA4u;
        goto label_473aa4;
    }
    ctx->pc = 0x473A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x473AA4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473A9Cu, 0x473AA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x473AA4u;
label_473aa4:
    // 0x473aa4: 0xaf82b3f8  sw          $v0, -0x4C08($gp)
    ctx->pc = 0x473aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947832), GPR_U32(ctx, 2));
label_473aa8:
    // 0x473aa8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x473aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_473aac:
    // 0x473aac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_473ab0:
    if (ctx->pc == 0x473AB0u) {
        ctx->pc = 0x473AB4u;
        goto label_473ab4;
    }
    ctx->pc = 0x473AACu;
    {
        const bool branch_taken_0x473aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473aac) {
            ctx->pc = 0x473ABCu;
            goto label_473abc;
        }
    }
    ctx->pc = 0x473AB4u;
label_473ab4:
    // 0x473ab4: 0xd  break       0
    ctx->pc = 0x473ab4u;
    runtime->handleBreak(rdram, ctx);
label_473ab8:
    // 0x473ab8: 0x0  nop
    ctx->pc = 0x473ab8u;
    // NOP
label_473abc:
    // 0x473abc: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x473abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_473ac0:
    // 0x473ac0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x473ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_473ac4:
    // 0x473ac4: 0xc11392c  jal         func_44E4B0
label_473ac8:
    if (ctx->pc == 0x473AC8u) {
        ctx->pc = 0x473ACCu;
        goto label_473acc;
    }
    ctx->pc = 0x473AC4u;
    SET_GPR_U32(ctx, 31, 0x473ACCu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x473AC4u, 0x473ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473ACCu;
label_473acc:
    // 0x473acc: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x473accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_473ad0:
    // 0x473ad0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x473ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_473ad4:
    // 0x473ad4: 0xe7a003ec  swc1        $f0, 0x3EC($sp)
    ctx->pc = 0x473ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1004), bits); }
label_473ad8:
    // 0x473ad8: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x473ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_473adc:
    // 0x473adc: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x473adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_473ae0:
    // 0x473ae0: 0xe7a003e8  swc1        $f0, 0x3E8($sp)
    ctx->pc = 0x473ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1000), bits); }
label_473ae4:
    // 0x473ae4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x473ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_473ae8:
    // 0x473ae8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x473ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_473aec:
    // 0x473aec: 0x248407f0  addiu       $a0, $a0, 0x7F0
    ctx->pc = 0x473aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2032));
label_473af0:
    // 0x473af0: 0x27a303b0  addiu       $v1, $sp, 0x3B0
    ctx->pc = 0x473af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_473af4:
    // 0x473af4: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x473af4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_473af8:
    // 0x473af8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x473af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_473afc:
    // 0x473afc: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x473afcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_473b00:
    // 0x473b00: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x473b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_473b04:
    // 0x473b04: 0xc7a00400  lwc1        $f0, 0x400($sp)
    ctx->pc = 0x473b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_473b08:
    // 0x473b08: 0xe7a003b0  swc1        $f0, 0x3B0($sp)
    ctx->pc = 0x473b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 944), bits); }
label_473b0c:
    // 0x473b0c: 0xc7a00410  lwc1        $f0, 0x410($sp)
    ctx->pc = 0x473b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_473b10:
    // 0x473b10: 0xe7a003b4  swc1        $f0, 0x3B4($sp)
    ctx->pc = 0x473b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 948), bits); }
label_473b14:
    // 0x473b14: 0xe7a003dc  swc1        $f0, 0x3DC($sp)
    ctx->pc = 0x473b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 988), bits); }
label_473b18:
    // 0x473b18: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x473b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_473b1c:
    // 0x473b1c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x473b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_473b20:
    // 0x473b20: 0xc0ed194  jal         func_3B4650
label_473b24:
    if (ctx->pc == 0x473B24u) {
        ctx->pc = 0x473B28u;
        goto label_473b28;
    }
    ctx->pc = 0x473B20u;
    SET_GPR_U32(ctx, 31, 0x473B28u);
    ctx->pc = 0x3B4650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4650u, 0x473B20u, 0x473B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473B28u;
label_473b28:
    // 0x473b28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x473b28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_473b2c:
    // 0x473b2c: 0x8fa20420  lw          $v0, 0x420($sp)
    ctx->pc = 0x473b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
label_473b30:
    // 0x473b30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_473b34:
    if (ctx->pc == 0x473B34u) {
        ctx->pc = 0x473B38u;
        goto label_473b38;
    }
    ctx->pc = 0x473B30u;
    {
        const bool branch_taken_0x473b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473b30) {
            ctx->pc = 0x473B44u;
            goto label_473b44;
        }
    }
    ctx->pc = 0x473B38u;
label_473b38:
    // 0x473b38: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x473b38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_473b3c:
    // 0x473b3c: 0x10000002  b           . + 4 + (0x2 << 2)
label_473b40:
    if (ctx->pc == 0x473B40u) {
        ctx->pc = 0x473B44u;
        goto label_473b44;
    }
    ctx->pc = 0x473B3Cu;
    {
        const bool branch_taken_0x473b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x473b3c) {
            ctx->pc = 0x473B48u;
            goto label_473b48;
        }
    }
    ctx->pc = 0x473B44u;
label_473b44:
    // 0x473b44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x473b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_473b48:
    // 0x473b48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x473b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_473b4c:
    // 0x473b4c: 0x27a503b0  addiu       $a1, $sp, 0x3B0
    ctx->pc = 0x473b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_473b50:
    // 0x473b50: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x473b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_473b54:
    // 0x473b54: 0xc103c86  jal         func_40F218
label_473b58:
    if (ctx->pc == 0x473B58u) {
        ctx->pc = 0x473B5Cu;
        goto label_473b5c;
    }
    ctx->pc = 0x473B54u;
    SET_GPR_U32(ctx, 31, 0x473B5Cu);
    ctx->pc = 0x40F218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F218u, 0x473B54u, 0x473B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473B5Cu;
label_473b5c:
    // 0x473b5c: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x473b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_473b60:
    // 0x473b60: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x473b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_473b64:
    // 0x473b64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x473b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_473b68:
    // 0x473b68: 0xc0ed196  jal         func_3B4658
label_473b6c:
    if (ctx->pc == 0x473B6Cu) {
        ctx->pc = 0x473B70u;
        goto label_473b70;
    }
    ctx->pc = 0x473B68u;
    SET_GPR_U32(ctx, 31, 0x473B70u);
    ctx->pc = 0x3B4658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4658u, 0x473B68u, 0x473B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473B70u;
label_473b70:
    // 0x473b70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x473b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_473b74:
    // 0x473b74: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x473b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_473b78:
    // 0x473b78: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x473b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_473b7c:
    // 0x473b7c: 0xc0ed18e  jal         func_3B4638
label_473b80:
    if (ctx->pc == 0x473B80u) {
        ctx->pc = 0x473B84u;
        goto label_473b84;
    }
    ctx->pc = 0x473B7Cu;
    SET_GPR_U32(ctx, 31, 0x473B84u);
    ctx->pc = 0x3B4638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4638u, 0x473B7Cu, 0x473B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473B84u;
label_473b84:
    // 0x473b84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x473b84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_473b88:
    // 0x473b88: 0x0  nop
    ctx->pc = 0x473b88u;
    // NOP
label_473b8c:
    // 0x473b8c: 0xe7a003e4  swc1        $f0, 0x3E4($sp)
    ctx->pc = 0x473b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 996), bits); }
label_473b90:
    // 0x473b90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x473b90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_473b94:
    // 0x473b94: 0x0  nop
    ctx->pc = 0x473b94u;
    // NOP
label_473b98:
    // 0x473b98: 0xe7a003e0  swc1        $f0, 0x3E0($sp)
    ctx->pc = 0x473b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 992), bits); }
label_473b9c:
    // 0x473b9c: 0x8fa403f0  lw          $a0, 0x3F0($sp)
    ctx->pc = 0x473b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_473ba0:
    // 0x473ba0: 0x27a503e4  addiu       $a1, $sp, 0x3E4
    ctx->pc = 0x473ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 996));
label_473ba4:
    // 0x473ba4: 0x27a603e0  addiu       $a2, $sp, 0x3E0
    ctx->pc = 0x473ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_473ba8:
    // 0x473ba8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x473ba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_473bac:
    // 0x473bac: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x473bacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_473bb0:
    // 0x473bb0: 0x320f809  jalr        $t9
label_473bb4:
    if (ctx->pc == 0x473BB4u) {
        ctx->pc = 0x473BB8u;
        goto label_473bb8;
    }
    ctx->pc = 0x473BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x473BB8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473BB0u, 0x473BB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x473BB8u;
label_473bb8:
    // 0x473bb8: 0x8fa20420  lw          $v0, 0x420($sp)
    ctx->pc = 0x473bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
label_473bbc:
    // 0x473bbc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_473bc0:
    if (ctx->pc == 0x473BC0u) {
        ctx->pc = 0x473BC4u;
        goto label_473bc4;
    }
    ctx->pc = 0x473BBCu;
    {
        const bool branch_taken_0x473bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473bbc) {
            ctx->pc = 0x473C2Cu;
            goto label_473c2c;
        }
    }
    ctx->pc = 0x473BC4u;
label_473bc4:
    // 0x473bc4: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x473bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_473bc8:
    // 0x473bc8: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x473bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_473bcc:
    // 0x473bcc: 0xc7a00400  lwc1        $f0, 0x400($sp)
    ctx->pc = 0x473bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_473bd0:
    // 0x473bd0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x473bd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_473bd4:
    // 0x473bd4: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x473bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_473bd8:
    // 0x473bd8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x473bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_473bdc:
    // 0x473bdc: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x473bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_473be0:
    // 0x473be0: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x473be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_473be4:
    // 0x473be4: 0xc7a00410  lwc1        $f0, 0x410($sp)
    ctx->pc = 0x473be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_473be8:
    // 0x473be8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x473be8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_473bec:
    // 0x473bec: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x473becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_473bf0:
    // 0x473bf0: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x473bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_473bf4:
    // 0x473bf4: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x473bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_473bf8:
    // 0x473bf8: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x473bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_473bfc:
    // 0x473bfc: 0xc7a00400  lwc1        $f0, 0x400($sp)
    ctx->pc = 0x473bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_473c00:
    // 0x473c00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x473c00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_473c04:
    // 0x473c04: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x473c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_473c08:
    // 0x473c08: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x473c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_473c0c:
    // 0x473c0c: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x473c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_473c10:
    // 0x473c10: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x473c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_473c14:
    // 0x473c14: 0xc7a00410  lwc1        $f0, 0x410($sp)
    ctx->pc = 0x473c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_473c18:
    // 0x473c18: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x473c18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_473c1c:
    // 0x473c1c: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x473c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_473c20:
    // 0x473c20: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x473c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_473c24:
    // 0x473c24: 0x10000017  b           . + 4 + (0x17 << 2)
label_473c28:
    if (ctx->pc == 0x473C28u) {
        ctx->pc = 0x473C2Cu;
        goto label_473c2c;
    }
    ctx->pc = 0x473C24u;
    {
        const bool branch_taken_0x473c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x473c24) {
            ctx->pc = 0x473C84u;
            goto label_473c84;
        }
    }
    ctx->pc = 0x473C2Cu;
label_473c2c:
    // 0x473c2c: 0xc7a103e4  lwc1        $f1, 0x3E4($sp)
    ctx->pc = 0x473c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_473c30:
    // 0x473c30: 0xc7a00400  lwc1        $f0, 0x400($sp)
    ctx->pc = 0x473c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_473c34:
    // 0x473c34: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x473c34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_473c38:
    // 0x473c38: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x473c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_473c3c:
    // 0x473c3c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x473c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_473c40:
    // 0x473c40: 0xc7a103e0  lwc1        $f1, 0x3E0($sp)
    ctx->pc = 0x473c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_473c44:
    // 0x473c44: 0xc7a00410  lwc1        $f0, 0x410($sp)
    ctx->pc = 0x473c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_473c48:
    // 0x473c48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x473c48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_473c4c:
    // 0x473c4c: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x473c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_473c50:
    // 0x473c50: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x473c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_473c54:
    // 0x473c54: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x473c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_473c58:
    // 0x473c58: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x473c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_473c5c:
    // 0x473c5c: 0xc7a00400  lwc1        $f0, 0x400($sp)
    ctx->pc = 0x473c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_473c60:
    // 0x473c60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x473c60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_473c64:
    // 0x473c64: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x473c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_473c68:
    // 0x473c68: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x473c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_473c6c:
    // 0x473c6c: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x473c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_473c70:
    // 0x473c70: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x473c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_473c74:
    // 0x473c74: 0xc7a00410  lwc1        $f0, 0x410($sp)
    ctx->pc = 0x473c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_473c78:
    // 0x473c78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x473c78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_473c7c:
    // 0x473c7c: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x473c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_473c80:
    // 0x473c80: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x473c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_473c84:
    // 0x473c84: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x473c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_473c88:
    // 0x473c88: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x473c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_473c8c:
    // 0x473c8c: 0xc7a003ec  lwc1        $f0, 0x3EC($sp)
    ctx->pc = 0x473c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_473c90:
    // 0x473c90: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x473c90u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_473c94:
    // 0x473c94: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x473c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_473c98:
    // 0x473c98: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x473c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_473c9c:
    // 0x473c9c: 0xc7a003e8  lwc1        $f0, 0x3E8($sp)
    ctx->pc = 0x473c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_473ca0:
    // 0x473ca0: 0x46010341  sub.s       $f13, $f0, $f1
    ctx->pc = 0x473ca0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_473ca4:
    // 0x473ca4: 0x8fa403f0  lw          $a0, 0x3F0($sp)
    ctx->pc = 0x473ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_473ca8:
    // 0x473ca8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x473ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_473cac:
    // 0x473cac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x473cacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_473cb0:
    // 0x473cb0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x473cb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_473cb4:
    // 0x473cb4: 0x320f809  jalr        $t9
label_473cb8:
    if (ctx->pc == 0x473CB8u) {
        ctx->pc = 0x473CBCu;
        goto label_473cbc;
    }
    ctx->pc = 0x473CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x473CBCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473CB4u, 0x473CBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x473CBCu;
label_473cbc:
    // 0x473cbc: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x473cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_473cc0:
    // 0x473cc0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x473cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_473cc4:
    // 0x473cc4: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_473cc8:
    if (ctx->pc == 0x473CC8u) {
        ctx->pc = 0x473CCCu;
        goto label_473ccc;
    }
    ctx->pc = 0x473CC4u;
    {
        const bool branch_taken_0x473cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x473cc4) {
            ctx->pc = 0x473D70u;
            goto label_473d70;
        }
    }
    ctx->pc = 0x473CCCu;
label_473ccc:
    // 0x473ccc: 0x8f82b3fc  lw          $v0, -0x4C04($gp)
    ctx->pc = 0x473cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947836)));
label_473cd0:
    // 0x473cd0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_473cd4:
    if (ctx->pc == 0x473CD4u) {
        ctx->pc = 0x473CD8u;
        goto label_473cd8;
    }
    ctx->pc = 0x473CD0u;
    {
        const bool branch_taken_0x473cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473cd0) {
            ctx->pc = 0x473D70u;
            goto label_473d70;
        }
    }
    ctx->pc = 0x473CD8u;
label_473cd8:
    // 0x473cd8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x473cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_473cdc:
    // 0x473cdc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x473cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_473ce0:
    // 0x473ce0: 0x27a603a0  addiu       $a2, $sp, 0x3A0
    ctx->pc = 0x473ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_473ce4:
    // 0x473ce4: 0xc115ee8  jal         func_457BA0
label_473ce8:
    if (ctx->pc == 0x473CE8u) {
        ctx->pc = 0x473CECu;
        goto label_473cec;
    }
    ctx->pc = 0x473CE4u;
    SET_GPR_U32(ctx, 31, 0x473CECu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x473CE4u, 0x473CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473CECu;
label_473cec:
    // 0x473cec: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_473cf0:
    if (ctx->pc == 0x473CF0u) {
        ctx->pc = 0x473CF4u;
        goto label_473cf4;
    }
    ctx->pc = 0x473CECu;
    {
        const bool branch_taken_0x473cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473cec) {
            ctx->pc = 0x473D70u;
            goto label_473d70;
        }
    }
    ctx->pc = 0x473CF4u;
label_473cf4:
    // 0x473cf4: 0x8fa203a8  lw          $v0, 0x3A8($sp)
    ctx->pc = 0x473cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
label_473cf8:
    // 0x473cf8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_473cfc:
    if (ctx->pc == 0x473CFCu) {
        ctx->pc = 0x473D00u;
        goto label_473d00;
    }
    ctx->pc = 0x473CF8u;
    {
        const bool branch_taken_0x473cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473cf8) {
            ctx->pc = 0x473D70u;
            goto label_473d70;
        }
    }
    ctx->pc = 0x473D00u;
label_473d00:
    // 0x473d00: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x473d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_473d04:
    // 0x473d04: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x473d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_473d08:
    // 0x473d08: 0x8fa603a4  lw          $a2, 0x3A4($sp)
    ctx->pc = 0x473d08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 932)));
label_473d0c:
    // 0x473d0c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x473d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_473d10:
    // 0x473d10: 0x24e702c8  addiu       $a3, $a3, 0x2C8
    ctx->pc = 0x473d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 712));
label_473d14:
    // 0x473d14: 0x2408011f  addiu       $t0, $zero, 0x11F
    ctx->pc = 0x473d14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
label_473d18:
    // 0x473d18: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x473d18u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_473d1c:
    // 0x473d1c: 0x252907e0  addiu       $t1, $t1, 0x7E0
    ctx->pc = 0x473d1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2016));
label_473d20:
    // 0x473d20: 0xc113940  jal         func_44E500
label_473d24:
    if (ctx->pc == 0x473D24u) {
        ctx->pc = 0x473D28u;
        goto label_473d28;
    }
    ctx->pc = 0x473D20u;
    SET_GPR_U32(ctx, 31, 0x473D28u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x473D20u, 0x473D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473D28u;
label_473d28:
    // 0x473d28: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x473d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_473d2c:
    // 0x473d2c: 0x2785b3f0  addiu       $a1, $gp, -0x4C10
    ctx->pc = 0x473d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947824));
label_473d30:
    // 0x473d30: 0xc115c24  jal         func_457090
label_473d34:
    if (ctx->pc == 0x473D34u) {
        ctx->pc = 0x473D38u;
        goto label_473d38;
    }
    ctx->pc = 0x473D30u;
    SET_GPR_U32(ctx, 31, 0x473D38u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x473D30u, 0x473D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473D38u;
label_473d38:
    // 0x473d38: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x473d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_473d3c:
    // 0x473d3c: 0x8fa203a8  lw          $v0, 0x3A8($sp)
    ctx->pc = 0x473d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
label_473d40:
    // 0x473d40: 0x40f809  jalr        $v0
label_473d44:
    if (ctx->pc == 0x473D44u) {
        ctx->pc = 0x473D48u;
        goto label_473d48;
    }
    ctx->pc = 0x473D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x473D48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473D40u, 0x473D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x473D48u;
label_473d48:
    // 0x473d48: 0xaf82b3fc  sw          $v0, -0x4C04($gp)
    ctx->pc = 0x473d48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947836), GPR_U32(ctx, 2));
label_473d4c:
    // 0x473d4c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x473d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_473d50:
    // 0x473d50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_473d54:
    if (ctx->pc == 0x473D54u) {
        ctx->pc = 0x473D58u;
        goto label_473d58;
    }
    ctx->pc = 0x473D50u;
    {
        const bool branch_taken_0x473d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473d50) {
            ctx->pc = 0x473D60u;
            goto label_473d60;
        }
    }
    ctx->pc = 0x473D58u;
label_473d58:
    // 0x473d58: 0xd  break       0
    ctx->pc = 0x473d58u;
    runtime->handleBreak(rdram, ctx);
label_473d5c:
    // 0x473d5c: 0x0  nop
    ctx->pc = 0x473d5cu;
    // NOP
label_473d60:
    // 0x473d60: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x473d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_473d64:
    // 0x473d64: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x473d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_473d68:
    // 0x473d68: 0xc11392c  jal         func_44E4B0
label_473d6c:
    if (ctx->pc == 0x473D6Cu) {
        ctx->pc = 0x473D70u;
        goto label_473d70;
    }
    ctx->pc = 0x473D68u;
    SET_GPR_U32(ctx, 31, 0x473D70u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x473D68u, 0x473D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473D70u;
label_473d70:
    // 0x473d70: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x473d70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_473d74:
    // 0x473d74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x473d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_473d78:
    // 0x473d78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x473d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_473d7c:
    // 0x473d7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x473d7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_473d80:
    // 0x473d80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x473d80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_473d84:
    // 0x473d84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x473d84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_473d88:
    // 0x473d88: 0x27bd0430  addiu       $sp, $sp, 0x430
    ctx->pc = 0x473d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_473d8c:
    // 0x473d8c: 0x3e00008  jr          $ra
label_473d90:
    if (ctx->pc == 0x473D90u) {
        ctx->pc = 0x473D94u;
        goto label_473d94;
    }
    ctx->pc = 0x473D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473D94u;
label_473d94:
    // 0x473d94: 0x0  nop
    ctx->pc = 0x473d94u;
    // NOP
label_473d98:
    // 0x473d98: 0x0  nop
    ctx->pc = 0x473d98u;
    // NOP
label_473d9c:
    // 0x473d9c: 0x0  nop
    ctx->pc = 0x473d9cu;
    // NOP
label_473da0:
    // 0x473da0: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x473da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_473da4:
    // 0x473da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x473da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_473da8:
    // 0x473da8: 0xafa40270  sw          $a0, 0x270($sp)
    ctx->pc = 0x473da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 4));
label_473dac:
    // 0x473dac: 0xc11c1fc  jal         func_4707F0
label_473db0:
    if (ctx->pc == 0x473DB0u) {
        ctx->pc = 0x473DB4u;
        goto label_473db4;
    }
    ctx->pc = 0x473DACu;
    SET_GPR_U32(ctx, 31, 0x473DB4u);
    ctx->pc = 0x4707F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4707F0u, 0x473DACu, 0x473DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473DB4u;
label_473db4:
    // 0x473db4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_473db8:
    if (ctx->pc == 0x473DB8u) {
        ctx->pc = 0x473DBCu;
        goto label_473dbc;
    }
    ctx->pc = 0x473DB4u;
    {
        const bool branch_taken_0x473db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x473db4) {
            ctx->pc = 0x473E64u;
            goto label_473e64;
        }
    }
    ctx->pc = 0x473DBCu;
label_473dbc:
    // 0x473dbc: 0x8f82b400  lw          $v0, -0x4C00($gp)
    ctx->pc = 0x473dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947840)));
label_473dc0:
    // 0x473dc0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_473dc4:
    if (ctx->pc == 0x473DC4u) {
        ctx->pc = 0x473DC8u;
        goto label_473dc8;
    }
    ctx->pc = 0x473DC0u;
    {
        const bool branch_taken_0x473dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473dc0) {
            ctx->pc = 0x473E64u;
            goto label_473e64;
        }
    }
    ctx->pc = 0x473DC8u;
label_473dc8:
    // 0x473dc8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x473dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_473dcc:
    // 0x473dcc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x473dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_473dd0:
    // 0x473dd0: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x473dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_473dd4:
    // 0x473dd4: 0xc115ee8  jal         func_457BA0
label_473dd8:
    if (ctx->pc == 0x473DD8u) {
        ctx->pc = 0x473DDCu;
        goto label_473ddc;
    }
    ctx->pc = 0x473DD4u;
    SET_GPR_U32(ctx, 31, 0x473DDCu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x473DD4u, 0x473DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473DDCu;
label_473ddc:
    // 0x473ddc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_473de0:
    if (ctx->pc == 0x473DE0u) {
        ctx->pc = 0x473DE4u;
        goto label_473de4;
    }
    ctx->pc = 0x473DDCu;
    {
        const bool branch_taken_0x473ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473ddc) {
            ctx->pc = 0x473E64u;
            goto label_473e64;
        }
    }
    ctx->pc = 0x473DE4u;
label_473de4:
    // 0x473de4: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x473de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_473de8:
    // 0x473de8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_473dec:
    if (ctx->pc == 0x473DECu) {
        ctx->pc = 0x473DF0u;
        goto label_473df0;
    }
    ctx->pc = 0x473DE8u;
    {
        const bool branch_taken_0x473de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473de8) {
            ctx->pc = 0x473E64u;
            goto label_473e64;
        }
    }
    ctx->pc = 0x473DF0u;
label_473df0:
    // 0x473df0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x473df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_473df4:
    // 0x473df4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x473df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_473df8:
    // 0x473df8: 0x8fa60264  lw          $a2, 0x264($sp)
    ctx->pc = 0x473df8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_473dfc:
    // 0x473dfc: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x473dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_473e00:
    // 0x473e00: 0x24e702c8  addiu       $a3, $a3, 0x2C8
    ctx->pc = 0x473e00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 712));
label_473e04:
    // 0x473e04: 0x24080128  addiu       $t0, $zero, 0x128
    ctx->pc = 0x473e04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
label_473e08:
    // 0x473e08: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x473e08u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_473e0c:
    // 0x473e0c: 0x25290340  addiu       $t1, $t1, 0x340
    ctx->pc = 0x473e0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 832));
label_473e10:
    // 0x473e10: 0xc113940  jal         func_44E500
label_473e14:
    if (ctx->pc == 0x473E14u) {
        ctx->pc = 0x473E18u;
        goto label_473e18;
    }
    ctx->pc = 0x473E10u;
    SET_GPR_U32(ctx, 31, 0x473E18u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x473E10u, 0x473E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473E18u;
label_473e18:
    // 0x473e18: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x473e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_473e1c:
    // 0x473e1c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x473e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_473e20:
    // 0x473e20: 0x24a508b0  addiu       $a1, $a1, 0x8B0
    ctx->pc = 0x473e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2224));
label_473e24:
    // 0x473e24: 0xc115c24  jal         func_457090
label_473e28:
    if (ctx->pc == 0x473E28u) {
        ctx->pc = 0x473E2Cu;
        goto label_473e2c;
    }
    ctx->pc = 0x473E24u;
    SET_GPR_U32(ctx, 31, 0x473E2Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x473E24u, 0x473E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473E2Cu;
label_473e2c:
    // 0x473e2c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x473e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_473e30:
    // 0x473e30: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x473e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_473e34:
    // 0x473e34: 0x40f809  jalr        $v0
label_473e38:
    if (ctx->pc == 0x473E38u) {
        ctx->pc = 0x473E3Cu;
        goto label_473e3c;
    }
    ctx->pc = 0x473E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x473E3Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473E34u, 0x473E3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x473E3Cu;
label_473e3c:
    // 0x473e3c: 0xaf82b400  sw          $v0, -0x4C00($gp)
    ctx->pc = 0x473e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947840), GPR_U32(ctx, 2));
label_473e40:
    // 0x473e40: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x473e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_473e44:
    // 0x473e44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_473e48:
    if (ctx->pc == 0x473E48u) {
        ctx->pc = 0x473E4Cu;
        goto label_473e4c;
    }
    ctx->pc = 0x473E44u;
    {
        const bool branch_taken_0x473e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473e44) {
            ctx->pc = 0x473E54u;
            goto label_473e54;
        }
    }
    ctx->pc = 0x473E4Cu;
label_473e4c:
    // 0x473e4c: 0xd  break       0
    ctx->pc = 0x473e4cu;
    runtime->handleBreak(rdram, ctx);
label_473e50:
    // 0x473e50: 0x0  nop
    ctx->pc = 0x473e50u;
    // NOP
label_473e54:
    // 0x473e54: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x473e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_473e58:
    // 0x473e58: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x473e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_473e5c:
    // 0x473e5c: 0xc11392c  jal         func_44E4B0
label_473e60:
    if (ctx->pc == 0x473E60u) {
        ctx->pc = 0x473E64u;
        goto label_473e64;
    }
    ctx->pc = 0x473E5Cu;
    SET_GPR_U32(ctx, 31, 0x473E64u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x473E5Cu, 0x473E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473E64u;
label_473e64:
    // 0x473e64: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x473e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_473e68:
    // 0x473e68: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x473e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_473e6c:
    // 0x473e6c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x473e6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_473e70:
    // 0x473e70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x473e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_473e74:
    // 0x473e74: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_473e78:
    if (ctx->pc == 0x473E78u) {
        ctx->pc = 0x473E7Cu;
        goto label_473e7c;
    }
    ctx->pc = 0x473E74u;
    {
        const bool branch_taken_0x473e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x473e74) {
            ctx->pc = 0x473F24u;
            goto label_473f24;
        }
    }
    ctx->pc = 0x473E7Cu;
label_473e7c:
    // 0x473e7c: 0x8f82b404  lw          $v0, -0x4BFC($gp)
    ctx->pc = 0x473e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947844)));
label_473e80:
    // 0x473e80: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_473e84:
    if (ctx->pc == 0x473E84u) {
        ctx->pc = 0x473E88u;
        goto label_473e88;
    }
    ctx->pc = 0x473E80u;
    {
        const bool branch_taken_0x473e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473e80) {
            ctx->pc = 0x473F24u;
            goto label_473f24;
        }
    }
    ctx->pc = 0x473E88u;
label_473e88:
    // 0x473e88: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x473e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_473e8c:
    // 0x473e8c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x473e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_473e90:
    // 0x473e90: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x473e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_473e94:
    // 0x473e94: 0xc115ee8  jal         func_457BA0
label_473e98:
    if (ctx->pc == 0x473E98u) {
        ctx->pc = 0x473E9Cu;
        goto label_473e9c;
    }
    ctx->pc = 0x473E94u;
    SET_GPR_U32(ctx, 31, 0x473E9Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x473E94u, 0x473E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473E9Cu;
label_473e9c:
    // 0x473e9c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_473ea0:
    if (ctx->pc == 0x473EA0u) {
        ctx->pc = 0x473EA4u;
        goto label_473ea4;
    }
    ctx->pc = 0x473E9Cu;
    {
        const bool branch_taken_0x473e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473e9c) {
            ctx->pc = 0x473F24u;
            goto label_473f24;
        }
    }
    ctx->pc = 0x473EA4u;
label_473ea4:
    // 0x473ea4: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x473ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_473ea8:
    // 0x473ea8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_473eac:
    if (ctx->pc == 0x473EACu) {
        ctx->pc = 0x473EB0u;
        goto label_473eb0;
    }
    ctx->pc = 0x473EA8u;
    {
        const bool branch_taken_0x473ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473ea8) {
            ctx->pc = 0x473F24u;
            goto label_473f24;
        }
    }
    ctx->pc = 0x473EB0u;
label_473eb0:
    // 0x473eb0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x473eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_473eb4:
    // 0x473eb4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x473eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_473eb8:
    // 0x473eb8: 0x8fa60254  lw          $a2, 0x254($sp)
    ctx->pc = 0x473eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_473ebc:
    // 0x473ebc: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x473ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_473ec0:
    // 0x473ec0: 0x24e702c8  addiu       $a3, $a3, 0x2C8
    ctx->pc = 0x473ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 712));
label_473ec4:
    // 0x473ec4: 0x24080129  addiu       $t0, $zero, 0x129
    ctx->pc = 0x473ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 297));
label_473ec8:
    // 0x473ec8: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x473ec8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_473ecc:
    // 0x473ecc: 0x252903c0  addiu       $t1, $t1, 0x3C0
    ctx->pc = 0x473eccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 960));
label_473ed0:
    // 0x473ed0: 0xc113940  jal         func_44E500
label_473ed4:
    if (ctx->pc == 0x473ED4u) {
        ctx->pc = 0x473ED8u;
        goto label_473ed8;
    }
    ctx->pc = 0x473ED0u;
    SET_GPR_U32(ctx, 31, 0x473ED8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x473ED0u, 0x473ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473ED8u;
label_473ed8:
    // 0x473ed8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x473ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_473edc:
    // 0x473edc: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x473edcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_473ee0:
    // 0x473ee0: 0x24a50910  addiu       $a1, $a1, 0x910
    ctx->pc = 0x473ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2320));
label_473ee4:
    // 0x473ee4: 0xc115c24  jal         func_457090
label_473ee8:
    if (ctx->pc == 0x473EE8u) {
        ctx->pc = 0x473EECu;
        goto label_473eec;
    }
    ctx->pc = 0x473EE4u;
    SET_GPR_U32(ctx, 31, 0x473EECu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x473EE4u, 0x473EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473EECu;
label_473eec:
    // 0x473eec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x473eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_473ef0:
    // 0x473ef0: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x473ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_473ef4:
    // 0x473ef4: 0x40f809  jalr        $v0
label_473ef8:
    if (ctx->pc == 0x473EF8u) {
        ctx->pc = 0x473EFCu;
        goto label_473efc;
    }
    ctx->pc = 0x473EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x473EFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473EF4u, 0x473EFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x473EFCu;
label_473efc:
    // 0x473efc: 0xaf82b404  sw          $v0, -0x4BFC($gp)
    ctx->pc = 0x473efcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947844), GPR_U32(ctx, 2));
label_473f00:
    // 0x473f00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x473f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_473f04:
    // 0x473f04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_473f08:
    if (ctx->pc == 0x473F08u) {
        ctx->pc = 0x473F0Cu;
        goto label_473f0c;
    }
    ctx->pc = 0x473F04u;
    {
        const bool branch_taken_0x473f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473f04) {
            ctx->pc = 0x473F14u;
            goto label_473f14;
        }
    }
    ctx->pc = 0x473F0Cu;
label_473f0c:
    // 0x473f0c: 0xd  break       0
    ctx->pc = 0x473f0cu;
    runtime->handleBreak(rdram, ctx);
label_473f10:
    // 0x473f10: 0x0  nop
    ctx->pc = 0x473f10u;
    // NOP
label_473f14:
    // 0x473f14: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x473f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_473f18:
    // 0x473f18: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x473f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_473f1c:
    // 0x473f1c: 0xc11392c  jal         func_44E4B0
label_473f20:
    if (ctx->pc == 0x473F20u) {
        ctx->pc = 0x473F24u;
        goto label_473f24;
    }
    ctx->pc = 0x473F1Cu;
    SET_GPR_U32(ctx, 31, 0x473F24u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x473F1Cu, 0x473F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473F24u;
label_473f24:
    // 0x473f24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x473f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_473f28:
    // 0x473f28: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x473f28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_473f2c:
    // 0x473f2c: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x473f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_473f30:
    // 0x473f30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x473f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_473f34:
    // 0x473f34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x473f34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_473f38:
    // 0x473f38: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x473f38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_473f3c:
    // 0x473f3c: 0x320f809  jalr        $t9
label_473f40:
    if (ctx->pc == 0x473F40u) {
        ctx->pc = 0x473F44u;
        goto label_473f44;
    }
    ctx->pc = 0x473F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x473F44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473F3Cu, 0x473F44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x473F44u;
label_473f44:
    // 0x473f44: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x473f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_473f48:
    // 0x473f48: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x473f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_473f4c:
    // 0x473f4c: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x473f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_473f50:
    // 0x473f50: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x473f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_473f54:
    // 0x473f54: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x473f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_473f58:
    // 0x473f58: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x473f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_473f5c:
    // 0x473f5c: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x473f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_473f60:
    // 0x473f60: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x473f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_473f64:
    // 0x473f64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x473f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_473f68:
    // 0x473f68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x473f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_473f6c:
    // 0x473f6c: 0x27bd0280  addiu       $sp, $sp, 0x280
    ctx->pc = 0x473f6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_473f70:
    // 0x473f70: 0x3e00008  jr          $ra
label_473f74:
    if (ctx->pc == 0x473F74u) {
        ctx->pc = 0x473F78u;
        goto label_473f78;
    }
    ctx->pc = 0x473F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473F78u;
label_473f78:
    // 0x473f78: 0x0  nop
    ctx->pc = 0x473f78u;
    // NOP
label_473f7c:
    // 0x473f7c: 0x0  nop
    ctx->pc = 0x473f7cu;
    // NOP
    ctx->pc = 0x473f80u;
}
