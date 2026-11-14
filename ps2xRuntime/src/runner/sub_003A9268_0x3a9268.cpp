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

// Function: sub_003A9268
// Address: 0x3a9268 - 0x3a9a58
void sub_003A9268_0x3a9268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9268_0x3a9268");
#endif

    switch (ctx->pc) {
        case 0x3a9268u: goto label_3a9268;
        case 0x3a926cu: goto label_3a926c;
        case 0x3a9270u: goto label_3a9270;
        case 0x3a9274u: goto label_3a9274;
        case 0x3a9278u: goto label_3a9278;
        case 0x3a927cu: goto label_3a927c;
        case 0x3a9280u: goto label_3a9280;
        case 0x3a9284u: goto label_3a9284;
        case 0x3a9288u: goto label_3a9288;
        case 0x3a928cu: goto label_3a928c;
        case 0x3a9290u: goto label_3a9290;
        case 0x3a9294u: goto label_3a9294;
        case 0x3a9298u: goto label_3a9298;
        case 0x3a929cu: goto label_3a929c;
        case 0x3a92a0u: goto label_3a92a0;
        case 0x3a92a4u: goto label_3a92a4;
        case 0x3a92a8u: goto label_3a92a8;
        case 0x3a92acu: goto label_3a92ac;
        case 0x3a92b0u: goto label_3a92b0;
        case 0x3a92b4u: goto label_3a92b4;
        case 0x3a92b8u: goto label_3a92b8;
        case 0x3a92bcu: goto label_3a92bc;
        case 0x3a92c0u: goto label_3a92c0;
        case 0x3a92c4u: goto label_3a92c4;
        case 0x3a92c8u: goto label_3a92c8;
        case 0x3a92ccu: goto label_3a92cc;
        case 0x3a92d0u: goto label_3a92d0;
        case 0x3a92d4u: goto label_3a92d4;
        case 0x3a92d8u: goto label_3a92d8;
        case 0x3a92dcu: goto label_3a92dc;
        case 0x3a92e0u: goto label_3a92e0;
        case 0x3a92e4u: goto label_3a92e4;
        case 0x3a92e8u: goto label_3a92e8;
        case 0x3a92ecu: goto label_3a92ec;
        case 0x3a92f0u: goto label_3a92f0;
        case 0x3a92f4u: goto label_3a92f4;
        case 0x3a92f8u: goto label_3a92f8;
        case 0x3a92fcu: goto label_3a92fc;
        case 0x3a9300u: goto label_3a9300;
        case 0x3a9304u: goto label_3a9304;
        case 0x3a9308u: goto label_3a9308;
        case 0x3a930cu: goto label_3a930c;
        case 0x3a9310u: goto label_3a9310;
        case 0x3a9314u: goto label_3a9314;
        case 0x3a9318u: goto label_3a9318;
        case 0x3a931cu: goto label_3a931c;
        case 0x3a9320u: goto label_3a9320;
        case 0x3a9324u: goto label_3a9324;
        case 0x3a9328u: goto label_3a9328;
        case 0x3a932cu: goto label_3a932c;
        case 0x3a9330u: goto label_3a9330;
        case 0x3a9334u: goto label_3a9334;
        case 0x3a9338u: goto label_3a9338;
        case 0x3a933cu: goto label_3a933c;
        case 0x3a9340u: goto label_3a9340;
        case 0x3a9344u: goto label_3a9344;
        case 0x3a9348u: goto label_3a9348;
        case 0x3a934cu: goto label_3a934c;
        case 0x3a9350u: goto label_3a9350;
        case 0x3a9354u: goto label_3a9354;
        case 0x3a9358u: goto label_3a9358;
        case 0x3a935cu: goto label_3a935c;
        case 0x3a9360u: goto label_3a9360;
        case 0x3a9364u: goto label_3a9364;
        case 0x3a9368u: goto label_3a9368;
        case 0x3a936cu: goto label_3a936c;
        case 0x3a9370u: goto label_3a9370;
        case 0x3a9374u: goto label_3a9374;
        case 0x3a9378u: goto label_3a9378;
        case 0x3a937cu: goto label_3a937c;
        case 0x3a9380u: goto label_3a9380;
        case 0x3a9384u: goto label_3a9384;
        case 0x3a9388u: goto label_3a9388;
        case 0x3a938cu: goto label_3a938c;
        case 0x3a9390u: goto label_3a9390;
        case 0x3a9394u: goto label_3a9394;
        case 0x3a9398u: goto label_3a9398;
        case 0x3a939cu: goto label_3a939c;
        case 0x3a93a0u: goto label_3a93a0;
        case 0x3a93a4u: goto label_3a93a4;
        case 0x3a93a8u: goto label_3a93a8;
        case 0x3a93acu: goto label_3a93ac;
        case 0x3a93b0u: goto label_3a93b0;
        case 0x3a93b4u: goto label_3a93b4;
        case 0x3a93b8u: goto label_3a93b8;
        case 0x3a93bcu: goto label_3a93bc;
        case 0x3a93c0u: goto label_3a93c0;
        case 0x3a93c4u: goto label_3a93c4;
        case 0x3a93c8u: goto label_3a93c8;
        case 0x3a93ccu: goto label_3a93cc;
        case 0x3a93d0u: goto label_3a93d0;
        case 0x3a93d4u: goto label_3a93d4;
        case 0x3a93d8u: goto label_3a93d8;
        case 0x3a93dcu: goto label_3a93dc;
        case 0x3a93e0u: goto label_3a93e0;
        case 0x3a93e4u: goto label_3a93e4;
        case 0x3a93e8u: goto label_3a93e8;
        case 0x3a93ecu: goto label_3a93ec;
        case 0x3a93f0u: goto label_3a93f0;
        case 0x3a93f4u: goto label_3a93f4;
        case 0x3a93f8u: goto label_3a93f8;
        case 0x3a93fcu: goto label_3a93fc;
        case 0x3a9400u: goto label_3a9400;
        case 0x3a9404u: goto label_3a9404;
        case 0x3a9408u: goto label_3a9408;
        case 0x3a940cu: goto label_3a940c;
        case 0x3a9410u: goto label_3a9410;
        case 0x3a9414u: goto label_3a9414;
        case 0x3a9418u: goto label_3a9418;
        case 0x3a941cu: goto label_3a941c;
        case 0x3a9420u: goto label_3a9420;
        case 0x3a9424u: goto label_3a9424;
        case 0x3a9428u: goto label_3a9428;
        case 0x3a942cu: goto label_3a942c;
        case 0x3a9430u: goto label_3a9430;
        case 0x3a9434u: goto label_3a9434;
        case 0x3a9438u: goto label_3a9438;
        case 0x3a943cu: goto label_3a943c;
        case 0x3a9440u: goto label_3a9440;
        case 0x3a9444u: goto label_3a9444;
        case 0x3a9448u: goto label_3a9448;
        case 0x3a944cu: goto label_3a944c;
        case 0x3a9450u: goto label_3a9450;
        case 0x3a9454u: goto label_3a9454;
        case 0x3a9458u: goto label_3a9458;
        case 0x3a945cu: goto label_3a945c;
        case 0x3a9460u: goto label_3a9460;
        case 0x3a9464u: goto label_3a9464;
        case 0x3a9468u: goto label_3a9468;
        case 0x3a946cu: goto label_3a946c;
        case 0x3a9470u: goto label_3a9470;
        case 0x3a9474u: goto label_3a9474;
        case 0x3a9478u: goto label_3a9478;
        case 0x3a947cu: goto label_3a947c;
        case 0x3a9480u: goto label_3a9480;
        case 0x3a9484u: goto label_3a9484;
        case 0x3a9488u: goto label_3a9488;
        case 0x3a948cu: goto label_3a948c;
        case 0x3a9490u: goto label_3a9490;
        case 0x3a9494u: goto label_3a9494;
        case 0x3a9498u: goto label_3a9498;
        case 0x3a949cu: goto label_3a949c;
        case 0x3a94a0u: goto label_3a94a0;
        case 0x3a94a4u: goto label_3a94a4;
        case 0x3a94a8u: goto label_3a94a8;
        case 0x3a94acu: goto label_3a94ac;
        case 0x3a94b0u: goto label_3a94b0;
        case 0x3a94b4u: goto label_3a94b4;
        case 0x3a94b8u: goto label_3a94b8;
        case 0x3a94bcu: goto label_3a94bc;
        case 0x3a94c0u: goto label_3a94c0;
        case 0x3a94c4u: goto label_3a94c4;
        case 0x3a94c8u: goto label_3a94c8;
        case 0x3a94ccu: goto label_3a94cc;
        case 0x3a94d0u: goto label_3a94d0;
        case 0x3a94d4u: goto label_3a94d4;
        case 0x3a94d8u: goto label_3a94d8;
        case 0x3a94dcu: goto label_3a94dc;
        case 0x3a94e0u: goto label_3a94e0;
        case 0x3a94e4u: goto label_3a94e4;
        case 0x3a94e8u: goto label_3a94e8;
        case 0x3a94ecu: goto label_3a94ec;
        case 0x3a94f0u: goto label_3a94f0;
        case 0x3a94f4u: goto label_3a94f4;
        case 0x3a94f8u: goto label_3a94f8;
        case 0x3a94fcu: goto label_3a94fc;
        case 0x3a9500u: goto label_3a9500;
        case 0x3a9504u: goto label_3a9504;
        case 0x3a9508u: goto label_3a9508;
        case 0x3a950cu: goto label_3a950c;
        case 0x3a9510u: goto label_3a9510;
        case 0x3a9514u: goto label_3a9514;
        case 0x3a9518u: goto label_3a9518;
        case 0x3a951cu: goto label_3a951c;
        case 0x3a9520u: goto label_3a9520;
        case 0x3a9524u: goto label_3a9524;
        case 0x3a9528u: goto label_3a9528;
        case 0x3a952cu: goto label_3a952c;
        case 0x3a9530u: goto label_3a9530;
        case 0x3a9534u: goto label_3a9534;
        case 0x3a9538u: goto label_3a9538;
        case 0x3a953cu: goto label_3a953c;
        case 0x3a9540u: goto label_3a9540;
        case 0x3a9544u: goto label_3a9544;
        case 0x3a9548u: goto label_3a9548;
        case 0x3a954cu: goto label_3a954c;
        case 0x3a9550u: goto label_3a9550;
        case 0x3a9554u: goto label_3a9554;
        case 0x3a9558u: goto label_3a9558;
        case 0x3a955cu: goto label_3a955c;
        case 0x3a9560u: goto label_3a9560;
        case 0x3a9564u: goto label_3a9564;
        case 0x3a9568u: goto label_3a9568;
        case 0x3a956cu: goto label_3a956c;
        case 0x3a9570u: goto label_3a9570;
        case 0x3a9574u: goto label_3a9574;
        case 0x3a9578u: goto label_3a9578;
        case 0x3a957cu: goto label_3a957c;
        case 0x3a9580u: goto label_3a9580;
        case 0x3a9584u: goto label_3a9584;
        case 0x3a9588u: goto label_3a9588;
        case 0x3a958cu: goto label_3a958c;
        case 0x3a9590u: goto label_3a9590;
        case 0x3a9594u: goto label_3a9594;
        case 0x3a9598u: goto label_3a9598;
        case 0x3a959cu: goto label_3a959c;
        case 0x3a95a0u: goto label_3a95a0;
        case 0x3a95a4u: goto label_3a95a4;
        case 0x3a95a8u: goto label_3a95a8;
        case 0x3a95acu: goto label_3a95ac;
        case 0x3a95b0u: goto label_3a95b0;
        case 0x3a95b4u: goto label_3a95b4;
        case 0x3a95b8u: goto label_3a95b8;
        case 0x3a95bcu: goto label_3a95bc;
        case 0x3a95c0u: goto label_3a95c0;
        case 0x3a95c4u: goto label_3a95c4;
        case 0x3a95c8u: goto label_3a95c8;
        case 0x3a95ccu: goto label_3a95cc;
        case 0x3a95d0u: goto label_3a95d0;
        case 0x3a95d4u: goto label_3a95d4;
        case 0x3a95d8u: goto label_3a95d8;
        case 0x3a95dcu: goto label_3a95dc;
        case 0x3a95e0u: goto label_3a95e0;
        case 0x3a95e4u: goto label_3a95e4;
        case 0x3a95e8u: goto label_3a95e8;
        case 0x3a95ecu: goto label_3a95ec;
        case 0x3a95f0u: goto label_3a95f0;
        case 0x3a95f4u: goto label_3a95f4;
        case 0x3a95f8u: goto label_3a95f8;
        case 0x3a95fcu: goto label_3a95fc;
        case 0x3a9600u: goto label_3a9600;
        case 0x3a9604u: goto label_3a9604;
        case 0x3a9608u: goto label_3a9608;
        case 0x3a960cu: goto label_3a960c;
        case 0x3a9610u: goto label_3a9610;
        case 0x3a9614u: goto label_3a9614;
        case 0x3a9618u: goto label_3a9618;
        case 0x3a961cu: goto label_3a961c;
        case 0x3a9620u: goto label_3a9620;
        case 0x3a9624u: goto label_3a9624;
        case 0x3a9628u: goto label_3a9628;
        case 0x3a962cu: goto label_3a962c;
        case 0x3a9630u: goto label_3a9630;
        case 0x3a9634u: goto label_3a9634;
        case 0x3a9638u: goto label_3a9638;
        case 0x3a963cu: goto label_3a963c;
        case 0x3a9640u: goto label_3a9640;
        case 0x3a9644u: goto label_3a9644;
        case 0x3a9648u: goto label_3a9648;
        case 0x3a964cu: goto label_3a964c;
        case 0x3a9650u: goto label_3a9650;
        case 0x3a9654u: goto label_3a9654;
        case 0x3a9658u: goto label_3a9658;
        case 0x3a965cu: goto label_3a965c;
        case 0x3a9660u: goto label_3a9660;
        case 0x3a9664u: goto label_3a9664;
        case 0x3a9668u: goto label_3a9668;
        case 0x3a966cu: goto label_3a966c;
        case 0x3a9670u: goto label_3a9670;
        case 0x3a9674u: goto label_3a9674;
        case 0x3a9678u: goto label_3a9678;
        case 0x3a967cu: goto label_3a967c;
        case 0x3a9680u: goto label_3a9680;
        case 0x3a9684u: goto label_3a9684;
        case 0x3a9688u: goto label_3a9688;
        case 0x3a968cu: goto label_3a968c;
        case 0x3a9690u: goto label_3a9690;
        case 0x3a9694u: goto label_3a9694;
        case 0x3a9698u: goto label_3a9698;
        case 0x3a969cu: goto label_3a969c;
        case 0x3a96a0u: goto label_3a96a0;
        case 0x3a96a4u: goto label_3a96a4;
        case 0x3a96a8u: goto label_3a96a8;
        case 0x3a96acu: goto label_3a96ac;
        case 0x3a96b0u: goto label_3a96b0;
        case 0x3a96b4u: goto label_3a96b4;
        case 0x3a96b8u: goto label_3a96b8;
        case 0x3a96bcu: goto label_3a96bc;
        case 0x3a96c0u: goto label_3a96c0;
        case 0x3a96c4u: goto label_3a96c4;
        case 0x3a96c8u: goto label_3a96c8;
        case 0x3a96ccu: goto label_3a96cc;
        case 0x3a96d0u: goto label_3a96d0;
        case 0x3a96d4u: goto label_3a96d4;
        case 0x3a96d8u: goto label_3a96d8;
        case 0x3a96dcu: goto label_3a96dc;
        case 0x3a96e0u: goto label_3a96e0;
        case 0x3a96e4u: goto label_3a96e4;
        case 0x3a96e8u: goto label_3a96e8;
        case 0x3a96ecu: goto label_3a96ec;
        case 0x3a96f0u: goto label_3a96f0;
        case 0x3a96f4u: goto label_3a96f4;
        case 0x3a96f8u: goto label_3a96f8;
        case 0x3a96fcu: goto label_3a96fc;
        case 0x3a9700u: goto label_3a9700;
        case 0x3a9704u: goto label_3a9704;
        case 0x3a9708u: goto label_3a9708;
        case 0x3a970cu: goto label_3a970c;
        case 0x3a9710u: goto label_3a9710;
        case 0x3a9714u: goto label_3a9714;
        case 0x3a9718u: goto label_3a9718;
        case 0x3a971cu: goto label_3a971c;
        case 0x3a9720u: goto label_3a9720;
        case 0x3a9724u: goto label_3a9724;
        case 0x3a9728u: goto label_3a9728;
        case 0x3a972cu: goto label_3a972c;
        case 0x3a9730u: goto label_3a9730;
        case 0x3a9734u: goto label_3a9734;
        case 0x3a9738u: goto label_3a9738;
        case 0x3a973cu: goto label_3a973c;
        case 0x3a9740u: goto label_3a9740;
        case 0x3a9744u: goto label_3a9744;
        case 0x3a9748u: goto label_3a9748;
        case 0x3a974cu: goto label_3a974c;
        case 0x3a9750u: goto label_3a9750;
        case 0x3a9754u: goto label_3a9754;
        case 0x3a9758u: goto label_3a9758;
        case 0x3a975cu: goto label_3a975c;
        case 0x3a9760u: goto label_3a9760;
        case 0x3a9764u: goto label_3a9764;
        case 0x3a9768u: goto label_3a9768;
        case 0x3a976cu: goto label_3a976c;
        case 0x3a9770u: goto label_3a9770;
        case 0x3a9774u: goto label_3a9774;
        case 0x3a9778u: goto label_3a9778;
        case 0x3a977cu: goto label_3a977c;
        case 0x3a9780u: goto label_3a9780;
        case 0x3a9784u: goto label_3a9784;
        case 0x3a9788u: goto label_3a9788;
        case 0x3a978cu: goto label_3a978c;
        case 0x3a9790u: goto label_3a9790;
        case 0x3a9794u: goto label_3a9794;
        case 0x3a9798u: goto label_3a9798;
        case 0x3a979cu: goto label_3a979c;
        case 0x3a97a0u: goto label_3a97a0;
        case 0x3a97a4u: goto label_3a97a4;
        case 0x3a97a8u: goto label_3a97a8;
        case 0x3a97acu: goto label_3a97ac;
        case 0x3a97b0u: goto label_3a97b0;
        case 0x3a97b4u: goto label_3a97b4;
        case 0x3a97b8u: goto label_3a97b8;
        case 0x3a97bcu: goto label_3a97bc;
        case 0x3a97c0u: goto label_3a97c0;
        case 0x3a97c4u: goto label_3a97c4;
        case 0x3a97c8u: goto label_3a97c8;
        case 0x3a97ccu: goto label_3a97cc;
        case 0x3a97d0u: goto label_3a97d0;
        case 0x3a97d4u: goto label_3a97d4;
        case 0x3a97d8u: goto label_3a97d8;
        case 0x3a97dcu: goto label_3a97dc;
        case 0x3a97e0u: goto label_3a97e0;
        case 0x3a97e4u: goto label_3a97e4;
        case 0x3a97e8u: goto label_3a97e8;
        case 0x3a97ecu: goto label_3a97ec;
        case 0x3a97f0u: goto label_3a97f0;
        case 0x3a97f4u: goto label_3a97f4;
        case 0x3a97f8u: goto label_3a97f8;
        case 0x3a97fcu: goto label_3a97fc;
        case 0x3a9800u: goto label_3a9800;
        case 0x3a9804u: goto label_3a9804;
        case 0x3a9808u: goto label_3a9808;
        case 0x3a980cu: goto label_3a980c;
        case 0x3a9810u: goto label_3a9810;
        case 0x3a9814u: goto label_3a9814;
        case 0x3a9818u: goto label_3a9818;
        case 0x3a981cu: goto label_3a981c;
        case 0x3a9820u: goto label_3a9820;
        case 0x3a9824u: goto label_3a9824;
        case 0x3a9828u: goto label_3a9828;
        case 0x3a982cu: goto label_3a982c;
        case 0x3a9830u: goto label_3a9830;
        case 0x3a9834u: goto label_3a9834;
        case 0x3a9838u: goto label_3a9838;
        case 0x3a983cu: goto label_3a983c;
        case 0x3a9840u: goto label_3a9840;
        case 0x3a9844u: goto label_3a9844;
        case 0x3a9848u: goto label_3a9848;
        case 0x3a984cu: goto label_3a984c;
        case 0x3a9850u: goto label_3a9850;
        case 0x3a9854u: goto label_3a9854;
        case 0x3a9858u: goto label_3a9858;
        case 0x3a985cu: goto label_3a985c;
        case 0x3a9860u: goto label_3a9860;
        case 0x3a9864u: goto label_3a9864;
        case 0x3a9868u: goto label_3a9868;
        case 0x3a986cu: goto label_3a986c;
        case 0x3a9870u: goto label_3a9870;
        case 0x3a9874u: goto label_3a9874;
        case 0x3a9878u: goto label_3a9878;
        case 0x3a987cu: goto label_3a987c;
        case 0x3a9880u: goto label_3a9880;
        case 0x3a9884u: goto label_3a9884;
        case 0x3a9888u: goto label_3a9888;
        case 0x3a988cu: goto label_3a988c;
        case 0x3a9890u: goto label_3a9890;
        case 0x3a9894u: goto label_3a9894;
        case 0x3a9898u: goto label_3a9898;
        case 0x3a989cu: goto label_3a989c;
        case 0x3a98a0u: goto label_3a98a0;
        case 0x3a98a4u: goto label_3a98a4;
        case 0x3a98a8u: goto label_3a98a8;
        case 0x3a98acu: goto label_3a98ac;
        case 0x3a98b0u: goto label_3a98b0;
        case 0x3a98b4u: goto label_3a98b4;
        case 0x3a98b8u: goto label_3a98b8;
        case 0x3a98bcu: goto label_3a98bc;
        case 0x3a98c0u: goto label_3a98c0;
        case 0x3a98c4u: goto label_3a98c4;
        case 0x3a98c8u: goto label_3a98c8;
        case 0x3a98ccu: goto label_3a98cc;
        case 0x3a98d0u: goto label_3a98d0;
        case 0x3a98d4u: goto label_3a98d4;
        case 0x3a98d8u: goto label_3a98d8;
        case 0x3a98dcu: goto label_3a98dc;
        case 0x3a98e0u: goto label_3a98e0;
        case 0x3a98e4u: goto label_3a98e4;
        case 0x3a98e8u: goto label_3a98e8;
        case 0x3a98ecu: goto label_3a98ec;
        case 0x3a98f0u: goto label_3a98f0;
        case 0x3a98f4u: goto label_3a98f4;
        case 0x3a98f8u: goto label_3a98f8;
        case 0x3a98fcu: goto label_3a98fc;
        case 0x3a9900u: goto label_3a9900;
        case 0x3a9904u: goto label_3a9904;
        case 0x3a9908u: goto label_3a9908;
        case 0x3a990cu: goto label_3a990c;
        case 0x3a9910u: goto label_3a9910;
        case 0x3a9914u: goto label_3a9914;
        case 0x3a9918u: goto label_3a9918;
        case 0x3a991cu: goto label_3a991c;
        case 0x3a9920u: goto label_3a9920;
        case 0x3a9924u: goto label_3a9924;
        case 0x3a9928u: goto label_3a9928;
        case 0x3a992cu: goto label_3a992c;
        case 0x3a9930u: goto label_3a9930;
        case 0x3a9934u: goto label_3a9934;
        case 0x3a9938u: goto label_3a9938;
        case 0x3a993cu: goto label_3a993c;
        case 0x3a9940u: goto label_3a9940;
        case 0x3a9944u: goto label_3a9944;
        case 0x3a9948u: goto label_3a9948;
        case 0x3a994cu: goto label_3a994c;
        case 0x3a9950u: goto label_3a9950;
        case 0x3a9954u: goto label_3a9954;
        case 0x3a9958u: goto label_3a9958;
        case 0x3a995cu: goto label_3a995c;
        case 0x3a9960u: goto label_3a9960;
        case 0x3a9964u: goto label_3a9964;
        case 0x3a9968u: goto label_3a9968;
        case 0x3a996cu: goto label_3a996c;
        case 0x3a9970u: goto label_3a9970;
        case 0x3a9974u: goto label_3a9974;
        case 0x3a9978u: goto label_3a9978;
        case 0x3a997cu: goto label_3a997c;
        case 0x3a9980u: goto label_3a9980;
        case 0x3a9984u: goto label_3a9984;
        case 0x3a9988u: goto label_3a9988;
        case 0x3a998cu: goto label_3a998c;
        case 0x3a9990u: goto label_3a9990;
        case 0x3a9994u: goto label_3a9994;
        case 0x3a9998u: goto label_3a9998;
        case 0x3a999cu: goto label_3a999c;
        case 0x3a99a0u: goto label_3a99a0;
        case 0x3a99a4u: goto label_3a99a4;
        case 0x3a99a8u: goto label_3a99a8;
        case 0x3a99acu: goto label_3a99ac;
        case 0x3a99b0u: goto label_3a99b0;
        case 0x3a99b4u: goto label_3a99b4;
        case 0x3a99b8u: goto label_3a99b8;
        case 0x3a99bcu: goto label_3a99bc;
        case 0x3a99c0u: goto label_3a99c0;
        case 0x3a99c4u: goto label_3a99c4;
        case 0x3a99c8u: goto label_3a99c8;
        case 0x3a99ccu: goto label_3a99cc;
        case 0x3a99d0u: goto label_3a99d0;
        case 0x3a99d4u: goto label_3a99d4;
        case 0x3a99d8u: goto label_3a99d8;
        case 0x3a99dcu: goto label_3a99dc;
        case 0x3a99e0u: goto label_3a99e0;
        case 0x3a99e4u: goto label_3a99e4;
        case 0x3a99e8u: goto label_3a99e8;
        case 0x3a99ecu: goto label_3a99ec;
        case 0x3a99f0u: goto label_3a99f0;
        case 0x3a99f4u: goto label_3a99f4;
        case 0x3a99f8u: goto label_3a99f8;
        case 0x3a99fcu: goto label_3a99fc;
        case 0x3a9a00u: goto label_3a9a00;
        case 0x3a9a04u: goto label_3a9a04;
        case 0x3a9a08u: goto label_3a9a08;
        case 0x3a9a0cu: goto label_3a9a0c;
        case 0x3a9a10u: goto label_3a9a10;
        case 0x3a9a14u: goto label_3a9a14;
        case 0x3a9a18u: goto label_3a9a18;
        case 0x3a9a1cu: goto label_3a9a1c;
        case 0x3a9a20u: goto label_3a9a20;
        case 0x3a9a24u: goto label_3a9a24;
        case 0x3a9a28u: goto label_3a9a28;
        case 0x3a9a2cu: goto label_3a9a2c;
        case 0x3a9a30u: goto label_3a9a30;
        case 0x3a9a34u: goto label_3a9a34;
        case 0x3a9a38u: goto label_3a9a38;
        case 0x3a9a3cu: goto label_3a9a3c;
        case 0x3a9a40u: goto label_3a9a40;
        case 0x3a9a44u: goto label_3a9a44;
        case 0x3a9a48u: goto label_3a9a48;
        case 0x3a9a4cu: goto label_3a9a4c;
        case 0x3a9a50u: goto label_3a9a50;
        case 0x3a9a54u: goto label_3a9a54;
        default: break;
    }

    ctx->pc = 0x3a9268u;

label_3a9268:
    // 0x3a9268: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x3a9268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_3a926c:
    // 0x3a926c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3a926cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3a9270:
    // 0x3a9270: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x3a9270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_3a9274:
    // 0x3a9274: 0x2442ce80  addiu       $v0, $v0, -0x3180
    ctx->pc = 0x3a9274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
label_3a9278:
    // 0x3a9278: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x3a9278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_3a927c:
    // 0x3a927c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3a927cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3a9280:
    // 0x3a9280: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x3a9280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_3a9284:
    // 0x3a9284: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a9284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a9288:
    // 0x3a9288: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3a9288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3a928c:
    // 0x3a928c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3a928cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a9290:
    // 0x3a9290: 0xe7ba0150  swc1        $f26, 0x150($sp)
    ctx->pc = 0x3a9290u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_3a9294:
    // 0x3a9294: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x3a9294u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3a9298:
    // 0x3a9298: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x3a9298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_3a929c:
    // 0x3a929c: 0x46006686  mov.s       $f26, $f12
    ctx->pc = 0x3a929cu;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
label_3a92a0:
    // 0x3a92a0: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x3a92a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_3a92a4:
    // 0x3a92a4: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x3a92a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_3a92a8:
    // 0x3a92a8: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x3a92a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_3a92ac:
    // 0x3a92ac: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x3a92acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_3a92b0:
    // 0x3a92b0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3a92b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3a92b4:
    // 0x3a92b4: 0xe7b90148  swc1        $f25, 0x148($sp)
    ctx->pc = 0x3a92b4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_3a92b8:
    // 0x3a92b8: 0xe7b70138  swc1        $f23, 0x138($sp)
    ctx->pc = 0x3a92b8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_3a92bc:
    // 0x3a92bc: 0xe7b60130  swc1        $f22, 0x130($sp)
    ctx->pc = 0x3a92bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_3a92c0:
    // 0x3a92c0: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x3a92c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_3a92c4:
    // 0x3a92c4: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x3a92c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_3a92c8:
    // 0x3a92c8: 0xe7b80140  swc1        $f24, 0x140($sp)
    ctx->pc = 0x3a92c8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_3a92cc:
    // 0x3a92cc: 0x126001cd  beqz        $s3, . + 4 + (0x1CD << 2)
label_3a92d0:
    if (ctx->pc == 0x3A92D0u) {
        ctx->pc = 0x3A92D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A92CCu;
        // 0x3a92d0: 0xc45806f8  lwc1        $f24, 0x6F8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A92D4u;
        goto label_3a92d4;
    }
    ctx->pc = 0x3A92CCu;
    {
        const bool branch_taken_0x3a92cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A92D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A92CCu;
        // 0x3a92d0: 0xc45806f8  lwc1        $f24, 0x6F8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a92cc) {
            ctx->pc = 0x3A9A04u;
            goto label_3a9a04;
        }
    }
    ctx->pc = 0x3A92D4u;
label_3a92d4:
    // 0x3a92d4: 0xc1036d2  jal         func_40DB48
label_3a92d8:
    if (ctx->pc == 0x3A92D8u) {
        ctx->pc = 0x3A92D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A92D4u;
        // 0x3a92d8: 0x8e640134  lw          $a0, 0x134($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A92DCu;
        goto label_3a92dc;
    }
    ctx->pc = 0x3A92D4u;
    SET_GPR_U32(ctx, 31, 0x3A92DCu);
    ctx->pc = 0x3A92D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A92D4u;
    // 0x3a92d8: 0x8e640134  lw          $a0, 0x134($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3A92D4u, 0x3A92DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A92DCu;
label_3a92dc:
    // 0x3a92dc: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x3a92dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_3a92e0:
    // 0x3a92e0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x3a92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_3a92e4:
    // 0x3a92e4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3a92e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3a92e8:
    // 0x3a92e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3a92ec:
    if (ctx->pc == 0x3A92ECu) {
        ctx->pc = 0x3A92ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A92E8u;
        // 0x3a92ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A92F0u;
        goto label_3a92f0;
    }
    ctx->pc = 0x3A92E8u;
    {
        const bool branch_taken_0x3a92e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A92ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A92E8u;
        // 0x3a92ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a92e8) {
            ctx->pc = 0x3A9304u;
            goto label_3a9304;
        }
    }
    ctx->pc = 0x3A92F0u;
label_3a92f0:
    // 0x3a92f0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3a92f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3a92f4:
    // 0x3a92f4: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x3a92f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_3a92f8:
    // 0x3a92f8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x3a92f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a92fc:
    // 0x3a92fc: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a9300:
    if (ctx->pc == 0x3A9300u) {
        ctx->pc = 0x3A9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A92FCu;
        // 0x3a9300: 0xafa30068  sw          $v1, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9304u;
        goto label_3a9304;
    }
    ctx->pc = 0x3A92FCu;
    {
        const bool branch_taken_0x3a92fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A92FCu;
        // 0x3a9300: 0xafa30068  sw          $v1, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a92fc) {
            ctx->pc = 0x3A9314u;
            goto label_3a9314;
        }
    }
    ctx->pc = 0x3A9304u;
label_3a9304:
    // 0x3a9304: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a9304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a9308:
    // 0x3a9308: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x3a9308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_3a930c:
    // 0x3a930c: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x3a930cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
label_3a9310:
    // 0x3a9310: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a9310u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a9314:
    // 0x3a9314: 0xc0eb7e6  jal         func_3ADF98
label_3a9318:
    if (ctx->pc == 0x3A9318u) {
        ctx->pc = 0x3A9318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9314u;
        // 0x3a9318: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A931Cu;
        goto label_3a931c;
    }
    ctx->pc = 0x3A9314u;
    SET_GPR_U32(ctx, 31, 0x3A931Cu);
    ctx->pc = 0x3A9318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9314u;
    // 0x3a9318: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADF98u, 0x3A9314u, 0x3A931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A931Cu;
label_3a931c:
    // 0x3a931c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3a931cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3a9320:
    // 0x3a9320: 0xc7cc0000  lwc1        $f12, 0x0($fp)
    ctx->pc = 0x3a9320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3a9324:
    // 0x3a9324: 0xc7cd0004  lwc1        $f13, 0x4($fp)
    ctx->pc = 0x3a9324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3a9328:
    // 0x3a9328: 0x4600a5c6  mov.s       $f23, $f20
    ctx->pc = 0x3a9328u;
    ctx->f[23] = FPU_MOV_S(ctx->f[20]);
label_3a932c:
    // 0x3a932c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a932cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3a9330:
    // 0x3a9330: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3a9330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3a9334:
    // 0x3a9334: 0xc0eb910  jal         func_3AE440
label_3a9338:
    if (ctx->pc == 0x3A9338u) {
        ctx->pc = 0x3A9338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9334u;
        // 0x3a9338: 0x4600be46  mov.s       $f25, $f23 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A933Cu;
        goto label_3a933c;
    }
    ctx->pc = 0x3A9334u;
    SET_GPR_U32(ctx, 31, 0x3A933Cu);
    ctx->pc = 0x3A9338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9334u;
    // 0x3a9338: 0x4600be46  mov.s       $f25, $f23 (Delay Slot)
    ctx->f[25] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE440u, 0x3A9334u, 0x3A933Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A933Cu;
label_3a933c:
    // 0x3a933c: 0x4600bd46  mov.s       $f21, $f23
    ctx->pc = 0x3a933cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[23]);
label_3a9340:
    // 0x3a9340: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x3a9340u;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
label_3a9344:
    // 0x3a9344: 0xc0eb8f8  jal         func_3AE3E0
label_3a9348:
    if (ctx->pc == 0x3A9348u) {
        ctx->pc = 0x3A9348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9344u;
        // 0x3a9348: 0x4600d306  mov.s       $f12, $f26 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[26]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A934Cu;
        goto label_3a934c;
    }
    ctx->pc = 0x3A9344u;
    SET_GPR_U32(ctx, 31, 0x3A934Cu);
    ctx->pc = 0x3A9348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9344u;
    // 0x3a9348: 0x4600d306  mov.s       $f12, $f26 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE3E0u, 0x3A9344u, 0x3A934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A934Cu;
label_3a934c:
    // 0x3a934c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3a934cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3a9350:
    // 0x3a9350: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a9350u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3a9354:
    // 0x3a9354: 0xc66d0008  lwc1        $f13, 0x8($s3)
    ctx->pc = 0x3a9354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3a9358:
    // 0x3a9358: 0xc0eb910  jal         func_3AE440
label_3a935c:
    if (ctx->pc == 0x3A935Cu) {
        ctx->pc = 0x3A935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9358u;
        // 0x3a935c: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9360u;
        goto label_3a9360;
    }
    ctx->pc = 0x3A9358u;
    SET_GPR_U32(ctx, 31, 0x3A9360u);
    ctx->pc = 0x3A935Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9358u;
    // 0x3a935c: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE440u, 0x3A9358u, 0x3A9360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9360u;
label_3a9360:
    // 0x3a9360: 0xc0eb85a  jal         func_3AE168
label_3a9364:
    if (ctx->pc == 0x3A9364u) {
        ctx->pc = 0x3A9368u;
        goto label_3a9368;
    }
    ctx->pc = 0x3A9360u;
    SET_GPR_U32(ctx, 31, 0x3A9368u);
    ctx->pc = 0x3AE168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE168u, 0x3A9360u, 0x3A9368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9368u;
label_3a9368:
    // 0x3a9368: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x3a9368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_3a936c:
    // 0x3a936c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a936cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a9370:
    // 0x3a9370: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a9370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a9374:
    // 0x3a9374: 0xc0eb3c8  jal         func_3ACF20
label_3a9378:
    if (ctx->pc == 0x3A9378u) {
        ctx->pc = 0x3A9378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9374u;
        // 0x3a9378: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A937Cu;
        goto label_3a937c;
    }
    ctx->pc = 0x3A9374u;
    SET_GPR_U32(ctx, 31, 0x3A937Cu);
    ctx->pc = 0x3A9378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9374u;
    // 0x3a9378: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACF20u, 0x3A9374u, 0x3A937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A937Cu;
label_3a937c:
    // 0x3a937c: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3a937cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_3a9380:
    // 0x3a9380: 0x2322021  addu        $a0, $s1, $s2
    ctx->pc = 0x3a9380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_3a9384:
    // 0x3a9384: 0x24a6ce80  addiu       $a2, $a1, -0x3180
    ctx->pc = 0x3a9384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954624));
label_3a9388:
    // 0x3a9388: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3a9388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3a938c:
    // 0x3a938c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x3a938cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3a9390:
    // 0x3a9390: 0x4600b503  div.s       $f20, $f22, $f0
    ctx->pc = 0x3a9390u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[22], ctx->f[0]); }
label_3a9394:
    // 0x3a9394: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3a9394u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3a9398:
    // 0x3a9398: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x3a9398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_3a939c:
    // 0x3a939c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3a939cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3a93a0:
    // 0x3a93a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a93a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3a93a4:
    // 0x3a93a4: 0x1860017f  blez        $v1, . + 4 + (0x17F << 2)
label_3a93a8:
    if (ctx->pc == 0x3A93A8u) {
        ctx->pc = 0x3A93A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A93A4u;
        // 0x3a93a8: 0x8cc50504  lw          $a1, 0x504($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A93ACu;
        goto label_3a93ac;
    }
    ctx->pc = 0x3A93A4u;
    {
        const bool branch_taken_0x3a93a4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3A93A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A93A4u;
        // 0x3a93a8: 0x8cc50504  lw          $a1, 0x504($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a93a4) {
            ctx->pc = 0x3A99A4u;
            goto label_3a99a4;
        }
    }
    ctx->pc = 0x3A93ACu;
label_3a93ac:
    // 0x3a93ac: 0x26660024  addiu       $a2, $s3, 0x24
    ctx->pc = 0x3a93acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
label_3a93b0:
    // 0x3a93b0: 0x3c1738e3  lui         $s7, 0x38E3
    ctx->pc = 0x3a93b0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)14563 << 16));
label_3a93b4:
    // 0x3a93b4: 0xafa60074  sw          $a2, 0x74($sp)
    ctx->pc = 0x3a93b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 6));
label_3a93b8:
    // 0x3a93b8: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x3a93b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a93bc:
    // 0x3a93bc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3a93bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a93c0:
    // 0x3a93c0: 0x36f78e39  ori         $s7, $s7, 0x8E39
    ctx->pc = 0x3a93c0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)36409);
label_3a93c4:
    // 0x3a93c4: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x3a93c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
label_3a93c8:
    // 0x3a93c8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_3a93cc:
    if (ctx->pc == 0x3A93CCu) {
        ctx->pc = 0x3A93CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A93C8u;
        // 0x3a93cc: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A93D0u;
        goto label_3a93d0;
    }
    ctx->pc = 0x3A93C8u;
    {
        const bool branch_taken_0x3a93c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A93CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A93C8u;
        // 0x3a93cc: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a93c8) {
            ctx->pc = 0x3A93F8u;
            goto label_3a93f8;
        }
    }
    ctx->pc = 0x3A93D0u;
label_3a93d0:
    // 0x3a93d0: 0x8e620124  lw          $v0, 0x124($s3)
    ctx->pc = 0x3a93d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 292)));
label_3a93d4:
    // 0x3a93d4: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x3a93d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a93d8:
    // 0x3a93d8: 0x482000a  bltzl       $a0, . + 4 + (0xA << 2)
label_3a93dc:
    if (ctx->pc == 0x3A93DCu) {
        ctx->pc = 0x3A93DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A93D8u;
        // 0x3a93dc: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A93E0u;
        goto label_3a93e0;
    }
    ctx->pc = 0x3A93D8u;
    {
        const bool branch_taken_0x3a93d8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3a93d8) {
            ctx->pc = 0x3A93DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A93D8u;
            // 0x3a93dc: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9404u;
            goto label_3a9404;
        }
    }
    ctx->pc = 0x3A93E0u;
label_3a93e0:
    // 0x3a93e0: 0x8e620128  lw          $v0, 0x128($s3)
    ctx->pc = 0x3a93e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 296)));
label_3a93e4:
    // 0x3a93e4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x3a93e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3a93e8:
    // 0x3a93e8: 0x54400075  bnel        $v0, $zero, . + 4 + (0x75 << 2)
label_3a93ec:
    if (ctx->pc == 0x3A93ECu) {
        ctx->pc = 0x3A93ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A93E8u;
        // 0x3a93ec: 0x8e63012c  lw          $v1, 0x12C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A93F0u;
        goto label_3a93f0;
    }
    ctx->pc = 0x3A93E8u;
    {
        const bool branch_taken_0x3a93e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a93e8) {
            ctx->pc = 0x3A93ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A93E8u;
            // 0x3a93ec: 0x8e63012c  lw          $v1, 0x12C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A95C0u;
            goto label_3a95c0;
        }
    }
    ctx->pc = 0x3A93F0u;
label_3a93f0:
    // 0x3a93f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_3a93f4:
    if (ctx->pc == 0x3A93F4u) {
        ctx->pc = 0x3A93F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A93F0u;
        // 0x3a93f4: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A93F8u;
        goto label_3a93f8;
    }
    ctx->pc = 0x3A93F0u;
    {
        const bool branch_taken_0x3a93f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A93F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A93F0u;
        // 0x3a93f4: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a93f0) {
            ctx->pc = 0x3A9404u;
            goto label_3a9404;
        }
    }
    ctx->pc = 0x3A93F8u;
label_3a93f8:
    // 0x3a93f8: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x3a93f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_3a93fc:
    // 0x3a93fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3a93fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a9400:
    // 0x3a9400: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x3a9400u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3a9404:
    // 0x3a9404: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x3a9404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_3a9408:
    // 0x3a9408: 0x286a021  addu        $s4, $s4, $a2
    ctx->pc = 0x3a9408u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
label_3a940c:
    // 0x3a940c: 0x480015d  bltz        $a0, . + 4 + (0x15D << 2)
label_3a9410:
    if (ctx->pc == 0x3A9410u) {
        ctx->pc = 0x3A9410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A940Cu;
        // 0x3a9410: 0x2a6a821  addu        $s5, $s5, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9414u;
        goto label_3a9414;
    }
    ctx->pc = 0x3A940Cu;
    {
        const bool branch_taken_0x3a940c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3A9410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A940Cu;
        // 0x3a9410: 0x2a6a821  addu        $s5, $s5, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a940c) {
            ctx->pc = 0x3A9984u;
            goto label_3a9984;
        }
    }
    ctx->pc = 0x3A9414u;
label_3a9414:
    // 0x3a9414: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x3a9414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_3a9418:
    // 0x3a9418: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x3a9418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_3a941c:
    // 0x3a941c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x3a941cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_3a9420:
    // 0x3a9420: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x3a9420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a9424:
    // 0x3a9424: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3a9424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3a9428:
    // 0x3a9428: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_3a942c:
    if (ctx->pc == 0x3A942Cu) {
        ctx->pc = 0x3A942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9428u;
        // 0x3a942c: 0x2ac2017b  slti        $v0, $s6, 0x17B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)379) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9430u;
        goto label_3a9430;
    }
    ctx->pc = 0x3A9428u;
    {
        const bool branch_taken_0x3a9428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3A942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9428u;
        // 0x3a942c: 0x2ac2017b  slti        $v0, $s6, 0x17B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)379) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9428) {
            ctx->pc = 0x3A9438u;
            goto label_3a9438;
        }
    }
    ctx->pc = 0x3A9430u;
label_3a9430:
    // 0x3a9430: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
label_3a9434:
    if (ctx->pc == 0x3A9434u) {
        ctx->pc = 0x3A9434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9430u;
        // 0x3a9434: 0xe7b70020  swc1        $f23, 0x20($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9438u;
        goto label_3a9438;
    }
    ctx->pc = 0x3A9430u;
    {
        const bool branch_taken_0x3a9430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a9430) {
            ctx->pc = 0x3A9434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9430u;
            // 0x3a9434: 0xe7b70020  swc1        $f23, 0x20($sp) (Delay Slot)
            { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A94F8u;
            goto label_3a94f8;
        }
    }
    ctx->pc = 0x3A9438u;
label_3a9438:
    // 0x3a9438: 0x12c00010  beqz        $s6, . + 4 + (0x10 << 2)
label_3a943c:
    if (ctx->pc == 0x3A943Cu) {
        ctx->pc = 0x3A943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9438u;
        // 0x3a943c: 0x3c060062  lui         $a2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9440u;
        goto label_3a9440;
    }
    ctx->pc = 0x3A9438u;
    {
        const bool branch_taken_0x3a9438 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9438u;
        // 0x3a943c: 0x3c060062  lui         $a2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9438) {
            ctx->pc = 0x3A947Cu;
            goto label_3a947c;
        }
    }
    ctx->pc = 0x3A9440u;
label_3a9440:
    // 0x3a9440: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x3a9440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3a9444:
    // 0x3a9444: 0x24d2ce80  addiu       $s2, $a2, -0x3180
    ctx->pc = 0x3a9444u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954624));
label_3a9448:
    // 0x3a9448: 0x8e440504  lw          $a0, 0x504($s2)
    ctx->pc = 0x3a9448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1284)));
label_3a944c:
    // 0x3a944c: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x3a944cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_3a9450:
    // 0x3a9450: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x3a9450u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3a9454:
    // 0x3a9454: 0xb72818  mult        $a1, $a1, $s7
    ctx->pc = 0x3a9454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3a9458:
    // 0x3a9458: 0xc1111fe  jal         func_4447F8
label_3a945c:
    if (ctx->pc == 0x3A945Cu) {
        ctx->pc = 0x3A945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9458u;
        // 0x3a945c: 0x52883  sra         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9460u;
        goto label_3a9460;
    }
    ctx->pc = 0x3A9458u;
    SET_GPR_U32(ctx, 31, 0x3A9460u);
    ctx->pc = 0x3A945Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9458u;
    // 0x3a945c: 0x52883  sra         $a1, $a1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4447F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4447F8u, 0x3A9458u, 0x3A9460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9460u;
label_3a9460:
    // 0x3a9460: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3a9464:
    if (ctx->pc == 0x3A9464u) {
        ctx->pc = 0x3A9464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9460u;
        // 0x3a9464: 0x26450200  addiu       $a1, $s2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9468u;
        goto label_3a9468;
    }
    ctx->pc = 0x3A9460u;
    {
        const bool branch_taken_0x3a9460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9460u;
        // 0x3a9464: 0x26450200  addiu       $a1, $s2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9460) {
            ctx->pc = 0x3A947Cu;
            goto label_3a947c;
        }
    }
    ctx->pc = 0x3A9468u;
label_3a9468:
    // 0x3a9468: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3a9468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3a946c:
    // 0x3a946c: 0xc111044  jal         func_444110
label_3a9470:
    if (ctx->pc == 0x3A9470u) {
        ctx->pc = 0x3A9470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A946Cu;
        // 0x3a9470: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9474u;
        goto label_3a9474;
    }
    ctx->pc = 0x3A946Cu;
    SET_GPR_U32(ctx, 31, 0x3A9474u);
    ctx->pc = 0x3A9470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A946Cu;
    // 0x3a9470: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444110u, 0x3A946Cu, 0x3A9474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9474u;
label_3a9474:
    // 0x3a9474: 0xc111228  jal         func_4448A0
label_3a9478:
    if (ctx->pc == 0x3A9478u) {
        ctx->pc = 0x3A947Cu;
        goto label_3a947c;
    }
    ctx->pc = 0x3A9474u;
    SET_GPR_U32(ctx, 31, 0x3A947Cu);
    ctx->pc = 0x4448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4448A0u, 0x3A9474u, 0x3A947Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A947Cu;
label_3a947c:
    // 0x3a947c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3a947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3a9480:
    // 0x3a9480: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x3a9480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_3a9484:
    // 0x3a9484: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
label_3a9488:
    if (ctx->pc == 0x3A9488u) {
        ctx->pc = 0x3A9488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9484u;
        // 0x3a9488: 0x3c060062  lui         $a2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A948Cu;
        goto label_3a948c;
    }
    ctx->pc = 0x3A9484u;
    {
        const bool branch_taken_0x3a9484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A9488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9484u;
        // 0x3a9488: 0x3c060062  lui         $a2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9484) {
            ctx->pc = 0x3A94C4u;
            goto label_3a94c4;
        }
    }
    ctx->pc = 0x3A948Cu;
label_3a948c:
    // 0x3a948c: 0x90450050  lbu         $a1, 0x50($v0)
    ctx->pc = 0x3a948cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 80)));
label_3a9490:
    // 0x3a9490: 0x24c6e880  addiu       $a2, $a2, -0x1780
    ctx->pc = 0x3a9490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961280));
label_3a9494:
    // 0x3a9494: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x3a9494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_3a9498:
    // 0x3a9498: 0x40f809  jalr        $v0
label_3a949c:
    if (ctx->pc == 0x3A949Cu) {
        ctx->pc = 0x3A949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9498u;
        // 0x3a949c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A94A0u;
        goto label_3a94a0;
    }
    ctx->pc = 0x3A9498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A94A0u);
        ctx->pc = 0x3A949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9498u;
        // 0x3a949c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9498u, 0x3A94A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A94A0u;
label_3a94a0:
    // 0x3a94a0: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3a94a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_3a94a4:
    // 0x3a94a4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3a94a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3a94a8:
    // 0x3a94a8: 0x24a5e880  addiu       $a1, $a1, -0x1780
    ctx->pc = 0x3a94a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
label_3a94ac:
    // 0x3a94ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a94acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a94b0:
    // 0x3a94b0: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x3a94b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_3a94b4:
    // 0x3a94b4: 0x40f809  jalr        $v0
label_3a94b8:
    if (ctx->pc == 0x3A94B8u) {
        ctx->pc = 0x3A94B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94B4u;
        // 0x3a94b8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A94BCu;
        goto label_3a94bc;
    }
    ctx->pc = 0x3A94B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A94BCu);
        ctx->pc = 0x3A94B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94B4u;
        // 0x3a94b8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A94B4u, 0x3A94BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A94BCu;
label_3a94bc:
    // 0x3a94bc: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x3a94bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3a94c0:
    // 0x3a94c0: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x3a94c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
label_3a94c4:
    // 0x3a94c4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3a94c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3a94c8:
    // 0x3a94c8: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x3a94c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_3a94cc:
    // 0x3a94cc: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x3a94ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_3a94d0:
    // 0x3a94d0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3a94d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a94d4:
    // 0x3a94d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3a94d8:
    if (ctx->pc == 0x3A94D8u) {
        ctx->pc = 0x3A94D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94D4u;
        // 0x3a94d8: 0x8c650504  lw          $a1, 0x504($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A94DCu;
        goto label_3a94dc;
    }
    ctx->pc = 0x3A94D4u;
    {
        const bool branch_taken_0x3a94d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A94D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94D4u;
        // 0x3a94d8: 0x8c650504  lw          $a1, 0x504($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a94d4) {
            ctx->pc = 0x3A94F4u;
            goto label_3a94f4;
        }
    }
    ctx->pc = 0x3A94DCu;
label_3a94dc:
    // 0x3a94dc: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x3a94dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_3a94e0:
    // 0x3a94e0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3a94e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_3a94e4:
    // 0x3a94e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3a94e8:
    if (ctx->pc == 0x3A94E8u) {
        ctx->pc = 0x3A94E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94E4u;
        // 0x3a94e8: 0x2404fffd  addiu       $a0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A94ECu;
        goto label_3a94ec;
    }
    ctx->pc = 0x3A94E4u;
    {
        const bool branch_taken_0x3a94e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A94E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94E4u;
        // 0x3a94e8: 0x2404fffd  addiu       $a0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a94e4) {
            ctx->pc = 0x3A94F4u;
            goto label_3a94f4;
        }
    }
    ctx->pc = 0x3A94ECu;
label_3a94ec:
    // 0x3a94ec: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x3a94ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3a94f0:
    // 0x3a94f0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3a94f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_3a94f4:
    // 0x3a94f4: 0xe7b70020  swc1        $f23, 0x20($sp)
    ctx->pc = 0x3a94f4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3a94f8:
    // 0x3a94f8: 0xe7b90024  swc1        $f25, 0x24($sp)
    ctx->pc = 0x3a94f8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3a94fc:
    // 0x3a94fc: 0xe7b80028  swc1        $f24, 0x28($sp)
    ctx->pc = 0x3a94fcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3a9500:
    // 0x3a9500: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x3a9500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3a9504:
    // 0x3a9504: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x3a9504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3a9508:
    // 0x3a9508: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3a9508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3a950c:
    // 0x3a950c: 0xb0a60007  sdl         $a2, 0x7($a1)
    ctx->pc = 0x3a950cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a9510:
    // 0x3a9510: 0xb4a60000  sdr         $a2, 0x0($a1)
    ctx->pc = 0x3a9510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a9514:
    // 0x3a9514: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x3a9514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_3a9518:
    // 0x3a9518: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x3a9518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a951c:
    // 0x3a951c: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x3a951cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_3a9520:
    // 0x3a9520: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x3a9520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_3a9524:
    // 0x3a9524: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x3a9524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a9528:
    // 0x3a9528: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a9528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3a952c:
    // 0x3a952c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_3a9530:
    if (ctx->pc == 0x3A9530u) {
        ctx->pc = 0x3A9530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A952Cu;
        // 0x3a9530: 0xe4a00020  swc1        $f0, 0x20($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9534u;
        goto label_3a9534;
    }
    ctx->pc = 0x3A952Cu;
    {
        const bool branch_taken_0x3a952c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A952Cu;
        // 0x3a9530: 0xe4a00020  swc1        $f0, 0x20($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a952c) {
            ctx->pc = 0x3A95CCu;
            goto label_3a95cc;
        }
    }
    ctx->pc = 0x3A9534u;
label_3a9534:
    // 0x3a9534: 0x4614a802  mul.s       $f0, $f21, $f20
    ctx->pc = 0x3a9534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
label_3a9538:
    // 0x3a9538: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x3a9538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a953c:
    // 0x3a953c: 0xc604004c  lwc1        $f4, 0x4C($s0)
    ctx->pc = 0x3a953cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a9540:
    // 0x3a9540: 0xc6050050  lwc1        $f5, 0x50($s0)
    ctx->pc = 0x3a9540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3a9544:
    // 0x3a9544: 0xc6060054  lwc1        $f6, 0x54($s0)
    ctx->pc = 0x3a9544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3a9548:
    // 0x3a9548: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3a9548u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3a954c:
    // 0x3a954c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x3a954cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_3a9550:
    // 0x3a9550: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x3a9550u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_3a9554:
    // 0x3a9554: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x3a9554u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_3a9558:
    // 0x3a9558: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x3a9558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a955c:
    // 0x3a955c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3a955cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3a9560:
    // 0x3a9560: 0xc6030034  lwc1        $f3, 0x34($s0)
    ctx->pc = 0x3a9560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a9564:
    // 0x3a9564: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x3a9564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a9568:
    // 0x3a9568: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x3a9568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a956c:
    // 0x3a956c: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x3a956cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_3a9570:
    // 0x3a9570: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3a9570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_3a9574:
    // 0x3a9574: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x3a9574u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3a9578:
    // 0x3a9578: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x3a9578u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_3a957c:
    // 0x3a957c: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x3a957cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3a9580:
    // 0x3a9580: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3a9580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3a9584:
    // 0x3a9584: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x3a9584u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3a9588:
    // 0x3a9588: 0x46001124  .word       0x46001124                   # cvt.w.s     $f4, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a9588u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
label_3a958c:
    // 0x3a958c: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x3a958cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3a9590:
    // 0x3a9590: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a9590u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_3a9594:
    // 0x3a9594: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x3a9594u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_3a9598:
    // 0x3a9598: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a9598u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_3a959c:
    // 0x3a959c: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x3a959cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3a95a0:
    // 0x3a95a0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a95a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a95a4:
    // 0x3a95a4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3a95a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3a95a8:
    // 0x3a95a8: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x3a95a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_3a95ac:
    // 0x3a95ac: 0xa0a4000c  sb          $a0, 0xC($a1)
    ctx->pc = 0x3a95acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 4));
label_3a95b0:
    // 0x3a95b0: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x3a95b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_3a95b4:
    // 0x3a95b4: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x3a95b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
label_3a95b8:
    // 0x3a95b8: 0x1000000d  b           . + 4 + (0xD << 2)
label_3a95bc:
    if (ctx->pc == 0x3A95BCu) {
        ctx->pc = 0x3A95BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A95B8u;
        // 0x3a95bc: 0xa0470002  sb          $a3, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A95C0u;
        goto label_3a95c0;
    }
    ctx->pc = 0x3A95B8u;
    {
        const bool branch_taken_0x3a95b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A95BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A95B8u;
        // 0x3a95bc: 0xa0470002  sb          $a3, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a95b8) {
            ctx->pc = 0x3A95F0u;
            goto label_3a95f0;
        }
    }
    ctx->pc = 0x3A95C0u;
label_3a95c0:
    // 0x3a95c0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x3a95c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3a95c4:
    // 0x3a95c4: 0x1000ff8e  b           . + 4 + (-0x72 << 2)
label_3a95c8:
    if (ctx->pc == 0x3A95C8u) {
        ctx->pc = 0x3A95C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A95C4u;
        // 0x3a95c8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A95CCu;
        goto label_3a95cc;
    }
    ctx->pc = 0x3A95C4u;
    {
        const bool branch_taken_0x3a95c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A95C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A95C4u;
        // 0x3a95c8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a95c4) {
            ctx->pc = 0x3A9400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9400;
        }
    }
    ctx->pc = 0x3A95CCu;
label_3a95cc:
    // 0x3a95cc: 0x92030060  lbu         $v1, 0x60($s0)
    ctx->pc = 0x3a95ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
label_3a95d0:
    // 0x3a95d0: 0x24a4000c  addiu       $a0, $a1, 0xC
    ctx->pc = 0x3a95d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_3a95d4:
    // 0x3a95d4: 0xa0a3000c  sb          $v1, 0xC($a1)
    ctx->pc = 0x3a95d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 3));
label_3a95d8:
    // 0x3a95d8: 0x92020061  lbu         $v0, 0x61($s0)
    ctx->pc = 0x3a95d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 97)));
label_3a95dc:
    // 0x3a95dc: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x3a95dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_3a95e0:
    // 0x3a95e0: 0x92030062  lbu         $v1, 0x62($s0)
    ctx->pc = 0x3a95e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 98)));
label_3a95e4:
    // 0x3a95e4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3a95e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_3a95e8:
    // 0x3a95e8: 0x92020063  lbu         $v0, 0x63($s0)
    ctx->pc = 0x3a95e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 99)));
label_3a95ec:
    // 0x3a95ec: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x3a95ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_3a95f0:
    // 0x3a95f0: 0x24a50024  addiu       $a1, $a1, 0x24
    ctx->pc = 0x3a95f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
label_3a95f4:
    // 0x3a95f4: 0xe7b70030  swc1        $f23, 0x30($sp)
    ctx->pc = 0x3a95f4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3a95f8:
    // 0x3a95f8: 0x4616c800  add.s       $f0, $f25, $f22
    ctx->pc = 0x3a95f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[25], ctx->f[22]);
label_3a95fc:
    // 0x3a95fc: 0xe7b80038  swc1        $f24, 0x38($sp)
    ctx->pc = 0x3a95fcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3a9600:
    // 0x3a9600: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3a9600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3a9604:
    // 0x3a9604: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x3a9604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3a9608:
    // 0x3a9608: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x3a9608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3a960c:
    // 0x3a960c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3a960cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3a9610:
    // 0x3a9610: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x3a9610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a9614:
    // 0x3a9614: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x3a9614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a9618:
    // 0x3a9618: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x3a9618u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_3a961c:
    // 0x3a961c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x3a961cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a9620:
    // 0x3a9620: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x3a9620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_3a9624:
    // 0x3a9624: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x3a9624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_3a9628:
    // 0x3a9628: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x3a9628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a962c:
    // 0x3a962c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a962cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3a9630:
    // 0x3a9630: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_3a9634:
    if (ctx->pc == 0x3A9634u) {
        ctx->pc = 0x3A9634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9630u;
        // 0x3a9634: 0xe4a00020  swc1        $f0, 0x20($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9638u;
        goto label_3a9638;
    }
    ctx->pc = 0x3A9630u;
    {
        const bool branch_taken_0x3a9630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9630u;
        // 0x3a9634: 0xe4a00020  swc1        $f0, 0x20($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9630) {
            ctx->pc = 0x3A96C8u;
            goto label_3a96c8;
        }
    }
    ctx->pc = 0x3A9638u;
label_3a9638:
    // 0x3a9638: 0x4614a802  mul.s       $f0, $f21, $f20
    ctx->pc = 0x3a9638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
label_3a963c:
    // 0x3a963c: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x3a963cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a9640:
    // 0x3a9640: 0xc604001c  lwc1        $f4, 0x1C($s0)
    ctx->pc = 0x3a9640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a9644:
    // 0x3a9644: 0xc6050020  lwc1        $f5, 0x20($s0)
    ctx->pc = 0x3a9644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3a9648:
    // 0x3a9648: 0xc6060024  lwc1        $f6, 0x24($s0)
    ctx->pc = 0x3a9648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3a964c:
    // 0x3a964c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3a964cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3a9650:
    // 0x3a9650: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x3a9650u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_3a9654:
    // 0x3a9654: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x3a9654u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_3a9658:
    // 0x3a9658: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x3a9658u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_3a965c:
    // 0x3a965c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x3a965cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a9660:
    // 0x3a9660: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3a9660u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3a9664:
    // 0x3a9664: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x3a9664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a9668:
    // 0x3a9668: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3a9668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a966c:
    // 0x3a966c: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x3a966cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a9670:
    // 0x3a9670: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x3a9670u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_3a9674:
    // 0x3a9674: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3a9674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_3a9678:
    // 0x3a9678: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x3a9678u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3a967c:
    // 0x3a967c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x3a967cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_3a9680:
    // 0x3a9680: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x3a9680u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3a9684:
    // 0x3a9684: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3a9684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3a9688:
    // 0x3a9688: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x3a9688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3a968c:
    // 0x3a968c: 0x46001124  .word       0x46001124                   # cvt.w.s     $f4, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a968cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
label_3a9690:
    // 0x3a9690: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x3a9690u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3a9694:
    // 0x3a9694: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a9694u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_3a9698:
    // 0x3a9698: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x3a9698u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_3a969c:
    // 0x3a969c: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a969cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_3a96a0:
    // 0x3a96a0: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x3a96a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3a96a4:
    // 0x3a96a4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a96a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a96a8:
    // 0x3a96a8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3a96a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3a96ac:
    // 0x3a96ac: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x3a96acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_3a96b0:
    // 0x3a96b0: 0xa0a4000c  sb          $a0, 0xC($a1)
    ctx->pc = 0x3a96b0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 4));
label_3a96b4:
    // 0x3a96b4: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x3a96b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_3a96b8:
    // 0x3a96b8: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x3a96b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
label_3a96bc:
    // 0x3a96bc: 0x1000000c  b           . + 4 + (0xC << 2)
label_3a96c0:
    if (ctx->pc == 0x3A96C0u) {
        ctx->pc = 0x3A96C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A96BCu;
        // 0x3a96c0: 0xa0470002  sb          $a3, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A96C4u;
        goto label_3a96c4;
    }
    ctx->pc = 0x3A96BCu;
    {
        const bool branch_taken_0x3a96bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A96C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A96BCu;
        // 0x3a96c0: 0xa0470002  sb          $a3, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a96bc) {
            ctx->pc = 0x3A96F0u;
            goto label_3a96f0;
        }
    }
    ctx->pc = 0x3A96C4u;
label_3a96c4:
    // 0x3a96c4: 0x0  nop
    ctx->pc = 0x3a96c4u;
    // NOP
label_3a96c8:
    // 0x3a96c8: 0x92030060  lbu         $v1, 0x60($s0)
    ctx->pc = 0x3a96c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
label_3a96cc:
    // 0x3a96cc: 0x24a4000c  addiu       $a0, $a1, 0xC
    ctx->pc = 0x3a96ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_3a96d0:
    // 0x3a96d0: 0xa0a3000c  sb          $v1, 0xC($a1)
    ctx->pc = 0x3a96d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 3));
label_3a96d4:
    // 0x3a96d4: 0x92020061  lbu         $v0, 0x61($s0)
    ctx->pc = 0x3a96d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 97)));
label_3a96d8:
    // 0x3a96d8: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x3a96d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_3a96dc:
    // 0x3a96dc: 0x92030062  lbu         $v1, 0x62($s0)
    ctx->pc = 0x3a96dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 98)));
label_3a96e0:
    // 0x3a96e0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3a96e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_3a96e4:
    // 0x3a96e4: 0x92020063  lbu         $v0, 0x63($s0)
    ctx->pc = 0x3a96e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 99)));
label_3a96e8:
    // 0x3a96e8: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x3a96e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_3a96ec:
    // 0x3a96ec: 0x0  nop
    ctx->pc = 0x3a96ecu;
    // NOP
label_3a96f0:
    // 0x3a96f0: 0x24a50024  addiu       $a1, $a1, 0x24
    ctx->pc = 0x3a96f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
label_3a96f4:
    // 0x3a96f4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3a96f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a96f8:
    // 0x3a96f8: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x3a96f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_3a96fc:
    // 0x3a96fc: 0xe7b90044  swc1        $f25, 0x44($sp)
    ctx->pc = 0x3a96fcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3a9700:
    // 0x3a9700: 0xe7b80048  swc1        $f24, 0x48($sp)
    ctx->pc = 0x3a9700u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3a9704:
    // 0x3a9704: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3a9704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3a9708:
    // 0x3a9708: 0x6ba20047  ldl         $v0, 0x47($sp)
    ctx->pc = 0x3a9708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3a970c:
    // 0x3a970c: 0x6fa20040  ldr         $v0, 0x40($sp)
    ctx->pc = 0x3a970cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3a9710:
    // 0x3a9710: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3a9710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3a9714:
    // 0x3a9714: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x3a9714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a9718:
    // 0x3a9718: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x3a9718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a971c:
    // 0x3a971c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x3a971cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_3a9720:
    // 0x3a9720: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x3a9720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a9724:
    // 0x3a9724: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x3a9724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_3a9728:
    // 0x3a9728: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x3a9728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_3a972c:
    // 0x3a972c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x3a972cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a9730:
    // 0x3a9730: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a9730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3a9734:
    // 0x3a9734: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_3a9738:
    if (ctx->pc == 0x3A9738u) {
        ctx->pc = 0x3A9738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9734u;
        // 0x3a9738: 0xe4a00020  swc1        $f0, 0x20($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A973Cu;
        goto label_3a973c;
    }
    ctx->pc = 0x3A9734u;
    {
        const bool branch_taken_0x3a9734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9734u;
        // 0x3a9738: 0xe4a00020  swc1        $f0, 0x20($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9734) {
            ctx->pc = 0x3A9800u;
            goto label_3a9800;
        }
    }
    ctx->pc = 0x3A973Cu;
label_3a973c:
    // 0x3a973c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3a973cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a9740:
    // 0x3a9740: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x3a9740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a9744:
    // 0x3a9744: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x3a9744u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3a9748:
    // 0x3a9748: 0xc604004c  lwc1        $f4, 0x4C($s0)
    ctx->pc = 0x3a9748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a974c:
    // 0x3a974c: 0xc6050050  lwc1        $f5, 0x50($s0)
    ctx->pc = 0x3a974cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3a9750:
    // 0x3a9750: 0xc6060054  lwc1        $f6, 0x54($s0)
    ctx->pc = 0x3a9750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3a9754:
    // 0x3a9754: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3a9754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3a9758:
    // 0x3a9758: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3a9758u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3a975c:
    // 0x3a975c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3a975cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3a9760:
    // 0x3a9760: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3a9760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a9764:
    // 0x3a9764: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x3a9764u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3a9768:
    // 0x3a9768: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3a9768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3a976c:
    // 0x3a976c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x3a976cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_3a9770:
    // 0x3a9770: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x3a9770u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3a9774:
    // 0x3a9774: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3a9774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a9778:
    // 0x3a9778: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x3a9778u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3a977c:
    // 0x3a977c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3a977cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3a9780:
    // 0x3a9780: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x3a9780u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_3a9784:
    // 0x3a9784: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x3a9784u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3a9788:
    // 0x3a9788: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3a9788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a978c:
    // 0x3a978c: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x3a978cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3a9790:
    // 0x3a9790: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3a9790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3a9794:
    // 0x3a9794: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x3a9794u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_3a9798:
    // 0x3a9798: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x3a9798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a979c:
    // 0x3a979c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3a979cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3a97a0:
    // 0x3a97a0: 0xc6030034  lwc1        $f3, 0x34($s0)
    ctx->pc = 0x3a97a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a97a4:
    // 0x3a97a4: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x3a97a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a97a8:
    // 0x3a97a8: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x3a97a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a97ac:
    // 0x3a97ac: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x3a97acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_3a97b0:
    // 0x3a97b0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3a97b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_3a97b4:
    // 0x3a97b4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x3a97b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3a97b8:
    // 0x3a97b8: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x3a97b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_3a97bc:
    // 0x3a97bc: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x3a97bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3a97c0:
    // 0x3a97c0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3a97c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3a97c4:
    // 0x3a97c4: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x3a97c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3a97c8:
    // 0x3a97c8: 0x46001124  .word       0x46001124                   # cvt.w.s     $f4, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a97c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
label_3a97cc:
    // 0x3a97cc: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x3a97ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3a97d0:
    // 0x3a97d0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a97d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_3a97d4:
    // 0x3a97d4: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x3a97d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_3a97d8:
    // 0x3a97d8: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a97d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_3a97dc:
    // 0x3a97dc: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x3a97dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3a97e0:
    // 0x3a97e0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a97e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a97e4:
    // 0x3a97e4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3a97e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3a97e8:
    // 0x3a97e8: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x3a97e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_3a97ec:
    // 0x3a97ec: 0xa0a4000c  sb          $a0, 0xC($a1)
    ctx->pc = 0x3a97ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 4));
label_3a97f0:
    // 0x3a97f0: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x3a97f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_3a97f4:
    // 0x3a97f4: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x3a97f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
label_3a97f8:
    // 0x3a97f8: 0x1000000b  b           . + 4 + (0xB << 2)
label_3a97fc:
    if (ctx->pc == 0x3A97FCu) {
        ctx->pc = 0x3A97FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A97F8u;
        // 0x3a97fc: 0xa0470002  sb          $a3, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9800u;
        goto label_3a9800;
    }
    ctx->pc = 0x3A97F8u;
    {
        const bool branch_taken_0x3a97f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A97FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A97F8u;
        // 0x3a97fc: 0xa0470002  sb          $a3, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a97f8) {
            ctx->pc = 0x3A9828u;
            goto label_3a9828;
        }
    }
    ctx->pc = 0x3A9800u;
label_3a9800:
    // 0x3a9800: 0x92030060  lbu         $v1, 0x60($s0)
    ctx->pc = 0x3a9800u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
label_3a9804:
    // 0x3a9804: 0x24a4000c  addiu       $a0, $a1, 0xC
    ctx->pc = 0x3a9804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_3a9808:
    // 0x3a9808: 0xa0a3000c  sb          $v1, 0xC($a1)
    ctx->pc = 0x3a9808u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 3));
label_3a980c:
    // 0x3a980c: 0x92020061  lbu         $v0, 0x61($s0)
    ctx->pc = 0x3a980cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 97)));
label_3a9810:
    // 0x3a9810: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x3a9810u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_3a9814:
    // 0x3a9814: 0x92030062  lbu         $v1, 0x62($s0)
    ctx->pc = 0x3a9814u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 98)));
label_3a9818:
    // 0x3a9818: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3a9818u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_3a981c:
    // 0x3a981c: 0x92020063  lbu         $v0, 0x63($s0)
    ctx->pc = 0x3a981cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 99)));
label_3a9820:
    // 0x3a9820: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x3a9820u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_3a9824:
    // 0x3a9824: 0x0  nop
    ctx->pc = 0x3a9824u;
    // NOP
label_3a9828:
    // 0x3a9828: 0x24a50024  addiu       $a1, $a1, 0x24
    ctx->pc = 0x3a9828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
label_3a982c:
    // 0x3a982c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3a982cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a9830:
    // 0x3a9830: 0x4600b800  add.s       $f0, $f23, $f0
    ctx->pc = 0x3a9830u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_3a9834:
    // 0x3a9834: 0xe7b80058  swc1        $f24, 0x58($sp)
    ctx->pc = 0x3a9834u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3a9838:
    // 0x3a9838: 0x4616c840  add.s       $f1, $f25, $f22
    ctx->pc = 0x3a9838u;
    ctx->f[1] = FPU_ADD_S(ctx->f[25], ctx->f[22]);
label_3a983c:
    // 0x3a983c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3a983cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3a9840:
    // 0x3a9840: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x3a9840u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3a9844:
    // 0x3a9844: 0x6ba20057  ldl         $v0, 0x57($sp)
    ctx->pc = 0x3a9844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3a9848:
    // 0x3a9848: 0x6fa20050  ldr         $v0, 0x50($sp)
    ctx->pc = 0x3a9848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3a984c:
    // 0x3a984c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3a984cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3a9850:
    // 0x3a9850: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x3a9850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a9854:
    // 0x3a9854: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x3a9854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a9858:
    // 0x3a9858: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x3a9858u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_3a985c:
    // 0x3a985c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x3a985cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a9860:
    // 0x3a9860: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x3a9860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_3a9864:
    // 0x3a9864: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x3a9864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_3a9868:
    // 0x3a9868: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x3a9868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a986c:
    // 0x3a986c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a986cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3a9870:
    // 0x3a9870: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_3a9874:
    if (ctx->pc == 0x3A9874u) {
        ctx->pc = 0x3A9874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9870u;
        // 0x3a9874: 0xe4a00020  swc1        $f0, 0x20($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9878u;
        goto label_3a9878;
    }
    ctx->pc = 0x3A9870u;
    {
        const bool branch_taken_0x3a9870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9870u;
        // 0x3a9874: 0xe4a00020  swc1        $f0, 0x20($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9870) {
            ctx->pc = 0x3A9940u;
            goto label_3a9940;
        }
    }
    ctx->pc = 0x3A9878u;
label_3a9878:
    // 0x3a9878: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3a9878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a987c:
    // 0x3a987c: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x3a987cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a9880:
    // 0x3a9880: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x3a9880u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3a9884:
    // 0x3a9884: 0xc604001c  lwc1        $f4, 0x1C($s0)
    ctx->pc = 0x3a9884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a9888:
    // 0x3a9888: 0xc6050020  lwc1        $f5, 0x20($s0)
    ctx->pc = 0x3a9888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3a988c:
    // 0x3a988c: 0xc6060024  lwc1        $f6, 0x24($s0)
    ctx->pc = 0x3a988cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3a9890:
    // 0x3a9890: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3a9890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3a9894:
    // 0x3a9894: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3a9894u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3a9898:
    // 0x3a9898: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3a9898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3a989c:
    // 0x3a989c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3a989cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a98a0:
    // 0x3a98a0: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x3a98a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3a98a4:
    // 0x3a98a4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3a98a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3a98a8:
    // 0x3a98a8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x3a98a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_3a98ac:
    // 0x3a98ac: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x3a98acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3a98b0:
    // 0x3a98b0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3a98b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a98b4:
    // 0x3a98b4: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x3a98b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3a98b8:
    // 0x3a98b8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3a98b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3a98bc:
    // 0x3a98bc: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x3a98bcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_3a98c0:
    // 0x3a98c0: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x3a98c0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3a98c4:
    // 0x3a98c4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3a98c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a98c8:
    // 0x3a98c8: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x3a98c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3a98cc:
    // 0x3a98cc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3a98ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3a98d0:
    // 0x3a98d0: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x3a98d0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_3a98d4:
    // 0x3a98d4: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x3a98d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a98d8:
    // 0x3a98d8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3a98d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3a98dc:
    // 0x3a98dc: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x3a98dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a98e0:
    // 0x3a98e0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3a98e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a98e4:
    // 0x3a98e4: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x3a98e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a98e8:
    // 0x3a98e8: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x3a98e8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_3a98ec:
    // 0x3a98ec: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3a98ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_3a98f0:
    // 0x3a98f0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x3a98f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3a98f4:
    // 0x3a98f4: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x3a98f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_3a98f8:
    // 0x3a98f8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x3a98f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3a98fc:
    // 0x3a98fc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3a98fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3a9900:
    // 0x3a9900: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x3a9900u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3a9904:
    // 0x3a9904: 0x46001124  .word       0x46001124                   # cvt.w.s     $f4, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a9904u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
label_3a9908:
    // 0x3a9908: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x3a9908u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3a990c:
    // 0x3a990c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a990cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_3a9910:
    // 0x3a9910: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x3a9910u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_3a9914:
    // 0x3a9914: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a9914u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_3a9918:
    // 0x3a9918: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x3a9918u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3a991c:
    // 0x3a991c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a991cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a9920:
    // 0x3a9920: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3a9920u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3a9924:
    // 0x3a9924: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x3a9924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_3a9928:
    // 0x3a9928: 0xa0a4000c  sb          $a0, 0xC($a1)
    ctx->pc = 0x3a9928u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 4));
label_3a992c:
    // 0x3a992c: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x3a992cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_3a9930:
    // 0x3a9930: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x3a9930u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
label_3a9934:
    // 0x3a9934: 0x1000000c  b           . + 4 + (0xC << 2)
label_3a9938:
    if (ctx->pc == 0x3A9938u) {
        ctx->pc = 0x3A9938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9934u;
        // 0x3a9938: 0xa0470002  sb          $a3, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A993Cu;
        goto label_3a993c;
    }
    ctx->pc = 0x3A9934u;
    {
        const bool branch_taken_0x3a9934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9934u;
        // 0x3a9938: 0xa0470002  sb          $a3, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9934) {
            ctx->pc = 0x3A9968u;
            goto label_3a9968;
        }
    }
    ctx->pc = 0x3A993Cu;
label_3a993c:
    // 0x3a993c: 0x0  nop
    ctx->pc = 0x3a993cu;
    // NOP
label_3a9940:
    // 0x3a9940: 0x92030060  lbu         $v1, 0x60($s0)
    ctx->pc = 0x3a9940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
label_3a9944:
    // 0x3a9944: 0x24a4000c  addiu       $a0, $a1, 0xC
    ctx->pc = 0x3a9944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_3a9948:
    // 0x3a9948: 0xa0a3000c  sb          $v1, 0xC($a1)
    ctx->pc = 0x3a9948u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 3));
label_3a994c:
    // 0x3a994c: 0x92020061  lbu         $v0, 0x61($s0)
    ctx->pc = 0x3a994cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 97)));
label_3a9950:
    // 0x3a9950: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x3a9950u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_3a9954:
    // 0x3a9954: 0x92030062  lbu         $v1, 0x62($s0)
    ctx->pc = 0x3a9954u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 98)));
label_3a9958:
    // 0x3a9958: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3a9958u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_3a995c:
    // 0x3a995c: 0x92020063  lbu         $v0, 0x63($s0)
    ctx->pc = 0x3a995cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 99)));
label_3a9960:
    // 0x3a9960: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x3a9960u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_3a9964:
    // 0x3a9964: 0x0  nop
    ctx->pc = 0x3a9964u;
    // NOP
label_3a9968:
    // 0x3a9968: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3a9968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a996c:
    // 0x3a996c: 0x24a50024  addiu       $a1, $a1, 0x24
    ctx->pc = 0x3a996cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
label_3a9970:
    // 0x3a9970: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x3a9970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a9974:
    // 0x3a9974: 0x26d60006  addiu       $s6, $s6, 0x6
    ctx->pc = 0x3a9974u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 6));
label_3a9978:
    // 0x3a9978: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3a9978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3a997c:
    // 0x3a997c: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x3a997cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3a9980:
    // 0x3a9980: 0x4600bdc0  add.s       $f23, $f23, $f0
    ctx->pc = 0x3a9980u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_3a9984:
    // 0x3a9984: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x3a9984u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_3a9988:
    // 0x3a9988: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x3a9988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3a998c:
    // 0x3a998c: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x3a998cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_3a9990:
    // 0x3a9990: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3a9990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_3a9994:
    // 0x3a9994: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3a9994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3a9998:
    // 0x3a9998: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a9998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3a999c:
    // 0x3a999c: 0x1c60fe8a  bgtz        $v1, . + 4 + (-0x176 << 2)
label_3a99a0:
    if (ctx->pc == 0x3A99A0u) {
        ctx->pc = 0x3A99A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A999Cu;
        // 0x3a99a0: 0x28620080  slti        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A99A4u;
        goto label_3a99a4;
    }
    ctx->pc = 0x3A999Cu;
    {
        const bool branch_taken_0x3a999c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x3A99A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A999Cu;
        // 0x3a99a0: 0x28620080  slti        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a999c) {
            ctx->pc = 0x3A93C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a93c8;
        }
    }
    ctx->pc = 0x3A99A4u;
label_3a99a4:
    // 0x3a99a4: 0x12c00012  beqz        $s6, . + 4 + (0x12 << 2)
label_3a99a8:
    if (ctx->pc == 0x3A99A8u) {
        ctx->pc = 0x3A99A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A99A4u;
        // 0x3a99a8: 0x3c060062  lui         $a2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A99ACu;
        goto label_3a99ac;
    }
    ctx->pc = 0x3A99A4u;
    {
        const bool branch_taken_0x3a99a4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A99A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A99A4u;
        // 0x3a99a8: 0x3c060062  lui         $a2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a99a4) {
            ctx->pc = 0x3A99F0u;
            goto label_3a99f0;
        }
    }
    ctx->pc = 0x3A99ACu;
label_3a99ac:
    // 0x3a99ac: 0x3c0238e3  lui         $v0, 0x38E3
    ctx->pc = 0x3a99acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14563 << 16));
label_3a99b0:
    // 0x3a99b0: 0x24d0ce80  addiu       $s0, $a2, -0x3180
    ctx->pc = 0x3a99b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954624));
label_3a99b4:
    // 0x3a99b4: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x3a99b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
label_3a99b8:
    // 0x3a99b8: 0x8e040504  lw          $a0, 0x504($s0)
    ctx->pc = 0x3a99b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1284)));
label_3a99bc:
    // 0x3a99bc: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x3a99bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3a99c0:
    // 0x3a99c0: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x3a99c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_3a99c4:
    // 0x3a99c4: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x3a99c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3a99c8:
    // 0x3a99c8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x3a99c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3a99cc:
    // 0x3a99cc: 0xc1111fe  jal         func_4447F8
label_3a99d0:
    if (ctx->pc == 0x3A99D0u) {
        ctx->pc = 0x3A99D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A99CCu;
        // 0x3a99d0: 0x52883  sra         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A99D4u;
        goto label_3a99d4;
    }
    ctx->pc = 0x3A99CCu;
    SET_GPR_U32(ctx, 31, 0x3A99D4u);
    ctx->pc = 0x3A99D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A99CCu;
    // 0x3a99d0: 0x52883  sra         $a1, $a1, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4447F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4447F8u, 0x3A99CCu, 0x3A99D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A99D4u;
label_3a99d4:
    // 0x3a99d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3a99d8:
    if (ctx->pc == 0x3A99D8u) {
        ctx->pc = 0x3A99D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A99D4u;
        // 0x3a99d8: 0x26050200  addiu       $a1, $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A99DCu;
        goto label_3a99dc;
    }
    ctx->pc = 0x3A99D4u;
    {
        const bool branch_taken_0x3a99d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A99D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A99D4u;
        // 0x3a99d8: 0x26050200  addiu       $a1, $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a99d4) {
            ctx->pc = 0x3A99F0u;
            goto label_3a99f0;
        }
    }
    ctx->pc = 0x3A99DCu;
label_3a99dc:
    // 0x3a99dc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3a99dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3a99e0:
    // 0x3a99e0: 0xc111044  jal         func_444110
label_3a99e4:
    if (ctx->pc == 0x3A99E4u) {
        ctx->pc = 0x3A99E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A99E0u;
        // 0x3a99e4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A99E8u;
        goto label_3a99e8;
    }
    ctx->pc = 0x3A99E0u;
    SET_GPR_U32(ctx, 31, 0x3A99E8u);
    ctx->pc = 0x3A99E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A99E0u;
    // 0x3a99e4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444110u, 0x3A99E0u, 0x3A99E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A99E8u;
label_3a99e8:
    // 0x3a99e8: 0xc111228  jal         func_4448A0
label_3a99ec:
    if (ctx->pc == 0x3A99ECu) {
        ctx->pc = 0x3A99F0u;
        goto label_3a99f0;
    }
    ctx->pc = 0x3A99E8u;
    SET_GPR_U32(ctx, 31, 0x3A99F0u);
    ctx->pc = 0x4448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4448A0u, 0x3A99E8u, 0x3A99F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A99F0u;
label_3a99f0:
    // 0x3a99f0: 0x461ab842  mul.s       $f1, $f23, $f26
    ctx->pc = 0x3a99f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[26]);
label_3a99f4:
    // 0x3a99f4: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x3a99f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a99f8:
    // 0x3a99f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3a99f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3a99fc:
    // 0x3a99fc: 0xc0eb8ec  jal         func_3AE3B0
label_3a9a00:
    if (ctx->pc == 0x3A9A00u) {
        ctx->pc = 0x3A9A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A99FCu;
        // 0x3a9a00: 0xe7c00000  swc1        $f0, 0x0($fp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9A04u;
        goto label_3a9a04;
    }
    ctx->pc = 0x3A99FCu;
    SET_GPR_U32(ctx, 31, 0x3A9A04u);
    ctx->pc = 0x3A9A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A99FCu;
    // 0x3a9a00: 0xe7c00000  swc1        $f0, 0x0($fp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE3B0u, 0x3A99FCu, 0x3A9A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9A04u;
label_3a9a04:
    // 0x3a9a04: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3a9a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a9a08:
    // 0x3a9a08: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x3a9a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3a9a0c:
    // 0x3a9a0c: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x3a9a0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3a9a10:
    // 0x3a9a10: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x3a9a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3a9a14:
    // 0x3a9a14: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x3a9a14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3a9a18:
    // 0x3a9a18: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x3a9a18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3a9a1c:
    // 0x3a9a1c: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x3a9a1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3a9a20:
    // 0x3a9a20: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x3a9a20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a9a24:
    // 0x3a9a24: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x3a9a24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3a9a28:
    // 0x3a9a28: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3a9a28u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3a9a2c:
    // 0x3a9a2c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3a9a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3a9a30:
    // 0x3a9a30: 0xc7ba0150  lwc1        $f26, 0x150($sp)
    ctx->pc = 0x3a9a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_3a9a34:
    // 0x3a9a34: 0xc7b90148  lwc1        $f25, 0x148($sp)
    ctx->pc = 0x3a9a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3a9a38:
    // 0x3a9a38: 0xc7b80140  lwc1        $f24, 0x140($sp)
    ctx->pc = 0x3a9a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3a9a3c:
    // 0x3a9a3c: 0xc7b70138  lwc1        $f23, 0x138($sp)
    ctx->pc = 0x3a9a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3a9a40:
    // 0x3a9a40: 0xc7b60130  lwc1        $f22, 0x130($sp)
    ctx->pc = 0x3a9a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3a9a44:
    // 0x3a9a44: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x3a9a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3a9a48:
    // 0x3a9a48: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x3a9a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a9a4c:
    // 0x3a9a4c: 0x3e00008  jr          $ra
label_3a9a50:
    if (ctx->pc == 0x3A9A50u) {
        ctx->pc = 0x3A9A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9A4Cu;
        // 0x3a9a50: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A9A54u;
        goto label_3a9a54;
    }
    ctx->pc = 0x3A9A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9A4Cu;
        // 0x3a9a50: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9A54u;
label_3a9a54:
    // 0x3a9a54: 0x0  nop
    ctx->pc = 0x3a9a54u;
    // NOP
    ctx->pc = 0x3a9a58u;
}
