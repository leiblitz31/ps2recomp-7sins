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

// Function: sub_002A9290
// Address: 0x2a9290 - 0x2a9a50
void sub_002A9290_0x2a9290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9290_0x2a9290");
#endif

    switch (ctx->pc) {
        case 0x2a9290u: goto label_2a9290;
        case 0x2a9294u: goto label_2a9294;
        case 0x2a9298u: goto label_2a9298;
        case 0x2a929cu: goto label_2a929c;
        case 0x2a92a0u: goto label_2a92a0;
        case 0x2a92a4u: goto label_2a92a4;
        case 0x2a92a8u: goto label_2a92a8;
        case 0x2a92acu: goto label_2a92ac;
        case 0x2a92b0u: goto label_2a92b0;
        case 0x2a92b4u: goto label_2a92b4;
        case 0x2a92b8u: goto label_2a92b8;
        case 0x2a92bcu: goto label_2a92bc;
        case 0x2a92c0u: goto label_2a92c0;
        case 0x2a92c4u: goto label_2a92c4;
        case 0x2a92c8u: goto label_2a92c8;
        case 0x2a92ccu: goto label_2a92cc;
        case 0x2a92d0u: goto label_2a92d0;
        case 0x2a92d4u: goto label_2a92d4;
        case 0x2a92d8u: goto label_2a92d8;
        case 0x2a92dcu: goto label_2a92dc;
        case 0x2a92e0u: goto label_2a92e0;
        case 0x2a92e4u: goto label_2a92e4;
        case 0x2a92e8u: goto label_2a92e8;
        case 0x2a92ecu: goto label_2a92ec;
        case 0x2a92f0u: goto label_2a92f0;
        case 0x2a92f4u: goto label_2a92f4;
        case 0x2a92f8u: goto label_2a92f8;
        case 0x2a92fcu: goto label_2a92fc;
        case 0x2a9300u: goto label_2a9300;
        case 0x2a9304u: goto label_2a9304;
        case 0x2a9308u: goto label_2a9308;
        case 0x2a930cu: goto label_2a930c;
        case 0x2a9310u: goto label_2a9310;
        case 0x2a9314u: goto label_2a9314;
        case 0x2a9318u: goto label_2a9318;
        case 0x2a931cu: goto label_2a931c;
        case 0x2a9320u: goto label_2a9320;
        case 0x2a9324u: goto label_2a9324;
        case 0x2a9328u: goto label_2a9328;
        case 0x2a932cu: goto label_2a932c;
        case 0x2a9330u: goto label_2a9330;
        case 0x2a9334u: goto label_2a9334;
        case 0x2a9338u: goto label_2a9338;
        case 0x2a933cu: goto label_2a933c;
        case 0x2a9340u: goto label_2a9340;
        case 0x2a9344u: goto label_2a9344;
        case 0x2a9348u: goto label_2a9348;
        case 0x2a934cu: goto label_2a934c;
        case 0x2a9350u: goto label_2a9350;
        case 0x2a9354u: goto label_2a9354;
        case 0x2a9358u: goto label_2a9358;
        case 0x2a935cu: goto label_2a935c;
        case 0x2a9360u: goto label_2a9360;
        case 0x2a9364u: goto label_2a9364;
        case 0x2a9368u: goto label_2a9368;
        case 0x2a936cu: goto label_2a936c;
        case 0x2a9370u: goto label_2a9370;
        case 0x2a9374u: goto label_2a9374;
        case 0x2a9378u: goto label_2a9378;
        case 0x2a937cu: goto label_2a937c;
        case 0x2a9380u: goto label_2a9380;
        case 0x2a9384u: goto label_2a9384;
        case 0x2a9388u: goto label_2a9388;
        case 0x2a938cu: goto label_2a938c;
        case 0x2a9390u: goto label_2a9390;
        case 0x2a9394u: goto label_2a9394;
        case 0x2a9398u: goto label_2a9398;
        case 0x2a939cu: goto label_2a939c;
        case 0x2a93a0u: goto label_2a93a0;
        case 0x2a93a4u: goto label_2a93a4;
        case 0x2a93a8u: goto label_2a93a8;
        case 0x2a93acu: goto label_2a93ac;
        case 0x2a93b0u: goto label_2a93b0;
        case 0x2a93b4u: goto label_2a93b4;
        case 0x2a93b8u: goto label_2a93b8;
        case 0x2a93bcu: goto label_2a93bc;
        case 0x2a93c0u: goto label_2a93c0;
        case 0x2a93c4u: goto label_2a93c4;
        case 0x2a93c8u: goto label_2a93c8;
        case 0x2a93ccu: goto label_2a93cc;
        case 0x2a93d0u: goto label_2a93d0;
        case 0x2a93d4u: goto label_2a93d4;
        case 0x2a93d8u: goto label_2a93d8;
        case 0x2a93dcu: goto label_2a93dc;
        case 0x2a93e0u: goto label_2a93e0;
        case 0x2a93e4u: goto label_2a93e4;
        case 0x2a93e8u: goto label_2a93e8;
        case 0x2a93ecu: goto label_2a93ec;
        case 0x2a93f0u: goto label_2a93f0;
        case 0x2a93f4u: goto label_2a93f4;
        case 0x2a93f8u: goto label_2a93f8;
        case 0x2a93fcu: goto label_2a93fc;
        case 0x2a9400u: goto label_2a9400;
        case 0x2a9404u: goto label_2a9404;
        case 0x2a9408u: goto label_2a9408;
        case 0x2a940cu: goto label_2a940c;
        case 0x2a9410u: goto label_2a9410;
        case 0x2a9414u: goto label_2a9414;
        case 0x2a9418u: goto label_2a9418;
        case 0x2a941cu: goto label_2a941c;
        case 0x2a9420u: goto label_2a9420;
        case 0x2a9424u: goto label_2a9424;
        case 0x2a9428u: goto label_2a9428;
        case 0x2a942cu: goto label_2a942c;
        case 0x2a9430u: goto label_2a9430;
        case 0x2a9434u: goto label_2a9434;
        case 0x2a9438u: goto label_2a9438;
        case 0x2a943cu: goto label_2a943c;
        case 0x2a9440u: goto label_2a9440;
        case 0x2a9444u: goto label_2a9444;
        case 0x2a9448u: goto label_2a9448;
        case 0x2a944cu: goto label_2a944c;
        case 0x2a9450u: goto label_2a9450;
        case 0x2a9454u: goto label_2a9454;
        case 0x2a9458u: goto label_2a9458;
        case 0x2a945cu: goto label_2a945c;
        case 0x2a9460u: goto label_2a9460;
        case 0x2a9464u: goto label_2a9464;
        case 0x2a9468u: goto label_2a9468;
        case 0x2a946cu: goto label_2a946c;
        case 0x2a9470u: goto label_2a9470;
        case 0x2a9474u: goto label_2a9474;
        case 0x2a9478u: goto label_2a9478;
        case 0x2a947cu: goto label_2a947c;
        case 0x2a9480u: goto label_2a9480;
        case 0x2a9484u: goto label_2a9484;
        case 0x2a9488u: goto label_2a9488;
        case 0x2a948cu: goto label_2a948c;
        case 0x2a9490u: goto label_2a9490;
        case 0x2a9494u: goto label_2a9494;
        case 0x2a9498u: goto label_2a9498;
        case 0x2a949cu: goto label_2a949c;
        case 0x2a94a0u: goto label_2a94a0;
        case 0x2a94a4u: goto label_2a94a4;
        case 0x2a94a8u: goto label_2a94a8;
        case 0x2a94acu: goto label_2a94ac;
        case 0x2a94b0u: goto label_2a94b0;
        case 0x2a94b4u: goto label_2a94b4;
        case 0x2a94b8u: goto label_2a94b8;
        case 0x2a94bcu: goto label_2a94bc;
        case 0x2a94c0u: goto label_2a94c0;
        case 0x2a94c4u: goto label_2a94c4;
        case 0x2a94c8u: goto label_2a94c8;
        case 0x2a94ccu: goto label_2a94cc;
        case 0x2a94d0u: goto label_2a94d0;
        case 0x2a94d4u: goto label_2a94d4;
        case 0x2a94d8u: goto label_2a94d8;
        case 0x2a94dcu: goto label_2a94dc;
        case 0x2a94e0u: goto label_2a94e0;
        case 0x2a94e4u: goto label_2a94e4;
        case 0x2a94e8u: goto label_2a94e8;
        case 0x2a94ecu: goto label_2a94ec;
        case 0x2a94f0u: goto label_2a94f0;
        case 0x2a94f4u: goto label_2a94f4;
        case 0x2a94f8u: goto label_2a94f8;
        case 0x2a94fcu: goto label_2a94fc;
        case 0x2a9500u: goto label_2a9500;
        case 0x2a9504u: goto label_2a9504;
        case 0x2a9508u: goto label_2a9508;
        case 0x2a950cu: goto label_2a950c;
        case 0x2a9510u: goto label_2a9510;
        case 0x2a9514u: goto label_2a9514;
        case 0x2a9518u: goto label_2a9518;
        case 0x2a951cu: goto label_2a951c;
        case 0x2a9520u: goto label_2a9520;
        case 0x2a9524u: goto label_2a9524;
        case 0x2a9528u: goto label_2a9528;
        case 0x2a952cu: goto label_2a952c;
        case 0x2a9530u: goto label_2a9530;
        case 0x2a9534u: goto label_2a9534;
        case 0x2a9538u: goto label_2a9538;
        case 0x2a953cu: goto label_2a953c;
        case 0x2a9540u: goto label_2a9540;
        case 0x2a9544u: goto label_2a9544;
        case 0x2a9548u: goto label_2a9548;
        case 0x2a954cu: goto label_2a954c;
        case 0x2a9550u: goto label_2a9550;
        case 0x2a9554u: goto label_2a9554;
        case 0x2a9558u: goto label_2a9558;
        case 0x2a955cu: goto label_2a955c;
        case 0x2a9560u: goto label_2a9560;
        case 0x2a9564u: goto label_2a9564;
        case 0x2a9568u: goto label_2a9568;
        case 0x2a956cu: goto label_2a956c;
        case 0x2a9570u: goto label_2a9570;
        case 0x2a9574u: goto label_2a9574;
        case 0x2a9578u: goto label_2a9578;
        case 0x2a957cu: goto label_2a957c;
        case 0x2a9580u: goto label_2a9580;
        case 0x2a9584u: goto label_2a9584;
        case 0x2a9588u: goto label_2a9588;
        case 0x2a958cu: goto label_2a958c;
        case 0x2a9590u: goto label_2a9590;
        case 0x2a9594u: goto label_2a9594;
        case 0x2a9598u: goto label_2a9598;
        case 0x2a959cu: goto label_2a959c;
        case 0x2a95a0u: goto label_2a95a0;
        case 0x2a95a4u: goto label_2a95a4;
        case 0x2a95a8u: goto label_2a95a8;
        case 0x2a95acu: goto label_2a95ac;
        case 0x2a95b0u: goto label_2a95b0;
        case 0x2a95b4u: goto label_2a95b4;
        case 0x2a95b8u: goto label_2a95b8;
        case 0x2a95bcu: goto label_2a95bc;
        case 0x2a95c0u: goto label_2a95c0;
        case 0x2a95c4u: goto label_2a95c4;
        case 0x2a95c8u: goto label_2a95c8;
        case 0x2a95ccu: goto label_2a95cc;
        case 0x2a95d0u: goto label_2a95d0;
        case 0x2a95d4u: goto label_2a95d4;
        case 0x2a95d8u: goto label_2a95d8;
        case 0x2a95dcu: goto label_2a95dc;
        case 0x2a95e0u: goto label_2a95e0;
        case 0x2a95e4u: goto label_2a95e4;
        case 0x2a95e8u: goto label_2a95e8;
        case 0x2a95ecu: goto label_2a95ec;
        case 0x2a95f0u: goto label_2a95f0;
        case 0x2a95f4u: goto label_2a95f4;
        case 0x2a95f8u: goto label_2a95f8;
        case 0x2a95fcu: goto label_2a95fc;
        case 0x2a9600u: goto label_2a9600;
        case 0x2a9604u: goto label_2a9604;
        case 0x2a9608u: goto label_2a9608;
        case 0x2a960cu: goto label_2a960c;
        case 0x2a9610u: goto label_2a9610;
        case 0x2a9614u: goto label_2a9614;
        case 0x2a9618u: goto label_2a9618;
        case 0x2a961cu: goto label_2a961c;
        case 0x2a9620u: goto label_2a9620;
        case 0x2a9624u: goto label_2a9624;
        case 0x2a9628u: goto label_2a9628;
        case 0x2a962cu: goto label_2a962c;
        case 0x2a9630u: goto label_2a9630;
        case 0x2a9634u: goto label_2a9634;
        case 0x2a9638u: goto label_2a9638;
        case 0x2a963cu: goto label_2a963c;
        case 0x2a9640u: goto label_2a9640;
        case 0x2a9644u: goto label_2a9644;
        case 0x2a9648u: goto label_2a9648;
        case 0x2a964cu: goto label_2a964c;
        case 0x2a9650u: goto label_2a9650;
        case 0x2a9654u: goto label_2a9654;
        case 0x2a9658u: goto label_2a9658;
        case 0x2a965cu: goto label_2a965c;
        case 0x2a9660u: goto label_2a9660;
        case 0x2a9664u: goto label_2a9664;
        case 0x2a9668u: goto label_2a9668;
        case 0x2a966cu: goto label_2a966c;
        case 0x2a9670u: goto label_2a9670;
        case 0x2a9674u: goto label_2a9674;
        case 0x2a9678u: goto label_2a9678;
        case 0x2a967cu: goto label_2a967c;
        case 0x2a9680u: goto label_2a9680;
        case 0x2a9684u: goto label_2a9684;
        case 0x2a9688u: goto label_2a9688;
        case 0x2a968cu: goto label_2a968c;
        case 0x2a9690u: goto label_2a9690;
        case 0x2a9694u: goto label_2a9694;
        case 0x2a9698u: goto label_2a9698;
        case 0x2a969cu: goto label_2a969c;
        case 0x2a96a0u: goto label_2a96a0;
        case 0x2a96a4u: goto label_2a96a4;
        case 0x2a96a8u: goto label_2a96a8;
        case 0x2a96acu: goto label_2a96ac;
        case 0x2a96b0u: goto label_2a96b0;
        case 0x2a96b4u: goto label_2a96b4;
        case 0x2a96b8u: goto label_2a96b8;
        case 0x2a96bcu: goto label_2a96bc;
        case 0x2a96c0u: goto label_2a96c0;
        case 0x2a96c4u: goto label_2a96c4;
        case 0x2a96c8u: goto label_2a96c8;
        case 0x2a96ccu: goto label_2a96cc;
        case 0x2a96d0u: goto label_2a96d0;
        case 0x2a96d4u: goto label_2a96d4;
        case 0x2a96d8u: goto label_2a96d8;
        case 0x2a96dcu: goto label_2a96dc;
        case 0x2a96e0u: goto label_2a96e0;
        case 0x2a96e4u: goto label_2a96e4;
        case 0x2a96e8u: goto label_2a96e8;
        case 0x2a96ecu: goto label_2a96ec;
        case 0x2a96f0u: goto label_2a96f0;
        case 0x2a96f4u: goto label_2a96f4;
        case 0x2a96f8u: goto label_2a96f8;
        case 0x2a96fcu: goto label_2a96fc;
        case 0x2a9700u: goto label_2a9700;
        case 0x2a9704u: goto label_2a9704;
        case 0x2a9708u: goto label_2a9708;
        case 0x2a970cu: goto label_2a970c;
        case 0x2a9710u: goto label_2a9710;
        case 0x2a9714u: goto label_2a9714;
        case 0x2a9718u: goto label_2a9718;
        case 0x2a971cu: goto label_2a971c;
        case 0x2a9720u: goto label_2a9720;
        case 0x2a9724u: goto label_2a9724;
        case 0x2a9728u: goto label_2a9728;
        case 0x2a972cu: goto label_2a972c;
        case 0x2a9730u: goto label_2a9730;
        case 0x2a9734u: goto label_2a9734;
        case 0x2a9738u: goto label_2a9738;
        case 0x2a973cu: goto label_2a973c;
        case 0x2a9740u: goto label_2a9740;
        case 0x2a9744u: goto label_2a9744;
        case 0x2a9748u: goto label_2a9748;
        case 0x2a974cu: goto label_2a974c;
        case 0x2a9750u: goto label_2a9750;
        case 0x2a9754u: goto label_2a9754;
        case 0x2a9758u: goto label_2a9758;
        case 0x2a975cu: goto label_2a975c;
        case 0x2a9760u: goto label_2a9760;
        case 0x2a9764u: goto label_2a9764;
        case 0x2a9768u: goto label_2a9768;
        case 0x2a976cu: goto label_2a976c;
        case 0x2a9770u: goto label_2a9770;
        case 0x2a9774u: goto label_2a9774;
        case 0x2a9778u: goto label_2a9778;
        case 0x2a977cu: goto label_2a977c;
        case 0x2a9780u: goto label_2a9780;
        case 0x2a9784u: goto label_2a9784;
        case 0x2a9788u: goto label_2a9788;
        case 0x2a978cu: goto label_2a978c;
        case 0x2a9790u: goto label_2a9790;
        case 0x2a9794u: goto label_2a9794;
        case 0x2a9798u: goto label_2a9798;
        case 0x2a979cu: goto label_2a979c;
        case 0x2a97a0u: goto label_2a97a0;
        case 0x2a97a4u: goto label_2a97a4;
        case 0x2a97a8u: goto label_2a97a8;
        case 0x2a97acu: goto label_2a97ac;
        case 0x2a97b0u: goto label_2a97b0;
        case 0x2a97b4u: goto label_2a97b4;
        case 0x2a97b8u: goto label_2a97b8;
        case 0x2a97bcu: goto label_2a97bc;
        case 0x2a97c0u: goto label_2a97c0;
        case 0x2a97c4u: goto label_2a97c4;
        case 0x2a97c8u: goto label_2a97c8;
        case 0x2a97ccu: goto label_2a97cc;
        case 0x2a97d0u: goto label_2a97d0;
        case 0x2a97d4u: goto label_2a97d4;
        case 0x2a97d8u: goto label_2a97d8;
        case 0x2a97dcu: goto label_2a97dc;
        case 0x2a97e0u: goto label_2a97e0;
        case 0x2a97e4u: goto label_2a97e4;
        case 0x2a97e8u: goto label_2a97e8;
        case 0x2a97ecu: goto label_2a97ec;
        case 0x2a97f0u: goto label_2a97f0;
        case 0x2a97f4u: goto label_2a97f4;
        case 0x2a97f8u: goto label_2a97f8;
        case 0x2a97fcu: goto label_2a97fc;
        case 0x2a9800u: goto label_2a9800;
        case 0x2a9804u: goto label_2a9804;
        case 0x2a9808u: goto label_2a9808;
        case 0x2a980cu: goto label_2a980c;
        case 0x2a9810u: goto label_2a9810;
        case 0x2a9814u: goto label_2a9814;
        case 0x2a9818u: goto label_2a9818;
        case 0x2a981cu: goto label_2a981c;
        case 0x2a9820u: goto label_2a9820;
        case 0x2a9824u: goto label_2a9824;
        case 0x2a9828u: goto label_2a9828;
        case 0x2a982cu: goto label_2a982c;
        case 0x2a9830u: goto label_2a9830;
        case 0x2a9834u: goto label_2a9834;
        case 0x2a9838u: goto label_2a9838;
        case 0x2a983cu: goto label_2a983c;
        case 0x2a9840u: goto label_2a9840;
        case 0x2a9844u: goto label_2a9844;
        case 0x2a9848u: goto label_2a9848;
        case 0x2a984cu: goto label_2a984c;
        case 0x2a9850u: goto label_2a9850;
        case 0x2a9854u: goto label_2a9854;
        case 0x2a9858u: goto label_2a9858;
        case 0x2a985cu: goto label_2a985c;
        case 0x2a9860u: goto label_2a9860;
        case 0x2a9864u: goto label_2a9864;
        case 0x2a9868u: goto label_2a9868;
        case 0x2a986cu: goto label_2a986c;
        case 0x2a9870u: goto label_2a9870;
        case 0x2a9874u: goto label_2a9874;
        case 0x2a9878u: goto label_2a9878;
        case 0x2a987cu: goto label_2a987c;
        case 0x2a9880u: goto label_2a9880;
        case 0x2a9884u: goto label_2a9884;
        case 0x2a9888u: goto label_2a9888;
        case 0x2a988cu: goto label_2a988c;
        case 0x2a9890u: goto label_2a9890;
        case 0x2a9894u: goto label_2a9894;
        case 0x2a9898u: goto label_2a9898;
        case 0x2a989cu: goto label_2a989c;
        case 0x2a98a0u: goto label_2a98a0;
        case 0x2a98a4u: goto label_2a98a4;
        case 0x2a98a8u: goto label_2a98a8;
        case 0x2a98acu: goto label_2a98ac;
        case 0x2a98b0u: goto label_2a98b0;
        case 0x2a98b4u: goto label_2a98b4;
        case 0x2a98b8u: goto label_2a98b8;
        case 0x2a98bcu: goto label_2a98bc;
        case 0x2a98c0u: goto label_2a98c0;
        case 0x2a98c4u: goto label_2a98c4;
        case 0x2a98c8u: goto label_2a98c8;
        case 0x2a98ccu: goto label_2a98cc;
        case 0x2a98d0u: goto label_2a98d0;
        case 0x2a98d4u: goto label_2a98d4;
        case 0x2a98d8u: goto label_2a98d8;
        case 0x2a98dcu: goto label_2a98dc;
        case 0x2a98e0u: goto label_2a98e0;
        case 0x2a98e4u: goto label_2a98e4;
        case 0x2a98e8u: goto label_2a98e8;
        case 0x2a98ecu: goto label_2a98ec;
        case 0x2a98f0u: goto label_2a98f0;
        case 0x2a98f4u: goto label_2a98f4;
        case 0x2a98f8u: goto label_2a98f8;
        case 0x2a98fcu: goto label_2a98fc;
        case 0x2a9900u: goto label_2a9900;
        case 0x2a9904u: goto label_2a9904;
        case 0x2a9908u: goto label_2a9908;
        case 0x2a990cu: goto label_2a990c;
        case 0x2a9910u: goto label_2a9910;
        case 0x2a9914u: goto label_2a9914;
        case 0x2a9918u: goto label_2a9918;
        case 0x2a991cu: goto label_2a991c;
        case 0x2a9920u: goto label_2a9920;
        case 0x2a9924u: goto label_2a9924;
        case 0x2a9928u: goto label_2a9928;
        case 0x2a992cu: goto label_2a992c;
        case 0x2a9930u: goto label_2a9930;
        case 0x2a9934u: goto label_2a9934;
        case 0x2a9938u: goto label_2a9938;
        case 0x2a993cu: goto label_2a993c;
        case 0x2a9940u: goto label_2a9940;
        case 0x2a9944u: goto label_2a9944;
        case 0x2a9948u: goto label_2a9948;
        case 0x2a994cu: goto label_2a994c;
        case 0x2a9950u: goto label_2a9950;
        case 0x2a9954u: goto label_2a9954;
        case 0x2a9958u: goto label_2a9958;
        case 0x2a995cu: goto label_2a995c;
        case 0x2a9960u: goto label_2a9960;
        case 0x2a9964u: goto label_2a9964;
        case 0x2a9968u: goto label_2a9968;
        case 0x2a996cu: goto label_2a996c;
        case 0x2a9970u: goto label_2a9970;
        case 0x2a9974u: goto label_2a9974;
        case 0x2a9978u: goto label_2a9978;
        case 0x2a997cu: goto label_2a997c;
        case 0x2a9980u: goto label_2a9980;
        case 0x2a9984u: goto label_2a9984;
        case 0x2a9988u: goto label_2a9988;
        case 0x2a998cu: goto label_2a998c;
        case 0x2a9990u: goto label_2a9990;
        case 0x2a9994u: goto label_2a9994;
        case 0x2a9998u: goto label_2a9998;
        case 0x2a999cu: goto label_2a999c;
        case 0x2a99a0u: goto label_2a99a0;
        case 0x2a99a4u: goto label_2a99a4;
        case 0x2a99a8u: goto label_2a99a8;
        case 0x2a99acu: goto label_2a99ac;
        case 0x2a99b0u: goto label_2a99b0;
        case 0x2a99b4u: goto label_2a99b4;
        case 0x2a99b8u: goto label_2a99b8;
        case 0x2a99bcu: goto label_2a99bc;
        case 0x2a99c0u: goto label_2a99c0;
        case 0x2a99c4u: goto label_2a99c4;
        case 0x2a99c8u: goto label_2a99c8;
        case 0x2a99ccu: goto label_2a99cc;
        case 0x2a99d0u: goto label_2a99d0;
        case 0x2a99d4u: goto label_2a99d4;
        case 0x2a99d8u: goto label_2a99d8;
        case 0x2a99dcu: goto label_2a99dc;
        case 0x2a99e0u: goto label_2a99e0;
        case 0x2a99e4u: goto label_2a99e4;
        case 0x2a99e8u: goto label_2a99e8;
        case 0x2a99ecu: goto label_2a99ec;
        case 0x2a99f0u: goto label_2a99f0;
        case 0x2a99f4u: goto label_2a99f4;
        case 0x2a99f8u: goto label_2a99f8;
        case 0x2a99fcu: goto label_2a99fc;
        case 0x2a9a00u: goto label_2a9a00;
        case 0x2a9a04u: goto label_2a9a04;
        case 0x2a9a08u: goto label_2a9a08;
        case 0x2a9a0cu: goto label_2a9a0c;
        case 0x2a9a10u: goto label_2a9a10;
        case 0x2a9a14u: goto label_2a9a14;
        case 0x2a9a18u: goto label_2a9a18;
        case 0x2a9a1cu: goto label_2a9a1c;
        case 0x2a9a20u: goto label_2a9a20;
        case 0x2a9a24u: goto label_2a9a24;
        case 0x2a9a28u: goto label_2a9a28;
        case 0x2a9a2cu: goto label_2a9a2c;
        case 0x2a9a30u: goto label_2a9a30;
        case 0x2a9a34u: goto label_2a9a34;
        case 0x2a9a38u: goto label_2a9a38;
        case 0x2a9a3cu: goto label_2a9a3c;
        case 0x2a9a40u: goto label_2a9a40;
        case 0x2a9a44u: goto label_2a9a44;
        case 0x2a9a48u: goto label_2a9a48;
        case 0x2a9a4cu: goto label_2a9a4c;
        default: break;
    }

    ctx->pc = 0x2a9290u;

label_2a9290:
    // 0x2a9290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a9290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a9294:
    // 0x2a9294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a9294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a9298:
    // 0x2a9298: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a9298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2a929c:
    // 0x2a929c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a929cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a92a0:
    // 0x2a92a0: 0xc09d130  jal         func_2744C0
label_2a92a4:
    if (ctx->pc == 0x2A92A4u) {
        ctx->pc = 0x2A92A8u;
        goto label_2a92a8;
    }
    ctx->pc = 0x2A92A0u;
    SET_GPR_U32(ctx, 31, 0x2A92A8u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x2A92A0u, 0x2A92A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A92A8u;
label_2a92a8:
    // 0x2a92a8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a92a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2a92ac:
    // 0x2a92ac: 0x246363c0  addiu       $v1, $v1, 0x63C0
    ctx->pc = 0x2a92acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25536));
label_2a92b0:
    // 0x2a92b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a92b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a92b4:
    // 0x2a92b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a92b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a92b8:
    // 0x2a92b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a92b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a92bc:
    // 0x2a92bc: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x2a92bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
label_2a92c0:
    // 0x2a92c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a92c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a92c4:
    // 0x2a92c4: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x2a92c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_2a92c8:
    // 0x2a92c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a92c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a92cc:
    // 0x2a92cc: 0xa040005c  sb          $zero, 0x5C($v0)
    ctx->pc = 0x2a92ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 92), (uint8_t)GPR_U32(ctx, 0));
label_2a92d0:
    // 0x2a92d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a92d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a92d4:
    // 0x2a92d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a92d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a92d8:
    // 0x2a92d8: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2a92d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
label_2a92dc:
    // 0x2a92dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a92dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a92e0:
    // 0x2a92e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a92e4:
    // 0x2a92e4: 0xa0430064  sb          $v1, 0x64($v0)
    ctx->pc = 0x2a92e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 100), (uint8_t)GPR_U32(ctx, 3));
label_2a92e8:
    // 0x2a92e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a92e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a92ec:
    // 0x2a92ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a92ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a92f0:
    // 0x2a92f0: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2a92f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
label_2a92f4:
    // 0x2a92f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a92f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a92f8:
    // 0x2a92f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a92f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a92fc:
    // 0x2a92fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a92fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a9300:
    // 0x2a9300: 0x3e00008  jr          $ra
label_2a9304:
    if (ctx->pc == 0x2A9304u) {
        ctx->pc = 0x2A9308u;
        goto label_2a9308;
    }
    ctx->pc = 0x2A9300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9308u;
label_2a9308:
    // 0x2a9308: 0x0  nop
    ctx->pc = 0x2a9308u;
    // NOP
label_2a930c:
    // 0x2a930c: 0x0  nop
    ctx->pc = 0x2a930cu;
    // NOP
label_2a9310:
    // 0x2a9310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a9310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a9314:
    // 0x2a9314: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a9314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a9318:
    // 0x2a9318: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a9318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2a931c:
    // 0x2a931c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2a931cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_2a9320:
    // 0x2a9320: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a9320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a9324:
    // 0x2a9324: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2a9328:
    if (ctx->pc == 0x2A9328u) {
        ctx->pc = 0x2A932Cu;
        goto label_2a932c;
    }
    ctx->pc = 0x2A9324u;
    {
        const bool branch_taken_0x2a9324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9324) {
            ctx->pc = 0x2A936Cu;
            goto label_2a936c;
        }
    }
    ctx->pc = 0x2A932Cu;
label_2a932c:
    // 0x2a932c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2a932cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2a9330:
    // 0x2a9330: 0x246363c0  addiu       $v1, $v1, 0x63C0
    ctx->pc = 0x2a9330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25536));
label_2a9334:
    // 0x2a9334: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a9334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a9338:
    // 0x2a9338: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a9338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a933c:
    // 0x2a933c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a933cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a9340:
    // 0x2a9340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a9340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9344:
    // 0x2a9344: 0xc09d150  jal         func_274540
label_2a9348:
    if (ctx->pc == 0x2A9348u) {
        ctx->pc = 0x2A934Cu;
        goto label_2a934c;
    }
    ctx->pc = 0x2A9344u;
    SET_GPR_U32(ctx, 31, 0x2A934Cu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x2A9344u, 0x2A934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A934Cu;
label_2a934c:
    // 0x2a934c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2a934cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_2a9350:
    // 0x2a9350: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a9350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2a9354:
    // 0x2a9354: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a9354u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2a9358:
    // 0x2a9358: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_2a935c:
    if (ctx->pc == 0x2A935Cu) {
        ctx->pc = 0x2A9360u;
        goto label_2a9360;
    }
    ctx->pc = 0x2A9358u;
    {
        const bool branch_taken_0x2a9358 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2a9358) {
            ctx->pc = 0x2A936Cu;
            goto label_2a936c;
        }
    }
    ctx->pc = 0x2A9360u;
label_2a9360:
    // 0x2a9360: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a9360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a9364:
    // 0x2a9364: 0xc0ba070  jal         func_2E81C0
label_2a9368:
    if (ctx->pc == 0x2A9368u) {
        ctx->pc = 0x2A936Cu;
        goto label_2a936c;
    }
    ctx->pc = 0x2A9364u;
    SET_GPR_U32(ctx, 31, 0x2A936Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2A9364u, 0x2A936Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A936Cu;
label_2a936c:
    // 0x2a936c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a936cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a9370:
    // 0x2a9370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a9370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a9374:
    // 0x2a9374: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2a9374u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a9378:
    // 0x2a9378: 0x3e00008  jr          $ra
label_2a937c:
    if (ctx->pc == 0x2A937Cu) {
        ctx->pc = 0x2A9380u;
        goto label_2a9380;
    }
    ctx->pc = 0x2A9378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9380u;
label_2a9380:
    // 0x2a9380: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a9380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2a9384:
    // 0x2a9384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a9384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a9388:
    // 0x2a9388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a9388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a938c:
    // 0x2a938c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2a938cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_2a9390:
    // 0x2a9390: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2a9390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_2a9394:
    // 0x2a9394: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2a9394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_2a9398:
    // 0x2a9398: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2a9398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2a939c:
    // 0x2a939c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2a939cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a93a0:
    // 0x2a93a0: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2a93a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a93a4:
    // 0x2a93a4: 0xc09d18c  jal         func_274630
label_2a93a8:
    if (ctx->pc == 0x2A93A8u) {
        ctx->pc = 0x2A93ACu;
        goto label_2a93ac;
    }
    ctx->pc = 0x2A93A4u;
    SET_GPR_U32(ctx, 31, 0x2A93ACu);
    ctx->pc = 0x274630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274630u, 0x2A93A4u, 0x2A93ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A93ACu;
label_2a93ac:
    // 0x2a93ac: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2a93acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2a93b0:
    // 0x2a93b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a93b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a93b4:
    // 0x2a93b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a93b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a93b8:
    // 0x2a93b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a93b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a93bc:
    // 0x2a93bc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2a93bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a93c0:
    // 0x2a93c0: 0x3e00008  jr          $ra
label_2a93c4:
    if (ctx->pc == 0x2A93C4u) {
        ctx->pc = 0x2A93C8u;
        goto label_2a93c8;
    }
    ctx->pc = 0x2A93C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A93C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A93C8u;
label_2a93c8:
    // 0x2a93c8: 0x0  nop
    ctx->pc = 0x2a93c8u;
    // NOP
label_2a93cc:
    // 0x2a93cc: 0x0  nop
    ctx->pc = 0x2a93ccu;
    // NOP
label_2a93d0:
    // 0x2a93d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a93d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a93d4:
    // 0x2a93d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a93d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a93d8:
    // 0x2a93d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a93d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a93dc:
    // 0x2a93dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2a93dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_2a93e0:
    // 0x2a93e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a93e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2a93e4:
    // 0x2a93e4: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x2a93e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2a93e8:
    // 0x2a93e8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a93e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a93ec:
    // 0x2a93ec: 0xc085538  jal         func_2154E0
label_2a93f0:
    if (ctx->pc == 0x2A93F0u) {
        ctx->pc = 0x2A93F4u;
        goto label_2a93f4;
    }
    ctx->pc = 0x2A93ECu;
    SET_GPR_U32(ctx, 31, 0x2A93F4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A93ECu, 0x2A93F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A93F4u;
label_2a93f4:
    // 0x2a93f4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2a93f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2a93f8:
    // 0x2a93f8: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x2a93f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_2a93fc:
    // 0x2a93fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a93fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2a9400:
    // 0x2a9400: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a9400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a9404:
    // 0x2a9404: 0xc0a85b4  jal         func_2A16D0
label_2a9408:
    if (ctx->pc == 0x2A9408u) {
        ctx->pc = 0x2A940Cu;
        goto label_2a940c;
    }
    ctx->pc = 0x2A9404u;
    SET_GPR_U32(ctx, 31, 0x2A940Cu);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A9404u, 0x2A940Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A940Cu;
label_2a940c:
    // 0x2a940c: 0x8f83a5cc  lw          $v1, -0x5A34($gp)
    ctx->pc = 0x2a940cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944204)));
label_2a9410:
    // 0x2a9410: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2a9410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a9414:
    // 0x2a9414: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2a9418:
    if (ctx->pc == 0x2A9418u) {
        ctx->pc = 0x2A941Cu;
        goto label_2a941c;
    }
    ctx->pc = 0x2A9414u;
    {
        const bool branch_taken_0x2a9414 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9414) {
            ctx->pc = 0x2A9438u;
            goto label_2a9438;
        }
    }
    ctx->pc = 0x2A941Cu;
label_2a941c:
    // 0x2a941c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a941cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a9420:
    // 0x2a9420: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a9424:
    if (ctx->pc == 0x2A9424u) {
        ctx->pc = 0x2A9428u;
        goto label_2a9428;
    }
    ctx->pc = 0x2A9420u;
    {
        const bool branch_taken_0x2a9420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9420) {
            ctx->pc = 0x2A9438u;
            goto label_2a9438;
        }
    }
    ctx->pc = 0x2A9428u;
label_2a9428:
    // 0x2a9428: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a9428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a942c:
    // 0x2a942c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2a942cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_2a9430:
    // 0x2a9430: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a9430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2a9434:
    // 0x2a9434: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2a9434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_2a9438:
    // 0x2a9438: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2a9438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2a943c:
    // 0x2a943c: 0xc09d1d8  jal         func_274760
label_2a9440:
    if (ctx->pc == 0x2A9440u) {
        ctx->pc = 0x2A9444u;
        goto label_2a9444;
    }
    ctx->pc = 0x2A943Cu;
    SET_GPR_U32(ctx, 31, 0x2A9444u);
    ctx->pc = 0x274760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274760u, 0x2A943Cu, 0x2A9444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9444u;
label_2a9444:
    // 0x2a9444: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a9444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a9448:
    // 0x2a9448: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a9448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a944c:
    // 0x2a944c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2a944cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a9450:
    // 0x2a9450: 0x3e00008  jr          $ra
label_2a9454:
    if (ctx->pc == 0x2A9454u) {
        ctx->pc = 0x2A9458u;
        goto label_2a9458;
    }
    ctx->pc = 0x2A9450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9458u;
label_2a9458:
    // 0x2a9458: 0x0  nop
    ctx->pc = 0x2a9458u;
    // NOP
label_2a945c:
    // 0x2a945c: 0x0  nop
    ctx->pc = 0x2a945cu;
    // NOP
label_2a9460:
    // 0x2a9460: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a9460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2a9464:
    // 0x2a9464: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a9464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a9468:
    // 0x2a9468: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a9468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a946c:
    // 0x2a946c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a946cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a9470:
    // 0x2a9470: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2a9470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_2a9474:
    // 0x2a9474: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2a9474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2a9478:
    // 0x2a9478: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2a9478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a947c:
    // 0x2a947c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2a947cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a9480:
    // 0x2a9480: 0xc09d1e4  jal         func_274790
label_2a9484:
    if (ctx->pc == 0x2A9484u) {
        ctx->pc = 0x2A9488u;
        goto label_2a9488;
    }
    ctx->pc = 0x2A9480u;
    SET_GPR_U32(ctx, 31, 0x2A9488u);
    ctx->pc = 0x274790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274790u, 0x2A9480u, 0x2A9488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9488u;
label_2a9488:
    // 0x2a9488: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2a9488u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2a948c:
    // 0x2a948c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a948cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a9490:
    // 0x2a9490: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x2a9490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2a9494:
    // 0x2a9494: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a9494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a9498:
    // 0x2a9498: 0xc085538  jal         func_2154E0
label_2a949c:
    if (ctx->pc == 0x2A949Cu) {
        ctx->pc = 0x2A94A0u;
        goto label_2a94a0;
    }
    ctx->pc = 0x2A9498u;
    SET_GPR_U32(ctx, 31, 0x2A94A0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2A9498u, 0x2A94A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A94A0u;
label_2a94a0:
    // 0x2a94a0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2a94a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a94a4:
    // 0x2a94a4: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x2a94a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_2a94a8:
    // 0x2a94a8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a94a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a94ac:
    // 0x2a94ac: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a94acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a94b0:
    // 0x2a94b0: 0xc0a85b4  jal         func_2A16D0
label_2a94b4:
    if (ctx->pc == 0x2A94B4u) {
        ctx->pc = 0x2A94B8u;
        goto label_2a94b8;
    }
    ctx->pc = 0x2A94B0u;
    SET_GPR_U32(ctx, 31, 0x2A94B8u);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A94B0u, 0x2A94B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A94B8u;
label_2a94b8:
    // 0x2a94b8: 0x8c510018  lw          $s1, 0x18($v0)
    ctx->pc = 0x2a94b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2a94bc:
    // 0x2a94bc: 0xc0de0d2  jal         func_378348
label_2a94c0:
    if (ctx->pc == 0x2A94C0u) {
        ctx->pc = 0x2A94C4u;
        goto label_2a94c4;
    }
    ctx->pc = 0x2A94BCu;
    SET_GPR_U32(ctx, 31, 0x2A94C4u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2A94BCu, 0x2A94C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A94C4u;
label_2a94c4:
    // 0x2a94c4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2a94c8:
    if (ctx->pc == 0x2A94C8u) {
        ctx->pc = 0x2A94CCu;
        goto label_2a94cc;
    }
    ctx->pc = 0x2A94C4u;
    {
        const bool branch_taken_0x2a94c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a94c4) {
            ctx->pc = 0x2A94E0u;
            goto label_2a94e0;
        }
    }
    ctx->pc = 0x2A94CCu;
label_2a94cc:
    // 0x2a94cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a94ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a94d0:
    // 0x2a94d0: 0x0  nop
    ctx->pc = 0x2a94d0u;
    // NOP
label_2a94d4:
    // 0x2a94d4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a94d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a94d8:
    // 0x2a94d8: 0x10000008  b           . + 4 + (0x8 << 2)
label_2a94dc:
    if (ctx->pc == 0x2A94DCu) {
        ctx->pc = 0x2A94E0u;
        goto label_2a94e0;
    }
    ctx->pc = 0x2A94D8u;
    {
        const bool branch_taken_0x2a94d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a94d8) {
            ctx->pc = 0x2A94FCu;
            goto label_2a94fc;
        }
    }
    ctx->pc = 0x2A94E0u;
label_2a94e0:
    // 0x2a94e0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a94e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2a94e4:
    // 0x2a94e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a94e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a94e8:
    // 0x2a94e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a94e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2a94ec:
    // 0x2a94ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a94ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a94f0:
    // 0x2a94f0: 0x0  nop
    ctx->pc = 0x2a94f0u;
    // NOP
label_2a94f4:
    // 0x2a94f4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a94f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a94f8:
    // 0x2a94f8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a94f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a94fc:
    // 0x2a94fc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2a94fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_2a9500:
    // 0x2a9500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a9504:
    // 0x2a9504: 0x0  nop
    ctx->pc = 0x2a9504u;
    // NOP
label_2a9508:
    // 0x2a9508: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2a9508u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2a950c:
    // 0x2a950c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2a950cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2a9510:
    // 0x2a9510: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a9514:
    // 0x2a9514: 0x0  nop
    ctx->pc = 0x2a9514u;
    // NOP
label_2a9518:
    // 0x2a9518: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a9518u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a951c:
    // 0x2a951c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_2a9520:
    if (ctx->pc == 0x2A9520u) {
        ctx->pc = 0x2A9524u;
        goto label_2a9524;
    }
    ctx->pc = 0x2A951Cu;
    {
        const bool branch_taken_0x2a951c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a951c) {
            ctx->pc = 0x2A9544u;
            goto label_2a9544;
        }
    }
    ctx->pc = 0x2A9524u;
label_2a9524:
    // 0x2a9524: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2a9524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
label_2a9528:
    // 0x2a9528: 0x2785a458  addiu       $a1, $gp, -0x5BA8
    ctx->pc = 0x2a9528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943832));
label_2a952c:
    // 0x2a952c: 0xc08a78c  jal         func_229E30
label_2a9530:
    if (ctx->pc == 0x2A9530u) {
        ctx->pc = 0x2A9534u;
        goto label_2a9534;
    }
    ctx->pc = 0x2A952Cu;
    SET_GPR_U32(ctx, 31, 0x2A9534u);
    ctx->pc = 0x229E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229E30u, 0x2A952Cu, 0x2A9534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9534u;
label_2a9534:
    // 0x2a9534: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2a9534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a9538:
    // 0x2a9538: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x2a9538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
label_2a953c:
    // 0x2a953c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a9540:
    if (ctx->pc == 0x2A9540u) {
        ctx->pc = 0x2A9544u;
        goto label_2a9544;
    }
    ctx->pc = 0x2A953Cu;
    {
        const bool branch_taken_0x2a953c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a953c) {
            ctx->pc = 0x2A955Cu;
            goto label_2a955c;
        }
    }
    ctx->pc = 0x2A9544u;
label_2a9544:
    // 0x2a9544: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2a9544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
label_2a9548:
    // 0x2a9548: 0x2785a460  addiu       $a1, $gp, -0x5BA0
    ctx->pc = 0x2a9548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943840));
label_2a954c:
    // 0x2a954c: 0xc08a78c  jal         func_229E30
label_2a9550:
    if (ctx->pc == 0x2A9550u) {
        ctx->pc = 0x2A9554u;
        goto label_2a9554;
    }
    ctx->pc = 0x2A954Cu;
    SET_GPR_U32(ctx, 31, 0x2A9554u);
    ctx->pc = 0x229E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229E30u, 0x2A954Cu, 0x2A9554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9554u;
label_2a9554:
    // 0x2a9554: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2a9554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a9558:
    // 0x2a9558: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x2a9558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
label_2a955c:
    // 0x2a955c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a955cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a9560:
    // 0x2a9560: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a9560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a9564:
    // 0x2a9564: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a9564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a9568:
    // 0x2a9568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a9568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a956c:
    // 0x2a956c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2a956cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a9570:
    // 0x2a9570: 0x3e00008  jr          $ra
label_2a9574:
    if (ctx->pc == 0x2A9574u) {
        ctx->pc = 0x2A9578u;
        goto label_2a9578;
    }
    ctx->pc = 0x2A9570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9578u;
label_2a9578:
    // 0x2a9578: 0x0  nop
    ctx->pc = 0x2a9578u;
    // NOP
label_2a957c:
    // 0x2a957c: 0x0  nop
    ctx->pc = 0x2a957cu;
    // NOP
label_2a9580:
    // 0x2a9580: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a9580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2a9584:
    // 0x2a9584: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a9584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2a9588:
    // 0x2a9588: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a9588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2a958c:
    // 0x2a958c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a958cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a9590:
    // 0x2a9590: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a9590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a9594:
    // 0x2a9594: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2a9594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_2a9598:
    // 0x2a9598: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a9598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a959c:
    // 0x2a959c: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a959cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a95a0:
    // 0x2a95a0: 0xc0a85b4  jal         func_2A16D0
label_2a95a4:
    if (ctx->pc == 0x2A95A4u) {
        ctx->pc = 0x2A95A8u;
        goto label_2a95a8;
    }
    ctx->pc = 0x2A95A0u;
    SET_GPR_U32(ctx, 31, 0x2A95A8u);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A95A0u, 0x2A95A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A95A8u;
label_2a95a8:
    // 0x2a95a8: 0x8c520018  lw          $s2, 0x18($v0)
    ctx->pc = 0x2a95a8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2a95ac:
    // 0x2a95ac: 0x14120005  bne         $zero, $s2, . + 4 + (0x5 << 2)
label_2a95b0:
    if (ctx->pc == 0x2A95B0u) {
        ctx->pc = 0x2A95B4u;
        goto label_2a95b4;
    }
    ctx->pc = 0x2A95ACu;
    {
        const bool branch_taken_0x2a95ac = (GPR_U64(ctx, 0) != GPR_U64(ctx, 18));
        if (branch_taken_0x2a95ac) {
            ctx->pc = 0x2A95C4u;
            goto label_2a95c4;
        }
    }
    ctx->pc = 0x2A95B4u;
label_2a95b4:
    // 0x2a95b4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2a95b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a95b8:
    // 0x2a95b8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a95b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a95bc:
    // 0x2a95bc: 0xc09d250  jal         func_274940
label_2a95c0:
    if (ctx->pc == 0x2A95C0u) {
        ctx->pc = 0x2A95C4u;
        goto label_2a95c4;
    }
    ctx->pc = 0x2A95BCu;
    SET_GPR_U32(ctx, 31, 0x2A95C4u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2A95BCu, 0x2A95C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A95C4u;
label_2a95c4:
    // 0x2a95c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a95c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a95c8:
    // 0x2a95c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a95c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a95cc:
    // 0x2a95cc: 0xc0c7620  jal         func_31D880
label_2a95d0:
    if (ctx->pc == 0x2A95D0u) {
        ctx->pc = 0x2A95D4u;
        goto label_2a95d4;
    }
    ctx->pc = 0x2A95CCu;
    SET_GPR_U32(ctx, 31, 0x2A95D4u);
    ctx->pc = 0x31D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D880u, 0x2A95CCu, 0x2A95D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A95D4u;
label_2a95d4:
    // 0x2a95d4: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2a95d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2a95d8:
    // 0x2a95d8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2a95dc:
    if (ctx->pc == 0x2A95DCu) {
        ctx->pc = 0x2A95E0u;
        goto label_2a95e0;
    }
    ctx->pc = 0x2A95D8u;
    {
        const bool branch_taken_0x2a95d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a95d8) {
            ctx->pc = 0x2A95E8u;
            goto label_2a95e8;
        }
    }
    ctx->pc = 0x2A95E0u;
label_2a95e0:
    // 0x2a95e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a95e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a95e4:
    // 0x2a95e4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2a95e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2a95e8:
    // 0x2a95e8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2a95e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a95ec:
    // 0x2a95ec: 0xc09d248  jal         func_274920
label_2a95f0:
    if (ctx->pc == 0x2A95F0u) {
        ctx->pc = 0x2A95F4u;
        goto label_2a95f4;
    }
    ctx->pc = 0x2A95ECu;
    SET_GPR_U32(ctx, 31, 0x2A95F4u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x2A95ECu, 0x2A95F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A95F4u;
label_2a95f4:
    // 0x2a95f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a95f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a95f8:
    // 0x2a95f8: 0x104300c2  beq         $v0, $v1, . + 4 + (0xC2 << 2)
label_2a95fc:
    if (ctx->pc == 0x2A95FCu) {
        ctx->pc = 0x2A9600u;
        goto label_2a9600;
    }
    ctx->pc = 0x2A95F8u;
    {
        const bool branch_taken_0x2a95f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a95f8) {
            ctx->pc = 0x2A9904u;
            goto label_2a9904;
        }
    }
    ctx->pc = 0x2A9600u;
label_2a9600:
    // 0x2a9600: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a9600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a9604:
    // 0x2a9604: 0x10430021  beq         $v0, $v1, . + 4 + (0x21 << 2)
label_2a9608:
    if (ctx->pc == 0x2A9608u) {
        ctx->pc = 0x2A960Cu;
        goto label_2a960c;
    }
    ctx->pc = 0x2A9604u;
    {
        const bool branch_taken_0x2a9604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a9604) {
            ctx->pc = 0x2A968Cu;
            goto label_2a968c;
        }
    }
    ctx->pc = 0x2A960Cu;
label_2a960c:
    // 0x2a960c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a960cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a9610:
    // 0x2a9610: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_2a9614:
    if (ctx->pc == 0x2A9614u) {
        ctx->pc = 0x2A9618u;
        goto label_2a9618;
    }
    ctx->pc = 0x2A9610u;
    {
        const bool branch_taken_0x2a9610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a9610) {
            ctx->pc = 0x2A9620u;
            goto label_2a9620;
        }
    }
    ctx->pc = 0x2A9618u;
label_2a9618:
    // 0x2a9618: 0x100000bf  b           . + 4 + (0xBF << 2)
label_2a961c:
    if (ctx->pc == 0x2A961Cu) {
        ctx->pc = 0x2A9620u;
        goto label_2a9620;
    }
    ctx->pc = 0x2A9618u;
    {
        const bool branch_taken_0x2a9618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9618) {
            ctx->pc = 0x2A9918u;
            goto label_2a9918;
        }
    }
    ctx->pc = 0x2A9620u;
label_2a9620:
    // 0x2a9620: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_2a9624:
    if (ctx->pc == 0x2A9624u) {
        ctx->pc = 0x2A9628u;
        goto label_2a9628;
    }
    ctx->pc = 0x2A9620u;
    {
        const bool branch_taken_0x2a9620 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9620) {
            ctx->pc = 0x2A9674u;
            goto label_2a9674;
        }
    }
    ctx->pc = 0x2A9628u;
label_2a9628:
    // 0x2a9628: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a9628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a962c:
    // 0x2a962c: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a962cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a9630:
    // 0x2a9630: 0xc0a85b4  jal         func_2A16D0
label_2a9634:
    if (ctx->pc == 0x2A9634u) {
        ctx->pc = 0x2A9638u;
        goto label_2a9638;
    }
    ctx->pc = 0x2A9630u;
    SET_GPR_U32(ctx, 31, 0x2A9638u);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A9630u, 0x2A9638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9638u;
label_2a9638:
    // 0x2a9638: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2a9638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a963c:
    // 0x2a963c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a963cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9640:
    // 0x2a9640: 0x8c650058  lw          $a1, 0x58($v1)
    ctx->pc = 0x2a9640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2a9644:
    // 0x2a9644: 0xc0c786a  jal         func_31E1A8
label_2a9648:
    if (ctx->pc == 0x2A9648u) {
        ctx->pc = 0x2A964Cu;
        goto label_2a964c;
    }
    ctx->pc = 0x2A9644u;
    SET_GPR_U32(ctx, 31, 0x2A964Cu);
    ctx->pc = 0x31E1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E1A8u, 0x2A9644u, 0x2A964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A964Cu;
label_2a964c:
    // 0x2a964c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a964cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a9650:
    // 0x2a9650: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a9650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a9654:
    // 0x2a9654: 0xc0a85b4  jal         func_2A16D0
label_2a9658:
    if (ctx->pc == 0x2A9658u) {
        ctx->pc = 0x2A965Cu;
        goto label_2a965c;
    }
    ctx->pc = 0x2A9654u;
    SET_GPR_U32(ctx, 31, 0x2A965Cu);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A9654u, 0x2A965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A965Cu;
label_2a965c:
    // 0x2a965c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a965cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9660:
    // 0x2a9660: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x2a9660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
label_2a9664:
    // 0x2a9664: 0x24a59a50  addiu       $a1, $a1, -0x65B0
    ctx->pc = 0x2a9664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941264));
label_2a9668:
    // 0x2a9668: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x2a9668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a966c:
    // 0x2a966c: 0xc0c79f2  jal         func_31E7C8
label_2a9670:
    if (ctx->pc == 0x2A9670u) {
        ctx->pc = 0x2A9674u;
        goto label_2a9674;
    }
    ctx->pc = 0x2A966Cu;
    SET_GPR_U32(ctx, 31, 0x2A9674u);
    ctx->pc = 0x31E7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7C8u, 0x2A966Cu, 0x2A9674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9674u;
label_2a9674:
    // 0x2a9674: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2a9674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a9678:
    // 0x2a9678: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a9678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a967c:
    // 0x2a967c: 0xc09d250  jal         func_274940
label_2a9680:
    if (ctx->pc == 0x2A9680u) {
        ctx->pc = 0x2A9684u;
        goto label_2a9684;
    }
    ctx->pc = 0x2A967Cu;
    SET_GPR_U32(ctx, 31, 0x2A9684u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2A967Cu, 0x2A9684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9684u;
label_2a9684:
    // 0x2a9684: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_2a9688:
    if (ctx->pc == 0x2A9688u) {
        ctx->pc = 0x2A968Cu;
        goto label_2a968c;
    }
    ctx->pc = 0x2A9684u;
    {
        const bool branch_taken_0x2a9684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9684) {
            ctx->pc = 0x2A9918u;
            goto label_2a9918;
        }
    }
    ctx->pc = 0x2A968Cu;
label_2a968c:
    // 0x2a968c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2a968cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2a9690:
    // 0x2a9690: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2a9690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_2a9694:
    // 0x2a9694: 0xc0858ac  jal         func_2162B0
label_2a9698:
    if (ctx->pc == 0x2A9698u) {
        ctx->pc = 0x2A969Cu;
        goto label_2a969c;
    }
    ctx->pc = 0x2A9694u;
    SET_GPR_U32(ctx, 31, 0x2A969Cu);
    ctx->pc = 0x2162B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2162B0u, 0x2A9694u, 0x2A969Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A969Cu;
label_2a969c:
    // 0x2a969c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2a969cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2a96a0:
    // 0x2a96a0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2a96a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a96a4:
    // 0x2a96a4: 0x9063005c  lbu         $v1, 0x5C($v1)
    ctx->pc = 0x2a96a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 92)));
label_2a96a8:
    // 0x2a96a8: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
label_2a96ac:
    if (ctx->pc == 0x2A96ACu) {
        ctx->pc = 0x2A96B0u;
        goto label_2a96b0;
    }
    ctx->pc = 0x2A96A8u;
    {
        const bool branch_taken_0x2a96a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a96a8) {
            ctx->pc = 0x2A9730u;
            goto label_2a9730;
        }
    }
    ctx->pc = 0x2A96B0u;
label_2a96b0:
    // 0x2a96b0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2a96b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a96b4:
    // 0x2a96b4: 0xa060005c  sb          $zero, 0x5C($v1)
    ctx->pc = 0x2a96b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 92), (uint8_t)GPR_U32(ctx, 0));
label_2a96b8:
    // 0x2a96b8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2a96b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a96bc:
    // 0x2a96bc: 0xa0600064  sb          $zero, 0x64($v1)
    ctx->pc = 0x2a96bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 100), (uint8_t)GPR_U32(ctx, 0));
label_2a96c0:
    // 0x2a96c0: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_2a96c4:
    if (ctx->pc == 0x2A96C4u) {
        ctx->pc = 0x2A96C8u;
        goto label_2a96c8;
    }
    ctx->pc = 0x2A96C0u;
    {
        const bool branch_taken_0x2a96c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a96c0) {
            ctx->pc = 0x2A9730u;
            goto label_2a9730;
        }
    }
    ctx->pc = 0x2A96C8u;
label_2a96c8:
    // 0x2a96c8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a96c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a96cc:
    // 0x2a96cc: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a96ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a96d0:
    // 0x2a96d0: 0xc0a85b4  jal         func_2A16D0
label_2a96d4:
    if (ctx->pc == 0x2A96D4u) {
        ctx->pc = 0x2A96D8u;
        goto label_2a96d8;
    }
    ctx->pc = 0x2A96D0u;
    SET_GPR_U32(ctx, 31, 0x2A96D8u);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A96D0u, 0x2A96D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A96D8u;
label_2a96d8:
    // 0x2a96d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a96d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a96dc:
    // 0x2a96dc: 0xc0c79b8  jal         func_31E6E0
label_2a96e0:
    if (ctx->pc == 0x2A96E0u) {
        ctx->pc = 0x2A96E4u;
        goto label_2a96e4;
    }
    ctx->pc = 0x2A96DCu;
    SET_GPR_U32(ctx, 31, 0x2A96E4u);
    ctx->pc = 0x31E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E6E0u, 0x2A96DCu, 0x2A96E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A96E4u;
label_2a96e4:
    // 0x2a96e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a96e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a96e8:
    // 0x2a96e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a96e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a96ec:
    // 0x2a96ec: 0x0  nop
    ctx->pc = 0x2a96ecu;
    // NOP
label_2a96f0:
    // 0x2a96f0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2a96f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2a96f4:
    // 0x2a96f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a96f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a96f8:
    // 0x2a96f8: 0x0  nop
    ctx->pc = 0x2a96f8u;
    // NOP
label_2a96fc:
    // 0x2a96fc: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2a96fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2a9700:
    // 0x2a9700: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a9700u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a9704:
    // 0x2a9704: 0x0  nop
    ctx->pc = 0x2a9704u;
    // NOP
label_2a9708:
    // 0x2a9708: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2a9708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2a970c:
    // 0x2a970c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a970cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a9710:
    // 0x2a9710: 0x0  nop
    ctx->pc = 0x2a9710u;
    // NOP
label_2a9714:
    // 0x2a9714: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2a9714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_2a9718:
    // 0x2a9718: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a9718u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a971c:
    // 0x2a971c: 0x0  nop
    ctx->pc = 0x2a971cu;
    // NOP
label_2a9720:
    // 0x2a9720: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2a9720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2a9724:
    // 0x2a9724: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a9724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a9728:
    // 0x2a9728: 0x0  nop
    ctx->pc = 0x2a9728u;
    // NOP
label_2a972c:
    // 0x2a972c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2a972cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_2a9730:
    // 0x2a9730: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2a9730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a9734:
    // 0x2a9734: 0xc4610060  lwc1        $f1, 0x60($v1)
    ctx->pc = 0x2a9734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a9738:
    // 0x2a9738: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2a9738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a973c:
    // 0x2a973c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2a973cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a9740:
    // 0x2a9740: 0x45010020  bc1t        . + 4 + (0x20 << 2)
label_2a9744:
    if (ctx->pc == 0x2A9744u) {
        ctx->pc = 0x2A9748u;
        goto label_2a9748;
    }
    ctx->pc = 0x2A9740u;
    {
        const bool branch_taken_0x2a9740 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a9740) {
            ctx->pc = 0x2A97C4u;
            goto label_2a97c4;
        }
    }
    ctx->pc = 0x2A9748u;
label_2a9748:
    // 0x2a9748: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a9748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a974c:
    // 0x2a974c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a974cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a9750:
    // 0x2a9750: 0xa0430064  sb          $v1, 0x64($v0)
    ctx->pc = 0x2a9750u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 100), (uint8_t)GPR_U32(ctx, 3));
label_2a9754:
    // 0x2a9754: 0xc0de0d2  jal         func_378348
label_2a9758:
    if (ctx->pc == 0x2A9758u) {
        ctx->pc = 0x2A975Cu;
        goto label_2a975c;
    }
    ctx->pc = 0x2A9754u;
    SET_GPR_U32(ctx, 31, 0x2A975Cu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2A9754u, 0x2A975Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A975Cu;
label_2a975c:
    // 0x2a975c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2a9760:
    if (ctx->pc == 0x2A9760u) {
        ctx->pc = 0x2A9764u;
        goto label_2a9764;
    }
    ctx->pc = 0x2A975Cu;
    {
        const bool branch_taken_0x2a975c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a975c) {
            ctx->pc = 0x2A9778u;
            goto label_2a9778;
        }
    }
    ctx->pc = 0x2A9764u;
label_2a9764:
    // 0x2a9764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a9768:
    // 0x2a9768: 0x0  nop
    ctx->pc = 0x2a9768u;
    // NOP
label_2a976c:
    // 0x2a976c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a976cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a9770:
    // 0x2a9770: 0x10000008  b           . + 4 + (0x8 << 2)
label_2a9774:
    if (ctx->pc == 0x2A9774u) {
        ctx->pc = 0x2A9778u;
        goto label_2a9778;
    }
    ctx->pc = 0x2A9770u;
    {
        const bool branch_taken_0x2a9770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9770) {
            ctx->pc = 0x2A9794u;
            goto label_2a9794;
        }
    }
    ctx->pc = 0x2A9778u;
label_2a9778:
    // 0x2a9778: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x2a9778u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2a977c:
    // 0x2a977c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x2a977cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a9780:
    // 0x2a9780: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a9780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2a9784:
    // 0x2a9784: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a9784u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a9788:
    // 0x2a9788: 0x0  nop
    ctx->pc = 0x2a9788u;
    // NOP
label_2a978c:
    // 0x2a978c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a978cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2a9790:
    // 0x2a9790: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a9790u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a9794:
    // 0x2a9794: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2a9794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2a9798:
    // 0x2a9798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a979c:
    // 0x2a979c: 0x0  nop
    ctx->pc = 0x2a979cu;
    // NOP
label_2a97a0:
    // 0x2a97a0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2a97a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2a97a4:
    // 0x2a97a4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x2a97a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a97a8:
    // 0x2a97a8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2a97a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a97ac:
    // 0x2a97ac: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2a97acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_2a97b0:
    // 0x2a97b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a97b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a97b4:
    // 0x2a97b4: 0x0  nop
    ctx->pc = 0x2a97b4u;
    // NOP
label_2a97b8:
    // 0x2a97b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a97b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a97bc:
    // 0x2a97bc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2a97bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a97c0:
    // 0x2a97c0: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2a97c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
label_2a97c4:
    // 0x2a97c4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2a97c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a97c8:
    // 0x2a97c8: 0x90630064  lbu         $v1, 0x64($v1)
    ctx->pc = 0x2a97c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 100)));
label_2a97cc:
    // 0x2a97cc: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
label_2a97d0:
    if (ctx->pc == 0x2A97D0u) {
        ctx->pc = 0x2A97D4u;
        goto label_2a97d4;
    }
    ctx->pc = 0x2A97CCu;
    {
        const bool branch_taken_0x2a97cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a97cc) {
            ctx->pc = 0x2A98CCu;
            goto label_2a98cc;
        }
    }
    ctx->pc = 0x2A97D4u;
label_2a97d4:
    // 0x2a97d4: 0x1220003d  beqz        $s1, . + 4 + (0x3D << 2)
label_2a97d8:
    if (ctx->pc == 0x2A97D8u) {
        ctx->pc = 0x2A97DCu;
        goto label_2a97dc;
    }
    ctx->pc = 0x2A97D4u;
    {
        const bool branch_taken_0x2a97d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a97d4) {
            ctx->pc = 0x2A98CCu;
            goto label_2a98cc;
        }
    }
    ctx->pc = 0x2A97DCu;
label_2a97dc:
    // 0x2a97dc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a97dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a97e0:
    // 0x2a97e0: 0xc4410068  lwc1        $f1, 0x68($v0)
    ctx->pc = 0x2a97e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a97e4:
    // 0x2a97e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a97e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a97e8:
    // 0x2a97e8: 0x0  nop
    ctx->pc = 0x2a97e8u;
    // NOP
label_2a97ec:
    // 0x2a97ec: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2a97ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a97f0:
    // 0x2a97f0: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_2a97f4:
    if (ctx->pc == 0x2A97F4u) {
        ctx->pc = 0x2A97F8u;
        goto label_2a97f8;
    }
    ctx->pc = 0x2A97F0u;
    {
        const bool branch_taken_0x2a97f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a97f0) {
            ctx->pc = 0x2A9824u;
            goto label_2a9824;
        }
    }
    ctx->pc = 0x2A97F8u;
label_2a97f8:
    // 0x2a97f8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a97f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a97fc:
    // 0x2a97fc: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a97fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a9800:
    // 0x2a9800: 0xc0a85b4  jal         func_2A16D0
label_2a9804:
    if (ctx->pc == 0x2A9804u) {
        ctx->pc = 0x2A9808u;
        goto label_2a9808;
    }
    ctx->pc = 0x2A9800u;
    SET_GPR_U32(ctx, 31, 0x2A9808u);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A9800u, 0x2A9808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9808u;
label_2a9808:
    // 0x2a9808: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x2a9808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2a980c:
    // 0x2a980c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a980cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9810:
    // 0x2a9810: 0xc46c000c  lwc1        $f12, 0xC($v1)
    ctx->pc = 0x2a9810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a9814:
    // 0x2a9814: 0xc0c7910  jal         func_31E440
label_2a9818:
    if (ctx->pc == 0x2A9818u) {
        ctx->pc = 0x2A981Cu;
        goto label_2a981c;
    }
    ctx->pc = 0x2A9814u;
    SET_GPR_U32(ctx, 31, 0x2A981Cu);
    ctx->pc = 0x31E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E440u, 0x2A9814u, 0x2A981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A981Cu;
label_2a981c:
    // 0x2a981c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_2a9820:
    if (ctx->pc == 0x2A9820u) {
        ctx->pc = 0x2A9824u;
        goto label_2a9824;
    }
    ctx->pc = 0x2A981Cu;
    {
        const bool branch_taken_0x2a981c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a981c) {
            ctx->pc = 0x2A9918u;
            goto label_2a9918;
        }
    }
    ctx->pc = 0x2A9824u;
label_2a9824:
    // 0x2a9824: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a9824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a9828:
    // 0x2a9828: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a9828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a982c:
    // 0x2a982c: 0xc0a85b4  jal         func_2A16D0
label_2a9830:
    if (ctx->pc == 0x2A9830u) {
        ctx->pc = 0x2A9834u;
        goto label_2a9834;
    }
    ctx->pc = 0x2A982Cu;
    SET_GPR_U32(ctx, 31, 0x2A9834u);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A982Cu, 0x2A9834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9834u;
label_2a9834:
    // 0x2a9834: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a9834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9838:
    // 0x2a9838: 0xc0c79e2  jal         func_31E788
label_2a983c:
    if (ctx->pc == 0x2A983Cu) {
        ctx->pc = 0x2A9840u;
        goto label_2a9840;
    }
    ctx->pc = 0x2A9838u;
    SET_GPR_U32(ctx, 31, 0x2A9840u);
    ctx->pc = 0x31E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E788u, 0x2A9838u, 0x2A9840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9840u;
label_2a9840:
    // 0x2a9840: 0x14020014  bne         $zero, $v0, . + 4 + (0x14 << 2)
label_2a9844:
    if (ctx->pc == 0x2A9844u) {
        ctx->pc = 0x2A9848u;
        goto label_2a9848;
    }
    ctx->pc = 0x2A9840u;
    {
        const bool branch_taken_0x2a9840 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a9840) {
            ctx->pc = 0x2A9894u;
            goto label_2a9894;
        }
    }
    ctx->pc = 0x2A9848u;
label_2a9848:
    // 0x2a9848: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a9848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a984c:
    // 0x2a984c: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a984cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a9850:
    // 0x2a9850: 0xc0a85b4  jal         func_2A16D0
label_2a9854:
    if (ctx->pc == 0x2A9854u) {
        ctx->pc = 0x2A9858u;
        goto label_2a9858;
    }
    ctx->pc = 0x2A9850u;
    SET_GPR_U32(ctx, 31, 0x2A9858u);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A9850u, 0x2A9858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9858u;
label_2a9858:
    // 0x2a9858: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2a9858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a985c:
    // 0x2a985c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a985cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9860:
    // 0x2a9860: 0x8c650058  lw          $a1, 0x58($v1)
    ctx->pc = 0x2a9860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2a9864:
    // 0x2a9864: 0xc0c786a  jal         func_31E1A8
label_2a9868:
    if (ctx->pc == 0x2A9868u) {
        ctx->pc = 0x2A986Cu;
        goto label_2a986c;
    }
    ctx->pc = 0x2A9864u;
    SET_GPR_U32(ctx, 31, 0x2A986Cu);
    ctx->pc = 0x31E1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E1A8u, 0x2A9864u, 0x2A986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A986Cu;
label_2a986c:
    // 0x2a986c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a986cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a9870:
    // 0x2a9870: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a9870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a9874:
    // 0x2a9874: 0xc0a85b4  jal         func_2A16D0
label_2a9878:
    if (ctx->pc == 0x2A9878u) {
        ctx->pc = 0x2A987Cu;
        goto label_2a987c;
    }
    ctx->pc = 0x2A9874u;
    SET_GPR_U32(ctx, 31, 0x2A987Cu);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A9874u, 0x2A987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A987Cu;
label_2a987c:
    // 0x2a987c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a987cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9880:
    // 0x2a9880: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x2a9880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
label_2a9884:
    // 0x2a9884: 0x24a59a50  addiu       $a1, $a1, -0x65B0
    ctx->pc = 0x2a9884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941264));
label_2a9888:
    // 0x2a9888: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x2a9888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a988c:
    // 0x2a988c: 0xc0c79f2  jal         func_31E7C8
label_2a9890:
    if (ctx->pc == 0x2A9890u) {
        ctx->pc = 0x2A9894u;
        goto label_2a9894;
    }
    ctx->pc = 0x2A988Cu;
    SET_GPR_U32(ctx, 31, 0x2A9894u);
    ctx->pc = 0x31E7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7C8u, 0x2A988Cu, 0x2A9894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9894u;
label_2a9894:
    // 0x2a9894: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a9894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a9898:
    // 0x2a9898: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a9898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a989c:
    // 0x2a989c: 0xc0a85b4  jal         func_2A16D0
label_2a98a0:
    if (ctx->pc == 0x2A98A0u) {
        ctx->pc = 0x2A98A4u;
        goto label_2a98a4;
    }
    ctx->pc = 0x2A989Cu;
    SET_GPR_U32(ctx, 31, 0x2A98A4u);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A989Cu, 0x2A98A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A98A4u;
label_2a98a4:
    // 0x2a98a4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2a98a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a98a8:
    // 0x2a98a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a98a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a98ac:
    // 0x2a98ac: 0xc46c0068  lwc1        $f12, 0x68($v1)
    ctx->pc = 0x2a98acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2a98b0:
    // 0x2a98b0: 0xc0c7910  jal         func_31E440
label_2a98b4:
    if (ctx->pc == 0x2A98B4u) {
        ctx->pc = 0x2A98B8u;
        goto label_2a98b8;
    }
    ctx->pc = 0x2A98B0u;
    SET_GPR_U32(ctx, 31, 0x2A98B8u);
    ctx->pc = 0x31E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E440u, 0x2A98B0u, 0x2A98B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A98B8u;
label_2a98b8:
    // 0x2a98b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a98b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a98bc:
    // 0x2a98bc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2a98bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a98c0:
    // 0x2a98c0: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2a98c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
label_2a98c4:
    // 0x2a98c4: 0x10000014  b           . + 4 + (0x14 << 2)
label_2a98c8:
    if (ctx->pc == 0x2A98C8u) {
        ctx->pc = 0x2A98CCu;
        goto label_2a98cc;
    }
    ctx->pc = 0x2A98C4u;
    {
        const bool branch_taken_0x2a98c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a98c4) {
            ctx->pc = 0x2A9918u;
            goto label_2a9918;
        }
    }
    ctx->pc = 0x2A98CCu;
label_2a98cc:
    // 0x2a98cc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2a98ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a98d0:
    // 0x2a98d0: 0x90630064  lbu         $v1, 0x64($v1)
    ctx->pc = 0x2a98d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 100)));
label_2a98d4:
    // 0x2a98d4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_2a98d8:
    if (ctx->pc == 0x2A98D8u) {
        ctx->pc = 0x2A98DCu;
        goto label_2a98dc;
    }
    ctx->pc = 0x2A98D4u;
    {
        const bool branch_taken_0x2a98d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a98d4) {
            ctx->pc = 0x2A9918u;
            goto label_2a9918;
        }
    }
    ctx->pc = 0x2A98DCu;
label_2a98dc:
    // 0x2a98dc: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
label_2a98e0:
    if (ctx->pc == 0x2A98E0u) {
        ctx->pc = 0x2A98E4u;
        goto label_2a98e4;
    }
    ctx->pc = 0x2A98DCu;
    {
        const bool branch_taken_0x2a98dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a98dc) {
            ctx->pc = 0x2A9918u;
            goto label_2a9918;
        }
    }
    ctx->pc = 0x2A98E4u;
label_2a98e4:
    // 0x2a98e4: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x2a98e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2a98e8:
    // 0x2a98e8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2a98e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2a98ec:
    // 0x2a98ec: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2a98ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a98f0:
    // 0x2a98f0: 0xc4600068  lwc1        $f0, 0x68($v1)
    ctx->pc = 0x2a98f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2a98f4:
    // 0x2a98f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a98f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2a98f8:
    // 0x2a98f8: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2a98f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
label_2a98fc:
    // 0x2a98fc: 0x10000006  b           . + 4 + (0x6 << 2)
label_2a9900:
    if (ctx->pc == 0x2A9900u) {
        ctx->pc = 0x2A9904u;
        goto label_2a9904;
    }
    ctx->pc = 0x2A98FCu;
    {
        const bool branch_taken_0x2a98fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a98fc) {
            ctx->pc = 0x2A9918u;
            goto label_2a9918;
        }
    }
    ctx->pc = 0x2A9904u;
label_2a9904:
    // 0x2a9904: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2a9904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2a9908:
    // 0x2a9908: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2a9908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a990c:
    // 0x2a990c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x2a990cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_2a9910:
    // 0x2a9910: 0x320f809  jalr        $t9
label_2a9914:
    if (ctx->pc == 0x2A9914u) {
        ctx->pc = 0x2A9918u;
        goto label_2a9918;
    }
    ctx->pc = 0x2A9910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2A9918u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9910u, 0x2A9918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A9918u;
label_2a9918:
    // 0x2a9918: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a9918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a991c:
    // 0x2a991c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a991cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a9920:
    // 0x2a9920: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a9920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a9924:
    // 0x2a9924: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a9924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a9928:
    // 0x2a9928: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2a9928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2a992c:
    // 0x2a992c: 0x3e00008  jr          $ra
label_2a9930:
    if (ctx->pc == 0x2A9930u) {
        ctx->pc = 0x2A9934u;
        goto label_2a9934;
    }
    ctx->pc = 0x2A992Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A992Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9934u;
label_2a9934:
    // 0x2a9934: 0x0  nop
    ctx->pc = 0x2a9934u;
    // NOP
label_2a9938:
    // 0x2a9938: 0x0  nop
    ctx->pc = 0x2a9938u;
    // NOP
label_2a993c:
    // 0x2a993c: 0x0  nop
    ctx->pc = 0x2a993cu;
    // NOP
label_2a9940:
    // 0x2a9940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a9940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2a9944:
    // 0x2a9944: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a9944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a9948:
    // 0x2a9948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a9948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2a994c:
    // 0x2a994c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a994cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2a9950:
    // 0x2a9950: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2a9950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_2a9954:
    // 0x2a9954: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a9954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a9958:
    // 0x2a9958: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a9958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a995c:
    // 0x2a995c: 0xc0a85b4  jal         func_2A16D0
label_2a9960:
    if (ctx->pc == 0x2A9960u) {
        ctx->pc = 0x2A9964u;
        goto label_2a9964;
    }
    ctx->pc = 0x2A995Cu;
    SET_GPR_U32(ctx, 31, 0x2A9964u);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A995Cu, 0x2A9964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9964u;
label_2a9964:
    // 0x2a9964: 0x8c510018  lw          $s1, 0x18($v0)
    ctx->pc = 0x2a9964u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2a9968:
    // 0x2a9968: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a9968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a996c:
    // 0x2a996c: 0xc0c7620  jal         func_31D880
label_2a9970:
    if (ctx->pc == 0x2A9970u) {
        ctx->pc = 0x2A9974u;
        goto label_2a9974;
    }
    ctx->pc = 0x2A996Cu;
    SET_GPR_U32(ctx, 31, 0x2A9974u);
    ctx->pc = 0x31D880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D880u, 0x2A996Cu, 0x2A9974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9974u;
label_2a9974:
    // 0x2a9974: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2a9974u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2a9978:
    // 0x2a9978: 0x14200029  bnez        $at, . + 4 + (0x29 << 2)
label_2a997c:
    if (ctx->pc == 0x2A997Cu) {
        ctx->pc = 0x2A9980u;
        goto label_2a9980;
    }
    ctx->pc = 0x2A9978u;
    {
        const bool branch_taken_0x2a9978 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9978) {
            ctx->pc = 0x2A9A20u;
            goto label_2a9a20;
        }
    }
    ctx->pc = 0x2A9980u;
label_2a9980:
    // 0x2a9980: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a9980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a9984:
    // 0x2a9984: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a9984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a9988:
    // 0x2a9988: 0xc0a85b4  jal         func_2A16D0
label_2a998c:
    if (ctx->pc == 0x2A998Cu) {
        ctx->pc = 0x2A9990u;
        goto label_2a9990;
    }
    ctx->pc = 0x2A9988u;
    SET_GPR_U32(ctx, 31, 0x2A9990u);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A9988u, 0x2A9990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9990u;
label_2a9990:
    // 0x2a9990: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a9990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9994:
    // 0x2a9994: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a9994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9998:
    // 0x2a9998: 0xc0c786a  jal         func_31E1A8
label_2a999c:
    if (ctx->pc == 0x2A999Cu) {
        ctx->pc = 0x2A99A0u;
        goto label_2a99a0;
    }
    ctx->pc = 0x2A9998u;
    SET_GPR_U32(ctx, 31, 0x2A99A0u);
    ctx->pc = 0x31E1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E1A8u, 0x2A9998u, 0x2A99A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A99A0u;
label_2a99a0:
    // 0x2a99a0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a99a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a99a4:
    // 0x2a99a4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2a99a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_2a99a8:
    // 0x2a99a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2a99ac:
    if (ctx->pc == 0x2A99ACu) {
        ctx->pc = 0x2A99B0u;
        goto label_2a99b0;
    }
    ctx->pc = 0x2A99A8u;
    {
        const bool branch_taken_0x2a99a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a99a8) {
            ctx->pc = 0x2A99B8u;
            goto label_2a99b8;
        }
    }
    ctx->pc = 0x2A99B0u;
label_2a99b0:
    // 0x2a99b0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a99b4:
    // 0x2a99b4: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x2a99b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_2a99b8:
    // 0x2a99b8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2a99b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a99bc:
    // 0x2a99bc: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2a99bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2a99c0:
    // 0x2a99c0: 0xc0a85b4  jal         func_2A16D0
label_2a99c4:
    if (ctx->pc == 0x2A99C4u) {
        ctx->pc = 0x2A99C8u;
        goto label_2a99c8;
    }
    ctx->pc = 0x2A99C0u;
    SET_GPR_U32(ctx, 31, 0x2A99C8u);
    ctx->pc = 0x2A16D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A16D0u, 0x2A99C0u, 0x2A99C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A99C8u;
label_2a99c8:
    // 0x2a99c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a99c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a99cc:
    // 0x2a99cc: 0xc0c79b8  jal         func_31E6E0
label_2a99d0:
    if (ctx->pc == 0x2A99D0u) {
        ctx->pc = 0x2A99D4u;
        goto label_2a99d4;
    }
    ctx->pc = 0x2A99CCu;
    SET_GPR_U32(ctx, 31, 0x2A99D4u);
    ctx->pc = 0x31E6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E6E0u, 0x2A99CCu, 0x2A99D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A99D4u;
label_2a99d4:
    // 0x2a99d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a99d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a99d8:
    // 0x2a99d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a99d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a99dc:
    // 0x2a99dc: 0x0  nop
    ctx->pc = 0x2a99dcu;
    // NOP
label_2a99e0:
    // 0x2a99e0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2a99e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2a99e4:
    // 0x2a99e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a99e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a99e8:
    // 0x2a99e8: 0x0  nop
    ctx->pc = 0x2a99e8u;
    // NOP
label_2a99ec:
    // 0x2a99ec: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2a99ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_2a99f0:
    // 0x2a99f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a99f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a99f4:
    // 0x2a99f4: 0x0  nop
    ctx->pc = 0x2a99f4u;
    // NOP
label_2a99f8:
    // 0x2a99f8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2a99f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2a99fc:
    // 0x2a99fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a99fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a9a00:
    // 0x2a9a00: 0x0  nop
    ctx->pc = 0x2a9a00u;
    // NOP
label_2a9a04:
    // 0x2a9a04: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2a9a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_2a9a08:
    // 0x2a9a08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a9a08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a9a0c:
    // 0x2a9a0c: 0x0  nop
    ctx->pc = 0x2a9a0cu;
    // NOP
label_2a9a10:
    // 0x2a9a10: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2a9a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2a9a14:
    // 0x2a9a14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a9a14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a9a18:
    // 0x2a9a18: 0x0  nop
    ctx->pc = 0x2a9a18u;
    // NOP
label_2a9a1c:
    // 0x2a9a1c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2a9a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_2a9a20:
    // 0x2a9a20: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2a9a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2a9a24:
    // 0x2a9a24: 0xc09d220  jal         func_274880
label_2a9a28:
    if (ctx->pc == 0x2A9A28u) {
        ctx->pc = 0x2A9A2Cu;
        goto label_2a9a2c;
    }
    ctx->pc = 0x2A9A24u;
    SET_GPR_U32(ctx, 31, 0x2A9A2Cu);
    ctx->pc = 0x274880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274880u, 0x2A9A24u, 0x2A9A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9A2Cu;
label_2a9a2c:
    // 0x2a9a2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a9a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a9a30:
    // 0x2a9a30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a9a30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a9a34:
    // 0x2a9a34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a9a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a9a38:
    // 0x2a9a38: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2a9a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2a9a3c:
    // 0x2a9a3c: 0x3e00008  jr          $ra
label_2a9a40:
    if (ctx->pc == 0x2A9A40u) {
        ctx->pc = 0x2A9A44u;
        goto label_2a9a44;
    }
    ctx->pc = 0x2A9A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9A44u;
label_2a9a44:
    // 0x2a9a44: 0x0  nop
    ctx->pc = 0x2a9a44u;
    // NOP
label_2a9a48:
    // 0x2a9a48: 0x0  nop
    ctx->pc = 0x2a9a48u;
    // NOP
label_2a9a4c:
    // 0x2a9a4c: 0x0  nop
    ctx->pc = 0x2a9a4cu;
    // NOP
    ctx->pc = 0x2a9a50u;
}
