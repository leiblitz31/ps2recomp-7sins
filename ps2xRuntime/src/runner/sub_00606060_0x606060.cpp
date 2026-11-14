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

// Function: sub_00606060
// Address: 0x606060 - 0x609a48
void sub_00606060_0x606060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00606060_0x606060");
#endif

    switch (ctx->pc) {
        case 0x606060u: goto label_606060;
        case 0x606064u: goto label_606064;
        case 0x606068u: goto label_606068;
        case 0x60606cu: goto label_60606c;
        case 0x606070u: goto label_606070;
        case 0x606074u: goto label_606074;
        case 0x606078u: goto label_606078;
        case 0x60607cu: goto label_60607c;
        case 0x606080u: goto label_606080;
        case 0x606084u: goto label_606084;
        case 0x606088u: goto label_606088;
        case 0x60608cu: goto label_60608c;
        case 0x606090u: goto label_606090;
        case 0x606094u: goto label_606094;
        case 0x606098u: goto label_606098;
        case 0x60609cu: goto label_60609c;
        case 0x6060a0u: goto label_6060a0;
        case 0x6060a4u: goto label_6060a4;
        case 0x6060a8u: goto label_6060a8;
        case 0x6060acu: goto label_6060ac;
        case 0x6060b0u: goto label_6060b0;
        case 0x6060b4u: goto label_6060b4;
        case 0x6060b8u: goto label_6060b8;
        case 0x6060bcu: goto label_6060bc;
        case 0x6060c0u: goto label_6060c0;
        case 0x6060c4u: goto label_6060c4;
        case 0x6060c8u: goto label_6060c8;
        case 0x6060ccu: goto label_6060cc;
        case 0x6060d0u: goto label_6060d0;
        case 0x6060d4u: goto label_6060d4;
        case 0x6060d8u: goto label_6060d8;
        case 0x6060dcu: goto label_6060dc;
        case 0x6060e0u: goto label_6060e0;
        case 0x6060e4u: goto label_6060e4;
        case 0x6060e8u: goto label_6060e8;
        case 0x6060ecu: goto label_6060ec;
        case 0x6060f0u: goto label_6060f0;
        case 0x6060f4u: goto label_6060f4;
        case 0x6060f8u: goto label_6060f8;
        case 0x6060fcu: goto label_6060fc;
        case 0x606100u: goto label_606100;
        case 0x606104u: goto label_606104;
        case 0x606108u: goto label_606108;
        case 0x60610cu: goto label_60610c;
        case 0x606110u: goto label_606110;
        case 0x606114u: goto label_606114;
        case 0x606118u: goto label_606118;
        case 0x60611cu: goto label_60611c;
        case 0x606120u: goto label_606120;
        case 0x606124u: goto label_606124;
        case 0x606128u: goto label_606128;
        case 0x60612cu: goto label_60612c;
        case 0x606130u: goto label_606130;
        case 0x606134u: goto label_606134;
        case 0x606138u: goto label_606138;
        case 0x60613cu: goto label_60613c;
        case 0x606140u: goto label_606140;
        case 0x606144u: goto label_606144;
        case 0x606148u: goto label_606148;
        case 0x60614cu: goto label_60614c;
        case 0x606150u: goto label_606150;
        case 0x606154u: goto label_606154;
        case 0x606158u: goto label_606158;
        case 0x60615cu: goto label_60615c;
        case 0x606160u: goto label_606160;
        case 0x606164u: goto label_606164;
        case 0x606168u: goto label_606168;
        case 0x60616cu: goto label_60616c;
        case 0x606170u: goto label_606170;
        case 0x606174u: goto label_606174;
        case 0x606178u: goto label_606178;
        case 0x60617cu: goto label_60617c;
        case 0x606180u: goto label_606180;
        case 0x606184u: goto label_606184;
        case 0x606188u: goto label_606188;
        case 0x60618cu: goto label_60618c;
        case 0x606190u: goto label_606190;
        case 0x606194u: goto label_606194;
        case 0x606198u: goto label_606198;
        case 0x60619cu: goto label_60619c;
        case 0x6061a0u: goto label_6061a0;
        case 0x6061a4u: goto label_6061a4;
        case 0x6061a8u: goto label_6061a8;
        case 0x6061acu: goto label_6061ac;
        case 0x6061b0u: goto label_6061b0;
        case 0x6061b4u: goto label_6061b4;
        case 0x6061b8u: goto label_6061b8;
        case 0x6061bcu: goto label_6061bc;
        case 0x6061c0u: goto label_6061c0;
        case 0x6061c4u: goto label_6061c4;
        case 0x6061c8u: goto label_6061c8;
        case 0x6061ccu: goto label_6061cc;
        case 0x6061d0u: goto label_6061d0;
        case 0x6061d4u: goto label_6061d4;
        case 0x6061d8u: goto label_6061d8;
        case 0x6061dcu: goto label_6061dc;
        case 0x6061e0u: goto label_6061e0;
        case 0x6061e4u: goto label_6061e4;
        case 0x6061e8u: goto label_6061e8;
        case 0x6061ecu: goto label_6061ec;
        case 0x6061f0u: goto label_6061f0;
        case 0x6061f4u: goto label_6061f4;
        case 0x6061f8u: goto label_6061f8;
        case 0x6061fcu: goto label_6061fc;
        case 0x606200u: goto label_606200;
        case 0x606204u: goto label_606204;
        case 0x606208u: goto label_606208;
        case 0x60620cu: goto label_60620c;
        case 0x606210u: goto label_606210;
        case 0x606214u: goto label_606214;
        case 0x606218u: goto label_606218;
        case 0x60621cu: goto label_60621c;
        case 0x606220u: goto label_606220;
        case 0x606224u: goto label_606224;
        case 0x606228u: goto label_606228;
        case 0x60622cu: goto label_60622c;
        case 0x606230u: goto label_606230;
        case 0x606234u: goto label_606234;
        case 0x606238u: goto label_606238;
        case 0x60623cu: goto label_60623c;
        case 0x606240u: goto label_606240;
        case 0x606244u: goto label_606244;
        case 0x606248u: goto label_606248;
        case 0x60624cu: goto label_60624c;
        case 0x606250u: goto label_606250;
        case 0x606254u: goto label_606254;
        case 0x606258u: goto label_606258;
        case 0x60625cu: goto label_60625c;
        case 0x606260u: goto label_606260;
        case 0x606264u: goto label_606264;
        case 0x606268u: goto label_606268;
        case 0x60626cu: goto label_60626c;
        case 0x606270u: goto label_606270;
        case 0x606274u: goto label_606274;
        case 0x606278u: goto label_606278;
        case 0x60627cu: goto label_60627c;
        case 0x606280u: goto label_606280;
        case 0x606284u: goto label_606284;
        case 0x606288u: goto label_606288;
        case 0x60628cu: goto label_60628c;
        case 0x606290u: goto label_606290;
        case 0x606294u: goto label_606294;
        case 0x606298u: goto label_606298;
        case 0x60629cu: goto label_60629c;
        case 0x6062a0u: goto label_6062a0;
        case 0x6062a4u: goto label_6062a4;
        case 0x6062a8u: goto label_6062a8;
        case 0x6062acu: goto label_6062ac;
        case 0x6062b0u: goto label_6062b0;
        case 0x6062b4u: goto label_6062b4;
        case 0x6062b8u: goto label_6062b8;
        case 0x6062bcu: goto label_6062bc;
        case 0x6062c0u: goto label_6062c0;
        case 0x6062c4u: goto label_6062c4;
        case 0x6062c8u: goto label_6062c8;
        case 0x6062ccu: goto label_6062cc;
        case 0x6062d0u: goto label_6062d0;
        case 0x6062d4u: goto label_6062d4;
        case 0x6062d8u: goto label_6062d8;
        case 0x6062dcu: goto label_6062dc;
        case 0x6062e0u: goto label_6062e0;
        case 0x6062e4u: goto label_6062e4;
        case 0x6062e8u: goto label_6062e8;
        case 0x6062ecu: goto label_6062ec;
        case 0x6062f0u: goto label_6062f0;
        case 0x6062f4u: goto label_6062f4;
        case 0x6062f8u: goto label_6062f8;
        case 0x6062fcu: goto label_6062fc;
        case 0x606300u: goto label_606300;
        case 0x606304u: goto label_606304;
        case 0x606308u: goto label_606308;
        case 0x60630cu: goto label_60630c;
        case 0x606310u: goto label_606310;
        case 0x606314u: goto label_606314;
        case 0x606318u: goto label_606318;
        case 0x60631cu: goto label_60631c;
        case 0x606320u: goto label_606320;
        case 0x606324u: goto label_606324;
        case 0x606328u: goto label_606328;
        case 0x60632cu: goto label_60632c;
        case 0x606330u: goto label_606330;
        case 0x606334u: goto label_606334;
        case 0x606338u: goto label_606338;
        case 0x60633cu: goto label_60633c;
        case 0x606340u: goto label_606340;
        case 0x606344u: goto label_606344;
        case 0x606348u: goto label_606348;
        case 0x60634cu: goto label_60634c;
        case 0x606350u: goto label_606350;
        case 0x606354u: goto label_606354;
        case 0x606358u: goto label_606358;
        case 0x60635cu: goto label_60635c;
        case 0x606360u: goto label_606360;
        case 0x606364u: goto label_606364;
        case 0x606368u: goto label_606368;
        case 0x60636cu: goto label_60636c;
        case 0x606370u: goto label_606370;
        case 0x606374u: goto label_606374;
        case 0x606378u: goto label_606378;
        case 0x60637cu: goto label_60637c;
        case 0x606380u: goto label_606380;
        case 0x606384u: goto label_606384;
        case 0x606388u: goto label_606388;
        case 0x60638cu: goto label_60638c;
        case 0x606390u: goto label_606390;
        case 0x606394u: goto label_606394;
        case 0x606398u: goto label_606398;
        case 0x60639cu: goto label_60639c;
        case 0x6063a0u: goto label_6063a0;
        case 0x6063a4u: goto label_6063a4;
        case 0x6063a8u: goto label_6063a8;
        case 0x6063acu: goto label_6063ac;
        case 0x6063b0u: goto label_6063b0;
        case 0x6063b4u: goto label_6063b4;
        case 0x6063b8u: goto label_6063b8;
        case 0x6063bcu: goto label_6063bc;
        case 0x6063c0u: goto label_6063c0;
        case 0x6063c4u: goto label_6063c4;
        case 0x6063c8u: goto label_6063c8;
        case 0x6063ccu: goto label_6063cc;
        case 0x6063d0u: goto label_6063d0;
        case 0x6063d4u: goto label_6063d4;
        case 0x6063d8u: goto label_6063d8;
        case 0x6063dcu: goto label_6063dc;
        case 0x6063e0u: goto label_6063e0;
        case 0x6063e4u: goto label_6063e4;
        case 0x6063e8u: goto label_6063e8;
        case 0x6063ecu: goto label_6063ec;
        case 0x6063f0u: goto label_6063f0;
        case 0x6063f4u: goto label_6063f4;
        case 0x6063f8u: goto label_6063f8;
        case 0x6063fcu: goto label_6063fc;
        case 0x606400u: goto label_606400;
        case 0x606404u: goto label_606404;
        case 0x606408u: goto label_606408;
        case 0x60640cu: goto label_60640c;
        case 0x606410u: goto label_606410;
        case 0x606414u: goto label_606414;
        case 0x606418u: goto label_606418;
        case 0x60641cu: goto label_60641c;
        case 0x606420u: goto label_606420;
        case 0x606424u: goto label_606424;
        case 0x606428u: goto label_606428;
        case 0x60642cu: goto label_60642c;
        case 0x606430u: goto label_606430;
        case 0x606434u: goto label_606434;
        case 0x606438u: goto label_606438;
        case 0x60643cu: goto label_60643c;
        case 0x606440u: goto label_606440;
        case 0x606444u: goto label_606444;
        case 0x606448u: goto label_606448;
        case 0x60644cu: goto label_60644c;
        case 0x606450u: goto label_606450;
        case 0x606454u: goto label_606454;
        case 0x606458u: goto label_606458;
        case 0x60645cu: goto label_60645c;
        case 0x606460u: goto label_606460;
        case 0x606464u: goto label_606464;
        case 0x606468u: goto label_606468;
        case 0x60646cu: goto label_60646c;
        case 0x606470u: goto label_606470;
        case 0x606474u: goto label_606474;
        case 0x606478u: goto label_606478;
        case 0x60647cu: goto label_60647c;
        case 0x606480u: goto label_606480;
        case 0x606484u: goto label_606484;
        case 0x606488u: goto label_606488;
        case 0x60648cu: goto label_60648c;
        case 0x606490u: goto label_606490;
        case 0x606494u: goto label_606494;
        case 0x606498u: goto label_606498;
        case 0x60649cu: goto label_60649c;
        case 0x6064a0u: goto label_6064a0;
        case 0x6064a4u: goto label_6064a4;
        case 0x6064a8u: goto label_6064a8;
        case 0x6064acu: goto label_6064ac;
        case 0x6064b0u: goto label_6064b0;
        case 0x6064b4u: goto label_6064b4;
        case 0x6064b8u: goto label_6064b8;
        case 0x6064bcu: goto label_6064bc;
        case 0x6064c0u: goto label_6064c0;
        case 0x6064c4u: goto label_6064c4;
        case 0x6064c8u: goto label_6064c8;
        case 0x6064ccu: goto label_6064cc;
        case 0x6064d0u: goto label_6064d0;
        case 0x6064d4u: goto label_6064d4;
        case 0x6064d8u: goto label_6064d8;
        case 0x6064dcu: goto label_6064dc;
        case 0x6064e0u: goto label_6064e0;
        case 0x6064e4u: goto label_6064e4;
        case 0x6064e8u: goto label_6064e8;
        case 0x6064ecu: goto label_6064ec;
        case 0x6064f0u: goto label_6064f0;
        case 0x6064f4u: goto label_6064f4;
        case 0x6064f8u: goto label_6064f8;
        case 0x6064fcu: goto label_6064fc;
        case 0x606500u: goto label_606500;
        case 0x606504u: goto label_606504;
        case 0x606508u: goto label_606508;
        case 0x60650cu: goto label_60650c;
        case 0x606510u: goto label_606510;
        case 0x606514u: goto label_606514;
        case 0x606518u: goto label_606518;
        case 0x60651cu: goto label_60651c;
        case 0x606520u: goto label_606520;
        case 0x606524u: goto label_606524;
        case 0x606528u: goto label_606528;
        case 0x60652cu: goto label_60652c;
        case 0x606530u: goto label_606530;
        case 0x606534u: goto label_606534;
        case 0x606538u: goto label_606538;
        case 0x60653cu: goto label_60653c;
        case 0x606540u: goto label_606540;
        case 0x606544u: goto label_606544;
        case 0x606548u: goto label_606548;
        case 0x60654cu: goto label_60654c;
        case 0x606550u: goto label_606550;
        case 0x606554u: goto label_606554;
        case 0x606558u: goto label_606558;
        case 0x60655cu: goto label_60655c;
        case 0x606560u: goto label_606560;
        case 0x606564u: goto label_606564;
        case 0x606568u: goto label_606568;
        case 0x60656cu: goto label_60656c;
        case 0x606570u: goto label_606570;
        case 0x606574u: goto label_606574;
        case 0x606578u: goto label_606578;
        case 0x60657cu: goto label_60657c;
        case 0x606580u: goto label_606580;
        case 0x606584u: goto label_606584;
        case 0x606588u: goto label_606588;
        case 0x60658cu: goto label_60658c;
        case 0x606590u: goto label_606590;
        case 0x606594u: goto label_606594;
        case 0x606598u: goto label_606598;
        case 0x60659cu: goto label_60659c;
        case 0x6065a0u: goto label_6065a0;
        case 0x6065a4u: goto label_6065a4;
        case 0x6065a8u: goto label_6065a8;
        case 0x6065acu: goto label_6065ac;
        case 0x6065b0u: goto label_6065b0;
        case 0x6065b4u: goto label_6065b4;
        case 0x6065b8u: goto label_6065b8;
        case 0x6065bcu: goto label_6065bc;
        case 0x6065c0u: goto label_6065c0;
        case 0x6065c4u: goto label_6065c4;
        case 0x6065c8u: goto label_6065c8;
        case 0x6065ccu: goto label_6065cc;
        case 0x6065d0u: goto label_6065d0;
        case 0x6065d4u: goto label_6065d4;
        case 0x6065d8u: goto label_6065d8;
        case 0x6065dcu: goto label_6065dc;
        case 0x6065e0u: goto label_6065e0;
        case 0x6065e4u: goto label_6065e4;
        case 0x6065e8u: goto label_6065e8;
        case 0x6065ecu: goto label_6065ec;
        case 0x6065f0u: goto label_6065f0;
        case 0x6065f4u: goto label_6065f4;
        case 0x6065f8u: goto label_6065f8;
        case 0x6065fcu: goto label_6065fc;
        case 0x606600u: goto label_606600;
        case 0x606604u: goto label_606604;
        case 0x606608u: goto label_606608;
        case 0x60660cu: goto label_60660c;
        case 0x606610u: goto label_606610;
        case 0x606614u: goto label_606614;
        case 0x606618u: goto label_606618;
        case 0x60661cu: goto label_60661c;
        case 0x606620u: goto label_606620;
        case 0x606624u: goto label_606624;
        case 0x606628u: goto label_606628;
        case 0x60662cu: goto label_60662c;
        case 0x606630u: goto label_606630;
        case 0x606634u: goto label_606634;
        case 0x606638u: goto label_606638;
        case 0x60663cu: goto label_60663c;
        case 0x606640u: goto label_606640;
        case 0x606644u: goto label_606644;
        case 0x606648u: goto label_606648;
        case 0x60664cu: goto label_60664c;
        case 0x606650u: goto label_606650;
        case 0x606654u: goto label_606654;
        case 0x606658u: goto label_606658;
        case 0x60665cu: goto label_60665c;
        case 0x606660u: goto label_606660;
        case 0x606664u: goto label_606664;
        case 0x606668u: goto label_606668;
        case 0x60666cu: goto label_60666c;
        case 0x606670u: goto label_606670;
        case 0x606674u: goto label_606674;
        case 0x606678u: goto label_606678;
        case 0x60667cu: goto label_60667c;
        case 0x606680u: goto label_606680;
        case 0x606684u: goto label_606684;
        case 0x606688u: goto label_606688;
        case 0x60668cu: goto label_60668c;
        case 0x606690u: goto label_606690;
        case 0x606694u: goto label_606694;
        case 0x606698u: goto label_606698;
        case 0x60669cu: goto label_60669c;
        case 0x6066a0u: goto label_6066a0;
        case 0x6066a4u: goto label_6066a4;
        case 0x6066a8u: goto label_6066a8;
        case 0x6066acu: goto label_6066ac;
        case 0x6066b0u: goto label_6066b0;
        case 0x6066b4u: goto label_6066b4;
        case 0x6066b8u: goto label_6066b8;
        case 0x6066bcu: goto label_6066bc;
        case 0x6066c0u: goto label_6066c0;
        case 0x6066c4u: goto label_6066c4;
        case 0x6066c8u: goto label_6066c8;
        case 0x6066ccu: goto label_6066cc;
        case 0x6066d0u: goto label_6066d0;
        case 0x6066d4u: goto label_6066d4;
        case 0x6066d8u: goto label_6066d8;
        case 0x6066dcu: goto label_6066dc;
        case 0x6066e0u: goto label_6066e0;
        case 0x6066e4u: goto label_6066e4;
        case 0x6066e8u: goto label_6066e8;
        case 0x6066ecu: goto label_6066ec;
        case 0x6066f0u: goto label_6066f0;
        case 0x6066f4u: goto label_6066f4;
        case 0x6066f8u: goto label_6066f8;
        case 0x6066fcu: goto label_6066fc;
        case 0x606700u: goto label_606700;
        case 0x606704u: goto label_606704;
        case 0x606708u: goto label_606708;
        case 0x60670cu: goto label_60670c;
        case 0x606710u: goto label_606710;
        case 0x606714u: goto label_606714;
        case 0x606718u: goto label_606718;
        case 0x60671cu: goto label_60671c;
        case 0x606720u: goto label_606720;
        case 0x606724u: goto label_606724;
        case 0x606728u: goto label_606728;
        case 0x60672cu: goto label_60672c;
        case 0x606730u: goto label_606730;
        case 0x606734u: goto label_606734;
        case 0x606738u: goto label_606738;
        case 0x60673cu: goto label_60673c;
        case 0x606740u: goto label_606740;
        case 0x606744u: goto label_606744;
        case 0x606748u: goto label_606748;
        case 0x60674cu: goto label_60674c;
        case 0x606750u: goto label_606750;
        case 0x606754u: goto label_606754;
        case 0x606758u: goto label_606758;
        case 0x60675cu: goto label_60675c;
        case 0x606760u: goto label_606760;
        case 0x606764u: goto label_606764;
        case 0x606768u: goto label_606768;
        case 0x60676cu: goto label_60676c;
        case 0x606770u: goto label_606770;
        case 0x606774u: goto label_606774;
        case 0x606778u: goto label_606778;
        case 0x60677cu: goto label_60677c;
        case 0x606780u: goto label_606780;
        case 0x606784u: goto label_606784;
        case 0x606788u: goto label_606788;
        case 0x60678cu: goto label_60678c;
        case 0x606790u: goto label_606790;
        case 0x606794u: goto label_606794;
        case 0x606798u: goto label_606798;
        case 0x60679cu: goto label_60679c;
        case 0x6067a0u: goto label_6067a0;
        case 0x6067a4u: goto label_6067a4;
        case 0x6067a8u: goto label_6067a8;
        case 0x6067acu: goto label_6067ac;
        case 0x6067b0u: goto label_6067b0;
        case 0x6067b4u: goto label_6067b4;
        case 0x6067b8u: goto label_6067b8;
        case 0x6067bcu: goto label_6067bc;
        case 0x6067c0u: goto label_6067c0;
        case 0x6067c4u: goto label_6067c4;
        case 0x6067c8u: goto label_6067c8;
        case 0x6067ccu: goto label_6067cc;
        case 0x6067d0u: goto label_6067d0;
        case 0x6067d4u: goto label_6067d4;
        case 0x6067d8u: goto label_6067d8;
        case 0x6067dcu: goto label_6067dc;
        case 0x6067e0u: goto label_6067e0;
        case 0x6067e4u: goto label_6067e4;
        case 0x6067e8u: goto label_6067e8;
        case 0x6067ecu: goto label_6067ec;
        case 0x6067f0u: goto label_6067f0;
        case 0x6067f4u: goto label_6067f4;
        case 0x6067f8u: goto label_6067f8;
        case 0x6067fcu: goto label_6067fc;
        case 0x606800u: goto label_606800;
        case 0x606804u: goto label_606804;
        case 0x606808u: goto label_606808;
        case 0x60680cu: goto label_60680c;
        case 0x606810u: goto label_606810;
        case 0x606814u: goto label_606814;
        case 0x606818u: goto label_606818;
        case 0x60681cu: goto label_60681c;
        case 0x606820u: goto label_606820;
        case 0x606824u: goto label_606824;
        case 0x606828u: goto label_606828;
        case 0x60682cu: goto label_60682c;
        case 0x606830u: goto label_606830;
        case 0x606834u: goto label_606834;
        case 0x606838u: goto label_606838;
        case 0x60683cu: goto label_60683c;
        case 0x606840u: goto label_606840;
        case 0x606844u: goto label_606844;
        case 0x606848u: goto label_606848;
        case 0x60684cu: goto label_60684c;
        case 0x606850u: goto label_606850;
        case 0x606854u: goto label_606854;
        case 0x606858u: goto label_606858;
        case 0x60685cu: goto label_60685c;
        case 0x606860u: goto label_606860;
        case 0x606864u: goto label_606864;
        case 0x606868u: goto label_606868;
        case 0x60686cu: goto label_60686c;
        case 0x606870u: goto label_606870;
        case 0x606874u: goto label_606874;
        case 0x606878u: goto label_606878;
        case 0x60687cu: goto label_60687c;
        case 0x606880u: goto label_606880;
        case 0x606884u: goto label_606884;
        case 0x606888u: goto label_606888;
        case 0x60688cu: goto label_60688c;
        case 0x606890u: goto label_606890;
        case 0x606894u: goto label_606894;
        case 0x606898u: goto label_606898;
        case 0x60689cu: goto label_60689c;
        case 0x6068a0u: goto label_6068a0;
        case 0x6068a4u: goto label_6068a4;
        case 0x6068a8u: goto label_6068a8;
        case 0x6068acu: goto label_6068ac;
        case 0x6068b0u: goto label_6068b0;
        case 0x6068b4u: goto label_6068b4;
        case 0x6068b8u: goto label_6068b8;
        case 0x6068bcu: goto label_6068bc;
        case 0x6068c0u: goto label_6068c0;
        case 0x6068c4u: goto label_6068c4;
        case 0x6068c8u: goto label_6068c8;
        case 0x6068ccu: goto label_6068cc;
        case 0x6068d0u: goto label_6068d0;
        case 0x6068d4u: goto label_6068d4;
        case 0x6068d8u: goto label_6068d8;
        case 0x6068dcu: goto label_6068dc;
        case 0x6068e0u: goto label_6068e0;
        case 0x6068e4u: goto label_6068e4;
        case 0x6068e8u: goto label_6068e8;
        case 0x6068ecu: goto label_6068ec;
        case 0x6068f0u: goto label_6068f0;
        case 0x6068f4u: goto label_6068f4;
        case 0x6068f8u: goto label_6068f8;
        case 0x6068fcu: goto label_6068fc;
        case 0x606900u: goto label_606900;
        case 0x606904u: goto label_606904;
        case 0x606908u: goto label_606908;
        case 0x60690cu: goto label_60690c;
        case 0x606910u: goto label_606910;
        case 0x606914u: goto label_606914;
        case 0x606918u: goto label_606918;
        case 0x60691cu: goto label_60691c;
        case 0x606920u: goto label_606920;
        case 0x606924u: goto label_606924;
        case 0x606928u: goto label_606928;
        case 0x60692cu: goto label_60692c;
        case 0x606930u: goto label_606930;
        case 0x606934u: goto label_606934;
        case 0x606938u: goto label_606938;
        case 0x60693cu: goto label_60693c;
        case 0x606940u: goto label_606940;
        case 0x606944u: goto label_606944;
        case 0x606948u: goto label_606948;
        case 0x60694cu: goto label_60694c;
        case 0x606950u: goto label_606950;
        case 0x606954u: goto label_606954;
        case 0x606958u: goto label_606958;
        case 0x60695cu: goto label_60695c;
        case 0x606960u: goto label_606960;
        case 0x606964u: goto label_606964;
        case 0x606968u: goto label_606968;
        case 0x60696cu: goto label_60696c;
        case 0x606970u: goto label_606970;
        case 0x606974u: goto label_606974;
        case 0x606978u: goto label_606978;
        case 0x60697cu: goto label_60697c;
        case 0x606980u: goto label_606980;
        case 0x606984u: goto label_606984;
        case 0x606988u: goto label_606988;
        case 0x60698cu: goto label_60698c;
        case 0x606990u: goto label_606990;
        case 0x606994u: goto label_606994;
        case 0x606998u: goto label_606998;
        case 0x60699cu: goto label_60699c;
        case 0x6069a0u: goto label_6069a0;
        case 0x6069a4u: goto label_6069a4;
        case 0x6069a8u: goto label_6069a8;
        case 0x6069acu: goto label_6069ac;
        case 0x6069b0u: goto label_6069b0;
        case 0x6069b4u: goto label_6069b4;
        case 0x6069b8u: goto label_6069b8;
        case 0x6069bcu: goto label_6069bc;
        case 0x6069c0u: goto label_6069c0;
        case 0x6069c4u: goto label_6069c4;
        case 0x6069c8u: goto label_6069c8;
        case 0x6069ccu: goto label_6069cc;
        case 0x6069d0u: goto label_6069d0;
        case 0x6069d4u: goto label_6069d4;
        case 0x6069d8u: goto label_6069d8;
        case 0x6069dcu: goto label_6069dc;
        case 0x6069e0u: goto label_6069e0;
        case 0x6069e4u: goto label_6069e4;
        case 0x6069e8u: goto label_6069e8;
        case 0x6069ecu: goto label_6069ec;
        case 0x6069f0u: goto label_6069f0;
        case 0x6069f4u: goto label_6069f4;
        case 0x6069f8u: goto label_6069f8;
        case 0x6069fcu: goto label_6069fc;
        case 0x606a00u: goto label_606a00;
        case 0x606a04u: goto label_606a04;
        case 0x606a08u: goto label_606a08;
        case 0x606a0cu: goto label_606a0c;
        case 0x606a10u: goto label_606a10;
        case 0x606a14u: goto label_606a14;
        case 0x606a18u: goto label_606a18;
        case 0x606a1cu: goto label_606a1c;
        case 0x606a20u: goto label_606a20;
        case 0x606a24u: goto label_606a24;
        case 0x606a28u: goto label_606a28;
        case 0x606a2cu: goto label_606a2c;
        case 0x606a30u: goto label_606a30;
        case 0x606a34u: goto label_606a34;
        case 0x606a38u: goto label_606a38;
        case 0x606a3cu: goto label_606a3c;
        case 0x606a40u: goto label_606a40;
        case 0x606a44u: goto label_606a44;
        case 0x606a48u: goto label_606a48;
        case 0x606a4cu: goto label_606a4c;
        case 0x606a50u: goto label_606a50;
        case 0x606a54u: goto label_606a54;
        case 0x606a58u: goto label_606a58;
        case 0x606a5cu: goto label_606a5c;
        case 0x606a60u: goto label_606a60;
        case 0x606a64u: goto label_606a64;
        case 0x606a68u: goto label_606a68;
        case 0x606a6cu: goto label_606a6c;
        case 0x606a70u: goto label_606a70;
        case 0x606a74u: goto label_606a74;
        case 0x606a78u: goto label_606a78;
        case 0x606a7cu: goto label_606a7c;
        case 0x606a80u: goto label_606a80;
        case 0x606a84u: goto label_606a84;
        case 0x606a88u: goto label_606a88;
        case 0x606a8cu: goto label_606a8c;
        case 0x606a90u: goto label_606a90;
        case 0x606a94u: goto label_606a94;
        case 0x606a98u: goto label_606a98;
        case 0x606a9cu: goto label_606a9c;
        case 0x606aa0u: goto label_606aa0;
        case 0x606aa4u: goto label_606aa4;
        case 0x606aa8u: goto label_606aa8;
        case 0x606aacu: goto label_606aac;
        case 0x606ab0u: goto label_606ab0;
        case 0x606ab4u: goto label_606ab4;
        case 0x606ab8u: goto label_606ab8;
        case 0x606abcu: goto label_606abc;
        case 0x606ac0u: goto label_606ac0;
        case 0x606ac4u: goto label_606ac4;
        case 0x606ac8u: goto label_606ac8;
        case 0x606accu: goto label_606acc;
        case 0x606ad0u: goto label_606ad0;
        case 0x606ad4u: goto label_606ad4;
        case 0x606ad8u: goto label_606ad8;
        case 0x606adcu: goto label_606adc;
        case 0x606ae0u: goto label_606ae0;
        case 0x606ae4u: goto label_606ae4;
        case 0x606ae8u: goto label_606ae8;
        case 0x606aecu: goto label_606aec;
        case 0x606af0u: goto label_606af0;
        case 0x606af4u: goto label_606af4;
        case 0x606af8u: goto label_606af8;
        case 0x606afcu: goto label_606afc;
        case 0x606b00u: goto label_606b00;
        case 0x606b04u: goto label_606b04;
        case 0x606b08u: goto label_606b08;
        case 0x606b0cu: goto label_606b0c;
        case 0x606b10u: goto label_606b10;
        case 0x606b14u: goto label_606b14;
        case 0x606b18u: goto label_606b18;
        case 0x606b1cu: goto label_606b1c;
        case 0x606b20u: goto label_606b20;
        case 0x606b24u: goto label_606b24;
        case 0x606b28u: goto label_606b28;
        case 0x606b2cu: goto label_606b2c;
        case 0x606b30u: goto label_606b30;
        case 0x606b34u: goto label_606b34;
        case 0x606b38u: goto label_606b38;
        case 0x606b3cu: goto label_606b3c;
        case 0x606b40u: goto label_606b40;
        case 0x606b44u: goto label_606b44;
        case 0x606b48u: goto label_606b48;
        case 0x606b4cu: goto label_606b4c;
        case 0x606b50u: goto label_606b50;
        case 0x606b54u: goto label_606b54;
        case 0x606b58u: goto label_606b58;
        case 0x606b5cu: goto label_606b5c;
        case 0x606b60u: goto label_606b60;
        case 0x606b64u: goto label_606b64;
        case 0x606b68u: goto label_606b68;
        case 0x606b6cu: goto label_606b6c;
        case 0x606b70u: goto label_606b70;
        case 0x606b74u: goto label_606b74;
        case 0x606b78u: goto label_606b78;
        case 0x606b7cu: goto label_606b7c;
        case 0x606b80u: goto label_606b80;
        case 0x606b84u: goto label_606b84;
        case 0x606b88u: goto label_606b88;
        case 0x606b8cu: goto label_606b8c;
        case 0x606b90u: goto label_606b90;
        case 0x606b94u: goto label_606b94;
        case 0x606b98u: goto label_606b98;
        case 0x606b9cu: goto label_606b9c;
        case 0x606ba0u: goto label_606ba0;
        case 0x606ba4u: goto label_606ba4;
        case 0x606ba8u: goto label_606ba8;
        case 0x606bacu: goto label_606bac;
        case 0x606bb0u: goto label_606bb0;
        case 0x606bb4u: goto label_606bb4;
        case 0x606bb8u: goto label_606bb8;
        case 0x606bbcu: goto label_606bbc;
        case 0x606bc0u: goto label_606bc0;
        case 0x606bc4u: goto label_606bc4;
        case 0x606bc8u: goto label_606bc8;
        case 0x606bccu: goto label_606bcc;
        case 0x606bd0u: goto label_606bd0;
        case 0x606bd4u: goto label_606bd4;
        case 0x606bd8u: goto label_606bd8;
        case 0x606bdcu: goto label_606bdc;
        case 0x606be0u: goto label_606be0;
        case 0x606be4u: goto label_606be4;
        case 0x606be8u: goto label_606be8;
        case 0x606becu: goto label_606bec;
        case 0x606bf0u: goto label_606bf0;
        case 0x606bf4u: goto label_606bf4;
        case 0x606bf8u: goto label_606bf8;
        case 0x606bfcu: goto label_606bfc;
        case 0x606c00u: goto label_606c00;
        case 0x606c04u: goto label_606c04;
        case 0x606c08u: goto label_606c08;
        case 0x606c0cu: goto label_606c0c;
        case 0x606c10u: goto label_606c10;
        case 0x606c14u: goto label_606c14;
        case 0x606c18u: goto label_606c18;
        case 0x606c1cu: goto label_606c1c;
        case 0x606c20u: goto label_606c20;
        case 0x606c24u: goto label_606c24;
        case 0x606c28u: goto label_606c28;
        case 0x606c2cu: goto label_606c2c;
        case 0x606c30u: goto label_606c30;
        case 0x606c34u: goto label_606c34;
        case 0x606c38u: goto label_606c38;
        case 0x606c3cu: goto label_606c3c;
        case 0x606c40u: goto label_606c40;
        case 0x606c44u: goto label_606c44;
        case 0x606c48u: goto label_606c48;
        case 0x606c4cu: goto label_606c4c;
        case 0x606c50u: goto label_606c50;
        case 0x606c54u: goto label_606c54;
        case 0x606c58u: goto label_606c58;
        case 0x606c5cu: goto label_606c5c;
        case 0x606c60u: goto label_606c60;
        case 0x606c64u: goto label_606c64;
        case 0x606c68u: goto label_606c68;
        case 0x606c6cu: goto label_606c6c;
        case 0x606c70u: goto label_606c70;
        case 0x606c74u: goto label_606c74;
        case 0x606c78u: goto label_606c78;
        case 0x606c7cu: goto label_606c7c;
        case 0x606c80u: goto label_606c80;
        case 0x606c84u: goto label_606c84;
        case 0x606c88u: goto label_606c88;
        case 0x606c8cu: goto label_606c8c;
        case 0x606c90u: goto label_606c90;
        case 0x606c94u: goto label_606c94;
        case 0x606c98u: goto label_606c98;
        case 0x606c9cu: goto label_606c9c;
        case 0x606ca0u: goto label_606ca0;
        case 0x606ca4u: goto label_606ca4;
        case 0x606ca8u: goto label_606ca8;
        case 0x606cacu: goto label_606cac;
        case 0x606cb0u: goto label_606cb0;
        case 0x606cb4u: goto label_606cb4;
        case 0x606cb8u: goto label_606cb8;
        case 0x606cbcu: goto label_606cbc;
        case 0x606cc0u: goto label_606cc0;
        case 0x606cc4u: goto label_606cc4;
        case 0x606cc8u: goto label_606cc8;
        case 0x606cccu: goto label_606ccc;
        case 0x606cd0u: goto label_606cd0;
        case 0x606cd4u: goto label_606cd4;
        case 0x606cd8u: goto label_606cd8;
        case 0x606cdcu: goto label_606cdc;
        case 0x606ce0u: goto label_606ce0;
        case 0x606ce4u: goto label_606ce4;
        case 0x606ce8u: goto label_606ce8;
        case 0x606cecu: goto label_606cec;
        case 0x606cf0u: goto label_606cf0;
        case 0x606cf4u: goto label_606cf4;
        case 0x606cf8u: goto label_606cf8;
        case 0x606cfcu: goto label_606cfc;
        case 0x606d00u: goto label_606d00;
        case 0x606d04u: goto label_606d04;
        case 0x606d08u: goto label_606d08;
        case 0x606d0cu: goto label_606d0c;
        case 0x606d10u: goto label_606d10;
        case 0x606d14u: goto label_606d14;
        case 0x606d18u: goto label_606d18;
        case 0x606d1cu: goto label_606d1c;
        case 0x606d20u: goto label_606d20;
        case 0x606d24u: goto label_606d24;
        case 0x606d28u: goto label_606d28;
        case 0x606d2cu: goto label_606d2c;
        case 0x606d30u: goto label_606d30;
        case 0x606d34u: goto label_606d34;
        case 0x606d38u: goto label_606d38;
        case 0x606d3cu: goto label_606d3c;
        case 0x606d40u: goto label_606d40;
        case 0x606d44u: goto label_606d44;
        case 0x606d48u: goto label_606d48;
        case 0x606d4cu: goto label_606d4c;
        case 0x606d50u: goto label_606d50;
        case 0x606d54u: goto label_606d54;
        case 0x606d58u: goto label_606d58;
        case 0x606d5cu: goto label_606d5c;
        case 0x606d60u: goto label_606d60;
        case 0x606d64u: goto label_606d64;
        case 0x606d68u: goto label_606d68;
        case 0x606d6cu: goto label_606d6c;
        case 0x606d70u: goto label_606d70;
        case 0x606d74u: goto label_606d74;
        case 0x606d78u: goto label_606d78;
        case 0x606d7cu: goto label_606d7c;
        case 0x606d80u: goto label_606d80;
        case 0x606d84u: goto label_606d84;
        case 0x606d88u: goto label_606d88;
        case 0x606d8cu: goto label_606d8c;
        case 0x606d90u: goto label_606d90;
        case 0x606d94u: goto label_606d94;
        case 0x606d98u: goto label_606d98;
        case 0x606d9cu: goto label_606d9c;
        case 0x606da0u: goto label_606da0;
        case 0x606da4u: goto label_606da4;
        case 0x606da8u: goto label_606da8;
        case 0x606dacu: goto label_606dac;
        case 0x606db0u: goto label_606db0;
        case 0x606db4u: goto label_606db4;
        case 0x606db8u: goto label_606db8;
        case 0x606dbcu: goto label_606dbc;
        case 0x606dc0u: goto label_606dc0;
        case 0x606dc4u: goto label_606dc4;
        case 0x606dc8u: goto label_606dc8;
        case 0x606dccu: goto label_606dcc;
        case 0x606dd0u: goto label_606dd0;
        case 0x606dd4u: goto label_606dd4;
        case 0x606dd8u: goto label_606dd8;
        case 0x606ddcu: goto label_606ddc;
        case 0x606de0u: goto label_606de0;
        case 0x606de4u: goto label_606de4;
        case 0x606de8u: goto label_606de8;
        case 0x606decu: goto label_606dec;
        case 0x606df0u: goto label_606df0;
        case 0x606df4u: goto label_606df4;
        case 0x606df8u: goto label_606df8;
        case 0x606dfcu: goto label_606dfc;
        case 0x606e00u: goto label_606e00;
        case 0x606e04u: goto label_606e04;
        case 0x606e08u: goto label_606e08;
        case 0x606e0cu: goto label_606e0c;
        case 0x606e10u: goto label_606e10;
        case 0x606e14u: goto label_606e14;
        case 0x606e18u: goto label_606e18;
        case 0x606e1cu: goto label_606e1c;
        case 0x606e20u: goto label_606e20;
        case 0x606e24u: goto label_606e24;
        case 0x606e28u: goto label_606e28;
        case 0x606e2cu: goto label_606e2c;
        case 0x606e30u: goto label_606e30;
        case 0x606e34u: goto label_606e34;
        case 0x606e38u: goto label_606e38;
        case 0x606e3cu: goto label_606e3c;
        case 0x606e40u: goto label_606e40;
        case 0x606e44u: goto label_606e44;
        case 0x606e48u: goto label_606e48;
        case 0x606e4cu: goto label_606e4c;
        case 0x606e50u: goto label_606e50;
        case 0x606e54u: goto label_606e54;
        case 0x606e58u: goto label_606e58;
        case 0x606e5cu: goto label_606e5c;
        case 0x606e60u: goto label_606e60;
        case 0x606e64u: goto label_606e64;
        case 0x606e68u: goto label_606e68;
        case 0x606e6cu: goto label_606e6c;
        case 0x606e70u: goto label_606e70;
        case 0x606e74u: goto label_606e74;
        case 0x606e78u: goto label_606e78;
        case 0x606e7cu: goto label_606e7c;
        case 0x606e80u: goto label_606e80;
        case 0x606e84u: goto label_606e84;
        case 0x606e88u: goto label_606e88;
        case 0x606e8cu: goto label_606e8c;
        case 0x606e90u: goto label_606e90;
        case 0x606e94u: goto label_606e94;
        case 0x606e98u: goto label_606e98;
        case 0x606e9cu: goto label_606e9c;
        case 0x606ea0u: goto label_606ea0;
        case 0x606ea4u: goto label_606ea4;
        case 0x606ea8u: goto label_606ea8;
        case 0x606eacu: goto label_606eac;
        case 0x606eb0u: goto label_606eb0;
        case 0x606eb4u: goto label_606eb4;
        case 0x606eb8u: goto label_606eb8;
        case 0x606ebcu: goto label_606ebc;
        case 0x606ec0u: goto label_606ec0;
        case 0x606ec4u: goto label_606ec4;
        case 0x606ec8u: goto label_606ec8;
        case 0x606eccu: goto label_606ecc;
        case 0x606ed0u: goto label_606ed0;
        case 0x606ed4u: goto label_606ed4;
        case 0x606ed8u: goto label_606ed8;
        case 0x606edcu: goto label_606edc;
        case 0x606ee0u: goto label_606ee0;
        case 0x606ee4u: goto label_606ee4;
        case 0x606ee8u: goto label_606ee8;
        case 0x606eecu: goto label_606eec;
        case 0x606ef0u: goto label_606ef0;
        case 0x606ef4u: goto label_606ef4;
        case 0x606ef8u: goto label_606ef8;
        case 0x606efcu: goto label_606efc;
        case 0x606f00u: goto label_606f00;
        case 0x606f04u: goto label_606f04;
        case 0x606f08u: goto label_606f08;
        case 0x606f0cu: goto label_606f0c;
        case 0x606f10u: goto label_606f10;
        case 0x606f14u: goto label_606f14;
        case 0x606f18u: goto label_606f18;
        case 0x606f1cu: goto label_606f1c;
        case 0x606f20u: goto label_606f20;
        case 0x606f24u: goto label_606f24;
        case 0x606f28u: goto label_606f28;
        case 0x606f2cu: goto label_606f2c;
        case 0x606f30u: goto label_606f30;
        case 0x606f34u: goto label_606f34;
        case 0x606f38u: goto label_606f38;
        case 0x606f3cu: goto label_606f3c;
        case 0x606f40u: goto label_606f40;
        case 0x606f44u: goto label_606f44;
        case 0x606f48u: goto label_606f48;
        case 0x606f4cu: goto label_606f4c;
        case 0x606f50u: goto label_606f50;
        case 0x606f54u: goto label_606f54;
        case 0x606f58u: goto label_606f58;
        case 0x606f5cu: goto label_606f5c;
        case 0x606f60u: goto label_606f60;
        case 0x606f64u: goto label_606f64;
        case 0x606f68u: goto label_606f68;
        case 0x606f6cu: goto label_606f6c;
        case 0x606f70u: goto label_606f70;
        case 0x606f74u: goto label_606f74;
        case 0x606f78u: goto label_606f78;
        case 0x606f7cu: goto label_606f7c;
        case 0x606f80u: goto label_606f80;
        case 0x606f84u: goto label_606f84;
        case 0x606f88u: goto label_606f88;
        case 0x606f8cu: goto label_606f8c;
        case 0x606f90u: goto label_606f90;
        case 0x606f94u: goto label_606f94;
        case 0x606f98u: goto label_606f98;
        case 0x606f9cu: goto label_606f9c;
        case 0x606fa0u: goto label_606fa0;
        case 0x606fa4u: goto label_606fa4;
        case 0x606fa8u: goto label_606fa8;
        case 0x606facu: goto label_606fac;
        case 0x606fb0u: goto label_606fb0;
        case 0x606fb4u: goto label_606fb4;
        case 0x606fb8u: goto label_606fb8;
        case 0x606fbcu: goto label_606fbc;
        case 0x606fc0u: goto label_606fc0;
        case 0x606fc4u: goto label_606fc4;
        case 0x606fc8u: goto label_606fc8;
        case 0x606fccu: goto label_606fcc;
        case 0x606fd0u: goto label_606fd0;
        case 0x606fd4u: goto label_606fd4;
        case 0x606fd8u: goto label_606fd8;
        case 0x606fdcu: goto label_606fdc;
        case 0x606fe0u: goto label_606fe0;
        case 0x606fe4u: goto label_606fe4;
        case 0x606fe8u: goto label_606fe8;
        case 0x606fecu: goto label_606fec;
        case 0x606ff0u: goto label_606ff0;
        case 0x606ff4u: goto label_606ff4;
        case 0x606ff8u: goto label_606ff8;
        case 0x606ffcu: goto label_606ffc;
        case 0x607000u: goto label_607000;
        case 0x607004u: goto label_607004;
        case 0x607008u: goto label_607008;
        case 0x60700cu: goto label_60700c;
        case 0x607010u: goto label_607010;
        case 0x607014u: goto label_607014;
        case 0x607018u: goto label_607018;
        case 0x60701cu: goto label_60701c;
        case 0x607020u: goto label_607020;
        case 0x607024u: goto label_607024;
        case 0x607028u: goto label_607028;
        case 0x60702cu: goto label_60702c;
        case 0x607030u: goto label_607030;
        case 0x607034u: goto label_607034;
        case 0x607038u: goto label_607038;
        case 0x60703cu: goto label_60703c;
        case 0x607040u: goto label_607040;
        case 0x607044u: goto label_607044;
        case 0x607048u: goto label_607048;
        case 0x60704cu: goto label_60704c;
        case 0x607050u: goto label_607050;
        case 0x607054u: goto label_607054;
        case 0x607058u: goto label_607058;
        case 0x60705cu: goto label_60705c;
        case 0x607060u: goto label_607060;
        case 0x607064u: goto label_607064;
        case 0x607068u: goto label_607068;
        case 0x60706cu: goto label_60706c;
        case 0x607070u: goto label_607070;
        case 0x607074u: goto label_607074;
        case 0x607078u: goto label_607078;
        case 0x60707cu: goto label_60707c;
        case 0x607080u: goto label_607080;
        case 0x607084u: goto label_607084;
        case 0x607088u: goto label_607088;
        case 0x60708cu: goto label_60708c;
        case 0x607090u: goto label_607090;
        case 0x607094u: goto label_607094;
        case 0x607098u: goto label_607098;
        case 0x60709cu: goto label_60709c;
        case 0x6070a0u: goto label_6070a0;
        case 0x6070a4u: goto label_6070a4;
        case 0x6070a8u: goto label_6070a8;
        case 0x6070acu: goto label_6070ac;
        case 0x6070b0u: goto label_6070b0;
        case 0x6070b4u: goto label_6070b4;
        case 0x6070b8u: goto label_6070b8;
        case 0x6070bcu: goto label_6070bc;
        case 0x6070c0u: goto label_6070c0;
        case 0x6070c4u: goto label_6070c4;
        case 0x6070c8u: goto label_6070c8;
        case 0x6070ccu: goto label_6070cc;
        case 0x6070d0u: goto label_6070d0;
        case 0x6070d4u: goto label_6070d4;
        case 0x6070d8u: goto label_6070d8;
        case 0x6070dcu: goto label_6070dc;
        case 0x6070e0u: goto label_6070e0;
        case 0x6070e4u: goto label_6070e4;
        case 0x6070e8u: goto label_6070e8;
        case 0x6070ecu: goto label_6070ec;
        case 0x6070f0u: goto label_6070f0;
        case 0x6070f4u: goto label_6070f4;
        case 0x6070f8u: goto label_6070f8;
        case 0x6070fcu: goto label_6070fc;
        case 0x607100u: goto label_607100;
        case 0x607104u: goto label_607104;
        case 0x607108u: goto label_607108;
        case 0x60710cu: goto label_60710c;
        case 0x607110u: goto label_607110;
        case 0x607114u: goto label_607114;
        case 0x607118u: goto label_607118;
        case 0x60711cu: goto label_60711c;
        case 0x607120u: goto label_607120;
        case 0x607124u: goto label_607124;
        case 0x607128u: goto label_607128;
        case 0x60712cu: goto label_60712c;
        case 0x607130u: goto label_607130;
        case 0x607134u: goto label_607134;
        case 0x607138u: goto label_607138;
        case 0x60713cu: goto label_60713c;
        case 0x607140u: goto label_607140;
        case 0x607144u: goto label_607144;
        case 0x607148u: goto label_607148;
        case 0x60714cu: goto label_60714c;
        case 0x607150u: goto label_607150;
        case 0x607154u: goto label_607154;
        case 0x607158u: goto label_607158;
        case 0x60715cu: goto label_60715c;
        case 0x607160u: goto label_607160;
        case 0x607164u: goto label_607164;
        case 0x607168u: goto label_607168;
        case 0x60716cu: goto label_60716c;
        case 0x607170u: goto label_607170;
        case 0x607174u: goto label_607174;
        case 0x607178u: goto label_607178;
        case 0x60717cu: goto label_60717c;
        case 0x607180u: goto label_607180;
        case 0x607184u: goto label_607184;
        case 0x607188u: goto label_607188;
        case 0x60718cu: goto label_60718c;
        case 0x607190u: goto label_607190;
        case 0x607194u: goto label_607194;
        case 0x607198u: goto label_607198;
        case 0x60719cu: goto label_60719c;
        case 0x6071a0u: goto label_6071a0;
        case 0x6071a4u: goto label_6071a4;
        case 0x6071a8u: goto label_6071a8;
        case 0x6071acu: goto label_6071ac;
        case 0x6071b0u: goto label_6071b0;
        case 0x6071b4u: goto label_6071b4;
        case 0x6071b8u: goto label_6071b8;
        case 0x6071bcu: goto label_6071bc;
        case 0x6071c0u: goto label_6071c0;
        case 0x6071c4u: goto label_6071c4;
        case 0x6071c8u: goto label_6071c8;
        case 0x6071ccu: goto label_6071cc;
        case 0x6071d0u: goto label_6071d0;
        case 0x6071d4u: goto label_6071d4;
        case 0x6071d8u: goto label_6071d8;
        case 0x6071dcu: goto label_6071dc;
        case 0x6071e0u: goto label_6071e0;
        case 0x6071e4u: goto label_6071e4;
        case 0x6071e8u: goto label_6071e8;
        case 0x6071ecu: goto label_6071ec;
        case 0x6071f0u: goto label_6071f0;
        case 0x6071f4u: goto label_6071f4;
        case 0x6071f8u: goto label_6071f8;
        case 0x6071fcu: goto label_6071fc;
        case 0x607200u: goto label_607200;
        case 0x607204u: goto label_607204;
        case 0x607208u: goto label_607208;
        case 0x60720cu: goto label_60720c;
        case 0x607210u: goto label_607210;
        case 0x607214u: goto label_607214;
        case 0x607218u: goto label_607218;
        case 0x60721cu: goto label_60721c;
        case 0x607220u: goto label_607220;
        case 0x607224u: goto label_607224;
        case 0x607228u: goto label_607228;
        case 0x60722cu: goto label_60722c;
        case 0x607230u: goto label_607230;
        case 0x607234u: goto label_607234;
        case 0x607238u: goto label_607238;
        case 0x60723cu: goto label_60723c;
        case 0x607240u: goto label_607240;
        case 0x607244u: goto label_607244;
        case 0x607248u: goto label_607248;
        case 0x60724cu: goto label_60724c;
        case 0x607250u: goto label_607250;
        case 0x607254u: goto label_607254;
        case 0x607258u: goto label_607258;
        case 0x60725cu: goto label_60725c;
        case 0x607260u: goto label_607260;
        case 0x607264u: goto label_607264;
        case 0x607268u: goto label_607268;
        case 0x60726cu: goto label_60726c;
        case 0x607270u: goto label_607270;
        case 0x607274u: goto label_607274;
        case 0x607278u: goto label_607278;
        case 0x60727cu: goto label_60727c;
        case 0x607280u: goto label_607280;
        case 0x607284u: goto label_607284;
        case 0x607288u: goto label_607288;
        case 0x60728cu: goto label_60728c;
        case 0x607290u: goto label_607290;
        case 0x607294u: goto label_607294;
        case 0x607298u: goto label_607298;
        case 0x60729cu: goto label_60729c;
        case 0x6072a0u: goto label_6072a0;
        case 0x6072a4u: goto label_6072a4;
        case 0x6072a8u: goto label_6072a8;
        case 0x6072acu: goto label_6072ac;
        case 0x6072b0u: goto label_6072b0;
        case 0x6072b4u: goto label_6072b4;
        case 0x6072b8u: goto label_6072b8;
        case 0x6072bcu: goto label_6072bc;
        case 0x6072c0u: goto label_6072c0;
        case 0x6072c4u: goto label_6072c4;
        case 0x6072c8u: goto label_6072c8;
        case 0x6072ccu: goto label_6072cc;
        case 0x6072d0u: goto label_6072d0;
        case 0x6072d4u: goto label_6072d4;
        case 0x6072d8u: goto label_6072d8;
        case 0x6072dcu: goto label_6072dc;
        case 0x6072e0u: goto label_6072e0;
        case 0x6072e4u: goto label_6072e4;
        case 0x6072e8u: goto label_6072e8;
        case 0x6072ecu: goto label_6072ec;
        case 0x6072f0u: goto label_6072f0;
        case 0x6072f4u: goto label_6072f4;
        case 0x6072f8u: goto label_6072f8;
        case 0x6072fcu: goto label_6072fc;
        case 0x607300u: goto label_607300;
        case 0x607304u: goto label_607304;
        case 0x607308u: goto label_607308;
        case 0x60730cu: goto label_60730c;
        case 0x607310u: goto label_607310;
        case 0x607314u: goto label_607314;
        case 0x607318u: goto label_607318;
        case 0x60731cu: goto label_60731c;
        case 0x607320u: goto label_607320;
        case 0x607324u: goto label_607324;
        case 0x607328u: goto label_607328;
        case 0x60732cu: goto label_60732c;
        case 0x607330u: goto label_607330;
        case 0x607334u: goto label_607334;
        case 0x607338u: goto label_607338;
        case 0x60733cu: goto label_60733c;
        case 0x607340u: goto label_607340;
        case 0x607344u: goto label_607344;
        case 0x607348u: goto label_607348;
        case 0x60734cu: goto label_60734c;
        case 0x607350u: goto label_607350;
        case 0x607354u: goto label_607354;
        case 0x607358u: goto label_607358;
        case 0x60735cu: goto label_60735c;
        case 0x607360u: goto label_607360;
        case 0x607364u: goto label_607364;
        case 0x607368u: goto label_607368;
        case 0x60736cu: goto label_60736c;
        case 0x607370u: goto label_607370;
        case 0x607374u: goto label_607374;
        case 0x607378u: goto label_607378;
        case 0x60737cu: goto label_60737c;
        case 0x607380u: goto label_607380;
        case 0x607384u: goto label_607384;
        case 0x607388u: goto label_607388;
        case 0x60738cu: goto label_60738c;
        case 0x607390u: goto label_607390;
        case 0x607394u: goto label_607394;
        case 0x607398u: goto label_607398;
        case 0x60739cu: goto label_60739c;
        case 0x6073a0u: goto label_6073a0;
        case 0x6073a4u: goto label_6073a4;
        case 0x6073a8u: goto label_6073a8;
        case 0x6073acu: goto label_6073ac;
        case 0x6073b0u: goto label_6073b0;
        case 0x6073b4u: goto label_6073b4;
        case 0x6073b8u: goto label_6073b8;
        case 0x6073bcu: goto label_6073bc;
        case 0x6073c0u: goto label_6073c0;
        case 0x6073c4u: goto label_6073c4;
        case 0x6073c8u: goto label_6073c8;
        case 0x6073ccu: goto label_6073cc;
        case 0x6073d0u: goto label_6073d0;
        case 0x6073d4u: goto label_6073d4;
        case 0x6073d8u: goto label_6073d8;
        case 0x6073dcu: goto label_6073dc;
        case 0x6073e0u: goto label_6073e0;
        case 0x6073e4u: goto label_6073e4;
        case 0x6073e8u: goto label_6073e8;
        case 0x6073ecu: goto label_6073ec;
        case 0x6073f0u: goto label_6073f0;
        case 0x6073f4u: goto label_6073f4;
        case 0x6073f8u: goto label_6073f8;
        case 0x6073fcu: goto label_6073fc;
        case 0x607400u: goto label_607400;
        case 0x607404u: goto label_607404;
        case 0x607408u: goto label_607408;
        case 0x60740cu: goto label_60740c;
        case 0x607410u: goto label_607410;
        case 0x607414u: goto label_607414;
        case 0x607418u: goto label_607418;
        case 0x60741cu: goto label_60741c;
        case 0x607420u: goto label_607420;
        case 0x607424u: goto label_607424;
        case 0x607428u: goto label_607428;
        case 0x60742cu: goto label_60742c;
        case 0x607430u: goto label_607430;
        case 0x607434u: goto label_607434;
        case 0x607438u: goto label_607438;
        case 0x60743cu: goto label_60743c;
        case 0x607440u: goto label_607440;
        case 0x607444u: goto label_607444;
        case 0x607448u: goto label_607448;
        case 0x60744cu: goto label_60744c;
        case 0x607450u: goto label_607450;
        case 0x607454u: goto label_607454;
        case 0x607458u: goto label_607458;
        case 0x60745cu: goto label_60745c;
        case 0x607460u: goto label_607460;
        case 0x607464u: goto label_607464;
        case 0x607468u: goto label_607468;
        case 0x60746cu: goto label_60746c;
        case 0x607470u: goto label_607470;
        case 0x607474u: goto label_607474;
        case 0x607478u: goto label_607478;
        case 0x60747cu: goto label_60747c;
        case 0x607480u: goto label_607480;
        case 0x607484u: goto label_607484;
        case 0x607488u: goto label_607488;
        case 0x60748cu: goto label_60748c;
        case 0x607490u: goto label_607490;
        case 0x607494u: goto label_607494;
        case 0x607498u: goto label_607498;
        case 0x60749cu: goto label_60749c;
        case 0x6074a0u: goto label_6074a0;
        case 0x6074a4u: goto label_6074a4;
        case 0x6074a8u: goto label_6074a8;
        case 0x6074acu: goto label_6074ac;
        case 0x6074b0u: goto label_6074b0;
        case 0x6074b4u: goto label_6074b4;
        case 0x6074b8u: goto label_6074b8;
        case 0x6074bcu: goto label_6074bc;
        case 0x6074c0u: goto label_6074c0;
        case 0x6074c4u: goto label_6074c4;
        case 0x6074c8u: goto label_6074c8;
        case 0x6074ccu: goto label_6074cc;
        case 0x6074d0u: goto label_6074d0;
        case 0x6074d4u: goto label_6074d4;
        case 0x6074d8u: goto label_6074d8;
        case 0x6074dcu: goto label_6074dc;
        case 0x6074e0u: goto label_6074e0;
        case 0x6074e4u: goto label_6074e4;
        case 0x6074e8u: goto label_6074e8;
        case 0x6074ecu: goto label_6074ec;
        case 0x6074f0u: goto label_6074f0;
        case 0x6074f4u: goto label_6074f4;
        case 0x6074f8u: goto label_6074f8;
        case 0x6074fcu: goto label_6074fc;
        case 0x607500u: goto label_607500;
        case 0x607504u: goto label_607504;
        case 0x607508u: goto label_607508;
        case 0x60750cu: goto label_60750c;
        case 0x607510u: goto label_607510;
        case 0x607514u: goto label_607514;
        case 0x607518u: goto label_607518;
        case 0x60751cu: goto label_60751c;
        case 0x607520u: goto label_607520;
        case 0x607524u: goto label_607524;
        case 0x607528u: goto label_607528;
        case 0x60752cu: goto label_60752c;
        case 0x607530u: goto label_607530;
        case 0x607534u: goto label_607534;
        case 0x607538u: goto label_607538;
        case 0x60753cu: goto label_60753c;
        case 0x607540u: goto label_607540;
        case 0x607544u: goto label_607544;
        case 0x607548u: goto label_607548;
        case 0x60754cu: goto label_60754c;
        case 0x607550u: goto label_607550;
        case 0x607554u: goto label_607554;
        case 0x607558u: goto label_607558;
        case 0x60755cu: goto label_60755c;
        case 0x607560u: goto label_607560;
        case 0x607564u: goto label_607564;
        case 0x607568u: goto label_607568;
        case 0x60756cu: goto label_60756c;
        case 0x607570u: goto label_607570;
        case 0x607574u: goto label_607574;
        case 0x607578u: goto label_607578;
        case 0x60757cu: goto label_60757c;
        case 0x607580u: goto label_607580;
        case 0x607584u: goto label_607584;
        case 0x607588u: goto label_607588;
        case 0x60758cu: goto label_60758c;
        case 0x607590u: goto label_607590;
        case 0x607594u: goto label_607594;
        case 0x607598u: goto label_607598;
        case 0x60759cu: goto label_60759c;
        case 0x6075a0u: goto label_6075a0;
        case 0x6075a4u: goto label_6075a4;
        case 0x6075a8u: goto label_6075a8;
        case 0x6075acu: goto label_6075ac;
        case 0x6075b0u: goto label_6075b0;
        case 0x6075b4u: goto label_6075b4;
        case 0x6075b8u: goto label_6075b8;
        case 0x6075bcu: goto label_6075bc;
        case 0x6075c0u: goto label_6075c0;
        case 0x6075c4u: goto label_6075c4;
        case 0x6075c8u: goto label_6075c8;
        case 0x6075ccu: goto label_6075cc;
        case 0x6075d0u: goto label_6075d0;
        case 0x6075d4u: goto label_6075d4;
        case 0x6075d8u: goto label_6075d8;
        case 0x6075dcu: goto label_6075dc;
        case 0x6075e0u: goto label_6075e0;
        case 0x6075e4u: goto label_6075e4;
        case 0x6075e8u: goto label_6075e8;
        case 0x6075ecu: goto label_6075ec;
        case 0x6075f0u: goto label_6075f0;
        case 0x6075f4u: goto label_6075f4;
        case 0x6075f8u: goto label_6075f8;
        case 0x6075fcu: goto label_6075fc;
        case 0x607600u: goto label_607600;
        case 0x607604u: goto label_607604;
        case 0x607608u: goto label_607608;
        case 0x60760cu: goto label_60760c;
        case 0x607610u: goto label_607610;
        case 0x607614u: goto label_607614;
        case 0x607618u: goto label_607618;
        case 0x60761cu: goto label_60761c;
        case 0x607620u: goto label_607620;
        case 0x607624u: goto label_607624;
        case 0x607628u: goto label_607628;
        case 0x60762cu: goto label_60762c;
        case 0x607630u: goto label_607630;
        case 0x607634u: goto label_607634;
        case 0x607638u: goto label_607638;
        case 0x60763cu: goto label_60763c;
        case 0x607640u: goto label_607640;
        case 0x607644u: goto label_607644;
        case 0x607648u: goto label_607648;
        case 0x60764cu: goto label_60764c;
        case 0x607650u: goto label_607650;
        case 0x607654u: goto label_607654;
        case 0x607658u: goto label_607658;
        case 0x60765cu: goto label_60765c;
        case 0x607660u: goto label_607660;
        case 0x607664u: goto label_607664;
        case 0x607668u: goto label_607668;
        case 0x60766cu: goto label_60766c;
        case 0x607670u: goto label_607670;
        case 0x607674u: goto label_607674;
        case 0x607678u: goto label_607678;
        case 0x60767cu: goto label_60767c;
        case 0x607680u: goto label_607680;
        case 0x607684u: goto label_607684;
        case 0x607688u: goto label_607688;
        case 0x60768cu: goto label_60768c;
        case 0x607690u: goto label_607690;
        case 0x607694u: goto label_607694;
        case 0x607698u: goto label_607698;
        case 0x60769cu: goto label_60769c;
        case 0x6076a0u: goto label_6076a0;
        case 0x6076a4u: goto label_6076a4;
        case 0x6076a8u: goto label_6076a8;
        case 0x6076acu: goto label_6076ac;
        case 0x6076b0u: goto label_6076b0;
        case 0x6076b4u: goto label_6076b4;
        case 0x6076b8u: goto label_6076b8;
        case 0x6076bcu: goto label_6076bc;
        case 0x6076c0u: goto label_6076c0;
        case 0x6076c4u: goto label_6076c4;
        case 0x6076c8u: goto label_6076c8;
        case 0x6076ccu: goto label_6076cc;
        case 0x6076d0u: goto label_6076d0;
        case 0x6076d4u: goto label_6076d4;
        case 0x6076d8u: goto label_6076d8;
        case 0x6076dcu: goto label_6076dc;
        case 0x6076e0u: goto label_6076e0;
        case 0x6076e4u: goto label_6076e4;
        case 0x6076e8u: goto label_6076e8;
        case 0x6076ecu: goto label_6076ec;
        case 0x6076f0u: goto label_6076f0;
        case 0x6076f4u: goto label_6076f4;
        case 0x6076f8u: goto label_6076f8;
        case 0x6076fcu: goto label_6076fc;
        case 0x607700u: goto label_607700;
        case 0x607704u: goto label_607704;
        case 0x607708u: goto label_607708;
        case 0x60770cu: goto label_60770c;
        case 0x607710u: goto label_607710;
        case 0x607714u: goto label_607714;
        case 0x607718u: goto label_607718;
        case 0x60771cu: goto label_60771c;
        case 0x607720u: goto label_607720;
        case 0x607724u: goto label_607724;
        case 0x607728u: goto label_607728;
        case 0x60772cu: goto label_60772c;
        case 0x607730u: goto label_607730;
        case 0x607734u: goto label_607734;
        case 0x607738u: goto label_607738;
        case 0x60773cu: goto label_60773c;
        case 0x607740u: goto label_607740;
        case 0x607744u: goto label_607744;
        case 0x607748u: goto label_607748;
        case 0x60774cu: goto label_60774c;
        case 0x607750u: goto label_607750;
        case 0x607754u: goto label_607754;
        case 0x607758u: goto label_607758;
        case 0x60775cu: goto label_60775c;
        case 0x607760u: goto label_607760;
        case 0x607764u: goto label_607764;
        case 0x607768u: goto label_607768;
        case 0x60776cu: goto label_60776c;
        case 0x607770u: goto label_607770;
        case 0x607774u: goto label_607774;
        case 0x607778u: goto label_607778;
        case 0x60777cu: goto label_60777c;
        case 0x607780u: goto label_607780;
        case 0x607784u: goto label_607784;
        case 0x607788u: goto label_607788;
        case 0x60778cu: goto label_60778c;
        case 0x607790u: goto label_607790;
        case 0x607794u: goto label_607794;
        case 0x607798u: goto label_607798;
        case 0x60779cu: goto label_60779c;
        case 0x6077a0u: goto label_6077a0;
        case 0x6077a4u: goto label_6077a4;
        case 0x6077a8u: goto label_6077a8;
        case 0x6077acu: goto label_6077ac;
        case 0x6077b0u: goto label_6077b0;
        case 0x6077b4u: goto label_6077b4;
        case 0x6077b8u: goto label_6077b8;
        case 0x6077bcu: goto label_6077bc;
        case 0x6077c0u: goto label_6077c0;
        case 0x6077c4u: goto label_6077c4;
        case 0x6077c8u: goto label_6077c8;
        case 0x6077ccu: goto label_6077cc;
        case 0x6077d0u: goto label_6077d0;
        case 0x6077d4u: goto label_6077d4;
        case 0x6077d8u: goto label_6077d8;
        case 0x6077dcu: goto label_6077dc;
        case 0x6077e0u: goto label_6077e0;
        case 0x6077e4u: goto label_6077e4;
        case 0x6077e8u: goto label_6077e8;
        case 0x6077ecu: goto label_6077ec;
        case 0x6077f0u: goto label_6077f0;
        case 0x6077f4u: goto label_6077f4;
        case 0x6077f8u: goto label_6077f8;
        case 0x6077fcu: goto label_6077fc;
        case 0x607800u: goto label_607800;
        case 0x607804u: goto label_607804;
        case 0x607808u: goto label_607808;
        case 0x60780cu: goto label_60780c;
        case 0x607810u: goto label_607810;
        case 0x607814u: goto label_607814;
        case 0x607818u: goto label_607818;
        case 0x60781cu: goto label_60781c;
        case 0x607820u: goto label_607820;
        case 0x607824u: goto label_607824;
        case 0x607828u: goto label_607828;
        case 0x60782cu: goto label_60782c;
        case 0x607830u: goto label_607830;
        case 0x607834u: goto label_607834;
        case 0x607838u: goto label_607838;
        case 0x60783cu: goto label_60783c;
        case 0x607840u: goto label_607840;
        case 0x607844u: goto label_607844;
        case 0x607848u: goto label_607848;
        case 0x60784cu: goto label_60784c;
        case 0x607850u: goto label_607850;
        case 0x607854u: goto label_607854;
        case 0x607858u: goto label_607858;
        case 0x60785cu: goto label_60785c;
        case 0x607860u: goto label_607860;
        case 0x607864u: goto label_607864;
        case 0x607868u: goto label_607868;
        case 0x60786cu: goto label_60786c;
        case 0x607870u: goto label_607870;
        case 0x607874u: goto label_607874;
        case 0x607878u: goto label_607878;
        case 0x60787cu: goto label_60787c;
        case 0x607880u: goto label_607880;
        case 0x607884u: goto label_607884;
        case 0x607888u: goto label_607888;
        case 0x60788cu: goto label_60788c;
        case 0x607890u: goto label_607890;
        case 0x607894u: goto label_607894;
        case 0x607898u: goto label_607898;
        case 0x60789cu: goto label_60789c;
        case 0x6078a0u: goto label_6078a0;
        case 0x6078a4u: goto label_6078a4;
        case 0x6078a8u: goto label_6078a8;
        case 0x6078acu: goto label_6078ac;
        case 0x6078b0u: goto label_6078b0;
        case 0x6078b4u: goto label_6078b4;
        case 0x6078b8u: goto label_6078b8;
        case 0x6078bcu: goto label_6078bc;
        case 0x6078c0u: goto label_6078c0;
        case 0x6078c4u: goto label_6078c4;
        case 0x6078c8u: goto label_6078c8;
        case 0x6078ccu: goto label_6078cc;
        case 0x6078d0u: goto label_6078d0;
        case 0x6078d4u: goto label_6078d4;
        case 0x6078d8u: goto label_6078d8;
        case 0x6078dcu: goto label_6078dc;
        case 0x6078e0u: goto label_6078e0;
        case 0x6078e4u: goto label_6078e4;
        case 0x6078e8u: goto label_6078e8;
        case 0x6078ecu: goto label_6078ec;
        case 0x6078f0u: goto label_6078f0;
        case 0x6078f4u: goto label_6078f4;
        case 0x6078f8u: goto label_6078f8;
        case 0x6078fcu: goto label_6078fc;
        case 0x607900u: goto label_607900;
        case 0x607904u: goto label_607904;
        case 0x607908u: goto label_607908;
        case 0x60790cu: goto label_60790c;
        case 0x607910u: goto label_607910;
        case 0x607914u: goto label_607914;
        case 0x607918u: goto label_607918;
        case 0x60791cu: goto label_60791c;
        case 0x607920u: goto label_607920;
        case 0x607924u: goto label_607924;
        case 0x607928u: goto label_607928;
        case 0x60792cu: goto label_60792c;
        case 0x607930u: goto label_607930;
        case 0x607934u: goto label_607934;
        case 0x607938u: goto label_607938;
        case 0x60793cu: goto label_60793c;
        case 0x607940u: goto label_607940;
        case 0x607944u: goto label_607944;
        case 0x607948u: goto label_607948;
        case 0x60794cu: goto label_60794c;
        case 0x607950u: goto label_607950;
        case 0x607954u: goto label_607954;
        case 0x607958u: goto label_607958;
        case 0x60795cu: goto label_60795c;
        case 0x607960u: goto label_607960;
        case 0x607964u: goto label_607964;
        case 0x607968u: goto label_607968;
        case 0x60796cu: goto label_60796c;
        case 0x607970u: goto label_607970;
        case 0x607974u: goto label_607974;
        case 0x607978u: goto label_607978;
        case 0x60797cu: goto label_60797c;
        case 0x607980u: goto label_607980;
        case 0x607984u: goto label_607984;
        case 0x607988u: goto label_607988;
        case 0x60798cu: goto label_60798c;
        case 0x607990u: goto label_607990;
        case 0x607994u: goto label_607994;
        case 0x607998u: goto label_607998;
        case 0x60799cu: goto label_60799c;
        case 0x6079a0u: goto label_6079a0;
        case 0x6079a4u: goto label_6079a4;
        case 0x6079a8u: goto label_6079a8;
        case 0x6079acu: goto label_6079ac;
        case 0x6079b0u: goto label_6079b0;
        case 0x6079b4u: goto label_6079b4;
        case 0x6079b8u: goto label_6079b8;
        case 0x6079bcu: goto label_6079bc;
        case 0x6079c0u: goto label_6079c0;
        case 0x6079c4u: goto label_6079c4;
        case 0x6079c8u: goto label_6079c8;
        case 0x6079ccu: goto label_6079cc;
        case 0x6079d0u: goto label_6079d0;
        case 0x6079d4u: goto label_6079d4;
        case 0x6079d8u: goto label_6079d8;
        case 0x6079dcu: goto label_6079dc;
        case 0x6079e0u: goto label_6079e0;
        case 0x6079e4u: goto label_6079e4;
        case 0x6079e8u: goto label_6079e8;
        case 0x6079ecu: goto label_6079ec;
        case 0x6079f0u: goto label_6079f0;
        case 0x6079f4u: goto label_6079f4;
        case 0x6079f8u: goto label_6079f8;
        case 0x6079fcu: goto label_6079fc;
        case 0x607a00u: goto label_607a00;
        case 0x607a04u: goto label_607a04;
        case 0x607a08u: goto label_607a08;
        case 0x607a0cu: goto label_607a0c;
        case 0x607a10u: goto label_607a10;
        case 0x607a14u: goto label_607a14;
        case 0x607a18u: goto label_607a18;
        case 0x607a1cu: goto label_607a1c;
        case 0x607a20u: goto label_607a20;
        case 0x607a24u: goto label_607a24;
        case 0x607a28u: goto label_607a28;
        case 0x607a2cu: goto label_607a2c;
        case 0x607a30u: goto label_607a30;
        case 0x607a34u: goto label_607a34;
        case 0x607a38u: goto label_607a38;
        case 0x607a3cu: goto label_607a3c;
        case 0x607a40u: goto label_607a40;
        case 0x607a44u: goto label_607a44;
        case 0x607a48u: goto label_607a48;
        case 0x607a4cu: goto label_607a4c;
        case 0x607a50u: goto label_607a50;
        case 0x607a54u: goto label_607a54;
        case 0x607a58u: goto label_607a58;
        case 0x607a5cu: goto label_607a5c;
        case 0x607a60u: goto label_607a60;
        case 0x607a64u: goto label_607a64;
        case 0x607a68u: goto label_607a68;
        case 0x607a6cu: goto label_607a6c;
        case 0x607a70u: goto label_607a70;
        case 0x607a74u: goto label_607a74;
        case 0x607a78u: goto label_607a78;
        case 0x607a7cu: goto label_607a7c;
        case 0x607a80u: goto label_607a80;
        case 0x607a84u: goto label_607a84;
        case 0x607a88u: goto label_607a88;
        case 0x607a8cu: goto label_607a8c;
        case 0x607a90u: goto label_607a90;
        case 0x607a94u: goto label_607a94;
        case 0x607a98u: goto label_607a98;
        case 0x607a9cu: goto label_607a9c;
        case 0x607aa0u: goto label_607aa0;
        case 0x607aa4u: goto label_607aa4;
        case 0x607aa8u: goto label_607aa8;
        case 0x607aacu: goto label_607aac;
        case 0x607ab0u: goto label_607ab0;
        case 0x607ab4u: goto label_607ab4;
        case 0x607ab8u: goto label_607ab8;
        case 0x607abcu: goto label_607abc;
        case 0x607ac0u: goto label_607ac0;
        case 0x607ac4u: goto label_607ac4;
        case 0x607ac8u: goto label_607ac8;
        case 0x607accu: goto label_607acc;
        case 0x607ad0u: goto label_607ad0;
        case 0x607ad4u: goto label_607ad4;
        case 0x607ad8u: goto label_607ad8;
        case 0x607adcu: goto label_607adc;
        case 0x607ae0u: goto label_607ae0;
        case 0x607ae4u: goto label_607ae4;
        case 0x607ae8u: goto label_607ae8;
        case 0x607aecu: goto label_607aec;
        case 0x607af0u: goto label_607af0;
        case 0x607af4u: goto label_607af4;
        case 0x607af8u: goto label_607af8;
        case 0x607afcu: goto label_607afc;
        case 0x607b00u: goto label_607b00;
        case 0x607b04u: goto label_607b04;
        case 0x607b08u: goto label_607b08;
        case 0x607b0cu: goto label_607b0c;
        case 0x607b10u: goto label_607b10;
        case 0x607b14u: goto label_607b14;
        case 0x607b18u: goto label_607b18;
        case 0x607b1cu: goto label_607b1c;
        case 0x607b20u: goto label_607b20;
        case 0x607b24u: goto label_607b24;
        case 0x607b28u: goto label_607b28;
        case 0x607b2cu: goto label_607b2c;
        case 0x607b30u: goto label_607b30;
        case 0x607b34u: goto label_607b34;
        case 0x607b38u: goto label_607b38;
        case 0x607b3cu: goto label_607b3c;
        case 0x607b40u: goto label_607b40;
        case 0x607b44u: goto label_607b44;
        case 0x607b48u: goto label_607b48;
        case 0x607b4cu: goto label_607b4c;
        case 0x607b50u: goto label_607b50;
        case 0x607b54u: goto label_607b54;
        case 0x607b58u: goto label_607b58;
        case 0x607b5cu: goto label_607b5c;
        case 0x607b60u: goto label_607b60;
        case 0x607b64u: goto label_607b64;
        case 0x607b68u: goto label_607b68;
        case 0x607b6cu: goto label_607b6c;
        case 0x607b70u: goto label_607b70;
        case 0x607b74u: goto label_607b74;
        case 0x607b78u: goto label_607b78;
        case 0x607b7cu: goto label_607b7c;
        case 0x607b80u: goto label_607b80;
        case 0x607b84u: goto label_607b84;
        case 0x607b88u: goto label_607b88;
        case 0x607b8cu: goto label_607b8c;
        case 0x607b90u: goto label_607b90;
        case 0x607b94u: goto label_607b94;
        case 0x607b98u: goto label_607b98;
        case 0x607b9cu: goto label_607b9c;
        case 0x607ba0u: goto label_607ba0;
        case 0x607ba4u: goto label_607ba4;
        case 0x607ba8u: goto label_607ba8;
        case 0x607bacu: goto label_607bac;
        case 0x607bb0u: goto label_607bb0;
        case 0x607bb4u: goto label_607bb4;
        case 0x607bb8u: goto label_607bb8;
        case 0x607bbcu: goto label_607bbc;
        case 0x607bc0u: goto label_607bc0;
        case 0x607bc4u: goto label_607bc4;
        case 0x607bc8u: goto label_607bc8;
        case 0x607bccu: goto label_607bcc;
        case 0x607bd0u: goto label_607bd0;
        case 0x607bd4u: goto label_607bd4;
        case 0x607bd8u: goto label_607bd8;
        case 0x607bdcu: goto label_607bdc;
        case 0x607be0u: goto label_607be0;
        case 0x607be4u: goto label_607be4;
        case 0x607be8u: goto label_607be8;
        case 0x607becu: goto label_607bec;
        case 0x607bf0u: goto label_607bf0;
        case 0x607bf4u: goto label_607bf4;
        case 0x607bf8u: goto label_607bf8;
        case 0x607bfcu: goto label_607bfc;
        case 0x607c00u: goto label_607c00;
        case 0x607c04u: goto label_607c04;
        case 0x607c08u: goto label_607c08;
        case 0x607c0cu: goto label_607c0c;
        case 0x607c10u: goto label_607c10;
        case 0x607c14u: goto label_607c14;
        case 0x607c18u: goto label_607c18;
        case 0x607c1cu: goto label_607c1c;
        case 0x607c20u: goto label_607c20;
        case 0x607c24u: goto label_607c24;
        case 0x607c28u: goto label_607c28;
        case 0x607c2cu: goto label_607c2c;
        case 0x607c30u: goto label_607c30;
        case 0x607c34u: goto label_607c34;
        case 0x607c38u: goto label_607c38;
        case 0x607c3cu: goto label_607c3c;
        case 0x607c40u: goto label_607c40;
        case 0x607c44u: goto label_607c44;
        case 0x607c48u: goto label_607c48;
        case 0x607c4cu: goto label_607c4c;
        case 0x607c50u: goto label_607c50;
        case 0x607c54u: goto label_607c54;
        case 0x607c58u: goto label_607c58;
        case 0x607c5cu: goto label_607c5c;
        case 0x607c60u: goto label_607c60;
        case 0x607c64u: goto label_607c64;
        case 0x607c68u: goto label_607c68;
        case 0x607c6cu: goto label_607c6c;
        case 0x607c70u: goto label_607c70;
        case 0x607c74u: goto label_607c74;
        case 0x607c78u: goto label_607c78;
        case 0x607c7cu: goto label_607c7c;
        case 0x607c80u: goto label_607c80;
        case 0x607c84u: goto label_607c84;
        case 0x607c88u: goto label_607c88;
        case 0x607c8cu: goto label_607c8c;
        case 0x607c90u: goto label_607c90;
        case 0x607c94u: goto label_607c94;
        case 0x607c98u: goto label_607c98;
        case 0x607c9cu: goto label_607c9c;
        case 0x607ca0u: goto label_607ca0;
        case 0x607ca4u: goto label_607ca4;
        case 0x607ca8u: goto label_607ca8;
        case 0x607cacu: goto label_607cac;
        case 0x607cb0u: goto label_607cb0;
        case 0x607cb4u: goto label_607cb4;
        case 0x607cb8u: goto label_607cb8;
        case 0x607cbcu: goto label_607cbc;
        case 0x607cc0u: goto label_607cc0;
        case 0x607cc4u: goto label_607cc4;
        case 0x607cc8u: goto label_607cc8;
        case 0x607cccu: goto label_607ccc;
        case 0x607cd0u: goto label_607cd0;
        case 0x607cd4u: goto label_607cd4;
        case 0x607cd8u: goto label_607cd8;
        case 0x607cdcu: goto label_607cdc;
        case 0x607ce0u: goto label_607ce0;
        case 0x607ce4u: goto label_607ce4;
        case 0x607ce8u: goto label_607ce8;
        case 0x607cecu: goto label_607cec;
        case 0x607cf0u: goto label_607cf0;
        case 0x607cf4u: goto label_607cf4;
        case 0x607cf8u: goto label_607cf8;
        case 0x607cfcu: goto label_607cfc;
        case 0x607d00u: goto label_607d00;
        case 0x607d04u: goto label_607d04;
        case 0x607d08u: goto label_607d08;
        case 0x607d0cu: goto label_607d0c;
        case 0x607d10u: goto label_607d10;
        case 0x607d14u: goto label_607d14;
        case 0x607d18u: goto label_607d18;
        case 0x607d1cu: goto label_607d1c;
        case 0x607d20u: goto label_607d20;
        case 0x607d24u: goto label_607d24;
        case 0x607d28u: goto label_607d28;
        case 0x607d2cu: goto label_607d2c;
        case 0x607d30u: goto label_607d30;
        case 0x607d34u: goto label_607d34;
        case 0x607d38u: goto label_607d38;
        case 0x607d3cu: goto label_607d3c;
        case 0x607d40u: goto label_607d40;
        case 0x607d44u: goto label_607d44;
        case 0x607d48u: goto label_607d48;
        case 0x607d4cu: goto label_607d4c;
        case 0x607d50u: goto label_607d50;
        case 0x607d54u: goto label_607d54;
        case 0x607d58u: goto label_607d58;
        case 0x607d5cu: goto label_607d5c;
        case 0x607d60u: goto label_607d60;
        case 0x607d64u: goto label_607d64;
        case 0x607d68u: goto label_607d68;
        case 0x607d6cu: goto label_607d6c;
        case 0x607d70u: goto label_607d70;
        case 0x607d74u: goto label_607d74;
        case 0x607d78u: goto label_607d78;
        case 0x607d7cu: goto label_607d7c;
        case 0x607d80u: goto label_607d80;
        case 0x607d84u: goto label_607d84;
        case 0x607d88u: goto label_607d88;
        case 0x607d8cu: goto label_607d8c;
        case 0x607d90u: goto label_607d90;
        case 0x607d94u: goto label_607d94;
        case 0x607d98u: goto label_607d98;
        case 0x607d9cu: goto label_607d9c;
        case 0x607da0u: goto label_607da0;
        case 0x607da4u: goto label_607da4;
        case 0x607da8u: goto label_607da8;
        case 0x607dacu: goto label_607dac;
        case 0x607db0u: goto label_607db0;
        case 0x607db4u: goto label_607db4;
        case 0x607db8u: goto label_607db8;
        case 0x607dbcu: goto label_607dbc;
        case 0x607dc0u: goto label_607dc0;
        case 0x607dc4u: goto label_607dc4;
        case 0x607dc8u: goto label_607dc8;
        case 0x607dccu: goto label_607dcc;
        case 0x607dd0u: goto label_607dd0;
        case 0x607dd4u: goto label_607dd4;
        case 0x607dd8u: goto label_607dd8;
        case 0x607ddcu: goto label_607ddc;
        case 0x607de0u: goto label_607de0;
        case 0x607de4u: goto label_607de4;
        case 0x607de8u: goto label_607de8;
        case 0x607decu: goto label_607dec;
        case 0x607df0u: goto label_607df0;
        case 0x607df4u: goto label_607df4;
        case 0x607df8u: goto label_607df8;
        case 0x607dfcu: goto label_607dfc;
        case 0x607e00u: goto label_607e00;
        case 0x607e04u: goto label_607e04;
        case 0x607e08u: goto label_607e08;
        case 0x607e0cu: goto label_607e0c;
        case 0x607e10u: goto label_607e10;
        case 0x607e14u: goto label_607e14;
        case 0x607e18u: goto label_607e18;
        case 0x607e1cu: goto label_607e1c;
        case 0x607e20u: goto label_607e20;
        case 0x607e24u: goto label_607e24;
        case 0x607e28u: goto label_607e28;
        case 0x607e2cu: goto label_607e2c;
        case 0x607e30u: goto label_607e30;
        case 0x607e34u: goto label_607e34;
        case 0x607e38u: goto label_607e38;
        case 0x607e3cu: goto label_607e3c;
        case 0x607e40u: goto label_607e40;
        case 0x607e44u: goto label_607e44;
        case 0x607e48u: goto label_607e48;
        case 0x607e4cu: goto label_607e4c;
        case 0x607e50u: goto label_607e50;
        case 0x607e54u: goto label_607e54;
        case 0x607e58u: goto label_607e58;
        case 0x607e5cu: goto label_607e5c;
        case 0x607e60u: goto label_607e60;
        case 0x607e64u: goto label_607e64;
        case 0x607e68u: goto label_607e68;
        case 0x607e6cu: goto label_607e6c;
        case 0x607e70u: goto label_607e70;
        case 0x607e74u: goto label_607e74;
        case 0x607e78u: goto label_607e78;
        case 0x607e7cu: goto label_607e7c;
        case 0x607e80u: goto label_607e80;
        case 0x607e84u: goto label_607e84;
        case 0x607e88u: goto label_607e88;
        case 0x607e8cu: goto label_607e8c;
        case 0x607e90u: goto label_607e90;
        case 0x607e94u: goto label_607e94;
        case 0x607e98u: goto label_607e98;
        case 0x607e9cu: goto label_607e9c;
        case 0x607ea0u: goto label_607ea0;
        case 0x607ea4u: goto label_607ea4;
        case 0x607ea8u: goto label_607ea8;
        case 0x607eacu: goto label_607eac;
        case 0x607eb0u: goto label_607eb0;
        case 0x607eb4u: goto label_607eb4;
        case 0x607eb8u: goto label_607eb8;
        case 0x607ebcu: goto label_607ebc;
        case 0x607ec0u: goto label_607ec0;
        case 0x607ec4u: goto label_607ec4;
        case 0x607ec8u: goto label_607ec8;
        case 0x607eccu: goto label_607ecc;
        case 0x607ed0u: goto label_607ed0;
        case 0x607ed4u: goto label_607ed4;
        case 0x607ed8u: goto label_607ed8;
        case 0x607edcu: goto label_607edc;
        case 0x607ee0u: goto label_607ee0;
        case 0x607ee4u: goto label_607ee4;
        case 0x607ee8u: goto label_607ee8;
        case 0x607eecu: goto label_607eec;
        case 0x607ef0u: goto label_607ef0;
        case 0x607ef4u: goto label_607ef4;
        case 0x607ef8u: goto label_607ef8;
        case 0x607efcu: goto label_607efc;
        case 0x607f00u: goto label_607f00;
        case 0x607f04u: goto label_607f04;
        case 0x607f08u: goto label_607f08;
        case 0x607f0cu: goto label_607f0c;
        case 0x607f10u: goto label_607f10;
        case 0x607f14u: goto label_607f14;
        case 0x607f18u: goto label_607f18;
        case 0x607f1cu: goto label_607f1c;
        case 0x607f20u: goto label_607f20;
        case 0x607f24u: goto label_607f24;
        case 0x607f28u: goto label_607f28;
        case 0x607f2cu: goto label_607f2c;
        case 0x607f30u: goto label_607f30;
        case 0x607f34u: goto label_607f34;
        case 0x607f38u: goto label_607f38;
        case 0x607f3cu: goto label_607f3c;
        case 0x607f40u: goto label_607f40;
        case 0x607f44u: goto label_607f44;
        case 0x607f48u: goto label_607f48;
        case 0x607f4cu: goto label_607f4c;
        case 0x607f50u: goto label_607f50;
        case 0x607f54u: goto label_607f54;
        case 0x607f58u: goto label_607f58;
        case 0x607f5cu: goto label_607f5c;
        case 0x607f60u: goto label_607f60;
        case 0x607f64u: goto label_607f64;
        case 0x607f68u: goto label_607f68;
        case 0x607f6cu: goto label_607f6c;
        case 0x607f70u: goto label_607f70;
        case 0x607f74u: goto label_607f74;
        case 0x607f78u: goto label_607f78;
        case 0x607f7cu: goto label_607f7c;
        case 0x607f80u: goto label_607f80;
        case 0x607f84u: goto label_607f84;
        case 0x607f88u: goto label_607f88;
        case 0x607f8cu: goto label_607f8c;
        case 0x607f90u: goto label_607f90;
        case 0x607f94u: goto label_607f94;
        case 0x607f98u: goto label_607f98;
        case 0x607f9cu: goto label_607f9c;
        case 0x607fa0u: goto label_607fa0;
        case 0x607fa4u: goto label_607fa4;
        case 0x607fa8u: goto label_607fa8;
        case 0x607facu: goto label_607fac;
        case 0x607fb0u: goto label_607fb0;
        case 0x607fb4u: goto label_607fb4;
        case 0x607fb8u: goto label_607fb8;
        case 0x607fbcu: goto label_607fbc;
        case 0x607fc0u: goto label_607fc0;
        case 0x607fc4u: goto label_607fc4;
        case 0x607fc8u: goto label_607fc8;
        case 0x607fccu: goto label_607fcc;
        case 0x607fd0u: goto label_607fd0;
        case 0x607fd4u: goto label_607fd4;
        case 0x607fd8u: goto label_607fd8;
        case 0x607fdcu: goto label_607fdc;
        case 0x607fe0u: goto label_607fe0;
        case 0x607fe4u: goto label_607fe4;
        case 0x607fe8u: goto label_607fe8;
        case 0x607fecu: goto label_607fec;
        case 0x607ff0u: goto label_607ff0;
        case 0x607ff4u: goto label_607ff4;
        case 0x607ff8u: goto label_607ff8;
        case 0x607ffcu: goto label_607ffc;
        case 0x608000u: goto label_608000;
        case 0x608004u: goto label_608004;
        case 0x608008u: goto label_608008;
        case 0x60800cu: goto label_60800c;
        case 0x608010u: goto label_608010;
        case 0x608014u: goto label_608014;
        case 0x608018u: goto label_608018;
        case 0x60801cu: goto label_60801c;
        case 0x608020u: goto label_608020;
        case 0x608024u: goto label_608024;
        case 0x608028u: goto label_608028;
        case 0x60802cu: goto label_60802c;
        case 0x608030u: goto label_608030;
        case 0x608034u: goto label_608034;
        case 0x608038u: goto label_608038;
        case 0x60803cu: goto label_60803c;
        case 0x608040u: goto label_608040;
        case 0x608044u: goto label_608044;
        case 0x608048u: goto label_608048;
        case 0x60804cu: goto label_60804c;
        case 0x608050u: goto label_608050;
        case 0x608054u: goto label_608054;
        case 0x608058u: goto label_608058;
        case 0x60805cu: goto label_60805c;
        case 0x608060u: goto label_608060;
        case 0x608064u: goto label_608064;
        case 0x608068u: goto label_608068;
        case 0x60806cu: goto label_60806c;
        case 0x608070u: goto label_608070;
        case 0x608074u: goto label_608074;
        case 0x608078u: goto label_608078;
        case 0x60807cu: goto label_60807c;
        case 0x608080u: goto label_608080;
        case 0x608084u: goto label_608084;
        case 0x608088u: goto label_608088;
        case 0x60808cu: goto label_60808c;
        case 0x608090u: goto label_608090;
        case 0x608094u: goto label_608094;
        case 0x608098u: goto label_608098;
        case 0x60809cu: goto label_60809c;
        case 0x6080a0u: goto label_6080a0;
        case 0x6080a4u: goto label_6080a4;
        case 0x6080a8u: goto label_6080a8;
        case 0x6080acu: goto label_6080ac;
        case 0x6080b0u: goto label_6080b0;
        case 0x6080b4u: goto label_6080b4;
        case 0x6080b8u: goto label_6080b8;
        case 0x6080bcu: goto label_6080bc;
        case 0x6080c0u: goto label_6080c0;
        case 0x6080c4u: goto label_6080c4;
        case 0x6080c8u: goto label_6080c8;
        case 0x6080ccu: goto label_6080cc;
        case 0x6080d0u: goto label_6080d0;
        case 0x6080d4u: goto label_6080d4;
        case 0x6080d8u: goto label_6080d8;
        case 0x6080dcu: goto label_6080dc;
        case 0x6080e0u: goto label_6080e0;
        case 0x6080e4u: goto label_6080e4;
        case 0x6080e8u: goto label_6080e8;
        case 0x6080ecu: goto label_6080ec;
        case 0x6080f0u: goto label_6080f0;
        case 0x6080f4u: goto label_6080f4;
        case 0x6080f8u: goto label_6080f8;
        case 0x6080fcu: goto label_6080fc;
        case 0x608100u: goto label_608100;
        case 0x608104u: goto label_608104;
        case 0x608108u: goto label_608108;
        case 0x60810cu: goto label_60810c;
        case 0x608110u: goto label_608110;
        case 0x608114u: goto label_608114;
        case 0x608118u: goto label_608118;
        case 0x60811cu: goto label_60811c;
        case 0x608120u: goto label_608120;
        case 0x608124u: goto label_608124;
        case 0x608128u: goto label_608128;
        case 0x60812cu: goto label_60812c;
        case 0x608130u: goto label_608130;
        case 0x608134u: goto label_608134;
        case 0x608138u: goto label_608138;
        case 0x60813cu: goto label_60813c;
        case 0x608140u: goto label_608140;
        case 0x608144u: goto label_608144;
        case 0x608148u: goto label_608148;
        case 0x60814cu: goto label_60814c;
        case 0x608150u: goto label_608150;
        case 0x608154u: goto label_608154;
        case 0x608158u: goto label_608158;
        case 0x60815cu: goto label_60815c;
        case 0x608160u: goto label_608160;
        case 0x608164u: goto label_608164;
        case 0x608168u: goto label_608168;
        case 0x60816cu: goto label_60816c;
        case 0x608170u: goto label_608170;
        case 0x608174u: goto label_608174;
        case 0x608178u: goto label_608178;
        case 0x60817cu: goto label_60817c;
        case 0x608180u: goto label_608180;
        case 0x608184u: goto label_608184;
        case 0x608188u: goto label_608188;
        case 0x60818cu: goto label_60818c;
        case 0x608190u: goto label_608190;
        case 0x608194u: goto label_608194;
        case 0x608198u: goto label_608198;
        case 0x60819cu: goto label_60819c;
        case 0x6081a0u: goto label_6081a0;
        case 0x6081a4u: goto label_6081a4;
        case 0x6081a8u: goto label_6081a8;
        case 0x6081acu: goto label_6081ac;
        case 0x6081b0u: goto label_6081b0;
        case 0x6081b4u: goto label_6081b4;
        case 0x6081b8u: goto label_6081b8;
        case 0x6081bcu: goto label_6081bc;
        case 0x6081c0u: goto label_6081c0;
        case 0x6081c4u: goto label_6081c4;
        case 0x6081c8u: goto label_6081c8;
        case 0x6081ccu: goto label_6081cc;
        case 0x6081d0u: goto label_6081d0;
        case 0x6081d4u: goto label_6081d4;
        case 0x6081d8u: goto label_6081d8;
        case 0x6081dcu: goto label_6081dc;
        case 0x6081e0u: goto label_6081e0;
        case 0x6081e4u: goto label_6081e4;
        case 0x6081e8u: goto label_6081e8;
        case 0x6081ecu: goto label_6081ec;
        case 0x6081f0u: goto label_6081f0;
        case 0x6081f4u: goto label_6081f4;
        case 0x6081f8u: goto label_6081f8;
        case 0x6081fcu: goto label_6081fc;
        case 0x608200u: goto label_608200;
        case 0x608204u: goto label_608204;
        case 0x608208u: goto label_608208;
        case 0x60820cu: goto label_60820c;
        case 0x608210u: goto label_608210;
        case 0x608214u: goto label_608214;
        case 0x608218u: goto label_608218;
        case 0x60821cu: goto label_60821c;
        case 0x608220u: goto label_608220;
        case 0x608224u: goto label_608224;
        case 0x608228u: goto label_608228;
        case 0x60822cu: goto label_60822c;
        case 0x608230u: goto label_608230;
        case 0x608234u: goto label_608234;
        case 0x608238u: goto label_608238;
        case 0x60823cu: goto label_60823c;
        case 0x608240u: goto label_608240;
        case 0x608244u: goto label_608244;
        case 0x608248u: goto label_608248;
        case 0x60824cu: goto label_60824c;
        case 0x608250u: goto label_608250;
        case 0x608254u: goto label_608254;
        case 0x608258u: goto label_608258;
        case 0x60825cu: goto label_60825c;
        case 0x608260u: goto label_608260;
        case 0x608264u: goto label_608264;
        case 0x608268u: goto label_608268;
        case 0x60826cu: goto label_60826c;
        case 0x608270u: goto label_608270;
        case 0x608274u: goto label_608274;
        case 0x608278u: goto label_608278;
        case 0x60827cu: goto label_60827c;
        case 0x608280u: goto label_608280;
        case 0x608284u: goto label_608284;
        case 0x608288u: goto label_608288;
        case 0x60828cu: goto label_60828c;
        case 0x608290u: goto label_608290;
        case 0x608294u: goto label_608294;
        case 0x608298u: goto label_608298;
        case 0x60829cu: goto label_60829c;
        case 0x6082a0u: goto label_6082a0;
        case 0x6082a4u: goto label_6082a4;
        case 0x6082a8u: goto label_6082a8;
        case 0x6082acu: goto label_6082ac;
        case 0x6082b0u: goto label_6082b0;
        case 0x6082b4u: goto label_6082b4;
        case 0x6082b8u: goto label_6082b8;
        case 0x6082bcu: goto label_6082bc;
        case 0x6082c0u: goto label_6082c0;
        case 0x6082c4u: goto label_6082c4;
        case 0x6082c8u: goto label_6082c8;
        case 0x6082ccu: goto label_6082cc;
        case 0x6082d0u: goto label_6082d0;
        case 0x6082d4u: goto label_6082d4;
        case 0x6082d8u: goto label_6082d8;
        case 0x6082dcu: goto label_6082dc;
        case 0x6082e0u: goto label_6082e0;
        case 0x6082e4u: goto label_6082e4;
        case 0x6082e8u: goto label_6082e8;
        case 0x6082ecu: goto label_6082ec;
        case 0x6082f0u: goto label_6082f0;
        case 0x6082f4u: goto label_6082f4;
        case 0x6082f8u: goto label_6082f8;
        case 0x6082fcu: goto label_6082fc;
        case 0x608300u: goto label_608300;
        case 0x608304u: goto label_608304;
        case 0x608308u: goto label_608308;
        case 0x60830cu: goto label_60830c;
        case 0x608310u: goto label_608310;
        case 0x608314u: goto label_608314;
        case 0x608318u: goto label_608318;
        case 0x60831cu: goto label_60831c;
        case 0x608320u: goto label_608320;
        case 0x608324u: goto label_608324;
        case 0x608328u: goto label_608328;
        case 0x60832cu: goto label_60832c;
        case 0x608330u: goto label_608330;
        case 0x608334u: goto label_608334;
        case 0x608338u: goto label_608338;
        case 0x60833cu: goto label_60833c;
        case 0x608340u: goto label_608340;
        case 0x608344u: goto label_608344;
        case 0x608348u: goto label_608348;
        case 0x60834cu: goto label_60834c;
        case 0x608350u: goto label_608350;
        case 0x608354u: goto label_608354;
        case 0x608358u: goto label_608358;
        case 0x60835cu: goto label_60835c;
        case 0x608360u: goto label_608360;
        case 0x608364u: goto label_608364;
        case 0x608368u: goto label_608368;
        case 0x60836cu: goto label_60836c;
        case 0x608370u: goto label_608370;
        case 0x608374u: goto label_608374;
        case 0x608378u: goto label_608378;
        case 0x60837cu: goto label_60837c;
        case 0x608380u: goto label_608380;
        case 0x608384u: goto label_608384;
        case 0x608388u: goto label_608388;
        case 0x60838cu: goto label_60838c;
        case 0x608390u: goto label_608390;
        case 0x608394u: goto label_608394;
        case 0x608398u: goto label_608398;
        case 0x60839cu: goto label_60839c;
        case 0x6083a0u: goto label_6083a0;
        case 0x6083a4u: goto label_6083a4;
        case 0x6083a8u: goto label_6083a8;
        case 0x6083acu: goto label_6083ac;
        case 0x6083b0u: goto label_6083b0;
        case 0x6083b4u: goto label_6083b4;
        case 0x6083b8u: goto label_6083b8;
        case 0x6083bcu: goto label_6083bc;
        case 0x6083c0u: goto label_6083c0;
        case 0x6083c4u: goto label_6083c4;
        case 0x6083c8u: goto label_6083c8;
        case 0x6083ccu: goto label_6083cc;
        case 0x6083d0u: goto label_6083d0;
        case 0x6083d4u: goto label_6083d4;
        case 0x6083d8u: goto label_6083d8;
        case 0x6083dcu: goto label_6083dc;
        case 0x6083e0u: goto label_6083e0;
        case 0x6083e4u: goto label_6083e4;
        case 0x6083e8u: goto label_6083e8;
        case 0x6083ecu: goto label_6083ec;
        case 0x6083f0u: goto label_6083f0;
        case 0x6083f4u: goto label_6083f4;
        case 0x6083f8u: goto label_6083f8;
        case 0x6083fcu: goto label_6083fc;
        case 0x608400u: goto label_608400;
        case 0x608404u: goto label_608404;
        case 0x608408u: goto label_608408;
        case 0x60840cu: goto label_60840c;
        case 0x608410u: goto label_608410;
        case 0x608414u: goto label_608414;
        case 0x608418u: goto label_608418;
        case 0x60841cu: goto label_60841c;
        case 0x608420u: goto label_608420;
        case 0x608424u: goto label_608424;
        case 0x608428u: goto label_608428;
        case 0x60842cu: goto label_60842c;
        case 0x608430u: goto label_608430;
        case 0x608434u: goto label_608434;
        case 0x608438u: goto label_608438;
        case 0x60843cu: goto label_60843c;
        case 0x608440u: goto label_608440;
        case 0x608444u: goto label_608444;
        case 0x608448u: goto label_608448;
        case 0x60844cu: goto label_60844c;
        case 0x608450u: goto label_608450;
        case 0x608454u: goto label_608454;
        case 0x608458u: goto label_608458;
        case 0x60845cu: goto label_60845c;
        case 0x608460u: goto label_608460;
        case 0x608464u: goto label_608464;
        case 0x608468u: goto label_608468;
        case 0x60846cu: goto label_60846c;
        case 0x608470u: goto label_608470;
        case 0x608474u: goto label_608474;
        case 0x608478u: goto label_608478;
        case 0x60847cu: goto label_60847c;
        case 0x608480u: goto label_608480;
        case 0x608484u: goto label_608484;
        case 0x608488u: goto label_608488;
        case 0x60848cu: goto label_60848c;
        case 0x608490u: goto label_608490;
        case 0x608494u: goto label_608494;
        case 0x608498u: goto label_608498;
        case 0x60849cu: goto label_60849c;
        case 0x6084a0u: goto label_6084a0;
        case 0x6084a4u: goto label_6084a4;
        case 0x6084a8u: goto label_6084a8;
        case 0x6084acu: goto label_6084ac;
        case 0x6084b0u: goto label_6084b0;
        case 0x6084b4u: goto label_6084b4;
        case 0x6084b8u: goto label_6084b8;
        case 0x6084bcu: goto label_6084bc;
        case 0x6084c0u: goto label_6084c0;
        case 0x6084c4u: goto label_6084c4;
        case 0x6084c8u: goto label_6084c8;
        case 0x6084ccu: goto label_6084cc;
        case 0x6084d0u: goto label_6084d0;
        case 0x6084d4u: goto label_6084d4;
        case 0x6084d8u: goto label_6084d8;
        case 0x6084dcu: goto label_6084dc;
        case 0x6084e0u: goto label_6084e0;
        case 0x6084e4u: goto label_6084e4;
        case 0x6084e8u: goto label_6084e8;
        case 0x6084ecu: goto label_6084ec;
        case 0x6084f0u: goto label_6084f0;
        case 0x6084f4u: goto label_6084f4;
        case 0x6084f8u: goto label_6084f8;
        case 0x6084fcu: goto label_6084fc;
        case 0x608500u: goto label_608500;
        case 0x608504u: goto label_608504;
        case 0x608508u: goto label_608508;
        case 0x60850cu: goto label_60850c;
        case 0x608510u: goto label_608510;
        case 0x608514u: goto label_608514;
        case 0x608518u: goto label_608518;
        case 0x60851cu: goto label_60851c;
        case 0x608520u: goto label_608520;
        case 0x608524u: goto label_608524;
        case 0x608528u: goto label_608528;
        case 0x60852cu: goto label_60852c;
        case 0x608530u: goto label_608530;
        case 0x608534u: goto label_608534;
        case 0x608538u: goto label_608538;
        case 0x60853cu: goto label_60853c;
        case 0x608540u: goto label_608540;
        case 0x608544u: goto label_608544;
        case 0x608548u: goto label_608548;
        case 0x60854cu: goto label_60854c;
        case 0x608550u: goto label_608550;
        case 0x608554u: goto label_608554;
        case 0x608558u: goto label_608558;
        case 0x60855cu: goto label_60855c;
        case 0x608560u: goto label_608560;
        case 0x608564u: goto label_608564;
        case 0x608568u: goto label_608568;
        case 0x60856cu: goto label_60856c;
        case 0x608570u: goto label_608570;
        case 0x608574u: goto label_608574;
        case 0x608578u: goto label_608578;
        case 0x60857cu: goto label_60857c;
        case 0x608580u: goto label_608580;
        case 0x608584u: goto label_608584;
        case 0x608588u: goto label_608588;
        case 0x60858cu: goto label_60858c;
        case 0x608590u: goto label_608590;
        case 0x608594u: goto label_608594;
        case 0x608598u: goto label_608598;
        case 0x60859cu: goto label_60859c;
        case 0x6085a0u: goto label_6085a0;
        case 0x6085a4u: goto label_6085a4;
        case 0x6085a8u: goto label_6085a8;
        case 0x6085acu: goto label_6085ac;
        case 0x6085b0u: goto label_6085b0;
        case 0x6085b4u: goto label_6085b4;
        case 0x6085b8u: goto label_6085b8;
        case 0x6085bcu: goto label_6085bc;
        case 0x6085c0u: goto label_6085c0;
        case 0x6085c4u: goto label_6085c4;
        case 0x6085c8u: goto label_6085c8;
        case 0x6085ccu: goto label_6085cc;
        case 0x6085d0u: goto label_6085d0;
        case 0x6085d4u: goto label_6085d4;
        case 0x6085d8u: goto label_6085d8;
        case 0x6085dcu: goto label_6085dc;
        case 0x6085e0u: goto label_6085e0;
        case 0x6085e4u: goto label_6085e4;
        case 0x6085e8u: goto label_6085e8;
        case 0x6085ecu: goto label_6085ec;
        case 0x6085f0u: goto label_6085f0;
        case 0x6085f4u: goto label_6085f4;
        case 0x6085f8u: goto label_6085f8;
        case 0x6085fcu: goto label_6085fc;
        case 0x608600u: goto label_608600;
        case 0x608604u: goto label_608604;
        case 0x608608u: goto label_608608;
        case 0x60860cu: goto label_60860c;
        case 0x608610u: goto label_608610;
        case 0x608614u: goto label_608614;
        case 0x608618u: goto label_608618;
        case 0x60861cu: goto label_60861c;
        case 0x608620u: goto label_608620;
        case 0x608624u: goto label_608624;
        case 0x608628u: goto label_608628;
        case 0x60862cu: goto label_60862c;
        case 0x608630u: goto label_608630;
        case 0x608634u: goto label_608634;
        case 0x608638u: goto label_608638;
        case 0x60863cu: goto label_60863c;
        case 0x608640u: goto label_608640;
        case 0x608644u: goto label_608644;
        case 0x608648u: goto label_608648;
        case 0x60864cu: goto label_60864c;
        case 0x608650u: goto label_608650;
        case 0x608654u: goto label_608654;
        case 0x608658u: goto label_608658;
        case 0x60865cu: goto label_60865c;
        case 0x608660u: goto label_608660;
        case 0x608664u: goto label_608664;
        case 0x608668u: goto label_608668;
        case 0x60866cu: goto label_60866c;
        case 0x608670u: goto label_608670;
        case 0x608674u: goto label_608674;
        case 0x608678u: goto label_608678;
        case 0x60867cu: goto label_60867c;
        case 0x608680u: goto label_608680;
        case 0x608684u: goto label_608684;
        case 0x608688u: goto label_608688;
        case 0x60868cu: goto label_60868c;
        case 0x608690u: goto label_608690;
        case 0x608694u: goto label_608694;
        case 0x608698u: goto label_608698;
        case 0x60869cu: goto label_60869c;
        case 0x6086a0u: goto label_6086a0;
        case 0x6086a4u: goto label_6086a4;
        case 0x6086a8u: goto label_6086a8;
        case 0x6086acu: goto label_6086ac;
        case 0x6086b0u: goto label_6086b0;
        case 0x6086b4u: goto label_6086b4;
        case 0x6086b8u: goto label_6086b8;
        case 0x6086bcu: goto label_6086bc;
        case 0x6086c0u: goto label_6086c0;
        case 0x6086c4u: goto label_6086c4;
        case 0x6086c8u: goto label_6086c8;
        case 0x6086ccu: goto label_6086cc;
        case 0x6086d0u: goto label_6086d0;
        case 0x6086d4u: goto label_6086d4;
        case 0x6086d8u: goto label_6086d8;
        case 0x6086dcu: goto label_6086dc;
        case 0x6086e0u: goto label_6086e0;
        case 0x6086e4u: goto label_6086e4;
        case 0x6086e8u: goto label_6086e8;
        case 0x6086ecu: goto label_6086ec;
        case 0x6086f0u: goto label_6086f0;
        case 0x6086f4u: goto label_6086f4;
        case 0x6086f8u: goto label_6086f8;
        case 0x6086fcu: goto label_6086fc;
        case 0x608700u: goto label_608700;
        case 0x608704u: goto label_608704;
        case 0x608708u: goto label_608708;
        case 0x60870cu: goto label_60870c;
        case 0x608710u: goto label_608710;
        case 0x608714u: goto label_608714;
        case 0x608718u: goto label_608718;
        case 0x60871cu: goto label_60871c;
        case 0x608720u: goto label_608720;
        case 0x608724u: goto label_608724;
        case 0x608728u: goto label_608728;
        case 0x60872cu: goto label_60872c;
        case 0x608730u: goto label_608730;
        case 0x608734u: goto label_608734;
        case 0x608738u: goto label_608738;
        case 0x60873cu: goto label_60873c;
        case 0x608740u: goto label_608740;
        case 0x608744u: goto label_608744;
        case 0x608748u: goto label_608748;
        case 0x60874cu: goto label_60874c;
        case 0x608750u: goto label_608750;
        case 0x608754u: goto label_608754;
        case 0x608758u: goto label_608758;
        case 0x60875cu: goto label_60875c;
        case 0x608760u: goto label_608760;
        case 0x608764u: goto label_608764;
        case 0x608768u: goto label_608768;
        case 0x60876cu: goto label_60876c;
        case 0x608770u: goto label_608770;
        case 0x608774u: goto label_608774;
        case 0x608778u: goto label_608778;
        case 0x60877cu: goto label_60877c;
        case 0x608780u: goto label_608780;
        case 0x608784u: goto label_608784;
        case 0x608788u: goto label_608788;
        case 0x60878cu: goto label_60878c;
        case 0x608790u: goto label_608790;
        case 0x608794u: goto label_608794;
        case 0x608798u: goto label_608798;
        case 0x60879cu: goto label_60879c;
        case 0x6087a0u: goto label_6087a0;
        case 0x6087a4u: goto label_6087a4;
        case 0x6087a8u: goto label_6087a8;
        case 0x6087acu: goto label_6087ac;
        case 0x6087b0u: goto label_6087b0;
        case 0x6087b4u: goto label_6087b4;
        case 0x6087b8u: goto label_6087b8;
        case 0x6087bcu: goto label_6087bc;
        case 0x6087c0u: goto label_6087c0;
        case 0x6087c4u: goto label_6087c4;
        case 0x6087c8u: goto label_6087c8;
        case 0x6087ccu: goto label_6087cc;
        case 0x6087d0u: goto label_6087d0;
        case 0x6087d4u: goto label_6087d4;
        case 0x6087d8u: goto label_6087d8;
        case 0x6087dcu: goto label_6087dc;
        case 0x6087e0u: goto label_6087e0;
        case 0x6087e4u: goto label_6087e4;
        case 0x6087e8u: goto label_6087e8;
        case 0x6087ecu: goto label_6087ec;
        case 0x6087f0u: goto label_6087f0;
        case 0x6087f4u: goto label_6087f4;
        case 0x6087f8u: goto label_6087f8;
        case 0x6087fcu: goto label_6087fc;
        case 0x608800u: goto label_608800;
        case 0x608804u: goto label_608804;
        case 0x608808u: goto label_608808;
        case 0x60880cu: goto label_60880c;
        case 0x608810u: goto label_608810;
        case 0x608814u: goto label_608814;
        case 0x608818u: goto label_608818;
        case 0x60881cu: goto label_60881c;
        case 0x608820u: goto label_608820;
        case 0x608824u: goto label_608824;
        case 0x608828u: goto label_608828;
        case 0x60882cu: goto label_60882c;
        case 0x608830u: goto label_608830;
        case 0x608834u: goto label_608834;
        case 0x608838u: goto label_608838;
        case 0x60883cu: goto label_60883c;
        case 0x608840u: goto label_608840;
        case 0x608844u: goto label_608844;
        case 0x608848u: goto label_608848;
        case 0x60884cu: goto label_60884c;
        case 0x608850u: goto label_608850;
        case 0x608854u: goto label_608854;
        case 0x608858u: goto label_608858;
        case 0x60885cu: goto label_60885c;
        case 0x608860u: goto label_608860;
        case 0x608864u: goto label_608864;
        case 0x608868u: goto label_608868;
        case 0x60886cu: goto label_60886c;
        case 0x608870u: goto label_608870;
        case 0x608874u: goto label_608874;
        case 0x608878u: goto label_608878;
        case 0x60887cu: goto label_60887c;
        case 0x608880u: goto label_608880;
        case 0x608884u: goto label_608884;
        case 0x608888u: goto label_608888;
        case 0x60888cu: goto label_60888c;
        case 0x608890u: goto label_608890;
        case 0x608894u: goto label_608894;
        case 0x608898u: goto label_608898;
        case 0x60889cu: goto label_60889c;
        case 0x6088a0u: goto label_6088a0;
        case 0x6088a4u: goto label_6088a4;
        case 0x6088a8u: goto label_6088a8;
        case 0x6088acu: goto label_6088ac;
        case 0x6088b0u: goto label_6088b0;
        case 0x6088b4u: goto label_6088b4;
        case 0x6088b8u: goto label_6088b8;
        case 0x6088bcu: goto label_6088bc;
        case 0x6088c0u: goto label_6088c0;
        case 0x6088c4u: goto label_6088c4;
        case 0x6088c8u: goto label_6088c8;
        case 0x6088ccu: goto label_6088cc;
        case 0x6088d0u: goto label_6088d0;
        case 0x6088d4u: goto label_6088d4;
        case 0x6088d8u: goto label_6088d8;
        case 0x6088dcu: goto label_6088dc;
        case 0x6088e0u: goto label_6088e0;
        case 0x6088e4u: goto label_6088e4;
        case 0x6088e8u: goto label_6088e8;
        case 0x6088ecu: goto label_6088ec;
        case 0x6088f0u: goto label_6088f0;
        case 0x6088f4u: goto label_6088f4;
        case 0x6088f8u: goto label_6088f8;
        case 0x6088fcu: goto label_6088fc;
        case 0x608900u: goto label_608900;
        case 0x608904u: goto label_608904;
        case 0x608908u: goto label_608908;
        case 0x60890cu: goto label_60890c;
        case 0x608910u: goto label_608910;
        case 0x608914u: goto label_608914;
        case 0x608918u: goto label_608918;
        case 0x60891cu: goto label_60891c;
        case 0x608920u: goto label_608920;
        case 0x608924u: goto label_608924;
        case 0x608928u: goto label_608928;
        case 0x60892cu: goto label_60892c;
        case 0x608930u: goto label_608930;
        case 0x608934u: goto label_608934;
        case 0x608938u: goto label_608938;
        case 0x60893cu: goto label_60893c;
        case 0x608940u: goto label_608940;
        case 0x608944u: goto label_608944;
        case 0x608948u: goto label_608948;
        case 0x60894cu: goto label_60894c;
        case 0x608950u: goto label_608950;
        case 0x608954u: goto label_608954;
        case 0x608958u: goto label_608958;
        case 0x60895cu: goto label_60895c;
        case 0x608960u: goto label_608960;
        case 0x608964u: goto label_608964;
        case 0x608968u: goto label_608968;
        case 0x60896cu: goto label_60896c;
        case 0x608970u: goto label_608970;
        case 0x608974u: goto label_608974;
        case 0x608978u: goto label_608978;
        case 0x60897cu: goto label_60897c;
        case 0x608980u: goto label_608980;
        case 0x608984u: goto label_608984;
        case 0x608988u: goto label_608988;
        case 0x60898cu: goto label_60898c;
        case 0x608990u: goto label_608990;
        case 0x608994u: goto label_608994;
        case 0x608998u: goto label_608998;
        case 0x60899cu: goto label_60899c;
        case 0x6089a0u: goto label_6089a0;
        case 0x6089a4u: goto label_6089a4;
        case 0x6089a8u: goto label_6089a8;
        case 0x6089acu: goto label_6089ac;
        case 0x6089b0u: goto label_6089b0;
        case 0x6089b4u: goto label_6089b4;
        case 0x6089b8u: goto label_6089b8;
        case 0x6089bcu: goto label_6089bc;
        case 0x6089c0u: goto label_6089c0;
        case 0x6089c4u: goto label_6089c4;
        case 0x6089c8u: goto label_6089c8;
        case 0x6089ccu: goto label_6089cc;
        case 0x6089d0u: goto label_6089d0;
        case 0x6089d4u: goto label_6089d4;
        case 0x6089d8u: goto label_6089d8;
        case 0x6089dcu: goto label_6089dc;
        case 0x6089e0u: goto label_6089e0;
        case 0x6089e4u: goto label_6089e4;
        case 0x6089e8u: goto label_6089e8;
        case 0x6089ecu: goto label_6089ec;
        case 0x6089f0u: goto label_6089f0;
        case 0x6089f4u: goto label_6089f4;
        case 0x6089f8u: goto label_6089f8;
        case 0x6089fcu: goto label_6089fc;
        case 0x608a00u: goto label_608a00;
        case 0x608a04u: goto label_608a04;
        case 0x608a08u: goto label_608a08;
        case 0x608a0cu: goto label_608a0c;
        case 0x608a10u: goto label_608a10;
        case 0x608a14u: goto label_608a14;
        case 0x608a18u: goto label_608a18;
        case 0x608a1cu: goto label_608a1c;
        case 0x608a20u: goto label_608a20;
        case 0x608a24u: goto label_608a24;
        case 0x608a28u: goto label_608a28;
        case 0x608a2cu: goto label_608a2c;
        case 0x608a30u: goto label_608a30;
        case 0x608a34u: goto label_608a34;
        case 0x608a38u: goto label_608a38;
        case 0x608a3cu: goto label_608a3c;
        case 0x608a40u: goto label_608a40;
        case 0x608a44u: goto label_608a44;
        case 0x608a48u: goto label_608a48;
        case 0x608a4cu: goto label_608a4c;
        case 0x608a50u: goto label_608a50;
        case 0x608a54u: goto label_608a54;
        case 0x608a58u: goto label_608a58;
        case 0x608a5cu: goto label_608a5c;
        case 0x608a60u: goto label_608a60;
        case 0x608a64u: goto label_608a64;
        case 0x608a68u: goto label_608a68;
        case 0x608a6cu: goto label_608a6c;
        case 0x608a70u: goto label_608a70;
        case 0x608a74u: goto label_608a74;
        case 0x608a78u: goto label_608a78;
        case 0x608a7cu: goto label_608a7c;
        case 0x608a80u: goto label_608a80;
        case 0x608a84u: goto label_608a84;
        case 0x608a88u: goto label_608a88;
        case 0x608a8cu: goto label_608a8c;
        case 0x608a90u: goto label_608a90;
        case 0x608a94u: goto label_608a94;
        case 0x608a98u: goto label_608a98;
        case 0x608a9cu: goto label_608a9c;
        case 0x608aa0u: goto label_608aa0;
        case 0x608aa4u: goto label_608aa4;
        case 0x608aa8u: goto label_608aa8;
        case 0x608aacu: goto label_608aac;
        case 0x608ab0u: goto label_608ab0;
        case 0x608ab4u: goto label_608ab4;
        case 0x608ab8u: goto label_608ab8;
        case 0x608abcu: goto label_608abc;
        case 0x608ac0u: goto label_608ac0;
        case 0x608ac4u: goto label_608ac4;
        case 0x608ac8u: goto label_608ac8;
        case 0x608accu: goto label_608acc;
        case 0x608ad0u: goto label_608ad0;
        case 0x608ad4u: goto label_608ad4;
        case 0x608ad8u: goto label_608ad8;
        case 0x608adcu: goto label_608adc;
        case 0x608ae0u: goto label_608ae0;
        case 0x608ae4u: goto label_608ae4;
        case 0x608ae8u: goto label_608ae8;
        case 0x608aecu: goto label_608aec;
        case 0x608af0u: goto label_608af0;
        case 0x608af4u: goto label_608af4;
        case 0x608af8u: goto label_608af8;
        case 0x608afcu: goto label_608afc;
        case 0x608b00u: goto label_608b00;
        case 0x608b04u: goto label_608b04;
        case 0x608b08u: goto label_608b08;
        case 0x608b0cu: goto label_608b0c;
        case 0x608b10u: goto label_608b10;
        case 0x608b14u: goto label_608b14;
        case 0x608b18u: goto label_608b18;
        case 0x608b1cu: goto label_608b1c;
        case 0x608b20u: goto label_608b20;
        case 0x608b24u: goto label_608b24;
        case 0x608b28u: goto label_608b28;
        case 0x608b2cu: goto label_608b2c;
        case 0x608b30u: goto label_608b30;
        case 0x608b34u: goto label_608b34;
        case 0x608b38u: goto label_608b38;
        case 0x608b3cu: goto label_608b3c;
        case 0x608b40u: goto label_608b40;
        case 0x608b44u: goto label_608b44;
        case 0x608b48u: goto label_608b48;
        case 0x608b4cu: goto label_608b4c;
        case 0x608b50u: goto label_608b50;
        case 0x608b54u: goto label_608b54;
        case 0x608b58u: goto label_608b58;
        case 0x608b5cu: goto label_608b5c;
        case 0x608b60u: goto label_608b60;
        case 0x608b64u: goto label_608b64;
        case 0x608b68u: goto label_608b68;
        case 0x608b6cu: goto label_608b6c;
        case 0x608b70u: goto label_608b70;
        case 0x608b74u: goto label_608b74;
        case 0x608b78u: goto label_608b78;
        case 0x608b7cu: goto label_608b7c;
        case 0x608b80u: goto label_608b80;
        case 0x608b84u: goto label_608b84;
        case 0x608b88u: goto label_608b88;
        case 0x608b8cu: goto label_608b8c;
        case 0x608b90u: goto label_608b90;
        case 0x608b94u: goto label_608b94;
        case 0x608b98u: goto label_608b98;
        case 0x608b9cu: goto label_608b9c;
        case 0x608ba0u: goto label_608ba0;
        case 0x608ba4u: goto label_608ba4;
        case 0x608ba8u: goto label_608ba8;
        case 0x608bacu: goto label_608bac;
        case 0x608bb0u: goto label_608bb0;
        case 0x608bb4u: goto label_608bb4;
        case 0x608bb8u: goto label_608bb8;
        case 0x608bbcu: goto label_608bbc;
        case 0x608bc0u: goto label_608bc0;
        case 0x608bc4u: goto label_608bc4;
        case 0x608bc8u: goto label_608bc8;
        case 0x608bccu: goto label_608bcc;
        case 0x608bd0u: goto label_608bd0;
        case 0x608bd4u: goto label_608bd4;
        case 0x608bd8u: goto label_608bd8;
        case 0x608bdcu: goto label_608bdc;
        case 0x608be0u: goto label_608be0;
        case 0x608be4u: goto label_608be4;
        case 0x608be8u: goto label_608be8;
        case 0x608becu: goto label_608bec;
        case 0x608bf0u: goto label_608bf0;
        case 0x608bf4u: goto label_608bf4;
        case 0x608bf8u: goto label_608bf8;
        case 0x608bfcu: goto label_608bfc;
        case 0x608c00u: goto label_608c00;
        case 0x608c04u: goto label_608c04;
        case 0x608c08u: goto label_608c08;
        case 0x608c0cu: goto label_608c0c;
        case 0x608c10u: goto label_608c10;
        case 0x608c14u: goto label_608c14;
        case 0x608c18u: goto label_608c18;
        case 0x608c1cu: goto label_608c1c;
        case 0x608c20u: goto label_608c20;
        case 0x608c24u: goto label_608c24;
        case 0x608c28u: goto label_608c28;
        case 0x608c2cu: goto label_608c2c;
        case 0x608c30u: goto label_608c30;
        case 0x608c34u: goto label_608c34;
        case 0x608c38u: goto label_608c38;
        case 0x608c3cu: goto label_608c3c;
        case 0x608c40u: goto label_608c40;
        case 0x608c44u: goto label_608c44;
        case 0x608c48u: goto label_608c48;
        case 0x608c4cu: goto label_608c4c;
        case 0x608c50u: goto label_608c50;
        case 0x608c54u: goto label_608c54;
        case 0x608c58u: goto label_608c58;
        case 0x608c5cu: goto label_608c5c;
        case 0x608c60u: goto label_608c60;
        case 0x608c64u: goto label_608c64;
        case 0x608c68u: goto label_608c68;
        case 0x608c6cu: goto label_608c6c;
        case 0x608c70u: goto label_608c70;
        case 0x608c74u: goto label_608c74;
        case 0x608c78u: goto label_608c78;
        case 0x608c7cu: goto label_608c7c;
        case 0x608c80u: goto label_608c80;
        case 0x608c84u: goto label_608c84;
        case 0x608c88u: goto label_608c88;
        case 0x608c8cu: goto label_608c8c;
        case 0x608c90u: goto label_608c90;
        case 0x608c94u: goto label_608c94;
        case 0x608c98u: goto label_608c98;
        case 0x608c9cu: goto label_608c9c;
        case 0x608ca0u: goto label_608ca0;
        case 0x608ca4u: goto label_608ca4;
        case 0x608ca8u: goto label_608ca8;
        case 0x608cacu: goto label_608cac;
        case 0x608cb0u: goto label_608cb0;
        case 0x608cb4u: goto label_608cb4;
        case 0x608cb8u: goto label_608cb8;
        case 0x608cbcu: goto label_608cbc;
        case 0x608cc0u: goto label_608cc0;
        case 0x608cc4u: goto label_608cc4;
        case 0x608cc8u: goto label_608cc8;
        case 0x608cccu: goto label_608ccc;
        case 0x608cd0u: goto label_608cd0;
        case 0x608cd4u: goto label_608cd4;
        case 0x608cd8u: goto label_608cd8;
        case 0x608cdcu: goto label_608cdc;
        case 0x608ce0u: goto label_608ce0;
        case 0x608ce4u: goto label_608ce4;
        case 0x608ce8u: goto label_608ce8;
        case 0x608cecu: goto label_608cec;
        case 0x608cf0u: goto label_608cf0;
        case 0x608cf4u: goto label_608cf4;
        case 0x608cf8u: goto label_608cf8;
        case 0x608cfcu: goto label_608cfc;
        case 0x608d00u: goto label_608d00;
        case 0x608d04u: goto label_608d04;
        case 0x608d08u: goto label_608d08;
        case 0x608d0cu: goto label_608d0c;
        case 0x608d10u: goto label_608d10;
        case 0x608d14u: goto label_608d14;
        case 0x608d18u: goto label_608d18;
        case 0x608d1cu: goto label_608d1c;
        case 0x608d20u: goto label_608d20;
        case 0x608d24u: goto label_608d24;
        case 0x608d28u: goto label_608d28;
        case 0x608d2cu: goto label_608d2c;
        case 0x608d30u: goto label_608d30;
        case 0x608d34u: goto label_608d34;
        case 0x608d38u: goto label_608d38;
        case 0x608d3cu: goto label_608d3c;
        case 0x608d40u: goto label_608d40;
        case 0x608d44u: goto label_608d44;
        case 0x608d48u: goto label_608d48;
        case 0x608d4cu: goto label_608d4c;
        case 0x608d50u: goto label_608d50;
        case 0x608d54u: goto label_608d54;
        case 0x608d58u: goto label_608d58;
        case 0x608d5cu: goto label_608d5c;
        case 0x608d60u: goto label_608d60;
        case 0x608d64u: goto label_608d64;
        case 0x608d68u: goto label_608d68;
        case 0x608d6cu: goto label_608d6c;
        case 0x608d70u: goto label_608d70;
        case 0x608d74u: goto label_608d74;
        case 0x608d78u: goto label_608d78;
        case 0x608d7cu: goto label_608d7c;
        case 0x608d80u: goto label_608d80;
        case 0x608d84u: goto label_608d84;
        case 0x608d88u: goto label_608d88;
        case 0x608d8cu: goto label_608d8c;
        case 0x608d90u: goto label_608d90;
        case 0x608d94u: goto label_608d94;
        case 0x608d98u: goto label_608d98;
        case 0x608d9cu: goto label_608d9c;
        case 0x608da0u: goto label_608da0;
        case 0x608da4u: goto label_608da4;
        case 0x608da8u: goto label_608da8;
        case 0x608dacu: goto label_608dac;
        case 0x608db0u: goto label_608db0;
        case 0x608db4u: goto label_608db4;
        case 0x608db8u: goto label_608db8;
        case 0x608dbcu: goto label_608dbc;
        case 0x608dc0u: goto label_608dc0;
        case 0x608dc4u: goto label_608dc4;
        case 0x608dc8u: goto label_608dc8;
        case 0x608dccu: goto label_608dcc;
        case 0x608dd0u: goto label_608dd0;
        case 0x608dd4u: goto label_608dd4;
        case 0x608dd8u: goto label_608dd8;
        case 0x608ddcu: goto label_608ddc;
        case 0x608de0u: goto label_608de0;
        case 0x608de4u: goto label_608de4;
        case 0x608de8u: goto label_608de8;
        case 0x608decu: goto label_608dec;
        case 0x608df0u: goto label_608df0;
        case 0x608df4u: goto label_608df4;
        case 0x608df8u: goto label_608df8;
        case 0x608dfcu: goto label_608dfc;
        case 0x608e00u: goto label_608e00;
        case 0x608e04u: goto label_608e04;
        case 0x608e08u: goto label_608e08;
        case 0x608e0cu: goto label_608e0c;
        case 0x608e10u: goto label_608e10;
        case 0x608e14u: goto label_608e14;
        case 0x608e18u: goto label_608e18;
        case 0x608e1cu: goto label_608e1c;
        case 0x608e20u: goto label_608e20;
        case 0x608e24u: goto label_608e24;
        case 0x608e28u: goto label_608e28;
        case 0x608e2cu: goto label_608e2c;
        case 0x608e30u: goto label_608e30;
        case 0x608e34u: goto label_608e34;
        case 0x608e38u: goto label_608e38;
        case 0x608e3cu: goto label_608e3c;
        case 0x608e40u: goto label_608e40;
        case 0x608e44u: goto label_608e44;
        case 0x608e48u: goto label_608e48;
        case 0x608e4cu: goto label_608e4c;
        case 0x608e50u: goto label_608e50;
        case 0x608e54u: goto label_608e54;
        case 0x608e58u: goto label_608e58;
        case 0x608e5cu: goto label_608e5c;
        case 0x608e60u: goto label_608e60;
        case 0x608e64u: goto label_608e64;
        case 0x608e68u: goto label_608e68;
        case 0x608e6cu: goto label_608e6c;
        case 0x608e70u: goto label_608e70;
        case 0x608e74u: goto label_608e74;
        case 0x608e78u: goto label_608e78;
        case 0x608e7cu: goto label_608e7c;
        case 0x608e80u: goto label_608e80;
        case 0x608e84u: goto label_608e84;
        case 0x608e88u: goto label_608e88;
        case 0x608e8cu: goto label_608e8c;
        case 0x608e90u: goto label_608e90;
        case 0x608e94u: goto label_608e94;
        case 0x608e98u: goto label_608e98;
        case 0x608e9cu: goto label_608e9c;
        case 0x608ea0u: goto label_608ea0;
        case 0x608ea4u: goto label_608ea4;
        case 0x608ea8u: goto label_608ea8;
        case 0x608eacu: goto label_608eac;
        case 0x608eb0u: goto label_608eb0;
        case 0x608eb4u: goto label_608eb4;
        case 0x608eb8u: goto label_608eb8;
        case 0x608ebcu: goto label_608ebc;
        case 0x608ec0u: goto label_608ec0;
        case 0x608ec4u: goto label_608ec4;
        case 0x608ec8u: goto label_608ec8;
        case 0x608eccu: goto label_608ecc;
        case 0x608ed0u: goto label_608ed0;
        case 0x608ed4u: goto label_608ed4;
        case 0x608ed8u: goto label_608ed8;
        case 0x608edcu: goto label_608edc;
        case 0x608ee0u: goto label_608ee0;
        case 0x608ee4u: goto label_608ee4;
        case 0x608ee8u: goto label_608ee8;
        case 0x608eecu: goto label_608eec;
        case 0x608ef0u: goto label_608ef0;
        case 0x608ef4u: goto label_608ef4;
        case 0x608ef8u: goto label_608ef8;
        case 0x608efcu: goto label_608efc;
        case 0x608f00u: goto label_608f00;
        case 0x608f04u: goto label_608f04;
        case 0x608f08u: goto label_608f08;
        case 0x608f0cu: goto label_608f0c;
        case 0x608f10u: goto label_608f10;
        case 0x608f14u: goto label_608f14;
        case 0x608f18u: goto label_608f18;
        case 0x608f1cu: goto label_608f1c;
        case 0x608f20u: goto label_608f20;
        case 0x608f24u: goto label_608f24;
        case 0x608f28u: goto label_608f28;
        case 0x608f2cu: goto label_608f2c;
        case 0x608f30u: goto label_608f30;
        case 0x608f34u: goto label_608f34;
        case 0x608f38u: goto label_608f38;
        case 0x608f3cu: goto label_608f3c;
        case 0x608f40u: goto label_608f40;
        case 0x608f44u: goto label_608f44;
        case 0x608f48u: goto label_608f48;
        case 0x608f4cu: goto label_608f4c;
        case 0x608f50u: goto label_608f50;
        case 0x608f54u: goto label_608f54;
        case 0x608f58u: goto label_608f58;
        case 0x608f5cu: goto label_608f5c;
        case 0x608f60u: goto label_608f60;
        case 0x608f64u: goto label_608f64;
        case 0x608f68u: goto label_608f68;
        case 0x608f6cu: goto label_608f6c;
        case 0x608f70u: goto label_608f70;
        case 0x608f74u: goto label_608f74;
        case 0x608f78u: goto label_608f78;
        case 0x608f7cu: goto label_608f7c;
        case 0x608f80u: goto label_608f80;
        case 0x608f84u: goto label_608f84;
        case 0x608f88u: goto label_608f88;
        case 0x608f8cu: goto label_608f8c;
        case 0x608f90u: goto label_608f90;
        case 0x608f94u: goto label_608f94;
        case 0x608f98u: goto label_608f98;
        case 0x608f9cu: goto label_608f9c;
        case 0x608fa0u: goto label_608fa0;
        case 0x608fa4u: goto label_608fa4;
        case 0x608fa8u: goto label_608fa8;
        case 0x608facu: goto label_608fac;
        case 0x608fb0u: goto label_608fb0;
        case 0x608fb4u: goto label_608fb4;
        case 0x608fb8u: goto label_608fb8;
        case 0x608fbcu: goto label_608fbc;
        case 0x608fc0u: goto label_608fc0;
        case 0x608fc4u: goto label_608fc4;
        case 0x608fc8u: goto label_608fc8;
        case 0x608fccu: goto label_608fcc;
        case 0x608fd0u: goto label_608fd0;
        case 0x608fd4u: goto label_608fd4;
        case 0x608fd8u: goto label_608fd8;
        case 0x608fdcu: goto label_608fdc;
        case 0x608fe0u: goto label_608fe0;
        case 0x608fe4u: goto label_608fe4;
        case 0x608fe8u: goto label_608fe8;
        case 0x608fecu: goto label_608fec;
        case 0x608ff0u: goto label_608ff0;
        case 0x608ff4u: goto label_608ff4;
        case 0x608ff8u: goto label_608ff8;
        case 0x608ffcu: goto label_608ffc;
        case 0x609000u: goto label_609000;
        case 0x609004u: goto label_609004;
        case 0x609008u: goto label_609008;
        case 0x60900cu: goto label_60900c;
        case 0x609010u: goto label_609010;
        case 0x609014u: goto label_609014;
        case 0x609018u: goto label_609018;
        case 0x60901cu: goto label_60901c;
        case 0x609020u: goto label_609020;
        case 0x609024u: goto label_609024;
        case 0x609028u: goto label_609028;
        case 0x60902cu: goto label_60902c;
        case 0x609030u: goto label_609030;
        case 0x609034u: goto label_609034;
        case 0x609038u: goto label_609038;
        case 0x60903cu: goto label_60903c;
        case 0x609040u: goto label_609040;
        case 0x609044u: goto label_609044;
        case 0x609048u: goto label_609048;
        case 0x60904cu: goto label_60904c;
        case 0x609050u: goto label_609050;
        case 0x609054u: goto label_609054;
        case 0x609058u: goto label_609058;
        case 0x60905cu: goto label_60905c;
        case 0x609060u: goto label_609060;
        case 0x609064u: goto label_609064;
        case 0x609068u: goto label_609068;
        case 0x60906cu: goto label_60906c;
        case 0x609070u: goto label_609070;
        case 0x609074u: goto label_609074;
        case 0x609078u: goto label_609078;
        case 0x60907cu: goto label_60907c;
        case 0x609080u: goto label_609080;
        case 0x609084u: goto label_609084;
        case 0x609088u: goto label_609088;
        case 0x60908cu: goto label_60908c;
        case 0x609090u: goto label_609090;
        case 0x609094u: goto label_609094;
        case 0x609098u: goto label_609098;
        case 0x60909cu: goto label_60909c;
        case 0x6090a0u: goto label_6090a0;
        case 0x6090a4u: goto label_6090a4;
        case 0x6090a8u: goto label_6090a8;
        case 0x6090acu: goto label_6090ac;
        case 0x6090b0u: goto label_6090b0;
        case 0x6090b4u: goto label_6090b4;
        case 0x6090b8u: goto label_6090b8;
        case 0x6090bcu: goto label_6090bc;
        case 0x6090c0u: goto label_6090c0;
        case 0x6090c4u: goto label_6090c4;
        case 0x6090c8u: goto label_6090c8;
        case 0x6090ccu: goto label_6090cc;
        case 0x6090d0u: goto label_6090d0;
        case 0x6090d4u: goto label_6090d4;
        case 0x6090d8u: goto label_6090d8;
        case 0x6090dcu: goto label_6090dc;
        case 0x6090e0u: goto label_6090e0;
        case 0x6090e4u: goto label_6090e4;
        case 0x6090e8u: goto label_6090e8;
        case 0x6090ecu: goto label_6090ec;
        case 0x6090f0u: goto label_6090f0;
        case 0x6090f4u: goto label_6090f4;
        case 0x6090f8u: goto label_6090f8;
        case 0x6090fcu: goto label_6090fc;
        case 0x609100u: goto label_609100;
        case 0x609104u: goto label_609104;
        case 0x609108u: goto label_609108;
        case 0x60910cu: goto label_60910c;
        case 0x609110u: goto label_609110;
        case 0x609114u: goto label_609114;
        case 0x609118u: goto label_609118;
        case 0x60911cu: goto label_60911c;
        case 0x609120u: goto label_609120;
        case 0x609124u: goto label_609124;
        case 0x609128u: goto label_609128;
        case 0x60912cu: goto label_60912c;
        case 0x609130u: goto label_609130;
        case 0x609134u: goto label_609134;
        case 0x609138u: goto label_609138;
        case 0x60913cu: goto label_60913c;
        case 0x609140u: goto label_609140;
        case 0x609144u: goto label_609144;
        case 0x609148u: goto label_609148;
        case 0x60914cu: goto label_60914c;
        case 0x609150u: goto label_609150;
        case 0x609154u: goto label_609154;
        case 0x609158u: goto label_609158;
        case 0x60915cu: goto label_60915c;
        case 0x609160u: goto label_609160;
        case 0x609164u: goto label_609164;
        case 0x609168u: goto label_609168;
        case 0x60916cu: goto label_60916c;
        case 0x609170u: goto label_609170;
        case 0x609174u: goto label_609174;
        case 0x609178u: goto label_609178;
        case 0x60917cu: goto label_60917c;
        case 0x609180u: goto label_609180;
        case 0x609184u: goto label_609184;
        case 0x609188u: goto label_609188;
        case 0x60918cu: goto label_60918c;
        case 0x609190u: goto label_609190;
        case 0x609194u: goto label_609194;
        case 0x609198u: goto label_609198;
        case 0x60919cu: goto label_60919c;
        case 0x6091a0u: goto label_6091a0;
        case 0x6091a4u: goto label_6091a4;
        case 0x6091a8u: goto label_6091a8;
        case 0x6091acu: goto label_6091ac;
        case 0x6091b0u: goto label_6091b0;
        case 0x6091b4u: goto label_6091b4;
        case 0x6091b8u: goto label_6091b8;
        case 0x6091bcu: goto label_6091bc;
        case 0x6091c0u: goto label_6091c0;
        case 0x6091c4u: goto label_6091c4;
        case 0x6091c8u: goto label_6091c8;
        case 0x6091ccu: goto label_6091cc;
        case 0x6091d0u: goto label_6091d0;
        case 0x6091d4u: goto label_6091d4;
        case 0x6091d8u: goto label_6091d8;
        case 0x6091dcu: goto label_6091dc;
        case 0x6091e0u: goto label_6091e0;
        case 0x6091e4u: goto label_6091e4;
        case 0x6091e8u: goto label_6091e8;
        case 0x6091ecu: goto label_6091ec;
        case 0x6091f0u: goto label_6091f0;
        case 0x6091f4u: goto label_6091f4;
        case 0x6091f8u: goto label_6091f8;
        case 0x6091fcu: goto label_6091fc;
        case 0x609200u: goto label_609200;
        case 0x609204u: goto label_609204;
        case 0x609208u: goto label_609208;
        case 0x60920cu: goto label_60920c;
        case 0x609210u: goto label_609210;
        case 0x609214u: goto label_609214;
        case 0x609218u: goto label_609218;
        case 0x60921cu: goto label_60921c;
        case 0x609220u: goto label_609220;
        case 0x609224u: goto label_609224;
        case 0x609228u: goto label_609228;
        case 0x60922cu: goto label_60922c;
        case 0x609230u: goto label_609230;
        case 0x609234u: goto label_609234;
        case 0x609238u: goto label_609238;
        case 0x60923cu: goto label_60923c;
        case 0x609240u: goto label_609240;
        case 0x609244u: goto label_609244;
        case 0x609248u: goto label_609248;
        case 0x60924cu: goto label_60924c;
        case 0x609250u: goto label_609250;
        case 0x609254u: goto label_609254;
        case 0x609258u: goto label_609258;
        case 0x60925cu: goto label_60925c;
        case 0x609260u: goto label_609260;
        case 0x609264u: goto label_609264;
        case 0x609268u: goto label_609268;
        case 0x60926cu: goto label_60926c;
        case 0x609270u: goto label_609270;
        case 0x609274u: goto label_609274;
        case 0x609278u: goto label_609278;
        case 0x60927cu: goto label_60927c;
        case 0x609280u: goto label_609280;
        case 0x609284u: goto label_609284;
        case 0x609288u: goto label_609288;
        case 0x60928cu: goto label_60928c;
        case 0x609290u: goto label_609290;
        case 0x609294u: goto label_609294;
        case 0x609298u: goto label_609298;
        case 0x60929cu: goto label_60929c;
        case 0x6092a0u: goto label_6092a0;
        case 0x6092a4u: goto label_6092a4;
        case 0x6092a8u: goto label_6092a8;
        case 0x6092acu: goto label_6092ac;
        case 0x6092b0u: goto label_6092b0;
        case 0x6092b4u: goto label_6092b4;
        case 0x6092b8u: goto label_6092b8;
        case 0x6092bcu: goto label_6092bc;
        case 0x6092c0u: goto label_6092c0;
        case 0x6092c4u: goto label_6092c4;
        case 0x6092c8u: goto label_6092c8;
        case 0x6092ccu: goto label_6092cc;
        case 0x6092d0u: goto label_6092d0;
        case 0x6092d4u: goto label_6092d4;
        case 0x6092d8u: goto label_6092d8;
        case 0x6092dcu: goto label_6092dc;
        case 0x6092e0u: goto label_6092e0;
        case 0x6092e4u: goto label_6092e4;
        case 0x6092e8u: goto label_6092e8;
        case 0x6092ecu: goto label_6092ec;
        case 0x6092f0u: goto label_6092f0;
        case 0x6092f4u: goto label_6092f4;
        case 0x6092f8u: goto label_6092f8;
        case 0x6092fcu: goto label_6092fc;
        case 0x609300u: goto label_609300;
        case 0x609304u: goto label_609304;
        case 0x609308u: goto label_609308;
        case 0x60930cu: goto label_60930c;
        case 0x609310u: goto label_609310;
        case 0x609314u: goto label_609314;
        case 0x609318u: goto label_609318;
        case 0x60931cu: goto label_60931c;
        case 0x609320u: goto label_609320;
        case 0x609324u: goto label_609324;
        case 0x609328u: goto label_609328;
        case 0x60932cu: goto label_60932c;
        case 0x609330u: goto label_609330;
        case 0x609334u: goto label_609334;
        case 0x609338u: goto label_609338;
        case 0x60933cu: goto label_60933c;
        case 0x609340u: goto label_609340;
        case 0x609344u: goto label_609344;
        case 0x609348u: goto label_609348;
        case 0x60934cu: goto label_60934c;
        case 0x609350u: goto label_609350;
        case 0x609354u: goto label_609354;
        case 0x609358u: goto label_609358;
        case 0x60935cu: goto label_60935c;
        case 0x609360u: goto label_609360;
        case 0x609364u: goto label_609364;
        case 0x609368u: goto label_609368;
        case 0x60936cu: goto label_60936c;
        case 0x609370u: goto label_609370;
        case 0x609374u: goto label_609374;
        case 0x609378u: goto label_609378;
        case 0x60937cu: goto label_60937c;
        case 0x609380u: goto label_609380;
        case 0x609384u: goto label_609384;
        case 0x609388u: goto label_609388;
        case 0x60938cu: goto label_60938c;
        case 0x609390u: goto label_609390;
        case 0x609394u: goto label_609394;
        case 0x609398u: goto label_609398;
        case 0x60939cu: goto label_60939c;
        case 0x6093a0u: goto label_6093a0;
        case 0x6093a4u: goto label_6093a4;
        case 0x6093a8u: goto label_6093a8;
        case 0x6093acu: goto label_6093ac;
        case 0x6093b0u: goto label_6093b0;
        case 0x6093b4u: goto label_6093b4;
        case 0x6093b8u: goto label_6093b8;
        case 0x6093bcu: goto label_6093bc;
        case 0x6093c0u: goto label_6093c0;
        case 0x6093c4u: goto label_6093c4;
        case 0x6093c8u: goto label_6093c8;
        case 0x6093ccu: goto label_6093cc;
        case 0x6093d0u: goto label_6093d0;
        case 0x6093d4u: goto label_6093d4;
        case 0x6093d8u: goto label_6093d8;
        case 0x6093dcu: goto label_6093dc;
        case 0x6093e0u: goto label_6093e0;
        case 0x6093e4u: goto label_6093e4;
        case 0x6093e8u: goto label_6093e8;
        case 0x6093ecu: goto label_6093ec;
        case 0x6093f0u: goto label_6093f0;
        case 0x6093f4u: goto label_6093f4;
        case 0x6093f8u: goto label_6093f8;
        case 0x6093fcu: goto label_6093fc;
        case 0x609400u: goto label_609400;
        case 0x609404u: goto label_609404;
        case 0x609408u: goto label_609408;
        case 0x60940cu: goto label_60940c;
        case 0x609410u: goto label_609410;
        case 0x609414u: goto label_609414;
        case 0x609418u: goto label_609418;
        case 0x60941cu: goto label_60941c;
        case 0x609420u: goto label_609420;
        case 0x609424u: goto label_609424;
        case 0x609428u: goto label_609428;
        case 0x60942cu: goto label_60942c;
        case 0x609430u: goto label_609430;
        case 0x609434u: goto label_609434;
        case 0x609438u: goto label_609438;
        case 0x60943cu: goto label_60943c;
        case 0x609440u: goto label_609440;
        case 0x609444u: goto label_609444;
        case 0x609448u: goto label_609448;
        case 0x60944cu: goto label_60944c;
        case 0x609450u: goto label_609450;
        case 0x609454u: goto label_609454;
        case 0x609458u: goto label_609458;
        case 0x60945cu: goto label_60945c;
        case 0x609460u: goto label_609460;
        case 0x609464u: goto label_609464;
        case 0x609468u: goto label_609468;
        case 0x60946cu: goto label_60946c;
        case 0x609470u: goto label_609470;
        case 0x609474u: goto label_609474;
        case 0x609478u: goto label_609478;
        case 0x60947cu: goto label_60947c;
        case 0x609480u: goto label_609480;
        case 0x609484u: goto label_609484;
        case 0x609488u: goto label_609488;
        case 0x60948cu: goto label_60948c;
        case 0x609490u: goto label_609490;
        case 0x609494u: goto label_609494;
        case 0x609498u: goto label_609498;
        case 0x60949cu: goto label_60949c;
        case 0x6094a0u: goto label_6094a0;
        case 0x6094a4u: goto label_6094a4;
        case 0x6094a8u: goto label_6094a8;
        case 0x6094acu: goto label_6094ac;
        case 0x6094b0u: goto label_6094b0;
        case 0x6094b4u: goto label_6094b4;
        case 0x6094b8u: goto label_6094b8;
        case 0x6094bcu: goto label_6094bc;
        case 0x6094c0u: goto label_6094c0;
        case 0x6094c4u: goto label_6094c4;
        case 0x6094c8u: goto label_6094c8;
        case 0x6094ccu: goto label_6094cc;
        case 0x6094d0u: goto label_6094d0;
        case 0x6094d4u: goto label_6094d4;
        case 0x6094d8u: goto label_6094d8;
        case 0x6094dcu: goto label_6094dc;
        case 0x6094e0u: goto label_6094e0;
        case 0x6094e4u: goto label_6094e4;
        case 0x6094e8u: goto label_6094e8;
        case 0x6094ecu: goto label_6094ec;
        case 0x6094f0u: goto label_6094f0;
        case 0x6094f4u: goto label_6094f4;
        case 0x6094f8u: goto label_6094f8;
        case 0x6094fcu: goto label_6094fc;
        case 0x609500u: goto label_609500;
        case 0x609504u: goto label_609504;
        case 0x609508u: goto label_609508;
        case 0x60950cu: goto label_60950c;
        case 0x609510u: goto label_609510;
        case 0x609514u: goto label_609514;
        case 0x609518u: goto label_609518;
        case 0x60951cu: goto label_60951c;
        case 0x609520u: goto label_609520;
        case 0x609524u: goto label_609524;
        case 0x609528u: goto label_609528;
        case 0x60952cu: goto label_60952c;
        case 0x609530u: goto label_609530;
        case 0x609534u: goto label_609534;
        case 0x609538u: goto label_609538;
        case 0x60953cu: goto label_60953c;
        case 0x609540u: goto label_609540;
        case 0x609544u: goto label_609544;
        case 0x609548u: goto label_609548;
        case 0x60954cu: goto label_60954c;
        case 0x609550u: goto label_609550;
        case 0x609554u: goto label_609554;
        case 0x609558u: goto label_609558;
        case 0x60955cu: goto label_60955c;
        case 0x609560u: goto label_609560;
        case 0x609564u: goto label_609564;
        case 0x609568u: goto label_609568;
        case 0x60956cu: goto label_60956c;
        case 0x609570u: goto label_609570;
        case 0x609574u: goto label_609574;
        case 0x609578u: goto label_609578;
        case 0x60957cu: goto label_60957c;
        case 0x609580u: goto label_609580;
        case 0x609584u: goto label_609584;
        case 0x609588u: goto label_609588;
        case 0x60958cu: goto label_60958c;
        case 0x609590u: goto label_609590;
        case 0x609594u: goto label_609594;
        case 0x609598u: goto label_609598;
        case 0x60959cu: goto label_60959c;
        case 0x6095a0u: goto label_6095a0;
        case 0x6095a4u: goto label_6095a4;
        case 0x6095a8u: goto label_6095a8;
        case 0x6095acu: goto label_6095ac;
        case 0x6095b0u: goto label_6095b0;
        case 0x6095b4u: goto label_6095b4;
        case 0x6095b8u: goto label_6095b8;
        case 0x6095bcu: goto label_6095bc;
        case 0x6095c0u: goto label_6095c0;
        case 0x6095c4u: goto label_6095c4;
        case 0x6095c8u: goto label_6095c8;
        case 0x6095ccu: goto label_6095cc;
        case 0x6095d0u: goto label_6095d0;
        case 0x6095d4u: goto label_6095d4;
        case 0x6095d8u: goto label_6095d8;
        case 0x6095dcu: goto label_6095dc;
        case 0x6095e0u: goto label_6095e0;
        case 0x6095e4u: goto label_6095e4;
        case 0x6095e8u: goto label_6095e8;
        case 0x6095ecu: goto label_6095ec;
        case 0x6095f0u: goto label_6095f0;
        case 0x6095f4u: goto label_6095f4;
        case 0x6095f8u: goto label_6095f8;
        case 0x6095fcu: goto label_6095fc;
        case 0x609600u: goto label_609600;
        case 0x609604u: goto label_609604;
        case 0x609608u: goto label_609608;
        case 0x60960cu: goto label_60960c;
        case 0x609610u: goto label_609610;
        case 0x609614u: goto label_609614;
        case 0x609618u: goto label_609618;
        case 0x60961cu: goto label_60961c;
        case 0x609620u: goto label_609620;
        case 0x609624u: goto label_609624;
        case 0x609628u: goto label_609628;
        case 0x60962cu: goto label_60962c;
        case 0x609630u: goto label_609630;
        case 0x609634u: goto label_609634;
        case 0x609638u: goto label_609638;
        case 0x60963cu: goto label_60963c;
        case 0x609640u: goto label_609640;
        case 0x609644u: goto label_609644;
        case 0x609648u: goto label_609648;
        case 0x60964cu: goto label_60964c;
        case 0x609650u: goto label_609650;
        case 0x609654u: goto label_609654;
        case 0x609658u: goto label_609658;
        case 0x60965cu: goto label_60965c;
        case 0x609660u: goto label_609660;
        case 0x609664u: goto label_609664;
        case 0x609668u: goto label_609668;
        case 0x60966cu: goto label_60966c;
        case 0x609670u: goto label_609670;
        case 0x609674u: goto label_609674;
        case 0x609678u: goto label_609678;
        case 0x60967cu: goto label_60967c;
        case 0x609680u: goto label_609680;
        case 0x609684u: goto label_609684;
        case 0x609688u: goto label_609688;
        case 0x60968cu: goto label_60968c;
        case 0x609690u: goto label_609690;
        case 0x609694u: goto label_609694;
        case 0x609698u: goto label_609698;
        case 0x60969cu: goto label_60969c;
        case 0x6096a0u: goto label_6096a0;
        case 0x6096a4u: goto label_6096a4;
        case 0x6096a8u: goto label_6096a8;
        case 0x6096acu: goto label_6096ac;
        case 0x6096b0u: goto label_6096b0;
        case 0x6096b4u: goto label_6096b4;
        case 0x6096b8u: goto label_6096b8;
        case 0x6096bcu: goto label_6096bc;
        case 0x6096c0u: goto label_6096c0;
        case 0x6096c4u: goto label_6096c4;
        case 0x6096c8u: goto label_6096c8;
        case 0x6096ccu: goto label_6096cc;
        case 0x6096d0u: goto label_6096d0;
        case 0x6096d4u: goto label_6096d4;
        case 0x6096d8u: goto label_6096d8;
        case 0x6096dcu: goto label_6096dc;
        case 0x6096e0u: goto label_6096e0;
        case 0x6096e4u: goto label_6096e4;
        case 0x6096e8u: goto label_6096e8;
        case 0x6096ecu: goto label_6096ec;
        case 0x6096f0u: goto label_6096f0;
        case 0x6096f4u: goto label_6096f4;
        case 0x6096f8u: goto label_6096f8;
        case 0x6096fcu: goto label_6096fc;
        case 0x609700u: goto label_609700;
        case 0x609704u: goto label_609704;
        case 0x609708u: goto label_609708;
        case 0x60970cu: goto label_60970c;
        case 0x609710u: goto label_609710;
        case 0x609714u: goto label_609714;
        case 0x609718u: goto label_609718;
        case 0x60971cu: goto label_60971c;
        case 0x609720u: goto label_609720;
        case 0x609724u: goto label_609724;
        case 0x609728u: goto label_609728;
        case 0x60972cu: goto label_60972c;
        case 0x609730u: goto label_609730;
        case 0x609734u: goto label_609734;
        case 0x609738u: goto label_609738;
        case 0x60973cu: goto label_60973c;
        case 0x609740u: goto label_609740;
        case 0x609744u: goto label_609744;
        case 0x609748u: goto label_609748;
        case 0x60974cu: goto label_60974c;
        case 0x609750u: goto label_609750;
        case 0x609754u: goto label_609754;
        case 0x609758u: goto label_609758;
        case 0x60975cu: goto label_60975c;
        case 0x609760u: goto label_609760;
        case 0x609764u: goto label_609764;
        case 0x609768u: goto label_609768;
        case 0x60976cu: goto label_60976c;
        case 0x609770u: goto label_609770;
        case 0x609774u: goto label_609774;
        case 0x609778u: goto label_609778;
        case 0x60977cu: goto label_60977c;
        case 0x609780u: goto label_609780;
        case 0x609784u: goto label_609784;
        case 0x609788u: goto label_609788;
        case 0x60978cu: goto label_60978c;
        case 0x609790u: goto label_609790;
        case 0x609794u: goto label_609794;
        case 0x609798u: goto label_609798;
        case 0x60979cu: goto label_60979c;
        case 0x6097a0u: goto label_6097a0;
        case 0x6097a4u: goto label_6097a4;
        case 0x6097a8u: goto label_6097a8;
        case 0x6097acu: goto label_6097ac;
        case 0x6097b0u: goto label_6097b0;
        case 0x6097b4u: goto label_6097b4;
        case 0x6097b8u: goto label_6097b8;
        case 0x6097bcu: goto label_6097bc;
        case 0x6097c0u: goto label_6097c0;
        case 0x6097c4u: goto label_6097c4;
        case 0x6097c8u: goto label_6097c8;
        case 0x6097ccu: goto label_6097cc;
        case 0x6097d0u: goto label_6097d0;
        case 0x6097d4u: goto label_6097d4;
        case 0x6097d8u: goto label_6097d8;
        case 0x6097dcu: goto label_6097dc;
        case 0x6097e0u: goto label_6097e0;
        case 0x6097e4u: goto label_6097e4;
        case 0x6097e8u: goto label_6097e8;
        case 0x6097ecu: goto label_6097ec;
        case 0x6097f0u: goto label_6097f0;
        case 0x6097f4u: goto label_6097f4;
        case 0x6097f8u: goto label_6097f8;
        case 0x6097fcu: goto label_6097fc;
        case 0x609800u: goto label_609800;
        case 0x609804u: goto label_609804;
        case 0x609808u: goto label_609808;
        case 0x60980cu: goto label_60980c;
        case 0x609810u: goto label_609810;
        case 0x609814u: goto label_609814;
        case 0x609818u: goto label_609818;
        case 0x60981cu: goto label_60981c;
        case 0x609820u: goto label_609820;
        case 0x609824u: goto label_609824;
        case 0x609828u: goto label_609828;
        case 0x60982cu: goto label_60982c;
        case 0x609830u: goto label_609830;
        case 0x609834u: goto label_609834;
        case 0x609838u: goto label_609838;
        case 0x60983cu: goto label_60983c;
        case 0x609840u: goto label_609840;
        case 0x609844u: goto label_609844;
        case 0x609848u: goto label_609848;
        case 0x60984cu: goto label_60984c;
        case 0x609850u: goto label_609850;
        case 0x609854u: goto label_609854;
        case 0x609858u: goto label_609858;
        case 0x60985cu: goto label_60985c;
        case 0x609860u: goto label_609860;
        case 0x609864u: goto label_609864;
        case 0x609868u: goto label_609868;
        case 0x60986cu: goto label_60986c;
        case 0x609870u: goto label_609870;
        case 0x609874u: goto label_609874;
        case 0x609878u: goto label_609878;
        case 0x60987cu: goto label_60987c;
        case 0x609880u: goto label_609880;
        case 0x609884u: goto label_609884;
        case 0x609888u: goto label_609888;
        case 0x60988cu: goto label_60988c;
        case 0x609890u: goto label_609890;
        case 0x609894u: goto label_609894;
        case 0x609898u: goto label_609898;
        case 0x60989cu: goto label_60989c;
        case 0x6098a0u: goto label_6098a0;
        case 0x6098a4u: goto label_6098a4;
        case 0x6098a8u: goto label_6098a8;
        case 0x6098acu: goto label_6098ac;
        case 0x6098b0u: goto label_6098b0;
        case 0x6098b4u: goto label_6098b4;
        case 0x6098b8u: goto label_6098b8;
        case 0x6098bcu: goto label_6098bc;
        case 0x6098c0u: goto label_6098c0;
        case 0x6098c4u: goto label_6098c4;
        case 0x6098c8u: goto label_6098c8;
        case 0x6098ccu: goto label_6098cc;
        case 0x6098d0u: goto label_6098d0;
        case 0x6098d4u: goto label_6098d4;
        case 0x6098d8u: goto label_6098d8;
        case 0x6098dcu: goto label_6098dc;
        case 0x6098e0u: goto label_6098e0;
        case 0x6098e4u: goto label_6098e4;
        case 0x6098e8u: goto label_6098e8;
        case 0x6098ecu: goto label_6098ec;
        case 0x6098f0u: goto label_6098f0;
        case 0x6098f4u: goto label_6098f4;
        case 0x6098f8u: goto label_6098f8;
        case 0x6098fcu: goto label_6098fc;
        case 0x609900u: goto label_609900;
        case 0x609904u: goto label_609904;
        case 0x609908u: goto label_609908;
        case 0x60990cu: goto label_60990c;
        case 0x609910u: goto label_609910;
        case 0x609914u: goto label_609914;
        case 0x609918u: goto label_609918;
        case 0x60991cu: goto label_60991c;
        case 0x609920u: goto label_609920;
        case 0x609924u: goto label_609924;
        case 0x609928u: goto label_609928;
        case 0x60992cu: goto label_60992c;
        case 0x609930u: goto label_609930;
        case 0x609934u: goto label_609934;
        case 0x609938u: goto label_609938;
        case 0x60993cu: goto label_60993c;
        case 0x609940u: goto label_609940;
        case 0x609944u: goto label_609944;
        case 0x609948u: goto label_609948;
        case 0x60994cu: goto label_60994c;
        case 0x609950u: goto label_609950;
        case 0x609954u: goto label_609954;
        case 0x609958u: goto label_609958;
        case 0x60995cu: goto label_60995c;
        case 0x609960u: goto label_609960;
        case 0x609964u: goto label_609964;
        case 0x609968u: goto label_609968;
        case 0x60996cu: goto label_60996c;
        case 0x609970u: goto label_609970;
        case 0x609974u: goto label_609974;
        case 0x609978u: goto label_609978;
        case 0x60997cu: goto label_60997c;
        case 0x609980u: goto label_609980;
        case 0x609984u: goto label_609984;
        case 0x609988u: goto label_609988;
        case 0x60998cu: goto label_60998c;
        case 0x609990u: goto label_609990;
        case 0x609994u: goto label_609994;
        case 0x609998u: goto label_609998;
        case 0x60999cu: goto label_60999c;
        case 0x6099a0u: goto label_6099a0;
        case 0x6099a4u: goto label_6099a4;
        case 0x6099a8u: goto label_6099a8;
        case 0x6099acu: goto label_6099ac;
        case 0x6099b0u: goto label_6099b0;
        case 0x6099b4u: goto label_6099b4;
        case 0x6099b8u: goto label_6099b8;
        case 0x6099bcu: goto label_6099bc;
        case 0x6099c0u: goto label_6099c0;
        case 0x6099c4u: goto label_6099c4;
        case 0x6099c8u: goto label_6099c8;
        case 0x6099ccu: goto label_6099cc;
        case 0x6099d0u: goto label_6099d0;
        case 0x6099d4u: goto label_6099d4;
        case 0x6099d8u: goto label_6099d8;
        case 0x6099dcu: goto label_6099dc;
        case 0x6099e0u: goto label_6099e0;
        case 0x6099e4u: goto label_6099e4;
        case 0x6099e8u: goto label_6099e8;
        case 0x6099ecu: goto label_6099ec;
        case 0x6099f0u: goto label_6099f0;
        case 0x6099f4u: goto label_6099f4;
        case 0x6099f8u: goto label_6099f8;
        case 0x6099fcu: goto label_6099fc;
        case 0x609a00u: goto label_609a00;
        case 0x609a04u: goto label_609a04;
        case 0x609a08u: goto label_609a08;
        case 0x609a0cu: goto label_609a0c;
        case 0x609a10u: goto label_609a10;
        case 0x609a14u: goto label_609a14;
        case 0x609a18u: goto label_609a18;
        case 0x609a1cu: goto label_609a1c;
        case 0x609a20u: goto label_609a20;
        case 0x609a24u: goto label_609a24;
        case 0x609a28u: goto label_609a28;
        case 0x609a2cu: goto label_609a2c;
        case 0x609a30u: goto label_609a30;
        case 0x609a34u: goto label_609a34;
        case 0x609a38u: goto label_609a38;
        case 0x609a3cu: goto label_609a3c;
        case 0x609a40u: goto label_609a40;
        case 0x609a44u: goto label_609a44;
        default: break;
    }

    ctx->pc = 0x606060u;

label_606060:
    // 0x606060: 0x244730  tge         $at, $a0, 284
    ctx->pc = 0x606060u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_606064:
    // 0x606064: 0x2447b0  tge         $at, $a0, 286
    ctx->pc = 0x606064u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_606068:
    // 0x606068: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606068u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
label_60606c:
    // 0x60606c: 0x294b40  .word       0x00294B40                   # sll         $t1, $t1, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60606cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 13));
label_606070:
    // 0x606070: 0x294cd0  .word       0x00294CD0                   # mfhi        $t1 # 002904C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606070u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_606074:
    // 0x606074: 0x244850  .word       0x00244850                   # mfhi        $t1 # 00240040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606074u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_606078:
    // 0x606078: 0x294dc0  .word       0x00294DC0                   # sll         $t1, $t1, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606078u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 23));
label_60607c:
    // 0x60607c: 0x0  nop
    ctx->pc = 0x60607cu;
    // NOP
label_606080:
    // 0x606080: 0x0  nop
    ctx->pc = 0x606080u;
    // NOP
label_606084:
    // 0x606084: 0x0  nop
    ctx->pc = 0x606084u;
    // NOP
label_606088:
    // 0x606088: 0x294bd0  .word       0x00294BD0                   # mfhi        $t1 # 002903C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606088u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_60608c:
    // 0x60608c: 0x294c50  .word       0x00294C50                   # mfhi        $t1 # 00290440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60608cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_606090:
    // 0x606090: 0x244730  tge         $at, $a0, 284
    ctx->pc = 0x606090u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_606094:
    // 0x606094: 0x2447b0  tge         $at, $a0, 286
    ctx->pc = 0x606094u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_606098:
    // 0x606098: 0x297060  .word       0x00297060                   # add         $t6, $at, $t1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606098u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_60609c:
    // 0x60609c: 0x296fb0  tge         $at, $t1, 446
    ctx->pc = 0x60609cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_6060a0:
    // 0x6060a0: 0x297020  add         $t6, $at, $t1
    ctx->pc = 0x6060a0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_6060a4:
    // 0x6060a4: 0x2970a0  .word       0x002970A0                   # add         $t6, $at, $t1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6060a4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_6060a8:
    // 0x6060a8: 0x297460  .word       0x00297460                   # add         $t6, $at, $t1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6060a8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_6060ac:
    // 0x6060ac: 0x0  nop
    ctx->pc = 0x6060acu;
    // NOP
label_6060b0:
    // 0x6060b0: 0x0  nop
    ctx->pc = 0x6060b0u;
    // NOP
label_6060b4:
    // 0x6060b4: 0x0  nop
    ctx->pc = 0x6060b4u;
    // NOP
label_6060b8:
    // 0x6060b8: 0x297930  tge         $at, $t1, 484
    ctx->pc = 0x6060b8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_6060bc:
    // 0x6060bc: 0x2979e0  .word       0x002979E0                   # add         $t7, $at, $t1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6060bcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_6060c0:
    // 0x6060c0: 0x244730  tge         $at, $a0, 284
    ctx->pc = 0x6060c0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_6060c4:
    // 0x6060c4: 0x2447b0  tge         $at, $a0, 286
    ctx->pc = 0x6060c4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_6060c8:
    // 0x6060c8: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6060c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
label_6060cc:
    // 0x6060cc: 0x2978c0  .word       0x002978C0                   # sll         $t7, $t1, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6060ccu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_6060d0:
    // 0x6060d0: 0x297aa0  .word       0x00297AA0                   # add         $t7, $at, $t1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6060d0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_6060d4:
    // 0x6060d4: 0x244850  .word       0x00244850                   # mfhi        $t1 # 00240040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6060d4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_6060d8:
    // 0x6060d8: 0x0  nop
    ctx->pc = 0x6060d8u;
    // NOP
label_6060dc:
    // 0x6060dc: 0x0  nop
    ctx->pc = 0x6060dcu;
    // NOP
label_6060e0:
    // 0x6060e0: 0x0  nop
    ctx->pc = 0x6060e0u;
    // NOP
label_6060e4:
    // 0x6060e4: 0x0  nop
    ctx->pc = 0x6060e4u;
    // NOP
label_6060e8:
    // 0x6060e8: 0x298770  tge         $at, $t1, 541
    ctx->pc = 0x6060e8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_6060ec:
    // 0x6060ec: 0x2987b0  tge         $at, $t1, 542
    ctx->pc = 0x6060ecu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_6060f0:
    // 0x6060f0: 0x244730  tge         $at, $a0, 284
    ctx->pc = 0x6060f0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_6060f4:
    // 0x6060f4: 0x2447b0  tge         $at, $a0, 286
    ctx->pc = 0x6060f4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_6060f8:
    // 0x6060f8: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6060f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
label_6060fc:
    // 0x6060fc: 0x2986e0  .word       0x002986E0                   # add         $s0, $at, $t1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6060fcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_606100:
    // 0x606100: 0x298800  .word       0x00298800                   # sll         $s1, $t1, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606100u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 9), 0));
label_606104:
    // 0x606104: 0x244850  .word       0x00244850                   # mfhi        $t1 # 00240040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606104u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_606108:
    // 0x606108: 0x0  nop
    ctx->pc = 0x606108u;
    // NOP
label_60610c:
    // 0x60610c: 0x0  nop
    ctx->pc = 0x60610cu;
    // NOP
label_606110:
    // 0x606110: 0x0  nop
    ctx->pc = 0x606110u;
    // NOP
label_606114:
    // 0x606114: 0x0  nop
    ctx->pc = 0x606114u;
    // NOP
label_606118:
    // 0x606118: 0x2990d0  .word       0x002990D0                   # mfhi        $s2 # 002900C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606118u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_60611c:
    // 0x60611c: 0x299110  .word       0x00299110                   # mfhi        $s2 # 00290100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60611cu;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_606120:
    // 0x606120: 0x244730  tge         $at, $a0, 284
    ctx->pc = 0x606120u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_606124:
    // 0x606124: 0x2447b0  tge         $at, $a0, 286
    ctx->pc = 0x606124u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_606128:
    // 0x606128: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606128u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
label_60612c:
    // 0x60612c: 0x299060  .word       0x00299060                   # add         $s2, $at, $t1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60612cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_606130:
    // 0x606130: 0x299170  tge         $at, $t1, 581
    ctx->pc = 0x606130u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_606134:
    // 0x606134: 0x2993e0  .word       0x002993E0                   # add         $s2, $at, $t1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606134u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_606138:
    // 0x606138: 0x0  nop
    ctx->pc = 0x606138u;
    // NOP
label_60613c:
    // 0x60613c: 0x0  nop
    ctx->pc = 0x60613cu;
    // NOP
label_606140:
    // 0x606140: 0x0  nop
    ctx->pc = 0x606140u;
    // NOP
label_606144:
    // 0x606144: 0x0  nop
    ctx->pc = 0x606144u;
    // NOP
label_606148:
    // 0x606148: 0x2998a0  .word       0x002998A0                   # add         $s3, $at, $t1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606148u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_60614c:
    // 0x60614c: 0x299990  .word       0x00299990                   # mfhi        $s3 # 00290180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60614cu;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_606150:
    // 0x606150: 0x0  nop
    ctx->pc = 0x606150u;
    // NOP
label_606154:
    // 0x606154: 0x0  nop
    ctx->pc = 0x606154u;
    // NOP
label_606158:
    // 0x606158: 0x299c20  .word       0x00299C20                   # add         $s3, $at, $t1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606158u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_60615c:
    // 0x60615c: 0x299990  .word       0x00299990                   # mfhi        $s3 # 00290180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60615cu;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_606160:
    // 0x606160: 0x0  nop
    ctx->pc = 0x606160u;
    // NOP
label_606164:
    // 0x606164: 0x0  nop
    ctx->pc = 0x606164u;
    // NOP
label_606168:
    // 0x606168: 0x29a150  .word       0x0029A150                   # mfhi        $s4 # 00290140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606168u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_60616c:
    // 0x60616c: 0x29a190  .word       0x0029A190                   # mfhi        $s4 # 00290180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60616cu;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_606170:
    // 0x606170: 0x29a2a0  .word       0x0029A2A0                   # add         $s4, $at, $t1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606170u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_606174:
    // 0x606174: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606174u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_606178:
    // 0x606178: 0x29a420  .word       0x0029A420                   # add         $s4, $at, $t1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606178u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_60617c:
    // 0x60617c: 0x0  nop
    ctx->pc = 0x60617cu;
    // NOP
label_606180:
    // 0x606180: 0x0  nop
    ctx->pc = 0x606180u;
    // NOP
label_606184:
    // 0x606184: 0x0  nop
    ctx->pc = 0x606184u;
    // NOP
label_606188:
    // 0x606188: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x606188u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_60618c:
    // 0x60618c: 0x29c0b0  tge         $at, $t1, 770
    ctx->pc = 0x60618cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_606190:
    // 0x606190: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x606190u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_606194:
    // 0x606194: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606194u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_606198:
    // 0x606198: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606198u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_60619c:
    // 0x60619c: 0x29bff0  tge         $at, $t1, 767
    ctx->pc = 0x60619cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_6061a0:
    // 0x6061a0: 0x29c060  .word       0x0029C060                   # add         $t8, $at, $t1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6061a0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_6061a4:
    // 0x6061a4: 0x29c0e0  .word       0x0029C0E0                   # add         $t8, $at, $t1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6061a4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_6061a8:
    // 0x6061a8: 0x29c110  .word       0x0029C110                   # mfhi        $t8 # 00290100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6061a8u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_6061ac:
    // 0x6061ac: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6061acu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_6061b0:
    // 0x6061b0: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6061b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_6061b4:
    // 0x6061b4: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x6061b4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_6061b8:
    // 0x6061b8: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6061b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_6061bc:
    // 0x6061bc: 0x0  nop
    ctx->pc = 0x6061bcu;
    // NOP
label_6061c0:
    // 0x6061c0: 0x0  nop
    ctx->pc = 0x6061c0u;
    // NOP
label_6061c4:
    // 0x6061c4: 0x0  nop
    ctx->pc = 0x6061c4u;
    // NOP
label_6061c8:
    // 0x6061c8: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x6061c8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_6061cc:
    // 0x6061cc: 0x29c8e0  .word       0x0029C8E0                   # add         $t9, $at, $t1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6061ccu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_6061d0:
    // 0x6061d0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x6061d0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_6061d4:
    // 0x6061d4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6061d4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_6061d8:
    // 0x6061d8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6061d8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_6061dc:
    // 0x6061dc: 0x29c800  .word       0x0029C800                   # sll         $t9, $t1, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6061dcu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 9), 0));
label_6061e0:
    // 0x6061e0: 0x29c890  .word       0x0029C890                   # mfhi        $t9 # 00290080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6061e0u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_6061e4:
    // 0x6061e4: 0x29c910  .word       0x0029C910                   # mfhi        $t9 # 00290100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6061e4u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_6061e8:
    // 0x6061e8: 0x29c9e0  .word       0x0029C9E0                   # add         $t9, $at, $t1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6061e8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_6061ec:
    // 0x6061ec: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6061ecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_6061f0:
    // 0x6061f0: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6061f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_6061f4:
    // 0x6061f4: 0x29d380  .word       0x0029D380                   # sll         $k0, $t1, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6061f4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 9), 14));
label_6061f8:
    // 0x6061f8: 0x29d2f0  tge         $at, $t1, 843
    ctx->pc = 0x6061f8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_6061fc:
    // 0x6061fc: 0x29d560  .word       0x0029D560                   # add         $k0, $at, $t1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6061fcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_606200:
    // 0x606200: 0x29d790  .word       0x0029D790                   # mfhi        $k0 # 00290780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606200u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_606204:
    // 0x606204: 0x29d9e0  .word       0x0029D9E0                   # add         $k1, $at, $t1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606204u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_606208:
    // 0x606208: 0x29da30  tge         $at, $t1, 872
    ctx->pc = 0x606208u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_60620c:
    // 0x60620c: 0x29daf0  tge         $at, $t1, 875
    ctx->pc = 0x60620cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_606210:
    // 0x606210: 0x0  nop
    ctx->pc = 0x606210u;
    // NOP
label_606214:
    // 0x606214: 0x0  nop
    ctx->pc = 0x606214u;
    // NOP
label_606218:
    // 0x606218: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x606218u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_60621c:
    // 0x60621c: 0x29c8e0  .word       0x0029C8E0                   # add         $t9, $at, $t1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60621cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_606220:
    // 0x606220: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x606220u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_606224:
    // 0x606224: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606224u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_606228:
    // 0x606228: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606228u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_60622c:
    // 0x60622c: 0x29df80  .word       0x0029DF80                   # sll         $k1, $t1, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60622cu;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 9), 30));
label_606230:
    // 0x606230: 0x29c890  .word       0x0029C890                   # mfhi        $t9 # 00290080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606230u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_606234:
    // 0x606234: 0x29dff0  tge         $at, $t1, 895
    ctx->pc = 0x606234u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_606238:
    // 0x606238: 0x29c9e0  .word       0x0029C9E0                   # add         $t9, $at, $t1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606238u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_60623c:
    // 0x60623c: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60623cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_606240:
    // 0x606240: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606240u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_606244:
    // 0x606244: 0x29d380  .word       0x0029D380                   # sll         $k0, $t1, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606244u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 9), 14));
label_606248:
    // 0x606248: 0x29e070  tge         $at, $t1, 897
    ctx->pc = 0x606248u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_60624c:
    // 0x60624c: 0x29d560  .word       0x0029D560                   # add         $k0, $at, $t1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60624cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_606250:
    // 0x606250: 0x29d790  .word       0x0029D790                   # mfhi        $k0 # 00290780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606250u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_606254:
    // 0x606254: 0x29e110  .word       0x0029E110                   # mfhi        $gp # 00290100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606254u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_606258:
    // 0x606258: 0x29e160  .word       0x0029E160                   # add         $gp, $at, $t1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606258u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_60625c:
    // 0x60625c: 0x29e2b0  tge         $at, $t1, 906
    ctx->pc = 0x60625cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_606260:
    // 0x606260: 0x0  nop
    ctx->pc = 0x606260u;
    // NOP
label_606264:
    // 0x606264: 0x0  nop
    ctx->pc = 0x606264u;
    // NOP
label_606268:
    // 0x606268: 0x29ed30  tge         $at, $t1, 948
    ctx->pc = 0x606268u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_60626c:
    // 0x60626c: 0x29eea0  .word       0x0029EEA0                   # add         $sp, $at, $t1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60626cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_606270:
    // 0x606270: 0x244730  tge         $at, $a0, 284
    ctx->pc = 0x606270u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_606274:
    // 0x606274: 0x2447b0  tge         $at, $a0, 286
    ctx->pc = 0x606274u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_606278:
    // 0x606278: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606278u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
label_60627c:
    // 0x60627c: 0x29ec70  tge         $at, $t1, 945
    ctx->pc = 0x60627cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_606280:
    // 0x606280: 0x29f040  .word       0x0029F040                   # sll         $fp, $t1, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606280u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_606284:
    // 0x606284: 0x2a1c50  .word       0x002A1C50                   # mfhi        $v1 # 002A0440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606284u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_606288:
    // 0x606288: 0x29f710  .word       0x0029F710                   # mfhi        $fp # 00290700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606288u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_60628c:
    // 0x60628c: 0x0  nop
    ctx->pc = 0x60628cu;
    // NOP
label_606290:
    // 0x606290: 0x0  nop
    ctx->pc = 0x606290u;
    // NOP
label_606294:
    // 0x606294: 0x0  nop
    ctx->pc = 0x606294u;
    // NOP
label_606298:
    // 0x606298: 0x2a24e0  .word       0x002A24E0                   # add         $a0, $at, $t2 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606298u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_60629c:
    // 0x60629c: 0x2a26c0  .word       0x002A26C0                   # sll         $a0, $t2, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60629cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 27));
label_6062a0:
    // 0x6062a0: 0x2a28a0  .word       0x002A28A0                   # add         $a1, $at, $t2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6062a0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_6062a4:
    // 0x6062a4: 0x2447b0  tge         $at, $a0, 286
    ctx->pc = 0x6062a4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_6062a8:
    // 0x6062a8: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6062a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
label_6062ac:
    // 0x6062ac: 0x2a2470  tge         $at, $t2, 145
    ctx->pc = 0x6062acu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
label_6062b0:
    // 0x6062b0: 0x244770  tge         $at, $a0, 285
    ctx->pc = 0x6062b0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_6062b4:
    // 0x6062b4: 0x244850  .word       0x00244850                   # mfhi        $t1 # 00240040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6062b4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_6062b8:
    // 0x6062b8: 0x0  nop
    ctx->pc = 0x6062b8u;
    // NOP
label_6062bc:
    // 0x6062bc: 0x0  nop
    ctx->pc = 0x6062bcu;
    // NOP
label_6062c0:
    // 0x6062c0: 0x0  nop
    ctx->pc = 0x6062c0u;
    // NOP
label_6062c4:
    // 0x6062c4: 0x0  nop
    ctx->pc = 0x6062c4u;
    // NOP
label_6062c8:
    // 0x6062c8: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x6062c8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_6062cc:
    // 0x6062cc: 0x2a3480  .word       0x002A3480                   # sll         $a2, $t2, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6062ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 18));
label_6062d0:
    // 0x6062d0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x6062d0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_6062d4:
    // 0x6062d4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6062d4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_6062d8:
    // 0x6062d8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6062d8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_6062dc:
    // 0x6062dc: 0x2a33c0  .word       0x002A33C0                   # sll         $a2, $t2, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6062dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
label_6062e0:
    // 0x6062e0: 0x2a3430  tge         $at, $t2, 208
    ctx->pc = 0x6062e0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
label_6062e4:
    // 0x6062e4: 0x2a3520  .word       0x002A3520                   # add         $a2, $at, $t2 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6062e4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_6062e8:
    // 0x6062e8: 0x2a3600  .word       0x002A3600                   # sll         $a2, $t2, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6062e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
label_6062ec:
    // 0x6062ec: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6062ecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_6062f0:
    // 0x6062f0: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6062f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_6062f4:
    // 0x6062f4: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x6062f4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_6062f8:
    // 0x6062f8: 0x2a38f0  tge         $at, $t2, 227
    ctx->pc = 0x6062f8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
label_6062fc:
    // 0x6062fc: 0x0  nop
    ctx->pc = 0x6062fcu;
    // NOP
label_606300:
    // 0x606300: 0x0  nop
    ctx->pc = 0x606300u;
    // NOP
label_606304:
    // 0x606304: 0x0  nop
    ctx->pc = 0x606304u;
    // NOP
label_606308:
    // 0x606308: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x606308u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_60630c:
    // 0x60630c: 0x2a5050  .word       0x002A5050                   # mfhi        $t2 # 002A0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60630cu;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_606310:
    // 0x606310: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x606310u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_606314:
    // 0x606314: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606314u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_606318:
    // 0x606318: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606318u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_60631c:
    // 0x60631c: 0x2a3be0  .word       0x002A3BE0                   # add         $a3, $at, $t2 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60631cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_606320:
    // 0x606320: 0x2a3c50  .word       0x002A3C50                   # mfhi        $a3 # 002A0440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606320u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_606324:
    // 0x606324: 0x2a5190  .word       0x002A5190                   # mfhi        $t2 # 002A0180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606324u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_606328:
    // 0x606328: 0x2a51c0  .word       0x002A51C0                   # sll         $t2, $t2, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606328u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 7));
label_60632c:
    // 0x60632c: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60632cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_606330:
    // 0x606330: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606330u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_606334:
    // 0x606334: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x606334u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_606338:
    // 0x606338: 0x2a6ca0  .word       0x002A6CA0                   # add         $t5, $at, $t2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606338u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_60633c:
    // 0x60633c: 0x0  nop
    ctx->pc = 0x60633cu;
    // NOP
label_606340:
    // 0x606340: 0x0  nop
    ctx->pc = 0x606340u;
    // NOP
label_606344:
    // 0x606344: 0x0  nop
    ctx->pc = 0x606344u;
    // NOP
label_606348:
    // 0x606348: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x606348u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_60634c:
    // 0x60634c: 0x2a7e60  .word       0x002A7E60                   # add         $t7, $at, $t2 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60634cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_606350:
    // 0x606350: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x606350u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_606354:
    // 0x606354: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606354u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_606358:
    // 0x606358: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606358u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_60635c:
    // 0x60635c: 0x2a7a50  .word       0x002A7A50                   # mfhi        $t7 # 002A0240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60635cu;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_606360:
    // 0x606360: 0x2a7ac0  .word       0x002A7AC0                   # sll         $t7, $t2, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606360u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 11));
label_606364:
    // 0x606364: 0x2a7e90  .word       0x002A7E90                   # mfhi        $t7 # 002A0680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606364u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_606368:
    // 0x606368: 0x2a7ec0  .word       0x002A7EC0                   # sll         $t7, $t2, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606368u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 27));
label_60636c:
    // 0x60636c: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60636cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_606370:
    // 0x606370: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606370u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_606374:
    // 0x606374: 0x2a8360  .word       0x002A8360                   # add         $s0, $at, $t2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606374u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_606378:
    // 0x606378: 0x2a81f0  tge         $at, $t2, 519
    ctx->pc = 0x606378u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
label_60637c:
    // 0x60637c: 0x0  nop
    ctx->pc = 0x60637cu;
    // NOP
label_606380:
    // 0x606380: 0x0  nop
    ctx->pc = 0x606380u;
    // NOP
label_606384:
    // 0x606384: 0x0  nop
    ctx->pc = 0x606384u;
    // NOP
label_606388:
    // 0x606388: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x606388u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_60638c:
    // 0x60638c: 0x2a84e0  .word       0x002A84E0                   # add         $s0, $at, $t2 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60638cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_606390:
    // 0x606390: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x606390u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_606394:
    // 0x606394: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606394u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_606398:
    // 0x606398: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606398u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_60639c:
    // 0x60639c: 0x2a8420  .word       0x002A8420                   # add         $s0, $at, $t2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60639cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_6063a0:
    // 0x6063a0: 0x2a8490  .word       0x002A8490                   # mfhi        $s0 # 002A0480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6063a0u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_6063a4:
    // 0x6063a4: 0x2a8510  .word       0x002A8510                   # mfhi        $s0 # 002A0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6063a4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_6063a8:
    // 0x6063a8: 0x2a8600  .word       0x002A8600                   # sll         $s0, $t2, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6063a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
label_6063ac:
    // 0x6063ac: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6063acu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_6063b0:
    // 0x6063b0: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6063b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_6063b4:
    // 0x6063b4: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x6063b4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_6063b8:
    // 0x6063b8: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6063b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_6063bc:
    // 0x6063bc: 0x0  nop
    ctx->pc = 0x6063bcu;
    // NOP
label_6063c0:
    // 0x6063c0: 0x0  nop
    ctx->pc = 0x6063c0u;
    // NOP
label_6063c4:
    // 0x6063c4: 0x0  nop
    ctx->pc = 0x6063c4u;
    // NOP
label_6063c8:
    // 0x6063c8: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x6063c8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_6063cc:
    // 0x6063cc: 0x2a93d0  .word       0x002A93D0                   # mfhi        $s2 # 002A03C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6063ccu;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_6063d0:
    // 0x6063d0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x6063d0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_6063d4:
    // 0x6063d4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6063d4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_6063d8:
    // 0x6063d8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6063d8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_6063dc:
    // 0x6063dc: 0x2a9310  .word       0x002A9310                   # mfhi        $s2 # 002A0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6063dcu;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_6063e0:
    // 0x6063e0: 0x2a9380  .word       0x002A9380                   # sll         $s2, $t2, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6063e0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 10), 14));
label_6063e4:
    // 0x6063e4: 0x2a9460  .word       0x002A9460                   # add         $s2, $at, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6063e4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_6063e8:
    // 0x6063e8: 0x2a9580  .word       0x002A9580                   # sll         $s2, $t2, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6063e8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 10), 22));
label_6063ec:
    // 0x6063ec: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6063ecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_6063f0:
    // 0x6063f0: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6063f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_6063f4:
    // 0x6063f4: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x6063f4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_6063f8:
    // 0x6063f8: 0x2a9940  .word       0x002A9940                   # sll         $s3, $t2, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6063f8u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_6063fc:
    // 0x6063fc: 0x0  nop
    ctx->pc = 0x6063fcu;
    // NOP
label_606400:
    // 0x606400: 0x0  nop
    ctx->pc = 0x606400u;
    // NOP
label_606404:
    // 0x606404: 0x0  nop
    ctx->pc = 0x606404u;
    // NOP
label_606408:
    // 0x606408: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x606408u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_60640c:
    // 0x60640c: 0x2aa540  .word       0x002AA540                   # sll         $s4, $t2, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60640cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 10), 21));
label_606410:
    // 0x606410: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x606410u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_606414:
    // 0x606414: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606414u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_606418:
    // 0x606418: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606418u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_60641c:
    // 0x60641c: 0x2a9ad0  .word       0x002A9AD0                   # mfhi        $s3 # 002A02C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60641cu;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_606420:
    // 0x606420: 0x2aa4b0  tge         $at, $t2, 658
    ctx->pc = 0x606420u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
label_606424:
    // 0x606424: 0x2aa500  .word       0x002AA500                   # sll         $s4, $t2, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606424u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 10), 20));
label_606428:
    // 0x606428: 0x2aa0a0  .word       0x002AA0A0                   # add         $s4, $at, $t2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606428u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_60642c:
    // 0x60642c: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60642cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_606430:
    // 0x606430: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606430u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_606434:
    // 0x606434: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x606434u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_606438:
    // 0x606438: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606438u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_60643c:
    // 0x60643c: 0x0  nop
    ctx->pc = 0x60643cu;
    // NOP
label_606440:
    // 0x606440: 0x0  nop
    ctx->pc = 0x606440u;
    // NOP
label_606444:
    // 0x606444: 0x0  nop
    ctx->pc = 0x606444u;
    // NOP
label_606448:
    // 0x606448: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x606448u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_60644c:
    // 0x60644c: 0x274760  .word       0x00274760                   # add         $t0, $at, $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60644cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_606450:
    // 0x606450: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x606450u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_606454:
    // 0x606454: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606454u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_606458:
    // 0x606458: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606458u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_60645c:
    // 0x60645c: 0x2aa6a0  .word       0x002AA6A0                   # add         $s4, $at, $t2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60645cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_606460:
    // 0x606460: 0x274630  tge         $at, $a3, 280
    ctx->pc = 0x606460u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_606464:
    // 0x606464: 0x274790  .word       0x00274790                   # mfhi        $t0 # 00270780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606464u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_606468:
    // 0x606468: 0x2aa710  .word       0x002AA710                   # mfhi        $s4 # 002A0700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606468u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_60646c:
    // 0x60646c: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60646cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_606470:
    // 0x606470: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606470u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_606474:
    // 0x606474: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x606474u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_606478:
    // 0x606478: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606478u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_60647c:
    // 0x60647c: 0x0  nop
    ctx->pc = 0x60647cu;
    // NOP
label_606480:
    // 0x606480: 0x0  nop
    ctx->pc = 0x606480u;
    // NOP
label_606484:
    // 0x606484: 0x0  nop
    ctx->pc = 0x606484u;
    // NOP
label_606488:
    // 0x606488: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x606488u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_60648c:
    // 0x60648c: 0x2ab130  tge         $at, $t2, 708
    ctx->pc = 0x60648cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
label_606490:
    // 0x606490: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x606490u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_606494:
    // 0x606494: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606494u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_606498:
    // 0x606498: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606498u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_60649c:
    // 0x60649c: 0x2aa800  .word       0x002AA800                   # sll         $s5, $t2, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60649cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 10), 0));
label_6064a0:
    // 0x6064a0: 0x2ab010  .word       0x002AB010                   # mfhi        $s6 # 002A0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6064a0u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_6064a4:
    // 0x6064a4: 0x274790  .word       0x00274790                   # mfhi        $t0 # 00270780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6064a4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_6064a8:
    // 0x6064a8: 0x2aa870  tge         $at, $t2, 673
    ctx->pc = 0x6064a8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
label_6064ac:
    // 0x6064ac: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6064acu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_6064b0:
    // 0x6064b0: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6064b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_6064b4:
    // 0x6064b4: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x6064b4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_6064b8:
    // 0x6064b8: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6064b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_6064bc:
    // 0x6064bc: 0x0  nop
    ctx->pc = 0x6064bcu;
    // NOP
label_6064c0:
    // 0x6064c0: 0x0  nop
    ctx->pc = 0x6064c0u;
    // NOP
label_6064c4:
    // 0x6064c4: 0x0  nop
    ctx->pc = 0x6064c4u;
    // NOP
label_6064c8:
    // 0x6064c8: 0x2ab280  .word       0x002AB280                   # sll         $s6, $t2, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6064c8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 10), 10));
label_6064cc:
    // 0x6064cc: 0x2ab330  tge         $at, $t2, 716
    ctx->pc = 0x6064ccu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
label_6064d0:
    // 0x6064d0: 0x2ab370  tge         $at, $t2, 717
    ctx->pc = 0x6064d0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
label_6064d4:
    // 0x6064d4: 0x0  nop
    ctx->pc = 0x6064d4u;
    // NOP
label_6064d8:
    // 0x6064d8: 0x0  nop
    ctx->pc = 0x6064d8u;
    // NOP
label_6064dc:
    // 0x6064dc: 0x0  nop
    ctx->pc = 0x6064dcu;
    // NOP
label_6064e0:
    // 0x6064e0: 0x0  nop
    ctx->pc = 0x6064e0u;
    // NOP
label_6064e4:
    // 0x6064e4: 0x0  nop
    ctx->pc = 0x6064e4u;
    // NOP
label_6064e8:
    // 0x6064e8: 0x2acb30  tge         $at, $t2, 812
    ctx->pc = 0x6064e8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
label_6064ec:
    // 0x6064ec: 0x2acff0  tge         $at, $t2, 831
    ctx->pc = 0x6064ecu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
label_6064f0:
    // 0x6064f0: 0x2ad8d0  .word       0x002AD8D0                   # mfhi        $k1 # 002A00C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6064f0u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_6064f4:
    // 0x6064f4: 0x214ae0  .word       0x00214AE0                   # add         $t1, $at, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6064f4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_6064f8:
    // 0x6064f8: 0x2adaa0  .word       0x002ADAA0                   # add         $k1, $at, $t2 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6064f8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_6064fc:
    // 0x6064fc: 0x2aca90  .word       0x002ACA90                   # mfhi        $t9 # 002A0280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6064fcu;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_606500:
    // 0x606500: 0x2adb00  .word       0x002ADB00                   # sll         $k1, $t2, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606500u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 10), 12));
label_606504:
    // 0x606504: 0x2afe70  tge         $at, $t2, 1017
    ctx->pc = 0x606504u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
label_606508:
    // 0x606508: 0x2aff20  .word       0x002AFF20                   # add         $ra, $at, $t2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606508u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_60650c:
    // 0x60650c: 0x214b90  .word       0x00214B90                   # mfhi        $t1 # 00210380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60650cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_606510:
    // 0x606510: 0x214bc0  .word       0x00214BC0                   # sll         $t1, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606510u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
label_606514:
    // 0x606514: 0x214be0  .word       0x00214BE0                   # add         $t1, $at, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606514u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_606518:
    // 0x606518: 0x214bf0  tge         $at, $at, 303
    ctx->pc = 0x606518u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_60651c:
    // 0x60651c: 0x0  nop
    ctx->pc = 0x60651cu;
    // NOP
label_606520:
    // 0x606520: 0x0  nop
    ctx->pc = 0x606520u;
    // NOP
label_606524:
    // 0x606524: 0x0  nop
    ctx->pc = 0x606524u;
    // NOP
label_606528:
    // 0x606528: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x606528u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_60652c:
    // 0x60652c: 0x2b1370  tge         $at, $t3, 77
    ctx->pc = 0x60652cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_606530:
    // 0x606530: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x606530u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_606534:
    // 0x606534: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606534u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_606538:
    // 0x606538: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606538u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_60653c:
    // 0x60653c: 0x2b12b0  tge         $at, $t3, 74
    ctx->pc = 0x60653cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_606540:
    // 0x606540: 0x2b1320  .word       0x002B1320                   # add         $v0, $at, $t3 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606540u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_606544:
    // 0x606544: 0x2b13a0  .word       0x002B13A0                   # add         $v0, $at, $t3 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606544u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_606548:
    // 0x606548: 0x2b13d0  .word       0x002B13D0                   # mfhi        $v0 # 002B03C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606548u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_60654c:
    // 0x60654c: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60654cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_606550:
    // 0x606550: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606550u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_606554:
    // 0x606554: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x606554u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_606558:
    // 0x606558: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606558u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_60655c:
    // 0x60655c: 0x0  nop
    ctx->pc = 0x60655cu;
    // NOP
label_606560:
    // 0x606560: 0x0  nop
    ctx->pc = 0x606560u;
    // NOP
label_606564:
    // 0x606564: 0x0  nop
    ctx->pc = 0x606564u;
    // NOP
label_606568:
    // 0x606568: 0x2b16b0  tge         $at, $t3, 90
    ctx->pc = 0x606568u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_60656c:
    // 0x60656c: 0x2b16f0  tge         $at, $t3, 91
    ctx->pc = 0x60656cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_606570:
    // 0x606570: 0x244730  tge         $at, $a0, 284
    ctx->pc = 0x606570u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_606574:
    // 0x606574: 0x2447b0  tge         $at, $a0, 286
    ctx->pc = 0x606574u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_606578:
    // 0x606578: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606578u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
label_60657c:
    // 0x60657c: 0x2b1640  .word       0x002B1640                   # sll         $v0, $t3, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60657cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 25));
label_606580:
    // 0x606580: 0x2b1730  tge         $at, $t3, 92
    ctx->pc = 0x606580u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_606584:
    // 0x606584: 0x244850  .word       0x00244850                   # mfhi        $t1 # 00240040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606584u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_606588:
    // 0x606588: 0x0  nop
    ctx->pc = 0x606588u;
    // NOP
label_60658c:
    // 0x60658c: 0x0  nop
    ctx->pc = 0x60658cu;
    // NOP
label_606590:
    // 0x606590: 0x0  nop
    ctx->pc = 0x606590u;
    // NOP
label_606594:
    // 0x606594: 0x0  nop
    ctx->pc = 0x606594u;
    // NOP
label_606598:
    // 0x606598: 0x2b1a80  .word       0x002B1A80                   # sll         $v1, $t3, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606598u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 10));
label_60659c:
    // 0x60659c: 0x2b1b40  .word       0x002B1B40                   # sll         $v1, $t3, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60659cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 13));
label_6065a0:
    // 0x6065a0: 0x2b1c30  tge         $at, $t3, 112
    ctx->pc = 0x6065a0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_6065a4:
    // 0x6065a4: 0x2b1df0  tge         $at, $t3, 119
    ctx->pc = 0x6065a4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_6065a8:
    // 0x6065a8: 0x2b1ca0  .word       0x002B1CA0                   # add         $v1, $at, $t3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6065a8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_6065ac:
    // 0x6065ac: 0x2b1a10  .word       0x002B1A10                   # mfhi        $v1 # 002B0200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6065acu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_6065b0:
    // 0x6065b0: 0x2b1d10  .word       0x002B1D10                   # mfhi        $v1 # 002B0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6065b0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_6065b4:
    // 0x6065b4: 0x2b1e20  .word       0x002B1E20                   # add         $v1, $at, $t3 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6065b4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_6065b8:
    // 0x6065b8: 0x2b2010  .word       0x002B2010                   # mfhi        $a0 # 002B0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6065b8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_6065bc:
    // 0x6065bc: 0x214b90  .word       0x00214B90                   # mfhi        $t1 # 00210380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6065bcu;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_6065c0:
    // 0x6065c0: 0x214bc0  .word       0x00214BC0                   # sll         $t1, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6065c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
label_6065c4:
    // 0x6065c4: 0x214be0  .word       0x00214BE0                   # add         $t1, $at, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6065c4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_6065c8:
    // 0x6065c8: 0x214bf0  tge         $at, $at, 303
    ctx->pc = 0x6065c8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_6065cc:
    // 0x6065cc: 0x0  nop
    ctx->pc = 0x6065ccu;
    // NOP
label_6065d0:
    // 0x6065d0: 0x0  nop
    ctx->pc = 0x6065d0u;
    // NOP
label_6065d4:
    // 0x6065d4: 0x0  nop
    ctx->pc = 0x6065d4u;
    // NOP
label_6065d8:
    // 0x6065d8: 0x2b5c00  .word       0x002B5C00                   # sll         $t3, $t3, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6065d8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
label_6065dc:
    // 0x6065dc: 0x2b5c40  .word       0x002B5C40                   # sll         $t3, $t3, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6065dcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 17));
label_6065e0:
    // 0x6065e0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x6065e0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_6065e4:
    // 0x6065e4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6065e4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_6065e8:
    // 0x6065e8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6065e8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_6065ec:
    // 0x6065ec: 0x2b2bf0  tge         $at, $t3, 175
    ctx->pc = 0x6065ecu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_6065f0:
    // 0x6065f0: 0x2b2d00  .word       0x002B2D00                   # sll         $a1, $t3, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6065f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 20));
label_6065f4:
    // 0x6065f4: 0x2b5ca0  .word       0x002B5CA0                   # add         $t3, $at, $t3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6065f4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_6065f8:
    // 0x6065f8: 0x2b5cc0  .word       0x002B5CC0                   # sll         $t3, $t3, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6065f8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 19));
label_6065fc:
    // 0x6065fc: 0x2b2f10  .word       0x002B2F10                   # mfhi        $a1 # 002B0700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6065fcu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_606600:
    // 0x606600: 0x2b3010  .word       0x002B3010                   # mfhi        $a2 # 002B0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606600u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_606604:
    // 0x606604: 0x2b3110  .word       0x002B3110                   # mfhi        $a2 # 002B0100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606604u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_606608:
    // 0x606608: 0x2b3170  tge         $at, $t3, 197
    ctx->pc = 0x606608u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_60660c:
    // 0x60660c: 0x2b4d60  .word       0x002B4D60                   # add         $t1, $at, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60660cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_606610:
    // 0x606610: 0x2b4d70  tge         $at, $t3, 309
    ctx->pc = 0x606610u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_606614:
    // 0x606614: 0x2b64b0  tge         $at, $t3, 402
    ctx->pc = 0x606614u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_606618:
    // 0x606618: 0x2b64c0  .word       0x002B64C0                   # sll         $t4, $t3, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606618u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 19));
label_60661c:
    // 0x60661c: 0x2b4bc0  .word       0x002B4BC0                   # sll         $t1, $t3, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60661cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 15));
label_606620:
    // 0x606620: 0x2b4c00  .word       0x002B4C00                   # sll         $t1, $t3, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606620u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
label_606624:
    // 0x606624: 0x2b4c40  .word       0x002B4C40                   # sll         $t1, $t3, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606624u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 17));
label_606628:
    // 0x606628: 0x2b4c80  .word       0x002B4C80                   # sll         $t1, $t3, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606628u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 18));
label_60662c:
    // 0x60662c: 0x2b4cc0  .word       0x002B4CC0                   # sll         $t1, $t3, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60662cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 19));
label_606630:
    // 0x606630: 0x2b4cd0  .word       0x002B4CD0                   # mfhi        $t1 # 002B04C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606630u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_606634:
    // 0x606634: 0x2b4d10  .word       0x002B4D10                   # mfhi        $t1 # 002B0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606634u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_606638:
    // 0x606638: 0x2b4d20  .word       0x002B4D20                   # add         $t1, $at, $t3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606638u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_60663c:
    // 0x60663c: 0x2b6550  .word       0x002B6550                   # mfhi        $t4 # 002B0540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60663cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_606640:
    // 0x606640: 0x2b6560  .word       0x002B6560                   # add         $t4, $at, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606640u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_606644:
    // 0x606644: 0x2b4d80  .word       0x002B4D80                   # sll         $t1, $t3, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606644u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 22));
label_606648:
    // 0x606648: 0x2b4d90  .word       0x002B4D90                   # mfhi        $t1 # 002B0580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606648u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_60664c:
    // 0x60664c: 0x2b31d0  .word       0x002B31D0                   # mfhi        $a2 # 002B01C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60664cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_606650:
    // 0x606650: 0x2b5880  .word       0x002B5880                   # sll         $t3, $t3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606650u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_606654:
    // 0x606654: 0x2b65e0  .word       0x002B65E0                   # add         $t4, $at, $t3 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606654u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_606658:
    // 0x606658: 0x2b65f0  tge         $at, $t3, 407
    ctx->pc = 0x606658u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_60665c:
    // 0x60665c: 0x2b6600  .word       0x002B6600                   # sll         $t4, $t3, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60665cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
label_606660:
    // 0x606660: 0x0  nop
    ctx->pc = 0x606660u;
    // NOP
label_606664:
    // 0x606664: 0x0  nop
    ctx->pc = 0x606664u;
    // NOP
label_606668:
    // 0x606668: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x606668u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_60666c:
    // 0x60666c: 0x23b120  .word       0x0023B120                   # add         $s6, $at, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60666cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_606670:
    // 0x606670: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x606670u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_606674:
    // 0x606674: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606674u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_606678:
    // 0x606678: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606678u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_60667c:
    // 0x60667c: 0x2b5920  .word       0x002B5920                   # add         $t3, $at, $t3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60667cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_606680:
    // 0x606680: 0x0  nop
    ctx->pc = 0x606680u;
    // NOP
label_606684:
    // 0x606684: 0x0  nop
    ctx->pc = 0x606684u;
    // NOP
label_606688:
    // 0x606688: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x606688u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_60668c:
    // 0x60668c: 0x23b120  .word       0x0023B120                   # add         $s6, $at, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60668cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_606690:
    // 0x606690: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x606690u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_606694:
    // 0x606694: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606694u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_606698:
    // 0x606698: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606698u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_60669c:
    // 0x60669c: 0x2b59e0  .word       0x002B59E0                   # add         $t3, $at, $t3 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60669cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_6066a0:
    // 0x6066a0: 0x2b5a90  .word       0x002B5A90                   # mfhi        $t3 # 002B0280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6066a0u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_6066a4:
    // 0x6066a4: 0x0  nop
    ctx->pc = 0x6066a4u;
    // NOP
label_6066a8:
    // 0x6066a8: 0x0  nop
    ctx->pc = 0x6066a8u;
    // NOP
label_6066ac:
    // 0x6066ac: 0x0  nop
    ctx->pc = 0x6066acu;
    // NOP
label_6066b0:
    // 0x6066b0: 0x0  nop
    ctx->pc = 0x6066b0u;
    // NOP
label_6066b4:
    // 0x6066b4: 0x0  nop
    ctx->pc = 0x6066b4u;
    // NOP
label_6066b8:
    // 0x6066b8: 0x2b5c00  .word       0x002B5C00                   # sll         $t3, $t3, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6066b8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
label_6066bc:
    // 0x6066bc: 0x2b5c40  .word       0x002B5C40                   # sll         $t3, $t3, 17 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6066bcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 17));
label_6066c0:
    // 0x6066c0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x6066c0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_6066c4:
    // 0x6066c4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6066c4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_6066c8:
    // 0x6066c8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6066c8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_6066cc:
    // 0x6066cc: 0x2b5b50  .word       0x002B5B50                   # mfhi        $t3 # 002B0340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6066ccu;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_6066d0:
    // 0x6066d0: 0x2b5c80  .word       0x002B5C80                   # sll         $t3, $t3, 18 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6066d0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 18));
label_6066d4:
    // 0x6066d4: 0x2b5ca0  .word       0x002B5CA0                   # add         $t3, $at, $t3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6066d4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_6066d8:
    // 0x6066d8: 0x2b5cc0  .word       0x002B5CC0                   # sll         $t3, $t3, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6066d8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 19));
label_6066dc:
    // 0x6066dc: 0x2b5d10  .word       0x002B5D10                   # mfhi        $t3 # 002B0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6066dcu;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_6066e0:
    // 0x6066e0: 0x2b5ef0  tge         $at, $t3, 379
    ctx->pc = 0x6066e0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_6066e4:
    // 0x6066e4: 0x2b60d0  .word       0x002B60D0                   # mfhi        $t4 # 002B00C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6066e4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_6066e8:
    // 0x6066e8: 0x2b62b0  tge         $at, $t3, 394
    ctx->pc = 0x6066e8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_6066ec:
    // 0x6066ec: 0x2b6490  .word       0x002B6490                   # mfhi        $t4 # 002B0480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6066ecu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_6066f0:
    // 0x6066f0: 0x2b64a0  .word       0x002B64A0                   # add         $t4, $at, $t3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6066f0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_6066f4:
    // 0x6066f4: 0x2b64b0  tge         $at, $t3, 402
    ctx->pc = 0x6066f4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_6066f8:
    // 0x6066f8: 0x2b64c0  .word       0x002B64C0                   # sll         $t4, $t3, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6066f8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 19));
label_6066fc:
    // 0x6066fc: 0x2b64d0  .word       0x002B64D0                   # mfhi        $t4 # 002B04C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6066fcu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_606700:
    // 0x606700: 0x2b64e0  .word       0x002B64E0                   # add         $t4, $at, $t3 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606700u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_606704:
    // 0x606704: 0x2b64f0  tge         $at, $t3, 403
    ctx->pc = 0x606704u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_606708:
    // 0x606708: 0x2b6500  .word       0x002B6500                   # sll         $t4, $t3, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606708u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 20));
label_60670c:
    // 0x60670c: 0x2b6510  .word       0x002B6510                   # mfhi        $t4 # 002B0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60670cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_606710:
    // 0x606710: 0x2b6520  .word       0x002B6520                   # add         $t4, $at, $t3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606710u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_606714:
    // 0x606714: 0x2b6530  tge         $at, $t3, 404
    ctx->pc = 0x606714u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_606718:
    // 0x606718: 0x2b6540  .word       0x002B6540                   # sll         $t4, $t3, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606718u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 21));
label_60671c:
    // 0x60671c: 0x2b6550  .word       0x002B6550                   # mfhi        $t4 # 002B0540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60671cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_606720:
    // 0x606720: 0x2b6560  .word       0x002B6560                   # add         $t4, $at, $t3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606720u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_606724:
    // 0x606724: 0x2b6570  tge         $at, $t3, 405
    ctx->pc = 0x606724u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_606728:
    // 0x606728: 0x2b6580  .word       0x002B6580                   # sll         $t4, $t3, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606728u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 22));
label_60672c:
    // 0x60672c: 0x2b6590  .word       0x002B6590                   # mfhi        $t4 # 002B0580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60672cu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_606730:
    // 0x606730: 0x2b65b0  tge         $at, $t3, 406
    ctx->pc = 0x606730u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_606734:
    // 0x606734: 0x2b65e0  .word       0x002B65E0                   # add         $t4, $at, $t3 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606734u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_606738:
    // 0x606738: 0x2b65f0  tge         $at, $t3, 407
    ctx->pc = 0x606738u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_60673c:
    // 0x60673c: 0x2b6600  .word       0x002B6600                   # sll         $t4, $t3, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60673cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
label_606740:
    // 0x606740: 0x0  nop
    ctx->pc = 0x606740u;
    // NOP
label_606744:
    // 0x606744: 0x0  nop
    ctx->pc = 0x606744u;
    // NOP
label_606748:
    // 0x606748: 0x2b6e40  .word       0x002B6E40                   # sll         $t5, $t3, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606748u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 11), 25));
label_60674c:
    // 0x60674c: 0x2b6e80  .word       0x002B6E80                   # sll         $t5, $t3, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60674cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 11), 26));
label_606750:
    // 0x606750: 0x244730  tge         $at, $a0, 284
    ctx->pc = 0x606750u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_606754:
    // 0x606754: 0x2447b0  tge         $at, $a0, 286
    ctx->pc = 0x606754u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_606758:
    // 0x606758: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606758u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
label_60675c:
    // 0x60675c: 0x2b6da0  .word       0x002B6DA0                   # add         $t5, $at, $t3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60675cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_606760:
    // 0x606760: 0x2b6ed0  .word       0x002B6ED0                   # mfhi        $t5 # 002B06C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606760u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_606764:
    // 0x606764: 0x244850  .word       0x00244850                   # mfhi        $t1 # 00240040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606764u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_606768:
    // 0x606768: 0x2b7070  tge         $at, $t3, 449
    ctx->pc = 0x606768u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_60676c:
    // 0x60676c: 0x0  nop
    ctx->pc = 0x60676cu;
    // NOP
label_606770:
    // 0x606770: 0x0  nop
    ctx->pc = 0x606770u;
    // NOP
label_606774:
    // 0x606774: 0x0  nop
    ctx->pc = 0x606774u;
    // NOP
label_606778:
    // 0x606778: 0x2b9090  .word       0x002B9090                   # mfhi        $s2 # 002B0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606778u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_60677c:
    // 0x60677c: 0x2b91d0  .word       0x002B91D0                   # mfhi        $s2 # 002B01C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60677cu;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_606780:
    // 0x606780: 0x2b8b70  tge         $at, $t3, 557
    ctx->pc = 0x606780u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_606784:
    // 0x606784: 0x0  nop
    ctx->pc = 0x606784u;
    // NOP
label_606788:
    // 0x606788: 0x0  nop
    ctx->pc = 0x606788u;
    // NOP
label_60678c:
    // 0x60678c: 0x0  nop
    ctx->pc = 0x60678cu;
    // NOP
label_606790:
    // 0x606790: 0x0  nop
    ctx->pc = 0x606790u;
    // NOP
label_606794:
    // 0x606794: 0x0  nop
    ctx->pc = 0x606794u;
    // NOP
label_606798:
    // 0x606798: 0x0  nop
    ctx->pc = 0x606798u;
    // NOP
label_60679c:
    // 0x60679c: 0x0  nop
    ctx->pc = 0x60679cu;
    // NOP
label_6067a0:
    // 0x6067a0: 0x0  nop
    ctx->pc = 0x6067a0u;
    // NOP
label_6067a4:
    // 0x6067a4: 0x0  nop
    ctx->pc = 0x6067a4u;
    // NOP
label_6067a8:
    // 0x6067a8: 0x2be8a0  .word       0x002BE8A0                   # add         $sp, $at, $t3 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6067a8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_6067ac:
    // 0x6067ac: 0x2bee00  .word       0x002BEE00                   # sll         $sp, $t3, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6067acu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
label_6067b0:
    // 0x6067b0: 0x2c24d0  .word       0x002C24D0                   # mfhi        $a0 # 002C04C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6067b0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_6067b4:
    // 0x6067b4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6067b4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_6067b8:
    // 0x6067b8: 0x2c4c30  tge         $at, $t4, 304
    ctx->pc = 0x6067b8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_6067bc:
    // 0x6067bc: 0x2bdc50  .word       0x002BDC50                   # mfhi        $k1 # 002B0440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6067bcu;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_6067c0:
    // 0x6067c0: 0x2c7700  .word       0x002C7700                   # sll         $t6, $t4, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6067c0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 12), 28));
label_6067c4:
    // 0x6067c4: 0x0  nop
    ctx->pc = 0x6067c4u;
    // NOP
label_6067c8:
    // 0x6067c8: 0x0  nop
    ctx->pc = 0x6067c8u;
    // NOP
label_6067cc:
    // 0x6067cc: 0x0  nop
    ctx->pc = 0x6067ccu;
    // NOP
label_6067d0:
    // 0x6067d0: 0x0  nop
    ctx->pc = 0x6067d0u;
    // NOP
label_6067d4:
    // 0x6067d4: 0x0  nop
    ctx->pc = 0x6067d4u;
    // NOP
label_6067d8:
    // 0x6067d8: 0x2cb400  .word       0x002CB400                   # sll         $s6, $t4, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6067d8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
label_6067dc:
    // 0x6067dc: 0x2cb510  .word       0x002CB510                   # mfhi        $s6 # 002C0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6067dcu;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_6067e0:
    // 0x6067e0: 0x2cbb80  .word       0x002CBB80                   # sll         $s7, $t4, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6067e0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 12), 14));
label_6067e4:
    // 0x6067e4: 0x2cbbb0  tge         $at, $t4, 750
    ctx->pc = 0x6067e4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_6067e8:
    // 0x6067e8: 0x2cc580  .word       0x002CC580                   # sll         $t8, $t4, 22 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6067e8u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 12), 22));
label_6067ec:
    // 0x6067ec: 0x2cf1c0  .word       0x002CF1C0                   # sll         $fp, $t4, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6067ecu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 12), 7));
label_6067f0:
    // 0x6067f0: 0x2cf210  .word       0x002CF210                   # mfhi        $fp # 002C0200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6067f0u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_6067f4:
    // 0x6067f4: 0x2cb360  .word       0x002CB360                   # add         $s6, $at, $t4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6067f4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_6067f8:
    // 0x6067f8: 0x0  nop
    ctx->pc = 0x6067f8u;
    // NOP
label_6067fc:
    // 0x6067fc: 0x0  nop
    ctx->pc = 0x6067fcu;
    // NOP
label_606800:
    // 0x606800: 0x2d8980  .word       0x002D8980                   # sll         $s1, $t5, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606800u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 13), 6));
label_606804:
    // 0x606804: 0x0  nop
    ctx->pc = 0x606804u;
    // NOP
label_606808:
    // 0x606808: 0x0  nop
    ctx->pc = 0x606808u;
    // NOP
label_60680c:
    // 0x60680c: 0x0  nop
    ctx->pc = 0x60680cu;
    // NOP
label_606810:
    // 0x606810: 0x2d0d40  .word       0x002D0D40                   # sll         $at, $t5, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606810u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 13), 21));
label_606814:
    // 0x606814: 0x0  nop
    ctx->pc = 0x606814u;
    // NOP
label_606818:
    // 0x606818: 0x0  nop
    ctx->pc = 0x606818u;
    // NOP
label_60681c:
    // 0x60681c: 0x0  nop
    ctx->pc = 0x60681cu;
    // NOP
label_606820:
    // 0x606820: 0x0  nop
    ctx->pc = 0x606820u;
    // NOP
label_606824:
    // 0x606824: 0x0  nop
    ctx->pc = 0x606824u;
    // NOP
label_606828:
    // 0x606828: 0x2d0890  .word       0x002D0890                   # mfhi        $at # 002D0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606828u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_60682c:
    // 0x60682c: 0x2d0920  .word       0x002D0920                   # add         $at, $at, $t5 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60682cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_606830:
    // 0x606830: 0x2d08f0  tge         $at, $t5, 35
    ctx->pc = 0x606830u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_606834:
    // 0x606834: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606834u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_606838:
    // 0x606838: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606838u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_60683c:
    // 0x60683c: 0x2d7a50  .word       0x002D7A50                   # mfhi        $t7 # 002D0240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60683cu;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_606840:
    // 0x606840: 0x2d7a60  .word       0x002D7A60                   # add         $t7, $at, $t5 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606840u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_606844:
    // 0x606844: 0x2d07f0  tge         $at, $t5, 31
    ctx->pc = 0x606844u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_606848:
    // 0x606848: 0x0  nop
    ctx->pc = 0x606848u;
    // NOP
label_60684c:
    // 0x60684c: 0x0  nop
    ctx->pc = 0x60684cu;
    // NOP
label_606850:
    // 0x606850: 0x0  nop
    ctx->pc = 0x606850u;
    // NOP
label_606854:
    // 0x606854: 0x0  nop
    ctx->pc = 0x606854u;
    // NOP
label_606858:
    // 0x606858: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x606858u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_60685c:
    // 0x60685c: 0x2d9270  tge         $at, $t5, 585
    ctx->pc = 0x60685cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_606860:
    // 0x606860: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x606860u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_606864:
    // 0x606864: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606864u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_606868:
    // 0x606868: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606868u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_60686c:
    // 0x60686c: 0x2d91b0  tge         $at, $t5, 582
    ctx->pc = 0x60686cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_606870:
    // 0x606870: 0x2d9220  .word       0x002D9220                   # add         $s2, $at, $t5 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606870u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_606874:
    // 0x606874: 0x2d92a0  .word       0x002D92A0                   # add         $s2, $at, $t5 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606874u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_606878:
    // 0x606878: 0x2d92d0  .word       0x002D92D0                   # mfhi        $s2 # 002D02C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606878u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_60687c:
    // 0x60687c: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60687cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_606880:
    // 0x606880: 0x2d9410  .word       0x002D9410                   # mfhi        $s2 # 002D0400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606880u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_606884:
    // 0x606884: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x606884u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_606888:
    // 0x606888: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606888u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_60688c:
    // 0x60688c: 0x0  nop
    ctx->pc = 0x60688cu;
    // NOP
label_606890:
    // 0x606890: 0x0  nop
    ctx->pc = 0x606890u;
    // NOP
label_606894:
    // 0x606894: 0x0  nop
    ctx->pc = 0x606894u;
    // NOP
label_606898:
    // 0x606898: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x606898u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_60689c:
    // 0x60689c: 0x274760  .word       0x00274760                   # add         $t0, $at, $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60689cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_6068a0:
    // 0x6068a0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x6068a0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_6068a4:
    // 0x6068a4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6068a4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_6068a8:
    // 0x6068a8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6068a8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_6068ac:
    // 0x6068ac: 0x2da430  tge         $at, $t5, 656
    ctx->pc = 0x6068acu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_6068b0:
    // 0x6068b0: 0x274630  tge         $at, $a3, 280
    ctx->pc = 0x6068b0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_6068b4:
    // 0x6068b4: 0x274790  .word       0x00274790                   # mfhi        $t0 # 00270780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6068b4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_6068b8:
    // 0x6068b8: 0x2d9510  .word       0x002D9510                   # mfhi        $s2 # 002D0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6068b8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_6068bc:
    // 0x6068bc: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6068bcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_6068c0:
    // 0x6068c0: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6068c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_6068c4:
    // 0x6068c4: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x6068c4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_6068c8:
    // 0x6068c8: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6068c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_6068cc:
    // 0x6068cc: 0x0  nop
    ctx->pc = 0x6068ccu;
    // NOP
label_6068d0:
    // 0x6068d0: 0x0  nop
    ctx->pc = 0x6068d0u;
    // NOP
label_6068d4:
    // 0x6068d4: 0x0  nop
    ctx->pc = 0x6068d4u;
    // NOP
label_6068d8:
    // 0x6068d8: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x6068d8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_6068dc:
    // 0x6068dc: 0x274760  .word       0x00274760                   # add         $t0, $at, $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6068dcu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_6068e0:
    // 0x6068e0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x6068e0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_6068e4:
    // 0x6068e4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6068e4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_6068e8:
    // 0x6068e8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6068e8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_6068ec:
    // 0x6068ec: 0x2da980  .word       0x002DA980                   # sll         $s5, $t5, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6068ecu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 13), 6));
label_6068f0:
    // 0x6068f0: 0x274630  tge         $at, $a3, 280
    ctx->pc = 0x6068f0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_6068f4:
    // 0x6068f4: 0x274790  .word       0x00274790                   # mfhi        $t0 # 00270780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6068f4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_6068f8:
    // 0x6068f8: 0x2da4f0  tge         $at, $t5, 659
    ctx->pc = 0x6068f8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_6068fc:
    // 0x6068fc: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6068fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_606900:
    // 0x606900: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606900u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_606904:
    // 0x606904: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x606904u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_606908:
    // 0x606908: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606908u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_60690c:
    // 0x60690c: 0x0  nop
    ctx->pc = 0x60690cu;
    // NOP
label_606910:
    // 0x606910: 0x0  nop
    ctx->pc = 0x606910u;
    // NOP
label_606914:
    // 0x606914: 0x0  nop
    ctx->pc = 0x606914u;
    // NOP
label_606918:
    // 0x606918: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x606918u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_60691c:
    // 0x60691c: 0x274760  .word       0x00274760                   # add         $t0, $at, $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60691cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_606920:
    // 0x606920: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x606920u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_606924:
    // 0x606924: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606924u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_606928:
    // 0x606928: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606928u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_60692c:
    // 0x60692c: 0x2daf30  tge         $at, $t5, 700
    ctx->pc = 0x60692cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_606930:
    // 0x606930: 0x274630  tge         $at, $a3, 280
    ctx->pc = 0x606930u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_606934:
    // 0x606934: 0x274790  .word       0x00274790                   # mfhi        $t0 # 00270780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606934u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_606938:
    // 0x606938: 0x2db300  .word       0x002DB300                   # sll         $s6, $t5, 12 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606938u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 13), 12));
label_60693c:
    // 0x60693c: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60693cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_606940:
    // 0x606940: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606940u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_606944:
    // 0x606944: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x606944u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_606948:
    // 0x606948: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606948u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_60694c:
    // 0x60694c: 0x0  nop
    ctx->pc = 0x60694cu;
    // NOP
label_606950:
    // 0x606950: 0x0  nop
    ctx->pc = 0x606950u;
    // NOP
label_606954:
    // 0x606954: 0x0  nop
    ctx->pc = 0x606954u;
    // NOP
label_606958:
    // 0x606958: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x606958u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_60695c:
    // 0x60695c: 0x274760  .word       0x00274760                   # add         $t0, $at, $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60695cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_606960:
    // 0x606960: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x606960u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_606964:
    // 0x606964: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606964u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_606968:
    // 0x606968: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606968u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_60696c:
    // 0x60696c: 0x2dc500  .word       0x002DC500                   # sll         $t8, $t5, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60696cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 13), 20));
label_606970:
    // 0x606970: 0x274630  tge         $at, $a3, 280
    ctx->pc = 0x606970u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_606974:
    // 0x606974: 0x274790  .word       0x00274790                   # mfhi        $t0 # 00270780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606974u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_606978:
    // 0x606978: 0x2dc400  .word       0x002DC400                   # sll         $t8, $t5, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606978u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 13), 16));
label_60697c:
    // 0x60697c: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60697cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_606980:
    // 0x606980: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606980u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_606984:
    // 0x606984: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x606984u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_606988:
    // 0x606988: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606988u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_60698c:
    // 0x60698c: 0x0  nop
    ctx->pc = 0x60698cu;
    // NOP
label_606990:
    // 0x606990: 0x0  nop
    ctx->pc = 0x606990u;
    // NOP
label_606994:
    // 0x606994: 0x0  nop
    ctx->pc = 0x606994u;
    // NOP
label_606998:
    // 0x606998: 0x23b0f0  tge         $at, $v1, 707
    ctx->pc = 0x606998u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_60699c:
    // 0x60699c: 0x2dccf0  tge         $at, $t5, 819
    ctx->pc = 0x60699cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_6069a0:
    // 0x6069a0: 0x23b170  tge         $at, $v1, 709
    ctx->pc = 0x6069a0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_6069a4:
    // 0x6069a4: 0x23b1a0  .word       0x0023B1A0                   # add         $s6, $at, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6069a4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_6069a8:
    // 0x6069a8: 0x23b1c0  .word       0x0023B1C0                   # sll         $s6, $v1, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6069a8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_6069ac:
    // 0x6069ac: 0x2dc5b0  tge         $at, $t5, 790
    ctx->pc = 0x6069acu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_6069b0:
    // 0x6069b0: 0x2dc620  .word       0x002DC620                   # add         $t8, $at, $t5 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6069b0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_6069b4:
    // 0x6069b4: 0x2dc670  tge         $at, $t5, 793
    ctx->pc = 0x6069b4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_6069b8:
    // 0x6069b8: 0x2dcd20  .word       0x002DCD20                   # add         $t9, $at, $t5 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6069b8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_6069bc:
    // 0x6069bc: 0x274800  .word       0x00274800                   # sll         $t1, $a3, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6069bcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_6069c0:
    // 0x6069c0: 0x274840  .word       0x00274840                   # sll         $t1, $a3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6069c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_6069c4:
    // 0x6069c4: 0x274870  tge         $at, $a3, 289
    ctx->pc = 0x6069c4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_6069c8:
    // 0x6069c8: 0x274880  .word       0x00274880                   # sll         $t1, $a3, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6069c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_6069cc:
    // 0x6069cc: 0x0  nop
    ctx->pc = 0x6069ccu;
    // NOP
label_6069d0:
    // 0x6069d0: 0x0  nop
    ctx->pc = 0x6069d0u;
    // NOP
label_6069d4:
    // 0x6069d4: 0x0  nop
    ctx->pc = 0x6069d4u;
    // NOP
label_6069d8:
    // 0x6069d8: 0x2dcf40  .word       0x002DCF40                   # sll         $t9, $t5, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6069d8u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 13), 29));
label_6069dc:
    // 0x6069dc: 0x2dcff0  tge         $at, $t5, 831
    ctx->pc = 0x6069dcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_6069e0:
    // 0x6069e0: 0x244730  tge         $at, $a0, 284
    ctx->pc = 0x6069e0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_6069e4:
    // 0x6069e4: 0x2447b0  tge         $at, $a0, 286
    ctx->pc = 0x6069e4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_6069e8:
    // 0x6069e8: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6069e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
label_6069ec:
    // 0x6069ec: 0x2dced0  .word       0x002DCED0                   # mfhi        $t9 # 002D06C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6069ecu;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_6069f0:
    // 0x6069f0: 0x2dd0b0  tge         $at, $t5, 834
    ctx->pc = 0x6069f0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_6069f4:
    // 0x6069f4: 0x244850  .word       0x00244850                   # mfhi        $t1 # 00240040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6069f4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_6069f8:
    // 0x6069f8: 0x0  nop
    ctx->pc = 0x6069f8u;
    // NOP
label_6069fc:
    // 0x6069fc: 0x0  nop
    ctx->pc = 0x6069fcu;
    // NOP
label_606a00:
    // 0x606a00: 0x0  nop
    ctx->pc = 0x606a00u;
    // NOP
label_606a04:
    // 0x606a04: 0x0  nop
    ctx->pc = 0x606a04u;
    // NOP
label_606a08:
    // 0x606a08: 0x2df9b0  tge         $at, $t5, 998
    ctx->pc = 0x606a08u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_606a0c:
    // 0x606a0c: 0x2df9e0  .word       0x002DF9E0                   # add         $ra, $at, $t5 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606a0cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_606a10:
    // 0x606a10: 0x244730  tge         $at, $a0, 284
    ctx->pc = 0x606a10u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_606a14:
    // 0x606a14: 0x2447b0  tge         $at, $a0, 286
    ctx->pc = 0x606a14u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_606a18:
    // 0x606a18: 0x213bc0  .word       0x00213BC0                   # sll         $a3, $at, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606a18u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 1), 15));
label_606a1c:
    // 0x606a1c: 0x2df910  .word       0x002DF910                   # mfhi        $ra # 002D0100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606a1cu;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_606a20:
    // 0x606a20: 0x244770  tge         $at, $a0, 285
    ctx->pc = 0x606a20u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_606a24:
    // 0x606a24: 0x2e0f80  .word       0x002E0F80                   # sll         $at, $t6, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606a24u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 14), 30));
label_606a28:
    // 0x606a28: 0x0  nop
    ctx->pc = 0x606a28u;
    // NOP
label_606a2c:
    // 0x606a2c: 0x0  nop
    ctx->pc = 0x606a2cu;
    // NOP
label_606a30:
    // 0x606a30: 0x2e3620  .word       0x002E3620                   # add         $a2, $at, $t6 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606a30u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_606a34:
    // 0x606a34: 0x0  nop
    ctx->pc = 0x606a34u;
    // NOP
label_606a38:
    // 0x606a38: 0x0  nop
    ctx->pc = 0x606a38u;
    // NOP
label_606a3c:
    // 0x606a3c: 0x0  nop
    ctx->pc = 0x606a3cu;
    // NOP
label_606a40:
    // 0x606a40: 0x0  nop
    ctx->pc = 0x606a40u;
    // NOP
label_606a44:
    // 0x606a44: 0x0  nop
    ctx->pc = 0x606a44u;
    // NOP
label_606a48:
    // 0x606a48: 0x2e3cf0  tge         $at, $t6, 243
    ctx->pc = 0x606a48u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_606a4c:
    // 0x606a4c: 0x2e3dd0  .word       0x002E3DD0                   # mfhi        $a3 # 002E05C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606a4cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_606a50:
    // 0x606a50: 0x2e4cf0  tge         $at, $t6, 307
    ctx->pc = 0x606a50u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_606a54:
    // 0x606a54: 0x0  nop
    ctx->pc = 0x606a54u;
    // NOP
label_606a58:
    // 0x606a58: 0x0  nop
    ctx->pc = 0x606a58u;
    // NOP
label_606a5c:
    // 0x606a5c: 0x0  nop
    ctx->pc = 0x606a5cu;
    // NOP
label_606a60:
    // 0x606a60: 0x2e5e00  .word       0x002E5E00                   # sll         $t3, $t6, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606a60u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
label_606a64:
    // 0x606a64: 0x0  nop
    ctx->pc = 0x606a64u;
    // NOP
label_606a68:
    // 0x606a68: 0x0  nop
    ctx->pc = 0x606a68u;
    // NOP
label_606a6c:
    // 0x606a6c: 0x0  nop
    ctx->pc = 0x606a6cu;
    // NOP
label_606a70:
    // 0x606a70: 0x5f8d20  .word       0x005F8D20                   # add         $s1, $v0, $ra # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606a70u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 31);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_606a74:
    // 0x606a74: 0x0  nop
    ctx->pc = 0x606a74u;
    // NOP
label_606a78:
    // 0x606a78: 0x2e7ef0  tge         $at, $t6, 507
    ctx->pc = 0x606a78u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_606a7c:
    // 0x606a7c: 0x2e7f40  .word       0x002E7F40                   # sll         $t7, $t6, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606a7cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 29));
label_606a80:
    // 0x606a80: 0x5f8da8  .word       0x005F8DA8                   # mfsa        $s1 # 005F0580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x606a80u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_606a84:
    // 0x606a84: 0x0  nop
    ctx->pc = 0x606a84u;
    // NOP
label_606a88:
    // 0x606a88: 0x2e82b0  tge         $at, $t6, 522
    ctx->pc = 0x606a88u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_606a8c:
    // 0x606a8c: 0x2e8310  .word       0x002E8310                   # mfhi        $s0 # 002E0300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606a8cu;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_606a90:
    // 0x606a90: 0x5f8f68  .word       0x005F8F68                   # mfsa        $s1 # 005F0740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x606a90u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_606a94:
    // 0x606a94: 0x0  nop
    ctx->pc = 0x606a94u;
    // NOP
label_606a98:
    // 0x606a98: 0x2e8f50  .word       0x002E8F50                   # mfhi        $s1 # 002E0740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606a98u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_606a9c:
    // 0x606a9c: 0x2e9e70  tge         $at, $t6, 633
    ctx->pc = 0x606a9cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_606aa0:
    // 0x606aa0: 0x0  nop
    ctx->pc = 0x606aa0u;
    // NOP
label_606aa4:
    // 0x606aa4: 0x0  nop
    ctx->pc = 0x606aa4u;
    // NOP
label_606aa8:
    // 0x606aa8: 0x44f340  .word       0x0044F340                   # sll         $fp, $a0, 13 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606aa8u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 4), 13));
label_606aac:
    // 0x606aac: 0x44e380  .word       0x0044E380                   # sll         $gp, $a0, 14 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606aacu;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 4), 14));
label_606ab0:
    // 0x606ab0: 0x0  nop
    ctx->pc = 0x606ab0u;
    // NOP
label_606ab4:
    // 0x606ab4: 0x0  nop
    ctx->pc = 0x606ab4u;
    // NOP
label_606ab8:
    // 0x606ab8: 0x44f2d0  .word       0x0044F2D0                   # mfhi        $fp # 004402C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606ab8u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_606abc:
    // 0x606abc: 0x44e370  tge         $v0, $a0, 909
    ctx->pc = 0x606abcu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_606ac0:
    // 0x606ac0: 0x0  nop
    ctx->pc = 0x606ac0u;
    // NOP
label_606ac4:
    // 0x606ac4: 0x0  nop
    ctx->pc = 0x606ac4u;
    // NOP
label_606ac8:
    // 0x606ac8: 0x44f230  tge         $v0, $a0, 968
    ctx->pc = 0x606ac8u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_606acc:
    // 0x606acc: 0x44e360  .word       0x0044E360                   # add         $gp, $v0, $a0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606accu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_606ad0:
    // 0x606ad0: 0x0  nop
    ctx->pc = 0x606ad0u;
    // NOP
label_606ad4:
    // 0x606ad4: 0x0  nop
    ctx->pc = 0x606ad4u;
    // NOP
label_606ad8:
    // 0x606ad8: 0x44f1b0  tge         $v0, $a0, 966
    ctx->pc = 0x606ad8u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_606adc:
    // 0x606adc: 0x44e350  .word       0x0044E350                   # mfhi        $gp # 00440340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606adcu;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_606ae0:
    // 0x606ae0: 0x0  nop
    ctx->pc = 0x606ae0u;
    // NOP
label_606ae4:
    // 0x606ae4: 0x0  nop
    ctx->pc = 0x606ae4u;
    // NOP
label_606ae8:
    // 0x606ae8: 0x44f140  .word       0x0044F140                   # sll         $fp, $a0, 5 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606ae8u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_606aec:
    // 0x606aec: 0x44e340  .word       0x0044E340                   # sll         $gp, $a0, 13 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606aecu;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 4), 13));
label_606af0:
    // 0x606af0: 0x0  nop
    ctx->pc = 0x606af0u;
    // NOP
label_606af4:
    // 0x606af4: 0x0  nop
    ctx->pc = 0x606af4u;
    // NOP
label_606af8:
    // 0x606af8: 0x44f0c0  .word       0x0044F0C0                   # sll         $fp, $a0, 3 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606af8u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_606afc:
    // 0x606afc: 0x44e330  tge         $v0, $a0, 908
    ctx->pc = 0x606afcu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_606b00:
    // 0x606b00: 0x0  nop
    ctx->pc = 0x606b00u;
    // NOP
label_606b04:
    // 0x606b04: 0x0  nop
    ctx->pc = 0x606b04u;
    // NOP
label_606b08:
    // 0x606b08: 0x44f030  tge         $v0, $a0, 960
    ctx->pc = 0x606b08u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_606b0c:
    // 0x606b0c: 0x44e320  .word       0x0044E320                   # add         $gp, $v0, $a0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606b0cu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_606b10:
    // 0x606b10: 0x0  nop
    ctx->pc = 0x606b10u;
    // NOP
label_606b14:
    // 0x606b14: 0x0  nop
    ctx->pc = 0x606b14u;
    // NOP
label_606b18:
    // 0x606b18: 0x44efb0  tge         $v0, $a0, 958
    ctx->pc = 0x606b18u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_606b1c:
    // 0x606b1c: 0x44e310  .word       0x0044E310                   # mfhi        $gp # 00440300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606b1cu;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_606b20:
    // 0x606b20: 0x0  nop
    ctx->pc = 0x606b20u;
    // NOP
label_606b24:
    // 0x606b24: 0x0  nop
    ctx->pc = 0x606b24u;
    // NOP
label_606b28:
    // 0x606b28: 0x44ef40  .word       0x0044EF40                   # sll         $sp, $a0, 29 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606b28u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 4), 29));
label_606b2c:
    // 0x606b2c: 0x44e300  .word       0x0044E300                   # sll         $gp, $a0, 12 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606b2cu;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 4), 12));
label_606b30:
    // 0x606b30: 0x0  nop
    ctx->pc = 0x606b30u;
    // NOP
label_606b34:
    // 0x606b34: 0x0  nop
    ctx->pc = 0x606b34u;
    // NOP
label_606b38:
    // 0x606b38: 0x44eed0  .word       0x0044EED0                   # mfhi        $sp # 004406C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606b38u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_606b3c:
    // 0x606b3c: 0x44e2f0  tge         $v0, $a0, 907
    ctx->pc = 0x606b3cu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_606b40:
    // 0x606b40: 0x0  nop
    ctx->pc = 0x606b40u;
    // NOP
label_606b44:
    // 0x606b44: 0x0  nop
    ctx->pc = 0x606b44u;
    // NOP
label_606b48:
    // 0x606b48: 0x44ee30  tge         $v0, $a0, 952
    ctx->pc = 0x606b48u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_606b4c:
    // 0x606b4c: 0x44e2d0  .word       0x0044E2D0                   # mfhi        $gp # 004402C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606b4cu;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_606b50:
    // 0x606b50: 0x0  nop
    ctx->pc = 0x606b50u;
    // NOP
label_606b54:
    // 0x606b54: 0x0  nop
    ctx->pc = 0x606b54u;
    // NOP
label_606b58:
    // 0x606b58: 0x44eda0  .word       0x0044EDA0                   # add         $sp, $v0, $a0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606b58u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_606b5c:
    // 0x606b5c: 0x44e2c0  .word       0x0044E2C0                   # sll         $gp, $a0, 11 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606b5cu;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
label_606b60:
    // 0x606b60: 0x0  nop
    ctx->pc = 0x606b60u;
    // NOP
label_606b64:
    // 0x606b64: 0x0  nop
    ctx->pc = 0x606b64u;
    // NOP
label_606b68:
    // 0x606b68: 0x44ed20  .word       0x0044ED20                   # add         $sp, $v0, $a0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606b68u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_606b6c:
    // 0x606b6c: 0x44e2b0  tge         $v0, $a0, 906
    ctx->pc = 0x606b6cu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_606b70:
    // 0x606b70: 0x0  nop
    ctx->pc = 0x606b70u;
    // NOP
label_606b74:
    // 0x606b74: 0x0  nop
    ctx->pc = 0x606b74u;
    // NOP
label_606b78:
    // 0x606b78: 0x44eca0  .word       0x0044ECA0                   # add         $sp, $v0, $a0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606b78u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_606b7c:
    // 0x606b7c: 0x44e2a0  .word       0x0044E2A0                   # add         $gp, $v0, $a0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606b7cu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_606b80:
    // 0x606b80: 0x0  nop
    ctx->pc = 0x606b80u;
    // NOP
label_606b84:
    // 0x606b84: 0x0  nop
    ctx->pc = 0x606b84u;
    // NOP
label_606b88:
    // 0x606b88: 0x0  nop
    ctx->pc = 0x606b88u;
    // NOP
label_606b8c:
    // 0x606b8c: 0x44f3c0  .word       0x0044F3C0                   # sll         $fp, $a0, 15 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606b8cu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 4), 15));
label_606b90:
    // 0x606b90: 0x0  nop
    ctx->pc = 0x606b90u;
    // NOP
label_606b94:
    // 0x606b94: 0x0  nop
    ctx->pc = 0x606b94u;
    // NOP
label_606b98:
    // 0x606b98: 0x44ec00  .word       0x0044EC00                   # sll         $sp, $a0, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606b98u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_606b9c:
    // 0x606b9c: 0x44e290  .word       0x0044E290                   # mfhi        $gp # 00440280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606b9cu;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_606ba0:
    // 0x606ba0: 0x0  nop
    ctx->pc = 0x606ba0u;
    // NOP
label_606ba4:
    // 0x606ba4: 0x0  nop
    ctx->pc = 0x606ba4u;
    // NOP
label_606ba8:
    // 0x606ba8: 0x467640  .word       0x00467640                   # sll         $t6, $a2, 25 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606ba8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 6), 25));
label_606bac:
    // 0x606bac: 0x468c70  tge         $v0, $a2, 561
    ctx->pc = 0x606bacu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_606bb0:
    // 0x606bb0: 0x467ae0  .word       0x00467AE0                   # add         $t7, $v0, $a2 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606bb0u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_606bb4:
    // 0x606bb4: 0x467a90  .word       0x00467A90                   # mfhi        $t7 # 00460280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606bb4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_606bb8:
    // 0x606bb8: 0x0  nop
    ctx->pc = 0x606bb8u;
    // NOP
label_606bbc:
    // 0x606bbc: 0x0  nop
    ctx->pc = 0x606bbcu;
    // NOP
label_606bc0:
    // 0x606bc0: 0x467cb0  tge         $v0, $a2, 498
    ctx->pc = 0x606bc0u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_606bc4:
    // 0x606bc4: 0x467cd0  .word       0x00467CD0                   # mfhi        $t7 # 004604C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606bc4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_606bc8:
    // 0x606bc8: 0x467ca0  .word       0x00467CA0                   # add         $t7, $v0, $a2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606bc8u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_606bcc:
    // 0x606bcc: 0x467cc0  .word       0x00467CC0                   # sll         $t7, $a2, 19 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606bccu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 6), 19));
label_606bd0:
    // 0x606bd0: 0x468c20  .word       0x00468C20                   # add         $s1, $v0, $a2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606bd0u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_606bd4:
    // 0x606bd4: 0x468c50  .word       0x00468C50                   # mfhi        $s1 # 00460440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606bd4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_606bd8:
    // 0x606bd8: 0x467a40  .word       0x00467A40                   # sll         $t7, $a2, 9 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606bd8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
label_606bdc:
    // 0x606bdc: 0x467940  .word       0x00467940                   # sll         $t7, $a2, 5 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606bdcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_606be0:
    // 0x606be0: 0x0  nop
    ctx->pc = 0x606be0u;
    // NOP
label_606be4:
    // 0x606be4: 0x0  nop
    ctx->pc = 0x606be4u;
    // NOP
label_606be8:
    // 0x606be8: 0x467e80  .word       0x00467E80                   # sll         $t7, $a2, 26 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606be8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 6), 26));
label_606bec:
    // 0x606bec: 0x468c70  tge         $v0, $a2, 561
    ctx->pc = 0x606becu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_606bf0:
    // 0x606bf0: 0x4684d0  .word       0x004684D0                   # mfhi        $s0 # 004604C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606bf0u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_606bf4:
    // 0x606bf4: 0x4681f0  tge         $v0, $a2, 519
    ctx->pc = 0x606bf4u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_606bf8:
    // 0x606bf8: 0x0  nop
    ctx->pc = 0x606bf8u;
    // NOP
label_606bfc:
    // 0x606bfc: 0x0  nop
    ctx->pc = 0x606bfcu;
    // NOP
label_606c00:
    // 0x606c00: 0x468840  .word       0x00468840                   # sll         $s1, $a2, 1 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606c00u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_606c04:
    // 0x606c04: 0x467cd0  .word       0x00467CD0                   # mfhi        $t7 # 004604C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606c04u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_606c08:
    // 0x606c08: 0x468830  tge         $v0, $a2, 544
    ctx->pc = 0x606c08u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_606c0c:
    // 0x606c0c: 0x468850  .word       0x00468850                   # mfhi        $s1 # 00460040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606c0cu;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_606c10:
    // 0x606c10: 0x468c20  .word       0x00468C20                   # add         $s1, $v0, $a2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606c10u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_606c14:
    // 0x606c14: 0x468c50  .word       0x00468C50                   # mfhi        $s1 # 00460440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606c14u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_606c18:
    // 0x606c18: 0x467f10  .word       0x00467F10                   # mfhi        $t7 # 00460700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606c18u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_606c1c:
    // 0x606c1c: 0x125e70  tge         $zero, $s2, 377
    ctx->pc = 0x606c1cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_606c20:
    // 0x606c20: 0x0  nop
    ctx->pc = 0x606c20u;
    // NOP
label_606c24:
    // 0x606c24: 0x0  nop
    ctx->pc = 0x606c24u;
    // NOP
label_606c28:
    // 0x606c28: 0x468ac0  .word       0x00468AC0                   # sll         $s1, $a2, 11 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606c28u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
label_606c2c:
    // 0x606c2c: 0x468c70  tge         $v0, $a2, 561
    ctx->pc = 0x606c2cu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_606c30:
    // 0x606c30: 0x0  nop
    ctx->pc = 0x606c30u;
    // NOP
label_606c34:
    // 0x606c34: 0x0  nop
    ctx->pc = 0x606c34u;
    // NOP
label_606c38:
    // 0x606c38: 0x0  nop
    ctx->pc = 0x606c38u;
    // NOP
label_606c3c:
    // 0x606c3c: 0x0  nop
    ctx->pc = 0x606c3cu;
    // NOP
label_606c40:
    // 0x606c40: 0x468e60  .word       0x00468E60                   # add         $s1, $v0, $a2 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606c40u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_606c44:
    // 0x606c44: 0x467cd0  .word       0x00467CD0                   # mfhi        $t7 # 004604C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606c44u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_606c48:
    // 0x606c48: 0x0  nop
    ctx->pc = 0x606c48u;
    // NOP
label_606c4c:
    // 0x606c4c: 0x0  nop
    ctx->pc = 0x606c4cu;
    // NOP
label_606c50:
    // 0x606c50: 0x468c20  .word       0x00468C20                   # add         $s1, $v0, $a2 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606c50u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_606c54:
    // 0x606c54: 0x468c50  .word       0x00468C50                   # mfhi        $s1 # 00460440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606c54u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_606c58:
    // 0x606c58: 0x0  nop
    ctx->pc = 0x606c58u;
    // NOP
label_606c5c:
    // 0x606c5c: 0x0  nop
    ctx->pc = 0x606c5cu;
    // NOP
label_606c60:
    // 0x606c60: 0x0  nop
    ctx->pc = 0x606c60u;
    // NOP
label_606c64:
    // 0x606c64: 0x0  nop
    ctx->pc = 0x606c64u;
    // NOP
label_606c68:
    // 0x606c68: 0x4689a0  .word       0x004689A0                   # add         $s1, $v0, $a2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606c68u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_606c6c:
    // 0x606c6c: 0x468dc0  .word       0x00468DC0                   # sll         $s1, $a2, 23 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606c6cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
label_606c70:
    // 0x606c70: 0x0  nop
    ctx->pc = 0x606c70u;
    // NOP
label_606c74:
    // 0x606c74: 0x0  nop
    ctx->pc = 0x606c74u;
    // NOP
label_606c78:
    // 0x606c78: 0x0  nop
    ctx->pc = 0x606c78u;
    // NOP
label_606c7c:
    // 0x606c7c: 0x0  nop
    ctx->pc = 0x606c7cu;
    // NOP
label_606c80:
    // 0x606c80: 0x0  nop
    ctx->pc = 0x606c80u;
    // NOP
label_606c84:
    // 0x606c84: 0x0  nop
    ctx->pc = 0x606c84u;
    // NOP
label_606c88:
    // 0x606c88: 0x468940  .word       0x00468940                   # sll         $s1, $a2, 5 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606c88u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_606c8c:
    // 0x606c8c: 0x0  nop
    ctx->pc = 0x606c8cu;
    // NOP
label_606c90:
    // 0x606c90: 0x0  nop
    ctx->pc = 0x606c90u;
    // NOP
label_606c94:
    // 0x606c94: 0x0  nop
    ctx->pc = 0x606c94u;
    // NOP
label_606c98:
    // 0x606c98: 0x0  nop
    ctx->pc = 0x606c98u;
    // NOP
label_606c9c:
    // 0x606c9c: 0x0  nop
    ctx->pc = 0x606c9cu;
    // NOP
label_606ca0:
    // 0x606ca0: 0x0  nop
    ctx->pc = 0x606ca0u;
    // NOP
label_606ca4:
    // 0x606ca4: 0x0  nop
    ctx->pc = 0x606ca4u;
    // NOP
label_606ca8:
    // 0x606ca8: 0x4688d0  .word       0x004688D0                   # mfhi        $s1 # 004600C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606ca8u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_606cac:
    // 0x606cac: 0x468e10  .word       0x00468E10                   # mfhi        $s1 # 00460600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606cacu;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_606cb0:
    // 0x606cb0: 0x0  nop
    ctx->pc = 0x606cb0u;
    // NOP
label_606cb4:
    // 0x606cb4: 0x0  nop
    ctx->pc = 0x606cb4u;
    // NOP
label_606cb8:
    // 0x606cb8: 0x0  nop
    ctx->pc = 0x606cb8u;
    // NOP
label_606cbc:
    // 0x606cbc: 0x0  nop
    ctx->pc = 0x606cbcu;
    // NOP
label_606cc0:
    // 0x606cc0: 0x468f20  .word       0x00468F20                   # add         $s1, $v0, $a2 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606cc0u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_606cc4:
    // 0x606cc4: 0x0  nop
    ctx->pc = 0x606cc4u;
    // NOP
label_606cc8:
    // 0x606cc8: 0x0  nop
    ctx->pc = 0x606cc8u;
    // NOP
label_606ccc:
    // 0x606ccc: 0x0  nop
    ctx->pc = 0x606cccu;
    // NOP
label_606cd0:
    // 0x606cd0: 0x46a0d0  .word       0x0046A0D0                   # mfhi        $s4 # 004600C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606cd0u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_606cd4:
    // 0x606cd4: 0x0  nop
    ctx->pc = 0x606cd4u;
    // NOP
label_606cd8:
    // 0x606cd8: 0x0  nop
    ctx->pc = 0x606cd8u;
    // NOP
label_606cdc:
    // 0x606cdc: 0x0  nop
    ctx->pc = 0x606cdcu;
    // NOP
label_606ce0:
    // 0x606ce0: 0x46bbd0  .word       0x0046BBD0                   # mfhi        $s7 # 004603C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606ce0u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_606ce4:
    // 0x606ce4: 0x0  nop
    ctx->pc = 0x606ce4u;
    // NOP
label_606ce8:
    // 0x606ce8: 0x0  nop
    ctx->pc = 0x606ce8u;
    // NOP
label_606cec:
    // 0x606cec: 0x0  nop
    ctx->pc = 0x606cecu;
    // NOP
label_606cf0:
    // 0x606cf0: 0x46c0d0  .word       0x0046C0D0                   # mfhi        $t8 # 004600C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606cf0u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_606cf4:
    // 0x606cf4: 0x0  nop
    ctx->pc = 0x606cf4u;
    // NOP
label_606cf8:
    // 0x606cf8: 0x0  nop
    ctx->pc = 0x606cf8u;
    // NOP
label_606cfc:
    // 0x606cfc: 0x0  nop
    ctx->pc = 0x606cfcu;
    // NOP
label_606d00:
    // 0x606d00: 0x46bcb0  tge         $v0, $a2, 754
    ctx->pc = 0x606d00u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_606d04:
    // 0x606d04: 0x0  nop
    ctx->pc = 0x606d04u;
    // NOP
label_606d08:
    // 0x606d08: 0x0  nop
    ctx->pc = 0x606d08u;
    // NOP
label_606d0c:
    // 0x606d0c: 0x0  nop
    ctx->pc = 0x606d0cu;
    // NOP
label_606d10:
    // 0x606d10: 0x46d7f0  tge         $v0, $a2, 863
    ctx->pc = 0x606d10u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_606d14:
    // 0x606d14: 0x0  nop
    ctx->pc = 0x606d14u;
    // NOP
label_606d18:
    // 0x606d18: 0x0  nop
    ctx->pc = 0x606d18u;
    // NOP
label_606d1c:
    // 0x606d1c: 0x0  nop
    ctx->pc = 0x606d1cu;
    // NOP
label_606d20:
    // 0x606d20: 0x46f2a0  .word       0x0046F2A0                   # add         $fp, $v0, $a2 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606d20u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_606d24:
    // 0x606d24: 0x0  nop
    ctx->pc = 0x606d24u;
    // NOP
label_606d28:
    // 0x606d28: 0x0  nop
    ctx->pc = 0x606d28u;
    // NOP
label_606d2c:
    // 0x606d2c: 0x0  nop
    ctx->pc = 0x606d2cu;
    // NOP
label_606d30:
    // 0x606d30: 0x0  nop
    ctx->pc = 0x606d30u;
    // NOP
label_606d34:
    // 0x606d34: 0x0  nop
    ctx->pc = 0x606d34u;
    // NOP
label_606d38:
    // 0x606d38: 0x0  nop
    ctx->pc = 0x606d38u;
    // NOP
label_606d3c:
    // 0x606d3c: 0x472d60  .word       0x00472D60                   # add         $a1, $v0, $a3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606d3cu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_606d40:
    // 0x606d40: 0x0  nop
    ctx->pc = 0x606d40u;
    // NOP
label_606d44:
    // 0x606d44: 0x473da0  .word       0x00473DA0                   # add         $a3, $v0, $a3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606d44u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_606d48:
    // 0x606d48: 0x473590  .word       0x00473590                   # mfhi        $a2 # 00470580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606d48u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_606d4c:
    // 0x606d4c: 0x473930  tge         $v0, $a3, 228
    ctx->pc = 0x606d4cu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_606d50:
    // 0x606d50: 0x474460  .word       0x00474460                   # add         $t0, $v0, $a3 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606d50u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_606d54:
    // 0x606d54: 0x0  nop
    ctx->pc = 0x606d54u;
    // NOP
label_606d58:
    // 0x606d58: 0x0  nop
    ctx->pc = 0x606d58u;
    // NOP
label_606d5c:
    // 0x606d5c: 0x0  nop
    ctx->pc = 0x606d5cu;
    // NOP
label_606d60:
    // 0x606d60: 0x0  nop
    ctx->pc = 0x606d60u;
    // NOP
label_606d64:
    // 0x606d64: 0x0  nop
    ctx->pc = 0x606d64u;
    // NOP
label_606d68:
    // 0x606d68: 0x4750a0  .word       0x004750A0                   # add         $t2, $v0, $a3 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606d68u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_606d6c:
    // 0x606d6c: 0x472d60  .word       0x00472D60                   # add         $a1, $v0, $a3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606d6cu;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_606d70:
    // 0x606d70: 0x475110  .word       0x00475110                   # mfhi        $t2 # 00470100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606d70u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_606d74:
    // 0x606d74: 0x473da0  .word       0x00473DA0                   # add         $a3, $v0, $a3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606d74u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_606d78:
    // 0x606d78: 0x473590  .word       0x00473590                   # mfhi        $a2 # 00470580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606d78u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_606d7c:
    // 0x606d7c: 0x473930  tge         $v0, $a3, 228
    ctx->pc = 0x606d7cu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_606d80:
    // 0x606d80: 0x474460  .word       0x00474460                   # add         $t0, $v0, $a3 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606d80u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_606d84:
    // 0x606d84: 0x0  nop
    ctx->pc = 0x606d84u;
    // NOP
label_606d88:
    // 0x606d88: 0x0  nop
    ctx->pc = 0x606d88u;
    // NOP
label_606d8c:
    // 0x606d8c: 0x0  nop
    ctx->pc = 0x606d8cu;
    // NOP
label_606d90:
    // 0x606d90: 0x0  nop
    ctx->pc = 0x606d90u;
    // NOP
label_606d94:
    // 0x606d94: 0x0  nop
    ctx->pc = 0x606d94u;
    // NOP
label_606d98:
    // 0x606d98: 0x4757f0  tge         $v0, $a3, 351
    ctx->pc = 0x606d98u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_606d9c:
    // 0x606d9c: 0x475a80  .word       0x00475A80                   # sll         $t3, $a3, 10 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606d9cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 10));
label_606da0:
    // 0x606da0: 0x475ec0  .word       0x00475EC0                   # sll         $t3, $a3, 27 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606da0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 27));
label_606da4:
    // 0x606da4: 0x475f20  .word       0x00475F20                   # add         $t3, $v0, $a3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606da4u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_606da8:
    // 0x606da8: 0x4760e0  .word       0x004760E0                   # add         $t4, $v0, $a3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606da8u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_606dac:
    // 0x606dac: 0x476490  .word       0x00476490                   # mfhi        $t4 # 00470480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606dacu;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_606db0:
    // 0x606db0: 0x476900  .word       0x00476900                   # sll         $t5, $a3, 4 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606db0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_606db4:
    // 0x606db4: 0x0  nop
    ctx->pc = 0x606db4u;
    // NOP
label_606db8:
    // 0x606db8: 0x0  nop
    ctx->pc = 0x606db8u;
    // NOP
label_606dbc:
    // 0x606dbc: 0x0  nop
    ctx->pc = 0x606dbcu;
    // NOP
label_606dc0:
    // 0x606dc0: 0x48bfb0  tge         $v0, $t0, 766
    ctx->pc = 0x606dc0u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_606dc4:
    // 0x606dc4: 0x0  nop
    ctx->pc = 0x606dc4u;
    // NOP
label_606dc8:
    // 0x606dc8: 0x0  nop
    ctx->pc = 0x606dc8u;
    // NOP
label_606dcc:
    // 0x606dcc: 0x0  nop
    ctx->pc = 0x606dccu;
    // NOP
label_606dd0:
    // 0x606dd0: 0xb00108  .word       0x00B00108                   # jr          $a1 # 00100100 <InstrIdType: CPU_SPECIAL>
label_606dd4:
    if (ctx->pc == 0x606DD4u) {
        ctx->pc = 0x606DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x606DD0u;
        // 0x606dd4: 0x1200dc01  beqz        $s0, . + 4 + (-0x23FF << 2) (Delay Slot)
        // Likely branch instruction at 0x606DD4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x606DD8u;
        goto label_606dd8;
    }
    ctx->pc = 0x606DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        ctx->pc = 0x606DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x606DD0u;
        // 0x606dd4: 0x1200dc01  beqz        $s0, . + 4 + (-0x23FF << 2) (Delay Slot)
        // Likely branch instruction at 0x606DD4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x606DD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x606DD8u;
label_606dd8:
    // 0x606dd8: 0x90018200  lbu         $at, -0x7E00($zero)
    ctx->pc = 0x606dd8u;
    SET_GPR_ZE32(ctx, 1, (uint8_t)runtime->Load8(rdram, ctx, 0xFFFF8200u));
label_606ddc:
    // 0x606ddc: 0x2e8100  .word       0x002E8100                   # sll         $s0, $t6, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
label_606de0:
    // 0x606de0: 0x28008020  slti        $zero, $zero, -0x7FE0
    ctx->pc = 0x606de0u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)4294934560) ? 1 : 0);
label_606de4:
    // 0x606de4: 0x201400  .word       0x00201400                   # sll         $v0, $zero, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_606de8:
    // 0x606de8: 0x8f001c  dmult       $a0, $t7
    ctx->pc = 0x606de8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x606DE8 raw=0x008F001C");
label_606dec:
    // 0x606dec: 0x408d4038  .word       0x408D4038                   # mtc0        $t5, BadVaddr # 00000038 <InstrIdType: R5900_COP0>
    ctx->pc = 0x606decu;
    // MTC0 to BADVADDR register ignored (read-only)
label_606df0:
    // 0x606df0: 0x68008020  ldl         $zero, -0x7FE0($zero)
    ctx->pc = 0x606df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4294934560); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_606df4:
    // 0x606df4: 0x201400  .word       0x00201400                   # sll         $v0, $zero, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_606df8:
    // 0x606df8: 0x28f0024  and         $zero, $s4, $t7
    ctx->pc = 0x606df8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 20) & GPR_U64(ctx, 15));
label_606dfc:
    // 0x606dfc: 0x8d404078  lw          $zero, 0x4078($t2)
    ctx->pc = 0x606dfcu;
    SET_GPR_S32(ctx, 0, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16504)));
label_606e00:
    // 0x606e00: 0x408d005f  .word       0x408D005F                   # mtc0        $t5, Index # 0000005F <InstrIdType: R5900_COP0>
    ctx->pc = 0x606e00u;
    ctx->cop0_index = GPR_U32(ctx, 13) & 0x3F;
label_606e04:
    // 0x606e04: 0x800104  .word       0x00800104                   # sllv        $zero, $zero, $a0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606e04u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 4) & 0x1F));
label_606e08:
    // 0x606e08: 0x0  nop
    ctx->pc = 0x606e08u;
    // NOP
label_606e0c:
    // 0x606e0c: 0xb00d09  .word       0x00B00D09                   # jalr        $at, $a1 # 00100500 <InstrIdType: CPU_SPECIAL>
label_606e10:
    if (ctx->pc == 0x606E10u) {
        ctx->pc = 0x606E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x606E0Cu;
        // 0x606e10: 0x12801009  beqz        $s4, . + 4 + (0x1009 << 2) (Delay Slot)
        // Likely branch instruction at 0x606E10 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x606E14u;
        goto label_606e14;
    }
    ctx->pc = 0x606E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 1, 0x606E14u);
        ctx->pc = 0x606E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x606E0Cu;
        // 0x606e10: 0x12801009  beqz        $s4, . + 4 + (0x1009 << 2) (Delay Slot)
        // Likely branch instruction at 0x606E10 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x606E0Cu, 0x606E14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x606E14u;
label_606e14:
    // 0x606e14: 0x8e00  sll         $s1, $zero, 24
    ctx->pc = 0x606e14u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_606e18:
    // 0x606e18: 0xb00124  .word       0x00B00124                   # and         $zero, $a1, $s0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606e18u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
label_606e1c:
    // 0x606e1c: 0x38200058  xori        $zero, $at, 0x58
    ctx->pc = 0x606e1cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)88);
label_606e20:
    // 0x606e20: 0x94013030  lhu         $at, 0x3030($zero)
    ctx->pc = 0x606e20u;
    SET_GPR_ZE32(ctx, 1, (uint16_t)FAST_READ16(0x3030u));
label_606e24:
    // 0x606e24: 0x30dc01  .word       0x0030DC01                   # INVALID     $at, $s0, -0x23FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606e24u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x606E24 raw=0x0030DC01");
label_606e28:
    // 0x606e28: 0x8c  syscall     2
    ctx->pc = 0x606e28u;
    ctx->pc = 0x606E2Cu;
runtime->handleSyscall(rdram, ctx, 0x2u);
label_606e2c:
    // 0x606e2c: 0x60017800  daddi       $at, $zero, 0x7800
    ctx->pc = 0x606e2cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 0); int64_t imm = (int64_t)(int32_t)30720; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_606e30:
    // 0x606e30: 0x60018d  break       96, 6
    ctx->pc = 0x606e30u;
    runtime->handleBreak(rdram, ctx);
label_606e34:
    // 0x606e34: 0x300d03  .word       0x00300D03                   # sra         $at, $s0, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606e34u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 16), 20));
label_606e38:
    // 0x606e38: 0x0  nop
    ctx->pc = 0x606e38u;
    // NOP
label_606e3c:
    // 0x606e3c: 0x300509  .word       0x00300509                   # jalr        $zero, $at # 00100500 <InstrIdType: CPU_SPECIAL>
label_606e40:
    if (ctx->pc == 0x606E40u) {
        ctx->pc = 0x606E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x606E3Cu;
        // 0x606e40: 0x12bc1da0  beq         $s5, $gp, . + 4 + (0x1DA0 << 2) (Delay Slot)
        // Likely branch instruction at 0x606E40 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x606E44u;
        goto label_606e44;
    }
    ctx->pc = 0x606E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x606E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x606E3Cu;
        // 0x606e40: 0x12bc1da0  beq         $s5, $gp, . + 4 + (0x1DA0 << 2) (Delay Slot)
        // Likely branch instruction at 0x606E40 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x606E3Cu, 0x606E44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x606E44u;
label_606e44:
    // 0x606e44: 0x8e00  sll         $s1, $zero, 24
    ctx->pc = 0x606e44u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_606e48:
    // 0x606e48: 0xb00102  .word       0x00B00102                   # srl         $zero, $s0, 4 # 00A00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606e48u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
label_606e4c:
    // 0x606e4c: 0x0  nop
    ctx->pc = 0x606e4cu;
    // NOP
label_606e50:
    // 0x606e50: 0x2e7ef0  tge         $at, $t6, 507
    ctx->pc = 0x606e50u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_606e54:
    // 0x606e54: 0x4d  break       0, 1
    ctx->pc = 0x606e54u;
    runtime->handleBreak(rdram, ctx);
label_606e58:
    // 0x606e58: 0x4001  .word       0x00004001                   # INVALID     $zero, $zero, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606e58u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x606E58 raw=0x00004001");
label_606e5c:
    // 0x606e5c: 0x2e7f50  .word       0x002E7F50                   # mfhi        $t7 # 002E0740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606e5cu;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_606e60:
    // 0x606e60: 0x75  .word       0x00000075                   # INVALID     $zero, $zero, 0x75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606e60u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x606E60 raw=0x00000075");
label_606e64:
    // 0x606e64: 0xa004  sllv        $s4, $zero, $zero
    ctx->pc = 0x606e64u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_606e68:
    // 0x606e68: 0x2e7fd0  .word       0x002E7FD0                   # mfhi        $t7 # 002E07C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606e68u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_606e6c:
    // 0x606e6c: 0x124  .word       0x00000124                   # and         $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606e6cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_606e70:
    // 0x606e70: 0x606dd0  .word       0x00606DD0                   # mfhi        $t5 # 006005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606e70u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_606e74:
    // 0x606e74: 0x2e8100  .word       0x002E8100                   # sll         $s0, $t6, 4 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606e74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
label_606e78:
    // 0x606e78: 0xbd  .word       0x000000BD                   # INVALID     $zero, $zero, 0xBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606e78u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x606E78 raw=0x000000BD");
label_606e7c:
    // 0x606e7c: 0x8003  sra         $s0, $zero, 0
    ctx->pc = 0x606e7cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 0), 0));
label_606e80:
    // 0x606e80: 0x2e81c0  .word       0x002E81C0                   # sll         $s0, $t6, 7 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606e80u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 14), 7));
label_606e84:
    // 0x606e84: 0x54  .word       0x00000054                   # dsllv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606e84u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_606e88:
    // 0x606e88: 0x606de0  .word       0x00606DE0                   # add         $t5, $v1, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606e88u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_606e8c:
    // 0x606e8c: 0x2e8230  tge         $at, $t6, 520
    ctx->pc = 0x606e8cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_606e90:
    // 0x606e90: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x606e90u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_606e94:
    // 0x606e94: 0x606df0  tge         $v1, $zero, 439
    ctx->pc = 0x606e94u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_606e98:
    // 0x606e98: 0x2e82b0  tge         $at, $t6, 522
    ctx->pc = 0x606e98u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_606e9c:
    // 0x606e9c: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606e9cu;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_606ea0:
    // 0x606ea0: 0x4001  .word       0x00004001                   # INVALID     $zero, $zero, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606ea0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x606EA0 raw=0x00004001");
label_606ea4:
    // 0x606ea4: 0x2e8320  .word       0x002E8320                   # add         $s0, $at, $t6 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606ea4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_606ea8:
    // 0x606ea8: 0xad  .word       0x000000AD                   # daddu       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606ea8u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_606eac:
    // 0x606eac: 0x8021  addu        $s0, $zero, $zero
    ctx->pc = 0x606eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_606eb0:
    // 0x606eb0: 0x2e8650  .word       0x002E8650                   # mfhi        $s0 # 002E0640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606eb0u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_606eb4:
    // 0x606eb4: 0x25  move        $zero, $zero
    ctx->pc = 0x606eb4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_606eb8:
    // 0x606eb8: 0x2000  sll         $a0, $zero, 0
    ctx->pc = 0x606eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_606ebc:
    // 0x606ebc: 0x2e8680  .word       0x002E8680                   # sll         $s0, $t6, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 14), 26));
label_606ec0:
    // 0x606ec0: 0x25  move        $zero, $zero
    ctx->pc = 0x606ec0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_606ec4:
    // 0x606ec4: 0x2000  sll         $a0, $zero, 0
    ctx->pc = 0x606ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_606ec8:
    // 0x606ec8: 0x2e86b0  tge         $at, $t6, 538
    ctx->pc = 0x606ec8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_606ecc:
    // 0x606ecc: 0x25  move        $zero, $zero
    ctx->pc = 0x606eccu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_606ed0:
    // 0x606ed0: 0x2000  sll         $a0, $zero, 0
    ctx->pc = 0x606ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_606ed4:
    // 0x606ed4: 0x2e86e0  .word       0x002E86E0                   # add         $s0, $at, $t6 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606ed4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_606ed8:
    // 0x606ed8: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x606ed8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x606ED8 raw=0x0000001D");
label_606edc:
    // 0x606edc: 0x2000  sll         $a0, $zero, 0
    ctx->pc = 0x606edcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_606ee0:
    // 0x606ee0: 0x2e8860  .word       0x002E8860                   # add         $s1, $at, $t6 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606ee0u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_606ee4:
    // 0x606ee4: 0x39  .word       0x00000039                   # INVALID     $zero, $zero, 0x39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606ee4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x606EE4 raw=0x00000039");
label_606ee8:
    // 0x606ee8: 0x2000  sll         $a0, $zero, 0
    ctx->pc = 0x606ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_606eec:
    // 0x606eec: 0x2e88a0  .word       0x002E88A0                   # add         $s1, $at, $t6 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606eecu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_606ef0:
    // 0x606ef0: 0x194  .word       0x00000194                   # dsllv       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606ef0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_606ef4:
    // 0x606ef4: 0x606e04  .word       0x00606E04                   # sllv        $t5, $zero, $v1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606ef4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 3) & 0x1F));
label_606ef8:
    // 0x606ef8: 0x2e8a40  .word       0x002E8A40                   # sll         $s1, $t6, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606ef8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 14), 9));
label_606efc:
    // 0x606efc: 0x310  .word       0x00000310                   # mfhi        $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606efcu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_606f00:
    // 0x606f00: 0x606e0c  .word       0x00606E0C                   # syscall     440 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606f00u;
    ctx->pc = 0x606F04u;
runtime->handleSyscall(rdram, ctx, 0x181B8u);
label_606f04:
    // 0x606f04: 0x2e8d50  .word       0x002E8D50                   # mfhi        $s1 # 002E0540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606f04u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_606f08:
    // 0x606f08: 0x1f8  dsll        $zero, $zero, 7
    ctx->pc = 0x606f08u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 7);
label_606f0c:
    // 0x606f0c: 0x606e18  .word       0x00606E18                   # mult        $t5, $v1, $zero # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x606f0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_606f10:
    // 0x606f10: 0x2e8f50  .word       0x002E8F50                   # mfhi        $s1 # 002E0740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606f10u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_606f14:
    // 0x606f14: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606f14u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_606f18:
    // 0x606f18: 0x4001  .word       0x00004001                   # INVALID     $zero, $zero, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606f18u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x606F18 raw=0x00004001");
label_606f1c:
    // 0x606f1c: 0x2e8fb0  tge         $at, $t6, 574
    ctx->pc = 0x606f1cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_606f20:
    // 0x606f20: 0x170  tge         $zero, $zero, 5
    ctx->pc = 0x606f20u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_606f24:
    // 0x606f24: 0x606e34  teq         $v1, $zero, 440
    ctx->pc = 0x606f24u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_606f28:
    // 0x606f28: 0x2e9120  .word       0x002E9120                   # add         $s2, $at, $t6 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606f28u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_606f2c:
    // 0x606f2c: 0x860  .word       0x00000860                   # add         $at, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606f2cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_606f30:
    // 0x606f30: 0x606e3c  .word       0x00606E3C                   # dsll32      $t5, $zero, 24 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606f30u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) << (32 + 24));
label_606f34:
    // 0x606f34: 0x2e9980  .word       0x002E9980                   # sll         $s3, $t6, 6 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606f34u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 14), 6));
label_606f38:
    // 0x606f38: 0x32c  .word       0x0000032C                   # dadd        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606f38u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_606f3c:
    // 0x606f3c: 0x606e48  .word       0x00606E48                   # jr          $v1 # 00006E40 <InstrIdType: CPU_SPECIAL>
label_606f40:
    if (ctx->pc == 0x606F40u) {
        ctx->pc = 0x606F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x606F3Cu;
        // 0x606f40: 0x2e9cb0  tge         $at, $t6, 626 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x606F44u;
        goto label_606f44;
    }
    ctx->pc = 0x606F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = 0x606F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x606F3Cu;
        // 0x606f40: 0x2e9cb0  tge         $at, $t6, 626 (Delay Slot)
        if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x606F3Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x606F44u;
label_606f44:
    // 0x606f44: 0x1c1  .word       0x000001C1                   # INVALID     $zero, $zero, 0x1C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606f44u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x606F44 raw=0x000001C1");
label_606f48:
    // 0x606f48: 0xa003  sra         $s4, $zero, 0
    ctx->pc = 0x606f48u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 0), 0));
label_606f4c:
    // 0x606f4c: 0x2e9f70  tge         $at, $t6, 637
    ctx->pc = 0x606f4cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_606f50:
    // 0x606f50: 0x59  .word       0x00000059                   # multu       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606f50u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_606f54:
    // 0x606f54: 0x6001  .word       0x00006001                   # INVALID     $zero, $zero, 0x6001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606f54u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x606F54 raw=0x00006001");
label_606f58:
    // 0x606f58: 0x2e9ff0  tge         $at, $t6, 639
    ctx->pc = 0x606f58u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_606f5c:
    // 0x606f5c: 0xb5  .word       0x000000B5                   # INVALID     $zero, $zero, 0xB5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x606f5cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x606F5C raw=0x000000B5");
label_606f60:
    // 0x606f60: 0x6002  srl         $t4, $zero, 0
    ctx->pc = 0x606f60u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_606f64:
    // 0x606f64: 0x0  nop
    ctx->pc = 0x606f64u;
    // NOP
label_606f68:
    // 0x606f68: 0x0  nop
    ctx->pc = 0x606f68u;
    // NOP
label_606f6c:
    // 0x606f6c: 0x0  nop
    ctx->pc = 0x606f6cu;
    // NOP
label_606f70:
    // 0x606f70: 0x100000  sll         $zero, $s0, 0
    ctx->pc = 0x606f70u;
    
label_606f74:
    // 0x606f74: 0x0  nop
    ctx->pc = 0x606f74u;
    // NOP
label_606f78:
    // 0x606f78: 0x0  nop
    ctx->pc = 0x606f78u;
    // NOP
label_606f7c:
    // 0x606f7c: 0x0  nop
    ctx->pc = 0x606f7cu;
    // NOP
label_606f80:
    // 0x606f80: 0xa0000000  sb          $zero, 0x0($zero)
    ctx->pc = 0x606f80u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x0u, _value); } while (0);
label_606f84:
    // 0x606f84: 0x3fb99999  .word       0x3FB99999                   # lui         $t9, 0x9999 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x606f84u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39321 << 16));
label_606f88:
    // 0x606f88: 0xa0000000  sb          $zero, 0x0($zero)
    ctx->pc = 0x606f88u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x0u, _value); } while (0);
label_606f8c:
    // 0x606f8c: 0x3fb99999  .word       0x3FB99999                   # lui         $t9, 0x9999 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x606f8cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39321 << 16));
label_606f90:
    // 0x606f90: 0xa0000000  sb          $zero, 0x0($zero)
    ctx->pc = 0x606f90u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x0u, _value); } while (0);
label_606f94:
    // 0x606f94: 0x3fc99999  .word       0x3FC99999                   # lui         $t1, 0x9999 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x606f94u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)39321 << 16));
label_606f98:
    // 0x606f98: 0x60000000  daddi       $zero, $zero, 0x0
    ctx->pc = 0x606f98u;
    { int64_t src = (int64_t)GPR_S64(ctx, 0); int64_t imm = (int64_t)(int32_t)0; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_606f9c:
    // 0x606f9c: 0x401921fb  .word       0x401921FB                   # mfc0        $t9, Context # 000001FB <InstrIdType: R5900_COP0>
    ctx->pc = 0x606f9cu;
    SET_GPR_S32(ctx, 25, (int32_t)ctx->cop0_context);
label_606fa0:
    // 0x606fa0: 0x9999999a  lwr         $t9, -0x6666($t4)
    ctx->pc = 0x606fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 4294941082); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 25) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 25) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 25, merged64); }
label_606fa4:
    // 0x606fa4: 0x3fb99999  .word       0x3FB99999                   # lui         $t9, 0x9999 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x606fa4u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39321 << 16));
label_606fa8:
    // 0x606fa8: 0x42652ee0  .word       0x42652EE0                   # INVALID     $s3, $a1, 0x2EE0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x606fa8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x606FA8 raw=0x42652EE0");
label_606fac:
    // 0x606fac: 0x3c23d70a  .word       0x3C23D70A                   # lui         $v1, 0xD70A # 00200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x606facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_606fb0:
    // 0x606fb0: 0x3c8efa35  .word       0x3C8EFA35                   # lui         $t6, 0xFA35 # 00800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x606fb0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)64053 << 16));
label_606fb4:
    // 0x606fb4: 0x3d4ccccd  .word       0x3D4CCCCD                   # lui         $t4, 0xCCCD # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x606fb4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_606fb8:
    // 0x606fb8: 0x38d1b717  xori        $s1, $a2, 0xB717
    ctx->pc = 0x606fb8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)46871);
label_606fbc:
    // 0x606fbc: 0xc19f3333  ll          $ra, 0x3333($t4)
    ctx->pc = 0x606fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 13107); SET_GPR_S32(ctx, 31, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_606fc0:
    // 0x606fc0: 0x41a0cccd  .word       0x41A0CCCD                   # INVALID     $t5, $zero, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x606fc0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x606FC0 raw=0x41A0CCCD");
label_606fc4:
    // 0x606fc4: 0x3b808081  xori        $zero, $gp, 0x8081
    ctx->pc = 0x606fc4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 28) ^ (uint64_t)(uint16_t)32897);
label_606fc8:
    // 0x606fc8: 0x3f02660d  .word       0x3F02660D                   # lui         $v0, 0x660D # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x606fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26125 << 16));
label_606fcc:
    // 0x606fcc: 0x3e46de6b  .word       0x3E46DE6B                   # lui         $a2, 0xDE6B # 02400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x606fccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56939 << 16));
label_606fd0:
    // 0x606fd0: 0x3ffb4a7d  .word       0x3FFB4A7D                   # lui         $k1, 0x4A7D # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x606fd0u;
    SET_GPR_S32(ctx, 27, (int32_t)((uint32_t)19069 << 16));
label_606fd4:
    // 0x606fd4: 0x40a4c59d  .word       0x40A4C59D                   # dmtc0       $a0, Reserved24 # 0000059D <InstrIdType: R5900_COP0>
    ctx->pc = 0x606fd4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x5 at 0x606FD4 raw=0x40A4C59D");
label_606fd8:
    // 0x606fd8: 0x437ffd71  .word       0x437FFD71                   # INVALID     $k1, $ra, -0x28F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x606fd8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x606FD8 raw=0x437FFD71");
label_606fdc:
    // 0x606fdc: 0x3f008088  .word       0x3F008088                   # lui         $zero, 0x8088 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x606fdcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)32904 << 16));
label_606fe0:
    // 0x606fe0: 0x3fff0007  .word       0x3FFF0007                   # lui         $ra, 0x7 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x606fe0u;
    SET_GPR_S32(ctx, 31, (int32_t)((uint32_t)7 << 16));
label_606fe4:
    // 0x606fe4: 0x44fffdff  .word       0x44FFFDFF                   # INVALID     $a3, $ra, -0x201 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x606fe4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x3F at 0x606FE4 raw=0x44FFFDFF");
label_606fe8:
    // 0x606fe8: 0x3f008313  .word       0x3F008313                   # lui         $zero, 0x8313 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x606fe8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)33555 << 16));
label_606fec:
    // 0x606fec: 0x3f800149  .word       0x3F800149                   # lui         $zero, 0x149 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x606fecu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)329 << 16));
label_606ff0:
    // 0x606ff0: 0x457fff00  .word       0x457FFF00                   # INVALID     $t3, $ra, -0x100 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x606ff0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xB, function 0x0 at 0x606FF0 raw=0x457FFF00");
label_606ff4:
    // 0x606ff4: 0x3f008312  .word       0x3F008312                   # lui         $zero, 0x8312 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x606ff4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)33554 << 16));
label_606ff8:
    // 0x606ff8: 0x402bc9ef  .word       0x402BC9EF                   # dmfc0       $t3, Reserved25 # 000001EF <InstrIdType: R5900_COP0>
    ctx->pc = 0x606ff8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x606FF8 raw=0x402BC9EF");
label_606ffc:
    // 0x606ffc: 0x3c2c7692  .word       0x3C2C7692                   # lui         $t4, 0x7692 # 00200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x606ffcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)30354 << 16));
label_607000:
    // 0x607000: 0x38e85f16  xori        $t0, $a3, 0x5F16
    ctx->pc = 0x607000u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)24342);
label_607004:
    // 0x607004: 0x4b7fffff  .word       0x4B7FFFFF                   # INVALID     $k1, $ra, -0x1 # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x607004u;
    throw std::runtime_error("Unhandled VU0 Special2 function: 0x7F at 0x607004 raw=0x4B7FFFFF");
label_607008:
    // 0x607008: 0x477fff00  .word       0x477FFF00                   # INVALID     $k1, $ra, -0x100 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x607008u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x607008 raw=0x477FFF00");
label_60700c:
    // 0x60700c: 0x3f0d6289  .word       0x3F0D6289                   # lui         $t5, 0x6289 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60700cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)25225 << 16));
label_607010:
    // 0x607010: 0x3e8d6289  .word       0x3E8D6289                   # lui         $t5, 0x6289 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607010u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)25225 << 16));
label_607014:
    // 0x607014: 0x3f8020c5  .word       0x3F8020C5                   # lui         $zero, 0x20C5 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607014u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)8389 << 16));
label_607018:
    // 0x607018: 0x3a83126f  xori        $v1, $s4, 0x126F
    ctx->pc = 0x607018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)4719);
label_60701c:
    // 0x60701c: 0x3f7d70a4  .word       0x3F7D70A4                   # lui         $sp, 0x70A4 # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60701cu;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)28836 << 16));
label_607020:
    // 0x607020: 0x40490fdb  .word       0x40490FDB                   # cfc0        $t1, Random # 000007DB <InstrIdType: R5900_COP0>
    ctx->pc = 0x607020u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x607020 raw=0x40490FDB");
label_607024:
    // 0x607024: 0x3fc90fdb  .word       0x3FC90FDB                   # lui         $t1, 0xFDB # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607024u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4059 << 16));
label_607028:
    // 0x607028: 0x3811ef08  xori        $s1, $zero, 0xEF08
    ctx->pc = 0x607028u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)61192);
label_60702c:
    // 0x60702c: 0x3a4f7f04  xori        $t7, $s2, 0x7F04
    ctx->pc = 0x60702cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)32516);
label_607030:
    // 0x607030: 0xbd241146  cache       0x04, 0x1146($t1)
    ctx->pc = 0x607030u;
    // CACHE instruction (ignored)
label_607034:
    // 0x607034: 0x3d9dc62e  .word       0x3D9DC62E                   # lui         $sp, 0xC62E # 01800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607034u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)50734 << 16));
label_607038:
    // 0x607038: 0xbf303361  cache       0x10, 0x3361($t9)
    ctx->pc = 0x607038u;
    // CACHE instruction (ignored)
label_60703c:
    // 0x60703c: 0x3e4e0aa8  .word       0x3E4E0AA8                   # lui         $t6, 0xAA8 # 02400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60703cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)2728 << 16));
label_607040:
    // 0x607040: 0x4001572d  .word       0x4001572D                   # mfc0        $at, EntryHi # 0000072D <InstrIdType: R5900_COP0>
    ctx->pc = 0x607040u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_entryhi);
label_607044:
    // 0x607044: 0xbea6b090  cache       0x06, -0x4F70($s5)
    ctx->pc = 0x607044u;
    // CACHE instruction (ignored)
label_607048:
    // 0x607048: 0xc019d139  ll          $t9, -0x2EC7($zero)
    ctx->pc = 0x607048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4294955321); SET_GPR_S32(ctx, 25, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_60704c:
    // 0x60704c: 0x3e2aaaab  .word       0x3E2AAAAB                   # lui         $t2, 0xAAAB # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60704cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43691 << 16));
label_607050:
    // 0x607050: 0x33a22168  andi        $v0, $sp, 0x2168
    ctx->pc = 0x607050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 29) & (uint64_t)(uint16_t)8552);
label_607054:
    // 0x607054: 0x3fc90fda  .word       0x3FC90FDA                   # lui         $t1, 0xFDA # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607054u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4058 << 16));
label_607058:
    // 0x607058: 0x40490fda  .word       0x40490FDA                   # cfc0        $t1, Random # 000007DA <InstrIdType: R5900_COP0>
    ctx->pc = 0x607058u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x607058 raw=0x40490FDA");
label_60705c:
    // 0x60705c: 0x46638e39  .word       0x46638E39                   # INVALID     $s3, $v1, -0x71C7 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x60705cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x39 at 0x60705C raw=0x46638E39");
label_607060:
    // 0x607060: 0x36638e39  ori         $v1, $s3, 0x8E39
    ctx->pc = 0x607060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)36409);
label_607064:
    // 0x607064: 0x3dcccccd  .word       0x3DCCCCCD                   # lui         $t4, 0xCCCD # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607064u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_607068:
    // 0x607068: 0x42c78000  .word       0x42C78000                   # INVALID     $s6, $a3, -0x8000 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x607068u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x607068 raw=0x42C78000");
label_60706c:
    // 0x60706c: 0x3fdd70a4  .word       0x3FDD70A4                   # lui         $sp, 0x70A4 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60706cu;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)28836 << 16));
label_607070:
    // 0x607070: 0x3a83126f  xori        $v1, $s4, 0x126F
    ctx->pc = 0x607070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)4719);
label_607074:
    // 0x607074: 0x3f7bfbfd  .word       0x3F7BFBFD                   # lui         $k1, 0xFBFD # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607074u;
    SET_GPR_S32(ctx, 27, (int32_t)((uint32_t)64509 << 16));
label_607078:
    // 0x607078: 0x41200069  .word       0x41200069                   # INVALID     $t1, $zero, 0x69 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x607078u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x607078 raw=0x41200069");
label_60707c:
    // 0x60707c: 0xab8cbccc  swl         $t4, -0x4334($gp)
    ctx->pc = 0x60707cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 4294950092); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 12); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_607080:
    // 0x607080: 0x358637bd  ori         $a2, $t4, 0x37BD
    ctx->pc = 0x607080u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)14269);
label_607084:
    // 0x607084: 0xb58637bd  sdr         $a2, 0x37BD($t4)
    ctx->pc = 0x607084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 14269); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_607088:
    // 0x607088: 0xba83126f  swr         $v1, 0x126F($s4)
    ctx->pc = 0x607088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4719); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_60708c:
    // 0x60708c: 0x3f7ff2e5  .word       0x3F7FF2E5                   # lui         $ra, 0xF2E5 # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60708cu;
    SET_GPR_S32(ctx, 31, (int32_t)((uint32_t)62181 << 16));
label_607090:
    // 0x607090: 0x3f8147ae  .word       0x3F8147AE                   # lui         $at, 0x47AE # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18350 << 16));
label_607094:
    // 0x607094: 0x3c23d70a  .word       0x3C23D70A                   # lui         $v1, 0xD70A # 00200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_607098:
    // 0x607098: 0x3ffeb852  .word       0x3FFEB852                   # lui         $fp, 0xB852 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607098u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)47186 << 16));
label_60709c:
    // 0x60709c: 0x322bcc77  andi        $t3, $s1, 0xCC77
    ctx->pc = 0x60709cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)52343);
label_6070a0:
    // 0x6070a0: 0x3727c5ac  ori         $a3, $t9, 0xC5AC
    ctx->pc = 0x6070a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)50604);
label_6070a4:
    // 0x6070a4: 0x3f11eb85  .word       0x3F11EB85                   # lui         $s1, 0xEB85 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6070a4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60293 << 16));
label_6070a8:
    // 0x6070a8: 0xbd4ccccd  cache       0x0C, -0x3333($t2)
    ctx->pc = 0x6070a8u;
    // CACHE instruction (ignored)
label_6070ac:
    // 0x6070ac: 0x3f80a3d7  .word       0x3F80A3D7                   # lui         $zero, 0xA3D7 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6070acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)41943 << 16));
label_6070b0:
    // 0x6070b0: 0x3ba3d70a  xori        $v1, $sp, 0xD70A
    ctx->pc = 0x6070b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 29) ^ (uint64_t)(uint16_t)55050);
label_6070b4:
    // 0x6070b4: 0x3eaaaaab  .word       0x3EAAAAAB                   # lui         $t2, 0xAAAB # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6070b4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43691 << 16));
label_6070b8:
    // 0x6070b8: 0x3e13bb63  .word       0x3E13BB63                   # lui         $s3, 0xBB63 # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6070b8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)47971 << 16));
label_6070bc:
    // 0x6070bc: 0x2c008081  sltiu       $zero, $zero, -0x7F7F
    ctx->pc = 0x6070bcu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)(int64_t)(int32_t)4294934657) ? 1 : 0);
label_6070c0:
    // 0x6070c0: 0x3f2e147b  .word       0x3F2E147B                   # lui         $t6, 0x147B # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6070c0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
label_6070c4:
    // 0x6070c4: 0x42652ee0  .word       0x42652EE0                   # INVALID     $s3, $a1, 0x2EE0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x6070c4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x6070C4 raw=0x42652EE0");
label_6070c8:
    // 0x6070c8: 0xc0490fdb  ll          $t1, 0xFDB($v0)
    ctx->pc = 0x6070c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4059); SET_GPR_S32(ctx, 9, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_6070cc:
    // 0x6070cc: 0x40c90fdb  .word       0x40C90FDB                   # ctc0        $t1, Random # 000007DB <InstrIdType: R5900_COP0>
    ctx->pc = 0x6070ccu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x6070CC raw=0x40C90FDB");
label_6070d0:
    // 0x6070d0: 0xc0490fdb  ll          $t1, 0xFDB($v0)
    ctx->pc = 0x6070d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4059); SET_GPR_S32(ctx, 9, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_6070d4:
    // 0x6070d4: 0x40c90fdb  .word       0x40C90FDB                   # ctc0        $t1, Random # 000007DB <InstrIdType: R5900_COP0>
    ctx->pc = 0x6070d4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x6070D4 raw=0x40C90FDB");
label_6070d8:
    // 0x6070d8: 0x3daaaaab  .word       0x3DAAAAAB                   # lui         $t2, 0xAAAB # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6070d8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43691 << 16));
label_6070dc:
    // 0x6070dc: 0x3e26049f  .word       0x3E26049F                   # lui         $a2, 0x49F # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6070dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1183 << 16));
label_6070e0:
    // 0x6070e0: 0x3f320210  .word       0x3F320210                   # lui         $s2, 0x210 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6070e0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)528 << 16));
label_6070e4:
    // 0x6070e4: 0xbe29b7bf  cache       0x09, -0x4841($s1)
    ctx->pc = 0x6070e4u;
    // CACHE instruction (ignored)
label_6070e8:
    // 0x6070e8: 0x3f2e263e  .word       0x3F2E263E                   # lui         $t6, 0x263E # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6070e8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)9790 << 16));
label_6070ec:
    // 0x6070ec: 0x3faaaaab  .word       0x3FAAAAAB                   # lui         $t2, 0xAAAB # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6070ecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43691 << 16));
label_6070f0:
    // 0x6070f0: 0x3c0efa36  lui         $t6, 0xFA36
    ctx->pc = 0x6070f0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)64054 << 16));
label_6070f4:
    // 0x6070f4: 0x42e52ee0  .word       0x42E52EE0                   # INVALID     $s7, $a1, 0x2EE0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x6070f4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x6070F4 raw=0x42E52EE0");
label_6070f8:
    // 0x6070f8: 0x3faa9fbe  .word       0x3FAA9FBE                   # lui         $t2, 0x9FBE # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6070f8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)40894 << 16));
label_6070fc:
    // 0x6070fc: 0x40e38e39  .word       0x40E38E39                   # INVALID     $a3, $v1, -0x71C7 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x6070fcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x7 at 0x6070FC raw=0x40E38E39");
label_607100:
    // 0x607100: 0x437fff00  .word       0x437FFF00                   # INVALID     $k1, $ra, -0x100 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x607100u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x607100 raw=0x437FFF00");
label_607104:
    // 0x607104: 0x437ffe00  .word       0x437FFE00                   # INVALID     $k1, $ra, -0x200 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x607104u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x607104 raw=0x437FFE00");
label_607108:
    // 0x607108: 0x46fffe00  .word       0x46FFFE00                   # INVALID     $s7, $ra, -0x200 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x607108u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x17, function 0x0 at 0x607108 raw=0x46FFFE00");
label_60710c:
    // 0x60710c: 0x501502f9  beql        $zero, $s5, . + 4 + (0x2F9 << 2)
label_607110:
    if (ctx->pc == 0x607110u) {
        ctx->pc = 0x607110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x60710Cu;
        // 0x607110: 0x3e99999a  .word       0x3E99999A                   # lui         $t9, 0x999A # 02800000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x607114u;
        goto label_607114;
    }
    ctx->pc = 0x60710Cu;
    {
        const bool branch_taken_0x60710c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 21));
        if (branch_taken_0x60710c) {
            ctx->pc = 0x607110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x60710Cu;
            // 0x607110: 0x3e99999a  .word       0x3E99999A                   # lui         $t9, 0x999A # 02800000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x607CF4u;
            goto label_607cf4;
        }
    }
    ctx->pc = 0x607114u;
label_607114:
    // 0x607114: 0x477fff00  .word       0x477FFF00                   # INVALID     $k1, $ra, -0x100 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x607114u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x607114 raw=0x477FFF00");
label_607118:
    // 0x607118: 0x46ac4400  .word       0x46AC4400                   # INVALID     $s5, $t4, 0x4400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x607118u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x15, function 0x0 at 0x607118 raw=0x46AC4400");
label_60711c:
    // 0x60711c: 0x461c4000  add.s       $f0, $f8, $f28
    ctx->pc = 0x60711cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[28]);
label_607120:
    // 0x607120: 0x3e4ccccd  .word       0x3E4CCCCD                   # lui         $t4, 0xCCCD # 02400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607120u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_607124:
    // 0x607124: 0x40151eb8  .word       0x40151EB8                   # mfc0        $s5, EntryLo1 # 000006B8 <InstrIdType: R5900_COP0>
    ctx->pc = 0x607124u;
    SET_GPR_S32(ctx, 21, (int32_t)ctx->cop0_entrylo1);
label_607128:
    // 0x607128: 0x3ecccccd  .word       0x3ECCCCCD                   # lui         $t4, 0xCCCD # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607128u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_60712c:
    // 0x60712c: 0x3eb33333  .word       0x3EB33333                   # lui         $s3, 0x3333 # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60712cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_607130:
    // 0x607130: 0x7f7fffff  sq          $ra, -0x1($k1)
    ctx->pc = 0x607130u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 4294967295), GPR_VEC(ctx, 31));
label_607134:
    // 0x607134: 0x3dcccccd  .word       0x3DCCCCCD                   # lui         $t4, 0xCCCD # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607134u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_607138:
    // 0x607138: 0xbc23d70a  cache       0x03, -0x28F6($at)
    ctx->pc = 0x607138u;
    // CACHE instruction (ignored)
label_60713c:
    // 0x60713c: 0x3811ef08  xori        $s1, $zero, 0xEF08
    ctx->pc = 0x60713cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)61192);
label_607140:
    // 0x607140: 0xbf303361  cache       0x10, 0x3361($t9)
    ctx->pc = 0x607140u;
    // CACHE instruction (ignored)
label_607144:
    // 0x607144: 0x3e4e0aa8  .word       0x3E4E0AA8                   # lui         $t6, 0xAA8 # 02400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607144u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)2728 << 16));
label_607148:
    // 0x607148: 0x4001572d  .word       0x4001572D                   # mfc0        $at, EntryHi # 0000072D <InstrIdType: R5900_COP0>
    ctx->pc = 0x607148u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_entryhi);
label_60714c:
    // 0x60714c: 0x3f7fff58  .word       0x3F7FFF58                   # lui         $ra, 0xFF58 # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60714cu;
    SET_GPR_S32(ctx, 31, (int32_t)((uint32_t)65368 << 16));
label_607150:
    // 0x607150: 0x2f2ec9d3  sltiu       $t6, $t9, -0x362D
    ctx->pc = 0x607150u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)(int64_t)(int32_t)4294953427) ? 1 : 0);
label_607154:
    // 0x607154: 0xb2d72f34  sdl         $s7, 0x2F34($s6)
    ctx->pc = 0x607154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 12084); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 23); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_607158:
    // 0x607158: 0x3638ef1b  ori         $t8, $s1, 0xEF1B
    ctx->pc = 0x607158u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)61211);
label_60715c:
    // 0x60715c: 0xb9500d01  swr         $s0, 0xD01($t2)
    ctx->pc = 0x60715cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 3329); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 16); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_607160:
    // 0x607160: 0x3c088889  lui         $t0, 0x8889
    ctx->pc = 0x607160u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34953 << 16));
label_607164:
    // 0x607164: 0xbe2aaaab  cache       0x0A, -0x5555($s1)
    ctx->pc = 0x607164u;
    // CACHE instruction (ignored)
label_607168:
    // 0x607168: 0x3fc90fd0  .word       0x3FC90FD0                   # lui         $t1, 0xFD0 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607168u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4048 << 16));
label_60716c:
    // 0x60716c: 0x3c8efa35  .word       0x3C8EFA35                   # lui         $t6, 0xFA35 # 00800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60716cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)64053 << 16));
label_607170:
    // 0x607170: 0x3ee66666  .word       0x3EE66666                   # lui         $a2, 0x6666 # 02E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607170u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_607174:
    // 0x607174: 0x3f0ccccd  .word       0x3F0CCCCD                   # lui         $t4, 0xCCCD # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607174u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_607178:
    // 0x607178: 0x3c23d70a  .word       0x3C23D70A                   # lui         $v1, 0xD70A # 00200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_60717c:
    // 0x60717c: 0x3f2aaa3b  .word       0x3F2AAA3B                   # lui         $t2, 0xAA3B # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60717cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43579 << 16));
label_607180:
    // 0x607180: 0x3a83126f  xori        $v1, $s4, 0x126F
    ctx->pc = 0x607180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)4719);
label_607184:
    // 0x607184: 0x3eb1c71c  .word       0x3EB1C71C                   # lui         $s1, 0xC71C # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607184u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)50972 << 16));
label_607188:
    // 0x607188: 0x38d1b715  xori        $s1, $a2, 0xB715
    ctx->pc = 0x607188u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)46869);
label_60718c:
    // 0x60718c: 0x3c23d708  .word       0x3C23D708                   # lui         $v1, 0xD708 # 00200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60718cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55048 << 16));
label_607190:
    // 0x607190: 0x3f7fbe77  .word       0x3F7FBE77                   # lui         $ra, 0xBE77 # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607190u;
    SET_GPR_S32(ctx, 31, (int32_t)((uint32_t)48759 << 16));
label_607194:
    // 0x607194: 0x3811ef08  xori        $s1, $zero, 0xEF08
    ctx->pc = 0x607194u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)61192);
label_607198:
    // 0x607198: 0x3e4e0aa8  .word       0x3E4E0AA8                   # lui         $t6, 0xAA8 # 02400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607198u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)2728 << 16));
label_60719c:
    // 0x60719c: 0x2f2ec9d3  sltiu       $t6, $t9, -0x362D
    ctx->pc = 0x60719cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)(int64_t)(int32_t)4294953427) ? 1 : 0);
label_6071a0:
    // 0x6071a0: 0x3f8020c5  .word       0x3F8020C5                   # lui         $zero, 0x20C5 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6071a0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)8389 << 16));
label_6071a4:
    // 0x6071a4: 0x2edbe6fe  sltiu       $k1, $s6, -0x1902
    ctx->pc = 0x6071a4u;
    SET_GPR_U64(ctx, 27, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)4294960894) ? 1 : 0);
label_6071a8:
    // 0x6071a8: 0x322bcc76  andi        $t3, $s1, 0xCC76
    ctx->pc = 0x6071a8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)52342);
label_6071ac:
    // 0x6071ac: 0x3b011b50  xori        $at, $t8, 0x1B50
    ctx->pc = 0x6071acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 24) ^ (uint64_t)(uint16_t)6992);
label_6071b0:
    // 0x6071b0: 0x437f0001  .word       0x437F0001                   # INVALID     $k1, $ra, 0x1 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x6071b0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x6071B0 raw=0x437F0001");
label_6071b4:
    // 0x6071b4: 0xb727c5ac  sdr         $a3, -0x3A54($t9)
    ctx->pc = 0x6071b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 4294952364); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_6071b8:
    // 0x6071b8: 0xc0490fdb  ll          $t1, 0xFDB($v0)
    ctx->pc = 0x6071b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4059); SET_GPR_S32(ctx, 9, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_6071bc:
    // 0x6071bc: 0x40c90fdb  .word       0x40C90FDB                   # ctc0        $t1, Random # 000007DB <InstrIdType: R5900_COP0>
    ctx->pc = 0x6071bcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x6071BC raw=0x40C90FDB");
label_6071c0:
    // 0x6071c0: 0xc0490fdb  ll          $t1, 0xFDB($v0)
    ctx->pc = 0x6071c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4059); SET_GPR_S32(ctx, 9, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_6071c4:
    // 0x6071c4: 0x40c90fdb  .word       0x40C90FDB                   # ctc0        $t1, Random # 000007DB <InstrIdType: R5900_COP0>
    ctx->pc = 0x6071c4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x6071C4 raw=0x40C90FDB");
label_6071c8:
    // 0x6071c8: 0x3a83126f  xori        $v1, $s4, 0x126F
    ctx->pc = 0x6071c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)4719);
label_6071cc:
    // 0x6071cc: 0x3c8efa35  .word       0x3C8EFA35                   # lui         $t6, 0xFA35 # 00800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6071ccu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)64053 << 16));
label_6071d0:
    // 0x6071d0: 0x3c23d70a  .word       0x3C23D70A                   # lui         $v1, 0xD70A # 00200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6071d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_6071d4:
    // 0x6071d4: 0xbf333333  cache       0x13, 0x3333($t9)
    ctx->pc = 0x6071d4u;
    // CACHE instruction (ignored)
label_6071d8:
    // 0x6071d8: 0x3ea8f5c3  .word       0x3EA8F5C3                   # lui         $t0, 0xF5C3 # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6071d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)62915 << 16));
label_6071dc:
    // 0x6071dc: 0x461c4000  add.s       $f0, $f8, $f28
    ctx->pc = 0x6071dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[28]);
label_6071e0:
    // 0x6071e0: 0x3eb20d99  .word       0x3EB20D99                   # lui         $s2, 0xD99 # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6071e0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)3481 << 16));
label_6071e4:
    // 0x6071e4: 0x3ea6f933  .word       0x3EA6F933                   # lui         $a2, 0xF933 # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6071e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63795 << 16));
label_6071e8:
    // 0x6071e8: 0x3f4ccccd  .word       0x3F4CCCCD                   # lui         $t4, 0xCCCD # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6071e8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_6071ec:
    // 0x6071ec: 0x3eaa7efa  .word       0x3EAA7EFA                   # lui         $t2, 0x7EFA # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6071ecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32506 << 16));
label_6071f0:
    // 0x6071f0: 0x3f19999a  .word       0x3F19999A                   # lui         $t9, 0x999A # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6071f0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_6071f4:
    // 0x6071f4: 0x3fc90ff9  .word       0x3FC90FF9                   # lui         $t1, 0xFF9 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6071f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4089 << 16));
label_6071f8:
    // 0x6071f8: 0x3dcccccd  .word       0x3DCCCCCD                   # lui         $t4, 0xCCCD # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6071f8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_6071fc:
    // 0x6071fc: 0x3efd70a4  .word       0x3EFD70A4                   # lui         $sp, 0x70A4 # 02E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6071fcu;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)28836 << 16));
label_607200:
    // 0x607200: 0x3ca3d70a  .word       0x3CA3D70A                   # lui         $v1, 0xD70A # 00A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_607204:
    // 0x607204: 0x3eaaaaab  .word       0x3EAAAAAB                   # lui         $t2, 0xAAAB # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607204u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43691 << 16));
label_607208:
    // 0x607208: 0x3f2aaaab  .word       0x3F2AAAAB                   # lui         $t2, 0xAAAB # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607208u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43691 << 16));
label_60720c:
    // 0x60720c: 0xff7fffff  sd          $ra, -0x1($k1)
    ctx->pc = 0x60720cu;
    WRITE64(ADD32(GPR_U32(ctx, 27), 4294967295), GPR_U64(ctx, 31));
label_607210:
    // 0x607210: 0x411ccccd  .word       0x411CCCCD                   # INVALID     $t0, $gp, -0x3333 # 00000000 <InstrIdType: CPU_COP0_BC0>
    ctx->pc = 0x607210u;
    // BC0 (Condition: 0x1C) - Handled by branch logic
label_607214:
    // 0x607214: 0x3e23d70a  .word       0x3E23D70A                   # lui         $v1, 0xD70A # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_607218:
    // 0x607218: 0x3f2b851f  .word       0x3F2B851F                   # lui         $t3, 0x851F # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607218u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)34079 << 16));
label_60721c:
    // 0x60721c: 0x3f570a3d  .word       0x3F570A3D                   # lui         $s7, 0xA3D # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60721cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)2621 << 16));
label_607220:
    // 0x607220: 0x41c90fdb  .word       0x41C90FDB                   # INVALID     $t6, $t1, 0xFDB # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x607220u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x607220 raw=0x41C90FDB");
label_607224:
    // 0x607224: 0xc0490fdb  ll          $t1, 0xFDB($v0)
    ctx->pc = 0x607224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4059); SET_GPR_S32(ctx, 9, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_607228:
    // 0x607228: 0x3f47ae14  .word       0x3F47AE14                   # lui         $a3, 0xAE14 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607228u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44564 << 16));
label_60722c:
    // 0x60722c: 0x3ec7ae14  .word       0x3EC7AE14                   # lui         $a3, 0xAE14 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60722cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44564 << 16));
label_607230:
    // 0x607230: 0x3f51eb85  .word       0x3F51EB85                   # lui         $s1, 0xEB85 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607230u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60293 << 16));
label_607234:
    // 0x607234: 0x3f333333  .word       0x3F333333                   # lui         $s3, 0x3333 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607234u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_607238:
    // 0x607238: 0x3f59999a  .word       0x3F59999A                   # lui         $t9, 0x999A # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607238u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_60723c:
    // 0x60723c: 0x3f7fbe77  .word       0x3F7FBE77                   # lui         $ra, 0xBE77 # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60723cu;
    SET_GPR_S32(ctx, 31, (int32_t)((uint32_t)48759 << 16));
label_607240:
    // 0x607240: 0x3f99999a  .word       0x3F99999A                   # lui         $t9, 0x999A # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607240u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_607244:
    // 0x607244: 0x3e19999a  .word       0x3E19999A                   # lui         $t9, 0x999A # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607244u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_607248:
    // 0x607248: 0x3f666666  .word       0x3F666666                   # lui         $a2, 0x6666 # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607248u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_60724c:
    // 0x60724c: 0x3db851ec  .word       0x3DB851EC                   # lui         $t8, 0x51EC # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60724cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)20972 << 16));
label_607250:
    // 0x607250: 0x4048f5c3  .word       0x4048F5C3                   # cfc0        $t0, ErrorEPC # 000005C3 <InstrIdType: R5900_COP0>
    ctx->pc = 0x607250u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x607250 raw=0x4048F5C3");
label_607254:
    // 0x607254: 0x3c23d70a  .word       0x3C23D70A                   # lui         $v1, 0xD70A # 00200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_607258:
    // 0x607258: 0x3b23d70a  xori        $v1, $t9, 0xD70A
    ctx->pc = 0x607258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 25) ^ (uint64_t)(uint16_t)55050);
label_60725c:
    // 0x60725c: 0x3f490fd0  .word       0x3F490FD0                   # lui         $t1, 0xFD0 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60725cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4048 << 16));
label_607260:
    // 0x607260: 0xbf490fd0  cache       0x09, 0xFD0($k0)
    ctx->pc = 0x607260u;
    // CACHE instruction (ignored)
label_607264:
    // 0x607264: 0xc016cbdc  ll          $s6, -0x3424($zero)
    ctx->pc = 0x607264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4294953948); SET_GPR_S32(ctx, 22, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_607268:
    // 0x607268: 0xc07b53c4  ll          $k1, 0x53C4($v1)
    ctx->pc = 0x607268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 21444); SET_GPR_S32(ctx, 27, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_60726c:
    // 0x60726c: 0x3fb2b8c3  .word       0x3FB2B8C3                   # lui         $s2, 0xB8C3 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60726cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)47299 << 16));
label_607270:
    // 0x607270: 0x40c90fdb  .word       0x40C90FDB                   # ctc0        $t1, Random # 000007DB <InstrIdType: R5900_COP0>
    ctx->pc = 0x607270u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x607270 raw=0x40C90FDB");
label_607274:
    // 0x607274: 0x440f3d4c  .word       0x440F3D4C                   # mfc1        $t7, $f7 # 0000054C <InstrIdType: R5900_COP1>
    ctx->pc = 0x607274u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
label_607278:
    // 0x607278: 0x3ccccccd  .word       0x3CCCCCCD                   # lui         $t4, 0xCCCD # 00C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607278u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_60727c:
    // 0x60727c: 0x3f490fdb  .word       0x3F490FDB                   # lui         $t1, 0xFDB # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60727cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4059 << 16));
label_607280:
    // 0x607280: 0x4047ae14  .word       0x4047AE14                   # cfc0        $a3, Reserved21 # 00000614 <InstrIdType: R5900_COP0>
    ctx->pc = 0x607280u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x607280 raw=0x4047AE14");
label_607284:
    // 0x607284: 0x40033333  .word       0x40033333                   # mfc0        $v1, Wired # 00000333 <InstrIdType: R5900_COP0>
    ctx->pc = 0x607284u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_wired);
label_607288:
    // 0x607288: 0x3eb2b8c3  .word       0x3EB2B8C3                   # lui         $s2, 0xB8C3 # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607288u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)47299 << 16));
label_60728c:
    // 0x60728c: 0x41a0cccd  .word       0x41A0CCCD                   # INVALID     $t5, $zero, -0x3333 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x60728cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x60728C raw=0x41A0CCCD");
label_607290:
    // 0x607290: 0x40333333  .word       0x40333333                   # dmfc0       $s3, Wired # 00000333 <InstrIdType: R5900_COP0>
    ctx->pc = 0x607290u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1 at 0x607290 raw=0x40333333");
label_607294:
    // 0x607294: 0x3f32b8c3  .word       0x3F32B8C3                   # lui         $s2, 0xB8C3 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607294u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)47299 << 16));
label_607298:
    // 0x607298: 0x41fb53d2  .word       0x41FB53D2                   # INVALID     $t7, $k1, 0x53D2 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x607298u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x607298 raw=0x41FB53D2");
label_60729c:
    // 0x60729c: 0x3f266666  .word       0x3F266666                   # lui         $a2, 0x6666 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60729cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_6072a0:
    // 0x6072a0: 0x3fe66666  .word       0x3FE66666                   # lui         $a2, 0x6666 # 03E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6072a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_6072a4:
    // 0x6072a4: 0x4196cbe4  .word       0x4196CBE4                   # INVALID     $t4, $s6, -0x341C # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x6072a4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x6072A4 raw=0x4196CBE4");
label_6072a8:
    // 0x6072a8: 0x41855604  .word       0x41855604                   # INVALID     $t4, $a1, 0x5604 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x6072a8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xC at 0x6072A8 raw=0x41855604");
label_6072ac:
    // 0x6072ac: 0x3dfae147  .word       0x3DFAE147                   # lui         $k0, 0xE147 # 01E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6072acu;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)57671 << 16));
label_6072b0:
    // 0x6072b0: 0xbc8efa35  cache       0x0E, -0x5CB($a0)
    ctx->pc = 0x6072b0u;
    // CACHE instruction (ignored)
label_6072b4:
    // 0x6072b4: 0xc2652ee0  ll          $a1, 0x2EE0($s3)
    ctx->pc = 0x6072b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 12000); SET_GPR_S32(ctx, 5, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_6072b8:
    // 0x6072b8: 0x3cf5c28f  .word       0x3CF5C28F                   # lui         $s5, 0xC28F # 00E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6072b8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_6072bc:
    // 0x6072bc: 0x3f8ccccd  .word       0x3F8CCCCD                   # lui         $t4, 0xCCCD # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6072bcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_6072c0:
    // 0x6072c0: 0x3da3d70a  .word       0x3DA3D70A                   # lui         $v1, 0xD70A # 01A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6072c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_6072c4:
    // 0x6072c4: 0x3f75c28f  .word       0x3F75C28F                   # lui         $s5, 0xC28F # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6072c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_6072c8:
    // 0x6072c8: 0x3ee8bac7  .word       0x3EE8BAC7                   # lui         $t0, 0xBAC7 # 02E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6072c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)47815 << 16));
label_6072cc:
    // 0x6072cc: 0x3ea01a37  .word       0x3EA01A37                   # lui         $zero, 0x1A37 # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6072ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)6711 << 16));
label_6072d0:
    // 0x6072d0: 0x3ea872b0  .word       0x3EA872B0                   # lui         $t0, 0x72B0 # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6072d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)29360 << 16));
label_6072d4:
    // 0x6072d4: 0x3f23d70a  .word       0x3F23D70A                   # lui         $v1, 0xD70A # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6072d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_6072d8:
    // 0x6072d8: 0x3d75c28f  .word       0x3D75C28F                   # lui         $s5, 0xC28F # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6072d8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_6072dc:
    // 0x6072dc: 0x3ec90fdb  .word       0x3EC90FDB                   # lui         $t1, 0xFDB # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6072dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4059 << 16));
label_6072e0:
    // 0x6072e0: 0x3d23d70a  .word       0x3D23D70A                   # lui         $v1, 0xD70A # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6072e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_6072e4:
    // 0x6072e4: 0x3f851eb8  .word       0x3F851EB8                   # lui         $a1, 0x1EB8 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6072e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7864 << 16));
label_6072e8:
    // 0x6072e8: 0x3ea0d97c  .word       0x3EA0D97C                   # lui         $zero, 0xD97C # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6072e8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)55676 << 16));
label_6072ec:
    // 0x6072ec: 0x3fa66666  .word       0x3FA66666                   # lui         $a2, 0x6666 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6072ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_6072f0:
    // 0x6072f0: 0xc09ccccd  ll          $gp, -0x3333($a0)
    ctx->pc = 0x6072f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4294954189); SET_GPR_S32(ctx, 28, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_6072f4:
    // 0x6072f4: 0xc11ccccd  ll          $gp, -0x3333($t0)
    ctx->pc = 0x6072f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 4294954189); SET_GPR_S32(ctx, 28, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_6072f8:
    // 0x6072f8: 0x3f7fbe77  .word       0x3F7FBE77                   # lui         $ra, 0xBE77 # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6072f8u;
    SET_GPR_S32(ctx, 31, (int32_t)((uint32_t)48759 << 16));
label_6072fc:
    // 0x6072fc: 0x40c90fdb  .word       0x40C90FDB                   # ctc0        $t1, Random # 000007DB <InstrIdType: R5900_COP0>
    ctx->pc = 0x6072fcu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x6072FC raw=0x40C90FDB");
label_607300:
    // 0x607300: 0x3eaaa64c  .word       0x3EAAA64C                   # lui         $t2, 0xA64C # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607300u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)42572 << 16));
label_607304:
    // 0x607304: 0x3f2e147b  .word       0x3F2E147B                   # lui         $t6, 0x147B # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607304u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)5243 << 16));
label_607308:
    // 0x607308: 0xbe2e147b  cache       0x0E, 0x147B($s1)
    ctx->pc = 0x607308u;
    // CACHE instruction (ignored)
label_60730c:
    // 0x60730c: 0xbe99999a  cache       0x19, -0x6666($s4)
    ctx->pc = 0x60730cu;
    // CACHE instruction (ignored)
label_607310:
    // 0x607310: 0xbed70a3d  cache       0x17, 0xA3D($s6)
    ctx->pc = 0x607310u;
    // CACHE instruction (ignored)
label_607314:
    // 0x607314: 0xbebd70a4  cache       0x1D, 0x70A4($s5)
    ctx->pc = 0x607314u;
    // CACHE instruction (ignored)
label_607318:
    // 0x607318: 0x3ea3d70a  .word       0x3EA3D70A                   # lui         $v1, 0xD70A # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55050 << 16));
label_60731c:
    // 0x60731c: 0x3e851eb8  .word       0x3E851EB8                   # lui         $a1, 0x1EB8 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60731cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7864 << 16));
label_607320:
    // 0x607320: 0x3e6147ae  .word       0x3E6147AE                   # lui         $at, 0x47AE # 02600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18350 << 16));
label_607324:
    // 0x607324: 0x3e947ae1  .word       0x3E947AE1                   # lui         $s4, 0x7AE1 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607324u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)31457 << 16));
label_607328:
    // 0x607328: 0x3edc28f6  .word       0x3EDC28F6                   # lui         $gp, 0x28F6 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607328u;
    SET_GPR_S32(ctx, 28, (int32_t)((uint32_t)10486 << 16));
label_60732c:
    // 0x60732c: 0x3df5c28f  .word       0x3DF5C28F                   # lui         $s5, 0xC28F # 01E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60732cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)49807 << 16));
label_607330:
    // 0x607330: 0xbf0ccccd  cache       0x0C, -0x3333($t8)
    ctx->pc = 0x607330u;
    // CACHE instruction (ignored)
label_607334:
    // 0x607334: 0xbedc28f6  cache       0x1C, 0x28F6($s6)
    ctx->pc = 0x607334u;
    // CACHE instruction (ignored)
label_607338:
    // 0x607338: 0xbdcccccd  cache       0x0C, -0x3333($t6)
    ctx->pc = 0x607338u;
    // CACHE instruction (ignored)
label_60733c:
    // 0x60733c: 0xbf19999a  cache       0x19, -0x6666($t8)
    ctx->pc = 0x60733cu;
    // CACHE instruction (ignored)
label_607340:
    // 0x607340: 0xbf84b36d  cache       0x04, -0x4C93($gp)
    ctx->pc = 0x607340u;
    // CACHE instruction (ignored)
label_607344:
    // 0x607344: 0x3f84b36d  .word       0x3F84B36D                   # lui         $a0, 0xB36D # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45933 << 16));
label_607348:
    // 0x607348: 0xbef1463b  cache       0x11, 0x463B($s7)
    ctx->pc = 0x607348u;
    // CACHE instruction (ignored)
label_60734c:
    // 0x60734c: 0x3ef1463b  .word       0x3EF1463B                   # lui         $s1, 0x463B # 02E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60734cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)17979 << 16));
label_607350:
    // 0x607350: 0xc0490fdb  ll          $t1, 0xFDB($v0)
    ctx->pc = 0x607350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4059); SET_GPR_S32(ctx, 9, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_607354:
    // 0x607354: 0x3f9ae148  .word       0x3F9AE148                   # lui         $k0, 0xE148 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607354u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)57672 << 16));
label_607358:
    // 0x607358: 0x3fa147ae  .word       0x3FA147AE                   # lui         $at, 0x47AE # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18350 << 16));
label_60735c:
    // 0x60735c: 0x3fa28f5c  .word       0x3FA28F5C                   # lui         $v0, 0x8F5C # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60735cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36700 << 16));
label_607360:
    // 0x607360: 0xbea0d97c  cache       0x00, -0x2684($s5)
    ctx->pc = 0x607360u;
    // CACHE instruction (ignored)
label_607364:
    // 0x607364: 0x3e19999a  .word       0x3E19999A                   # lui         $t9, 0x999A # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607364u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_607368:
    // 0x607368: 0x3e3851ec  .word       0x3E3851EC                   # lui         $t8, 0x51EC # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607368u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)20972 << 16));
label_60736c:
    // 0x60736c: 0xbec104fb  cache       0x01, 0x4FB($s6)
    ctx->pc = 0x60736cu;
    // CACHE instruction (ignored)
label_607370:
    // 0x607370: 0x3ec104fb  .word       0x3EC104FB                   # lui         $at, 0x4FB # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1275 << 16));
label_607374:
    // 0x607374: 0xbfa0d97c  cache       0x00, -0x2684($sp)
    ctx->pc = 0x607374u;
    // CACHE instruction (ignored)
label_607378:
    // 0x607378: 0xbfc90fdb  cache       0x09, 0xFDB($fp)
    ctx->pc = 0x607378u;
    // CACHE instruction (ignored)
label_60737c:
    // 0x60737c: 0xbf490fdb  cache       0x09, 0xFDB($k0)
    ctx->pc = 0x60737cu;
    // CACHE instruction (ignored)
label_607380:
    // 0x607380: 0x3f490fdb  .word       0x3F490FDB                   # lui         $t1, 0xFDB # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607380u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4059 << 16));
label_607384:
    // 0x607384: 0xbe20d97c  cache       0x00, -0x2684($s1)
    ctx->pc = 0x607384u;
    // CACHE instruction (ignored)
label_607388:
    // 0x607388: 0x3e20d97c  .word       0x3E20D97C                   # lui         $zero, 0xD97C # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607388u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)55676 << 16));
label_60738c:
    // 0x60738c: 0x41490fdb  .word       0x41490FDB                   # INVALID     $t2, $t1, 0xFDB # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x60738cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x60738C raw=0x41490FDB");
label_607390:
    // 0x607390: 0x3f99999a  .word       0x3F99999A                   # lui         $t9, 0x999A # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607390u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_607394:
    // 0x607394: 0x40c90fdb  .word       0x40C90FDB                   # ctc0        $t1, Random # 000007DB <InstrIdType: R5900_COP0>
    ctx->pc = 0x607394u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x6 at 0x607394 raw=0x40C90FDB");
label_607398:
    // 0x607398: 0x3d4ccccd  .word       0x3D4CCCCD                   # lui         $t4, 0xCCCD # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607398u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_60739c:
    // 0x60739c: 0x3fb33333  .word       0x3FB33333                   # lui         $s3, 0x3333 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60739cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_6073a0:
    // 0x6073a0: 0xbf19999a  cache       0x19, -0x6666($t8)
    ctx->pc = 0x6073a0u;
    // CACHE instruction (ignored)
label_6073a4:
    // 0x6073a4: 0x3b011b50  xori        $at, $t8, 0x1B50
    ctx->pc = 0x6073a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 24) ^ (uint64_t)(uint16_t)6992);
label_6073a8:
    // 0x6073a8: 0x3f009a35  .word       0x3F009A35                   # lui         $zero, 0x9A35 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6073a8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)39477 << 16));
label_6073ac:
    // 0x6073ac: 0x461c4000  add.s       $f0, $f8, $f28
    ctx->pc = 0x6073acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[28]);
label_6073b0:
    // 0x6073b0: 0x40490fda  .word       0x40490FDA                   # cfc0        $t1, Random # 000007DA <InstrIdType: R5900_COP0>
    ctx->pc = 0x6073b0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x6073B0 raw=0x40490FDA");
label_6073b4:
    // 0x6073b4: 0x4121999a  .word       0x4121999A                   # INVALID     $t1, $at, -0x6666 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x6073b4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x6073B4 raw=0x4121999A");
label_6073b8:
    // 0x6073b8: 0x0  nop
    ctx->pc = 0x6073b8u;
    // NOP
label_6073bc:
    // 0x6073bc: 0x0  nop
    ctx->pc = 0x6073bcu;
    // NOP
label_6073c0:
    // 0x6073c0: 0x0  nop
    ctx->pc = 0x6073c0u;
    // NOP
label_6073c4:
    // 0x6073c4: 0x0  nop
    ctx->pc = 0x6073c4u;
    // NOP
label_6073c8:
    // 0x6073c8: 0x0  nop
    ctx->pc = 0x6073c8u;
    // NOP
label_6073cc:
    // 0x6073cc: 0x0  nop
    ctx->pc = 0x6073ccu;
    // NOP
label_6073d0:
    // 0x6073d0: 0x0  nop
    ctx->pc = 0x6073d0u;
    // NOP
label_6073d4:
    // 0x6073d4: 0x0  nop
    ctx->pc = 0x6073d4u;
    // NOP
label_6073d8:
    // 0x6073d8: 0x0  nop
    ctx->pc = 0x6073d8u;
    // NOP
label_6073dc:
    // 0x6073dc: 0x0  nop
    ctx->pc = 0x6073dcu;
    // NOP
label_6073e0:
    // 0x6073e0: 0x0  nop
    ctx->pc = 0x6073e0u;
    // NOP
label_6073e4:
    // 0x6073e4: 0x0  nop
    ctx->pc = 0x6073e4u;
    // NOP
label_6073e8:
    // 0x6073e8: 0x0  nop
    ctx->pc = 0x6073e8u;
    // NOP
label_6073ec:
    // 0x6073ec: 0x0  nop
    ctx->pc = 0x6073ecu;
    // NOP
label_6073f0:
    // 0x6073f0: 0x0  nop
    ctx->pc = 0x6073f0u;
    // NOP
label_6073f4:
    // 0x6073f4: 0x0  nop
    ctx->pc = 0x6073f4u;
    // NOP
label_6073f8:
    // 0x6073f8: 0x0  nop
    ctx->pc = 0x6073f8u;
    // NOP
label_6073fc:
    // 0x6073fc: 0x0  nop
    ctx->pc = 0x6073fcu;
    // NOP
label_607400:
    // 0x607400: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607400u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607400 raw=0x00000001");
label_607404:
    // 0x607404: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607404u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607404 raw=0x00000001");
label_607408:
    // 0x607408: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607408u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_60740c:
    // 0x60740c: 0x0  nop
    ctx->pc = 0x60740cu;
    // NOP
label_607410:
    // 0x607410: 0xff000000  sd          $zero, 0x0($t8)
    ctx->pc = 0x607410u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 0));
label_607414:
    // 0x607414: 0x0  nop
    ctx->pc = 0x607414u;
    // NOP
label_607418:
    // 0x607418: 0x20736168  addi        $s3, $v1, 0x6168
    ctx->pc = 0x607418u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24936, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_60741c:
    // 0x60741c: 0x6e6f6e  .word       0x006E6F6E                   # dsub        $t5, $v1, $t6 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60741cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 14); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_607420:
    // 0x607420: 0x5852495c  .word       0x5852495C                   # blezl       $v0, . + 4 + (0x495C << 2) # 00120000 <InstrIdType: CPU_NORMAL>
label_607424:
    if (ctx->pc == 0x607424u) {
        ctx->pc = 0x607424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x607420u;
        // 0x607424: 0x5c  .word       0x0000005C                   # dmult       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x607424 raw=0x0000005C");
        ctx->in_delay_slot = false;
        ctx->pc = 0x607428u;
        goto label_607428;
    }
    ctx->pc = 0x607420u;
    {
        const bool branch_taken_0x607420 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x607420) {
            ctx->pc = 0x607424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x607420u;
            // 0x607424: 0x5c  .word       0x0000005C                   # dmult       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x607424 raw=0x0000005C");
            ctx->in_delay_slot = false;
            ctx->pc = 0x619994u;
            return;
        }
    }
    ctx->pc = 0x607428u;
label_607428:
    // 0x607428: 0x0  nop
    ctx->pc = 0x607428u;
    // NOP
label_60742c:
    // 0x60742c: 0x4542  srl         $t0, $zero, 21
    ctx->pc = 0x60742cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 0), 21));
label_607430:
    // 0x607430: 0x0  nop
    ctx->pc = 0x607430u;
    // NOP
label_607434:
    // 0x607434: 0x0  nop
    ctx->pc = 0x607434u;
    // NOP
label_607438:
    // 0x607438: 0x63257325  daddi       $a1, $t9, 0x7325
    ctx->pc = 0x607438u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)29477; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_60743c:
    // 0x60743c: 0x7325  .word       0x00007325                   # move        $t6, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60743cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_607440:
    // 0x607440: 0x676e702e  daddiu      $t6, $k1, 0x702E
    ctx->pc = 0x607440u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28718);
label_607444:
    // 0x607444: 0x0  nop
    ctx->pc = 0x607444u;
    // NOP
label_607448:
    // 0x607448: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607448u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607448 raw=0x00000001");
label_60744c:
    // 0x60744c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60744cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60744C raw=0x00000001");
label_607450:
    // 0x607450: 0x0  nop
    ctx->pc = 0x607450u;
    // NOP
label_607454:
    // 0x607454: 0x0  nop
    ctx->pc = 0x607454u;
    // NOP
label_607458:
    // 0x607458: 0x7325  .word       0x00007325                   # move        $t6, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607458u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_60745c:
    // 0x60745c: 0xd  break       0
    ctx->pc = 0x60745cu;
    runtime->handleBreak(rdram, ctx);
label_607460:
    // 0x607460: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x607460u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_607464:
    // 0x607464: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607464u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607464 raw=0x00000001");
label_607468:
    // 0x607468: 0x19  multu       $zero, $zero
    ctx->pc = 0x607468u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_60746c:
    // 0x60746c: 0xe  .word       0x0000000E                   # INVALID     $zero, $zero, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60746cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x60746C raw=0x0000000E");
label_607470:
    // 0x607470: 0x9  jalr        $zero, $zero
label_607474:
    if (ctx->pc == 0x607474u) {
        ctx->pc = 0x607474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x607470u;
        // 0x607474: 0x6  srlv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x607478u;
        goto label_607478;
    }
    ctx->pc = 0x607470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x607474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x607470u;
        // 0x607474: 0x6  srlv        $zero, $zero, $zero (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x607470u, 0x607478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x607478u;
label_607478:
    // 0x607478: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607478u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607478 raw=0x00000001");
label_60747c:
    // 0x60747c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x60747cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_607480:
    // 0x607480: 0x17  dsrav       $zero, $zero, $zero
    ctx->pc = 0x607480u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_607484:
    // 0x607484: 0x9  jalr        $zero, $zero
label_607488:
    if (ctx->pc == 0x607488u) {
        ctx->pc = 0x607488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x607484u;
        // 0x607488: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x60748Cu;
        goto label_60748c;
    }
    ctx->pc = 0x607484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x607488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x607484u;
        // 0x607488: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x607484u, 0x60748Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x60748Cu;
label_60748c:
    // 0x60748c: 0x9  jalr        $zero, $zero
label_607490:
    if (ctx->pc == 0x607490u) {
        ctx->pc = 0x607490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x60748Cu;
        // 0x607490: 0xb  movn        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x607494u;
        goto label_607494;
    }
    ctx->pc = 0x60748Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x607490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x60748Cu;
        // 0x607490: 0xb  movn        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x60748Cu, 0x607494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x607494u;
label_607494:
    // 0x607494: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x607494u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_607498:
    // 0x607498: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607498u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607498 raw=0x00000001");
label_60749c:
    // 0x60749c: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x60749cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_6074a0:
    // 0x6074a0: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x6074a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_6074a4:
    // 0x6074a4: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6074a4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x6074A4 raw=0x00000015");
label_6074a8:
    // 0x6074a8: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x6074a8u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_6074ac:
    // 0x6074ac: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x6074acu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x6074AC raw=0x0000001D");
label_6074b0:
    // 0x6074b0: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x6074b0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x6074B0 raw=0x0000001F");
label_6074b4:
    // 0x6074b4: 0x9  jalr        $zero, $zero
label_6074b8:
    if (ctx->pc == 0x6074B8u) {
        ctx->pc = 0x6074B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6074B4u;
        // 0x6074b8: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = 0x6074BCu;
        goto label_6074bc;
    }
    ctx->pc = 0x6074B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x6074B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6074B4u;
        // 0x6074b8: 0xf  sync (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x6074B4u, 0x6074BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x6074BCu;
label_6074bc:
    // 0x6074bc: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x6074bcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_6074c0:
    // 0x6074c0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x6074c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_6074c4:
    // 0x6074c4: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x6074c4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x6074C4 raw=0x0000001F");
label_6074c8:
    // 0x6074c8: 0x10  mfhi        $zero
    ctx->pc = 0x6074c8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_6074cc:
    // 0x6074cc: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x6074ccu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_6074d0:
    // 0x6074d0: 0x13  mtlo        $zero
    ctx->pc = 0x6074d0u;
    ctx->lo = GPR_U64(ctx, 0);
label_6074d4:
    // 0x6074d4: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x6074d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_6074d8:
    // 0x6074d8: 0x1d  dmultu      $zero, $zero
    ctx->pc = 0x6074d8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x6074D8 raw=0x0000001D");
label_6074dc:
    // 0x6074dc: 0x9  jalr        $zero, $zero
label_6074e0:
    if (ctx->pc == 0x6074E0u) {
        ctx->pc = 0x6074E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6074DCu;
        // 0x6074e0: 0x8  jr          $zero (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x6074E4u;
        goto label_6074e4;
    }
    ctx->pc = 0x6074DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x6074E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6074DCu;
        // 0x6074e0: 0x8  jr          $zero (Delay Slot)
        // JR $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x6074DCu, 0x6074E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x6074E4u;
label_6074e4:
    // 0x6074e4: 0x9  jalr        $zero, $zero
label_6074e8:
    if (ctx->pc == 0x6074E8u) {
        ctx->pc = 0x6074E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6074E4u;
        // 0x6074e8: 0xc  syscall     0 (Delay Slot)
        ctx->pc = 0x6074ECu;
        runtime->handleSyscall(rdram, ctx, 0x0u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x6074ECu;
        goto label_6074ec;
    }
    ctx->pc = 0x6074E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x6074E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6074E4u;
        // 0x6074e8: 0xc  syscall     0 (Delay Slot)
        ctx->pc = 0x6074ECu;
        runtime->handleSyscall(rdram, ctx, 0x0u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x6074E4u, 0x6074ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x6074ECu;
label_6074ec:
    // 0x6074ec: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6074ecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x6074EC raw=0x00000005");
label_6074f0:
    // 0x6074f0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6074f0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6074F0 raw=0x00000001");
label_6074f4:
    // 0x6074f4: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x6074f4u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_6074f8:
    // 0x6074f8: 0x9  jalr        $zero, $zero
label_6074fc:
    if (ctx->pc == 0x6074FCu) {
        ctx->pc = 0x6074FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6074F8u;
        // 0x6074fc: 0x1c  dmult       $zero, $zero (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x6074FC raw=0x0000001C");
        ctx->in_delay_slot = false;
        ctx->pc = 0x607500u;
        goto label_607500;
    }
    ctx->pc = 0x6074F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x6074FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6074F8u;
        // 0x6074fc: 0x1c  dmult       $zero, $zero (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x6074FC raw=0x0000001C");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x6074F8u, 0x607500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x607500u;
label_607500:
    // 0x607500: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x607500u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_607504:
    // 0x607504: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607504u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607504 raw=0x00000001");
label_607508:
    // 0x607508: 0x1b  divu        $zero, $zero, $zero
    ctx->pc = 0x607508u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_60750c:
    // 0x60750c: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x60750cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x60750C raw=0x0000001E");
label_607510:
    // 0x607510: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607510u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607510 raw=0x0000EA01");
label_607514:
    // 0x607514: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x607514u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607518:
    // 0x607518: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607518u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607518 raw=0x0000EA01");
label_60751c:
    // 0x60751c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60751cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607520:
    // 0x607520: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x607520u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_607524:
    // 0x607524: 0xea03  sra         $sp, $zero, 8
    ctx->pc = 0x607524u;
    SET_GPR_S32(ctx, 29, SRA32(GPR_S32(ctx, 0), 8));
label_607528:
    // 0x607528: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607528u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607528 raw=0x0000EA01");
label_60752c:
    // 0x60752c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60752cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607530:
    // 0x607530: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x607530u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_607534:
    // 0x607534: 0xea04  .word       0x0000EA04                   # sllv        $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607534u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_607538:
    // 0x607538: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607538u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607538 raw=0x0000EA01");
label_60753c:
    // 0x60753c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60753cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607540:
    // 0x607540: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x607540u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_607544:
    // 0x607544: 0xea05  .word       0x0000EA05                   # INVALID     $zero, $zero, -0x15FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607544u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x607544 raw=0x0000EA05");
label_607548:
    // 0x607548: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607548u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607548 raw=0x0000EA01");
label_60754c:
    // 0x60754c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60754cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607550:
    // 0x607550: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x607550u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_607554:
    // 0x607554: 0xea06  .word       0x0000EA06                   # srlv        $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607554u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_607558:
    // 0x607558: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607558u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607558 raw=0x0000EA01");
label_60755c:
    // 0x60755c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60755cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607560:
    // 0x607560: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x607560u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_607564:
    // 0x607564: 0xea07  .word       0x0000EA07                   # srav        $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607564u;
    SET_GPR_S32(ctx, 29, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_607568:
    // 0x607568: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607568u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607568 raw=0x0000EA01");
label_60756c:
    // 0x60756c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60756cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607570:
    // 0x607570: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x607570u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_607574:
    // 0x607574: 0xea3a  dsrl        $sp, $zero, 8
    ctx->pc = 0x607574u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) >> 8);
label_607578:
    // 0x607578: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607578u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607578 raw=0x0000EA01");
label_60757c:
    // 0x60757c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60757cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607580:
    // 0x607580: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x607580u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_607584:
    // 0x607584: 0xea08  .word       0x0000EA08                   # jr          $zero # 0000EA00 <InstrIdType: CPU_SPECIAL>
label_607588:
    if (ctx->pc == 0x607588u) {
        ctx->pc = 0x607588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x607584u;
        // 0x607588: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607588 raw=0x0000EA01");
        ctx->in_delay_slot = false;
        ctx->pc = 0x60758Cu;
        goto label_60758c;
    }
    ctx->pc = 0x607584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x607588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x607584u;
        // 0x607588: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607588 raw=0x0000EA01");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x607584u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x60758Cu;
label_60758c:
    // 0x60758c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60758cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607590:
    // 0x607590: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x607590u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_607594:
    // 0x607594: 0xea09  .word       0x0000EA09                   # jalr        $sp, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
label_607598:
    if (ctx->pc == 0x607598u) {
        ctx->pc = 0x607598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x607594u;
        // 0x607598: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607598 raw=0x0000EA01");
        ctx->in_delay_slot = false;
        ctx->pc = 0x60759Cu;
        goto label_60759c;
    }
    ctx->pc = 0x607594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 29, 0x60759Cu);
        ctx->pc = 0x607598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x607594u;
        // 0x607598: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607598 raw=0x0000EA01");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x607594u, 0x60759Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x60759Cu;
label_60759c:
    // 0x60759c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60759cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6075a0:
    // 0x6075a0: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x6075a0u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_6075a4:
    // 0x6075a4: 0xea18  .word       0x0000EA18                   # mult        $sp, $zero, $zero # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x6075a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_6075a8:
    // 0x6075a8: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6075a8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6075A8 raw=0x0000EA01");
label_6075ac:
    // 0x6075ac: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x6075acu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6075b0:
    // 0x6075b0: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x6075b0u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_6075b4:
    // 0x6075b4: 0xea0c  syscall     936
    ctx->pc = 0x6075b4u;
    ctx->pc = 0x6075B8u;
runtime->handleSyscall(rdram, ctx, 0x3A8u);
label_6075b8:
    // 0x6075b8: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6075b8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6075B8 raw=0x0000EA01");
label_6075bc:
    // 0x6075bc: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x6075bcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6075c0:
    // 0x6075c0: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x6075c0u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_6075c4:
    // 0x6075c4: 0xea0a  .word       0x0000EA0A                   # movz        $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6075c4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 29, GPR_VEC(ctx, 0));
label_6075c8:
    // 0x6075c8: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6075c8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6075C8 raw=0x0000EA01");
label_6075cc:
    // 0x6075cc: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x6075ccu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6075d0:
    // 0x6075d0: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x6075d0u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_6075d4:
    // 0x6075d4: 0xea40  sll         $sp, $zero, 9
    ctx->pc = 0x6075d4u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_6075d8:
    // 0x6075d8: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6075d8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6075D8 raw=0x0000EA01");
label_6075dc:
    // 0x6075dc: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x6075dcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6075e0:
    // 0x6075e0: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x6075e0u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_6075e4:
    // 0x6075e4: 0xea0b  .word       0x0000EA0B                   # movn        $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6075e4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 29, GPR_VEC(ctx, 0));
label_6075e8:
    // 0x6075e8: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6075e8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6075E8 raw=0x0000EA01");
label_6075ec:
    // 0x6075ec: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x6075ecu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6075f0:
    // 0x6075f0: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x6075f0u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_6075f4:
    // 0x6075f4: 0xea16  .word       0x0000EA16                   # dsrlv       $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6075f4u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_6075f8:
    // 0x6075f8: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6075f8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6075F8 raw=0x0000EA01");
label_6075fc:
    // 0x6075fc: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x6075fcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607600:
    // 0x607600: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x607600u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_607604:
    // 0x607604: 0xea19  .word       0x0000EA19                   # multu       $zero, $zero # 0000EA00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607604u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_607608:
    // 0x607608: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607608u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607608 raw=0x0000EA01");
label_60760c:
    // 0x60760c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60760cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607610:
    // 0x607610: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x607610u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_607614:
    // 0x607614: 0xea1a  .word       0x0000EA1A                   # div         $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607614u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_607618:
    // 0x607618: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607618u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607618 raw=0x0000EA01");
label_60761c:
    // 0x60761c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60761cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607620:
    // 0x607620: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x607620u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_607624:
    // 0x607624: 0xea1b  .word       0x0000EA1B                   # divu        $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607624u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_607628:
    // 0x607628: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607628u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607628 raw=0x0000EA01");
label_60762c:
    // 0x60762c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60762cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607630:
    // 0x607630: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x607630u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_607634:
    // 0x607634: 0xea22  .word       0x0000EA22                   # neg         $sp, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607634u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_607638:
    // 0x607638: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607638u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607638 raw=0x0000EA01");
label_60763c:
    // 0x60763c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60763cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607640:
    // 0x607640: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x607640u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_607644:
    // 0x607644: 0xea1c  .word       0x0000EA1C                   # dmult       $zero, $zero # 0000EA00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607644u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x607644 raw=0x0000EA1C");
label_607648:
    // 0x607648: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607648u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607648 raw=0x0000EA01");
label_60764c:
    // 0x60764c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60764cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607650:
    // 0x607650: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x607650u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_607654:
    // 0x607654: 0xea1d  .word       0x0000EA1D                   # dmultu      $zero, $zero # 0000EA00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607654u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x607654 raw=0x0000EA1D");
label_607658:
    // 0x607658: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607658u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607658 raw=0x0000EA01");
label_60765c:
    // 0x60765c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60765cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607660:
    // 0x607660: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x607660u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_607664:
    // 0x607664: 0xea20  .word       0x0000EA20                   # add         $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607664u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_607668:
    // 0x607668: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607668u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607668 raw=0x0000EA01");
label_60766c:
    // 0x60766c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60766cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607670:
    // 0x607670: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x607670u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_607674:
    // 0x607674: 0xea26  .word       0x0000EA26                   # xor         $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607674u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_607678:
    // 0x607678: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607678u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607678 raw=0x0000EA01");
label_60767c:
    // 0x60767c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60767cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607680:
    // 0x607680: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x607680u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_607684:
    // 0x607684: 0xea27  .word       0x0000EA27                   # not         $sp, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607684u;
    SET_GPR_U64(ctx, 29, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_607688:
    // 0x607688: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607688u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607688 raw=0x0000EA01");
label_60768c:
    // 0x60768c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60768cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607690:
    // 0x607690: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x607690u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_607694:
    // 0x607694: 0xea28  .word       0x0000EA28                   # mfsa        $sp # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x607694u;
    SET_GPR_U32(ctx, 29, ctx->sa);
label_607698:
    // 0x607698: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607698u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607698 raw=0x0000EA01");
label_60769c:
    // 0x60769c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60769cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6076a0:
    // 0x6076a0: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x6076a0u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_6076a4:
    // 0x6076a4: 0xea29  .word       0x0000EA29                   # mtsa        $zero # 0000EA00 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x6076a4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_6076a8:
    // 0x6076a8: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6076a8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6076A8 raw=0x0000EA01");
label_6076ac:
    // 0x6076ac: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x6076acu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6076b0:
    // 0x6076b0: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x6076b0u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_6076b4:
    // 0x6076b4: 0xea2a  .word       0x0000EA2A                   # slt         $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6076b4u;
    SET_GPR_U64(ctx, 29, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_6076b8:
    // 0x6076b8: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6076b8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6076B8 raw=0x0000EA01");
label_6076bc:
    // 0x6076bc: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x6076bcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6076c0:
    // 0x6076c0: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x6076c0u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_6076c4:
    // 0x6076c4: 0xea2b  .word       0x0000EA2B                   # sltu        $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6076c4u;
    SET_GPR_U64(ctx, 29, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_6076c8:
    // 0x6076c8: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6076c8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6076C8 raw=0x0000EA01");
label_6076cc:
    // 0x6076cc: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x6076ccu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6076d0:
    // 0x6076d0: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x6076d0u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_6076d4:
    // 0x6076d4: 0xea2c  .word       0x0000EA2C                   # dadd        $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6076d4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
label_6076d8:
    // 0x6076d8: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6076d8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6076D8 raw=0x0000EA01");
label_6076dc:
    // 0x6076dc: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x6076dcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6076e0:
    // 0x6076e0: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x6076e0u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_6076e4:
    // 0x6076e4: 0xea2e  .word       0x0000EA2E                   # dsub        $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6076e4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
label_6076e8:
    // 0x6076e8: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6076e8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6076E8 raw=0x0000EA01");
label_6076ec:
    // 0x6076ec: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x6076ecu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6076f0:
    // 0x6076f0: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x6076f0u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_6076f4:
    // 0x6076f4: 0xea2f  .word       0x0000EA2F                   # dsubu       $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6076f4u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_6076f8:
    // 0x6076f8: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6076f8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6076F8 raw=0x0000EA01");
label_6076fc:
    // 0x6076fc: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x6076fcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607700:
    // 0x607700: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x607700u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_607704:
    // 0x607704: 0xea31  tgeu        $zero, $zero, 936
    ctx->pc = 0x607704u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607708:
    // 0x607708: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607708u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607708 raw=0x0000EA01");
label_60770c:
    // 0x60770c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60770cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607710:
    // 0x607710: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x607710u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_607714:
    // 0x607714: 0xea32  tlt         $zero, $zero, 936
    ctx->pc = 0x607714u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607718:
    // 0x607718: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607718u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607718 raw=0x0000EA01");
label_60771c:
    // 0x60771c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60771cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607720:
    // 0x607720: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x607720u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_607724:
    // 0x607724: 0xea33  tltu        $zero, $zero, 936
    ctx->pc = 0x607724u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607728:
    // 0x607728: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607728u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607728 raw=0x0000EA01");
label_60772c:
    // 0x60772c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60772cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607730:
    // 0x607730: 0xea02  srl         $sp, $zero, 8
    ctx->pc = 0x607730u;
    SET_GPR_S32(ctx, 29, (int32_t)SRL32(GPR_U32(ctx, 0), 8));
label_607734:
    // 0x607734: 0xea3f  dsra32      $sp, $zero, 8
    ctx->pc = 0x607734u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 0) >> (32 + 8));
label_607738:
    // 0x607738: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607738u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607738 raw=0x0000EA01");
label_60773c:
    // 0x60773c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60773cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607740:
    // 0x607740: 0xea0d  break       0, 936
    ctx->pc = 0x607740u;
    runtime->handleBreak(rdram, ctx);
label_607744:
    // 0x607744: 0xea0e  .word       0x0000EA0E                   # INVALID     $zero, $zero, -0x15F2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607744u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x607744 raw=0x0000EA0E");
label_607748:
    // 0x607748: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607748u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607748 raw=0x0000EA01");
label_60774c:
    // 0x60774c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60774cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607750:
    // 0x607750: 0xea0d  break       0, 936
    ctx->pc = 0x607750u;
    runtime->handleBreak(rdram, ctx);
label_607754:
    // 0x607754: 0xea0f  .word       0x0000EA0F                   # sync # 0000E800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607754u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_607758:
    // 0x607758: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607758u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607758 raw=0x0000EA01");
label_60775c:
    // 0x60775c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60775cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607760:
    // 0x607760: 0xea0d  break       0, 936
    ctx->pc = 0x607760u;
    runtime->handleBreak(rdram, ctx);
label_607764:
    // 0x607764: 0xea10  .word       0x0000EA10                   # mfhi        $sp # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607764u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_607768:
    // 0x607768: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607768u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607768 raw=0x0000EA01");
label_60776c:
    // 0x60776c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60776cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607770:
    // 0x607770: 0xea0d  break       0, 936
    ctx->pc = 0x607770u;
    runtime->handleBreak(rdram, ctx);
label_607774:
    // 0x607774: 0xea11  .word       0x0000EA11                   # mthi        $zero # 0000EA00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607774u;
    ctx->hi = GPR_U64(ctx, 0);
label_607778:
    // 0x607778: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607778u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607778 raw=0x0000EA01");
label_60777c:
    // 0x60777c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60777cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607780:
    // 0x607780: 0xea0d  break       0, 936
    ctx->pc = 0x607780u;
    runtime->handleBreak(rdram, ctx);
label_607784:
    // 0x607784: 0xea12  .word       0x0000EA12                   # mflo        $sp # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607784u;
    SET_GPR_U64(ctx, 29, ctx->lo);
label_607788:
    // 0x607788: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607788u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607788 raw=0x0000EA01");
label_60778c:
    // 0x60778c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60778cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607790:
    // 0x607790: 0xea0d  break       0, 936
    ctx->pc = 0x607790u;
    runtime->handleBreak(rdram, ctx);
label_607794:
    // 0x607794: 0xea13  .word       0x0000EA13                   # mtlo        $zero # 0000EA00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607794u;
    ctx->lo = GPR_U64(ctx, 0);
label_607798:
    // 0x607798: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607798u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607798 raw=0x0000EA01");
label_60779c:
    // 0x60779c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60779cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6077a0:
    // 0x6077a0: 0xea0d  break       0, 936
    ctx->pc = 0x6077a0u;
    runtime->handleBreak(rdram, ctx);
label_6077a4:
    // 0x6077a4: 0xea14  .word       0x0000EA14                   # dsllv       $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6077a4u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_6077a8:
    // 0x6077a8: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6077a8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6077A8 raw=0x0000EA01");
label_6077ac:
    // 0x6077ac: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x6077acu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6077b0:
    // 0x6077b0: 0xea0d  break       0, 936
    ctx->pc = 0x6077b0u;
    runtime->handleBreak(rdram, ctx);
label_6077b4:
    // 0x6077b4: 0xea24  .word       0x0000EA24                   # and         $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6077b4u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_6077b8:
    // 0x6077b8: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6077b8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6077B8 raw=0x0000EA01");
label_6077bc:
    // 0x6077bc: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x6077bcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6077c0:
    // 0x6077c0: 0xea0d  break       0, 936
    ctx->pc = 0x6077c0u;
    runtime->handleBreak(rdram, ctx);
label_6077c4:
    // 0x6077c4: 0xea17  .word       0x0000EA17                   # dsrav       $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6077c4u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_6077c8:
    // 0x6077c8: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6077c8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6077C8 raw=0x0000EA01");
label_6077cc:
    // 0x6077cc: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x6077ccu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6077d0:
    // 0x6077d0: 0xea0d  break       0, 936
    ctx->pc = 0x6077d0u;
    runtime->handleBreak(rdram, ctx);
label_6077d4:
    // 0x6077d4: 0xea1e  .word       0x0000EA1E                   # ddiv        $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6077d4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x6077D4 raw=0x0000EA1E");
label_6077d8:
    // 0x6077d8: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6077d8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6077D8 raw=0x0000EA01");
label_6077dc:
    // 0x6077dc: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x6077dcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6077e0:
    // 0x6077e0: 0xea0d  break       0, 936
    ctx->pc = 0x6077e0u;
    runtime->handleBreak(rdram, ctx);
label_6077e4:
    // 0x6077e4: 0xea1f  .word       0x0000EA1F                   # ddivu       $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6077e4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x6077E4 raw=0x0000EA1F");
label_6077e8:
    // 0x6077e8: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6077e8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6077E8 raw=0x0000EA01");
label_6077ec:
    // 0x6077ec: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x6077ecu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6077f0:
    // 0x6077f0: 0xea0d  break       0, 936
    ctx->pc = 0x6077f0u;
    runtime->handleBreak(rdram, ctx);
label_6077f4:
    // 0x6077f4: 0xea21  .word       0x0000EA21                   # addu        $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6077f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_6077f8:
    // 0x6077f8: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6077f8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6077F8 raw=0x0000EA01");
label_6077fc:
    // 0x6077fc: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x6077fcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607800:
    // 0x607800: 0xea0d  break       0, 936
    ctx->pc = 0x607800u;
    runtime->handleBreak(rdram, ctx);
label_607804:
    // 0x607804: 0xea2d  .word       0x0000EA2D                   # daddu       $sp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607804u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_607808:
    // 0x607808: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607808u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607808 raw=0x0000EA01");
label_60780c:
    // 0x60780c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60780cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607810:
    // 0x607810: 0xea0d  break       0, 936
    ctx->pc = 0x607810u;
    runtime->handleBreak(rdram, ctx);
label_607814:
    // 0x607814: 0xea30  tge         $zero, $zero, 936
    ctx->pc = 0x607814u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607818:
    // 0x607818: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607818u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607818 raw=0x0000EA01");
label_60781c:
    // 0x60781c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60781cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607820:
    // 0x607820: 0xea0d  break       0, 936
    ctx->pc = 0x607820u;
    runtime->handleBreak(rdram, ctx);
label_607824:
    // 0x607824: 0xea35  .word       0x0000EA35                   # INVALID     $zero, $zero, -0x15CB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607824u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x607824 raw=0x0000EA35");
label_607828:
    // 0x607828: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607828u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607828 raw=0x0000EA01");
label_60782c:
    // 0x60782c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60782cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607830:
    // 0x607830: 0xea0d  break       0, 936
    ctx->pc = 0x607830u;
    runtime->handleBreak(rdram, ctx);
label_607834:
    // 0x607834: 0xea36  tne         $zero, $zero, 936
    ctx->pc = 0x607834u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607838:
    // 0x607838: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607838u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607838 raw=0x0000EA01");
label_60783c:
    // 0x60783c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60783cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607840:
    // 0x607840: 0xea0d  break       0, 936
    ctx->pc = 0x607840u;
    runtime->handleBreak(rdram, ctx);
label_607844:
    // 0x607844: 0xea37  .word       0x0000EA37                   # INVALID     $zero, $zero, -0x15C9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607844u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x607844 raw=0x0000EA37");
label_607848:
    // 0x607848: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607848u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607848 raw=0x0000EA01");
label_60784c:
    // 0x60784c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60784cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607850:
    // 0x607850: 0xea0d  break       0, 936
    ctx->pc = 0x607850u;
    runtime->handleBreak(rdram, ctx);
label_607854:
    // 0x607854: 0xea38  dsll        $sp, $zero, 8
    ctx->pc = 0x607854u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) << 8);
label_607858:
    // 0x607858: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607858u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607858 raw=0x0000EA01");
label_60785c:
    // 0x60785c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60785cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607860:
    // 0x607860: 0xea0d  break       0, 936
    ctx->pc = 0x607860u;
    runtime->handleBreak(rdram, ctx);
label_607864:
    // 0x607864: 0xea39  .word       0x0000EA39                   # INVALID     $zero, $zero, -0x15C7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607864u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x607864 raw=0x0000EA39");
label_607868:
    // 0x607868: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607868u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607868 raw=0x0000EA01");
label_60786c:
    // 0x60786c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60786cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607870:
    // 0x607870: 0xea0d  break       0, 936
    ctx->pc = 0x607870u;
    runtime->handleBreak(rdram, ctx);
label_607874:
    // 0x607874: 0xea3b  dsra        $sp, $zero, 8
    ctx->pc = 0x607874u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 0) >> 8);
label_607878:
    // 0x607878: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607878u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607878 raw=0x0000EA01");
label_60787c:
    // 0x60787c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60787cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607880:
    // 0x607880: 0xea0d  break       0, 936
    ctx->pc = 0x607880u;
    runtime->handleBreak(rdram, ctx);
label_607884:
    // 0x607884: 0xea3c  dsll32      $sp, $zero, 8
    ctx->pc = 0x607884u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) << (32 + 8));
label_607888:
    // 0x607888: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607888u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607888 raw=0x0000EA01");
label_60788c:
    // 0x60788c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60788cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607890:
    // 0x607890: 0xea0d  break       0, 936
    ctx->pc = 0x607890u;
    runtime->handleBreak(rdram, ctx);
label_607894:
    // 0x607894: 0xea3d  .word       0x0000EA3D                   # INVALID     $zero, $zero, -0x15C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607894u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x607894 raw=0x0000EA3D");
label_607898:
    // 0x607898: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607898u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607898 raw=0x0000EA01");
label_60789c:
    // 0x60789c: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x60789cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6078a0:
    // 0x6078a0: 0xea0d  break       0, 936
    ctx->pc = 0x6078a0u;
    runtime->handleBreak(rdram, ctx);
label_6078a4:
    // 0x6078a4: 0xea3e  dsrl32      $sp, $zero, 8
    ctx->pc = 0x6078a4u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) >> (32 + 8));
label_6078a8:
    // 0x6078a8: 0xea01  .word       0x0000EA01                   # INVALID     $zero, $zero, -0x15FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6078a8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6078A8 raw=0x0000EA01");
label_6078ac:
    // 0x6078ac: 0xea34  teq         $zero, $zero, 936
    ctx->pc = 0x6078acu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6078b0:
    // 0x6078b0: 0xea0d  break       0, 936
    ctx->pc = 0x6078b0u;
    runtime->handleBreak(rdram, ctx);
label_6078b4:
    // 0x6078b4: 0xea41  .word       0x0000EA41                   # INVALID     $zero, $zero, -0x15BF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6078b4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6078B4 raw=0x0000EA41");
label_6078b8:
    // 0x6078b8: 0x665f7866  daddiu      $ra, $s2, 0x7866
    ctx->pc = 0x6078b8u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)30822);
label_6078bc:
    // 0x6078bc: 0x6b726f  .word       0x006B726F                   # dsubu       $t6, $v1, $t3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6078bcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) - GPR_U64(ctx, 11));
label_6078c0:
    // 0x6078c0: 0x745f7866  .word       0x745F7866                   # INVALID     $v0, $ra, 0x7866 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6078c0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x6078C0 raw=0x745F7866");
label_6078c4:
    // 0x6078c4: 0x747865  .word       0x00747865                   # or          $t7, $v1, $s4 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6078c4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
label_6078c8:
    // 0x6078c8: 0x665f7866  daddiu      $ra, $s2, 0x7866
    ctx->pc = 0x6078c8u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)30822);
label_6078cc:
    // 0x6078cc: 0x65656c  .word       0x0065656C                   # dadd        $t4, $v1, $a1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6078ccu;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_6078d0:
    // 0x6078d0: 0x6c5f7866  ldr         $ra, 0x7866($v0)
    ctx->pc = 0x6078d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 30822); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_6078d4:
    // 0x6078d4: 0x6b636f  .word       0x006B636F                   # dsubu       $t4, $v1, $t3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6078d4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) - GPR_U64(ctx, 11));
label_6078d8:
    // 0x6078d8: 0x6a5f7172  ldl         $ra, 0x7172($s2)
    ctx->pc = 0x6078d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 29042); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_6078dc:
    // 0x6078dc: 0x626f  .word       0x0000626F                   # dsubu       $t4, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6078dcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_6078e0:
    // 0x6078e0: 0x615f7172  daddi       $ra, $t2, 0x7172
    ctx->pc = 0x6078e0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29042; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_6078e4:
    // 0x6078e4: 0x616572  tlt         $v1, $at, 405
    ctx->pc = 0x6078e4u;
    if (GPR_S64(ctx, 3) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_6078e8:
    // 0x6078e8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6078e8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6078E8 raw=0x00000001");
label_6078ec:
    // 0x6078ec: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6078ecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6078EC raw=0x00000001");
label_6078f0:
    // 0x6078f0: 0x0  nop
    ctx->pc = 0x6078f0u;
    // NOP
label_6078f4:
    // 0x6078f4: 0x0  nop
    ctx->pc = 0x6078f4u;
    // NOP
label_6078f8:
    // 0x6078f8: 0x3830252e  xori        $s0, $at, 0x252E
    ctx->pc = 0x6078f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)9518);
label_6078fc:
    // 0x6078fc: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x6078fcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_607900:
    // 0x607900: 0x2e7325  .word       0x002E7325                   # or          $t6, $at, $t6 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607900u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) | GPR_U64(ctx, 14));
label_607904:
    // 0x607904: 0x6272  tlt         $zero, $zero, 393
    ctx->pc = 0x607904u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607908:
    // 0x607908: 0x72702e2a  .word       0x72702E2A                   # INVALID     $s3, $s0, 0x2E2A # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x607908u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2A at 0x607908 raw=0x72702E2A");
label_60790c:
    // 0x60790c: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60790cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_607910:
    // 0x607910: 0x0  nop
    ctx->pc = 0x607910u;
    // NOP
label_607914:
    // 0x607914: 0x6277  .word       0x00006277                   # INVALID     $zero, $zero, 0x6277 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607914u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x607914 raw=0x00006277");
label_607918:
    // 0x607918: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607918u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607918 raw=0x00000001");
label_60791c:
    // 0x60791c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60791cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60791C raw=0x00000001");
label_607920:
    // 0x607920: 0x0  nop
    ctx->pc = 0x607920u;
    // NOP
label_607924:
    // 0x607924: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607924u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607924 raw=0x00000001");
label_607928:
    // 0x607928: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607928u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607928 raw=0x00000001");
label_60792c:
    // 0x60792c: 0x0  nop
    ctx->pc = 0x60792cu;
    // NOP
label_607930:
    // 0x607930: 0x65736572  daddiu      $s3, $t3, 0x6572
    ctx->pc = 0x607930u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25970);
label_607934:
    // 0x607934: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x607934u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607938:
    // 0x607938: 0x0  nop
    ctx->pc = 0x607938u;
    // NOP
label_60793c:
    // 0x60793c: 0x0  nop
    ctx->pc = 0x60793cu;
    // NOP
label_607940:
    // 0x607940: 0x2e70616d  sltiu       $s0, $s3, 0x616D
    ctx->pc = 0x607940u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)24941) ? 1 : 0);
label_607944:
    // 0x607944: 0x733774  teq         $v1, $s3, 221
    ctx->pc = 0x607944u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_607948:
    // 0x607948: 0x0  nop
    ctx->pc = 0x607948u;
    // NOP
label_60794c:
    // 0x60794c: 0x0  nop
    ctx->pc = 0x60794cu;
    // NOP
label_607950:
    // 0x607950: 0x74736165  .word       0x74736165                   # INVALID     $v1, $s3, 0x6165 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607950u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x607950 raw=0x74736165");
label_607954:
    // 0x607954: 0x0  nop
    ctx->pc = 0x607954u;
    // NOP
label_607958:
    // 0x607958: 0x74736165  .word       0x74736165                   # INVALID     $v1, $s3, 0x6165 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607958u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x607958 raw=0x74736165");
label_60795c:
    // 0x60795c: 0x77  .word       0x00000077                   # INVALID     $zero, $zero, 0x77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60795cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x60795C raw=0x00000077");
label_607960:
    // 0x607960: 0x7378756c  .word       0x7378756C                   # INVALID     $k1, $t8, 0x756C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x607960u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x607960 raw=0x7378756C");
label_607964:
    // 0x607964: 0x706f68  .word       0x00706F68                   # mfsa        $t5 # 00700740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x607964u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_607968:
    // 0x607968: 0x6e656465  ldr         $a1, 0x6465($s3)
    ctx->pc = 0x607968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25701); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_60796c:
    // 0x60796c: 0x0  nop
    ctx->pc = 0x60796cu;
    // NOP
label_607970:
    // 0x607970: 0x61637365  daddi       $v1, $t3, 0x7365
    ctx->pc = 0x607970u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29541; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_607974:
    // 0x607974: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x607974u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607978:
    // 0x607978: 0x726f7073  .word       0x726F7073                   # INVALID     $s3, $t7, 0x7073 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x607978u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x607978 raw=0x726F7073");
label_60797c:
    // 0x60797c: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x60797cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607980:
    // 0x607980: 0x626d6f63  daddi       $t5, $s3, 0x6F63
    ctx->pc = 0x607980u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)28515; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_607984:
    // 0x607984: 0x7461  .word       0x00007461                   # addu        $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607984u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_607988:
    // 0x607988: 0x70616d  .word       0x0070616D                   # daddu       $t4, $v1, $s0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607988u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 16));
label_60798c:
    // 0x60798c: 0x0  nop
    ctx->pc = 0x60798cu;
    // NOP
label_607990:
    // 0x607990: 0x79616c70  lq          $at, 0x6C70($t3)
    ctx->pc = 0x607990u;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 11), 27760)));
label_607994:
    // 0x607994: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607994u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_607998:
    // 0x607998: 0x6f747574  ldr         $s4, 0x7574($k1)
    ctx->pc = 0x607998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30068); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_60799c:
    // 0x60799c: 0x0  nop
    ctx->pc = 0x60799cu;
    // NOP
label_6079a0:
    // 0x6079a0: 0x646f7270  daddiu      $t7, $v1, 0x7270
    ctx->pc = 0x6079a0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29296);
label_6079a4:
    // 0x6079a4: 0x0  nop
    ctx->pc = 0x6079a4u;
    // NOP
label_6079a8:
    // 0x6079a8: 0x736e6f63  .word       0x736E6F63                   # INVALID     $k1, $t6, 0x6F63 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x6079a8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x6079A8 raw=0x736E6F63");
label_6079ac:
    // 0x6079ac: 0x726f  .word       0x0000726F                   # dsubu       $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6079acu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_6079b0:
    // 0x6079b0: 0x6d6f6364  ldr         $t7, 0x6364($t3)
    ctx->pc = 0x6079b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_6079b4:
    // 0x6079b4: 0x746162  .word       0x00746162                   # sub         $t4, $v1, $s4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6079b4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 3), GPR_U32(ctx, 20), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_6079b8:
    // 0x6079b8: 0x746f6870  .word       0x746F6870                   # INVALID     $v1, $t7, 0x6870 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6079b8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x6079B8 raw=0x746F6870");
label_6079bc:
    // 0x6079bc: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6079bcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_6079c0:
    // 0x6079c0: 0x5f474d  break       95, 285
    ctx->pc = 0x6079c0u;
    runtime->handleBreak(rdram, ctx);
label_6079c4:
    // 0x6079c4: 0x0  nop
    ctx->pc = 0x6079c4u;
    // NOP
label_6079c8:
    // 0x6079c8: 0x6174535f  daddi       $s4, $t3, 0x535F
    ctx->pc = 0x6079c8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)21343; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_6079cc:
    // 0x6079cc: 0x7472  tlt         $zero, $zero, 465
    ctx->pc = 0x6079ccu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6079d0:
    // 0x6079d0: 0x0  nop
    ctx->pc = 0x6079d0u;
    // NOP
label_6079d4:
    // 0x6079d4: 0x0  nop
    ctx->pc = 0x6079d4u;
    // NOP
label_6079d8:
    // 0x6079d8: 0x74736165  .word       0x74736165                   # INVALID     $v1, $s3, 0x6165 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6079d8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x6079D8 raw=0x74736165");
label_6079dc:
    // 0x6079dc: 0x0  nop
    ctx->pc = 0x6079dcu;
    // NOP
label_6079e0:
    // 0x6079e0: 0x74736165  .word       0x74736165                   # INVALID     $v1, $s3, 0x6165 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6079e0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x6079E0 raw=0x74736165");
label_6079e4:
    // 0x6079e4: 0x77  .word       0x00000077                   # INVALID     $zero, $zero, 0x77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6079e4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x6079E4 raw=0x00000077");
label_6079e8:
    // 0x6079e8: 0x7378756c  .word       0x7378756C                   # INVALID     $k1, $t8, 0x756C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x6079e8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x6079E8 raw=0x7378756C");
label_6079ec:
    // 0x6079ec: 0x706f68  .word       0x00706F68                   # mfsa        $t5 # 00700740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x6079ecu;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_6079f0:
    // 0x6079f0: 0x6e656465  ldr         $a1, 0x6465($s3)
    ctx->pc = 0x6079f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25701); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_6079f4:
    // 0x6079f4: 0x0  nop
    ctx->pc = 0x6079f4u;
    // NOP
label_6079f8:
    // 0x6079f8: 0x61637365  daddi       $v1, $t3, 0x7365
    ctx->pc = 0x6079f8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29541; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_6079fc:
    // 0x6079fc: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x6079fcu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607a00:
    // 0x607a00: 0x61626d6f  daddi       $v0, $t3, 0x6D6F
    ctx->pc = 0x607a00u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28015; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_607a04:
    // 0x607a04: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x607a04u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607a08:
    // 0x607a08: 0x626d6f63  daddi       $t5, $s3, 0x6F63
    ctx->pc = 0x607a08u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)28515; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_607a0c:
    // 0x607a0c: 0x7461  .word       0x00007461                   # addu        $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607a0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_607a10:
    // 0x607a10: 0x726f7073  .word       0x726F7073                   # INVALID     $s3, $t7, 0x7073 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x607a10u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x607A10 raw=0x726F7073");
label_607a14:
    // 0x607a14: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x607a14u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607a18:
    // 0x607a18: 0x70616d  .word       0x0070616D                   # daddu       $t4, $v1, $s0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607a18u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 16));
label_607a1c:
    // 0x607a1c: 0x0  nop
    ctx->pc = 0x607a1cu;
    // NOP
label_607a20:
    // 0x607a20: 0x646f7270  daddiu      $t7, $v1, 0x7270
    ctx->pc = 0x607a20u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29296);
label_607a24:
    // 0x607a24: 0x0  nop
    ctx->pc = 0x607a24u;
    // NOP
label_607a28:
    // 0x607a28: 0x736e6f63  .word       0x736E6F63                   # INVALID     $k1, $t6, 0x6F63 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x607a28u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x607A28 raw=0x736E6F63");
label_607a2c:
    // 0x607a2c: 0x726f  .word       0x0000726F                   # dsubu       $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607a2cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_607a30:
    // 0x607a30: 0x6d6f6364  ldr         $t7, 0x6364($t3)
    ctx->pc = 0x607a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25444); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_607a34:
    // 0x607a34: 0x746162  .word       0x00746162                   # sub         $t4, $v1, $s4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607a34u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 3), GPR_U32(ctx, 20), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_607a38:
    // 0x607a38: 0x79616c70  lq          $at, 0x6C70($t3)
    ctx->pc = 0x607a38u;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 11), 27760)));
label_607a3c:
    // 0x607a3c: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607a3cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_607a40:
    // 0x607a40: 0x746f6870  .word       0x746F6870                   # INVALID     $v1, $t7, 0x6870 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607a40u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x607A40 raw=0x746F6870");
label_607a44:
    // 0x607a44: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607a44u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_607a48:
    // 0x607a48: 0x646e655f  daddiu      $t6, $v1, 0x655F
    ctx->pc = 0x607a48u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25951);
label_607a4c:
    // 0x607a4c: 0x0  nop
    ctx->pc = 0x607a4cu;
    // NOP
label_607a50:
    // 0x607a50: 0x756e656d  .word       0x756E656D                   # INVALID     $t3, $t6, 0x656D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607a50u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x607A50 raw=0x756E656D");
label_607a54:
    // 0x607a54: 0x0  nop
    ctx->pc = 0x607a54u;
    // NOP
label_607a58:
    // 0x607a58: 0x73697263  .word       0x73697263                   # INVALID     $k1, $t1, 0x7263 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x607a58u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x607A58 raw=0x73697263");
label_607a5c:
    // 0x607a5c: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607a5cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_607a60:
    // 0x607a60: 0x73697263  .word       0x73697263                   # INVALID     $k1, $t1, 0x7263 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x607a60u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x607A60 raw=0x73697263");
label_607a64:
    // 0x607a64: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607a64u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_607a68:
    // 0x607a68: 0x0  nop
    ctx->pc = 0x607a68u;
    // NOP
label_607a6c:
    // 0x607a6c: 0x0  nop
    ctx->pc = 0x607a6cu;
    // NOP
label_607a70:
    // 0x607a70: 0x78383025  lq          $t8, 0x3025($at)
    ctx->pc = 0x607a70u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 1), 12325)));
label_607a74:
    // 0x607a74: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x607a74u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_607a78:
    // 0x607a78: 0x5f746361  .word       0x5F746361                   # bgtzl       $k1, . + 4 + (0x6361 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_607a7c:
    if (ctx->pc == 0x607A7Cu) {
        ctx->pc = 0x607A80u;
        goto label_607a80;
    }
    ctx->pc = 0x607A78u;
    {
        const bool branch_taken_0x607a78 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x607a78) {
            ctx->pc = 0x620800u;
            return;
        }
    }
    ctx->pc = 0x607A80u;
label_607a80:
    // 0x607a80: 0x61657263  daddi       $a1, $t3, 0x7263
    ctx->pc = 0x607a80u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29283; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_607a84:
    // 0x607a84: 0x5f6574  teq         $v0, $ra, 405
    ctx->pc = 0x607a84u;
    if (GPR_U64(ctx, 2) == GPR_U64(ctx, 31)) { runtime->handleTrap(rdram, ctx); }
label_607a88:
    // 0x607a88: 0x61657261  daddi       $a1, $t3, 0x7261
    ctx->pc = 0x607a88u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29281; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_607a8c:
    // 0x607a8c: 0x5f  .word       0x0000005F                   # ddivu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607a8cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x607A8C raw=0x0000005F");
label_607a90:
    // 0x607a90: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x607a90u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_607a94:
    // 0x607a94: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x607a94u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_607a98:
    // 0x607a98: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607a98u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607A98 raw=0x00000001");
label_607a9c:
    // 0x607a9c: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x607a9cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_607aa0:
    // 0x607aa0: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x607aa0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_607aa4:
    // 0x607aa4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x607aa4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_607aa8:
    // 0x607aa8: 0x4e21f0  tge         $v0, $t6, 135
    ctx->pc = 0x607aa8u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_607aac:
    // 0x607aac: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x607aacu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_607ab0:
    // 0x607ab0: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607ab0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_607ab4:
    // 0x607ab4: 0x0  nop
    ctx->pc = 0x607ab4u;
    // NOP
label_607ab8:
    // 0x607ab8: 0x3a3a7453  xori        $k0, $s1, 0x7453
    ctx->pc = 0x607ab8u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)29779);
label_607abc:
    // 0x607abc: 0x435254  .word       0x00435254                   # dsllv       $t2, $v1, $v0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607abcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
label_607ac0:
    // 0x607ac0: 0x733774  teq         $v1, $s3, 221
    ctx->pc = 0x607ac0u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_607ac4:
    // 0x607ac4: 0x0  nop
    ctx->pc = 0x607ac4u;
    // NOP
label_607ac8:
    // 0x607ac8: 0x4b624e5f  .word       0x4B624E5F                   # vminii.xzw  $vf25, $vf9, $I # 00020000 <InstrIdType: R5900_COP2_SPECIAL1>
    ctx->pc = 0x607ac8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[9], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
label_607acc:
    // 0x607acc: 0x62  .word       0x00000062                   # neg         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607accu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_607ad0:
    // 0x607ad0: 0x6c6c6167  ldr         $t4, 0x6167($v1)
    ctx->pc = 0x607ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24935); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_607ad4:
    // 0x607ad4: 0x797265  .word       0x00797265                   # or          $t6, $v1, $t9 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607ad4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) | GPR_U64(ctx, 25));
label_607ad8:
    // 0x607ad8: 0x6777656e  daddiu      $s7, $k1, 0x656E
    ctx->pc = 0x607ad8u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25966);
label_607adc:
    // 0x607adc: 0x656d61  .word       0x00656D61                   # addu        $t5, $v1, $a1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607adcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_607ae0:
    // 0x607ae0: 0x6e696f70  ldr         $t1, 0x6F70($s3)
    ctx->pc = 0x607ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28528); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_607ae4:
    // 0x607ae4: 0x7374  teq         $zero, $zero, 461
    ctx->pc = 0x607ae4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607ae8:
    // 0x607ae8: 0x65766173  daddiu      $s6, $t3, 0x6173
    ctx->pc = 0x607ae8u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24947);
label_607aec:
    // 0x607aec: 0x75255f  .word       0x0075255F                   # ddivu       $a0, $v1, $s5 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607aecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x607AEC raw=0x0075255F");
label_607af0:
    // 0x607af0: 0x666f7270  daddiu      $t7, $s3, 0x7270
    ctx->pc = 0x607af0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)29296);
label_607af4:
    // 0x607af4: 0x5f6c69  .word       0x005F6C69                   # mtsa        $v0 # 001F6C40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x607af4u;
    ctx->sa = GPR_U32(ctx, 2) & 0x7F;
label_607af8:
    // 0x607af8: 0x65766173  daddiu      $s6, $t3, 0x6173
    ctx->pc = 0x607af8u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24947);
label_607afc:
    // 0x607afc: 0x5f  .word       0x0000005F                   # ddivu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607afcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x607AFC raw=0x0000005F");
label_607b00:
    // 0x607b00: 0x63656863  daddi       $a1, $k1, 0x6863
    ctx->pc = 0x607b00u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26723; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_607b04:
    // 0x607b04: 0x5f6b  .word       0x00005F6B                   # sltu        $t3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607b04u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_607b08:
    // 0x607b08: 0x6272  tlt         $zero, $zero, 393
    ctx->pc = 0x607b08u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607b0c:
    // 0x607b0c: 0x7472  tlt         $zero, $zero, 465
    ctx->pc = 0x607b0cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607b10:
    // 0x607b10: 0x73255b  .word       0x0073255B                   # divu        $a0, $v1, $s3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607b10u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_607b14:
    // 0x607b14: 0x0  nop
    ctx->pc = 0x607b14u;
    // NOP
label_607b18:
    // 0x607b18: 0x256d6163  addiu       $t5, $t3, 0x6163
    ctx->pc = 0x607b18u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), 24931));
label_607b1c:
    // 0x607b1c: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607b1cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_607b20:
    // 0x607b20: 0x3d676174  .word       0x3D676174                   # lui         $a3, 0x6174 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607b20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24948 << 16));
label_607b24:
    // 0x607b24: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607b24u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_607b28:
    // 0x607b28: 0x65646f6d  daddiu      $a0, $t3, 0x6F6D
    ctx->pc = 0x607b28u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28525);
label_607b2c:
    // 0x607b2c: 0x73253d  .word       0x0073253D                   # INVALID     $v1, $s3, 0x253D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607b2cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x607B2C raw=0x0073253D");
label_607b30:
    // 0x607b30: 0x67726174  daddiu      $s2, $k1, 0x6174
    ctx->pc = 0x607b30u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24948);
label_607b34:
    // 0x607b34: 0x7465  .word       0x00007465                   # move        $t6, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607b34u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_607b38:
    // 0x607b38: 0x6f746361  ldr         $s4, 0x6361($k1)
    ctx->pc = 0x607b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_607b3c:
    // 0x607b3c: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x607b3cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607b40:
    // 0x607b40: 0x68746f62  ldl         $s4, 0x6F62($v1)
    ctx->pc = 0x607b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28514); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_607b44:
    // 0x607b44: 0x0  nop
    ctx->pc = 0x607b44u;
    // NOP
label_607b48:
    // 0x607b48: 0x6d657469  ldr         $a1, 0x7469($t3)
    ctx->pc = 0x607b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29801); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_607b4c:
    // 0x607b4c: 0x0  nop
    ctx->pc = 0x607b4cu;
    // NOP
label_607b50:
    // 0x607b50: 0x3d766f66  .word       0x3D766F66                   # lui         $s6, 0x6F66 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607b50u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)28518 << 16));
label_607b54:
    // 0x607b54: 0x6625  .word       0x00006625                   # move        $t4, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607b54u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_607b58:
    // 0x607b58: 0x6c626174  ldr         $v0, 0x6174($v1)
    ctx->pc = 0x607b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_607b5c:
    // 0x607b5c: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607b5cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_607b60:
    // 0x607b60: 0x63756f63  daddi       $s5, $k1, 0x6F63
    ctx->pc = 0x607b60u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)28515; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
label_607b64:
    // 0x607b64: 0x68  .word       0x00000068                   # mfsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x607b64u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_607b68:
    // 0x607b68: 0x316e6f31  andi        $t6, $t3, 0x6F31
    ctx->pc = 0x607b68u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)28465);
label_607b6c:
    // 0x607b6c: 0x0  nop
    ctx->pc = 0x607b6cu;
    // NOP
label_607b70:
    // 0x607b70: 0x646562  .word       0x00646562                   # sub         $t4, $v1, $a0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607b70u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 3), GPR_U32(ctx, 4), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_607b74:
    // 0x607b74: 0x0  nop
    ctx->pc = 0x607b74u;
    // NOP
label_607b78:
    // 0x607b78: 0x746f6870  .word       0x746F6870                   # INVALID     $v1, $t7, 0x6870 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607b78u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x607B78 raw=0x746F6870");
label_607b7c:
    // 0x607b7c: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607b7cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_607b80:
    // 0x607b80: 0x6f646173  ldr         $a0, 0x6173($k1)
    ctx->pc = 0x607b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24947); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_607b84:
    // 0x607b84: 0x0  nop
    ctx->pc = 0x607b84u;
    // NOP
label_607b88:
    // 0x607b88: 0x6f6c7073  ldr         $t4, 0x7073($k1)
    ctx->pc = 0x607b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28787); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_607b8c:
    // 0x607b8c: 0x6873  tltu        $zero, $zero, 417
    ctx->pc = 0x607b8cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607b90:
    // 0x607b90: 0x7373616d  .word       0x7373616D                   # INVALID     $k1, $s3, 0x616D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x607b90u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x607B90 raw=0x7373616D");
label_607b94:
    // 0x607b94: 0x656761  .word       0x00656761                   # addu        $t4, $v1, $a1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607b94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_607b98:
    // 0x607b98: 0x756b616d  .word       0x756B616D                   # INVALID     $t3, $t3, 0x616D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607b98u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x607B98 raw=0x756B616D");
label_607b9c:
    // 0x607b9c: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x607b9cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607ba0:
    // 0x607ba0: 0x67676f6a  daddiu      $a3, $k1, 0x6F6A
    ctx->pc = 0x607ba0u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28522);
label_607ba4:
    // 0x607ba4: 0x676e69  .word       0x00676E69                   # mtsa        $v1 # 00076E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x607ba4u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_607ba8:
    // 0x607ba8: 0x6e756173  ldr         $s5, 0x6173($s3)
    ctx->pc = 0x607ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24947); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_607bac:
    // 0x607bac: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607bacu;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_607bb0:
    // 0x607bb0: 0x69626163  ldl         $v0, 0x6163($t3)
    ctx->pc = 0x607bb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24931); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_607bb4:
    // 0x607bb4: 0x656e  .word       0x0000656E                   # dsub        $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607bb4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_607bb8:
    // 0x607bb8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607bb8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_607bbc:
    // 0x607bbc: 0x0  nop
    ctx->pc = 0x607bbcu;
    // NOP
label_607bc0:
    // 0x607bc0: 0x626f6c67  daddi       $t7, $s3, 0x6C67
    ctx->pc = 0x607bc0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)27751; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_607bc4:
    // 0x607bc4: 0x6c61  .word       0x00006C61                   # addu        $t5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607bc4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_607bc8:
    // 0x607bc8: 0x0  nop
    ctx->pc = 0x607bc8u;
    // NOP
label_607bcc:
    // 0x607bcc: 0x0  nop
    ctx->pc = 0x607bccu;
    // NOP
label_607bd0:
    // 0x607bd0: 0x732e7325  .word       0x732E7325                   # INVALID     $t9, $t6, 0x7325 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x607bd0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x607BD0 raw=0x732E7325");
label_607bd4:
    // 0x607bd4: 0x6e69  .word       0x00006E69                   # mtsa        $zero # 00006E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x607bd4u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_607bd8:
    // 0x607bd8: 0x3dcccccd  .word       0x3DCCCCCD                   # lui         $t4, 0xCCCD # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607bd8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_607bdc:
    // 0x607bdc: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x607bdcu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_607be0:
    // 0x607be0: 0x0  nop
    ctx->pc = 0x607be0u;
    // NOP
label_607be4:
    // 0x607be4: 0x0  nop
    ctx->pc = 0x607be4u;
    // NOP
label_607be8:
    // 0x607be8: 0x7337742e  .word       0x7337742E                   # INVALID     $t9, $s7, 0x742E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x607be8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x607BE8 raw=0x7337742E");
label_607bec:
    // 0x607bec: 0x0  nop
    ctx->pc = 0x607becu;
    // NOP
label_607bf0:
    // 0x607bf0: 0x3d676174  .word       0x3D676174                   # lui         $a3, 0x6174 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24948 << 16));
label_607bf4:
    // 0x607bf4: 0x34  teq         $zero, $zero, 0
    ctx->pc = 0x607bf4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607bf8:
    // 0x607bf8: 0x3f266666  .word       0x3F266666                   # lui         $a2, 0x6666 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_607bfc:
    // 0x607bfc: 0x0  nop
    ctx->pc = 0x607bfcu;
    // NOP
label_607c00:
    // 0x607c00: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x607c00u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_607c04:
    // 0x607c04: 0x0  nop
    ctx->pc = 0x607c04u;
    // NOP
label_607c08:
    // 0x607c08: 0x252e6425  addiu       $t6, $t1, 0x6425
    ctx->pc = 0x607c08u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 25637));
label_607c0c:
    // 0x607c0c: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607c0cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_607c10:
    // 0x607c10: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x607c10u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x607C10 raw=0x40400000");
label_607c14:
    // 0x607c14: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607c14u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_607c18:
    // 0x607c18: 0x3132  tlt         $zero, $zero, 196
    ctx->pc = 0x607c18u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607c1c:
    // 0x607c1c: 0x0  nop
    ctx->pc = 0x607c1cu;
    // NOP
label_607c20:
    // 0x607c20: 0x309e0142  andi        $fp, $a0, 0x142
    ctx->pc = 0x607c20u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)322);
label_607c24:
    // 0x607c24: 0x0  nop
    ctx->pc = 0x607c24u;
    // NOP
label_607c28:
    // 0x607c28: 0x0  nop
    ctx->pc = 0x607c28u;
    // NOP
label_607c2c:
    // 0x607c2c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607c2cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607C2C raw=0x00000001");
label_607c30:
    // 0x607c30: 0x656c6573  daddiu      $t4, $t3, 0x6573
    ctx->pc = 0x607c30u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25971);
label_607c34:
    // 0x607c34: 0x7463  .word       0x00007463                   # negu        $t6, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607c34u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_607c38:
    // 0x607c38: 0xff000000  sd          $zero, 0x0($t8)
    ctx->pc = 0x607c38u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 0));
label_607c3c:
    // 0x607c3c: 0xff000000  sd          $zero, 0x0($t8)
    ctx->pc = 0x607c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 0));
label_607c40:
    // 0x607c40: 0x6d6f6f72  ldr         $t7, 0x6F72($t3)
    ctx->pc = 0x607c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28530); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_607c44:
    // 0x607c44: 0x0  nop
    ctx->pc = 0x607c44u;
    // NOP
label_607c48:
    // 0x607c48: 0x5b20  .word       0x00005B20                   # add         $t3, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607c48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_607c4c:
    // 0x607c4c: 0x5d  .word       0x0000005D                   # dmultu      $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607c4cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x607C4C raw=0x0000005D");
label_607c50:
    // 0x607c50: 0x746567  .word       0x00746567                   # nor         $t4, $v1, $s4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607c50u;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 20)));
label_607c54:
    // 0x607c54: 0x0  nop
    ctx->pc = 0x607c54u;
    // NOP
label_607c58:
    // 0x607c58: 0x6e696170  ldr         $t1, 0x6170($s3)
    ctx->pc = 0x607c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24944); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_607c5c:
    // 0x607c5c: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x607c5cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607c60:
    // 0x607c60: 0x756e656d  .word       0x756E656D                   # INVALID     $t3, $t6, 0x656D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607c60u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x607C60 raw=0x756E656D");
label_607c64:
    // 0x607c64: 0x0  nop
    ctx->pc = 0x607c64u;
    // NOP
label_607c68:
    // 0x607c68: 0x6f727265  ldr         $s2, 0x7265($k1)
    ctx->pc = 0x607c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_607c6c:
    // 0x607c6c: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x607c6cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607c70:
    // 0x607c70: 0xff000000  sd          $zero, 0x0($t8)
    ctx->pc = 0x607c70u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 0));
label_607c74:
    // 0x607c74: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x607c74u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_607c78:
    // 0x607c78: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607c78u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607C78 raw=0x00000001");
label_607c7c:
    // 0x607c7c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607c7cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607C7C raw=0x00000001");
label_607c80:
    // 0x607c80: 0x0  nop
    ctx->pc = 0x607c80u;
    // NOP
label_607c84:
    // 0x607c84: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607c84u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607C84 raw=0x00000001");
label_607c88:
    // 0x607c88: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607c88u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607C88 raw=0x00000001");
label_607c8c:
    // 0x607c8c: 0x0  nop
    ctx->pc = 0x607c8cu;
    // NOP
label_607c90:
    // 0x607c90: 0x4c5f474d  .word       0x4C5F474D                   # INVALID     $v0, $ra, 0x474D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607c90u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x607C90 raw=0x4C5F474D");
label_607c94:
    // 0x607c94: 0x44414f  .word       0x0044414F                   # sync # 00444000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607c94u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_607c98:
    // 0x607c98: 0x6c5f676d  ldr         $ra, 0x676D($v0)
    ctx->pc = 0x607c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 26477); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_607c9c:
    // 0x607c9c: 0x64616f  .word       0x0064616F                   # dsubu       $t4, $v1, $a0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607c9cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
label_607ca0:
    // 0x607ca0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607ca0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607CA0 raw=0x00000001");
label_607ca4:
    // 0x607ca4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607ca4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607CA4 raw=0x00000001");
label_607ca8:
    // 0x607ca8: 0x0  nop
    ctx->pc = 0x607ca8u;
    // NOP
label_607cac:
    // 0x607cac: 0xff000000  sd          $zero, 0x0($t8)
    ctx->pc = 0x607cacu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 0));
label_607cb0:
    // 0x607cb0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x607cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_607cb4:
    // 0x607cb4: 0x7472  tlt         $zero, $zero, 465
    ctx->pc = 0x607cb4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607cb8:
    // 0x607cb8: 0x70786966  .word       0x70786966                   # INVALID     $v1, $t8, 0x6966 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x607cb8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x607CB8 raw=0x70786966");
label_607cbc:
    // 0x607cbc: 0x736f  .word       0x0000736F                   # dsubu       $t6, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607cbcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_607cc0:
    // 0x607cc0: 0x7525  .word       0x00007525                   # move        $t6, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607cc0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_607cc4:
    // 0x607cc4: 0x0  nop
    ctx->pc = 0x607cc4u;
    // NOP
label_607cc8:
    // 0x607cc8: 0x73786966  .word       0x73786966                   # INVALID     $k1, $t8, 0x6966 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x607cc8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x607CC8 raw=0x73786966");
label_607ccc:
    // 0x607ccc: 0x657a69  .word       0x00657A69                   # mtsa        $v1 # 00057A40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x607cccu;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_607cd0:
    // 0x607cd0: 0x6625  .word       0x00006625                   # move        $t4, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607cd0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_607cd4:
    // 0x607cd4: 0x0  nop
    ctx->pc = 0x607cd4u;
    // NOP
label_607cd8:
    // 0x607cd8: 0x7473756a  .word       0x7473756A                   # INVALID     $v1, $s3, 0x756A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607cd8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x607CD8 raw=0x7473756A");
label_607cdc:
    // 0x607cdc: 0x796669  .word       0x00796669                   # mtsa        $v1 # 00196640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x607cdcu;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_607ce0:
    // 0x607ce0: 0x48474952  .word       0x48474952                   # cfc2.ni     $a3, $vi9 # 00000152 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x607ce0u;
    SET_GPR_U32(ctx, 7, static_cast<uint32_t>(ctx->vi[9]));
label_607ce4:
    // 0x607ce4: 0x54  .word       0x00000054                   # dsllv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607ce4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_607ce8:
    // 0x607ce8: 0x504f54  .word       0x00504F54                   # dsllv       $t1, $s0, $v0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607ce8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 16) << (GPR_U32(ctx, 2) & 0x3F));
label_607cec:
    // 0x607cec: 0x0  nop
    ctx->pc = 0x607cecu;
    // NOP
label_607cf0:
    // 0x607cf0: 0x544e4543  bnel        $v0, $t6, . + 4 + (0x4543 << 2)
label_607cf4:
    if (ctx->pc == 0x607CF4u) {
        ctx->pc = 0x607CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x607CF0u;
        // 0x607cf4: 0x585245  .word       0x00585245                   # INVALID     $v0, $t8, 0x5245 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x607CF4 raw=0x00585245");
        ctx->in_delay_slot = false;
        ctx->pc = 0x607CF8u;
        goto label_607cf8;
    }
    ctx->pc = 0x607CF0u;
    {
        const bool branch_taken_0x607cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        if (branch_taken_0x607cf0) {
            ctx->pc = 0x607CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x607CF0u;
            // 0x607cf4: 0x585245  .word       0x00585245                   # INVALID     $v0, $t8, 0x5245 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x607CF4 raw=0x00585245");
            ctx->in_delay_slot = false;
            ctx->pc = 0x619200u;
            return;
        }
    }
    ctx->pc = 0x607CF8u;
label_607cf8:
    // 0x607cf8: 0x544e4543  bnel        $v0, $t6, . + 4 + (0x4543 << 2)
label_607cfc:
    if (ctx->pc == 0x607CFCu) {
        ctx->pc = 0x607CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x607CF8u;
        // 0x607cfc: 0x595245  .word       0x00595245                   # INVALID     $v0, $t9, 0x5245 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x607CFC raw=0x00595245");
        ctx->in_delay_slot = false;
        ctx->pc = 0x607D00u;
        goto label_607d00;
    }
    ctx->pc = 0x607CF8u;
    {
        const bool branch_taken_0x607cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        if (branch_taken_0x607cf8) {
            ctx->pc = 0x607CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x607CF8u;
            // 0x607cfc: 0x595245  .word       0x00595245                   # INVALID     $v0, $t9, 0x5245 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x607CFC raw=0x00595245");
            ctx->in_delay_slot = false;
            ctx->pc = 0x619208u;
            return;
        }
    }
    ctx->pc = 0x607D00u;
label_607d00:
    // 0x607d00: 0x4d524f4e  .word       0x4D524F4E                   # INVALID     $t2, $s2, 0x4F4E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607d00u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x607D00 raw=0x4D524F4E");
label_607d04:
    // 0x607d04: 0x4c41  .word       0x00004C41                   # INVALID     $zero, $zero, 0x4C41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607d04u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607D04 raw=0x00004C41");
label_607d08:
    // 0x607d08: 0x74786574  .word       0x74786574                   # INVALID     $v1, $t8, 0x6574 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607d08u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x607D08 raw=0x74786574");
label_607d0c:
    // 0x607d0c: 0x0  nop
    ctx->pc = 0x607d0cu;
    // NOP
label_607d10:
    // 0x607d10: 0x7366666f  .word       0x7366666F                   # INVALID     $k1, $a2, 0x666F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x607d10u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x607D10 raw=0x7366666F");
label_607d14:
    // 0x607d14: 0x7465  .word       0x00007465                   # move        $t6, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607d14u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_607d18:
    // 0x607d18: 0x25206625  addiu       $zero, $t1, 0x6625
    ctx->pc = 0x607d18u;
    // NOP (addiu $zero, ...)
label_607d1c:
    // 0x607d1c: 0x66  .word       0x00000066                   # xor         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607d1cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_607d20:
    // 0x607d20: 0x67616d69  daddiu      $at, $k1, 0x6D69
    ctx->pc = 0x607d20u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28009);
label_607d24:
    // 0x607d24: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607d24u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_607d28:
    // 0x607d28: 0x6d746962  ldr         $s4, 0x6962($t3)
    ctx->pc = 0x607d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26978); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_607d2c:
    // 0x607d2c: 0x7061  .word       0x00007061                   # addu        $t6, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607d2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_607d30:
    // 0x607d30: 0x30257325  andi        $a1, $at, 0x7325
    ctx->pc = 0x607d30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)29477);
label_607d34:
    // 0x607d34: 0x6432  tlt         $zero, $zero, 400
    ctx->pc = 0x607d34u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607d38:
    // 0x607d38: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607d38u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607D38 raw=0x00000001");
label_607d3c:
    // 0x607d3c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607d3cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607D3C raw=0x00000001");
label_607d40:
    // 0x607d40: 0x0  nop
    ctx->pc = 0x607d40u;
    // NOP
label_607d44:
    // 0x607d44: 0x0  nop
    ctx->pc = 0x607d44u;
    // NOP
label_607d48:
    // 0x607d48: 0x69766e69  ldl         $s6, 0x6E69($t3)
    ctx->pc = 0x607d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28265); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
label_607d4c:
    // 0x607d4c: 0x6574  teq         $zero, $zero, 405
    ctx->pc = 0x607d4cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607d50:
    // 0x607d50: 0x69766e49  ldl         $s6, 0x6E49($t3)
    ctx->pc = 0x607d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28233); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
label_607d54:
    // 0x607d54: 0x6574  teq         $zero, $zero, 405
    ctx->pc = 0x607d54u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607d58:
    // 0x607d58: 0x0  nop
    ctx->pc = 0x607d58u;
    // NOP
label_607d5c:
    // 0x607d5c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607d5cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607D5C raw=0x00000001");
label_607d60:
    // 0x607d60: 0x756e696d  .word       0x756E696D                   # INVALID     $t3, $t6, 0x696D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607d60u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x607D60 raw=0x756E696D");
label_607d64:
    // 0x607d64: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x607d64u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607d68:
    // 0x607d68: 0x312d  .word       0x0000312D                   # daddu       $a2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_607d6c:
    // 0x607d6c: 0x70616d  .word       0x0070616D                   # daddu       $t4, $v1, $s0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607d6cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 16));
label_607d70:
    // 0x607d70: 0x3dcccccd  .word       0x3DCCCCCD                   # lui         $t4, 0xCCCD # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607d70u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_607d74:
    // 0x607d74: 0x3dcccccd  .word       0x3DCCCCCD                   # lui         $t4, 0xCCCD # 01C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607d74u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_607d78:
    // 0x607d78: 0x0  nop
    ctx->pc = 0x607d78u;
    // NOP
label_607d7c:
    // 0x607d7c: 0x0  nop
    ctx->pc = 0x607d7cu;
    // NOP
label_607d80:
    // 0x607d80: 0x48747874  .word       0x48747874                   # INVALID     $v1, $s4, 0x7874 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x607d80u;
    throw std::runtime_error("Unhandled COP2 format: 0x3 at 0x607D80 raw=0x48747874");
label_607d84:
    // 0x607d84: 0x706c65  .word       0x00706C65                   # or          $t5, $v1, $s0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607d84u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
label_607d88:
    // 0x607d88: 0x5f6e7462  .word       0x5F6E7462                   # bgtzl       $k1, . + 4 + (0x7462 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_607d8c:
    if (ctx->pc == 0x607D8Cu) {
        ctx->pc = 0x607D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x607D88u;
        // 0x607d8c: 0x3030  tge         $zero, $zero, 192 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x607D90u;
        goto label_607d90;
    }
    ctx->pc = 0x607D88u;
    {
        const bool branch_taken_0x607d88 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x607d88) {
            ctx->pc = 0x607D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x607D88u;
            // 0x607d8c: 0x3030  tge         $zero, $zero, 192 (Delay Slot)
            if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x624F14u;
            return;
        }
    }
    ctx->pc = 0x607D90u;
label_607d90:
    // 0x607d90: 0x5f6e7462  .word       0x5F6E7462                   # bgtzl       $k1, . + 4 + (0x7462 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_607d94:
    if (ctx->pc == 0x607D94u) {
        ctx->pc = 0x607D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x607D90u;
        // 0x607d94: 0x3130  tge         $zero, $zero, 196 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x607D98u;
        goto label_607d98;
    }
    ctx->pc = 0x607D90u;
    {
        const bool branch_taken_0x607d90 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x607d90) {
            ctx->pc = 0x607D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x607D90u;
            // 0x607d94: 0x3130  tge         $zero, $zero, 196 (Delay Slot)
            if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x624F1Cu;
            return;
        }
    }
    ctx->pc = 0x607D98u;
label_607d98:
    // 0x607d98: 0x5f6e7462  .word       0x5F6E7462                   # bgtzl       $k1, . + 4 + (0x7462 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_607d9c:
    if (ctx->pc == 0x607D9Cu) {
        ctx->pc = 0x607D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x607D98u;
        // 0x607d9c: 0x3230  tge         $zero, $zero, 200 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x607DA0u;
        goto label_607da0;
    }
    ctx->pc = 0x607D98u;
    {
        const bool branch_taken_0x607d98 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x607d98) {
            ctx->pc = 0x607D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x607D98u;
            // 0x607d9c: 0x3230  tge         $zero, $zero, 200 (Delay Slot)
            if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x624F24u;
            return;
        }
    }
    ctx->pc = 0x607DA0u;
label_607da0:
    // 0x607da0: 0x5f6e7462  .word       0x5F6E7462                   # bgtzl       $k1, . + 4 + (0x7462 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_607da4:
    if (ctx->pc == 0x607DA4u) {
        ctx->pc = 0x607DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x607DA0u;
        // 0x607da4: 0x3330  tge         $zero, $zero, 204 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x607DA8u;
        goto label_607da8;
    }
    ctx->pc = 0x607DA0u;
    {
        const bool branch_taken_0x607da0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x607da0) {
            ctx->pc = 0x607DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x607DA0u;
            // 0x607da4: 0x3330  tge         $zero, $zero, 204 (Delay Slot)
            if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x624F2Cu;
            return;
        }
    }
    ctx->pc = 0x607DA8u;
label_607da8:
    // 0x607da8: 0x0  nop
    ctx->pc = 0x607da8u;
    // NOP
label_607dac:
    // 0x607dac: 0x0  nop
    ctx->pc = 0x607dacu;
    // NOP
label_607db0:
    // 0x607db0: 0x626f6c67  daddi       $t7, $s3, 0x6C67
    ctx->pc = 0x607db0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)27751; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_607db4:
    // 0x607db4: 0x6c61  .word       0x00006C61                   # addu        $t5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607db4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_607db8:
    // 0x607db8: 0x4e3a18  .word       0x004E3A18                   # mult        $a3, $v0, $t6 # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x607db8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_607dbc:
    // 0x607dbc: 0x4e3a30  tge         $v0, $t6, 232
    ctx->pc = 0x607dbcu;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_607dc0:
    // 0x607dc0: 0x43a00000  .word       0x43A00000                   # INVALID     $sp, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x607dc0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1D at 0x607DC0 raw=0x43A00000");
label_607dc4:
    // 0x607dc4: 0x43600000  .word       0x43600000                   # INVALID     $k1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x607dc4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x607DC4 raw=0x43600000");
label_607dc8:
    // 0x607dc8: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_607dcc:
    if (ctx->pc == 0x607DCCu) {
        ctx->pc = 0x607DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x607DC8u;
        // 0x607dcc: 0x6c7464  .word       0x006C7464                   # and         $t6, $v1, $t4 # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) & GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x607DD0u;
        goto label_607dd0;
    }
    ctx->pc = 0x607DC8u;
    {
        const bool branch_taken_0x607dc8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x607dc8) {
            ctx->pc = 0x607DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x607DC8u;
            // 0x607dcc: 0x6c7464  .word       0x006C7464                   # and         $t6, $v1, $t4 # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) & GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x625F9Cu;
            return;
        }
    }
    ctx->pc = 0x607DD0u;
label_607dd0:
    // 0x607dd0: 0x756e696d  .word       0x756E696D                   # INVALID     $t3, $t6, 0x696D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607dd0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x607DD0 raw=0x756E696D");
label_607dd4:
    // 0x607dd4: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x607dd4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607dd8:
    // 0x607dd8: 0x65736572  daddiu      $s3, $t3, 0x6572
    ctx->pc = 0x607dd8u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25970);
label_607ddc:
    // 0x607ddc: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x607ddcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607de0:
    // 0x607de0: 0x3fb33333  .word       0x3FB33333                   # lui         $s3, 0x3333 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607de0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_607de4:
    // 0x607de4: 0x3fb33333  .word       0x3FB33333                   # lui         $s3, 0x3333 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607de4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_607de8:
    // 0x607de8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607de8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_607dec:
    // 0x607dec: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607decu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_607df0:
    // 0x607df0: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607df0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_607df4:
    // 0x607df4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607df4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_607df8:
    // 0x607df8: 0x3f99999a  .word       0x3F99999A                   # lui         $t9, 0x999A # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607df8u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_607dfc:
    // 0x607dfc: 0x3f99999a  .word       0x3F99999A                   # lui         $t9, 0x999A # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607dfcu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_607e00:
    // 0x607e00: 0x6c6c6167  ldr         $t4, 0x6167($v1)
    ctx->pc = 0x607e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24935); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_607e04:
    // 0x607e04: 0x797265  .word       0x00797265                   # or          $t6, $v1, $t9 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607e04u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) | GPR_U64(ctx, 25));
label_607e08:
    // 0x607e08: 0x65736572  daddiu      $s3, $t3, 0x6572
    ctx->pc = 0x607e08u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25970);
label_607e0c:
    // 0x607e0c: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x607e0cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607e10:
    // 0x607e10: 0x2f206425  sltiu       $zero, $t9, 0x6425
    ctx->pc = 0x607e10u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)(int64_t)(int32_t)25637) ? 1 : 0);
label_607e14:
    // 0x607e14: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607e14u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_607e18:
    // 0x607e18: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607e18u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x607E18 raw=0x00000001");
label_607e1c:
    // 0x607e1c: 0x0  nop
    ctx->pc = 0x607e1cu;
    // NOP
label_607e20:
    // 0x607e20: 0x3fb33333  .word       0x3FB33333                   # lui         $s3, 0x3333 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607e20u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_607e24:
    // 0x607e24: 0x3fb33333  .word       0x3FB33333                   # lui         $s3, 0x3333 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607e24u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_607e28:
    // 0x607e28: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607e28u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_607e2c:
    // 0x607e2c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607e2cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_607e30:
    // 0x607e30: 0x6562616c  daddiu      $v0, $t3, 0x616C
    ctx->pc = 0x607e30u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24940);
label_607e34:
    // 0x607e34: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607e34u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_607e38:
    // 0x607e38: 0x6b636162  ldl         $v1, 0x6162($k1)
    ctx->pc = 0x607e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24930); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_607e3c:
    // 0x607e3c: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607e3cu;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_607e40:
    // 0x607e40: 0x0  nop
    ctx->pc = 0x607e40u;
    // NOP
label_607e44:
    // 0x607e44: 0x0  nop
    ctx->pc = 0x607e44u;
    // NOP
label_607e48:
    // 0x607e48: 0x6c5f6373  ldr         $ra, 0x6373($v0)
    ctx->pc = 0x607e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 25459); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_607e4c:
    // 0x607e4c: 0x64616f  .word       0x0064616F                   # dsubu       $t4, $v1, $a0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607e4cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
label_607e50:
    // 0x607e50: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x607e50u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x607E50 raw=0x41A00000");
label_607e54:
    // 0x607e54: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x607e54u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_607e58:
    // 0x607e58: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x607e58u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_607e5c:
    // 0x607e5c: 0x0  nop
    ctx->pc = 0x607e5cu;
    // NOP
label_607e60:
    // 0x607e60: 0x756e656d  .word       0x756E656D                   # INVALID     $t3, $t6, 0x656D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607e60u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x607E60 raw=0x756E656D");
label_607e64:
    // 0x607e64: 0x0  nop
    ctx->pc = 0x607e64u;
    // NOP
label_607e68:
    // 0x607e68: 0x65736572  daddiu      $s3, $t3, 0x6572
    ctx->pc = 0x607e68u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25970);
label_607e6c:
    // 0x607e6c: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x607e6cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607e70:
    // 0x607e70: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_607e74:
    if (ctx->pc == 0x607E74u) {
        ctx->pc = 0x607E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x607E70u;
        // 0x607e74: 0x6c7464  .word       0x006C7464                   # and         $t6, $v1, $t4 # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) & GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x607E78u;
        goto label_607e78;
    }
    ctx->pc = 0x607E70u;
    {
        const bool branch_taken_0x607e70 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x607e70) {
            ctx->pc = 0x607E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x607E70u;
            // 0x607e74: 0x6c7464  .word       0x006C7464                   # and         $t6, $v1, $t4 # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) & GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x626044u;
            return;
        }
    }
    ctx->pc = 0x607E78u;
label_607e78:
    // 0x607e78: 0x30256762  andi        $a1, $at, 0x6762
    ctx->pc = 0x607e78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)26466);
label_607e7c:
    // 0x607e7c: 0x6432  tlt         $zero, $zero, 400
    ctx->pc = 0x607e7cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607e80:
    // 0x607e80: 0x30256762  andi        $a1, $at, 0x6762
    ctx->pc = 0x607e80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)26466);
label_607e84:
    // 0x607e84: 0x626432  tlt         $v1, $v0, 400
    ctx->pc = 0x607e84u;
    if (GPR_S64(ctx, 3) < GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_607e88:
    // 0x607e88: 0x3fb33333  .word       0x3FB33333                   # lui         $s3, 0x3333 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607e88u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_607e8c:
    // 0x607e8c: 0x3fb33333  .word       0x3FB33333                   # lui         $s3, 0x3333 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607e8cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_607e90:
    // 0x607e90: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607e90u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_607e94:
    // 0x607e94: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607e94u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_607e98:
    // 0x607e98: 0x3fb33333  .word       0x3FB33333                   # lui         $s3, 0x3333 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607e98u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_607e9c:
    // 0x607e9c: 0x3fb33333  .word       0x3FB33333                   # lui         $s3, 0x3333 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607e9cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_607ea0:
    // 0x607ea0: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607ea0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_607ea4:
    // 0x607ea4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607ea4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_607ea8:
    // 0x607ea8: 0x617325  .word       0x00617325                   # or          $t6, $v1, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607ea8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) | GPR_U64(ctx, 1));
label_607eac:
    // 0x607eac: 0x0  nop
    ctx->pc = 0x607eacu;
    // NOP
label_607eb0:
    // 0x607eb0: 0x6c6c6167  ldr         $t4, 0x6167($v1)
    ctx->pc = 0x607eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24935); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_607eb4:
    // 0x607eb4: 0x797265  .word       0x00797265                   # or          $t6, $v1, $t9 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607eb4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) | GPR_U64(ctx, 25));
label_607eb8:
    // 0x607eb8: 0x64323025  daddiu      $s2, $at, 0x3025
    ctx->pc = 0x607eb8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)12325);
label_607ebc:
    // 0x607ebc: 0x2525  .word       0x00002525                   # move        $a0, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607ebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_607ec0:
    // 0x607ec0: 0x3fb33333  .word       0x3FB33333                   # lui         $s3, 0x3333 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607ec0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_607ec4:
    // 0x607ec4: 0x3fb33333  .word       0x3FB33333                   # lui         $s3, 0x3333 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607ec4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_607ec8:
    // 0x607ec8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607ec8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_607ecc:
    // 0x607ecc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607eccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_607ed0:
    // 0x607ed0: 0x4b624e5f  .word       0x4B624E5F                   # vminii.xzw  $vf25, $vf9, $I # 00020000 <InstrIdType: R5900_COP2_SPECIAL1>
    ctx->pc = 0x607ed0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[9], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
label_607ed4:
    // 0x607ed4: 0x62  .word       0x00000062                   # neg         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607ed4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_607ed8:
    // 0x607ed8: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_607edc:
    if (ctx->pc == 0x607EDCu) {
        ctx->pc = 0x607EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x607ED8u;
        // 0x607edc: 0x6c7474  teq         $v1, $t4, 465 (Delay Slot)
        if (GPR_U64(ctx, 3) == GPR_U64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x607EE0u;
        goto label_607ee0;
    }
    ctx->pc = 0x607ED8u;
    {
        const bool branch_taken_0x607ed8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x607ed8) {
            ctx->pc = 0x607EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x607ED8u;
            // 0x607edc: 0x6c7474  teq         $v1, $t4, 465 (Delay Slot)
            if (GPR_U64(ctx, 3) == GPR_U64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x6260ACu;
            return;
        }
    }
    ctx->pc = 0x607EE0u;
label_607ee0:
    // 0x607ee0: 0x6c5f676d  ldr         $ra, 0x676D($v0)
    ctx->pc = 0x607ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 26477); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
label_607ee4:
    // 0x607ee4: 0x64616f  .word       0x0064616F                   # dsubu       $t4, $v1, $a0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607ee4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
label_607ee8:
    // 0x607ee8: 0x3ecccccd  .word       0x3ECCCCCD                   # lui         $t4, 0xCCCD # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607ee8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_607eec:
    // 0x607eec: 0x3f7d70a4  .word       0x3F7D70A4                   # lui         $sp, 0x70A4 # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607eecu;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)28836 << 16));
label_607ef0:
    // 0x607ef0: 0x6562676d  daddiu      $v0, $t3, 0x676D
    ctx->pc = 0x607ef0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26477);
label_607ef4:
    // 0x607ef4: 0x6e6967  .word       0x006E6967                   # nor         $t5, $v1, $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607ef4u;
    SET_GPR_U64(ctx, 13, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 14)));
label_607ef8:
    // 0x607ef8: 0x4f47  .word       0x00004F47                   # srav        $t1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607ef8u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_607efc:
    // 0x607efc: 0x0  nop
    ctx->pc = 0x607efcu;
    // NOP
label_607f00:
    // 0x607f00: 0x65796f76  daddiu      $t9, $t3, 0x6F76
    ctx->pc = 0x607f00u;
    SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28534);
label_607f04:
    // 0x607f04: 0x7275  .word       0x00007275                   # INVALID     $zero, $zero, 0x7275 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607f04u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x607F04 raw=0x00007275");
label_607f08:
    // 0x607f08: 0x6e697264  ldr         $t1, 0x7264($s3)
    ctx->pc = 0x607f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_607f0c:
    // 0x607f0c: 0x6b  .word       0x0000006B                   # sltu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607f0cu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_607f10:
    // 0x607f10: 0x6377  .word       0x00006377                   # INVALID     $zero, $zero, 0x6377 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607f10u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x607F10 raw=0x00006377");
label_607f14:
    // 0x607f14: 0x0  nop
    ctx->pc = 0x607f14u;
    // NOP
label_607f18:
    // 0x607f18: 0x70616c73  .word       0x70616C73                   # INVALID     $v1, $at, 0x6C73 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x607f18u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x607F18 raw=0x70616C73");
label_607f1c:
    // 0x607f1c: 0x0  nop
    ctx->pc = 0x607f1cu;
    // NOP
label_607f20:
    // 0x607f20: 0x6f67656e  ldr         $a3, 0x656E($k1)
    ctx->pc = 0x607f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25966); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_607f24:
    // 0x607f24: 0x0  nop
    ctx->pc = 0x607f24u;
    // NOP
label_607f28:
    // 0x607f28: 0x65656873  daddiu      $a1, $t3, 0x6873
    ctx->pc = 0x607f28u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26739);
label_607f2c:
    // 0x607f2c: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x607f2cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607f30:
    // 0x607f30: 0x6b677562  ldl         $a3, 0x7562($k1)
    ctx->pc = 0x607f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30050); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_607f34:
    // 0x607f34: 0x0  nop
    ctx->pc = 0x607f34u;
    // NOP
label_607f38:
    // 0x607f38: 0x6f6d6973  ldr         $t5, 0x6973($k1)
    ctx->pc = 0x607f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26995); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_607f3c:
    // 0x607f3c: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607f3cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_607f40:
    // 0x607f40: 0x31786573  andi        $t8, $t3, 0x6573
    ctx->pc = 0x607f40u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)25971);
label_607f44:
    // 0x607f44: 0x0  nop
    ctx->pc = 0x607f44u;
    // NOP
label_607f48:
    // 0x607f48: 0x746f7265  .word       0x746F7265                   # INVALID     $v1, $t7, 0x7265 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607f48u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x607F48 raw=0x746F7265");
label_607f4c:
    // 0x607f4c: 0x6369  .word       0x00006369                   # mtsa        $zero # 00006340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x607f4cu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_607f50:
    // 0x607f50: 0x616a7970  daddi       $t2, $t3, 0x7970
    ctx->pc = 0x607f50u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)31088; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, res); }
label_607f54:
    // 0x607f54: 0x616d  .word       0x0000616D                   # daddu       $t4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607f54u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_607f58:
    // 0x607f58: 0x696d6f76  ldl         $t5, 0x6F76($t3)
    ctx->pc = 0x607f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28534); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
label_607f5c:
    // 0x607f5c: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x607f5cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607f60:
    // 0x607f60: 0x636f7070  daddi       $t7, $k1, 0x7070
    ctx->pc = 0x607f60u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)28784; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_607f64:
    // 0x607f64: 0x74656b  .word       0x0074656B                   # sltu        $t4, $v1, $s4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607f64u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_607f68:
    // 0x607f68: 0x62626f72  daddi       $v0, $s3, 0x6F72
    ctx->pc = 0x607f68u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)28530; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_607f6c:
    // 0x607f6c: 0x797265  .word       0x00797265                   # or          $t6, $v1, $t9 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607f6cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) | GPR_U64(ctx, 25));
label_607f70:
    // 0x607f70: 0x6d616c66  ldr         $at, 0x6C66($t3)
    ctx->pc = 0x607f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 27750); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_607f74:
    // 0x607f74: 0x7962  .word       0x00007962                   # neg         $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607f74u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_607f78:
    // 0x607f78: 0x74756c67  .word       0x74756C67                   # INVALID     $v1, $s5, 0x6C67 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607f78u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x607F78 raw=0x74756C67");
label_607f7c:
    // 0x607f7c: 0x736972  tlt         $v1, $s3, 421
    ctx->pc = 0x607f7cu;
    if (GPR_S64(ctx, 3) < GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_607f80:
    // 0x607f80: 0x6e696176  ldr         $t1, 0x6176($s3)
    ctx->pc = 0x607f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24950); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_607f84:
    // 0x607f84: 0x0  nop
    ctx->pc = 0x607f84u;
    // NOP
label_607f88:
    // 0x607f88: 0x6f77676d  ldr         $s7, 0x676D($k1)
    ctx->pc = 0x607f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26477); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem >> shift)); }
label_607f8c:
    // 0x607f8c: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607f8cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_607f90:
    // 0x607f90: 0x6f6c676d  ldr         $t4, 0x676D($k1)
    ctx->pc = 0x607f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26477); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_607f94:
    // 0x607f94: 0x7473  tltu        $zero, $zero, 465
    ctx->pc = 0x607f94u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607f98:
    // 0x607f98: 0x4d414723  .word       0x4D414723                   # INVALID     $t2, $at, 0x4723 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607f98u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x607F98 raw=0x4D414723");
label_607f9c:
    // 0x607f9c: 0x45  .word       0x00000045                   # INVALID     $zero, $zero, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607f9cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x607F9C raw=0x00000045");
label_607fa0:
    // 0x607fa0: 0x7478742e  .word       0x7478742E                   # INVALID     $v1, $t8, 0x742E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x607fa0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x607FA0 raw=0x7478742E");
label_607fa4:
    // 0x607fa4: 0x0  nop
    ctx->pc = 0x607fa4u;
    // NOP
label_607fa8:
    // 0x607fa8: 0x6c65685f  ldr         $a1, 0x685F($v1)
    ctx->pc = 0x607fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26719); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_607fac:
    // 0x607fac: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x607facu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_607fb0:
    // 0x607fb0: 0x30747874  andi        $s4, $v1, 0x7874
    ctx->pc = 0x607fb0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)30836);
label_607fb4:
    // 0x607fb4: 0x0  nop
    ctx->pc = 0x607fb4u;
    // NOP
label_607fb8:
    // 0x607fb8: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_607fbc:
    if (ctx->pc == 0x607FBCu) {
        ctx->pc = 0x607FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x607FB8u;
        // 0x607fbc: 0x6770  tge         $zero, $zero, 413 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x607FC0u;
        goto label_607fc0;
    }
    ctx->pc = 0x607FB8u;
    {
        const bool branch_taken_0x607fb8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x607fb8) {
            ctx->pc = 0x607FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x607FB8u;
            // 0x607fbc: 0x6770  tge         $zero, $zero, 413 (Delay Slot)
            if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x62618Cu;
            return;
        }
    }
    ctx->pc = 0x607FC0u;
label_607fc0:
    // 0x607fc0: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_607fc4:
    if (ctx->pc == 0x607FC4u) {
        ctx->pc = 0x607FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x607FC0u;
        // 0x607fc4: 0x6762  .word       0x00006762                   # neg         $t4, $zero # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x607FC8u;
        goto label_607fc8;
    }
    ctx->pc = 0x607FC0u;
    {
        const bool branch_taken_0x607fc0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x607fc0) {
            ctx->pc = 0x607FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x607FC0u;
            // 0x607fc4: 0x6762  .word       0x00006762                   # neg         $t4, $zero # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x623568u;
            return;
        }
    }
    ctx->pc = 0x607FC8u;
label_607fc8:
    // 0x607fc8: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_607fcc:
    if (ctx->pc == 0x607FCCu) {
        ctx->pc = 0x607FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x607FC8u;
        // 0x607fcc: 0x676c  .word       0x0000676C                   # dadd        $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x607FD0u;
        goto label_607fd0;
    }
    ctx->pc = 0x607FC8u;
    {
        const bool branch_taken_0x607fc8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x607fc8) {
            ctx->pc = 0x607FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x607FC8u;
            // 0x607fcc: 0x676c  .word       0x0000676C                   # dadd        $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x623570u;
            return;
        }
    }
    ctx->pc = 0x607FD0u;
label_607fd0:
    // 0x607fd0: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_607fd4:
    if (ctx->pc == 0x607FD4u) {
        ctx->pc = 0x607FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x607FD0u;
        // 0x607fd4: 0x7866  .word       0x00007866                   # xor         $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x607FD8u;
        goto label_607fd8;
    }
    ctx->pc = 0x607FD0u;
    {
        const bool branch_taken_0x607fd0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x607fd0) {
            ctx->pc = 0x607FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x607FD0u;
            // 0x607fd4: 0x7866  .word       0x00007866                   # xor         $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x6261A4u;
            return;
        }
    }
    ctx->pc = 0x607FD8u;
label_607fd8:
    // 0x607fd8: 0x25256425  addiu       $a1, $t1, 0x6425
    ctx->pc = 0x607fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 25637));
label_607fdc:
    // 0x607fdc: 0x29  mtsa        $zero
    ctx->pc = 0x607fdcu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_607fe0:
    // 0x607fe0: 0x0  nop
    ctx->pc = 0x607fe0u;
    // NOP
label_607fe4:
    // 0x607fe4: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x607fe4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x607FE4 raw=0x42C80000");
label_607fe8:
    // 0x607fe8: 0x64252b  .word       0x0064252B                   # sltu        $a0, $v1, $a0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x607fe8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_607fec:
    // 0x607fec: 0x0  nop
    ctx->pc = 0x607fecu;
    // NOP
label_607ff0:
    // 0x607ff0: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_607ff4:
    if (ctx->pc == 0x607FF4u) {
        ctx->pc = 0x607FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x607FF0u;
        // 0x607ff4: 0x7463  .word       0x00007463                   # negu        $t6, $zero # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x607FF8u;
        goto label_607ff8;
    }
    ctx->pc = 0x607FF0u;
    {
        const bool branch_taken_0x607ff0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x607ff0) {
            ctx->pc = 0x607FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x607FF0u;
            // 0x607ff4: 0x7463  .word       0x00007463                   # negu        $t6, $zero # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x6261C4u;
            return;
        }
    }
    ctx->pc = 0x607FF8u;
label_607ff8:
    // 0x607ff8: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_607ffc:
    if (ctx->pc == 0x607FFCu) {
        ctx->pc = 0x607FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x607FF8u;
        // 0x607ffc: 0x746d  .word       0x0000746D                   # daddu       $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x608000u;
        goto label_608000;
    }
    ctx->pc = 0x607FF8u;
    {
        const bool branch_taken_0x607ff8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x607ff8) {
            ctx->pc = 0x607FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x607FF8u;
            // 0x607ffc: 0x746d  .word       0x0000746D                   # daddu       $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x6261CCu;
            return;
        }
    }
    ctx->pc = 0x608000u;
label_608000:
    // 0x608000: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_608004:
    if (ctx->pc == 0x608004u) {
        ctx->pc = 0x608004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x608000u;
        // 0x608004: 0x6762  .word       0x00006762                   # neg         $t4, $zero # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x608008u;
        goto label_608008;
    }
    ctx->pc = 0x608000u;
    {
        const bool branch_taken_0x608000 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x608000) {
            ctx->pc = 0x608004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x608000u;
            // 0x608004: 0x6762  .word       0x00006762                   # neg         $t4, $zero # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x6235A8u;
            return;
        }
    }
    ctx->pc = 0x608008u;
label_608008:
    // 0x608008: 0x626f6c67  daddi       $t7, $s3, 0x6C67
    ctx->pc = 0x608008u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)27751; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_60800c:
    // 0x60800c: 0x6c61  .word       0x00006C61                   # addu        $t5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60800cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_608010:
    // 0x608010: 0x732e7325  .word       0x732E7325                   # INVALID     $t9, $t6, 0x7325 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608010u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x608010 raw=0x732E7325");
label_608014:
    // 0x608014: 0x6e69  .word       0x00006E69                   # mtsa        $zero # 00006E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x608014u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_608018:
    // 0x608018: 0x5f6c6572  .word       0x5F6C6572                   # bgtzl       $k1, . + 4 + (0x6572 << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_60801c:
    if (ctx->pc == 0x60801Cu) {
        ctx->pc = 0x60801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x608018u;
        // 0x60801c: 0x3172  tlt         $zero, $zero, 197 (Delay Slot)
        if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x608020u;
        goto label_608020;
    }
    ctx->pc = 0x608018u;
    {
        const bool branch_taken_0x608018 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x608018) {
            ctx->pc = 0x60801Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x608018u;
            // 0x60801c: 0x3172  tlt         $zero, $zero, 197 (Delay Slot)
            if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x6215E4u;
            return;
        }
    }
    ctx->pc = 0x608020u;
label_608020:
    // 0x608020: 0x5f6c6572  .word       0x5F6C6572                   # bgtzl       $k1, . + 4 + (0x6572 << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_608024:
    if (ctx->pc == 0x608024u) {
        ctx->pc = 0x608024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x608020u;
        // 0x608024: 0x7866  .word       0x00007866                   # xor         $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x608028u;
        goto label_608028;
    }
    ctx->pc = 0x608020u;
    {
        const bool branch_taken_0x608020 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x608020) {
            ctx->pc = 0x608024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x608020u;
            // 0x608024: 0x7866  .word       0x00007866                   # xor         $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x6215ECu;
            return;
        }
    }
    ctx->pc = 0x608028u;
label_608028:
    // 0x608028: 0x5f63706e  .word       0x5F63706E                   # bgtzl       $k1, . + 4 + (0x706E << 2) # 00030000 <InstrIdType: CPU_NORMAL>
label_60802c:
    if (ctx->pc == 0x60802Cu) {
        ctx->pc = 0x60802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x608028u;
        // 0x60802c: 0x656761  .word       0x00656761                   # addu        $t4, $v1, $a1 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x608030u;
        goto label_608030;
    }
    ctx->pc = 0x608028u;
    {
        const bool branch_taken_0x608028 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x608028) {
            ctx->pc = 0x60802Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x608028u;
            // 0x60802c: 0x656761  .word       0x00656761                   # addu        $t4, $v1, $a1 # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x6241E4u;
            return;
        }
    }
    ctx->pc = 0x608030u;
label_608030:
    // 0x608030: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_608034:
    if (ctx->pc == 0x608034u) {
        ctx->pc = 0x608034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x608030u;
        // 0x608034: 0x656741  .word       0x00656741                   # INVALID     $v1, $a1, 0x6741 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x608034 raw=0x00656741");
        ctx->in_delay_slot = false;
        ctx->pc = 0x608038u;
        goto label_608038;
    }
    ctx->pc = 0x608030u;
    {
        const bool branch_taken_0x608030 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x608030) {
            ctx->pc = 0x608034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x608030u;
            // 0x608034: 0x656741  .word       0x00656741                   # INVALID     $v1, $a1, 0x6741 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x608034 raw=0x00656741");
            ctx->in_delay_slot = false;
            ctx->pc = 0x61C0CCu;
            return;
        }
    }
    ctx->pc = 0x608038u;
label_608038:
    // 0x608038: 0x643325  .word       0x00643325                   # or          $a2, $v1, $a0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608038u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_60803c:
    // 0x60803c: 0x0  nop
    ctx->pc = 0x60803cu;
    // NOP
label_608040:
    // 0x608040: 0x756e696d  .word       0x756E696D                   # INVALID     $t3, $t6, 0x696D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608040u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x608040 raw=0x756E696D");
label_608044:
    // 0x608044: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x608044u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608048:
    // 0x608048: 0x0  nop
    ctx->pc = 0x608048u;
    // NOP
label_60804c:
    // 0x60804c: 0x0  nop
    ctx->pc = 0x60804cu;
    // NOP
label_608050:
    // 0x608050: 0x6b726f66  ldl         $s2, 0x6F66($k1)
    ctx->pc = 0x608050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28518); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_608054:
    // 0x608054: 0x7525  .word       0x00007525                   # move        $t6, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608054u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608058:
    // 0x608058: 0x0  nop
    ctx->pc = 0x608058u;
    // NOP
label_60805c:
    // 0x60805c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60805cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_608060:
    // 0x608060: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608060u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608064:
    // 0x608064: 0x0  nop
    ctx->pc = 0x608064u;
    // NOP
label_608068:
    // 0x608068: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608068u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_60806c:
    // 0x60806c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60806cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_608070:
    // 0x608070: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_608074:
    if (ctx->pc == 0x608074u) {
        ctx->pc = 0x608074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x608070u;
        // 0x608074: 0x6366  .word       0x00006366                   # xor         $t4, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x608078u;
        goto label_608078;
    }
    ctx->pc = 0x608070u;
    {
        const bool branch_taken_0x608070 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x608070) {
            ctx->pc = 0x608074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x608070u;
            // 0x608074: 0x6366  .word       0x00006366                   # xor         $t4, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x623618u;
            return;
        }
    }
    ctx->pc = 0x608078u;
label_608078:
    // 0x608078: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_60807c:
    if (ctx->pc == 0x60807Cu) {
        ctx->pc = 0x60807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x608078u;
        // 0x60807c: 0x6366  .word       0x00006366                   # xor         $t4, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x608080u;
        goto label_608080;
    }
    ctx->pc = 0x608078u;
    {
        const bool branch_taken_0x608078 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x608078) {
            ctx->pc = 0x60807Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x608078u;
            // 0x60807c: 0x6366  .word       0x00006366                   # xor         $t4, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x62624Cu;
            return;
        }
    }
    ctx->pc = 0x608080u;
label_608080:
    // 0x608080: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_608084:
    if (ctx->pc == 0x608084u) {
        ctx->pc = 0x608084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x608080u;
        // 0x608084: 0x7366  .word       0x00007366                   # xor         $t6, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x608088u;
        goto label_608088;
    }
    ctx->pc = 0x608080u;
    {
        const bool branch_taken_0x608080 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x608080) {
            ctx->pc = 0x608084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x608080u;
            // 0x608084: 0x7366  .word       0x00007366                   # xor         $t6, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x623628u;
            return;
        }
    }
    ctx->pc = 0x608088u;
label_608088:
    // 0x608088: 0x756e696d  .word       0x756E696D                   # INVALID     $t3, $t6, 0x696D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608088u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x608088 raw=0x756E696D");
label_60808c:
    // 0x60808c: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x60808cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608090:
    // 0x608090: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x608090u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x608090 raw=0x42480000");
label_608094:
    // 0x608094: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x608094u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x608094 raw=0x42C80000");
label_608098:
    // 0x608098: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x608098u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x608098 raw=0x42480000");
label_60809c:
    // 0x60809c: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x60809cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x60809C raw=0x42480000");
label_6080a0:
    // 0x6080a0: 0x7472  tlt         $zero, $zero, 465
    ctx->pc = 0x6080a0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6080a4:
    // 0x6080a4: 0x6272  tlt         $zero, $zero, 393
    ctx->pc = 0x6080a4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6080a8:
    // 0x6080a8: 0x41700000  .word       0x41700000                   # INVALID     $t3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x6080a8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x6080A8 raw=0x41700000");
label_6080ac:
    // 0x6080ac: 0xfeffffff  sd          $ra, -0x1($s7)
    ctx->pc = 0x6080acu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 4294967295), GPR_U64(ctx, 31));
label_6080b0:
    // 0x6080b0: 0x7466656c  .word       0x7466656C                   # INVALID     $v1, $a2, 0x656C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6080b0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x6080B0 raw=0x7466656C");
label_6080b4:
    // 0x6080b4: 0x0  nop
    ctx->pc = 0x6080b4u;
    // NOP
label_6080b8:
    // 0x6080b8: 0x746e6563  .word       0x746E6563                   # INVALID     $v1, $t6, 0x6563 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6080b8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x6080B8 raw=0x746E6563");
label_6080bc:
    // 0x6080bc: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6080bcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_6080c0:
    // 0x6080c0: 0x68676972  ldl         $a3, 0x6972($v1)
    ctx->pc = 0x6080c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26994); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_6080c4:
    // 0x6080c4: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x6080c4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6080c8:
    // 0x6080c8: 0x6f6c6f63  ldr         $t4, 0x6F63($k1)
    ctx->pc = 0x6080c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_6080cc:
    // 0x6080cc: 0x3d72  tlt         $zero, $zero, 245
    ctx->pc = 0x6080ccu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6080d0:
    // 0x6080d0: 0x7825  move        $t7, $zero
    ctx->pc = 0x6080d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_6080d4:
    // 0x6080d4: 0x0  nop
    ctx->pc = 0x6080d4u;
    // NOP
label_6080d8:
    // 0x6080d8: 0x746e6f66  .word       0x746E6F66                   # INVALID     $v1, $t6, 0x6F66 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6080d8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x6080D8 raw=0x746E6F66");
label_6080dc:
    // 0x6080dc: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6080dcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x6080DC raw=0x0000003D");
label_6080e0:
    // 0x6080e0: 0x657a6973  daddiu      $k0, $t3, 0x6973
    ctx->pc = 0x6080e0u;
    SET_GPR_S64(ctx, 26, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26995);
label_6080e4:
    // 0x6080e4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6080e4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x6080E4 raw=0x0000003D");
label_6080e8:
    // 0x6080e8: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6080e8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_6080ec:
    // 0x6080ec: 0x0  nop
    ctx->pc = 0x6080ecu;
    // NOP
label_6080f0:
    // 0x6080f0: 0x3d676d69  .word       0x3D676D69                   # lui         $a3, 0x6D69 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6080f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28009 << 16));
label_6080f4:
    // 0x6080f4: 0x0  nop
    ctx->pc = 0x6080f4u;
    // NOP
label_6080f8:
    // 0x6080f8: 0x65736572  daddiu      $s3, $t3, 0x6572
    ctx->pc = 0x6080f8u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25970);
label_6080fc:
    // 0x6080fc: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x6080fcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608100:
    // 0x608100: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x608100u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_608104:
    // 0x608104: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608104u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x608104 raw=0x00000001");
label_608108:
    // 0x608108: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_60810c:
    if (ctx->pc == 0x60810Cu) {
        ctx->pc = 0x60810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x608108u;
        // 0x60810c: 0x6c7464  .word       0x006C7464                   # and         $t6, $v1, $t4 # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) & GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x608110u;
        goto label_608110;
    }
    ctx->pc = 0x608108u;
    {
        const bool branch_taken_0x608108 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x608108) {
            ctx->pc = 0x60810Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x608108u;
            // 0x60810c: 0x6c7464  .word       0x006C7464                   # and         $t6, $v1, $t4 # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) & GPR_U64(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x6262DCu;
            return;
        }
    }
    ctx->pc = 0x608110u;
label_608110:
    // 0x608110: 0x6777656e  daddiu      $s7, $k1, 0x656E
    ctx->pc = 0x608110u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25966);
label_608114:
    // 0x608114: 0x656d61  .word       0x00656D61                   # addu        $t5, $v1, $a1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608114u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_608118:
    // 0x608118: 0x3fa66666  .word       0x3FA66666                   # lui         $a2, 0x6666 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608118u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_60811c:
    // 0x60811c: 0x3fa66666  .word       0x3FA66666                   # lui         $a2, 0x6666 # 03A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60811cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_608120:
    // 0x608120: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608120u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_608124:
    // 0x608124: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608124u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_608128:
    // 0x608128: 0x74786574  .word       0x74786574                   # INVALID     $v1, $t8, 0x6574 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608128u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x608128 raw=0x74786574");
label_60812c:
    // 0x60812c: 0x676b62  .word       0x00676B62                   # sub         $t5, $v1, $a3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60812cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 3), GPR_U32(ctx, 7), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_608130:
    // 0x608130: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_608134:
    if (ctx->pc == 0x608134u) {
        ctx->pc = 0x608134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x608130u;
        // 0x608134: 0x646c  .word       0x0000646C                   # dadd        $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x608138u;
        goto label_608138;
    }
    ctx->pc = 0x608130u;
    {
        const bool branch_taken_0x608130 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x608130) {
            ctx->pc = 0x608134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x608130u;
            // 0x608134: 0x646c  .word       0x0000646C                   # dadd        $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x626304u;
            return;
        }
    }
    ctx->pc = 0x608138u;
label_608138:
    // 0x608138: 0x0  nop
    ctx->pc = 0x608138u;
    // NOP
label_60813c:
    // 0x60813c: 0x0  nop
    ctx->pc = 0x60813cu;
    // NOP
label_608140:
    // 0x608140: 0x74786574  .word       0x74786574                   # INVALID     $v1, $t8, 0x6574 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608140u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x608140 raw=0x74786574");
label_608144:
    // 0x608144: 0x676b62  .word       0x00676B62                   # sub         $t5, $v1, $a3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608144u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 3), GPR_U32(ctx, 7), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_608148:
    // 0x608148: 0x0  nop
    ctx->pc = 0x608148u;
    // NOP
label_60814c:
    // 0x60814c: 0x43480000  .word       0x43480000                   # INVALID     $k0, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x60814cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x60814C raw=0x43480000");
label_608150:
    // 0x608150: 0x2e646e73  sltiu       $a0, $s3, 0x6E73
    ctx->pc = 0x608150u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)28275) ? 1 : 0);
label_608154:
    // 0x608154: 0x7866  .word       0x00007866                   # xor         $t7, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608154u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_608158:
    // 0x608158: 0x90008f  .word       0x0090008F                   # sync # 00900000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608158u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_60815c:
    // 0x60815c: 0x0  nop
    ctx->pc = 0x60815cu;
    // NOP
label_608160:
    // 0x608160: 0x25786425  addiu       $t8, $t3, 0x6425
    ctx->pc = 0x608160u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 11), 25637));
label_608164:
    // 0x608164: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608164u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_608168:
    // 0x608168: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608168u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x608168 raw=0x00000001");
label_60816c:
    // 0x60816c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60816cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60816C raw=0x00000001");
label_608170:
    // 0x608170: 0x0  nop
    ctx->pc = 0x608170u;
    // NOP
label_608174:
    // 0x608174: 0x0  nop
    ctx->pc = 0x608174u;
    // NOP
label_608178:
    // 0x608178: 0x3d676174  .word       0x3D676174                   # lui         $a3, 0x6174 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608178u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24948 << 16));
label_60817c:
    // 0x60817c: 0x34  teq         $zero, $zero, 0
    ctx->pc = 0x60817cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608180:
    // 0x608180: 0x0  nop
    ctx->pc = 0x608180u;
    // NOP
label_608184:
    // 0x608184: 0x0  nop
    ctx->pc = 0x608184u;
    // NOP
label_608188:
    // 0x608188: 0x54747874  bnel        $v1, $s4, . + 4 + (0x7874 << 2)
label_60818c:
    if (ctx->pc == 0x60818Cu) {
        ctx->pc = 0x60818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x608188u;
        // 0x60818c: 0x656d69  .word       0x00656D69                   # mtsa        $v1 # 00056D40 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        ctx->sa = GPR_U32(ctx, 3) & 0x7F;
        ctx->in_delay_slot = false;
        ctx->pc = 0x608190u;
        goto label_608190;
    }
    ctx->pc = 0x608188u;
    {
        const bool branch_taken_0x608188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x608188) {
            ctx->pc = 0x60818Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x608188u;
            // 0x60818c: 0x656d69  .word       0x00656D69                   # mtsa        $v1 # 00056D40 <InstrIdType: R5900_SPECIAL> (Delay Slot)
            ctx->sa = GPR_U32(ctx, 3) & 0x7F;
            ctx->in_delay_slot = false;
            ctx->pc = 0x62635Cu;
            return;
        }
    }
    ctx->pc = 0x608190u;
label_608190:
    // 0x608190: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x608190u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_608194:
    // 0x608194: 0x0  nop
    ctx->pc = 0x608194u;
    // NOP
label_608198:
    // 0x608198: 0x66312e25  daddiu      $s1, $s1, 0x2E25
    ctx->pc = 0x608198u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)11813);
label_60819c:
    // 0x60819c: 0x0  nop
    ctx->pc = 0x60819cu;
    // NOP
label_6081a0:
    // 0x6081a0: 0x6f726863  ldr         $s2, 0x6863($k1)
    ctx->pc = 0x6081a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26723); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_6081a4:
    // 0x6081a4: 0x6f6e  .word       0x00006F6E                   # dsub        $t5, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6081a4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_6081a8:
    // 0x6081a8: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6081a8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_6081ac:
    // 0x6081ac: 0x0  nop
    ctx->pc = 0x6081acu;
    // NOP
label_6081b0:
    // 0x6081b0: 0x726f6373  .word       0x726F6373                   # INVALID     $s3, $t7, 0x6373 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x6081b0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x6081B0 raw=0x726F6373");
label_6081b4:
    // 0x6081b4: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6081b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_6081b8:
    // 0x6081b8: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_6081bc:
    if (ctx->pc == 0x6081BCu) {
        ctx->pc = 0x6081BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6081B8u;
        // 0x6081bc: 0x6c72  tlt         $zero, $zero, 433 (Delay Slot)
        if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x6081C0u;
        goto label_6081c0;
    }
    ctx->pc = 0x6081B8u;
    {
        const bool branch_taken_0x6081b8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x6081b8) {
            ctx->pc = 0x6081BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x6081B8u;
            // 0x6081bc: 0x6c72  tlt         $zero, $zero, 433 (Delay Slot)
            if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x62638Cu;
            return;
        }
    }
    ctx->pc = 0x6081C0u;
label_6081c0:
    // 0x6081c0: 0x52485423  beql        $s2, $t0, . + 4 + (0x5423 << 2)
label_6081c4:
    if (ctx->pc == 0x6081C4u) {
        ctx->pc = 0x6081C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6081C0u;
        // 0x6081c4: 0x5345  .word       0x00005345                   # INVALID     $zero, $zero, 0x5345 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x6081C4 raw=0x00005345");
        ctx->in_delay_slot = false;
        ctx->pc = 0x6081C8u;
        goto label_6081c8;
    }
    ctx->pc = 0x6081C0u;
    {
        const bool branch_taken_0x6081c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 8));
        if (branch_taken_0x6081c0) {
            ctx->pc = 0x6081C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x6081C0u;
            // 0x6081c4: 0x5345  .word       0x00005345                   # INVALID     $zero, $zero, 0x5345 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x6081C4 raw=0x00005345");
            ctx->in_delay_slot = false;
            ctx->pc = 0x61D250u;
            return;
        }
    }
    ctx->pc = 0x6081C8u;
label_6081c8:
    // 0x6081c8: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_6081cc:
    if (ctx->pc == 0x6081CCu) {
        ctx->pc = 0x6081CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6081C8u;
        // 0x6081cc: 0x626f  .word       0x0000626F                   # dsubu       $t4, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x6081D0u;
        goto label_6081d0;
    }
    ctx->pc = 0x6081C8u;
    {
        const bool branch_taken_0x6081c8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x6081c8) {
            ctx->pc = 0x6081CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x6081C8u;
            // 0x6081cc: 0x626f  .word       0x0000626F                   # dsubu       $t4, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x62639Cu;
            return;
        }
    }
    ctx->pc = 0x6081D0u;
label_6081d0:
    // 0x6081d0: 0x4f435323  .word       0x4F435323                   # INVALID     $k0, $v1, 0x5323 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6081d0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x6081D0 raw=0x4F435323");
label_6081d4:
    // 0x6081d4: 0x4552  .word       0x00004552                   # mflo        $t0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6081d4u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_6081d8:
    // 0x6081d8: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_6081dc:
    if (ctx->pc == 0x6081DCu) {
        ctx->pc = 0x6081DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6081D8u;
        // 0x6081dc: 0x7372  tlt         $zero, $zero, 461 (Delay Slot)
        if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x6081E0u;
        goto label_6081e0;
    }
    ctx->pc = 0x6081D8u;
    {
        const bool branch_taken_0x6081d8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x6081d8) {
            ctx->pc = 0x6081DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x6081D8u;
            // 0x6081dc: 0x7372  tlt         $zero, $zero, 461 (Delay Slot)
            if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x6263ACu;
            return;
        }
    }
    ctx->pc = 0x6081E0u;
label_6081e0:
    // 0x6081e0: 0x30257325  andi        $a1, $at, 0x7325
    ctx->pc = 0x6081e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)29477);
label_6081e4:
    // 0x6081e4: 0x6432  tlt         $zero, $zero, 400
    ctx->pc = 0x6081e4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6081e8:
    // 0x6081e8: 0x3d6574  teq         $at, $sp, 405
    ctx->pc = 0x6081e8u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6081ec:
    // 0x6081ec: 0x3d7470  tge         $at, $sp, 465
    ctx->pc = 0x6081ecu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6081f0:
    // 0x6081f0: 0x3d6974  teq         $at, $sp, 421
    ctx->pc = 0x6081f0u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6081f4:
    // 0x6081f4: 0x3d6c74  teq         $at, $sp, 433
    ctx->pc = 0x6081f4u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6081f8:
    // 0x6081f8: 0x3d7877  .word       0x003D7877                   # INVALID     $at, $sp, 0x7877 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6081f8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x6081F8 raw=0x003D7877");
label_6081fc:
    // 0x6081fc: 0x3d7977  .word       0x003D7977                   # INVALID     $at, $sp, 0x7977 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6081fcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x6081FC raw=0x003D7977");
label_608200:
    // 0x608200: 0x3d616f  .word       0x003D616F                   # dsubu       $t4, $at, $sp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608200u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) - GPR_U64(ctx, 29));
label_608204:
    // 0x608204: 0x3d7466  .word       0x003D7466                   # xor         $t6, $at, $sp # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608204u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) ^ GPR_U64(ctx, 29));
label_608208:
    // 0x608208: 0x3d6374  teq         $at, $sp, 397
    ctx->pc = 0x608208u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_60820c:
    // 0x60820c: 0x0  nop
    ctx->pc = 0x60820cu;
    // NOP
label_608210:
    // 0x608210: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_608214:
    if (ctx->pc == 0x608214u) {
        ctx->pc = 0x608214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x608210u;
        // 0x608214: 0x67656c  .word       0x0067656C                   # dadd        $t4, $v1, $a3 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 7); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x608218u;
        goto label_608218;
    }
    ctx->pc = 0x608210u;
    {
        const bool branch_taken_0x608210 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x608210) {
            ctx->pc = 0x608214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x608210u;
            // 0x608214: 0x67656c  .word       0x0067656C                   # dadd        $t4, $v1, $a3 # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 7); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x6237B8u;
            return;
        }
    }
    ctx->pc = 0x608218u;
label_608218:
    // 0x608218: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_60821c:
    if (ctx->pc == 0x60821Cu) {
        ctx->pc = 0x60821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x608218u;
        // 0x60821c: 0x746163  .word       0x00746163                   # subu        $t4, $v1, $s4 # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x608220u;
        goto label_608220;
    }
    ctx->pc = 0x608218u;
    {
        const bool branch_taken_0x608218 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x608218) {
            ctx->pc = 0x60821Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x608218u;
            // 0x60821c: 0x746163  .word       0x00746163                   # subu        $t4, $v1, $s4 # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x6237C0u;
            return;
        }
    }
    ctx->pc = 0x608220u;
label_608220:
    // 0x608220: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608220u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_608224:
    // 0x608224: 0x3f8f5c29  .word       0x3F8F5C29                   # lui         $t7, 0x5C29 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608224u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)23593 << 16));
label_608228:
    // 0x608228: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608228u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_60822c:
    // 0x60822c: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60822cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_608230:
    // 0x608230: 0x71636172  .word       0x71636172                   # INVALID     $t3, $v1, 0x6172 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608230u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x608230 raw=0x71636172");
label_608234:
    // 0x608234: 0x746575  .word       0x00746575                   # INVALID     $v1, $s4, 0x6575 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608234u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x608234 raw=0x00746575");
label_608238:
    // 0x608238: 0x6d6d6168  ldr         $t5, 0x6168($t3)
    ctx->pc = 0x608238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24936); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_60823c:
    // 0x60823c: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60823cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608240:
    // 0x608240: 0x746163  .word       0x00746163                   # subu        $t4, $v1, $s4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608240u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_608244:
    // 0x608244: 0x0  nop
    ctx->pc = 0x608244u;
    // NOP
label_608248:
    // 0x608248: 0x64726962  daddiu      $s2, $v1, 0x6962
    ctx->pc = 0x608248u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26978);
label_60824c:
    // 0x60824c: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x60824cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608250:
    // 0x608250: 0x62626172  daddi       $v0, $s3, 0x6172
    ctx->pc = 0x608250u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)24946; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_608254:
    // 0x608254: 0x7469  .word       0x00007469                   # mtsa        $zero # 00007440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x608254u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_608258:
    // 0x608258: 0x726f6373  .word       0x726F6373                   # INVALID     $s3, $t7, 0x6373 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608258u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x608258 raw=0x726F6373");
label_60825c:
    // 0x60825c: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60825cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608260:
    // 0x608260: 0x46524550  .word       0x46524550                   # INVALID     $s2, $s2, 0x4550 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x608260u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x10 at 0x608260 raw=0x46524550");
label_608264:
    // 0x608264: 0x544345  .word       0x00544345                   # INVALID     $v0, $s4, 0x4345 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608264u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x608264 raw=0x00544345");
label_608268:
    // 0x608268: 0x756e6f62  .word       0x756E6F62                   # INVALID     $t3, $t6, 0x6F62 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608268u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x608268 raw=0x756E6F62");
label_60826c:
    // 0x60826c: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x60826cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608270:
    // 0x608270: 0x78616d64  lq          $at, 0x6D64($v1)
    ctx->pc = 0x608270u;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 3), 28004)));
label_608274:
    // 0x608274: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608274u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x608274 raw=0x0000003D");
label_608278:
    // 0x608278: 0x6e696d64  ldr         $t1, 0x6D64($s3)
    ctx->pc = 0x608278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28004); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_60827c:
    // 0x60827c: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60827cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x60827C raw=0x0000003D");
label_608280:
    // 0x608280: 0x6e696d76  ldr         $t1, 0x6D76($s3)
    ctx->pc = 0x608280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28022); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_608284:
    // 0x608284: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608284u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x608284 raw=0x0000003D");
label_608288:
    // 0x608288: 0x78616d76  lq          $at, 0x6D76($v1)
    ctx->pc = 0x608288u;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 3), 28022)));
label_60828c:
    // 0x60828c: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60828cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x60828C raw=0x0000003D");
label_608290:
    // 0x608290: 0x3d73  tltu        $zero, $zero, 245
    ctx->pc = 0x608290u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608294:
    // 0x608294: 0x3d6361  .word       0x003D6361                   # addu        $t4, $at, $sp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608294u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 29)));
label_608298:
    // 0x608298: 0x3d326361  .word       0x3D326361                   # lui         $s2, 0x6361 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608298u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)25441 << 16));
label_60829c:
    // 0x60829c: 0x0  nop
    ctx->pc = 0x60829cu;
    // NOP
label_6082a0:
    // 0x6082a0: 0x3d6f6373  .word       0x3D6F6373                   # lui         $t7, 0x6373 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6082a0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)25459 << 16));
label_6082a4:
    // 0x6082a4: 0x0  nop
    ctx->pc = 0x6082a4u;
    // NOP
label_6082a8:
    // 0x6082a8: 0x3d6e6f62  .word       0x3D6E6F62                   # lui         $t6, 0x6F62 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6082a8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)28514 << 16));
label_6082ac:
    // 0x6082ac: 0x0  nop
    ctx->pc = 0x6082acu;
    // NOP
label_6082b0:
    // 0x6082b0: 0x70727562  .word       0x70727562                   # INVALID     $v1, $s2, 0x7562 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x6082b0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x6082B0 raw=0x70727562");
label_6082b4:
    // 0x6082b4: 0x0  nop
    ctx->pc = 0x6082b4u;
    // NOP
label_6082b8:
    // 0x6082b8: 0x46524550  .word       0x46524550                   # INVALID     $s2, $s2, 0x4550 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x6082b8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x10 at 0x6082B8 raw=0x46524550");
label_6082bc:
    // 0x6082bc: 0x544345  .word       0x00544345                   # INVALID     $v0, $s4, 0x4345 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6082bcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x6082BC raw=0x00544345");
label_6082c0:
    // 0x6082c0: 0x756e6f62  .word       0x756E6F62                   # INVALID     $t3, $t6, 0x6F62 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6082c0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x6082C0 raw=0x756E6F62");
label_6082c4:
    // 0x6082c4: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x6082c4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6082c8:
    // 0x6082c8: 0x726f6373  .word       0x726F6373                   # INVALID     $s3, $t7, 0x6373 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x6082c8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x6082C8 raw=0x726F6373");
label_6082cc:
    // 0x6082cc: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6082ccu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_6082d0:
    // 0x6082d0: 0x3d7861  .word       0x003D7861                   # addu        $t7, $at, $sp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6082d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 29)));
label_6082d4:
    // 0x6082d4: 0x3d7a61  .word       0x003D7A61                   # addu        $t7, $at, $sp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6082d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 29)));
label_6082d8:
    // 0x6082d8: 0x3d7666  .word       0x003D7666                   # xor         $t6, $at, $sp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6082d8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) ^ GPR_U64(ctx, 29));
label_6082dc:
    // 0x6082dc: 0x3d7464  .word       0x003D7464                   # and         $t6, $at, $sp # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6082dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) & GPR_U64(ctx, 29));
label_6082e0:
    // 0x6082e0: 0x3d6477  .word       0x003D6477                   # INVALID     $at, $sp, 0x6477 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6082e0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x6082E0 raw=0x003D6477");
label_6082e4:
    // 0x6082e4: 0x3d6574  teq         $at, $sp, 405
    ctx->pc = 0x6082e4u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6082e8:
    // 0x6082e8: 0x3d7068  .word       0x003D7068                   # mfsa        $t6 # 003D0040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x6082e8u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_6082ec:
    // 0x6082ec: 0x0  nop
    ctx->pc = 0x6082ecu;
    // NOP
label_6082f0:
    // 0x6082f0: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6082f0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_6082f4:
    // 0x6082f4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6082f4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_6082f8:
    // 0x6082f8: 0x3fc00000  .word       0x3FC00000                   # lui         $zero, 0x0 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6082f8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_6082fc:
    // 0x6082fc: 0x3fc00000  .word       0x3FC00000                   # lui         $zero, 0x0 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6082fcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_608300:
    // 0x608300: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608300u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_608304:
    // 0x608304: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608304u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_608308:
    // 0x608308: 0x726f6373  .word       0x726F6373                   # INVALID     $s3, $t7, 0x6373 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608308u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x608308 raw=0x726F6373");
label_60830c:
    // 0x60830c: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60830cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608310:
    // 0x608310: 0x46524550  .word       0x46524550                   # INVALID     $s2, $s2, 0x4550 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x608310u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x10 at 0x608310 raw=0x46524550");
label_608314:
    // 0x608314: 0x544345  .word       0x00544345                   # INVALID     $v0, $s4, 0x4345 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608314u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x608314 raw=0x00544345");
label_608318:
    // 0x608318: 0x756e6f62  .word       0x756E6F62                   # INVALID     $t3, $t6, 0x6F62 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608318u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x608318 raw=0x756E6F62");
label_60831c:
    // 0x60831c: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x60831cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608320:
    // 0x608320: 0x3d676174  .word       0x3D676174                   # lui         $a3, 0x6174 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608320u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24948 << 16));
label_608324:
    // 0x608324: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608324u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608328:
    // 0x608328: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608328u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_60832c:
    // 0x60832c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60832cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_608330:
    // 0x608330: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608330u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_608334:
    // 0x608334: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x608334u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x608334 raw=0x40400000");
label_608338:
    // 0x608338: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x608338u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_60833c:
    // 0x60833c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60833cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_608340:
    // 0x608340: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608340u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_608344:
    // 0x608344: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608344u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_608348:
    // 0x608348: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x608348u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_60834c:
    // 0x60834c: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x60834cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_608350:
    // 0x608350: 0x3d7264  .word       0x003D7264                   # and         $t6, $at, $sp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608350u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) & GPR_U64(ctx, 29));
label_608354:
    // 0x608354: 0x3d7570  tge         $at, $sp, 469
    ctx->pc = 0x608354u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_608358:
    // 0x608358: 0x3d6566  .word       0x003D6566                   # xor         $t4, $at, $sp # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608358u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) ^ GPR_U64(ctx, 29));
label_60835c:
    // 0x60835c: 0x3d7066  .word       0x003D7066                   # xor         $t6, $at, $sp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60835cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) ^ GPR_U64(ctx, 29));
label_608360:
    // 0x608360: 0x3d6f64  .word       0x003D6F64                   # and         $t5, $at, $sp # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608360u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) & GPR_U64(ctx, 29));
label_608364:
    // 0x608364: 0x3d6466  .word       0x003D6466                   # xor         $t4, $at, $sp # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608364u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) ^ GPR_U64(ctx, 29));
label_608368:
    // 0x608368: 0x3d7379  .word       0x003D7379                   # INVALID     $at, $sp, 0x7379 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608368u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x608368 raw=0x003D7379");
label_60836c:
    // 0x60836c: 0x3d7372  tlt         $at, $sp, 461
    ctx->pc = 0x60836cu;
    if (GPR_S64(ctx, 1) < GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_608370:
    // 0x608370: 0x3d7073  tltu        $at, $sp, 449
    ctx->pc = 0x608370u;
    if (GPR_U64(ctx, 1) < GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_608374:
    // 0x608374: 0x3d7274  teq         $at, $sp, 457
    ctx->pc = 0x608374u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_608378:
    // 0x608378: 0x3d7068  .word       0x003D7068                   # mfsa        $t6 # 003D0040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x608378u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_60837c:
    // 0x60837c: 0x0  nop
    ctx->pc = 0x60837cu;
    // NOP
label_608380:
    // 0x608380: 0x3d707068  .word       0x3D707068                   # lui         $s0, 0x7068 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608380u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28776 << 16));
label_608384:
    // 0x608384: 0x0  nop
    ctx->pc = 0x608384u;
    // NOP
label_608388:
    // 0x608388: 0x3d6e68  .word       0x003D6E68                   # mfsa        $t5 # 003D0640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x608388u;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_60838c:
    // 0x60838c: 0x0  nop
    ctx->pc = 0x60838cu;
    // NOP
label_608390:
    // 0x608390: 0x3d706e68  .word       0x3D706E68                   # lui         $s0, 0x6E68 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608390u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28264 << 16));
label_608394:
    // 0x608394: 0x0  nop
    ctx->pc = 0x608394u;
    // NOP
label_608398:
    // 0x608398: 0x3d37646d  .word       0x3D37646D                   # lui         $s7, 0x646D # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608398u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)25709 << 16));
label_60839c:
    // 0x60839c: 0x0  nop
    ctx->pc = 0x60839cu;
    // NOP
label_6083a0:
    // 0x6083a0: 0x3d6c64  .word       0x003D6C64                   # and         $t5, $at, $sp # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6083a0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) & GPR_U64(ctx, 29));
label_6083a4:
    // 0x6083a4: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6083a4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_6083a8:
    // 0x6083a8: 0x4e525554  .word       0x4E525554                   # INVALID     $s2, $s2, 0x5554 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6083a8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x6083A8 raw=0x4E525554");
label_6083ac:
    // 0x6083ac: 0x0  nop
    ctx->pc = 0x6083acu;
    // NOP
label_6083b0:
    // 0x6083b0: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x6083b0u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_6083b4:
    // 0x6083b4: 0x0  nop
    ctx->pc = 0x6083b4u;
    // NOP
label_6083b8:
    // 0x6083b8: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6083b8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_6083bc:
    // 0x6083bc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6083bcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_6083c0:
    // 0x6083c0: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6083c0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_6083c4:
    // 0x6083c4: 0x40400000  cfc0        $zero, Index
    ctx->pc = 0x6083c4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x2 at 0x6083C4 raw=0x40400000");
label_6083c8:
    // 0x6083c8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x6083c8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_6083cc:
    // 0x6083cc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6083ccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_6083d0:
    // 0x6083d0: 0x6c6c6562  ldr         $t4, 0x6562($v1)
    ctx->pc = 0x6083d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25954); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_6083d4:
    // 0x6083d4: 0x0  nop
    ctx->pc = 0x6083d4u;
    // NOP
label_6083d8:
    // 0x6083d8: 0x726f6373  .word       0x726F6373                   # INVALID     $s3, $t7, 0x6373 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x6083d8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x6083D8 raw=0x726F6373");
label_6083dc:
    // 0x6083dc: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6083dcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_6083e0:
    // 0x6083e0: 0x46524550  .word       0x46524550                   # INVALID     $s2, $s2, 0x4550 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x6083e0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x10 at 0x6083E0 raw=0x46524550");
label_6083e4:
    // 0x6083e4: 0x544345  .word       0x00544345                   # INVALID     $v0, $s4, 0x4345 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6083e4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x6083E4 raw=0x00544345");
label_6083e8:
    // 0x6083e8: 0x756e6f62  .word       0x756E6F62                   # INVALID     $t3, $t6, 0x6F62 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6083e8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x6083E8 raw=0x756E6F62");
label_6083ec:
    // 0x6083ec: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x6083ecu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6083f0:
    // 0x6083f0: 0x5353494d  beql        $k0, $s3, . + 4 + (0x494D << 2)
label_6083f4:
    if (ctx->pc == 0x6083F4u) {
        ctx->pc = 0x6083F8u;
        goto label_6083f8;
    }
    ctx->pc = 0x6083F0u;
    {
        const bool branch_taken_0x6083f0 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 19));
        if (branch_taken_0x6083f0) {
            ctx->pc = 0x61A928u;
            return;
        }
    }
    ctx->pc = 0x6083F8u;
label_6083f8:
    // 0x6083f8: 0x52485423  beql        $s2, $t0, . + 4 + (0x5423 << 2)
label_6083fc:
    if (ctx->pc == 0x6083FCu) {
        ctx->pc = 0x6083FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6083F8u;
        // 0x6083fc: 0x5345  .word       0x00005345                   # INVALID     $zero, $zero, 0x5345 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x6083FC raw=0x00005345");
        ctx->in_delay_slot = false;
        ctx->pc = 0x608400u;
        goto label_608400;
    }
    ctx->pc = 0x6083F8u;
    {
        const bool branch_taken_0x6083f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 8));
        if (branch_taken_0x6083f8) {
            ctx->pc = 0x6083FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x6083F8u;
            // 0x6083fc: 0x5345  .word       0x00005345                   # INVALID     $zero, $zero, 0x5345 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x6083FC raw=0x00005345");
            ctx->in_delay_slot = false;
            ctx->pc = 0x61D488u;
            return;
        }
    }
    ctx->pc = 0x608400u;
label_608400:
    // 0x608400: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_608404:
    if (ctx->pc == 0x608404u) {
        ctx->pc = 0x608404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x608400u;
        // 0x608404: 0x626f  .word       0x0000626F                   # dsubu       $t4, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x608408u;
        goto label_608408;
    }
    ctx->pc = 0x608400u;
    {
        const bool branch_taken_0x608400 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x608400) {
            ctx->pc = 0x608404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x608400u;
            // 0x608404: 0x626f  .word       0x0000626F                   # dsubu       $t4, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x6265D4u;
            return;
        }
    }
    ctx->pc = 0x608408u;
label_608408:
    // 0x608408: 0x4f435323  .word       0x4F435323                   # INVALID     $k0, $v1, 0x5323 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608408u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x608408 raw=0x4F435323");
label_60840c:
    // 0x60840c: 0x4552  .word       0x00004552                   # mflo        $t0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60840cu;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_608410:
    // 0x608410: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_608414:
    if (ctx->pc == 0x608414u) {
        ctx->pc = 0x608414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x608410u;
        // 0x608414: 0x7372  tlt         $zero, $zero, 461 (Delay Slot)
        if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x608418u;
        goto label_608418;
    }
    ctx->pc = 0x608410u;
    {
        const bool branch_taken_0x608410 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x608410) {
            ctx->pc = 0x608414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x608410u;
            // 0x608414: 0x7372  tlt         $zero, $zero, 461 (Delay Slot)
            if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x6265E4u;
            return;
        }
    }
    ctx->pc = 0x608418u;
label_608418:
    // 0x608418: 0x3d6574  teq         $at, $sp, 405
    ctx->pc = 0x608418u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_60841c:
    // 0x60841c: 0x3d7470  tge         $at, $sp, 465
    ctx->pc = 0x60841cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_608420:
    // 0x608420: 0x3d6e69  .word       0x003D6E69                   # mtsa        $at # 001D6E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x608420u;
    ctx->sa = GPR_U32(ctx, 1) & 0x7F;
label_608424:
    // 0x608424: 0x3d7266  .word       0x003D7266                   # xor         $t6, $at, $sp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608424u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) ^ GPR_U64(ctx, 29));
label_608428:
    // 0x608428: 0x3d7073  tltu        $at, $sp, 449
    ctx->pc = 0x608428u;
    if (GPR_U64(ctx, 1) < GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_60842c:
    // 0x60842c: 0x3d7466  .word       0x003D7466                   # xor         $t6, $at, $sp # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60842cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) ^ GPR_U64(ctx, 29));
label_608430:
    // 0x608430: 0x3e800000  .word       0x3E800000                   # lui         $zero, 0x0 # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608430u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_608434:
    // 0x608434: 0x0  nop
    ctx->pc = 0x608434u;
    // NOP
label_608438:
    // 0x608438: 0x65707061  daddiu      $s0, $t3, 0x7061
    ctx->pc = 0x608438u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28769);
label_60843c:
    // 0x60843c: 0x737261  .word       0x00737261                   # addu        $t6, $v1, $s3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60843cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_608440:
    // 0x608440: 0x726f6373  .word       0x726F6373                   # INVALID     $s3, $t7, 0x6373 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608440u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x608440 raw=0x726F6373");
label_608444:
    // 0x608444: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608444u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608448:
    // 0x608448: 0x46524550  .word       0x46524550                   # INVALID     $s2, $s2, 0x4550 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x608448u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x10 at 0x608448 raw=0x46524550");
label_60844c:
    // 0x60844c: 0x544345  .word       0x00544345                   # INVALID     $v0, $s4, 0x4345 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60844cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x60844C raw=0x00544345");
label_608450:
    // 0x608450: 0x756e6f62  .word       0x756E6F62                   # INVALID     $t3, $t6, 0x6F62 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608450u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x608450 raw=0x756E6F62");
label_608454:
    // 0x608454: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x608454u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608458:
    // 0x608458: 0x6c617773  ldr         $at, 0x7773($v1)
    ctx->pc = 0x608458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30579); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_60845c:
    // 0x60845c: 0x776f6c  .word       0x00776F6C                   # dadd        $t5, $v1, $s7 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60845cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 23); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_608460:
    // 0x608460: 0x73617263  .word       0x73617263                   # INVALID     $k1, $at, 0x7263 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608460u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x608460 raw=0x73617263");
label_608464:
    // 0x608464: 0x68  .word       0x00000068                   # mfsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x608464u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_608468:
    // 0x608468: 0x3e99999a  .word       0x3E99999A                   # lui         $t9, 0x999A # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608468u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_60846c:
    // 0x60846c: 0x3f0ccccd  .word       0x3F0CCCCD                   # lui         $t4, 0xCCCD # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60846cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_608470:
    // 0x608470: 0x42a00000  .word       0x42A00000                   # INVALID     $s5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x608470u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x608470 raw=0x42A00000");
label_608474:
    // 0x608474: 0xc0000000  ll          $zero, 0x0($zero)
    ctx->pc = 0x608474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_608478:
    // 0x608478: 0x3f066666  .word       0x3F066666                   # lui         $a2, 0x6666 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608478u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_60847c:
    // 0x60847c: 0x3ea66666  .word       0x3EA66666                   # lui         $a2, 0x6666 # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60847cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26214 << 16));
label_608480:
    // 0x608480: 0x3f333333  .word       0x3F333333                   # lui         $s3, 0x3333 # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608480u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)13107 << 16));
label_608484:
    // 0x608484: 0xbd4ccccd  cache       0x0C, -0x3333($t2)
    ctx->pc = 0x608484u;
    // CACHE instruction (ignored)
label_608488:
    // 0x608488: 0xbe4ccccd  cache       0x0C, -0x3333($s2)
    ctx->pc = 0x608488u;
    // CACHE instruction (ignored)
label_60848c:
    // 0x60848c: 0x0  nop
    ctx->pc = 0x60848cu;
    // NOP
label_608490:
    // 0x608490: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_608494:
    if (ctx->pc == 0x608494u) {
        ctx->pc = 0x608494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x608490u;
        // 0x608494: 0x4d5241  .word       0x004D5241                   # INVALID     $v0, $t5, 0x5241 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x608494 raw=0x004D5241");
        ctx->in_delay_slot = false;
        ctx->pc = 0x608498u;
        goto label_608498;
    }
    ctx->pc = 0x608490u;
    {
        const bool branch_taken_0x608490 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x608490) {
            ctx->pc = 0x608494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x608490u;
            // 0x608494: 0x4d5241  .word       0x004D5241                   # INVALID     $v0, $t5, 0x5241 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x608494 raw=0x004D5241");
            ctx->in_delay_slot = false;
            ctx->pc = 0x623A38u;
            return;
        }
    }
    ctx->pc = 0x608498u;
label_608498:
    // 0x608498: 0x706f7264  .word       0x706F7264                   # INVALID     $v1, $t7, 0x7264 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608498u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x608498 raw=0x706F7264");
label_60849c:
    // 0x60849c: 0x0  nop
    ctx->pc = 0x60849cu;
    // NOP
label_6084a0:
    // 0x6084a0: 0x706d756a  .word       0x706D756A                   # INVALID     $v1, $t5, 0x756A # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x6084a0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2A at 0x6084A0 raw=0x706D756A");
label_6084a4:
    // 0x6084a4: 0x0  nop
    ctx->pc = 0x6084a4u;
    // NOP
label_6084a8:
    // 0x6084a8: 0xbec00000  cache       0x00, 0x0($s6)
    ctx->pc = 0x6084a8u;
    // CACHE instruction (ignored)
label_6084ac:
    // 0x6084ac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6084acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_6084b0:
    // 0x6084b0: 0xbf000000  cache       0x00, 0x0($t8)
    ctx->pc = 0x6084b0u;
    // CACHE instruction (ignored)
label_6084b4:
    // 0x6084b4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6084b4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_6084b8:
    // 0x6084b8: 0x3e4ccccd  .word       0x3E4CCCCD                   # lui         $t4, 0xCCCD # 02400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6084b8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_6084bc:
    // 0x6084bc: 0x0  nop
    ctx->pc = 0x6084bcu;
    // NOP
label_6084c0:
    // 0x6084c0: 0xbf000000  cache       0x00, 0x0($t8)
    ctx->pc = 0x6084c0u;
    // CACHE instruction (ignored)
label_6084c4:
    // 0x6084c4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6084c4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_6084c8:
    // 0x6084c8: 0x3d6467  .word       0x003D6467                   # nor         $t4, $at, $sp # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6084c8u;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 1) | GPR_U64(ctx, 29)));
label_6084cc:
    // 0x6084cc: 0x3d6862  .word       0x003D6862                   # sub         $t5, $at, $sp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6084ccu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 1), GPR_U32(ctx, 29), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_6084d0:
    // 0x6084d0: 0x3d786f  .word       0x003D786F                   # dsubu       $t7, $at, $sp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6084d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 1) - GPR_U64(ctx, 29));
label_6084d4:
    // 0x6084d4: 0x3d7867  .word       0x003D7867                   # nor         $t7, $at, $sp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6084d4u;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 1) | GPR_U64(ctx, 29)));
label_6084d8:
    // 0x6084d8: 0x3d7967  .word       0x003D7967                   # nor         $t7, $at, $sp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6084d8u;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 1) | GPR_U64(ctx, 29)));
label_6084dc:
    // 0x6084dc: 0x3d6370  tge         $at, $sp, 397
    ctx->pc = 0x6084dcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6084e0:
    // 0x6084e0: 0x3d696d  .word       0x003D696D                   # daddu       $t5, $at, $sp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6084e0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 29));
label_6084e4:
    // 0x6084e4: 0x3d616d  .word       0x003D616D                   # daddu       $t4, $at, $sp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6084e4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 29));
label_6084e8:
    // 0x6084e8: 0x3d6170  tge         $at, $sp, 389
    ctx->pc = 0x6084e8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6084ec:
    // 0x6084ec: 0x3d786e  .word       0x003D786E                   # dsub        $t7, $at, $sp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6084ecu;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 29); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, r); }
label_6084f0:
    // 0x6084f0: 0x3d796e  .word       0x003D796E                   # dsub        $t7, $at, $sp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6084f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 29); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, r); }
label_6084f4:
    // 0x6084f4: 0x3d7464  .word       0x003D7464                   # and         $t6, $at, $sp # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6084f4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) & GPR_U64(ctx, 29));
label_6084f8:
    // 0x6084f8: 0x3d3066  .word       0x003D3066                   # xor         $a2, $at, $sp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6084f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) ^ GPR_U64(ctx, 29));
label_6084fc:
    // 0x6084fc: 0x3d3166  .word       0x003D3166                   # xor         $a2, $at, $sp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6084fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) ^ GPR_U64(ctx, 29));
label_608500:
    // 0x608500: 0x3d3266  .word       0x003D3266                   # xor         $a2, $at, $sp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608500u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) ^ GPR_U64(ctx, 29));
label_608504:
    // 0x608504: 0x3d3366  .word       0x003D3366                   # xor         $a2, $at, $sp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608504u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) ^ GPR_U64(ctx, 29));
label_608508:
    // 0x608508: 0x3d3466  .word       0x003D3466                   # xor         $a2, $at, $sp # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608508u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) ^ GPR_U64(ctx, 29));
label_60850c:
    // 0x60850c: 0x3d3566  .word       0x003D3566                   # xor         $a2, $at, $sp # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60850cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) ^ GPR_U64(ctx, 29));
label_608510:
    // 0x608510: 0x3d3666  .word       0x003D3666                   # xor         $a2, $at, $sp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608510u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) ^ GPR_U64(ctx, 29));
label_608514:
    // 0x608514: 0x3d3766  .word       0x003D3766                   # xor         $a2, $at, $sp # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608514u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) ^ GPR_U64(ctx, 29));
label_608518:
    // 0x608518: 0x3d3866  .word       0x003D3866                   # xor         $a3, $at, $sp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608518u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) ^ GPR_U64(ctx, 29));
label_60851c:
    // 0x60851c: 0x3d3966  .word       0x003D3966                   # xor         $a3, $at, $sp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60851cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) ^ GPR_U64(ctx, 29));
label_608520:
    // 0x608520: 0x696d6f76  ldl         $t5, 0x6F76($t3)
    ctx->pc = 0x608520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28534); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
label_608524:
    // 0x608524: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x608524u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608528:
    // 0x608528: 0x61746f72  daddi       $s4, $t3, 0x6F72
    ctx->pc = 0x608528u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28530; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_60852c:
    // 0x60852c: 0x6574  teq         $zero, $zero, 405
    ctx->pc = 0x60852cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608530:
    // 0x608530: 0x3d303166  .word       0x3D303166                   # lui         $s0, 0x3166 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608530u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)12646 << 16));
label_608534:
    // 0x608534: 0x0  nop
    ctx->pc = 0x608534u;
    // NOP
label_608538:
    // 0x608538: 0x0  nop
    ctx->pc = 0x608538u;
    // NOP
label_60853c:
    // 0x60853c: 0x207525  .word       0x00207525                   # move        $t6, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60853cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) | GPR_U64(ctx, 0));
label_608540:
    // 0x608540: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x608540u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_608544:
    // 0x608544: 0x206425  .word       0x00206425                   # move        $t4, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608544u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) | GPR_U64(ctx, 0));
label_608548:
    // 0x608548: 0x706f7264  .word       0x706F7264                   # INVALID     $v1, $t7, 0x7264 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608548u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x608548 raw=0x706F7264");
label_60854c:
    // 0x60854c: 0x0  nop
    ctx->pc = 0x60854cu;
    // NOP
label_608550:
    // 0x608550: 0x726f6373  .word       0x726F6373                   # INVALID     $s3, $t7, 0x6373 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608550u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x608550 raw=0x726F6373");
label_608554:
    // 0x608554: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608554u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608558:
    // 0x608558: 0x61656c63  daddi       $a1, $t3, 0x6C63
    ctx->pc = 0x608558u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27747; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_60855c:
    // 0x60855c: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60855cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_608560:
    // 0x608560: 0x73727563  .word       0x73727563                   # INVALID     $k1, $s2, 0x7563 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608560u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x608560 raw=0x73727563");
label_608564:
    // 0x608564: 0x30726f  .word       0x0030726F                   # dsubu       $t6, $at, $s0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608564u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) - GPR_U64(ctx, 16));
label_608568:
    // 0x608568: 0x73727563  .word       0x73727563                   # INVALID     $k1, $s2, 0x7563 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608568u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x608568 raw=0x73727563");
label_60856c:
    // 0x60856c: 0x31726f  .word       0x0031726F                   # dsubu       $t6, $at, $s1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60856cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) - GPR_U64(ctx, 17));
label_608570:
    // 0x608570: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608570u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608574:
    // 0x608574: 0x0  nop
    ctx->pc = 0x608574u;
    // NOP
label_608578:
    // 0x608578: 0x64256325  daddiu      $a1, $at, 0x6325
    ctx->pc = 0x608578u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)25381);
label_60857c:
    // 0x60857c: 0x0  nop
    ctx->pc = 0x60857cu;
    // NOP
label_608580:
    // 0x608580: 0x46455223  .word       0x46455223                   # INVALID     $s2, $a1, 0x5223 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x608580u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x23 at 0x608580 raw=0x46455223");
label_608584:
    // 0x608584: 0x0  nop
    ctx->pc = 0x608584u;
    // NOP
label_608588:
    // 0x608588: 0x52485423  beql        $s2, $t0, . + 4 + (0x5423 << 2)
label_60858c:
    if (ctx->pc == 0x60858Cu) {
        ctx->pc = 0x60858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x608588u;
        // 0x60858c: 0x5345  .word       0x00005345                   # INVALID     $zero, $zero, 0x5345 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x60858C raw=0x00005345");
        ctx->in_delay_slot = false;
        ctx->pc = 0x608590u;
        goto label_608590;
    }
    ctx->pc = 0x608588u;
    {
        const bool branch_taken_0x608588 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 8));
        if (branch_taken_0x608588) {
            ctx->pc = 0x60858Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x608588u;
            // 0x60858c: 0x5345  .word       0x00005345                   # INVALID     $zero, $zero, 0x5345 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x60858C raw=0x00005345");
            ctx->in_delay_slot = false;
            ctx->pc = 0x61D618u;
            return;
        }
    }
    ctx->pc = 0x608590u;
label_608590:
    // 0x608590: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_608594:
    if (ctx->pc == 0x608594u) {
        ctx->pc = 0x608594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x608590u;
        // 0x608594: 0x626f  .word       0x0000626F                   # dsubu       $t4, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x608598u;
        goto label_608598;
    }
    ctx->pc = 0x608590u;
    {
        const bool branch_taken_0x608590 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x608590) {
            ctx->pc = 0x608594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x608590u;
            // 0x608594: 0x626f  .word       0x0000626F                   # dsubu       $t4, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x626764u;
            return;
        }
    }
    ctx->pc = 0x608598u;
label_608598:
    // 0x608598: 0x49525023  .word       0x49525023                   # INVALID     $t2, $s2, 0x5023 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x608598u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x608598 raw=0x49525023");
label_60859c:
    // 0x60859c: 0x4543  sra         $t0, $zero, 21
    ctx->pc = 0x60859cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 0), 21));
label_6085a0:
    // 0x6085a0: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_6085a4:
    if (ctx->pc == 0x6085A4u) {
        ctx->pc = 0x6085A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6085A0u;
        // 0x6085a4: 0x7372  tlt         $zero, $zero, 461 (Delay Slot)
        if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x6085A8u;
        goto label_6085a8;
    }
    ctx->pc = 0x6085A0u;
    {
        const bool branch_taken_0x6085a0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x6085a0) {
            ctx->pc = 0x6085A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x6085A0u;
            // 0x6085a4: 0x7372  tlt         $zero, $zero, 461 (Delay Slot)
            if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x626774u;
            return;
        }
    }
    ctx->pc = 0x6085A8u;
label_6085a8:
    // 0x6085a8: 0x74736166  .word       0x74736166                   # INVALID     $v1, $s3, 0x6166 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6085a8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x6085A8 raw=0x74736166");
label_6085ac:
    // 0x6085ac: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6085acu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_6085b0:
    // 0x6085b0: 0x776f6c73  .word       0x776F6C73                   # INVALID     $k1, $t7, 0x6C73 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6085b0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x6085B0 raw=0x776F6C73");
label_6085b4:
    // 0x6085b4: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6085b4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_6085b8:
    // 0x6085b8: 0x636e69  .word       0x00636E69                   # mtsa        $v1 # 00036E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x6085b8u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_6085bc:
    // 0x6085bc: 0x636564  .word       0x00636564                   # and         $t4, $v1, $v1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6085bcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) & GPR_U64(ctx, 3));
label_6085c0:
    // 0x6085c0: 0x63697270  daddi       $t1, $k1, 0x7270
    ctx->pc = 0x6085c0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)29296; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_6085c4:
    // 0x6085c4: 0x3d65  .word       0x00003D65                   # move        $a3, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6085c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_6085c8:
    // 0x6085c8: 0x6625  .word       0x00006625                   # move        $t4, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6085c8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_6085cc:
    // 0x6085cc: 0x0  nop
    ctx->pc = 0x6085ccu;
    // NOP
label_6085d0:
    // 0x6085d0: 0x3d37646d  .word       0x3D37646D                   # lui         $s7, 0x646D # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6085d0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)25709 << 16));
label_6085d4:
    // 0x6085d4: 0x0  nop
    ctx->pc = 0x6085d4u;
    // NOP
label_6085d8:
    // 0x6085d8: 0x3d6574  teq         $at, $sp, 405
    ctx->pc = 0x6085d8u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6085dc:
    // 0x6085dc: 0x3d6861  .word       0x003D6861                   # addu        $t5, $at, $sp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6085dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 29)));
label_6085e0:
    // 0x6085e0: 0x3d7361  .word       0x003D7361                   # addu        $t6, $at, $sp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6085e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 29)));
label_6085e4:
    // 0x6085e4: 0x3d6461  .word       0x003D6461                   # addu        $t4, $at, $sp # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6085e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 29)));
label_6085e8:
    // 0x6085e8: 0x3d6468  .word       0x003D6468                   # mfsa        $t4 # 003D0440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x6085e8u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_6085ec:
    // 0x6085ec: 0x3d7268  .word       0x003D7268                   # mfsa        $t6 # 003D0240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x6085ecu;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_6085f0:
    // 0x6085f0: 0x3d726d  .word       0x003D726D                   # daddu       $t6, $at, $sp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6085f0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 29));
label_6085f4:
    // 0x6085f4: 0x3d6362  .word       0x003D6362                   # sub         $t4, $at, $sp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6085f4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 1), GPR_U32(ctx, 29), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_6085f8:
    // 0x6085f8: 0x3d7462  .word       0x003D7462                   # sub         $t6, $at, $sp # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6085f8u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 1), GPR_U32(ctx, 29), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_6085fc:
    // 0x6085fc: 0xc28c0000  ll          $t4, 0x0($s4)
    ctx->pc = 0x6085fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); SET_GPR_S32(ctx, 12, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_608600:
    // 0x608600: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x608600u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x608600 raw=0x41200000");
label_608604:
    // 0x608604: 0x42820000  .word       0x42820000                   # INVALID     $s4, $v0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x608604u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x608604 raw=0x42820000");
label_608608:
    // 0x608608: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x608608u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x608608 raw=0x42340000");
label_60860c:
    // 0x60860c: 0x0  nop
    ctx->pc = 0x60860cu;
    // NOP
label_608610:
    // 0x608610: 0x6f6f6877  ldr         $t7, 0x6877($k1)
    ctx->pc = 0x608610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26743); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_608614:
    // 0x608614: 0x6873  tltu        $zero, $zero, 417
    ctx->pc = 0x608614u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608618:
    // 0x608618: 0x726f6373  .word       0x726F6373                   # INVALID     $s3, $t7, 0x6373 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608618u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x608618 raw=0x726F6373");
label_60861c:
    // 0x60861c: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60861cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608620:
    // 0x608620: 0x68736163  ldl         $s3, 0x6163($v1)
    ctx->pc = 0x608620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24931); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_608624:
    // 0x608624: 0x0  nop
    ctx->pc = 0x608624u;
    // NOP
label_608628:
    // 0x608628: 0x42200000  .word       0x42200000                   # INVALID     $s1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x608628u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x608628 raw=0x42200000");
label_60862c:
    // 0x60862c: 0x3e99999a  .word       0x3E99999A                   # lui         $t9, 0x999A # 02800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60862cu;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)39322 << 16));
label_608630:
    // 0x608630: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608630u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_608634:
    // 0x608634: 0x0  nop
    ctx->pc = 0x608634u;
    // NOP
label_608638:
    // 0x608638: 0x0  nop
    ctx->pc = 0x608638u;
    // NOP
label_60863c:
    // 0x60863c: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x60863cu;
    // CACHE instruction (ignored)
label_608640:
    // 0x608640: 0xf  sync
    ctx->pc = 0x608640u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_608644:
    // 0x608644: 0x3d6476  tne         $at, $sp, 401
    ctx->pc = 0x608644u;
    if (GPR_U64(ctx, 1) != GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_608648:
    // 0x608648: 0x3d7564  .word       0x003D7564                   # and         $t6, $at, $sp # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608648u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) & GPR_U64(ctx, 29));
label_60864c:
    // 0x60864c: 0x3d7073  tltu        $at, $sp, 449
    ctx->pc = 0x60864cu;
    if (GPR_U64(ctx, 1) < GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_608650:
    // 0x608650: 0x3d7074  teq         $at, $sp, 449
    ctx->pc = 0x608650u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_608654:
    // 0x608654: 0x3d6973  tltu        $at, $sp, 421
    ctx->pc = 0x608654u;
    if (GPR_U64(ctx, 1) < GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_608658:
    // 0x608658: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608658u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_60865c:
    // 0x60865c: 0x0  nop
    ctx->pc = 0x60865cu;
    // NOP
label_608660:
    // 0x608660: 0x6d757274  ldr         $s5, 0x7274($t3)
    ctx->pc = 0x608660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_608664:
    // 0x608664: 0x746570  tge         $v1, $s4, 405
    ctx->pc = 0x608664u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_608668:
    // 0x608668: 0x0  nop
    ctx->pc = 0x608668u;
    // NOP
label_60866c:
    // 0x60866c: 0x3d6574  teq         $at, $sp, 405
    ctx->pc = 0x60866cu;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_608670:
    // 0x608670: 0x3d7173  tltu        $at, $sp, 453
    ctx->pc = 0x608670u;
    if (GPR_U64(ctx, 1) < GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_608674:
    // 0x608674: 0x3d6167  .word       0x003D6167                   # nor         $t4, $at, $sp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608674u;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 1) | GPR_U64(ctx, 29)));
label_608678:
    // 0x608678: 0x3d626f  .word       0x003D626F                   # dsubu       $t4, $at, $sp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608678u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) - GPR_U64(ctx, 29));
label_60867c:
    // 0x60867c: 0x3d7073  tltu        $at, $sp, 449
    ctx->pc = 0x60867cu;
    if (GPR_U64(ctx, 1) < GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_608680:
    // 0x608680: 0x726f6373  .word       0x726F6373                   # INVALID     $s3, $t7, 0x6373 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608680u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x608680 raw=0x726F6373");
label_608684:
    // 0x608684: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608684u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608688:
    // 0x608688: 0x68736163  ldl         $s3, 0x6163($v1)
    ctx->pc = 0x608688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24931); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_60868c:
    // 0x60868c: 0x0  nop
    ctx->pc = 0x60868cu;
    // NOP
label_608690:
    // 0x608690: 0x3d6e  .word       0x00003D6E                   # dsub        $a3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608690u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_608694:
    // 0x608694: 0x3d64  .word       0x00003D64                   # and         $a3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608694u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_608698:
    // 0x608698: 0x3d6375  .word       0x003D6375                   # INVALID     $at, $sp, 0x6375 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608698u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x608698 raw=0x003D6375");
label_60869c:
    // 0x60869c: 0x0  nop
    ctx->pc = 0x60869cu;
    // NOP
label_6086a0:
    // 0x6086a0: 0x326d6163  andi        $t5, $s3, 0x6163
    ctx->pc = 0x6086a0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)24931);
label_6086a4:
    // 0x6086a4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6086a4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x6086A4 raw=0x0000003D");
label_6086a8:
    // 0x6086a8: 0x706d6163  .word       0x706D6163                   # INVALID     $v1, $t5, 0x6163 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x6086a8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x6086A8 raw=0x706D6163");
label_6086ac:
    // 0x6086ac: 0x3d74  teq         $zero, $zero, 245
    ctx->pc = 0x6086acu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6086b0:
    // 0x6086b0: 0x3d3175  .word       0x003D3175                   # INVALID     $at, $sp, 0x3175 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6086b0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x6086B0 raw=0x003D3175");
label_6086b4:
    // 0x6086b4: 0x3d3275  .word       0x003D3275                   # INVALID     $at, $sp, 0x3275 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6086b4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x6086B4 raw=0x003D3275");
label_6086b8:
    // 0x6086b8: 0x3d3176  tne         $at, $sp, 197
    ctx->pc = 0x6086b8u;
    if (GPR_U64(ctx, 1) != GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6086bc:
    // 0x6086bc: 0x3d3276  tne         $at, $sp, 201
    ctx->pc = 0x6086bcu;
    if (GPR_U64(ctx, 1) != GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6086c0:
    // 0x6086c0: 0x3d316168  .word       0x3D316168                   # lui         $s1, 0x6168 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6086c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)24936 << 16));
label_6086c4:
    // 0x6086c4: 0x0  nop
    ctx->pc = 0x6086c4u;
    // NOP
label_6086c8:
    // 0x6086c8: 0x3d326168  .word       0x3D326168                   # lui         $s2, 0x6168 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6086c8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)24936 << 16));
label_6086cc:
    // 0x6086cc: 0x0  nop
    ctx->pc = 0x6086ccu;
    // NOP
label_6086d0:
    // 0x6086d0: 0x3d316176  .word       0x3D316176                   # lui         $s1, 0x6176 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6086d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)24950 << 16));
label_6086d4:
    // 0x6086d4: 0x0  nop
    ctx->pc = 0x6086d4u;
    // NOP
label_6086d8:
    // 0x6086d8: 0x3d326176  .word       0x3D326176                   # lui         $s2, 0x6176 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6086d8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)24950 << 16));
label_6086dc:
    // 0x6086dc: 0x0  nop
    ctx->pc = 0x6086dcu;
    // NOP
label_6086e0:
    // 0x6086e0: 0x3d3177  .word       0x003D3177                   # INVALID     $at, $sp, 0x3177 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6086e0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x6086E0 raw=0x003D3177");
label_6086e4:
    // 0x6086e4: 0x3d3277  .word       0x003D3277                   # INVALID     $at, $sp, 0x3277 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6086e4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x6086E4 raw=0x003D3277");
label_6086e8:
    // 0x6086e8: 0x6d616370  ldr         $at, 0x6370($t3)
    ctx->pc = 0x6086e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25456); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_6086ec:
    // 0x6086ec: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6086ecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x6086EC raw=0x0000003D");
label_6086f0:
    // 0x6086f0: 0x6d6d7973  ldr         $t5, 0x7973($t3)
    ctx->pc = 0x6086f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 31091); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_6086f4:
    // 0x6086f4: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6086f4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x6086F4 raw=0x0000003D");
label_6086f8:
    // 0x6086f8: 0x3d676976  .word       0x3D676976                   # lui         $a3, 0x6976 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6086f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)26998 << 16));
label_6086fc:
    // 0x6086fc: 0x0  nop
    ctx->pc = 0x6086fcu;
    // NOP
label_608700:
    // 0x608700: 0x3d6174  teq         $at, $sp, 389
    ctx->pc = 0x608700u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_608704:
    // 0x608704: 0x3d7374  teq         $at, $sp, 461
    ctx->pc = 0x608704u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_608708:
    // 0x608708: 0x3d646976  .word       0x3D646976                   # lui         $a0, 0x6976 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26998 << 16));
label_60870c:
    // 0x60870c: 0x0  nop
    ctx->pc = 0x60870cu;
    // NOP
label_608710:
    // 0x608710: 0x3d61  .word       0x00003D61                   # addu        $a3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_608714:
    // 0x608714: 0x3d3170  tge         $at, $sp, 197
    ctx->pc = 0x608714u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_608718:
    // 0x608718: 0x3d3270  tge         $at, $sp, 201
    ctx->pc = 0x608718u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_60871c:
    // 0x60871c: 0x3d3370  tge         $at, $sp, 205
    ctx->pc = 0x60871cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_608720:
    // 0x608720: 0x3d676f  .word       0x003D676F                   # dsubu       $t4, $at, $sp # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608720u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) - GPR_U64(ctx, 29));
label_608724:
    // 0x608724: 0x3d646f  .word       0x003D646F                   # dsubu       $t4, $at, $sp # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608724u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) - GPR_U64(ctx, 29));
label_608728:
    // 0x608728: 0x78616d33  lq          $at, 0x6D33($v1)
    ctx->pc = 0x608728u;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 3), 27955)));
label_60872c:
    // 0x60872c: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60872cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x60872C raw=0x0000003D");
label_608730:
    // 0x608730: 0x68737433  ldl         $s3, 0x7433($v1)
    ctx->pc = 0x608730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29747); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_608734:
    // 0x608734: 0x3d776f  .word       0x003D776F                   # dsubu       $t6, $at, $sp # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608734u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) - GPR_U64(ctx, 29));
label_608738:
    // 0x608738: 0x69687433  ldl         $t0, 0x7433($t3)
    ctx->pc = 0x608738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29747); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_60873c:
    // 0x60873c: 0x3d6564  .word       0x003D6564                   # and         $t4, $at, $sp # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60873cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) & GPR_U64(ctx, 29));
label_608740:
    // 0x608740: 0x726f6373  .word       0x726F6373                   # INVALID     $s3, $t7, 0x6373 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608740u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x608740 raw=0x726F6373");
label_608744:
    // 0x608744: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608744u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608748:
    // 0x608748: 0x64253043  daddiu      $a1, $at, 0x3043
    ctx->pc = 0x608748u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)12355);
label_60874c:
    // 0x60874c: 0x54  .word       0x00000054                   # dsllv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60874cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_608750:
    // 0x608750: 0x54642543  bnel        $v1, $a0, . + 4 + (0x2543 << 2)
label_608754:
    if (ctx->pc == 0x608754u) {
        ctx->pc = 0x608758u;
        goto label_608758;
    }
    ctx->pc = 0x608750u;
    {
        const bool branch_taken_0x608750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x608750) {
            ctx->pc = 0x611C60u;
            return;
        }
    }
    ctx->pc = 0x608758u;
label_608758:
    // 0x608758: 0x642530  tge         $v1, $a0, 148
    ctx->pc = 0x608758u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_60875c:
    // 0x60875c: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60875cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608760:
    // 0x608760: 0x73257325  .word       0x73257325                   # INVALID     $t9, $a1, 0x7325 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608760u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x608760 raw=0x73257325");
label_608764:
    // 0x608764: 0x7325  .word       0x00007325                   # move        $t6, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608764u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608768:
    // 0x608768: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x608768u;
    throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x608768 raw=0x42000000");
label_60876c:
    // 0x60876c: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x60876cu;
    throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x60876C raw=0x42000000");
label_608770:
    // 0x608770: 0x42200000  .word       0x42200000                   # INVALID     $s1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x608770u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x608770 raw=0x42200000");
label_608774:
    // 0x608774: 0x42200000  .word       0x42200000                   # INVALID     $s1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x608774u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x608774 raw=0x42200000");
label_608778:
    // 0x608778: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x608778u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x608778 raw=0x41A00000");
label_60877c:
    // 0x60877c: 0x41a00000  .word       0x41A00000                   # INVALID     $t5, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x60877cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xD at 0x60877C raw=0x41A00000");
label_608780:
    // 0x608780: 0x41c00000  .word       0x41C00000                   # INVALID     $t6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x608780u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x608780 raw=0x41C00000");
label_608784:
    // 0x608784: 0x41c00000  .word       0x41C00000                   # INVALID     $t6, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x608784u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x608784 raw=0x41C00000");
label_608788:
    // 0x608788: 0x43160000  .word       0x43160000                   # INVALID     $t8, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x608788u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x608788 raw=0x43160000");
label_60878c:
    // 0x60878c: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x60878cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x60878C raw=0x42480000");
label_608790:
    // 0x608790: 0x43c80000  .word       0x43C80000                   # INVALID     $fp, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x608790u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1E at 0x608790 raw=0x43C80000");
label_608794:
    // 0x608794: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x608794u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x608794 raw=0x43960000");
label_608798:
    // 0x608798: 0x3d7866  .word       0x003D7866                   # xor         $t7, $at, $sp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608798u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 1) ^ GPR_U64(ctx, 29));
label_60879c:
    // 0x60879c: 0x3d7966  .word       0x003D7966                   # xor         $t7, $at, $sp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60879cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 1) ^ GPR_U64(ctx, 29));
label_6087a0:
    // 0x6087a0: 0x3d7766  .word       0x003D7766                   # xor         $t6, $at, $sp # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6087a0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) ^ GPR_U64(ctx, 29));
label_6087a4:
    // 0x6087a4: 0x3d6866  .word       0x003D6866                   # xor         $t5, $at, $sp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6087a4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) ^ GPR_U64(ctx, 29));
label_6087a8:
    // 0x6087a8: 0x3d3162  .word       0x003D3162                   # sub         $a2, $at, $sp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6087a8u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 1), GPR_U32(ctx, 29), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_6087ac:
    // 0x6087ac: 0x3d3262  .word       0x003D3262                   # sub         $a2, $at, $sp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6087acu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 1), GPR_U32(ctx, 29), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_6087b0:
    // 0x6087b0: 0x3d3362  .word       0x003D3362                   # sub         $a2, $at, $sp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6087b0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 1), GPR_U32(ctx, 29), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_6087b4:
    // 0x6087b4: 0x3d7462  .word       0x003D7462                   # sub         $t6, $at, $sp # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6087b4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 1), GPR_U32(ctx, 29), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_6087b8:
    // 0x6087b8: 0x3d6465  .word       0x003D6465                   # or          $t4, $at, $sp # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6087b8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) | GPR_U64(ctx, 29));
label_6087bc:
    // 0x6087bc: 0x3d6865  .word       0x003D6865                   # or          $t5, $at, $sp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6087bcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) | GPR_U64(ctx, 29));
label_6087c0:
    // 0x6087c0: 0x3d6c65  .word       0x003D6C65                   # or          $t5, $at, $sp # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6087c0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) | GPR_U64(ctx, 29));
label_6087c4:
    // 0x6087c4: 0x3d7365  .word       0x003D7365                   # or          $t6, $at, $sp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6087c4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) | GPR_U64(ctx, 29));
label_6087c8:
    // 0x6087c8: 0x3d646a  .word       0x003D646A                   # slt         $t4, $at, $sp # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6087c8u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 1) < (int64_t)GPR_S64(ctx, 29)) ? 1 : 0);
label_6087cc:
    // 0x6087cc: 0x3d686a  .word       0x003D686A                   # slt         $t5, $at, $sp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6087ccu;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 1) < (int64_t)GPR_S64(ctx, 29)) ? 1 : 0);
label_6087d0:
    // 0x6087d0: 0x3d6c6a  .word       0x003D6C6A                   # slt         $t5, $at, $sp # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6087d0u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 1) < (int64_t)GPR_S64(ctx, 29)) ? 1 : 0);
label_6087d4:
    // 0x6087d4: 0x3d6467  .word       0x003D6467                   # nor         $t4, $at, $sp # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6087d4u;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 1) | GPR_U64(ctx, 29)));
label_6087d8:
    // 0x6087d8: 0x3d6867  .word       0x003D6867                   # nor         $t5, $at, $sp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6087d8u;
    SET_GPR_U64(ctx, 13, ~(GPR_U64(ctx, 1) | GPR_U64(ctx, 29)));
label_6087dc:
    // 0x6087dc: 0x3d7370  tge         $at, $sp, 461
    ctx->pc = 0x6087dcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6087e0:
    // 0x6087e0: 0x3d6570  tge         $at, $sp, 405
    ctx->pc = 0x6087e0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6087e4:
    // 0x6087e4: 0x3d6d73  tltu        $at, $sp, 437
    ctx->pc = 0x6087e4u;
    if (GPR_U64(ctx, 1) < GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6087e8:
    // 0x6087e8: 0x3d7373  tltu        $at, $sp, 461
    ctx->pc = 0x6087e8u;
    if (GPR_U64(ctx, 1) < GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6087ec:
    // 0x6087ec: 0x3d7073  tltu        $at, $sp, 449
    ctx->pc = 0x6087ecu;
    if (GPR_U64(ctx, 1) < GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6087f0:
    // 0x6087f0: 0x3d6473  tltu        $at, $sp, 401
    ctx->pc = 0x6087f0u;
    if (GPR_U64(ctx, 1) < GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6087f4:
    // 0x6087f4: 0x3d7773  tltu        $at, $sp, 477
    ctx->pc = 0x6087f4u;
    if (GPR_U64(ctx, 1) < GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6087f8:
    // 0x6087f8: 0x3d6a73  tltu        $at, $sp, 425
    ctx->pc = 0x6087f8u;
    if (GPR_U64(ctx, 1) < GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6087fc:
    // 0x6087fc: 0x0  nop
    ctx->pc = 0x6087fcu;
    // NOP
label_608800:
    // 0x608800: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_608804:
    if (ctx->pc == 0x608804u) {
        ctx->pc = 0x608804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x608800u;
        // 0x608804: 0x67654c  .word       0x0067654C                   # syscall     405 # 00670000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->pc = 0x608808u;
        runtime->handleSyscall(rdram, ctx, 0x19D95u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x608808u;
        goto label_608808;
    }
    ctx->pc = 0x608800u;
    {
        const bool branch_taken_0x608800 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x608800) {
            ctx->pc = 0x608804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x608800u;
            // 0x608804: 0x67654c  .word       0x0067654C                   # syscall     405 # 00670000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            ctx->pc = 0x608808u;
            runtime->handleSyscall(rdram, ctx, 0x19D95u);
            ctx->in_delay_slot = false;
            ctx->pc = 0x623DA8u;
            return;
        }
    }
    ctx->pc = 0x608808u;
label_608808:
    // 0x608808: 0x726f6373  .word       0x726F6373                   # INVALID     $s3, $t7, 0x6373 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608808u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x608808 raw=0x726F6373");
label_60880c:
    // 0x60880c: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60880cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608810:
    // 0x608810: 0x6c707865  ldr         $s0, 0x7865($v1)
    ctx->pc = 0x608810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30821); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_608814:
    // 0x608814: 0x65646f  .word       0x0065646F                   # dsubu       $t4, $v1, $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608814u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) - GPR_U64(ctx, 5));
label_608818:
    // 0x608818: 0x63656c65  daddi       $a1, $k1, 0x6C65
    ctx->pc = 0x608818u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_60881c:
    // 0x60881c: 0x6f7274  teq         $v1, $t7, 457
    ctx->pc = 0x60881cu;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 15)) { runtime->handleTrap(rdram, ctx); }
label_608820:
    // 0x608820: 0x3d6573  tltu        $at, $sp, 405
    ctx->pc = 0x608820u;
    if (GPR_U64(ctx, 1) < GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_608824:
    // 0x608824: 0x0  nop
    ctx->pc = 0x608824u;
    // NOP
label_608828:
    // 0x608828: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x608828u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_60882c:
    // 0x60882c: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x60882cu;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608830:
    // 0x608830: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x608830u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608834:
    // 0x608834: 0x0  nop
    ctx->pc = 0x608834u;
    // NOP
label_608838:
    // 0x608838: 0x706d756a  .word       0x706D756A                   # INVALID     $v1, $t5, 0x756A # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608838u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2A at 0x608838 raw=0x706D756A");
label_60883c:
    // 0x60883c: 0x7525  .word       0x00007525                   # move        $t6, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60883cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608840:
    // 0x608840: 0x6e696f70  ldr         $t1, 0x6F70($s3)
    ctx->pc = 0x608840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28528); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_608844:
    // 0x608844: 0x3d7374  teq         $at, $sp, 461
    ctx->pc = 0x608844u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_608848:
    // 0x608848: 0x6f6c6f73  ldr         $t4, 0x6F73($k1)
    ctx->pc = 0x608848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28531); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_60884c:
    // 0x60884c: 0x3d  .word       0x0000003D                   # INVALID     $zero, $zero, 0x3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60884cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x60884C raw=0x0000003D");
label_608850:
    // 0x608850: 0x726f6373  .word       0x726F6373                   # INVALID     $s3, $t7, 0x6373 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608850u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x608850 raw=0x726F6373");
label_608854:
    // 0x608854: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608854u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608858:
    // 0x608858: 0x646f6f67  daddiu      $t7, $v1, 0x6F67
    ctx->pc = 0x608858u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28519);
label_60885c:
    // 0x60885c: 0x36  tne         $zero, $zero, 0
    ctx->pc = 0x60885cu;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608860:
    // 0x608860: 0x646f6f67  daddiu      $t7, $v1, 0x6F67
    ctx->pc = 0x608860u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28519);
label_608864:
    // 0x608864: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608864u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608868:
    // 0x608868: 0x25646162  addiu       $a0, $t3, 0x6162
    ctx->pc = 0x608868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 24930));
label_60886c:
    // 0x60886c: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60886cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_608870:
    // 0x608870: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608870u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_608874:
    // 0x608874: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608874u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_608878:
    // 0x608878: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608878u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_60887c:
    // 0x60887c: 0x3fc00000  .word       0x3FC00000                   # lui         $zero, 0x0 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60887cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_608880:
    // 0x608880: 0x3fc00000  .word       0x3FC00000                   # lui         $zero, 0x0 # 03C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608880u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_608884:
    // 0x608884: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608884u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_608888:
    // 0x608888: 0x3d6a6e  .word       0x003D6A6E                   # dsub        $t5, $at, $sp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608888u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 29); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_60888c:
    // 0x60888c: 0x3d6e68  .word       0x003D6E68                   # mfsa        $t5 # 003D0640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x60888cu;
    SET_GPR_U32(ctx, 13, ctx->sa);
label_608890:
    // 0x608890: 0x3d7073  tltu        $at, $sp, 449
    ctx->pc = 0x608890u;
    if (GPR_U64(ctx, 1) < GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_608894:
    // 0x608894: 0x3d6d74  teq         $at, $sp, 437
    ctx->pc = 0x608894u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_608898:
    // 0x608898: 0x3d7473  tltu        $at, $sp, 465
    ctx->pc = 0x608898u;
    if (GPR_U64(ctx, 1) < GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_60889c:
    // 0x60889c: 0x3d6473  tltu        $at, $sp, 401
    ctx->pc = 0x60889cu;
    if (GPR_U64(ctx, 1) < GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6088a0:
    // 0x6088a0: 0x3d7068  .word       0x003D7068                   # mfsa        $t6 # 003D0040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x6088a0u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_6088a4:
    // 0x6088a4: 0x3d6468  .word       0x003D6468                   # mfsa        $t4 # 003D0440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x6088a4u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_6088a8:
    // 0x6088a8: 0x3d6466  .word       0x003D6466                   # xor         $t4, $at, $sp # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6088a8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) ^ GPR_U64(ctx, 29));
label_6088ac:
    // 0x6088ac: 0x3d6464  .word       0x003D6464                   # and         $t4, $at, $sp # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6088acu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) & GPR_U64(ctx, 29));
label_6088b0:
    // 0x6088b0: 0x3d7370  tge         $at, $sp, 461
    ctx->pc = 0x6088b0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6088b4:
    // 0x6088b4: 0x3d6e66  .word       0x003D6E66                   # xor         $t5, $at, $sp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6088b4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) ^ GPR_U64(ctx, 29));
label_6088b8:
    // 0x6088b8: 0x3d6866  .word       0x003D6866                   # xor         $t5, $at, $sp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6088b8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 1) ^ GPR_U64(ctx, 29));
label_6088bc:
    // 0x6088bc: 0x3d786f  .word       0x003D786F                   # dsubu       $t7, $at, $sp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6088bcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 1) - GPR_U64(ctx, 29));
label_6088c0:
    // 0x6088c0: 0x3d796f  .word       0x003D796F                   # dsubu       $t7, $at, $sp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6088c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 1) - GPR_U64(ctx, 29));
label_6088c4:
    // 0x6088c4: 0x3d7867  .word       0x003D7867                   # nor         $t7, $at, $sp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6088c4u;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 1) | GPR_U64(ctx, 29)));
label_6088c8:
    // 0x6088c8: 0x3d7967  .word       0x003D7967                   # nor         $t7, $at, $sp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6088c8u;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 1) | GPR_U64(ctx, 29)));
label_6088cc:
    // 0x6088cc: 0x3d7362  .word       0x003D7362                   # sub         $t6, $at, $sp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6088ccu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 1), GPR_U32(ctx, 29), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_6088d0:
    // 0x6088d0: 0x3d7873  tltu        $at, $sp, 481
    ctx->pc = 0x6088d0u;
    if (GPR_U64(ctx, 1) < GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6088d4:
    // 0x6088d4: 0x3d7973  tltu        $at, $sp, 485
    ctx->pc = 0x6088d4u;
    if (GPR_U64(ctx, 1) < GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6088d8:
    // 0x6088d8: 0x3d6677  .word       0x003D6677                   # INVALID     $at, $sp, 0x6677 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6088d8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x6088D8 raw=0x003D6677");
label_6088dc:
    // 0x6088dc: 0x3d6170  tge         $at, $sp, 389
    ctx->pc = 0x6088dcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6088e0:
    // 0x6088e0: 0x3d6e6e  .word       0x003D6E6E                   # dsub        $t5, $at, $sp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6088e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 29); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_6088e4:
    // 0x6088e4: 0x3d6570  tge         $at, $sp, 405
    ctx->pc = 0x6088e4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6088e8:
    // 0x6088e8: 0x72626d6f  .word       0x72626D6F                   # INVALID     $s3, $v0, 0x6D6F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x6088e8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x6088E8 raw=0x72626D6F");
label_6088ec:
    // 0x6088ec: 0x3265  .word       0x00003265                   # move        $a2, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6088ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_6088f0:
    // 0x6088f0: 0x756e696d  .word       0x756E696D                   # INVALID     $t3, $t6, 0x696D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6088f0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x6088F0 raw=0x756E696D");
label_6088f4:
    // 0x6088f4: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x6088f4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6088f8:
    // 0x6088f8: 0x444f4f47  .word       0x444F4F47                   # cfc1        $t7, $9 # 00000747 <InstrIdType: R5900_COP1>
    ctx->pc = 0x6088f8u;
    SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
label_6088fc:
    // 0x6088fc: 0x0  nop
    ctx->pc = 0x6088fcu;
    // NOP
label_608900:
    // 0x608900: 0x444142  .word       0x00444142                   # srl         $t0, $a0, 5 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608900u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
label_608904:
    // 0x608904: 0x0  nop
    ctx->pc = 0x608904u;
    // NOP
label_608908:
    // 0x608908: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608908u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_60890c:
    // 0x60890c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60890cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_608910:
    // 0x608910: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608910u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_608914:
    // 0x608914: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608914u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_608918:
    // 0x608918: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608918u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_60891c:
    // 0x60891c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60891cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_608920:
    // 0x608920: 0x3d7361  .word       0x003D7361                   # addu        $t6, $at, $sp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608920u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 29)));
label_608924:
    // 0x608924: 0x3d6574  teq         $at, $sp, 405
    ctx->pc = 0x608924u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_608928:
    // 0x608928: 0x3d746e  .word       0x003D746E                   # dsub        $t6, $at, $sp # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608928u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 29); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_60892c:
    // 0x60892c: 0x3d7470  tge         $at, $sp, 465
    ctx->pc = 0x60892cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_608930:
    // 0x608930: 0x3d3077  .word       0x003D3077                   # INVALID     $at, $sp, 0x3077 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608930u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x608930 raw=0x003D3077");
label_608934:
    // 0x608934: 0x3d3177  .word       0x003D3177                   # INVALID     $at, $sp, 0x3177 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608934u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x608934 raw=0x003D3177");
label_608938:
    // 0x608938: 0x3d3277  .word       0x003D3277                   # INVALID     $at, $sp, 0x3277 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608938u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x608938 raw=0x003D3277");
label_60893c:
    // 0x60893c: 0x3d7374  teq         $at, $sp, 461
    ctx->pc = 0x60893cu;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_608940:
    // 0x608940: 0x3d6974  teq         $at, $sp, 421
    ctx->pc = 0x608940u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_608944:
    // 0x608944: 0x3d3061  .word       0x003D3061                   # addu        $a2, $at, $sp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 29)));
label_608948:
    // 0x608948: 0x3d3161  .word       0x003D3161                   # addu        $a2, $at, $sp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 29)));
label_60894c:
    // 0x60894c: 0x3d3261  .word       0x003D3261                   # addu        $a2, $at, $sp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60894cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 29)));
label_608950:
    // 0x608950: 0x70727562  .word       0x70727562                   # INVALID     $v1, $s2, 0x7562 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608950u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x608950 raw=0x70727562");
label_608954:
    // 0x608954: 0x0  nop
    ctx->pc = 0x608954u;
    // NOP
label_608958:
    // 0x608958: 0x41c80000  .word       0x41C80000                   # INVALID     $t6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x608958u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x608958 raw=0x41C80000");
label_60895c:
    // 0x60895c: 0xc2480000  ll          $t0, 0x0($s2)
    ctx->pc = 0x60895cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_608960:
    // 0x608960: 0x43340000  .word       0x43340000                   # INVALID     $t9, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x608960u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x608960 raw=0x43340000");
label_608964:
    // 0x608964: 0x0  nop
    ctx->pc = 0x608964u;
    // NOP
label_608968:
    // 0x608968: 0x46524550  .word       0x46524550                   # INVALID     $s2, $s2, 0x4550 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x608968u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x10 at 0x608968 raw=0x46524550");
label_60896c:
    // 0x60896c: 0x544345  .word       0x00544345                   # INVALID     $v0, $s4, 0x4345 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60896cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x60896C raw=0x00544345");
label_608970:
    // 0x608970: 0x756e6f62  .word       0x756E6F62                   # INVALID     $t3, $t6, 0x6F62 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608970u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x608970 raw=0x756E6F62");
label_608974:
    // 0x608974: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x608974u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608978:
    // 0x608978: 0x3d7868  .word       0x003D7868                   # mfsa        $t7 # 003D0040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x608978u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_60897c:
    // 0x60897c: 0x3d7968  .word       0x003D7968                   # mfsa        $t7 # 003D0140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x60897cu;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_608980:
    // 0x608980: 0x3d7a68  .word       0x003D7A68                   # mfsa        $t7 # 003D0240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x608980u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_608984:
    // 0x608984: 0x3d7863  .word       0x003D7863                   # subu        $t7, $at, $sp # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608984u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 1), GPR_U32(ctx, 29)));
label_608988:
    // 0x608988: 0x3d7963  .word       0x003D7963                   # subu        $t7, $at, $sp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608988u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 1), GPR_U32(ctx, 29)));
label_60898c:
    // 0x60898c: 0x3d7a63  .word       0x003D7A63                   # subu        $t7, $at, $sp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60898cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 1), GPR_U32(ctx, 29)));
label_608990:
    // 0x608990: 0x3d7965  .word       0x003D7965                   # or          $t7, $at, $sp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608990u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 1) | GPR_U64(ctx, 29));
label_608994:
    // 0x608994: 0x3d7666  .word       0x003D7666                   # xor         $t6, $at, $sp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608994u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) ^ GPR_U64(ctx, 29));
label_608998:
    // 0x608998: 0x3d6970  tge         $at, $sp, 421
    ctx->pc = 0x608998u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_60899c:
    // 0x60899c: 0x3d6179  .word       0x003D6179                   # INVALID     $at, $sp, 0x6179 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60899cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x60899C raw=0x003D6179");
label_6089a0:
    // 0x6089a0: 0x3d7370  tge         $at, $sp, 461
    ctx->pc = 0x6089a0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6089a4:
    // 0x6089a4: 0x3d7379  .word       0x003D7379                   # INVALID     $at, $sp, 0x7379 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6089a4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x6089A4 raw=0x003D7379");
label_6089a8:
    // 0x6089a8: 0x3d7473  tltu        $at, $sp, 465
    ctx->pc = 0x6089a8u;
    if (GPR_U64(ctx, 1) < GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6089ac:
    // 0x6089ac: 0x3d7762  .word       0x003D7762                   # sub         $t6, $at, $sp # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6089acu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 1), GPR_U32(ctx, 29), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_6089b0:
    // 0x6089b0: 0x3d6574  teq         $at, $sp, 405
    ctx->pc = 0x6089b0u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6089b4:
    // 0x6089b4: 0x3d7068  .word       0x003D7068                   # mfsa        $t6 # 003D0040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x6089b4u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_6089b8:
    // 0x6089b8: 0x3d6976  tne         $at, $sp, 421
    ctx->pc = 0x6089b8u;
    if (GPR_U64(ctx, 1) != GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6089bc:
    // 0x6089bc: 0x3d6870  tge         $at, $sp, 417
    ctx->pc = 0x6089bcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_6089c0:
    // 0x6089c0: 0x726f6373  .word       0x726F6373                   # INVALID     $s3, $t7, 0x6373 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x6089c0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x6089C0 raw=0x726F6373");
label_6089c4:
    // 0x6089c4: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6089c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_6089c8:
    // 0x6089c8: 0x46524550  .word       0x46524550                   # INVALID     $s2, $s2, 0x4550 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x6089c8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x10 at 0x6089C8 raw=0x46524550");
label_6089cc:
    // 0x6089cc: 0x544345  .word       0x00544345                   # INVALID     $v0, $s4, 0x4345 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6089ccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x6089CC raw=0x00544345");
label_6089d0:
    // 0x6089d0: 0x756e6f62  .word       0x756E6F62                   # INVALID     $t3, $t6, 0x6F62 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6089d0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x6089D0 raw=0x756E6F62");
label_6089d4:
    // 0x6089d4: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x6089d4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6089d8:
    // 0x6089d8: 0x6e616c70  ldr         $at, 0x6C70($s3)
    ctx->pc = 0x6089d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 27760); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_6089dc:
    // 0x6089dc: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x6089dcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6089e0:
    // 0x6089e0: 0x3d626e  .word       0x003D626E                   # dsub        $t4, $at, $sp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6089e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 29); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_6089e4:
    // 0x6089e4: 0x3d6f6d  .word       0x003D6F6D                   # daddu       $t5, $at, $sp # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6089e4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 29));
label_6089e8:
    // 0x6089e8: 0x3d7567  .word       0x003D7567                   # nor         $t6, $at, $sp # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6089e8u;
    SET_GPR_U64(ctx, 14, ~(GPR_U64(ctx, 1) | GPR_U64(ctx, 29)));
label_6089ec:
    // 0x6089ec: 0x3d6163  .word       0x003D6163                   # subu        $t4, $at, $sp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6089ecu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 1), GPR_U32(ctx, 29)));
label_6089f0:
    // 0x6089f0: 0x3d726d  .word       0x003D726D                   # daddu       $t6, $at, $sp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6089f0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 29));
label_6089f4:
    // 0x6089f4: 0x0  nop
    ctx->pc = 0x6089f4u;
    // NOP
label_6089f8:
    // 0x6089f8: 0x3d74726d  .word       0x3D74726D                   # lui         $s4, 0x726D # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6089f8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)29293 << 16));
label_6089fc:
    // 0x6089fc: 0x0  nop
    ctx->pc = 0x6089fcu;
    // NOP
label_608a00:
    // 0x608a00: 0x3d7267  .word       0x003D7267                   # nor         $t6, $at, $sp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608a00u;
    SET_GPR_U64(ctx, 14, ~(GPR_U64(ctx, 1) | GPR_U64(ctx, 29)));
label_608a04:
    // 0x608a04: 0x0  nop
    ctx->pc = 0x608a04u;
    // NOP
label_608a08:
    // 0x608a08: 0x3d747267  .word       0x3D747267                   # lui         $s4, 0x7267 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608a08u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)29287 << 16));
label_608a0c:
    // 0x608a0c: 0x0  nop
    ctx->pc = 0x608a0cu;
    // NOP
label_608a10:
    // 0x608a10: 0x3d7263  .word       0x003D7263                   # subu        $t6, $at, $sp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608a10u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 1), GPR_U32(ctx, 29)));
label_608a14:
    // 0x608a14: 0x0  nop
    ctx->pc = 0x608a14u;
    // NOP
label_608a18:
    // 0x608a18: 0x3d747263  .word       0x3D747263                   # lui         $s4, 0x7263 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608a18u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)29283 << 16));
label_608a1c:
    // 0x608a1c: 0x0  nop
    ctx->pc = 0x608a1cu;
    // NOP
label_608a20:
    // 0x608a20: 0x3d736d  .word       0x003D736D                   # daddu       $t6, $at, $sp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608a20u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 29));
label_608a24:
    // 0x608a24: 0x0  nop
    ctx->pc = 0x608a24u;
    // NOP
label_608a28:
    // 0x608a28: 0x3d72736d  .word       0x3D72736D                   # lui         $s2, 0x736D # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608a28u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)29549 << 16));
label_608a2c:
    // 0x608a2c: 0x0  nop
    ctx->pc = 0x608a2cu;
    // NOP
label_608a30:
    // 0x608a30: 0x3d7367  .word       0x003D7367                   # nor         $t6, $at, $sp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608a30u;
    SET_GPR_U64(ctx, 14, ~(GPR_U64(ctx, 1) | GPR_U64(ctx, 29)));
label_608a34:
    // 0x608a34: 0x0  nop
    ctx->pc = 0x608a34u;
    // NOP
label_608a38:
    // 0x608a38: 0x3d727367  .word       0x3D727367                   # lui         $s2, 0x7367 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608a38u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)29543 << 16));
label_608a3c:
    // 0x608a3c: 0x0  nop
    ctx->pc = 0x608a3cu;
    // NOP
label_608a40:
    // 0x608a40: 0x3d7363  .word       0x003D7363                   # subu        $t6, $at, $sp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608a40u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 1), GPR_U32(ctx, 29)));
label_608a44:
    // 0x608a44: 0x0  nop
    ctx->pc = 0x608a44u;
    // NOP
label_608a48:
    // 0x608a48: 0x3d727363  .word       0x3D727363                   # lui         $s2, 0x7363 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608a48u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)29539 << 16));
label_608a4c:
    // 0x608a4c: 0x0  nop
    ctx->pc = 0x608a4cu;
    // NOP
label_608a50:
    // 0x608a50: 0x3d766d  .word       0x003D766D                   # daddu       $t6, $at, $sp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608a50u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 29));
label_608a54:
    // 0x608a54: 0x3d7667  .word       0x003D7667                   # nor         $t6, $at, $sp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608a54u;
    SET_GPR_U64(ctx, 14, ~(GPR_U64(ctx, 1) | GPR_U64(ctx, 29)));
label_608a58:
    // 0x608a58: 0x3d7663  .word       0x003D7663                   # subu        $t6, $at, $sp # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608a58u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 1), GPR_U32(ctx, 29)));
label_608a5c:
    // 0x608a5c: 0x0  nop
    ctx->pc = 0x608a5cu;
    // NOP
label_608a60:
    // 0x608a60: 0x73736970  .word       0x73736970                   # INVALID     $k1, $s3, 0x6970 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x608a60u;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0x5 at 0x608A60 raw=0x73736970");
label_608a64:
    // 0x608a64: 0x323065  .word       0x00323065                   # or          $a2, $at, $s2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608a64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 1) | GPR_U64(ctx, 18));
label_608a68:
    // 0x608a68: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608a68u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x608A68 raw=0x00000001");
label_608a6c:
    // 0x608a6c: 0x0  nop
    ctx->pc = 0x608a6cu;
    // NOP
label_608a70:
    // 0x608a70: 0x69706970  ldl         $s0, 0x6970($t3)
    ctx->pc = 0x608a70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26992); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_608a74:
    // 0x608a74: 0x0  nop
    ctx->pc = 0x608a74u;
    // NOP
label_608a78:
    // 0x608a78: 0x726f6373  .word       0x726F6373                   # INVALID     $s3, $t7, 0x6373 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608a78u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x608A78 raw=0x726F6373");
label_608a7c:
    // 0x608a7c: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608a7cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608a80:
    // 0x608a80: 0x756e6f62  .word       0x756E6F62                   # INVALID     $t3, $t6, 0x6F62 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608a80u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x608A80 raw=0x756E6F62");
label_608a84:
    // 0x608a84: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x608a84u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608a88:
    // 0x608a88: 0x31796c66  andi        $t9, $t3, 0x6C66
    ctx->pc = 0x608a88u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)27750);
label_608a8c:
    // 0x608a8c: 0x0  nop
    ctx->pc = 0x608a8cu;
    // NOP
label_608a90:
    // 0x608a90: 0x32796c66  andi        $t9, $s3, 0x6C66
    ctx->pc = 0x608a90u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)27750);
label_608a94:
    // 0x608a94: 0x0  nop
    ctx->pc = 0x608a94u;
    // NOP
label_608a98:
    // 0x608a98: 0x33796c66  andi        $t9, $k1, 0x6C66
    ctx->pc = 0x608a98u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 27) & (uint64_t)(uint16_t)27750);
label_608a9c:
    // 0x608a9c: 0x0  nop
    ctx->pc = 0x608a9cu;
    // NOP
label_608aa0:
    // 0x608aa0: 0x6d6e612e  ldr         $t6, 0x612E($t3)
    ctx->pc = 0x608aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24878); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_608aa4:
    // 0x608aa4: 0x0  nop
    ctx->pc = 0x608aa4u;
    // NOP
label_608aa8:
    // 0x608aa8: 0x8000  sll         $s0, $zero, 0
    ctx->pc = 0x608aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_608aac:
    // 0x608aac: 0x0  nop
    ctx->pc = 0x608aacu;
    // NOP
label_608ab0:
    // 0x608ab0: 0x2e646f6c  sltiu       $a0, $s3, 0x6F6C
    ctx->pc = 0x608ab0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)28524) ? 1 : 0);
label_608ab4:
    // 0x608ab4: 0x657375  .word       0x00657375                   # INVALID     $v1, $a1, 0x7375 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608ab4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x608AB4 raw=0x00657375");
label_608ab8:
    // 0x608ab8: 0x74636572  .word       0x74636572                   # INVALID     $v1, $v1, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608ab8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x608AB8 raw=0x74636572");
label_608abc:
    // 0x608abc: 0x782e  dsub        $t7, $zero, $zero
    ctx->pc = 0x608abcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, r); }
label_608ac0:
    // 0x608ac0: 0x74636572  .word       0x74636572                   # INVALID     $v1, $v1, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608ac0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x608AC0 raw=0x74636572");
label_608ac4:
    // 0x608ac4: 0x792e  .word       0x0000792E                   # dsub        $t7, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608ac4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, r); }
label_608ac8:
    // 0x608ac8: 0x74636572  .word       0x74636572                   # INVALID     $v1, $v1, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608ac8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x608AC8 raw=0x74636572");
label_608acc:
    // 0x608acc: 0x772e  .word       0x0000772E                   # dsub        $t6, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608accu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_608ad0:
    // 0x608ad0: 0x74636572  .word       0x74636572                   # INVALID     $v1, $v1, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608ad0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x608AD0 raw=0x74636572");
label_608ad4:
    // 0x608ad4: 0x682e  dsub        $t5, $zero, $zero
    ctx->pc = 0x608ad4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, r); }
label_608ad8:
    // 0x608ad8: 0x656d616e  daddiu      $t5, $t3, 0x616E
    ctx->pc = 0x608ad8u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
label_608adc:
    // 0x608adc: 0x0  nop
    ctx->pc = 0x608adcu;
    // NOP
label_608ae0:
    // 0x608ae0: 0x706f6f6c  .word       0x706F6F6C                   # INVALID     $v1, $t7, 0x6F6C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608ae0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x608AE0 raw=0x706F6F6C");
label_608ae4:
    // 0x608ae4: 0x0  nop
    ctx->pc = 0x608ae4u;
    // NOP
label_608ae8:
    // 0x608ae8: 0x756c6f76  .word       0x756C6F76                   # INVALID     $t3, $t4, 0x6F76 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608ae8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x608AE8 raw=0x756C6F76");
label_608aec:
    // 0x608aec: 0x656d  .word       0x0000656D                   # daddu       $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608aecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_608af0:
    // 0x608af0: 0x6433  tltu        $zero, $zero, 400
    ctx->pc = 0x608af0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608af4:
    // 0x608af4: 0x0  nop
    ctx->pc = 0x608af4u;
    // NOP
label_608af8:
    // 0x608af8: 0x6e2e6264  ldr         $t6, 0x6264($s1)
    ctx->pc = 0x608af8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 25188); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_608afc:
    // 0x608afc: 0x656d61  .word       0x00656D61                   # addu        $t5, $v1, $a1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608afcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_608b00:
    // 0x608b00: 0x642e6264  daddiu      $t6, $at, 0x6264
    ctx->pc = 0x608b00u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)25188);
label_608b04:
    // 0x608b04: 0x637365  .word       0x00637365                   # or          $t6, $v1, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608b04u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) | GPR_U64(ctx, 3));
label_608b08:
    // 0x608b08: 0x672e6169  daddiu      $t6, $t9, 0x6169
    ctx->pc = 0x608b08u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)24937);
label_608b0c:
    // 0x608b0c: 0x6c616f  .word       0x006C616F                   # dsubu       $t4, $v1, $t4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608b0cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) - GPR_U64(ctx, 12));
label_608b10:
    // 0x608b10: 0x6d2e7866  ldr         $t6, 0x7866($t1)
    ctx->pc = 0x608b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 30822); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_608b14:
    // 0x608b14: 0x646f  .word       0x0000646F                   # dsubu       $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608b14u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_608b18:
    // 0x608b18: 0x732e7866  .word       0x732E7866                   # INVALID     $t9, $t6, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608b18u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x608B18 raw=0x732E7866");
label_608b1c:
    // 0x608b1c: 0x7865  .word       0x00007865                   # move        $t7, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608b1cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608b20:
    // 0x608b20: 0x662e7866  daddiu      $t6, $s1, 0x7866
    ctx->pc = 0x608b20u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)30822);
label_608b24:
    // 0x608b24: 0x726165  .word       0x00726165                   # or          $t4, $v1, $s2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608b24u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
label_608b28:
    // 0x608b28: 0x652e7866  daddiu      $t6, $t1, 0x7866
    ctx->pc = 0x608b28u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)30822);
label_608b2c:
    // 0x608b2c: 0x79766e  .word       0x0079766E                   # dsub        $t6, $v1, $t9 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608b2cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 25); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_608b30:
    // 0x608b30: 0x662e7172  daddiu      $t6, $s1, 0x7172
    ctx->pc = 0x608b30u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)29042);
label_608b34:
    // 0x608b34: 0x656b61  .word       0x00656B61                   # addu        $t5, $v1, $a1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608b34u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_608b38:
    // 0x608b38: 0x662e7866  daddiu      $t6, $s1, 0x7866
    ctx->pc = 0x608b38u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)30822);
label_608b3c:
    // 0x608b3c: 0x6b726f  .word       0x006B726F                   # dsubu       $t6, $v1, $t3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608b3cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) - GPR_U64(ctx, 11));
label_608b40:
    // 0x608b40: 0x732e7866  .word       0x732E7866                   # INVALID     $t9, $t6, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608b40u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x608B40 raw=0x732E7866");
label_608b44:
    // 0x608b44: 0x6e69  .word       0x00006E69                   # mtsa        $zero # 00006E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x608b44u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_608b48:
    // 0x608b48: 0x612e7172  daddi       $t6, $t1, 0x7172
    ctx->pc = 0x608b48u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)29042; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_608b4c:
    // 0x608b4c: 0x616572  tlt         $v1, $at, 405
    ctx->pc = 0x608b4cu;
    if (GPR_S64(ctx, 3) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_608b50:
    // 0x608b50: 0x6d696e61  ldr         $t1, 0x6E61($t3)
    ctx->pc = 0x608b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_608b54:
    // 0x608b54: 0x44492e  .word       0x0044492E                   # dsub        $t1, $v0, $a0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608b54u;
    { int64_t a = (int64_t)GPR_S64(ctx, 2); int64_t b = (int64_t)GPR_S64(ctx, 4); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_608b58:
    // 0x608b58: 0x6c656466  ldr         $a1, 0x6466($v1)
    ctx->pc = 0x608b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25702); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_608b5c:
    // 0x608b5c: 0x7961  .word       0x00007961                   # addu        $t7, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608b5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_608b60:
    // 0x608b60: 0x6b726f66  ldl         $s2, 0x6F66($k1)
    ctx->pc = 0x608b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28518); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_608b64:
    // 0x608b64: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x608b64u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608b68:
    // 0x608b68: 0x64697369  daddiu      $t1, $v1, 0x7369
    ctx->pc = 0x608b68u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29545);
label_608b6c:
    // 0x608b6c: 0x656c  .word       0x0000656C                   # dadd        $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608b6cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_608b70:
    // 0x608b70: 0x6777656e  daddiu      $s7, $k1, 0x656E
    ctx->pc = 0x608b70u;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25966);
label_608b74:
    // 0x608b74: 0x656d61  .word       0x00656D61                   # addu        $t5, $v1, $a1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608b74u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_608b78:
    // 0x608b78: 0x6e696f70  ldr         $t1, 0x6F70($s3)
    ctx->pc = 0x608b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28528); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_608b7c:
    // 0x608b7c: 0x7374  teq         $zero, $zero, 461
    ctx->pc = 0x608b7cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608b80:
    // 0x608b80: 0x65736572  daddiu      $s3, $t3, 0x6572
    ctx->pc = 0x608b80u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25970);
label_608b84:
    // 0x608b84: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x608b84u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608b88:
    // 0x608b88: 0x65786573  daddiu      $t8, $t3, 0x6573
    ctx->pc = 0x608b88u;
    SET_GPR_S64(ctx, 24, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25971);
label_608b8c:
    // 0x608b8c: 0x0  nop
    ctx->pc = 0x608b8cu;
    // NOP
label_608b90:
    // 0x608b90: 0x6e676174  ldr         $a3, 0x6174($s3)
    ctx->pc = 0x608b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_608b94:
    // 0x608b94: 0x656d61  .word       0x00656D61                   # addu        $t5, $v1, $a1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608b94u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_608b98:
    // 0x608b98: 0x72656877  .word       0x72656877                   # psrah       $t5, $a1, 1 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608b98u;
    SET_GPR_VEC(ctx, 13, _mm_srai_epi16(GPR_VEC(ctx, 5), 1));
label_608b9c:
    // 0x608b9c: 0x782e65  .word       0x00782E65                   # or          $a1, $v1, $t8 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608b9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 24));
label_608ba0:
    // 0x608ba0: 0x72656877  .word       0x72656877                   # psrah       $t5, $a1, 1 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608ba0u;
    SET_GPR_VEC(ctx, 13, _mm_srai_epi16(GPR_VEC(ctx, 5), 1));
label_608ba4:
    // 0x608ba4: 0x792e65  .word       0x00792E65                   # or          $a1, $v1, $t9 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608ba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 25));
label_608ba8:
    // 0x608ba8: 0x72656877  .word       0x72656877                   # psrah       $t5, $a1, 1 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608ba8u;
    SET_GPR_VEC(ctx, 13, _mm_srai_epi16(GPR_VEC(ctx, 5), 1));
label_608bac:
    // 0x608bac: 0x7a2e65  .word       0x007A2E65                   # or          $a1, $v1, $k0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608bacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 26));
label_608bb0:
    // 0x608bb0: 0x666f7270  daddiu      $t7, $s3, 0x7270
    ctx->pc = 0x608bb0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)29296);
label_608bb4:
    // 0x608bb4: 0x656c69  .word       0x00656C69                   # mtsa        $v1 # 00056C40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x608bb4u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_608bb8:
    // 0x608bb8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608bb8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x608BB8 raw=0x00000001");
label_608bbc:
    // 0x608bbc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608bbcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x608BBC raw=0x00000001");
label_608bc0:
    // 0x608bc0: 0x0  nop
    ctx->pc = 0x608bc0u;
    // NOP
label_608bc4:
    // 0x608bc4: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x608bc4u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608bc8:
    // 0x608bc8: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x608bc8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608bcc:
    // 0x608bcc: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608bccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608bd0:
    // 0x608bd0: 0x30257830  andi        $a1, $at, 0x7830
    ctx->pc = 0x608bd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)30768);
label_608bd4:
    // 0x608bd4: 0x7838  dsll        $t7, $zero, 0
    ctx->pc = 0x608bd4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) << 0);
label_608bd8:
    // 0x608bd8: 0x6625  .word       0x00006625                   # move        $t4, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608bd8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608bdc:
    // 0x608bdc: 0x0  nop
    ctx->pc = 0x608bdcu;
    // NOP
label_608be0:
    // 0x608be0: 0x40600000  .word       0x40600000                   # INVALID     $v1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x608be0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x3 at 0x608BE0 raw=0x40600000");
label_608be4:
    // 0x608be4: 0x40800000  mtc0        $zero, Index
    ctx->pc = 0x608be4u;
    ctx->cop0_index = GPR_U32(ctx, 0) & 0x3F;
label_608be8:
    // 0x608be8: 0x6e65706f  ldr         $a1, 0x706F($s3)
    ctx->pc = 0x608be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_608bec:
    // 0x608bec: 0x0  nop
    ctx->pc = 0x608becu;
    // NOP
label_608bf0:
    // 0x608bf0: 0x736f6c63  .word       0x736F6C63                   # INVALID     $k1, $t7, 0x6C63 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608bf0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x608BF0 raw=0x736F6C63");
label_608bf4:
    // 0x608bf4: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608bf4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608bf8:
    // 0x608bf8: 0x73616c67  .word       0x73616C67                   # INVALID     $k1, $at, 0x6C67 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608bf8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x27 at 0x608BF8 raw=0x73616C67");
label_608bfc:
    // 0x608bfc: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x608bfcu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608c00:
    // 0x608c00: 0x646461  .word       0x00646461                   # addu        $t4, $v1, $a0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608c00u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_608c04:
    // 0x608c04: 0x0  nop
    ctx->pc = 0x608c04u;
    // NOP
label_608c08:
    // 0x608c08: 0x64616873  daddiu      $at, $v1, 0x6873
    ctx->pc = 0x608c08u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26739);
label_608c0c:
    // 0x608c0c: 0x776f  .word       0x0000776F                   # dsubu       $t6, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608c0cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_608c10:
    // 0x608c10: 0x5f797263  .word       0x5F797263                   # bgtzl       $k1, . + 4 + (0x7263 << 2) # 00190000 <InstrIdType: CPU_NORMAL>
label_608c14:
    if (ctx->pc == 0x608C14u) {
        ctx->pc = 0x608C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x608C10u;
        // 0x608c14: 0x3130  tge         $zero, $zero, 196 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x608C18u;
        goto label_608c18;
    }
    ctx->pc = 0x608C10u;
    {
        const bool branch_taken_0x608c10 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x608c10) {
            ctx->pc = 0x608C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x608C10u;
            // 0x608c14: 0x3130  tge         $zero, $zero, 196 (Delay Slot)
            if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x6255A0u;
            return;
        }
    }
    ctx->pc = 0x608C18u;
label_608c18:
    // 0x608c18: 0x5f746165  .word       0x5F746165                   # bgtzl       $k1, . + 4 + (0x6165 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_608c1c:
    if (ctx->pc == 0x608C1Cu) {
        ctx->pc = 0x608C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x608C18u;
        // 0x608c1c: 0x3130  tge         $zero, $zero, 196 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x608C20u;
        goto label_608c20;
    }
    ctx->pc = 0x608C18u;
    {
        const bool branch_taken_0x608c18 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x608c18) {
            ctx->pc = 0x608C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x608C18u;
            // 0x608c1c: 0x3130  tge         $zero, $zero, 196 (Delay Slot)
            if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x6211B0u;
            return;
        }
    }
    ctx->pc = 0x608C20u;
label_608c20:
    // 0x608c20: 0x656c6469  daddiu      $t4, $t3, 0x6469
    ctx->pc = 0x608c20u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25705);
label_608c24:
    // 0x608c24: 0x31305f  .word       0x0031305F                   # ddivu       $a2, $at, $s1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608c24u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x608C24 raw=0x0031305F");
label_608c28:
    // 0x608c28: 0x656c6469  daddiu      $t4, $t3, 0x6469
    ctx->pc = 0x608c28u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25705);
label_608c2c:
    // 0x608c2c: 0x32305f  .word       0x0032305F                   # ddivu       $a2, $at, $s2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608c2cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x608C2C raw=0x0032305F");
label_608c30:
    // 0x608c30: 0x656c6469  daddiu      $t4, $t3, 0x6469
    ctx->pc = 0x608c30u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25705);
label_608c34:
    // 0x608c34: 0x33305f  .word       0x0033305F                   # ddivu       $a2, $at, $s3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608c34u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x608C34 raw=0x0033305F");
label_608c38:
    // 0x608c38: 0x656c6469  daddiu      $t4, $t3, 0x6469
    ctx->pc = 0x608c38u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25705);
label_608c3c:
    // 0x608c3c: 0x34305f  .word       0x0034305F                   # ddivu       $a2, $at, $s4 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608c3cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x608C3C raw=0x0034305F");
label_608c40:
    // 0x608c40: 0x65766f6c  daddiu      $s6, $t3, 0x6F6C
    ctx->pc = 0x608c40u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28524);
label_608c44:
    // 0x608c44: 0x31305f  .word       0x0031305F                   # ddivu       $a2, $at, $s1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608c44u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x608C44 raw=0x0031305F");
label_608c48:
    // 0x608c48: 0x676e6973  daddiu      $t6, $k1, 0x6973
    ctx->pc = 0x608c48u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26995);
label_608c4c:
    // 0x608c4c: 0x31305f  .word       0x0031305F                   # ddivu       $a2, $at, $s1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608c4cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x608C4C raw=0x0031305F");
label_608c50:
    // 0x608c50: 0x61657073  daddi       $a1, $t3, 0x7073
    ctx->pc = 0x608c50u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28787; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_608c54:
    // 0x608c54: 0x6b  .word       0x0000006B                   # sltu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608c54u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_608c58:
    // 0x608c58: 0x6b6c6174  ldl         $t4, 0x6174($k1)
    ctx->pc = 0x608c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_608c5c:
    // 0x608c5c: 0x31305f  .word       0x0031305F                   # ddivu       $a2, $at, $s1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608c5cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x608C5C raw=0x0031305F");
label_608c60:
    // 0x608c60: 0x6b6c6174  ldl         $t4, 0x6174($k1)
    ctx->pc = 0x608c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_608c64:
    // 0x608c64: 0x32305f  .word       0x0032305F                   # ddivu       $a2, $at, $s2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608c64u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x608C64 raw=0x0032305F");
label_608c68:
    // 0x608c68: 0x737772  tlt         $v1, $s3, 477
    ctx->pc = 0x608c68u;
    if (GPR_S64(ctx, 3) < GPR_S64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_608c6c:
    // 0x608c6c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608c6cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x608C6C raw=0x00000001");
label_608c70:
    // 0x608c70: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608c70u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x608C70 raw=0x00000001");
label_608c74:
    // 0x608c74: 0x0  nop
    ctx->pc = 0x608c74u;
    // NOP
label_608c78:
    // 0x608c78: 0x7377722e  .word       0x7377722E                   # INVALID     $k1, $s7, 0x722E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608c78u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x608C78 raw=0x7377722E");
label_608c7c:
    // 0x608c7c: 0x0  nop
    ctx->pc = 0x608c7cu;
    // NOP
label_608c80:
    // 0x608c80: 0x0  nop
    ctx->pc = 0x608c80u;
    // NOP
label_608c84:
    // 0x608c84: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x608c84u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_608c88:
    // 0x608c88: 0x0  nop
    ctx->pc = 0x608c88u;
    // NOP
label_608c8c:
    // 0x608c8c: 0x302e30  tge         $at, $s0, 184
    ctx->pc = 0x608c8cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
label_608c90:
    // 0x608c90: 0x252e6425  addiu       $t6, $t1, 0x6425
    ctx->pc = 0x608c90u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 25637));
label_608c94:
    // 0x608c94: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608c94u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_608c98:
    // 0x608c98: 0x302e30  tge         $at, $s0, 184
    ctx->pc = 0x608c98u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
label_608c9c:
    // 0x608c9c: 0x0  nop
    ctx->pc = 0x608c9cu;
    // NOP
label_608ca0:
    // 0x608ca0: 0x72617473  .word       0x72617473                   # INVALID     $s3, $at, 0x7473 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608ca0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x608CA0 raw=0x72617473");
label_608ca4:
    // 0x608ca4: 0x707574  teq         $v1, $s0, 469
    ctx->pc = 0x608ca4u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
label_608ca8:
    // 0x608ca8: 0x0  nop
    ctx->pc = 0x608ca8u;
    // NOP
label_608cac:
    // 0x608cac: 0x6272  tlt         $zero, $zero, 393
    ctx->pc = 0x608cacu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608cb0:
    // 0x608cb0: 0x6277  .word       0x00006277                   # INVALID     $zero, $zero, 0x6277 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608cb0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x608CB0 raw=0x00006277");
label_608cb4:
    // 0x608cb4: 0x0  nop
    ctx->pc = 0x608cb4u;
    // NOP
label_608cb8:
    // 0x608cb8: 0x6c6c61  .word       0x006C6C61                   # addu        $t5, $v1, $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608cb8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_608cbc:
    // 0x608cbc: 0x0  nop
    ctx->pc = 0x608cbcu;
    // NOP
label_608cc0:
    // 0x608cc0: 0x626f6c67  daddi       $t7, $s3, 0x6C67
    ctx->pc = 0x608cc0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)27751; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_608cc4:
    // 0x608cc4: 0x736c61  .word       0x00736C61                   # addu        $t5, $v1, $s3 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608cc4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_608cc8:
    // 0x608cc8: 0x69746361  ldl         $s4, 0x6361($t3)
    ctx->pc = 0x608cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_608ccc:
    // 0x608ccc: 0x736e6f  .word       0x00736E6F                   # dsubu       $t5, $v1, $s3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608cccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) - GPR_U64(ctx, 19));
label_608cd0:
    // 0x608cd0: 0x656e6170  daddiu      $t6, $t3, 0x6170
    ctx->pc = 0x608cd0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24944);
label_608cd4:
    // 0x608cd4: 0x736c  .word       0x0000736C                   # dadd        $t6, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608cd4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_608cd8:
    // 0x608cd8: 0x6d637274  ldr         $v1, 0x7274($t3)
    ctx->pc = 0x608cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_608cdc:
    // 0x608cdc: 0x736773  tltu        $v1, $s3, 413
    ctx->pc = 0x608cdcu;
    if (GPR_U64(ctx, 3) < GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_608ce0:
    // 0x608ce0: 0x6f746361  ldr         $s4, 0x6361($k1)
    ctx->pc = 0x608ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_608ce4:
    // 0x608ce4: 0x7372  tlt         $zero, $zero, 461
    ctx->pc = 0x608ce4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608ce8:
    // 0x608ce8: 0x676e65  .word       0x00676E65                   # or          $t5, $v1, $a3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608ce8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_608cec:
    // 0x608cec: 0x0  nop
    ctx->pc = 0x608cecu;
    // NOP
label_608cf0:
    // 0x608cf0: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608cf0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608cf4:
    // 0x608cf4: 0x6c766c  .word       0x006C766C                   # dadd        $t6, $v1, $t4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608cf4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 12); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_608cf8:
    // 0x608cf8: 0x0  nop
    ctx->pc = 0x608cf8u;
    // NOP
label_608cfc:
    // 0x608cfc: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x608cfcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_608d00:
    // 0x608d00: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x608d00u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_608d04:
    // 0x608d04: 0x676e65  .word       0x00676E65                   # or          $t5, $v1, $a3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608d04u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_608d08:
    // 0x608d08: 0x614e6f4e  daddi       $t6, $t2, 0x6F4E
    ctx->pc = 0x608d08u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)28494; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_608d0c:
    // 0x608d0c: 0x656d  .word       0x0000656D                   # daddu       $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608d0cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_608d10:
    // 0x608d10: 0x0  nop
    ctx->pc = 0x608d10u;
    // NOP
label_608d14:
    // 0x608d14: 0x7472  tlt         $zero, $zero, 465
    ctx->pc = 0x608d14u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608d18:
    // 0x608d18: 0x73255b  .word       0x0073255B                   # divu        $a0, $v1, $s3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608d18u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_608d1c:
    // 0x608d1c: 0x0  nop
    ctx->pc = 0x608d1cu;
    // NOP
label_608d20:
    // 0x608d20: 0x3d6c6f76  .word       0x3D6C6F76                   # lui         $t4, 0x6F76 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608d20u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)28534 << 16));
label_608d24:
    // 0x608d24: 0x6625  .word       0x00006625                   # move        $t4, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608d24u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608d28:
    // 0x608d28: 0x70616d  .word       0x0070616D                   # daddu       $t4, $v1, $s0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608d28u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 16));
label_608d2c:
    // 0x608d2c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608d2cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x608D2C raw=0x00000001");
label_608d30:
    // 0x608d30: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608d30u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x608D30 raw=0x00000001");
label_608d34:
    // 0x608d34: 0x0  nop
    ctx->pc = 0x608d34u;
    // NOP
label_608d38:
    // 0x608d38: 0x7472  tlt         $zero, $zero, 465
    ctx->pc = 0x608d38u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608d3c:
    // 0x608d3c: 0x73255b  .word       0x0073255B                   # divu        $a0, $v1, $s3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608d3cu;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_608d40:
    // 0x608d40: 0x6c626174  ldr         $v0, 0x6174($v1)
    ctx->pc = 0x608d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_608d44:
    // 0x608d44: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608d44u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608d48:
    // 0x608d48: 0x63756f63  daddi       $s5, $k1, 0x6F63
    ctx->pc = 0x608d48u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)28515; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
label_608d4c:
    // 0x608d4c: 0x68  .word       0x00000068                   # mfsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x608d4cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_608d50:
    // 0x608d50: 0x316e6f31  andi        $t6, $t3, 0x6F31
    ctx->pc = 0x608d50u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)28465);
label_608d54:
    // 0x608d54: 0x0  nop
    ctx->pc = 0x608d54u;
    // NOP
label_608d58:
    // 0x608d58: 0x646562  .word       0x00646562                   # sub         $t4, $v1, $a0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608d58u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 3), GPR_U32(ctx, 4), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_608d5c:
    // 0x608d5c: 0x0  nop
    ctx->pc = 0x608d5cu;
    // NOP
label_608d60:
    // 0x608d60: 0x746f6870  .word       0x746F6870                   # INVALID     $v1, $t7, 0x6870 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608d60u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x608D60 raw=0x746F6870");
label_608d64:
    // 0x608d64: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608d64u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_608d68:
    // 0x608d68: 0x6f646173  ldr         $a0, 0x6173($k1)
    ctx->pc = 0x608d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24947); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_608d6c:
    // 0x608d6c: 0x0  nop
    ctx->pc = 0x608d6cu;
    // NOP
label_608d70:
    // 0x608d70: 0x6f6c7073  ldr         $t4, 0x7073($k1)
    ctx->pc = 0x608d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28787); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_608d74:
    // 0x608d74: 0x6873  tltu        $zero, $zero, 417
    ctx->pc = 0x608d74u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608d78:
    // 0x608d78: 0x7373616d  .word       0x7373616D                   # INVALID     $k1, $s3, 0x616D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608d78u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x608D78 raw=0x7373616D");
label_608d7c:
    // 0x608d7c: 0x656761  .word       0x00656761                   # addu        $t4, $v1, $a1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608d7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_608d80:
    // 0x608d80: 0x756b616d  .word       0x756B616D                   # INVALID     $t3, $t3, 0x616D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608d80u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x608D80 raw=0x756B616D");
label_608d84:
    // 0x608d84: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x608d84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608d88:
    // 0x608d88: 0x67676f6a  daddiu      $a3, $k1, 0x6F6A
    ctx->pc = 0x608d88u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28522);
label_608d8c:
    // 0x608d8c: 0x676e69  .word       0x00676E69                   # mtsa        $v1 # 00076E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x608d8cu;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_608d90:
    // 0x608d90: 0x6e756173  ldr         $s5, 0x6173($s3)
    ctx->pc = 0x608d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24947); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_608d94:
    // 0x608d94: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608d94u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_608d98:
    // 0x608d98: 0x69626163  ldl         $v0, 0x6163($t3)
    ctx->pc = 0x608d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24931); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_608d9c:
    // 0x608d9c: 0x656e  .word       0x0000656E                   # dsub        $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608d9cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_608da0:
    // 0x608da0: 0x256d7564  addiu       $t5, $t3, 0x7564
    ctx->pc = 0x608da0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), 30052));
label_608da4:
    // 0x608da4: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608da4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_608da8:
    // 0x608da8: 0x66253d78  daddiu      $a1, $s1, 0x3D78
    ctx->pc = 0x608da8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)15736);
label_608dac:
    // 0x608dac: 0x0  nop
    ctx->pc = 0x608dacu;
    // NOP
label_608db0:
    // 0x608db0: 0x66253d79  daddiu      $a1, $s1, 0x3D79
    ctx->pc = 0x608db0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)15737);
label_608db4:
    // 0x608db4: 0x0  nop
    ctx->pc = 0x608db4u;
    // NOP
label_608db8:
    // 0x608db8: 0x74726f6e  .word       0x74726F6E                   # INVALID     $v1, $s2, 0x6F6E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608db8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x608DB8 raw=0x74726F6E");
label_608dbc:
    // 0x608dbc: 0x68  .word       0x00000068                   # mfsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x608dbcu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_608dc0:
    // 0x608dc0: 0x74756f73  .word       0x74756F73                   # INVALID     $v1, $s5, 0x6F73 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608dc0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x608DC0 raw=0x74756F73");
label_608dc4:
    // 0x608dc4: 0x68  .word       0x00000068                   # mfsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x608dc4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_608dc8:
    // 0x608dc8: 0x74736165  .word       0x74736165                   # INVALID     $v1, $s3, 0x6165 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608dc8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x608DC8 raw=0x74736165");
label_608dcc:
    // 0x608dcc: 0x0  nop
    ctx->pc = 0x608dccu;
    // NOP
label_608dd0:
    // 0x608dd0: 0x74736577  .word       0x74736577                   # INVALID     $v1, $s3, 0x6577 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608dd0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x608DD0 raw=0x74736577");
label_608dd4:
    // 0x608dd4: 0x0  nop
    ctx->pc = 0x608dd4u;
    // NOP
label_608dd8:
    // 0x608dd8: 0x65757274  daddiu      $s5, $t3, 0x7274
    ctx->pc = 0x608dd8u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29300);
label_608ddc:
    // 0x608ddc: 0x0  nop
    ctx->pc = 0x608ddcu;
    // NOP
label_608de0:
    // 0x608de0: 0x6e617473  ldr         $at, 0x7473($s3)
    ctx->pc = 0x608de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29811); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_608de4:
    // 0x608de4: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608de4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_608de8:
    // 0x608de8: 0x746173  tltu        $v1, $s4, 389
    ctx->pc = 0x608de8u;
    if (GPR_U64(ctx, 3) < GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_608dec:
    // 0x608dec: 0x74656c  .word       0x0074656C                   # dadd        $t4, $v1, $s4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608decu;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_608df0:
    // 0x608df0: 0x0  nop
    ctx->pc = 0x608df0u;
    // NOP
label_608df4:
    // 0x608df4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608df4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x608DF4 raw=0x00000001");
label_608df8:
    // 0x608df8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608df8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x608DF8 raw=0x00000001");
label_608dfc:
    // 0x608dfc: 0x0  nop
    ctx->pc = 0x608dfcu;
    // NOP
label_608e00:
    // 0x608e00: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608e00u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x608E00 raw=0x00000001");
label_608e04:
    // 0x608e04: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608e04u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x608E04 raw=0x00000001");
label_608e08:
    // 0x608e08: 0x0  nop
    ctx->pc = 0x608e08u;
    // NOP
label_608e0c:
    // 0x608e0c: 0xffff32ff  sd          $ra, 0x32FF($ra)
    ctx->pc = 0x608e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 13055), GPR_U64(ctx, 31));
label_608e10:
    // 0x608e10: 0x6b6c6174  ldl         $t4, 0x6174($k1)
    ctx->pc = 0x608e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_608e14:
    // 0x608e14: 0x31305f  .word       0x0031305F                   # ddivu       $a2, $at, $s1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608e14u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x608E14 raw=0x0031305F");
label_608e18:
    // 0x608e18: 0x65766f6c  daddiu      $s6, $t3, 0x6F6C
    ctx->pc = 0x608e18u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28524);
label_608e1c:
    // 0x608e1c: 0x31305f  .word       0x0031305F                   # ddivu       $a2, $at, $s1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608e1cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x608E1C raw=0x0031305F");
label_608e20:
    // 0x608e20: 0x676e6973  daddiu      $t6, $k1, 0x6973
    ctx->pc = 0x608e20u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26995);
label_608e24:
    // 0x608e24: 0x31305f  .word       0x0031305F                   # ddivu       $a2, $at, $s1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608e24u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x608E24 raw=0x0031305F");
label_608e28:
    // 0x608e28: 0x5f797263  .word       0x5F797263                   # bgtzl       $k1, . + 4 + (0x7263 << 2) # 00190000 <InstrIdType: CPU_NORMAL>
label_608e2c:
    if (ctx->pc == 0x608E2Cu) {
        ctx->pc = 0x608E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x608E28u;
        // 0x608e2c: 0x3130  tge         $zero, $zero, 196 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x608E30u;
        goto label_608e30;
    }
    ctx->pc = 0x608E28u;
    {
        const bool branch_taken_0x608e28 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x608e28) {
            ctx->pc = 0x608E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x608E28u;
            // 0x608e2c: 0x3130  tge         $zero, $zero, 196 (Delay Slot)
            if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x6257B8u;
            return;
        }
    }
    ctx->pc = 0x608E30u;
label_608e30:
    // 0x608e30: 0x0  nop
    ctx->pc = 0x608e30u;
    // NOP
label_608e34:
    // 0x608e34: 0x0  nop
    ctx->pc = 0x608e34u;
    // NOP
label_608e38:
    // 0x608e38: 0x30257830  andi        $a1, $at, 0x7830
    ctx->pc = 0x608e38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)30768);
label_608e3c:
    // 0x608e3c: 0x7838  dsll        $t7, $zero, 0
    ctx->pc = 0x608e3cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) << 0);
label_608e40:
    // 0x608e40: 0x6b726f66  ldl         $s2, 0x6F66($k1)
    ctx->pc = 0x608e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28518); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_608e44:
    // 0x608e44: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x608e44u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608e48:
    // 0x608e48: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x608e48u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_608e4c:
    // 0x608e4c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608e4cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x608E4C raw=0x00000001");
label_608e50:
    // 0x608e50: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608e50u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x608E50 raw=0x00000001");
label_608e54:
    // 0x608e54: 0x0  nop
    ctx->pc = 0x608e54u;
    // NOP
label_608e58:
    // 0x608e58: 0x0  nop
    ctx->pc = 0x608e58u;
    // NOP
label_608e5c:
    // 0x608e5c: 0x0  nop
    ctx->pc = 0x608e5cu;
    // NOP
label_608e60:
    // 0x608e60: 0x6f426f4e  ldr         $v0, 0x6F4E($k0)
    ctx->pc = 0x608e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 28494); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_608e64:
    // 0x608e64: 0x7944  .word       0x00007944                   # sllv        $t7, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608e64u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_608e68:
    // 0x608e68: 0x6b726f66  ldl         $s2, 0x6F66($k1)
    ctx->pc = 0x608e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28518); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_608e6c:
    // 0x608e6c: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x608e6cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608e70:
    // 0x608e70: 0x6b6c6174  ldl         $t4, 0x6174($k1)
    ctx->pc = 0x608e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_608e74:
    // 0x608e74: 0x0  nop
    ctx->pc = 0x608e74u;
    // NOP
label_608e78:
    // 0x608e78: 0x6b7361  .word       0x006B7361                   # addu        $t6, $v1, $t3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608e78u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_608e7c:
    // 0x608e7c: 0x0  nop
    ctx->pc = 0x608e7cu;
    // NOP
label_608e80:
    // 0x608e80: 0x6c637865  ldr         $v1, 0x7865($v1)
    ctx->pc = 0x608e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30821); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_608e84:
    // 0x608e84: 0x6d61  .word       0x00006D61                   # addu        $t5, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608e84u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_608e88:
    // 0x608e88: 0x6d7568  .word       0x006D7568                   # mfsa        $t6 # 006D0540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x608e88u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_608e8c:
    // 0x608e8c: 0x0  nop
    ctx->pc = 0x608e8cu;
    // NOP
label_608e90:
    // 0x608e90: 0x656b6f6a  daddiu      $t3, $t3, 0x6F6A
    ctx->pc = 0x608e90u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28522);
label_608e94:
    // 0x608e94: 0x0  nop
    ctx->pc = 0x608e94u;
    // NOP
label_608e98:
    // 0x608e98: 0x68676966  ldl         $a3, 0x6966($v1)
    ctx->pc = 0x608e98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26982); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_608e9c:
    // 0x608e9c: 0x3174  teq         $zero, $zero, 197
    ctx->pc = 0x608e9cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608ea0:
    // 0x608ea0: 0x68676966  ldl         $a3, 0x6966($v1)
    ctx->pc = 0x608ea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26982); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_608ea4:
    // 0x608ea4: 0x3274  teq         $zero, $zero, 201
    ctx->pc = 0x608ea4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608ea8:
    // 0x608ea8: 0x68676966  ldl         $a3, 0x6966($v1)
    ctx->pc = 0x608ea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26982); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_608eac:
    // 0x608eac: 0x3374  teq         $zero, $zero, 205
    ctx->pc = 0x608eacu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608eb0:
    // 0x608eb0: 0x756f6873  .word       0x756F6873                   # INVALID     $t3, $t7, 0x6873 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608eb0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x608EB0 raw=0x756F6873");
label_608eb4:
    // 0x608eb4: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x608eb4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608eb8:
    // 0x608eb8: 0x73696877  .word       0x73696877                   # psrah       $t5, $t1, 1 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608eb8u;
    SET_GPR_VEC(ctx, 13, _mm_srai_epi16(GPR_VEC(ctx, 9), 1));
label_608ebc:
    // 0x608ebc: 0x726570  tge         $v1, $s2, 405
    ctx->pc = 0x608ebcu;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_608ec0:
    // 0x608ec0: 0x676e6973  daddiu      $t6, $k1, 0x6973
    ctx->pc = 0x608ec0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26995);
label_608ec4:
    // 0x608ec4: 0x0  nop
    ctx->pc = 0x608ec4u;
    // NOP
label_608ec8:
    // 0x608ec8: 0x61657262  daddi       $a1, $t3, 0x7262
    ctx->pc = 0x608ec8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29282; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_608ecc:
    // 0x608ecc: 0x656874  teq         $v1, $a1, 417
    ctx->pc = 0x608eccu;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_608ed0:
    // 0x608ed0: 0x76696e73  .word       0x76696E73                   # INVALID     $s3, $t1, 0x6E73 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608ed0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x608ED0 raw=0x76696E73");
label_608ed4:
    // 0x608ed4: 0x6c65  .word       0x00006C65                   # move        $t5, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608ed4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608ed8:
    // 0x608ed8: 0x797263  .word       0x00797263                   # subu        $t6, $v1, $t9 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608ed8u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
label_608edc:
    // 0x608edc: 0x0  nop
    ctx->pc = 0x608edcu;
    // NOP
label_608ee0:
    // 0x608ee0: 0x6e617773  ldr         $at, 0x7773($s3)
    ctx->pc = 0x608ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30579); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_608ee4:
    // 0x608ee4: 0x6b  .word       0x0000006B                   # sltu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608ee4u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_608ee8:
    // 0x608ee8: 0x72696c66  .word       0x72696C66                   # INVALID     $s3, $t1, 0x6C66 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608ee8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x608EE8 raw=0x72696C66");
label_608eec:
    // 0x608eec: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x608eecu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608ef0:
    // 0x608ef0: 0x796e6564  lq          $t6, 0x6564($t3)
    ctx->pc = 0x608ef0u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 11), 25956)));
label_608ef4:
    // 0x608ef4: 0x0  nop
    ctx->pc = 0x608ef4u;
    // NOP
label_608ef8:
    // 0x608ef8: 0x7472  tlt         $zero, $zero, 465
    ctx->pc = 0x608ef8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608efc:
    // 0x608efc: 0x73255b  .word       0x0073255B                   # divu        $a0, $v1, $s3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608efcu;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_608f00:
    // 0x608f00: 0x0  nop
    ctx->pc = 0x608f00u;
    // NOP
label_608f04:
    // 0x608f04: 0x0  nop
    ctx->pc = 0x608f04u;
    // NOP
label_608f08:
    // 0x608f08: 0x253d6872  addiu       $sp, $t1, 0x6872
    ctx->pc = 0x608f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 9), 26738));
label_608f0c:
    // 0x608f0c: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x608f0cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608f10:
    // 0x608f10: 0x253d686c  addiu       $sp, $t1, 0x686C
    ctx->pc = 0x608f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 9), 26732));
label_608f14:
    // 0x608f14: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x608f14u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608f18:
    // 0x608f18: 0x253d7072  addiu       $sp, $t1, 0x7072
    ctx->pc = 0x608f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 9), 28786));
label_608f1c:
    // 0x608f1c: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x608f1cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608f20:
    // 0x608f20: 0x253d706c  addiu       $sp, $t1, 0x706C
    ctx->pc = 0x608f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 9), 28780));
label_608f24:
    // 0x608f24: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x608f24u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608f28:
    // 0x608f28: 0x253d7078  addiu       $sp, $t1, 0x7078
    ctx->pc = 0x608f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 9), 28792));
label_608f2c:
    // 0x608f2c: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x608f2cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608f30:
    // 0x608f30: 0x72616863  .word       0x72616863                   # INVALID     $s3, $at, 0x6863 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608f30u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x608F30 raw=0x72616863");
label_608f34:
    // 0x608f34: 0x0  nop
    ctx->pc = 0x608f34u;
    // NOP
label_608f38:
    // 0x608f38: 0x656a626f  daddiu      $t2, $t3, 0x626F
    ctx->pc = 0x608f38u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25199);
label_608f3c:
    // 0x608f3c: 0x7463  .word       0x00007463                   # negu        $t6, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608f3cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_608f40:
    // 0x608f40: 0x656e6f6e  daddiu      $t6, $t3, 0x6F6E
    ctx->pc = 0x608f40u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28526);
label_608f44:
    // 0x608f44: 0x0  nop
    ctx->pc = 0x608f44u;
    // NOP
label_608f48:
    // 0x608f48: 0x65757274  daddiu      $s5, $t3, 0x7274
    ctx->pc = 0x608f48u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29300);
label_608f4c:
    // 0x608f4c: 0x0  nop
    ctx->pc = 0x608f4cu;
    // NOP
label_608f50:
    // 0x608f50: 0x736c6166  .word       0x736C6166                   # INVALID     $k1, $t4, 0x6166 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608f50u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x608F50 raw=0x736C6166");
label_608f54:
    // 0x608f54: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608f54u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608f58:
    // 0x608f58: 0x63617865  daddi       $at, $k1, 0x7865
    ctx->pc = 0x608f58u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)30821; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_608f5c:
    // 0x608f5c: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x608f5cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608f60:
    // 0x608f60: 0x6c6c61  .word       0x006C6C61                   # addu        $t5, $v1, $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608f60u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_608f64:
    // 0x608f64: 0x676174  teq         $v1, $a3, 389
    ctx->pc = 0x608f64u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_608f68:
    // 0x608f68: 0x6e617473  ldr         $at, 0x7473($s3)
    ctx->pc = 0x608f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29811); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_608f6c:
    // 0x608f6c: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608f6cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_608f70:
    // 0x608f70: 0x6e617473  ldr         $at, 0x7473($s3)
    ctx->pc = 0x608f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29811); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_608f74:
    // 0x608f74: 0x615f64  .word       0x00615F64                   # and         $t3, $v1, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608f74u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & GPR_U64(ctx, 1));
label_608f78:
    // 0x608f78: 0x746173  tltu        $v1, $s4, 389
    ctx->pc = 0x608f78u;
    if (GPR_U64(ctx, 3) < GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_608f7c:
    // 0x608f7c: 0x0  nop
    ctx->pc = 0x608f7cu;
    // NOP
label_608f80:
    // 0x608f80: 0x5f746173  .word       0x5F746173                   # bgtzl       $k1, . + 4 + (0x6173 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_608f84:
    if (ctx->pc == 0x608F84u) {
        ctx->pc = 0x608F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x608F80u;
        // 0x608f84: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x608F88u;
        goto label_608f88;
    }
    ctx->pc = 0x608F80u;
    {
        const bool branch_taken_0x608f80 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x608f80) {
            ctx->pc = 0x608F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x608F80u;
            // 0x608f84: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x621550u;
            return;
        }
    }
    ctx->pc = 0x608F88u;
label_608f88:
    // 0x608f88: 0x74656c  .word       0x0074656C                   # dadd        $t4, $v1, $s4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608f88u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_608f8c:
    // 0x608f8c: 0x0  nop
    ctx->pc = 0x608f8cu;
    // NOP
label_608f90:
    // 0x608f90: 0x5f74656c  .word       0x5F74656C                   # bgtzl       $k1, . + 4 + (0x656C << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_608f94:
    if (ctx->pc == 0x608F94u) {
        ctx->pc = 0x608F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x608F90u;
        // 0x608f94: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x608F98u;
        goto label_608f98;
    }
    ctx->pc = 0x608F90u;
    {
        const bool branch_taken_0x608f90 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x608f90) {
            ctx->pc = 0x608F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x608F90u;
            // 0x608f94: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x622544u;
            return;
        }
    }
    ctx->pc = 0x608F98u;
label_608f98:
    // 0x608f98: 0x636e6164  daddi       $t6, $k1, 0x6164
    ctx->pc = 0x608f98u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_608f9c:
    // 0x608f9c: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608f9cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608fa0:
    // 0x608fa0: 0x7373616d  .word       0x7373616D                   # INVALID     $k1, $s3, 0x616D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608fa0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x608FA0 raw=0x7373616D");
label_608fa4:
    // 0x608fa4: 0x656761  .word       0x00656761                   # addu        $t4, $v1, $a1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608fa4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_608fa8:
    // 0x608fa8: 0x63756f63  daddi       $s5, $k1, 0x6F63
    ctx->pc = 0x608fa8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)28515; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
label_608fac:
    // 0x608fac: 0x68  .word       0x00000068                   # mfsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x608facu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_608fb0:
    // 0x608fb0: 0x69616863  ldl         $at, 0x6863($t3)
    ctx->pc = 0x608fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26723); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_608fb4:
    // 0x608fb4: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x608fb4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608fb8:
    // 0x608fb8: 0x38746973  xori        $s4, $v1, 0x6973
    ctx->pc = 0x608fb8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)26995);
label_608fbc:
    // 0x608fbc: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x608fbcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608fc0:
    // 0x608fc0: 0x756b616d  .word       0x756B616D                   # INVALID     $t3, $t3, 0x616D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608fc0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x608FC0 raw=0x756B616D");
label_608fc4:
    // 0x608fc4: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x608fc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608fc8:
    // 0x608fc8: 0x6f646173  ldr         $a0, 0x6173($k1)
    ctx->pc = 0x608fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24947); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_608fcc:
    // 0x608fcc: 0x0  nop
    ctx->pc = 0x608fccu;
    // NOP
label_608fd0:
    // 0x608fd0: 0x6f6c7073  ldr         $t4, 0x7073($k1)
    ctx->pc = 0x608fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28787); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_608fd4:
    // 0x608fd4: 0x6873  tltu        $zero, $zero, 417
    ctx->pc = 0x608fd4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608fd8:
    // 0x608fd8: 0x67676f6a  daddiu      $a3, $k1, 0x6F6A
    ctx->pc = 0x608fd8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28522);
label_608fdc:
    // 0x608fdc: 0x676e69  .word       0x00676E69                   # mtsa        $v1 # 00076E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x608fdcu;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_608fe0:
    // 0x608fe0: 0x68676966  ldl         $a3, 0x6966($v1)
    ctx->pc = 0x608fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26982); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_608fe4:
    // 0x608fe4: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x608fe4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_608fe8:
    // 0x608fe8: 0x6373756d  daddi       $s3, $k1, 0x756D
    ctx->pc = 0x608fe8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)30061; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_608fec:
    // 0x608fec: 0x75  .word       0x00000075                   # INVALID     $zero, $zero, 0x75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608fecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x608FEC raw=0x00000075");
label_608ff0:
    // 0x608ff0: 0x776f6873  .word       0x776F6873                   # INVALID     $k1, $t7, 0x6873 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x608ff0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x608FF0 raw=0x776F6873");
label_608ff4:
    // 0x608ff4: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x608ff4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_608ff8:
    // 0x608ff8: 0x706f6f6c  .word       0x706F6F6C                   # INVALID     $v1, $t7, 0x6F6C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x608ff8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x608FF8 raw=0x706F6F6C");
label_608ffc:
    // 0x608ffc: 0x0  nop
    ctx->pc = 0x608ffcu;
    // NOP
label_609000:
    // 0x609000: 0x6e614d  break       110, 389
    ctx->pc = 0x609000u;
    runtime->handleBreak(rdram, ctx);
label_609004:
    // 0x609004: 0x0  nop
    ctx->pc = 0x609004u;
    // NOP
label_609008:
    // 0x609008: 0x616d6f57  daddi       $t5, $t3, 0x6F57
    ctx->pc = 0x609008u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28503; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_60900c:
    // 0x60900c: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60900cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_609010:
    // 0x609010: 0x6568744f  daddiu      $t0, $t3, 0x744F
    ctx->pc = 0x609010u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29775);
label_609014:
    // 0x609014: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x609014u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_609018:
    // 0x609018: 0x6e617453  ldr         $at, 0x7453($s3)
    ctx->pc = 0x609018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29779); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_60901c:
    // 0x60901c: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60901cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_609020:
    // 0x609020: 0x746153  .word       0x00746153                   # mtlo        $v1 # 00146140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609020u;
    ctx->lo = GPR_U64(ctx, 3);
label_609024:
    // 0x609024: 0x74654c  .word       0x0074654C                   # syscall     405 # 00740000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609024u;
    ctx->pc = 0x609028u;
runtime->handleSyscall(rdram, ctx, 0x1D195u);
label_609028:
    // 0x609028: 0x6e612e2a  ldr         $at, 0x2E2A($s3)
    ctx->pc = 0x609028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 11818); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_60902c:
    // 0x60902c: 0x6d  .word       0x0000006D                   # daddu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60902cu;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_609030:
    // 0x609030: 0x662e7866  daddiu      $t6, $s1, 0x7866
    ctx->pc = 0x609030u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)30822);
label_609034:
    // 0x609034: 0x6b726f  .word       0x006B726F                   # dsubu       $t6, $v1, $t3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609034u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) - GPR_U64(ctx, 11));
label_609038:
    // 0x609038: 0x0  nop
    ctx->pc = 0x609038u;
    // NOP
label_60903c:
    // 0x60903c: 0x6272  tlt         $zero, $zero, 393
    ctx->pc = 0x60903cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_609040:
    // 0x609040: 0x6277  .word       0x00006277                   # INVALID     $zero, $zero, 0x6277 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609040u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x609040 raw=0x00006277");
label_609044:
    // 0x609044: 0x0  nop
    ctx->pc = 0x609044u;
    // NOP
label_609048:
    // 0x609048: 0x6263612e  daddi       $v1, $s3, 0x612E
    ctx->pc = 0x609048u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)24878; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_60904c:
    // 0x60904c: 0x0  nop
    ctx->pc = 0x60904cu;
    // NOP
label_609050:
    // 0x609050: 0x4b4c4157  vminiw.xz   $vf5, $vf8, $vf12w
    ctx->pc = 0x609050u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_609054:
    // 0x609054: 0x0  nop
    ctx->pc = 0x609054u;
    // NOP
label_609058:
    // 0x609058: 0x6b6c6177  ldl         $t4, 0x6177($k1)
    ctx->pc = 0x609058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24951); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_60905c:
    // 0x60905c: 0x0  nop
    ctx->pc = 0x60905cu;
    // NOP
label_609060:
    // 0x609060: 0x6e7572  tlt         $v1, $t6, 469
    ctx->pc = 0x609060u;
    if (GPR_S64(ctx, 3) < GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_609064:
    // 0x609064: 0x0  nop
    ctx->pc = 0x609064u;
    // NOP
label_609068:
    // 0x609068: 0x656c6449  daddiu      $t4, $t3, 0x6449
    ctx->pc = 0x609068u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25673);
label_60906c:
    // 0x60906c: 0x0  nop
    ctx->pc = 0x60906cu;
    // NOP
label_609070:
    // 0x609070: 0x5f4f4b  .word       0x005F4F4B                   # movn        $t1, $v0, $ra # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609070u;
    if (GPR_U64(ctx, 31) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
label_609074:
    // 0x609074: 0x0  nop
    ctx->pc = 0x609074u;
    // NOP
label_609078:
    // 0x609078: 0x75746973  .word       0x75746973                   # INVALID     $t3, $s4, 0x6973 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x609078u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x609078 raw=0x75746973");
label_60907c:
    // 0x60907c: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60907cu;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_609080:
    // 0x609080: 0x5f564e49  .word       0x5F564E49                   # bgtzl       $k0, . + 4 + (0x4E49 << 2) # 00160000 <InstrIdType: CPU_NORMAL>
label_609084:
    if (ctx->pc == 0x609084u) {
        ctx->pc = 0x609088u;
        goto label_609088;
    }
    ctx->pc = 0x609080u;
    {
        const bool branch_taken_0x609080 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x609080) {
            ctx->pc = 0x61C9A8u;
            return;
        }
    }
    ctx->pc = 0x609088u;
label_609088:
    // 0x609088: 0x4e494e55  .word       0x4E494E55                   # INVALID     $s2, $t1, 0x4E55 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x609088u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x609088 raw=0x4E494E55");
label_60908c:
    // 0x60908c: 0x5f56  .word       0x00005F56                   # dsrlv       $t3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60908cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_609090:
    // 0x609090: 0x4b4c4154  vminix.xz   $vf5, $vf8, $vf12x
    ctx->pc = 0x609090u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_609094:
    // 0x609094: 0x5f  .word       0x0000005F                   # ddivu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609094u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x609094 raw=0x0000005F");
label_609098:
    // 0x609098: 0x0  nop
    ctx->pc = 0x609098u;
    // NOP
label_60909c:
    // 0x60909c: 0x6d  .word       0x0000006D                   # daddu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60909cu;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_6090a0:
    // 0x6090a0: 0x77  .word       0x00000077                   # INVALID     $zero, $zero, 0x77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6090a0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x6090A0 raw=0x00000077");
label_6090a4:
    // 0x6090a4: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6090a4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_6090a8:
    // 0x6090a8: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6090a8u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_6090ac:
    // 0x6090ac: 0x62  .word       0x00000062                   # neg         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6090acu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_6090b0:
    // 0x6090b0: 0x63  .word       0x00000063                   # negu        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6090b0u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_6090b4:
    // 0x6090b4: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6090b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_6090b8:
    // 0x6090b8: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x6090b8u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6090bc:
    // 0x6090bc: 0x69  .word       0x00000069                   # mtsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x6090bcu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_6090c0:
    // 0x6090c0: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6090c0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_6090c4:
    // 0x6090c4: 0x5f61  .word       0x00005F61                   # addu        $t3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6090c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_6090c8:
    // 0x6090c8: 0x5f62  .word       0x00005F62                   # neg         $t3, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6090c8u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
label_6090cc:
    // 0x6090cc: 0x0  nop
    ctx->pc = 0x6090ccu;
    // NOP
label_6090d0:
    // 0x6090d0: 0x61666564  daddi       $a2, $t3, 0x6564
    ctx->pc = 0x6090d0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25956; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
label_6090d4:
    // 0x6090d4: 0x746c75  .word       0x00746C75                   # INVALID     $v1, $s4, 0x6C75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6090d4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x6090D4 raw=0x00746C75");
label_6090d8:
    // 0x6090d8: 0x0  nop
    ctx->pc = 0x6090d8u;
    // NOP
label_6090dc:
    // 0x6090dc: 0x0  nop
    ctx->pc = 0x6090dcu;
    // NOP
label_6090e0:
    // 0x6090e0: 0x7463412d  .word       0x7463412D                   # INVALID     $v1, $v1, 0x412D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6090e0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x6090E0 raw=0x7463412D");
label_6090e4:
    // 0x6090e4: 0x726f  .word       0x0000726F                   # dsubu       $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6090e4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_6090e8:
    // 0x6090e8: 0x7261542d  .word       0x7261542D                   # INVALID     $s3, $at, 0x542D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x6090e8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x6090E8 raw=0x7261542D");
label_6090ec:
    // 0x6090ec: 0x746567  .word       0x00746567                   # nor         $t4, $v1, $s4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6090ecu;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 20)));
label_6090f0:
    // 0x6090f0: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x6090f0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6090f4:
    // 0x6090f4: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x6090f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6090f8:
    // 0x6090f8: 0x0  nop
    ctx->pc = 0x6090f8u;
    // NOP
label_6090fc:
    // 0x6090fc: 0x0  nop
    ctx->pc = 0x6090fcu;
    // NOP
label_609100:
    // 0x609100: 0x78383025  lq          $t8, 0x3025($at)
    ctx->pc = 0x609100u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 1), 12325)));
label_609104:
    // 0x609104: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x609104u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_609108:
    // 0x609108: 0x7337742e  .word       0x7337742E                   # INVALID     $t9, $s7, 0x742E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x609108u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x609108 raw=0x7337742E");
label_60910c:
    // 0x60910c: 0x0  nop
    ctx->pc = 0x60910cu;
    // NOP
label_609110:
    // 0x609110: 0x662e7866  daddiu      $t6, $s1, 0x7866
    ctx->pc = 0x609110u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)30822);
label_609114:
    // 0x609114: 0x6b726f  .word       0x006B726F                   # dsubu       $t6, $v1, $t3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609114u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) - GPR_U64(ctx, 11));
label_609118:
    // 0x609118: 0x732e7866  .word       0x732E7866                   # INVALID     $t9, $t6, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x609118u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x609118 raw=0x732E7866");
label_60911c:
    // 0x60911c: 0x6e69  .word       0x00006E69                   # mtsa        $zero # 00006E40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x60911cu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_609120:
    // 0x609120: 0x0  nop
    ctx->pc = 0x609120u;
    // NOP
label_609124:
    // 0x609124: 0x0  nop
    ctx->pc = 0x609124u;
    // NOP
label_609128:
    // 0x609128: 0x7337742e  .word       0x7337742E                   # INVALID     $t9, $s7, 0x742E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x609128u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x609128 raw=0x7337742E");
label_60912c:
    // 0x60912c: 0x0  nop
    ctx->pc = 0x60912cu;
    // NOP
label_609130:
    // 0x609130: 0x0  nop
    ctx->pc = 0x609130u;
    // NOP
label_609134:
    // 0x609134: 0x0  nop
    ctx->pc = 0x609134u;
    // NOP
label_609138:
    // 0x609138: 0x2e302e30  sltiu       $s0, $s1, 0x2E30
    ctx->pc = 0x609138u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)11824) ? 1 : 0);
label_60913c:
    // 0x60913c: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x60913cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_609140:
    // 0x609140: 0x6d2e7866  ldr         $t6, 0x7866($t1)
    ctx->pc = 0x609140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 30822); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_609144:
    // 0x609144: 0x646f  .word       0x0000646F                   # dsubu       $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609144u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_609148:
    // 0x609148: 0x0  nop
    ctx->pc = 0x609148u;
    // NOP
label_60914c:
    // 0x60914c: 0x0  nop
    ctx->pc = 0x60914cu;
    // NOP
label_609150:
    // 0x609150: 0x732e7866  .word       0x732E7866                   # INVALID     $t9, $t6, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x609150u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x609150 raw=0x732E7866");
label_609154:
    // 0x609154: 0x7865  .word       0x00007865                   # move        $t7, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609154u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_609158:
    // 0x609158: 0x662e7866  daddiu      $t6, $s1, 0x7866
    ctx->pc = 0x609158u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)30822);
label_60915c:
    // 0x60915c: 0x726165  .word       0x00726165                   # or          $t4, $v1, $s2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60915cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
label_609160:
    // 0x609160: 0x652e7866  daddiu      $t6, $t1, 0x7866
    ctx->pc = 0x609160u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)30822);
label_609164:
    // 0x609164: 0x79766e  .word       0x0079766E                   # dsub        $t6, $v1, $t9 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609164u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 25); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_609168:
    // 0x609168: 0x0  nop
    ctx->pc = 0x609168u;
    // NOP
label_60916c:
    // 0x60916c: 0x0  nop
    ctx->pc = 0x60916cu;
    // NOP
label_609170:
    // 0x609170: 0x0  nop
    ctx->pc = 0x609170u;
    // NOP
label_609174:
    // 0x609174: 0x0  nop
    ctx->pc = 0x609174u;
    // NOP
label_609178:
    // 0x609178: 0x7463412d  .word       0x7463412D                   # INVALID     $v1, $v1, 0x412D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x609178u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x609178 raw=0x7463412D");
label_60917c:
    // 0x60917c: 0x726f  .word       0x0000726F                   # dsubu       $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60917cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_609180:
    // 0x609180: 0x7261542d  .word       0x7261542D                   # INVALID     $s3, $at, 0x542D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x609180u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x609180 raw=0x7261542D");
label_609184:
    // 0x609184: 0x746567  .word       0x00746567                   # nor         $t4, $v1, $s4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609184u;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 20)));
label_609188:
    // 0x609188: 0x0  nop
    ctx->pc = 0x609188u;
    // NOP
label_60918c:
    // 0x60918c: 0x3f4ccccd  .word       0x3F4CCCCD                   # lui         $t4, 0xCCCD # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60918cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)52429 << 16));
label_609190:
    // 0x609190: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x609190u;
    
label_609194:
    // 0x609194: 0x0  nop
    ctx->pc = 0x609194u;
    // NOP
label_609198:
    // 0x609198: 0x6d746c2e  ldr         $s4, 0x6C2E($t3)
    ctx->pc = 0x609198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 27694); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_60919c:
    // 0x60919c: 0x0  nop
    ctx->pc = 0x60919cu;
    // NOP
label_6091a0:
    // 0x6091a0: 0x6277  .word       0x00006277                   # INVALID     $zero, $zero, 0x6277 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6091a0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x6091A0 raw=0x00006277");
label_6091a4:
    // 0x6091a4: 0x6272  tlt         $zero, $zero, 393
    ctx->pc = 0x6091a4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6091a8:
    // 0x6091a8: 0x5f  .word       0x0000005F                   # ddivu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6091a8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x6091A8 raw=0x0000005F");
label_6091ac:
    // 0x6091ac: 0x0  nop
    ctx->pc = 0x6091acu;
    // NOP
label_6091b0:
    // 0x6091b0: 0x706d746c  .word       0x706D746C                   # INVALID     $v1, $t5, 0x746C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x6091b0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x6091B0 raw=0x706D746C");
label_6091b4:
    // 0x6091b4: 0x5f  .word       0x0000005F                   # ddivu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6091b4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x6091B4 raw=0x0000005F");
label_6091b8:
    // 0x6091b8: 0xc1200000  ll          $zero, 0x0($t1)
    ctx->pc = 0x6091b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_6091bc:
    // 0x6091bc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6091bcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6091BC raw=0x00000001");
label_6091c0:
    // 0x6091c0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6091c0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6091C0 raw=0x00000001");
label_6091c4:
    // 0x6091c4: 0x0  nop
    ctx->pc = 0x6091c4u;
    // NOP
label_6091c8:
    // 0x6091c8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6091c8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6091C8 raw=0x00000001");
label_6091cc:
    // 0x6091cc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6091ccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6091CC raw=0x00000001");
label_6091d0:
    // 0x6091d0: 0x0  nop
    ctx->pc = 0x6091d0u;
    // NOP
label_6091d4:
    // 0x6091d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6091d4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6091D4 raw=0x00000001");
label_6091d8:
    // 0x6091d8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6091d8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6091D8 raw=0x00000001");
label_6091dc:
    // 0x6091dc: 0x0  nop
    ctx->pc = 0x6091dcu;
    // NOP
label_6091e0:
    // 0x6091e0: 0xff00ffff  sd          $zero, -0x1($t8)
    ctx->pc = 0x6091e0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 4294967295), GPR_U64(ctx, 0));
label_6091e4:
    // 0x6091e4: 0x0  nop
    ctx->pc = 0x6091e4u;
    // NOP
label_6091e8:
    // 0x6091e8: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x6091e8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_6091ec:
    // 0x6091ec: 0x0  nop
    ctx->pc = 0x6091ecu;
    // NOP
label_6091f0:
    // 0x6091f0: 0x0  nop
    ctx->pc = 0x6091f0u;
    // NOP
label_6091f4:
    // 0x6091f4: 0xff0000ff  sd          $zero, 0xFF($t8)
    ctx->pc = 0x6091f4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 255), GPR_U64(ctx, 0));
label_6091f8:
    // 0x6091f8: 0xff808080  sd          $zero, -0x7F80($gp)
    ctx->pc = 0x6091f8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294934656), GPR_U64(ctx, 0));
label_6091fc:
    // 0x6091fc: 0xff404040  sd          $zero, 0x4040($k0)
    ctx->pc = 0x6091fcu;
    WRITE64(ADD32(GPR_U32(ctx, 26), 16448), GPR_U64(ctx, 0));
label_609200:
    // 0x609200: 0xff000000  sd          $zero, 0x0($t8)
    ctx->pc = 0x609200u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 0));
label_609204:
    // 0x609204: 0xff000000  sd          $zero, 0x0($t8)
    ctx->pc = 0x609204u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 0));
label_609208:
    // 0x609208: 0xff000000  sd          $zero, 0x0($t8)
    ctx->pc = 0x609208u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 0));
label_60920c:
    // 0x60920c: 0xff000000  sd          $zero, 0x0($t8)
    ctx->pc = 0x60920cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 0));
label_609210:
    // 0x609210: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609210u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609210 raw=0x00000001");
label_609214:
    // 0x609214: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609214u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609214 raw=0x00000001");
label_609218:
    // 0x609218: 0x0  nop
    ctx->pc = 0x609218u;
    // NOP
label_60921c:
    // 0x60921c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60921cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60921C raw=0x00000001");
label_609220:
    // 0x609220: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609220u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609220 raw=0x00000001");
label_609224:
    // 0x609224: 0x0  nop
    ctx->pc = 0x609224u;
    // NOP
label_609228:
    // 0x609228: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609228u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609228 raw=0x00000001");
label_60922c:
    // 0x60922c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60922cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60922C raw=0x00000001");
label_609230:
    // 0x609230: 0x0  nop
    ctx->pc = 0x609230u;
    // NOP
label_609234:
    // 0x609234: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609234u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609234 raw=0x00000001");
label_609238:
    // 0x609238: 0x0  nop
    ctx->pc = 0x609238u;
    // NOP
label_60923c:
    // 0x60923c: 0x0  nop
    ctx->pc = 0x60923cu;
    // NOP
label_609240:
    // 0x609240: 0x6d6e612e  ldr         $t6, 0x612E($t3)
    ctx->pc = 0x609240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24878); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_609244:
    // 0x609244: 0x0  nop
    ctx->pc = 0x609244u;
    // NOP
label_609248:
    // 0x609248: 0xffff0000  sd          $ra, 0x0($ra)
    ctx->pc = 0x609248u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 0), GPR_U64(ctx, 31));
label_60924c:
    // 0x60924c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60924cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60924C raw=0x00000001");
label_609250:
    // 0x609250: 0x4ed5a8  .word       0x004ED5A8                   # mfsa        $k0 # 004E0580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x609250u;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_609254:
    // 0x609254: 0x0  nop
    ctx->pc = 0x609254u;
    // NOP
label_609258:
    // 0x609258: 0x6e65706f  ldr         $a1, 0x706F($s3)
    ctx->pc = 0x609258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_60925c:
    // 0x60925c: 0x0  nop
    ctx->pc = 0x60925cu;
    // NOP
label_609260:
    // 0x609260: 0x736f6c63  .word       0x736F6C63                   # INVALID     $k1, $t7, 0x6C63 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x609260u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x609260 raw=0x736F6C63");
label_609264:
    // 0x609264: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609264u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_609268:
    // 0x609268: 0xff800000  sd          $zero, 0x0($gp)
    ctx->pc = 0x609268u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 0), GPR_U64(ctx, 0));
label_60926c:
    // 0x60926c: 0x0  nop
    ctx->pc = 0x60926cu;
    // NOP
label_609270:
    // 0x609270: 0x6d6e612e  ldr         $t6, 0x612E($t3)
    ctx->pc = 0x609270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24878); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_609274:
    // 0x609274: 0x0  nop
    ctx->pc = 0x609274u;
    // NOP
label_609278:
    // 0x609278: 0x0  nop
    ctx->pc = 0x609278u;
    // NOP
label_60927c:
    // 0x60927c: 0x0  nop
    ctx->pc = 0x60927cu;
    // NOP
label_609280:
    // 0x609280: 0x63257325  daddi       $a1, $t9, 0x7325
    ctx->pc = 0x609280u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)29477; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_609284:
    // 0x609284: 0x7325  .word       0x00007325                   # move        $t6, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609284u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_609288:
    // 0x609288: 0x614e6f4e  daddi       $t6, $t2, 0x6F4E
    ctx->pc = 0x609288u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)28494; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_60928c:
    // 0x60928c: 0x656d  .word       0x0000656D                   # daddu       $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60928cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_609290:
    // 0x609290: 0x6f6f6c66  ldr         $t7, 0x6C66($k1)
    ctx->pc = 0x609290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 27750); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_609294:
    // 0x609294: 0x7372  tlt         $zero, $zero, 461
    ctx->pc = 0x609294u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_609298:
    // 0x609298: 0x6c6c6177  ldr         $t4, 0x6177($v1)
    ctx->pc = 0x609298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24951); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_60929c:
    // 0x60929c: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x60929cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6092a0:
    // 0x6092a0: 0x6c617778  ldr         $at, 0x7778($v1)
    ctx->pc = 0x6092a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30584); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_6092a4:
    // 0x6092a4: 0x736c  .word       0x0000736C                   # dadd        $t6, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6092a4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_6092a8:
    // 0x6092a8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x6092a8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_6092ac:
    // 0x6092ac: 0x5c  .word       0x0000005C                   # dmult       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6092acu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x6092AC raw=0x0000005C");
label_6092b0:
    // 0x6092b0: 0x2a2e2a  .word       0x002A2E2A                   # slt         $a1, $at, $t2 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6092b0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 1) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_6092b4:
    // 0x6092b4: 0x706d62  .word       0x00706D62                   # sub         $t5, $v1, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6092b4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 3), GPR_U32(ctx, 16), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_6092b8:
    // 0x6092b8: 0x676e70  tge         $v1, $a3, 441
    ctx->pc = 0x6092b8u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_6092bc:
    // 0x6092bc: 0x775f  .word       0x0000775F                   # ddivu       $t6, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6092bcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x6092BC raw=0x0000775F");
label_6092c0:
    // 0x6092c0: 0x7325  .word       0x00007325                   # move        $t6, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6092c0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_6092c4:
    // 0x6092c4: 0x7472  tlt         $zero, $zero, 465
    ctx->pc = 0x6092c4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6092c8:
    // 0x6092c8: 0xa0d5d  .word       0x000A0D5D                   # dmultu      $zero, $t2 # 00000D40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6092c8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x6092C8 raw=0x000A0D5D");
label_6092cc:
    // 0x6092cc: 0x0  nop
    ctx->pc = 0x6092ccu;
    // NOP
label_6092d0:
    // 0x6092d0: 0x696c6974  ldl         $t4, 0x6974($t3)
    ctx->pc = 0x6092d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_6092d4:
    // 0x6092d4: 0x676e  .word       0x0000676E                   # dsub        $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6092d4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_6092d8:
    // 0x6092d8: 0x25206625  addiu       $zero, $t1, 0x6625
    ctx->pc = 0x6092d8u;
    // NOP (addiu $zero, ...)
label_6092dc:
    // 0x6092dc: 0x66  .word       0x00000066                   # xor         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6092dcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_6092e0:
    // 0x6092e0: 0x61626772  daddi       $v0, $t3, 0x6772
    ctx->pc = 0x6092e0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26482; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_6092e4:
    // 0x6092e4: 0x0  nop
    ctx->pc = 0x6092e4u;
    // NOP
label_6092e8:
    // 0x6092e8: 0x0  nop
    ctx->pc = 0x6092e8u;
    // NOP
label_6092ec:
    // 0x6092ec: 0x0  nop
    ctx->pc = 0x6092ecu;
    // NOP
label_6092f0:
    // 0x6092f0: 0x6d696e61  ldr         $t1, 0x6E61($t3)
    ctx->pc = 0x6092f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_6092f4:
    // 0x6092f4: 0x44492e  .word       0x0044492E                   # dsub        $t1, $v0, $a0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6092f4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 2); int64_t b = (int64_t)GPR_S64(ctx, 4); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_6092f8:
    // 0x6092f8: 0x0  nop
    ctx->pc = 0x6092f8u;
    // NOP
label_6092fc:
    // 0x6092fc: 0x0  nop
    ctx->pc = 0x6092fcu;
    // NOP
label_609300:
    // 0x609300: 0x74616c  .word       0x0074616C                   # dadd        $t4, $v1, $s4 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609300u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_609304:
    // 0x609304: 0x697361  .word       0x00697361                   # addu        $t6, $v1, $t1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609304u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_609308:
    // 0x609308: 0x616c62  .word       0x00616C62                   # sub         $t5, $v1, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609308u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 3), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_60930c:
    // 0x60930c: 0x0  nop
    ctx->pc = 0x60930cu;
    // NOP
label_609310:
    // 0x609310: 0x6e696b73  ldr         $t1, 0x6B73($s3)
    ctx->pc = 0x609310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_609314:
    // 0x609314: 0x0  nop
    ctx->pc = 0x609314u;
    // NOP
label_609318:
    // 0x609318: 0x0  nop
    ctx->pc = 0x609318u;
    // NOP
label_60931c:
    // 0x60931c: 0x0  nop
    ctx->pc = 0x60931cu;
    // NOP
label_609320:
    // 0x609320: 0x64616568  daddiu      $at, $v1, 0x6568
    ctx->pc = 0x609320u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25960);
label_609324:
    // 0x609324: 0x0  nop
    ctx->pc = 0x609324u;
    // NOP
label_609328:
    // 0x609328: 0x72696168  .word       0x72696168                   # pabsh       $t4, $t1 # 02600000 <InstrIdType: R5900_MMI_1>
    ctx->pc = 0x609328u;
    SET_GPR_VEC(ctx, 12, PS2_PABSH(GPR_VEC(ctx, 19)));
label_60932c:
    // 0x60932c: 0x0  nop
    ctx->pc = 0x60932cu;
    // NOP
label_609330:
    // 0x609330: 0x3d676174  .word       0x3D676174                   # lui         $a3, 0x6174 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x609330u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24948 << 16));
label_609334:
    // 0x609334: 0x303031  tgeu        $at, $s0, 192
    ctx->pc = 0x609334u;
    if (GPR_U64(ctx, 1) >= GPR_U64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
label_609338:
    // 0x609338: 0x0  nop
    ctx->pc = 0x609338u;
    // NOP
label_60933c:
    // 0x60933c: 0x0  nop
    ctx->pc = 0x60933cu;
    // NOP
label_609340:
    // 0x609340: 0x2e317325  sltiu       $s1, $s1, 0x7325
    ctx->pc = 0x609340u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)29477) ? 1 : 0);
label_609344:
    // 0x609344: 0x676e70  tge         $v1, $a3, 441
    ctx->pc = 0x609344u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_609348:
    // 0x609348: 0x2e307325  sltiu       $s0, $s1, 0x7325
    ctx->pc = 0x609348u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)29477) ? 1 : 0);
label_60934c:
    // 0x60934c: 0x676e70  tge         $v1, $a3, 441
    ctx->pc = 0x60934cu;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_609350:
    // 0x609350: 0x656c6469  daddiu      $t4, $t3, 0x6469
    ctx->pc = 0x609350u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25705);
label_609354:
    // 0x609354: 0x31305f  .word       0x0031305F                   # ddivu       $a2, $at, $s1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609354u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x609354 raw=0x0031305F");
label_609358:
    // 0x609358: 0x6b6c6174  ldl         $t4, 0x6174($k1)
    ctx->pc = 0x609358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_60935c:
    // 0x60935c: 0x0  nop
    ctx->pc = 0x60935cu;
    // NOP
label_609360:
    // 0x609360: 0x3230  tge         $zero, $zero, 200
    ctx->pc = 0x609360u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_609364:
    // 0x609364: 0x68  .word       0x00000068                   # mfsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x609364u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_609368:
    // 0x609368: 0x74773035  .word       0x74773035                   # INVALID     $v1, $s7, 0x3035 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x609368u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x609368 raw=0x74773035");
label_60936c:
    // 0x60936c: 0x0  nop
    ctx->pc = 0x60936cu;
    // NOP
label_609370:
    // 0x609370: 0x6d  .word       0x0000006D                   # daddu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609370u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_609374:
    // 0x609374: 0x77  .word       0x00000077                   # INVALID     $zero, $zero, 0x77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609374u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x609374 raw=0x00000077");
label_609378:
    // 0x609378: 0x5f725f  .word       0x005F725F                   # ddivu       $t6, $v0, $ra # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609378u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x609378 raw=0x005F725F");
label_60937c:
    // 0x60937c: 0x0  nop
    ctx->pc = 0x60937cu;
    // NOP
label_609380:
    // 0x609380: 0x6d6e612e  ldr         $t6, 0x612E($t3)
    ctx->pc = 0x609380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24878); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_609384:
    // 0x609384: 0x0  nop
    ctx->pc = 0x609384u;
    // NOP
label_609388:
    // 0x609388: 0x64253043  daddiu      $a1, $at, 0x3043
    ctx->pc = 0x609388u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)12355);
label_60938c:
    // 0x60938c: 0x54  .word       0x00000054                   # dsllv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60938cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_609390:
    // 0x609390: 0x54642543  bnel        $v1, $a0, . + 4 + (0x2543 << 2)
label_609394:
    if (ctx->pc == 0x609394u) {
        ctx->pc = 0x609398u;
        goto label_609398;
    }
    ctx->pc = 0x609390u;
    {
        const bool branch_taken_0x609390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x609390) {
            ctx->pc = 0x6128A0u;
            return;
        }
    }
    ctx->pc = 0x609398u;
label_609398:
    // 0x609398: 0x642530  tge         $v1, $a0, 148
    ctx->pc = 0x609398u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_60939c:
    // 0x60939c: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60939cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_6093a0:
    // 0x6093a0: 0x73257325  .word       0x73257325                   # INVALID     $t9, $a1, 0x7325 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x6093a0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x6093A0 raw=0x73257325");
label_6093a4:
    // 0x6093a4: 0x7325  .word       0x00007325                   # move        $t6, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6093a4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_6093a8:
    // 0x6093a8: 0x65623035  daddiu      $v0, $t3, 0x3035
    ctx->pc = 0x6093a8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)12341);
label_6093ac:
    // 0x6093ac: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6093acu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_6093b0:
    // 0x6093b0: 0x6b6c6177  ldl         $t4, 0x6177($k1)
    ctx->pc = 0x6093b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24951); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_6093b4:
    // 0x6093b4: 0x0  nop
    ctx->pc = 0x6093b4u;
    // NOP
label_6093b8:
    // 0x6093b8: 0x6e7572  tlt         $v1, $t6, 469
    ctx->pc = 0x6093b8u;
    if (GPR_S64(ctx, 3) < GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_6093bc:
    // 0x6093bc: 0x0  nop
    ctx->pc = 0x6093bcu;
    // NOP
label_6093c0:
    // 0x6093c0: 0x6d6e612e  ldr         $t6, 0x612E($t3)
    ctx->pc = 0x6093c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24878); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_6093c4:
    // 0x6093c4: 0x0  nop
    ctx->pc = 0x6093c4u;
    // NOP
label_6093c8:
    // 0x6093c8: 0x6b6c6174  ldl         $t4, 0x6174($k1)
    ctx->pc = 0x6093c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_6093cc:
    // 0x6093cc: 0x31305f  .word       0x0031305F                   # ddivu       $a2, $at, $s1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6093ccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x6093CC raw=0x0031305F");
label_6093d0:
    // 0x6093d0: 0x6b6c6174  ldl         $t4, 0x6174($k1)
    ctx->pc = 0x6093d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_6093d4:
    // 0x6093d4: 0x32305f  .word       0x0032305F                   # ddivu       $a2, $at, $s2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6093d4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x6093D4 raw=0x0032305F");
label_6093d8:
    // 0x6093d8: 0x0  nop
    ctx->pc = 0x6093d8u;
    // NOP
label_6093dc:
    // 0x6093dc: 0x0  nop
    ctx->pc = 0x6093dcu;
    // NOP
label_6093e0:
    // 0x6093e0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x6093e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_6093e4:
    // 0x6093e4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x6093e4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_6093e8:
    // 0x6093e8: 0xff000000  sd          $zero, 0x0($t8)
    ctx->pc = 0x6093e8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 0));
label_6093ec:
    // 0x6093ec: 0x0  nop
    ctx->pc = 0x6093ecu;
    // NOP
label_6093f0:
    // 0x6093f0: 0x54642543  bnel        $v1, $a0, . + 4 + (0x2543 << 2)
label_6093f4:
    if (ctx->pc == 0x6093F4u) {
        ctx->pc = 0x6093F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x6093F0u;
        // 0x6093f4: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x6093F8u;
        goto label_6093f8;
    }
    ctx->pc = 0x6093F0u;
    {
        const bool branch_taken_0x6093f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x6093f0) {
            ctx->pc = 0x6093F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x6093F0u;
            // 0x6093f4: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x612900u;
            return;
        }
    }
    ctx->pc = 0x6093F8u;
label_6093f8:
    // 0x6093f8: 0x0  nop
    ctx->pc = 0x6093f8u;
    // NOP
label_6093fc:
    // 0x6093fc: 0x0  nop
    ctx->pc = 0x6093fcu;
    // NOP
label_609400:
    // 0x609400: 0x0  nop
    ctx->pc = 0x609400u;
    // NOP
label_609404:
    // 0x609404: 0x70616d  .word       0x0070616D                   # daddu       $t4, $v1, $s0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609404u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 16));
label_609408:
    // 0x609408: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609408u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609408 raw=0x00000001");
label_60940c:
    // 0x60940c: 0x0  nop
    ctx->pc = 0x60940cu;
    // NOP
label_609410:
    // 0x609410: 0x4b4c4157  vminiw.xz   $vf5, $vf8, $vf12w
    ctx->pc = 0x609410u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_609414:
    // 0x609414: 0x0  nop
    ctx->pc = 0x609414u;
    // NOP
label_609418:
    // 0x609418: 0x6d6f6854  ldr         $t7, 0x6854($t3)
    ctx->pc = 0x609418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26708); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_60941c:
    // 0x60941c: 0x7361  .word       0x00007361                   # addu        $t6, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60941cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_609420:
    // 0x609420: 0x64697369  daddiu      $t1, $v1, 0x7369
    ctx->pc = 0x609420u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29545);
label_609424:
    // 0x609424: 0x656c  .word       0x0000656C                   # dadd        $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609424u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_609428:
    // 0x609428: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609428u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609428 raw=0x00000001");
label_60942c:
    // 0x60942c: 0x0  nop
    ctx->pc = 0x60942cu;
    // NOP
label_609430:
    // 0x609430: 0x64697369  daddiu      $t1, $v1, 0x7369
    ctx->pc = 0x609430u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29545);
label_609434:
    // 0x609434: 0x656c  .word       0x0000656C                   # dadd        $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609434u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
label_609438:
    // 0x609438: 0x0  nop
    ctx->pc = 0x609438u;
    // NOP
label_60943c:
    // 0x60943c: 0x2626  .word       0x00002626                   # xor         $a0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60943cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_609440:
    // 0x609440: 0x662e7866  daddiu      $t6, $s1, 0x7866
    ctx->pc = 0x609440u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)30822);
label_609444:
    // 0x609444: 0x6b726f  .word       0x006B726F                   # dsubu       $t6, $v1, $t3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609444u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) - GPR_U64(ctx, 11));
label_609448:
    // 0x609448: 0x68  .word       0x00000068                   # mfsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x609448u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_60944c:
    // 0x60944c: 0x41f00000  .word       0x41F00000                   # INVALID     $t7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x60944cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x60944C raw=0x41F00000");
label_609450:
    // 0x609450: 0x535f5243  beql        $k0, $ra, . + 4 + (0x5243 << 2)
label_609454:
    if (ctx->pc == 0x609454u) {
        ctx->pc = 0x609454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x609450u;
        // 0x609454: 0x7865  .word       0x00007865                   # move        $t7, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x609458u;
        goto label_609458;
    }
    ctx->pc = 0x609450u;
    {
        const bool branch_taken_0x609450 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 31));
        if (branch_taken_0x609450) {
            ctx->pc = 0x609454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x609450u;
            // 0x609454: 0x7865  .word       0x00007865                   # move        $t7, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x61DD60u;
            return;
        }
    }
    ctx->pc = 0x609458u;
label_609458:
    // 0x609458: 0x465f5243  .word       0x465F5243                   # INVALID     $s2, $ra, 0x5243 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x609458u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x3 at 0x609458 raw=0x465F5243");
label_60945c:
    // 0x60945c: 0x726165  .word       0x00726165                   # or          $t4, $v1, $s2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60945cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
label_609460:
    // 0x609460: 0x6272  tlt         $zero, $zero, 393
    ctx->pc = 0x609460u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_609464:
    // 0x609464: 0x0  nop
    ctx->pc = 0x609464u;
    // NOP
label_609468:
    // 0x609468: 0x4b4c4157  vminiw.xz   $vf5, $vf8, $vf12w
    ctx->pc = 0x609468u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_60946c:
    // 0x60946c: 0x0  nop
    ctx->pc = 0x60946cu;
    // NOP
label_609470:
    // 0x609470: 0x5f766e69  .word       0x5F766E69                   # bgtzl       $k1, . + 4 + (0x6E69 << 2) # 00160000 <InstrIdType: CPU_NORMAL>
label_609474:
    if (ctx->pc == 0x609474u) {
        ctx->pc = 0x609478u;
        goto label_609478;
    }
    ctx->pc = 0x609470u;
    {
        const bool branch_taken_0x609470 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x609470) {
            ctx->pc = 0x624E18u;
            return;
        }
    }
    ctx->pc = 0x609478u;
label_609478:
    // 0x609478: 0x0  nop
    ctx->pc = 0x609478u;
    // NOP
label_60947c:
    // 0x60947c: 0x686373  tltu        $v1, $t0, 397
    ctx->pc = 0x60947cu;
    if (GPR_U64(ctx, 3) < GPR_U64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_609480:
    // 0x609480: 0x6c6f72  tlt         $v1, $t4, 445
    ctx->pc = 0x609480u;
    if (GPR_S64(ctx, 3) < GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_609484:
    // 0x609484: 0x0  nop
    ctx->pc = 0x609484u;
    // NOP
label_609488:
    // 0x609488: 0x7463412d  .word       0x7463412D                   # INVALID     $v1, $v1, 0x412D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x609488u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x609488 raw=0x7463412D");
label_60948c:
    // 0x60948c: 0x726f  .word       0x0000726F                   # dsubu       $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60948cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_609490:
    // 0x609490: 0x7261542d  .word       0x7261542D                   # INVALID     $s3, $at, 0x542D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x609490u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x609490 raw=0x7261542D");
label_609494:
    // 0x609494: 0x746567  .word       0x00746567                   # nor         $t4, $v1, $s4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609494u;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 20)));
label_609498:
    // 0x609498: 0x0  nop
    ctx->pc = 0x609498u;
    // NOP
label_60949c:
    // 0x60949c: 0x0  nop
    ctx->pc = 0x60949cu;
    // NOP
label_6094a0:
    // 0x6094a0: 0x72616566  .word       0x72616566                   # INVALID     $s3, $at, 0x6566 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x6094a0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x6094A0 raw=0x72616566");
label_6094a4:
    // 0x6094a4: 0x0  nop
    ctx->pc = 0x6094a4u;
    // NOP
label_6094a8:
    // 0x6094a8: 0x786573  tltu        $v1, $t8, 405
    ctx->pc = 0x6094a8u;
    if (GPR_U64(ctx, 3) < GPR_U64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
label_6094ac:
    // 0x6094ac: 0x6d5f  .word       0x00006D5F                   # ddivu       $t5, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6094acu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x6094AC raw=0x00006D5F");
label_6094b0:
    // 0x6094b0: 0x775f  .word       0x0000775F                   # ddivu       $t6, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6094b0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x6094B0 raw=0x0000775F");
label_6094b4:
    // 0x6094b4: 0x6f5f  .word       0x00006F5F                   # ddivu       $t5, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6094b4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x6094B4 raw=0x00006F5F");
label_6094b8:
    // 0x6094b8: 0x0  nop
    ctx->pc = 0x6094b8u;
    // NOP
label_6094bc:
    // 0x6094bc: 0x0  nop
    ctx->pc = 0x6094bcu;
    // NOP
label_6094c0:
    // 0x6094c0: 0x0  nop
    ctx->pc = 0x6094c0u;
    // NOP
label_6094c4:
    // 0x6094c4: 0x0  nop
    ctx->pc = 0x6094c4u;
    // NOP
label_6094c8:
    // 0x6094c8: 0x78257830  lq          $a1, 0x7830($at)
    ctx->pc = 0x6094c8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 1), 30768)));
label_6094cc:
    // 0x6094cc: 0x0  nop
    ctx->pc = 0x6094ccu;
    // NOP
label_6094d0:
    // 0x6094d0: 0x6c766c  .word       0x006C766C                   # dadd        $t6, $v1, $t4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6094d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 12); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, r); }
label_6094d4:
    // 0x6094d4: 0x0  nop
    ctx->pc = 0x6094d4u;
    // NOP
label_6094d8:
    // 0x6094d8: 0x0  nop
    ctx->pc = 0x6094d8u;
    // NOP
label_6094dc:
    // 0x6094dc: 0x0  nop
    ctx->pc = 0x6094dcu;
    // NOP
label_6094e0:
    // 0x6094e0: 0x0  nop
    ctx->pc = 0x6094e0u;
    // NOP
label_6094e4:
    // 0x6094e4: 0x0  nop
    ctx->pc = 0x6094e4u;
    // NOP
label_6094e8:
    // 0x6094e8: 0x0  nop
    ctx->pc = 0x6094e8u;
    // NOP
label_6094ec:
    // 0x6094ec: 0x0  nop
    ctx->pc = 0x6094ecu;
    // NOP
label_6094f0:
    // 0x6094f0: 0x0  nop
    ctx->pc = 0x6094f0u;
    // NOP
label_6094f4:
    // 0x6094f4: 0x0  nop
    ctx->pc = 0x6094f4u;
    // NOP
label_6094f8:
    // 0x6094f8: 0x0  nop
    ctx->pc = 0x6094f8u;
    // NOP
label_6094fc:
    // 0x6094fc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6094fcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6094FC raw=0x00000001");
label_609500:
    // 0x609500: 0x0  nop
    ctx->pc = 0x609500u;
    // NOP
label_609504:
    // 0x609504: 0x0  nop
    ctx->pc = 0x609504u;
    // NOP
label_609508:
    // 0x609508: 0x7f7fffff  sq          $ra, -0x1($k1)
    ctx->pc = 0x609508u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 4294967295), GPR_VEC(ctx, 31));
label_60950c:
    // 0x60950c: 0x0  nop
    ctx->pc = 0x60950cu;
    // NOP
label_609510:
    // 0x609510: 0x0  nop
    ctx->pc = 0x609510u;
    // NOP
label_609514:
    // 0x609514: 0x0  nop
    ctx->pc = 0x609514u;
    // NOP
label_609518:
    // 0x609518: 0x0  nop
    ctx->pc = 0x609518u;
    // NOP
label_60951c:
    // 0x60951c: 0x0  nop
    ctx->pc = 0x60951cu;
    // NOP
label_609520:
    // 0x609520: 0x0  nop
    ctx->pc = 0x609520u;
    // NOP
label_609524:
    // 0x609524: 0x0  nop
    ctx->pc = 0x609524u;
    // NOP
label_609528:
    // 0x609528: 0x0  nop
    ctx->pc = 0x609528u;
    // NOP
label_60952c:
    // 0x60952c: 0x0  nop
    ctx->pc = 0x60952cu;
    // NOP
label_609530:
    // 0x609530: 0x0  nop
    ctx->pc = 0x609530u;
    // NOP
label_609534:
    // 0x609534: 0x0  nop
    ctx->pc = 0x609534u;
    // NOP
label_609538:
    // 0x609538: 0x0  nop
    ctx->pc = 0x609538u;
    // NOP
label_60953c:
    // 0x60953c: 0x0  nop
    ctx->pc = 0x60953cu;
    // NOP
label_609540:
    // 0x609540: 0x0  nop
    ctx->pc = 0x609540u;
    // NOP
label_609544:
    // 0x609544: 0x0  nop
    ctx->pc = 0x609544u;
    // NOP
label_609548:
    // 0x609548: 0x0  nop
    ctx->pc = 0x609548u;
    // NOP
label_60954c:
    // 0x60954c: 0x0  nop
    ctx->pc = 0x60954cu;
    // NOP
label_609550:
    // 0x609550: 0x0  nop
    ctx->pc = 0x609550u;
    // NOP
label_609554:
    // 0x609554: 0x0  nop
    ctx->pc = 0x609554u;
    // NOP
label_609558:
    // 0x609558: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x609558u;
    
label_60955c:
    // 0x60955c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60955cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60955C raw=0x00000001");
label_609560:
    // 0x609560: 0x0  nop
    ctx->pc = 0x609560u;
    // NOP
label_609564:
    // 0x609564: 0x0  nop
    ctx->pc = 0x609564u;
    // NOP
label_609568:
    // 0x609568: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x609568u;
    
label_60956c:
    // 0x60956c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60956cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60956C raw=0x00000001");
label_609570:
    // 0x609570: 0x0  nop
    ctx->pc = 0x609570u;
    // NOP
label_609574:
    // 0x609574: 0x0  nop
    ctx->pc = 0x609574u;
    // NOP
label_609578:
    // 0x609578: 0x706d746c  .word       0x706D746C                   # INVALID     $v1, $t5, 0x746C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x609578u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x609578 raw=0x706D746C");
label_60957c:
    // 0x60957c: 0x0  nop
    ctx->pc = 0x60957cu;
    // NOP
label_609580:
    // 0x609580: 0x676e702e  daddiu      $t6, $k1, 0x702E
    ctx->pc = 0x609580u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28718);
label_609584:
    // 0x609584: 0x0  nop
    ctx->pc = 0x609584u;
    // NOP
label_609588:
    // 0x609588: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x609588u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_60958c:
    // 0x60958c: 0x0  nop
    ctx->pc = 0x60958cu;
    // NOP
label_609590:
    // 0x609590: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x609590u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_609594:
    // 0x609594: 0xff000000  sd          $zero, 0x0($t8)
    ctx->pc = 0x609594u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 0));
label_609598:
    // 0x609598: 0x0  nop
    ctx->pc = 0x609598u;
    // NOP
label_60959c:
    // 0x60959c: 0x0  nop
    ctx->pc = 0x60959cu;
    // NOP
label_6095a0:
    // 0x6095a0: 0x0  nop
    ctx->pc = 0x6095a0u;
    // NOP
label_6095a4:
    // 0x6095a4: 0x0  nop
    ctx->pc = 0x6095a4u;
    // NOP
label_6095a8:
    // 0x6095a8: 0x0  nop
    ctx->pc = 0x6095a8u;
    // NOP
label_6095ac:
    // 0x6095ac: 0x0  nop
    ctx->pc = 0x6095acu;
    // NOP
label_6095b0:
    // 0x6095b0: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x6095b0u;
    
label_6095b4:
    // 0x6095b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6095b4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6095B4 raw=0x00000001");
label_6095b8:
    // 0x6095b8: 0x0  nop
    ctx->pc = 0x6095b8u;
    // NOP
label_6095bc:
    // 0x6095bc: 0x0  nop
    ctx->pc = 0x6095bcu;
    // NOP
label_6095c0:
    // 0x6095c0: 0x0  nop
    ctx->pc = 0x6095c0u;
    // NOP
label_6095c4:
    // 0x6095c4: 0x0  nop
    ctx->pc = 0x6095c4u;
    // NOP
label_6095c8:
    // 0x6095c8: 0x0  nop
    ctx->pc = 0x6095c8u;
    // NOP
label_6095cc:
    // 0x6095cc: 0x0  nop
    ctx->pc = 0x6095ccu;
    // NOP
label_6095d0:
    // 0x6095d0: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x6095d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_6095d4:
    // 0x6095d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6095d4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6095D4 raw=0x00000001");
label_6095d8:
    // 0x6095d8: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x6095d8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_6095dc:
    // 0x6095dc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6095dcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6095DC raw=0x00000001");
label_6095e0:
    // 0x6095e0: 0x0  nop
    ctx->pc = 0x6095e0u;
    // NOP
label_6095e4:
    // 0x6095e4: 0x0  nop
    ctx->pc = 0x6095e4u;
    // NOP
label_6095e8:
    // 0x6095e8: 0x0  nop
    ctx->pc = 0x6095e8u;
    // NOP
label_6095ec:
    // 0x6095ec: 0x0  nop
    ctx->pc = 0x6095ecu;
    // NOP
label_6095f0:
    // 0x6095f0: 0x0  nop
    ctx->pc = 0x6095f0u;
    // NOP
label_6095f4:
    // 0x6095f4: 0x0  nop
    ctx->pc = 0x6095f4u;
    // NOP
label_6095f8:
    // 0x6095f8: 0x0  nop
    ctx->pc = 0x6095f8u;
    // NOP
label_6095fc:
    // 0x6095fc: 0x0  nop
    ctx->pc = 0x6095fcu;
    // NOP
label_609600:
    // 0x609600: 0x4f23b0  tge         $v0, $t7, 142
    ctx->pc = 0x609600u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 15)) { runtime->handleTrap(rdram, ctx); }
label_609604:
    // 0x609604: 0x8  jr          $zero
label_609608:
    if (ctx->pc == 0x609608u) {
        ctx->pc = 0x60960Cu;
        goto label_60960c;
    }
    ctx->pc = 0x609604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x609604u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x60960Cu;
label_60960c:
    // 0x60960c: 0x0  nop
    ctx->pc = 0x60960cu;
    // NOP
label_609610:
    // 0x609610: 0x4f25d0  .word       0x004F25D0                   # mfhi        $a0 # 004F05C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609610u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_609614:
    // 0x609614: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x609614u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_609618:
    // 0x609618: 0x3c888889  .word       0x3C888889                   # lui         $t0, 0x8889 # 00800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x609618u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34953 << 16));
label_60961c:
    // 0x60961c: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x60961cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x60961C raw=0x42700000");
label_609620:
    // 0x609620: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609620u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609620 raw=0x00000001");
label_609624:
    // 0x609624: 0x0  nop
    ctx->pc = 0x609624u;
    // NOP
label_609628:
    // 0x609628: 0x0  nop
    ctx->pc = 0x609628u;
    // NOP
label_60962c:
    // 0x60962c: 0x0  nop
    ctx->pc = 0x60962cu;
    // NOP
label_609630:
    // 0x609630: 0x4f2670  tge         $v0, $t7, 153
    ctx->pc = 0x609630u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 15)) { runtime->handleTrap(rdram, ctx); }
label_609634:
    // 0x609634: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x609634u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_609638:
    // 0x609638: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609638u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609638 raw=0x00000001");
label_60963c:
    // 0x60963c: 0x0  nop
    ctx->pc = 0x60963cu;
    // NOP
label_609640:
    // 0x609640: 0x0  nop
    ctx->pc = 0x609640u;
    // NOP
label_609644:
    // 0x609644: 0x0  nop
    ctx->pc = 0x609644u;
    // NOP
label_609648:
    // 0x609648: 0x4f2720  .word       0x004F2720                   # add         $a0, $v0, $t7 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609648u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 15);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_60964c:
    // 0x60964c: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x60964cu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_609650:
    // 0x609650: 0x3c888889  .word       0x3C888889                   # lui         $t0, 0x8889 # 00800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x609650u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34953 << 16));
label_609654:
    // 0x609654: 0x42700000  .word       0x42700000                   # INVALID     $s3, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x609654u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x609654 raw=0x42700000");
label_609658:
    // 0x609658: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609658u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609658 raw=0x00000001");
label_60965c:
    // 0x60965c: 0x0  nop
    ctx->pc = 0x60965cu;
    // NOP
label_609660:
    // 0x609660: 0x0  nop
    ctx->pc = 0x609660u;
    // NOP
label_609664:
    // 0x609664: 0x0  nop
    ctx->pc = 0x609664u;
    // NOP
label_609668:
    // 0x609668: 0x4f27d0  .word       0x004F27D0                   # mfhi        $a0 # 004F07C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609668u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_60966c:
    // 0x60966c: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x60966cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x60966C raw=0x0000001C");
label_609670:
    // 0x609670: 0x0  nop
    ctx->pc = 0x609670u;
    // NOP
label_609674:
    // 0x609674: 0x0  nop
    ctx->pc = 0x609674u;
    // NOP
label_609678:
    // 0x609678: 0x4f29b0  tge         $v0, $t7, 166
    ctx->pc = 0x609678u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 15)) { runtime->handleTrap(rdram, ctx); }
label_60967c:
    // 0x60967c: 0x8  jr          $zero
label_609680:
    if (ctx->pc == 0x609680u) {
        ctx->pc = 0x609680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x60967Cu;
        // 0x609680: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609680 raw=0x00000001");
        ctx->in_delay_slot = false;
        ctx->pc = 0x609684u;
        goto label_609684;
    }
    ctx->pc = 0x60967Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x609680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x60967Cu;
        // 0x609680: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609680 raw=0x00000001");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x60967Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x609684u;
label_609684:
    // 0x609684: 0x0  nop
    ctx->pc = 0x609684u;
    // NOP
label_609688:
    // 0x609688: 0x0  nop
    ctx->pc = 0x609688u;
    // NOP
label_60968c:
    // 0x60968c: 0x0  nop
    ctx->pc = 0x60968cu;
    // NOP
label_609690:
    // 0x609690: 0x4f2a70  tge         $v0, $t7, 169
    ctx->pc = 0x609690u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 15)) { runtime->handleTrap(rdram, ctx); }
label_609694:
    // 0x609694: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x609694u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x609694 raw=0x0000001C");
label_609698:
    // 0x609698: 0x0  nop
    ctx->pc = 0x609698u;
    // NOP
label_60969c:
    // 0x60969c: 0x0  nop
    ctx->pc = 0x60969cu;
    // NOP
label_6096a0:
    // 0x6096a0: 0x0  nop
    ctx->pc = 0x6096a0u;
    // NOP
label_6096a4:
    // 0x6096a4: 0x0  nop
    ctx->pc = 0x6096a4u;
    // NOP
label_6096a8:
    // 0x6096a8: 0x0  nop
    ctx->pc = 0x6096a8u;
    // NOP
label_6096ac:
    // 0x6096ac: 0x0  nop
    ctx->pc = 0x6096acu;
    // NOP
label_6096b0:
    // 0x6096b0: 0x575e70  tge         $v0, $s7, 377
    ctx->pc = 0x6096b0u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_6096b4:
    // 0x6096b4: 0x577fe0  .word       0x00577FE0                   # add         $t7, $v0, $s7 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6096b4u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 23);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_6096b8:
    // 0x6096b8: 0x6096b0  tge         $v1, $zero, 602
    ctx->pc = 0x6096b8u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6096bc:
    // 0x6096bc: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x6096bcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_6096c0:
    // 0x6096c0: 0x0  nop
    ctx->pc = 0x6096c0u;
    // NOP
label_6096c4:
    // 0x6096c4: 0x0  nop
    ctx->pc = 0x6096c4u;
    // NOP
label_6096c8:
    // 0x6096c8: 0x0  nop
    ctx->pc = 0x6096c8u;
    // NOP
label_6096cc:
    // 0x6096cc: 0x0  nop
    ctx->pc = 0x6096ccu;
    // NOP
label_6096d0:
    // 0x6096d0: 0x57a0b0  tge         $v0, $s7, 642
    ctx->pc = 0x6096d0u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_6096d4:
    // 0x6096d4: 0x57c380  .word       0x0057C380                   # sll         $t8, $s7, 14 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6096d4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 23), 14));
label_6096d8:
    // 0x6096d8: 0x6096d0  .word       0x006096D0                   # mfhi        $s2 # 006006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6096d8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_6096dc:
    // 0x6096dc: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x6096dcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_6096e0:
    // 0x6096e0: 0x0  nop
    ctx->pc = 0x6096e0u;
    // NOP
label_6096e4:
    // 0x6096e4: 0x0  nop
    ctx->pc = 0x6096e4u;
    // NOP
label_6096e8:
    // 0x6096e8: 0x0  nop
    ctx->pc = 0x6096e8u;
    // NOP
label_6096ec:
    // 0x6096ec: 0x0  nop
    ctx->pc = 0x6096ecu;
    // NOP
label_6096f0:
    // 0x6096f0: 0x57e5c0  .word       0x0057E5C0                   # sll         $gp, $s7, 23 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6096f0u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 23), 23));
label_6096f4:
    // 0x6096f4: 0x580910  .word       0x00580910                   # mfhi        $at # 00580100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6096f4u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_6096f8:
    // 0x6096f8: 0x6096f0  tge         $v1, $zero, 603
    ctx->pc = 0x6096f8u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6096fc:
    // 0x6096fc: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x6096fcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_609700:
    // 0x609700: 0x0  nop
    ctx->pc = 0x609700u;
    // NOP
label_609704:
    // 0x609704: 0x0  nop
    ctx->pc = 0x609704u;
    // NOP
label_609708:
    // 0x609708: 0x0  nop
    ctx->pc = 0x609708u;
    // NOP
label_60970c:
    // 0x60970c: 0x0  nop
    ctx->pc = 0x60970cu;
    // NOP
label_609710:
    // 0x609710: 0x5b3e30  tge         $v0, $k1, 248
    ctx->pc = 0x609710u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_609714:
    // 0x609714: 0x5b6860  .word       0x005B6860                   # add         $t5, $v0, $k1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609714u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 27);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_609718:
    // 0x609718: 0x609710  .word       0x00609710                   # mfhi        $s2 # 00600700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609718u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_60971c:
    // 0x60971c: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x60971cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_609720:
    // 0x609720: 0x0  nop
    ctx->pc = 0x609720u;
    // NOP
label_609724:
    // 0x609724: 0x0  nop
    ctx->pc = 0x609724u;
    // NOP
label_609728:
    // 0x609728: 0x5b8f90  .word       0x005B8F90                   # mfhi        $s1 # 005B0780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609728u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_60972c:
    // 0x60972c: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x60972cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_609730:
    // 0x609730: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609730u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609730 raw=0x00000001");
label_609734:
    // 0x609734: 0x0  nop
    ctx->pc = 0x609734u;
    // NOP
label_609738:
    // 0x609738: 0x0  nop
    ctx->pc = 0x609738u;
    // NOP
label_60973c:
    // 0x60973c: 0x0  nop
    ctx->pc = 0x60973cu;
    // NOP
label_609740:
    // 0x609740: 0x5b9040  .word       0x005B9040                   # sll         $s2, $k1, 1 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609740u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 27), 1));
label_609744:
    // 0x609744: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x609744u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_609748:
    // 0x609748: 0x0  nop
    ctx->pc = 0x609748u;
    // NOP
label_60974c:
    // 0x60974c: 0x0  nop
    ctx->pc = 0x60974cu;
    // NOP
label_609750:
    // 0x609750: 0x5b90e0  .word       0x005B90E0                   # add         $s2, $v0, $k1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609750u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 27);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_609754:
    // 0x609754: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x609754u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_609758:
    // 0x609758: 0x0  nop
    ctx->pc = 0x609758u;
    // NOP
label_60975c:
    // 0x60975c: 0x0  nop
    ctx->pc = 0x60975cu;
    // NOP
label_609760:
    // 0x609760: 0x5b9180  .word       0x005B9180                   # sll         $s2, $k1, 6 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609760u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 27), 6));
label_609764:
    // 0x609764: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x609764u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_609768:
    // 0x609768: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609768u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609768 raw=0x00000001");
label_60976c:
    // 0x60976c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60976cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60976C raw=0x00000001");
label_609770:
    // 0x609770: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609770u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609770 raw=0x00000001");
label_609774:
    // 0x609774: 0x0  nop
    ctx->pc = 0x609774u;
    // NOP
label_609778:
    // 0x609778: 0x0  nop
    ctx->pc = 0x609778u;
    // NOP
label_60977c:
    // 0x60977c: 0x0  nop
    ctx->pc = 0x60977cu;
    // NOP
label_609780:
    // 0x609780: 0x5b9230  tge         $v0, $k1, 584
    ctx->pc = 0x609780u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_609784:
    // 0x609784: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x609784u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_609788:
    // 0x609788: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609788u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609788 raw=0x00000001");
label_60978c:
    // 0x60978c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60978cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60978C raw=0x00000001");
label_609790:
    // 0x609790: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609790u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609790 raw=0x00000001");
label_609794:
    // 0x609794: 0x0  nop
    ctx->pc = 0x609794u;
    // NOP
label_609798:
    // 0x609798: 0x0  nop
    ctx->pc = 0x609798u;
    // NOP
label_60979c:
    // 0x60979c: 0x0  nop
    ctx->pc = 0x60979cu;
    // NOP
label_6097a0:
    // 0x6097a0: 0x5b92d0  .word       0x005B92D0                   # mfhi        $s2 # 005B02C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6097a0u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_6097a4:
    // 0x6097a4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x6097a4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_6097a8:
    // 0x6097a8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6097a8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6097A8 raw=0x00000001");
label_6097ac:
    // 0x6097ac: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6097acu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6097AC raw=0x00000001");
label_6097b0:
    // 0x6097b0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6097b0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6097B0 raw=0x00000001");
label_6097b4:
    // 0x6097b4: 0x0  nop
    ctx->pc = 0x6097b4u;
    // NOP
label_6097b8:
    // 0x6097b8: 0x0  nop
    ctx->pc = 0x6097b8u;
    // NOP
label_6097bc:
    // 0x6097bc: 0x80000000  lb          $zero, 0x0($zero)
    ctx->pc = 0x6097bcu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x0u));
label_6097c0:
    // 0x6097c0: 0x0  nop
    ctx->pc = 0x6097c0u;
    // NOP
label_6097c4:
    // 0x6097c4: 0x0  nop
    ctx->pc = 0x6097c4u;
    // NOP
label_6097c8:
    // 0x6097c8: 0x0  nop
    ctx->pc = 0x6097c8u;
    // NOP
label_6097cc:
    // 0x6097cc: 0x0  nop
    ctx->pc = 0x6097ccu;
    // NOP
label_6097d0:
    // 0x6097d0: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6097d0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_6097d4:
    // 0x6097d4: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x6097d4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_6097d8:
    // 0x6097d8: 0x0  nop
    ctx->pc = 0x6097d8u;
    // NOP
label_6097dc:
    // 0x6097dc: 0x0  nop
    ctx->pc = 0x6097dcu;
    // NOP
label_6097e0:
    // 0x6097e0: 0x7f7fffff  sq          $ra, -0x1($k1)
    ctx->pc = 0x6097e0u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 4294967295), GPR_VEC(ctx, 31));
label_6097e4:
    // 0x6097e4: 0x80000000  lb          $zero, 0x0($zero)
    ctx->pc = 0x6097e4u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x0u));
label_6097e8:
    // 0x6097e8: 0x0  nop
    ctx->pc = 0x6097e8u;
    // NOP
label_6097ec:
    // 0x6097ec: 0x0  nop
    ctx->pc = 0x6097ecu;
    // NOP
label_6097f0:
    // 0x6097f0: 0x0  nop
    ctx->pc = 0x6097f0u;
    // NOP
label_6097f4:
    // 0x6097f4: 0x0  nop
    ctx->pc = 0x6097f4u;
    // NOP
label_6097f8:
    // 0x6097f8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6097f8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6097F8 raw=0x00000001");
label_6097fc:
    // 0x6097fc: 0x0  nop
    ctx->pc = 0x6097fcu;
    // NOP
label_609800:
    // 0x609800: 0x7074754f  .word       0x7074754F                   # INVALID     $v1, $s4, 0x754F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x609800u;
    throw std::runtime_error("Unhandled MMI instruction: function 0xF at 0x609800 raw=0x7074754F");
label_609804:
    // 0x609804: 0x7475  .word       0x00007475                   # INVALID     $zero, $zero, 0x7475 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609804u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x609804 raw=0x00007475");
label_609808:
    // 0x609808: 0x0  nop
    ctx->pc = 0x609808u;
    // NOP
label_60980c:
    // 0x60980c: 0x0  nop
    ctx->pc = 0x60980cu;
    // NOP
label_609810:
    // 0x609810: 0x0  nop
    ctx->pc = 0x609810u;
    // NOP
label_609814:
    // 0x609814: 0x0  nop
    ctx->pc = 0x609814u;
    // NOP
label_609818:
    // 0x609818: 0x0  nop
    ctx->pc = 0x609818u;
    // NOP
label_60981c:
    // 0x60981c: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x60981cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_609820:
    // 0x609820: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609820u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609820 raw=0x00000001");
label_609824:
    // 0x609824: 0x0  nop
    ctx->pc = 0x609824u;
    // NOP
label_609828:
    // 0x609828: 0x0  nop
    ctx->pc = 0x609828u;
    // NOP
label_60982c:
    // 0x60982c: 0x0  nop
    ctx->pc = 0x60982cu;
    // NOP
label_609830:
    // 0x609830: 0x0  nop
    ctx->pc = 0x609830u;
    // NOP
label_609834:
    // 0x609834: 0x0  nop
    ctx->pc = 0x609834u;
    // NOP
label_609838:
    // 0x609838: 0x0  nop
    ctx->pc = 0x609838u;
    // NOP
label_60983c:
    // 0x60983c: 0x0  nop
    ctx->pc = 0x60983cu;
    // NOP
label_609840:
    // 0x609840: 0x0  nop
    ctx->pc = 0x609840u;
    // NOP
label_609844:
    // 0x609844: 0x0  nop
    ctx->pc = 0x609844u;
    // NOP
label_609848:
    // 0x609848: 0x0  nop
    ctx->pc = 0x609848u;
    // NOP
label_60984c:
    // 0x60984c: 0x0  nop
    ctx->pc = 0x60984cu;
    // NOP
label_609850:
    // 0x609850: 0x0  nop
    ctx->pc = 0x609850u;
    // NOP
label_609854:
    // 0x609854: 0x0  nop
    ctx->pc = 0x609854u;
    // NOP
label_609858:
    // 0x609858: 0x0  nop
    ctx->pc = 0x609858u;
    // NOP
label_60985c:
    // 0x60985c: 0x0  nop
    ctx->pc = 0x60985cu;
    // NOP
label_609860:
    // 0x609860: 0x0  nop
    ctx->pc = 0x609860u;
    // NOP
label_609864:
    // 0x609864: 0x0  nop
    ctx->pc = 0x609864u;
    // NOP
label_609868:
    // 0x609868: 0x0  nop
    ctx->pc = 0x609868u;
    // NOP
label_60986c:
    // 0x60986c: 0x0  nop
    ctx->pc = 0x60986cu;
    // NOP
label_609870:
    // 0x609870: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x609870u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_609874:
    // 0x609874: 0x0  nop
    ctx->pc = 0x609874u;
    // NOP
label_609878:
    // 0x609878: 0x0  nop
    ctx->pc = 0x609878u;
    // NOP
label_60987c:
    // 0x60987c: 0x0  nop
    ctx->pc = 0x60987cu;
    // NOP
label_609880:
    // 0x609880: 0x0  nop
    ctx->pc = 0x609880u;
    // NOP
label_609884:
    // 0x609884: 0x0  nop
    ctx->pc = 0x609884u;
    // NOP
label_609888:
    // 0x609888: 0x0  nop
    ctx->pc = 0x609888u;
    // NOP
label_60988c:
    // 0x60988c: 0x0  nop
    ctx->pc = 0x60988cu;
    // NOP
label_609890:
    // 0x609890: 0x0  nop
    ctx->pc = 0x609890u;
    // NOP
label_609894:
    // 0x609894: 0x0  nop
    ctx->pc = 0x609894u;
    // NOP
label_609898:
    // 0x609898: 0x0  nop
    ctx->pc = 0x609898u;
    // NOP
label_60989c:
    // 0x60989c: 0x0  nop
    ctx->pc = 0x60989cu;
    // NOP
label_6098a0:
    // 0x6098a0: 0x0  nop
    ctx->pc = 0x6098a0u;
    // NOP
label_6098a4:
    // 0x6098a4: 0x0  nop
    ctx->pc = 0x6098a4u;
    // NOP
label_6098a8:
    // 0x6098a8: 0x0  nop
    ctx->pc = 0x6098a8u;
    // NOP
label_6098ac:
    // 0x6098ac: 0x0  nop
    ctx->pc = 0x6098acu;
    // NOP
label_6098b0:
    // 0x6098b0: 0x0  nop
    ctx->pc = 0x6098b0u;
    // NOP
label_6098b4:
    // 0x6098b4: 0x0  nop
    ctx->pc = 0x6098b4u;
    // NOP
label_6098b8:
    // 0x6098b8: 0x0  nop
    ctx->pc = 0x6098b8u;
    // NOP
label_6098bc:
    // 0x6098bc: 0x0  nop
    ctx->pc = 0x6098bcu;
    // NOP
label_6098c0:
    // 0x6098c0: 0x0  nop
    ctx->pc = 0x6098c0u;
    // NOP
label_6098c4:
    // 0x6098c4: 0x0  nop
    ctx->pc = 0x6098c4u;
    // NOP
label_6098c8:
    // 0x6098c8: 0x0  nop
    ctx->pc = 0x6098c8u;
    // NOP
label_6098cc:
    // 0x6098cc: 0x0  nop
    ctx->pc = 0x6098ccu;
    // NOP
label_6098d0:
    // 0x6098d0: 0x0  nop
    ctx->pc = 0x6098d0u;
    // NOP
label_6098d4:
    // 0x6098d4: 0x0  nop
    ctx->pc = 0x6098d4u;
    // NOP
label_6098d8:
    // 0x6098d8: 0x0  nop
    ctx->pc = 0x6098d8u;
    // NOP
label_6098dc:
    // 0x6098dc: 0x0  nop
    ctx->pc = 0x6098dcu;
    // NOP
label_6098e0:
    // 0x6098e0: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x6098e0u;
    
label_6098e4:
    // 0x6098e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6098e4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x6098E4 raw=0x00000001");
label_6098e8:
    // 0x6098e8: 0x6e415655  ldr         $at, 0x5655($s2)
    ctx->pc = 0x6098e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 22101); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_6098ec:
    // 0x6098ec: 0x6d69  .word       0x00006D69                   # mtsa        $zero # 00006D40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x6098ecu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_6098f0:
    // 0x6098f0: 0x0  nop
    ctx->pc = 0x6098f0u;
    // NOP
label_6098f4:
    // 0x6098f4: 0x0  nop
    ctx->pc = 0x6098f4u;
    // NOP
label_6098f8:
    // 0x6098f8: 0x0  nop
    ctx->pc = 0x6098f8u;
    // NOP
label_6098fc:
    // 0x6098fc: 0x0  nop
    ctx->pc = 0x6098fcu;
    // NOP
label_609900:
    // 0x609900: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x609900u;
    
label_609904:
    // 0x609904: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609904u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609904 raw=0x00000001");
label_609908:
    // 0x609908: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x609908u;
    
label_60990c:
    // 0x60990c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60990cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60990C raw=0x00000001");
label_609910:
    // 0x609910: 0x0  nop
    ctx->pc = 0x609910u;
    // NOP
label_609914:
    // 0x609914: 0x0  nop
    ctx->pc = 0x609914u;
    // NOP
label_609918:
    // 0x609918: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x609918u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_60991c:
    // 0x60991c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60991cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60991C raw=0x00000001");
label_609920:
    // 0x609920: 0x0  nop
    ctx->pc = 0x609920u;
    // NOP
label_609924:
    // 0x609924: 0x0  nop
    ctx->pc = 0x609924u;
    // NOP
label_609928:
    // 0x609928: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x609928u;
    
label_60992c:
    // 0x60992c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60992cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60992C raw=0x00000001");
label_609930:
    // 0x609930: 0x0  nop
    ctx->pc = 0x609930u;
    // NOP
label_609934:
    // 0x609934: 0x0  nop
    ctx->pc = 0x609934u;
    // NOP
label_609938:
    // 0x609938: 0x0  nop
    ctx->pc = 0x609938u;
    // NOP
label_60993c:
    // 0x60993c: 0x0  nop
    ctx->pc = 0x60993cu;
    // NOP
label_609940:
    // 0x609940: 0x0  nop
    ctx->pc = 0x609940u;
    // NOP
label_609944:
    // 0x609944: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609944u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609944 raw=0x00000001");
label_609948:
    // 0x609948: 0x0  nop
    ctx->pc = 0x609948u;
    // NOP
label_60994c:
    // 0x60994c: 0x0  nop
    ctx->pc = 0x60994cu;
    // NOP
label_609950:
    // 0x609950: 0x0  nop
    ctx->pc = 0x609950u;
    // NOP
label_609954:
    // 0x609954: 0x0  nop
    ctx->pc = 0x609954u;
    // NOP
label_609958:
    // 0x609958: 0x0  nop
    ctx->pc = 0x609958u;
    // NOP
label_60995c:
    // 0x60995c: 0x0  nop
    ctx->pc = 0x60995cu;
    // NOP
label_609960:
    // 0x609960: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x609960u;
    
label_609964:
    // 0x609964: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609964u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609964 raw=0x00000001");
label_609968:
    // 0x609968: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x609968u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_60996c:
    // 0x60996c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60996cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60996C raw=0x00000001");
label_609970:
    // 0x609970: 0x0  nop
    ctx->pc = 0x609970u;
    // NOP
label_609974:
    // 0x609974: 0x0  nop
    ctx->pc = 0x609974u;
    // NOP
label_609978:
    // 0x609978: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x609978u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_60997c:
    // 0x60997c: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x60997cu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_609980:
    // 0x609980: 0x0  nop
    ctx->pc = 0x609980u;
    // NOP
label_609984:
    // 0x609984: 0x0  nop
    ctx->pc = 0x609984u;
    // NOP
label_609988:
    // 0x609988: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x609988u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_60998c:
    // 0x60998c: 0x0  nop
    ctx->pc = 0x60998cu;
    // NOP
label_609990:
    // 0x609990: 0x0  nop
    ctx->pc = 0x609990u;
    // NOP
label_609994:
    // 0x609994: 0x0  nop
    ctx->pc = 0x609994u;
    // NOP
label_609998:
    // 0x609998: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609998u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609998 raw=0x00000001");
label_60999c:
    // 0x60999c: 0x0  nop
    ctx->pc = 0x60999cu;
    // NOP
label_6099a0:
    // 0x6099a0: 0x0  nop
    ctx->pc = 0x6099a0u;
    // NOP
label_6099a4:
    // 0x6099a4: 0x0  nop
    ctx->pc = 0x6099a4u;
    // NOP
label_6099a8:
    // 0x6099a8: 0x5a5958  .word       0x005A5958                   # mult        $t3, $v0, $k0 # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x6099a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_6099ac:
    // 0x6099ac: 0x0  nop
    ctx->pc = 0x6099acu;
    // NOP
label_6099b0:
    // 0x6099b0: 0x575a5958  bnel        $k0, $k0, . + 4 + (0x5958 << 2)
label_6099b4:
    if (ctx->pc == 0x6099B4u) {
        ctx->pc = 0x6099B8u;
        goto label_6099b8;
    }
    ctx->pc = 0x6099B0u;
    {
        const bool branch_taken_0x6099b0 = (GPR_U64(ctx, 26) != GPR_U64(ctx, 26));
        if (branch_taken_0x6099b0) {
            ctx->pc = 0x61FF14u;
            return;
        }
    }
    ctx->pc = 0x6099B8u;
label_6099b8:
    // 0x6099b8: 0x5655  .word       0x00005655                   # INVALID     $zero, $zero, 0x5655 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6099b8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x6099B8 raw=0x00005655");
label_6099bc:
    // 0x6099bc: 0x0  nop
    ctx->pc = 0x6099bcu;
    // NOP
label_6099c0:
    // 0x6099c0: 0x325655  .word       0x00325655                   # INVALID     $at, $s2, 0x5655 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6099c0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x6099C0 raw=0x00325655");
label_6099c4:
    // 0x6099c4: 0x0  nop
    ctx->pc = 0x6099c4u;
    // NOP
label_6099c8:
    // 0x6099c8: 0x41424752  .word       0x41424752                   # INVALID     $t2, $v0, 0x4752 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x6099c8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x6099C8 raw=0x41424752");
label_6099cc:
    // 0x6099cc: 0x0  nop
    ctx->pc = 0x6099ccu;
    // NOP
label_6099d0:
    // 0x6099d0: 0x6d726f4e  ldr         $s2, 0x6F4E($t3)
    ctx->pc = 0x6099d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28494); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_6099d4:
    // 0x6099d4: 0x6c61  .word       0x00006C61                   # addu        $t5, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x6099d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_6099d8:
    // 0x6099d8: 0x72657355  .word       0x72657355                   # INVALID     $s3, $a1, 0x7355 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x6099d8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x6099D8 raw=0x72657355");
label_6099dc:
    // 0x6099dc: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x6099dcu;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6099e0:
    // 0x6099e0: 0x72657355  .word       0x72657355                   # INVALID     $s3, $a1, 0x7355 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x6099e0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x6099E0 raw=0x72657355");
label_6099e4:
    // 0x6099e4: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x6099e4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6099e8:
    // 0x6099e8: 0x72657355  .word       0x72657355                   # INVALID     $s3, $a1, 0x7355 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x6099e8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x6099E8 raw=0x72657355");
label_6099ec:
    // 0x6099ec: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x6099ecu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6099f0:
    // 0x6099f0: 0x72657355  .word       0x72657355                   # INVALID     $s3, $a1, 0x7355 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x6099f0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x6099F0 raw=0x72657355");
label_6099f4:
    // 0x6099f4: 0x34  teq         $zero, $zero, 0
    ctx->pc = 0x6099f4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_6099f8:
    // 0x6099f8: 0x0  nop
    ctx->pc = 0x6099f8u;
    // NOP
label_6099fc:
    // 0x6099fc: 0x0  nop
    ctx->pc = 0x6099fcu;
    // NOP
label_609a00:
    // 0x609a00: 0x325350  .word       0x00325350                   # mfhi        $t2 # 00320340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609a00u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_609a04:
    // 0x609a04: 0x0  nop
    ctx->pc = 0x609a04u;
    // NOP
label_609a08:
    // 0x609a08: 0x0  nop
    ctx->pc = 0x609a08u;
    // NOP
label_609a0c:
    // 0x609a0c: 0x8  jr          $zero
label_609a10:
    if (ctx->pc == 0x609A10u) {
        ctx->pc = 0x609A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x609A0Cu;
        // 0x609a10: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609A10 raw=0x00000001");
        ctx->in_delay_slot = false;
        ctx->pc = 0x609A14u;
        goto label_609a14;
    }
    ctx->pc = 0x609A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x609A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x609A0Cu;
        // 0x609a10: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609A10 raw=0x00000001");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x609A0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x609A14u;
label_609a14:
    // 0x609a14: 0x0  nop
    ctx->pc = 0x609a14u;
    // NOP
label_609a18:
    // 0x609a18: 0x0  nop
    ctx->pc = 0x609a18u;
    // NOP
label_609a1c:
    // 0x609a1c: 0x0  nop
    ctx->pc = 0x609a1cu;
    // NOP
label_609a20:
    // 0x609a20: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x609a20u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_609a24:
    // 0x609a24: 0x0  nop
    ctx->pc = 0x609a24u;
    // NOP
label_609a28:
    // 0x609a28: 0x0  nop
    ctx->pc = 0x609a28u;
    // NOP
label_609a2c:
    // 0x609a2c: 0x0  nop
    ctx->pc = 0x609a2cu;
    // NOP
label_609a30:
    // 0x609a30: 0x25207325  addiu       $zero, $t1, 0x7325
    ctx->pc = 0x609a30u;
    // NOP (addiu $zero, ...)
label_609a34:
    // 0x609a34: 0xa73  tltu        $zero, $zero, 41
    ctx->pc = 0x609a34u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_609a38:
    // 0x609a38: 0x256d7325  addiu       $t5, $t3, 0x7325
    ctx->pc = 0x609a38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), 29477));
label_609a3c:
    // 0x609a3c: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x609a3cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_609a40:
    // 0x609a40: 0x73256d  .word       0x0073256D                   # daddu       $a0, $v1, $s3 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 19));
label_609a44:
    // 0x609a44: 0x0  nop
    ctx->pc = 0x609a44u;
    // NOP
    ctx->pc = 0x609a48u;
}
