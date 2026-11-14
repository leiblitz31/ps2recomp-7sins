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

// Function: sub_002E9120
// Address: 0x2e9120 - 0x2e9980
void sub_002E9120_0x2e9120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9120_0x2e9120");
#endif

    switch (ctx->pc) {
        case 0x2e9120u: goto label_2e9120;
        case 0x2e9124u: goto label_2e9124;
        case 0x2e9128u: goto label_2e9128;
        case 0x2e912cu: goto label_2e912c;
        case 0x2e9130u: goto label_2e9130;
        case 0x2e9134u: goto label_2e9134;
        case 0x2e9138u: goto label_2e9138;
        case 0x2e913cu: goto label_2e913c;
        case 0x2e9140u: goto label_2e9140;
        case 0x2e9144u: goto label_2e9144;
        case 0x2e9148u: goto label_2e9148;
        case 0x2e914cu: goto label_2e914c;
        case 0x2e9150u: goto label_2e9150;
        case 0x2e9154u: goto label_2e9154;
        case 0x2e9158u: goto label_2e9158;
        case 0x2e915cu: goto label_2e915c;
        case 0x2e9160u: goto label_2e9160;
        case 0x2e9164u: goto label_2e9164;
        case 0x2e9168u: goto label_2e9168;
        case 0x2e916cu: goto label_2e916c;
        case 0x2e9170u: goto label_2e9170;
        case 0x2e9174u: goto label_2e9174;
        case 0x2e9178u: goto label_2e9178;
        case 0x2e917cu: goto label_2e917c;
        case 0x2e9180u: goto label_2e9180;
        case 0x2e9184u: goto label_2e9184;
        case 0x2e9188u: goto label_2e9188;
        case 0x2e918cu: goto label_2e918c;
        case 0x2e9190u: goto label_2e9190;
        case 0x2e9194u: goto label_2e9194;
        case 0x2e9198u: goto label_2e9198;
        case 0x2e919cu: goto label_2e919c;
        case 0x2e91a0u: goto label_2e91a0;
        case 0x2e91a4u: goto label_2e91a4;
        case 0x2e91a8u: goto label_2e91a8;
        case 0x2e91acu: goto label_2e91ac;
        case 0x2e91b0u: goto label_2e91b0;
        case 0x2e91b4u: goto label_2e91b4;
        case 0x2e91b8u: goto label_2e91b8;
        case 0x2e91bcu: goto label_2e91bc;
        case 0x2e91c0u: goto label_2e91c0;
        case 0x2e91c4u: goto label_2e91c4;
        case 0x2e91c8u: goto label_2e91c8;
        case 0x2e91ccu: goto label_2e91cc;
        case 0x2e91d0u: goto label_2e91d0;
        case 0x2e91d4u: goto label_2e91d4;
        case 0x2e91d8u: goto label_2e91d8;
        case 0x2e91dcu: goto label_2e91dc;
        case 0x2e91e0u: goto label_2e91e0;
        case 0x2e91e4u: goto label_2e91e4;
        case 0x2e91e8u: goto label_2e91e8;
        case 0x2e91ecu: goto label_2e91ec;
        case 0x2e91f0u: goto label_2e91f0;
        case 0x2e91f4u: goto label_2e91f4;
        case 0x2e91f8u: goto label_2e91f8;
        case 0x2e91fcu: goto label_2e91fc;
        case 0x2e9200u: goto label_2e9200;
        case 0x2e9204u: goto label_2e9204;
        case 0x2e9208u: goto label_2e9208;
        case 0x2e920cu: goto label_2e920c;
        case 0x2e9210u: goto label_2e9210;
        case 0x2e9214u: goto label_2e9214;
        case 0x2e9218u: goto label_2e9218;
        case 0x2e921cu: goto label_2e921c;
        case 0x2e9220u: goto label_2e9220;
        case 0x2e9224u: goto label_2e9224;
        case 0x2e9228u: goto label_2e9228;
        case 0x2e922cu: goto label_2e922c;
        case 0x2e9230u: goto label_2e9230;
        case 0x2e9234u: goto label_2e9234;
        case 0x2e9238u: goto label_2e9238;
        case 0x2e923cu: goto label_2e923c;
        case 0x2e9240u: goto label_2e9240;
        case 0x2e9244u: goto label_2e9244;
        case 0x2e9248u: goto label_2e9248;
        case 0x2e924cu: goto label_2e924c;
        case 0x2e9250u: goto label_2e9250;
        case 0x2e9254u: goto label_2e9254;
        case 0x2e9258u: goto label_2e9258;
        case 0x2e925cu: goto label_2e925c;
        case 0x2e9260u: goto label_2e9260;
        case 0x2e9264u: goto label_2e9264;
        case 0x2e9268u: goto label_2e9268;
        case 0x2e926cu: goto label_2e926c;
        case 0x2e9270u: goto label_2e9270;
        case 0x2e9274u: goto label_2e9274;
        case 0x2e9278u: goto label_2e9278;
        case 0x2e927cu: goto label_2e927c;
        case 0x2e9280u: goto label_2e9280;
        case 0x2e9284u: goto label_2e9284;
        case 0x2e9288u: goto label_2e9288;
        case 0x2e928cu: goto label_2e928c;
        case 0x2e9290u: goto label_2e9290;
        case 0x2e9294u: goto label_2e9294;
        case 0x2e9298u: goto label_2e9298;
        case 0x2e929cu: goto label_2e929c;
        case 0x2e92a0u: goto label_2e92a0;
        case 0x2e92a4u: goto label_2e92a4;
        case 0x2e92a8u: goto label_2e92a8;
        case 0x2e92acu: goto label_2e92ac;
        case 0x2e92b0u: goto label_2e92b0;
        case 0x2e92b4u: goto label_2e92b4;
        case 0x2e92b8u: goto label_2e92b8;
        case 0x2e92bcu: goto label_2e92bc;
        case 0x2e92c0u: goto label_2e92c0;
        case 0x2e92c4u: goto label_2e92c4;
        case 0x2e92c8u: goto label_2e92c8;
        case 0x2e92ccu: goto label_2e92cc;
        case 0x2e92d0u: goto label_2e92d0;
        case 0x2e92d4u: goto label_2e92d4;
        case 0x2e92d8u: goto label_2e92d8;
        case 0x2e92dcu: goto label_2e92dc;
        case 0x2e92e0u: goto label_2e92e0;
        case 0x2e92e4u: goto label_2e92e4;
        case 0x2e92e8u: goto label_2e92e8;
        case 0x2e92ecu: goto label_2e92ec;
        case 0x2e92f0u: goto label_2e92f0;
        case 0x2e92f4u: goto label_2e92f4;
        case 0x2e92f8u: goto label_2e92f8;
        case 0x2e92fcu: goto label_2e92fc;
        case 0x2e9300u: goto label_2e9300;
        case 0x2e9304u: goto label_2e9304;
        case 0x2e9308u: goto label_2e9308;
        case 0x2e930cu: goto label_2e930c;
        case 0x2e9310u: goto label_2e9310;
        case 0x2e9314u: goto label_2e9314;
        case 0x2e9318u: goto label_2e9318;
        case 0x2e931cu: goto label_2e931c;
        case 0x2e9320u: goto label_2e9320;
        case 0x2e9324u: goto label_2e9324;
        case 0x2e9328u: goto label_2e9328;
        case 0x2e932cu: goto label_2e932c;
        case 0x2e9330u: goto label_2e9330;
        case 0x2e9334u: goto label_2e9334;
        case 0x2e9338u: goto label_2e9338;
        case 0x2e933cu: goto label_2e933c;
        case 0x2e9340u: goto label_2e9340;
        case 0x2e9344u: goto label_2e9344;
        case 0x2e9348u: goto label_2e9348;
        case 0x2e934cu: goto label_2e934c;
        case 0x2e9350u: goto label_2e9350;
        case 0x2e9354u: goto label_2e9354;
        case 0x2e9358u: goto label_2e9358;
        case 0x2e935cu: goto label_2e935c;
        case 0x2e9360u: goto label_2e9360;
        case 0x2e9364u: goto label_2e9364;
        case 0x2e9368u: goto label_2e9368;
        case 0x2e936cu: goto label_2e936c;
        case 0x2e9370u: goto label_2e9370;
        case 0x2e9374u: goto label_2e9374;
        case 0x2e9378u: goto label_2e9378;
        case 0x2e937cu: goto label_2e937c;
        case 0x2e9380u: goto label_2e9380;
        case 0x2e9384u: goto label_2e9384;
        case 0x2e9388u: goto label_2e9388;
        case 0x2e938cu: goto label_2e938c;
        case 0x2e9390u: goto label_2e9390;
        case 0x2e9394u: goto label_2e9394;
        case 0x2e9398u: goto label_2e9398;
        case 0x2e939cu: goto label_2e939c;
        case 0x2e93a0u: goto label_2e93a0;
        case 0x2e93a4u: goto label_2e93a4;
        case 0x2e93a8u: goto label_2e93a8;
        case 0x2e93acu: goto label_2e93ac;
        case 0x2e93b0u: goto label_2e93b0;
        case 0x2e93b4u: goto label_2e93b4;
        case 0x2e93b8u: goto label_2e93b8;
        case 0x2e93bcu: goto label_2e93bc;
        case 0x2e93c0u: goto label_2e93c0;
        case 0x2e93c4u: goto label_2e93c4;
        case 0x2e93c8u: goto label_2e93c8;
        case 0x2e93ccu: goto label_2e93cc;
        case 0x2e93d0u: goto label_2e93d0;
        case 0x2e93d4u: goto label_2e93d4;
        case 0x2e93d8u: goto label_2e93d8;
        case 0x2e93dcu: goto label_2e93dc;
        case 0x2e93e0u: goto label_2e93e0;
        case 0x2e93e4u: goto label_2e93e4;
        case 0x2e93e8u: goto label_2e93e8;
        case 0x2e93ecu: goto label_2e93ec;
        case 0x2e93f0u: goto label_2e93f0;
        case 0x2e93f4u: goto label_2e93f4;
        case 0x2e93f8u: goto label_2e93f8;
        case 0x2e93fcu: goto label_2e93fc;
        case 0x2e9400u: goto label_2e9400;
        case 0x2e9404u: goto label_2e9404;
        case 0x2e9408u: goto label_2e9408;
        case 0x2e940cu: goto label_2e940c;
        case 0x2e9410u: goto label_2e9410;
        case 0x2e9414u: goto label_2e9414;
        case 0x2e9418u: goto label_2e9418;
        case 0x2e941cu: goto label_2e941c;
        case 0x2e9420u: goto label_2e9420;
        case 0x2e9424u: goto label_2e9424;
        case 0x2e9428u: goto label_2e9428;
        case 0x2e942cu: goto label_2e942c;
        case 0x2e9430u: goto label_2e9430;
        case 0x2e9434u: goto label_2e9434;
        case 0x2e9438u: goto label_2e9438;
        case 0x2e943cu: goto label_2e943c;
        case 0x2e9440u: goto label_2e9440;
        case 0x2e9444u: goto label_2e9444;
        case 0x2e9448u: goto label_2e9448;
        case 0x2e944cu: goto label_2e944c;
        case 0x2e9450u: goto label_2e9450;
        case 0x2e9454u: goto label_2e9454;
        case 0x2e9458u: goto label_2e9458;
        case 0x2e945cu: goto label_2e945c;
        case 0x2e9460u: goto label_2e9460;
        case 0x2e9464u: goto label_2e9464;
        case 0x2e9468u: goto label_2e9468;
        case 0x2e946cu: goto label_2e946c;
        case 0x2e9470u: goto label_2e9470;
        case 0x2e9474u: goto label_2e9474;
        case 0x2e9478u: goto label_2e9478;
        case 0x2e947cu: goto label_2e947c;
        case 0x2e9480u: goto label_2e9480;
        case 0x2e9484u: goto label_2e9484;
        case 0x2e9488u: goto label_2e9488;
        case 0x2e948cu: goto label_2e948c;
        case 0x2e9490u: goto label_2e9490;
        case 0x2e9494u: goto label_2e9494;
        case 0x2e9498u: goto label_2e9498;
        case 0x2e949cu: goto label_2e949c;
        case 0x2e94a0u: goto label_2e94a0;
        case 0x2e94a4u: goto label_2e94a4;
        case 0x2e94a8u: goto label_2e94a8;
        case 0x2e94acu: goto label_2e94ac;
        case 0x2e94b0u: goto label_2e94b0;
        case 0x2e94b4u: goto label_2e94b4;
        case 0x2e94b8u: goto label_2e94b8;
        case 0x2e94bcu: goto label_2e94bc;
        case 0x2e94c0u: goto label_2e94c0;
        case 0x2e94c4u: goto label_2e94c4;
        case 0x2e94c8u: goto label_2e94c8;
        case 0x2e94ccu: goto label_2e94cc;
        case 0x2e94d0u: goto label_2e94d0;
        case 0x2e94d4u: goto label_2e94d4;
        case 0x2e94d8u: goto label_2e94d8;
        case 0x2e94dcu: goto label_2e94dc;
        case 0x2e94e0u: goto label_2e94e0;
        case 0x2e94e4u: goto label_2e94e4;
        case 0x2e94e8u: goto label_2e94e8;
        case 0x2e94ecu: goto label_2e94ec;
        case 0x2e94f0u: goto label_2e94f0;
        case 0x2e94f4u: goto label_2e94f4;
        case 0x2e94f8u: goto label_2e94f8;
        case 0x2e94fcu: goto label_2e94fc;
        case 0x2e9500u: goto label_2e9500;
        case 0x2e9504u: goto label_2e9504;
        case 0x2e9508u: goto label_2e9508;
        case 0x2e950cu: goto label_2e950c;
        case 0x2e9510u: goto label_2e9510;
        case 0x2e9514u: goto label_2e9514;
        case 0x2e9518u: goto label_2e9518;
        case 0x2e951cu: goto label_2e951c;
        case 0x2e9520u: goto label_2e9520;
        case 0x2e9524u: goto label_2e9524;
        case 0x2e9528u: goto label_2e9528;
        case 0x2e952cu: goto label_2e952c;
        case 0x2e9530u: goto label_2e9530;
        case 0x2e9534u: goto label_2e9534;
        case 0x2e9538u: goto label_2e9538;
        case 0x2e953cu: goto label_2e953c;
        case 0x2e9540u: goto label_2e9540;
        case 0x2e9544u: goto label_2e9544;
        case 0x2e9548u: goto label_2e9548;
        case 0x2e954cu: goto label_2e954c;
        case 0x2e9550u: goto label_2e9550;
        case 0x2e9554u: goto label_2e9554;
        case 0x2e9558u: goto label_2e9558;
        case 0x2e955cu: goto label_2e955c;
        case 0x2e9560u: goto label_2e9560;
        case 0x2e9564u: goto label_2e9564;
        case 0x2e9568u: goto label_2e9568;
        case 0x2e956cu: goto label_2e956c;
        case 0x2e9570u: goto label_2e9570;
        case 0x2e9574u: goto label_2e9574;
        case 0x2e9578u: goto label_2e9578;
        case 0x2e957cu: goto label_2e957c;
        case 0x2e9580u: goto label_2e9580;
        case 0x2e9584u: goto label_2e9584;
        case 0x2e9588u: goto label_2e9588;
        case 0x2e958cu: goto label_2e958c;
        case 0x2e9590u: goto label_2e9590;
        case 0x2e9594u: goto label_2e9594;
        case 0x2e9598u: goto label_2e9598;
        case 0x2e959cu: goto label_2e959c;
        case 0x2e95a0u: goto label_2e95a0;
        case 0x2e95a4u: goto label_2e95a4;
        case 0x2e95a8u: goto label_2e95a8;
        case 0x2e95acu: goto label_2e95ac;
        case 0x2e95b0u: goto label_2e95b0;
        case 0x2e95b4u: goto label_2e95b4;
        case 0x2e95b8u: goto label_2e95b8;
        case 0x2e95bcu: goto label_2e95bc;
        case 0x2e95c0u: goto label_2e95c0;
        case 0x2e95c4u: goto label_2e95c4;
        case 0x2e95c8u: goto label_2e95c8;
        case 0x2e95ccu: goto label_2e95cc;
        case 0x2e95d0u: goto label_2e95d0;
        case 0x2e95d4u: goto label_2e95d4;
        case 0x2e95d8u: goto label_2e95d8;
        case 0x2e95dcu: goto label_2e95dc;
        case 0x2e95e0u: goto label_2e95e0;
        case 0x2e95e4u: goto label_2e95e4;
        case 0x2e95e8u: goto label_2e95e8;
        case 0x2e95ecu: goto label_2e95ec;
        case 0x2e95f0u: goto label_2e95f0;
        case 0x2e95f4u: goto label_2e95f4;
        case 0x2e95f8u: goto label_2e95f8;
        case 0x2e95fcu: goto label_2e95fc;
        case 0x2e9600u: goto label_2e9600;
        case 0x2e9604u: goto label_2e9604;
        case 0x2e9608u: goto label_2e9608;
        case 0x2e960cu: goto label_2e960c;
        case 0x2e9610u: goto label_2e9610;
        case 0x2e9614u: goto label_2e9614;
        case 0x2e9618u: goto label_2e9618;
        case 0x2e961cu: goto label_2e961c;
        case 0x2e9620u: goto label_2e9620;
        case 0x2e9624u: goto label_2e9624;
        case 0x2e9628u: goto label_2e9628;
        case 0x2e962cu: goto label_2e962c;
        case 0x2e9630u: goto label_2e9630;
        case 0x2e9634u: goto label_2e9634;
        case 0x2e9638u: goto label_2e9638;
        case 0x2e963cu: goto label_2e963c;
        case 0x2e9640u: goto label_2e9640;
        case 0x2e9644u: goto label_2e9644;
        case 0x2e9648u: goto label_2e9648;
        case 0x2e964cu: goto label_2e964c;
        case 0x2e9650u: goto label_2e9650;
        case 0x2e9654u: goto label_2e9654;
        case 0x2e9658u: goto label_2e9658;
        case 0x2e965cu: goto label_2e965c;
        case 0x2e9660u: goto label_2e9660;
        case 0x2e9664u: goto label_2e9664;
        case 0x2e9668u: goto label_2e9668;
        case 0x2e966cu: goto label_2e966c;
        case 0x2e9670u: goto label_2e9670;
        case 0x2e9674u: goto label_2e9674;
        case 0x2e9678u: goto label_2e9678;
        case 0x2e967cu: goto label_2e967c;
        case 0x2e9680u: goto label_2e9680;
        case 0x2e9684u: goto label_2e9684;
        case 0x2e9688u: goto label_2e9688;
        case 0x2e968cu: goto label_2e968c;
        case 0x2e9690u: goto label_2e9690;
        case 0x2e9694u: goto label_2e9694;
        case 0x2e9698u: goto label_2e9698;
        case 0x2e969cu: goto label_2e969c;
        case 0x2e96a0u: goto label_2e96a0;
        case 0x2e96a4u: goto label_2e96a4;
        case 0x2e96a8u: goto label_2e96a8;
        case 0x2e96acu: goto label_2e96ac;
        case 0x2e96b0u: goto label_2e96b0;
        case 0x2e96b4u: goto label_2e96b4;
        case 0x2e96b8u: goto label_2e96b8;
        case 0x2e96bcu: goto label_2e96bc;
        case 0x2e96c0u: goto label_2e96c0;
        case 0x2e96c4u: goto label_2e96c4;
        case 0x2e96c8u: goto label_2e96c8;
        case 0x2e96ccu: goto label_2e96cc;
        case 0x2e96d0u: goto label_2e96d0;
        case 0x2e96d4u: goto label_2e96d4;
        case 0x2e96d8u: goto label_2e96d8;
        case 0x2e96dcu: goto label_2e96dc;
        case 0x2e96e0u: goto label_2e96e0;
        case 0x2e96e4u: goto label_2e96e4;
        case 0x2e96e8u: goto label_2e96e8;
        case 0x2e96ecu: goto label_2e96ec;
        case 0x2e96f0u: goto label_2e96f0;
        case 0x2e96f4u: goto label_2e96f4;
        case 0x2e96f8u: goto label_2e96f8;
        case 0x2e96fcu: goto label_2e96fc;
        case 0x2e9700u: goto label_2e9700;
        case 0x2e9704u: goto label_2e9704;
        case 0x2e9708u: goto label_2e9708;
        case 0x2e970cu: goto label_2e970c;
        case 0x2e9710u: goto label_2e9710;
        case 0x2e9714u: goto label_2e9714;
        case 0x2e9718u: goto label_2e9718;
        case 0x2e971cu: goto label_2e971c;
        case 0x2e9720u: goto label_2e9720;
        case 0x2e9724u: goto label_2e9724;
        case 0x2e9728u: goto label_2e9728;
        case 0x2e972cu: goto label_2e972c;
        case 0x2e9730u: goto label_2e9730;
        case 0x2e9734u: goto label_2e9734;
        case 0x2e9738u: goto label_2e9738;
        case 0x2e973cu: goto label_2e973c;
        case 0x2e9740u: goto label_2e9740;
        case 0x2e9744u: goto label_2e9744;
        case 0x2e9748u: goto label_2e9748;
        case 0x2e974cu: goto label_2e974c;
        case 0x2e9750u: goto label_2e9750;
        case 0x2e9754u: goto label_2e9754;
        case 0x2e9758u: goto label_2e9758;
        case 0x2e975cu: goto label_2e975c;
        case 0x2e9760u: goto label_2e9760;
        case 0x2e9764u: goto label_2e9764;
        case 0x2e9768u: goto label_2e9768;
        case 0x2e976cu: goto label_2e976c;
        case 0x2e9770u: goto label_2e9770;
        case 0x2e9774u: goto label_2e9774;
        case 0x2e9778u: goto label_2e9778;
        case 0x2e977cu: goto label_2e977c;
        case 0x2e9780u: goto label_2e9780;
        case 0x2e9784u: goto label_2e9784;
        case 0x2e9788u: goto label_2e9788;
        case 0x2e978cu: goto label_2e978c;
        case 0x2e9790u: goto label_2e9790;
        case 0x2e9794u: goto label_2e9794;
        case 0x2e9798u: goto label_2e9798;
        case 0x2e979cu: goto label_2e979c;
        case 0x2e97a0u: goto label_2e97a0;
        case 0x2e97a4u: goto label_2e97a4;
        case 0x2e97a8u: goto label_2e97a8;
        case 0x2e97acu: goto label_2e97ac;
        case 0x2e97b0u: goto label_2e97b0;
        case 0x2e97b4u: goto label_2e97b4;
        case 0x2e97b8u: goto label_2e97b8;
        case 0x2e97bcu: goto label_2e97bc;
        case 0x2e97c0u: goto label_2e97c0;
        case 0x2e97c4u: goto label_2e97c4;
        case 0x2e97c8u: goto label_2e97c8;
        case 0x2e97ccu: goto label_2e97cc;
        case 0x2e97d0u: goto label_2e97d0;
        case 0x2e97d4u: goto label_2e97d4;
        case 0x2e97d8u: goto label_2e97d8;
        case 0x2e97dcu: goto label_2e97dc;
        case 0x2e97e0u: goto label_2e97e0;
        case 0x2e97e4u: goto label_2e97e4;
        case 0x2e97e8u: goto label_2e97e8;
        case 0x2e97ecu: goto label_2e97ec;
        case 0x2e97f0u: goto label_2e97f0;
        case 0x2e97f4u: goto label_2e97f4;
        case 0x2e97f8u: goto label_2e97f8;
        case 0x2e97fcu: goto label_2e97fc;
        case 0x2e9800u: goto label_2e9800;
        case 0x2e9804u: goto label_2e9804;
        case 0x2e9808u: goto label_2e9808;
        case 0x2e980cu: goto label_2e980c;
        case 0x2e9810u: goto label_2e9810;
        case 0x2e9814u: goto label_2e9814;
        case 0x2e9818u: goto label_2e9818;
        case 0x2e981cu: goto label_2e981c;
        case 0x2e9820u: goto label_2e9820;
        case 0x2e9824u: goto label_2e9824;
        case 0x2e9828u: goto label_2e9828;
        case 0x2e982cu: goto label_2e982c;
        case 0x2e9830u: goto label_2e9830;
        case 0x2e9834u: goto label_2e9834;
        case 0x2e9838u: goto label_2e9838;
        case 0x2e983cu: goto label_2e983c;
        case 0x2e9840u: goto label_2e9840;
        case 0x2e9844u: goto label_2e9844;
        case 0x2e9848u: goto label_2e9848;
        case 0x2e984cu: goto label_2e984c;
        case 0x2e9850u: goto label_2e9850;
        case 0x2e9854u: goto label_2e9854;
        case 0x2e9858u: goto label_2e9858;
        case 0x2e985cu: goto label_2e985c;
        case 0x2e9860u: goto label_2e9860;
        case 0x2e9864u: goto label_2e9864;
        case 0x2e9868u: goto label_2e9868;
        case 0x2e986cu: goto label_2e986c;
        case 0x2e9870u: goto label_2e9870;
        case 0x2e9874u: goto label_2e9874;
        case 0x2e9878u: goto label_2e9878;
        case 0x2e987cu: goto label_2e987c;
        case 0x2e9880u: goto label_2e9880;
        case 0x2e9884u: goto label_2e9884;
        case 0x2e9888u: goto label_2e9888;
        case 0x2e988cu: goto label_2e988c;
        case 0x2e9890u: goto label_2e9890;
        case 0x2e9894u: goto label_2e9894;
        case 0x2e9898u: goto label_2e9898;
        case 0x2e989cu: goto label_2e989c;
        case 0x2e98a0u: goto label_2e98a0;
        case 0x2e98a4u: goto label_2e98a4;
        case 0x2e98a8u: goto label_2e98a8;
        case 0x2e98acu: goto label_2e98ac;
        case 0x2e98b0u: goto label_2e98b0;
        case 0x2e98b4u: goto label_2e98b4;
        case 0x2e98b8u: goto label_2e98b8;
        case 0x2e98bcu: goto label_2e98bc;
        case 0x2e98c0u: goto label_2e98c0;
        case 0x2e98c4u: goto label_2e98c4;
        case 0x2e98c8u: goto label_2e98c8;
        case 0x2e98ccu: goto label_2e98cc;
        case 0x2e98d0u: goto label_2e98d0;
        case 0x2e98d4u: goto label_2e98d4;
        case 0x2e98d8u: goto label_2e98d8;
        case 0x2e98dcu: goto label_2e98dc;
        case 0x2e98e0u: goto label_2e98e0;
        case 0x2e98e4u: goto label_2e98e4;
        case 0x2e98e8u: goto label_2e98e8;
        case 0x2e98ecu: goto label_2e98ec;
        case 0x2e98f0u: goto label_2e98f0;
        case 0x2e98f4u: goto label_2e98f4;
        case 0x2e98f8u: goto label_2e98f8;
        case 0x2e98fcu: goto label_2e98fc;
        case 0x2e9900u: goto label_2e9900;
        case 0x2e9904u: goto label_2e9904;
        case 0x2e9908u: goto label_2e9908;
        case 0x2e990cu: goto label_2e990c;
        case 0x2e9910u: goto label_2e9910;
        case 0x2e9914u: goto label_2e9914;
        case 0x2e9918u: goto label_2e9918;
        case 0x2e991cu: goto label_2e991c;
        case 0x2e9920u: goto label_2e9920;
        case 0x2e9924u: goto label_2e9924;
        case 0x2e9928u: goto label_2e9928;
        case 0x2e992cu: goto label_2e992c;
        case 0x2e9930u: goto label_2e9930;
        case 0x2e9934u: goto label_2e9934;
        case 0x2e9938u: goto label_2e9938;
        case 0x2e993cu: goto label_2e993c;
        case 0x2e9940u: goto label_2e9940;
        case 0x2e9944u: goto label_2e9944;
        case 0x2e9948u: goto label_2e9948;
        case 0x2e994cu: goto label_2e994c;
        case 0x2e9950u: goto label_2e9950;
        case 0x2e9954u: goto label_2e9954;
        case 0x2e9958u: goto label_2e9958;
        case 0x2e995cu: goto label_2e995c;
        case 0x2e9960u: goto label_2e9960;
        case 0x2e9964u: goto label_2e9964;
        case 0x2e9968u: goto label_2e9968;
        case 0x2e996cu: goto label_2e996c;
        case 0x2e9970u: goto label_2e9970;
        case 0x2e9974u: goto label_2e9974;
        case 0x2e9978u: goto label_2e9978;
        case 0x2e997cu: goto label_2e997c;
        default: break;
    }

    ctx->pc = 0x2e9120u;

label_2e9120:
    // 0x2e9120: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2e9120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_2e9124:
    // 0x2e9124: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e9124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2e9128:
    // 0x2e9128: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2e9128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2e912c:
    // 0x2e912c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2e912cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2e9130:
    // 0x2e9130: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e9130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2e9134:
    // 0x2e9134: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e9134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2e9138:
    // 0x2e9138: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2e9138u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e913c:
    // 0x2e913c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e913cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2e9140:
    // 0x2e9140: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e9140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2e9144:
    // 0x2e9144: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e9144u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e9148:
    // 0x2e9148: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e9148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2e914c:
    // 0x2e914c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e914cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e9150:
    // 0x2e9150: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e9150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e9154:
    // 0x2e9154: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e9154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e9158:
    // 0x2e9158: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x2e9158u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2e915c:
    // 0x2e915c: 0x150001d1  bnez        $t0, . + 4 + (0x1D1 << 2)
label_2e9160:
    if (ctx->pc == 0x2E9160u) {
        ctx->pc = 0x2E9164u;
        goto label_2e9164;
    }
    ctx->pc = 0x2E915Cu;
    {
        const bool branch_taken_0x2e915c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e915c) {
            ctx->pc = 0x2E98A4u;
            goto label_2e98a4;
        }
    }
    ctx->pc = 0x2E9164u;
label_2e9164:
    // 0x2e9164: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e9164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e9168:
    // 0x2e9168: 0xc0ba82c  jal         func_2EA0B0
label_2e916c:
    if (ctx->pc == 0x2E916Cu) {
        ctx->pc = 0x2E916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9168u;
        // 0x2e916c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9170u;
        goto label_2e9170;
    }
    ctx->pc = 0x2E9168u;
    SET_GPR_U32(ctx, 31, 0x2E9170u);
    ctx->pc = 0x2E916Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9168u;
    // 0x2e916c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA0B0u, 0x2E9168u, 0x2E9170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9170u;
label_2e9170:
    // 0x2e9170: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e9170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e9174:
    // 0x2e9174: 0xc0ba72c  jal         func_2E9CB0
label_2e9178:
    if (ctx->pc == 0x2E9178u) {
        ctx->pc = 0x2E9178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9174u;
        // 0x2e9178: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E917Cu;
        goto label_2e917c;
    }
    ctx->pc = 0x2E9174u;
    SET_GPR_U32(ctx, 31, 0x2E917Cu);
    ctx->pc = 0x2E9178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9174u;
    // 0x2e9178: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9CB0u, 0x2E9174u, 0x2E917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E917Cu;
label_2e917c:
    // 0x2e917c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2e917cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2e9180:
    // 0x2e9180: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e9184:
    if (ctx->pc == 0x2E9184u) {
        ctx->pc = 0x2E9188u;
        goto label_2e9188;
    }
    ctx->pc = 0x2E9180u;
    {
        const bool branch_taken_0x2e9180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9180) {
            ctx->pc = 0x2E9190u;
            goto label_2e9190;
        }
    }
    ctx->pc = 0x2E9188u;
label_2e9188:
    // 0x2e9188: 0xc0ba1a0  jal         func_2E8680
label_2e918c:
    if (ctx->pc == 0x2E918Cu) {
        ctx->pc = 0x2E9190u;
        goto label_2e9190;
    }
    ctx->pc = 0x2E9188u;
    SET_GPR_U32(ctx, 31, 0x2E9190u);
    ctx->pc = 0x2E8680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8680u, 0x2E9188u, 0x2E9190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9190u;
label_2e9190:
    // 0x2e9190: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e9190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e9194:
    // 0x2e9194: 0xc0ba7fc  jal         func_2E9FF0
label_2e9198:
    if (ctx->pc == 0x2E9198u) {
        ctx->pc = 0x2E9198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9194u;
        // 0x2e9198: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E919Cu;
        goto label_2e919c;
    }
    ctx->pc = 0x2E9194u;
    SET_GPR_U32(ctx, 31, 0x2E919Cu);
    ctx->pc = 0x2E9198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9194u;
    // 0x2e9198: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9FF0u, 0x2E9194u, 0x2E919Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E919Cu;
label_2e919c:
    // 0x2e919c: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x2e919cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2e91a0:
    // 0x2e91a0: 0x8182b  sltu        $v1, $zero, $t0
    ctx->pc = 0x2e91a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_2e91a4:
    // 0x2e91a4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2e91a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2e91a8:
    // 0x2e91a8: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_2e91ac:
    if (ctx->pc == 0x2E91ACu) {
        ctx->pc = 0x2E91B0u;
        goto label_2e91b0;
    }
    ctx->pc = 0x2E91A8u;
    {
        const bool branch_taken_0x2e91a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e91a8) {
            ctx->pc = 0x2E9158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9158;
        }
    }
    ctx->pc = 0x2E91B0u;
label_2e91b0:
    // 0x2e91b0: 0x100001bd  b           . + 4 + (0x1BD << 2)
label_2e91b4:
    if (ctx->pc == 0x2E91B4u) {
        ctx->pc = 0x2E91B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91B0u;
        // 0x2e91b4: 0x91100000  lbu         $s0, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E91B8u;
        goto label_2e91b8;
    }
    ctx->pc = 0x2E91B0u;
    {
        const bool branch_taken_0x2e91b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E91B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91B0u;
        // 0x2e91b4: 0x91100000  lbu         $s0, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e91b0) {
            ctx->pc = 0x2E98A8u;
            goto label_2e98a8;
        }
    }
    ctx->pc = 0x2E91B8u;
label_2e91b8:
    // 0x2e91b8: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2e91b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2e91bc:
    // 0x2e91bc: 0xc0ba1f0  jal         func_2E87C0
label_2e91c0:
    if (ctx->pc == 0x2E91C0u) {
        ctx->pc = 0x2E91C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91BCu;
        // 0x2e91c0: 0x27a5012c  addiu       $a1, $sp, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E91C4u;
        goto label_2e91c4;
    }
    ctx->pc = 0x2E91BCu;
    SET_GPR_U32(ctx, 31, 0x2E91C4u);
    ctx->pc = 0x2E91C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E91BCu;
    // 0x2e91c0: 0x27a5012c  addiu       $a1, $sp, 0x12C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E91BCu, 0x2E91C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E91C4u;
label_2e91c4:
    // 0x2e91c4: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x2e91c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2e91c8:
    // 0x2e91c8: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x2e91c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_2e91cc:
    // 0x2e91cc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2e91ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2e91d0:
    // 0x2e91d0: 0x100001af  b           . + 4 + (0x1AF << 2)
label_2e91d4:
    if (ctx->pc == 0x2E91D4u) {
        ctx->pc = 0x2E91D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91D0u;
        // 0x2e91d4: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E91D8u;
        goto label_2e91d8;
    }
    ctx->pc = 0x2E91D0u;
    {
        const bool branch_taken_0x2e91d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E91D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91D0u;
        // 0x2e91d4: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e91d0) {
            ctx->pc = 0x2E9890u;
            goto label_2e9890;
        }
    }
    ctx->pc = 0x2E91D8u;
label_2e91d8:
    // 0x2e91d8: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2e91d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2e91dc:
    // 0x2e91dc: 0xc0ba1f0  jal         func_2E87C0
label_2e91e0:
    if (ctx->pc == 0x2E91E0u) {
        ctx->pc = 0x2E91E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91DCu;
        // 0x2e91e0: 0x27a50128  addiu       $a1, $sp, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E91E4u;
        goto label_2e91e4;
    }
    ctx->pc = 0x2E91DCu;
    SET_GPR_U32(ctx, 31, 0x2E91E4u);
    ctx->pc = 0x2E91E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E91DCu;
    // 0x2e91e0: 0x27a50128  addiu       $a1, $sp, 0x128 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E91DCu, 0x2E91E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E91E4u;
label_2e91e4:
    // 0x2e91e4: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x2e91e4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2e91e8:
    // 0x2e91e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e91e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e91ec:
    // 0x2e91ec: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x2e91ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_2e91f0:
    // 0x2e91f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e91f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e91f4:
    // 0x2e91f4: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x2e91f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2e91f8:
    // 0x2e91f8: 0x8e880018  lw          $t0, 0x18($s4)
    ctx->pc = 0x2e91f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_2e91fc:
    // 0x2e91fc: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2e91fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_2e9200:
    // 0x2e9200: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x2e9200u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_2e9204:
    // 0x2e9204: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2e9204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2e9208:
    // 0x2e9208: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x2e9208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_2e920c:
    // 0x2e920c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2e920cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_2e9210:
    // 0x2e9210: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2e9210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_2e9214:
    // 0x2e9214: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2e9214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_2e9218:
    // 0x2e9218: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e9218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2e921c:
    // 0x2e921c: 0x40f809  jalr        $v0
label_2e9220:
    if (ctx->pc == 0x2E9220u) {
        ctx->pc = 0x2E9220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E921Cu;
        // 0x2e9220: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9224u;
        goto label_2e9224;
    }
    ctx->pc = 0x2E921Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E9224u);
        ctx->pc = 0x2E9220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E921Cu;
        // 0x2e9220: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E921Cu, 0x2E9224u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E9224u;
label_2e9224:
    // 0x2e9224: 0x26230004  addiu       $v1, $s1, 0x4
    ctx->pc = 0x2e9224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2e9228:
    // 0x2e9228: 0x10000199  b           . + 4 + (0x199 << 2)
label_2e922c:
    if (ctx->pc == 0x2E922Cu) {
        ctx->pc = 0x2E922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9228u;
        // 0x2e922c: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9230u;
        goto label_2e9230;
    }
    ctx->pc = 0x2E9228u;
    {
        const bool branch_taken_0x2e9228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9228u;
        // 0x2e922c: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9228) {
            ctx->pc = 0x2E9890u;
            goto label_2e9890;
        }
    }
    ctx->pc = 0x2E9230u;
label_2e9230:
    // 0x2e9230: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2e9230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2e9234:
    // 0x2e9234: 0x27a50124  addiu       $a1, $sp, 0x124
    ctx->pc = 0x2e9234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_2e9238:
    // 0x2e9238: 0xc0ba1f0  jal         func_2E87C0
label_2e923c:
    if (ctx->pc == 0x2E923Cu) {
        ctx->pc = 0x2E923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9238u;
        // 0x2e923c: 0x32110040  andi        $s1, $s0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9240u;
        goto label_2e9240;
    }
    ctx->pc = 0x2E9238u;
    SET_GPR_U32(ctx, 31, 0x2E9240u);
    ctx->pc = 0x2E923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9238u;
    // 0x2e923c: 0x32110040  andi        $s1, $s0, 0x40 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E9238u, 0x2E9240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9240u;
label_2e9240:
    // 0x2e9240: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e9240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e9244:
    // 0x2e9244: 0xc0ba1f0  jal         func_2E87C0
label_2e9248:
    if (ctx->pc == 0x2E9248u) {
        ctx->pc = 0x2E9248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9244u;
        // 0x2e9248: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E924Cu;
        goto label_2e924c;
    }
    ctx->pc = 0x2E9244u;
    SET_GPR_U32(ctx, 31, 0x2E924Cu);
    ctx->pc = 0x2E9248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9244u;
    // 0x2e9248: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E9244u, 0x2E924Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E924Cu;
label_2e924c:
    // 0x2e924c: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x2e924cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2e9250:
    // 0x2e9250: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x2e9250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2e9254:
    // 0x2e9254: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x2e9254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_2e9258:
    // 0x2e9258: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x2e9258u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_2e925c:
    // 0x2e925c: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x2e925cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_2e9260:
    // 0x2e9260: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x2e9260u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2e9264:
    // 0x2e9264: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x2e9264u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_2e9268:
    // 0x2e9268: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2e9268u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_2e926c:
    // 0x2e926c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2e926cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_2e9270:
    // 0x2e9270: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2e9270u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_2e9274:
    // 0x2e9274: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2e9274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_2e9278:
    // 0x2e9278: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2e927c:
    if (ctx->pc == 0x2E927Cu) {
        ctx->pc = 0x2E927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9278u;
        // 0x2e927c: 0x64f025  or          $fp, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9280u;
        goto label_2e9280;
    }
    ctx->pc = 0x2E9278u;
    {
        const bool branch_taken_0x2e9278 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9278u;
        // 0x2e927c: 0x64f025  or          $fp, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9278) {
            ctx->pc = 0x2E929Cu;
            goto label_2e929c;
        }
    }
    ctx->pc = 0x2E9280u;
label_2e9280:
    // 0x2e9280: 0x8fa30124  lw          $v1, 0x124($sp)
    ctx->pc = 0x2e9280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_2e9284:
    // 0x2e9284: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e9284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2e9288:
    // 0x2e9288: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x2e9288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_2e928c:
    // 0x2e928c: 0x78630020  lq          $v1, 0x20($v1)
    ctx->pc = 0x2e928cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_2e9290:
    // 0x2e9290: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2e9290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_2e9294:
    // 0x2e9294: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e9298:
    if (ctx->pc == 0x2E9298u) {
        ctx->pc = 0x2E9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9294u;
        // 0x2e9298: 0x31e3f  dsra32      $v1, $v1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E929Cu;
        goto label_2e929c;
    }
    ctx->pc = 0x2E9294u;
    {
        const bool branch_taken_0x2e9294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9294u;
        // 0x2e9298: 0x31e3f  dsra32      $v1, $v1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9294) {
            ctx->pc = 0x2E92ACu;
            goto label_2e92ac;
        }
    }
    ctx->pc = 0x2E929Cu;
label_2e929c:
    // 0x2e929c: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x2e929cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_2e92a0:
    // 0x2e92a0: 0x8fa30124  lw          $v1, 0x124($sp)
    ctx->pc = 0x2e92a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_2e92a4:
    // 0x2e92a4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2e92a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2e92a8:
    // 0x2e92a8: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x2e92a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2e92ac:
    // 0x2e92ac: 0x14600189  bnez        $v1, . + 4 + (0x189 << 2)
label_2e92b0:
    if (ctx->pc == 0x2E92B0u) {
        ctx->pc = 0x2E92B4u;
        goto label_2e92b4;
    }
    ctx->pc = 0x2E92ACu;
    {
        const bool branch_taken_0x2e92ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e92ac) {
            ctx->pc = 0x2E98D4u;
            goto label_2e98d4;
        }
    }
    ctx->pc = 0x2E92B4u;
label_2e92b4:
    // 0x2e92b4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x2e92b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2e92b8:
    // 0x2e92b8: 0x10000175  b           . + 4 + (0x175 << 2)
label_2e92bc:
    if (ctx->pc == 0x2E92BCu) {
        ctx->pc = 0x2E92BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92B8u;
        // 0x2e92bc: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E92C0u;
        goto label_2e92c0;
    }
    ctx->pc = 0x2E92B8u;
    {
        const bool branch_taken_0x2e92b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E92BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92B8u;
        // 0x2e92bc: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e92b8) {
            ctx->pc = 0x2E9890u;
            goto label_2e9890;
        }
    }
    ctx->pc = 0x2E92C0u;
label_2e92c0:
    // 0x2e92c0: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2e92c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2e92c4:
    // 0x2e92c4: 0x27a5011c  addiu       $a1, $sp, 0x11C
    ctx->pc = 0x2e92c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_2e92c8:
    // 0x2e92c8: 0xc0ba1f0  jal         func_2E87C0
label_2e92cc:
    if (ctx->pc == 0x2E92CCu) {
        ctx->pc = 0x2E92CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92C8u;
        // 0x2e92cc: 0x32120020  andi        $s2, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E92D0u;
        goto label_2e92d0;
    }
    ctx->pc = 0x2E92C8u;
    SET_GPR_U32(ctx, 31, 0x2E92D0u);
    ctx->pc = 0x2E92CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E92C8u;
    // 0x2e92cc: 0x32120020  andi        $s2, $s0, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E92C8u, 0x2E92D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E92D0u;
label_2e92d0:
    // 0x2e92d0: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x2e92d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2e92d4:
    // 0x2e92d4: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x2e92d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2e92d8:
    // 0x2e92d8: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x2e92d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_2e92dc:
    // 0x2e92dc: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2e92dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2e92e0:
    // 0x2e92e0: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x2e92e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_2e92e4:
    // 0x2e92e4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2e92e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2e92e8:
    // 0x2e92e8: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x2e92e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_2e92ec:
    // 0x2e92ec: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2e92ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_2e92f0:
    // 0x2e92f0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e92f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2e92f4:
    // 0x2e92f4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2e92f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_2e92f8:
    // 0x2e92f8: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_2e92fc:
    if (ctx->pc == 0x2E92FCu) {
        ctx->pc = 0x2E92FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92F8u;
        // 0x2e92fc: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9300u;
        goto label_2e9300;
    }
    ctx->pc = 0x2E92F8u;
    {
        const bool branch_taken_0x2e92f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E92FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92F8u;
        // 0x2e92fc: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e92f8) {
            ctx->pc = 0x2E931Cu;
            goto label_2e931c;
        }
    }
    ctx->pc = 0x2E9300u;
label_2e9300:
    // 0x2e9300: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x2e9300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_2e9304:
    // 0x2e9304: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e9304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2e9308:
    // 0x2e9308: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2e9308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2e930c:
    // 0x2e930c: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x2e930cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2e9310:
    // 0x2e9310: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2e9310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_2e9314:
    // 0x2e9314: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e9318:
    if (ctx->pc == 0x2E9318u) {
        ctx->pc = 0x2E9318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9314u;
        // 0x2e9318: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E931Cu;
        goto label_2e931c;
    }
    ctx->pc = 0x2E9314u;
    {
        const bool branch_taken_0x2e9314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9314u;
        // 0x2e9318: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9314) {
            ctx->pc = 0x2E932Cu;
            goto label_2e932c;
        }
    }
    ctx->pc = 0x2E931Cu;
label_2e931c:
    // 0x2e931c: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x2e931cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_2e9320:
    // 0x2e9320: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x2e9320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_2e9324:
    // 0x2e9324: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e9324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e9328:
    // 0x2e9328: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e9328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e932c:
    // 0x2e932c: 0xc0f809  jalr        $a2
label_2e9330:
    if (ctx->pc == 0x2E9330u) {
        ctx->pc = 0x2E9330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E932Cu;
        // 0x2e9330: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9334u;
        goto label_2e9334;
    }
    ctx->pc = 0x2E932Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2E9334u);
        ctx->pc = 0x2E9330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E932Cu;
        // 0x2e9330: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E932Cu, 0x2E9334u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E9334u;
label_2e9334:
    // 0x2e9334: 0x10000156  b           . + 4 + (0x156 << 2)
label_2e9338:
    if (ctx->pc == 0x2E9338u) {
        ctx->pc = 0x2E9338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9334u;
        // 0x2e9338: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E933Cu;
        goto label_2e933c;
    }
    ctx->pc = 0x2E9334u;
    {
        const bool branch_taken_0x2e9334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9334u;
        // 0x2e9338: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9334) {
            ctx->pc = 0x2E9890u;
            goto label_2e9890;
        }
    }
    ctx->pc = 0x2E933Cu;
label_2e933c:
    // 0x2e933c: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2e933cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2e9340:
    // 0x2e9340: 0xc0ba1f0  jal         func_2E87C0
label_2e9344:
    if (ctx->pc == 0x2E9344u) {
        ctx->pc = 0x2E9344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9340u;
        // 0x2e9344: 0x27a50118  addiu       $a1, $sp, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9348u;
        goto label_2e9348;
    }
    ctx->pc = 0x2E9340u;
    SET_GPR_U32(ctx, 31, 0x2E9348u);
    ctx->pc = 0x2E9344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9340u;
    // 0x2e9344: 0x27a50118  addiu       $a1, $sp, 0x118 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E9340u, 0x2E9348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9348u;
label_2e9348:
    // 0x2e9348: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e9348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e934c:
    // 0x2e934c: 0xc0ba1c8  jal         func_2E8720
label_2e9350:
    if (ctx->pc == 0x2E9350u) {
        ctx->pc = 0x2E9350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E934Cu;
        // 0x2e9350: 0x27a50114  addiu       $a1, $sp, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9354u;
        goto label_2e9354;
    }
    ctx->pc = 0x2E934Cu;
    SET_GPR_U32(ctx, 31, 0x2E9354u);
    ctx->pc = 0x2E9350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E934Cu;
    // 0x2e9350: 0x27a50114  addiu       $a1, $sp, 0x114 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2E934Cu, 0x2E9354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9354u;
label_2e9354:
    // 0x2e9354: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e9354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e9358:
    // 0x2e9358: 0xc0ba1c8  jal         func_2E8720
label_2e935c:
    if (ctx->pc == 0x2E935Cu) {
        ctx->pc = 0x2E935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9358u;
        // 0x2e935c: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9360u;
        goto label_2e9360;
    }
    ctx->pc = 0x2E9358u;
    SET_GPR_U32(ctx, 31, 0x2E9360u);
    ctx->pc = 0x2E935Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9358u;
    // 0x2e935c: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2E9358u, 0x2E9360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9360u;
label_2e9360:
    // 0x2e9360: 0x90480001  lbu         $t0, 0x1($v0)
    ctx->pc = 0x2e9360u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2e9364:
    // 0x2e9364: 0x24570004  addiu       $s7, $v0, 0x4
    ctx->pc = 0x2e9364u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2e9368:
    // 0x2e9368: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2e9368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2e936c:
    // 0x2e936c: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x2e936cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_2e9370:
    // 0x2e9370: 0x90460003  lbu         $a2, 0x3($v0)
    ctx->pc = 0x2e9370u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_2e9374:
    // 0x2e9374: 0x8fb20114  lw          $s2, 0x114($sp)
    ctx->pc = 0x2e9374u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_2e9378:
    // 0x2e9378: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x2e9378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_2e937c:
    // 0x2e937c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x2e937cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_2e9380:
    // 0x2e9380: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2e9380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2e9384:
    // 0x2e9384: 0x684025  or          $t0, $v1, $t0
    ctx->pc = 0x2e9384u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
label_2e9388:
    // 0x2e9388: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x2e9388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_2e938c:
    // 0x2e938c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2e938cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_2e9390:
    // 0x2e9390: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x2e9390u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_2e9394:
    // 0x2e9394: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x2e9394u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_2e9398:
    // 0x2e9398: 0xc7a825  or          $s5, $a2, $a3
    ctx->pc = 0x2e9398u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_2e939c:
    // 0x2e939c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2e939cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2e93a0:
    // 0x2e93a0: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x2e93a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2e93a4:
    // 0x2e93a4: 0x16400152  bnez        $s2, . + 4 + (0x152 << 2)
label_2e93a8:
    if (ctx->pc == 0x2E93A8u) {
        ctx->pc = 0x2E93A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93A4u;
        // 0x2e93a8: 0x838821  addu        $s1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E93ACu;
        goto label_2e93ac;
    }
    ctx->pc = 0x2E93A4u;
    {
        const bool branch_taken_0x2e93a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E93A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93A4u;
        // 0x2e93a8: 0x838821  addu        $s1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e93a4) {
            ctx->pc = 0x2E98F0u;
            goto label_2e98f0;
        }
    }
    ctx->pc = 0x2E93ACu;
label_2e93ac:
    // 0x2e93ac: 0x10000138  b           . + 4 + (0x138 << 2)
label_2e93b0:
    if (ctx->pc == 0x2E93B0u) {
        ctx->pc = 0x2E93B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93ACu;
        // 0x2e93b0: 0xae770008  sw          $s7, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E93B4u;
        goto label_2e93b4;
    }
    ctx->pc = 0x2E93ACu;
    {
        const bool branch_taken_0x2e93ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E93B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93ACu;
        // 0x2e93b0: 0xae770008  sw          $s7, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e93ac) {
            ctx->pc = 0x2E9890u;
            goto label_2e9890;
        }
    }
    ctx->pc = 0x2E93B4u;
label_2e93b4:
    // 0x2e93b4: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2e93b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2e93b8:
    // 0x2e93b8: 0x27a5010c  addiu       $a1, $sp, 0x10C
    ctx->pc = 0x2e93b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_2e93bc:
    // 0x2e93bc: 0xc0ba1f0  jal         func_2E87C0
label_2e93c0:
    if (ctx->pc == 0x2E93C0u) {
        ctx->pc = 0x2E93C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93BCu;
        // 0x2e93c0: 0x32120020  andi        $s2, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E93C4u;
        goto label_2e93c4;
    }
    ctx->pc = 0x2E93BCu;
    SET_GPR_U32(ctx, 31, 0x2E93C4u);
    ctx->pc = 0x2E93C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E93BCu;
    // 0x2e93c0: 0x32120020  andi        $s2, $s0, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E93BCu, 0x2E93C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E93C4u;
label_2e93c4:
    // 0x2e93c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e93c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e93c8:
    // 0x2e93c8: 0xc0ba1f0  jal         func_2E87C0
label_2e93cc:
    if (ctx->pc == 0x2E93CCu) {
        ctx->pc = 0x2E93CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93C8u;
        // 0x2e93cc: 0x27a50108  addiu       $a1, $sp, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E93D0u;
        goto label_2e93d0;
    }
    ctx->pc = 0x2E93C8u;
    SET_GPR_U32(ctx, 31, 0x2E93D0u);
    ctx->pc = 0x2E93CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E93C8u;
    // 0x2e93cc: 0x27a50108  addiu       $a1, $sp, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E93C8u, 0x2E93D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E93D0u;
label_2e93d0:
    // 0x2e93d0: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x2e93d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2e93d4:
    // 0x2e93d4: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x2e93d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2e93d8:
    // 0x2e93d8: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x2e93d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_2e93dc:
    // 0x2e93dc: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2e93dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2e93e0:
    // 0x2e93e0: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x2e93e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_2e93e4:
    // 0x2e93e4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2e93e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2e93e8:
    // 0x2e93e8: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x2e93e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_2e93ec:
    // 0x2e93ec: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2e93ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_2e93f0:
    // 0x2e93f0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e93f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2e93f4:
    // 0x2e93f4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2e93f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_2e93f8:
    // 0x2e93f8: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_2e93fc:
    if (ctx->pc == 0x2E93FCu) {
        ctx->pc = 0x2E93FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93F8u;
        // 0x2e93fc: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9400u;
        goto label_2e9400;
    }
    ctx->pc = 0x2E93F8u;
    {
        const bool branch_taken_0x2e93f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E93FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93F8u;
        // 0x2e93fc: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e93f8) {
            ctx->pc = 0x2E941Cu;
            goto label_2e941c;
        }
    }
    ctx->pc = 0x2E9400u;
label_2e9400:
    // 0x2e9400: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x2e9400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_2e9404:
    // 0x2e9404: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e9404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2e9408:
    // 0x2e9408: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2e9408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2e940c:
    // 0x2e940c: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x2e940cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2e9410:
    // 0x2e9410: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e9410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2e9414:
    // 0x2e9414: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e9418:
    if (ctx->pc == 0x2E9418u) {
        ctx->pc = 0x2E9418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9414u;
        // 0x2e9418: 0x3183f  dsra32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E941Cu;
        goto label_2e941c;
    }
    ctx->pc = 0x2E9414u;
    {
        const bool branch_taken_0x2e9414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9414u;
        // 0x2e9418: 0x3183f  dsra32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9414) {
            ctx->pc = 0x2E942Cu;
            goto label_2e942c;
        }
    }
    ctx->pc = 0x2E941Cu;
label_2e941c:
    // 0x2e941c: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x2e941cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_2e9420:
    // 0x2e9420: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x2e9420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
label_2e9424:
    // 0x2e9424: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e9424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e9428:
    // 0x2e9428: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e9428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e942c:
    // 0x2e942c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2e942cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_2e9430:
    // 0x2e9430: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e9430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9434:
    // 0x2e9434: 0xc0f809  jalr        $a2
label_2e9438:
    if (ctx->pc == 0x2E9438u) {
        ctx->pc = 0x2E9438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9434u;
        // 0x2e9438: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E943Cu;
        goto label_2e943c;
    }
    ctx->pc = 0x2E9434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2E943Cu);
        ctx->pc = 0x2E9438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9434u;
        // 0x2e9438: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9434u, 0x2E943Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E943Cu;
label_2e943c:
    // 0x2e943c: 0x10000114  b           . + 4 + (0x114 << 2)
label_2e9440:
    if (ctx->pc == 0x2E9440u) {
        ctx->pc = 0x2E9440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E943Cu;
        // 0x2e9440: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9444u;
        goto label_2e9444;
    }
    ctx->pc = 0x2E943Cu;
    {
        const bool branch_taken_0x2e943c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E943Cu;
        // 0x2e9440: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e943c) {
            ctx->pc = 0x2E9890u;
            goto label_2e9890;
        }
    }
    ctx->pc = 0x2E9444u;
label_2e9444:
    // 0x2e9444: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2e9444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2e9448:
    // 0x2e9448: 0x27a50104  addiu       $a1, $sp, 0x104
    ctx->pc = 0x2e9448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
label_2e944c:
    // 0x2e944c: 0xc0ba1f0  jal         func_2E87C0
label_2e9450:
    if (ctx->pc == 0x2E9450u) {
        ctx->pc = 0x2E9450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E944Cu;
        // 0x2e9450: 0x32120020  andi        $s2, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9454u;
        goto label_2e9454;
    }
    ctx->pc = 0x2E944Cu;
    SET_GPR_U32(ctx, 31, 0x2E9454u);
    ctx->pc = 0x2E9450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E944Cu;
    // 0x2e9450: 0x32120020  andi        $s2, $s0, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E944Cu, 0x2E9454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9454u;
label_2e9454:
    // 0x2e9454: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e9454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e9458:
    // 0x2e9458: 0xc0ba1f0  jal         func_2E87C0
label_2e945c:
    if (ctx->pc == 0x2E945Cu) {
        ctx->pc = 0x2E945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9458u;
        // 0x2e945c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9460u;
        goto label_2e9460;
    }
    ctx->pc = 0x2E9458u;
    SET_GPR_U32(ctx, 31, 0x2E9460u);
    ctx->pc = 0x2E945Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9458u;
    // 0x2e945c: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E9458u, 0x2E9460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9460u;
label_2e9460:
    // 0x2e9460: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x2e9460u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2e9464:
    // 0x2e9464: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x2e9464u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2e9468:
    // 0x2e9468: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x2e9468u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_2e946c:
    // 0x2e946c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2e946cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2e9470:
    // 0x2e9470: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x2e9470u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_2e9474:
    // 0x2e9474: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2e9474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2e9478:
    // 0x2e9478: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x2e9478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_2e947c:
    // 0x2e947c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2e947cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_2e9480:
    // 0x2e9480: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e9480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2e9484:
    // 0x2e9484: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2e9484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_2e9488:
    // 0x2e9488: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_2e948c:
    if (ctx->pc == 0x2E948Cu) {
        ctx->pc = 0x2E948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9488u;
        // 0x2e948c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9490u;
        goto label_2e9490;
    }
    ctx->pc = 0x2E9488u;
    {
        const bool branch_taken_0x2e9488 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9488u;
        // 0x2e948c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9488) {
            ctx->pc = 0x2E94ACu;
            goto label_2e94ac;
        }
    }
    ctx->pc = 0x2E9490u;
label_2e9490:
    // 0x2e9490: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x2e9490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_2e9494:
    // 0x2e9494: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e9494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2e9498:
    // 0x2e9498: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2e9498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2e949c:
    // 0x2e949c: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x2e949cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2e94a0:
    // 0x2e94a0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e94a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_2e94a4:
    // 0x2e94a4: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e94a8:
    if (ctx->pc == 0x2E94A8u) {
        ctx->pc = 0x2E94A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94A4u;
        // 0x2e94a8: 0x3183f  dsra32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E94ACu;
        goto label_2e94ac;
    }
    ctx->pc = 0x2E94A4u;
    {
        const bool branch_taken_0x2e94a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E94A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94A4u;
        // 0x2e94a8: 0x3183f  dsra32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e94a4) {
            ctx->pc = 0x2E94BCu;
            goto label_2e94bc;
        }
    }
    ctx->pc = 0x2E94ACu;
label_2e94ac:
    // 0x2e94ac: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x2e94acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_2e94b0:
    // 0x2e94b0: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x2e94b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_2e94b4:
    // 0x2e94b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e94b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e94b8:
    // 0x2e94b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e94b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e94bc:
    // 0x2e94bc: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2e94bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_2e94c0:
    // 0x2e94c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e94c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e94c4:
    // 0x2e94c4: 0xc0f809  jalr        $a2
label_2e94c8:
    if (ctx->pc == 0x2E94C8u) {
        ctx->pc = 0x2E94C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94C4u;
        // 0x2e94c8: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E94CCu;
        goto label_2e94cc;
    }
    ctx->pc = 0x2E94C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2E94CCu);
        ctx->pc = 0x2E94C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94C4u;
        // 0x2e94c8: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E94C4u, 0x2E94CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E94CCu;
label_2e94cc:
    // 0x2e94cc: 0x100000f0  b           . + 4 + (0xF0 << 2)
label_2e94d0:
    if (ctx->pc == 0x2E94D0u) {
        ctx->pc = 0x2E94D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94CCu;
        // 0x2e94d0: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E94D4u;
        goto label_2e94d4;
    }
    ctx->pc = 0x2E94CCu;
    {
        const bool branch_taken_0x2e94cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E94D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94CCu;
        // 0x2e94d0: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e94cc) {
            ctx->pc = 0x2E9890u;
            goto label_2e9890;
        }
    }
    ctx->pc = 0x2E94D4u;
label_2e94d4:
    // 0x2e94d4: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2e94d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2e94d8:
    // 0x2e94d8: 0x27a500fc  addiu       $a1, $sp, 0xFC
    ctx->pc = 0x2e94d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
label_2e94dc:
    // 0x2e94dc: 0xc0ba1f0  jal         func_2E87C0
label_2e94e0:
    if (ctx->pc == 0x2E94E0u) {
        ctx->pc = 0x2E94E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94DCu;
        // 0x2e94e0: 0x32120020  andi        $s2, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E94E4u;
        goto label_2e94e4;
    }
    ctx->pc = 0x2E94DCu;
    SET_GPR_U32(ctx, 31, 0x2E94E4u);
    ctx->pc = 0x2E94E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E94DCu;
    // 0x2e94e0: 0x32120020  andi        $s2, $s0, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E94DCu, 0x2E94E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E94E4u;
label_2e94e4:
    // 0x2e94e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e94e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e94e8:
    // 0x2e94e8: 0xc0ba1f0  jal         func_2E87C0
label_2e94ec:
    if (ctx->pc == 0x2E94ECu) {
        ctx->pc = 0x2E94ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94E8u;
        // 0x2e94ec: 0x27a500f8  addiu       $a1, $sp, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E94F0u;
        goto label_2e94f0;
    }
    ctx->pc = 0x2E94E8u;
    SET_GPR_U32(ctx, 31, 0x2E94F0u);
    ctx->pc = 0x2E94ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E94E8u;
    // 0x2e94ec: 0x27a500f8  addiu       $a1, $sp, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E94E8u, 0x2E94F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E94F0u;
label_2e94f0:
    // 0x2e94f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e94f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e94f4:
    // 0x2e94f4: 0xc0ba1f0  jal         func_2E87C0
label_2e94f8:
    if (ctx->pc == 0x2E94F8u) {
        ctx->pc = 0x2E94F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94F4u;
        // 0x2e94f8: 0x27a500f4  addiu       $a1, $sp, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E94FCu;
        goto label_2e94fc;
    }
    ctx->pc = 0x2E94F4u;
    SET_GPR_U32(ctx, 31, 0x2E94FCu);
    ctx->pc = 0x2E94F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E94F4u;
    // 0x2e94f8: 0x27a500f4  addiu       $a1, $sp, 0xF4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E94F4u, 0x2E94FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E94FCu;
label_2e94fc:
    // 0x2e94fc: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x2e94fcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2e9500:
    // 0x2e9500: 0x32040040  andi        $a0, $s0, 0x40
    ctx->pc = 0x2e9500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
label_2e9504:
    // 0x2e9504: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x2e9504u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_2e9508:
    // 0x2e9508: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x2e9508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2e950c:
    // 0x2e950c: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x2e950cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_2e9510:
    // 0x2e9510: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x2e9510u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2e9514:
    // 0x2e9514: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x2e9514u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_2e9518:
    // 0x2e9518: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2e9518u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_2e951c:
    // 0x2e951c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2e951cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_2e9520:
    // 0x2e9520: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2e9520u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_2e9524:
    // 0x2e9524: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2e9524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_2e9528:
    // 0x2e9528: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2e952c:
    if (ctx->pc == 0x2E952Cu) {
        ctx->pc = 0x2E952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9528u;
        // 0x2e952c: 0x651825  or          $v1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9530u;
        goto label_2e9530;
    }
    ctx->pc = 0x2E9528u;
    {
        const bool branch_taken_0x2e9528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9528u;
        // 0x2e952c: 0x651825  or          $v1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9528) {
            ctx->pc = 0x2E954Cu;
            goto label_2e954c;
        }
    }
    ctx->pc = 0x2E9530u;
label_2e9530:
    // 0x2e9530: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x2e9530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_2e9534:
    // 0x2e9534: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2e9534u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2e9538:
    // 0x2e9538: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x2e9538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_2e953c:
    // 0x2e953c: 0x78840020  lq          $a0, 0x20($a0)
    ctx->pc = 0x2e953cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_2e9540:
    // 0x2e9540: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x2e9540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_2e9544:
    // 0x2e9544: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e9548:
    if (ctx->pc == 0x2E9548u) {
        ctx->pc = 0x2E9548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9544u;
        // 0x2e9548: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E954Cu;
        goto label_2e954c;
    }
    ctx->pc = 0x2E9544u;
    {
        const bool branch_taken_0x2e9544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9544u;
        // 0x2e9548: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9544) {
            ctx->pc = 0x2E955Cu;
            goto label_2e955c;
        }
    }
    ctx->pc = 0x2E954Cu;
label_2e954c:
    // 0x2e954c: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x2e954cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_2e9550:
    // 0x2e9550: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x2e9550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_2e9554:
    // 0x2e9554: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2e9554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2e9558:
    // 0x2e9558: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x2e9558u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2e955c:
    // 0x2e955c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_2e9560:
    if (ctx->pc == 0x2E9560u) {
        ctx->pc = 0x2E9564u;
        goto label_2e9564;
    }
    ctx->pc = 0x2E955Cu;
    {
        const bool branch_taken_0x2e955c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e955c) {
            ctx->pc = 0x2E95A8u;
            goto label_2e95a8;
        }
    }
    ctx->pc = 0x2E9564u;
label_2e9564:
    // 0x2e9564: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_2e9568:
    if (ctx->pc == 0x2E9568u) {
        ctx->pc = 0x2E956Cu;
        goto label_2e956c;
    }
    ctx->pc = 0x2E9564u;
    {
        const bool branch_taken_0x2e9564 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9564) {
            ctx->pc = 0x2E9588u;
            goto label_2e9588;
        }
    }
    ctx->pc = 0x2E956Cu;
label_2e956c:
    // 0x2e956c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2e956cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_2e9570:
    // 0x2e9570: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e9570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2e9574:
    // 0x2e9574: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2e9574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2e9578:
    // 0x2e9578: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x2e9578u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2e957c:
    // 0x2e957c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2e957cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_2e9580:
    // 0x2e9580: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e9584:
    if (ctx->pc == 0x2E9584u) {
        ctx->pc = 0x2E9584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9580u;
        // 0x2e9584: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9588u;
        goto label_2e9588;
    }
    ctx->pc = 0x2E9580u;
    {
        const bool branch_taken_0x2e9580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9580u;
        // 0x2e9584: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9580) {
            ctx->pc = 0x2E9598u;
            goto label_2e9598;
        }
    }
    ctx->pc = 0x2E9588u;
label_2e9588:
    // 0x2e9588: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x2e9588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_2e958c:
    // 0x2e958c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2e958cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_2e9590:
    // 0x2e9590: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2e9590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2e9594:
    // 0x2e9594: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e9594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e9598:
    // 0x2e9598: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x2e9598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_2e959c:
    // 0x2e959c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e959cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e95a0:
    // 0x2e95a0: 0x60f809  jalr        $v1
label_2e95a4:
    if (ctx->pc == 0x2E95A4u) {
        ctx->pc = 0x2E95A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95A0u;
        // 0x2e95a4: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E95A8u;
        goto label_2e95a8;
    }
    ctx->pc = 0x2E95A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E95A8u);
        ctx->pc = 0x2E95A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95A0u;
        // 0x2e95a4: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E95A0u, 0x2E95A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E95A8u;
label_2e95a8:
    // 0x2e95a8: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_2e95ac:
    if (ctx->pc == 0x2E95ACu) {
        ctx->pc = 0x2E95ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95A8u;
        // 0x2e95ac: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E95B0u;
        goto label_2e95b0;
    }
    ctx->pc = 0x2E95A8u;
    {
        const bool branch_taken_0x2e95a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E95ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95A8u;
        // 0x2e95ac: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e95a8) {
            ctx->pc = 0x2E9890u;
            goto label_2e9890;
        }
    }
    ctx->pc = 0x2E95B0u;
label_2e95b0:
    // 0x2e95b0: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2e95b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2e95b4:
    // 0x2e95b4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2e95b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2e95b8:
    // 0x2e95b8: 0xc0ba1f0  jal         func_2E87C0
label_2e95bc:
    if (ctx->pc == 0x2E95BCu) {
        ctx->pc = 0x2E95BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95B8u;
        // 0x2e95bc: 0x32110020  andi        $s1, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E95C0u;
        goto label_2e95c0;
    }
    ctx->pc = 0x2E95B8u;
    SET_GPR_U32(ctx, 31, 0x2E95C0u);
    ctx->pc = 0x2E95BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E95B8u;
    // 0x2e95bc: 0x32110020  andi        $s1, $s0, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E95B8u, 0x2E95C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E95C0u;
label_2e95c0:
    // 0x2e95c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e95c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e95c4:
    // 0x2e95c4: 0xc0ba1f0  jal         func_2E87C0
label_2e95c8:
    if (ctx->pc == 0x2E95C8u) {
        ctx->pc = 0x2E95C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95C4u;
        // 0x2e95c8: 0x27a500ec  addiu       $a1, $sp, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E95CCu;
        goto label_2e95cc;
    }
    ctx->pc = 0x2E95C4u;
    SET_GPR_U32(ctx, 31, 0x2E95CCu);
    ctx->pc = 0x2E95C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E95C4u;
    // 0x2e95c8: 0x27a500ec  addiu       $a1, $sp, 0xEC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E95C4u, 0x2E95CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E95CCu;
label_2e95cc:
    // 0x2e95cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e95ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e95d0:
    // 0x2e95d0: 0xc0ba1c8  jal         func_2E8720
label_2e95d4:
    if (ctx->pc == 0x2E95D4u) {
        ctx->pc = 0x2E95D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95D0u;
        // 0x2e95d4: 0x27a500e8  addiu       $a1, $sp, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E95D8u;
        goto label_2e95d8;
    }
    ctx->pc = 0x2E95D0u;
    SET_GPR_U32(ctx, 31, 0x2E95D8u);
    ctx->pc = 0x2E95D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E95D0u;
    // 0x2e95d4: 0x27a500e8  addiu       $a1, $sp, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2E95D0u, 0x2E95D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E95D8u;
label_2e95d8:
    // 0x2e95d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e95d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e95dc:
    // 0x2e95dc: 0xc0ba1c8  jal         func_2E8720
label_2e95e0:
    if (ctx->pc == 0x2E95E0u) {
        ctx->pc = 0x2E95E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95DCu;
        // 0x2e95e0: 0x27a500e4  addiu       $a1, $sp, 0xE4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E95E4u;
        goto label_2e95e4;
    }
    ctx->pc = 0x2E95DCu;
    SET_GPR_U32(ctx, 31, 0x2E95E4u);
    ctx->pc = 0x2E95E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E95DCu;
    // 0x2e95e0: 0x27a500e4  addiu       $a1, $sp, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2E95DCu, 0x2E95E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E95E4u;
label_2e95e4:
    // 0x2e95e4: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x2e95e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2e95e8:
    // 0x2e95e8: 0x24570004  addiu       $s7, $v0, 0x4
    ctx->pc = 0x2e95e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2e95ec:
    // 0x2e95ec: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x2e95ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_2e95f0:
    // 0x2e95f0: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x2e95f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_2e95f4:
    // 0x2e95f4: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x2e95f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2e95f8:
    // 0x2e95f8: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x2e95f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_2e95fc:
    // 0x2e95fc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x2e95fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_2e9600:
    // 0x2e9600: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2e9600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_2e9604:
    // 0x2e9604: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2e9604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_2e9608:
    // 0x2e9608: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2e9608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_2e960c:
    // 0x2e960c: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_2e9610:
    if (ctx->pc == 0x2E9610u) {
        ctx->pc = 0x2E9610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E960Cu;
        // 0x2e9610: 0x64a825  or          $s5, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9614u;
        goto label_2e9614;
    }
    ctx->pc = 0x2E960Cu;
    {
        const bool branch_taken_0x2e960c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E960Cu;
        // 0x2e9610: 0x64a825  or          $s5, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e960c) {
            ctx->pc = 0x2E9638u;
            goto label_2e9638;
        }
    }
    ctx->pc = 0x2E9614u;
label_2e9614:
    // 0x2e9614: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2e9614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_2e9618:
    // 0x2e9618: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x2e9618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_2e961c:
    // 0x2e961c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2e961cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2e9620:
    // 0x2e9620: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x2e9620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_2e9624:
    // 0x2e9624: 0x78840020  lq          $a0, 0x20($a0)
    ctx->pc = 0x2e9624u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_2e9628:
    // 0x2e9628: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2e9628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_2e962c:
    // 0x2e962c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2e962cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_2e9630:
    // 0x2e9630: 0x10000007  b           . + 4 + (0x7 << 2)
label_2e9634:
    if (ctx->pc == 0x2E9634u) {
        ctx->pc = 0x2E9634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9630u;
        // 0x2e9634: 0x838821  addu        $s1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9638u;
        goto label_2e9638;
    }
    ctx->pc = 0x2E9630u;
    {
        const bool branch_taken_0x2e9630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9630u;
        // 0x2e9634: 0x838821  addu        $s1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9630) {
            ctx->pc = 0x2E9650u;
            goto label_2e9650;
        }
    }
    ctx->pc = 0x2E9638u;
label_2e9638:
    // 0x2e9638: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x2e9638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_2e963c:
    // 0x2e963c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x2e963cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_2e9640:
    // 0x2e9640: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x2e9640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_2e9644:
    // 0x2e9644: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2e9644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2e9648:
    // 0x2e9648: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2e9648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e964c:
    // 0x2e964c: 0x838821  addu        $s1, $a0, $v1
    ctx->pc = 0x2e964cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2e9650:
    // 0x2e9650: 0x8fb200e8  lw          $s2, 0xE8($sp)
    ctx->pc = 0x2e9650u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_2e9654:
    // 0x2e9654: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x2e9654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_2e9658:
    // 0x2e9658: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x2e9658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2e965c:
    // 0x2e965c: 0x164000ae  bnez        $s2, . + 4 + (0xAE << 2)
label_2e9660:
    if (ctx->pc == 0x2E9660u) {
        ctx->pc = 0x2E9660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E965Cu;
        // 0x2e9660: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9664u;
        goto label_2e9664;
    }
    ctx->pc = 0x2E965Cu;
    {
        const bool branch_taken_0x2e965c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E965Cu;
        // 0x2e9660: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e965c) {
            ctx->pc = 0x2E9918u;
            goto label_2e9918;
        }
    }
    ctx->pc = 0x2E9664u;
label_2e9664:
    // 0x2e9664: 0x1000008a  b           . + 4 + (0x8A << 2)
label_2e9668:
    if (ctx->pc == 0x2E9668u) {
        ctx->pc = 0x2E9668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9664u;
        // 0x2e9668: 0xae770008  sw          $s7, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E966Cu;
        goto label_2e966c;
    }
    ctx->pc = 0x2E9664u;
    {
        const bool branch_taken_0x2e9664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9664u;
        // 0x2e9668: 0xae770008  sw          $s7, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9664) {
            ctx->pc = 0x2E9890u;
            goto label_2e9890;
        }
    }
    ctx->pc = 0x2E966Cu;
label_2e966c:
    // 0x2e966c: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2e966cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2e9670:
    // 0x2e9670: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2e9670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2e9674:
    // 0x2e9674: 0xc0ba1f0  jal         func_2E87C0
label_2e9678:
    if (ctx->pc == 0x2E9678u) {
        ctx->pc = 0x2E9678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9674u;
        // 0x2e9678: 0x32120020  andi        $s2, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E967Cu;
        goto label_2e967c;
    }
    ctx->pc = 0x2E9674u;
    SET_GPR_U32(ctx, 31, 0x2E967Cu);
    ctx->pc = 0x2E9678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9674u;
    // 0x2e9678: 0x32120020  andi        $s2, $s0, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E9674u, 0x2E967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E967Cu;
label_2e967c:
    // 0x2e967c: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x2e967cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2e9680:
    // 0x2e9680: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x2e9680u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2e9684:
    // 0x2e9684: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x2e9684u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_2e9688:
    // 0x2e9688: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2e9688u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2e968c:
    // 0x2e968c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x2e968cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_2e9690:
    // 0x2e9690: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2e9690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2e9694:
    // 0x2e9694: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x2e9694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_2e9698:
    // 0x2e9698: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2e9698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_2e969c:
    // 0x2e969c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e969cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2e96a0:
    // 0x2e96a0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2e96a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_2e96a4:
    // 0x2e96a4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_2e96a8:
    if (ctx->pc == 0x2E96A8u) {
        ctx->pc = 0x2E96A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96A4u;
        // 0x2e96a8: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E96ACu;
        goto label_2e96ac;
    }
    ctx->pc = 0x2E96A4u;
    {
        const bool branch_taken_0x2e96a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E96A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96A4u;
        // 0x2e96a8: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e96a4) {
            ctx->pc = 0x2E96C8u;
            goto label_2e96c8;
        }
    }
    ctx->pc = 0x2E96ACu;
label_2e96ac:
    // 0x2e96ac: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e96acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2e96b0:
    // 0x2e96b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e96b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2e96b4:
    // 0x2e96b4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2e96b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2e96b8:
    // 0x2e96b8: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x2e96b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2e96bc:
    // 0x2e96bc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2e96bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_2e96c0:
    // 0x2e96c0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e96c4:
    if (ctx->pc == 0x2E96C4u) {
        ctx->pc = 0x2E96C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96C0u;
        // 0x2e96c4: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E96C8u;
        goto label_2e96c8;
    }
    ctx->pc = 0x2E96C0u;
    {
        const bool branch_taken_0x2e96c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E96C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96C0u;
        // 0x2e96c4: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e96c0) {
            ctx->pc = 0x2E96D8u;
            goto label_2e96d8;
        }
    }
    ctx->pc = 0x2E96C8u;
label_2e96c8:
    // 0x2e96c8: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x2e96c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_2e96cc:
    // 0x2e96cc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2e96ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2e96d0:
    // 0x2e96d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e96d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e96d4:
    // 0x2e96d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e96d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e96d8:
    // 0x2e96d8: 0xa0f809  jalr        $a1
label_2e96dc:
    if (ctx->pc == 0x2E96DCu) {
        ctx->pc = 0x2E96E0u;
        goto label_2e96e0;
    }
    ctx->pc = 0x2E96D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2E96E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E96D8u, 0x2E96E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E96E0u;
label_2e96e0:
    // 0x2e96e0: 0x1000006b  b           . + 4 + (0x6B << 2)
label_2e96e4:
    if (ctx->pc == 0x2E96E4u) {
        ctx->pc = 0x2E96E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96E0u;
        // 0x2e96e4: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E96E8u;
        goto label_2e96e8;
    }
    ctx->pc = 0x2E96E0u;
    {
        const bool branch_taken_0x2e96e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E96E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96E0u;
        // 0x2e96e4: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e96e0) {
            ctx->pc = 0x2E9890u;
            goto label_2e9890;
        }
    }
    ctx->pc = 0x2E96E8u;
label_2e96e8:
    // 0x2e96e8: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2e96e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2e96ec:
    // 0x2e96ec: 0x27a500dc  addiu       $a1, $sp, 0xDC
    ctx->pc = 0x2e96ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_2e96f0:
    // 0x2e96f0: 0xc0ba1f0  jal         func_2E87C0
label_2e96f4:
    if (ctx->pc == 0x2E96F4u) {
        ctx->pc = 0x2E96F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96F0u;
        // 0x2e96f4: 0x32120020  andi        $s2, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E96F8u;
        goto label_2e96f8;
    }
    ctx->pc = 0x2E96F0u;
    SET_GPR_U32(ctx, 31, 0x2E96F8u);
    ctx->pc = 0x2E96F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E96F0u;
    // 0x2e96f4: 0x32120020  andi        $s2, $s0, 0x20 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E96F0u, 0x2E96F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E96F8u;
label_2e96f8:
    // 0x2e96f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e96f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e96fc:
    // 0x2e96fc: 0xc0ba1f0  jal         func_2E87C0
label_2e9700:
    if (ctx->pc == 0x2E9700u) {
        ctx->pc = 0x2E9700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96FCu;
        // 0x2e9700: 0x27a500d8  addiu       $a1, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9704u;
        goto label_2e9704;
    }
    ctx->pc = 0x2E96FCu;
    SET_GPR_U32(ctx, 31, 0x2E9704u);
    ctx->pc = 0x2E9700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E96FCu;
    // 0x2e9700: 0x27a500d8  addiu       $a1, $sp, 0xD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E96FCu, 0x2E9704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9704u;
label_2e9704:
    // 0x2e9704: 0x90470001  lbu         $a3, 0x1($v0)
    ctx->pc = 0x2e9704u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2e9708:
    // 0x2e9708: 0x32040040  andi        $a0, $s0, 0x40
    ctx->pc = 0x2e9708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)64);
label_2e970c:
    // 0x2e970c: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x2e970cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_2e9710:
    // 0x2e9710: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x2e9710u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2e9714:
    // 0x2e9714: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x2e9714u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_2e9718:
    // 0x2e9718: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x2e9718u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2e971c:
    // 0x2e971c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x2e971cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_2e9720:
    // 0x2e9720: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2e9720u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_2e9724:
    // 0x2e9724: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2e9724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_2e9728:
    // 0x2e9728: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2e9728u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_2e972c:
    // 0x2e972c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2e972cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_2e9730:
    // 0x2e9730: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2e9734:
    if (ctx->pc == 0x2E9734u) {
        ctx->pc = 0x2E9734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9730u;
        // 0x2e9734: 0x651825  or          $v1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9738u;
        goto label_2e9738;
    }
    ctx->pc = 0x2E9730u;
    {
        const bool branch_taken_0x2e9730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9730u;
        // 0x2e9734: 0x651825  or          $v1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9730) {
            ctx->pc = 0x2E9754u;
            goto label_2e9754;
        }
    }
    ctx->pc = 0x2E9738u;
label_2e9738:
    // 0x2e9738: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x2e9738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_2e973c:
    // 0x2e973c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2e973cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2e9740:
    // 0x2e9740: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x2e9740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_2e9744:
    // 0x2e9744: 0x78840020  lq          $a0, 0x20($a0)
    ctx->pc = 0x2e9744u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_2e9748:
    // 0x2e9748: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x2e9748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_2e974c:
    // 0x2e974c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e9750:
    if (ctx->pc == 0x2E9750u) {
        ctx->pc = 0x2E9750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E974Cu;
        // 0x2e9750: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9754u;
        goto label_2e9754;
    }
    ctx->pc = 0x2E974Cu;
    {
        const bool branch_taken_0x2e974c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E974Cu;
        // 0x2e9750: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e974c) {
            ctx->pc = 0x2E9764u;
            goto label_2e9764;
        }
    }
    ctx->pc = 0x2E9754u;
label_2e9754:
    // 0x2e9754: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x2e9754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_2e9758:
    // 0x2e9758: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x2e9758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_2e975c:
    // 0x2e975c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2e975cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2e9760:
    // 0x2e9760: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x2e9760u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2e9764:
    // 0x2e9764: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_2e9768:
    if (ctx->pc == 0x2E9768u) {
        ctx->pc = 0x2E976Cu;
        goto label_2e976c;
    }
    ctx->pc = 0x2E9764u;
    {
        const bool branch_taken_0x2e9764 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9764) {
            ctx->pc = 0x2E97A8u;
            goto label_2e97a8;
        }
    }
    ctx->pc = 0x2E976Cu;
label_2e976c:
    // 0x2e976c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_2e9770:
    if (ctx->pc == 0x2E9770u) {
        ctx->pc = 0x2E9774u;
        goto label_2e9774;
    }
    ctx->pc = 0x2E976Cu;
    {
        const bool branch_taken_0x2e976c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e976c) {
            ctx->pc = 0x2E9790u;
            goto label_2e9790;
        }
    }
    ctx->pc = 0x2E9774u;
label_2e9774:
    // 0x2e9774: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2e9774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_2e9778:
    // 0x2e9778: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e9778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2e977c:
    // 0x2e977c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2e977cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2e9780:
    // 0x2e9780: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x2e9780u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2e9784:
    // 0x2e9784: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x2e9784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_2e9788:
    // 0x2e9788: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e978c:
    if (ctx->pc == 0x2E978Cu) {
        ctx->pc = 0x2E978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9788u;
        // 0x2e978c: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9790u;
        goto label_2e9790;
    }
    ctx->pc = 0x2E9788u;
    {
        const bool branch_taken_0x2e9788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9788u;
        // 0x2e978c: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9788) {
            ctx->pc = 0x2E97A0u;
            goto label_2e97a0;
        }
    }
    ctx->pc = 0x2E9790u;
label_2e9790:
    // 0x2e9790: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x2e9790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_2e9794:
    // 0x2e9794: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x2e9794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_2e9798:
    // 0x2e9798: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2e9798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2e979c:
    // 0x2e979c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e979cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e97a0:
    // 0x2e97a0: 0x60f809  jalr        $v1
label_2e97a4:
    if (ctx->pc == 0x2E97A4u) {
        ctx->pc = 0x2E97A8u;
        goto label_2e97a8;
    }
    ctx->pc = 0x2E97A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2E97A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E97A0u, 0x2E97A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E97A8u;
label_2e97a8:
    // 0x2e97a8: 0x10000039  b           . + 4 + (0x39 << 2)
label_2e97ac:
    if (ctx->pc == 0x2E97ACu) {
        ctx->pc = 0x2E97ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97A8u;
        // 0x2e97ac: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E97B0u;
        goto label_2e97b0;
    }
    ctx->pc = 0x2E97A8u;
    {
        const bool branch_taken_0x2e97a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E97ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97A8u;
        // 0x2e97ac: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e97a8) {
            ctx->pc = 0x2E9890u;
            goto label_2e9890;
        }
    }
    ctx->pc = 0x2E97B0u;
label_2e97b0:
    // 0x2e97b0: 0x12c80067  beq         $s6, $t0, . + 4 + (0x67 << 2)
label_2e97b4:
    if (ctx->pc == 0x2E97B4u) {
        ctx->pc = 0x2E97B8u;
        goto label_2e97b8;
    }
    ctx->pc = 0x2E97B0u;
    {
        const bool branch_taken_0x2e97b0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 8));
        if (branch_taken_0x2e97b0) {
            ctx->pc = 0x2E9950u;
            goto label_2e9950;
        }
    }
    ctx->pc = 0x2E97B8u;
label_2e97b8:
    // 0x2e97b8: 0x91070002  lbu         $a3, 0x2($t0)
    ctx->pc = 0x2e97b8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
label_2e97bc:
    // 0x2e97bc: 0x25040005  addiu       $a0, $t0, 0x5
    ctx->pc = 0x2e97bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
label_2e97c0:
    // 0x2e97c0: 0x91030003  lbu         $v1, 0x3($t0)
    ctx->pc = 0x2e97c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
label_2e97c4:
    // 0x2e97c4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2e97c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2e97c8:
    // 0x2e97c8: 0x91020004  lbu         $v0, 0x4($t0)
    ctx->pc = 0x2e97c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
label_2e97cc:
    // 0x2e97cc: 0x91060001  lbu         $a2, 0x1($t0)
    ctx->pc = 0x2e97ccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_2e97d0:
    // 0x2e97d0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x2e97d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_2e97d4:
    // 0x2e97d4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2e97d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2e97d8:
    // 0x2e97d8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2e97d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_2e97dc:
    // 0x2e97dc: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2e97dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_2e97e0:
    // 0x2e97e0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2e97e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_2e97e4:
    // 0x2e97e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e97e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2e97e8:
    // 0x2e97e8: 0xc0ba1c8  jal         func_2E8720
label_2e97ec:
    if (ctx->pc == 0x2E97ECu) {
        ctx->pc = 0x2E97ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97E8u;
        // 0x2e97ec: 0xafa200d4  sw          $v0, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E97F0u;
        goto label_2e97f0;
    }
    ctx->pc = 0x2E97E8u;
    SET_GPR_U32(ctx, 31, 0x2E97F0u);
    ctx->pc = 0x2E97ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E97E8u;
    // 0x2e97ec: 0xafa200d4  sw          $v0, 0xD4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2E97E8u, 0x2E97F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E97F0u;
label_2e97f0:
    // 0x2e97f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e97f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e97f4:
    // 0x2e97f4: 0xc0ba1f0  jal         func_2E87C0
label_2e97f8:
    if (ctx->pc == 0x2E97F8u) {
        ctx->pc = 0x2E97F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97F4u;
        // 0x2e97f8: 0x27a500cc  addiu       $a1, $sp, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E97FCu;
        goto label_2e97fc;
    }
    ctx->pc = 0x2E97F4u;
    SET_GPR_U32(ctx, 31, 0x2E97FCu);
    ctx->pc = 0x2E97F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E97F4u;
    // 0x2e97f8: 0x27a500cc  addiu       $a1, $sp, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E97F4u, 0x2E97FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E97FCu;
label_2e97fc:
    // 0x2e97fc: 0x10000024  b           . + 4 + (0x24 << 2)
label_2e9800:
    if (ctx->pc == 0x2E9800u) {
        ctx->pc = 0x2E9800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97FCu;
        // 0x2e9800: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9804u;
        goto label_2e9804;
    }
    ctx->pc = 0x2E97FCu;
    {
        const bool branch_taken_0x2e97fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97FCu;
        // 0x2e9800: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e97fc) {
            ctx->pc = 0x2E9890u;
            goto label_2e9890;
        }
    }
    ctx->pc = 0x2E9804u;
label_2e9804:
    // 0x2e9804: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2e9804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2e9808:
    // 0x2e9808: 0xc0ba1f0  jal         func_2E87C0
label_2e980c:
    if (ctx->pc == 0x2E980Cu) {
        ctx->pc = 0x2E980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9808u;
        // 0x2e980c: 0x27a500c8  addiu       $a1, $sp, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9810u;
        goto label_2e9810;
    }
    ctx->pc = 0x2E9808u;
    SET_GPR_U32(ctx, 31, 0x2E9810u);
    ctx->pc = 0x2E980Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9808u;
    // 0x2e980c: 0x27a500c8  addiu       $a1, $sp, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E9808u, 0x2E9810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9810u;
label_2e9810:
    // 0x2e9810: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x2e9810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_2e9814:
    // 0x2e9814: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2e9814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_2e9818:
    // 0x2e9818: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2e9818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2e981c:
    // 0x2e981c: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x2e981cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2e9820:
    // 0x2e9820: 0x10c00048  beqz        $a2, . + 4 + (0x48 << 2)
label_2e9824:
    if (ctx->pc == 0x2E9824u) {
        ctx->pc = 0x2E9824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9820u;
        // 0x2e9824: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9828u;
        goto label_2e9828;
    }
    ctx->pc = 0x2E9820u;
    {
        const bool branch_taken_0x2e9820 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9820u;
        // 0x2e9824: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9820) {
            ctx->pc = 0x2E9944u;
            goto label_2e9944;
        }
    }
    ctx->pc = 0x2E9828u;
label_2e9828:
    // 0x2e9828: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e9828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e982c:
    // 0x2e982c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x2e982cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2e9830:
    // 0x2e9830: 0x10640043  beq         $v1, $a0, . + 4 + (0x43 << 2)
label_2e9834:
    if (ctx->pc == 0x2E9834u) {
        ctx->pc = 0x2E9838u;
        goto label_2e9838;
    }
    ctx->pc = 0x2E9830u;
    {
        const bool branch_taken_0x2e9830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e9830) {
            ctx->pc = 0x2E9940u;
            goto label_2e9940;
        }
    }
    ctx->pc = 0x2E9838u;
label_2e9838:
    // 0x2e9838: 0xc0f809  jalr        $a2
label_2e983c:
    if (ctx->pc == 0x2E983Cu) {
        ctx->pc = 0x2E983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9838u;
        // 0x2e983c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9840u;
        goto label_2e9840;
    }
    ctx->pc = 0x2E9838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2E9840u);
        ctx->pc = 0x2E983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9838u;
        // 0x2e983c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9838u, 0x2E9840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E9840u;
label_2e9840:
    // 0x2e9840: 0x10000041  b           . + 4 + (0x41 << 2)
label_2e9844:
    if (ctx->pc == 0x2E9844u) {
        ctx->pc = 0x2E9844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9840u;
        // 0x2e9844: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9848u;
        goto label_2e9848;
    }
    ctx->pc = 0x2E9840u;
    {
        const bool branch_taken_0x2e9840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9840u;
        // 0x2e9844: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9840) {
            ctx->pc = 0x2E9948u;
            goto label_2e9948;
        }
    }
    ctx->pc = 0x2E9848u;
label_2e9848:
    // 0x2e9848: 0x12c80041  beq         $s6, $t0, . + 4 + (0x41 << 2)
label_2e984c:
    if (ctx->pc == 0x2E984Cu) {
        ctx->pc = 0x2E9850u;
        goto label_2e9850;
    }
    ctx->pc = 0x2E9848u;
    {
        const bool branch_taken_0x2e9848 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 8));
        if (branch_taken_0x2e9848) {
            ctx->pc = 0x2E9950u;
            goto label_2e9950;
        }
    }
    ctx->pc = 0x2E9850u;
label_2e9850:
    // 0x2e9850: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2e9850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2e9854:
    // 0x2e9854: 0xc0ba1c8  jal         func_2E8720
label_2e9858:
    if (ctx->pc == 0x2E9858u) {
        ctx->pc = 0x2E9858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9854u;
        // 0x2e9858: 0x27a500c4  addiu       $a1, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E985Cu;
        goto label_2e985c;
    }
    ctx->pc = 0x2E9854u;
    SET_GPR_U32(ctx, 31, 0x2E985Cu);
    ctx->pc = 0x2E9858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9854u;
    // 0x2e9858: 0x27a500c4  addiu       $a1, $sp, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2E9854u, 0x2E985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E985Cu;
label_2e985c:
    // 0x2e985c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e985cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e9860:
    // 0x2e9860: 0xc0ba1c8  jal         func_2E8720
label_2e9864:
    if (ctx->pc == 0x2E9864u) {
        ctx->pc = 0x2E9864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9860u;
        // 0x2e9864: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9868u;
        goto label_2e9868;
    }
    ctx->pc = 0x2E9860u;
    SET_GPR_U32(ctx, 31, 0x2E9868u);
    ctx->pc = 0x2E9864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9860u;
    // 0x2e9864: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8720u, 0x2E9860u, 0x2E9868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9868u;
label_2e9868:
    // 0x2e9868: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e9868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e986c:
    // 0x2e986c: 0xc0ba1f0  jal         func_2E87C0
label_2e9870:
    if (ctx->pc == 0x2E9870u) {
        ctx->pc = 0x2E9870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E986Cu;
        // 0x2e9870: 0x27a500bc  addiu       $a1, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9874u;
        goto label_2e9874;
    }
    ctx->pc = 0x2E986Cu;
    SET_GPR_U32(ctx, 31, 0x2E9874u);
    ctx->pc = 0x2E9870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E986Cu;
    // 0x2e9870: 0x27a500bc  addiu       $a1, $sp, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E87C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E87C0u, 0x2E986Cu, 0x2E9874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9874u;
label_2e9874:
    // 0x2e9874: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x2e9874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_2e9878:
    // 0x2e9878: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e9878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2e987c:
    // 0x2e987c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2e987cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e9880:
    // 0x2e9880: 0x10000003  b           . + 4 + (0x3 << 2)
label_2e9884:
    if (ctx->pc == 0x2E9884u) {
        ctx->pc = 0x2E9884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9880u;
        // 0x2e9884: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9888u;
        goto label_2e9888;
    }
    ctx->pc = 0x2E9880u;
    {
        const bool branch_taken_0x2e9880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9880u;
        // 0x2e9884: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9880) {
            ctx->pc = 0x2E9890u;
            goto label_2e9890;
        }
    }
    ctx->pc = 0x2E9888u;
label_2e9888:
    // 0x2e9888: 0xc0ba1a0  jal         func_2E8680
label_2e988c:
    if (ctx->pc == 0x2E988Cu) {
        ctx->pc = 0x2E9890u;
        goto label_2e9890;
    }
    ctx->pc = 0x2E9888u;
    SET_GPR_U32(ctx, 31, 0x2E9890u);
    ctx->pc = 0x2E8680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8680u, 0x2E9888u, 0x2E9890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9890u;
label_2e9890:
    // 0x2e9890: 0x32030080  andi        $v1, $s0, 0x80
    ctx->pc = 0x2e9890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
label_2e9894:
    // 0x2e9894: 0x1060fe30  beqz        $v1, . + 4 + (-0x1D0 << 2)
label_2e9898:
    if (ctx->pc == 0x2E9898u) {
        ctx->pc = 0x2E989Cu;
        goto label_2e989c;
    }
    ctx->pc = 0x2E9894u;
    {
        const bool branch_taken_0x2e9894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9894) {
            ctx->pc = 0x2E9158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9158;
        }
    }
    ctx->pc = 0x2E989Cu;
label_2e989c:
    // 0x2e989c: 0x1000fe2e  b           . + 4 + (-0x1D2 << 2)
label_2e98a0:
    if (ctx->pc == 0x2E98A0u) {
        ctx->pc = 0x2E98A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E989Cu;
        // 0x2e98a0: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E98A4u;
        goto label_2e98a4;
    }
    ctx->pc = 0x2E989Cu;
    {
        const bool branch_taken_0x2e989c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E98A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E989Cu;
        // 0x2e98a0: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e989c) {
            ctx->pc = 0x2E9158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9158;
        }
    }
    ctx->pc = 0x2E98A4u;
label_2e98a4:
    // 0x2e98a4: 0x91100000  lbu         $s0, 0x0($t0)
    ctx->pc = 0x2e98a4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_2e98a8:
    // 0x2e98a8: 0x3203001f  andi        $v1, $s0, 0x1F
    ctx->pc = 0x2e98a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
label_2e98ac:
    // 0x2e98ac: 0x2c610010  sltiu       $at, $v1, 0x10
    ctx->pc = 0x2e98acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_2e98b0:
    // 0x2e98b0: 0x1020fff5  beqz        $at, . + 4 + (-0xB << 2)
label_2e98b4:
    if (ctx->pc == 0x2E98B4u) {
        ctx->pc = 0x2E98B8u;
        goto label_2e98b8;
    }
    ctx->pc = 0x2E98B0u;
    {
        const bool branch_taken_0x2e98b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e98b0) {
            ctx->pc = 0x2E9888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9888;
        }
    }
    ctx->pc = 0x2E98B8u;
label_2e98b8:
    // 0x2e98b8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2e98b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_2e98bc:
    // 0x2e98bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e98bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2e98c0:
    // 0x2e98c0: 0x24848ec0  addiu       $a0, $a0, -0x7140
    ctx->pc = 0x2e98c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938304));
label_2e98c4:
    // 0x2e98c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e98c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2e98c8:
    // 0x2e98c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2e98c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e98cc:
    // 0x2e98cc: 0x600008  jr          $v1
label_2e98d0:
    if (ctx->pc == 0x2E98D0u) {
        ctx->pc = 0x2E98D4u;
        goto label_2e98d4;
    }
    ctx->pc = 0x2E98CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E91B8u: goto label_2e91b8;
            case 0x2E91D8u: goto label_2e91d8;
            case 0x2E9230u: goto label_2e9230;
            case 0x2E92C0u: goto label_2e92c0;
            case 0x2E933Cu: goto label_2e933c;
            case 0x2E93B4u: goto label_2e93b4;
            case 0x2E9444u: goto label_2e9444;
            case 0x2E94D4u: goto label_2e94d4;
            case 0x2E95B0u: goto label_2e95b0;
            case 0x2E966Cu: goto label_2e966c;
            case 0x2E96E8u: goto label_2e96e8;
            case 0x2E97B0u: goto label_2e97b0;
            case 0x2E9804u: goto label_2e9804;
            case 0x2E9848u: goto label_2e9848;
            case 0x2E9888u: goto label_2e9888;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E98CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2E98D4u;
label_2e98d4:
    // 0x2e98d4: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x2e98d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_2e98d8:
    // 0x2e98d8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e98d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e98dc:
    // 0x2e98dc: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x2e98dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_2e98e0:
    // 0x2e98e0: 0x3c0f809  jalr        $fp
label_2e98e4:
    if (ctx->pc == 0x2E98E4u) {
        ctx->pc = 0x2E98E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E98E0u;
        // 0x2e98e4: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E98E8u;
        goto label_2e98e8;
    }
    ctx->pc = 0x2E98E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x2E98E8u);
        ctx->pc = 0x2E98E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E98E0u;
        // 0x2e98e4: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E98E0u, 0x2E98E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E98E8u;
label_2e98e8:
    // 0x2e98e8: 0x1000fe73  b           . + 4 + (-0x18D << 2)
label_2e98ec:
    if (ctx->pc == 0x2E98ECu) {
        ctx->pc = 0x2E98ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E98E8u;
        // 0x2e98ec: 0x8fa300a0  lw          $v1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E98F0u;
        goto label_2e98f0;
    }
    ctx->pc = 0x2E98E8u;
    {
        const bool branch_taken_0x2e98e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E98ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E98E8u;
        // 0x2e98ec: 0x8fa300a0  lw          $v1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e98e8) {
            ctx->pc = 0x2E92B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e92b8;
        }
    }
    ctx->pc = 0x2E98F0u;
label_2e98f0:
    // 0x2e98f0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2e98f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_2e98f4:
    // 0x2e98f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e98f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e98f8:
    // 0x2e98f8: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x2e98f8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2e98fc:
    // 0x2e98fc: 0x2a0f809  jalr        $s5
label_2e9900:
    if (ctx->pc == 0x2E9900u) {
        ctx->pc = 0x2E9900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E98FCu;
        // 0x2e9900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9904u;
        goto label_2e9904;
    }
    ctx->pc = 0x2E98FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2E9904u);
        ctx->pc = 0x2E9900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E98FCu;
        // 0x2e9900: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E98FCu, 0x2E9904u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E9904u;
label_2e9904:
    // 0x2e9904: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2e9904u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2e9908:
    // 0x2e9908: 0x1640fff9  bnez        $s2, . + 4 + (-0x7 << 2)
label_2e990c:
    if (ctx->pc == 0x2E990Cu) {
        ctx->pc = 0x2E9910u;
        goto label_2e9910;
    }
    ctx->pc = 0x2E9908u;
    {
        const bool branch_taken_0x2e9908 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9908) {
            ctx->pc = 0x2E98F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e98f0;
        }
    }
    ctx->pc = 0x2E9910u;
label_2e9910:
    // 0x2e9910: 0x1000fea6  b           . + 4 + (-0x15A << 2)
label_2e9914:
    if (ctx->pc == 0x2E9914u) {
        ctx->pc = 0x2E9918u;
        goto label_2e9918;
    }
    ctx->pc = 0x2E9910u;
    {
        const bool branch_taken_0x2e9910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9910) {
            ctx->pc = 0x2E93ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e93ac;
        }
    }
    ctx->pc = 0x2E9918u;
label_2e9918:
    // 0x2e9918: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x2e9918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_2e991c:
    // 0x2e991c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2e991cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e9920:
    // 0x2e9920: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x2e9920u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2e9924:
    // 0x2e9924: 0x2a0f809  jalr        $s5
label_2e9928:
    if (ctx->pc == 0x2E9928u) {
        ctx->pc = 0x2E9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9924u;
        // 0x2e9928: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E992Cu;
        goto label_2e992c;
    }
    ctx->pc = 0x2E9924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x2E992Cu);
        ctx->pc = 0x2E9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9924u;
        // 0x2e9928: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9924u, 0x2E992Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E992Cu;
label_2e992c:
    // 0x2e992c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2e992cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2e9930:
    // 0x2e9930: 0x1640fff9  bnez        $s2, . + 4 + (-0x7 << 2)
label_2e9934:
    if (ctx->pc == 0x2E9934u) {
        ctx->pc = 0x2E9938u;
        goto label_2e9938;
    }
    ctx->pc = 0x2E9930u;
    {
        const bool branch_taken_0x2e9930 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9930) {
            ctx->pc = 0x2E9918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9918;
        }
    }
    ctx->pc = 0x2E9938u;
label_2e9938:
    // 0x2e9938: 0x1000ff4a  b           . + 4 + (-0xB6 << 2)
label_2e993c:
    if (ctx->pc == 0x2E993Cu) {
        ctx->pc = 0x2E9940u;
        goto label_2e9940;
    }
    ctx->pc = 0x2E9938u;
    {
        const bool branch_taken_0x2e9938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9938) {
            ctx->pc = 0x2E9664u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9664;
        }
    }
    ctx->pc = 0x2E9940u;
label_2e9940:
    // 0x2e9940: 0xae860008  sw          $a2, 0x8($s4)
    ctx->pc = 0x2e9940u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 6));
label_2e9944:
    // 0x2e9944: 0xae710008  sw          $s1, 0x8($s3)
    ctx->pc = 0x2e9944u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
label_2e9948:
    // 0x2e9948: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
label_2e994c:
    if (ctx->pc == 0x2E994Cu) {
        ctx->pc = 0x2E994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9948u;
        // 0x2e994c: 0x32030080  andi        $v1, $s0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9950u;
        goto label_2e9950;
    }
    ctx->pc = 0x2E9948u;
    {
        const bool branch_taken_0x2e9948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E994Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9948u;
        // 0x2e994c: 0x32030080  andi        $v1, $s0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9948) {
            ctx->pc = 0x2E9894u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9894;
        }
    }
    ctx->pc = 0x2E9950u;
label_2e9950:
    // 0x2e9950: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e9950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2e9954:
    // 0x2e9954: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2e9954u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2e9958:
    // 0x2e9958: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2e9958u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2e995c:
    // 0x2e995c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e995cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e9960:
    // 0x2e9960: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e9960u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e9964:
    // 0x2e9964: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e9964u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e9968:
    // 0x2e9968: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e9968u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e996c:
    // 0x2e996c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e996cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e9970:
    // 0x2e9970: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e9970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e9974:
    // 0x2e9974: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e9974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e9978:
    // 0x2e9978: 0x3e00008  jr          $ra
label_2e997c:
    if (ctx->pc == 0x2E997Cu) {
        ctx->pc = 0x2E997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9978u;
        // 0x2e997c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9980u;
        goto label_fallthrough_0x2e9978;
    }
    ctx->pc = 0x2E9978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9978u;
        // 0x2e997c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e9978:
    ctx->pc = 0x2E9980u;
}
