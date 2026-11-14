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

// Function: sub_003C8320
// Address: 0x3c8320 - 0x3c8988
void sub_003C8320_0x3c8320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C8320_0x3c8320");
#endif

    switch (ctx->pc) {
        case 0x3c8320u: goto label_3c8320;
        case 0x3c8324u: goto label_3c8324;
        case 0x3c8328u: goto label_3c8328;
        case 0x3c832cu: goto label_3c832c;
        case 0x3c8330u: goto label_3c8330;
        case 0x3c8334u: goto label_3c8334;
        case 0x3c8338u: goto label_3c8338;
        case 0x3c833cu: goto label_3c833c;
        case 0x3c8340u: goto label_3c8340;
        case 0x3c8344u: goto label_3c8344;
        case 0x3c8348u: goto label_3c8348;
        case 0x3c834cu: goto label_3c834c;
        case 0x3c8350u: goto label_3c8350;
        case 0x3c8354u: goto label_3c8354;
        case 0x3c8358u: goto label_3c8358;
        case 0x3c835cu: goto label_3c835c;
        case 0x3c8360u: goto label_3c8360;
        case 0x3c8364u: goto label_3c8364;
        case 0x3c8368u: goto label_3c8368;
        case 0x3c836cu: goto label_3c836c;
        case 0x3c8370u: goto label_3c8370;
        case 0x3c8374u: goto label_3c8374;
        case 0x3c8378u: goto label_3c8378;
        case 0x3c837cu: goto label_3c837c;
        case 0x3c8380u: goto label_3c8380;
        case 0x3c8384u: goto label_3c8384;
        case 0x3c8388u: goto label_3c8388;
        case 0x3c838cu: goto label_3c838c;
        case 0x3c8390u: goto label_3c8390;
        case 0x3c8394u: goto label_3c8394;
        case 0x3c8398u: goto label_3c8398;
        case 0x3c839cu: goto label_3c839c;
        case 0x3c83a0u: goto label_3c83a0;
        case 0x3c83a4u: goto label_3c83a4;
        case 0x3c83a8u: goto label_3c83a8;
        case 0x3c83acu: goto label_3c83ac;
        case 0x3c83b0u: goto label_3c83b0;
        case 0x3c83b4u: goto label_3c83b4;
        case 0x3c83b8u: goto label_3c83b8;
        case 0x3c83bcu: goto label_3c83bc;
        case 0x3c83c0u: goto label_3c83c0;
        case 0x3c83c4u: goto label_3c83c4;
        case 0x3c83c8u: goto label_3c83c8;
        case 0x3c83ccu: goto label_3c83cc;
        case 0x3c83d0u: goto label_3c83d0;
        case 0x3c83d4u: goto label_3c83d4;
        case 0x3c83d8u: goto label_3c83d8;
        case 0x3c83dcu: goto label_3c83dc;
        case 0x3c83e0u: goto label_3c83e0;
        case 0x3c83e4u: goto label_3c83e4;
        case 0x3c83e8u: goto label_3c83e8;
        case 0x3c83ecu: goto label_3c83ec;
        case 0x3c83f0u: goto label_3c83f0;
        case 0x3c83f4u: goto label_3c83f4;
        case 0x3c83f8u: goto label_3c83f8;
        case 0x3c83fcu: goto label_3c83fc;
        case 0x3c8400u: goto label_3c8400;
        case 0x3c8404u: goto label_3c8404;
        case 0x3c8408u: goto label_3c8408;
        case 0x3c840cu: goto label_3c840c;
        case 0x3c8410u: goto label_3c8410;
        case 0x3c8414u: goto label_3c8414;
        case 0x3c8418u: goto label_3c8418;
        case 0x3c841cu: goto label_3c841c;
        case 0x3c8420u: goto label_3c8420;
        case 0x3c8424u: goto label_3c8424;
        case 0x3c8428u: goto label_3c8428;
        case 0x3c842cu: goto label_3c842c;
        case 0x3c8430u: goto label_3c8430;
        case 0x3c8434u: goto label_3c8434;
        case 0x3c8438u: goto label_3c8438;
        case 0x3c843cu: goto label_3c843c;
        case 0x3c8440u: goto label_3c8440;
        case 0x3c8444u: goto label_3c8444;
        case 0x3c8448u: goto label_3c8448;
        case 0x3c844cu: goto label_3c844c;
        case 0x3c8450u: goto label_3c8450;
        case 0x3c8454u: goto label_3c8454;
        case 0x3c8458u: goto label_3c8458;
        case 0x3c845cu: goto label_3c845c;
        case 0x3c8460u: goto label_3c8460;
        case 0x3c8464u: goto label_3c8464;
        case 0x3c8468u: goto label_3c8468;
        case 0x3c846cu: goto label_3c846c;
        case 0x3c8470u: goto label_3c8470;
        case 0x3c8474u: goto label_3c8474;
        case 0x3c8478u: goto label_3c8478;
        case 0x3c847cu: goto label_3c847c;
        case 0x3c8480u: goto label_3c8480;
        case 0x3c8484u: goto label_3c8484;
        case 0x3c8488u: goto label_3c8488;
        case 0x3c848cu: goto label_3c848c;
        case 0x3c8490u: goto label_3c8490;
        case 0x3c8494u: goto label_3c8494;
        case 0x3c8498u: goto label_3c8498;
        case 0x3c849cu: goto label_3c849c;
        case 0x3c84a0u: goto label_3c84a0;
        case 0x3c84a4u: goto label_3c84a4;
        case 0x3c84a8u: goto label_3c84a8;
        case 0x3c84acu: goto label_3c84ac;
        case 0x3c84b0u: goto label_3c84b0;
        case 0x3c84b4u: goto label_3c84b4;
        case 0x3c84b8u: goto label_3c84b8;
        case 0x3c84bcu: goto label_3c84bc;
        case 0x3c84c0u: goto label_3c84c0;
        case 0x3c84c4u: goto label_3c84c4;
        case 0x3c84c8u: goto label_3c84c8;
        case 0x3c84ccu: goto label_3c84cc;
        case 0x3c84d0u: goto label_3c84d0;
        case 0x3c84d4u: goto label_3c84d4;
        case 0x3c84d8u: goto label_3c84d8;
        case 0x3c84dcu: goto label_3c84dc;
        case 0x3c84e0u: goto label_3c84e0;
        case 0x3c84e4u: goto label_3c84e4;
        case 0x3c84e8u: goto label_3c84e8;
        case 0x3c84ecu: goto label_3c84ec;
        case 0x3c84f0u: goto label_3c84f0;
        case 0x3c84f4u: goto label_3c84f4;
        case 0x3c84f8u: goto label_3c84f8;
        case 0x3c84fcu: goto label_3c84fc;
        case 0x3c8500u: goto label_3c8500;
        case 0x3c8504u: goto label_3c8504;
        case 0x3c8508u: goto label_3c8508;
        case 0x3c850cu: goto label_3c850c;
        case 0x3c8510u: goto label_3c8510;
        case 0x3c8514u: goto label_3c8514;
        case 0x3c8518u: goto label_3c8518;
        case 0x3c851cu: goto label_3c851c;
        case 0x3c8520u: goto label_3c8520;
        case 0x3c8524u: goto label_3c8524;
        case 0x3c8528u: goto label_3c8528;
        case 0x3c852cu: goto label_3c852c;
        case 0x3c8530u: goto label_3c8530;
        case 0x3c8534u: goto label_3c8534;
        case 0x3c8538u: goto label_3c8538;
        case 0x3c853cu: goto label_3c853c;
        case 0x3c8540u: goto label_3c8540;
        case 0x3c8544u: goto label_3c8544;
        case 0x3c8548u: goto label_3c8548;
        case 0x3c854cu: goto label_3c854c;
        case 0x3c8550u: goto label_3c8550;
        case 0x3c8554u: goto label_3c8554;
        case 0x3c8558u: goto label_3c8558;
        case 0x3c855cu: goto label_3c855c;
        case 0x3c8560u: goto label_3c8560;
        case 0x3c8564u: goto label_3c8564;
        case 0x3c8568u: goto label_3c8568;
        case 0x3c856cu: goto label_3c856c;
        case 0x3c8570u: goto label_3c8570;
        case 0x3c8574u: goto label_3c8574;
        case 0x3c8578u: goto label_3c8578;
        case 0x3c857cu: goto label_3c857c;
        case 0x3c8580u: goto label_3c8580;
        case 0x3c8584u: goto label_3c8584;
        case 0x3c8588u: goto label_3c8588;
        case 0x3c858cu: goto label_3c858c;
        case 0x3c8590u: goto label_3c8590;
        case 0x3c8594u: goto label_3c8594;
        case 0x3c8598u: goto label_3c8598;
        case 0x3c859cu: goto label_3c859c;
        case 0x3c85a0u: goto label_3c85a0;
        case 0x3c85a4u: goto label_3c85a4;
        case 0x3c85a8u: goto label_3c85a8;
        case 0x3c85acu: goto label_3c85ac;
        case 0x3c85b0u: goto label_3c85b0;
        case 0x3c85b4u: goto label_3c85b4;
        case 0x3c85b8u: goto label_3c85b8;
        case 0x3c85bcu: goto label_3c85bc;
        case 0x3c85c0u: goto label_3c85c0;
        case 0x3c85c4u: goto label_3c85c4;
        case 0x3c85c8u: goto label_3c85c8;
        case 0x3c85ccu: goto label_3c85cc;
        case 0x3c85d0u: goto label_3c85d0;
        case 0x3c85d4u: goto label_3c85d4;
        case 0x3c85d8u: goto label_3c85d8;
        case 0x3c85dcu: goto label_3c85dc;
        case 0x3c85e0u: goto label_3c85e0;
        case 0x3c85e4u: goto label_3c85e4;
        case 0x3c85e8u: goto label_3c85e8;
        case 0x3c85ecu: goto label_3c85ec;
        case 0x3c85f0u: goto label_3c85f0;
        case 0x3c85f4u: goto label_3c85f4;
        case 0x3c85f8u: goto label_3c85f8;
        case 0x3c85fcu: goto label_3c85fc;
        case 0x3c8600u: goto label_3c8600;
        case 0x3c8604u: goto label_3c8604;
        case 0x3c8608u: goto label_3c8608;
        case 0x3c860cu: goto label_3c860c;
        case 0x3c8610u: goto label_3c8610;
        case 0x3c8614u: goto label_3c8614;
        case 0x3c8618u: goto label_3c8618;
        case 0x3c861cu: goto label_3c861c;
        case 0x3c8620u: goto label_3c8620;
        case 0x3c8624u: goto label_3c8624;
        case 0x3c8628u: goto label_3c8628;
        case 0x3c862cu: goto label_3c862c;
        case 0x3c8630u: goto label_3c8630;
        case 0x3c8634u: goto label_3c8634;
        case 0x3c8638u: goto label_3c8638;
        case 0x3c863cu: goto label_3c863c;
        case 0x3c8640u: goto label_3c8640;
        case 0x3c8644u: goto label_3c8644;
        case 0x3c8648u: goto label_3c8648;
        case 0x3c864cu: goto label_3c864c;
        case 0x3c8650u: goto label_3c8650;
        case 0x3c8654u: goto label_3c8654;
        case 0x3c8658u: goto label_3c8658;
        case 0x3c865cu: goto label_3c865c;
        case 0x3c8660u: goto label_3c8660;
        case 0x3c8664u: goto label_3c8664;
        case 0x3c8668u: goto label_3c8668;
        case 0x3c866cu: goto label_3c866c;
        case 0x3c8670u: goto label_3c8670;
        case 0x3c8674u: goto label_3c8674;
        case 0x3c8678u: goto label_3c8678;
        case 0x3c867cu: goto label_3c867c;
        case 0x3c8680u: goto label_3c8680;
        case 0x3c8684u: goto label_3c8684;
        case 0x3c8688u: goto label_3c8688;
        case 0x3c868cu: goto label_3c868c;
        case 0x3c8690u: goto label_3c8690;
        case 0x3c8694u: goto label_3c8694;
        case 0x3c8698u: goto label_3c8698;
        case 0x3c869cu: goto label_3c869c;
        case 0x3c86a0u: goto label_3c86a0;
        case 0x3c86a4u: goto label_3c86a4;
        case 0x3c86a8u: goto label_3c86a8;
        case 0x3c86acu: goto label_3c86ac;
        case 0x3c86b0u: goto label_3c86b0;
        case 0x3c86b4u: goto label_3c86b4;
        case 0x3c86b8u: goto label_3c86b8;
        case 0x3c86bcu: goto label_3c86bc;
        case 0x3c86c0u: goto label_3c86c0;
        case 0x3c86c4u: goto label_3c86c4;
        case 0x3c86c8u: goto label_3c86c8;
        case 0x3c86ccu: goto label_3c86cc;
        case 0x3c86d0u: goto label_3c86d0;
        case 0x3c86d4u: goto label_3c86d4;
        case 0x3c86d8u: goto label_3c86d8;
        case 0x3c86dcu: goto label_3c86dc;
        case 0x3c86e0u: goto label_3c86e0;
        case 0x3c86e4u: goto label_3c86e4;
        case 0x3c86e8u: goto label_3c86e8;
        case 0x3c86ecu: goto label_3c86ec;
        case 0x3c86f0u: goto label_3c86f0;
        case 0x3c86f4u: goto label_3c86f4;
        case 0x3c86f8u: goto label_3c86f8;
        case 0x3c86fcu: goto label_3c86fc;
        case 0x3c8700u: goto label_3c8700;
        case 0x3c8704u: goto label_3c8704;
        case 0x3c8708u: goto label_3c8708;
        case 0x3c870cu: goto label_3c870c;
        case 0x3c8710u: goto label_3c8710;
        case 0x3c8714u: goto label_3c8714;
        case 0x3c8718u: goto label_3c8718;
        case 0x3c871cu: goto label_3c871c;
        case 0x3c8720u: goto label_3c8720;
        case 0x3c8724u: goto label_3c8724;
        case 0x3c8728u: goto label_3c8728;
        case 0x3c872cu: goto label_3c872c;
        case 0x3c8730u: goto label_3c8730;
        case 0x3c8734u: goto label_3c8734;
        case 0x3c8738u: goto label_3c8738;
        case 0x3c873cu: goto label_3c873c;
        case 0x3c8740u: goto label_3c8740;
        case 0x3c8744u: goto label_3c8744;
        case 0x3c8748u: goto label_3c8748;
        case 0x3c874cu: goto label_3c874c;
        case 0x3c8750u: goto label_3c8750;
        case 0x3c8754u: goto label_3c8754;
        case 0x3c8758u: goto label_3c8758;
        case 0x3c875cu: goto label_3c875c;
        case 0x3c8760u: goto label_3c8760;
        case 0x3c8764u: goto label_3c8764;
        case 0x3c8768u: goto label_3c8768;
        case 0x3c876cu: goto label_3c876c;
        case 0x3c8770u: goto label_3c8770;
        case 0x3c8774u: goto label_3c8774;
        case 0x3c8778u: goto label_3c8778;
        case 0x3c877cu: goto label_3c877c;
        case 0x3c8780u: goto label_3c8780;
        case 0x3c8784u: goto label_3c8784;
        case 0x3c8788u: goto label_3c8788;
        case 0x3c878cu: goto label_3c878c;
        case 0x3c8790u: goto label_3c8790;
        case 0x3c8794u: goto label_3c8794;
        case 0x3c8798u: goto label_3c8798;
        case 0x3c879cu: goto label_3c879c;
        case 0x3c87a0u: goto label_3c87a0;
        case 0x3c87a4u: goto label_3c87a4;
        case 0x3c87a8u: goto label_3c87a8;
        case 0x3c87acu: goto label_3c87ac;
        case 0x3c87b0u: goto label_3c87b0;
        case 0x3c87b4u: goto label_3c87b4;
        case 0x3c87b8u: goto label_3c87b8;
        case 0x3c87bcu: goto label_3c87bc;
        case 0x3c87c0u: goto label_3c87c0;
        case 0x3c87c4u: goto label_3c87c4;
        case 0x3c87c8u: goto label_3c87c8;
        case 0x3c87ccu: goto label_3c87cc;
        case 0x3c87d0u: goto label_3c87d0;
        case 0x3c87d4u: goto label_3c87d4;
        case 0x3c87d8u: goto label_3c87d8;
        case 0x3c87dcu: goto label_3c87dc;
        case 0x3c87e0u: goto label_3c87e0;
        case 0x3c87e4u: goto label_3c87e4;
        case 0x3c87e8u: goto label_3c87e8;
        case 0x3c87ecu: goto label_3c87ec;
        case 0x3c87f0u: goto label_3c87f0;
        case 0x3c87f4u: goto label_3c87f4;
        case 0x3c87f8u: goto label_3c87f8;
        case 0x3c87fcu: goto label_3c87fc;
        case 0x3c8800u: goto label_3c8800;
        case 0x3c8804u: goto label_3c8804;
        case 0x3c8808u: goto label_3c8808;
        case 0x3c880cu: goto label_3c880c;
        case 0x3c8810u: goto label_3c8810;
        case 0x3c8814u: goto label_3c8814;
        case 0x3c8818u: goto label_3c8818;
        case 0x3c881cu: goto label_3c881c;
        case 0x3c8820u: goto label_3c8820;
        case 0x3c8824u: goto label_3c8824;
        case 0x3c8828u: goto label_3c8828;
        case 0x3c882cu: goto label_3c882c;
        case 0x3c8830u: goto label_3c8830;
        case 0x3c8834u: goto label_3c8834;
        case 0x3c8838u: goto label_3c8838;
        case 0x3c883cu: goto label_3c883c;
        case 0x3c8840u: goto label_3c8840;
        case 0x3c8844u: goto label_3c8844;
        case 0x3c8848u: goto label_3c8848;
        case 0x3c884cu: goto label_3c884c;
        case 0x3c8850u: goto label_3c8850;
        case 0x3c8854u: goto label_3c8854;
        case 0x3c8858u: goto label_3c8858;
        case 0x3c885cu: goto label_3c885c;
        case 0x3c8860u: goto label_3c8860;
        case 0x3c8864u: goto label_3c8864;
        case 0x3c8868u: goto label_3c8868;
        case 0x3c886cu: goto label_3c886c;
        case 0x3c8870u: goto label_3c8870;
        case 0x3c8874u: goto label_3c8874;
        case 0x3c8878u: goto label_3c8878;
        case 0x3c887cu: goto label_3c887c;
        case 0x3c8880u: goto label_3c8880;
        case 0x3c8884u: goto label_3c8884;
        case 0x3c8888u: goto label_3c8888;
        case 0x3c888cu: goto label_3c888c;
        case 0x3c8890u: goto label_3c8890;
        case 0x3c8894u: goto label_3c8894;
        case 0x3c8898u: goto label_3c8898;
        case 0x3c889cu: goto label_3c889c;
        case 0x3c88a0u: goto label_3c88a0;
        case 0x3c88a4u: goto label_3c88a4;
        case 0x3c88a8u: goto label_3c88a8;
        case 0x3c88acu: goto label_3c88ac;
        case 0x3c88b0u: goto label_3c88b0;
        case 0x3c88b4u: goto label_3c88b4;
        case 0x3c88b8u: goto label_3c88b8;
        case 0x3c88bcu: goto label_3c88bc;
        case 0x3c88c0u: goto label_3c88c0;
        case 0x3c88c4u: goto label_3c88c4;
        case 0x3c88c8u: goto label_3c88c8;
        case 0x3c88ccu: goto label_3c88cc;
        case 0x3c88d0u: goto label_3c88d0;
        case 0x3c88d4u: goto label_3c88d4;
        case 0x3c88d8u: goto label_3c88d8;
        case 0x3c88dcu: goto label_3c88dc;
        case 0x3c88e0u: goto label_3c88e0;
        case 0x3c88e4u: goto label_3c88e4;
        case 0x3c88e8u: goto label_3c88e8;
        case 0x3c88ecu: goto label_3c88ec;
        case 0x3c88f0u: goto label_3c88f0;
        case 0x3c88f4u: goto label_3c88f4;
        case 0x3c88f8u: goto label_3c88f8;
        case 0x3c88fcu: goto label_3c88fc;
        case 0x3c8900u: goto label_3c8900;
        case 0x3c8904u: goto label_3c8904;
        case 0x3c8908u: goto label_3c8908;
        case 0x3c890cu: goto label_3c890c;
        case 0x3c8910u: goto label_3c8910;
        case 0x3c8914u: goto label_3c8914;
        case 0x3c8918u: goto label_3c8918;
        case 0x3c891cu: goto label_3c891c;
        case 0x3c8920u: goto label_3c8920;
        case 0x3c8924u: goto label_3c8924;
        case 0x3c8928u: goto label_3c8928;
        case 0x3c892cu: goto label_3c892c;
        case 0x3c8930u: goto label_3c8930;
        case 0x3c8934u: goto label_3c8934;
        case 0x3c8938u: goto label_3c8938;
        case 0x3c893cu: goto label_3c893c;
        case 0x3c8940u: goto label_3c8940;
        case 0x3c8944u: goto label_3c8944;
        case 0x3c8948u: goto label_3c8948;
        case 0x3c894cu: goto label_3c894c;
        case 0x3c8950u: goto label_3c8950;
        case 0x3c8954u: goto label_3c8954;
        case 0x3c8958u: goto label_3c8958;
        case 0x3c895cu: goto label_3c895c;
        case 0x3c8960u: goto label_3c8960;
        case 0x3c8964u: goto label_3c8964;
        case 0x3c8968u: goto label_3c8968;
        case 0x3c896cu: goto label_3c896c;
        case 0x3c8970u: goto label_3c8970;
        case 0x3c8974u: goto label_3c8974;
        case 0x3c8978u: goto label_3c8978;
        case 0x3c897cu: goto label_3c897c;
        case 0x3c8980u: goto label_3c8980;
        case 0x3c8984u: goto label_3c8984;
        default: break;
    }

    ctx->pc = 0x3c8320u;

label_3c8320:
    // 0x3c8320: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3c8320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3c8324:
    // 0x3c8324: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3c8324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3c8328:
    // 0x3c8328: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3c8328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3c832c:
    // 0x3c832c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3c832cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3c8330:
    // 0x3c8330: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3c8330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3c8334:
    // 0x3c8334: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3c8334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3c8338:
    // 0x3c8338: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3c8338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_3c833c:
    // 0x3c833c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3c833cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_3c8340:
    // 0x3c8340: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3c8340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_3c8344:
    // 0x3c8344: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c8344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3c8348:
    // 0x3c8348: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x3c8348u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3c834c:
    // 0x3c834c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3c834cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_3c8350:
    // 0x3c8350: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3c8350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3c8354:
    // 0x3c8354: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x3c8354u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c8358:
    // 0x3c8358: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3c8358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_3c835c:
    // 0x3c835c: 0x1040017d  beqz        $v0, . + 4 + (0x17D << 2)
label_3c8360:
    if (ctx->pc == 0x3C8360u) {
        ctx->pc = 0x3C8360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C835Cu;
        // 0x3c8360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8364u;
        goto label_3c8364;
    }
    ctx->pc = 0x3C835Cu;
    {
        const bool branch_taken_0x3c835c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C835Cu;
        // 0x3c8360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c835c) {
            ctx->pc = 0x3C8954u;
            goto label_3c8954;
        }
    }
    ctx->pc = 0x3C8364u;
label_3c8364:
    // 0x3c8364: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3c8364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3c8368:
    // 0x3c8368: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_3c836c:
    if (ctx->pc == 0x3C836Cu) {
        ctx->pc = 0x3C836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8368u;
        // 0x3c836c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8370u;
        goto label_3c8370;
    }
    ctx->pc = 0x3C8368u;
    {
        const bool branch_taken_0x3c8368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8368u;
        // 0x3c836c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8368) {
            ctx->pc = 0x3C83C8u;
            goto label_3c83c8;
        }
    }
    ctx->pc = 0x3C8370u;
label_3c8370:
    // 0x3c8370: 0x92430023  lbu         $v1, 0x23($s2)
    ctx->pc = 0x3c8370u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_3c8374:
    // 0x3c8374: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3c8374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_3c8378:
    // 0x3c8378: 0x39a00  sll         $s3, $v1, 8
    ctx->pc = 0x3c8378u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_3c837c:
    // 0x3c837c: 0x32626000  andi        $v0, $s3, 0x6000
    ctx->pc = 0x3c837cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)24576);
label_3c8380:
    // 0x3c8380: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3c8384:
    if (ctx->pc == 0x3C8384u) {
        ctx->pc = 0x3C8384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8380u;
        // 0x3c8384: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8388u;
        goto label_3c8388;
    }
    ctx->pc = 0x3C8380u;
    {
        const bool branch_taken_0x3c8380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8380u;
        // 0x3c8384: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8380) {
            ctx->pc = 0x3C8390u;
            goto label_3c8390;
        }
    }
    ctx->pc = 0x3C8388u;
label_3c8388:
    // 0x3c8388: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x3c8388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3c838c:
    // 0x3c838c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x3c838cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_3c8390:
    // 0x3c8390: 0xc1074ce  jal         func_41D338
label_3c8394:
    if (ctx->pc == 0x3C8394u) {
        ctx->pc = 0x3C8394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8390u;
        // 0x3c8394: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8398u;
        goto label_3c8398;
    }
    ctx->pc = 0x3C8390u;
    SET_GPR_U32(ctx, 31, 0x3C8398u);
    ctx->pc = 0x3C8394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8390u;
    // 0x3c8394: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D338u, 0x3C8390u, 0x3C8398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8398u;
label_3c8398:
    // 0x3c8398: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3c8398u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c839c:
    // 0x3c839c: 0x1ac0016c  blez        $s6, . + 4 + (0x16C << 2)
label_3c83a0:
    if (ctx->pc == 0x3C83A0u) {
        ctx->pc = 0x3C83A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C839Cu;
        // 0x3c83a0: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C83A4u;
        goto label_3c83a4;
    }
    ctx->pc = 0x3C839Cu;
    {
        const bool branch_taken_0x3c839c = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x3C83A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C839Cu;
        // 0x3c83a0: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c839c) {
            ctx->pc = 0x3C8950u;
            goto label_3c8950;
        }
    }
    ctx->pc = 0x3C83A4u;
label_3c83a4:
    // 0x3c83a4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3c83a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3c83a8:
    // 0x3c83a8: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3c83a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3c83ac:
    // 0x3c83ac: 0x162080  sll         $a0, $s6, 2
    ctx->pc = 0x3c83acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_3c83b0:
    // 0x3c83b0: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3c83b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3c83b4:
    // 0x3c83b4: 0x40f809  jalr        $v0
label_3c83b8:
    if (ctx->pc == 0x3C83B8u) {
        ctx->pc = 0x3C83B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83B4u;
        // 0x3c83b8: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C83BCu;
        goto label_3c83bc;
    }
    ctx->pc = 0x3C83B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C83BCu);
        ctx->pc = 0x3C83B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83B4u;
        // 0x3c83b8: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C83B4u, 0x3C83BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C83BCu;
label_3c83bc:
    // 0x3c83bc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3c83bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c83c0:
    // 0x3c83c0: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
label_3c83c4:
    if (ctx->pc == 0x3C83C4u) {
        ctx->pc = 0x3C83C8u;
        goto label_3c83c8;
    }
    ctx->pc = 0x3C83C0u;
    {
        const bool branch_taken_0x3c83c0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c83c0) {
            ctx->pc = 0x3C83D0u;
            goto label_3c83d0;
        }
    }
    ctx->pc = 0x3C83C8u;
label_3c83c8:
    // 0x3c83c8: 0x10000162  b           . + 4 + (0x162 << 2)
label_3c83cc:
    if (ctx->pc == 0x3C83CCu) {
        ctx->pc = 0x3C83CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83C8u;
        // 0x3c83cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C83D0u;
        goto label_3c83d0;
    }
    ctx->pc = 0x3C83C8u;
    {
        const bool branch_taken_0x3c83c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C83CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83C8u;
        // 0x3c83cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c83c8) {
            ctx->pc = 0x3C8954u;
            goto label_3c8954;
        }
    }
    ctx->pc = 0x3C83D0u;
label_3c83d0:
    // 0x3c83d0: 0x12c0004c  beqz        $s6, . + 4 + (0x4C << 2)
label_3c83d4:
    if (ctx->pc == 0x3C83D4u) {
        ctx->pc = 0x3C83D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83D0u;
        // 0x3c83d4: 0x32740f00  andi        $s4, $s3, 0xF00 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3840);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C83D8u;
        goto label_3c83d8;
    }
    ctx->pc = 0x3C83D0u;
    {
        const bool branch_taken_0x3c83d0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C83D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83D0u;
        // 0x3c83d4: 0x32740f00  andi        $s4, $s3, 0xF00 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3840);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c83d0) {
            ctx->pc = 0x3C8504u;
            goto label_3c8504;
        }
    }
    ctx->pc = 0x3C83D8u;
label_3c83d8:
    // 0x3c83d8: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x3c83d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c83dc:
    // 0x3c83dc: 0x236102a  slt         $v0, $s1, $s6
    ctx->pc = 0x3c83dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_3c83e0:
    // 0x3c83e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3c83e4:
    if (ctx->pc == 0x3C83E4u) {
        ctx->pc = 0x3C83E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83E0u;
        // 0x3c83e4: 0x32c30001  andi        $v1, $s6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C83E8u;
        goto label_3c83e8;
    }
    ctx->pc = 0x3C83E0u;
    {
        const bool branch_taken_0x3c83e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C83E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83E0u;
        // 0x3c83e4: 0x32c30001  andi        $v1, $s6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c83e0) {
            ctx->pc = 0x3C83F0u;
            goto label_3c83f0;
        }
    }
    ctx->pc = 0x3C83E8u;
label_3c83e8:
    // 0x3c83e8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_3c83ec:
    if (ctx->pc == 0x3C83ECu) {
        ctx->pc = 0x3C83ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83E8u;
        // 0x3c83ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C83F0u;
        goto label_3c83f0;
    }
    ctx->pc = 0x3C83E8u;
    {
        const bool branch_taken_0x3c83e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C83ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83E8u;
        // 0x3c83ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c83e8) {
            ctx->pc = 0x3C8454u;
            goto label_3c8454;
        }
    }
    ctx->pc = 0x3C83F0u;
label_3c83f0:
    // 0x3c83f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c83f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c83f4:
    // 0x3c83f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c83f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c83f8:
    // 0x3c83f8: 0xc1075c0  jal         func_41D700
label_3c83fc:
    if (ctx->pc == 0x3C83FCu) {
        ctx->pc = 0x3C83FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C83F8u;
        // 0x3c83fc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8400u;
        goto label_3c8400;
    }
    ctx->pc = 0x3C83F8u;
    SET_GPR_U32(ctx, 31, 0x3C8400u);
    ctx->pc = 0x3C83FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C83F8u;
    // 0x3c83fc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x3C83F8u, 0x3C8400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8400u;
label_3c8400:
    // 0x3c8400: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3c8404:
    if (ctx->pc == 0x3C8404u) {
        ctx->pc = 0x3C8404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8400u;
        // 0x3c8404: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8408u;
        goto label_3c8408;
    }
    ctx->pc = 0x3C8400u;
    {
        const bool branch_taken_0x3c8400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8400u;
        // 0x3c8404: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8400) {
            ctx->pc = 0x3C843Cu;
            goto label_3c843c;
        }
    }
    ctx->pc = 0x3C8408u;
label_3c8408:
    // 0x3c8408: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x3c8408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3c840c:
    // 0x3c840c: 0xc107034  jal         func_41C0D0
label_3c8410:
    if (ctx->pc == 0x3C8410u) {
        ctx->pc = 0x3C8410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C840Cu;
        // 0x3c8410: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8414u;
        goto label_3c8414;
    }
    ctx->pc = 0x3C840Cu;
    SET_GPR_U32(ctx, 31, 0x3C8414u);
    ctx->pc = 0x3C8410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C840Cu;
    // 0x3c8410: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x3C840Cu, 0x3C8414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8414u;
label_3c8414:
    // 0x3c8414: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c8414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c8418:
    // 0x3c8418: 0xc107078  jal         func_41C1E0
label_3c841c:
    if (ctx->pc == 0x3C841Cu) {
        ctx->pc = 0x3C841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8418u;
        // 0x3c841c: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8420u;
        goto label_3c8420;
    }
    ctx->pc = 0x3C8418u;
    SET_GPR_U32(ctx, 31, 0x3C8420u);
    ctx->pc = 0x3C841Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8418u;
    // 0x3c841c: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x3C8418u, 0x3C8420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8420u;
label_3c8420:
    // 0x3c8420: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x3c8420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3c8424:
    // 0x3c8424: 0xc1073a8  jal         func_41CEA0
label_3c8428:
    if (ctx->pc == 0x3C8428u) {
        ctx->pc = 0x3C8428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8424u;
        // 0x3c8428: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C842Cu;
        goto label_3c842c;
    }
    ctx->pc = 0x3C8424u;
    SET_GPR_U32(ctx, 31, 0x3C842Cu);
    ctx->pc = 0x3C8428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8424u;
    // 0x3c8428: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEA0u, 0x3C8424u, 0x3C842Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C842Cu;
label_3c842c:
    // 0x3c842c: 0xc1075d0  jal         func_41D740
label_3c8430:
    if (ctx->pc == 0x3C8430u) {
        ctx->pc = 0x3C8430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C842Cu;
        // 0x3c8430: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8434u;
        goto label_3c8434;
    }
    ctx->pc = 0x3C842Cu;
    SET_GPR_U32(ctx, 31, 0x3C8434u);
    ctx->pc = 0x3C8430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C842Cu;
    // 0x3c8430: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x3C842Cu, 0x3C8434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8434u;
label_3c8434:
    // 0x3c8434: 0x10000003  b           . + 4 + (0x3 << 2)
label_3c8438:
    if (ctx->pc == 0x3C8438u) {
        ctx->pc = 0x3C8438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8434u;
        // 0x3c8438: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C843Cu;
        goto label_3c843c;
    }
    ctx->pc = 0x3C8434u;
    {
        const bool branch_taken_0x3c8434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8434u;
        // 0x3c8438: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8434) {
            ctx->pc = 0x3C8444u;
            goto label_3c8444;
        }
    }
    ctx->pc = 0x3C843Cu;
label_3c843c:
    // 0x3c843c: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x3c843cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
label_3c8440:
    // 0x3c8440: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3c8440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3c8444:
    // 0x3c8444: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x3c8444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_3c8448:
    // 0x3c8448: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_3c844c:
    if (ctx->pc == 0x3C844Cu) {
        ctx->pc = 0x3C844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8448u;
        // 0x3c844c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8450u;
        goto label_3c8450;
    }
    ctx->pc = 0x3C8448u;
    {
        const bool branch_taken_0x3c8448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8448u;
        // 0x3c844c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8448) {
            ctx->pc = 0x3C8504u;
            goto label_3c8504;
        }
    }
    ctx->pc = 0x3C8450u;
label_3c8450:
    // 0x3c8450: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c8450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c8454:
    // 0x3c8454: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x3c8454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_3c8458:
    // 0x3c8458: 0xc1075c0  jal         func_41D700
label_3c845c:
    if (ctx->pc == 0x3C845Cu) {
        ctx->pc = 0x3C845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8458u;
        // 0x3c845c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8460u;
        goto label_3c8460;
    }
    ctx->pc = 0x3C8458u;
    SET_GPR_U32(ctx, 31, 0x3C8460u);
    ctx->pc = 0x3C845Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8458u;
    // 0x3c845c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x3C8458u, 0x3C8460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8460u;
label_3c8460:
    // 0x3c8460: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3c8464:
    if (ctx->pc == 0x3C8464u) {
        ctx->pc = 0x3C8464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8460u;
        // 0x3c8464: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8468u;
        goto label_3c8468;
    }
    ctx->pc = 0x3C8460u;
    {
        const bool branch_taken_0x3c8460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8460u;
        // 0x3c8464: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8460) {
            ctx->pc = 0x3C849Cu;
            goto label_3c849c;
        }
    }
    ctx->pc = 0x3C8468u;
label_3c8468:
    // 0x3c8468: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x3c8468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3c846c:
    // 0x3c846c: 0xc107034  jal         func_41C0D0
label_3c8470:
    if (ctx->pc == 0x3C8470u) {
        ctx->pc = 0x3C8470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C846Cu;
        // 0x3c8470: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8474u;
        goto label_3c8474;
    }
    ctx->pc = 0x3C846Cu;
    SET_GPR_U32(ctx, 31, 0x3C8474u);
    ctx->pc = 0x3C8470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C846Cu;
    // 0x3c8470: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x3C846Cu, 0x3C8474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8474u;
label_3c8474:
    // 0x3c8474: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c8474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c8478:
    // 0x3c8478: 0xc107078  jal         func_41C1E0
label_3c847c:
    if (ctx->pc == 0x3C847Cu) {
        ctx->pc = 0x3C847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8478u;
        // 0x3c847c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8480u;
        goto label_3c8480;
    }
    ctx->pc = 0x3C8478u;
    SET_GPR_U32(ctx, 31, 0x3C8480u);
    ctx->pc = 0x3C847Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8478u;
    // 0x3c847c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x3C8478u, 0x3C8480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8480u;
label_3c8480:
    // 0x3c8480: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3c8480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c8484:
    // 0x3c8484: 0xc1073a8  jal         func_41CEA0
label_3c8488:
    if (ctx->pc == 0x3C8488u) {
        ctx->pc = 0x3C8488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8484u;
        // 0x3c8488: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C848Cu;
        goto label_3c848c;
    }
    ctx->pc = 0x3C8484u;
    SET_GPR_U32(ctx, 31, 0x3C848Cu);
    ctx->pc = 0x3C8488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8484u;
    // 0x3c8488: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEA0u, 0x3C8484u, 0x3C848Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C848Cu;
label_3c848c:
    // 0x3c848c: 0xc1075d0  jal         func_41D740
label_3c8490:
    if (ctx->pc == 0x3C8490u) {
        ctx->pc = 0x3C8490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C848Cu;
        // 0x3c8490: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8494u;
        goto label_3c8494;
    }
    ctx->pc = 0x3C848Cu;
    SET_GPR_U32(ctx, 31, 0x3C8494u);
    ctx->pc = 0x3C8490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C848Cu;
    // 0x3c8490: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x3C848Cu, 0x3C8494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8494u;
label_3c8494:
    // 0x3c8494: 0x10000003  b           . + 4 + (0x3 << 2)
label_3c8498:
    if (ctx->pc == 0x3C8498u) {
        ctx->pc = 0x3C8498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8494u;
        // 0x3c8498: 0x26250001  addiu       $a1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C849Cu;
        goto label_3c849c;
    }
    ctx->pc = 0x3C8494u;
    {
        const bool branch_taken_0x3c8494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8494u;
        // 0x3c8498: 0x26250001  addiu       $a1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8494) {
            ctx->pc = 0x3C84A4u;
            goto label_3c84a4;
        }
    }
    ctx->pc = 0x3C849Cu;
label_3c849c:
    // 0x3c849c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3c849cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3c84a0:
    // 0x3c84a0: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x3c84a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3c84a4:
    // 0x3c84a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c84a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c84a8:
    // 0x3c84a8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3c84a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3c84ac:
    // 0x3c84ac: 0xc1075c0  jal         func_41D700
label_3c84b0:
    if (ctx->pc == 0x3C84B0u) {
        ctx->pc = 0x3C84B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C84ACu;
        // 0x3c84b0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C84B4u;
        goto label_3c84b4;
    }
    ctx->pc = 0x3C84ACu;
    SET_GPR_U32(ctx, 31, 0x3C84B4u);
    ctx->pc = 0x3C84B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C84ACu;
    // 0x3c84b0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x3C84ACu, 0x3C84B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C84B4u;
label_3c84b4:
    // 0x3c84b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3c84b8:
    if (ctx->pc == 0x3C84B8u) {
        ctx->pc = 0x3C84B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C84B4u;
        // 0x3c84b8: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C84BCu;
        goto label_3c84bc;
    }
    ctx->pc = 0x3C84B4u;
    {
        const bool branch_taken_0x3c84b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C84B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C84B4u;
        // 0x3c84b8: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c84b4) {
            ctx->pc = 0x3C84F0u;
            goto label_3c84f0;
        }
    }
    ctx->pc = 0x3C84BCu;
label_3c84bc:
    // 0x3c84bc: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x3c84bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3c84c0:
    // 0x3c84c0: 0xc107034  jal         func_41C0D0
label_3c84c4:
    if (ctx->pc == 0x3C84C4u) {
        ctx->pc = 0x3C84C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C84C0u;
        // 0x3c84c4: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C84C8u;
        goto label_3c84c8;
    }
    ctx->pc = 0x3C84C0u;
    SET_GPR_U32(ctx, 31, 0x3C84C8u);
    ctx->pc = 0x3C84C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C84C0u;
    // 0x3c84c4: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x3C84C0u, 0x3C84C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C84C8u;
label_3c84c8:
    // 0x3c84c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c84c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c84cc:
    // 0x3c84cc: 0xc107078  jal         func_41C1E0
label_3c84d0:
    if (ctx->pc == 0x3C84D0u) {
        ctx->pc = 0x3C84D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C84CCu;
        // 0x3c84d0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C84D4u;
        goto label_3c84d4;
    }
    ctx->pc = 0x3C84CCu;
    SET_GPR_U32(ctx, 31, 0x3C84D4u);
    ctx->pc = 0x3C84D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C84CCu;
    // 0x3c84d0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x3C84CCu, 0x3C84D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C84D4u;
label_3c84d4:
    // 0x3c84d4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3c84d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3c84d8:
    // 0x3c84d8: 0xc1073a8  jal         func_41CEA0
label_3c84dc:
    if (ctx->pc == 0x3C84DCu) {
        ctx->pc = 0x3C84DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C84D8u;
        // 0x3c84dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C84E0u;
        goto label_3c84e0;
    }
    ctx->pc = 0x3C84D8u;
    SET_GPR_U32(ctx, 31, 0x3C84E0u);
    ctx->pc = 0x3C84DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C84D8u;
    // 0x3c84dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEA0u, 0x3C84D8u, 0x3C84E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C84E0u;
label_3c84e0:
    // 0x3c84e0: 0xc1075d0  jal         func_41D740
label_3c84e4:
    if (ctx->pc == 0x3C84E4u) {
        ctx->pc = 0x3C84E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C84E0u;
        // 0x3c84e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C84E8u;
        goto label_3c84e8;
    }
    ctx->pc = 0x3C84E0u;
    SET_GPR_U32(ctx, 31, 0x3C84E8u);
    ctx->pc = 0x3C84E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C84E0u;
    // 0x3c84e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x3C84E0u, 0x3C84E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C84E8u;
label_3c84e8:
    // 0x3c84e8: 0x10000003  b           . + 4 + (0x3 << 2)
label_3c84ec:
    if (ctx->pc == 0x3C84ECu) {
        ctx->pc = 0x3C84ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C84E8u;
        // 0x3c84ec: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C84F0u;
        goto label_3c84f0;
    }
    ctx->pc = 0x3C84E8u;
    {
        const bool branch_taken_0x3c84e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C84ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C84E8u;
        // 0x3c84ec: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c84e8) {
            ctx->pc = 0x3C84F8u;
            goto label_3c84f8;
        }
    }
    ctx->pc = 0x3C84F0u;
label_3c84f0:
    // 0x3c84f0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3c84f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3c84f4:
    // 0x3c84f4: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x3c84f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_3c84f8:
    // 0x3c84f8: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x3c84f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_3c84fc:
    // 0x3c84fc: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_3c8500:
    if (ctx->pc == 0x3C8500u) {
        ctx->pc = 0x3C8500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C84FCu;
        // 0x3c8500: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8504u;
        goto label_3c8504;
    }
    ctx->pc = 0x3C84FCu;
    {
        const bool branch_taken_0x3c84fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C84FCu;
        // 0x3c8500: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c84fc) {
            ctx->pc = 0x3C8450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c8450;
        }
    }
    ctx->pc = 0x3C8504u;
label_3c8504:
    // 0x3c8504: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x3c8504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
label_3c8508:
    // 0x3c8508: 0x12820023  beq         $s4, $v0, . + 4 + (0x23 << 2)
label_3c850c:
    if (ctx->pc == 0x3C850Cu) {
        ctx->pc = 0x3C850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8508u;
        // 0x3c850c: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8510u;
        goto label_3c8510;
    }
    ctx->pc = 0x3C8508u;
    {
        const bool branch_taken_0x3c8508 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8508u;
        // 0x3c850c: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8508) {
            ctx->pc = 0x3C8598u;
            goto label_3c8598;
        }
    }
    ctx->pc = 0x3C8510u;
label_3c8510:
    // 0x3c8510: 0x12820006  beq         $s4, $v0, . + 4 + (0x6 << 2)
label_3c8514:
    if (ctx->pc == 0x3C8514u) {
        ctx->pc = 0x3C8514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8510u;
        // 0x3c8514: 0x24020600  addiu       $v0, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8518u;
        goto label_3c8518;
    }
    ctx->pc = 0x3C8510u;
    {
        const bool branch_taken_0x3c8510 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C8514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8510u;
        // 0x3c8514: 0x24020600  addiu       $v0, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8510) {
            ctx->pc = 0x3C852Cu;
            goto label_3c852c;
        }
    }
    ctx->pc = 0x3C8518u;
label_3c8518:
    // 0x3c8518: 0x56820006  bnel        $s4, $v0, . + 4 + (0x6 << 2)
label_3c851c:
    if (ctx->pc == 0x3C851Cu) {
        ctx->pc = 0x3C851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8518u;
        // 0x3c851c: 0x92470020  lbu         $a3, 0x20($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8520u;
        goto label_3c8520;
    }
    ctx->pc = 0x3C8518u;
    {
        const bool branch_taken_0x3c8518 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c8518) {
            ctx->pc = 0x3C851Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8518u;
            // 0x3c851c: 0x92470020  lbu         $a3, 0x20($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8534u;
            goto label_3c8534;
        }
    }
    ctx->pc = 0x3C8520u;
label_3c8520:
    // 0x3c8520: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c8520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3c8524:
    // 0x3c8524: 0x3442f9ff  ori         $v0, $v0, 0xF9FF
    ctx->pc = 0x3c8524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63999);
label_3c8528:
    // 0x3c8528: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x3c8528u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_3c852c:
    // 0x3c852c: 0x36730500  ori         $s3, $s3, 0x500
    ctx->pc = 0x3c852cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1280);
label_3c8530:
    // 0x3c8530: 0x92470020  lbu         $a3, 0x20($s2)
    ctx->pc = 0x3c8530u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
label_3c8534:
    // 0x3c8534: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x3c8534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3c8538:
    // 0x3c8538: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x3c8538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3c853c:
    // 0x3c853c: 0x30e70007  andi        $a3, $a3, 0x7
    ctx->pc = 0x3c853cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
label_3c8540:
    // 0x3c8540: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x3c8540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_3c8544:
    // 0x3c8544: 0xc10746c  jal         func_41D1B0
label_3c8548:
    if (ctx->pc == 0x3C8548u) {
        ctx->pc = 0x3C8548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8544u;
        // 0x3c8548: 0xf33825  or          $a3, $a3, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C854Cu;
        goto label_3c854c;
    }
    ctx->pc = 0x3C8544u;
    SET_GPR_U32(ctx, 31, 0x3C854Cu);
    ctx->pc = 0x3C8548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8544u;
    // 0x3c8548: 0xf33825  or          $a3, $a3, $s3 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D1B0u, 0x3C8544u, 0x3C854Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C854Cu;
label_3c854c:
    // 0x3c854c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3c854cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3c8550:
    // 0x3c8550: 0xc10d4b6  jal         func_4352D8
label_3c8554:
    if (ctx->pc == 0x3C8554u) {
        ctx->pc = 0x3C8554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8550u;
        // 0x3c8554: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8558u;
        goto label_3c8558;
    }
    ctx->pc = 0x3C8550u;
    SET_GPR_U32(ctx, 31, 0x3C8558u);
    ctx->pc = 0x3C8554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8550u;
    // 0x3c8554: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4352D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4352D8u, 0x3C8550u, 0x3C8558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8558u;
label_3c8558:
    // 0x3c8558: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3c8558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3c855c:
    // 0x3c855c: 0xc10d4cc  jal         func_435330
label_3c8560:
    if (ctx->pc == 0x3C8560u) {
        ctx->pc = 0x3C8560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C855Cu;
        // 0x3c8560: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8564u;
        goto label_3c8564;
    }
    ctx->pc = 0x3C855Cu;
    SET_GPR_U32(ctx, 31, 0x3C8564u);
    ctx->pc = 0x3C8560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C855Cu;
    // 0x3c8560: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x435330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435330u, 0x3C855Cu, 0x3C8564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8564u;
label_3c8564:
    // 0x3c8564: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3c8564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3c8568:
    // 0x3c8568: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c8568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c856c:
    // 0x3c856c: 0xc108258  jal         func_420960
label_3c8570:
    if (ctx->pc == 0x3C8570u) {
        ctx->pc = 0x3C8570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C856Cu;
        // 0x3c8570: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8574u;
        goto label_3c8574;
    }
    ctx->pc = 0x3C856Cu;
    SET_GPR_U32(ctx, 31, 0x3C8574u);
    ctx->pc = 0x3C8570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C856Cu;
    // 0x3c8570: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420960u, 0x3C856Cu, 0x3C8574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8574u;
label_3c8574:
    // 0x3c8574: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3c8574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3c8578:
    // 0x3c8578: 0xc10d488  jal         func_435220
label_3c857c:
    if (ctx->pc == 0x3C857Cu) {
        ctx->pc = 0x3C857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8578u;
        // 0x3c857c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8580u;
        goto label_3c8580;
    }
    ctx->pc = 0x3C8578u;
    SET_GPR_U32(ctx, 31, 0x3C8580u);
    ctx->pc = 0x3C857Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8578u;
    // 0x3c857c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x435220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435220u, 0x3C8578u, 0x3C8580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8580u;
label_3c8580:
    // 0x3c8580: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3c8580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3c8584:
    // 0x3c8584: 0xc10d4a4  jal         func_435290
label_3c8588:
    if (ctx->pc == 0x3C8588u) {
        ctx->pc = 0x3C8588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8584u;
        // 0x3c8588: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C858Cu;
        goto label_3c858c;
    }
    ctx->pc = 0x3C8584u;
    SET_GPR_U32(ctx, 31, 0x3C858Cu);
    ctx->pc = 0x3C8588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8584u;
    // 0x3c8588: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435290u, 0x3C8584u, 0x3C858Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C858Cu;
label_3c858c:
    // 0x3c858c: 0xc1074ac  jal         func_41D2B0
label_3c8590:
    if (ctx->pc == 0x3C8590u) {
        ctx->pc = 0x3C8590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C858Cu;
        // 0x3c8590: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8594u;
        goto label_3c8594;
    }
    ctx->pc = 0x3C858Cu;
    SET_GPR_U32(ctx, 31, 0x3C8594u);
    ctx->pc = 0x3C8590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C858Cu;
    // 0x3c8590: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D2B0u, 0x3C858Cu, 0x3C8594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8594u;
label_3c8594:
    // 0x3c8594: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x3c8594u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c8598:
    // 0x3c8598: 0x12c00068  beqz        $s6, . + 4 + (0x68 << 2)
label_3c859c:
    if (ctx->pc == 0x3C859Cu) {
        ctx->pc = 0x3C859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8598u;
        // 0x3c859c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C85A0u;
        goto label_3c85a0;
    }
    ctx->pc = 0x3C8598u;
    {
        const bool branch_taken_0x3c8598 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8598u;
        // 0x3c859c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8598) {
            ctx->pc = 0x3C873Cu;
            goto label_3c873c;
        }
    }
    ctx->pc = 0x3C85A0u;
label_3c85a0:
    // 0x3c85a0: 0x32736000  andi        $s3, $s3, 0x6000
    ctx->pc = 0x3c85a0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)24576);
label_3c85a4:
    // 0x3c85a4: 0xafb30008  sw          $s3, 0x8($sp)
    ctx->pc = 0x3c85a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
label_3c85a8:
    // 0x3c85a8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x3c85a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3c85ac:
    // 0x3c85ac: 0x0  nop
    ctx->pc = 0x3c85acu;
    // NOP
label_3c85b0:
    // 0x3c85b0: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x3c85b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_3c85b4:
    // 0x3c85b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3c85b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3c85b8:
    // 0x3c85b8: 0x1080005c  beqz        $a0, . + 4 + (0x5C << 2)
label_3c85bc:
    if (ctx->pc == 0x3C85BCu) {
        ctx->pc = 0x3C85BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C85B8u;
        // 0x3c85bc: 0x263e0001  addiu       $fp, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C85C0u;
        goto label_3c85c0;
    }
    ctx->pc = 0x3C85B8u;
    {
        const bool branch_taken_0x3c85b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C85BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C85B8u;
        // 0x3c85bc: 0x263e0001  addiu       $fp, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c85b8) {
            ctx->pc = 0x3C872Cu;
            goto label_3c872c;
        }
    }
    ctx->pc = 0x3C85C0u;
label_3c85c0:
    // 0x3c85c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3c85c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3c85c4:
    // 0x3c85c4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_3c85c8:
    if (ctx->pc == 0x3C85C8u) {
        ctx->pc = 0x3C85C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C85C4u;
        // 0x3c85c8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C85CCu;
        goto label_3c85cc;
    }
    ctx->pc = 0x3C85C4u;
    {
        const bool branch_taken_0x3c85c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C85C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C85C4u;
        // 0x3c85c8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c85c4) {
            ctx->pc = 0x3C85F0u;
            goto label_3c85f0;
        }
    }
    ctx->pc = 0x3C85CCu;
label_3c85cc:
    // 0x3c85cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c85ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c85d0:
    // 0x3c85d0: 0x622804  sllv        $a1, $v0, $v1
    ctx->pc = 0x3c85d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_3c85d4:
    // 0x3c85d4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3c85d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_3c85d8:
    // 0x3c85d8: 0x2463b298  addiu       $v1, $v1, -0x4D68
    ctx->pc = 0x3c85d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947480));
label_3c85dc:
    // 0x3c85dc: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x3c85dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_3c85e0:
    // 0x3c85e0: 0x40f809  jalr        $v0
label_3c85e4:
    if (ctx->pc == 0x3C85E4u) {
        ctx->pc = 0x3C85E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C85E0u;
        // 0x3c85e4: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C85E8u;
        goto label_3c85e8;
    }
    ctx->pc = 0x3C85E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C85E8u);
        ctx->pc = 0x3C85E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C85E0u;
        // 0x3c85e4: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C85E0u, 0x3C85E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C85E8u;
label_3c85e8:
    // 0x3c85e8: 0x10000051  b           . + 4 + (0x51 << 2)
label_3c85ec:
    if (ctx->pc == 0x3C85ECu) {
        ctx->pc = 0x3C85ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C85E8u;
        // 0x3c85ec: 0x3c0882d  daddu       $s1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C85F0u;
        goto label_3c85f0;
    }
    ctx->pc = 0x3C85E8u;
    {
        const bool branch_taken_0x3c85e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C85ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C85E8u;
        // 0x3c85ec: 0x3c0882d  daddu       $s1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c85e8) {
            ctx->pc = 0x3C8730u;
            goto label_3c8730;
        }
    }
    ctx->pc = 0x3C85F0u;
label_3c85f0:
    // 0x3c85f0: 0x8c950008  lw          $s5, 0x8($a0)
    ctx->pc = 0x3c85f0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3c85f4:
    // 0x3c85f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3c85f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c85f8:
    // 0x3c85f8: 0x12a0004c  beqz        $s5, . + 4 + (0x4C << 2)
label_3c85fc:
    if (ctx->pc == 0x3C85FCu) {
        ctx->pc = 0x3C85FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C85F8u;
        // 0x3c85fc: 0x8c910004  lw          $s1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8600u;
        goto label_3c8600;
    }
    ctx->pc = 0x3C85F8u;
    {
        const bool branch_taken_0x3c85f8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C85FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C85F8u;
        // 0x3c85fc: 0x8c910004  lw          $s1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c85f8) {
            ctx->pc = 0x3C872Cu;
            goto label_3c872c;
        }
    }
    ctx->pc = 0x3C8600u;
label_3c8600:
    // 0x3c8600: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c8600u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c8604:
    // 0x3c8604: 0x32a30003  andi        $v1, $s5, 0x3
    ctx->pc = 0x3c8604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
label_3c8608:
    // 0x3c8608: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3c8608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_3c860c:
    // 0x3c860c: 0x1aa00017  blez        $s5, . + 4 + (0x17 << 2)
label_3c8610:
    if (ctx->pc == 0x3C8610u) {
        ctx->pc = 0x3C8610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C860Cu;
        // 0x3c8610: 0x2454b298  addiu       $s4, $v0, -0x4D68 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8614u;
        goto label_3c8614;
    }
    ctx->pc = 0x3C860Cu;
    {
        const bool branch_taken_0x3c860c = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x3C8610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C860Cu;
        // 0x3c8610: 0x2454b298  addiu       $s4, $v0, -0x4D68 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c860c) {
            ctx->pc = 0x3C866Cu;
            goto label_3c866c;
        }
    }
    ctx->pc = 0x3C8614u;
label_3c8614:
    // 0x3c8614: 0x5060001e  beql        $v1, $zero, . + 4 + (0x1E << 2)
label_3c8618:
    if (ctx->pc == 0x3C8618u) {
        ctx->pc = 0x3C8618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8614u;
        // 0x3c8618: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C861Cu;
        goto label_3c861c;
    }
    ctx->pc = 0x3C8614u;
    {
        const bool branch_taken_0x3c8614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8614) {
            ctx->pc = 0x3C8618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8614u;
            // 0x3c8618: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8690u;
            goto label_3c8690;
        }
    }
    ctx->pc = 0x3C861Cu;
label_3c861c:
    // 0x3c861c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3c861cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3c8620:
    // 0x3c8620: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_3c8624:
    if (ctx->pc == 0x3C8624u) {
        ctx->pc = 0x3C8624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8620u;
        // 0x3c8624: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8628u;
        goto label_3c8628;
    }
    ctx->pc = 0x3C8620u;
    {
        const bool branch_taken_0x3c8620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c8620) {
            ctx->pc = 0x3C8624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8620u;
            // 0x3c8624: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8670u;
            goto label_3c8670;
        }
    }
    ctx->pc = 0x3C8628u;
label_3c8628:
    // 0x3c8628: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3c8628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3c862c:
    // 0x3c862c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3c8630:
    if (ctx->pc == 0x3C8630u) {
        ctx->pc = 0x3C8630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C862Cu;
        // 0x3c8630: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8634u;
        goto label_3c8634;
    }
    ctx->pc = 0x3C862Cu;
    {
        const bool branch_taken_0x3c862c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c862c) {
            ctx->pc = 0x3C8630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C862Cu;
            // 0x3c8630: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C864Cu;
            goto label_3c864c;
        }
    }
    ctx->pc = 0x3C8634u;
label_3c8634:
    // 0x3c8634: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x3c8634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3c8638:
    // 0x3c8638: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c8638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c863c:
    // 0x3c863c: 0x8e8200c0  lw          $v0, 0xC0($s4)
    ctx->pc = 0x3c863cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
label_3c8640:
    // 0x3c8640: 0x40f809  jalr        $v0
label_3c8644:
    if (ctx->pc == 0x3C8644u) {
        ctx->pc = 0x3C8644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8640u;
        // 0x3c8644: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8648u;
        goto label_3c8648;
    }
    ctx->pc = 0x3C8640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C8648u);
        ctx->pc = 0x3C8644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8640u;
        // 0x3c8644: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8640u, 0x3C8648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C8648u;
label_3c8648:
    // 0x3c8648: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3c8648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c864c:
    // 0x3c864c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c864cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c8650:
    // 0x3c8650: 0x8e8200c0  lw          $v0, 0xC0($s4)
    ctx->pc = 0x3c8650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
label_3c8654:
    // 0x3c8654: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x3c8654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3c8658:
    // 0x3c8658: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x3c8658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3c865c:
    // 0x3c865c: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x3c865cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3c8660:
    // 0x3c8660: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3c8660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3c8664:
    // 0x3c8664: 0x40f809  jalr        $v0
label_3c8668:
    if (ctx->pc == 0x3C8668u) {
        ctx->pc = 0x3C8668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8664u;
        // 0x3c8668: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C866Cu;
        goto label_3c866c;
    }
    ctx->pc = 0x3C8664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C866Cu);
        ctx->pc = 0x3C8668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8664u;
        // 0x3c8668: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8664u, 0x3C866Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C866Cu;
label_3c866c:
    // 0x3c866c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3c866cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c8670:
    // 0x3c8670: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c8670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c8674:
    // 0x3c8674: 0x8e8200c0  lw          $v0, 0xC0($s4)
    ctx->pc = 0x3c8674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
label_3c8678:
    // 0x3c8678: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x3c8678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3c867c:
    // 0x3c867c: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x3c867cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3c8680:
    // 0x3c8680: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x3c8680u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3c8684:
    // 0x3c8684: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3c8684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3c8688:
    // 0x3c8688: 0x10000023  b           . + 4 + (0x23 << 2)
label_3c868c:
    if (ctx->pc == 0x3C868Cu) {
        ctx->pc = 0x3C868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8688u;
        // 0x3c868c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8690u;
        goto label_3c8690;
    }
    ctx->pc = 0x3C8688u;
    {
        const bool branch_taken_0x3c8688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C868Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8688u;
        // 0x3c868c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8688) {
            ctx->pc = 0x3C8718u;
            goto label_3c8718;
        }
    }
    ctx->pc = 0x3C8690u;
label_3c8690:
    // 0x3c8690: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c8690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c8694:
    // 0x3c8694: 0x8e8200c0  lw          $v0, 0xC0($s4)
    ctx->pc = 0x3c8694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
label_3c8698:
    // 0x3c8698: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x3c8698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3c869c:
    // 0x3c869c: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x3c869cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3c86a0:
    // 0x3c86a0: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x3c86a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3c86a4:
    // 0x3c86a4: 0x40f809  jalr        $v0
label_3c86a8:
    if (ctx->pc == 0x3C86A8u) {
        ctx->pc = 0x3C86A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C86A4u;
        // 0x3c86a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C86ACu;
        goto label_3c86ac;
    }
    ctx->pc = 0x3C86A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C86ACu);
        ctx->pc = 0x3C86A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C86A4u;
        // 0x3c86a8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C86A4u, 0x3C86ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C86ACu;
label_3c86ac:
    // 0x3c86ac: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x3c86acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c86b0:
    // 0x3c86b0: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x3c86b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3c86b4:
    // 0x3c86b4: 0x8e8200c0  lw          $v0, 0xC0($s4)
    ctx->pc = 0x3c86b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
label_3c86b8:
    // 0x3c86b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c86b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c86bc:
    // 0x3c86bc: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x3c86bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_3c86c0:
    // 0x3c86c0: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x3c86c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_3c86c4:
    // 0x3c86c4: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x3c86c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3c86c8:
    // 0x3c86c8: 0x40f809  jalr        $v0
label_3c86cc:
    if (ctx->pc == 0x3C86CCu) {
        ctx->pc = 0x3C86CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C86C8u;
        // 0x3c86cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C86D0u;
        goto label_3c86d0;
    }
    ctx->pc = 0x3C86C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C86D0u);
        ctx->pc = 0x3C86CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C86C8u;
        // 0x3c86cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C86C8u, 0x3C86D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C86D0u;
label_3c86d0:
    // 0x3c86d0: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x3c86d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c86d4:
    // 0x3c86d4: 0x26040002  addiu       $a0, $s0, 0x2
    ctx->pc = 0x3c86d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_3c86d8:
    // 0x3c86d8: 0x8e8200c0  lw          $v0, 0xC0($s4)
    ctx->pc = 0x3c86d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
label_3c86dc:
    // 0x3c86dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c86dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c86e0:
    // 0x3c86e0: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x3c86e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_3c86e4:
    // 0x3c86e4: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x3c86e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_3c86e8:
    // 0x3c86e8: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x3c86e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3c86ec:
    // 0x3c86ec: 0x40f809  jalr        $v0
label_3c86f0:
    if (ctx->pc == 0x3C86F0u) {
        ctx->pc = 0x3C86F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C86ECu;
        // 0x3c86f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C86F4u;
        goto label_3c86f4;
    }
    ctx->pc = 0x3C86ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C86F4u);
        ctx->pc = 0x3C86F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C86ECu;
        // 0x3c86f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C86ECu, 0x3C86F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C86F4u;
label_3c86f4:
    // 0x3c86f4: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x3c86f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3c86f8:
    // 0x3c86f8: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x3c86f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_3c86fc:
    // 0x3c86fc: 0x8e8200c0  lw          $v0, 0xC0($s4)
    ctx->pc = 0x3c86fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
label_3c8700:
    // 0x3c8700: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c8700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c8704:
    // 0x3c8704: 0x8cc70010  lw          $a3, 0x10($a2)
    ctx->pc = 0x3c8704u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_3c8708:
    // 0x3c8708: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3c8708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3c870c:
    // 0x3c870c: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x3c870cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_3c8710:
    // 0x3c8710: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x3c8710u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3c8714:
    // 0x3c8714: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3c8714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3c8718:
    // 0x3c8718: 0x40f809  jalr        $v0
label_3c871c:
    if (ctx->pc == 0x3C871Cu) {
        ctx->pc = 0x3C8720u;
        goto label_3c8720;
    }
    ctx->pc = 0x3C8718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C8720u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8718u, 0x3C8720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C8720u;
label_3c8720:
    // 0x3c8720: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x3c8720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_3c8724:
    // 0x3c8724: 0x5440ffda  bnel        $v0, $zero, . + 4 + (-0x26 << 2)
label_3c8728:
    if (ctx->pc == 0x3C8728u) {
        ctx->pc = 0x3C8728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8724u;
        // 0x3c8728: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C872Cu;
        goto label_3c872c;
    }
    ctx->pc = 0x3C8724u;
    {
        const bool branch_taken_0x3c8724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c8724) {
            ctx->pc = 0x3C8728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8724u;
            // 0x3c8728: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c8690;
        }
    }
    ctx->pc = 0x3C872Cu;
label_3c872c:
    // 0x3c872c: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x3c872cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c8730:
    // 0x3c8730: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x3c8730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_3c8734:
    // 0x3c8734: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
label_3c8738:
    if (ctx->pc == 0x3C8738u) {
        ctx->pc = 0x3C8738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8734u;
        // 0x3c8738: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C873Cu;
        goto label_3c873c;
    }
    ctx->pc = 0x3C8734u;
    {
        const bool branch_taken_0x3c8734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8734u;
        // 0x3c8738: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8734) {
            ctx->pc = 0x3C85B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c85b0;
        }
    }
    ctx->pc = 0x3C873Cu;
label_3c873c:
    // 0x3c873c: 0x92420023  lbu         $v0, 0x23($s2)
    ctx->pc = 0x3c873cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_3c8740:
    // 0x3c8740: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3c8740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8744:
    // 0x3c8744: 0x30530010  andi        $s3, $v0, 0x10
    ctx->pc = 0x3c8744u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3c8748:
    // 0x3c8748: 0x304200ef  andi        $v0, $v0, 0xEF
    ctx->pc = 0x3c8748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)239);
label_3c874c:
    // 0x3c874c: 0x12c00077  beqz        $s6, . + 4 + (0x77 << 2)
label_3c8750:
    if (ctx->pc == 0x3C8750u) {
        ctx->pc = 0x3C8750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C874Cu;
        // 0x3c8750: 0xa2420023  sb          $v0, 0x23($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 35), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8754u;
        goto label_3c8754;
    }
    ctx->pc = 0x3C874Cu;
    {
        const bool branch_taken_0x3c874c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C874Cu;
        // 0x3c8750: 0xa2420023  sb          $v0, 0x23($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 35), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c874c) {
            ctx->pc = 0x3C892Cu;
            goto label_3c892c;
        }
    }
    ctx->pc = 0x3C8754u;
label_3c8754:
    // 0x3c8754: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x3c8754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c8758:
    // 0x3c8758: 0x1ac00027  blez        $s6, . + 4 + (0x27 << 2)
label_3c875c:
    if (ctx->pc == 0x3C875Cu) {
        ctx->pc = 0x3C875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8758u;
        // 0x3c875c: 0x32c30003  andi        $v1, $s6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8760u;
        goto label_3c8760;
    }
    ctx->pc = 0x3C8758u;
    {
        const bool branch_taken_0x3c8758 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x3C875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8758u;
        // 0x3c875c: 0x32c30003  andi        $v1, $s6, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8758) {
            ctx->pc = 0x3C87F8u;
            goto label_3c87f8;
        }
    }
    ctx->pc = 0x3C8760u;
label_3c8760:
    // 0x3c8760: 0x50600038  beql        $v1, $zero, . + 4 + (0x38 << 2)
label_3c8764:
    if (ctx->pc == 0x3C8764u) {
        ctx->pc = 0x3C8764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8760u;
        // 0x3c8764: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8768u;
        goto label_3c8768;
    }
    ctx->pc = 0x3C8760u;
    {
        const bool branch_taken_0x3c8760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8760) {
            ctx->pc = 0x3C8764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8760u;
            // 0x3c8764: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8844u;
            goto label_3c8844;
        }
    }
    ctx->pc = 0x3C8768u;
label_3c8768:
    // 0x3c8768: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3c8768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3c876c:
    // 0x3c876c: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
label_3c8770:
    if (ctx->pc == 0x3C8770u) {
        ctx->pc = 0x3C8770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C876Cu;
        // 0x3c8770: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8774u;
        goto label_3c8774;
    }
    ctx->pc = 0x3C876Cu;
    {
        const bool branch_taken_0x3c876c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c876c) {
            ctx->pc = 0x3C8770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C876Cu;
            // 0x3c8770: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C87FCu;
            goto label_3c87fc;
        }
    }
    ctx->pc = 0x3C8774u;
label_3c8774:
    // 0x3c8774: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3c8774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3c8778:
    // 0x3c8778: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_3c877c:
    if (ctx->pc == 0x3C877Cu) {
        ctx->pc = 0x3C877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8778u;
        // 0x3c877c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8780u;
        goto label_3c8780;
    }
    ctx->pc = 0x3C8778u;
    {
        const bool branch_taken_0x3c8778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c8778) {
            ctx->pc = 0x3C877Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8778u;
            // 0x3c877c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C87C0u;
            goto label_3c87c0;
        }
    }
    ctx->pc = 0x3C8780u;
label_3c8780:
    // 0x3c8780: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x3c8780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3c8784:
    // 0x3c8784: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3c8788:
    if (ctx->pc == 0x3C8788u) {
        ctx->pc = 0x3C8788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8784u;
        // 0x3c8788: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C878Cu;
        goto label_3c878c;
    }
    ctx->pc = 0x3C8784u;
    {
        const bool branch_taken_0x3c8784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8784u;
        // 0x3c8788: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8784) {
            ctx->pc = 0x3C87B4u;
            goto label_3c87b4;
        }
    }
    ctx->pc = 0x3C878Cu;
label_3c878c:
    // 0x3c878c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c878cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c8790:
    // 0x3c8790: 0xc1075c0  jal         func_41D700
label_3c8794:
    if (ctx->pc == 0x3C8794u) {
        ctx->pc = 0x3C8794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8790u;
        // 0x3c8794: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8798u;
        goto label_3c8798;
    }
    ctx->pc = 0x3C8790u;
    SET_GPR_U32(ctx, 31, 0x3C8798u);
    ctx->pc = 0x3C8794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8790u;
    // 0x3c8794: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x3C8790u, 0x3C8798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8798u;
label_3c8798:
    // 0x3c8798: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x3c8798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_3c879c:
    // 0x3c879c: 0xc1073c2  jal         func_41CF08
label_3c87a0:
    if (ctx->pc == 0x3C87A0u) {
        ctx->pc = 0x3C87A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C879Cu;
        // 0x3c87a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C87A4u;
        goto label_3c87a4;
    }
    ctx->pc = 0x3C879Cu;
    SET_GPR_U32(ctx, 31, 0x3C87A4u);
    ctx->pc = 0x3C87A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C879Cu;
    // 0x3c87a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x3C879Cu, 0x3C87A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C87A4u;
label_3c87a4:
    // 0x3c87a4: 0xc1075d0  jal         func_41D740
label_3c87a8:
    if (ctx->pc == 0x3C87A8u) {
        ctx->pc = 0x3C87A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C87A4u;
        // 0x3c87a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C87ACu;
        goto label_3c87ac;
    }
    ctx->pc = 0x3C87A4u;
    SET_GPR_U32(ctx, 31, 0x3C87ACu);
    ctx->pc = 0x3C87A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C87A4u;
    // 0x3c87a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x3C87A4u, 0x3C87ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C87ACu;
label_3c87ac:
    // 0x3c87ac: 0xc10705c  jal         func_41C170
label_3c87b0:
    if (ctx->pc == 0x3C87B0u) {
        ctx->pc = 0x3C87B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C87ACu;
        // 0x3c87b0: 0x8ee40000  lw          $a0, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C87B4u;
        goto label_3c87b4;
    }
    ctx->pc = 0x3C87ACu;
    SET_GPR_U32(ctx, 31, 0x3C87B4u);
    ctx->pc = 0x3C87B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C87ACu;
    // 0x3c87b0: 0x8ee40000  lw          $a0, 0x0($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3C87ACu, 0x3C87B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C87B4u;
label_3c87b4:
    // 0x3c87b4: 0x26f00004  addiu       $s0, $s7, 0x4
    ctx->pc = 0x3c87b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_3c87b8:
    // 0x3c87b8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3c87b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c87bc:
    // 0x3c87bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3c87bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c87c0:
    // 0x3c87c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3c87c4:
    if (ctx->pc == 0x3C87C4u) {
        ctx->pc = 0x3C87C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C87C0u;
        // 0x3c87c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C87C8u;
        goto label_3c87c8;
    }
    ctx->pc = 0x3C87C0u;
    {
        const bool branch_taken_0x3c87c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C87C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C87C0u;
        // 0x3c87c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c87c0) {
            ctx->pc = 0x3C87F0u;
            goto label_3c87f0;
        }
    }
    ctx->pc = 0x3C87C8u;
label_3c87c8:
    // 0x3c87c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c87c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c87cc:
    // 0x3c87cc: 0xc1075c0  jal         func_41D700
label_3c87d0:
    if (ctx->pc == 0x3C87D0u) {
        ctx->pc = 0x3C87D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C87CCu;
        // 0x3c87d0: 0x322500ff  andi        $a1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C87D4u;
        goto label_3c87d4;
    }
    ctx->pc = 0x3C87CCu;
    SET_GPR_U32(ctx, 31, 0x3C87D4u);
    ctx->pc = 0x3C87D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C87CCu;
    // 0x3c87d0: 0x322500ff  andi        $a1, $s1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x3C87CCu, 0x3C87D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C87D4u;
label_3c87d4:
    // 0x3c87d4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3c87d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c87d8:
    // 0x3c87d8: 0xc1073c2  jal         func_41CF08
label_3c87dc:
    if (ctx->pc == 0x3C87DCu) {
        ctx->pc = 0x3C87DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C87D8u;
        // 0x3c87dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C87E0u;
        goto label_3c87e0;
    }
    ctx->pc = 0x3C87D8u;
    SET_GPR_U32(ctx, 31, 0x3C87E0u);
    ctx->pc = 0x3C87DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C87D8u;
    // 0x3c87dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x3C87D8u, 0x3C87E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C87E0u;
label_3c87e0:
    // 0x3c87e0: 0xc1075d0  jal         func_41D740
label_3c87e4:
    if (ctx->pc == 0x3C87E4u) {
        ctx->pc = 0x3C87E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C87E0u;
        // 0x3c87e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C87E8u;
        goto label_3c87e8;
    }
    ctx->pc = 0x3C87E0u;
    SET_GPR_U32(ctx, 31, 0x3C87E8u);
    ctx->pc = 0x3C87E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C87E0u;
    // 0x3c87e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x3C87E0u, 0x3C87E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C87E8u;
label_3c87e8:
    // 0x3c87e8: 0xc10705c  jal         func_41C170
label_3c87ec:
    if (ctx->pc == 0x3C87ECu) {
        ctx->pc = 0x3C87ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C87E8u;
        // 0x3c87ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C87F0u;
        goto label_3c87f0;
    }
    ctx->pc = 0x3C87E8u;
    SET_GPR_U32(ctx, 31, 0x3C87F0u);
    ctx->pc = 0x3C87ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C87E8u;
    // 0x3c87ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3C87E8u, 0x3C87F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C87F0u;
label_3c87f0:
    // 0x3c87f0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3c87f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3c87f4:
    // 0x3c87f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3c87f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3c87f8:
    // 0x3c87f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3c87f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c87fc:
    // 0x3c87fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3c8800:
    if (ctx->pc == 0x3C8800u) {
        ctx->pc = 0x3C8800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C87FCu;
        // 0x3c8800: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8804u;
        goto label_3c8804;
    }
    ctx->pc = 0x3C87FCu;
    {
        const bool branch_taken_0x3c87fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C87FCu;
        // 0x3c8800: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c87fc) {
            ctx->pc = 0x3C882Cu;
            goto label_3c882c;
        }
    }
    ctx->pc = 0x3C8804u;
label_3c8804:
    // 0x3c8804: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c8804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c8808:
    // 0x3c8808: 0xc1075c0  jal         func_41D700
label_3c880c:
    if (ctx->pc == 0x3C880Cu) {
        ctx->pc = 0x3C880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8808u;
        // 0x3c880c: 0x322500ff  andi        $a1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8810u;
        goto label_3c8810;
    }
    ctx->pc = 0x3C8808u;
    SET_GPR_U32(ctx, 31, 0x3C8810u);
    ctx->pc = 0x3C880Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8808u;
    // 0x3c880c: 0x322500ff  andi        $a1, $s1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x3C8808u, 0x3C8810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8810u;
label_3c8810:
    // 0x3c8810: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3c8810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c8814:
    // 0x3c8814: 0xc1073c2  jal         func_41CF08
label_3c8818:
    if (ctx->pc == 0x3C8818u) {
        ctx->pc = 0x3C8818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8814u;
        // 0x3c8818: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C881Cu;
        goto label_3c881c;
    }
    ctx->pc = 0x3C8814u;
    SET_GPR_U32(ctx, 31, 0x3C881Cu);
    ctx->pc = 0x3C8818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8814u;
    // 0x3c8818: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x3C8814u, 0x3C881Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C881Cu;
label_3c881c:
    // 0x3c881c: 0xc1075d0  jal         func_41D740
label_3c8820:
    if (ctx->pc == 0x3C8820u) {
        ctx->pc = 0x3C8820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C881Cu;
        // 0x3c8820: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8824u;
        goto label_3c8824;
    }
    ctx->pc = 0x3C881Cu;
    SET_GPR_U32(ctx, 31, 0x3C8824u);
    ctx->pc = 0x3C8820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C881Cu;
    // 0x3c8820: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x3C881Cu, 0x3C8824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8824u;
label_3c8824:
    // 0x3c8824: 0xc10705c  jal         func_41C170
label_3c8828:
    if (ctx->pc == 0x3C8828u) {
        ctx->pc = 0x3C8828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8824u;
        // 0x3c8828: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C882Cu;
        goto label_3c882c;
    }
    ctx->pc = 0x3C8824u;
    SET_GPR_U32(ctx, 31, 0x3C882Cu);
    ctx->pc = 0x3C8828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8824u;
    // 0x3c8828: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3C8824u, 0x3C882Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C882Cu;
label_3c882c:
    // 0x3c882c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3c882cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3c8830:
    // 0x3c8830: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x3c8830u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_3c8834:
    // 0x3c8834: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_3c8838:
    if (ctx->pc == 0x3C8838u) {
        ctx->pc = 0x3C8838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8834u;
        // 0x3c8838: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C883Cu;
        goto label_3c883c;
    }
    ctx->pc = 0x3C8834u;
    {
        const bool branch_taken_0x3c8834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8834u;
        // 0x3c8838: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8834) {
            ctx->pc = 0x3C892Cu;
            goto label_3c892c;
        }
    }
    ctx->pc = 0x3C883Cu;
label_3c883c:
    // 0x3c883c: 0x0  nop
    ctx->pc = 0x3c883cu;
    // NOP
label_3c8840:
    // 0x3c8840: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3c8840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c8844:
    // 0x3c8844: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3c8848:
    if (ctx->pc == 0x3C8848u) {
        ctx->pc = 0x3C8848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8844u;
        // 0x3c8848: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C884Cu;
        goto label_3c884c;
    }
    ctx->pc = 0x3C8844u;
    {
        const bool branch_taken_0x3c8844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8844u;
        // 0x3c8848: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8844) {
            ctx->pc = 0x3C8874u;
            goto label_3c8874;
        }
    }
    ctx->pc = 0x3C884Cu;
label_3c884c:
    // 0x3c884c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c884cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c8850:
    // 0x3c8850: 0xc1075c0  jal         func_41D700
label_3c8854:
    if (ctx->pc == 0x3C8854u) {
        ctx->pc = 0x3C8854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8850u;
        // 0x3c8854: 0x322500ff  andi        $a1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8858u;
        goto label_3c8858;
    }
    ctx->pc = 0x3C8850u;
    SET_GPR_U32(ctx, 31, 0x3C8858u);
    ctx->pc = 0x3C8854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8850u;
    // 0x3c8854: 0x322500ff  andi        $a1, $s1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x3C8850u, 0x3C8858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8858u;
label_3c8858:
    // 0x3c8858: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3c8858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c885c:
    // 0x3c885c: 0xc1073c2  jal         func_41CF08
label_3c8860:
    if (ctx->pc == 0x3C8860u) {
        ctx->pc = 0x3C8860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C885Cu;
        // 0x3c8860: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8864u;
        goto label_3c8864;
    }
    ctx->pc = 0x3C885Cu;
    SET_GPR_U32(ctx, 31, 0x3C8864u);
    ctx->pc = 0x3C8860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C885Cu;
    // 0x3c8860: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x3C885Cu, 0x3C8864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8864u;
label_3c8864:
    // 0x3c8864: 0xc1075d0  jal         func_41D740
label_3c8868:
    if (ctx->pc == 0x3C8868u) {
        ctx->pc = 0x3C8868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8864u;
        // 0x3c8868: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C886Cu;
        goto label_3c886c;
    }
    ctx->pc = 0x3C8864u;
    SET_GPR_U32(ctx, 31, 0x3C886Cu);
    ctx->pc = 0x3C8868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8864u;
    // 0x3c8868: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x3C8864u, 0x3C886Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C886Cu;
label_3c886c:
    // 0x3c886c: 0xc10705c  jal         func_41C170
label_3c8870:
    if (ctx->pc == 0x3C8870u) {
        ctx->pc = 0x3C8870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C886Cu;
        // 0x3c8870: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8874u;
        goto label_3c8874;
    }
    ctx->pc = 0x3C886Cu;
    SET_GPR_U32(ctx, 31, 0x3C8874u);
    ctx->pc = 0x3C8870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C886Cu;
    // 0x3c8870: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3C886Cu, 0x3C8874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8874u;
label_3c8874:
    // 0x3c8874: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3c8874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3c8878:
    // 0x3c8878: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3c887c:
    if (ctx->pc == 0x3C887Cu) {
        ctx->pc = 0x3C887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8878u;
        // 0x3c887c: 0x26250001  addiu       $a1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8880u;
        goto label_3c8880;
    }
    ctx->pc = 0x3C8878u;
    {
        const bool branch_taken_0x3c8878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8878u;
        // 0x3c887c: 0x26250001  addiu       $a1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8878) {
            ctx->pc = 0x3C88ACu;
            goto label_3c88ac;
        }
    }
    ctx->pc = 0x3C8880u;
label_3c8880:
    // 0x3c8880: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3c8880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c8884:
    // 0x3c8884: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3c8884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3c8888:
    // 0x3c8888: 0xc1075c0  jal         func_41D700
label_3c888c:
    if (ctx->pc == 0x3C888Cu) {
        ctx->pc = 0x3C888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8888u;
        // 0x3c888c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8890u;
        goto label_3c8890;
    }
    ctx->pc = 0x3C8888u;
    SET_GPR_U32(ctx, 31, 0x3C8890u);
    ctx->pc = 0x3C888Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8888u;
    // 0x3c888c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x3C8888u, 0x3C8890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8890u;
label_3c8890:
    // 0x3c8890: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3c8890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3c8894:
    // 0x3c8894: 0xc1073c2  jal         func_41CF08
label_3c8898:
    if (ctx->pc == 0x3C8898u) {
        ctx->pc = 0x3C8898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8894u;
        // 0x3c8898: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C889Cu;
        goto label_3c889c;
    }
    ctx->pc = 0x3C8894u;
    SET_GPR_U32(ctx, 31, 0x3C889Cu);
    ctx->pc = 0x3C8898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8894u;
    // 0x3c8898: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x3C8894u, 0x3C889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C889Cu;
label_3c889c:
    // 0x3c889c: 0xc1075d0  jal         func_41D740
label_3c88a0:
    if (ctx->pc == 0x3C88A0u) {
        ctx->pc = 0x3C88A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C889Cu;
        // 0x3c88a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C88A4u;
        goto label_3c88a4;
    }
    ctx->pc = 0x3C889Cu;
    SET_GPR_U32(ctx, 31, 0x3C88A4u);
    ctx->pc = 0x3C88A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C889Cu;
    // 0x3c88a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x3C889Cu, 0x3C88A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C88A4u;
label_3c88a4:
    // 0x3c88a4: 0xc10705c  jal         func_41C170
label_3c88a8:
    if (ctx->pc == 0x3C88A8u) {
        ctx->pc = 0x3C88A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C88A4u;
        // 0x3c88a8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C88ACu;
        goto label_3c88ac;
    }
    ctx->pc = 0x3C88A4u;
    SET_GPR_U32(ctx, 31, 0x3C88ACu);
    ctx->pc = 0x3C88A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C88A4u;
    // 0x3c88a8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3C88A4u, 0x3C88ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C88ACu;
label_3c88ac:
    // 0x3c88ac: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3c88acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3c88b0:
    // 0x3c88b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3c88b4:
    if (ctx->pc == 0x3C88B4u) {
        ctx->pc = 0x3C88B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C88B0u;
        // 0x3c88b4: 0x26250002  addiu       $a1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C88B8u;
        goto label_3c88b8;
    }
    ctx->pc = 0x3C88B0u;
    {
        const bool branch_taken_0x3c88b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C88B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C88B0u;
        // 0x3c88b4: 0x26250002  addiu       $a1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c88b0) {
            ctx->pc = 0x3C88E4u;
            goto label_3c88e4;
        }
    }
    ctx->pc = 0x3C88B8u;
label_3c88b8:
    // 0x3c88b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3c88b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c88bc:
    // 0x3c88bc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3c88bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3c88c0:
    // 0x3c88c0: 0xc1075c0  jal         func_41D700
label_3c88c4:
    if (ctx->pc == 0x3C88C4u) {
        ctx->pc = 0x3C88C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C88C0u;
        // 0x3c88c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C88C8u;
        goto label_3c88c8;
    }
    ctx->pc = 0x3C88C0u;
    SET_GPR_U32(ctx, 31, 0x3C88C8u);
    ctx->pc = 0x3C88C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C88C0u;
    // 0x3c88c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x3C88C0u, 0x3C88C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C88C8u;
label_3c88c8:
    // 0x3c88c8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3c88c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3c88cc:
    // 0x3c88cc: 0xc1073c2  jal         func_41CF08
label_3c88d0:
    if (ctx->pc == 0x3C88D0u) {
        ctx->pc = 0x3C88D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C88CCu;
        // 0x3c88d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C88D4u;
        goto label_3c88d4;
    }
    ctx->pc = 0x3C88CCu;
    SET_GPR_U32(ctx, 31, 0x3C88D4u);
    ctx->pc = 0x3C88D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C88CCu;
    // 0x3c88d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x3C88CCu, 0x3C88D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C88D4u;
label_3c88d4:
    // 0x3c88d4: 0xc1075d0  jal         func_41D740
label_3c88d8:
    if (ctx->pc == 0x3C88D8u) {
        ctx->pc = 0x3C88D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C88D4u;
        // 0x3c88d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C88DCu;
        goto label_3c88dc;
    }
    ctx->pc = 0x3C88D4u;
    SET_GPR_U32(ctx, 31, 0x3C88DCu);
    ctx->pc = 0x3C88D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C88D4u;
    // 0x3c88d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x3C88D4u, 0x3C88DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C88DCu;
label_3c88dc:
    // 0x3c88dc: 0xc10705c  jal         func_41C170
label_3c88e0:
    if (ctx->pc == 0x3C88E0u) {
        ctx->pc = 0x3C88E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C88DCu;
        // 0x3c88e0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C88E4u;
        goto label_3c88e4;
    }
    ctx->pc = 0x3C88DCu;
    SET_GPR_U32(ctx, 31, 0x3C88E4u);
    ctx->pc = 0x3C88E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C88DCu;
    // 0x3c88e0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3C88DCu, 0x3C88E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C88E4u;
label_3c88e4:
    // 0x3c88e4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3c88e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3c88e8:
    // 0x3c88e8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3c88ec:
    if (ctx->pc == 0x3C88ECu) {
        ctx->pc = 0x3C88ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C88E8u;
        // 0x3c88ec: 0x26250003  addiu       $a1, $s1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C88F0u;
        goto label_3c88f0;
    }
    ctx->pc = 0x3C88E8u;
    {
        const bool branch_taken_0x3c88e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C88ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C88E8u;
        // 0x3c88ec: 0x26250003  addiu       $a1, $s1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c88e8) {
            ctx->pc = 0x3C891Cu;
            goto label_3c891c;
        }
    }
    ctx->pc = 0x3C88F0u;
label_3c88f0:
    // 0x3c88f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3c88f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c88f4:
    // 0x3c88f4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3c88f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3c88f8:
    // 0x3c88f8: 0xc1075c0  jal         func_41D700
label_3c88fc:
    if (ctx->pc == 0x3C88FCu) {
        ctx->pc = 0x3C88FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C88F8u;
        // 0x3c88fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8900u;
        goto label_3c8900;
    }
    ctx->pc = 0x3C88F8u;
    SET_GPR_U32(ctx, 31, 0x3C8900u);
    ctx->pc = 0x3C88FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C88F8u;
    // 0x3c88fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D700u, 0x3C88F8u, 0x3C8900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8900u;
label_3c8900:
    // 0x3c8900: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3c8900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3c8904:
    // 0x3c8904: 0xc1073c2  jal         func_41CF08
label_3c8908:
    if (ctx->pc == 0x3C8908u) {
        ctx->pc = 0x3C8908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8904u;
        // 0x3c8908: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C890Cu;
        goto label_3c890c;
    }
    ctx->pc = 0x3C8904u;
    SET_GPR_U32(ctx, 31, 0x3C890Cu);
    ctx->pc = 0x3C8908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8904u;
    // 0x3c8908: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x3C8904u, 0x3C890Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C890Cu;
label_3c890c:
    // 0x3c890c: 0xc1075d0  jal         func_41D740
label_3c8910:
    if (ctx->pc == 0x3C8910u) {
        ctx->pc = 0x3C8910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C890Cu;
        // 0x3c8910: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8914u;
        goto label_3c8914;
    }
    ctx->pc = 0x3C890Cu;
    SET_GPR_U32(ctx, 31, 0x3C8914u);
    ctx->pc = 0x3C8910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C890Cu;
    // 0x3c8910: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D740u, 0x3C890Cu, 0x3C8914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8914u;
label_3c8914:
    // 0x3c8914: 0xc10705c  jal         func_41C170
label_3c8918:
    if (ctx->pc == 0x3C8918u) {
        ctx->pc = 0x3C8918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8914u;
        // 0x3c8918: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C891Cu;
        goto label_3c891c;
    }
    ctx->pc = 0x3C8914u;
    SET_GPR_U32(ctx, 31, 0x3C891Cu);
    ctx->pc = 0x3C8918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8914u;
    // 0x3c8918: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3C8914u, 0x3C891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C891Cu;
label_3c891c:
    // 0x3c891c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3c891cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3c8920:
    // 0x3c8920: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x3c8920u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_3c8924:
    // 0x3c8924: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
label_3c8928:
    if (ctx->pc == 0x3C8928u) {
        ctx->pc = 0x3C8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8924u;
        // 0x3c8928: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C892Cu;
        goto label_3c892c;
    }
    ctx->pc = 0x3C8924u;
    {
        const bool branch_taken_0x3c8924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8924u;
        // 0x3c8928: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8924) {
            ctx->pc = 0x3C8840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c8840;
        }
    }
    ctx->pc = 0x3C892Cu;
label_3c892c:
    // 0x3c892c: 0x92420023  lbu         $v0, 0x23($s2)
    ctx->pc = 0x3c892cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_3c8930:
    // 0x3c8930: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x3c8930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
label_3c8934:
    // 0x3c8934: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
label_3c8938:
    if (ctx->pc == 0x3C8938u) {
        ctx->pc = 0x3C8938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8934u;
        // 0x3c8938: 0xa2420023  sb          $v0, 0x23($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 35), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C893Cu;
        goto label_3c893c;
    }
    ctx->pc = 0x3C8934u;
    {
        const bool branch_taken_0x3c8934 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8934u;
        // 0x3c8938: 0xa2420023  sb          $v0, 0x23($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 35), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8934) {
            ctx->pc = 0x3C8950u;
            goto label_3c8950;
        }
    }
    ctx->pc = 0x3C893Cu;
label_3c893c:
    // 0x3c893c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3c893cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3c8940:
    // 0x3c8940: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x3c8940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3c8944:
    // 0x3c8944: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3c8944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3c8948:
    // 0x3c8948: 0x40f809  jalr        $v0
label_3c894c:
    if (ctx->pc == 0x3C894Cu) {
        ctx->pc = 0x3C894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8948u;
        // 0x3c894c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8950u;
        goto label_3c8950;
    }
    ctx->pc = 0x3C8948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C8950u);
        ctx->pc = 0x3C894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8948u;
        // 0x3c894c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8948u, 0x3C8950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C8950u;
label_3c8950:
    // 0x3c8950: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3c8950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3c8954:
    // 0x3c8954: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3c8954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3c8958:
    // 0x3c8958: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3c8958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c895c:
    // 0x3c895c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3c895cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c8960:
    // 0x3c8960: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3c8960u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c8964:
    // 0x3c8964: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3c8964u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c8968:
    // 0x3c8968: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3c8968u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c896c:
    // 0x3c896c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3c896cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c8970:
    // 0x3c8970: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3c8970u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c8974:
    // 0x3c8974: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3c8974u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c8978:
    // 0x3c8978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c8978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3c897c:
    // 0x3c897c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x3c897cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c8980:
    // 0x3c8980: 0x3e00008  jr          $ra
label_3c8984:
    if (ctx->pc == 0x3C8984u) {
        ctx->pc = 0x3C8984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8980u;
        // 0x3c8984: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8988u;
        goto label_fallthrough_0x3c8980;
    }
    ctx->pc = 0x3C8980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C8984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8980u;
        // 0x3c8984: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c8980:
    ctx->pc = 0x3C8988u;
}
