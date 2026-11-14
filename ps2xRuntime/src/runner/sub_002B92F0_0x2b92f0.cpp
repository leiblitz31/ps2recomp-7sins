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

// Function: sub_002B92F0
// Address: 0x2b92f0 - 0x2bb820
void sub_002B92F0_0x2b92f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B92F0_0x2b92f0");
#endif

    switch (ctx->pc) {
        case 0x2b92f0u: goto label_2b92f0;
        case 0x2b92f4u: goto label_2b92f4;
        case 0x2b92f8u: goto label_2b92f8;
        case 0x2b92fcu: goto label_2b92fc;
        case 0x2b9300u: goto label_2b9300;
        case 0x2b9304u: goto label_2b9304;
        case 0x2b9308u: goto label_2b9308;
        case 0x2b930cu: goto label_2b930c;
        case 0x2b9310u: goto label_2b9310;
        case 0x2b9314u: goto label_2b9314;
        case 0x2b9318u: goto label_2b9318;
        case 0x2b931cu: goto label_2b931c;
        case 0x2b9320u: goto label_2b9320;
        case 0x2b9324u: goto label_2b9324;
        case 0x2b9328u: goto label_2b9328;
        case 0x2b932cu: goto label_2b932c;
        case 0x2b9330u: goto label_2b9330;
        case 0x2b9334u: goto label_2b9334;
        case 0x2b9338u: goto label_2b9338;
        case 0x2b933cu: goto label_2b933c;
        case 0x2b9340u: goto label_2b9340;
        case 0x2b9344u: goto label_2b9344;
        case 0x2b9348u: goto label_2b9348;
        case 0x2b934cu: goto label_2b934c;
        case 0x2b9350u: goto label_2b9350;
        case 0x2b9354u: goto label_2b9354;
        case 0x2b9358u: goto label_2b9358;
        case 0x2b935cu: goto label_2b935c;
        case 0x2b9360u: goto label_2b9360;
        case 0x2b9364u: goto label_2b9364;
        case 0x2b9368u: goto label_2b9368;
        case 0x2b936cu: goto label_2b936c;
        case 0x2b9370u: goto label_2b9370;
        case 0x2b9374u: goto label_2b9374;
        case 0x2b9378u: goto label_2b9378;
        case 0x2b937cu: goto label_2b937c;
        case 0x2b9380u: goto label_2b9380;
        case 0x2b9384u: goto label_2b9384;
        case 0x2b9388u: goto label_2b9388;
        case 0x2b938cu: goto label_2b938c;
        case 0x2b9390u: goto label_2b9390;
        case 0x2b9394u: goto label_2b9394;
        case 0x2b9398u: goto label_2b9398;
        case 0x2b939cu: goto label_2b939c;
        case 0x2b93a0u: goto label_2b93a0;
        case 0x2b93a4u: goto label_2b93a4;
        case 0x2b93a8u: goto label_2b93a8;
        case 0x2b93acu: goto label_2b93ac;
        case 0x2b93b0u: goto label_2b93b0;
        case 0x2b93b4u: goto label_2b93b4;
        case 0x2b93b8u: goto label_2b93b8;
        case 0x2b93bcu: goto label_2b93bc;
        case 0x2b93c0u: goto label_2b93c0;
        case 0x2b93c4u: goto label_2b93c4;
        case 0x2b93c8u: goto label_2b93c8;
        case 0x2b93ccu: goto label_2b93cc;
        case 0x2b93d0u: goto label_2b93d0;
        case 0x2b93d4u: goto label_2b93d4;
        case 0x2b93d8u: goto label_2b93d8;
        case 0x2b93dcu: goto label_2b93dc;
        case 0x2b93e0u: goto label_2b93e0;
        case 0x2b93e4u: goto label_2b93e4;
        case 0x2b93e8u: goto label_2b93e8;
        case 0x2b93ecu: goto label_2b93ec;
        case 0x2b93f0u: goto label_2b93f0;
        case 0x2b93f4u: goto label_2b93f4;
        case 0x2b93f8u: goto label_2b93f8;
        case 0x2b93fcu: goto label_2b93fc;
        case 0x2b9400u: goto label_2b9400;
        case 0x2b9404u: goto label_2b9404;
        case 0x2b9408u: goto label_2b9408;
        case 0x2b940cu: goto label_2b940c;
        case 0x2b9410u: goto label_2b9410;
        case 0x2b9414u: goto label_2b9414;
        case 0x2b9418u: goto label_2b9418;
        case 0x2b941cu: goto label_2b941c;
        case 0x2b9420u: goto label_2b9420;
        case 0x2b9424u: goto label_2b9424;
        case 0x2b9428u: goto label_2b9428;
        case 0x2b942cu: goto label_2b942c;
        case 0x2b9430u: goto label_2b9430;
        case 0x2b9434u: goto label_2b9434;
        case 0x2b9438u: goto label_2b9438;
        case 0x2b943cu: goto label_2b943c;
        case 0x2b9440u: goto label_2b9440;
        case 0x2b9444u: goto label_2b9444;
        case 0x2b9448u: goto label_2b9448;
        case 0x2b944cu: goto label_2b944c;
        case 0x2b9450u: goto label_2b9450;
        case 0x2b9454u: goto label_2b9454;
        case 0x2b9458u: goto label_2b9458;
        case 0x2b945cu: goto label_2b945c;
        case 0x2b9460u: goto label_2b9460;
        case 0x2b9464u: goto label_2b9464;
        case 0x2b9468u: goto label_2b9468;
        case 0x2b946cu: goto label_2b946c;
        case 0x2b9470u: goto label_2b9470;
        case 0x2b9474u: goto label_2b9474;
        case 0x2b9478u: goto label_2b9478;
        case 0x2b947cu: goto label_2b947c;
        case 0x2b9480u: goto label_2b9480;
        case 0x2b9484u: goto label_2b9484;
        case 0x2b9488u: goto label_2b9488;
        case 0x2b948cu: goto label_2b948c;
        case 0x2b9490u: goto label_2b9490;
        case 0x2b9494u: goto label_2b9494;
        case 0x2b9498u: goto label_2b9498;
        case 0x2b949cu: goto label_2b949c;
        case 0x2b94a0u: goto label_2b94a0;
        case 0x2b94a4u: goto label_2b94a4;
        case 0x2b94a8u: goto label_2b94a8;
        case 0x2b94acu: goto label_2b94ac;
        case 0x2b94b0u: goto label_2b94b0;
        case 0x2b94b4u: goto label_2b94b4;
        case 0x2b94b8u: goto label_2b94b8;
        case 0x2b94bcu: goto label_2b94bc;
        case 0x2b94c0u: goto label_2b94c0;
        case 0x2b94c4u: goto label_2b94c4;
        case 0x2b94c8u: goto label_2b94c8;
        case 0x2b94ccu: goto label_2b94cc;
        case 0x2b94d0u: goto label_2b94d0;
        case 0x2b94d4u: goto label_2b94d4;
        case 0x2b94d8u: goto label_2b94d8;
        case 0x2b94dcu: goto label_2b94dc;
        case 0x2b94e0u: goto label_2b94e0;
        case 0x2b94e4u: goto label_2b94e4;
        case 0x2b94e8u: goto label_2b94e8;
        case 0x2b94ecu: goto label_2b94ec;
        case 0x2b94f0u: goto label_2b94f0;
        case 0x2b94f4u: goto label_2b94f4;
        case 0x2b94f8u: goto label_2b94f8;
        case 0x2b94fcu: goto label_2b94fc;
        case 0x2b9500u: goto label_2b9500;
        case 0x2b9504u: goto label_2b9504;
        case 0x2b9508u: goto label_2b9508;
        case 0x2b950cu: goto label_2b950c;
        case 0x2b9510u: goto label_2b9510;
        case 0x2b9514u: goto label_2b9514;
        case 0x2b9518u: goto label_2b9518;
        case 0x2b951cu: goto label_2b951c;
        case 0x2b9520u: goto label_2b9520;
        case 0x2b9524u: goto label_2b9524;
        case 0x2b9528u: goto label_2b9528;
        case 0x2b952cu: goto label_2b952c;
        case 0x2b9530u: goto label_2b9530;
        case 0x2b9534u: goto label_2b9534;
        case 0x2b9538u: goto label_2b9538;
        case 0x2b953cu: goto label_2b953c;
        case 0x2b9540u: goto label_2b9540;
        case 0x2b9544u: goto label_2b9544;
        case 0x2b9548u: goto label_2b9548;
        case 0x2b954cu: goto label_2b954c;
        case 0x2b9550u: goto label_2b9550;
        case 0x2b9554u: goto label_2b9554;
        case 0x2b9558u: goto label_2b9558;
        case 0x2b955cu: goto label_2b955c;
        case 0x2b9560u: goto label_2b9560;
        case 0x2b9564u: goto label_2b9564;
        case 0x2b9568u: goto label_2b9568;
        case 0x2b956cu: goto label_2b956c;
        case 0x2b9570u: goto label_2b9570;
        case 0x2b9574u: goto label_2b9574;
        case 0x2b9578u: goto label_2b9578;
        case 0x2b957cu: goto label_2b957c;
        case 0x2b9580u: goto label_2b9580;
        case 0x2b9584u: goto label_2b9584;
        case 0x2b9588u: goto label_2b9588;
        case 0x2b958cu: goto label_2b958c;
        case 0x2b9590u: goto label_2b9590;
        case 0x2b9594u: goto label_2b9594;
        case 0x2b9598u: goto label_2b9598;
        case 0x2b959cu: goto label_2b959c;
        case 0x2b95a0u: goto label_2b95a0;
        case 0x2b95a4u: goto label_2b95a4;
        case 0x2b95a8u: goto label_2b95a8;
        case 0x2b95acu: goto label_2b95ac;
        case 0x2b95b0u: goto label_2b95b0;
        case 0x2b95b4u: goto label_2b95b4;
        case 0x2b95b8u: goto label_2b95b8;
        case 0x2b95bcu: goto label_2b95bc;
        case 0x2b95c0u: goto label_2b95c0;
        case 0x2b95c4u: goto label_2b95c4;
        case 0x2b95c8u: goto label_2b95c8;
        case 0x2b95ccu: goto label_2b95cc;
        case 0x2b95d0u: goto label_2b95d0;
        case 0x2b95d4u: goto label_2b95d4;
        case 0x2b95d8u: goto label_2b95d8;
        case 0x2b95dcu: goto label_2b95dc;
        case 0x2b95e0u: goto label_2b95e0;
        case 0x2b95e4u: goto label_2b95e4;
        case 0x2b95e8u: goto label_2b95e8;
        case 0x2b95ecu: goto label_2b95ec;
        case 0x2b95f0u: goto label_2b95f0;
        case 0x2b95f4u: goto label_2b95f4;
        case 0x2b95f8u: goto label_2b95f8;
        case 0x2b95fcu: goto label_2b95fc;
        case 0x2b9600u: goto label_2b9600;
        case 0x2b9604u: goto label_2b9604;
        case 0x2b9608u: goto label_2b9608;
        case 0x2b960cu: goto label_2b960c;
        case 0x2b9610u: goto label_2b9610;
        case 0x2b9614u: goto label_2b9614;
        case 0x2b9618u: goto label_2b9618;
        case 0x2b961cu: goto label_2b961c;
        case 0x2b9620u: goto label_2b9620;
        case 0x2b9624u: goto label_2b9624;
        case 0x2b9628u: goto label_2b9628;
        case 0x2b962cu: goto label_2b962c;
        case 0x2b9630u: goto label_2b9630;
        case 0x2b9634u: goto label_2b9634;
        case 0x2b9638u: goto label_2b9638;
        case 0x2b963cu: goto label_2b963c;
        case 0x2b9640u: goto label_2b9640;
        case 0x2b9644u: goto label_2b9644;
        case 0x2b9648u: goto label_2b9648;
        case 0x2b964cu: goto label_2b964c;
        case 0x2b9650u: goto label_2b9650;
        case 0x2b9654u: goto label_2b9654;
        case 0x2b9658u: goto label_2b9658;
        case 0x2b965cu: goto label_2b965c;
        case 0x2b9660u: goto label_2b9660;
        case 0x2b9664u: goto label_2b9664;
        case 0x2b9668u: goto label_2b9668;
        case 0x2b966cu: goto label_2b966c;
        case 0x2b9670u: goto label_2b9670;
        case 0x2b9674u: goto label_2b9674;
        case 0x2b9678u: goto label_2b9678;
        case 0x2b967cu: goto label_2b967c;
        case 0x2b9680u: goto label_2b9680;
        case 0x2b9684u: goto label_2b9684;
        case 0x2b9688u: goto label_2b9688;
        case 0x2b968cu: goto label_2b968c;
        case 0x2b9690u: goto label_2b9690;
        case 0x2b9694u: goto label_2b9694;
        case 0x2b9698u: goto label_2b9698;
        case 0x2b969cu: goto label_2b969c;
        case 0x2b96a0u: goto label_2b96a0;
        case 0x2b96a4u: goto label_2b96a4;
        case 0x2b96a8u: goto label_2b96a8;
        case 0x2b96acu: goto label_2b96ac;
        case 0x2b96b0u: goto label_2b96b0;
        case 0x2b96b4u: goto label_2b96b4;
        case 0x2b96b8u: goto label_2b96b8;
        case 0x2b96bcu: goto label_2b96bc;
        case 0x2b96c0u: goto label_2b96c0;
        case 0x2b96c4u: goto label_2b96c4;
        case 0x2b96c8u: goto label_2b96c8;
        case 0x2b96ccu: goto label_2b96cc;
        case 0x2b96d0u: goto label_2b96d0;
        case 0x2b96d4u: goto label_2b96d4;
        case 0x2b96d8u: goto label_2b96d8;
        case 0x2b96dcu: goto label_2b96dc;
        case 0x2b96e0u: goto label_2b96e0;
        case 0x2b96e4u: goto label_2b96e4;
        case 0x2b96e8u: goto label_2b96e8;
        case 0x2b96ecu: goto label_2b96ec;
        case 0x2b96f0u: goto label_2b96f0;
        case 0x2b96f4u: goto label_2b96f4;
        case 0x2b96f8u: goto label_2b96f8;
        case 0x2b96fcu: goto label_2b96fc;
        case 0x2b9700u: goto label_2b9700;
        case 0x2b9704u: goto label_2b9704;
        case 0x2b9708u: goto label_2b9708;
        case 0x2b970cu: goto label_2b970c;
        case 0x2b9710u: goto label_2b9710;
        case 0x2b9714u: goto label_2b9714;
        case 0x2b9718u: goto label_2b9718;
        case 0x2b971cu: goto label_2b971c;
        case 0x2b9720u: goto label_2b9720;
        case 0x2b9724u: goto label_2b9724;
        case 0x2b9728u: goto label_2b9728;
        case 0x2b972cu: goto label_2b972c;
        case 0x2b9730u: goto label_2b9730;
        case 0x2b9734u: goto label_2b9734;
        case 0x2b9738u: goto label_2b9738;
        case 0x2b973cu: goto label_2b973c;
        case 0x2b9740u: goto label_2b9740;
        case 0x2b9744u: goto label_2b9744;
        case 0x2b9748u: goto label_2b9748;
        case 0x2b974cu: goto label_2b974c;
        case 0x2b9750u: goto label_2b9750;
        case 0x2b9754u: goto label_2b9754;
        case 0x2b9758u: goto label_2b9758;
        case 0x2b975cu: goto label_2b975c;
        case 0x2b9760u: goto label_2b9760;
        case 0x2b9764u: goto label_2b9764;
        case 0x2b9768u: goto label_2b9768;
        case 0x2b976cu: goto label_2b976c;
        case 0x2b9770u: goto label_2b9770;
        case 0x2b9774u: goto label_2b9774;
        case 0x2b9778u: goto label_2b9778;
        case 0x2b977cu: goto label_2b977c;
        case 0x2b9780u: goto label_2b9780;
        case 0x2b9784u: goto label_2b9784;
        case 0x2b9788u: goto label_2b9788;
        case 0x2b978cu: goto label_2b978c;
        case 0x2b9790u: goto label_2b9790;
        case 0x2b9794u: goto label_2b9794;
        case 0x2b9798u: goto label_2b9798;
        case 0x2b979cu: goto label_2b979c;
        case 0x2b97a0u: goto label_2b97a0;
        case 0x2b97a4u: goto label_2b97a4;
        case 0x2b97a8u: goto label_2b97a8;
        case 0x2b97acu: goto label_2b97ac;
        case 0x2b97b0u: goto label_2b97b0;
        case 0x2b97b4u: goto label_2b97b4;
        case 0x2b97b8u: goto label_2b97b8;
        case 0x2b97bcu: goto label_2b97bc;
        case 0x2b97c0u: goto label_2b97c0;
        case 0x2b97c4u: goto label_2b97c4;
        case 0x2b97c8u: goto label_2b97c8;
        case 0x2b97ccu: goto label_2b97cc;
        case 0x2b97d0u: goto label_2b97d0;
        case 0x2b97d4u: goto label_2b97d4;
        case 0x2b97d8u: goto label_2b97d8;
        case 0x2b97dcu: goto label_2b97dc;
        case 0x2b97e0u: goto label_2b97e0;
        case 0x2b97e4u: goto label_2b97e4;
        case 0x2b97e8u: goto label_2b97e8;
        case 0x2b97ecu: goto label_2b97ec;
        case 0x2b97f0u: goto label_2b97f0;
        case 0x2b97f4u: goto label_2b97f4;
        case 0x2b97f8u: goto label_2b97f8;
        case 0x2b97fcu: goto label_2b97fc;
        case 0x2b9800u: goto label_2b9800;
        case 0x2b9804u: goto label_2b9804;
        case 0x2b9808u: goto label_2b9808;
        case 0x2b980cu: goto label_2b980c;
        case 0x2b9810u: goto label_2b9810;
        case 0x2b9814u: goto label_2b9814;
        case 0x2b9818u: goto label_2b9818;
        case 0x2b981cu: goto label_2b981c;
        case 0x2b9820u: goto label_2b9820;
        case 0x2b9824u: goto label_2b9824;
        case 0x2b9828u: goto label_2b9828;
        case 0x2b982cu: goto label_2b982c;
        case 0x2b9830u: goto label_2b9830;
        case 0x2b9834u: goto label_2b9834;
        case 0x2b9838u: goto label_2b9838;
        case 0x2b983cu: goto label_2b983c;
        case 0x2b9840u: goto label_2b9840;
        case 0x2b9844u: goto label_2b9844;
        case 0x2b9848u: goto label_2b9848;
        case 0x2b984cu: goto label_2b984c;
        case 0x2b9850u: goto label_2b9850;
        case 0x2b9854u: goto label_2b9854;
        case 0x2b9858u: goto label_2b9858;
        case 0x2b985cu: goto label_2b985c;
        case 0x2b9860u: goto label_2b9860;
        case 0x2b9864u: goto label_2b9864;
        case 0x2b9868u: goto label_2b9868;
        case 0x2b986cu: goto label_2b986c;
        case 0x2b9870u: goto label_2b9870;
        case 0x2b9874u: goto label_2b9874;
        case 0x2b9878u: goto label_2b9878;
        case 0x2b987cu: goto label_2b987c;
        case 0x2b9880u: goto label_2b9880;
        case 0x2b9884u: goto label_2b9884;
        case 0x2b9888u: goto label_2b9888;
        case 0x2b988cu: goto label_2b988c;
        case 0x2b9890u: goto label_2b9890;
        case 0x2b9894u: goto label_2b9894;
        case 0x2b9898u: goto label_2b9898;
        case 0x2b989cu: goto label_2b989c;
        case 0x2b98a0u: goto label_2b98a0;
        case 0x2b98a4u: goto label_2b98a4;
        case 0x2b98a8u: goto label_2b98a8;
        case 0x2b98acu: goto label_2b98ac;
        case 0x2b98b0u: goto label_2b98b0;
        case 0x2b98b4u: goto label_2b98b4;
        case 0x2b98b8u: goto label_2b98b8;
        case 0x2b98bcu: goto label_2b98bc;
        case 0x2b98c0u: goto label_2b98c0;
        case 0x2b98c4u: goto label_2b98c4;
        case 0x2b98c8u: goto label_2b98c8;
        case 0x2b98ccu: goto label_2b98cc;
        case 0x2b98d0u: goto label_2b98d0;
        case 0x2b98d4u: goto label_2b98d4;
        case 0x2b98d8u: goto label_2b98d8;
        case 0x2b98dcu: goto label_2b98dc;
        case 0x2b98e0u: goto label_2b98e0;
        case 0x2b98e4u: goto label_2b98e4;
        case 0x2b98e8u: goto label_2b98e8;
        case 0x2b98ecu: goto label_2b98ec;
        case 0x2b98f0u: goto label_2b98f0;
        case 0x2b98f4u: goto label_2b98f4;
        case 0x2b98f8u: goto label_2b98f8;
        case 0x2b98fcu: goto label_2b98fc;
        case 0x2b9900u: goto label_2b9900;
        case 0x2b9904u: goto label_2b9904;
        case 0x2b9908u: goto label_2b9908;
        case 0x2b990cu: goto label_2b990c;
        case 0x2b9910u: goto label_2b9910;
        case 0x2b9914u: goto label_2b9914;
        case 0x2b9918u: goto label_2b9918;
        case 0x2b991cu: goto label_2b991c;
        case 0x2b9920u: goto label_2b9920;
        case 0x2b9924u: goto label_2b9924;
        case 0x2b9928u: goto label_2b9928;
        case 0x2b992cu: goto label_2b992c;
        case 0x2b9930u: goto label_2b9930;
        case 0x2b9934u: goto label_2b9934;
        case 0x2b9938u: goto label_2b9938;
        case 0x2b993cu: goto label_2b993c;
        case 0x2b9940u: goto label_2b9940;
        case 0x2b9944u: goto label_2b9944;
        case 0x2b9948u: goto label_2b9948;
        case 0x2b994cu: goto label_2b994c;
        case 0x2b9950u: goto label_2b9950;
        case 0x2b9954u: goto label_2b9954;
        case 0x2b9958u: goto label_2b9958;
        case 0x2b995cu: goto label_2b995c;
        case 0x2b9960u: goto label_2b9960;
        case 0x2b9964u: goto label_2b9964;
        case 0x2b9968u: goto label_2b9968;
        case 0x2b996cu: goto label_2b996c;
        case 0x2b9970u: goto label_2b9970;
        case 0x2b9974u: goto label_2b9974;
        case 0x2b9978u: goto label_2b9978;
        case 0x2b997cu: goto label_2b997c;
        case 0x2b9980u: goto label_2b9980;
        case 0x2b9984u: goto label_2b9984;
        case 0x2b9988u: goto label_2b9988;
        case 0x2b998cu: goto label_2b998c;
        case 0x2b9990u: goto label_2b9990;
        case 0x2b9994u: goto label_2b9994;
        case 0x2b9998u: goto label_2b9998;
        case 0x2b999cu: goto label_2b999c;
        case 0x2b99a0u: goto label_2b99a0;
        case 0x2b99a4u: goto label_2b99a4;
        case 0x2b99a8u: goto label_2b99a8;
        case 0x2b99acu: goto label_2b99ac;
        case 0x2b99b0u: goto label_2b99b0;
        case 0x2b99b4u: goto label_2b99b4;
        case 0x2b99b8u: goto label_2b99b8;
        case 0x2b99bcu: goto label_2b99bc;
        case 0x2b99c0u: goto label_2b99c0;
        case 0x2b99c4u: goto label_2b99c4;
        case 0x2b99c8u: goto label_2b99c8;
        case 0x2b99ccu: goto label_2b99cc;
        case 0x2b99d0u: goto label_2b99d0;
        case 0x2b99d4u: goto label_2b99d4;
        case 0x2b99d8u: goto label_2b99d8;
        case 0x2b99dcu: goto label_2b99dc;
        case 0x2b99e0u: goto label_2b99e0;
        case 0x2b99e4u: goto label_2b99e4;
        case 0x2b99e8u: goto label_2b99e8;
        case 0x2b99ecu: goto label_2b99ec;
        case 0x2b99f0u: goto label_2b99f0;
        case 0x2b99f4u: goto label_2b99f4;
        case 0x2b99f8u: goto label_2b99f8;
        case 0x2b99fcu: goto label_2b99fc;
        case 0x2b9a00u: goto label_2b9a00;
        case 0x2b9a04u: goto label_2b9a04;
        case 0x2b9a08u: goto label_2b9a08;
        case 0x2b9a0cu: goto label_2b9a0c;
        case 0x2b9a10u: goto label_2b9a10;
        case 0x2b9a14u: goto label_2b9a14;
        case 0x2b9a18u: goto label_2b9a18;
        case 0x2b9a1cu: goto label_2b9a1c;
        case 0x2b9a20u: goto label_2b9a20;
        case 0x2b9a24u: goto label_2b9a24;
        case 0x2b9a28u: goto label_2b9a28;
        case 0x2b9a2cu: goto label_2b9a2c;
        case 0x2b9a30u: goto label_2b9a30;
        case 0x2b9a34u: goto label_2b9a34;
        case 0x2b9a38u: goto label_2b9a38;
        case 0x2b9a3cu: goto label_2b9a3c;
        case 0x2b9a40u: goto label_2b9a40;
        case 0x2b9a44u: goto label_2b9a44;
        case 0x2b9a48u: goto label_2b9a48;
        case 0x2b9a4cu: goto label_2b9a4c;
        case 0x2b9a50u: goto label_2b9a50;
        case 0x2b9a54u: goto label_2b9a54;
        case 0x2b9a58u: goto label_2b9a58;
        case 0x2b9a5cu: goto label_2b9a5c;
        case 0x2b9a60u: goto label_2b9a60;
        case 0x2b9a64u: goto label_2b9a64;
        case 0x2b9a68u: goto label_2b9a68;
        case 0x2b9a6cu: goto label_2b9a6c;
        case 0x2b9a70u: goto label_2b9a70;
        case 0x2b9a74u: goto label_2b9a74;
        case 0x2b9a78u: goto label_2b9a78;
        case 0x2b9a7cu: goto label_2b9a7c;
        case 0x2b9a80u: goto label_2b9a80;
        case 0x2b9a84u: goto label_2b9a84;
        case 0x2b9a88u: goto label_2b9a88;
        case 0x2b9a8cu: goto label_2b9a8c;
        case 0x2b9a90u: goto label_2b9a90;
        case 0x2b9a94u: goto label_2b9a94;
        case 0x2b9a98u: goto label_2b9a98;
        case 0x2b9a9cu: goto label_2b9a9c;
        case 0x2b9aa0u: goto label_2b9aa0;
        case 0x2b9aa4u: goto label_2b9aa4;
        case 0x2b9aa8u: goto label_2b9aa8;
        case 0x2b9aacu: goto label_2b9aac;
        case 0x2b9ab0u: goto label_2b9ab0;
        case 0x2b9ab4u: goto label_2b9ab4;
        case 0x2b9ab8u: goto label_2b9ab8;
        case 0x2b9abcu: goto label_2b9abc;
        case 0x2b9ac0u: goto label_2b9ac0;
        case 0x2b9ac4u: goto label_2b9ac4;
        case 0x2b9ac8u: goto label_2b9ac8;
        case 0x2b9accu: goto label_2b9acc;
        case 0x2b9ad0u: goto label_2b9ad0;
        case 0x2b9ad4u: goto label_2b9ad4;
        case 0x2b9ad8u: goto label_2b9ad8;
        case 0x2b9adcu: goto label_2b9adc;
        case 0x2b9ae0u: goto label_2b9ae0;
        case 0x2b9ae4u: goto label_2b9ae4;
        case 0x2b9ae8u: goto label_2b9ae8;
        case 0x2b9aecu: goto label_2b9aec;
        case 0x2b9af0u: goto label_2b9af0;
        case 0x2b9af4u: goto label_2b9af4;
        case 0x2b9af8u: goto label_2b9af8;
        case 0x2b9afcu: goto label_2b9afc;
        case 0x2b9b00u: goto label_2b9b00;
        case 0x2b9b04u: goto label_2b9b04;
        case 0x2b9b08u: goto label_2b9b08;
        case 0x2b9b0cu: goto label_2b9b0c;
        case 0x2b9b10u: goto label_2b9b10;
        case 0x2b9b14u: goto label_2b9b14;
        case 0x2b9b18u: goto label_2b9b18;
        case 0x2b9b1cu: goto label_2b9b1c;
        case 0x2b9b20u: goto label_2b9b20;
        case 0x2b9b24u: goto label_2b9b24;
        case 0x2b9b28u: goto label_2b9b28;
        case 0x2b9b2cu: goto label_2b9b2c;
        case 0x2b9b30u: goto label_2b9b30;
        case 0x2b9b34u: goto label_2b9b34;
        case 0x2b9b38u: goto label_2b9b38;
        case 0x2b9b3cu: goto label_2b9b3c;
        case 0x2b9b40u: goto label_2b9b40;
        case 0x2b9b44u: goto label_2b9b44;
        case 0x2b9b48u: goto label_2b9b48;
        case 0x2b9b4cu: goto label_2b9b4c;
        case 0x2b9b50u: goto label_2b9b50;
        case 0x2b9b54u: goto label_2b9b54;
        case 0x2b9b58u: goto label_2b9b58;
        case 0x2b9b5cu: goto label_2b9b5c;
        case 0x2b9b60u: goto label_2b9b60;
        case 0x2b9b64u: goto label_2b9b64;
        case 0x2b9b68u: goto label_2b9b68;
        case 0x2b9b6cu: goto label_2b9b6c;
        case 0x2b9b70u: goto label_2b9b70;
        case 0x2b9b74u: goto label_2b9b74;
        case 0x2b9b78u: goto label_2b9b78;
        case 0x2b9b7cu: goto label_2b9b7c;
        case 0x2b9b80u: goto label_2b9b80;
        case 0x2b9b84u: goto label_2b9b84;
        case 0x2b9b88u: goto label_2b9b88;
        case 0x2b9b8cu: goto label_2b9b8c;
        case 0x2b9b90u: goto label_2b9b90;
        case 0x2b9b94u: goto label_2b9b94;
        case 0x2b9b98u: goto label_2b9b98;
        case 0x2b9b9cu: goto label_2b9b9c;
        case 0x2b9ba0u: goto label_2b9ba0;
        case 0x2b9ba4u: goto label_2b9ba4;
        case 0x2b9ba8u: goto label_2b9ba8;
        case 0x2b9bacu: goto label_2b9bac;
        case 0x2b9bb0u: goto label_2b9bb0;
        case 0x2b9bb4u: goto label_2b9bb4;
        case 0x2b9bb8u: goto label_2b9bb8;
        case 0x2b9bbcu: goto label_2b9bbc;
        case 0x2b9bc0u: goto label_2b9bc0;
        case 0x2b9bc4u: goto label_2b9bc4;
        case 0x2b9bc8u: goto label_2b9bc8;
        case 0x2b9bccu: goto label_2b9bcc;
        case 0x2b9bd0u: goto label_2b9bd0;
        case 0x2b9bd4u: goto label_2b9bd4;
        case 0x2b9bd8u: goto label_2b9bd8;
        case 0x2b9bdcu: goto label_2b9bdc;
        case 0x2b9be0u: goto label_2b9be0;
        case 0x2b9be4u: goto label_2b9be4;
        case 0x2b9be8u: goto label_2b9be8;
        case 0x2b9becu: goto label_2b9bec;
        case 0x2b9bf0u: goto label_2b9bf0;
        case 0x2b9bf4u: goto label_2b9bf4;
        case 0x2b9bf8u: goto label_2b9bf8;
        case 0x2b9bfcu: goto label_2b9bfc;
        case 0x2b9c00u: goto label_2b9c00;
        case 0x2b9c04u: goto label_2b9c04;
        case 0x2b9c08u: goto label_2b9c08;
        case 0x2b9c0cu: goto label_2b9c0c;
        case 0x2b9c10u: goto label_2b9c10;
        case 0x2b9c14u: goto label_2b9c14;
        case 0x2b9c18u: goto label_2b9c18;
        case 0x2b9c1cu: goto label_2b9c1c;
        case 0x2b9c20u: goto label_2b9c20;
        case 0x2b9c24u: goto label_2b9c24;
        case 0x2b9c28u: goto label_2b9c28;
        case 0x2b9c2cu: goto label_2b9c2c;
        case 0x2b9c30u: goto label_2b9c30;
        case 0x2b9c34u: goto label_2b9c34;
        case 0x2b9c38u: goto label_2b9c38;
        case 0x2b9c3cu: goto label_2b9c3c;
        case 0x2b9c40u: goto label_2b9c40;
        case 0x2b9c44u: goto label_2b9c44;
        case 0x2b9c48u: goto label_2b9c48;
        case 0x2b9c4cu: goto label_2b9c4c;
        case 0x2b9c50u: goto label_2b9c50;
        case 0x2b9c54u: goto label_2b9c54;
        case 0x2b9c58u: goto label_2b9c58;
        case 0x2b9c5cu: goto label_2b9c5c;
        case 0x2b9c60u: goto label_2b9c60;
        case 0x2b9c64u: goto label_2b9c64;
        case 0x2b9c68u: goto label_2b9c68;
        case 0x2b9c6cu: goto label_2b9c6c;
        case 0x2b9c70u: goto label_2b9c70;
        case 0x2b9c74u: goto label_2b9c74;
        case 0x2b9c78u: goto label_2b9c78;
        case 0x2b9c7cu: goto label_2b9c7c;
        case 0x2b9c80u: goto label_2b9c80;
        case 0x2b9c84u: goto label_2b9c84;
        case 0x2b9c88u: goto label_2b9c88;
        case 0x2b9c8cu: goto label_2b9c8c;
        case 0x2b9c90u: goto label_2b9c90;
        case 0x2b9c94u: goto label_2b9c94;
        case 0x2b9c98u: goto label_2b9c98;
        case 0x2b9c9cu: goto label_2b9c9c;
        case 0x2b9ca0u: goto label_2b9ca0;
        case 0x2b9ca4u: goto label_2b9ca4;
        case 0x2b9ca8u: goto label_2b9ca8;
        case 0x2b9cacu: goto label_2b9cac;
        case 0x2b9cb0u: goto label_2b9cb0;
        case 0x2b9cb4u: goto label_2b9cb4;
        case 0x2b9cb8u: goto label_2b9cb8;
        case 0x2b9cbcu: goto label_2b9cbc;
        case 0x2b9cc0u: goto label_2b9cc0;
        case 0x2b9cc4u: goto label_2b9cc4;
        case 0x2b9cc8u: goto label_2b9cc8;
        case 0x2b9cccu: goto label_2b9ccc;
        case 0x2b9cd0u: goto label_2b9cd0;
        case 0x2b9cd4u: goto label_2b9cd4;
        case 0x2b9cd8u: goto label_2b9cd8;
        case 0x2b9cdcu: goto label_2b9cdc;
        case 0x2b9ce0u: goto label_2b9ce0;
        case 0x2b9ce4u: goto label_2b9ce4;
        case 0x2b9ce8u: goto label_2b9ce8;
        case 0x2b9cecu: goto label_2b9cec;
        case 0x2b9cf0u: goto label_2b9cf0;
        case 0x2b9cf4u: goto label_2b9cf4;
        case 0x2b9cf8u: goto label_2b9cf8;
        case 0x2b9cfcu: goto label_2b9cfc;
        case 0x2b9d00u: goto label_2b9d00;
        case 0x2b9d04u: goto label_2b9d04;
        case 0x2b9d08u: goto label_2b9d08;
        case 0x2b9d0cu: goto label_2b9d0c;
        case 0x2b9d10u: goto label_2b9d10;
        case 0x2b9d14u: goto label_2b9d14;
        case 0x2b9d18u: goto label_2b9d18;
        case 0x2b9d1cu: goto label_2b9d1c;
        case 0x2b9d20u: goto label_2b9d20;
        case 0x2b9d24u: goto label_2b9d24;
        case 0x2b9d28u: goto label_2b9d28;
        case 0x2b9d2cu: goto label_2b9d2c;
        case 0x2b9d30u: goto label_2b9d30;
        case 0x2b9d34u: goto label_2b9d34;
        case 0x2b9d38u: goto label_2b9d38;
        case 0x2b9d3cu: goto label_2b9d3c;
        case 0x2b9d40u: goto label_2b9d40;
        case 0x2b9d44u: goto label_2b9d44;
        case 0x2b9d48u: goto label_2b9d48;
        case 0x2b9d4cu: goto label_2b9d4c;
        case 0x2b9d50u: goto label_2b9d50;
        case 0x2b9d54u: goto label_2b9d54;
        case 0x2b9d58u: goto label_2b9d58;
        case 0x2b9d5cu: goto label_2b9d5c;
        case 0x2b9d60u: goto label_2b9d60;
        case 0x2b9d64u: goto label_2b9d64;
        case 0x2b9d68u: goto label_2b9d68;
        case 0x2b9d6cu: goto label_2b9d6c;
        case 0x2b9d70u: goto label_2b9d70;
        case 0x2b9d74u: goto label_2b9d74;
        case 0x2b9d78u: goto label_2b9d78;
        case 0x2b9d7cu: goto label_2b9d7c;
        case 0x2b9d80u: goto label_2b9d80;
        case 0x2b9d84u: goto label_2b9d84;
        case 0x2b9d88u: goto label_2b9d88;
        case 0x2b9d8cu: goto label_2b9d8c;
        case 0x2b9d90u: goto label_2b9d90;
        case 0x2b9d94u: goto label_2b9d94;
        case 0x2b9d98u: goto label_2b9d98;
        case 0x2b9d9cu: goto label_2b9d9c;
        case 0x2b9da0u: goto label_2b9da0;
        case 0x2b9da4u: goto label_2b9da4;
        case 0x2b9da8u: goto label_2b9da8;
        case 0x2b9dacu: goto label_2b9dac;
        case 0x2b9db0u: goto label_2b9db0;
        case 0x2b9db4u: goto label_2b9db4;
        case 0x2b9db8u: goto label_2b9db8;
        case 0x2b9dbcu: goto label_2b9dbc;
        case 0x2b9dc0u: goto label_2b9dc0;
        case 0x2b9dc4u: goto label_2b9dc4;
        case 0x2b9dc8u: goto label_2b9dc8;
        case 0x2b9dccu: goto label_2b9dcc;
        case 0x2b9dd0u: goto label_2b9dd0;
        case 0x2b9dd4u: goto label_2b9dd4;
        case 0x2b9dd8u: goto label_2b9dd8;
        case 0x2b9ddcu: goto label_2b9ddc;
        case 0x2b9de0u: goto label_2b9de0;
        case 0x2b9de4u: goto label_2b9de4;
        case 0x2b9de8u: goto label_2b9de8;
        case 0x2b9decu: goto label_2b9dec;
        case 0x2b9df0u: goto label_2b9df0;
        case 0x2b9df4u: goto label_2b9df4;
        case 0x2b9df8u: goto label_2b9df8;
        case 0x2b9dfcu: goto label_2b9dfc;
        case 0x2b9e00u: goto label_2b9e00;
        case 0x2b9e04u: goto label_2b9e04;
        case 0x2b9e08u: goto label_2b9e08;
        case 0x2b9e0cu: goto label_2b9e0c;
        case 0x2b9e10u: goto label_2b9e10;
        case 0x2b9e14u: goto label_2b9e14;
        case 0x2b9e18u: goto label_2b9e18;
        case 0x2b9e1cu: goto label_2b9e1c;
        case 0x2b9e20u: goto label_2b9e20;
        case 0x2b9e24u: goto label_2b9e24;
        case 0x2b9e28u: goto label_2b9e28;
        case 0x2b9e2cu: goto label_2b9e2c;
        case 0x2b9e30u: goto label_2b9e30;
        case 0x2b9e34u: goto label_2b9e34;
        case 0x2b9e38u: goto label_2b9e38;
        case 0x2b9e3cu: goto label_2b9e3c;
        case 0x2b9e40u: goto label_2b9e40;
        case 0x2b9e44u: goto label_2b9e44;
        case 0x2b9e48u: goto label_2b9e48;
        case 0x2b9e4cu: goto label_2b9e4c;
        case 0x2b9e50u: goto label_2b9e50;
        case 0x2b9e54u: goto label_2b9e54;
        case 0x2b9e58u: goto label_2b9e58;
        case 0x2b9e5cu: goto label_2b9e5c;
        case 0x2b9e60u: goto label_2b9e60;
        case 0x2b9e64u: goto label_2b9e64;
        case 0x2b9e68u: goto label_2b9e68;
        case 0x2b9e6cu: goto label_2b9e6c;
        case 0x2b9e70u: goto label_2b9e70;
        case 0x2b9e74u: goto label_2b9e74;
        case 0x2b9e78u: goto label_2b9e78;
        case 0x2b9e7cu: goto label_2b9e7c;
        case 0x2b9e80u: goto label_2b9e80;
        case 0x2b9e84u: goto label_2b9e84;
        case 0x2b9e88u: goto label_2b9e88;
        case 0x2b9e8cu: goto label_2b9e8c;
        case 0x2b9e90u: goto label_2b9e90;
        case 0x2b9e94u: goto label_2b9e94;
        case 0x2b9e98u: goto label_2b9e98;
        case 0x2b9e9cu: goto label_2b9e9c;
        case 0x2b9ea0u: goto label_2b9ea0;
        case 0x2b9ea4u: goto label_2b9ea4;
        case 0x2b9ea8u: goto label_2b9ea8;
        case 0x2b9eacu: goto label_2b9eac;
        case 0x2b9eb0u: goto label_2b9eb0;
        case 0x2b9eb4u: goto label_2b9eb4;
        case 0x2b9eb8u: goto label_2b9eb8;
        case 0x2b9ebcu: goto label_2b9ebc;
        case 0x2b9ec0u: goto label_2b9ec0;
        case 0x2b9ec4u: goto label_2b9ec4;
        case 0x2b9ec8u: goto label_2b9ec8;
        case 0x2b9eccu: goto label_2b9ecc;
        case 0x2b9ed0u: goto label_2b9ed0;
        case 0x2b9ed4u: goto label_2b9ed4;
        case 0x2b9ed8u: goto label_2b9ed8;
        case 0x2b9edcu: goto label_2b9edc;
        case 0x2b9ee0u: goto label_2b9ee0;
        case 0x2b9ee4u: goto label_2b9ee4;
        case 0x2b9ee8u: goto label_2b9ee8;
        case 0x2b9eecu: goto label_2b9eec;
        case 0x2b9ef0u: goto label_2b9ef0;
        case 0x2b9ef4u: goto label_2b9ef4;
        case 0x2b9ef8u: goto label_2b9ef8;
        case 0x2b9efcu: goto label_2b9efc;
        case 0x2b9f00u: goto label_2b9f00;
        case 0x2b9f04u: goto label_2b9f04;
        case 0x2b9f08u: goto label_2b9f08;
        case 0x2b9f0cu: goto label_2b9f0c;
        case 0x2b9f10u: goto label_2b9f10;
        case 0x2b9f14u: goto label_2b9f14;
        case 0x2b9f18u: goto label_2b9f18;
        case 0x2b9f1cu: goto label_2b9f1c;
        case 0x2b9f20u: goto label_2b9f20;
        case 0x2b9f24u: goto label_2b9f24;
        case 0x2b9f28u: goto label_2b9f28;
        case 0x2b9f2cu: goto label_2b9f2c;
        case 0x2b9f30u: goto label_2b9f30;
        case 0x2b9f34u: goto label_2b9f34;
        case 0x2b9f38u: goto label_2b9f38;
        case 0x2b9f3cu: goto label_2b9f3c;
        case 0x2b9f40u: goto label_2b9f40;
        case 0x2b9f44u: goto label_2b9f44;
        case 0x2b9f48u: goto label_2b9f48;
        case 0x2b9f4cu: goto label_2b9f4c;
        case 0x2b9f50u: goto label_2b9f50;
        case 0x2b9f54u: goto label_2b9f54;
        case 0x2b9f58u: goto label_2b9f58;
        case 0x2b9f5cu: goto label_2b9f5c;
        case 0x2b9f60u: goto label_2b9f60;
        case 0x2b9f64u: goto label_2b9f64;
        case 0x2b9f68u: goto label_2b9f68;
        case 0x2b9f6cu: goto label_2b9f6c;
        case 0x2b9f70u: goto label_2b9f70;
        case 0x2b9f74u: goto label_2b9f74;
        case 0x2b9f78u: goto label_2b9f78;
        case 0x2b9f7cu: goto label_2b9f7c;
        case 0x2b9f80u: goto label_2b9f80;
        case 0x2b9f84u: goto label_2b9f84;
        case 0x2b9f88u: goto label_2b9f88;
        case 0x2b9f8cu: goto label_2b9f8c;
        case 0x2b9f90u: goto label_2b9f90;
        case 0x2b9f94u: goto label_2b9f94;
        case 0x2b9f98u: goto label_2b9f98;
        case 0x2b9f9cu: goto label_2b9f9c;
        case 0x2b9fa0u: goto label_2b9fa0;
        case 0x2b9fa4u: goto label_2b9fa4;
        case 0x2b9fa8u: goto label_2b9fa8;
        case 0x2b9facu: goto label_2b9fac;
        case 0x2b9fb0u: goto label_2b9fb0;
        case 0x2b9fb4u: goto label_2b9fb4;
        case 0x2b9fb8u: goto label_2b9fb8;
        case 0x2b9fbcu: goto label_2b9fbc;
        case 0x2b9fc0u: goto label_2b9fc0;
        case 0x2b9fc4u: goto label_2b9fc4;
        case 0x2b9fc8u: goto label_2b9fc8;
        case 0x2b9fccu: goto label_2b9fcc;
        case 0x2b9fd0u: goto label_2b9fd0;
        case 0x2b9fd4u: goto label_2b9fd4;
        case 0x2b9fd8u: goto label_2b9fd8;
        case 0x2b9fdcu: goto label_2b9fdc;
        case 0x2b9fe0u: goto label_2b9fe0;
        case 0x2b9fe4u: goto label_2b9fe4;
        case 0x2b9fe8u: goto label_2b9fe8;
        case 0x2b9fecu: goto label_2b9fec;
        case 0x2b9ff0u: goto label_2b9ff0;
        case 0x2b9ff4u: goto label_2b9ff4;
        case 0x2b9ff8u: goto label_2b9ff8;
        case 0x2b9ffcu: goto label_2b9ffc;
        case 0x2ba000u: goto label_2ba000;
        case 0x2ba004u: goto label_2ba004;
        case 0x2ba008u: goto label_2ba008;
        case 0x2ba00cu: goto label_2ba00c;
        case 0x2ba010u: goto label_2ba010;
        case 0x2ba014u: goto label_2ba014;
        case 0x2ba018u: goto label_2ba018;
        case 0x2ba01cu: goto label_2ba01c;
        case 0x2ba020u: goto label_2ba020;
        case 0x2ba024u: goto label_2ba024;
        case 0x2ba028u: goto label_2ba028;
        case 0x2ba02cu: goto label_2ba02c;
        case 0x2ba030u: goto label_2ba030;
        case 0x2ba034u: goto label_2ba034;
        case 0x2ba038u: goto label_2ba038;
        case 0x2ba03cu: goto label_2ba03c;
        case 0x2ba040u: goto label_2ba040;
        case 0x2ba044u: goto label_2ba044;
        case 0x2ba048u: goto label_2ba048;
        case 0x2ba04cu: goto label_2ba04c;
        case 0x2ba050u: goto label_2ba050;
        case 0x2ba054u: goto label_2ba054;
        case 0x2ba058u: goto label_2ba058;
        case 0x2ba05cu: goto label_2ba05c;
        case 0x2ba060u: goto label_2ba060;
        case 0x2ba064u: goto label_2ba064;
        case 0x2ba068u: goto label_2ba068;
        case 0x2ba06cu: goto label_2ba06c;
        case 0x2ba070u: goto label_2ba070;
        case 0x2ba074u: goto label_2ba074;
        case 0x2ba078u: goto label_2ba078;
        case 0x2ba07cu: goto label_2ba07c;
        case 0x2ba080u: goto label_2ba080;
        case 0x2ba084u: goto label_2ba084;
        case 0x2ba088u: goto label_2ba088;
        case 0x2ba08cu: goto label_2ba08c;
        case 0x2ba090u: goto label_2ba090;
        case 0x2ba094u: goto label_2ba094;
        case 0x2ba098u: goto label_2ba098;
        case 0x2ba09cu: goto label_2ba09c;
        case 0x2ba0a0u: goto label_2ba0a0;
        case 0x2ba0a4u: goto label_2ba0a4;
        case 0x2ba0a8u: goto label_2ba0a8;
        case 0x2ba0acu: goto label_2ba0ac;
        case 0x2ba0b0u: goto label_2ba0b0;
        case 0x2ba0b4u: goto label_2ba0b4;
        case 0x2ba0b8u: goto label_2ba0b8;
        case 0x2ba0bcu: goto label_2ba0bc;
        case 0x2ba0c0u: goto label_2ba0c0;
        case 0x2ba0c4u: goto label_2ba0c4;
        case 0x2ba0c8u: goto label_2ba0c8;
        case 0x2ba0ccu: goto label_2ba0cc;
        case 0x2ba0d0u: goto label_2ba0d0;
        case 0x2ba0d4u: goto label_2ba0d4;
        case 0x2ba0d8u: goto label_2ba0d8;
        case 0x2ba0dcu: goto label_2ba0dc;
        case 0x2ba0e0u: goto label_2ba0e0;
        case 0x2ba0e4u: goto label_2ba0e4;
        case 0x2ba0e8u: goto label_2ba0e8;
        case 0x2ba0ecu: goto label_2ba0ec;
        case 0x2ba0f0u: goto label_2ba0f0;
        case 0x2ba0f4u: goto label_2ba0f4;
        case 0x2ba0f8u: goto label_2ba0f8;
        case 0x2ba0fcu: goto label_2ba0fc;
        case 0x2ba100u: goto label_2ba100;
        case 0x2ba104u: goto label_2ba104;
        case 0x2ba108u: goto label_2ba108;
        case 0x2ba10cu: goto label_2ba10c;
        case 0x2ba110u: goto label_2ba110;
        case 0x2ba114u: goto label_2ba114;
        case 0x2ba118u: goto label_2ba118;
        case 0x2ba11cu: goto label_2ba11c;
        case 0x2ba120u: goto label_2ba120;
        case 0x2ba124u: goto label_2ba124;
        case 0x2ba128u: goto label_2ba128;
        case 0x2ba12cu: goto label_2ba12c;
        case 0x2ba130u: goto label_2ba130;
        case 0x2ba134u: goto label_2ba134;
        case 0x2ba138u: goto label_2ba138;
        case 0x2ba13cu: goto label_2ba13c;
        case 0x2ba140u: goto label_2ba140;
        case 0x2ba144u: goto label_2ba144;
        case 0x2ba148u: goto label_2ba148;
        case 0x2ba14cu: goto label_2ba14c;
        case 0x2ba150u: goto label_2ba150;
        case 0x2ba154u: goto label_2ba154;
        case 0x2ba158u: goto label_2ba158;
        case 0x2ba15cu: goto label_2ba15c;
        case 0x2ba160u: goto label_2ba160;
        case 0x2ba164u: goto label_2ba164;
        case 0x2ba168u: goto label_2ba168;
        case 0x2ba16cu: goto label_2ba16c;
        case 0x2ba170u: goto label_2ba170;
        case 0x2ba174u: goto label_2ba174;
        case 0x2ba178u: goto label_2ba178;
        case 0x2ba17cu: goto label_2ba17c;
        case 0x2ba180u: goto label_2ba180;
        case 0x2ba184u: goto label_2ba184;
        case 0x2ba188u: goto label_2ba188;
        case 0x2ba18cu: goto label_2ba18c;
        case 0x2ba190u: goto label_2ba190;
        case 0x2ba194u: goto label_2ba194;
        case 0x2ba198u: goto label_2ba198;
        case 0x2ba19cu: goto label_2ba19c;
        case 0x2ba1a0u: goto label_2ba1a0;
        case 0x2ba1a4u: goto label_2ba1a4;
        case 0x2ba1a8u: goto label_2ba1a8;
        case 0x2ba1acu: goto label_2ba1ac;
        case 0x2ba1b0u: goto label_2ba1b0;
        case 0x2ba1b4u: goto label_2ba1b4;
        case 0x2ba1b8u: goto label_2ba1b8;
        case 0x2ba1bcu: goto label_2ba1bc;
        case 0x2ba1c0u: goto label_2ba1c0;
        case 0x2ba1c4u: goto label_2ba1c4;
        case 0x2ba1c8u: goto label_2ba1c8;
        case 0x2ba1ccu: goto label_2ba1cc;
        case 0x2ba1d0u: goto label_2ba1d0;
        case 0x2ba1d4u: goto label_2ba1d4;
        case 0x2ba1d8u: goto label_2ba1d8;
        case 0x2ba1dcu: goto label_2ba1dc;
        case 0x2ba1e0u: goto label_2ba1e0;
        case 0x2ba1e4u: goto label_2ba1e4;
        case 0x2ba1e8u: goto label_2ba1e8;
        case 0x2ba1ecu: goto label_2ba1ec;
        case 0x2ba1f0u: goto label_2ba1f0;
        case 0x2ba1f4u: goto label_2ba1f4;
        case 0x2ba1f8u: goto label_2ba1f8;
        case 0x2ba1fcu: goto label_2ba1fc;
        case 0x2ba200u: goto label_2ba200;
        case 0x2ba204u: goto label_2ba204;
        case 0x2ba208u: goto label_2ba208;
        case 0x2ba20cu: goto label_2ba20c;
        case 0x2ba210u: goto label_2ba210;
        case 0x2ba214u: goto label_2ba214;
        case 0x2ba218u: goto label_2ba218;
        case 0x2ba21cu: goto label_2ba21c;
        case 0x2ba220u: goto label_2ba220;
        case 0x2ba224u: goto label_2ba224;
        case 0x2ba228u: goto label_2ba228;
        case 0x2ba22cu: goto label_2ba22c;
        case 0x2ba230u: goto label_2ba230;
        case 0x2ba234u: goto label_2ba234;
        case 0x2ba238u: goto label_2ba238;
        case 0x2ba23cu: goto label_2ba23c;
        case 0x2ba240u: goto label_2ba240;
        case 0x2ba244u: goto label_2ba244;
        case 0x2ba248u: goto label_2ba248;
        case 0x2ba24cu: goto label_2ba24c;
        case 0x2ba250u: goto label_2ba250;
        case 0x2ba254u: goto label_2ba254;
        case 0x2ba258u: goto label_2ba258;
        case 0x2ba25cu: goto label_2ba25c;
        case 0x2ba260u: goto label_2ba260;
        case 0x2ba264u: goto label_2ba264;
        case 0x2ba268u: goto label_2ba268;
        case 0x2ba26cu: goto label_2ba26c;
        case 0x2ba270u: goto label_2ba270;
        case 0x2ba274u: goto label_2ba274;
        case 0x2ba278u: goto label_2ba278;
        case 0x2ba27cu: goto label_2ba27c;
        case 0x2ba280u: goto label_2ba280;
        case 0x2ba284u: goto label_2ba284;
        case 0x2ba288u: goto label_2ba288;
        case 0x2ba28cu: goto label_2ba28c;
        case 0x2ba290u: goto label_2ba290;
        case 0x2ba294u: goto label_2ba294;
        case 0x2ba298u: goto label_2ba298;
        case 0x2ba29cu: goto label_2ba29c;
        case 0x2ba2a0u: goto label_2ba2a0;
        case 0x2ba2a4u: goto label_2ba2a4;
        case 0x2ba2a8u: goto label_2ba2a8;
        case 0x2ba2acu: goto label_2ba2ac;
        case 0x2ba2b0u: goto label_2ba2b0;
        case 0x2ba2b4u: goto label_2ba2b4;
        case 0x2ba2b8u: goto label_2ba2b8;
        case 0x2ba2bcu: goto label_2ba2bc;
        case 0x2ba2c0u: goto label_2ba2c0;
        case 0x2ba2c4u: goto label_2ba2c4;
        case 0x2ba2c8u: goto label_2ba2c8;
        case 0x2ba2ccu: goto label_2ba2cc;
        case 0x2ba2d0u: goto label_2ba2d0;
        case 0x2ba2d4u: goto label_2ba2d4;
        case 0x2ba2d8u: goto label_2ba2d8;
        case 0x2ba2dcu: goto label_2ba2dc;
        case 0x2ba2e0u: goto label_2ba2e0;
        case 0x2ba2e4u: goto label_2ba2e4;
        case 0x2ba2e8u: goto label_2ba2e8;
        case 0x2ba2ecu: goto label_2ba2ec;
        case 0x2ba2f0u: goto label_2ba2f0;
        case 0x2ba2f4u: goto label_2ba2f4;
        case 0x2ba2f8u: goto label_2ba2f8;
        case 0x2ba2fcu: goto label_2ba2fc;
        case 0x2ba300u: goto label_2ba300;
        case 0x2ba304u: goto label_2ba304;
        case 0x2ba308u: goto label_2ba308;
        case 0x2ba30cu: goto label_2ba30c;
        case 0x2ba310u: goto label_2ba310;
        case 0x2ba314u: goto label_2ba314;
        case 0x2ba318u: goto label_2ba318;
        case 0x2ba31cu: goto label_2ba31c;
        case 0x2ba320u: goto label_2ba320;
        case 0x2ba324u: goto label_2ba324;
        case 0x2ba328u: goto label_2ba328;
        case 0x2ba32cu: goto label_2ba32c;
        case 0x2ba330u: goto label_2ba330;
        case 0x2ba334u: goto label_2ba334;
        case 0x2ba338u: goto label_2ba338;
        case 0x2ba33cu: goto label_2ba33c;
        case 0x2ba340u: goto label_2ba340;
        case 0x2ba344u: goto label_2ba344;
        case 0x2ba348u: goto label_2ba348;
        case 0x2ba34cu: goto label_2ba34c;
        case 0x2ba350u: goto label_2ba350;
        case 0x2ba354u: goto label_2ba354;
        case 0x2ba358u: goto label_2ba358;
        case 0x2ba35cu: goto label_2ba35c;
        case 0x2ba360u: goto label_2ba360;
        case 0x2ba364u: goto label_2ba364;
        case 0x2ba368u: goto label_2ba368;
        case 0x2ba36cu: goto label_2ba36c;
        case 0x2ba370u: goto label_2ba370;
        case 0x2ba374u: goto label_2ba374;
        case 0x2ba378u: goto label_2ba378;
        case 0x2ba37cu: goto label_2ba37c;
        case 0x2ba380u: goto label_2ba380;
        case 0x2ba384u: goto label_2ba384;
        case 0x2ba388u: goto label_2ba388;
        case 0x2ba38cu: goto label_2ba38c;
        case 0x2ba390u: goto label_2ba390;
        case 0x2ba394u: goto label_2ba394;
        case 0x2ba398u: goto label_2ba398;
        case 0x2ba39cu: goto label_2ba39c;
        case 0x2ba3a0u: goto label_2ba3a0;
        case 0x2ba3a4u: goto label_2ba3a4;
        case 0x2ba3a8u: goto label_2ba3a8;
        case 0x2ba3acu: goto label_2ba3ac;
        case 0x2ba3b0u: goto label_2ba3b0;
        case 0x2ba3b4u: goto label_2ba3b4;
        case 0x2ba3b8u: goto label_2ba3b8;
        case 0x2ba3bcu: goto label_2ba3bc;
        case 0x2ba3c0u: goto label_2ba3c0;
        case 0x2ba3c4u: goto label_2ba3c4;
        case 0x2ba3c8u: goto label_2ba3c8;
        case 0x2ba3ccu: goto label_2ba3cc;
        case 0x2ba3d0u: goto label_2ba3d0;
        case 0x2ba3d4u: goto label_2ba3d4;
        case 0x2ba3d8u: goto label_2ba3d8;
        case 0x2ba3dcu: goto label_2ba3dc;
        case 0x2ba3e0u: goto label_2ba3e0;
        case 0x2ba3e4u: goto label_2ba3e4;
        case 0x2ba3e8u: goto label_2ba3e8;
        case 0x2ba3ecu: goto label_2ba3ec;
        case 0x2ba3f0u: goto label_2ba3f0;
        case 0x2ba3f4u: goto label_2ba3f4;
        case 0x2ba3f8u: goto label_2ba3f8;
        case 0x2ba3fcu: goto label_2ba3fc;
        case 0x2ba400u: goto label_2ba400;
        case 0x2ba404u: goto label_2ba404;
        case 0x2ba408u: goto label_2ba408;
        case 0x2ba40cu: goto label_2ba40c;
        case 0x2ba410u: goto label_2ba410;
        case 0x2ba414u: goto label_2ba414;
        case 0x2ba418u: goto label_2ba418;
        case 0x2ba41cu: goto label_2ba41c;
        case 0x2ba420u: goto label_2ba420;
        case 0x2ba424u: goto label_2ba424;
        case 0x2ba428u: goto label_2ba428;
        case 0x2ba42cu: goto label_2ba42c;
        case 0x2ba430u: goto label_2ba430;
        case 0x2ba434u: goto label_2ba434;
        case 0x2ba438u: goto label_2ba438;
        case 0x2ba43cu: goto label_2ba43c;
        case 0x2ba440u: goto label_2ba440;
        case 0x2ba444u: goto label_2ba444;
        case 0x2ba448u: goto label_2ba448;
        case 0x2ba44cu: goto label_2ba44c;
        case 0x2ba450u: goto label_2ba450;
        case 0x2ba454u: goto label_2ba454;
        case 0x2ba458u: goto label_2ba458;
        case 0x2ba45cu: goto label_2ba45c;
        case 0x2ba460u: goto label_2ba460;
        case 0x2ba464u: goto label_2ba464;
        case 0x2ba468u: goto label_2ba468;
        case 0x2ba46cu: goto label_2ba46c;
        case 0x2ba470u: goto label_2ba470;
        case 0x2ba474u: goto label_2ba474;
        case 0x2ba478u: goto label_2ba478;
        case 0x2ba47cu: goto label_2ba47c;
        case 0x2ba480u: goto label_2ba480;
        case 0x2ba484u: goto label_2ba484;
        case 0x2ba488u: goto label_2ba488;
        case 0x2ba48cu: goto label_2ba48c;
        case 0x2ba490u: goto label_2ba490;
        case 0x2ba494u: goto label_2ba494;
        case 0x2ba498u: goto label_2ba498;
        case 0x2ba49cu: goto label_2ba49c;
        case 0x2ba4a0u: goto label_2ba4a0;
        case 0x2ba4a4u: goto label_2ba4a4;
        case 0x2ba4a8u: goto label_2ba4a8;
        case 0x2ba4acu: goto label_2ba4ac;
        case 0x2ba4b0u: goto label_2ba4b0;
        case 0x2ba4b4u: goto label_2ba4b4;
        case 0x2ba4b8u: goto label_2ba4b8;
        case 0x2ba4bcu: goto label_2ba4bc;
        case 0x2ba4c0u: goto label_2ba4c0;
        case 0x2ba4c4u: goto label_2ba4c4;
        case 0x2ba4c8u: goto label_2ba4c8;
        case 0x2ba4ccu: goto label_2ba4cc;
        case 0x2ba4d0u: goto label_2ba4d0;
        case 0x2ba4d4u: goto label_2ba4d4;
        case 0x2ba4d8u: goto label_2ba4d8;
        case 0x2ba4dcu: goto label_2ba4dc;
        case 0x2ba4e0u: goto label_2ba4e0;
        case 0x2ba4e4u: goto label_2ba4e4;
        case 0x2ba4e8u: goto label_2ba4e8;
        case 0x2ba4ecu: goto label_2ba4ec;
        case 0x2ba4f0u: goto label_2ba4f0;
        case 0x2ba4f4u: goto label_2ba4f4;
        case 0x2ba4f8u: goto label_2ba4f8;
        case 0x2ba4fcu: goto label_2ba4fc;
        case 0x2ba500u: goto label_2ba500;
        case 0x2ba504u: goto label_2ba504;
        case 0x2ba508u: goto label_2ba508;
        case 0x2ba50cu: goto label_2ba50c;
        case 0x2ba510u: goto label_2ba510;
        case 0x2ba514u: goto label_2ba514;
        case 0x2ba518u: goto label_2ba518;
        case 0x2ba51cu: goto label_2ba51c;
        case 0x2ba520u: goto label_2ba520;
        case 0x2ba524u: goto label_2ba524;
        case 0x2ba528u: goto label_2ba528;
        case 0x2ba52cu: goto label_2ba52c;
        case 0x2ba530u: goto label_2ba530;
        case 0x2ba534u: goto label_2ba534;
        case 0x2ba538u: goto label_2ba538;
        case 0x2ba53cu: goto label_2ba53c;
        case 0x2ba540u: goto label_2ba540;
        case 0x2ba544u: goto label_2ba544;
        case 0x2ba548u: goto label_2ba548;
        case 0x2ba54cu: goto label_2ba54c;
        case 0x2ba550u: goto label_2ba550;
        case 0x2ba554u: goto label_2ba554;
        case 0x2ba558u: goto label_2ba558;
        case 0x2ba55cu: goto label_2ba55c;
        case 0x2ba560u: goto label_2ba560;
        case 0x2ba564u: goto label_2ba564;
        case 0x2ba568u: goto label_2ba568;
        case 0x2ba56cu: goto label_2ba56c;
        case 0x2ba570u: goto label_2ba570;
        case 0x2ba574u: goto label_2ba574;
        case 0x2ba578u: goto label_2ba578;
        case 0x2ba57cu: goto label_2ba57c;
        case 0x2ba580u: goto label_2ba580;
        case 0x2ba584u: goto label_2ba584;
        case 0x2ba588u: goto label_2ba588;
        case 0x2ba58cu: goto label_2ba58c;
        case 0x2ba590u: goto label_2ba590;
        case 0x2ba594u: goto label_2ba594;
        case 0x2ba598u: goto label_2ba598;
        case 0x2ba59cu: goto label_2ba59c;
        case 0x2ba5a0u: goto label_2ba5a0;
        case 0x2ba5a4u: goto label_2ba5a4;
        case 0x2ba5a8u: goto label_2ba5a8;
        case 0x2ba5acu: goto label_2ba5ac;
        case 0x2ba5b0u: goto label_2ba5b0;
        case 0x2ba5b4u: goto label_2ba5b4;
        case 0x2ba5b8u: goto label_2ba5b8;
        case 0x2ba5bcu: goto label_2ba5bc;
        case 0x2ba5c0u: goto label_2ba5c0;
        case 0x2ba5c4u: goto label_2ba5c4;
        case 0x2ba5c8u: goto label_2ba5c8;
        case 0x2ba5ccu: goto label_2ba5cc;
        case 0x2ba5d0u: goto label_2ba5d0;
        case 0x2ba5d4u: goto label_2ba5d4;
        case 0x2ba5d8u: goto label_2ba5d8;
        case 0x2ba5dcu: goto label_2ba5dc;
        case 0x2ba5e0u: goto label_2ba5e0;
        case 0x2ba5e4u: goto label_2ba5e4;
        case 0x2ba5e8u: goto label_2ba5e8;
        case 0x2ba5ecu: goto label_2ba5ec;
        case 0x2ba5f0u: goto label_2ba5f0;
        case 0x2ba5f4u: goto label_2ba5f4;
        case 0x2ba5f8u: goto label_2ba5f8;
        case 0x2ba5fcu: goto label_2ba5fc;
        case 0x2ba600u: goto label_2ba600;
        case 0x2ba604u: goto label_2ba604;
        case 0x2ba608u: goto label_2ba608;
        case 0x2ba60cu: goto label_2ba60c;
        case 0x2ba610u: goto label_2ba610;
        case 0x2ba614u: goto label_2ba614;
        case 0x2ba618u: goto label_2ba618;
        case 0x2ba61cu: goto label_2ba61c;
        case 0x2ba620u: goto label_2ba620;
        case 0x2ba624u: goto label_2ba624;
        case 0x2ba628u: goto label_2ba628;
        case 0x2ba62cu: goto label_2ba62c;
        case 0x2ba630u: goto label_2ba630;
        case 0x2ba634u: goto label_2ba634;
        case 0x2ba638u: goto label_2ba638;
        case 0x2ba63cu: goto label_2ba63c;
        case 0x2ba640u: goto label_2ba640;
        case 0x2ba644u: goto label_2ba644;
        case 0x2ba648u: goto label_2ba648;
        case 0x2ba64cu: goto label_2ba64c;
        case 0x2ba650u: goto label_2ba650;
        case 0x2ba654u: goto label_2ba654;
        case 0x2ba658u: goto label_2ba658;
        case 0x2ba65cu: goto label_2ba65c;
        case 0x2ba660u: goto label_2ba660;
        case 0x2ba664u: goto label_2ba664;
        case 0x2ba668u: goto label_2ba668;
        case 0x2ba66cu: goto label_2ba66c;
        case 0x2ba670u: goto label_2ba670;
        case 0x2ba674u: goto label_2ba674;
        case 0x2ba678u: goto label_2ba678;
        case 0x2ba67cu: goto label_2ba67c;
        case 0x2ba680u: goto label_2ba680;
        case 0x2ba684u: goto label_2ba684;
        case 0x2ba688u: goto label_2ba688;
        case 0x2ba68cu: goto label_2ba68c;
        case 0x2ba690u: goto label_2ba690;
        case 0x2ba694u: goto label_2ba694;
        case 0x2ba698u: goto label_2ba698;
        case 0x2ba69cu: goto label_2ba69c;
        case 0x2ba6a0u: goto label_2ba6a0;
        case 0x2ba6a4u: goto label_2ba6a4;
        case 0x2ba6a8u: goto label_2ba6a8;
        case 0x2ba6acu: goto label_2ba6ac;
        case 0x2ba6b0u: goto label_2ba6b0;
        case 0x2ba6b4u: goto label_2ba6b4;
        case 0x2ba6b8u: goto label_2ba6b8;
        case 0x2ba6bcu: goto label_2ba6bc;
        case 0x2ba6c0u: goto label_2ba6c0;
        case 0x2ba6c4u: goto label_2ba6c4;
        case 0x2ba6c8u: goto label_2ba6c8;
        case 0x2ba6ccu: goto label_2ba6cc;
        case 0x2ba6d0u: goto label_2ba6d0;
        case 0x2ba6d4u: goto label_2ba6d4;
        case 0x2ba6d8u: goto label_2ba6d8;
        case 0x2ba6dcu: goto label_2ba6dc;
        case 0x2ba6e0u: goto label_2ba6e0;
        case 0x2ba6e4u: goto label_2ba6e4;
        case 0x2ba6e8u: goto label_2ba6e8;
        case 0x2ba6ecu: goto label_2ba6ec;
        case 0x2ba6f0u: goto label_2ba6f0;
        case 0x2ba6f4u: goto label_2ba6f4;
        case 0x2ba6f8u: goto label_2ba6f8;
        case 0x2ba6fcu: goto label_2ba6fc;
        case 0x2ba700u: goto label_2ba700;
        case 0x2ba704u: goto label_2ba704;
        case 0x2ba708u: goto label_2ba708;
        case 0x2ba70cu: goto label_2ba70c;
        case 0x2ba710u: goto label_2ba710;
        case 0x2ba714u: goto label_2ba714;
        case 0x2ba718u: goto label_2ba718;
        case 0x2ba71cu: goto label_2ba71c;
        case 0x2ba720u: goto label_2ba720;
        case 0x2ba724u: goto label_2ba724;
        case 0x2ba728u: goto label_2ba728;
        case 0x2ba72cu: goto label_2ba72c;
        case 0x2ba730u: goto label_2ba730;
        case 0x2ba734u: goto label_2ba734;
        case 0x2ba738u: goto label_2ba738;
        case 0x2ba73cu: goto label_2ba73c;
        case 0x2ba740u: goto label_2ba740;
        case 0x2ba744u: goto label_2ba744;
        case 0x2ba748u: goto label_2ba748;
        case 0x2ba74cu: goto label_2ba74c;
        case 0x2ba750u: goto label_2ba750;
        case 0x2ba754u: goto label_2ba754;
        case 0x2ba758u: goto label_2ba758;
        case 0x2ba75cu: goto label_2ba75c;
        case 0x2ba760u: goto label_2ba760;
        case 0x2ba764u: goto label_2ba764;
        case 0x2ba768u: goto label_2ba768;
        case 0x2ba76cu: goto label_2ba76c;
        case 0x2ba770u: goto label_2ba770;
        case 0x2ba774u: goto label_2ba774;
        case 0x2ba778u: goto label_2ba778;
        case 0x2ba77cu: goto label_2ba77c;
        case 0x2ba780u: goto label_2ba780;
        case 0x2ba784u: goto label_2ba784;
        case 0x2ba788u: goto label_2ba788;
        case 0x2ba78cu: goto label_2ba78c;
        case 0x2ba790u: goto label_2ba790;
        case 0x2ba794u: goto label_2ba794;
        case 0x2ba798u: goto label_2ba798;
        case 0x2ba79cu: goto label_2ba79c;
        case 0x2ba7a0u: goto label_2ba7a0;
        case 0x2ba7a4u: goto label_2ba7a4;
        case 0x2ba7a8u: goto label_2ba7a8;
        case 0x2ba7acu: goto label_2ba7ac;
        case 0x2ba7b0u: goto label_2ba7b0;
        case 0x2ba7b4u: goto label_2ba7b4;
        case 0x2ba7b8u: goto label_2ba7b8;
        case 0x2ba7bcu: goto label_2ba7bc;
        case 0x2ba7c0u: goto label_2ba7c0;
        case 0x2ba7c4u: goto label_2ba7c4;
        case 0x2ba7c8u: goto label_2ba7c8;
        case 0x2ba7ccu: goto label_2ba7cc;
        case 0x2ba7d0u: goto label_2ba7d0;
        case 0x2ba7d4u: goto label_2ba7d4;
        case 0x2ba7d8u: goto label_2ba7d8;
        case 0x2ba7dcu: goto label_2ba7dc;
        case 0x2ba7e0u: goto label_2ba7e0;
        case 0x2ba7e4u: goto label_2ba7e4;
        case 0x2ba7e8u: goto label_2ba7e8;
        case 0x2ba7ecu: goto label_2ba7ec;
        case 0x2ba7f0u: goto label_2ba7f0;
        case 0x2ba7f4u: goto label_2ba7f4;
        case 0x2ba7f8u: goto label_2ba7f8;
        case 0x2ba7fcu: goto label_2ba7fc;
        case 0x2ba800u: goto label_2ba800;
        case 0x2ba804u: goto label_2ba804;
        case 0x2ba808u: goto label_2ba808;
        case 0x2ba80cu: goto label_2ba80c;
        case 0x2ba810u: goto label_2ba810;
        case 0x2ba814u: goto label_2ba814;
        case 0x2ba818u: goto label_2ba818;
        case 0x2ba81cu: goto label_2ba81c;
        case 0x2ba820u: goto label_2ba820;
        case 0x2ba824u: goto label_2ba824;
        case 0x2ba828u: goto label_2ba828;
        case 0x2ba82cu: goto label_2ba82c;
        case 0x2ba830u: goto label_2ba830;
        case 0x2ba834u: goto label_2ba834;
        case 0x2ba838u: goto label_2ba838;
        case 0x2ba83cu: goto label_2ba83c;
        case 0x2ba840u: goto label_2ba840;
        case 0x2ba844u: goto label_2ba844;
        case 0x2ba848u: goto label_2ba848;
        case 0x2ba84cu: goto label_2ba84c;
        case 0x2ba850u: goto label_2ba850;
        case 0x2ba854u: goto label_2ba854;
        case 0x2ba858u: goto label_2ba858;
        case 0x2ba85cu: goto label_2ba85c;
        case 0x2ba860u: goto label_2ba860;
        case 0x2ba864u: goto label_2ba864;
        case 0x2ba868u: goto label_2ba868;
        case 0x2ba86cu: goto label_2ba86c;
        case 0x2ba870u: goto label_2ba870;
        case 0x2ba874u: goto label_2ba874;
        case 0x2ba878u: goto label_2ba878;
        case 0x2ba87cu: goto label_2ba87c;
        case 0x2ba880u: goto label_2ba880;
        case 0x2ba884u: goto label_2ba884;
        case 0x2ba888u: goto label_2ba888;
        case 0x2ba88cu: goto label_2ba88c;
        case 0x2ba890u: goto label_2ba890;
        case 0x2ba894u: goto label_2ba894;
        case 0x2ba898u: goto label_2ba898;
        case 0x2ba89cu: goto label_2ba89c;
        case 0x2ba8a0u: goto label_2ba8a0;
        case 0x2ba8a4u: goto label_2ba8a4;
        case 0x2ba8a8u: goto label_2ba8a8;
        case 0x2ba8acu: goto label_2ba8ac;
        case 0x2ba8b0u: goto label_2ba8b0;
        case 0x2ba8b4u: goto label_2ba8b4;
        case 0x2ba8b8u: goto label_2ba8b8;
        case 0x2ba8bcu: goto label_2ba8bc;
        case 0x2ba8c0u: goto label_2ba8c0;
        case 0x2ba8c4u: goto label_2ba8c4;
        case 0x2ba8c8u: goto label_2ba8c8;
        case 0x2ba8ccu: goto label_2ba8cc;
        case 0x2ba8d0u: goto label_2ba8d0;
        case 0x2ba8d4u: goto label_2ba8d4;
        case 0x2ba8d8u: goto label_2ba8d8;
        case 0x2ba8dcu: goto label_2ba8dc;
        case 0x2ba8e0u: goto label_2ba8e0;
        case 0x2ba8e4u: goto label_2ba8e4;
        case 0x2ba8e8u: goto label_2ba8e8;
        case 0x2ba8ecu: goto label_2ba8ec;
        case 0x2ba8f0u: goto label_2ba8f0;
        case 0x2ba8f4u: goto label_2ba8f4;
        case 0x2ba8f8u: goto label_2ba8f8;
        case 0x2ba8fcu: goto label_2ba8fc;
        case 0x2ba900u: goto label_2ba900;
        case 0x2ba904u: goto label_2ba904;
        case 0x2ba908u: goto label_2ba908;
        case 0x2ba90cu: goto label_2ba90c;
        case 0x2ba910u: goto label_2ba910;
        case 0x2ba914u: goto label_2ba914;
        case 0x2ba918u: goto label_2ba918;
        case 0x2ba91cu: goto label_2ba91c;
        case 0x2ba920u: goto label_2ba920;
        case 0x2ba924u: goto label_2ba924;
        case 0x2ba928u: goto label_2ba928;
        case 0x2ba92cu: goto label_2ba92c;
        case 0x2ba930u: goto label_2ba930;
        case 0x2ba934u: goto label_2ba934;
        case 0x2ba938u: goto label_2ba938;
        case 0x2ba93cu: goto label_2ba93c;
        case 0x2ba940u: goto label_2ba940;
        case 0x2ba944u: goto label_2ba944;
        case 0x2ba948u: goto label_2ba948;
        case 0x2ba94cu: goto label_2ba94c;
        case 0x2ba950u: goto label_2ba950;
        case 0x2ba954u: goto label_2ba954;
        case 0x2ba958u: goto label_2ba958;
        case 0x2ba95cu: goto label_2ba95c;
        case 0x2ba960u: goto label_2ba960;
        case 0x2ba964u: goto label_2ba964;
        case 0x2ba968u: goto label_2ba968;
        case 0x2ba96cu: goto label_2ba96c;
        case 0x2ba970u: goto label_2ba970;
        case 0x2ba974u: goto label_2ba974;
        case 0x2ba978u: goto label_2ba978;
        case 0x2ba97cu: goto label_2ba97c;
        case 0x2ba980u: goto label_2ba980;
        case 0x2ba984u: goto label_2ba984;
        case 0x2ba988u: goto label_2ba988;
        case 0x2ba98cu: goto label_2ba98c;
        case 0x2ba990u: goto label_2ba990;
        case 0x2ba994u: goto label_2ba994;
        case 0x2ba998u: goto label_2ba998;
        case 0x2ba99cu: goto label_2ba99c;
        case 0x2ba9a0u: goto label_2ba9a0;
        case 0x2ba9a4u: goto label_2ba9a4;
        case 0x2ba9a8u: goto label_2ba9a8;
        case 0x2ba9acu: goto label_2ba9ac;
        case 0x2ba9b0u: goto label_2ba9b0;
        case 0x2ba9b4u: goto label_2ba9b4;
        case 0x2ba9b8u: goto label_2ba9b8;
        case 0x2ba9bcu: goto label_2ba9bc;
        case 0x2ba9c0u: goto label_2ba9c0;
        case 0x2ba9c4u: goto label_2ba9c4;
        case 0x2ba9c8u: goto label_2ba9c8;
        case 0x2ba9ccu: goto label_2ba9cc;
        case 0x2ba9d0u: goto label_2ba9d0;
        case 0x2ba9d4u: goto label_2ba9d4;
        case 0x2ba9d8u: goto label_2ba9d8;
        case 0x2ba9dcu: goto label_2ba9dc;
        case 0x2ba9e0u: goto label_2ba9e0;
        case 0x2ba9e4u: goto label_2ba9e4;
        case 0x2ba9e8u: goto label_2ba9e8;
        case 0x2ba9ecu: goto label_2ba9ec;
        case 0x2ba9f0u: goto label_2ba9f0;
        case 0x2ba9f4u: goto label_2ba9f4;
        case 0x2ba9f8u: goto label_2ba9f8;
        case 0x2ba9fcu: goto label_2ba9fc;
        case 0x2baa00u: goto label_2baa00;
        case 0x2baa04u: goto label_2baa04;
        case 0x2baa08u: goto label_2baa08;
        case 0x2baa0cu: goto label_2baa0c;
        case 0x2baa10u: goto label_2baa10;
        case 0x2baa14u: goto label_2baa14;
        case 0x2baa18u: goto label_2baa18;
        case 0x2baa1cu: goto label_2baa1c;
        case 0x2baa20u: goto label_2baa20;
        case 0x2baa24u: goto label_2baa24;
        case 0x2baa28u: goto label_2baa28;
        case 0x2baa2cu: goto label_2baa2c;
        case 0x2baa30u: goto label_2baa30;
        case 0x2baa34u: goto label_2baa34;
        case 0x2baa38u: goto label_2baa38;
        case 0x2baa3cu: goto label_2baa3c;
        case 0x2baa40u: goto label_2baa40;
        case 0x2baa44u: goto label_2baa44;
        case 0x2baa48u: goto label_2baa48;
        case 0x2baa4cu: goto label_2baa4c;
        case 0x2baa50u: goto label_2baa50;
        case 0x2baa54u: goto label_2baa54;
        case 0x2baa58u: goto label_2baa58;
        case 0x2baa5cu: goto label_2baa5c;
        case 0x2baa60u: goto label_2baa60;
        case 0x2baa64u: goto label_2baa64;
        case 0x2baa68u: goto label_2baa68;
        case 0x2baa6cu: goto label_2baa6c;
        case 0x2baa70u: goto label_2baa70;
        case 0x2baa74u: goto label_2baa74;
        case 0x2baa78u: goto label_2baa78;
        case 0x2baa7cu: goto label_2baa7c;
        case 0x2baa80u: goto label_2baa80;
        case 0x2baa84u: goto label_2baa84;
        case 0x2baa88u: goto label_2baa88;
        case 0x2baa8cu: goto label_2baa8c;
        case 0x2baa90u: goto label_2baa90;
        case 0x2baa94u: goto label_2baa94;
        case 0x2baa98u: goto label_2baa98;
        case 0x2baa9cu: goto label_2baa9c;
        case 0x2baaa0u: goto label_2baaa0;
        case 0x2baaa4u: goto label_2baaa4;
        case 0x2baaa8u: goto label_2baaa8;
        case 0x2baaacu: goto label_2baaac;
        case 0x2baab0u: goto label_2baab0;
        case 0x2baab4u: goto label_2baab4;
        case 0x2baab8u: goto label_2baab8;
        case 0x2baabcu: goto label_2baabc;
        case 0x2baac0u: goto label_2baac0;
        case 0x2baac4u: goto label_2baac4;
        case 0x2baac8u: goto label_2baac8;
        case 0x2baaccu: goto label_2baacc;
        case 0x2baad0u: goto label_2baad0;
        case 0x2baad4u: goto label_2baad4;
        case 0x2baad8u: goto label_2baad8;
        case 0x2baadcu: goto label_2baadc;
        case 0x2baae0u: goto label_2baae0;
        case 0x2baae4u: goto label_2baae4;
        case 0x2baae8u: goto label_2baae8;
        case 0x2baaecu: goto label_2baaec;
        case 0x2baaf0u: goto label_2baaf0;
        case 0x2baaf4u: goto label_2baaf4;
        case 0x2baaf8u: goto label_2baaf8;
        case 0x2baafcu: goto label_2baafc;
        case 0x2bab00u: goto label_2bab00;
        case 0x2bab04u: goto label_2bab04;
        case 0x2bab08u: goto label_2bab08;
        case 0x2bab0cu: goto label_2bab0c;
        case 0x2bab10u: goto label_2bab10;
        case 0x2bab14u: goto label_2bab14;
        case 0x2bab18u: goto label_2bab18;
        case 0x2bab1cu: goto label_2bab1c;
        case 0x2bab20u: goto label_2bab20;
        case 0x2bab24u: goto label_2bab24;
        case 0x2bab28u: goto label_2bab28;
        case 0x2bab2cu: goto label_2bab2c;
        case 0x2bab30u: goto label_2bab30;
        case 0x2bab34u: goto label_2bab34;
        case 0x2bab38u: goto label_2bab38;
        case 0x2bab3cu: goto label_2bab3c;
        case 0x2bab40u: goto label_2bab40;
        case 0x2bab44u: goto label_2bab44;
        case 0x2bab48u: goto label_2bab48;
        case 0x2bab4cu: goto label_2bab4c;
        case 0x2bab50u: goto label_2bab50;
        case 0x2bab54u: goto label_2bab54;
        case 0x2bab58u: goto label_2bab58;
        case 0x2bab5cu: goto label_2bab5c;
        case 0x2bab60u: goto label_2bab60;
        case 0x2bab64u: goto label_2bab64;
        case 0x2bab68u: goto label_2bab68;
        case 0x2bab6cu: goto label_2bab6c;
        case 0x2bab70u: goto label_2bab70;
        case 0x2bab74u: goto label_2bab74;
        case 0x2bab78u: goto label_2bab78;
        case 0x2bab7cu: goto label_2bab7c;
        case 0x2bab80u: goto label_2bab80;
        case 0x2bab84u: goto label_2bab84;
        case 0x2bab88u: goto label_2bab88;
        case 0x2bab8cu: goto label_2bab8c;
        case 0x2bab90u: goto label_2bab90;
        case 0x2bab94u: goto label_2bab94;
        case 0x2bab98u: goto label_2bab98;
        case 0x2bab9cu: goto label_2bab9c;
        case 0x2baba0u: goto label_2baba0;
        case 0x2baba4u: goto label_2baba4;
        case 0x2baba8u: goto label_2baba8;
        case 0x2babacu: goto label_2babac;
        case 0x2babb0u: goto label_2babb0;
        case 0x2babb4u: goto label_2babb4;
        case 0x2babb8u: goto label_2babb8;
        case 0x2babbcu: goto label_2babbc;
        case 0x2babc0u: goto label_2babc0;
        case 0x2babc4u: goto label_2babc4;
        case 0x2babc8u: goto label_2babc8;
        case 0x2babccu: goto label_2babcc;
        case 0x2babd0u: goto label_2babd0;
        case 0x2babd4u: goto label_2babd4;
        case 0x2babd8u: goto label_2babd8;
        case 0x2babdcu: goto label_2babdc;
        case 0x2babe0u: goto label_2babe0;
        case 0x2babe4u: goto label_2babe4;
        case 0x2babe8u: goto label_2babe8;
        case 0x2babecu: goto label_2babec;
        case 0x2babf0u: goto label_2babf0;
        case 0x2babf4u: goto label_2babf4;
        case 0x2babf8u: goto label_2babf8;
        case 0x2babfcu: goto label_2babfc;
        case 0x2bac00u: goto label_2bac00;
        case 0x2bac04u: goto label_2bac04;
        case 0x2bac08u: goto label_2bac08;
        case 0x2bac0cu: goto label_2bac0c;
        case 0x2bac10u: goto label_2bac10;
        case 0x2bac14u: goto label_2bac14;
        case 0x2bac18u: goto label_2bac18;
        case 0x2bac1cu: goto label_2bac1c;
        case 0x2bac20u: goto label_2bac20;
        case 0x2bac24u: goto label_2bac24;
        case 0x2bac28u: goto label_2bac28;
        case 0x2bac2cu: goto label_2bac2c;
        case 0x2bac30u: goto label_2bac30;
        case 0x2bac34u: goto label_2bac34;
        case 0x2bac38u: goto label_2bac38;
        case 0x2bac3cu: goto label_2bac3c;
        case 0x2bac40u: goto label_2bac40;
        case 0x2bac44u: goto label_2bac44;
        case 0x2bac48u: goto label_2bac48;
        case 0x2bac4cu: goto label_2bac4c;
        case 0x2bac50u: goto label_2bac50;
        case 0x2bac54u: goto label_2bac54;
        case 0x2bac58u: goto label_2bac58;
        case 0x2bac5cu: goto label_2bac5c;
        case 0x2bac60u: goto label_2bac60;
        case 0x2bac64u: goto label_2bac64;
        case 0x2bac68u: goto label_2bac68;
        case 0x2bac6cu: goto label_2bac6c;
        case 0x2bac70u: goto label_2bac70;
        case 0x2bac74u: goto label_2bac74;
        case 0x2bac78u: goto label_2bac78;
        case 0x2bac7cu: goto label_2bac7c;
        case 0x2bac80u: goto label_2bac80;
        case 0x2bac84u: goto label_2bac84;
        case 0x2bac88u: goto label_2bac88;
        case 0x2bac8cu: goto label_2bac8c;
        case 0x2bac90u: goto label_2bac90;
        case 0x2bac94u: goto label_2bac94;
        case 0x2bac98u: goto label_2bac98;
        case 0x2bac9cu: goto label_2bac9c;
        case 0x2baca0u: goto label_2baca0;
        case 0x2baca4u: goto label_2baca4;
        case 0x2baca8u: goto label_2baca8;
        case 0x2bacacu: goto label_2bacac;
        case 0x2bacb0u: goto label_2bacb0;
        case 0x2bacb4u: goto label_2bacb4;
        case 0x2bacb8u: goto label_2bacb8;
        case 0x2bacbcu: goto label_2bacbc;
        case 0x2bacc0u: goto label_2bacc0;
        case 0x2bacc4u: goto label_2bacc4;
        case 0x2bacc8u: goto label_2bacc8;
        case 0x2bacccu: goto label_2baccc;
        case 0x2bacd0u: goto label_2bacd0;
        case 0x2bacd4u: goto label_2bacd4;
        case 0x2bacd8u: goto label_2bacd8;
        case 0x2bacdcu: goto label_2bacdc;
        case 0x2bace0u: goto label_2bace0;
        case 0x2bace4u: goto label_2bace4;
        case 0x2bace8u: goto label_2bace8;
        case 0x2bacecu: goto label_2bacec;
        case 0x2bacf0u: goto label_2bacf0;
        case 0x2bacf4u: goto label_2bacf4;
        case 0x2bacf8u: goto label_2bacf8;
        case 0x2bacfcu: goto label_2bacfc;
        case 0x2bad00u: goto label_2bad00;
        case 0x2bad04u: goto label_2bad04;
        case 0x2bad08u: goto label_2bad08;
        case 0x2bad0cu: goto label_2bad0c;
        case 0x2bad10u: goto label_2bad10;
        case 0x2bad14u: goto label_2bad14;
        case 0x2bad18u: goto label_2bad18;
        case 0x2bad1cu: goto label_2bad1c;
        case 0x2bad20u: goto label_2bad20;
        case 0x2bad24u: goto label_2bad24;
        case 0x2bad28u: goto label_2bad28;
        case 0x2bad2cu: goto label_2bad2c;
        case 0x2bad30u: goto label_2bad30;
        case 0x2bad34u: goto label_2bad34;
        case 0x2bad38u: goto label_2bad38;
        case 0x2bad3cu: goto label_2bad3c;
        case 0x2bad40u: goto label_2bad40;
        case 0x2bad44u: goto label_2bad44;
        case 0x2bad48u: goto label_2bad48;
        case 0x2bad4cu: goto label_2bad4c;
        case 0x2bad50u: goto label_2bad50;
        case 0x2bad54u: goto label_2bad54;
        case 0x2bad58u: goto label_2bad58;
        case 0x2bad5cu: goto label_2bad5c;
        case 0x2bad60u: goto label_2bad60;
        case 0x2bad64u: goto label_2bad64;
        case 0x2bad68u: goto label_2bad68;
        case 0x2bad6cu: goto label_2bad6c;
        case 0x2bad70u: goto label_2bad70;
        case 0x2bad74u: goto label_2bad74;
        case 0x2bad78u: goto label_2bad78;
        case 0x2bad7cu: goto label_2bad7c;
        case 0x2bad80u: goto label_2bad80;
        case 0x2bad84u: goto label_2bad84;
        case 0x2bad88u: goto label_2bad88;
        case 0x2bad8cu: goto label_2bad8c;
        case 0x2bad90u: goto label_2bad90;
        case 0x2bad94u: goto label_2bad94;
        case 0x2bad98u: goto label_2bad98;
        case 0x2bad9cu: goto label_2bad9c;
        case 0x2bada0u: goto label_2bada0;
        case 0x2bada4u: goto label_2bada4;
        case 0x2bada8u: goto label_2bada8;
        case 0x2badacu: goto label_2badac;
        case 0x2badb0u: goto label_2badb0;
        case 0x2badb4u: goto label_2badb4;
        case 0x2badb8u: goto label_2badb8;
        case 0x2badbcu: goto label_2badbc;
        case 0x2badc0u: goto label_2badc0;
        case 0x2badc4u: goto label_2badc4;
        case 0x2badc8u: goto label_2badc8;
        case 0x2badccu: goto label_2badcc;
        case 0x2badd0u: goto label_2badd0;
        case 0x2badd4u: goto label_2badd4;
        case 0x2badd8u: goto label_2badd8;
        case 0x2baddcu: goto label_2baddc;
        case 0x2bade0u: goto label_2bade0;
        case 0x2bade4u: goto label_2bade4;
        case 0x2bade8u: goto label_2bade8;
        case 0x2badecu: goto label_2badec;
        case 0x2badf0u: goto label_2badf0;
        case 0x2badf4u: goto label_2badf4;
        case 0x2badf8u: goto label_2badf8;
        case 0x2badfcu: goto label_2badfc;
        case 0x2bae00u: goto label_2bae00;
        case 0x2bae04u: goto label_2bae04;
        case 0x2bae08u: goto label_2bae08;
        case 0x2bae0cu: goto label_2bae0c;
        case 0x2bae10u: goto label_2bae10;
        case 0x2bae14u: goto label_2bae14;
        case 0x2bae18u: goto label_2bae18;
        case 0x2bae1cu: goto label_2bae1c;
        case 0x2bae20u: goto label_2bae20;
        case 0x2bae24u: goto label_2bae24;
        case 0x2bae28u: goto label_2bae28;
        case 0x2bae2cu: goto label_2bae2c;
        case 0x2bae30u: goto label_2bae30;
        case 0x2bae34u: goto label_2bae34;
        case 0x2bae38u: goto label_2bae38;
        case 0x2bae3cu: goto label_2bae3c;
        case 0x2bae40u: goto label_2bae40;
        case 0x2bae44u: goto label_2bae44;
        case 0x2bae48u: goto label_2bae48;
        case 0x2bae4cu: goto label_2bae4c;
        case 0x2bae50u: goto label_2bae50;
        case 0x2bae54u: goto label_2bae54;
        case 0x2bae58u: goto label_2bae58;
        case 0x2bae5cu: goto label_2bae5c;
        case 0x2bae60u: goto label_2bae60;
        case 0x2bae64u: goto label_2bae64;
        case 0x2bae68u: goto label_2bae68;
        case 0x2bae6cu: goto label_2bae6c;
        case 0x2bae70u: goto label_2bae70;
        case 0x2bae74u: goto label_2bae74;
        case 0x2bae78u: goto label_2bae78;
        case 0x2bae7cu: goto label_2bae7c;
        case 0x2bae80u: goto label_2bae80;
        case 0x2bae84u: goto label_2bae84;
        case 0x2bae88u: goto label_2bae88;
        case 0x2bae8cu: goto label_2bae8c;
        case 0x2bae90u: goto label_2bae90;
        case 0x2bae94u: goto label_2bae94;
        case 0x2bae98u: goto label_2bae98;
        case 0x2bae9cu: goto label_2bae9c;
        case 0x2baea0u: goto label_2baea0;
        case 0x2baea4u: goto label_2baea4;
        case 0x2baea8u: goto label_2baea8;
        case 0x2baeacu: goto label_2baeac;
        case 0x2baeb0u: goto label_2baeb0;
        case 0x2baeb4u: goto label_2baeb4;
        case 0x2baeb8u: goto label_2baeb8;
        case 0x2baebcu: goto label_2baebc;
        case 0x2baec0u: goto label_2baec0;
        case 0x2baec4u: goto label_2baec4;
        case 0x2baec8u: goto label_2baec8;
        case 0x2baeccu: goto label_2baecc;
        case 0x2baed0u: goto label_2baed0;
        case 0x2baed4u: goto label_2baed4;
        case 0x2baed8u: goto label_2baed8;
        case 0x2baedcu: goto label_2baedc;
        case 0x2baee0u: goto label_2baee0;
        case 0x2baee4u: goto label_2baee4;
        case 0x2baee8u: goto label_2baee8;
        case 0x2baeecu: goto label_2baeec;
        case 0x2baef0u: goto label_2baef0;
        case 0x2baef4u: goto label_2baef4;
        case 0x2baef8u: goto label_2baef8;
        case 0x2baefcu: goto label_2baefc;
        case 0x2baf00u: goto label_2baf00;
        case 0x2baf04u: goto label_2baf04;
        case 0x2baf08u: goto label_2baf08;
        case 0x2baf0cu: goto label_2baf0c;
        case 0x2baf10u: goto label_2baf10;
        case 0x2baf14u: goto label_2baf14;
        case 0x2baf18u: goto label_2baf18;
        case 0x2baf1cu: goto label_2baf1c;
        case 0x2baf20u: goto label_2baf20;
        case 0x2baf24u: goto label_2baf24;
        case 0x2baf28u: goto label_2baf28;
        case 0x2baf2cu: goto label_2baf2c;
        case 0x2baf30u: goto label_2baf30;
        case 0x2baf34u: goto label_2baf34;
        case 0x2baf38u: goto label_2baf38;
        case 0x2baf3cu: goto label_2baf3c;
        case 0x2baf40u: goto label_2baf40;
        case 0x2baf44u: goto label_2baf44;
        case 0x2baf48u: goto label_2baf48;
        case 0x2baf4cu: goto label_2baf4c;
        case 0x2baf50u: goto label_2baf50;
        case 0x2baf54u: goto label_2baf54;
        case 0x2baf58u: goto label_2baf58;
        case 0x2baf5cu: goto label_2baf5c;
        case 0x2baf60u: goto label_2baf60;
        case 0x2baf64u: goto label_2baf64;
        case 0x2baf68u: goto label_2baf68;
        case 0x2baf6cu: goto label_2baf6c;
        case 0x2baf70u: goto label_2baf70;
        case 0x2baf74u: goto label_2baf74;
        case 0x2baf78u: goto label_2baf78;
        case 0x2baf7cu: goto label_2baf7c;
        case 0x2baf80u: goto label_2baf80;
        case 0x2baf84u: goto label_2baf84;
        case 0x2baf88u: goto label_2baf88;
        case 0x2baf8cu: goto label_2baf8c;
        case 0x2baf90u: goto label_2baf90;
        case 0x2baf94u: goto label_2baf94;
        case 0x2baf98u: goto label_2baf98;
        case 0x2baf9cu: goto label_2baf9c;
        case 0x2bafa0u: goto label_2bafa0;
        case 0x2bafa4u: goto label_2bafa4;
        case 0x2bafa8u: goto label_2bafa8;
        case 0x2bafacu: goto label_2bafac;
        case 0x2bafb0u: goto label_2bafb0;
        case 0x2bafb4u: goto label_2bafb4;
        case 0x2bafb8u: goto label_2bafb8;
        case 0x2bafbcu: goto label_2bafbc;
        case 0x2bafc0u: goto label_2bafc0;
        case 0x2bafc4u: goto label_2bafc4;
        case 0x2bafc8u: goto label_2bafc8;
        case 0x2bafccu: goto label_2bafcc;
        case 0x2bafd0u: goto label_2bafd0;
        case 0x2bafd4u: goto label_2bafd4;
        case 0x2bafd8u: goto label_2bafd8;
        case 0x2bafdcu: goto label_2bafdc;
        case 0x2bafe0u: goto label_2bafe0;
        case 0x2bafe4u: goto label_2bafe4;
        case 0x2bafe8u: goto label_2bafe8;
        case 0x2bafecu: goto label_2bafec;
        case 0x2baff0u: goto label_2baff0;
        case 0x2baff4u: goto label_2baff4;
        case 0x2baff8u: goto label_2baff8;
        case 0x2baffcu: goto label_2baffc;
        case 0x2bb000u: goto label_2bb000;
        case 0x2bb004u: goto label_2bb004;
        case 0x2bb008u: goto label_2bb008;
        case 0x2bb00cu: goto label_2bb00c;
        case 0x2bb010u: goto label_2bb010;
        case 0x2bb014u: goto label_2bb014;
        case 0x2bb018u: goto label_2bb018;
        case 0x2bb01cu: goto label_2bb01c;
        case 0x2bb020u: goto label_2bb020;
        case 0x2bb024u: goto label_2bb024;
        case 0x2bb028u: goto label_2bb028;
        case 0x2bb02cu: goto label_2bb02c;
        case 0x2bb030u: goto label_2bb030;
        case 0x2bb034u: goto label_2bb034;
        case 0x2bb038u: goto label_2bb038;
        case 0x2bb03cu: goto label_2bb03c;
        case 0x2bb040u: goto label_2bb040;
        case 0x2bb044u: goto label_2bb044;
        case 0x2bb048u: goto label_2bb048;
        case 0x2bb04cu: goto label_2bb04c;
        case 0x2bb050u: goto label_2bb050;
        case 0x2bb054u: goto label_2bb054;
        case 0x2bb058u: goto label_2bb058;
        case 0x2bb05cu: goto label_2bb05c;
        case 0x2bb060u: goto label_2bb060;
        case 0x2bb064u: goto label_2bb064;
        case 0x2bb068u: goto label_2bb068;
        case 0x2bb06cu: goto label_2bb06c;
        case 0x2bb070u: goto label_2bb070;
        case 0x2bb074u: goto label_2bb074;
        case 0x2bb078u: goto label_2bb078;
        case 0x2bb07cu: goto label_2bb07c;
        case 0x2bb080u: goto label_2bb080;
        case 0x2bb084u: goto label_2bb084;
        case 0x2bb088u: goto label_2bb088;
        case 0x2bb08cu: goto label_2bb08c;
        case 0x2bb090u: goto label_2bb090;
        case 0x2bb094u: goto label_2bb094;
        case 0x2bb098u: goto label_2bb098;
        case 0x2bb09cu: goto label_2bb09c;
        case 0x2bb0a0u: goto label_2bb0a0;
        case 0x2bb0a4u: goto label_2bb0a4;
        case 0x2bb0a8u: goto label_2bb0a8;
        case 0x2bb0acu: goto label_2bb0ac;
        case 0x2bb0b0u: goto label_2bb0b0;
        case 0x2bb0b4u: goto label_2bb0b4;
        case 0x2bb0b8u: goto label_2bb0b8;
        case 0x2bb0bcu: goto label_2bb0bc;
        case 0x2bb0c0u: goto label_2bb0c0;
        case 0x2bb0c4u: goto label_2bb0c4;
        case 0x2bb0c8u: goto label_2bb0c8;
        case 0x2bb0ccu: goto label_2bb0cc;
        case 0x2bb0d0u: goto label_2bb0d0;
        case 0x2bb0d4u: goto label_2bb0d4;
        case 0x2bb0d8u: goto label_2bb0d8;
        case 0x2bb0dcu: goto label_2bb0dc;
        case 0x2bb0e0u: goto label_2bb0e0;
        case 0x2bb0e4u: goto label_2bb0e4;
        case 0x2bb0e8u: goto label_2bb0e8;
        case 0x2bb0ecu: goto label_2bb0ec;
        case 0x2bb0f0u: goto label_2bb0f0;
        case 0x2bb0f4u: goto label_2bb0f4;
        case 0x2bb0f8u: goto label_2bb0f8;
        case 0x2bb0fcu: goto label_2bb0fc;
        case 0x2bb100u: goto label_2bb100;
        case 0x2bb104u: goto label_2bb104;
        case 0x2bb108u: goto label_2bb108;
        case 0x2bb10cu: goto label_2bb10c;
        case 0x2bb110u: goto label_2bb110;
        case 0x2bb114u: goto label_2bb114;
        case 0x2bb118u: goto label_2bb118;
        case 0x2bb11cu: goto label_2bb11c;
        case 0x2bb120u: goto label_2bb120;
        case 0x2bb124u: goto label_2bb124;
        case 0x2bb128u: goto label_2bb128;
        case 0x2bb12cu: goto label_2bb12c;
        case 0x2bb130u: goto label_2bb130;
        case 0x2bb134u: goto label_2bb134;
        case 0x2bb138u: goto label_2bb138;
        case 0x2bb13cu: goto label_2bb13c;
        case 0x2bb140u: goto label_2bb140;
        case 0x2bb144u: goto label_2bb144;
        case 0x2bb148u: goto label_2bb148;
        case 0x2bb14cu: goto label_2bb14c;
        case 0x2bb150u: goto label_2bb150;
        case 0x2bb154u: goto label_2bb154;
        case 0x2bb158u: goto label_2bb158;
        case 0x2bb15cu: goto label_2bb15c;
        case 0x2bb160u: goto label_2bb160;
        case 0x2bb164u: goto label_2bb164;
        case 0x2bb168u: goto label_2bb168;
        case 0x2bb16cu: goto label_2bb16c;
        case 0x2bb170u: goto label_2bb170;
        case 0x2bb174u: goto label_2bb174;
        case 0x2bb178u: goto label_2bb178;
        case 0x2bb17cu: goto label_2bb17c;
        case 0x2bb180u: goto label_2bb180;
        case 0x2bb184u: goto label_2bb184;
        case 0x2bb188u: goto label_2bb188;
        case 0x2bb18cu: goto label_2bb18c;
        case 0x2bb190u: goto label_2bb190;
        case 0x2bb194u: goto label_2bb194;
        case 0x2bb198u: goto label_2bb198;
        case 0x2bb19cu: goto label_2bb19c;
        case 0x2bb1a0u: goto label_2bb1a0;
        case 0x2bb1a4u: goto label_2bb1a4;
        case 0x2bb1a8u: goto label_2bb1a8;
        case 0x2bb1acu: goto label_2bb1ac;
        case 0x2bb1b0u: goto label_2bb1b0;
        case 0x2bb1b4u: goto label_2bb1b4;
        case 0x2bb1b8u: goto label_2bb1b8;
        case 0x2bb1bcu: goto label_2bb1bc;
        case 0x2bb1c0u: goto label_2bb1c0;
        case 0x2bb1c4u: goto label_2bb1c4;
        case 0x2bb1c8u: goto label_2bb1c8;
        case 0x2bb1ccu: goto label_2bb1cc;
        case 0x2bb1d0u: goto label_2bb1d0;
        case 0x2bb1d4u: goto label_2bb1d4;
        case 0x2bb1d8u: goto label_2bb1d8;
        case 0x2bb1dcu: goto label_2bb1dc;
        case 0x2bb1e0u: goto label_2bb1e0;
        case 0x2bb1e4u: goto label_2bb1e4;
        case 0x2bb1e8u: goto label_2bb1e8;
        case 0x2bb1ecu: goto label_2bb1ec;
        case 0x2bb1f0u: goto label_2bb1f0;
        case 0x2bb1f4u: goto label_2bb1f4;
        case 0x2bb1f8u: goto label_2bb1f8;
        case 0x2bb1fcu: goto label_2bb1fc;
        case 0x2bb200u: goto label_2bb200;
        case 0x2bb204u: goto label_2bb204;
        case 0x2bb208u: goto label_2bb208;
        case 0x2bb20cu: goto label_2bb20c;
        case 0x2bb210u: goto label_2bb210;
        case 0x2bb214u: goto label_2bb214;
        case 0x2bb218u: goto label_2bb218;
        case 0x2bb21cu: goto label_2bb21c;
        case 0x2bb220u: goto label_2bb220;
        case 0x2bb224u: goto label_2bb224;
        case 0x2bb228u: goto label_2bb228;
        case 0x2bb22cu: goto label_2bb22c;
        case 0x2bb230u: goto label_2bb230;
        case 0x2bb234u: goto label_2bb234;
        case 0x2bb238u: goto label_2bb238;
        case 0x2bb23cu: goto label_2bb23c;
        case 0x2bb240u: goto label_2bb240;
        case 0x2bb244u: goto label_2bb244;
        case 0x2bb248u: goto label_2bb248;
        case 0x2bb24cu: goto label_2bb24c;
        case 0x2bb250u: goto label_2bb250;
        case 0x2bb254u: goto label_2bb254;
        case 0x2bb258u: goto label_2bb258;
        case 0x2bb25cu: goto label_2bb25c;
        case 0x2bb260u: goto label_2bb260;
        case 0x2bb264u: goto label_2bb264;
        case 0x2bb268u: goto label_2bb268;
        case 0x2bb26cu: goto label_2bb26c;
        case 0x2bb270u: goto label_2bb270;
        case 0x2bb274u: goto label_2bb274;
        case 0x2bb278u: goto label_2bb278;
        case 0x2bb27cu: goto label_2bb27c;
        case 0x2bb280u: goto label_2bb280;
        case 0x2bb284u: goto label_2bb284;
        case 0x2bb288u: goto label_2bb288;
        case 0x2bb28cu: goto label_2bb28c;
        case 0x2bb290u: goto label_2bb290;
        case 0x2bb294u: goto label_2bb294;
        case 0x2bb298u: goto label_2bb298;
        case 0x2bb29cu: goto label_2bb29c;
        case 0x2bb2a0u: goto label_2bb2a0;
        case 0x2bb2a4u: goto label_2bb2a4;
        case 0x2bb2a8u: goto label_2bb2a8;
        case 0x2bb2acu: goto label_2bb2ac;
        case 0x2bb2b0u: goto label_2bb2b0;
        case 0x2bb2b4u: goto label_2bb2b4;
        case 0x2bb2b8u: goto label_2bb2b8;
        case 0x2bb2bcu: goto label_2bb2bc;
        case 0x2bb2c0u: goto label_2bb2c0;
        case 0x2bb2c4u: goto label_2bb2c4;
        case 0x2bb2c8u: goto label_2bb2c8;
        case 0x2bb2ccu: goto label_2bb2cc;
        case 0x2bb2d0u: goto label_2bb2d0;
        case 0x2bb2d4u: goto label_2bb2d4;
        case 0x2bb2d8u: goto label_2bb2d8;
        case 0x2bb2dcu: goto label_2bb2dc;
        case 0x2bb2e0u: goto label_2bb2e0;
        case 0x2bb2e4u: goto label_2bb2e4;
        case 0x2bb2e8u: goto label_2bb2e8;
        case 0x2bb2ecu: goto label_2bb2ec;
        case 0x2bb2f0u: goto label_2bb2f0;
        case 0x2bb2f4u: goto label_2bb2f4;
        case 0x2bb2f8u: goto label_2bb2f8;
        case 0x2bb2fcu: goto label_2bb2fc;
        case 0x2bb300u: goto label_2bb300;
        case 0x2bb304u: goto label_2bb304;
        case 0x2bb308u: goto label_2bb308;
        case 0x2bb30cu: goto label_2bb30c;
        case 0x2bb310u: goto label_2bb310;
        case 0x2bb314u: goto label_2bb314;
        case 0x2bb318u: goto label_2bb318;
        case 0x2bb31cu: goto label_2bb31c;
        case 0x2bb320u: goto label_2bb320;
        case 0x2bb324u: goto label_2bb324;
        case 0x2bb328u: goto label_2bb328;
        case 0x2bb32cu: goto label_2bb32c;
        case 0x2bb330u: goto label_2bb330;
        case 0x2bb334u: goto label_2bb334;
        case 0x2bb338u: goto label_2bb338;
        case 0x2bb33cu: goto label_2bb33c;
        case 0x2bb340u: goto label_2bb340;
        case 0x2bb344u: goto label_2bb344;
        case 0x2bb348u: goto label_2bb348;
        case 0x2bb34cu: goto label_2bb34c;
        case 0x2bb350u: goto label_2bb350;
        case 0x2bb354u: goto label_2bb354;
        case 0x2bb358u: goto label_2bb358;
        case 0x2bb35cu: goto label_2bb35c;
        case 0x2bb360u: goto label_2bb360;
        case 0x2bb364u: goto label_2bb364;
        case 0x2bb368u: goto label_2bb368;
        case 0x2bb36cu: goto label_2bb36c;
        case 0x2bb370u: goto label_2bb370;
        case 0x2bb374u: goto label_2bb374;
        case 0x2bb378u: goto label_2bb378;
        case 0x2bb37cu: goto label_2bb37c;
        case 0x2bb380u: goto label_2bb380;
        case 0x2bb384u: goto label_2bb384;
        case 0x2bb388u: goto label_2bb388;
        case 0x2bb38cu: goto label_2bb38c;
        case 0x2bb390u: goto label_2bb390;
        case 0x2bb394u: goto label_2bb394;
        case 0x2bb398u: goto label_2bb398;
        case 0x2bb39cu: goto label_2bb39c;
        case 0x2bb3a0u: goto label_2bb3a0;
        case 0x2bb3a4u: goto label_2bb3a4;
        case 0x2bb3a8u: goto label_2bb3a8;
        case 0x2bb3acu: goto label_2bb3ac;
        case 0x2bb3b0u: goto label_2bb3b0;
        case 0x2bb3b4u: goto label_2bb3b4;
        case 0x2bb3b8u: goto label_2bb3b8;
        case 0x2bb3bcu: goto label_2bb3bc;
        case 0x2bb3c0u: goto label_2bb3c0;
        case 0x2bb3c4u: goto label_2bb3c4;
        case 0x2bb3c8u: goto label_2bb3c8;
        case 0x2bb3ccu: goto label_2bb3cc;
        case 0x2bb3d0u: goto label_2bb3d0;
        case 0x2bb3d4u: goto label_2bb3d4;
        case 0x2bb3d8u: goto label_2bb3d8;
        case 0x2bb3dcu: goto label_2bb3dc;
        case 0x2bb3e0u: goto label_2bb3e0;
        case 0x2bb3e4u: goto label_2bb3e4;
        case 0x2bb3e8u: goto label_2bb3e8;
        case 0x2bb3ecu: goto label_2bb3ec;
        case 0x2bb3f0u: goto label_2bb3f0;
        case 0x2bb3f4u: goto label_2bb3f4;
        case 0x2bb3f8u: goto label_2bb3f8;
        case 0x2bb3fcu: goto label_2bb3fc;
        case 0x2bb400u: goto label_2bb400;
        case 0x2bb404u: goto label_2bb404;
        case 0x2bb408u: goto label_2bb408;
        case 0x2bb40cu: goto label_2bb40c;
        case 0x2bb410u: goto label_2bb410;
        case 0x2bb414u: goto label_2bb414;
        case 0x2bb418u: goto label_2bb418;
        case 0x2bb41cu: goto label_2bb41c;
        case 0x2bb420u: goto label_2bb420;
        case 0x2bb424u: goto label_2bb424;
        case 0x2bb428u: goto label_2bb428;
        case 0x2bb42cu: goto label_2bb42c;
        case 0x2bb430u: goto label_2bb430;
        case 0x2bb434u: goto label_2bb434;
        case 0x2bb438u: goto label_2bb438;
        case 0x2bb43cu: goto label_2bb43c;
        case 0x2bb440u: goto label_2bb440;
        case 0x2bb444u: goto label_2bb444;
        case 0x2bb448u: goto label_2bb448;
        case 0x2bb44cu: goto label_2bb44c;
        case 0x2bb450u: goto label_2bb450;
        case 0x2bb454u: goto label_2bb454;
        case 0x2bb458u: goto label_2bb458;
        case 0x2bb45cu: goto label_2bb45c;
        case 0x2bb460u: goto label_2bb460;
        case 0x2bb464u: goto label_2bb464;
        case 0x2bb468u: goto label_2bb468;
        case 0x2bb46cu: goto label_2bb46c;
        case 0x2bb470u: goto label_2bb470;
        case 0x2bb474u: goto label_2bb474;
        case 0x2bb478u: goto label_2bb478;
        case 0x2bb47cu: goto label_2bb47c;
        case 0x2bb480u: goto label_2bb480;
        case 0x2bb484u: goto label_2bb484;
        case 0x2bb488u: goto label_2bb488;
        case 0x2bb48cu: goto label_2bb48c;
        case 0x2bb490u: goto label_2bb490;
        case 0x2bb494u: goto label_2bb494;
        case 0x2bb498u: goto label_2bb498;
        case 0x2bb49cu: goto label_2bb49c;
        case 0x2bb4a0u: goto label_2bb4a0;
        case 0x2bb4a4u: goto label_2bb4a4;
        case 0x2bb4a8u: goto label_2bb4a8;
        case 0x2bb4acu: goto label_2bb4ac;
        case 0x2bb4b0u: goto label_2bb4b0;
        case 0x2bb4b4u: goto label_2bb4b4;
        case 0x2bb4b8u: goto label_2bb4b8;
        case 0x2bb4bcu: goto label_2bb4bc;
        case 0x2bb4c0u: goto label_2bb4c0;
        case 0x2bb4c4u: goto label_2bb4c4;
        case 0x2bb4c8u: goto label_2bb4c8;
        case 0x2bb4ccu: goto label_2bb4cc;
        case 0x2bb4d0u: goto label_2bb4d0;
        case 0x2bb4d4u: goto label_2bb4d4;
        case 0x2bb4d8u: goto label_2bb4d8;
        case 0x2bb4dcu: goto label_2bb4dc;
        case 0x2bb4e0u: goto label_2bb4e0;
        case 0x2bb4e4u: goto label_2bb4e4;
        case 0x2bb4e8u: goto label_2bb4e8;
        case 0x2bb4ecu: goto label_2bb4ec;
        case 0x2bb4f0u: goto label_2bb4f0;
        case 0x2bb4f4u: goto label_2bb4f4;
        case 0x2bb4f8u: goto label_2bb4f8;
        case 0x2bb4fcu: goto label_2bb4fc;
        case 0x2bb500u: goto label_2bb500;
        case 0x2bb504u: goto label_2bb504;
        case 0x2bb508u: goto label_2bb508;
        case 0x2bb50cu: goto label_2bb50c;
        case 0x2bb510u: goto label_2bb510;
        case 0x2bb514u: goto label_2bb514;
        case 0x2bb518u: goto label_2bb518;
        case 0x2bb51cu: goto label_2bb51c;
        case 0x2bb520u: goto label_2bb520;
        case 0x2bb524u: goto label_2bb524;
        case 0x2bb528u: goto label_2bb528;
        case 0x2bb52cu: goto label_2bb52c;
        case 0x2bb530u: goto label_2bb530;
        case 0x2bb534u: goto label_2bb534;
        case 0x2bb538u: goto label_2bb538;
        case 0x2bb53cu: goto label_2bb53c;
        case 0x2bb540u: goto label_2bb540;
        case 0x2bb544u: goto label_2bb544;
        case 0x2bb548u: goto label_2bb548;
        case 0x2bb54cu: goto label_2bb54c;
        case 0x2bb550u: goto label_2bb550;
        case 0x2bb554u: goto label_2bb554;
        case 0x2bb558u: goto label_2bb558;
        case 0x2bb55cu: goto label_2bb55c;
        case 0x2bb560u: goto label_2bb560;
        case 0x2bb564u: goto label_2bb564;
        case 0x2bb568u: goto label_2bb568;
        case 0x2bb56cu: goto label_2bb56c;
        case 0x2bb570u: goto label_2bb570;
        case 0x2bb574u: goto label_2bb574;
        case 0x2bb578u: goto label_2bb578;
        case 0x2bb57cu: goto label_2bb57c;
        case 0x2bb580u: goto label_2bb580;
        case 0x2bb584u: goto label_2bb584;
        case 0x2bb588u: goto label_2bb588;
        case 0x2bb58cu: goto label_2bb58c;
        case 0x2bb590u: goto label_2bb590;
        case 0x2bb594u: goto label_2bb594;
        case 0x2bb598u: goto label_2bb598;
        case 0x2bb59cu: goto label_2bb59c;
        case 0x2bb5a0u: goto label_2bb5a0;
        case 0x2bb5a4u: goto label_2bb5a4;
        case 0x2bb5a8u: goto label_2bb5a8;
        case 0x2bb5acu: goto label_2bb5ac;
        case 0x2bb5b0u: goto label_2bb5b0;
        case 0x2bb5b4u: goto label_2bb5b4;
        case 0x2bb5b8u: goto label_2bb5b8;
        case 0x2bb5bcu: goto label_2bb5bc;
        case 0x2bb5c0u: goto label_2bb5c0;
        case 0x2bb5c4u: goto label_2bb5c4;
        case 0x2bb5c8u: goto label_2bb5c8;
        case 0x2bb5ccu: goto label_2bb5cc;
        case 0x2bb5d0u: goto label_2bb5d0;
        case 0x2bb5d4u: goto label_2bb5d4;
        case 0x2bb5d8u: goto label_2bb5d8;
        case 0x2bb5dcu: goto label_2bb5dc;
        case 0x2bb5e0u: goto label_2bb5e0;
        case 0x2bb5e4u: goto label_2bb5e4;
        case 0x2bb5e8u: goto label_2bb5e8;
        case 0x2bb5ecu: goto label_2bb5ec;
        case 0x2bb5f0u: goto label_2bb5f0;
        case 0x2bb5f4u: goto label_2bb5f4;
        case 0x2bb5f8u: goto label_2bb5f8;
        case 0x2bb5fcu: goto label_2bb5fc;
        case 0x2bb600u: goto label_2bb600;
        case 0x2bb604u: goto label_2bb604;
        case 0x2bb608u: goto label_2bb608;
        case 0x2bb60cu: goto label_2bb60c;
        case 0x2bb610u: goto label_2bb610;
        case 0x2bb614u: goto label_2bb614;
        case 0x2bb618u: goto label_2bb618;
        case 0x2bb61cu: goto label_2bb61c;
        case 0x2bb620u: goto label_2bb620;
        case 0x2bb624u: goto label_2bb624;
        case 0x2bb628u: goto label_2bb628;
        case 0x2bb62cu: goto label_2bb62c;
        case 0x2bb630u: goto label_2bb630;
        case 0x2bb634u: goto label_2bb634;
        case 0x2bb638u: goto label_2bb638;
        case 0x2bb63cu: goto label_2bb63c;
        case 0x2bb640u: goto label_2bb640;
        case 0x2bb644u: goto label_2bb644;
        case 0x2bb648u: goto label_2bb648;
        case 0x2bb64cu: goto label_2bb64c;
        case 0x2bb650u: goto label_2bb650;
        case 0x2bb654u: goto label_2bb654;
        case 0x2bb658u: goto label_2bb658;
        case 0x2bb65cu: goto label_2bb65c;
        case 0x2bb660u: goto label_2bb660;
        case 0x2bb664u: goto label_2bb664;
        case 0x2bb668u: goto label_2bb668;
        case 0x2bb66cu: goto label_2bb66c;
        case 0x2bb670u: goto label_2bb670;
        case 0x2bb674u: goto label_2bb674;
        case 0x2bb678u: goto label_2bb678;
        case 0x2bb67cu: goto label_2bb67c;
        case 0x2bb680u: goto label_2bb680;
        case 0x2bb684u: goto label_2bb684;
        case 0x2bb688u: goto label_2bb688;
        case 0x2bb68cu: goto label_2bb68c;
        case 0x2bb690u: goto label_2bb690;
        case 0x2bb694u: goto label_2bb694;
        case 0x2bb698u: goto label_2bb698;
        case 0x2bb69cu: goto label_2bb69c;
        case 0x2bb6a0u: goto label_2bb6a0;
        case 0x2bb6a4u: goto label_2bb6a4;
        case 0x2bb6a8u: goto label_2bb6a8;
        case 0x2bb6acu: goto label_2bb6ac;
        case 0x2bb6b0u: goto label_2bb6b0;
        case 0x2bb6b4u: goto label_2bb6b4;
        case 0x2bb6b8u: goto label_2bb6b8;
        case 0x2bb6bcu: goto label_2bb6bc;
        case 0x2bb6c0u: goto label_2bb6c0;
        case 0x2bb6c4u: goto label_2bb6c4;
        case 0x2bb6c8u: goto label_2bb6c8;
        case 0x2bb6ccu: goto label_2bb6cc;
        case 0x2bb6d0u: goto label_2bb6d0;
        case 0x2bb6d4u: goto label_2bb6d4;
        case 0x2bb6d8u: goto label_2bb6d8;
        case 0x2bb6dcu: goto label_2bb6dc;
        case 0x2bb6e0u: goto label_2bb6e0;
        case 0x2bb6e4u: goto label_2bb6e4;
        case 0x2bb6e8u: goto label_2bb6e8;
        case 0x2bb6ecu: goto label_2bb6ec;
        case 0x2bb6f0u: goto label_2bb6f0;
        case 0x2bb6f4u: goto label_2bb6f4;
        case 0x2bb6f8u: goto label_2bb6f8;
        case 0x2bb6fcu: goto label_2bb6fc;
        case 0x2bb700u: goto label_2bb700;
        case 0x2bb704u: goto label_2bb704;
        case 0x2bb708u: goto label_2bb708;
        case 0x2bb70cu: goto label_2bb70c;
        case 0x2bb710u: goto label_2bb710;
        case 0x2bb714u: goto label_2bb714;
        case 0x2bb718u: goto label_2bb718;
        case 0x2bb71cu: goto label_2bb71c;
        case 0x2bb720u: goto label_2bb720;
        case 0x2bb724u: goto label_2bb724;
        case 0x2bb728u: goto label_2bb728;
        case 0x2bb72cu: goto label_2bb72c;
        case 0x2bb730u: goto label_2bb730;
        case 0x2bb734u: goto label_2bb734;
        case 0x2bb738u: goto label_2bb738;
        case 0x2bb73cu: goto label_2bb73c;
        case 0x2bb740u: goto label_2bb740;
        case 0x2bb744u: goto label_2bb744;
        case 0x2bb748u: goto label_2bb748;
        case 0x2bb74cu: goto label_2bb74c;
        case 0x2bb750u: goto label_2bb750;
        case 0x2bb754u: goto label_2bb754;
        case 0x2bb758u: goto label_2bb758;
        case 0x2bb75cu: goto label_2bb75c;
        case 0x2bb760u: goto label_2bb760;
        case 0x2bb764u: goto label_2bb764;
        case 0x2bb768u: goto label_2bb768;
        case 0x2bb76cu: goto label_2bb76c;
        case 0x2bb770u: goto label_2bb770;
        case 0x2bb774u: goto label_2bb774;
        case 0x2bb778u: goto label_2bb778;
        case 0x2bb77cu: goto label_2bb77c;
        case 0x2bb780u: goto label_2bb780;
        case 0x2bb784u: goto label_2bb784;
        case 0x2bb788u: goto label_2bb788;
        case 0x2bb78cu: goto label_2bb78c;
        case 0x2bb790u: goto label_2bb790;
        case 0x2bb794u: goto label_2bb794;
        case 0x2bb798u: goto label_2bb798;
        case 0x2bb79cu: goto label_2bb79c;
        case 0x2bb7a0u: goto label_2bb7a0;
        case 0x2bb7a4u: goto label_2bb7a4;
        case 0x2bb7a8u: goto label_2bb7a8;
        case 0x2bb7acu: goto label_2bb7ac;
        case 0x2bb7b0u: goto label_2bb7b0;
        case 0x2bb7b4u: goto label_2bb7b4;
        case 0x2bb7b8u: goto label_2bb7b8;
        case 0x2bb7bcu: goto label_2bb7bc;
        case 0x2bb7c0u: goto label_2bb7c0;
        case 0x2bb7c4u: goto label_2bb7c4;
        case 0x2bb7c8u: goto label_2bb7c8;
        case 0x2bb7ccu: goto label_2bb7cc;
        case 0x2bb7d0u: goto label_2bb7d0;
        case 0x2bb7d4u: goto label_2bb7d4;
        case 0x2bb7d8u: goto label_2bb7d8;
        case 0x2bb7dcu: goto label_2bb7dc;
        case 0x2bb7e0u: goto label_2bb7e0;
        case 0x2bb7e4u: goto label_2bb7e4;
        case 0x2bb7e8u: goto label_2bb7e8;
        case 0x2bb7ecu: goto label_2bb7ec;
        case 0x2bb7f0u: goto label_2bb7f0;
        case 0x2bb7f4u: goto label_2bb7f4;
        case 0x2bb7f8u: goto label_2bb7f8;
        case 0x2bb7fcu: goto label_2bb7fc;
        case 0x2bb800u: goto label_2bb800;
        case 0x2bb804u: goto label_2bb804;
        case 0x2bb808u: goto label_2bb808;
        case 0x2bb80cu: goto label_2bb80c;
        case 0x2bb810u: goto label_2bb810;
        case 0x2bb814u: goto label_2bb814;
        case 0x2bb818u: goto label_2bb818;
        case 0x2bb81cu: goto label_2bb81c;
        default: break;
    }

    ctx->pc = 0x2b92f0u;

label_2b92f0:
    // 0x2b92f0: 0x27bdfc10  addiu       $sp, $sp, -0x3F0
    ctx->pc = 0x2b92f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966288));
label_2b92f4:
    // 0x2b92f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2b92f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2b92f8:
    // 0x2b92f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2b92f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2b92fc:
    // 0x2b92fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2b92fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2b9300:
    // 0x2b9300: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2b9300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2b9304:
    // 0x2b9304: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2b9304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2b9308:
    // 0x2b9308: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2b9308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2b930c:
    // 0x2b930c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b930cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2b9310:
    // 0x2b9310: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b9310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2b9314:
    // 0x2b9314: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b9314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b9318:
    // 0x2b9318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b9318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b931c:
    // 0x2b931c: 0xafa403c0  sw          $a0, 0x3C0($sp)
    ctx->pc = 0x2b931cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 960), GPR_U32(ctx, 4));
label_2b9320:
    // 0x2b9320: 0xafa503d0  sw          $a1, 0x3D0($sp)
    ctx->pc = 0x2b9320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 976), GPR_U32(ctx, 5));
label_2b9324:
    // 0x2b9324: 0xafa603e0  sw          $a2, 0x3E0($sp)
    ctx->pc = 0x2b9324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 992), GPR_U32(ctx, 6));
label_2b9328:
    // 0x2b9328: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b9328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b932c:
    // 0x2b932c: 0xa3a303bf  sb          $v1, 0x3BF($sp)
    ctx->pc = 0x2b932cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 959), (uint8_t)GPR_U32(ctx, 3));
label_2b9330:
    // 0x2b9330: 0x8fa403e0  lw          $a0, 0x3E0($sp)
    ctx->pc = 0x2b9330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
label_2b9334:
    // 0x2b9334: 0xc09c3b8  jal         func_270EE0
label_2b9338:
    if (ctx->pc == 0x2B9338u) {
        ctx->pc = 0x2B933Cu;
        goto label_2b933c;
    }
    ctx->pc = 0x2B9334u;
    SET_GPR_U32(ctx, 31, 0x2B933Cu);
    ctx->pc = 0x270EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270EE0u, 0x2B9334u, 0x2B933Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B933Cu;
label_2b933c:
    // 0x2b933c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2b9340:
    if (ctx->pc == 0x2B9340u) {
        ctx->pc = 0x2B9344u;
        goto label_2b9344;
    }
    ctx->pc = 0x2B933Cu;
    {
        const bool branch_taken_0x2b933c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b933c) {
            ctx->pc = 0x2B9348u;
            goto label_2b9348;
        }
    }
    ctx->pc = 0x2B9344u;
label_2b9344:
    // 0x2b9344: 0xa3a003bf  sb          $zero, 0x3BF($sp)
    ctx->pc = 0x2b9344u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 959), (uint8_t)GPR_U32(ctx, 0));
label_2b9348:
    // 0x2b9348: 0x8fa403c0  lw          $a0, 0x3C0($sp)
    ctx->pc = 0x2b9348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2b934c:
    // 0x2b934c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x2b934cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_2b9350:
    // 0x2b9350: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2b9350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2b9354:
    // 0x2b9354: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2b9354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b9358:
    // 0x2b9358: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2b9358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2b935c:
    // 0x2b935c: 0xc085538  jal         func_2154E0
label_2b9360:
    if (ctx->pc == 0x2B9360u) {
        ctx->pc = 0x2B9364u;
        goto label_2b9364;
    }
    ctx->pc = 0x2B935Cu;
    SET_GPR_U32(ctx, 31, 0x2B9364u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B935Cu, 0x2B9364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9364u;
label_2b9364:
    // 0x2b9364: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b9364u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9368:
    // 0x2b9368: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b9368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b936c:
    // 0x2b936c: 0xc0480fc  jal         func_1203F0
label_2b9370:
    if (ctx->pc == 0x2B9370u) {
        ctx->pc = 0x2B9374u;
        goto label_2b9374;
    }
    ctx->pc = 0x2B936Cu;
    SET_GPR_U32(ctx, 31, 0x2B9374u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2B936Cu, 0x2B9374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9374u;
label_2b9374:
    // 0x2b9374: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2b9374u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9378:
    // 0x2b9378: 0xafa003a8  sw          $zero, 0x3A8($sp)
    ctx->pc = 0x2b9378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 936), GPR_U32(ctx, 0));
label_2b937c:
    // 0x2b937c: 0x8fb603c0  lw          $s6, 0x3C0($sp)
    ctx->pc = 0x2b937cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2b9380:
    // 0x2b9380: 0x8ec30024  lw          $v1, 0x24($s6)
    ctx->pc = 0x2b9380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_2b9384:
    // 0x2b9384: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2b9384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2b9388:
    // 0x2b9388: 0xafa503a4  sw          $a1, 0x3A4($sp)
    ctx->pc = 0x2b9388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 932), GPR_U32(ctx, 5));
label_2b938c:
    // 0x2b938c: 0x8fa203a4  lw          $v0, 0x3A4($sp)
    ctx->pc = 0x2b938cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 932)));
label_2b9390:
    // 0x2b9390: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2b9394:
    if (ctx->pc == 0x2B9394u) {
        ctx->pc = 0x2B9398u;
        goto label_2b9398;
    }
    ctx->pc = 0x2B9390u;
    {
        const bool branch_taken_0x2b9390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9390) {
            ctx->pc = 0x2B93B4u;
            goto label_2b93b4;
        }
    }
    ctx->pc = 0x2B9398u;
label_2b9398:
    // 0x2b9398: 0x8fa403c0  lw          $a0, 0x3C0($sp)
    ctx->pc = 0x2b9398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2b939c:
    // 0x2b939c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x2b939cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_2b93a0:
    // 0x2b93a0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2b93a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2b93a4:
    // 0x2b93a4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2b93a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2b93a8:
    // 0x2b93a8: 0xc085538  jal         func_2154E0
label_2b93ac:
    if (ctx->pc == 0x2B93ACu) {
        ctx->pc = 0x2B93B0u;
        goto label_2b93b0;
    }
    ctx->pc = 0x2B93A8u;
    SET_GPR_U32(ctx, 31, 0x2B93B0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B93A8u, 0x2B93B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B93B0u;
label_2b93b0:
    // 0x2b93b0: 0xafa203a8  sw          $v0, 0x3A8($sp)
    ctx->pc = 0x2b93b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 936), GPR_U32(ctx, 2));
label_2b93b4:
    // 0x2b93b4: 0xa3a003be  sb          $zero, 0x3BE($sp)
    ctx->pc = 0x2b93b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 958), (uint8_t)GPR_U32(ctx, 0));
label_2b93b8:
    // 0x2b93b8: 0xa3a003bd  sb          $zero, 0x3BD($sp)
    ctx->pc = 0x2b93b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 957), (uint8_t)GPR_U32(ctx, 0));
label_2b93bc:
    // 0x2b93bc: 0xa3a003bc  sb          $zero, 0x3BC($sp)
    ctx->pc = 0x2b93bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 956), (uint8_t)GPR_U32(ctx, 0));
label_2b93c0:
    // 0x2b93c0: 0xa3a003bb  sb          $zero, 0x3BB($sp)
    ctx->pc = 0x2b93c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 955), (uint8_t)GPR_U32(ctx, 0));
label_2b93c4:
    // 0x2b93c4: 0xa3a003ba  sb          $zero, 0x3BA($sp)
    ctx->pc = 0x2b93c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 954), (uint8_t)GPR_U32(ctx, 0));
label_2b93c8:
    // 0x2b93c8: 0xa3a003b9  sb          $zero, 0x3B9($sp)
    ctx->pc = 0x2b93c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 953), (uint8_t)GPR_U32(ctx, 0));
label_2b93cc:
    // 0x2b93cc: 0xa3a003b8  sb          $zero, 0x3B8($sp)
    ctx->pc = 0x2b93ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 952), (uint8_t)GPR_U32(ctx, 0));
label_2b93d0:
    // 0x2b93d0: 0xa3a003b7  sb          $zero, 0x3B7($sp)
    ctx->pc = 0x2b93d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 951), (uint8_t)GPR_U32(ctx, 0));
label_2b93d4:
    // 0x2b93d4: 0x8fa403d0  lw          $a0, 0x3D0($sp)
    ctx->pc = 0x2b93d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b93d8:
    // 0x2b93d8: 0xc048bb4  jal         func_122ED0
label_2b93dc:
    if (ctx->pc == 0x2B93DCu) {
        ctx->pc = 0x2B93E0u;
        goto label_2b93e0;
    }
    ctx->pc = 0x2B93D8u;
    SET_GPR_U32(ctx, 31, 0x2B93E0u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x2B93D8u, 0x2B93E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B93E0u;
label_2b93e0:
    // 0x2b93e0: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x2b93e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2b93e4:
    // 0x2b93e4: 0x1420017e  bnez        $at, . + 4 + (0x17E << 2)
label_2b93e8:
    if (ctx->pc == 0x2B93E8u) {
        ctx->pc = 0x2B93ECu;
        goto label_2b93ec;
    }
    ctx->pc = 0x2B93E4u;
    {
        const bool branch_taken_0x2b93e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b93e4) {
            ctx->pc = 0x2B99E0u;
            goto label_2b99e0;
        }
    }
    ctx->pc = 0x2B93ECu;
label_2b93ec:
    // 0x2b93ec: 0xa3a003b6  sb          $zero, 0x3B6($sp)
    ctx->pc = 0x2b93ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 950), (uint8_t)GPR_U32(ctx, 0));
label_2b93f0:
    // 0x2b93f0: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_2b93f4:
    if (ctx->pc == 0x2B93F4u) {
        ctx->pc = 0x2B93F8u;
        goto label_2b93f8;
    }
    ctx->pc = 0x2B93F0u;
    {
        const bool branch_taken_0x2b93f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b93f0) {
            ctx->pc = 0x2B967Cu;
            goto label_2b967c;
        }
    }
    ctx->pc = 0x2B93F8u;
label_2b93f8:
    // 0x2b93f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b93f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b93fc:
    // 0x2b93fc: 0xa3a203b6  sb          $v0, 0x3B6($sp)
    ctx->pc = 0x2b93fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 950), (uint8_t)GPR_U32(ctx, 2));
label_2b9400:
    // 0x2b9400: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b9400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9404:
    // 0x2b9404: 0x10000095  b           . + 4 + (0x95 << 2)
label_2b9408:
    if (ctx->pc == 0x2B9408u) {
        ctx->pc = 0x2B940Cu;
        goto label_2b940c;
    }
    ctx->pc = 0x2B9404u;
    {
        const bool branch_taken_0x2b9404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9404) {
            ctx->pc = 0x2B965Cu;
            goto label_2b965c;
        }
    }
    ctx->pc = 0x2B940Cu;
label_2b940c:
    // 0x2b940c: 0x8fa303d0  lw          $v1, 0x3D0($sp)
    ctx->pc = 0x2b940cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b9410:
    // 0x2b9410: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2b9410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b9414:
    // 0x2b9414: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b9414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9418:
    // 0x2b9418: 0xc068c94  jal         func_1A3250
label_2b941c:
    if (ctx->pc == 0x2B941Cu) {
        ctx->pc = 0x2B9420u;
        goto label_2b9420;
    }
    ctx->pc = 0x2B9418u;
    SET_GPR_U32(ctx, 31, 0x2B9420u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x2B9418u, 0x2B9420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9420u;
label_2b9420:
    // 0x2b9420: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b9420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b9424:
    // 0x2b9424: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9428:
    // 0x2b9428: 0x24050484  addiu       $a1, $zero, 0x484
    ctx->pc = 0x2b9428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1156));
label_2b942c:
    // 0x2b942c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b942cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9430:
    // 0x2b9430: 0xc040ab0  jal         func_102AC0
label_2b9434:
    if (ctx->pc == 0x2B9434u) {
        ctx->pc = 0x2B9438u;
        goto label_2b9438;
    }
    ctx->pc = 0x2B9430u;
    SET_GPR_U32(ctx, 31, 0x2B9438u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2B9430u, 0x2B9438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9438u;
label_2b9438:
    // 0x2b9438: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x2b9438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
label_2b943c:
    // 0x2b943c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2b943cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b9440:
    // 0x2b9440: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x2b9440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_2b9444:
    // 0x2b9444: 0x8fa403d0  lw          $a0, 0x3D0($sp)
    ctx->pc = 0x2b9444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b9448:
    // 0x2b9448: 0x7ba50130  lq          $a1, 0x130($sp)
    ctx->pc = 0x2b9448u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_2b944c:
    // 0x2b944c: 0xc068c94  jal         func_1A3250
label_2b9450:
    if (ctx->pc == 0x2B9450u) {
        ctx->pc = 0x2B9454u;
        goto label_2b9454;
    }
    ctx->pc = 0x2B944Cu;
    SET_GPR_U32(ctx, 31, 0x2B9454u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x2B944Cu, 0x2B9454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9454u;
label_2b9454:
    // 0x2b9454: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b9454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b9458:
    // 0x2b9458: 0x24020484  addiu       $v0, $zero, 0x484
    ctx->pc = 0x2b9458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1156));
label_2b945c:
    // 0x2b945c: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x2b945cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_2b9460:
    // 0x2b9460: 0x7ba50120  lq          $a1, 0x120($sp)
    ctx->pc = 0x2b9460u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_2b9464:
    // 0x2b9464: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b9464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9468:
    // 0x2b9468: 0xc040ab0  jal         func_102AC0
label_2b946c:
    if (ctx->pc == 0x2B946Cu) {
        ctx->pc = 0x2B9470u;
        goto label_2b9470;
    }
    ctx->pc = 0x2B9468u;
    SET_GPR_U32(ctx, 31, 0x2B9470u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2B9468u, 0x2B9470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9470u;
label_2b9470:
    // 0x2b9470: 0x7ba30140  lq          $v1, 0x140($sp)
    ctx->pc = 0x2b9470u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_2b9474:
    // 0x2b9474: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2b9474u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2b9478:
    // 0x2b9478: 0x14200058  bnez        $at, . + 4 + (0x58 << 2)
label_2b947c:
    if (ctx->pc == 0x2B947Cu) {
        ctx->pc = 0x2B9480u;
        goto label_2b9480;
    }
    ctx->pc = 0x2B9478u;
    {
        const bool branch_taken_0x2b9478 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9478) {
            ctx->pc = 0x2B95DCu;
            goto label_2b95dc;
        }
    }
    ctx->pc = 0x2B9480u;
label_2b9480:
    // 0x2b9480: 0x8fa503d0  lw          $a1, 0x3D0($sp)
    ctx->pc = 0x2b9480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b9484:
    // 0x2b9484: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b9484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b9488:
    // 0x2b9488: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b9488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b948c:
    // 0x2b948c: 0xc068c94  jal         func_1A3250
label_2b9490:
    if (ctx->pc == 0x2B9490u) {
        ctx->pc = 0x2B9494u;
        goto label_2b9494;
    }
    ctx->pc = 0x2B948Cu;
    SET_GPR_U32(ctx, 31, 0x2B9494u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x2B948Cu, 0x2B9494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9494u;
label_2b9494:
    // 0x2b9494: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b9494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b9498:
    // 0x2b9498: 0x24050484  addiu       $a1, $zero, 0x484
    ctx->pc = 0x2b9498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1156));
label_2b949c:
    // 0x2b949c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b949cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b94a0:
    // 0x2b94a0: 0xc040ab0  jal         func_102AC0
label_2b94a4:
    if (ctx->pc == 0x2B94A4u) {
        ctx->pc = 0x2B94A8u;
        goto label_2b94a8;
    }
    ctx->pc = 0x2B94A0u;
    SET_GPR_U32(ctx, 31, 0x2B94A8u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2B94A0u, 0x2B94A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B94A8u;
label_2b94a8:
    // 0x2b94a8: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x2b94a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_2b94ac:
    // 0x2b94ac: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x2b94acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b94b0:
    // 0x2b94b0: 0x8fa403d0  lw          $a0, 0x3D0($sp)
    ctx->pc = 0x2b94b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b94b4:
    // 0x2b94b4: 0xc068c94  jal         func_1A3250
label_2b94b8:
    if (ctx->pc == 0x2B94B8u) {
        ctx->pc = 0x2B94BCu;
        goto label_2b94bc;
    }
    ctx->pc = 0x2B94B4u;
    SET_GPR_U32(ctx, 31, 0x2B94BCu);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x2B94B4u, 0x2B94BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B94BCu;
label_2b94bc:
    // 0x2b94bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b94bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b94c0:
    // 0x2b94c0: 0x24050484  addiu       $a1, $zero, 0x484
    ctx->pc = 0x2b94c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1156));
label_2b94c4:
    // 0x2b94c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b94c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b94c8:
    // 0x2b94c8: 0xc040ab0  jal         func_102AC0
label_2b94cc:
    if (ctx->pc == 0x2B94CCu) {
        ctx->pc = 0x2B94D0u;
        goto label_2b94d0;
    }
    ctx->pc = 0x2B94C8u;
    SET_GPR_U32(ctx, 31, 0x2B94D0u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2B94C8u, 0x2B94D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B94D0u;
label_2b94d0:
    // 0x2b94d0: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x2b94d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2b94d4:
    // 0x2b94d4: 0x14620060  bne         $v1, $v0, . + 4 + (0x60 << 2)
label_2b94d8:
    if (ctx->pc == 0x2B94D8u) {
        ctx->pc = 0x2B94DCu;
        goto label_2b94dc;
    }
    ctx->pc = 0x2B94D4u;
    {
        const bool branch_taken_0x2b94d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b94d4) {
            ctx->pc = 0x2B9658u;
            goto label_2b9658;
        }
    }
    ctx->pc = 0x2B94DCu;
label_2b94dc:
    // 0x2b94dc: 0x8fa403d0  lw          $a0, 0x3D0($sp)
    ctx->pc = 0x2b94dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b94e0:
    // 0x2b94e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b94e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b94e4:
    // 0x2b94e4: 0xc068c94  jal         func_1A3250
label_2b94e8:
    if (ctx->pc == 0x2B94E8u) {
        ctx->pc = 0x2B94ECu;
        goto label_2b94ec;
    }
    ctx->pc = 0x2B94E4u;
    SET_GPR_U32(ctx, 31, 0x2B94ECu);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x2B94E4u, 0x2B94ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B94ECu;
label_2b94ec:
    // 0x2b94ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2b94ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b94f0:
    // 0x2b94f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b94f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b94f4:
    // 0x2b94f4: 0xc09d0b8  jal         func_2742E0
label_2b94f8:
    if (ctx->pc == 0x2B94F8u) {
        ctx->pc = 0x2B94FCu;
        goto label_2b94fc;
    }
    ctx->pc = 0x2B94F4u;
    SET_GPR_U32(ctx, 31, 0x2B94FCu);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2B94F4u, 0x2B94FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B94FCu;
label_2b94fc:
    // 0x2b94fc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2b94fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b9500:
    // 0x2b9500: 0x10440055  beq         $v0, $a0, . + 4 + (0x55 << 2)
label_2b9504:
    if (ctx->pc == 0x2B9504u) {
        ctx->pc = 0x2B9508u;
        goto label_2b9508;
    }
    ctx->pc = 0x2B9500u;
    {
        const bool branch_taken_0x2b9500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b9500) {
            ctx->pc = 0x2B9658u;
            goto label_2b9658;
        }
    }
    ctx->pc = 0x2B9508u;
label_2b9508:
    // 0x2b9508: 0x8fa503d0  lw          $a1, 0x3D0($sp)
    ctx->pc = 0x2b9508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b950c:
    // 0x2b950c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b950cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b9510:
    // 0x2b9510: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b9510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9514:
    // 0x2b9514: 0xc068c94  jal         func_1A3250
label_2b9518:
    if (ctx->pc == 0x2B9518u) {
        ctx->pc = 0x2B951Cu;
        goto label_2b951c;
    }
    ctx->pc = 0x2B9514u;
    SET_GPR_U32(ctx, 31, 0x2B951Cu);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x2B9514u, 0x2B951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B951Cu;
label_2b951c:
    // 0x2b951c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b951cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b9520:
    // 0x2b9520: 0xc09d0b8  jal         func_2742E0
label_2b9524:
    if (ctx->pc == 0x2B9524u) {
        ctx->pc = 0x2B9528u;
        goto label_2b9528;
    }
    ctx->pc = 0x2B9520u;
    SET_GPR_U32(ctx, 31, 0x2B9528u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2B9520u, 0x2B9528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9528u;
label_2b9528:
    // 0x2b9528: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2b9528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2b952c:
    // 0x2b952c: 0x1044004a  beq         $v0, $a0, . + 4 + (0x4A << 2)
label_2b9530:
    if (ctx->pc == 0x2B9530u) {
        ctx->pc = 0x2B9534u;
        goto label_2b9534;
    }
    ctx->pc = 0x2B952Cu;
    {
        const bool branch_taken_0x2b952c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b952c) {
            ctx->pc = 0x2B9658u;
            goto label_2b9658;
        }
    }
    ctx->pc = 0x2B9534u;
label_2b9534:
    // 0x2b9534: 0x8fa503d0  lw          $a1, 0x3D0($sp)
    ctx->pc = 0x2b9534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b9538:
    // 0x2b9538: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b9538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b953c:
    // 0x2b953c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b953cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9540:
    // 0x2b9540: 0xc068c94  jal         func_1A3250
label_2b9544:
    if (ctx->pc == 0x2B9544u) {
        ctx->pc = 0x2B9548u;
        goto label_2b9548;
    }
    ctx->pc = 0x2B9540u;
    SET_GPR_U32(ctx, 31, 0x2B9548u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x2B9540u, 0x2B9548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9548u;
label_2b9548:
    // 0x2b9548: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b9548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b954c:
    // 0x2b954c: 0xc09d0b8  jal         func_2742E0
label_2b9550:
    if (ctx->pc == 0x2B9550u) {
        ctx->pc = 0x2B9554u;
        goto label_2b9554;
    }
    ctx->pc = 0x2B954Cu;
    SET_GPR_U32(ctx, 31, 0x2B9554u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2B954Cu, 0x2B9554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9554u;
label_2b9554:
    // 0x2b9554: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2b9554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2b9558:
    // 0x2b9558: 0x1046003f  beq         $v0, $a2, . + 4 + (0x3F << 2)
label_2b955c:
    if (ctx->pc == 0x2B955Cu) {
        ctx->pc = 0x2B9560u;
        goto label_2b9560;
    }
    ctx->pc = 0x2B9558u;
    {
        const bool branch_taken_0x2b9558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x2b9558) {
            ctx->pc = 0x2B9658u;
            goto label_2b9658;
        }
    }
    ctx->pc = 0x2B9560u;
label_2b9560:
    // 0x2b9560: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x2b9560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b9564:
    // 0x2b9564: 0x8fa403d0  lw          $a0, 0x3D0($sp)
    ctx->pc = 0x2b9564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b9568:
    // 0x2b9568: 0xc068c94  jal         func_1A3250
label_2b956c:
    if (ctx->pc == 0x2B956Cu) {
        ctx->pc = 0x2B9570u;
        goto label_2b9570;
    }
    ctx->pc = 0x2B9568u;
    SET_GPR_U32(ctx, 31, 0x2B9570u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x2B9568u, 0x2B9570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9570u;
label_2b9570:
    // 0x2b9570: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2b9570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b9574:
    // 0x2b9574: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b9574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b9578:
    // 0x2b9578: 0xc09d0b8  jal         func_2742E0
label_2b957c:
    if (ctx->pc == 0x2B957Cu) {
        ctx->pc = 0x2B9580u;
        goto label_2b9580;
    }
    ctx->pc = 0x2B9578u;
    SET_GPR_U32(ctx, 31, 0x2B9580u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2B9578u, 0x2B9580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9580u;
label_2b9580:
    // 0x2b9580: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2b9580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b9584:
    // 0x2b9584: 0x10460015  beq         $v0, $a2, . + 4 + (0x15 << 2)
label_2b9588:
    if (ctx->pc == 0x2B9588u) {
        ctx->pc = 0x2B958Cu;
        goto label_2b958c;
    }
    ctx->pc = 0x2B9584u;
    {
        const bool branch_taken_0x2b9584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x2b9584) {
            ctx->pc = 0x2B95DCu;
            goto label_2b95dc;
        }
    }
    ctx->pc = 0x2B958Cu;
label_2b958c:
    // 0x2b958c: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x2b958cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b9590:
    // 0x2b9590: 0x8fa403d0  lw          $a0, 0x3D0($sp)
    ctx->pc = 0x2b9590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b9594:
    // 0x2b9594: 0xc068c94  jal         func_1A3250
label_2b9598:
    if (ctx->pc == 0x2B9598u) {
        ctx->pc = 0x2B959Cu;
        goto label_2b959c;
    }
    ctx->pc = 0x2B9594u;
    SET_GPR_U32(ctx, 31, 0x2B959Cu);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x2B9594u, 0x2B959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B959Cu;
label_2b959c:
    // 0x2b959c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b959cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b95a0:
    // 0x2b95a0: 0xc09d0b8  jal         func_2742E0
label_2b95a4:
    if (ctx->pc == 0x2B95A4u) {
        ctx->pc = 0x2B95A8u;
        goto label_2b95a8;
    }
    ctx->pc = 0x2B95A0u;
    SET_GPR_U32(ctx, 31, 0x2B95A8u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2B95A0u, 0x2B95A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B95A8u;
label_2b95a8:
    // 0x2b95a8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2b95a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2b95ac:
    // 0x2b95ac: 0x1044000b  beq         $v0, $a0, . + 4 + (0xB << 2)
label_2b95b0:
    if (ctx->pc == 0x2B95B0u) {
        ctx->pc = 0x2B95B4u;
        goto label_2b95b4;
    }
    ctx->pc = 0x2B95ACu;
    {
        const bool branch_taken_0x2b95ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b95ac) {
            ctx->pc = 0x2B95DCu;
            goto label_2b95dc;
        }
    }
    ctx->pc = 0x2B95B4u;
label_2b95b4:
    // 0x2b95b4: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x2b95b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b95b8:
    // 0x2b95b8: 0x8fa403d0  lw          $a0, 0x3D0($sp)
    ctx->pc = 0x2b95b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b95bc:
    // 0x2b95bc: 0xc068c94  jal         func_1A3250
label_2b95c0:
    if (ctx->pc == 0x2B95C0u) {
        ctx->pc = 0x2B95C4u;
        goto label_2b95c4;
    }
    ctx->pc = 0x2B95BCu;
    SET_GPR_U32(ctx, 31, 0x2B95C4u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x2B95BCu, 0x2B95C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B95C4u;
label_2b95c4:
    // 0x2b95c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b95c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b95c8:
    // 0x2b95c8: 0xc09d0b8  jal         func_2742E0
label_2b95cc:
    if (ctx->pc == 0x2B95CCu) {
        ctx->pc = 0x2B95D0u;
        goto label_2b95d0;
    }
    ctx->pc = 0x2B95C8u;
    SET_GPR_U32(ctx, 31, 0x2B95D0u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2B95C8u, 0x2B95D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B95D0u;
label_2b95d0:
    // 0x2b95d0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2b95d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2b95d4:
    // 0x2b95d4: 0x14430020  bne         $v0, $v1, . + 4 + (0x20 << 2)
label_2b95d8:
    if (ctx->pc == 0x2B95D8u) {
        ctx->pc = 0x2B95DCu;
        goto label_2b95dc;
    }
    ctx->pc = 0x2B95D4u;
    {
        const bool branch_taken_0x2b95d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b95d4) {
            ctx->pc = 0x2B9658u;
            goto label_2b9658;
        }
    }
    ctx->pc = 0x2B95DCu;
label_2b95dc:
    // 0x2b95dc: 0xa3a003b6  sb          $zero, 0x3B6($sp)
    ctx->pc = 0x2b95dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 950), (uint8_t)GPR_U32(ctx, 0));
label_2b95e0:
    // 0x2b95e0: 0x8fa303d0  lw          $v1, 0x3D0($sp)
    ctx->pc = 0x2b95e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b95e4:
    // 0x2b95e4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2b95e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b95e8:
    // 0x2b95e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b95e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b95ec:
    // 0x2b95ec: 0xc068c94  jal         func_1A3250
label_2b95f0:
    if (ctx->pc == 0x2B95F0u) {
        ctx->pc = 0x2B95F4u;
        goto label_2b95f4;
    }
    ctx->pc = 0x2B95ECu;
    SET_GPR_U32(ctx, 31, 0x2B95F4u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x2B95ECu, 0x2B95F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B95F4u;
label_2b95f4:
    // 0x2b95f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b95f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b95f8:
    // 0x2b95f8: 0xafa203a0  sw          $v0, 0x3A0($sp)
    ctx->pc = 0x2b95f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 928), GPR_U32(ctx, 2));
label_2b95fc:
    // 0x2b95fc: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x2b95fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b9600:
    // 0x2b9600: 0x8fa403d0  lw          $a0, 0x3D0($sp)
    ctx->pc = 0x2b9600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b9604:
    // 0x2b9604: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2b9604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b9608:
    // 0x2b9608: 0xc068c94  jal         func_1A3250
label_2b960c:
    if (ctx->pc == 0x2B960Cu) {
        ctx->pc = 0x2B9610u;
        goto label_2b9610;
    }
    ctx->pc = 0x2B9608u;
    SET_GPR_U32(ctx, 31, 0x2B9610u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x2B9608u, 0x2B9610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9610u;
label_2b9610:
    // 0x2b9610: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b9610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b9614:
    // 0x2b9614: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x2b9614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_2b9618:
    // 0x2b9618: 0x8fa503d0  lw          $a1, 0x3D0($sp)
    ctx->pc = 0x2b9618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b961c:
    // 0x2b961c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b961cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b9620:
    // 0x2b9620: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b9620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9624:
    // 0x2b9624: 0xc068c94  jal         func_1A3250
label_2b9628:
    if (ctx->pc == 0x2B9628u) {
        ctx->pc = 0x2B962Cu;
        goto label_2b962c;
    }
    ctx->pc = 0x2B9624u;
    SET_GPR_U32(ctx, 31, 0x2B962Cu);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x2B9624u, 0x2B962Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B962Cu;
label_2b962c:
    // 0x2b962c: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x2b962cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2b9630:
    // 0x2b9630: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b9630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2b9634:
    // 0x2b9634: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x2b9634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_2b9638:
    // 0x2b9638: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x2b9638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_2b963c:
    // 0x2b963c: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x2b963cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b9640:
    // 0x2b9640: 0x8fa703d0  lw          $a3, 0x3D0($sp)
    ctx->pc = 0x2b9640u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b9644:
    // 0x2b9644: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2b9644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b9648:
    // 0x2b9648: 0xc068c94  jal         func_1A3250
label_2b964c:
    if (ctx->pc == 0x2B964Cu) {
        ctx->pc = 0x2B9650u;
        goto label_2b9650;
    }
    ctx->pc = 0x2B9648u;
    SET_GPR_U32(ctx, 31, 0x2B9650u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x2B9648u, 0x2B9650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9650u;
label_2b9650:
    // 0x2b9650: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x2b9650u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2b9654:
    // 0x2b9654: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b9654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2b9658:
    // 0x2b9658: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b9658u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b965c:
    // 0x2b965c: 0x8fa503d0  lw          $a1, 0x3D0($sp)
    ctx->pc = 0x2b965cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b9660:
    // 0x2b9660: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b9660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b9664:
    // 0x2b9664: 0xc048bb4  jal         func_122ED0
label_2b9668:
    if (ctx->pc == 0x2B9668u) {
        ctx->pc = 0x2B966Cu;
        goto label_2b966c;
    }
    ctx->pc = 0x2B9664u;
    SET_GPR_U32(ctx, 31, 0x2B966Cu);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x2B9664u, 0x2B966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B966Cu;
label_2b966c:
    // 0x2b966c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b966cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2b9670:
    // 0x2b9670: 0x202202b  sltu        $a0, $s0, $v0
    ctx->pc = 0x2b9670u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b9674:
    // 0x2b9674: 0x1480ff65  bnez        $a0, . + 4 + (-0x9B << 2)
label_2b9678:
    if (ctx->pc == 0x2B9678u) {
        ctx->pc = 0x2B967Cu;
        goto label_2b967c;
    }
    ctx->pc = 0x2B9674u;
    {
        const bool branch_taken_0x2b9674 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9674) {
            ctx->pc = 0x2B940Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b940c;
        }
    }
    ctx->pc = 0x2B967Cu;
label_2b967c:
    // 0x2b967c: 0x93a203b6  lbu         $v0, 0x3B6($sp)
    ctx->pc = 0x2b967cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 950)));
label_2b9680:
    // 0x2b9680: 0x1040ff5d  beqz        $v0, . + 4 + (-0xA3 << 2)
label_2b9684:
    if (ctx->pc == 0x2B9684u) {
        ctx->pc = 0x2B9688u;
        goto label_2b9688;
    }
    ctx->pc = 0x2B9680u;
    {
        const bool branch_taken_0x2b9680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9680) {
            ctx->pc = 0x2B93F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b93f8;
        }
    }
    ctx->pc = 0x2B9688u;
label_2b9688:
    // 0x2b9688: 0xafa0039c  sw          $zero, 0x39C($sp)
    ctx->pc = 0x2b9688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 924), GPR_U32(ctx, 0));
label_2b968c:
    // 0x2b968c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b968cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9690:
    // 0x2b9690: 0x10000055  b           . + 4 + (0x55 << 2)
label_2b9694:
    if (ctx->pc == 0x2B9694u) {
        ctx->pc = 0x2B9698u;
        goto label_2b9698;
    }
    ctx->pc = 0x2B9690u;
    {
        const bool branch_taken_0x2b9690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9690) {
            ctx->pc = 0x2B97E8u;
            goto label_2b97e8;
        }
    }
    ctx->pc = 0x2B9698u;
label_2b9698:
    // 0x2b9698: 0x8fa403d0  lw          $a0, 0x3D0($sp)
    ctx->pc = 0x2b9698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b969c:
    // 0x2b969c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b969cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b96a0:
    // 0x2b96a0: 0xc068c94  jal         func_1A3250
label_2b96a4:
    if (ctx->pc == 0x2B96A4u) {
        ctx->pc = 0x2B96A8u;
        goto label_2b96a8;
    }
    ctx->pc = 0x2B96A0u;
    SET_GPR_U32(ctx, 31, 0x2B96A8u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x2B96A0u, 0x2B96A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B96A8u;
label_2b96a8:
    // 0x2b96a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b96a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b96ac:
    // 0x2b96ac: 0xc09d0b8  jal         func_2742E0
label_2b96b0:
    if (ctx->pc == 0x2B96B0u) {
        ctx->pc = 0x2B96B4u;
        goto label_2b96b4;
    }
    ctx->pc = 0x2B96ACu;
    SET_GPR_U32(ctx, 31, 0x2B96B4u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2B96ACu, 0x2B96B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B96B4u;
label_2b96b4:
    // 0x2b96b4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2b96b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b96b8:
    // 0x2b96b8: 0x1444004a  bne         $v0, $a0, . + 4 + (0x4A << 2)
label_2b96bc:
    if (ctx->pc == 0x2B96BCu) {
        ctx->pc = 0x2B96C0u;
        goto label_2b96c0;
    }
    ctx->pc = 0x2B96B8u;
    {
        const bool branch_taken_0x2b96b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2b96b8) {
            ctx->pc = 0x2B97E4u;
            goto label_2b97e4;
        }
    }
    ctx->pc = 0x2B96C0u;
label_2b96c0:
    // 0x2b96c0: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x2b96c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2b96c4:
    // 0x2b96c4: 0x8fa403d0  lw          $a0, 0x3D0($sp)
    ctx->pc = 0x2b96c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b96c8:
    // 0x2b96c8: 0xc068c94  jal         func_1A3250
label_2b96cc:
    if (ctx->pc == 0x2B96CCu) {
        ctx->pc = 0x2B96D0u;
        goto label_2b96d0;
    }
    ctx->pc = 0x2B96C8u;
    SET_GPR_U32(ctx, 31, 0x2B96D0u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x2B96C8u, 0x2B96D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B96D0u;
label_2b96d0:
    // 0x2b96d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2b96d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b96d4:
    // 0x2b96d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b96d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b96d8:
    // 0x2b96d8: 0xc09d0b8  jal         func_2742E0
label_2b96dc:
    if (ctx->pc == 0x2B96DCu) {
        ctx->pc = 0x2B96E0u;
        goto label_2b96e0;
    }
    ctx->pc = 0x2B96D8u;
    SET_GPR_U32(ctx, 31, 0x2B96E0u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2B96D8u, 0x2B96E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B96E0u;
label_2b96e0:
    // 0x2b96e0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2b96e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b96e4:
    // 0x2b96e4: 0x1444003f  bne         $v0, $a0, . + 4 + (0x3F << 2)
label_2b96e8:
    if (ctx->pc == 0x2B96E8u) {
        ctx->pc = 0x2B96ECu;
        goto label_2b96ec;
    }
    ctx->pc = 0x2B96E4u;
    {
        const bool branch_taken_0x2b96e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2b96e4) {
            ctx->pc = 0x2B97E4u;
            goto label_2b97e4;
        }
    }
    ctx->pc = 0x2B96ECu;
label_2b96ec:
    // 0x2b96ec: 0x8fa503d0  lw          $a1, 0x3D0($sp)
    ctx->pc = 0x2b96ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b96f0:
    // 0x2b96f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b96f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b96f4:
    // 0x2b96f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b96f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b96f8:
    // 0x2b96f8: 0xc068c94  jal         func_1A3250
label_2b96fc:
    if (ctx->pc == 0x2B96FCu) {
        ctx->pc = 0x2B9700u;
        goto label_2b9700;
    }
    ctx->pc = 0x2B96F8u;
    SET_GPR_U32(ctx, 31, 0x2B9700u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x2B96F8u, 0x2B9700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9700u;
label_2b9700:
    // 0x2b9700: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b9700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b9704:
    // 0x2b9704: 0xc09d0d0  jal         func_274340
label_2b9708:
    if (ctx->pc == 0x2B9708u) {
        ctx->pc = 0x2B970Cu;
        goto label_2b970c;
    }
    ctx->pc = 0x2B9704u;
    SET_GPR_U32(ctx, 31, 0x2B970Cu);
    ctx->pc = 0x274340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274340u, 0x2B9704u, 0x2B970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B970Cu;
label_2b970c:
    // 0x2b970c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2b970cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_2b9710:
    // 0x2b9710: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x2b9710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2b9714:
    // 0x2b9714: 0x8fa303d0  lw          $v1, 0x3D0($sp)
    ctx->pc = 0x2b9714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b9718:
    // 0x2b9718: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2b9718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b971c:
    // 0x2b971c: 0xc068c94  jal         func_1A3250
label_2b9720:
    if (ctx->pc == 0x2B9720u) {
        ctx->pc = 0x2B9724u;
        goto label_2b9724;
    }
    ctx->pc = 0x2B971Cu;
    SET_GPR_U32(ctx, 31, 0x2B9724u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x2B971Cu, 0x2B9724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9724u;
label_2b9724:
    // 0x2b9724: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b9724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b9728:
    // 0x2b9728: 0xc09d0d0  jal         func_274340
label_2b972c:
    if (ctx->pc == 0x2B972Cu) {
        ctx->pc = 0x2B9730u;
        goto label_2b9730;
    }
    ctx->pc = 0x2B9728u;
    SET_GPR_U32(ctx, 31, 0x2B9730u);
    ctx->pc = 0x274340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274340u, 0x2B9728u, 0x2B9730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9730u;
label_2b9730:
    // 0x2b9730: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x2b9730u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2b9734:
    // 0x2b9734: 0x1462002b  bne         $v1, $v0, . + 4 + (0x2B << 2)
label_2b9738:
    if (ctx->pc == 0x2B9738u) {
        ctx->pc = 0x2B973Cu;
        goto label_2b973c;
    }
    ctx->pc = 0x2B9734u;
    {
        const bool branch_taken_0x2b9734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9734) {
            ctx->pc = 0x2B97E4u;
            goto label_2b97e4;
        }
    }
    ctx->pc = 0x2B973Cu;
label_2b973c:
    // 0x2b973c: 0x8fa403d0  lw          $a0, 0x3D0($sp)
    ctx->pc = 0x2b973cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b9740:
    // 0x2b9740: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b9740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b9744:
    // 0x2b9744: 0xc068c94  jal         func_1A3250
label_2b9748:
    if (ctx->pc == 0x2B9748u) {
        ctx->pc = 0x2B974Cu;
        goto label_2b974c;
    }
    ctx->pc = 0x2B9744u;
    SET_GPR_U32(ctx, 31, 0x2B974Cu);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x2B9744u, 0x2B974Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B974Cu;
label_2b974c:
    // 0x2b974c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b974cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b9750:
    // 0x2b9750: 0x24050483  addiu       $a1, $zero, 0x483
    ctx->pc = 0x2b9750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
label_2b9754:
    // 0x2b9754: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b9754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9758:
    // 0x2b9758: 0xc04146c  jal         func_1051B0
label_2b975c:
    if (ctx->pc == 0x2B975Cu) {
        ctx->pc = 0x2B9760u;
        goto label_2b9760;
    }
    ctx->pc = 0x2B9758u;
    SET_GPR_U32(ctx, 31, 0x2B9760u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2B9758u, 0x2B9760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9760u;
label_2b9760:
    // 0x2b9760: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b9760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b9764:
    // 0x2b9764: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2b9764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_2b9768:
    // 0x2b9768: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x2b9768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2b976c:
    // 0x2b976c: 0x8fa403d0  lw          $a0, 0x3D0($sp)
    ctx->pc = 0x2b976cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b9770:
    // 0x2b9770: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2b9770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b9774:
    // 0x2b9774: 0xc068c94  jal         func_1A3250
label_2b9778:
    if (ctx->pc == 0x2B9778u) {
        ctx->pc = 0x2B977Cu;
        goto label_2b977c;
    }
    ctx->pc = 0x2B9774u;
    SET_GPR_U32(ctx, 31, 0x2B977Cu);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x2B9774u, 0x2B977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B977Cu;
label_2b977c:
    // 0x2b977c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2b977cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b9780:
    // 0x2b9780: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2b9780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b9784:
    // 0x2b9784: 0x24020483  addiu       $v0, $zero, 0x483
    ctx->pc = 0x2b9784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
label_2b9788:
    // 0x2b9788: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2b9788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_2b978c:
    // 0x2b978c: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x2b978cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2b9790:
    // 0x2b9790: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b9790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9794:
    // 0x2b9794: 0xc04146c  jal         func_1051B0
label_2b9798:
    if (ctx->pc == 0x2B9798u) {
        ctx->pc = 0x2B979Cu;
        goto label_2b979c;
    }
    ctx->pc = 0x2B9794u;
    SET_GPR_U32(ctx, 31, 0x2B979Cu);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2B9794u, 0x2B979Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B979Cu;
label_2b979c:
    // 0x2b979c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2b979cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b97a0:
    // 0x2b97a0: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x2b97a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2b97a4:
    // 0x2b97a4: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
label_2b97a8:
    if (ctx->pc == 0x2B97A8u) {
        ctx->pc = 0x2B97ACu;
        goto label_2b97ac;
    }
    ctx->pc = 0x2B97A4u;
    {
        const bool branch_taken_0x2b97a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b97a4) {
            ctx->pc = 0x2B97E4u;
            goto label_2b97e4;
        }
    }
    ctx->pc = 0x2B97ACu;
label_2b97ac:
    // 0x2b97ac: 0x8fa4039c  lw          $a0, 0x39C($sp)
    ctx->pc = 0x2b97acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 924)));
label_2b97b0:
    // 0x2b97b0: 0x1404000c  bne         $zero, $a0, . + 4 + (0xC << 2)
label_2b97b4:
    if (ctx->pc == 0x2B97B4u) {
        ctx->pc = 0x2B97B8u;
        goto label_2b97b8;
    }
    ctx->pc = 0x2B97B0u;
    {
        const bool branch_taken_0x2b97b0 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 4));
        if (branch_taken_0x2b97b0) {
            ctx->pc = 0x2B97E4u;
            goto label_2b97e4;
        }
    }
    ctx->pc = 0x2B97B8u;
label_2b97b8:
    // 0x2b97b8: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x2b97b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2b97bc:
    // 0x2b97bc: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x2b97bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2b97c0:
    // 0x2b97c0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2b97c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2b97c4:
    // 0x2b97c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b97c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b97c8:
    // 0x2b97c8: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x2b97c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2b97cc:
    // 0x2b97cc: 0x8fa303d0  lw          $v1, 0x3D0($sp)
    ctx->pc = 0x2b97ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b97d0:
    // 0x2b97d0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2b97d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b97d4:
    // 0x2b97d4: 0xc068c94  jal         func_1A3250
label_2b97d8:
    if (ctx->pc == 0x2B97D8u) {
        ctx->pc = 0x2B97DCu;
        goto label_2b97dc;
    }
    ctx->pc = 0x2B97D4u;
    SET_GPR_U32(ctx, 31, 0x2B97DCu);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x2B97D4u, 0x2B97DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B97DCu;
label_2b97dc:
    // 0x2b97dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b97dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b97e0:
    // 0x2b97e0: 0xafa4039c  sw          $a0, 0x39C($sp)
    ctx->pc = 0x2b97e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 924), GPR_U32(ctx, 4));
label_2b97e4:
    // 0x2b97e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b97e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2b97e8:
    // 0x2b97e8: 0x8fa503d0  lw          $a1, 0x3D0($sp)
    ctx->pc = 0x2b97e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b97ec:
    // 0x2b97ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b97ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b97f0:
    // 0x2b97f0: 0xc048bb4  jal         func_122ED0
label_2b97f4:
    if (ctx->pc == 0x2B97F4u) {
        ctx->pc = 0x2B97F8u;
        goto label_2b97f8;
    }
    ctx->pc = 0x2B97F0u;
    SET_GPR_U32(ctx, 31, 0x2B97F8u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x2B97F0u, 0x2B97F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B97F8u;
label_2b97f8:
    // 0x2b97f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b97f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2b97fc:
    // 0x2b97fc: 0x242202b  sltu        $a0, $s2, $v0
    ctx->pc = 0x2b97fcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b9800:
    // 0x2b9800: 0x1480ffa5  bnez        $a0, . + 4 + (-0x5B << 2)
label_2b9804:
    if (ctx->pc == 0x2B9804u) {
        ctx->pc = 0x2B9808u;
        goto label_2b9808;
    }
    ctx->pc = 0x2B9800u;
    {
        const bool branch_taken_0x2b9800 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9800) {
            ctx->pc = 0x2B9698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9698;
        }
    }
    ctx->pc = 0x2B9808u;
label_2b9808:
    // 0x2b9808: 0x8fa2039c  lw          $v0, 0x39C($sp)
    ctx->pc = 0x2b9808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 924)));
label_2b980c:
    // 0x2b980c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2b9810:
    if (ctx->pc == 0x2B9810u) {
        ctx->pc = 0x2B9814u;
        goto label_2b9814;
    }
    ctx->pc = 0x2B980Cu;
    {
        const bool branch_taken_0x2b980c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b980c) {
            ctx->pc = 0x2B9860u;
            goto label_2b9860;
        }
    }
    ctx->pc = 0x2B9814u;
label_2b9814:
    // 0x2b9814: 0x8fa403d0  lw          $a0, 0x3D0($sp)
    ctx->pc = 0x2b9814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b9818:
    // 0x2b9818: 0xc041a60  jal         func_106980
label_2b981c:
    if (ctx->pc == 0x2B981Cu) {
        ctx->pc = 0x2B9820u;
        goto label_2b9820;
    }
    ctx->pc = 0x2B9818u;
    SET_GPR_U32(ctx, 31, 0x2B9820u);
    ctx->pc = 0x106980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106980u, 0x2B9818u, 0x2B9820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9820u;
label_2b9820:
    // 0x2b9820: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2b9820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_2b9824:
    // 0x2b9824: 0x8fa503d0  lw          $a1, 0x3D0($sp)
    ctx->pc = 0x2b9824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b9828:
    // 0x2b9828: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b9828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b982c:
    // 0x2b982c: 0xc041a14  jal         func_106850
label_2b9830:
    if (ctx->pc == 0x2B9830u) {
        ctx->pc = 0x2B9834u;
        goto label_2b9834;
    }
    ctx->pc = 0x2B982Cu;
    SET_GPR_U32(ctx, 31, 0x2B9834u);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x2B982Cu, 0x2B9834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9834u;
label_2b9834:
    // 0x2b9834: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x2b9834u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2b9838:
    // 0x2b9838: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b9838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b983c:
    // 0x2b983c: 0x27a6039c  addiu       $a2, $sp, 0x39C
    ctx->pc = 0x2b983cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 924));
label_2b9840:
    // 0x2b9840: 0xc0aef44  jal         func_2BBD10
label_2b9844:
    if (ctx->pc == 0x2B9844u) {
        ctx->pc = 0x2B9848u;
        goto label_2b9848;
    }
    ctx->pc = 0x2B9840u;
    SET_GPR_U32(ctx, 31, 0x2B9848u);
    ctx->pc = 0x2BBD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBD10u, 0x2B9840u, 0x2B9848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9848u;
label_2b9848:
    // 0x2b9848: 0xafa20398  sw          $v0, 0x398($sp)
    ctx->pc = 0x2b9848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 920), GPR_U32(ctx, 2));
label_2b984c:
    // 0x2b984c: 0x8fa503d0  lw          $a1, 0x3D0($sp)
    ctx->pc = 0x2b984cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b9850:
    // 0x2b9850: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b9850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b9854:
    // 0x2b9854: 0x8fa50398  lw          $a1, 0x398($sp)
    ctx->pc = 0x2b9854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 920)));
label_2b9858:
    // 0x2b9858: 0xc0aee74  jal         func_2BB9D0
label_2b985c:
    if (ctx->pc == 0x2B985Cu) {
        ctx->pc = 0x2B9860u;
        goto label_2b9860;
    }
    ctx->pc = 0x2B9858u;
    SET_GPR_U32(ctx, 31, 0x2B9860u);
    ctx->pc = 0x2BB9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB9D0u, 0x2B9858u, 0x2B9860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9860u;
label_2b9860:
    // 0x2b9860: 0xa3a003b5  sb          $zero, 0x3B5($sp)
    ctx->pc = 0x2b9860u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 949), (uint8_t)GPR_U32(ctx, 0));
label_2b9864:
    // 0x2b9864: 0xa3a003b4  sb          $zero, 0x3B4($sp)
    ctx->pc = 0x2b9864u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 948), (uint8_t)GPR_U32(ctx, 0));
label_2b9868:
    // 0x2b9868: 0xa3a003b3  sb          $zero, 0x3B3($sp)
    ctx->pc = 0x2b9868u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 947), (uint8_t)GPR_U32(ctx, 0));
label_2b986c:
    // 0x2b986c: 0xa3a003b2  sb          $zero, 0x3B2($sp)
    ctx->pc = 0x2b986cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 946), (uint8_t)GPR_U32(ctx, 0));
label_2b9870:
    // 0x2b9870: 0xafa00394  sw          $zero, 0x394($sp)
    ctx->pc = 0x2b9870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 916), GPR_U32(ctx, 0));
label_2b9874:
    // 0x2b9874: 0x10000041  b           . + 4 + (0x41 << 2)
label_2b9878:
    if (ctx->pc == 0x2B9878u) {
        ctx->pc = 0x2B987Cu;
        goto label_2b987c;
    }
    ctx->pc = 0x2B9874u;
    {
        const bool branch_taken_0x2b9874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9874) {
            ctx->pc = 0x2B997Cu;
            goto label_2b997c;
        }
    }
    ctx->pc = 0x2B987Cu;
label_2b987c:
    // 0x2b987c: 0x8fa503d0  lw          $a1, 0x3D0($sp)
    ctx->pc = 0x2b987cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b9880:
    // 0x2b9880: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b9880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b9884:
    // 0x2b9884: 0x8fa30394  lw          $v1, 0x394($sp)
    ctx->pc = 0x2b9884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 916)));
label_2b9888:
    // 0x2b9888: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2b9888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b988c:
    // 0x2b988c: 0xc068c94  jal         func_1A3250
label_2b9890:
    if (ctx->pc == 0x2B9890u) {
        ctx->pc = 0x2B9894u;
        goto label_2b9894;
    }
    ctx->pc = 0x2B988Cu;
    SET_GPR_U32(ctx, 31, 0x2B9894u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x2B988Cu, 0x2B9894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9894u;
label_2b9894:
    // 0x2b9894: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b9894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b9898:
    // 0x2b9898: 0xafa20390  sw          $v0, 0x390($sp)
    ctx->pc = 0x2b9898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 912), GPR_U32(ctx, 2));
label_2b989c:
    // 0x2b989c: 0x8fa60390  lw          $a2, 0x390($sp)
    ctx->pc = 0x2b989cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
label_2b98a0:
    // 0x2b98a0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2b98a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b98a4:
    // 0x2b98a4: 0x240504ae  addiu       $a1, $zero, 0x4AE
    ctx->pc = 0x2b98a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1198));
label_2b98a8:
    // 0x2b98a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b98a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b98ac:
    // 0x2b98ac: 0xc040ab0  jal         func_102AC0
label_2b98b0:
    if (ctx->pc == 0x2B98B0u) {
        ctx->pc = 0x2B98B4u;
        goto label_2b98b4;
    }
    ctx->pc = 0x2B98ACu;
    SET_GPR_U32(ctx, 31, 0x2B98B4u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2B98ACu, 0x2B98B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B98B4u;
label_2b98b4:
    // 0x2b98b4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_2b98b8:
    if (ctx->pc == 0x2B98B8u) {
        ctx->pc = 0x2B98BCu;
        goto label_2b98bc;
    }
    ctx->pc = 0x2B98B4u;
    {
        const bool branch_taken_0x2b98b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b98b4) {
            ctx->pc = 0x2B98F8u;
            goto label_2b98f8;
        }
    }
    ctx->pc = 0x2B98BCu;
label_2b98bc:
    // 0x2b98bc: 0x8fa40390  lw          $a0, 0x390($sp)
    ctx->pc = 0x2b98bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
label_2b98c0:
    // 0x2b98c0: 0x24050483  addiu       $a1, $zero, 0x483
    ctx->pc = 0x2b98c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
label_2b98c4:
    // 0x2b98c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b98c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b98c8:
    // 0x2b98c8: 0xc04146c  jal         func_1051B0
label_2b98cc:
    if (ctx->pc == 0x2B98CCu) {
        ctx->pc = 0x2B98D0u;
        goto label_2b98d0;
    }
    ctx->pc = 0x2B98C8u;
    SET_GPR_U32(ctx, 31, 0x2B98D0u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2B98C8u, 0x2B98D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B98D0u;
label_2b98d0:
    // 0x2b98d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b98d4:
    if (ctx->pc == 0x2B98D4u) {
        ctx->pc = 0x2B98D8u;
        goto label_2b98d8;
    }
    ctx->pc = 0x2B98D0u;
    {
        const bool branch_taken_0x2b98d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b98d0) {
            ctx->pc = 0x2B98E8u;
            goto label_2b98e8;
        }
    }
    ctx->pc = 0x2B98D8u;
label_2b98d8:
    // 0x2b98d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b98d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b98dc:
    // 0x2b98dc: 0xa3a503b3  sb          $a1, 0x3B3($sp)
    ctx->pc = 0x2b98dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 947), (uint8_t)GPR_U32(ctx, 5));
label_2b98e0:
    // 0x2b98e0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2b98e4:
    if (ctx->pc == 0x2B98E4u) {
        ctx->pc = 0x2B98E8u;
        goto label_2b98e8;
    }
    ctx->pc = 0x2B98E0u;
    {
        const bool branch_taken_0x2b98e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b98e0) {
            ctx->pc = 0x2B9950u;
            goto label_2b9950;
        }
    }
    ctx->pc = 0x2B98E8u;
label_2b98e8:
    // 0x2b98e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b98e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b98ec:
    // 0x2b98ec: 0xa3a603b5  sb          $a2, 0x3B5($sp)
    ctx->pc = 0x2b98ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 949), (uint8_t)GPR_U32(ctx, 6));
label_2b98f0:
    // 0x2b98f0: 0x10000017  b           . + 4 + (0x17 << 2)
label_2b98f4:
    if (ctx->pc == 0x2B98F4u) {
        ctx->pc = 0x2B98F8u;
        goto label_2b98f8;
    }
    ctx->pc = 0x2B98F0u;
    {
        const bool branch_taken_0x2b98f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b98f0) {
            ctx->pc = 0x2B9950u;
            goto label_2b9950;
        }
    }
    ctx->pc = 0x2B98F8u;
label_2b98f8:
    // 0x2b98f8: 0x8fa30390  lw          $v1, 0x390($sp)
    ctx->pc = 0x2b98f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
label_2b98fc:
    // 0x2b98fc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2b98fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b9900:
    // 0x2b9900: 0x240504ae  addiu       $a1, $zero, 0x4AE
    ctx->pc = 0x2b9900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1198));
label_2b9904:
    // 0x2b9904: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b9904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9908:
    // 0x2b9908: 0xc040ab0  jal         func_102AC0
label_2b990c:
    if (ctx->pc == 0x2B990Cu) {
        ctx->pc = 0x2B9910u;
        goto label_2b9910;
    }
    ctx->pc = 0x2B9908u;
    SET_GPR_U32(ctx, 31, 0x2B9910u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2B9908u, 0x2B9910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9910u;
label_2b9910:
    // 0x2b9910: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b9910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b9914:
    // 0x2b9914: 0x1444000e  bne         $v0, $a0, . + 4 + (0xE << 2)
label_2b9918:
    if (ctx->pc == 0x2B9918u) {
        ctx->pc = 0x2B991Cu;
        goto label_2b991c;
    }
    ctx->pc = 0x2B9914u;
    {
        const bool branch_taken_0x2b9914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2b9914) {
            ctx->pc = 0x2B9950u;
            goto label_2b9950;
        }
    }
    ctx->pc = 0x2B991Cu;
label_2b991c:
    // 0x2b991c: 0x8fa40390  lw          $a0, 0x390($sp)
    ctx->pc = 0x2b991cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
label_2b9920:
    // 0x2b9920: 0x24050483  addiu       $a1, $zero, 0x483
    ctx->pc = 0x2b9920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
label_2b9924:
    // 0x2b9924: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b9924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9928:
    // 0x2b9928: 0xc04146c  jal         func_1051B0
label_2b992c:
    if (ctx->pc == 0x2B992Cu) {
        ctx->pc = 0x2B9930u;
        goto label_2b9930;
    }
    ctx->pc = 0x2B9928u;
    SET_GPR_U32(ctx, 31, 0x2B9930u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2B9928u, 0x2B9930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9930u;
label_2b9930:
    // 0x2b9930: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b9934:
    if (ctx->pc == 0x2B9934u) {
        ctx->pc = 0x2B9938u;
        goto label_2b9938;
    }
    ctx->pc = 0x2B9930u;
    {
        const bool branch_taken_0x2b9930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9930) {
            ctx->pc = 0x2B9948u;
            goto label_2b9948;
        }
    }
    ctx->pc = 0x2B9938u;
label_2b9938:
    // 0x2b9938: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b9938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b993c:
    // 0x2b993c: 0xa3a203b2  sb          $v0, 0x3B2($sp)
    ctx->pc = 0x2b993cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 946), (uint8_t)GPR_U32(ctx, 2));
label_2b9940:
    // 0x2b9940: 0x10000003  b           . + 4 + (0x3 << 2)
label_2b9944:
    if (ctx->pc == 0x2B9944u) {
        ctx->pc = 0x2B9948u;
        goto label_2b9948;
    }
    ctx->pc = 0x2B9940u;
    {
        const bool branch_taken_0x2b9940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9940) {
            ctx->pc = 0x2B9950u;
            goto label_2b9950;
        }
    }
    ctx->pc = 0x2B9948u;
label_2b9948:
    // 0x2b9948: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b9948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b994c:
    // 0x2b994c: 0xa3a503b4  sb          $a1, 0x3B4($sp)
    ctx->pc = 0x2b994cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 948), (uint8_t)GPR_U32(ctx, 5));
label_2b9950:
    // 0x2b9950: 0x8fa40390  lw          $a0, 0x390($sp)
    ctx->pc = 0x2b9950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
label_2b9954:
    // 0x2b9954: 0xc09d0b8  jal         func_2742E0
label_2b9958:
    if (ctx->pc == 0x2B9958u) {
        ctx->pc = 0x2B995Cu;
        goto label_2b995c;
    }
    ctx->pc = 0x2B9954u;
    SET_GPR_U32(ctx, 31, 0x2B995Cu);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2B9954u, 0x2B995Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B995Cu;
label_2b995c:
    // 0x2b995c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x2b995cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2b9960:
    // 0x2b9960: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
label_2b9964:
    if (ctx->pc == 0x2B9964u) {
        ctx->pc = 0x2B9968u;
        goto label_2b9968;
    }
    ctx->pc = 0x2B9960u;
    {
        const bool branch_taken_0x2b9960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2b9960) {
            ctx->pc = 0x2B9970u;
            goto label_2b9970;
        }
    }
    ctx->pc = 0x2B9968u;
label_2b9968:
    // 0x2b9968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b9968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b996c:
    // 0x2b996c: 0xa3a203ba  sb          $v0, 0x3BA($sp)
    ctx->pc = 0x2b996cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 954), (uint8_t)GPR_U32(ctx, 2));
label_2b9970:
    // 0x2b9970: 0x8fa40394  lw          $a0, 0x394($sp)
    ctx->pc = 0x2b9970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 916)));
label_2b9974:
    // 0x2b9974: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2b9974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2b9978:
    // 0x2b9978: 0xafa20394  sw          $v0, 0x394($sp)
    ctx->pc = 0x2b9978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 916), GPR_U32(ctx, 2));
label_2b997c:
    // 0x2b997c: 0x8fa20394  lw          $v0, 0x394($sp)
    ctx->pc = 0x2b997cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 916)));
label_2b9980:
    // 0x2b9980: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2b9980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_2b9984:
    // 0x2b9984: 0x8fa403d0  lw          $a0, 0x3D0($sp)
    ctx->pc = 0x2b9984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b9988:
    // 0x2b9988: 0xc048bb4  jal         func_122ED0
label_2b998c:
    if (ctx->pc == 0x2B998Cu) {
        ctx->pc = 0x2B9990u;
        goto label_2b9990;
    }
    ctx->pc = 0x2B9988u;
    SET_GPR_U32(ctx, 31, 0x2B9990u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x2B9988u, 0x2B9990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9990u;
label_2b9990:
    // 0x2b9990: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x2b9990u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2b9994:
    // 0x2b9994: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2b9994u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b9998:
    // 0x2b9998: 0x1460ffb8  bnez        $v1, . + 4 + (-0x48 << 2)
label_2b999c:
    if (ctx->pc == 0x2B999Cu) {
        ctx->pc = 0x2B99A0u;
        goto label_2b99a0;
    }
    ctx->pc = 0x2B9998u;
    {
        const bool branch_taken_0x2b9998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9998) {
            ctx->pc = 0x2B987Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b987c;
        }
    }
    ctx->pc = 0x2B99A0u;
label_2b99a0:
    // 0x2b99a0: 0x93a403b4  lbu         $a0, 0x3B4($sp)
    ctx->pc = 0x2b99a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 948)));
label_2b99a4:
    // 0x2b99a4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2b99a8:
    if (ctx->pc == 0x2B99A8u) {
        ctx->pc = 0x2B99ACu;
        goto label_2b99ac;
    }
    ctx->pc = 0x2B99A4u;
    {
        const bool branch_taken_0x2b99a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b99a4) {
            ctx->pc = 0x2B99C0u;
            goto label_2b99c0;
        }
    }
    ctx->pc = 0x2B99ACu;
label_2b99ac:
    // 0x2b99ac: 0x93a203b5  lbu         $v0, 0x3B5($sp)
    ctx->pc = 0x2b99acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 949)));
label_2b99b0:
    // 0x2b99b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2b99b4:
    if (ctx->pc == 0x2B99B4u) {
        ctx->pc = 0x2B99B8u;
        goto label_2b99b8;
    }
    ctx->pc = 0x2B99B0u;
    {
        const bool branch_taken_0x2b99b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b99b0) {
            ctx->pc = 0x2B99C0u;
            goto label_2b99c0;
        }
    }
    ctx->pc = 0x2B99B8u;
label_2b99b8:
    // 0x2b99b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b99b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b99bc:
    // 0x2b99bc: 0xa3a203bc  sb          $v0, 0x3BC($sp)
    ctx->pc = 0x2b99bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 956), (uint8_t)GPR_U32(ctx, 2));
label_2b99c0:
    // 0x2b99c0: 0x93a403b2  lbu         $a0, 0x3B2($sp)
    ctx->pc = 0x2b99c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 946)));
label_2b99c4:
    // 0x2b99c4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2b99c8:
    if (ctx->pc == 0x2B99C8u) {
        ctx->pc = 0x2B99CCu;
        goto label_2b99cc;
    }
    ctx->pc = 0x2B99C4u;
    {
        const bool branch_taken_0x2b99c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b99c4) {
            ctx->pc = 0x2B99E0u;
            goto label_2b99e0;
        }
    }
    ctx->pc = 0x2B99CCu;
label_2b99cc:
    // 0x2b99cc: 0x93a203b3  lbu         $v0, 0x3B3($sp)
    ctx->pc = 0x2b99ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 947)));
label_2b99d0:
    // 0x2b99d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2b99d4:
    if (ctx->pc == 0x2B99D4u) {
        ctx->pc = 0x2B99D8u;
        goto label_2b99d8;
    }
    ctx->pc = 0x2B99D0u;
    {
        const bool branch_taken_0x2b99d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b99d0) {
            ctx->pc = 0x2B99E0u;
            goto label_2b99e0;
        }
    }
    ctx->pc = 0x2B99D8u;
label_2b99d8:
    // 0x2b99d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b99d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b99dc:
    // 0x2b99dc: 0xa3a403bb  sb          $a0, 0x3BB($sp)
    ctx->pc = 0x2b99dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 955), (uint8_t)GPR_U32(ctx, 4));
label_2b99e0:
    // 0x2b99e0: 0x8fa403d0  lw          $a0, 0x3D0($sp)
    ctx->pc = 0x2b99e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b99e4:
    // 0x2b99e4: 0xc0aee68  jal         func_2BB9A0
label_2b99e8:
    if (ctx->pc == 0x2B99E8u) {
        ctx->pc = 0x2B99ECu;
        goto label_2b99ec;
    }
    ctx->pc = 0x2B99E4u;
    SET_GPR_U32(ctx, 31, 0x2B99ECu);
    ctx->pc = 0x2BB9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB9A0u, 0x2B99E4u, 0x2B99ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B99ECu;
label_2b99ec:
    // 0x2b99ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b99f0:
    if (ctx->pc == 0x2B99F0u) {
        ctx->pc = 0x2B99F4u;
        goto label_2b99f4;
    }
    ctx->pc = 0x2B99ECu;
    {
        const bool branch_taken_0x2b99ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b99ec) {
            ctx->pc = 0x2B9A04u;
            goto label_2b9a04;
        }
    }
    ctx->pc = 0x2B99F4u;
label_2b99f4:
    // 0x2b99f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2b99f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b99f8:
    // 0x2b99f8: 0xafa5031c  sw          $a1, 0x31C($sp)
    ctx->pc = 0x2b99f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 796), GPR_U32(ctx, 5));
label_2b99fc:
    // 0x2b99fc: 0x1000000a  b           . + 4 + (0xA << 2)
label_2b9a00:
    if (ctx->pc == 0x2B9A00u) {
        ctx->pc = 0x2B9A04u;
        goto label_2b9a04;
    }
    ctx->pc = 0x2B99FCu;
    {
        const bool branch_taken_0x2b99fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b99fc) {
            ctx->pc = 0x2B9A28u;
            goto label_2b9a28;
        }
    }
    ctx->pc = 0x2B9A04u;
label_2b9a04:
    // 0x2b9a04: 0x8fa403d0  lw          $a0, 0x3D0($sp)
    ctx->pc = 0x2b9a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b9a08:
    // 0x2b9a08: 0xc0aee5c  jal         func_2BB970
label_2b9a0c:
    if (ctx->pc == 0x2B9A0Cu) {
        ctx->pc = 0x2B9A10u;
        goto label_2b9a10;
    }
    ctx->pc = 0x2B9A08u;
    SET_GPR_U32(ctx, 31, 0x2B9A10u);
    ctx->pc = 0x2BB970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB970u, 0x2B9A08u, 0x2B9A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9A10u;
label_2b9a10:
    // 0x2b9a10: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b9a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b9a14:
    // 0x2b9a14: 0x24050484  addiu       $a1, $zero, 0x484
    ctx->pc = 0x2b9a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1156));
label_2b9a18:
    // 0x2b9a18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b9a18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9a1c:
    // 0x2b9a1c: 0xc040ab0  jal         func_102AC0
label_2b9a20:
    if (ctx->pc == 0x2B9A20u) {
        ctx->pc = 0x2B9A24u;
        goto label_2b9a24;
    }
    ctx->pc = 0x2B9A1Cu;
    SET_GPR_U32(ctx, 31, 0x2B9A24u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2B9A1Cu, 0x2B9A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9A24u;
label_2b9a24:
    // 0x2b9a24: 0xafa2031c  sw          $v0, 0x31C($sp)
    ctx->pc = 0x2b9a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 796), GPR_U32(ctx, 2));
label_2b9a28:
    // 0x2b9a28: 0x8fa2031c  lw          $v0, 0x31C($sp)
    ctx->pc = 0x2b9a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 796)));
label_2b9a2c:
    // 0x2b9a2c: 0xafa2038c  sw          $v0, 0x38C($sp)
    ctx->pc = 0x2b9a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 908), GPR_U32(ctx, 2));
label_2b9a30:
    // 0x2b9a30: 0x93a203bf  lbu         $v0, 0x3BF($sp)
    ctx->pc = 0x2b9a30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 959)));
label_2b9a34:
    // 0x2b9a34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2b9a38:
    if (ctx->pc == 0x2B9A38u) {
        ctx->pc = 0x2B9A3Cu;
        goto label_2b9a3c;
    }
    ctx->pc = 0x2B9A34u;
    {
        const bool branch_taken_0x2b9a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9a34) {
            ctx->pc = 0x2B9A48u;
            goto label_2b9a48;
        }
    }
    ctx->pc = 0x2B9A3Cu;
label_2b9a3c:
    // 0x2b9a3c: 0x8fa5038c  lw          $a1, 0x38C($sp)
    ctx->pc = 0x2b9a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 908)));
label_2b9a40:
    // 0x2b9a40: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2b9a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2b9a44:
    // 0x2b9a44: 0xafa2038c  sw          $v0, 0x38C($sp)
    ctx->pc = 0x2b9a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 908), GPR_U32(ctx, 2));
label_2b9a48:
    // 0x2b9a48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b9a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b9a4c:
    // 0x2b9a4c: 0xafa20388  sw          $v0, 0x388($sp)
    ctx->pc = 0x2b9a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 904), GPR_U32(ctx, 2));
label_2b9a50:
    // 0x2b9a50: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2b9a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b9a54:
    // 0x2b9a54: 0xafa40384  sw          $a0, 0x384($sp)
    ctx->pc = 0x2b9a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 900), GPR_U32(ctx, 4));
label_2b9a58:
    // 0x2b9a58: 0x8fa503d0  lw          $a1, 0x3D0($sp)
    ctx->pc = 0x2b9a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2b9a5c:
    // 0x2b9a5c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b9a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b9a60:
    // 0x2b9a60: 0xc041a60  jal         func_106980
label_2b9a64:
    if (ctx->pc == 0x2B9A64u) {
        ctx->pc = 0x2B9A68u;
        goto label_2b9a68;
    }
    ctx->pc = 0x2B9A60u;
    SET_GPR_U32(ctx, 31, 0x2B9A68u);
    ctx->pc = 0x106980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106980u, 0x2B9A60u, 0x2B9A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9A68u;
label_2b9a68:
    // 0x2b9a68: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2b9a68u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9a6c:
    // 0x2b9a6c: 0x100004c1  b           . + 4 + (0x4C1 << 2)
label_2b9a70:
    if (ctx->pc == 0x2B9A70u) {
        ctx->pc = 0x2B9A74u;
        goto label_2b9a74;
    }
    ctx->pc = 0x2B9A6Cu;
    {
        const bool branch_taken_0x2b9a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9a6c) {
            ctx->pc = 0x2BAD74u;
            goto label_2bad74;
        }
    }
    ctx->pc = 0x2B9A74u;
label_2b9a74:
    // 0x2b9a74: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2b9a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2b9a78:
    // 0x2b9a78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b9a78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9a7c:
    // 0x2b9a7c: 0xafa00380  sw          $zero, 0x380($sp)
    ctx->pc = 0x2b9a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 0));
label_2b9a80:
    // 0x2b9a80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9a84:
    // 0x2b9a84: 0xc09d0d0  jal         func_274340
label_2b9a88:
    if (ctx->pc == 0x2B9A88u) {
        ctx->pc = 0x2B9A8Cu;
        goto label_2b9a8c;
    }
    ctx->pc = 0x2B9A84u;
    SET_GPR_U32(ctx, 31, 0x2B9A8Cu);
    ctx->pc = 0x274340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274340u, 0x2B9A84u, 0x2B9A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9A8Cu;
label_2b9a8c:
    // 0x2b9a8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b9a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9a90:
    // 0x2b9a90: 0x8fa403c0  lw          $a0, 0x3C0($sp)
    ctx->pc = 0x2b9a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2b9a94:
    // 0x2b9a94: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2b9a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2b9a98:
    // 0x2b9a98: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x2b9a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2b9a9c:
    // 0x2b9a9c: 0xafa4037c  sw          $a0, 0x37C($sp)
    ctx->pc = 0x2b9a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 892), GPR_U32(ctx, 4));
label_2b9aa0:
    // 0x2b9aa0: 0x93a403bf  lbu         $a0, 0x3BF($sp)
    ctx->pc = 0x2b9aa0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 959)));
label_2b9aa4:
    // 0x2b9aa4: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_2b9aa8:
    if (ctx->pc == 0x2B9AA8u) {
        ctx->pc = 0x2B9AACu;
        goto label_2b9aac;
    }
    ctx->pc = 0x2B9AA4u;
    {
        const bool branch_taken_0x2b9aa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9aa4) {
            ctx->pc = 0x2B9AB8u;
            goto label_2b9ab8;
        }
    }
    ctx->pc = 0x2B9AACu;
label_2b9aac:
    // 0x2b9aac: 0x8fa2037c  lw          $v0, 0x37C($sp)
    ctx->pc = 0x2b9aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 892)));
label_2b9ab0:
    // 0x2b9ab0: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x2b9ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b9ab4:
    // 0x2b9ab4: 0xafa4037c  sw          $a0, 0x37C($sp)
    ctx->pc = 0x2b9ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 892), GPR_U32(ctx, 4));
label_2b9ab8:
    // 0x2b9ab8: 0xa3a003b1  sb          $zero, 0x3B1($sp)
    ctx->pc = 0x2b9ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 945), (uint8_t)GPR_U32(ctx, 0));
label_2b9abc:
    // 0x2b9abc: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x2b9abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2b9ac0:
    // 0x2b9ac0: 0xc09d0b8  jal         func_2742E0
label_2b9ac4:
    if (ctx->pc == 0x2B9AC4u) {
        ctx->pc = 0x2B9AC8u;
        goto label_2b9ac8;
    }
    ctx->pc = 0x2B9AC0u;
    SET_GPR_U32(ctx, 31, 0x2B9AC8u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2B9AC0u, 0x2B9AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9AC8u;
label_2b9ac8:
    // 0x2b9ac8: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x2b9ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2b9acc:
    // 0x2b9acc: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
label_2b9ad0:
    if (ctx->pc == 0x2B9AD0u) {
        ctx->pc = 0x2B9AD4u;
        goto label_2b9ad4;
    }
    ctx->pc = 0x2B9ACCu;
    {
        const bool branch_taken_0x2b9acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2b9acc) {
            ctx->pc = 0x2B9ADCu;
            goto label_2b9adc;
        }
    }
    ctx->pc = 0x2B9AD4u;
label_2b9ad4:
    // 0x2b9ad4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b9ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9ad8:
    // 0x2b9ad8: 0xa3a203b8  sb          $v0, 0x3B8($sp)
    ctx->pc = 0x2b9ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 952), (uint8_t)GPR_U32(ctx, 2));
label_2b9adc:
    // 0x2b9adc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9ae0:
    // 0x2b9ae0: 0x24050483  addiu       $a1, $zero, 0x483
    ctx->pc = 0x2b9ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
label_2b9ae4:
    // 0x2b9ae4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b9ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9ae8:
    // 0x2b9ae8: 0xc04146c  jal         func_1051B0
label_2b9aec:
    if (ctx->pc == 0x2B9AECu) {
        ctx->pc = 0x2B9AF0u;
        goto label_2b9af0;
    }
    ctx->pc = 0x2B9AE8u;
    SET_GPR_U32(ctx, 31, 0x2B9AF0u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2B9AE8u, 0x2B9AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9AF0u;
label_2b9af0:
    // 0x2b9af0: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x2b9af0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b9af4:
    // 0x2b9af4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9af8:
    // 0x2b9af8: 0xc09d0b8  jal         func_2742E0
label_2b9afc:
    if (ctx->pc == 0x2B9AFCu) {
        ctx->pc = 0x2B9B00u;
        goto label_2b9b00;
    }
    ctx->pc = 0x2B9AF8u;
    SET_GPR_U32(ctx, 31, 0x2B9B00u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2B9AF8u, 0x2B9B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9B00u;
label_2b9b00:
    // 0x2b9b00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9b04:
    // 0x2b9b04: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2b9b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_2b9b08:
    // 0x2b9b08: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
label_2b9b0c:
    if (ctx->pc == 0x2B9B0Cu) {
        ctx->pc = 0x2B9B10u;
        goto label_2b9b10;
    }
    ctx->pc = 0x2B9B08u;
    {
        const bool branch_taken_0x2b9b08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9b08) {
            ctx->pc = 0x2B9B14u;
            goto label_2b9b14;
        }
    }
    ctx->pc = 0x2B9B10u;
label_2b9b10:
    // 0x2b9b10: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2b9b10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9b14:
    // 0x2b9b14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9b18:
    // 0x2b9b18: 0xc09d0b8  jal         func_2742E0
label_2b9b1c:
    if (ctx->pc == 0x2B9B1Cu) {
        ctx->pc = 0x2B9B20u;
        goto label_2b9b20;
    }
    ctx->pc = 0x2B9B18u;
    SET_GPR_U32(ctx, 31, 0x2B9B20u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2B9B18u, 0x2B9B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9B20u;
label_2b9b20:
    // 0x2b9b20: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2b9b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2b9b24:
    // 0x2b9b24: 0x14440020  bne         $v0, $a0, . + 4 + (0x20 << 2)
label_2b9b28:
    if (ctx->pc == 0x2B9B28u) {
        ctx->pc = 0x2B9B2Cu;
        goto label_2b9b2c;
    }
    ctx->pc = 0x2B9B24u;
    {
        const bool branch_taken_0x2b9b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2b9b24) {
            ctx->pc = 0x2B9BA8u;
            goto label_2b9ba8;
        }
    }
    ctx->pc = 0x2B9B2Cu;
label_2b9b2c:
    // 0x2b9b2c: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x2b9b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_2b9b30:
    // 0x2b9b30: 0x8fa403c0  lw          $a0, 0x3C0($sp)
    ctx->pc = 0x2b9b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2b9b34:
    // 0x2b9b34: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x2b9b34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_2b9b38:
    // 0x2b9b38: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2b9b38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b9b3c:
    // 0x2b9b3c: 0x1464000d  bne         $v1, $a0, . + 4 + (0xD << 2)
label_2b9b40:
    if (ctx->pc == 0x2B9B40u) {
        ctx->pc = 0x2B9B44u;
        goto label_2b9b44;
    }
    ctx->pc = 0x2B9B3Cu;
    {
        const bool branch_taken_0x2b9b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2b9b3c) {
            ctx->pc = 0x2B9B74u;
            goto label_2b9b74;
        }
    }
    ctx->pc = 0x2B9B44u;
label_2b9b44:
    // 0x2b9b44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b9b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b9b48:
    // 0x2b9b48: 0xc096874  jal         func_25A1D0
label_2b9b4c:
    if (ctx->pc == 0x2B9B4Cu) {
        ctx->pc = 0x2B9B50u;
        goto label_2b9b50;
    }
    ctx->pc = 0x2B9B48u;
    SET_GPR_U32(ctx, 31, 0x2B9B50u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x2B9B48u, 0x2B9B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9B50u;
label_2b9b50:
    // 0x2b9b50: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_2b9b54:
    if (ctx->pc == 0x2B9B54u) {
        ctx->pc = 0x2B9B58u;
        goto label_2b9b58;
    }
    ctx->pc = 0x2B9B50u;
    {
        const bool branch_taken_0x2b9b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9b50) {
            ctx->pc = 0x2B9BA8u;
            goto label_2b9ba8;
        }
    }
    ctx->pc = 0x2B9B58u;
label_2b9b58:
    // 0x2b9b58: 0x8fa303c0  lw          $v1, 0x3C0($sp)
    ctx->pc = 0x2b9b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2b9b5c:
    // 0x2b9b5c: 0x90650004  lbu         $a1, 0x4($v1)
    ctx->pc = 0x2b9b5cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_2b9b60:
    // 0x2b9b60: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x2b9b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2b9b64:
    // 0x2b9b64: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b9b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2b9b68:
    // 0x2b9b68: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x2b9b68u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b9b6c:
    // 0x2b9b6c: 0x1000000e  b           . + 4 + (0xE << 2)
label_2b9b70:
    if (ctx->pc == 0x2B9B70u) {
        ctx->pc = 0x2B9B74u;
        goto label_2b9b74;
    }
    ctx->pc = 0x2B9B6Cu;
    {
        const bool branch_taken_0x2b9b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9b6c) {
            ctx->pc = 0x2B9BA8u;
            goto label_2b9ba8;
        }
    }
    ctx->pc = 0x2B9B74u;
label_2b9b74:
    // 0x2b9b74: 0x8fa303a8  lw          $v1, 0x3A8($sp)
    ctx->pc = 0x2b9b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
label_2b9b78:
    // 0x2b9b78: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_2b9b7c:
    if (ctx->pc == 0x2B9B7Cu) {
        ctx->pc = 0x2B9B80u;
        goto label_2b9b80;
    }
    ctx->pc = 0x2B9B78u;
    {
        const bool branch_taken_0x2b9b78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9b78) {
            ctx->pc = 0x2B9BA8u;
            goto label_2b9ba8;
        }
    }
    ctx->pc = 0x2B9B80u;
label_2b9b80:
    // 0x2b9b80: 0x8fa503a8  lw          $a1, 0x3A8($sp)
    ctx->pc = 0x2b9b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
label_2b9b84:
    // 0x2b9b84: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b9b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b9b88:
    // 0x2b9b88: 0xc096874  jal         func_25A1D0
label_2b9b8c:
    if (ctx->pc == 0x2B9B8Cu) {
        ctx->pc = 0x2B9B90u;
        goto label_2b9b90;
    }
    ctx->pc = 0x2B9B88u;
    SET_GPR_U32(ctx, 31, 0x2B9B90u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x2B9B88u, 0x2B9B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9B90u;
label_2b9b90:
    // 0x2b9b90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b9b94:
    if (ctx->pc == 0x2B9B94u) {
        ctx->pc = 0x2B9B98u;
        goto label_2b9b98;
    }
    ctx->pc = 0x2B9B90u;
    {
        const bool branch_taken_0x2b9b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9b90) {
            ctx->pc = 0x2B9BA8u;
            goto label_2b9ba8;
        }
    }
    ctx->pc = 0x2B9B98u;
label_2b9b98:
    // 0x2b9b98: 0x8fa403c0  lw          $a0, 0x3C0($sp)
    ctx->pc = 0x2b9b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2b9b9c:
    // 0x2b9b9c: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x2b9b9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_2b9ba0:
    // 0x2b9ba0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2b9ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b9ba4:
    // 0x2b9ba4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2b9ba4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b9ba8:
    // 0x2b9ba8: 0x32c500ff  andi        $a1, $s6, 0xFF
    ctx->pc = 0x2b9ba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_2b9bac:
    // 0x2b9bac: 0x8fa203c0  lw          $v0, 0x3C0($sp)
    ctx->pc = 0x2b9bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2b9bb0:
    // 0x2b9bb0: 0x90440004  lbu         $a0, 0x4($v0)
    ctx->pc = 0x2b9bb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_2b9bb4:
    // 0x2b9bb4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2b9bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2b9bb8:
    // 0x2b9bb8: 0x14a203a4  bne         $a1, $v0, . + 4 + (0x3A4 << 2)
label_2b9bbc:
    if (ctx->pc == 0x2B9BBCu) {
        ctx->pc = 0x2B9BC0u;
        goto label_2b9bc0;
    }
    ctx->pc = 0x2B9BB8u;
    {
        const bool branch_taken_0x2b9bb8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9bb8) {
            ctx->pc = 0x2BAA4Cu;
            goto label_2baa4c;
        }
    }
    ctx->pc = 0x2B9BC0u;
label_2b9bc0:
    // 0x2b9bc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9bc4:
    // 0x2b9bc4: 0xc09d0b8  jal         func_2742E0
label_2b9bc8:
    if (ctx->pc == 0x2B9BC8u) {
        ctx->pc = 0x2B9BCCu;
        goto label_2b9bcc;
    }
    ctx->pc = 0x2B9BC4u;
    SET_GPR_U32(ctx, 31, 0x2B9BCCu);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2B9BC4u, 0x2B9BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9BCCu;
label_2b9bcc:
    // 0x2b9bcc: 0x2c410029  sltiu       $at, $v0, 0x29
    ctx->pc = 0x2b9bccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
label_2b9bd0:
    // 0x2b9bd0: 0x1020039c  beqz        $at, . + 4 + (0x39C << 2)
label_2b9bd4:
    if (ctx->pc == 0x2B9BD4u) {
        ctx->pc = 0x2B9BD8u;
        goto label_2b9bd8;
    }
    ctx->pc = 0x2B9BD0u;
    {
        const bool branch_taken_0x2b9bd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9bd0) {
            ctx->pc = 0x2BAA44u;
            goto label_2baa44;
        }
    }
    ctx->pc = 0x2B9BD8u;
label_2b9bd8:
    // 0x2b9bd8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2b9bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2b9bdc:
    // 0x2b9bdc: 0x24638c10  addiu       $v1, $v1, -0x73F0
    ctx->pc = 0x2b9bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937616));
label_2b9be0:
    // 0x2b9be0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b9be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2b9be4:
    // 0x2b9be4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b9be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b9be8:
    // 0x2b9be8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2b9be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b9bec:
    // 0x2b9bec: 0xa00008  jr          $a1
label_2b9bf0:
    if (ctx->pc == 0x2B9BF0u) {
        ctx->pc = 0x2B9BF4u;
        goto label_2b9bf4;
    }
    ctx->pc = 0x2B9BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B9BF4u: goto label_2b9bf4;
            case 0x2B9C7Cu: goto label_2b9c7c;
            case 0x2B9CD4u: goto label_2b9cd4;
            case 0x2B9D34u: goto label_2b9d34;
            case 0x2B9D90u: goto label_2b9d90;
            case 0x2B9DE8u: goto label_2b9de8;
            case 0x2BA040u: goto label_2ba040;
            case 0x2BA098u: goto label_2ba098;
            case 0x2BA0ECu: goto label_2ba0ec;
            case 0x2BA150u: goto label_2ba150;
            case 0x2BA1CCu: goto label_2ba1cc;
            case 0x2BA22Cu: goto label_2ba22c;
            case 0x2BA284u: goto label_2ba284;
            case 0x2BA2D8u: goto label_2ba2d8;
            case 0x2BA330u: goto label_2ba330;
            case 0x2BA384u: goto label_2ba384;
            case 0x2BA3D8u: goto label_2ba3d8;
            case 0x2BA428u: goto label_2ba428;
            case 0x2BA484u: goto label_2ba484;
            case 0x2BA4E0u: goto label_2ba4e0;
            case 0x2BA534u: goto label_2ba534;
            case 0x2BA59Cu: goto label_2ba59c;
            case 0x2BA5F4u: goto label_2ba5f4;
            case 0x2BA654u: goto label_2ba654;
            case 0x2BA6A8u: goto label_2ba6a8;
            case 0x2BA710u: goto label_2ba710;
            case 0x2BA770u: goto label_2ba770;
            case 0x2BA7C4u: goto label_2ba7c4;
            case 0x2BA828u: goto label_2ba828;
            case 0x2BA884u: goto label_2ba884;
            case 0x2BA8D8u: goto label_2ba8d8;
            case 0x2BA92Cu: goto label_2ba92c;
            case 0x2BA98Cu: goto label_2ba98c;
            case 0x2BA9E4u: goto label_2ba9e4;
            case 0x2BAA44u: goto label_2baa44;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9BECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B9BF4u;
label_2b9bf4:
    // 0x2b9bf4: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x2b9bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2b9bf8:
    // 0x2b9bf8: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x2b9bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
label_2b9bfc:
    // 0x2b9bfc: 0x7ba40140  lq          $a0, 0x140($sp)
    ctx->pc = 0x2b9bfcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_2b9c00:
    // 0x2b9c00: 0xc119b68  jal         func_466DA0
label_2b9c04:
    if (ctx->pc == 0x2B9C04u) {
        ctx->pc = 0x2B9C08u;
        goto label_2b9c08;
    }
    ctx->pc = 0x2B9C00u;
    SET_GPR_U32(ctx, 31, 0x2B9C08u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2B9C00u, 0x2B9C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9C08u;
label_2b9c08:
    // 0x2b9c08: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x2b9c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_2b9c0c:
    // 0x2b9c0c: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x2b9c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2b9c10:
    // 0x2b9c10: 0x7ba50130  lq          $a1, 0x130($sp)
    ctx->pc = 0x2b9c10u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_2b9c14:
    // 0x2b9c14: 0xc0400e0  jal         func_100380
label_2b9c18:
    if (ctx->pc == 0x2B9C18u) {
        ctx->pc = 0x2B9C1Cu;
        goto label_2b9c1c;
    }
    ctx->pc = 0x2B9C14u;
    SET_GPR_U32(ctx, 31, 0x2B9C1Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2B9C14u, 0x2B9C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9C1Cu;
label_2b9c1c:
    // 0x2b9c1c: 0xafa20318  sw          $v0, 0x318($sp)
    ctx->pc = 0x2b9c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 792), GPR_U32(ctx, 2));
label_2b9c20:
    // 0x2b9c20: 0x8fa40318  lw          $a0, 0x318($sp)
    ctx->pc = 0x2b9c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 792)));
label_2b9c24:
    // 0x2b9c24: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2b9c28:
    if (ctx->pc == 0x2B9C28u) {
        ctx->pc = 0x2B9C2Cu;
        goto label_2b9c2c;
    }
    ctx->pc = 0x2B9C24u;
    {
        const bool branch_taken_0x2b9c24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9c24) {
            ctx->pc = 0x2B9C44u;
            goto label_2b9c44;
        }
    }
    ctx->pc = 0x2B9C2Cu;
label_2b9c2c:
    // 0x2b9c2c: 0x8fa20318  lw          $v0, 0x318($sp)
    ctx->pc = 0x2b9c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 792)));
label_2b9c30:
    // 0x2b9c30: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x2b9c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_2b9c34:
    // 0x2b9c34: 0x7ba40120  lq          $a0, 0x120($sp)
    ctx->pc = 0x2b9c34u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_2b9c38:
    // 0x2b9c38: 0xc09db30  jal         func_276CC0
label_2b9c3c:
    if (ctx->pc == 0x2B9C3Cu) {
        ctx->pc = 0x2B9C40u;
        goto label_2b9c40;
    }
    ctx->pc = 0x2B9C38u;
    SET_GPR_U32(ctx, 31, 0x2B9C40u);
    ctx->pc = 0x276CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276CC0u, 0x2B9C38u, 0x2B9C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9C40u;
label_2b9c40:
    // 0x2b9c40: 0xafa20318  sw          $v0, 0x318($sp)
    ctx->pc = 0x2b9c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 792), GPR_U32(ctx, 2));
label_2b9c44:
    // 0x2b9c44: 0x8fa50318  lw          $a1, 0x318($sp)
    ctx->pc = 0x2b9c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 792)));
label_2b9c48:
    // 0x2b9c48: 0xafa50380  sw          $a1, 0x380($sp)
    ctx->pc = 0x2b9c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 5));
label_2b9c4c:
    // 0x2b9c4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9c50:
    // 0x2b9c50: 0x24020487  addiu       $v0, $zero, 0x487
    ctx->pc = 0x2b9c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1159));
label_2b9c54:
    // 0x2b9c54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b9c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9c58:
    // 0x2b9c58: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b9c58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9c5c:
    // 0x2b9c5c: 0xc040ab0  jal         func_102AC0
label_2b9c60:
    if (ctx->pc == 0x2B9C60u) {
        ctx->pc = 0x2B9C64u;
        goto label_2b9c64;
    }
    ctx->pc = 0x2B9C5Cu;
    SET_GPR_U32(ctx, 31, 0x2B9C64u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2B9C5Cu, 0x2B9C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9C64u;
label_2b9c64:
    // 0x2b9c64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9c68:
    // 0x2b9c68: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2b9c68u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b9c6c:
    // 0x2b9c6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b9c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9c70:
    // 0x2b9c70: 0xa3a503bd  sb          $a1, 0x3BD($sp)
    ctx->pc = 0x2b9c70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 957), (uint8_t)GPR_U32(ctx, 5));
label_2b9c74:
    // 0x2b9c74: 0x10000387  b           . + 4 + (0x387 << 2)
label_2b9c78:
    if (ctx->pc == 0x2B9C78u) {
        ctx->pc = 0x2B9C7Cu;
        goto label_2b9c7c;
    }
    ctx->pc = 0x2B9C74u;
    {
        const bool branch_taken_0x2b9c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9c74) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2B9C7Cu;
label_2b9c7c:
    // 0x2b9c7c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2b9c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2b9c80:
    // 0x2b9c80: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x2b9c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_2b9c84:
    // 0x2b9c84: 0x7ba40110  lq          $a0, 0x110($sp)
    ctx->pc = 0x2b9c84u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2b9c88:
    // 0x2b9c88: 0xc119b68  jal         func_466DA0
label_2b9c8c:
    if (ctx->pc == 0x2B9C8Cu) {
        ctx->pc = 0x2B9C90u;
        goto label_2b9c90;
    }
    ctx->pc = 0x2B9C88u;
    SET_GPR_U32(ctx, 31, 0x2B9C90u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2B9C88u, 0x2B9C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9C90u;
label_2b9c90:
    // 0x2b9c90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b9c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9c94:
    // 0x2b9c94: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x2b9c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2b9c98:
    // 0x2b9c98: 0xc0400e0  jal         func_100380
label_2b9c9c:
    if (ctx->pc == 0x2B9C9Cu) {
        ctx->pc = 0x2B9CA0u;
        goto label_2b9ca0;
    }
    ctx->pc = 0x2B9C98u;
    SET_GPR_U32(ctx, 31, 0x2B9CA0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2B9C98u, 0x2B9CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9CA0u;
label_2b9ca0:
    // 0x2b9ca0: 0xafa20314  sw          $v0, 0x314($sp)
    ctx->pc = 0x2b9ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 788), GPR_U32(ctx, 2));
label_2b9ca4:
    // 0x2b9ca4: 0x8fa40314  lw          $a0, 0x314($sp)
    ctx->pc = 0x2b9ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 788)));
label_2b9ca8:
    // 0x2b9ca8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2b9cac:
    if (ctx->pc == 0x2B9CACu) {
        ctx->pc = 0x2B9CB0u;
        goto label_2b9cb0;
    }
    ctx->pc = 0x2B9CA8u;
    {
        const bool branch_taken_0x2b9ca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9ca8) {
            ctx->pc = 0x2B9CC4u;
            goto label_2b9cc4;
        }
    }
    ctx->pc = 0x2B9CB0u;
label_2b9cb0:
    // 0x2b9cb0: 0x8fa50314  lw          $a1, 0x314($sp)
    ctx->pc = 0x2b9cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 788)));
label_2b9cb4:
    // 0x2b9cb4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b9cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b9cb8:
    // 0x2b9cb8: 0xc0b6bb4  jal         func_2DAED0
label_2b9cbc:
    if (ctx->pc == 0x2B9CBCu) {
        ctx->pc = 0x2B9CC0u;
        goto label_2b9cc0;
    }
    ctx->pc = 0x2B9CB8u;
    SET_GPR_U32(ctx, 31, 0x2B9CC0u);
    ctx->pc = 0x2DAED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAED0u, 0x2B9CB8u, 0x2B9CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9CC0u;
label_2b9cc0:
    // 0x2b9cc0: 0xafa20314  sw          $v0, 0x314($sp)
    ctx->pc = 0x2b9cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 788), GPR_U32(ctx, 2));
label_2b9cc4:
    // 0x2b9cc4: 0x8fa40314  lw          $a0, 0x314($sp)
    ctx->pc = 0x2b9cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 788)));
label_2b9cc8:
    // 0x2b9cc8: 0xafa40380  sw          $a0, 0x380($sp)
    ctx->pc = 0x2b9cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 4));
label_2b9ccc:
    // 0x2b9ccc: 0x10000371  b           . + 4 + (0x371 << 2)
label_2b9cd0:
    if (ctx->pc == 0x2B9CD0u) {
        ctx->pc = 0x2B9CD4u;
        goto label_2b9cd4;
    }
    ctx->pc = 0x2B9CCCu;
    {
        const bool branch_taken_0x2b9ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9ccc) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2B9CD4u;
label_2b9cd4:
    // 0x2b9cd4: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x2b9cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2b9cd8:
    // 0x2b9cd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9cdc:
    // 0x2b9cdc: 0xc119b68  jal         func_466DA0
label_2b9ce0:
    if (ctx->pc == 0x2B9CE0u) {
        ctx->pc = 0x2B9CE4u;
        goto label_2b9ce4;
    }
    ctx->pc = 0x2B9CDCu;
    SET_GPR_U32(ctx, 31, 0x2B9CE4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2B9CDCu, 0x2B9CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9CE4u;
label_2b9ce4:
    // 0x2b9ce4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b9ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9ce8:
    // 0x2b9ce8: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x2b9ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2b9cec:
    // 0x2b9cec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9cf0:
    // 0x2b9cf0: 0xc0400e0  jal         func_100380
label_2b9cf4:
    if (ctx->pc == 0x2B9CF4u) {
        ctx->pc = 0x2B9CF8u;
        goto label_2b9cf8;
    }
    ctx->pc = 0x2B9CF0u;
    SET_GPR_U32(ctx, 31, 0x2B9CF8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2B9CF0u, 0x2B9CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9CF8u;
label_2b9cf8:
    // 0x2b9cf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9cfc:
    // 0x2b9cfc: 0xafa40310  sw          $a0, 0x310($sp)
    ctx->pc = 0x2b9cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 4));
label_2b9d00:
    // 0x2b9d00: 0x8fa50310  lw          $a1, 0x310($sp)
    ctx->pc = 0x2b9d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
label_2b9d04:
    // 0x2b9d04: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_2b9d08:
    if (ctx->pc == 0x2B9D08u) {
        ctx->pc = 0x2B9D0Cu;
        goto label_2b9d0c;
    }
    ctx->pc = 0x2B9D04u;
    {
        const bool branch_taken_0x2b9d04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d04) {
            ctx->pc = 0x2B9D24u;
            goto label_2b9d24;
        }
    }
    ctx->pc = 0x2B9D0Cu;
label_2b9d0c:
    // 0x2b9d0c: 0x8fa20310  lw          $v0, 0x310($sp)
    ctx->pc = 0x2b9d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
label_2b9d10:
    // 0x2b9d10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9d14:
    // 0x2b9d14: 0xc09dc24  jal         func_277090
label_2b9d18:
    if (ctx->pc == 0x2B9D18u) {
        ctx->pc = 0x2B9D1Cu;
        goto label_2b9d1c;
    }
    ctx->pc = 0x2B9D14u;
    SET_GPR_U32(ctx, 31, 0x2B9D1Cu);
    ctx->pc = 0x277090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277090u, 0x2B9D14u, 0x2B9D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9D1Cu;
label_2b9d1c:
    // 0x2b9d1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9d20:
    // 0x2b9d20: 0xafa40310  sw          $a0, 0x310($sp)
    ctx->pc = 0x2b9d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 784), GPR_U32(ctx, 4));
label_2b9d24:
    // 0x2b9d24: 0x8fa20310  lw          $v0, 0x310($sp)
    ctx->pc = 0x2b9d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 784)));
label_2b9d28:
    // 0x2b9d28: 0xafa20380  sw          $v0, 0x380($sp)
    ctx->pc = 0x2b9d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 2));
label_2b9d2c:
    // 0x2b9d2c: 0x10000359  b           . + 4 + (0x359 << 2)
label_2b9d30:
    if (ctx->pc == 0x2B9D30u) {
        ctx->pc = 0x2B9D34u;
        goto label_2b9d34;
    }
    ctx->pc = 0x2B9D2Cu;
    {
        const bool branch_taken_0x2b9d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d2c) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2B9D34u;
label_2b9d34:
    // 0x2b9d34: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x2b9d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2b9d38:
    // 0x2b9d38: 0xc119b68  jal         func_466DA0
label_2b9d3c:
    if (ctx->pc == 0x2B9D3Cu) {
        ctx->pc = 0x2B9D40u;
        goto label_2b9d40;
    }
    ctx->pc = 0x2B9D38u;
    SET_GPR_U32(ctx, 31, 0x2B9D40u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2B9D38u, 0x2B9D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9D40u;
label_2b9d40:
    // 0x2b9d40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b9d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9d44:
    // 0x2b9d44: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x2b9d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2b9d48:
    // 0x2b9d48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9d4c:
    // 0x2b9d4c: 0xc0400e0  jal         func_100380
label_2b9d50:
    if (ctx->pc == 0x2B9D50u) {
        ctx->pc = 0x2B9D54u;
        goto label_2b9d54;
    }
    ctx->pc = 0x2B9D4Cu;
    SET_GPR_U32(ctx, 31, 0x2B9D54u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2B9D4Cu, 0x2B9D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9D54u;
label_2b9d54:
    // 0x2b9d54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9d58:
    // 0x2b9d58: 0xafa4030c  sw          $a0, 0x30C($sp)
    ctx->pc = 0x2b9d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 780), GPR_U32(ctx, 4));
label_2b9d5c:
    // 0x2b9d5c: 0x8fa2030c  lw          $v0, 0x30C($sp)
    ctx->pc = 0x2b9d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
label_2b9d60:
    // 0x2b9d60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b9d64:
    if (ctx->pc == 0x2B9D64u) {
        ctx->pc = 0x2B9D68u;
        goto label_2b9d68;
    }
    ctx->pc = 0x2B9D60u;
    {
        const bool branch_taken_0x2b9d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d60) {
            ctx->pc = 0x2B9D80u;
            goto label_2b9d80;
        }
    }
    ctx->pc = 0x2B9D68u;
label_2b9d68:
    // 0x2b9d68: 0x8fa6030c  lw          $a2, 0x30C($sp)
    ctx->pc = 0x2b9d68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
label_2b9d6c:
    // 0x2b9d6c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2b9d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b9d70:
    // 0x2b9d70: 0xc09d284  jal         func_274A10
label_2b9d74:
    if (ctx->pc == 0x2B9D74u) {
        ctx->pc = 0x2B9D78u;
        goto label_2b9d78;
    }
    ctx->pc = 0x2B9D70u;
    SET_GPR_U32(ctx, 31, 0x2B9D78u);
    ctx->pc = 0x274A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274A10u, 0x2B9D70u, 0x2B9D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9D78u;
label_2b9d78:
    // 0x2b9d78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b9d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9d7c:
    // 0x2b9d7c: 0xafa5030c  sw          $a1, 0x30C($sp)
    ctx->pc = 0x2b9d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 780), GPR_U32(ctx, 5));
label_2b9d80:
    // 0x2b9d80: 0x8fa4030c  lw          $a0, 0x30C($sp)
    ctx->pc = 0x2b9d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 780)));
label_2b9d84:
    // 0x2b9d84: 0xafa40380  sw          $a0, 0x380($sp)
    ctx->pc = 0x2b9d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 4));
label_2b9d88:
    // 0x2b9d88: 0x10000342  b           . + 4 + (0x342 << 2)
label_2b9d8c:
    if (ctx->pc == 0x2B9D8Cu) {
        ctx->pc = 0x2B9D90u;
        goto label_2b9d90;
    }
    ctx->pc = 0x2B9D88u;
    {
        const bool branch_taken_0x2b9d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d88) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2B9D90u;
label_2b9d90:
    // 0x2b9d90: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x2b9d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_2b9d94:
    // 0x2b9d94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9d98:
    // 0x2b9d98: 0xc119b68  jal         func_466DA0
label_2b9d9c:
    if (ctx->pc == 0x2B9D9Cu) {
        ctx->pc = 0x2B9DA0u;
        goto label_2b9da0;
    }
    ctx->pc = 0x2B9D98u;
    SET_GPR_U32(ctx, 31, 0x2B9DA0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2B9D98u, 0x2B9DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9DA0u;
label_2b9da0:
    // 0x2b9da0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b9da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9da4:
    // 0x2b9da4: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x2b9da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_2b9da8:
    // 0x2b9da8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9dac:
    // 0x2b9dac: 0xc0400e0  jal         func_100380
label_2b9db0:
    if (ctx->pc == 0x2B9DB0u) {
        ctx->pc = 0x2B9DB4u;
        goto label_2b9db4;
    }
    ctx->pc = 0x2B9DACu;
    SET_GPR_U32(ctx, 31, 0x2B9DB4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2B9DACu, 0x2B9DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9DB4u;
label_2b9db4:
    // 0x2b9db4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b9db4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9db8:
    // 0x2b9db8: 0xafa60308  sw          $a2, 0x308($sp)
    ctx->pc = 0x2b9db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 776), GPR_U32(ctx, 6));
label_2b9dbc:
    // 0x2b9dbc: 0x8fa50308  lw          $a1, 0x308($sp)
    ctx->pc = 0x2b9dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 776)));
label_2b9dc0:
    // 0x2b9dc0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_2b9dc4:
    if (ctx->pc == 0x2B9DC4u) {
        ctx->pc = 0x2B9DC8u;
        goto label_2b9dc8;
    }
    ctx->pc = 0x2B9DC0u;
    {
        const bool branch_taken_0x2b9dc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9dc0) {
            ctx->pc = 0x2B9DD8u;
            goto label_2b9dd8;
        }
    }
    ctx->pc = 0x2B9DC8u;
label_2b9dc8:
    // 0x2b9dc8: 0x8fa40308  lw          $a0, 0x308($sp)
    ctx->pc = 0x2b9dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 776)));
label_2b9dcc:
    // 0x2b9dcc: 0xc0aa9ec  jal         func_2AA7B0
label_2b9dd0:
    if (ctx->pc == 0x2B9DD0u) {
        ctx->pc = 0x2B9DD4u;
        goto label_2b9dd4;
    }
    ctx->pc = 0x2B9DCCu;
    SET_GPR_U32(ctx, 31, 0x2B9DD4u);
    ctx->pc = 0x2AA7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA7B0u, 0x2B9DCCu, 0x2B9DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9DD4u;
label_2b9dd4:
    // 0x2b9dd4: 0xafa20308  sw          $v0, 0x308($sp)
    ctx->pc = 0x2b9dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 776), GPR_U32(ctx, 2));
label_2b9dd8:
    // 0x2b9dd8: 0x8fa40308  lw          $a0, 0x308($sp)
    ctx->pc = 0x2b9dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 776)));
label_2b9ddc:
    // 0x2b9ddc: 0xafa40380  sw          $a0, 0x380($sp)
    ctx->pc = 0x2b9ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 4));
label_2b9de0:
    // 0x2b9de0: 0x1000032c  b           . + 4 + (0x32C << 2)
label_2b9de4:
    if (ctx->pc == 0x2B9DE4u) {
        ctx->pc = 0x2B9DE8u;
        goto label_2b9de8;
    }
    ctx->pc = 0x2B9DE0u;
    {
        const bool branch_taken_0x2b9de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9de0) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2B9DE8u;
label_2b9de8:
    // 0x2b9de8: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x2b9de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_2b9dec:
    // 0x2b9dec: 0x90440028  lbu         $a0, 0x28($v0)
    ctx->pc = 0x2b9decu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
label_2b9df0:
    // 0x2b9df0: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x2b9df0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2b9df4:
    // 0x2b9df4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b9df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9df8:
    // 0x2b9df8: 0x10a40326  beq         $a1, $a0, . + 4 + (0x326 << 2)
label_2b9dfc:
    if (ctx->pc == 0x2B9DFCu) {
        ctx->pc = 0x2B9E00u;
        goto label_2b9e00;
    }
    ctx->pc = 0x2B9DF8u;
    {
        const bool branch_taken_0x2b9df8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b9df8) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2B9E00u;
label_2b9e00:
    // 0x2b9e00: 0x8fa2037c  lw          $v0, 0x37C($sp)
    ctx->pc = 0x2b9e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 892)));
label_2b9e04:
    // 0x2b9e04: 0xafa20384  sw          $v0, 0x384($sp)
    ctx->pc = 0x2b9e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 900), GPR_U32(ctx, 2));
label_2b9e08:
    // 0x2b9e08: 0x12c0000f  beqz        $s6, . + 4 + (0xF << 2)
label_2b9e0c:
    if (ctx->pc == 0x2B9E0Cu) {
        ctx->pc = 0x2B9E10u;
        goto label_2b9e10;
    }
    ctx->pc = 0x2B9E08u;
    {
        const bool branch_taken_0x2b9e08 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9e08) {
            ctx->pc = 0x2B9E48u;
            goto label_2b9e48;
        }
    }
    ctx->pc = 0x2B9E10u;
label_2b9e10:
    // 0x2b9e10: 0x93a403bb  lbu         $a0, 0x3BB($sp)
    ctx->pc = 0x2b9e10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 955)));
label_2b9e14:
    // 0x2b9e14: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2b9e18:
    if (ctx->pc == 0x2B9E18u) {
        ctx->pc = 0x2B9E1Cu;
        goto label_2b9e1c;
    }
    ctx->pc = 0x2B9E14u;
    {
        const bool branch_taken_0x2b9e14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9e14) {
            ctx->pc = 0x2B9E34u;
            goto label_2b9e34;
        }
    }
    ctx->pc = 0x2B9E1Cu;
label_2b9e1c:
    // 0x2b9e1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b9e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9e20:
    // 0x2b9e20: 0x8fa303c0  lw          $v1, 0x3C0($sp)
    ctx->pc = 0x2b9e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2b9e24:
    // 0x2b9e24: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x2b9e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_2b9e28:
    // 0x2b9e28: 0xa0620005  sb          $v0, 0x5($v1)
    ctx->pc = 0x2b9e28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 2));
label_2b9e2c:
    // 0x2b9e2c: 0x10000014  b           . + 4 + (0x14 << 2)
label_2b9e30:
    if (ctx->pc == 0x2B9E30u) {
        ctx->pc = 0x2B9E34u;
        goto label_2b9e34;
    }
    ctx->pc = 0x2B9E2Cu;
    {
        const bool branch_taken_0x2b9e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9e2c) {
            ctx->pc = 0x2B9E80u;
            goto label_2b9e80;
        }
    }
    ctx->pc = 0x2B9E34u;
label_2b9e34:
    // 0x2b9e34: 0x8fa203c0  lw          $v0, 0x3C0($sp)
    ctx->pc = 0x2b9e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2b9e38:
    // 0x2b9e38: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2b9e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2b9e3c:
    // 0x2b9e3c: 0xa0400005  sb          $zero, 0x5($v0)
    ctx->pc = 0x2b9e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 0));
label_2b9e40:
    // 0x2b9e40: 0x1000000f  b           . + 4 + (0xF << 2)
label_2b9e44:
    if (ctx->pc == 0x2B9E44u) {
        ctx->pc = 0x2B9E48u;
        goto label_2b9e48;
    }
    ctx->pc = 0x2B9E40u;
    {
        const bool branch_taken_0x2b9e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9e40) {
            ctx->pc = 0x2B9E80u;
            goto label_2b9e80;
        }
    }
    ctx->pc = 0x2B9E48u;
label_2b9e48:
    // 0x2b9e48: 0x93a603bc  lbu         $a2, 0x3BC($sp)
    ctx->pc = 0x2b9e48u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 956)));
label_2b9e4c:
    // 0x2b9e4c: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_2b9e50:
    if (ctx->pc == 0x2B9E50u) {
        ctx->pc = 0x2B9E54u;
        goto label_2b9e54;
    }
    ctx->pc = 0x2B9E4Cu;
    {
        const bool branch_taken_0x2b9e4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9e4c) {
            ctx->pc = 0x2B9E74u;
            goto label_2b9e74;
        }
    }
    ctx->pc = 0x2B9E54u;
label_2b9e54:
    // 0x2b9e54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b9e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9e58:
    // 0x2b9e58: 0x8fa203c0  lw          $v0, 0x3C0($sp)
    ctx->pc = 0x2b9e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2b9e5c:
    // 0x2b9e5c: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2b9e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2b9e60:
    // 0x2b9e60: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x2b9e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_2b9e64:
    // 0x2b9e64: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x2b9e64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2b9e68:
    // 0x2b9e68: 0xa0440005  sb          $a0, 0x5($v0)
    ctx->pc = 0x2b9e68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 4));
label_2b9e6c:
    // 0x2b9e6c: 0x10000004  b           . + 4 + (0x4 << 2)
label_2b9e70:
    if (ctx->pc == 0x2B9E70u) {
        ctx->pc = 0x2B9E74u;
        goto label_2b9e74;
    }
    ctx->pc = 0x2B9E6Cu;
    {
        const bool branch_taken_0x2b9e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9e6c) {
            ctx->pc = 0x2B9E80u;
            goto label_2b9e80;
        }
    }
    ctx->pc = 0x2B9E74u;
label_2b9e74:
    // 0x2b9e74: 0x8fa503c0  lw          $a1, 0x3C0($sp)
    ctx->pc = 0x2b9e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2b9e78:
    // 0x2b9e78: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x2b9e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_2b9e7c:
    // 0x2b9e7c: 0xa0400005  sb          $zero, 0x5($v0)
    ctx->pc = 0x2b9e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 0));
label_2b9e80:
    // 0x2b9e80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b9e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b9e84:
    // 0x2b9e84: 0xc096950  jal         func_25A540
label_2b9e88:
    if (ctx->pc == 0x2B9E88u) {
        ctx->pc = 0x2B9E8Cu;
        goto label_2b9e8c;
    }
    ctx->pc = 0x2B9E84u;
    SET_GPR_U32(ctx, 31, 0x2B9E8Cu);
    ctx->pc = 0x25A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A540u, 0x2B9E84u, 0x2B9E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9E8Cu;
label_2b9e8c:
    // 0x2b9e8c: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x2b9e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_2b9e90:
    // 0x2b9e90: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x2b9e90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2b9e94:
    // 0x2b9e94: 0xafa20378  sw          $v0, 0x378($sp)
    ctx->pc = 0x2b9e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 888), GPR_U32(ctx, 2));
label_2b9e98:
    // 0x2b9e98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9e9c:
    // 0x2b9e9c: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x2b9e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_2b9ea0:
    // 0x2b9ea0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2b9ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2b9ea4:
    // 0x2b9ea4: 0x8fa70378  lw          $a3, 0x378($sp)
    ctx->pc = 0x2b9ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 888)));
label_2b9ea8:
    // 0x2b9ea8: 0xc09c420  jal         func_271080
label_2b9eac:
    if (ctx->pc == 0x2B9EACu) {
        ctx->pc = 0x2B9EB0u;
        goto label_2b9eb0;
    }
    ctx->pc = 0x2B9EA8u;
    SET_GPR_U32(ctx, 31, 0x2B9EB0u);
    ctx->pc = 0x271080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271080u, 0x2B9EA8u, 0x2B9EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9EB0u;
label_2b9eb0:
    // 0x2b9eb0: 0x241001f0  addiu       $s0, $zero, 0x1F0
    ctx->pc = 0x2b9eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
label_2b9eb4:
    // 0x2b9eb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b9eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9eb8:
    // 0x2b9eb8: 0xc119b68  jal         func_466DA0
label_2b9ebc:
    if (ctx->pc == 0x2B9EBCu) {
        ctx->pc = 0x2B9EC0u;
        goto label_2b9ec0;
    }
    ctx->pc = 0x2B9EB8u;
    SET_GPR_U32(ctx, 31, 0x2B9EC0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2B9EB8u, 0x2B9EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9EC0u;
label_2b9ec0:
    // 0x2b9ec0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b9ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9ec4:
    // 0x2b9ec4: 0x240201f0  addiu       $v0, $zero, 0x1F0
    ctx->pc = 0x2b9ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
label_2b9ec8:
    // 0x2b9ec8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9ecc:
    // 0x2b9ecc: 0xc0400e0  jal         func_100380
label_2b9ed0:
    if (ctx->pc == 0x2B9ED0u) {
        ctx->pc = 0x2B9ED4u;
        goto label_2b9ed4;
    }
    ctx->pc = 0x2B9ECCu;
    SET_GPR_U32(ctx, 31, 0x2B9ED4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2B9ECCu, 0x2B9ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9ED4u;
label_2b9ed4:
    // 0x2b9ed4: 0xafa20304  sw          $v0, 0x304($sp)
    ctx->pc = 0x2b9ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 772), GPR_U32(ctx, 2));
label_2b9ed8:
    // 0x2b9ed8: 0x8fa40304  lw          $a0, 0x304($sp)
    ctx->pc = 0x2b9ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
label_2b9edc:
    // 0x2b9edc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2b9ee0:
    if (ctx->pc == 0x2B9EE0u) {
        ctx->pc = 0x2B9EE4u;
        goto label_2b9ee4;
    }
    ctx->pc = 0x2B9EDCu;
    {
        const bool branch_taken_0x2b9edc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9edc) {
            ctx->pc = 0x2B9EFCu;
            goto label_2b9efc;
        }
    }
    ctx->pc = 0x2B9EE4u;
label_2b9ee4:
    // 0x2b9ee4: 0x8fa20304  lw          $v0, 0x304($sp)
    ctx->pc = 0x2b9ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
label_2b9ee8:
    // 0x2b9ee8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9eec:
    // 0x2b9eec: 0xc0a8e8c  jal         func_2A3A30
label_2b9ef0:
    if (ctx->pc == 0x2B9EF0u) {
        ctx->pc = 0x2B9EF4u;
        goto label_2b9ef4;
    }
    ctx->pc = 0x2B9EECu;
    SET_GPR_U32(ctx, 31, 0x2B9EF4u);
    ctx->pc = 0x2A3A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3A30u, 0x2B9EECu, 0x2B9EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9EF4u;
label_2b9ef4:
    // 0x2b9ef4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9ef8:
    // 0x2b9ef8: 0xafa40304  sw          $a0, 0x304($sp)
    ctx->pc = 0x2b9ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 772), GPR_U32(ctx, 4));
label_2b9efc:
    // 0x2b9efc: 0x8fa20304  lw          $v0, 0x304($sp)
    ctx->pc = 0x2b9efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
label_2b9f00:
    // 0x2b9f00: 0xafa20380  sw          $v0, 0x380($sp)
    ctx->pc = 0x2b9f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 2));
label_2b9f04:
    // 0x2b9f04: 0x8fa40380  lw          $a0, 0x380($sp)
    ctx->pc = 0x2b9f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
label_2b9f08:
    // 0x2b9f08: 0xafa40374  sw          $a0, 0x374($sp)
    ctx->pc = 0x2b9f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 884), GPR_U32(ctx, 4));
label_2b9f0c:
    // 0x2b9f0c: 0x8fa203c0  lw          $v0, 0x3C0($sp)
    ctx->pc = 0x2b9f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2b9f10:
    // 0x2b9f10: 0x8fa40374  lw          $a0, 0x374($sp)
    ctx->pc = 0x2b9f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 884)));
label_2b9f14:
    // 0x2b9f14: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x2b9f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2b9f18:
    // 0x2b9f18: 0xc0a9dac  jal         func_2A76B0
label_2b9f1c:
    if (ctx->pc == 0x2B9F1Cu) {
        ctx->pc = 0x2B9F20u;
        goto label_2b9f20;
    }
    ctx->pc = 0x2B9F18u;
    SET_GPR_U32(ctx, 31, 0x2B9F20u);
    ctx->pc = 0x2A76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A76B0u, 0x2B9F18u, 0x2B9F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F20u;
label_2b9f20:
    // 0x2b9f20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9f24:
    // 0x2b9f24: 0x8fa20374  lw          $v0, 0x374($sp)
    ctx->pc = 0x2b9f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 884)));
label_2b9f28:
    // 0x2b9f28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9f2c:
    // 0x2b9f2c: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x2b9f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_2b9f30:
    // 0x2b9f30: 0xc0a9db8  jal         func_2A76E0
label_2b9f34:
    if (ctx->pc == 0x2B9F34u) {
        ctx->pc = 0x2B9F38u;
        goto label_2b9f38;
    }
    ctx->pc = 0x2B9F30u;
    SET_GPR_U32(ctx, 31, 0x2B9F38u);
    ctx->pc = 0x2A76E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A76E0u, 0x2B9F30u, 0x2B9F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F38u;
label_2b9f38:
    // 0x2b9f38: 0x8fa40374  lw          $a0, 0x374($sp)
    ctx->pc = 0x2b9f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 884)));
label_2b9f3c:
    // 0x2b9f3c: 0x93a503ba  lbu         $a1, 0x3BA($sp)
    ctx->pc = 0x2b9f3cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 954)));
label_2b9f40:
    // 0x2b9f40: 0xc0a9dc8  jal         func_2A7720
label_2b9f44:
    if (ctx->pc == 0x2B9F44u) {
        ctx->pc = 0x2B9F48u;
        goto label_2b9f48;
    }
    ctx->pc = 0x2B9F40u;
    SET_GPR_U32(ctx, 31, 0x2B9F48u);
    ctx->pc = 0x2A7720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7720u, 0x2B9F40u, 0x2B9F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F48u;
label_2b9f48:
    // 0x2b9f48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9f4c:
    // 0x2b9f4c: 0xc09d0b8  jal         func_2742E0
label_2b9f50:
    if (ctx->pc == 0x2B9F50u) {
        ctx->pc = 0x2B9F54u;
        goto label_2b9f54;
    }
    ctx->pc = 0x2B9F4Cu;
    SET_GPR_U32(ctx, 31, 0x2B9F54u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2B9F4Cu, 0x2B9F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F54u;
label_2b9f54:
    // 0x2b9f54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9f58:
    // 0x2b9f58: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2b9f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2b9f5c:
    // 0x2b9f5c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2b9f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_2b9f60:
    // 0x2b9f60: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x2b9f60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2b9f64:
    // 0x2b9f64: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
label_2b9f68:
    if (ctx->pc == 0x2B9F68u) {
        ctx->pc = 0x2B9F6Cu;
        goto label_2b9f6c;
    }
    ctx->pc = 0x2B9F64u;
    {
        const bool branch_taken_0x2b9f64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b9f64) {
            ctx->pc = 0x2B9F94u;
            goto label_2b9f94;
        }
    }
    ctx->pc = 0x2B9F6Cu;
label_2b9f6c:
    // 0x2b9f6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9f70:
    // 0x2b9f70: 0x24050537  addiu       $a1, $zero, 0x537
    ctx->pc = 0x2b9f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1335));
label_2b9f74:
    // 0x2b9f74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b9f74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9f78:
    // 0x2b9f78: 0xc04146c  jal         func_1051B0
label_2b9f7c:
    if (ctx->pc == 0x2B9F7Cu) {
        ctx->pc = 0x2B9F80u;
        goto label_2b9f80;
    }
    ctx->pc = 0x2B9F78u;
    SET_GPR_U32(ctx, 31, 0x2B9F80u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2B9F78u, 0x2B9F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F80u;
label_2b9f80:
    // 0x2b9f80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b9f80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9f84:
    // 0x2b9f84: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2b9f88:
    if (ctx->pc == 0x2B9F88u) {
        ctx->pc = 0x2B9F8Cu;
        goto label_2b9f8c;
    }
    ctx->pc = 0x2B9F84u;
    {
        const bool branch_taken_0x2b9f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9f84) {
            ctx->pc = 0x2B9F94u;
            goto label_2b9f94;
        }
    }
    ctx->pc = 0x2B9F8Cu;
label_2b9f8c:
    // 0x2b9f8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b9f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9f90:
    // 0x2b9f90: 0xa3a203b9  sb          $v0, 0x3B9($sp)
    ctx->pc = 0x2b9f90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 953), (uint8_t)GPR_U32(ctx, 2));
label_2b9f94:
    // 0x2b9f94: 0x8fa403c0  lw          $a0, 0x3C0($sp)
    ctx->pc = 0x2b9f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2b9f98:
    // 0x2b9f98: 0xc0ae4b4  jal         func_2B92D0
label_2b9f9c:
    if (ctx->pc == 0x2B9F9Cu) {
        ctx->pc = 0x2B9FA0u;
        goto label_2b9fa0;
    }
    ctx->pc = 0x2B9F98u;
    SET_GPR_U32(ctx, 31, 0x2B9FA0u);
    ctx->pc = 0x2B92D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92D0u, 0x2B9F98u, 0x2B9FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9FA0u;
label_2b9fa0:
    // 0x2b9fa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9fa4:
    // 0x2b9fa4: 0xc09b618  jal         func_26D860
label_2b9fa8:
    if (ctx->pc == 0x2B9FA8u) {
        ctx->pc = 0x2B9FACu;
        goto label_2b9fac;
    }
    ctx->pc = 0x2B9FA4u;
    SET_GPR_U32(ctx, 31, 0x2B9FACu);
    ctx->pc = 0x26D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D860u, 0x2B9FA4u, 0x2B9FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9FACu;
label_2b9fac:
    // 0x2b9fac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9fb0:
    // 0x2b9fb0: 0xafa40370  sw          $a0, 0x370($sp)
    ctx->pc = 0x2b9fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 880), GPR_U32(ctx, 4));
label_2b9fb4:
    // 0x2b9fb4: 0x8fa20370  lw          $v0, 0x370($sp)
    ctx->pc = 0x2b9fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
label_2b9fb8:
    // 0x2b9fb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9fbc:
    // 0x2b9fbc: 0xc0998dc  jal         func_266370
label_2b9fc0:
    if (ctx->pc == 0x2B9FC0u) {
        ctx->pc = 0x2B9FC4u;
        goto label_2b9fc4;
    }
    ctx->pc = 0x2B9FBCu;
    SET_GPR_U32(ctx, 31, 0x2B9FC4u);
    ctx->pc = 0x266370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266370u, 0x2B9FBCu, 0x2B9FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9FC4u;
label_2b9fc4:
    // 0x2b9fc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9fc8:
    // 0x2b9fc8: 0xafa4036c  sw          $a0, 0x36C($sp)
    ctx->pc = 0x2b9fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 876), GPR_U32(ctx, 4));
label_2b9fcc:
    // 0x2b9fcc: 0x10000010  b           . + 4 + (0x10 << 2)
label_2b9fd0:
    if (ctx->pc == 0x2B9FD0u) {
        ctx->pc = 0x2B9FD4u;
        goto label_2b9fd4;
    }
    ctx->pc = 0x2B9FCCu;
    {
        const bool branch_taken_0x2b9fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9fcc) {
            ctx->pc = 0x2BA010u;
            goto label_2ba010;
        }
    }
    ctx->pc = 0x2B9FD4u;
label_2b9fd4:
    // 0x2b9fd4: 0x8fa5036c  lw          $a1, 0x36C($sp)
    ctx->pc = 0x2b9fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 876)));
label_2b9fd8:
    // 0x2b9fd8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2b9fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2b9fdc:
    // 0x2b9fdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b9fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9fe0:
    // 0x2b9fe0: 0xc09ce4c  jal         func_273930
label_2b9fe4:
    if (ctx->pc == 0x2B9FE4u) {
        ctx->pc = 0x2B9FE8u;
        goto label_2b9fe8;
    }
    ctx->pc = 0x2B9FE0u;
    SET_GPR_U32(ctx, 31, 0x2B9FE8u);
    ctx->pc = 0x273930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273930u, 0x2B9FE0u, 0x2B9FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9FE8u;
label_2b9fe8:
    // 0x2b9fe8: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2b9fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_2b9fec:
    // 0x2b9fec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b9fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b9ff0:
    // 0x2b9ff0: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x2b9ff0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2b9ff4:
    // 0x2b9ff4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_2b9ff8:
    if (ctx->pc == 0x2B9FF8u) {
        ctx->pc = 0x2B9FFCu;
        goto label_2b9ffc;
    }
    ctx->pc = 0x2B9FF4u;
    {
        const bool branch_taken_0x2b9ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b9ff4) {
            ctx->pc = 0x2BA004u;
            goto label_2ba004;
        }
    }
    ctx->pc = 0x2B9FFCu;
label_2b9ffc:
    // 0x2b9ffc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b9ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ba000:
    // 0x2ba000: 0xa3a403be  sb          $a0, 0x3BE($sp)
    ctx->pc = 0x2ba000u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 958), (uint8_t)GPR_U32(ctx, 4));
label_2ba004:
    // 0x2ba004: 0x8fa2036c  lw          $v0, 0x36C($sp)
    ctx->pc = 0x2ba004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 876)));
label_2ba008:
    // 0x2ba008: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x2ba008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2ba00c:
    // 0x2ba00c: 0xafa6036c  sw          $a2, 0x36C($sp)
    ctx->pc = 0x2ba00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 876), GPR_U32(ctx, 6));
label_2ba010:
    // 0x2ba010: 0x8fa2036c  lw          $v0, 0x36C($sp)
    ctx->pc = 0x2ba010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 876)));
label_2ba014:
    // 0x2ba014: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2ba014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_2ba018:
    // 0x2ba018: 0x8fa20370  lw          $v0, 0x370($sp)
    ctx->pc = 0x2ba018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
label_2ba01c:
    // 0x2ba01c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba020:
    // 0x2ba020: 0xc0998c4  jal         func_266310
label_2ba024:
    if (ctx->pc == 0x2BA024u) {
        ctx->pc = 0x2BA028u;
        goto label_2ba028;
    }
    ctx->pc = 0x2BA020u;
    SET_GPR_U32(ctx, 31, 0x2BA028u);
    ctx->pc = 0x266310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266310u, 0x2BA020u, 0x2BA028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA028u;
label_2ba028:
    // 0x2ba028: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ba028u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba02c:
    // 0x2ba02c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x2ba02cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2ba030:
    // 0x2ba030: 0x1443ffe8  bne         $v0, $v1, . + 4 + (-0x18 << 2)
label_2ba034:
    if (ctx->pc == 0x2BA034u) {
        ctx->pc = 0x2BA038u;
        goto label_2ba038;
    }
    ctx->pc = 0x2BA030u;
    {
        const bool branch_taken_0x2ba030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ba030) {
            ctx->pc = 0x2B9FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9fd4;
        }
    }
    ctx->pc = 0x2BA038u;
label_2ba038:
    // 0x2ba038: 0x10000296  b           . + 4 + (0x296 << 2)
label_2ba03c:
    if (ctx->pc == 0x2BA03Cu) {
        ctx->pc = 0x2BA040u;
        goto label_2ba040;
    }
    ctx->pc = 0x2BA038u;
    {
        const bool branch_taken_0x2ba038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba038) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA040u;
label_2ba040:
    // 0x2ba040: 0x24040084  addiu       $a0, $zero, 0x84
    ctx->pc = 0x2ba040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_2ba044:
    // 0x2ba044: 0xc119b68  jal         func_466DA0
label_2ba048:
    if (ctx->pc == 0x2BA048u) {
        ctx->pc = 0x2BA04Cu;
        goto label_2ba04c;
    }
    ctx->pc = 0x2BA044u;
    SET_GPR_U32(ctx, 31, 0x2BA04Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA044u, 0x2BA04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA04Cu;
label_2ba04c:
    // 0x2ba04c: 0x24050084  addiu       $a1, $zero, 0x84
    ctx->pc = 0x2ba04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_2ba050:
    // 0x2ba050: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ba050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba054:
    // 0x2ba054: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba058:
    // 0x2ba058: 0xc0400e0  jal         func_100380
label_2ba05c:
    if (ctx->pc == 0x2BA05Cu) {
        ctx->pc = 0x2BA060u;
        goto label_2ba060;
    }
    ctx->pc = 0x2BA058u;
    SET_GPR_U32(ctx, 31, 0x2BA060u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BA058u, 0x2BA060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA060u;
label_2ba060:
    // 0x2ba060: 0xafa20300  sw          $v0, 0x300($sp)
    ctx->pc = 0x2ba060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 2));
label_2ba064:
    // 0x2ba064: 0x8fa30300  lw          $v1, 0x300($sp)
    ctx->pc = 0x2ba064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
label_2ba068:
    // 0x2ba068: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2ba06c:
    if (ctx->pc == 0x2BA06Cu) {
        ctx->pc = 0x2BA070u;
        goto label_2ba070;
    }
    ctx->pc = 0x2BA068u;
    {
        const bool branch_taken_0x2ba068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba068) {
            ctx->pc = 0x2BA088u;
            goto label_2ba088;
        }
    }
    ctx->pc = 0x2BA070u;
label_2ba070:
    // 0x2ba070: 0x8fa50300  lw          $a1, 0x300($sp)
    ctx->pc = 0x2ba070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
label_2ba074:
    // 0x2ba074: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ba074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba078:
    // 0x2ba078: 0xc0a8cd8  jal         func_2A3360
label_2ba07c:
    if (ctx->pc == 0x2BA07Cu) {
        ctx->pc = 0x2BA080u;
        goto label_2ba080;
    }
    ctx->pc = 0x2BA078u;
    SET_GPR_U32(ctx, 31, 0x2BA080u);
    ctx->pc = 0x2A3360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3360u, 0x2BA078u, 0x2BA080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA080u;
label_2ba080:
    // 0x2ba080: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ba080u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba084:
    // 0x2ba084: 0xafa30300  sw          $v1, 0x300($sp)
    ctx->pc = 0x2ba084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 3));
label_2ba088:
    // 0x2ba088: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x2ba088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
label_2ba08c:
    // 0x2ba08c: 0xafa20380  sw          $v0, 0x380($sp)
    ctx->pc = 0x2ba08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 2));
label_2ba090:
    // 0x2ba090: 0x10000280  b           . + 4 + (0x280 << 2)
label_2ba094:
    if (ctx->pc == 0x2BA094u) {
        ctx->pc = 0x2BA098u;
        goto label_2ba098;
    }
    ctx->pc = 0x2BA090u;
    {
        const bool branch_taken_0x2ba090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba090) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA098u;
label_2ba098:
    // 0x2ba098: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x2ba098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_2ba09c:
    // 0x2ba09c: 0xc119b68  jal         func_466DA0
label_2ba0a0:
    if (ctx->pc == 0x2BA0A0u) {
        ctx->pc = 0x2BA0A4u;
        goto label_2ba0a4;
    }
    ctx->pc = 0x2BA09Cu;
    SET_GPR_U32(ctx, 31, 0x2BA0A4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA09Cu, 0x2BA0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA0A4u;
label_2ba0a4:
    // 0x2ba0a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ba0a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba0a8:
    // 0x2ba0a8: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x2ba0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_2ba0ac:
    // 0x2ba0ac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ba0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba0b0:
    // 0x2ba0b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ba0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ba0b4:
    // 0x2ba0b4: 0xc0400e0  jal         func_100380
label_2ba0b8:
    if (ctx->pc == 0x2BA0B8u) {
        ctx->pc = 0x2BA0BCu;
        goto label_2ba0bc;
    }
    ctx->pc = 0x2BA0B4u;
    SET_GPR_U32(ctx, 31, 0x2BA0BCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BA0B4u, 0x2BA0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA0BCu;
label_2ba0bc:
    // 0x2ba0bc: 0xafa202fc  sw          $v0, 0x2FC($sp)
    ctx->pc = 0x2ba0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 764), GPR_U32(ctx, 2));
label_2ba0c0:
    // 0x2ba0c0: 0x8fa202fc  lw          $v0, 0x2FC($sp)
    ctx->pc = 0x2ba0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 764)));
label_2ba0c4:
    // 0x2ba0c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ba0c8:
    if (ctx->pc == 0x2BA0C8u) {
        ctx->pc = 0x2BA0CCu;
        goto label_2ba0cc;
    }
    ctx->pc = 0x2BA0C4u;
    {
        const bool branch_taken_0x2ba0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba0c4) {
            ctx->pc = 0x2BA0DCu;
            goto label_2ba0dc;
        }
    }
    ctx->pc = 0x2BA0CCu;
label_2ba0cc:
    // 0x2ba0cc: 0x8fa402fc  lw          $a0, 0x2FC($sp)
    ctx->pc = 0x2ba0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 764)));
label_2ba0d0:
    // 0x2ba0d0: 0xc0aa4a4  jal         func_2A9290
label_2ba0d4:
    if (ctx->pc == 0x2BA0D4u) {
        ctx->pc = 0x2BA0D8u;
        goto label_2ba0d8;
    }
    ctx->pc = 0x2BA0D0u;
    SET_GPR_U32(ctx, 31, 0x2BA0D8u);
    ctx->pc = 0x2A9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9290u, 0x2BA0D0u, 0x2BA0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA0D8u;
label_2ba0d8:
    // 0x2ba0d8: 0xafa202fc  sw          $v0, 0x2FC($sp)
    ctx->pc = 0x2ba0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 764), GPR_U32(ctx, 2));
label_2ba0dc:
    // 0x2ba0dc: 0x8fa402fc  lw          $a0, 0x2FC($sp)
    ctx->pc = 0x2ba0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 764)));
label_2ba0e0:
    // 0x2ba0e0: 0xafa40380  sw          $a0, 0x380($sp)
    ctx->pc = 0x2ba0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 4));
label_2ba0e4:
    // 0x2ba0e4: 0x1000026b  b           . + 4 + (0x26B << 2)
label_2ba0e8:
    if (ctx->pc == 0x2BA0E8u) {
        ctx->pc = 0x2BA0ECu;
        goto label_2ba0ec;
    }
    ctx->pc = 0x2BA0E4u;
    {
        const bool branch_taken_0x2ba0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba0e4) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA0ECu;
label_2ba0ec:
    // 0x2ba0ec: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2ba0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2ba0f0:
    // 0x2ba0f0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2ba0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_2ba0f4:
    // 0x2ba0f4: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x2ba0f4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2ba0f8:
    // 0x2ba0f8: 0xc119b68  jal         func_466DA0
label_2ba0fc:
    if (ctx->pc == 0x2BA0FCu) {
        ctx->pc = 0x2BA100u;
        goto label_2ba100;
    }
    ctx->pc = 0x2BA0F8u;
    SET_GPR_U32(ctx, 31, 0x2BA100u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA0F8u, 0x2BA100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA100u;
label_2ba100:
    // 0x2ba100: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba104:
    // 0x2ba104: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2ba104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2ba108:
    // 0x2ba108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba10c:
    // 0x2ba10c: 0xc0400e0  jal         func_100380
label_2ba110:
    if (ctx->pc == 0x2BA110u) {
        ctx->pc = 0x2BA114u;
        goto label_2ba114;
    }
    ctx->pc = 0x2BA10Cu;
    SET_GPR_U32(ctx, 31, 0x2BA114u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BA10Cu, 0x2BA114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA114u;
label_2ba114:
    // 0x2ba114: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ba114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba118:
    // 0x2ba118: 0xafa602f8  sw          $a2, 0x2F8($sp)
    ctx->pc = 0x2ba118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 760), GPR_U32(ctx, 6));
label_2ba11c:
    // 0x2ba11c: 0x8fa202f8  lw          $v0, 0x2F8($sp)
    ctx->pc = 0x2ba11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
label_2ba120:
    // 0x2ba120: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2ba124:
    if (ctx->pc == 0x2BA124u) {
        ctx->pc = 0x2BA128u;
        goto label_2ba128;
    }
    ctx->pc = 0x2BA120u;
    {
        const bool branch_taken_0x2ba120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba120) {
            ctx->pc = 0x2BA140u;
            goto label_2ba140;
        }
    }
    ctx->pc = 0x2BA128u;
label_2ba128:
    // 0x2ba128: 0x8fa502f8  lw          $a1, 0x2F8($sp)
    ctx->pc = 0x2ba128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
label_2ba12c:
    // 0x2ba12c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ba12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba130:
    // 0x2ba130: 0xc0aa0e8  jal         func_2A83A0
label_2ba134:
    if (ctx->pc == 0x2BA134u) {
        ctx->pc = 0x2BA138u;
        goto label_2ba138;
    }
    ctx->pc = 0x2BA130u;
    SET_GPR_U32(ctx, 31, 0x2BA138u);
    ctx->pc = 0x2A83A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A83A0u, 0x2BA130u, 0x2BA138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA138u;
label_2ba138:
    // 0x2ba138: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba13c:
    // 0x2ba13c: 0xafa502f8  sw          $a1, 0x2F8($sp)
    ctx->pc = 0x2ba13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 760), GPR_U32(ctx, 5));
label_2ba140:
    // 0x2ba140: 0x8fa202f8  lw          $v0, 0x2F8($sp)
    ctx->pc = 0x2ba140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 760)));
label_2ba144:
    // 0x2ba144: 0xafa20380  sw          $v0, 0x380($sp)
    ctx->pc = 0x2ba144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 2));
label_2ba148:
    // 0x2ba148: 0x10000252  b           . + 4 + (0x252 << 2)
label_2ba14c:
    if (ctx->pc == 0x2BA14Cu) {
        ctx->pc = 0x2BA150u;
        goto label_2ba150;
    }
    ctx->pc = 0x2BA148u;
    {
        const bool branch_taken_0x2ba148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba148) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA150u;
label_2ba150:
    // 0x2ba150: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x2ba150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_2ba154:
    // 0x2ba154: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ba154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba158:
    // 0x2ba158: 0xc119b68  jal         func_466DA0
label_2ba15c:
    if (ctx->pc == 0x2BA15Cu) {
        ctx->pc = 0x2BA160u;
        goto label_2ba160;
    }
    ctx->pc = 0x2BA158u;
    SET_GPR_U32(ctx, 31, 0x2BA160u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA158u, 0x2BA160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA160u;
label_2ba160:
    // 0x2ba160: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ba160u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba164:
    // 0x2ba164: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x2ba164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_2ba168:
    // 0x2ba168: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba16c:
    // 0x2ba16c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2ba16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ba170:
    // 0x2ba170: 0xc0400e0  jal         func_100380
label_2ba174:
    if (ctx->pc == 0x2BA174u) {
        ctx->pc = 0x2BA178u;
        goto label_2ba178;
    }
    ctx->pc = 0x2BA170u;
    SET_GPR_U32(ctx, 31, 0x2BA178u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BA170u, 0x2BA178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA178u;
label_2ba178:
    // 0x2ba178: 0xafa202f4  sw          $v0, 0x2F4($sp)
    ctx->pc = 0x2ba178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 2));
label_2ba17c:
    // 0x2ba17c: 0x8fa602f4  lw          $a2, 0x2F4($sp)
    ctx->pc = 0x2ba17cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
label_2ba180:
    // 0x2ba180: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_2ba184:
    if (ctx->pc == 0x2BA184u) {
        ctx->pc = 0x2BA188u;
        goto label_2ba188;
    }
    ctx->pc = 0x2BA180u;
    {
        const bool branch_taken_0x2ba180 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba180) {
            ctx->pc = 0x2BA1A0u;
            goto label_2ba1a0;
        }
    }
    ctx->pc = 0x2BA188u;
label_2ba188:
    // 0x2ba188: 0x8fa502f4  lw          $a1, 0x2F4($sp)
    ctx->pc = 0x2ba188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
label_2ba18c:
    // 0x2ba18c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ba18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba190:
    // 0x2ba190: 0xc0b6928  jal         func_2DA4A0
label_2ba194:
    if (ctx->pc == 0x2BA194u) {
        ctx->pc = 0x2BA198u;
        goto label_2ba198;
    }
    ctx->pc = 0x2BA190u;
    SET_GPR_U32(ctx, 31, 0x2BA198u);
    ctx->pc = 0x2DA4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA4A0u, 0x2BA190u, 0x2BA198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA198u;
label_2ba198:
    // 0x2ba198: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ba198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba19c:
    // 0x2ba19c: 0xafa602f4  sw          $a2, 0x2F4($sp)
    ctx->pc = 0x2ba19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 6));
label_2ba1a0:
    // 0x2ba1a0: 0x8fa202f4  lw          $v0, 0x2F4($sp)
    ctx->pc = 0x2ba1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
label_2ba1a4:
    // 0x2ba1a4: 0xafa20380  sw          $v0, 0x380($sp)
    ctx->pc = 0x2ba1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 2));
label_2ba1a8:
    // 0x2ba1a8: 0x8fa403c0  lw          $a0, 0x3C0($sp)
    ctx->pc = 0x2ba1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2ba1ac:
    // 0x2ba1ac: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x2ba1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_2ba1b0:
    // 0x2ba1b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ba1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba1b4:
    // 0x2ba1b4: 0xc0b06c4  jal         func_2C1B10
label_2ba1b8:
    if (ctx->pc == 0x2BA1B8u) {
        ctx->pc = 0x2BA1BCu;
        goto label_2ba1bc;
    }
    ctx->pc = 0x2BA1B4u;
    SET_GPR_U32(ctx, 31, 0x2BA1BCu);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x2BA1B4u, 0x2BA1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA1BCu;
label_2ba1bc:
    // 0x2ba1bc: 0x8fa50380  lw          $a1, 0x380($sp)
    ctx->pc = 0x2ba1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
label_2ba1c0:
    // 0x2ba1c0: 0xaca20054  sw          $v0, 0x54($a1)
    ctx->pc = 0x2ba1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 2));
label_2ba1c4:
    // 0x2ba1c4: 0x10000233  b           . + 4 + (0x233 << 2)
label_2ba1c8:
    if (ctx->pc == 0x2BA1C8u) {
        ctx->pc = 0x2BA1CCu;
        goto label_2ba1cc;
    }
    ctx->pc = 0x2BA1C4u;
    {
        const bool branch_taken_0x2ba1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba1c4) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA1CCu;
label_2ba1cc:
    // 0x2ba1cc: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x2ba1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba1d0:
    // 0x2ba1d0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2ba1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ba1d4:
    // 0x2ba1d4: 0xc119b68  jal         func_466DA0
label_2ba1d8:
    if (ctx->pc == 0x2BA1D8u) {
        ctx->pc = 0x2BA1DCu;
        goto label_2ba1dc;
    }
    ctx->pc = 0x2BA1D4u;
    SET_GPR_U32(ctx, 31, 0x2BA1DCu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA1D4u, 0x2BA1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA1DCu;
label_2ba1dc:
    // 0x2ba1dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ba1dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba1e0:
    // 0x2ba1e0: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x2ba1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba1e4:
    // 0x2ba1e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ba1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba1e8:
    // 0x2ba1e8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2ba1e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ba1ec:
    // 0x2ba1ec: 0xc0400e0  jal         func_100380
label_2ba1f0:
    if (ctx->pc == 0x2BA1F0u) {
        ctx->pc = 0x2BA1F4u;
        goto label_2ba1f4;
    }
    ctx->pc = 0x2BA1ECu;
    SET_GPR_U32(ctx, 31, 0x2BA1F4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BA1ECu, 0x2BA1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA1F4u;
label_2ba1f4:
    // 0x2ba1f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ba1f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba1f8:
    // 0x2ba1f8: 0xafa602f0  sw          $a2, 0x2F0($sp)
    ctx->pc = 0x2ba1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 6));
label_2ba1fc:
    // 0x2ba1fc: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x2ba1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_2ba200:
    // 0x2ba200: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2ba204:
    if (ctx->pc == 0x2BA204u) {
        ctx->pc = 0x2BA208u;
        goto label_2ba208;
    }
    ctx->pc = 0x2BA200u;
    {
        const bool branch_taken_0x2ba200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba200) {
            ctx->pc = 0x2BA21Cu;
            goto label_2ba21c;
        }
    }
    ctx->pc = 0x2BA208u;
label_2ba208:
    // 0x2ba208: 0x8fa402f0  lw          $a0, 0x2F0($sp)
    ctx->pc = 0x2ba208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_2ba20c:
    // 0x2ba20c: 0xc0ac49c  jal         func_2B1270
label_2ba210:
    if (ctx->pc == 0x2BA210u) {
        ctx->pc = 0x2BA214u;
        goto label_2ba214;
    }
    ctx->pc = 0x2BA20Cu;
    SET_GPR_U32(ctx, 31, 0x2BA214u);
    ctx->pc = 0x2B1270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1270u, 0x2BA20Cu, 0x2BA214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA214u;
label_2ba214:
    // 0x2ba214: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba218:
    // 0x2ba218: 0xafa402f0  sw          $a0, 0x2F0($sp)
    ctx->pc = 0x2ba218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 4));
label_2ba21c:
    // 0x2ba21c: 0x8fa502f0  lw          $a1, 0x2F0($sp)
    ctx->pc = 0x2ba21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
label_2ba220:
    // 0x2ba220: 0xafa50380  sw          $a1, 0x380($sp)
    ctx->pc = 0x2ba220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 5));
label_2ba224:
    // 0x2ba224: 0x1000021b  b           . + 4 + (0x21B << 2)
label_2ba228:
    if (ctx->pc == 0x2BA228u) {
        ctx->pc = 0x2BA22Cu;
        goto label_2ba22c;
    }
    ctx->pc = 0x2BA224u;
    {
        const bool branch_taken_0x2ba224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba224) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA22Cu;
label_2ba22c:
    // 0x2ba22c: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x2ba22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba230:
    // 0x2ba230: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba234:
    // 0x2ba234: 0xc119b68  jal         func_466DA0
label_2ba238:
    if (ctx->pc == 0x2BA238u) {
        ctx->pc = 0x2BA23Cu;
        goto label_2ba23c;
    }
    ctx->pc = 0x2BA234u;
    SET_GPR_U32(ctx, 31, 0x2BA23Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA234u, 0x2BA23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA23Cu;
label_2ba23c:
    // 0x2ba23c: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x2ba23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba240:
    // 0x2ba240: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ba240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba244:
    // 0x2ba244: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba248:
    // 0x2ba248: 0xc0400e0  jal         func_100380
label_2ba24c:
    if (ctx->pc == 0x2BA24Cu) {
        ctx->pc = 0x2BA250u;
        goto label_2ba250;
    }
    ctx->pc = 0x2BA248u;
    SET_GPR_U32(ctx, 31, 0x2BA250u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BA248u, 0x2BA250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA250u;
label_2ba250:
    // 0x2ba250: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba254:
    // 0x2ba254: 0xafa402ec  sw          $a0, 0x2EC($sp)
    ctx->pc = 0x2ba254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 4));
label_2ba258:
    // 0x2ba258: 0x8fa202ec  lw          $v0, 0x2EC($sp)
    ctx->pc = 0x2ba258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 748)));
label_2ba25c:
    // 0x2ba25c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ba260:
    if (ctx->pc == 0x2BA260u) {
        ctx->pc = 0x2BA264u;
        goto label_2ba264;
    }
    ctx->pc = 0x2BA25Cu;
    {
        const bool branch_taken_0x2ba25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba25c) {
            ctx->pc = 0x2BA274u;
            goto label_2ba274;
        }
    }
    ctx->pc = 0x2BA264u;
label_2ba264:
    // 0x2ba264: 0x8fa402ec  lw          $a0, 0x2EC($sp)
    ctx->pc = 0x2ba264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 748)));
label_2ba268:
    // 0x2ba268: 0xc09d6fc  jal         func_275BF0
label_2ba26c:
    if (ctx->pc == 0x2BA26Cu) {
        ctx->pc = 0x2BA270u;
        goto label_2ba270;
    }
    ctx->pc = 0x2BA268u;
    SET_GPR_U32(ctx, 31, 0x2BA270u);
    ctx->pc = 0x275BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275BF0u, 0x2BA268u, 0x2BA270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA270u;
label_2ba270:
    // 0x2ba270: 0xafa202ec  sw          $v0, 0x2EC($sp)
    ctx->pc = 0x2ba270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 2));
label_2ba274:
    // 0x2ba274: 0x8fa402ec  lw          $a0, 0x2EC($sp)
    ctx->pc = 0x2ba274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 748)));
label_2ba278:
    // 0x2ba278: 0xafa40380  sw          $a0, 0x380($sp)
    ctx->pc = 0x2ba278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 4));
label_2ba27c:
    // 0x2ba27c: 0x10000205  b           . + 4 + (0x205 << 2)
label_2ba280:
    if (ctx->pc == 0x2BA280u) {
        ctx->pc = 0x2BA284u;
        goto label_2ba284;
    }
    ctx->pc = 0x2BA27Cu;
    {
        const bool branch_taken_0x2ba27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba27c) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA284u;
label_2ba284:
    // 0x2ba284: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x2ba284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba288:
    // 0x2ba288: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba28c:
    // 0x2ba28c: 0xc119b68  jal         func_466DA0
label_2ba290:
    if (ctx->pc == 0x2BA290u) {
        ctx->pc = 0x2BA294u;
        goto label_2ba294;
    }
    ctx->pc = 0x2BA28Cu;
    SET_GPR_U32(ctx, 31, 0x2BA294u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA28Cu, 0x2BA294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA294u;
label_2ba294:
    // 0x2ba294: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2ba294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_2ba298:
    // 0x2ba298: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x2ba298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba29c:
    // 0x2ba29c: 0x7ba500a0  lq          $a1, 0xA0($sp)
    ctx->pc = 0x2ba29cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2ba2a0:
    // 0x2ba2a0: 0xc0400e0  jal         func_100380
label_2ba2a4:
    if (ctx->pc == 0x2BA2A4u) {
        ctx->pc = 0x2BA2A8u;
        goto label_2ba2a8;
    }
    ctx->pc = 0x2BA2A0u;
    SET_GPR_U32(ctx, 31, 0x2BA2A8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BA2A0u, 0x2BA2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA2A8u;
label_2ba2a8:
    // 0x2ba2a8: 0xafa202e8  sw          $v0, 0x2E8($sp)
    ctx->pc = 0x2ba2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 2));
label_2ba2ac:
    // 0x2ba2ac: 0x8fa302e8  lw          $v1, 0x2E8($sp)
    ctx->pc = 0x2ba2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
label_2ba2b0:
    // 0x2ba2b0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2ba2b4:
    if (ctx->pc == 0x2BA2B4u) {
        ctx->pc = 0x2BA2B8u;
        goto label_2ba2b8;
    }
    ctx->pc = 0x2BA2B0u;
    {
        const bool branch_taken_0x2ba2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba2b0) {
            ctx->pc = 0x2BA2C8u;
            goto label_2ba2c8;
        }
    }
    ctx->pc = 0x2BA2B8u;
label_2ba2b8:
    // 0x2ba2b8: 0x8fa402e8  lw          $a0, 0x2E8($sp)
    ctx->pc = 0x2ba2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
label_2ba2bc:
    // 0x2ba2bc: 0xc09d7dc  jal         func_275F70
label_2ba2c0:
    if (ctx->pc == 0x2BA2C0u) {
        ctx->pc = 0x2BA2C4u;
        goto label_2ba2c4;
    }
    ctx->pc = 0x2BA2BCu;
    SET_GPR_U32(ctx, 31, 0x2BA2C4u);
    ctx->pc = 0x275F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275F70u, 0x2BA2BCu, 0x2BA2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA2C4u;
label_2ba2c4:
    // 0x2ba2c4: 0xafa202e8  sw          $v0, 0x2E8($sp)
    ctx->pc = 0x2ba2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 2));
label_2ba2c8:
    // 0x2ba2c8: 0x8fa202e8  lw          $v0, 0x2E8($sp)
    ctx->pc = 0x2ba2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
label_2ba2cc:
    // 0x2ba2cc: 0xafa20380  sw          $v0, 0x380($sp)
    ctx->pc = 0x2ba2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 2));
label_2ba2d0:
    // 0x2ba2d0: 0x100001f0  b           . + 4 + (0x1F0 << 2)
label_2ba2d4:
    if (ctx->pc == 0x2BA2D4u) {
        ctx->pc = 0x2BA2D8u;
        goto label_2ba2d8;
    }
    ctx->pc = 0x2BA2D0u;
    {
        const bool branch_taken_0x2ba2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba2d0) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA2D8u;
label_2ba2d8:
    // 0x2ba2d8: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x2ba2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba2dc:
    // 0x2ba2dc: 0xc119b68  jal         func_466DA0
label_2ba2e0:
    if (ctx->pc == 0x2BA2E0u) {
        ctx->pc = 0x2BA2E4u;
        goto label_2ba2e4;
    }
    ctx->pc = 0x2BA2DCu;
    SET_GPR_U32(ctx, 31, 0x2BA2E4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA2DCu, 0x2BA2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA2E4u;
label_2ba2e4:
    // 0x2ba2e4: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x2ba2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba2e8:
    // 0x2ba2e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba2ec:
    // 0x2ba2ec: 0xc0400e0  jal         func_100380
label_2ba2f0:
    if (ctx->pc == 0x2BA2F0u) {
        ctx->pc = 0x2BA2F4u;
        goto label_2ba2f4;
    }
    ctx->pc = 0x2BA2ECu;
    SET_GPR_U32(ctx, 31, 0x2BA2F4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BA2ECu, 0x2BA2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA2F4u;
label_2ba2f4:
    // 0x2ba2f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba2f8:
    // 0x2ba2f8: 0xafa402e4  sw          $a0, 0x2E4($sp)
    ctx->pc = 0x2ba2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 4));
label_2ba2fc:
    // 0x2ba2fc: 0x8fa202e4  lw          $v0, 0x2E4($sp)
    ctx->pc = 0x2ba2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
label_2ba300:
    // 0x2ba300: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2ba304:
    if (ctx->pc == 0x2BA304u) {
        ctx->pc = 0x2BA308u;
        goto label_2ba308;
    }
    ctx->pc = 0x2BA300u;
    {
        const bool branch_taken_0x2ba300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba300) {
            ctx->pc = 0x2BA320u;
            goto label_2ba320;
        }
    }
    ctx->pc = 0x2BA308u;
label_2ba308:
    // 0x2ba308: 0x8fa502e4  lw          $a1, 0x2E4($sp)
    ctx->pc = 0x2ba308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
label_2ba30c:
    // 0x2ba30c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ba30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba310:
    // 0x2ba310: 0xc09dd98  jal         func_277660
label_2ba314:
    if (ctx->pc == 0x2BA314u) {
        ctx->pc = 0x2BA318u;
        goto label_2ba318;
    }
    ctx->pc = 0x2BA310u;
    SET_GPR_U32(ctx, 31, 0x2BA318u);
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x2BA310u, 0x2BA318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA318u;
label_2ba318:
    // 0x2ba318: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba31c:
    // 0x2ba31c: 0xafa402e4  sw          $a0, 0x2E4($sp)
    ctx->pc = 0x2ba31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 4));
label_2ba320:
    // 0x2ba320: 0x8fa202e4  lw          $v0, 0x2E4($sp)
    ctx->pc = 0x2ba320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
label_2ba324:
    // 0x2ba324: 0xafa20380  sw          $v0, 0x380($sp)
    ctx->pc = 0x2ba324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 2));
label_2ba328:
    // 0x2ba328: 0x100001da  b           . + 4 + (0x1DA << 2)
label_2ba32c:
    if (ctx->pc == 0x2BA32Cu) {
        ctx->pc = 0x2BA330u;
        goto label_2ba330;
    }
    ctx->pc = 0x2BA328u;
    {
        const bool branch_taken_0x2ba328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba328) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA330u;
label_2ba330:
    // 0x2ba330: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x2ba330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba334:
    // 0x2ba334: 0xc119b68  jal         func_466DA0
label_2ba338:
    if (ctx->pc == 0x2BA338u) {
        ctx->pc = 0x2BA33Cu;
        goto label_2ba33c;
    }
    ctx->pc = 0x2BA334u;
    SET_GPR_U32(ctx, 31, 0x2BA33Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA334u, 0x2BA33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA33Cu;
label_2ba33c:
    // 0x2ba33c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba33cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba340:
    // 0x2ba340: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x2ba340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba344:
    // 0x2ba344: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba348:
    // 0x2ba348: 0xc0400e0  jal         func_100380
label_2ba34c:
    if (ctx->pc == 0x2BA34Cu) {
        ctx->pc = 0x2BA350u;
        goto label_2ba350;
    }
    ctx->pc = 0x2BA348u;
    SET_GPR_U32(ctx, 31, 0x2BA350u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BA348u, 0x2BA350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA350u;
label_2ba350:
    // 0x2ba350: 0xafa202e0  sw          $v0, 0x2E0($sp)
    ctx->pc = 0x2ba350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 2));
label_2ba354:
    // 0x2ba354: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x2ba354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_2ba358:
    // 0x2ba358: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2ba35c:
    if (ctx->pc == 0x2BA35Cu) {
        ctx->pc = 0x2BA360u;
        goto label_2ba360;
    }
    ctx->pc = 0x2BA358u;
    {
        const bool branch_taken_0x2ba358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba358) {
            ctx->pc = 0x2BA374u;
            goto label_2ba374;
        }
    }
    ctx->pc = 0x2BA360u;
label_2ba360:
    // 0x2ba360: 0x8fa502e0  lw          $a1, 0x2E0($sp)
    ctx->pc = 0x2ba360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_2ba364:
    // 0x2ba364: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ba364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba368:
    // 0x2ba368: 0xc09d784  jal         func_275E10
label_2ba36c:
    if (ctx->pc == 0x2BA36Cu) {
        ctx->pc = 0x2BA370u;
        goto label_2ba370;
    }
    ctx->pc = 0x2BA368u;
    SET_GPR_U32(ctx, 31, 0x2BA370u);
    ctx->pc = 0x275E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275E10u, 0x2BA368u, 0x2BA370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA370u;
label_2ba370:
    // 0x2ba370: 0xafa202e0  sw          $v0, 0x2E0($sp)
    ctx->pc = 0x2ba370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 2));
label_2ba374:
    // 0x2ba374: 0x8fa202e0  lw          $v0, 0x2E0($sp)
    ctx->pc = 0x2ba374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_2ba378:
    // 0x2ba378: 0xafa20380  sw          $v0, 0x380($sp)
    ctx->pc = 0x2ba378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 2));
label_2ba37c:
    // 0x2ba37c: 0x100001c5  b           . + 4 + (0x1C5 << 2)
label_2ba380:
    if (ctx->pc == 0x2BA380u) {
        ctx->pc = 0x2BA384u;
        goto label_2ba384;
    }
    ctx->pc = 0x2BA37Cu;
    {
        const bool branch_taken_0x2ba37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba37c) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA384u;
label_2ba384:
    // 0x2ba384: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2ba384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2ba388:
    // 0x2ba388: 0xc119b68  jal         func_466DA0
label_2ba38c:
    if (ctx->pc == 0x2BA38Cu) {
        ctx->pc = 0x2BA390u;
        goto label_2ba390;
    }
    ctx->pc = 0x2BA388u;
    SET_GPR_U32(ctx, 31, 0x2BA390u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA388u, 0x2BA390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA390u;
label_2ba390:
    // 0x2ba390: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba394:
    // 0x2ba394: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2ba394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2ba398:
    // 0x2ba398: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba39c:
    // 0x2ba39c: 0xc0400e0  jal         func_100380
label_2ba3a0:
    if (ctx->pc == 0x2BA3A0u) {
        ctx->pc = 0x2BA3A4u;
        goto label_2ba3a4;
    }
    ctx->pc = 0x2BA39Cu;
    SET_GPR_U32(ctx, 31, 0x2BA3A4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BA39Cu, 0x2BA3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA3A4u;
label_2ba3a4:
    // 0x2ba3a4: 0xafa202dc  sw          $v0, 0x2DC($sp)
    ctx->pc = 0x2ba3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 2));
label_2ba3a8:
    // 0x2ba3a8: 0x8fa502dc  lw          $a1, 0x2DC($sp)
    ctx->pc = 0x2ba3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
label_2ba3ac:
    // 0x2ba3ac: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_2ba3b0:
    if (ctx->pc == 0x2BA3B0u) {
        ctx->pc = 0x2BA3B4u;
        goto label_2ba3b4;
    }
    ctx->pc = 0x2BA3ACu;
    {
        const bool branch_taken_0x2ba3ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba3ac) {
            ctx->pc = 0x2BA3C8u;
            goto label_2ba3c8;
        }
    }
    ctx->pc = 0x2BA3B4u;
label_2ba3b4:
    // 0x2ba3b4: 0x8fa402dc  lw          $a0, 0x2DC($sp)
    ctx->pc = 0x2ba3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
label_2ba3b8:
    // 0x2ba3b8: 0xc0a71d8  jal         func_29C760
label_2ba3bc:
    if (ctx->pc == 0x2BA3BCu) {
        ctx->pc = 0x2BA3C0u;
        goto label_2ba3c0;
    }
    ctx->pc = 0x2BA3B8u;
    SET_GPR_U32(ctx, 31, 0x2BA3C0u);
    ctx->pc = 0x29C760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C760u, 0x2BA3B8u, 0x2BA3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA3C0u;
label_2ba3c0:
    // 0x2ba3c0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ba3c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba3c4:
    // 0x2ba3c4: 0xafa302dc  sw          $v1, 0x2DC($sp)
    ctx->pc = 0x2ba3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 3));
label_2ba3c8:
    // 0x2ba3c8: 0x8fa402dc  lw          $a0, 0x2DC($sp)
    ctx->pc = 0x2ba3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
label_2ba3cc:
    // 0x2ba3cc: 0xafa40380  sw          $a0, 0x380($sp)
    ctx->pc = 0x2ba3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 4));
label_2ba3d0:
    // 0x2ba3d0: 0x100001b0  b           . + 4 + (0x1B0 << 2)
label_2ba3d4:
    if (ctx->pc == 0x2BA3D4u) {
        ctx->pc = 0x2BA3D8u;
        goto label_2ba3d8;
    }
    ctx->pc = 0x2BA3D0u;
    {
        const bool branch_taken_0x2ba3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba3d0) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA3D8u;
label_2ba3d8:
    // 0x2ba3d8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2ba3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2ba3dc:
    // 0x2ba3dc: 0xc119b68  jal         func_466DA0
label_2ba3e0:
    if (ctx->pc == 0x2BA3E0u) {
        ctx->pc = 0x2BA3E4u;
        goto label_2ba3e4;
    }
    ctx->pc = 0x2BA3DCu;
    SET_GPR_U32(ctx, 31, 0x2BA3E4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA3DCu, 0x2BA3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA3E4u;
label_2ba3e4:
    // 0x2ba3e4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2ba3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2ba3e8:
    // 0x2ba3e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba3ec:
    // 0x2ba3ec: 0xc0400e0  jal         func_100380
label_2ba3f0:
    if (ctx->pc == 0x2BA3F0u) {
        ctx->pc = 0x2BA3F4u;
        goto label_2ba3f4;
    }
    ctx->pc = 0x2BA3ECu;
    SET_GPR_U32(ctx, 31, 0x2BA3F4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BA3ECu, 0x2BA3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA3F4u;
label_2ba3f4:
    // 0x2ba3f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba3f8:
    // 0x2ba3f8: 0xafa402d8  sw          $a0, 0x2D8($sp)
    ctx->pc = 0x2ba3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 4));
label_2ba3fc:
    // 0x2ba3fc: 0x8fa202d8  lw          $v0, 0x2D8($sp)
    ctx->pc = 0x2ba3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
label_2ba400:
    // 0x2ba400: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ba404:
    if (ctx->pc == 0x2BA404u) {
        ctx->pc = 0x2BA408u;
        goto label_2ba408;
    }
    ctx->pc = 0x2BA400u;
    {
        const bool branch_taken_0x2ba400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba400) {
            ctx->pc = 0x2BA418u;
            goto label_2ba418;
        }
    }
    ctx->pc = 0x2BA408u;
label_2ba408:
    // 0x2ba408: 0x8fa402d8  lw          $a0, 0x2D8($sp)
    ctx->pc = 0x2ba408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
label_2ba40c:
    // 0x2ba40c: 0xc0a77d0  jal         func_29DF40
label_2ba410:
    if (ctx->pc == 0x2BA410u) {
        ctx->pc = 0x2BA414u;
        goto label_2ba414;
    }
    ctx->pc = 0x2BA40Cu;
    SET_GPR_U32(ctx, 31, 0x2BA414u);
    ctx->pc = 0x29DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DF40u, 0x2BA40Cu, 0x2BA414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA414u;
label_2ba414:
    // 0x2ba414: 0xafa202d8  sw          $v0, 0x2D8($sp)
    ctx->pc = 0x2ba414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 2));
label_2ba418:
    // 0x2ba418: 0x8fa502d8  lw          $a1, 0x2D8($sp)
    ctx->pc = 0x2ba418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
label_2ba41c:
    // 0x2ba41c: 0xafa50380  sw          $a1, 0x380($sp)
    ctx->pc = 0x2ba41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 5));
label_2ba420:
    // 0x2ba420: 0x1000019c  b           . + 4 + (0x19C << 2)
label_2ba424:
    if (ctx->pc == 0x2BA424u) {
        ctx->pc = 0x2BA428u;
        goto label_2ba428;
    }
    ctx->pc = 0x2BA420u;
    {
        const bool branch_taken_0x2ba420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba420) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA428u;
label_2ba428:
    // 0x2ba428: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x2ba428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba42c:
    // 0x2ba42c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba430:
    // 0x2ba430: 0xc119b68  jal         func_466DA0
label_2ba434:
    if (ctx->pc == 0x2BA434u) {
        ctx->pc = 0x2BA438u;
        goto label_2ba438;
    }
    ctx->pc = 0x2BA430u;
    SET_GPR_U32(ctx, 31, 0x2BA438u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA430u, 0x2BA438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA438u;
label_2ba438:
    // 0x2ba438: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2ba438u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba43c:
    // 0x2ba43c: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x2ba43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba440:
    // 0x2ba440: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2ba440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ba444:
    // 0x2ba444: 0xc0400e0  jal         func_100380
label_2ba448:
    if (ctx->pc == 0x2BA448u) {
        ctx->pc = 0x2BA44Cu;
        goto label_2ba44c;
    }
    ctx->pc = 0x2BA444u;
    SET_GPR_U32(ctx, 31, 0x2BA44Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BA444u, 0x2BA44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA44Cu;
label_2ba44c:
    // 0x2ba44c: 0xafa202d4  sw          $v0, 0x2D4($sp)
    ctx->pc = 0x2ba44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 2));
label_2ba450:
    // 0x2ba450: 0x8fa202d4  lw          $v0, 0x2D4($sp)
    ctx->pc = 0x2ba450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
label_2ba454:
    // 0x2ba454: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2ba458:
    if (ctx->pc == 0x2BA458u) {
        ctx->pc = 0x2BA45Cu;
        goto label_2ba45c;
    }
    ctx->pc = 0x2BA454u;
    {
        const bool branch_taken_0x2ba454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba454) {
            ctx->pc = 0x2BA474u;
            goto label_2ba474;
        }
    }
    ctx->pc = 0x2BA45Cu;
label_2ba45c:
    // 0x2ba45c: 0x8fa302d4  lw          $v1, 0x2D4($sp)
    ctx->pc = 0x2ba45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
label_2ba460:
    // 0x2ba460: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2ba460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ba464:
    // 0x2ba464: 0xc0a6fec  jal         func_29BFB0
label_2ba468:
    if (ctx->pc == 0x2BA468u) {
        ctx->pc = 0x2BA46Cu;
        goto label_2ba46c;
    }
    ctx->pc = 0x2BA464u;
    SET_GPR_U32(ctx, 31, 0x2BA46Cu);
    ctx->pc = 0x29BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29BFB0u, 0x2BA464u, 0x2BA46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA46Cu;
label_2ba46c:
    // 0x2ba46c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba470:
    // 0x2ba470: 0xafa402d4  sw          $a0, 0x2D4($sp)
    ctx->pc = 0x2ba470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 4));
label_2ba474:
    // 0x2ba474: 0x8fa202d4  lw          $v0, 0x2D4($sp)
    ctx->pc = 0x2ba474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
label_2ba478:
    // 0x2ba478: 0xafa20380  sw          $v0, 0x380($sp)
    ctx->pc = 0x2ba478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 2));
label_2ba47c:
    // 0x2ba47c: 0x10000185  b           . + 4 + (0x185 << 2)
label_2ba480:
    if (ctx->pc == 0x2BA480u) {
        ctx->pc = 0x2BA484u;
        goto label_2ba484;
    }
    ctx->pc = 0x2BA47Cu;
    {
        const bool branch_taken_0x2ba47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba47c) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA484u;
label_2ba484:
    // 0x2ba484: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x2ba484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba488:
    // 0x2ba488: 0xc119b68  jal         func_466DA0
label_2ba48c:
    if (ctx->pc == 0x2BA48Cu) {
        ctx->pc = 0x2BA490u;
        goto label_2ba490;
    }
    ctx->pc = 0x2BA488u;
    SET_GPR_U32(ctx, 31, 0x2BA490u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA488u, 0x2BA490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA490u;
label_2ba490:
    // 0x2ba490: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x2ba490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba494:
    // 0x2ba494: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2ba494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ba498:
    // 0x2ba498: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba49c:
    // 0x2ba49c: 0xc0400e0  jal         func_100380
label_2ba4a0:
    if (ctx->pc == 0x2BA4A0u) {
        ctx->pc = 0x2BA4A4u;
        goto label_2ba4a4;
    }
    ctx->pc = 0x2BA49Cu;
    SET_GPR_U32(ctx, 31, 0x2BA4A4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BA49Cu, 0x2BA4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA4A4u;
label_2ba4a4:
    // 0x2ba4a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba4a8:
    // 0x2ba4a8: 0xafa502d0  sw          $a1, 0x2D0($sp)
    ctx->pc = 0x2ba4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 5));
label_2ba4ac:
    // 0x2ba4ac: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x2ba4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_2ba4b0:
    // 0x2ba4b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2ba4b4:
    if (ctx->pc == 0x2BA4B4u) {
        ctx->pc = 0x2BA4B8u;
        goto label_2ba4b8;
    }
    ctx->pc = 0x2BA4B0u;
    {
        const bool branch_taken_0x2ba4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba4b0) {
            ctx->pc = 0x2BA4D0u;
            goto label_2ba4d0;
        }
    }
    ctx->pc = 0x2BA4B8u;
label_2ba4b8:
    // 0x2ba4b8: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x2ba4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_2ba4bc:
    // 0x2ba4bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba4c0:
    // 0x2ba4c0: 0xc09d468  jal         func_2751A0
label_2ba4c4:
    if (ctx->pc == 0x2BA4C4u) {
        ctx->pc = 0x2BA4C8u;
        goto label_2ba4c8;
    }
    ctx->pc = 0x2BA4C0u;
    SET_GPR_U32(ctx, 31, 0x2BA4C8u);
    ctx->pc = 0x2751A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751A0u, 0x2BA4C0u, 0x2BA4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA4C8u;
label_2ba4c8:
    // 0x2ba4c8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2ba4c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba4cc:
    // 0x2ba4cc: 0xafb602d0  sw          $s6, 0x2D0($sp)
    ctx->pc = 0x2ba4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 22));
label_2ba4d0:
    // 0x2ba4d0: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x2ba4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_2ba4d4:
    // 0x2ba4d4: 0xafa30380  sw          $v1, 0x380($sp)
    ctx->pc = 0x2ba4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 3));
label_2ba4d8:
    // 0x2ba4d8: 0x1000016e  b           . + 4 + (0x16E << 2)
label_2ba4dc:
    if (ctx->pc == 0x2BA4DCu) {
        ctx->pc = 0x2BA4E0u;
        goto label_2ba4e0;
    }
    ctx->pc = 0x2BA4D8u;
    {
        const bool branch_taken_0x2ba4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba4d8) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA4E0u;
label_2ba4e0:
    // 0x2ba4e0: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x2ba4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba4e4:
    // 0x2ba4e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ba4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba4e8:
    // 0x2ba4e8: 0xc119b68  jal         func_466DA0
label_2ba4ec:
    if (ctx->pc == 0x2BA4ECu) {
        ctx->pc = 0x2BA4F0u;
        goto label_2ba4f0;
    }
    ctx->pc = 0x2BA4E8u;
    SET_GPR_U32(ctx, 31, 0x2BA4F0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA4E8u, 0x2BA4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA4F0u;
label_2ba4f0:
    // 0x2ba4f0: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x2ba4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba4f4:
    // 0x2ba4f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba4f8:
    // 0x2ba4f8: 0xc0400e0  jal         func_100380
label_2ba4fc:
    if (ctx->pc == 0x2BA4FCu) {
        ctx->pc = 0x2BA500u;
        goto label_2ba500;
    }
    ctx->pc = 0x2BA4F8u;
    SET_GPR_U32(ctx, 31, 0x2BA500u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BA4F8u, 0x2BA500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA500u;
label_2ba500:
    // 0x2ba500: 0xafa202cc  sw          $v0, 0x2CC($sp)
    ctx->pc = 0x2ba500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 2));
label_2ba504:
    // 0x2ba504: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x2ba504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
label_2ba508:
    // 0x2ba508: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2ba50c:
    if (ctx->pc == 0x2BA50Cu) {
        ctx->pc = 0x2BA510u;
        goto label_2ba510;
    }
    ctx->pc = 0x2BA508u;
    {
        const bool branch_taken_0x2ba508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba508) {
            ctx->pc = 0x2BA524u;
            goto label_2ba524;
        }
    }
    ctx->pc = 0x2BA510u;
label_2ba510:
    // 0x2ba510: 0x8fa502cc  lw          $a1, 0x2CC($sp)
    ctx->pc = 0x2ba510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
label_2ba514:
    // 0x2ba514: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ba514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba518:
    // 0x2ba518: 0xc0aa998  jal         func_2AA660
label_2ba51c:
    if (ctx->pc == 0x2BA51Cu) {
        ctx->pc = 0x2BA520u;
        goto label_2ba520;
    }
    ctx->pc = 0x2BA518u;
    SET_GPR_U32(ctx, 31, 0x2BA520u);
    ctx->pc = 0x2AA660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA660u, 0x2BA518u, 0x2BA520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA520u;
label_2ba520:
    // 0x2ba520: 0xafa202cc  sw          $v0, 0x2CC($sp)
    ctx->pc = 0x2ba520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 2));
label_2ba524:
    // 0x2ba524: 0x8fa402cc  lw          $a0, 0x2CC($sp)
    ctx->pc = 0x2ba524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 716)));
label_2ba528:
    // 0x2ba528: 0xafa40380  sw          $a0, 0x380($sp)
    ctx->pc = 0x2ba528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 4));
label_2ba52c:
    // 0x2ba52c: 0x10000159  b           . + 4 + (0x159 << 2)
label_2ba530:
    if (ctx->pc == 0x2BA530u) {
        ctx->pc = 0x2BA534u;
        goto label_2ba534;
    }
    ctx->pc = 0x2BA52Cu;
    {
        const bool branch_taken_0x2ba52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba52c) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA534u;
label_2ba534:
    // 0x2ba534: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x2ba534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba538:
    // 0x2ba538: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba53c:
    // 0x2ba53c: 0xc119b68  jal         func_466DA0
label_2ba540:
    if (ctx->pc == 0x2BA540u) {
        ctx->pc = 0x2BA544u;
        goto label_2ba544;
    }
    ctx->pc = 0x2BA53Cu;
    SET_GPR_U32(ctx, 31, 0x2BA544u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA53Cu, 0x2BA544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA544u;
label_2ba544:
    // 0x2ba544: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x2ba544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba548:
    // 0x2ba548: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2ba548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ba54c:
    // 0x2ba54c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba550:
    // 0x2ba550: 0xc0400e0  jal         func_100380
label_2ba554:
    if (ctx->pc == 0x2BA554u) {
        ctx->pc = 0x2BA558u;
        goto label_2ba558;
    }
    ctx->pc = 0x2BA550u;
    SET_GPR_U32(ctx, 31, 0x2BA558u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BA550u, 0x2BA558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA558u;
label_2ba558:
    // 0x2ba558: 0xafa202c8  sw          $v0, 0x2C8($sp)
    ctx->pc = 0x2ba558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 2));
label_2ba55c:
    // 0x2ba55c: 0x8fa202c8  lw          $v0, 0x2C8($sp)
    ctx->pc = 0x2ba55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
label_2ba560:
    // 0x2ba560: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2ba564:
    if (ctx->pc == 0x2BA564u) {
        ctx->pc = 0x2BA568u;
        goto label_2ba568;
    }
    ctx->pc = 0x2BA560u;
    {
        const bool branch_taken_0x2ba560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba560) {
            ctx->pc = 0x2BA584u;
            goto label_2ba584;
        }
    }
    ctx->pc = 0x2BA568u;
label_2ba568:
    // 0x2ba568: 0x8fa502c8  lw          $a1, 0x2C8($sp)
    ctx->pc = 0x2ba568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
label_2ba56c:
    // 0x2ba56c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ba56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba570:
    // 0x2ba570: 0xc0b715c  jal         func_2DC570
label_2ba574:
    if (ctx->pc == 0x2BA574u) {
        ctx->pc = 0x2BA578u;
        goto label_2ba578;
    }
    ctx->pc = 0x2BA570u;
    SET_GPR_U32(ctx, 31, 0x2BA578u);
    ctx->pc = 0x2DC570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC570u, 0x2BA570u, 0x2BA578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA578u;
label_2ba578:
    // 0x2ba578: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x2ba578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
label_2ba57c:
    // 0x2ba57c: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x2ba57cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_2ba580:
    // 0x2ba580: 0xafa202c8  sw          $v0, 0x2C8($sp)
    ctx->pc = 0x2ba580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 2));
label_2ba584:
    // 0x2ba584: 0x8fa202c8  lw          $v0, 0x2C8($sp)
    ctx->pc = 0x2ba584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
label_2ba588:
    // 0x2ba588: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x2ba588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_2ba58c:
    // 0x2ba58c: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x2ba58cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_2ba590:
    // 0x2ba590: 0xafa20380  sw          $v0, 0x380($sp)
    ctx->pc = 0x2ba590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 2));
label_2ba594:
    // 0x2ba594: 0x1000013f  b           . + 4 + (0x13F << 2)
label_2ba598:
    if (ctx->pc == 0x2BA598u) {
        ctx->pc = 0x2BA59Cu;
        goto label_2ba59c;
    }
    ctx->pc = 0x2BA594u;
    {
        const bool branch_taken_0x2ba594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba594) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA59Cu;
label_2ba59c:
    // 0x2ba59c: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x2ba59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba5a0:
    // 0x2ba5a0: 0xc119b68  jal         func_466DA0
label_2ba5a4:
    if (ctx->pc == 0x2BA5A4u) {
        ctx->pc = 0x2BA5A8u;
        goto label_2ba5a8;
    }
    ctx->pc = 0x2BA5A0u;
    SET_GPR_U32(ctx, 31, 0x2BA5A8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA5A0u, 0x2BA5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA5A8u;
label_2ba5a8:
    // 0x2ba5a8: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x2ba5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba5ac:
    // 0x2ba5ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba5b0:
    // 0x2ba5b0: 0xc0400e0  jal         func_100380
label_2ba5b4:
    if (ctx->pc == 0x2BA5B4u) {
        ctx->pc = 0x2BA5B8u;
        goto label_2ba5b8;
    }
    ctx->pc = 0x2BA5B0u;
    SET_GPR_U32(ctx, 31, 0x2BA5B8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BA5B0u, 0x2BA5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA5B8u;
label_2ba5b8:
    // 0x2ba5b8: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x2ba5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_2ba5bc:
    // 0x2ba5bc: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x2ba5bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_2ba5c0:
    // 0x2ba5c0: 0xafa202c4  sw          $v0, 0x2C4($sp)
    ctx->pc = 0x2ba5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 2));
label_2ba5c4:
    // 0x2ba5c4: 0x8fa202c4  lw          $v0, 0x2C4($sp)
    ctx->pc = 0x2ba5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
label_2ba5c8:
    // 0x2ba5c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2ba5cc:
    if (ctx->pc == 0x2BA5CCu) {
        ctx->pc = 0x2BA5D0u;
        goto label_2ba5d0;
    }
    ctx->pc = 0x2BA5C8u;
    {
        const bool branch_taken_0x2ba5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba5c8) {
            ctx->pc = 0x2BA5E4u;
            goto label_2ba5e4;
        }
    }
    ctx->pc = 0x2BA5D0u;
label_2ba5d0:
    // 0x2ba5d0: 0x8fa502c4  lw          $a1, 0x2C4($sp)
    ctx->pc = 0x2ba5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
label_2ba5d4:
    // 0x2ba5d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ba5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba5d8:
    // 0x2ba5d8: 0xc09d694  jal         func_275A50
label_2ba5dc:
    if (ctx->pc == 0x2BA5DCu) {
        ctx->pc = 0x2BA5E0u;
        goto label_2ba5e0;
    }
    ctx->pc = 0x2BA5D8u;
    SET_GPR_U32(ctx, 31, 0x2BA5E0u);
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x2BA5D8u, 0x2BA5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA5E0u;
label_2ba5e0:
    // 0x2ba5e0: 0xafa202c4  sw          $v0, 0x2C4($sp)
    ctx->pc = 0x2ba5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 2));
label_2ba5e4:
    // 0x2ba5e4: 0x8fa402c4  lw          $a0, 0x2C4($sp)
    ctx->pc = 0x2ba5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
label_2ba5e8:
    // 0x2ba5e8: 0xafa40380  sw          $a0, 0x380($sp)
    ctx->pc = 0x2ba5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 4));
label_2ba5ec:
    // 0x2ba5ec: 0x10000129  b           . + 4 + (0x129 << 2)
label_2ba5f0:
    if (ctx->pc == 0x2BA5F0u) {
        ctx->pc = 0x2BA5F4u;
        goto label_2ba5f4;
    }
    ctx->pc = 0x2BA5ECu;
    {
        const bool branch_taken_0x2ba5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba5ec) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA5F4u;
label_2ba5f4:
    // 0x2ba5f4: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x2ba5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba5f8:
    // 0x2ba5f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ba5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba5fc:
    // 0x2ba5fc: 0xc119b68  jal         func_466DA0
label_2ba600:
    if (ctx->pc == 0x2BA600u) {
        ctx->pc = 0x2BA604u;
        goto label_2ba604;
    }
    ctx->pc = 0x2BA5FCu;
    SET_GPR_U32(ctx, 31, 0x2BA604u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA5FCu, 0x2BA604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA604u;
label_2ba604:
    // 0x2ba604: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x2ba604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_2ba608:
    // 0x2ba608: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x2ba608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba60c:
    // 0x2ba60c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ba60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba610:
    // 0x2ba610: 0x7ba50110  lq          $a1, 0x110($sp)
    ctx->pc = 0x2ba610u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2ba614:
    // 0x2ba614: 0xc0400e0  jal         func_100380
label_2ba618:
    if (ctx->pc == 0x2BA618u) {
        ctx->pc = 0x2BA61Cu;
        goto label_2ba61c;
    }
    ctx->pc = 0x2BA614u;
    SET_GPR_U32(ctx, 31, 0x2BA61Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BA614u, 0x2BA61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA61Cu;
label_2ba61c:
    // 0x2ba61c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba620:
    // 0x2ba620: 0xafa402c0  sw          $a0, 0x2C0($sp)
    ctx->pc = 0x2ba620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 4));
label_2ba624:
    // 0x2ba624: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x2ba624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_2ba628:
    // 0x2ba628: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2ba62c:
    if (ctx->pc == 0x2BA62Cu) {
        ctx->pc = 0x2BA630u;
        goto label_2ba630;
    }
    ctx->pc = 0x2BA628u;
    {
        const bool branch_taken_0x2ba628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba628) {
            ctx->pc = 0x2BA644u;
            goto label_2ba644;
        }
    }
    ctx->pc = 0x2BA630u;
label_2ba630:
    // 0x2ba630: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x2ba630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_2ba634:
    // 0x2ba634: 0xc0b70f0  jal         func_2DC3C0
label_2ba638:
    if (ctx->pc == 0x2BA638u) {
        ctx->pc = 0x2BA63Cu;
        goto label_2ba63c;
    }
    ctx->pc = 0x2BA634u;
    SET_GPR_U32(ctx, 31, 0x2BA63Cu);
    ctx->pc = 0x2DC3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC3C0u, 0x2BA634u, 0x2BA63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA63Cu;
label_2ba63c:
    // 0x2ba63c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba640:
    // 0x2ba640: 0xafa502c0  sw          $a1, 0x2C0($sp)
    ctx->pc = 0x2ba640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 5));
label_2ba644:
    // 0x2ba644: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x2ba644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_2ba648:
    // 0x2ba648: 0xafa20380  sw          $v0, 0x380($sp)
    ctx->pc = 0x2ba648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 2));
label_2ba64c:
    // 0x2ba64c: 0x10000111  b           . + 4 + (0x111 << 2)
label_2ba650:
    if (ctx->pc == 0x2BA650u) {
        ctx->pc = 0x2BA654u;
        goto label_2ba654;
    }
    ctx->pc = 0x2BA64Cu;
    {
        const bool branch_taken_0x2ba64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba64c) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA654u;
label_2ba654:
    // 0x2ba654: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x2ba654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba658:
    // 0x2ba658: 0xc119b68  jal         func_466DA0
label_2ba65c:
    if (ctx->pc == 0x2BA65Cu) {
        ctx->pc = 0x2BA660u;
        goto label_2ba660;
    }
    ctx->pc = 0x2BA658u;
    SET_GPR_U32(ctx, 31, 0x2BA660u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA658u, 0x2BA660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA660u;
label_2ba660:
    // 0x2ba660: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x2ba660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba664:
    // 0x2ba664: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ba664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba668:
    // 0x2ba668: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba66c:
    // 0x2ba66c: 0xc0400e0  jal         func_100380
label_2ba670:
    if (ctx->pc == 0x2BA670u) {
        ctx->pc = 0x2BA674u;
        goto label_2ba674;
    }
    ctx->pc = 0x2BA66Cu;
    SET_GPR_U32(ctx, 31, 0x2BA674u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BA66Cu, 0x2BA674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA674u;
label_2ba674:
    // 0x2ba674: 0xafa202bc  sw          $v0, 0x2BC($sp)
    ctx->pc = 0x2ba674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 2));
label_2ba678:
    // 0x2ba678: 0x8fa402bc  lw          $a0, 0x2BC($sp)
    ctx->pc = 0x2ba678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
label_2ba67c:
    // 0x2ba67c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2ba680:
    if (ctx->pc == 0x2BA680u) {
        ctx->pc = 0x2BA684u;
        goto label_2ba684;
    }
    ctx->pc = 0x2BA67Cu;
    {
        const bool branch_taken_0x2ba67c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba67c) {
            ctx->pc = 0x2BA698u;
            goto label_2ba698;
        }
    }
    ctx->pc = 0x2BA684u;
label_2ba684:
    // 0x2ba684: 0x8fa502bc  lw          $a1, 0x2BC($sp)
    ctx->pc = 0x2ba684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
label_2ba688:
    // 0x2ba688: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ba688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba68c:
    // 0x2ba68c: 0xc0aee4c  jal         func_2BB930
label_2ba690:
    if (ctx->pc == 0x2BA690u) {
        ctx->pc = 0x2BA694u;
        goto label_2ba694;
    }
    ctx->pc = 0x2BA68Cu;
    SET_GPR_U32(ctx, 31, 0x2BA694u);
    ctx->pc = 0x2BB930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB930u, 0x2BA68Cu, 0x2BA694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA694u;
label_2ba694:
    // 0x2ba694: 0xafa202bc  sw          $v0, 0x2BC($sp)
    ctx->pc = 0x2ba694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 2));
label_2ba698:
    // 0x2ba698: 0x8fa402bc  lw          $a0, 0x2BC($sp)
    ctx->pc = 0x2ba698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
label_2ba69c:
    // 0x2ba69c: 0xafa40380  sw          $a0, 0x380($sp)
    ctx->pc = 0x2ba69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 4));
label_2ba6a0:
    // 0x2ba6a0: 0x100000fc  b           . + 4 + (0xFC << 2)
label_2ba6a4:
    if (ctx->pc == 0x2BA6A4u) {
        ctx->pc = 0x2BA6A8u;
        goto label_2ba6a8;
    }
    ctx->pc = 0x2BA6A0u;
    {
        const bool branch_taken_0x2ba6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba6a0) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA6A8u;
label_2ba6a8:
    // 0x2ba6a8: 0x8fa203c0  lw          $v0, 0x3C0($sp)
    ctx->pc = 0x2ba6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2ba6ac:
    // 0x2ba6ac: 0x90440008  lbu         $a0, 0x8($v0)
    ctx->pc = 0x2ba6acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_2ba6b0:
    // 0x2ba6b0: 0x148000f8  bnez        $a0, . + 4 + (0xF8 << 2)
label_2ba6b4:
    if (ctx->pc == 0x2BA6B4u) {
        ctx->pc = 0x2BA6B8u;
        goto label_2ba6b8;
    }
    ctx->pc = 0x2BA6B0u;
    {
        const bool branch_taken_0x2ba6b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba6b0) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA6B8u;
label_2ba6b8:
    // 0x2ba6b8: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x2ba6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba6bc:
    // 0x2ba6bc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ba6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba6c0:
    // 0x2ba6c0: 0xc119b68  jal         func_466DA0
label_2ba6c4:
    if (ctx->pc == 0x2BA6C4u) {
        ctx->pc = 0x2BA6C8u;
        goto label_2ba6c8;
    }
    ctx->pc = 0x2BA6C0u;
    SET_GPR_U32(ctx, 31, 0x2BA6C8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA6C0u, 0x2BA6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA6C8u;
label_2ba6c8:
    // 0x2ba6c8: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x2ba6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba6cc:
    // 0x2ba6cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba6d0:
    // 0x2ba6d0: 0xc0400e0  jal         func_100380
label_2ba6d4:
    if (ctx->pc == 0x2BA6D4u) {
        ctx->pc = 0x2BA6D8u;
        goto label_2ba6d8;
    }
    ctx->pc = 0x2BA6D0u;
    SET_GPR_U32(ctx, 31, 0x2BA6D8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BA6D0u, 0x2BA6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA6D8u;
label_2ba6d8:
    // 0x2ba6d8: 0xafa202b8  sw          $v0, 0x2B8($sp)
    ctx->pc = 0x2ba6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 2));
label_2ba6dc:
    // 0x2ba6dc: 0x8fa602b8  lw          $a2, 0x2B8($sp)
    ctx->pc = 0x2ba6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
label_2ba6e0:
    // 0x2ba6e0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_2ba6e4:
    if (ctx->pc == 0x2BA6E4u) {
        ctx->pc = 0x2BA6E8u;
        goto label_2ba6e8;
    }
    ctx->pc = 0x2BA6E0u;
    {
        const bool branch_taken_0x2ba6e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba6e0) {
            ctx->pc = 0x2BA700u;
            goto label_2ba700;
        }
    }
    ctx->pc = 0x2BA6E8u;
label_2ba6e8:
    // 0x2ba6e8: 0x8fa502b8  lw          $a1, 0x2B8($sp)
    ctx->pc = 0x2ba6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
label_2ba6ec:
    // 0x2ba6ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ba6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba6f0:
    // 0x2ba6f0: 0xc0aee3c  jal         func_2BB8F0
label_2ba6f4:
    if (ctx->pc == 0x2BA6F4u) {
        ctx->pc = 0x2BA6F8u;
        goto label_2ba6f8;
    }
    ctx->pc = 0x2BA6F0u;
    SET_GPR_U32(ctx, 31, 0x2BA6F8u);
    ctx->pc = 0x2BB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB8F0u, 0x2BA6F0u, 0x2BA6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA6F8u;
label_2ba6f8:
    // 0x2ba6f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba6fc:
    // 0x2ba6fc: 0xafa402b8  sw          $a0, 0x2B8($sp)
    ctx->pc = 0x2ba6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 4));
label_2ba700:
    // 0x2ba700: 0x8fa202b8  lw          $v0, 0x2B8($sp)
    ctx->pc = 0x2ba700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
label_2ba704:
    // 0x2ba704: 0xafa20380  sw          $v0, 0x380($sp)
    ctx->pc = 0x2ba704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 2));
label_2ba708:
    // 0x2ba708: 0x100000e2  b           . + 4 + (0xE2 << 2)
label_2ba70c:
    if (ctx->pc == 0x2BA70Cu) {
        ctx->pc = 0x2BA710u;
        goto label_2ba710;
    }
    ctx->pc = 0x2BA708u;
    {
        const bool branch_taken_0x2ba708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba708) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA710u;
label_2ba710:
    // 0x2ba710: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x2ba710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba714:
    // 0x2ba714: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ba714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba718:
    // 0x2ba718: 0xc119b68  jal         func_466DA0
label_2ba71c:
    if (ctx->pc == 0x2BA71Cu) {
        ctx->pc = 0x2BA720u;
        goto label_2ba720;
    }
    ctx->pc = 0x2BA718u;
    SET_GPR_U32(ctx, 31, 0x2BA720u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA718u, 0x2BA720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA720u;
label_2ba720:
    // 0x2ba720: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x2ba720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba724:
    // 0x2ba724: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2ba724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ba728:
    // 0x2ba728: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba72c:
    // 0x2ba72c: 0xc0400e0  jal         func_100380
label_2ba730:
    if (ctx->pc == 0x2BA730u) {
        ctx->pc = 0x2BA734u;
        goto label_2ba734;
    }
    ctx->pc = 0x2BA72Cu;
    SET_GPR_U32(ctx, 31, 0x2BA734u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BA72Cu, 0x2BA734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA734u;
label_2ba734:
    // 0x2ba734: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba738:
    // 0x2ba738: 0xafa502b4  sw          $a1, 0x2B4($sp)
    ctx->pc = 0x2ba738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 5));
label_2ba73c:
    // 0x2ba73c: 0x8fa402b4  lw          $a0, 0x2B4($sp)
    ctx->pc = 0x2ba73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
label_2ba740:
    // 0x2ba740: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2ba744:
    if (ctx->pc == 0x2BA744u) {
        ctx->pc = 0x2BA748u;
        goto label_2ba748;
    }
    ctx->pc = 0x2BA740u;
    {
        const bool branch_taken_0x2ba740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba740) {
            ctx->pc = 0x2BA760u;
            goto label_2ba760;
        }
    }
    ctx->pc = 0x2BA748u;
label_2ba748:
    // 0x2ba748: 0x8fa202b4  lw          $v0, 0x2B4($sp)
    ctx->pc = 0x2ba748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
label_2ba74c:
    // 0x2ba74c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba750:
    // 0x2ba750: 0xc09da14  jal         func_276850
label_2ba754:
    if (ctx->pc == 0x2BA754u) {
        ctx->pc = 0x2BA758u;
        goto label_2ba758;
    }
    ctx->pc = 0x2BA750u;
    SET_GPR_U32(ctx, 31, 0x2BA758u);
    ctx->pc = 0x276850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276850u, 0x2BA750u, 0x2BA758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA758u;
label_2ba758:
    // 0x2ba758: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba75c:
    // 0x2ba75c: 0xafa402b4  sw          $a0, 0x2B4($sp)
    ctx->pc = 0x2ba75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 4));
label_2ba760:
    // 0x2ba760: 0x8fa202b4  lw          $v0, 0x2B4($sp)
    ctx->pc = 0x2ba760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 692)));
label_2ba764:
    // 0x2ba764: 0xafa20380  sw          $v0, 0x380($sp)
    ctx->pc = 0x2ba764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 2));
label_2ba768:
    // 0x2ba768: 0x100000ca  b           . + 4 + (0xCA << 2)
label_2ba76c:
    if (ctx->pc == 0x2BA76Cu) {
        ctx->pc = 0x2BA770u;
        goto label_2ba770;
    }
    ctx->pc = 0x2BA768u;
    {
        const bool branch_taken_0x2ba768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba768) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA770u;
label_2ba770:
    // 0x2ba770: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x2ba770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba774:
    // 0x2ba774: 0xc119b68  jal         func_466DA0
label_2ba778:
    if (ctx->pc == 0x2BA778u) {
        ctx->pc = 0x2BA77Cu;
        goto label_2ba77c;
    }
    ctx->pc = 0x2BA774u;
    SET_GPR_U32(ctx, 31, 0x2BA77Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA774u, 0x2BA77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA77Cu;
label_2ba77c:
    // 0x2ba77c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba780:
    // 0x2ba780: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x2ba780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba784:
    // 0x2ba784: 0xc0400e0  jal         func_100380
label_2ba788:
    if (ctx->pc == 0x2BA788u) {
        ctx->pc = 0x2BA78Cu;
        goto label_2ba78c;
    }
    ctx->pc = 0x2BA784u;
    SET_GPR_U32(ctx, 31, 0x2BA78Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BA784u, 0x2BA78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA78Cu;
label_2ba78c:
    // 0x2ba78c: 0xafa202b0  sw          $v0, 0x2B0($sp)
    ctx->pc = 0x2ba78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 2));
label_2ba790:
    // 0x2ba790: 0x8fa402b0  lw          $a0, 0x2B0($sp)
    ctx->pc = 0x2ba790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_2ba794:
    // 0x2ba794: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2ba798:
    if (ctx->pc == 0x2BA798u) {
        ctx->pc = 0x2BA79Cu;
        goto label_2ba79c;
    }
    ctx->pc = 0x2BA794u;
    {
        const bool branch_taken_0x2ba794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba794) {
            ctx->pc = 0x2BA7B4u;
            goto label_2ba7b4;
        }
    }
    ctx->pc = 0x2BA79Cu;
label_2ba79c:
    // 0x2ba79c: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x2ba79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_2ba7a0:
    // 0x2ba7a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba7a4:
    // 0x2ba7a4: 0xc09d5a4  jal         func_275690
label_2ba7a8:
    if (ctx->pc == 0x2BA7A8u) {
        ctx->pc = 0x2BA7ACu;
        goto label_2ba7ac;
    }
    ctx->pc = 0x2BA7A4u;
    SET_GPR_U32(ctx, 31, 0x2BA7ACu);
    ctx->pc = 0x275690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275690u, 0x2BA7A4u, 0x2BA7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA7ACu;
label_2ba7ac:
    // 0x2ba7ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ba7acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba7b0:
    // 0x2ba7b0: 0xafa302b0  sw          $v1, 0x2B0($sp)
    ctx->pc = 0x2ba7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 3));
label_2ba7b4:
    // 0x2ba7b4: 0x8fa302b0  lw          $v1, 0x2B0($sp)
    ctx->pc = 0x2ba7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_2ba7b8:
    // 0x2ba7b8: 0xafa30380  sw          $v1, 0x380($sp)
    ctx->pc = 0x2ba7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 3));
label_2ba7bc:
    // 0x2ba7bc: 0x100000b5  b           . + 4 + (0xB5 << 2)
label_2ba7c0:
    if (ctx->pc == 0x2BA7C0u) {
        ctx->pc = 0x2BA7C4u;
        goto label_2ba7c4;
    }
    ctx->pc = 0x2BA7BCu;
    {
        const bool branch_taken_0x2ba7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba7bc) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA7C4u;
label_2ba7c4:
    // 0x2ba7c4: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x2ba7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba7c8:
    // 0x2ba7c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba7cc:
    // 0x2ba7cc: 0xc119b68  jal         func_466DA0
label_2ba7d0:
    if (ctx->pc == 0x2BA7D0u) {
        ctx->pc = 0x2BA7D4u;
        goto label_2ba7d4;
    }
    ctx->pc = 0x2BA7CCu;
    SET_GPR_U32(ctx, 31, 0x2BA7D4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA7CCu, 0x2BA7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA7D4u;
label_2ba7d4:
    // 0x2ba7d4: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x2ba7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba7d8:
    // 0x2ba7d8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2ba7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ba7dc:
    // 0x2ba7dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba7e0:
    // 0x2ba7e0: 0xc0400e0  jal         func_100380
label_2ba7e4:
    if (ctx->pc == 0x2BA7E4u) {
        ctx->pc = 0x2BA7E8u;
        goto label_2ba7e8;
    }
    ctx->pc = 0x2BA7E0u;
    SET_GPR_U32(ctx, 31, 0x2BA7E8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BA7E0u, 0x2BA7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA7E8u;
label_2ba7e8:
    // 0x2ba7e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba7ec:
    // 0x2ba7ec: 0xafa402ac  sw          $a0, 0x2AC($sp)
    ctx->pc = 0x2ba7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 4));
label_2ba7f0:
    // 0x2ba7f0: 0x8fa202ac  lw          $v0, 0x2AC($sp)
    ctx->pc = 0x2ba7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
label_2ba7f4:
    // 0x2ba7f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2ba7f8:
    if (ctx->pc == 0x2BA7F8u) {
        ctx->pc = 0x2BA7FCu;
        goto label_2ba7fc;
    }
    ctx->pc = 0x2BA7F4u;
    {
        const bool branch_taken_0x2ba7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba7f4) {
            ctx->pc = 0x2BA818u;
            goto label_2ba818;
        }
    }
    ctx->pc = 0x2BA7FCu;
label_2ba7fc:
    // 0x2ba7fc: 0x8fa202ac  lw          $v0, 0x2AC($sp)
    ctx->pc = 0x2ba7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
label_2ba800:
    // 0x2ba800: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x2ba800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_2ba804:
    // 0x2ba804: 0x7ba40100  lq          $a0, 0x100($sp)
    ctx->pc = 0x2ba804u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2ba808:
    // 0x2ba808: 0xc051840  jal         func_146100
label_2ba80c:
    if (ctx->pc == 0x2BA80Cu) {
        ctx->pc = 0x2BA810u;
        goto label_2ba810;
    }
    ctx->pc = 0x2BA808u;
    SET_GPR_U32(ctx, 31, 0x2BA810u);
    ctx->pc = 0x146100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146100u, 0x2BA808u, 0x2BA810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA810u;
label_2ba810:
    // 0x2ba810: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba814:
    // 0x2ba814: 0xafa502ac  sw          $a1, 0x2AC($sp)
    ctx->pc = 0x2ba814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 5));
label_2ba818:
    // 0x2ba818: 0x8fa202ac  lw          $v0, 0x2AC($sp)
    ctx->pc = 0x2ba818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
label_2ba81c:
    // 0x2ba81c: 0xafa20380  sw          $v0, 0x380($sp)
    ctx->pc = 0x2ba81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 2));
label_2ba820:
    // 0x2ba820: 0x1000009c  b           . + 4 + (0x9C << 2)
label_2ba824:
    if (ctx->pc == 0x2BA824u) {
        ctx->pc = 0x2BA828u;
        goto label_2ba828;
    }
    ctx->pc = 0x2BA820u;
    {
        const bool branch_taken_0x2ba820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba820) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA828u;
label_2ba828:
    // 0x2ba828: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x2ba828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba82c:
    // 0x2ba82c: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x2ba82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_2ba830:
    // 0x2ba830: 0x7ba400f0  lq          $a0, 0xF0($sp)
    ctx->pc = 0x2ba830u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2ba834:
    // 0x2ba834: 0xc119b68  jal         func_466DA0
label_2ba838:
    if (ctx->pc == 0x2BA838u) {
        ctx->pc = 0x2BA83Cu;
        goto label_2ba83c;
    }
    ctx->pc = 0x2BA834u;
    SET_GPR_U32(ctx, 31, 0x2BA83Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA834u, 0x2BA83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA83Cu;
label_2ba83c:
    // 0x2ba83c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba840:
    // 0x2ba840: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x2ba840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba844:
    // 0x2ba844: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2ba844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2ba848:
    // 0x2ba848: 0xc0400e0  jal         func_100380
label_2ba84c:
    if (ctx->pc == 0x2BA84Cu) {
        ctx->pc = 0x2BA850u;
        goto label_2ba850;
    }
    ctx->pc = 0x2BA848u;
    SET_GPR_U32(ctx, 31, 0x2BA850u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BA848u, 0x2BA850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA850u;
label_2ba850:
    // 0x2ba850: 0xafa202a8  sw          $v0, 0x2A8($sp)
    ctx->pc = 0x2ba850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 2));
label_2ba854:
    // 0x2ba854: 0x8fb002a8  lw          $s0, 0x2A8($sp)
    ctx->pc = 0x2ba854u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
label_2ba858:
    // 0x2ba858: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2ba85c:
    if (ctx->pc == 0x2BA85Cu) {
        ctx->pc = 0x2BA860u;
        goto label_2ba860;
    }
    ctx->pc = 0x2BA858u;
    {
        const bool branch_taken_0x2ba858 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba858) {
            ctx->pc = 0x2BA874u;
            goto label_2ba874;
        }
    }
    ctx->pc = 0x2BA860u;
label_2ba860:
    // 0x2ba860: 0x8fa502a8  lw          $a1, 0x2A8($sp)
    ctx->pc = 0x2ba860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
label_2ba864:
    // 0x2ba864: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ba864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba868:
    // 0x2ba868: 0xc0b645c  jal         func_2D9170
label_2ba86c:
    if (ctx->pc == 0x2BA86Cu) {
        ctx->pc = 0x2BA870u;
        goto label_2ba870;
    }
    ctx->pc = 0x2BA868u;
    SET_GPR_U32(ctx, 31, 0x2BA870u);
    ctx->pc = 0x2D9170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9170u, 0x2BA868u, 0x2BA870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA870u;
label_2ba870:
    // 0x2ba870: 0xafa202a8  sw          $v0, 0x2A8($sp)
    ctx->pc = 0x2ba870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 2));
label_2ba874:
    // 0x2ba874: 0x8fa202a8  lw          $v0, 0x2A8($sp)
    ctx->pc = 0x2ba874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
label_2ba878:
    // 0x2ba878: 0xafa20380  sw          $v0, 0x380($sp)
    ctx->pc = 0x2ba878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 2));
label_2ba87c:
    // 0x2ba87c: 0x10000085  b           . + 4 + (0x85 << 2)
label_2ba880:
    if (ctx->pc == 0x2BA880u) {
        ctx->pc = 0x2BA884u;
        goto label_2ba884;
    }
    ctx->pc = 0x2BA87Cu;
    {
        const bool branch_taken_0x2ba87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba87c) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA884u;
label_2ba884:
    // 0x2ba884: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x2ba884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba888:
    // 0x2ba888: 0xc119b68  jal         func_466DA0
label_2ba88c:
    if (ctx->pc == 0x2BA88Cu) {
        ctx->pc = 0x2BA890u;
        goto label_2ba890;
    }
    ctx->pc = 0x2BA888u;
    SET_GPR_U32(ctx, 31, 0x2BA890u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA888u, 0x2BA890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA890u;
label_2ba890:
    // 0x2ba890: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x2ba890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba894:
    // 0x2ba894: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba898:
    // 0x2ba898: 0xc0400e0  jal         func_100380
label_2ba89c:
    if (ctx->pc == 0x2BA89Cu) {
        ctx->pc = 0x2BA8A0u;
        goto label_2ba8a0;
    }
    ctx->pc = 0x2BA898u;
    SET_GPR_U32(ctx, 31, 0x2BA8A0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BA898u, 0x2BA8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA8A0u;
label_2ba8a0:
    // 0x2ba8a0: 0xafa202a4  sw          $v0, 0x2A4($sp)
    ctx->pc = 0x2ba8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 2));
label_2ba8a4:
    // 0x2ba8a4: 0x8fa402a4  lw          $a0, 0x2A4($sp)
    ctx->pc = 0x2ba8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_2ba8a8:
    // 0x2ba8a8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2ba8ac:
    if (ctx->pc == 0x2BA8ACu) {
        ctx->pc = 0x2BA8B0u;
        goto label_2ba8b0;
    }
    ctx->pc = 0x2BA8A8u;
    {
        const bool branch_taken_0x2ba8a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba8a8) {
            ctx->pc = 0x2BA8C8u;
            goto label_2ba8c8;
        }
    }
    ctx->pc = 0x2BA8B0u;
label_2ba8b0:
    // 0x2ba8b0: 0x8fa202a4  lw          $v0, 0x2A4($sp)
    ctx->pc = 0x2ba8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_2ba8b4:
    // 0x2ba8b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba8b8:
    // 0x2ba8b8: 0xc09d874  jal         func_2761D0
label_2ba8bc:
    if (ctx->pc == 0x2BA8BCu) {
        ctx->pc = 0x2BA8C0u;
        goto label_2ba8c0;
    }
    ctx->pc = 0x2BA8B8u;
    SET_GPR_U32(ctx, 31, 0x2BA8C0u);
    ctx->pc = 0x2761D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2761D0u, 0x2BA8B8u, 0x2BA8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA8C0u;
label_2ba8c0:
    // 0x2ba8c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba8c4:
    // 0x2ba8c4: 0xafa402a4  sw          $a0, 0x2A4($sp)
    ctx->pc = 0x2ba8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 4));
label_2ba8c8:
    // 0x2ba8c8: 0x8fa502a4  lw          $a1, 0x2A4($sp)
    ctx->pc = 0x2ba8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_2ba8cc:
    // 0x2ba8cc: 0xafa50380  sw          $a1, 0x380($sp)
    ctx->pc = 0x2ba8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 5));
label_2ba8d0:
    // 0x2ba8d0: 0x10000070  b           . + 4 + (0x70 << 2)
label_2ba8d4:
    if (ctx->pc == 0x2BA8D4u) {
        ctx->pc = 0x2BA8D8u;
        goto label_2ba8d8;
    }
    ctx->pc = 0x2BA8D0u;
    {
        const bool branch_taken_0x2ba8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba8d0) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA8D8u;
label_2ba8d8:
    // 0x2ba8d8: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x2ba8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_2ba8dc:
    // 0x2ba8dc: 0xc119b68  jal         func_466DA0
label_2ba8e0:
    if (ctx->pc == 0x2BA8E0u) {
        ctx->pc = 0x2BA8E4u;
        goto label_2ba8e4;
    }
    ctx->pc = 0x2BA8DCu;
    SET_GPR_U32(ctx, 31, 0x2BA8E4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA8DCu, 0x2BA8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA8E4u;
label_2ba8e4:
    // 0x2ba8e4: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x2ba8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_2ba8e8:
    // 0x2ba8e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ba8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba8ec:
    // 0x2ba8ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba8f0:
    // 0x2ba8f0: 0xc0400e0  jal         func_100380
label_2ba8f4:
    if (ctx->pc == 0x2BA8F4u) {
        ctx->pc = 0x2BA8F8u;
        goto label_2ba8f8;
    }
    ctx->pc = 0x2BA8F0u;
    SET_GPR_U32(ctx, 31, 0x2BA8F8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BA8F0u, 0x2BA8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA8F8u;
label_2ba8f8:
    // 0x2ba8f8: 0xafa202a0  sw          $v0, 0x2A0($sp)
    ctx->pc = 0x2ba8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 2));
label_2ba8fc:
    // 0x2ba8fc: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x2ba8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_2ba900:
    // 0x2ba900: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2ba904:
    if (ctx->pc == 0x2BA904u) {
        ctx->pc = 0x2BA908u;
        goto label_2ba908;
    }
    ctx->pc = 0x2BA900u;
    {
        const bool branch_taken_0x2ba900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba900) {
            ctx->pc = 0x2BA91Cu;
            goto label_2ba91c;
        }
    }
    ctx->pc = 0x2BA908u;
label_2ba908:
    // 0x2ba908: 0x8fa502a0  lw          $a1, 0x2A0($sp)
    ctx->pc = 0x2ba908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_2ba90c:
    // 0x2ba90c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ba90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba910:
    // 0x2ba910: 0xc0aa6a0  jal         func_2A9A80
label_2ba914:
    if (ctx->pc == 0x2BA914u) {
        ctx->pc = 0x2BA918u;
        goto label_2ba918;
    }
    ctx->pc = 0x2BA910u;
    SET_GPR_U32(ctx, 31, 0x2BA918u);
    ctx->pc = 0x2A9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9A80u, 0x2BA910u, 0x2BA918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA918u;
label_2ba918:
    // 0x2ba918: 0xafa202a0  sw          $v0, 0x2A0($sp)
    ctx->pc = 0x2ba918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 2));
label_2ba91c:
    // 0x2ba91c: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x2ba91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_2ba920:
    // 0x2ba920: 0xafa40380  sw          $a0, 0x380($sp)
    ctx->pc = 0x2ba920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 4));
label_2ba924:
    // 0x2ba924: 0x1000005b  b           . + 4 + (0x5B << 2)
label_2ba928:
    if (ctx->pc == 0x2BA928u) {
        ctx->pc = 0x2BA92Cu;
        goto label_2ba92c;
    }
    ctx->pc = 0x2BA924u;
    {
        const bool branch_taken_0x2ba924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba924) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA92Cu;
label_2ba92c:
    // 0x2ba92c: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x2ba92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba930:
    // 0x2ba930: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2ba930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_2ba934:
    // 0x2ba934: 0x7ba400e0  lq          $a0, 0xE0($sp)
    ctx->pc = 0x2ba934u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2ba938:
    // 0x2ba938: 0xc119b68  jal         func_466DA0
label_2ba93c:
    if (ctx->pc == 0x2BA93Cu) {
        ctx->pc = 0x2BA940u;
        goto label_2ba940;
    }
    ctx->pc = 0x2BA938u;
    SET_GPR_U32(ctx, 31, 0x2BA940u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA938u, 0x2BA940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA940u;
label_2ba940:
    // 0x2ba940: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba944:
    // 0x2ba944: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x2ba944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba948:
    // 0x2ba948: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2ba948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ba94c:
    // 0x2ba94c: 0xc0400e0  jal         func_100380
label_2ba950:
    if (ctx->pc == 0x2BA950u) {
        ctx->pc = 0x2BA954u;
        goto label_2ba954;
    }
    ctx->pc = 0x2BA94Cu;
    SET_GPR_U32(ctx, 31, 0x2BA954u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BA94Cu, 0x2BA954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA954u;
label_2ba954:
    // 0x2ba954: 0xafa2029c  sw          $v0, 0x29C($sp)
    ctx->pc = 0x2ba954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
label_2ba958:
    // 0x2ba958: 0x8fa4029c  lw          $a0, 0x29C($sp)
    ctx->pc = 0x2ba958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_2ba95c:
    // 0x2ba95c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2ba960:
    if (ctx->pc == 0x2BA960u) {
        ctx->pc = 0x2BA964u;
        goto label_2ba964;
    }
    ctx->pc = 0x2BA95Cu;
    {
        const bool branch_taken_0x2ba95c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba95c) {
            ctx->pc = 0x2BA97Cu;
            goto label_2ba97c;
        }
    }
    ctx->pc = 0x2BA964u;
label_2ba964:
    // 0x2ba964: 0x8fa2029c  lw          $v0, 0x29C($sp)
    ctx->pc = 0x2ba964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_2ba968:
    // 0x2ba968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba96c:
    // 0x2ba96c: 0xc0aee2c  jal         func_2BB8B0
label_2ba970:
    if (ctx->pc == 0x2BA970u) {
        ctx->pc = 0x2BA974u;
        goto label_2ba974;
    }
    ctx->pc = 0x2BA96Cu;
    SET_GPR_U32(ctx, 31, 0x2BA974u);
    ctx->pc = 0x2BB8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB8B0u, 0x2BA96Cu, 0x2BA974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA974u;
label_2ba974:
    // 0x2ba974: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba978:
    // 0x2ba978: 0xafa4029c  sw          $a0, 0x29C($sp)
    ctx->pc = 0x2ba978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 4));
label_2ba97c:
    // 0x2ba97c: 0x8fa2029c  lw          $v0, 0x29C($sp)
    ctx->pc = 0x2ba97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_2ba980:
    // 0x2ba980: 0xafa20380  sw          $v0, 0x380($sp)
    ctx->pc = 0x2ba980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 2));
label_2ba984:
    // 0x2ba984: 0x10000043  b           . + 4 + (0x43 << 2)
label_2ba988:
    if (ctx->pc == 0x2BA988u) {
        ctx->pc = 0x2BA98Cu;
        goto label_2ba98c;
    }
    ctx->pc = 0x2BA984u;
    {
        const bool branch_taken_0x2ba984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba984) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA98Cu;
label_2ba98c:
    // 0x2ba98c: 0x2404009c  addiu       $a0, $zero, 0x9C
    ctx->pc = 0x2ba98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
label_2ba990:
    // 0x2ba990: 0xc119b68  jal         func_466DA0
label_2ba994:
    if (ctx->pc == 0x2BA994u) {
        ctx->pc = 0x2BA998u;
        goto label_2ba998;
    }
    ctx->pc = 0x2BA990u;
    SET_GPR_U32(ctx, 31, 0x2BA998u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA990u, 0x2BA998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA998u;
label_2ba998:
    // 0x2ba998: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ba998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba99c:
    // 0x2ba99c: 0x2402009c  addiu       $v0, $zero, 0x9C
    ctx->pc = 0x2ba99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
label_2ba9a0:
    // 0x2ba9a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba9a4:
    // 0x2ba9a4: 0xc0400e0  jal         func_100380
label_2ba9a8:
    if (ctx->pc == 0x2BA9A8u) {
        ctx->pc = 0x2BA9ACu;
        goto label_2ba9ac;
    }
    ctx->pc = 0x2BA9A4u;
    SET_GPR_U32(ctx, 31, 0x2BA9ACu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BA9A4u, 0x2BA9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA9ACu;
label_2ba9ac:
    // 0x2ba9ac: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2ba9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_2ba9b0:
    // 0x2ba9b0: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x2ba9b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2ba9b4:
    // 0x2ba9b4: 0xafa20298  sw          $v0, 0x298($sp)
    ctx->pc = 0x2ba9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
label_2ba9b8:
    // 0x2ba9b8: 0x8fa30298  lw          $v1, 0x298($sp)
    ctx->pc = 0x2ba9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_2ba9bc:
    // 0x2ba9bc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2ba9c0:
    if (ctx->pc == 0x2BA9C0u) {
        ctx->pc = 0x2BA9C4u;
        goto label_2ba9c4;
    }
    ctx->pc = 0x2BA9BCu;
    {
        const bool branch_taken_0x2ba9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba9bc) {
            ctx->pc = 0x2BA9D4u;
            goto label_2ba9d4;
        }
    }
    ctx->pc = 0x2BA9C4u;
label_2ba9c4:
    // 0x2ba9c4: 0x8fa40298  lw          $a0, 0x298($sp)
    ctx->pc = 0x2ba9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_2ba9c8:
    // 0x2ba9c8: 0xc0a9e70  jal         func_2A79C0
label_2ba9cc:
    if (ctx->pc == 0x2BA9CCu) {
        ctx->pc = 0x2BA9D0u;
        goto label_2ba9d0;
    }
    ctx->pc = 0x2BA9C8u;
    SET_GPR_U32(ctx, 31, 0x2BA9D0u);
    ctx->pc = 0x2A79C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A79C0u, 0x2BA9C8u, 0x2BA9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA9D0u;
label_2ba9d0:
    // 0x2ba9d0: 0xafa20298  sw          $v0, 0x298($sp)
    ctx->pc = 0x2ba9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
label_2ba9d4:
    // 0x2ba9d4: 0x8fa60298  lw          $a2, 0x298($sp)
    ctx->pc = 0x2ba9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_2ba9d8:
    // 0x2ba9d8: 0xafa60380  sw          $a2, 0x380($sp)
    ctx->pc = 0x2ba9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 6));
label_2ba9dc:
    // 0x2ba9dc: 0x1000002d  b           . + 4 + (0x2D << 2)
label_2ba9e0:
    if (ctx->pc == 0x2BA9E0u) {
        ctx->pc = 0x2BA9E4u;
        goto label_2ba9e4;
    }
    ctx->pc = 0x2BA9DCu;
    {
        const bool branch_taken_0x2ba9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba9dc) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BA9E4u;
label_2ba9e4:
    // 0x2ba9e4: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x2ba9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba9e8:
    // 0x2ba9e8: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2ba9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_2ba9ec:
    // 0x2ba9ec: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x2ba9ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2ba9f0:
    // 0x2ba9f0: 0xc119b68  jal         func_466DA0
label_2ba9f4:
    if (ctx->pc == 0x2BA9F4u) {
        ctx->pc = 0x2BA9F8u;
        goto label_2ba9f8;
    }
    ctx->pc = 0x2BA9F0u;
    SET_GPR_U32(ctx, 31, 0x2BA9F8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BA9F0u, 0x2BA9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA9F8u;
label_2ba9f8:
    // 0x2ba9f8: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x2ba9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2ba9fc:
    // 0x2ba9fc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2ba9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2baa00:
    // 0x2baa00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2baa00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2baa04:
    // 0x2baa04: 0xc0400e0  jal         func_100380
label_2baa08:
    if (ctx->pc == 0x2BAA08u) {
        ctx->pc = 0x2BAA0Cu;
        goto label_2baa0c;
    }
    ctx->pc = 0x2BAA04u;
    SET_GPR_U32(ctx, 31, 0x2BAA0Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BAA04u, 0x2BAA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAA0Cu;
label_2baa0c:
    // 0x2baa0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2baa0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2baa10:
    // 0x2baa10: 0xafa40294  sw          $a0, 0x294($sp)
    ctx->pc = 0x2baa10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 4));
label_2baa14:
    // 0x2baa14: 0x8fa20294  lw          $v0, 0x294($sp)
    ctx->pc = 0x2baa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
label_2baa18:
    // 0x2baa18: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2baa1c:
    if (ctx->pc == 0x2BAA1Cu) {
        ctx->pc = 0x2BAA20u;
        goto label_2baa20;
    }
    ctx->pc = 0x2BAA18u;
    {
        const bool branch_taken_0x2baa18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baa18) {
            ctx->pc = 0x2BAA34u;
            goto label_2baa34;
        }
    }
    ctx->pc = 0x2BAA20u;
label_2baa20:
    // 0x2baa20: 0x8fa50294  lw          $a1, 0x294($sp)
    ctx->pc = 0x2baa20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
label_2baa24:
    // 0x2baa24: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2baa24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2baa28:
    // 0x2baa28: 0xc0aee1c  jal         func_2BB870
label_2baa2c:
    if (ctx->pc == 0x2BAA2Cu) {
        ctx->pc = 0x2BAA30u;
        goto label_2baa30;
    }
    ctx->pc = 0x2BAA28u;
    SET_GPR_U32(ctx, 31, 0x2BAA30u);
    ctx->pc = 0x2BB870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB870u, 0x2BAA28u, 0x2BAA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAA30u;
label_2baa30:
    // 0x2baa30: 0xafa20294  sw          $v0, 0x294($sp)
    ctx->pc = 0x2baa30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 2));
label_2baa34:
    // 0x2baa34: 0x8fa30294  lw          $v1, 0x294($sp)
    ctx->pc = 0x2baa34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
label_2baa38:
    // 0x2baa38: 0xafa30380  sw          $v1, 0x380($sp)
    ctx->pc = 0x2baa38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 3));
label_2baa3c:
    // 0x2baa3c: 0x10000015  b           . + 4 + (0x15 << 2)
label_2baa40:
    if (ctx->pc == 0x2BAA40u) {
        ctx->pc = 0x2BAA44u;
        goto label_2baa44;
    }
    ctx->pc = 0x2BAA3Cu;
    {
        const bool branch_taken_0x2baa3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baa3c) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BAA44u;
label_2baa44:
    // 0x2baa44: 0x10000013  b           . + 4 + (0x13 << 2)
label_2baa48:
    if (ctx->pc == 0x2BAA48u) {
        ctx->pc = 0x2BAA4Cu;
        goto label_2baa4c;
    }
    ctx->pc = 0x2BAA44u;
    {
        const bool branch_taken_0x2baa44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baa44) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BAA4Cu;
label_2baa4c:
    // 0x2baa4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2baa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2baa50:
    // 0x2baa50: 0xa3a503b7  sb          $a1, 0x3B7($sp)
    ctx->pc = 0x2baa50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 951), (uint8_t)GPR_U32(ctx, 5));
label_2baa54:
    // 0x2baa54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2baa54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2baa58:
    // 0x2baa58: 0xc09d0b8  jal         func_2742E0
label_2baa5c:
    if (ctx->pc == 0x2BAA5Cu) {
        ctx->pc = 0x2BAA60u;
        goto label_2baa60;
    }
    ctx->pc = 0x2BAA58u;
    SET_GPR_U32(ctx, 31, 0x2BAA60u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2BAA58u, 0x2BAA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAA60u;
label_2baa60:
    // 0x2baa60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2baa60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2baa64:
    // 0x2baa64: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2baa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2baa68:
    // 0x2baa68: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_2baa6c:
    if (ctx->pc == 0x2BAA6Cu) {
        ctx->pc = 0x2BAA70u;
        goto label_2baa70;
    }
    ctx->pc = 0x2BAA68u;
    {
        const bool branch_taken_0x2baa68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2baa68) {
            ctx->pc = 0x2BAA8Cu;
            goto label_2baa8c;
        }
    }
    ctx->pc = 0x2BAA70u;
label_2baa70:
    // 0x2baa70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2baa70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2baa74:
    // 0x2baa74: 0xc09d0b8  jal         func_2742E0
label_2baa78:
    if (ctx->pc == 0x2BAA78u) {
        ctx->pc = 0x2BAA7Cu;
        goto label_2baa7c;
    }
    ctx->pc = 0x2BAA74u;
    SET_GPR_U32(ctx, 31, 0x2BAA7Cu);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2BAA74u, 0x2BAA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAA7Cu;
label_2baa7c:
    // 0x2baa7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2baa7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2baa80:
    // 0x2baa80: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x2baa80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2baa84:
    // 0x2baa84: 0x14920003  bne         $a0, $s2, . + 4 + (0x3 << 2)
label_2baa88:
    if (ctx->pc == 0x2BAA88u) {
        ctx->pc = 0x2BAA8Cu;
        goto label_2baa8c;
    }
    ctx->pc = 0x2BAA84u;
    {
        const bool branch_taken_0x2baa84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 18));
        if (branch_taken_0x2baa84) {
            ctx->pc = 0x2BAA94u;
            goto label_2baa94;
        }
    }
    ctx->pc = 0x2BAA8Cu;
label_2baa8c:
    // 0x2baa8c: 0x8fa5037c  lw          $a1, 0x37C($sp)
    ctx->pc = 0x2baa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 892)));
label_2baa90:
    // 0x2baa90: 0xafa50388  sw          $a1, 0x388($sp)
    ctx->pc = 0x2baa90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 904), GPR_U32(ctx, 5));
label_2baa94:
    // 0x2baa94: 0x8fa20380  lw          $v0, 0x380($sp)
    ctx->pc = 0x2baa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
label_2baa98:
    // 0x2baa98: 0x104000b1  beqz        $v0, . + 4 + (0xB1 << 2)
label_2baa9c:
    if (ctx->pc == 0x2BAA9Cu) {
        ctx->pc = 0x2BAAA0u;
        goto label_2baaa0;
    }
    ctx->pc = 0x2BAA98u;
    {
        const bool branch_taken_0x2baa98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baa98) {
            ctx->pc = 0x2BAD60u;
            goto label_2bad60;
        }
    }
    ctx->pc = 0x2BAAA0u;
label_2baaa0:
    // 0x2baaa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2baaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2baaa4:
    // 0x2baaa4: 0xa3a203b0  sb          $v0, 0x3B0($sp)
    ctx->pc = 0x2baaa4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 944), (uint8_t)GPR_U32(ctx, 2));
label_2baaa8:
    // 0x2baaa8: 0x8fa40380  lw          $a0, 0x380($sp)
    ctx->pc = 0x2baaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
label_2baaac:
    // 0x2baaac: 0x8fa203c0  lw          $v0, 0x3C0($sp)
    ctx->pc = 0x2baaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2baab0:
    // 0x2baab0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2baab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2baab4:
    // 0x2baab4: 0xc09d23c  jal         func_2748F0
label_2baab8:
    if (ctx->pc == 0x2BAAB8u) {
        ctx->pc = 0x2BAABCu;
        goto label_2baabc;
    }
    ctx->pc = 0x2BAAB4u;
    SET_GPR_U32(ctx, 31, 0x2BAABCu);
    ctx->pc = 0x2748F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748F0u, 0x2BAAB4u, 0x2BAABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAABCu;
label_2baabc:
    // 0x2baabc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2baabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2baac0:
    // 0x2baac0: 0x8fa203c0  lw          $v0, 0x3C0($sp)
    ctx->pc = 0x2baac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2baac4:
    // 0x2baac4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2baac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_2baac8:
    // 0x2baac8: 0x8fa50380  lw          $a1, 0x380($sp)
    ctx->pc = 0x2baac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
label_2baacc:
    // 0x2baacc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2baaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2baad0:
    // 0x2baad0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2baad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2baad4:
    // 0x2baad4: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2baad4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2baad8:
    // 0x2baad8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2baad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2baadc:
    // 0x2baadc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2baadcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2baae0:
    // 0x2baae0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2baae0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2baae4:
    // 0x2baae4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2baae4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2baae8:
    // 0x2baae8: 0x320f809  jalr        $t9
label_2baaec:
    if (ctx->pc == 0x2BAAECu) {
        ctx->pc = 0x2BAAF0u;
        goto label_2baaf0;
    }
    ctx->pc = 0x2BAAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BAAF0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAAE8u, 0x2BAAF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BAAF0u;
label_2baaf0:
    // 0x2baaf0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2baaf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2baaf4:
    // 0x2baaf4: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2baaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2baaf8:
    // 0x2baaf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2baaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2baafc:
    // 0x2baafc: 0x14450086  bne         $v0, $a1, . + 4 + (0x86 << 2)
label_2bab00:
    if (ctx->pc == 0x2BAB00u) {
        ctx->pc = 0x2BAB04u;
        goto label_2bab04;
    }
    ctx->pc = 0x2BAAFCu;
    {
        const bool branch_taken_0x2baafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2baafc) {
            ctx->pc = 0x2BAD18u;
            goto label_2bad18;
        }
    }
    ctx->pc = 0x2BAB04u;
label_2bab04:
    // 0x2bab04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bab04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bab08:
    // 0x2bab08: 0xc09d0b8  jal         func_2742E0
label_2bab0c:
    if (ctx->pc == 0x2BAB0Cu) {
        ctx->pc = 0x2BAB10u;
        goto label_2bab10;
    }
    ctx->pc = 0x2BAB08u;
    SET_GPR_U32(ctx, 31, 0x2BAB10u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2BAB08u, 0x2BAB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAB10u;
label_2bab10:
    // 0x2bab10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bab10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bab14:
    // 0x2bab14: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2bab14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2bab18:
    // 0x2bab18: 0x14a20034  bne         $a1, $v0, . + 4 + (0x34 << 2)
label_2bab1c:
    if (ctx->pc == 0x2BAB1Cu) {
        ctx->pc = 0x2BAB20u;
        goto label_2bab20;
    }
    ctx->pc = 0x2BAB18u;
    {
        const bool branch_taken_0x2bab18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bab18) {
            ctx->pc = 0x2BABECu;
            goto label_2babec;
        }
    }
    ctx->pc = 0x2BAB20u;
label_2bab20:
    // 0x2bab20: 0xafa00368  sw          $zero, 0x368($sp)
    ctx->pc = 0x2bab20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 872), GPR_U32(ctx, 0));
label_2bab24:
    // 0x2bab24: 0x8fa503c0  lw          $a1, 0x3C0($sp)
    ctx->pc = 0x2bab24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2bab28:
    // 0x2bab28: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x2bab28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_2bab2c:
    // 0x2bab2c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2bab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2bab30:
    // 0x2bab30: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2bab34:
    if (ctx->pc == 0x2BAB34u) {
        ctx->pc = 0x2BAB38u;
        goto label_2bab38;
    }
    ctx->pc = 0x2BAB30u;
    {
        const bool branch_taken_0x2bab30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bab30) {
            ctx->pc = 0x2BAB5Cu;
            goto label_2bab5c;
        }
    }
    ctx->pc = 0x2BAB38u;
label_2bab38:
    // 0x2bab38: 0x8fa203c0  lw          $v0, 0x3C0($sp)
    ctx->pc = 0x2bab38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2bab3c:
    // 0x2bab3c: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x2bab3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2bab40:
    // 0x2bab40: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x2bab40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_2bab44:
    // 0x2bab44: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2bab44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bab48:
    // 0x2bab48: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x2bab48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2bab4c:
    // 0x2bab4c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2bab4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2bab50:
    // 0x2bab50: 0xc085538  jal         func_2154E0
label_2bab54:
    if (ctx->pc == 0x2BAB54u) {
        ctx->pc = 0x2BAB58u;
        goto label_2bab58;
    }
    ctx->pc = 0x2BAB50u;
    SET_GPR_U32(ctx, 31, 0x2BAB58u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BAB50u, 0x2BAB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAB58u;
label_2bab58:
    // 0x2bab58: 0xafa20368  sw          $v0, 0x368($sp)
    ctx->pc = 0x2bab58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 872), GPR_U32(ctx, 2));
label_2bab5c:
    // 0x2bab5c: 0x8fa40368  lw          $a0, 0x368($sp)
    ctx->pc = 0x2bab5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 872)));
label_2bab60:
    // 0x2bab60: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_2bab64:
    if (ctx->pc == 0x2BAB64u) {
        ctx->pc = 0x2BAB68u;
        goto label_2bab68;
    }
    ctx->pc = 0x2BAB60u;
    {
        const bool branch_taken_0x2bab60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bab60) {
            ctx->pc = 0x2BABC4u;
            goto label_2babc4;
        }
    }
    ctx->pc = 0x2BAB68u;
label_2bab68:
    // 0x2bab68: 0x12e00016  beqz        $s7, . + 4 + (0x16 << 2)
label_2bab6c:
    if (ctx->pc == 0x2BAB6Cu) {
        ctx->pc = 0x2BAB70u;
        goto label_2bab70;
    }
    ctx->pc = 0x2BAB68u;
    {
        const bool branch_taken_0x2bab68 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bab68) {
            ctx->pc = 0x2BABC4u;
            goto label_2babc4;
        }
    }
    ctx->pc = 0x2BAB70u;
label_2bab70:
    // 0x2bab70: 0x8fa503c0  lw          $a1, 0x3C0($sp)
    ctx->pc = 0x2bab70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2bab74:
    // 0x2bab74: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x2bab74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_2bab78:
    // 0x2bab78: 0x8fa503c0  lw          $a1, 0x3C0($sp)
    ctx->pc = 0x2bab78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2bab7c:
    // 0x2bab7c: 0x8ca60024  lw          $a2, 0x24($a1)
    ctx->pc = 0x2bab7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_2bab80:
    // 0x2bab80: 0x8fa30368  lw          $v1, 0x368($sp)
    ctx->pc = 0x2bab80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 872)));
label_2bab84:
    // 0x2bab84: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2bab84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2bab88:
    // 0x2bab88: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2bab88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2bab8c:
    // 0x2bab8c: 0x8cc60014  lw          $a2, 0x14($a2)
    ctx->pc = 0x2bab8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_2bab90:
    // 0x2bab90: 0xc097504  jal         func_25D410
label_2bab94:
    if (ctx->pc == 0x2BAB94u) {
        ctx->pc = 0x2BAB98u;
        goto label_2bab98;
    }
    ctx->pc = 0x2BAB90u;
    SET_GPR_U32(ctx, 31, 0x2BAB98u);
    ctx->pc = 0x25D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D410u, 0x2BAB90u, 0x2BAB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAB98u;
label_2bab98:
    // 0x2bab98: 0xa3a203b0  sb          $v0, 0x3B0($sp)
    ctx->pc = 0x2bab98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 944), (uint8_t)GPR_U32(ctx, 2));
label_2bab9c:
    // 0x2bab9c: 0x93a403b0  lbu         $a0, 0x3B0($sp)
    ctx->pc = 0x2bab9cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 944)));
label_2baba0:
    // 0x2baba0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2baba4:
    if (ctx->pc == 0x2BABA4u) {
        ctx->pc = 0x2BABA8u;
        goto label_2baba8;
    }
    ctx->pc = 0x2BABA0u;
    {
        const bool branch_taken_0x2baba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baba0) {
            ctx->pc = 0x2BABC4u;
            goto label_2babc4;
        }
    }
    ctx->pc = 0x2BABA8u;
label_2baba8:
    // 0x2baba8: 0x8fa403c0  lw          $a0, 0x3C0($sp)
    ctx->pc = 0x2baba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2babac:
    // 0x2babac: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x2babacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_2babb0:
    // 0x2babb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2babb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2babb4:
    // 0x2babb4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2babb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2babb8:
    // 0x2babb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2babb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2babbc:
    // 0x2babbc: 0xc09689c  jal         func_25A270
label_2babc0:
    if (ctx->pc == 0x2BABC0u) {
        ctx->pc = 0x2BABC4u;
        goto label_2babc4;
    }
    ctx->pc = 0x2BABBCu;
    SET_GPR_U32(ctx, 31, 0x2BABC4u);
    ctx->pc = 0x25A270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A270u, 0x2BABBCu, 0x2BABC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BABC4u;
label_2babc4:
    // 0x2babc4: 0x93a503b0  lbu         $a1, 0x3B0($sp)
    ctx->pc = 0x2babc4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 944)));
label_2babc8:
    // 0x2babc8: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
label_2babcc:
    if (ctx->pc == 0x2BABCCu) {
        ctx->pc = 0x2BABD0u;
        goto label_2babd0;
    }
    ctx->pc = 0x2BABC8u;
    {
        const bool branch_taken_0x2babc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2babc8) {
            ctx->pc = 0x2BAC54u;
            goto label_2bac54;
        }
    }
    ctx->pc = 0x2BABD0u;
label_2babd0:
    // 0x2babd0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2babd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2babd4:
    // 0x2babd4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2babd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2babd8:
    // 0x2babd8: 0xc09dbfc  jal         func_276FF0
label_2babdc:
    if (ctx->pc == 0x2BABDCu) {
        ctx->pc = 0x2BABE0u;
        goto label_2babe0;
    }
    ctx->pc = 0x2BABD8u;
    SET_GPR_U32(ctx, 31, 0x2BABE0u);
    ctx->pc = 0x276FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276FF0u, 0x2BABD8u, 0x2BABE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BABE0u;
label_2babe0:
    // 0x2babe0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2babe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2babe4:
    // 0x2babe4: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2babe8:
    if (ctx->pc == 0x2BABE8u) {
        ctx->pc = 0x2BABECu;
        goto label_2babec;
    }
    ctx->pc = 0x2BABE4u;
    {
        const bool branch_taken_0x2babe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2babe4) {
            ctx->pc = 0x2BAC54u;
            goto label_2bac54;
        }
    }
    ctx->pc = 0x2BABECu;
label_2babec:
    // 0x2babec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2babecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2babf0:
    // 0x2babf0: 0xc09d0b8  jal         func_2742E0
label_2babf4:
    if (ctx->pc == 0x2BABF4u) {
        ctx->pc = 0x2BABF8u;
        goto label_2babf8;
    }
    ctx->pc = 0x2BABF0u;
    SET_GPR_U32(ctx, 31, 0x2BABF8u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2BABF0u, 0x2BABF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BABF8u;
label_2babf8:
    // 0x2babf8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2babf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2babfc:
    // 0x2babfc: 0x1044000f  beq         $v0, $a0, . + 4 + (0xF << 2)
label_2bac00:
    if (ctx->pc == 0x2BAC00u) {
        ctx->pc = 0x2BAC04u;
        goto label_2bac04;
    }
    ctx->pc = 0x2BABFCu;
    {
        const bool branch_taken_0x2babfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2babfc) {
            ctx->pc = 0x2BAC3Cu;
            goto label_2bac3c;
        }
    }
    ctx->pc = 0x2BAC04u;
label_2bac04:
    // 0x2bac04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bac04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bac08:
    // 0x2bac08: 0xc09d0b8  jal         func_2742E0
label_2bac0c:
    if (ctx->pc == 0x2BAC0Cu) {
        ctx->pc = 0x2BAC10u;
        goto label_2bac10;
    }
    ctx->pc = 0x2BAC08u;
    SET_GPR_U32(ctx, 31, 0x2BAC10u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2BAC08u, 0x2BAC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAC10u;
label_2bac10:
    // 0x2bac10: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2bac10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2bac14:
    // 0x2bac14: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
label_2bac18:
    if (ctx->pc == 0x2BAC18u) {
        ctx->pc = 0x2BAC1Cu;
        goto label_2bac1c;
    }
    ctx->pc = 0x2BAC14u;
    {
        const bool branch_taken_0x2bac14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bac14) {
            ctx->pc = 0x2BAC3Cu;
            goto label_2bac3c;
        }
    }
    ctx->pc = 0x2BAC1Cu;
label_2bac1c:
    // 0x2bac1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bac1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bac20:
    // 0x2bac20: 0xc09d0b8  jal         func_2742E0
label_2bac24:
    if (ctx->pc == 0x2BAC24u) {
        ctx->pc = 0x2BAC28u;
        goto label_2bac28;
    }
    ctx->pc = 0x2BAC20u;
    SET_GPR_U32(ctx, 31, 0x2BAC28u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2BAC20u, 0x2BAC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAC28u;
label_2bac28:
    // 0x2bac28: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2bac28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2bac2c:
    // 0x2bac2c: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x2bac2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_2bac30:
    // 0x2bac30: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x2bac30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2bac34:
    // 0x2bac34: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_2bac38:
    if (ctx->pc == 0x2BAC38u) {
        ctx->pc = 0x2BAC3Cu;
        goto label_2bac3c;
    }
    ctx->pc = 0x2BAC34u;
    {
        const bool branch_taken_0x2bac34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2bac34) {
            ctx->pc = 0x2BAC54u;
            goto label_2bac54;
        }
    }
    ctx->pc = 0x2BAC3Cu;
label_2bac3c:
    // 0x2bac3c: 0x8fa40380  lw          $a0, 0x380($sp)
    ctx->pc = 0x2bac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
label_2bac40:
    // 0x2bac40: 0x8c820180  lw          $v0, 0x180($a0)
    ctx->pc = 0x2bac40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 384)));
label_2bac44:
    // 0x2bac44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2bac48:
    if (ctx->pc == 0x2BAC48u) {
        ctx->pc = 0x2BAC4Cu;
        goto label_2bac4c;
    }
    ctx->pc = 0x2BAC44u;
    {
        const bool branch_taken_0x2bac44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bac44) {
            ctx->pc = 0x2BAC54u;
            goto label_2bac54;
        }
    }
    ctx->pc = 0x2BAC4Cu;
label_2bac4c:
    // 0x2bac4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bac50:
    // 0x2bac50: 0xa3a303b8  sb          $v1, 0x3B8($sp)
    ctx->pc = 0x2bac50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 952), (uint8_t)GPR_U32(ctx, 3));
label_2bac54:
    // 0x2bac54: 0x93a403b0  lbu         $a0, 0x3B0($sp)
    ctx->pc = 0x2bac54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 944)));
label_2bac58:
    // 0x2bac58: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_2bac5c:
    if (ctx->pc == 0x2BAC5Cu) {
        ctx->pc = 0x2BAC60u;
        goto label_2bac60;
    }
    ctx->pc = 0x2BAC58u;
    {
        const bool branch_taken_0x2bac58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bac58) {
            ctx->pc = 0x2BACC8u;
            goto label_2bacc8;
        }
    }
    ctx->pc = 0x2BAC60u;
label_2bac60:
    // 0x2bac60: 0x8fa203e0  lw          $v0, 0x3E0($sp)
    ctx->pc = 0x2bac60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
label_2bac64:
    // 0x2bac64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bac64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bac68:
    // 0x2bac68: 0xc09c3b0  jal         func_270EC0
label_2bac6c:
    if (ctx->pc == 0x2BAC6Cu) {
        ctx->pc = 0x2BAC70u;
        goto label_2bac70;
    }
    ctx->pc = 0x2BAC68u;
    SET_GPR_U32(ctx, 31, 0x2BAC70u);
    ctx->pc = 0x270EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270EC0u, 0x2BAC68u, 0x2BAC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAC70u;
label_2bac70:
    // 0x2bac70: 0x8fa4037c  lw          $a0, 0x37C($sp)
    ctx->pc = 0x2bac70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 892)));
label_2bac74:
    // 0x2bac74: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2bac74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2bac78:
    // 0x2bac78: 0x8fa40380  lw          $a0, 0x380($sp)
    ctx->pc = 0x2bac78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
label_2bac7c:
    // 0x2bac7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bac7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bac80:
    // 0x2bac80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bac80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bac84:
    // 0x2bac84: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2bac84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2bac88:
    // 0x2bac88: 0x320f809  jalr        $t9
label_2bac8c:
    if (ctx->pc == 0x2BAC8Cu) {
        ctx->pc = 0x2BAC90u;
        goto label_2bac90;
    }
    ctx->pc = 0x2BAC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BAC90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAC88u, 0x2BAC90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BAC90u;
label_2bac90:
    // 0x2bac90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bac90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bac94:
    // 0x2bac94: 0x8fa203e0  lw          $v0, 0x3E0($sp)
    ctx->pc = 0x2bac94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
label_2bac98:
    // 0x2bac98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bac98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bac9c:
    // 0x2bac9c: 0x8fa50380  lw          $a1, 0x380($sp)
    ctx->pc = 0x2bac9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
label_2baca0:
    // 0x2baca0: 0xc09c2b8  jal         func_270AE0
label_2baca4:
    if (ctx->pc == 0x2BACA4u) {
        ctx->pc = 0x2BACA8u;
        goto label_2baca8;
    }
    ctx->pc = 0x2BACA0u;
    SET_GPR_U32(ctx, 31, 0x2BACA8u);
    ctx->pc = 0x270AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270AE0u, 0x2BACA0u, 0x2BACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BACA8u;
label_2baca8:
    // 0x2baca8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2baca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bacac:
    // 0x2bacac: 0x8fa203c0  lw          $v0, 0x3C0($sp)
    ctx->pc = 0x2bacacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2bacb0:
    // 0x2bacb0: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x2bacb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_2bacb4:
    // 0x2bacb4: 0x27a50380  addiu       $a1, $sp, 0x380
    ctx->pc = 0x2bacb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_2bacb8:
    // 0x2bacb8: 0xc09c1d8  jal         func_270760
label_2bacbc:
    if (ctx->pc == 0x2BACBCu) {
        ctx->pc = 0x2BACC0u;
        goto label_2bacc0;
    }
    ctx->pc = 0x2BACB8u;
    SET_GPR_U32(ctx, 31, 0x2BACC0u);
    ctx->pc = 0x270760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270760u, 0x2BACB8u, 0x2BACC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BACC0u;
label_2bacc0:
    // 0x2bacc0: 0x10000027  b           . + 4 + (0x27 << 2)
label_2bacc4:
    if (ctx->pc == 0x2BACC4u) {
        ctx->pc = 0x2BACC8u;
        goto label_2bacc8;
    }
    ctx->pc = 0x2BACC0u;
    {
        const bool branch_taken_0x2bacc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bacc0) {
            ctx->pc = 0x2BAD60u;
            goto label_2bad60;
        }
    }
    ctx->pc = 0x2BACC8u;
label_2bacc8:
    // 0x2bacc8: 0x8fa20380  lw          $v0, 0x380($sp)
    ctx->pc = 0x2bacc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
label_2baccc:
    // 0x2baccc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bacccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bacd0:
    // 0x2bacd0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bacd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bacd4:
    // 0x2bacd4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2bacd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2bacd8:
    // 0x2bacd8: 0x320f809  jalr        $t9
label_2bacdc:
    if (ctx->pc == 0x2BACDCu) {
        ctx->pc = 0x2BACE0u;
        goto label_2bace0;
    }
    ctx->pc = 0x2BACD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BACE0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BACD8u, 0x2BACE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BACE0u;
label_2bace0:
    // 0x2bace0: 0x8fa50380  lw          $a1, 0x380($sp)
    ctx->pc = 0x2bace0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
label_2bace4:
    // 0x2bace4: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
label_2bace8:
    if (ctx->pc == 0x2BACE8u) {
        ctx->pc = 0x2BACECu;
        goto label_2bacec;
    }
    ctx->pc = 0x2BACE4u;
    {
        const bool branch_taken_0x2bace4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bace4) {
            ctx->pc = 0x2BAD60u;
            goto label_2bad60;
        }
    }
    ctx->pc = 0x2BACECu;
label_2bacec:
    // 0x2bacec: 0x8fa20380  lw          $v0, 0x380($sp)
    ctx->pc = 0x2bacecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
label_2bacf0:
    // 0x2bacf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bacf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bacf4:
    // 0x2bacf4: 0xc051830  jal         func_1460C0
label_2bacf8:
    if (ctx->pc == 0x2BACF8u) {
        ctx->pc = 0x2BACFCu;
        goto label_2bacfc;
    }
    ctx->pc = 0x2BACF4u;
    SET_GPR_U32(ctx, 31, 0x2BACFCu);
    ctx->pc = 0x1460C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1460C0u, 0x2BACF4u, 0x2BACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BACFCu;
label_2bacfc:
    // 0x2bacfc: 0x8fa40380  lw          $a0, 0x380($sp)
    ctx->pc = 0x2bacfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
label_2bad00:
    // 0x2bad00: 0xc119c5c  jal         func_467170
label_2bad04:
    if (ctx->pc == 0x2BAD04u) {
        ctx->pc = 0x2BAD08u;
        goto label_2bad08;
    }
    ctx->pc = 0x2BAD00u;
    SET_GPR_U32(ctx, 31, 0x2BAD08u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2BAD00u, 0x2BAD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAD08u;
label_2bad08:
    // 0x2bad08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bad08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bad0c:
    // 0x2bad0c: 0xafa00380  sw          $zero, 0x380($sp)
    ctx->pc = 0x2bad0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 0));
label_2bad10:
    // 0x2bad10: 0x10000013  b           . + 4 + (0x13 << 2)
label_2bad14:
    if (ctx->pc == 0x2BAD14u) {
        ctx->pc = 0x2BAD18u;
        goto label_2bad18;
    }
    ctx->pc = 0x2BAD10u;
    {
        const bool branch_taken_0x2bad10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bad10) {
            ctx->pc = 0x2BAD60u;
            goto label_2bad60;
        }
    }
    ctx->pc = 0x2BAD18u;
label_2bad18:
    // 0x2bad18: 0x8fa20380  lw          $v0, 0x380($sp)
    ctx->pc = 0x2bad18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
label_2bad1c:
    // 0x2bad1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bad1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bad20:
    // 0x2bad20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bad20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bad24:
    // 0x2bad24: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2bad24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2bad28:
    // 0x2bad28: 0x320f809  jalr        $t9
label_2bad2c:
    if (ctx->pc == 0x2BAD2Cu) {
        ctx->pc = 0x2BAD30u;
        goto label_2bad30;
    }
    ctx->pc = 0x2BAD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BAD30u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAD28u, 0x2BAD30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BAD30u;
label_2bad30:
    // 0x2bad30: 0x8fa50380  lw          $a1, 0x380($sp)
    ctx->pc = 0x2bad30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
label_2bad34:
    // 0x2bad34: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_2bad38:
    if (ctx->pc == 0x2BAD38u) {
        ctx->pc = 0x2BAD3Cu;
        goto label_2bad3c;
    }
    ctx->pc = 0x2BAD34u;
    {
        const bool branch_taken_0x2bad34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bad34) {
            ctx->pc = 0x2BAD60u;
            goto label_2bad60;
        }
    }
    ctx->pc = 0x2BAD3Cu;
label_2bad3c:
    // 0x2bad3c: 0x8fa40380  lw          $a0, 0x380($sp)
    ctx->pc = 0x2bad3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
label_2bad40:
    // 0x2bad40: 0xc051830  jal         func_1460C0
label_2bad44:
    if (ctx->pc == 0x2BAD44u) {
        ctx->pc = 0x2BAD48u;
        goto label_2bad48;
    }
    ctx->pc = 0x2BAD40u;
    SET_GPR_U32(ctx, 31, 0x2BAD48u);
    ctx->pc = 0x1460C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1460C0u, 0x2BAD40u, 0x2BAD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAD48u;
label_2bad48:
    // 0x2bad48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bad48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bad4c:
    // 0x2bad4c: 0x8fa40380  lw          $a0, 0x380($sp)
    ctx->pc = 0x2bad4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 896)));
label_2bad50:
    // 0x2bad50: 0xc119c5c  jal         func_467170
label_2bad54:
    if (ctx->pc == 0x2BAD54u) {
        ctx->pc = 0x2BAD58u;
        goto label_2bad58;
    }
    ctx->pc = 0x2BAD50u;
    SET_GPR_U32(ctx, 31, 0x2BAD58u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2BAD50u, 0x2BAD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAD58u;
label_2bad58:
    // 0x2bad58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bad58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bad5c:
    // 0x2bad5c: 0xafa00380  sw          $zero, 0x380($sp)
    ctx->pc = 0x2bad5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 896), GPR_U32(ctx, 0));
label_2bad60:
    // 0x2bad60: 0x93a203b1  lbu         $v0, 0x3B1($sp)
    ctx->pc = 0x2bad60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 945)));
label_2bad64:
    // 0x2bad64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2bad68:
    if (ctx->pc == 0x2BAD68u) {
        ctx->pc = 0x2BAD6Cu;
        goto label_2bad6c;
    }
    ctx->pc = 0x2BAD64u;
    {
        const bool branch_taken_0x2bad64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bad64) {
            ctx->pc = 0x2BAD74u;
            goto label_2bad74;
        }
    }
    ctx->pc = 0x2BAD6Cu;
label_2bad6c:
    // 0x2bad6c: 0x27c40004  addiu       $a0, $fp, 0x4
    ctx->pc = 0x2bad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_2bad70:
    // 0x2bad70: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2bad70u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bad74:
    // 0x2bad74: 0x8fa403d0  lw          $a0, 0x3D0($sp)
    ctx->pc = 0x2bad74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_2bad78:
    // 0x2bad78: 0xc041a14  jal         func_106850
label_2bad7c:
    if (ctx->pc == 0x2BAD7Cu) {
        ctx->pc = 0x2BAD80u;
        goto label_2bad80;
    }
    ctx->pc = 0x2BAD78u;
    SET_GPR_U32(ctx, 31, 0x2BAD80u);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x2BAD78u, 0x2BAD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAD80u;
label_2bad80:
    // 0x2bad80: 0x17c2fb3c  bne         $fp, $v0, . + 4 + (-0x4C4 << 2)
label_2bad84:
    if (ctx->pc == 0x2BAD84u) {
        ctx->pc = 0x2BAD88u;
        goto label_2bad88;
    }
    ctx->pc = 0x2BAD80u;
    {
        const bool branch_taken_0x2bad80 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bad80) {
            ctx->pc = 0x2B9A74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9a74;
        }
    }
    ctx->pc = 0x2BAD88u;
label_2bad88:
    // 0x2bad88: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x2bad88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_2bad8c:
    // 0x2bad8c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2bad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2bad90:
    // 0x2bad90: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_2bad94:
    if (ctx->pc == 0x2BAD94u) {
        ctx->pc = 0x2BAD98u;
        goto label_2bad98;
    }
    ctx->pc = 0x2BAD90u;
    {
        const bool branch_taken_0x2bad90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bad90) {
            ctx->pc = 0x2BADB8u;
            goto label_2badb8;
        }
    }
    ctx->pc = 0x2BAD98u;
label_2bad98:
    // 0x2bad98: 0x802821  addu        $a1, $a0, $zero
    ctx->pc = 0x2bad98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_2bad9c:
    // 0x2bad9c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2bad9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_2bada0:
    // 0x2bada0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2bada0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2bada4:
    // 0x2bada4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2bada4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2bada8:
    // 0x2bada8: 0x0  nop
    ctx->pc = 0x2bada8u;
    // NOP
label_2badac:
    // 0x2badac: 0x0  nop
    ctx->pc = 0x2badacu;
    // NOP
label_2badb0:
    // 0x2badb0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2badb4:
    if (ctx->pc == 0x2BADB4u) {
        ctx->pc = 0x2BADB8u;
        goto label_2badb8;
    }
    ctx->pc = 0x2BADB0u;
    {
        const bool branch_taken_0x2badb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2badb0) {
            ctx->pc = 0x2BAD9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bad9c;
        }
    }
    ctx->pc = 0x2BADB8u;
label_2badb8:
    // 0x2badb8: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x2badb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2badbc:
    // 0x2badbc: 0x24160080  addiu       $s6, $zero, 0x80
    ctx->pc = 0x2badbcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2badc0:
    // 0x2badc0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2badc4:
    if (ctx->pc == 0x2BADC4u) {
        ctx->pc = 0x2BADC8u;
        goto label_2badc8;
    }
    ctx->pc = 0x2BADC0u;
    {
        const bool branch_taken_0x2badc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2badc0) {
            ctx->pc = 0x2BADE8u;
            goto label_2bade8;
        }
    }
    ctx->pc = 0x2BADC8u;
label_2badc8:
    // 0x2badc8: 0x402021  addu        $a0, $v0, $zero
    ctx->pc = 0x2badc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_2badcc:
    // 0x2badcc: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2badccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_2badd0:
    // 0x2badd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2badd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2badd4:
    // 0x2badd4: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x2badd4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_2badd8:
    // 0x2badd8: 0x0  nop
    ctx->pc = 0x2badd8u;
    // NOP
label_2baddc:
    // 0x2baddc: 0x0  nop
    ctx->pc = 0x2baddcu;
    // NOP
label_2bade0:
    // 0x2bade0: 0x16c0fffa  bnez        $s6, . + 4 + (-0x6 << 2)
label_2bade4:
    if (ctx->pc == 0x2BADE4u) {
        ctx->pc = 0x2BADE8u;
        goto label_2bade8;
    }
    ctx->pc = 0x2BADE0u;
    {
        const bool branch_taken_0x2bade0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bade0) {
            ctx->pc = 0x2BADCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2badcc;
        }
    }
    ctx->pc = 0x2BADE8u;
label_2bade8:
    // 0x2bade8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2bade8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2badec:
    // 0x2badec: 0xafa20364  sw          $v0, 0x364($sp)
    ctx->pc = 0x2badecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 868), GPR_U32(ctx, 2));
label_2badf0:
    // 0x2badf0: 0x8fa203c0  lw          $v0, 0x3C0($sp)
    ctx->pc = 0x2badf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2badf4:
    // 0x2badf4: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x2badf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_2badf8:
    // 0x2badf8: 0xc0513f8  jal         func_144FE0
label_2badfc:
    if (ctx->pc == 0x2BADFCu) {
        ctx->pc = 0x2BAE00u;
        goto label_2bae00;
    }
    ctx->pc = 0x2BADF8u;
    SET_GPR_U32(ctx, 31, 0x2BAE00u);
    ctx->pc = 0x144FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FE0u, 0x2BADF8u, 0x2BAE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAE00u;
label_2bae00:
    // 0x2bae00: 0xafa20360  sw          $v0, 0x360($sp)
    ctx->pc = 0x2bae00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 864), GPR_U32(ctx, 2));
label_2bae04:
    // 0x2bae04: 0x1000004d  b           . + 4 + (0x4D << 2)
label_2bae08:
    if (ctx->pc == 0x2BAE08u) {
        ctx->pc = 0x2BAE0Cu;
        goto label_2bae0c;
    }
    ctx->pc = 0x2BAE04u;
    {
        const bool branch_taken_0x2bae04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bae04) {
            ctx->pc = 0x2BAF3Cu;
            goto label_2baf3c;
        }
    }
    ctx->pc = 0x2BAE0Cu;
label_2bae0c:
    // 0x2bae0c: 0x8fa30360  lw          $v1, 0x360($sp)
    ctx->pc = 0x2bae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_2bae10:
    // 0x2bae10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2bae10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2bae14:
    // 0x2bae14: 0xafa4035c  sw          $a0, 0x35C($sp)
    ctx->pc = 0x2bae14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 860), GPR_U32(ctx, 4));
label_2bae18:
    // 0x2bae18: 0x8fa2035c  lw          $v0, 0x35C($sp)
    ctx->pc = 0x2bae18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 860)));
label_2bae1c:
    // 0x2bae1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bae1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bae20:
    // 0x2bae20: 0xc09d274  jal         func_2749D0
label_2bae24:
    if (ctx->pc == 0x2BAE24u) {
        ctx->pc = 0x2BAE28u;
        goto label_2bae28;
    }
    ctx->pc = 0x2BAE20u;
    SET_GPR_U32(ctx, 31, 0x2BAE28u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x2BAE20u, 0x2BAE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAE28u;
label_2bae28:
    // 0x2bae28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bae28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bae2c:
    // 0x2bae2c: 0xc09d0d0  jal         func_274340
label_2bae30:
    if (ctx->pc == 0x2BAE30u) {
        ctx->pc = 0x2BAE34u;
        goto label_2bae34;
    }
    ctx->pc = 0x2BAE2Cu;
    SET_GPR_U32(ctx, 31, 0x2BAE34u);
    ctx->pc = 0x274340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274340u, 0x2BAE2Cu, 0x2BAE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAE34u;
label_2bae34:
    // 0x2bae34: 0xafa20358  sw          $v0, 0x358($sp)
    ctx->pc = 0x2bae34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 856), GPR_U32(ctx, 2));
label_2bae38:
    // 0x2bae38: 0x8fa30364  lw          $v1, 0x364($sp)
    ctx->pc = 0x2bae38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 868)));
label_2bae3c:
    // 0x2bae3c: 0x8fa50358  lw          $a1, 0x358($sp)
    ctx->pc = 0x2bae3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 856)));
label_2bae40:
    // 0x2bae40: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x2bae40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2bae44:
    // 0x2bae44: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2bae48:
    if (ctx->pc == 0x2BAE48u) {
        ctx->pc = 0x2BAE4Cu;
        goto label_2bae4c;
    }
    ctx->pc = 0x2BAE44u;
    {
        const bool branch_taken_0x2bae44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bae44) {
            ctx->pc = 0x2BAE54u;
            goto label_2bae54;
        }
    }
    ctx->pc = 0x2BAE4Cu;
label_2bae4c:
    // 0x2bae4c: 0x8fa20358  lw          $v0, 0x358($sp)
    ctx->pc = 0x2bae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 856)));
label_2bae50:
    // 0x2bae50: 0xafa20364  sw          $v0, 0x364($sp)
    ctx->pc = 0x2bae50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 868), GPR_U32(ctx, 2));
label_2bae54:
    // 0x2bae54: 0x8fa2035c  lw          $v0, 0x35C($sp)
    ctx->pc = 0x2bae54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 860)));
label_2bae58:
    // 0x2bae58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bae58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bae5c:
    // 0x2bae5c: 0xc09d274  jal         func_2749D0
label_2bae60:
    if (ctx->pc == 0x2BAE60u) {
        ctx->pc = 0x2BAE64u;
        goto label_2bae64;
    }
    ctx->pc = 0x2BAE5Cu;
    SET_GPR_U32(ctx, 31, 0x2BAE64u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x2BAE5Cu, 0x2BAE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAE64u;
label_2bae64:
    // 0x2bae64: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2bae64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bae68:
    // 0x2bae68: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2bae68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2bae6c:
    // 0x2bae6c: 0xc09d0b8  jal         func_2742E0
label_2bae70:
    if (ctx->pc == 0x2BAE70u) {
        ctx->pc = 0x2BAE74u;
        goto label_2bae74;
    }
    ctx->pc = 0x2BAE6Cu;
    SET_GPR_U32(ctx, 31, 0x2BAE74u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2BAE6Cu, 0x2BAE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAE74u;
label_2bae74:
    // 0x2bae74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bae74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bae78:
    // 0x2bae78: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2bae78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2bae7c:
    // 0x2bae7c: 0x1065001c  beq         $v1, $a1, . + 4 + (0x1C << 2)
label_2bae80:
    if (ctx->pc == 0x2BAE80u) {
        ctx->pc = 0x2BAE84u;
        goto label_2bae84;
    }
    ctx->pc = 0x2BAE7Cu;
    {
        const bool branch_taken_0x2bae7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x2bae7c) {
            ctx->pc = 0x2BAEF0u;
            goto label_2baef0;
        }
    }
    ctx->pc = 0x2BAE84u;
label_2bae84:
    // 0x2bae84: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2bae84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2bae88:
    // 0x2bae88: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_2bae8c:
    if (ctx->pc == 0x2BAE8Cu) {
        ctx->pc = 0x2BAE90u;
        goto label_2bae90;
    }
    ctx->pc = 0x2BAE88u;
    {
        const bool branch_taken_0x2bae88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bae88) {
            ctx->pc = 0x2BAEF0u;
            goto label_2baef0;
        }
    }
    ctx->pc = 0x2BAE90u;
label_2bae90:
    // 0x2bae90: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2bae90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2bae94:
    // 0x2bae94: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
label_2bae98:
    if (ctx->pc == 0x2BAE98u) {
        ctx->pc = 0x2BAE9Cu;
        goto label_2bae9c;
    }
    ctx->pc = 0x2BAE94u;
    {
        const bool branch_taken_0x2bae94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bae94) {
            ctx->pc = 0x2BAEBCu;
            goto label_2baebc;
        }
    }
    ctx->pc = 0x2BAE9Cu;
label_2bae9c:
    // 0x2bae9c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2bae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2baea0:
    // 0x2baea0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_2baea4:
    if (ctx->pc == 0x2BAEA4u) {
        ctx->pc = 0x2BAEA8u;
        goto label_2baea8;
    }
    ctx->pc = 0x2BAEA0u;
    {
        const bool branch_taken_0x2baea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2baea0) {
            ctx->pc = 0x2BAEBCu;
            goto label_2baebc;
        }
    }
    ctx->pc = 0x2BAEA8u;
label_2baea8:
    // 0x2baea8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2baea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2baeac:
    // 0x2baeac: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
label_2baeb0:
    if (ctx->pc == 0x2BAEB0u) {
        ctx->pc = 0x2BAEB4u;
        goto label_2baeb4;
    }
    ctx->pc = 0x2BAEACu;
    {
        const bool branch_taken_0x2baeac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2baeac) {
            ctx->pc = 0x2BAEBCu;
            goto label_2baebc;
        }
    }
    ctx->pc = 0x2BAEB4u;
label_2baeb4:
    // 0x2baeb4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2baeb8:
    if (ctx->pc == 0x2BAEB8u) {
        ctx->pc = 0x2BAEBCu;
        goto label_2baebc;
    }
    ctx->pc = 0x2BAEB4u;
    {
        const bool branch_taken_0x2baeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baeb4) {
            ctx->pc = 0x2BAF30u;
            goto label_2baf30;
        }
    }
    ctx->pc = 0x2BAEBCu;
label_2baebc:
    // 0x2baebc: 0x8fa5035c  lw          $a1, 0x35C($sp)
    ctx->pc = 0x2baebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 860)));
label_2baec0:
    // 0x2baec0: 0xafa50354  sw          $a1, 0x354($sp)
    ctx->pc = 0x2baec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 852), GPR_U32(ctx, 5));
label_2baec4:
    // 0x2baec4: 0x8fa20354  lw          $v0, 0x354($sp)
    ctx->pc = 0x2baec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 852)));
label_2baec8:
    // 0x2baec8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2baec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2baecc:
    // 0x2baecc: 0xc0aee08  jal         func_2BB820
label_2baed0:
    if (ctx->pc == 0x2BAED0u) {
        ctx->pc = 0x2BAED4u;
        goto label_2baed4;
    }
    ctx->pc = 0x2BAECCu;
    SET_GPR_U32(ctx, 31, 0x2BAED4u);
    ctx->pc = 0x2BB820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB820u, 0x2BAECCu, 0x2BAED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAED4u;
label_2baed4:
    // 0x2baed4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2baed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2baed8:
    // 0x2baed8: 0x8fa20358  lw          $v0, 0x358($sp)
    ctx->pc = 0x2baed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 856)));
label_2baedc:
    // 0x2baedc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2baedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2baee0:
    // 0x2baee0: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x2baee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2baee4:
    // 0x2baee4: 0xac6401d0  sw          $a0, 0x1D0($v1)
    ctx->pc = 0x2baee4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 4));
label_2baee8:
    // 0x2baee8: 0x10000011  b           . + 4 + (0x11 << 2)
label_2baeec:
    if (ctx->pc == 0x2BAEECu) {
        ctx->pc = 0x2BAEF0u;
        goto label_2baef0;
    }
    ctx->pc = 0x2BAEE8u;
    {
        const bool branch_taken_0x2baee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baee8) {
            ctx->pc = 0x2BAF30u;
            goto label_2baf30;
        }
    }
    ctx->pc = 0x2BAEF0u;
label_2baef0:
    // 0x2baef0: 0x8fa2035c  lw          $v0, 0x35C($sp)
    ctx->pc = 0x2baef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 860)));
label_2baef4:
    // 0x2baef4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2baef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2baef8:
    // 0x2baef8: 0xc09d274  jal         func_2749D0
label_2baefc:
    if (ctx->pc == 0x2BAEFCu) {
        ctx->pc = 0x2BAF00u;
        goto label_2baf00;
    }
    ctx->pc = 0x2BAEF8u;
    SET_GPR_U32(ctx, 31, 0x2BAF00u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x2BAEF8u, 0x2BAF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAF00u;
label_2baf00:
    // 0x2baf00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2baf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2baf04:
    // 0x2baf04: 0xc09d0b8  jal         func_2742E0
label_2baf08:
    if (ctx->pc == 0x2BAF08u) {
        ctx->pc = 0x2BAF0Cu;
        goto label_2baf0c;
    }
    ctx->pc = 0x2BAF04u;
    SET_GPR_U32(ctx, 31, 0x2BAF0Cu);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2BAF04u, 0x2BAF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAF0Cu;
label_2baf0c:
    // 0x2baf0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2baf0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2baf10:
    // 0x2baf10: 0x8fa20358  lw          $v0, 0x358($sp)
    ctx->pc = 0x2baf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 856)));
label_2baf14:
    // 0x2baf14: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x2baf14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
label_2baf18:
    // 0x2baf18: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x2baf18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_2baf1c:
    // 0x2baf1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2baf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2baf20:
    // 0x2baf20: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x2baf20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_2baf24:
    // 0x2baf24: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x2baf24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_2baf28:
    // 0x2baf28: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x2baf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2baf2c:
    // 0x2baf2c: 0xac850150  sw          $a1, 0x150($a0)
    ctx->pc = 0x2baf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 5));
label_2baf30:
    // 0x2baf30: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x2baf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_2baf34:
    // 0x2baf34: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2baf34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2baf38:
    // 0x2baf38: 0xafa40360  sw          $a0, 0x360($sp)
    ctx->pc = 0x2baf38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 864), GPR_U32(ctx, 4));
label_2baf3c:
    // 0x2baf3c: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x2baf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_2baf40:
    // 0x2baf40: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x2baf40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_2baf44:
    // 0x2baf44: 0x8fa203c0  lw          $v0, 0x3C0($sp)
    ctx->pc = 0x2baf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2baf48:
    // 0x2baf48: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x2baf48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_2baf4c:
    // 0x2baf4c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2baf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2baf50:
    // 0x2baf50: 0xc09c064  jal         func_270190
label_2baf54:
    if (ctx->pc == 0x2BAF54u) {
        ctx->pc = 0x2BAF58u;
        goto label_2baf58;
    }
    ctx->pc = 0x2BAF50u;
    SET_GPR_U32(ctx, 31, 0x2BAF58u);
    ctx->pc = 0x270190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270190u, 0x2BAF50u, 0x2BAF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAF58u;
label_2baf58:
    // 0x2baf58: 0x7ba30120  lq          $v1, 0x120($sp)
    ctx->pc = 0x2baf58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_2baf5c:
    // 0x2baf5c: 0x1462ffab  bne         $v1, $v0, . + 4 + (-0x55 << 2)
label_2baf60:
    if (ctx->pc == 0x2BAF60u) {
        ctx->pc = 0x2BAF64u;
        goto label_2baf64;
    }
    ctx->pc = 0x2BAF5Cu;
    {
        const bool branch_taken_0x2baf5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2baf5c) {
            ctx->pc = 0x2BAE0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bae0c;
        }
    }
    ctx->pc = 0x2BAF64u;
label_2baf64:
    // 0x2baf64: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2baf64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2baf68:
    // 0x2baf68: 0x10000084  b           . + 4 + (0x84 << 2)
label_2baf6c:
    if (ctx->pc == 0x2BAF6Cu) {
        ctx->pc = 0x2BAF70u;
        goto label_2baf70;
    }
    ctx->pc = 0x2BAF68u;
    {
        const bool branch_taken_0x2baf68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baf68) {
            ctx->pc = 0x2BB17Cu;
            goto label_2bb17c;
        }
    }
    ctx->pc = 0x2BAF70u;
label_2baf70:
    // 0x2baf70: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x2baf70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2baf74:
    // 0x2baf74: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x2baf74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_2baf78:
    // 0x2baf78: 0x8ca201d0  lw          $v0, 0x1D0($a1)
    ctx->pc = 0x2baf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 464)));
label_2baf7c:
    // 0x2baf7c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x2baf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_2baf80:
    // 0x2baf80: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x2baf80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2baf84:
    // 0x2baf84: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
label_2baf88:
    if (ctx->pc == 0x2BAF88u) {
        ctx->pc = 0x2BAF8Cu;
        goto label_2baf8c;
    }
    ctx->pc = 0x2BAF84u;
    {
        const bool branch_taken_0x2baf84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baf84) {
            ctx->pc = 0x2BB174u;
            goto label_2bb174;
        }
    }
    ctx->pc = 0x2BAF8Cu;
label_2baf8c:
    // 0x2baf8c: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x2baf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2baf90:
    // 0x2baf90: 0xbd2021  addu        $a0, $a1, $sp
    ctx->pc = 0x2baf90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_2baf94:
    // 0x2baf94: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x2baf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_2baf98:
    // 0x2baf98: 0x14400076  bnez        $v0, . + 4 + (0x76 << 2)
label_2baf9c:
    if (ctx->pc == 0x2BAF9Cu) {
        ctx->pc = 0x2BAFA0u;
        goto label_2bafa0;
    }
    ctx->pc = 0x2BAF98u;
    {
        const bool branch_taken_0x2baf98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2baf98) {
            ctx->pc = 0x2BB174u;
            goto label_2bb174;
        }
    }
    ctx->pc = 0x2BAFA0u;
label_2bafa0:
    // 0x2bafa0: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x2bafa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2bafa4:
    // 0x2bafa4: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x2bafa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_2bafa8:
    // 0x2bafa8: 0x8ca201d0  lw          $v0, 0x1D0($a1)
    ctx->pc = 0x2bafa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 464)));
label_2bafac:
    // 0x2bafac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bafacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bafb0:
    // 0x2bafb0: 0xc095014  jal         func_254050
label_2bafb4:
    if (ctx->pc == 0x2BAFB4u) {
        ctx->pc = 0x2BAFB8u;
        goto label_2bafb8;
    }
    ctx->pc = 0x2BAFB0u;
    SET_GPR_U32(ctx, 31, 0x2BAFB8u);
    ctx->pc = 0x254050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254050u, 0x2BAFB0u, 0x2BAFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAFB8u;
label_2bafb8:
    // 0x2bafb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bafb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bafbc:
    // 0x2bafbc: 0xafa40350  sw          $a0, 0x350($sp)
    ctx->pc = 0x2bafbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 848), GPR_U32(ctx, 4));
label_2bafc0:
    // 0x2bafc0: 0x8fa20350  lw          $v0, 0x350($sp)
    ctx->pc = 0x2bafc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_2bafc4:
    // 0x2bafc4: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
label_2bafc8:
    if (ctx->pc == 0x2BAFC8u) {
        ctx->pc = 0x2BAFCCu;
        goto label_2bafcc;
    }
    ctx->pc = 0x2BAFC4u;
    {
        const bool branch_taken_0x2bafc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bafc4) {
            ctx->pc = 0x2BB174u;
            goto label_2bb174;
        }
    }
    ctx->pc = 0x2BAFCCu;
label_2bafcc:
    // 0x2bafcc: 0x8fa50350  lw          $a1, 0x350($sp)
    ctx->pc = 0x2bafccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_2bafd0:
    // 0x2bafd0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2bafd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2bafd4:
    // 0x2bafd4: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_2bafd8:
    if (ctx->pc == 0x2BAFD8u) {
        ctx->pc = 0x2BAFDCu;
        goto label_2bafdc;
    }
    ctx->pc = 0x2BAFD4u;
    {
        const bool branch_taken_0x2bafd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bafd4) {
            ctx->pc = 0x2BB174u;
            goto label_2bb174;
        }
    }
    ctx->pc = 0x2BAFDCu;
label_2bafdc:
    // 0x2bafdc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2bafdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2bafe0:
    // 0x2bafe0: 0xc119b68  jal         func_466DA0
label_2bafe4:
    if (ctx->pc == 0x2BAFE4u) {
        ctx->pc = 0x2BAFE8u;
        goto label_2bafe8;
    }
    ctx->pc = 0x2BAFE0u;
    SET_GPR_U32(ctx, 31, 0x2BAFE8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BAFE0u, 0x2BAFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAFE8u;
label_2bafe8:
    // 0x2bafe8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bafe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bafec:
    // 0x2bafec: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2bafecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2baff0:
    // 0x2baff0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2baff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2baff4:
    // 0x2baff4: 0xc0400e0  jal         func_100380
label_2baff8:
    if (ctx->pc == 0x2BAFF8u) {
        ctx->pc = 0x2BAFFCu;
        goto label_2baffc;
    }
    ctx->pc = 0x2BAFF4u;
    SET_GPR_U32(ctx, 31, 0x2BAFFCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BAFF4u, 0x2BAFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAFFCu;
label_2baffc:
    // 0x2baffc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2baffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb000:
    // 0x2bb000: 0xafa40290  sw          $a0, 0x290($sp)
    ctx->pc = 0x2bb000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 4));
label_2bb004:
    // 0x2bb004: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x2bb004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_2bb008:
    // 0x2bb008: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bb00c:
    if (ctx->pc == 0x2BB00Cu) {
        ctx->pc = 0x2BB010u;
        goto label_2bb010;
    }
    ctx->pc = 0x2BB008u;
    {
        const bool branch_taken_0x2bb008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb008) {
            ctx->pc = 0x2BB024u;
            goto label_2bb024;
        }
    }
    ctx->pc = 0x2BB010u;
label_2bb010:
    // 0x2bb010: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x2bb010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_2bb014:
    // 0x2bb014: 0xc09d084  jal         func_274210
label_2bb018:
    if (ctx->pc == 0x2BB018u) {
        ctx->pc = 0x2BB01Cu;
        goto label_2bb01c;
    }
    ctx->pc = 0x2BB014u;
    SET_GPR_U32(ctx, 31, 0x2BB01Cu);
    ctx->pc = 0x274210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274210u, 0x2BB014u, 0x2BB01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB01Cu;
label_2bb01c:
    // 0x2bb01c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb020:
    // 0x2bb020: 0xafa50290  sw          $a1, 0x290($sp)
    ctx->pc = 0x2bb020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 5));
label_2bb024:
    // 0x2bb024: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x2bb024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_2bb028:
    // 0x2bb028: 0xafa2034c  sw          $v0, 0x34C($sp)
    ctx->pc = 0x2bb028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 2));
label_2bb02c:
    // 0x2bb02c: 0x8fa4034c  lw          $a0, 0x34C($sp)
    ctx->pc = 0x2bb02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_2bb030:
    // 0x2bb030: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2bb030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2bb034:
    // 0x2bb034: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb038:
    // 0x2bb038: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2bb038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bb03c:
    // 0x2bb03c: 0xc09d0c0  jal         func_274300
label_2bb040:
    if (ctx->pc == 0x2BB040u) {
        ctx->pc = 0x2BB044u;
        goto label_2bb044;
    }
    ctx->pc = 0x2BB03Cu;
    SET_GPR_U32(ctx, 31, 0x2BB044u);
    ctx->pc = 0x274300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274300u, 0x2BB03Cu, 0x2BB044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB044u;
label_2bb044:
    // 0x2bb044: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb048:
    // 0x2bb048: 0x8fa4034c  lw          $a0, 0x34C($sp)
    ctx->pc = 0x2bb048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_2bb04c:
    // 0x2bb04c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bb04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2bb050:
    // 0x2bb050: 0xc09d0dc  jal         func_274370
label_2bb054:
    if (ctx->pc == 0x2BB054u) {
        ctx->pc = 0x2BB058u;
        goto label_2bb058;
    }
    ctx->pc = 0x2BB050u;
    SET_GPR_U32(ctx, 31, 0x2BB058u);
    ctx->pc = 0x274370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274370u, 0x2BB050u, 0x2BB058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB058u;
label_2bb058:
    // 0x2bb058: 0x8fa5034c  lw          $a1, 0x34C($sp)
    ctx->pc = 0x2bb058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_2bb05c:
    // 0x2bb05c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2bb05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bb060:
    // 0x2bb060: 0x240204b3  addiu       $v0, $zero, 0x4B3
    ctx->pc = 0x2bb060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1203));
label_2bb064:
    // 0x2bb064: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb068:
    // 0x2bb068: 0x8fa60350  lw          $a2, 0x350($sp)
    ctx->pc = 0x2bb068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_2bb06c:
    // 0x2bb06c: 0xc0433dc  jal         func_10CF70
label_2bb070:
    if (ctx->pc == 0x2BB070u) {
        ctx->pc = 0x2BB074u;
        goto label_2bb074;
    }
    ctx->pc = 0x2BB06Cu;
    SET_GPR_U32(ctx, 31, 0x2BB074u);
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x2BB06Cu, 0x2BB074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB074u;
label_2bb074:
    // 0x2bb074: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb078:
    // 0x2bb078: 0x24040084  addiu       $a0, $zero, 0x84
    ctx->pc = 0x2bb078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_2bb07c:
    // 0x2bb07c: 0xc119b68  jal         func_466DA0
label_2bb080:
    if (ctx->pc == 0x2BB080u) {
        ctx->pc = 0x2BB084u;
        goto label_2bb084;
    }
    ctx->pc = 0x2BB07Cu;
    SET_GPR_U32(ctx, 31, 0x2BB084u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BB07Cu, 0x2BB084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB084u;
label_2bb084:
    // 0x2bb084: 0x24040084  addiu       $a0, $zero, 0x84
    ctx->pc = 0x2bb084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_2bb088:
    // 0x2bb088: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb08c:
    // 0x2bb08c: 0xc0400e0  jal         func_100380
label_2bb090:
    if (ctx->pc == 0x2BB090u) {
        ctx->pc = 0x2BB094u;
        goto label_2bb094;
    }
    ctx->pc = 0x2BB08Cu;
    SET_GPR_U32(ctx, 31, 0x2BB094u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BB08Cu, 0x2BB094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB094u;
label_2bb094:
    // 0x2bb094: 0xafa2028c  sw          $v0, 0x28C($sp)
    ctx->pc = 0x2bb094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 2));
label_2bb098:
    // 0x2bb098: 0x8fa4028c  lw          $a0, 0x28C($sp)
    ctx->pc = 0x2bb098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
label_2bb09c:
    // 0x2bb09c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2bb0a0:
    if (ctx->pc == 0x2BB0A0u) {
        ctx->pc = 0x2BB0A4u;
        goto label_2bb0a4;
    }
    ctx->pc = 0x2BB09Cu;
    {
        const bool branch_taken_0x2bb09c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb09c) {
            ctx->pc = 0x2BB0BCu;
            goto label_2bb0bc;
        }
    }
    ctx->pc = 0x2BB0A4u;
label_2bb0a4:
    // 0x2bb0a4: 0x8fa5028c  lw          $a1, 0x28C($sp)
    ctx->pc = 0x2bb0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
label_2bb0a8:
    // 0x2bb0a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2bb0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bb0ac:
    // 0x2bb0ac: 0xc0a8cd8  jal         func_2A3360
label_2bb0b0:
    if (ctx->pc == 0x2BB0B0u) {
        ctx->pc = 0x2BB0B4u;
        goto label_2bb0b4;
    }
    ctx->pc = 0x2BB0ACu;
    SET_GPR_U32(ctx, 31, 0x2BB0B4u);
    ctx->pc = 0x2A3360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3360u, 0x2BB0ACu, 0x2BB0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB0B4u;
label_2bb0b4:
    // 0x2bb0b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb0b8:
    // 0x2bb0b8: 0xafa4028c  sw          $a0, 0x28C($sp)
    ctx->pc = 0x2bb0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 4));
label_2bb0bc:
    // 0x2bb0bc: 0x8fa2028c  lw          $v0, 0x28C($sp)
    ctx->pc = 0x2bb0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
label_2bb0c0:
    // 0x2bb0c0: 0xafa20348  sw          $v0, 0x348($sp)
    ctx->pc = 0x2bb0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 840), GPR_U32(ctx, 2));
label_2bb0c4:
    // 0x2bb0c4: 0x8fa40348  lw          $a0, 0x348($sp)
    ctx->pc = 0x2bb0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
label_2bb0c8:
    // 0x2bb0c8: 0x8fa203c0  lw          $v0, 0x3C0($sp)
    ctx->pc = 0x2bb0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2bb0cc:
    // 0x2bb0cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb0d0:
    // 0x2bb0d0: 0xc09d23c  jal         func_2748F0
label_2bb0d4:
    if (ctx->pc == 0x2BB0D4u) {
        ctx->pc = 0x2BB0D8u;
        goto label_2bb0d8;
    }
    ctx->pc = 0x2BB0D0u;
    SET_GPR_U32(ctx, 31, 0x2BB0D8u);
    ctx->pc = 0x2748F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748F0u, 0x2BB0D0u, 0x2BB0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB0D8u;
label_2bb0d8:
    // 0x2bb0d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bb0d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb0dc:
    // 0x2bb0dc: 0x8fa303c0  lw          $v1, 0x3C0($sp)
    ctx->pc = 0x2bb0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2bb0e0:
    // 0x2bb0e0: 0x8fa20348  lw          $v0, 0x348($sp)
    ctx->pc = 0x2bb0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
label_2bb0e4:
    // 0x2bb0e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb0e8:
    // 0x2bb0e8: 0x8fa2034c  lw          $v0, 0x34C($sp)
    ctx->pc = 0x2bb0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 844)));
label_2bb0ec:
    // 0x2bb0ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb0f0:
    // 0x2bb0f0: 0x8c660024  lw          $a2, 0x24($v1)
    ctx->pc = 0x2bb0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_2bb0f4:
    // 0x2bb0f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bb0f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bb0f8:
    // 0x2bb0f8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2bb0f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2bb0fc:
    // 0x2bb0fc: 0x320f809  jalr        $t9
label_2bb100:
    if (ctx->pc == 0x2BB100u) {
        ctx->pc = 0x2BB104u;
        goto label_2bb104;
    }
    ctx->pc = 0x2BB0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BB104u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB0FCu, 0x2BB104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BB104u;
label_2bb104:
    // 0x2bb104: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb108:
    // 0x2bb108: 0x8fa203e0  lw          $v0, 0x3E0($sp)
    ctx->pc = 0x2bb108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
label_2bb10c:
    // 0x2bb10c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb110:
    // 0x2bb110: 0xc09c3b0  jal         func_270EC0
label_2bb114:
    if (ctx->pc == 0x2BB114u) {
        ctx->pc = 0x2BB118u;
        goto label_2bb118;
    }
    ctx->pc = 0x2BB110u;
    SET_GPR_U32(ctx, 31, 0x2BB118u);
    ctx->pc = 0x270EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270EC0u, 0x2BB110u, 0x2BB118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB118u;
label_2bb118:
    // 0x2bb118: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x2bb118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_2bb11c:
    // 0x2bb11c: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x2bb11cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2bb120:
    // 0x2bb120: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x2bb120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2bb124:
    // 0x2bb124: 0x8fa20348  lw          $v0, 0x348($sp)
    ctx->pc = 0x2bb124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
label_2bb128:
    // 0x2bb128: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb12c:
    // 0x2bb12c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bb12cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bb130:
    // 0x2bb130: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2bb130u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2bb134:
    // 0x2bb134: 0x320f809  jalr        $t9
label_2bb138:
    if (ctx->pc == 0x2BB138u) {
        ctx->pc = 0x2BB13Cu;
        goto label_2bb13c;
    }
    ctx->pc = 0x2BB134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BB13Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB134u, 0x2BB13Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BB13Cu;
label_2bb13c:
    // 0x2bb13c: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x2bb13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_2bb140:
    // 0x2bb140: 0x8fa503e0  lw          $a1, 0x3E0($sp)
    ctx->pc = 0x2bb140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
label_2bb144:
    // 0x2bb144: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2bb144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bb148:
    // 0x2bb148: 0x8fa70348  lw          $a3, 0x348($sp)
    ctx->pc = 0x2bb148u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
label_2bb14c:
    // 0x2bb14c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2bb14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2bb150:
    // 0x2bb150: 0xc09c2b8  jal         func_270AE0
label_2bb154:
    if (ctx->pc == 0x2BB154u) {
        ctx->pc = 0x2BB158u;
        goto label_2bb158;
    }
    ctx->pc = 0x2BB150u;
    SET_GPR_U32(ctx, 31, 0x2BB158u);
    ctx->pc = 0x270AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270AE0u, 0x2BB150u, 0x2BB158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB158u;
label_2bb158:
    // 0x2bb158: 0x8fb003c0  lw          $s0, 0x3C0($sp)
    ctx->pc = 0x2bb158u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2bb15c:
    // 0x2bb15c: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x2bb15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_2bb160:
    // 0x2bb160: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2bb160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bb164:
    // 0x2bb164: 0x27a20348  addiu       $v0, $sp, 0x348
    ctx->pc = 0x2bb164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 840));
label_2bb168:
    // 0x2bb168: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb16c:
    // 0x2bb16c: 0xc09c1d8  jal         func_270760
label_2bb170:
    if (ctx->pc == 0x2BB170u) {
        ctx->pc = 0x2BB174u;
        goto label_2bb174;
    }
    ctx->pc = 0x2BB16Cu;
    SET_GPR_U32(ctx, 31, 0x2BB174u);
    ctx->pc = 0x270760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270760u, 0x2BB16Cu, 0x2BB174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB174u;
label_2bb174:
    // 0x2bb174: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x2bb174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2bb178:
    // 0x2bb178: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2bb178u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bb17c:
    // 0x2bb17c: 0x8fa20364  lw          $v0, 0x364($sp)
    ctx->pc = 0x2bb17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 868)));
label_2bb180:
    // 0x2bb180: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x2bb180u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_2bb184:
    // 0x2bb184: 0x1020ff7a  beqz        $at, . + 4 + (-0x86 << 2)
label_2bb188:
    if (ctx->pc == 0x2BB188u) {
        ctx->pc = 0x2BB18Cu;
        goto label_2bb18c;
    }
    ctx->pc = 0x2BB184u;
    {
        const bool branch_taken_0x2bb184 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb184) {
            ctx->pc = 0x2BAF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2baf70;
        }
    }
    ctx->pc = 0x2BB18Cu;
label_2bb18c:
    // 0x2bb18c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2bb18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2bb190:
    // 0x2bb190: 0xc119b68  jal         func_466DA0
label_2bb194:
    if (ctx->pc == 0x2BB194u) {
        ctx->pc = 0x2BB198u;
        goto label_2bb198;
    }
    ctx->pc = 0x2BB190u;
    SET_GPR_U32(ctx, 31, 0x2BB198u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BB190u, 0x2BB198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB198u;
label_2bb198:
    // 0x2bb198: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2bb198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2bb19c:
    // 0x2bb19c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb1a0:
    // 0x2bb1a0: 0xc0400e0  jal         func_100380
label_2bb1a4:
    if (ctx->pc == 0x2BB1A4u) {
        ctx->pc = 0x2BB1A8u;
        goto label_2bb1a8;
    }
    ctx->pc = 0x2BB1A0u;
    SET_GPR_U32(ctx, 31, 0x2BB1A8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BB1A0u, 0x2BB1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB1A8u;
label_2bb1a8:
    // 0x2bb1a8: 0xafa20288  sw          $v0, 0x288($sp)
    ctx->pc = 0x2bb1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 2));
label_2bb1ac:
    // 0x2bb1ac: 0x8fa40288  lw          $a0, 0x288($sp)
    ctx->pc = 0x2bb1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_2bb1b0:
    // 0x2bb1b0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2bb1b4:
    if (ctx->pc == 0x2BB1B4u) {
        ctx->pc = 0x2BB1B8u;
        goto label_2bb1b8;
    }
    ctx->pc = 0x2BB1B0u;
    {
        const bool branch_taken_0x2bb1b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb1b0) {
            ctx->pc = 0x2BB1D0u;
            goto label_2bb1d0;
        }
    }
    ctx->pc = 0x2BB1B8u;
label_2bb1b8:
    // 0x2bb1b8: 0x8fa50288  lw          $a1, 0x288($sp)
    ctx->pc = 0x2bb1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_2bb1bc:
    // 0x2bb1bc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2bb1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bb1c0:
    // 0x2bb1c0: 0xc09d084  jal         func_274210
label_2bb1c4:
    if (ctx->pc == 0x2BB1C4u) {
        ctx->pc = 0x2BB1C8u;
        goto label_2bb1c8;
    }
    ctx->pc = 0x2BB1C0u;
    SET_GPR_U32(ctx, 31, 0x2BB1C8u);
    ctx->pc = 0x274210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274210u, 0x2BB1C0u, 0x2BB1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB1C8u;
label_2bb1c8:
    // 0x2bb1c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb1cc:
    // 0x2bb1cc: 0xafa40288  sw          $a0, 0x288($sp)
    ctx->pc = 0x2bb1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 4));
label_2bb1d0:
    // 0x2bb1d0: 0x8fa20288  lw          $v0, 0x288($sp)
    ctx->pc = 0x2bb1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
label_2bb1d4:
    // 0x2bb1d4: 0xafa20344  sw          $v0, 0x344($sp)
    ctx->pc = 0x2bb1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 836), GPR_U32(ctx, 2));
label_2bb1d8:
    // 0x2bb1d8: 0x8fa50344  lw          $a1, 0x344($sp)
    ctx->pc = 0x2bb1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
label_2bb1dc:
    // 0x2bb1dc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2bb1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bb1e0:
    // 0x2bb1e0: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x2bb1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_2bb1e4:
    // 0x2bb1e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb1e8:
    // 0x2bb1e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bb1e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb1ec:
    // 0x2bb1ec: 0xc09d0c0  jal         func_274300
label_2bb1f0:
    if (ctx->pc == 0x2BB1F0u) {
        ctx->pc = 0x2BB1F4u;
        goto label_2bb1f4;
    }
    ctx->pc = 0x2BB1ECu;
    SET_GPR_U32(ctx, 31, 0x2BB1F4u);
    ctx->pc = 0x274300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274300u, 0x2BB1ECu, 0x2BB1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB1F4u;
label_2bb1f4:
    // 0x2bb1f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb1f8:
    // 0x2bb1f8: 0x8fa5038c  lw          $a1, 0x38C($sp)
    ctx->pc = 0x2bb1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 908)));
label_2bb1fc:
    // 0x2bb1fc: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2bb1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2bb200:
    // 0x2bb200: 0x8fa40344  lw          $a0, 0x344($sp)
    ctx->pc = 0x2bb200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
label_2bb204:
    // 0x2bb204: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb208:
    // 0x2bb208: 0xc09d0dc  jal         func_274370
label_2bb20c:
    if (ctx->pc == 0x2BB20Cu) {
        ctx->pc = 0x2BB210u;
        goto label_2bb210;
    }
    ctx->pc = 0x2BB208u;
    SET_GPR_U32(ctx, 31, 0x2BB210u);
    ctx->pc = 0x274370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274370u, 0x2BB208u, 0x2BB210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB210u;
label_2bb210:
    // 0x2bb210: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2bb210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_2bb214:
    // 0x2bb214: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x2bb214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2bb218:
    // 0x2bb218: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2bb218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bb21c:
    // 0x2bb21c: 0xc119b68  jal         func_466DA0
label_2bb220:
    if (ctx->pc == 0x2BB220u) {
        ctx->pc = 0x2BB224u;
        goto label_2bb224;
    }
    ctx->pc = 0x2BB21Cu;
    SET_GPR_U32(ctx, 31, 0x2BB224u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BB21Cu, 0x2BB224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB224u;
label_2bb224:
    // 0x2bb224: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bb224u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb228:
    // 0x2bb228: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x2bb228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2bb22c:
    // 0x2bb22c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb230:
    // 0x2bb230: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2bb230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2bb234:
    // 0x2bb234: 0xc0400e0  jal         func_100380
label_2bb238:
    if (ctx->pc == 0x2BB238u) {
        ctx->pc = 0x2BB23Cu;
        goto label_2bb23c;
    }
    ctx->pc = 0x2BB234u;
    SET_GPR_U32(ctx, 31, 0x2BB23Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BB234u, 0x2BB23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB23Cu;
label_2bb23c:
    // 0x2bb23c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb240:
    // 0x2bb240: 0xafa40284  sw          $a0, 0x284($sp)
    ctx->pc = 0x2bb240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 4));
label_2bb244:
    // 0x2bb244: 0x8fa20284  lw          $v0, 0x284($sp)
    ctx->pc = 0x2bb244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
label_2bb248:
    // 0x2bb248: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2bb24c:
    if (ctx->pc == 0x2BB24Cu) {
        ctx->pc = 0x2BB250u;
        goto label_2bb250;
    }
    ctx->pc = 0x2BB248u;
    {
        const bool branch_taken_0x2bb248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb248) {
            ctx->pc = 0x2BB260u;
            goto label_2bb260;
        }
    }
    ctx->pc = 0x2BB250u;
label_2bb250:
    // 0x2bb250: 0x8fa40284  lw          $a0, 0x284($sp)
    ctx->pc = 0x2bb250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
label_2bb254:
    // 0x2bb254: 0xc09d130  jal         func_2744C0
label_2bb258:
    if (ctx->pc == 0x2BB258u) {
        ctx->pc = 0x2BB25Cu;
        goto label_2bb25c;
    }
    ctx->pc = 0x2BB254u;
    SET_GPR_U32(ctx, 31, 0x2BB25Cu);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x2BB254u, 0x2BB25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB25Cu;
label_2bb25c:
    // 0x2bb25c: 0xafa20284  sw          $v0, 0x284($sp)
    ctx->pc = 0x2bb25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 2));
label_2bb260:
    // 0x2bb260: 0x8fa40284  lw          $a0, 0x284($sp)
    ctx->pc = 0x2bb260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
label_2bb264:
    // 0x2bb264: 0xafa40340  sw          $a0, 0x340($sp)
    ctx->pc = 0x2bb264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 832), GPR_U32(ctx, 4));
label_2bb268:
    // 0x2bb268: 0x8fa50340  lw          $a1, 0x340($sp)
    ctx->pc = 0x2bb268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
label_2bb26c:
    // 0x2bb26c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2bb26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bb270:
    // 0x2bb270: 0x8fa203c0  lw          $v0, 0x3C0($sp)
    ctx->pc = 0x2bb270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2bb274:
    // 0x2bb274: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb278:
    // 0x2bb278: 0xc09d23c  jal         func_2748F0
label_2bb27c:
    if (ctx->pc == 0x2BB27Cu) {
        ctx->pc = 0x2BB280u;
        goto label_2bb280;
    }
    ctx->pc = 0x2BB278u;
    SET_GPR_U32(ctx, 31, 0x2BB280u);
    ctx->pc = 0x2748F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748F0u, 0x2BB278u, 0x2BB280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB280u;
label_2bb280:
    // 0x2bb280: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2bb280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_2bb284:
    // 0x2bb284: 0x8fa303c0  lw          $v1, 0x3C0($sp)
    ctx->pc = 0x2bb284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2bb288:
    // 0x2bb288: 0x8fa40340  lw          $a0, 0x340($sp)
    ctx->pc = 0x2bb288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
label_2bb28c:
    // 0x2bb28c: 0x8fa20344  lw          $v0, 0x344($sp)
    ctx->pc = 0x2bb28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
label_2bb290:
    // 0x2bb290: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb294:
    // 0x2bb294: 0x8c660024  lw          $a2, 0x24($v1)
    ctx->pc = 0x2bb294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_2bb298:
    // 0x2bb298: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bb298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bb29c:
    // 0x2bb29c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2bb29cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2bb2a0:
    // 0x2bb2a0: 0x320f809  jalr        $t9
label_2bb2a4:
    if (ctx->pc == 0x2BB2A4u) {
        ctx->pc = 0x2BB2A8u;
        goto label_2bb2a8;
    }
    ctx->pc = 0x2BB2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BB2A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB2A0u, 0x2BB2A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BB2A8u;
label_2bb2a8:
    // 0x2bb2a8: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2bb2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_2bb2ac:
    // 0x2bb2ac: 0x8fa203e0  lw          $v0, 0x3E0($sp)
    ctx->pc = 0x2bb2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
label_2bb2b0:
    // 0x2bb2b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb2b4:
    // 0x2bb2b4: 0xc09c3b0  jal         func_270EC0
label_2bb2b8:
    if (ctx->pc == 0x2BB2B8u) {
        ctx->pc = 0x2BB2BCu;
        goto label_2bb2bc;
    }
    ctx->pc = 0x2BB2B4u;
    SET_GPR_U32(ctx, 31, 0x2BB2BCu);
    ctx->pc = 0x270EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270EC0u, 0x2BB2B4u, 0x2BB2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB2BCu;
label_2bb2bc:
    // 0x2bb2bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bb2bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb2c0:
    // 0x2bb2c0: 0x8fa4038c  lw          $a0, 0x38C($sp)
    ctx->pc = 0x2bb2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 908)));
label_2bb2c4:
    // 0x2bb2c4: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2bb2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2bb2c8:
    // 0x2bb2c8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2bb2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2bb2cc:
    // 0x2bb2cc: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x2bb2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
label_2bb2d0:
    // 0x2bb2d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb2d4:
    // 0x2bb2d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bb2d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bb2d8:
    // 0x2bb2d8: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2bb2d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2bb2dc:
    // 0x2bb2dc: 0x320f809  jalr        $t9
label_2bb2e0:
    if (ctx->pc == 0x2BB2E0u) {
        ctx->pc = 0x2BB2E4u;
        goto label_2bb2e4;
    }
    ctx->pc = 0x2BB2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BB2E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB2DCu, 0x2BB2E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BB2E4u;
label_2bb2e4:
    // 0x2bb2e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bb2e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb2e8:
    // 0x2bb2e8: 0x8fa503e0  lw          $a1, 0x3E0($sp)
    ctx->pc = 0x2bb2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
label_2bb2ec:
    // 0x2bb2ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2bb2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bb2f0:
    // 0x2bb2f0: 0x8fa30340  lw          $v1, 0x340($sp)
    ctx->pc = 0x2bb2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
label_2bb2f4:
    // 0x2bb2f4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2bb2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2bb2f8:
    // 0x2bb2f8: 0xc09c2b8  jal         func_270AE0
label_2bb2fc:
    if (ctx->pc == 0x2BB2FCu) {
        ctx->pc = 0x2BB300u;
        goto label_2bb300;
    }
    ctx->pc = 0x2BB2F8u;
    SET_GPR_U32(ctx, 31, 0x2BB300u);
    ctx->pc = 0x270AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270AE0u, 0x2BB2F8u, 0x2BB300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB300u;
label_2bb300:
    // 0x2bb300: 0x8fa403c0  lw          $a0, 0x3C0($sp)
    ctx->pc = 0x2bb300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2bb304:
    // 0x2bb304: 0x24920018  addiu       $s2, $a0, 0x18
    ctx->pc = 0x2bb304u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_2bb308:
    // 0x2bb308: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bb308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2bb30c:
    // 0x2bb30c: 0x27a50340  addiu       $a1, $sp, 0x340
    ctx->pc = 0x2bb30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_2bb310:
    // 0x2bb310: 0xc09c1d8  jal         func_270760
label_2bb314:
    if (ctx->pc == 0x2BB314u) {
        ctx->pc = 0x2BB318u;
        goto label_2bb318;
    }
    ctx->pc = 0x2BB310u;
    SET_GPR_U32(ctx, 31, 0x2BB318u);
    ctx->pc = 0x270760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270760u, 0x2BB310u, 0x2BB318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB318u;
label_2bb318:
    // 0x2bb318: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bb318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bb31c:
    // 0x2bb31c: 0xc0480fc  jal         func_1203F0
label_2bb320:
    if (ctx->pc == 0x2BB320u) {
        ctx->pc = 0x2BB324u;
        goto label_2bb324;
    }
    ctx->pc = 0x2BB31Cu;
    SET_GPR_U32(ctx, 31, 0x2BB324u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2BB31Cu, 0x2BB324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB324u;
label_2bb324:
    // 0x2bb324: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_2bb328:
    if (ctx->pc == 0x2BB328u) {
        ctx->pc = 0x2BB32Cu;
        goto label_2bb32c;
    }
    ctx->pc = 0x2BB324u;
    {
        const bool branch_taken_0x2bb324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb324) {
            ctx->pc = 0x2BB3C0u;
            goto label_2bb3c0;
        }
    }
    ctx->pc = 0x2BB32Cu;
label_2bb32c:
    // 0x2bb32c: 0x93a403be  lbu         $a0, 0x3BE($sp)
    ctx->pc = 0x2bb32cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 958)));
label_2bb330:
    // 0x2bb330: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
label_2bb334:
    if (ctx->pc == 0x2BB334u) {
        ctx->pc = 0x2BB338u;
        goto label_2bb338;
    }
    ctx->pc = 0x2BB330u;
    {
        const bool branch_taken_0x2bb330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb330) {
            ctx->pc = 0x2BB3C0u;
            goto label_2bb3c0;
        }
    }
    ctx->pc = 0x2BB338u;
label_2bb338:
    // 0x2bb338: 0x93a203bd  lbu         $v0, 0x3BD($sp)
    ctx->pc = 0x2bb338u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 957)));
label_2bb33c:
    // 0x2bb33c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_2bb340:
    if (ctx->pc == 0x2BB340u) {
        ctx->pc = 0x2BB344u;
        goto label_2bb344;
    }
    ctx->pc = 0x2BB33Cu;
    {
        const bool branch_taken_0x2bb33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb33c) {
            ctx->pc = 0x2BB3C0u;
            goto label_2bb3c0;
        }
    }
    ctx->pc = 0x2BB344u;
label_2bb344:
    // 0x2bb344: 0x8fa403c0  lw          $a0, 0x3C0($sp)
    ctx->pc = 0x2bb344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2bb348:
    // 0x2bb348: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x2bb348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_2bb34c:
    // 0x2bb34c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2bb34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_2bb350:
    // 0x2bb350: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2bb350u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2bb354:
    // 0x2bb354: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2bb354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2bb358:
    // 0x2bb358: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
label_2bb35c:
    if (ctx->pc == 0x2BB35Cu) {
        ctx->pc = 0x2BB360u;
        goto label_2bb360;
    }
    ctx->pc = 0x2BB358u;
    {
        const bool branch_taken_0x2bb358 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb358) {
            ctx->pc = 0x2BB3C8u;
            goto label_2bb3c8;
        }
    }
    ctx->pc = 0x2BB360u;
label_2bb360:
    // 0x2bb360: 0x8fa203c0  lw          $v0, 0x3C0($sp)
    ctx->pc = 0x2bb360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2bb364:
    // 0x2bb364: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x2bb364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2bb368:
    // 0x2bb368: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x2bb368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_2bb36c:
    // 0x2bb36c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb370:
    // 0x2bb370: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2bb370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2bb374:
    // 0x2bb374: 0xc085538  jal         func_2154E0
label_2bb378:
    if (ctx->pc == 0x2BB378u) {
        ctx->pc = 0x2BB37Cu;
        goto label_2bb37c;
    }
    ctx->pc = 0x2BB374u;
    SET_GPR_U32(ctx, 31, 0x2BB37Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BB374u, 0x2BB37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB37Cu;
label_2bb37c:
    // 0x2bb37c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb380:
    // 0x2bb380: 0xafa5033c  sw          $a1, 0x33C($sp)
    ctx->pc = 0x2bb380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 5));
label_2bb384:
    // 0x2bb384: 0x8fa203c0  lw          $v0, 0x3C0($sp)
    ctx->pc = 0x2bb384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2bb388:
    // 0x2bb388: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x2bb388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2bb38c:
    // 0x2bb38c: 0x8fa303c0  lw          $v1, 0x3C0($sp)
    ctx->pc = 0x2bb38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2bb390:
    // 0x2bb390: 0x8fa2033c  lw          $v0, 0x33C($sp)
    ctx->pc = 0x2bb390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_2bb394:
    // 0x2bb394: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb398:
    // 0x2bb398: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2bb398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2bb39c:
    // 0x2bb39c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb3a0:
    // 0x2bb3a0: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x2bb3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2bb3a4:
    // 0x2bb3a4: 0xc097504  jal         func_25D410
label_2bb3a8:
    if (ctx->pc == 0x2BB3A8u) {
        ctx->pc = 0x2BB3ACu;
        goto label_2bb3ac;
    }
    ctx->pc = 0x2BB3A4u;
    SET_GPR_U32(ctx, 31, 0x2BB3ACu);
    ctx->pc = 0x25D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D410u, 0x2BB3A4u, 0x2BB3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB3ACu;
label_2bb3ac:
    // 0x2bb3ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb3b0:
    // 0x2bb3b0: 0x8fa603c0  lw          $a2, 0x3C0($sp)
    ctx->pc = 0x2bb3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2bb3b4:
    // 0x2bb3b4: 0xa0c50007  sb          $a1, 0x7($a2)
    ctx->pc = 0x2bb3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 5));
label_2bb3b8:
    // 0x2bb3b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2bb3bc:
    if (ctx->pc == 0x2BB3BCu) {
        ctx->pc = 0x2BB3C0u;
        goto label_2bb3c0;
    }
    ctx->pc = 0x2BB3B8u;
    {
        const bool branch_taken_0x2bb3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb3b8) {
            ctx->pc = 0x2BB3C8u;
            goto label_2bb3c8;
        }
    }
    ctx->pc = 0x2BB3C0u;
label_2bb3c0:
    // 0x2bb3c0: 0x8fa203c0  lw          $v0, 0x3C0($sp)
    ctx->pc = 0x2bb3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2bb3c4:
    // 0x2bb3c4: 0xa0400007  sb          $zero, 0x7($v0)
    ctx->pc = 0x2bb3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 0));
label_2bb3c8:
    // 0x2bb3c8: 0x8fa403c0  lw          $a0, 0x3C0($sp)
    ctx->pc = 0x2bb3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2bb3cc:
    // 0x2bb3cc: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x2bb3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_2bb3d0:
    // 0x2bb3d0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2bb3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2bb3d4:
    // 0x2bb3d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb3d8:
    // 0x2bb3d8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2bb3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2bb3dc:
    // 0x2bb3dc: 0xc085538  jal         func_2154E0
label_2bb3e0:
    if (ctx->pc == 0x2BB3E0u) {
        ctx->pc = 0x2BB3E4u;
        goto label_2bb3e4;
    }
    ctx->pc = 0x2BB3DCu;
    SET_GPR_U32(ctx, 31, 0x2BB3E4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BB3DCu, 0x2BB3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB3E4u;
label_2bb3e4:
    // 0x2bb3e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bb3e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb3e8:
    // 0x2bb3e8: 0xafa60338  sw          $a2, 0x338($sp)
    ctx->pc = 0x2bb3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 824), GPR_U32(ctx, 6));
label_2bb3ec:
    // 0x2bb3ec: 0x8fa303a4  lw          $v1, 0x3A4($sp)
    ctx->pc = 0x2bb3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 932)));
label_2bb3f0:
    // 0x2bb3f0: 0x106000f7  beqz        $v1, . + 4 + (0xF7 << 2)
label_2bb3f4:
    if (ctx->pc == 0x2BB3F4u) {
        ctx->pc = 0x2BB3F8u;
        goto label_2bb3f8;
    }
    ctx->pc = 0x2BB3F0u;
    {
        const bool branch_taken_0x2bb3f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb3f0) {
            ctx->pc = 0x2BB7D0u;
            goto label_2bb7d0;
        }
    }
    ctx->pc = 0x2BB3F8u;
label_2bb3f8:
    // 0x2bb3f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bb3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2bb3fc:
    // 0x2bb3fc: 0xc0480fc  jal         func_1203F0
label_2bb400:
    if (ctx->pc == 0x2BB400u) {
        ctx->pc = 0x2BB404u;
        goto label_2bb404;
    }
    ctx->pc = 0x2BB3FCu;
    SET_GPR_U32(ctx, 31, 0x2BB404u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2BB3FCu, 0x2BB404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB404u;
label_2bb404:
    // 0x2bb404: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb408:
    // 0x2bb408: 0x2e53026  xor         $a2, $s7, $a1
    ctx->pc = 0x2bb408u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 5));
label_2bb40c:
    // 0x2bb40c: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x2bb40cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2bb410:
    // 0x2bb410: 0xa3a603af  sb          $a2, 0x3AF($sp)
    ctx->pc = 0x2bb410u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 943), (uint8_t)GPR_U32(ctx, 6));
label_2bb414:
    // 0x2bb414: 0x93a203b9  lbu         $v0, 0x3B9($sp)
    ctx->pc = 0x2bb414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 953)));
label_2bb418:
    // 0x2bb418: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
label_2bb41c:
    if (ctx->pc == 0x2BB41Cu) {
        ctx->pc = 0x2BB420u;
        goto label_2bb420;
    }
    ctx->pc = 0x2BB418u;
    {
        const bool branch_taken_0x2bb418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb418) {
            ctx->pc = 0x2BB540u;
            goto label_2bb540;
        }
    }
    ctx->pc = 0x2BB420u;
label_2bb420:
    // 0x2bb420: 0x93a403af  lbu         $a0, 0x3AF($sp)
    ctx->pc = 0x2bb420u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 943)));
label_2bb424:
    // 0x2bb424: 0x10800046  beqz        $a0, . + 4 + (0x46 << 2)
label_2bb428:
    if (ctx->pc == 0x2BB428u) {
        ctx->pc = 0x2BB42Cu;
        goto label_2bb42c;
    }
    ctx->pc = 0x2BB424u;
    {
        const bool branch_taken_0x2bb424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb424) {
            ctx->pc = 0x2BB540u;
            goto label_2bb540;
        }
    }
    ctx->pc = 0x2BB42Cu;
label_2bb42c:
    // 0x2bb42c: 0x8fa403c0  lw          $a0, 0x3C0($sp)
    ctx->pc = 0x2bb42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2bb430:
    // 0x2bb430: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x2bb430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_2bb434:
    // 0x2bb434: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2bb434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2bb438:
    // 0x2bb438: 0xafa20334  sw          $v0, 0x334($sp)
    ctx->pc = 0x2bb438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 820), GPR_U32(ctx, 2));
label_2bb43c:
    // 0x2bb43c: 0x8fa20334  lw          $v0, 0x334($sp)
    ctx->pc = 0x2bb43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 820)));
label_2bb440:
    // 0x2bb440: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb444:
    // 0x2bb444: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2bb444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2bb448:
    // 0x2bb448: 0xc085538  jal         func_2154E0
label_2bb44c:
    if (ctx->pc == 0x2BB44Cu) {
        ctx->pc = 0x2BB450u;
        goto label_2bb450;
    }
    ctx->pc = 0x2BB448u;
    SET_GPR_U32(ctx, 31, 0x2BB450u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BB448u, 0x2BB450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB450u;
label_2bb450:
    // 0x2bb450: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb454:
    // 0x2bb454: 0xafa40330  sw          $a0, 0x330($sp)
    ctx->pc = 0x2bb454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 816), GPR_U32(ctx, 4));
label_2bb458:
    // 0x2bb458: 0x8fa20330  lw          $v0, 0x330($sp)
    ctx->pc = 0x2bb458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
label_2bb45c:
    // 0x2bb45c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_2bb460:
    if (ctx->pc == 0x2BB460u) {
        ctx->pc = 0x2BB464u;
        goto label_2bb464;
    }
    ctx->pc = 0x2BB45Cu;
    {
        const bool branch_taken_0x2bb45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb45c) {
            ctx->pc = 0x2BB540u;
            goto label_2bb540;
        }
    }
    ctx->pc = 0x2BB464u;
label_2bb464:
    // 0x2bb464: 0x8fa40330  lw          $a0, 0x330($sp)
    ctx->pc = 0x2bb464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 816)));
label_2bb468:
    // 0x2bb468: 0xc063dd0  jal         func_18F740
label_2bb46c:
    if (ctx->pc == 0x2BB46Cu) {
        ctx->pc = 0x2BB470u;
        goto label_2bb470;
    }
    ctx->pc = 0x2BB468u;
    SET_GPR_U32(ctx, 31, 0x2BB470u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x2BB468u, 0x2BB470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB470u;
label_2bb470:
    // 0x2bb470: 0xafa2032c  sw          $v0, 0x32C($sp)
    ctx->pc = 0x2bb470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 812), GPR_U32(ctx, 2));
label_2bb474:
    // 0x2bb474: 0x8fa40334  lw          $a0, 0x334($sp)
    ctx->pc = 0x2bb474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 820)));
label_2bb478:
    // 0x2bb478: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2bb478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2bb47c:
    // 0x2bb47c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb480:
    // 0x2bb480: 0xc085538  jal         func_2154E0
label_2bb484:
    if (ctx->pc == 0x2BB484u) {
        ctx->pc = 0x2BB488u;
        goto label_2bb488;
    }
    ctx->pc = 0x2BB480u;
    SET_GPR_U32(ctx, 31, 0x2BB488u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BB480u, 0x2BB488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB488u;
label_2bb488:
    // 0x2bb488: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2bb488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_2bb48c:
    // 0x2bb48c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x2bb48cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2bb490:
    // 0x2bb490: 0xafa20328  sw          $v0, 0x328($sp)
    ctx->pc = 0x2bb490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 808), GPR_U32(ctx, 2));
label_2bb494:
    // 0x2bb494: 0x8fa4032c  lw          $a0, 0x32C($sp)
    ctx->pc = 0x2bb494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 812)));
label_2bb498:
    // 0x2bb498: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_2bb49c:
    if (ctx->pc == 0x2BB49Cu) {
        ctx->pc = 0x2BB4A0u;
        goto label_2bb4a0;
    }
    ctx->pc = 0x2BB498u;
    {
        const bool branch_taken_0x2bb498 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb498) {
            ctx->pc = 0x2BB4C8u;
            goto label_2bb4c8;
        }
    }
    ctx->pc = 0x2BB4A0u;
label_2bb4a0:
    // 0x2bb4a0: 0x8fa2032c  lw          $v0, 0x32C($sp)
    ctx->pc = 0x2bb4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 812)));
label_2bb4a4:
    // 0x2bb4a4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2bb4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2bb4a8:
    // 0x2bb4a8: 0x8fa403c0  lw          $a0, 0x3C0($sp)
    ctx->pc = 0x2bb4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2bb4ac:
    // 0x2bb4ac: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2bb4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2bb4b0:
    // 0x2bb4b0: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
label_2bb4b4:
    if (ctx->pc == 0x2BB4B4u) {
        ctx->pc = 0x2BB4B8u;
        goto label_2bb4b8;
    }
    ctx->pc = 0x2BB4B0u;
    {
        const bool branch_taken_0x2bb4b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bb4b0) {
            ctx->pc = 0x2BB540u;
            goto label_2bb540;
        }
    }
    ctx->pc = 0x2BB4B8u;
label_2bb4b8:
    // 0x2bb4b8: 0x8fa20328  lw          $v0, 0x328($sp)
    ctx->pc = 0x2bb4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 808)));
label_2bb4bc:
    // 0x2bb4bc: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x2bb4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2bb4c0:
    // 0x2bb4c0: 0x1480001f  bnez        $a0, . + 4 + (0x1F << 2)
label_2bb4c4:
    if (ctx->pc == 0x2BB4C4u) {
        ctx->pc = 0x2BB4C8u;
        goto label_2bb4c8;
    }
    ctx->pc = 0x2BB4C0u;
    {
        const bool branch_taken_0x2bb4c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb4c0) {
            ctx->pc = 0x2BB540u;
            goto label_2bb540;
        }
    }
    ctx->pc = 0x2BB4C8u;
label_2bb4c8:
    // 0x2bb4c8: 0x8fa20338  lw          $v0, 0x338($sp)
    ctx->pc = 0x2bb4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 824)));
label_2bb4cc:
    // 0x2bb4cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb4d0:
    // 0x2bb4d0: 0xc09c5d8  jal         func_271760
label_2bb4d4:
    if (ctx->pc == 0x2BB4D4u) {
        ctx->pc = 0x2BB4D8u;
        goto label_2bb4d8;
    }
    ctx->pc = 0x2BB4D0u;
    SET_GPR_U32(ctx, 31, 0x2BB4D8u);
    ctx->pc = 0x271760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271760u, 0x2BB4D0u, 0x2BB4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB4D8u;
label_2bb4d8:
    // 0x2bb4d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb4dc:
    // 0x2bb4dc: 0xafa40324  sw          $a0, 0x324($sp)
    ctx->pc = 0x2bb4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 804), GPR_U32(ctx, 4));
label_2bb4e0:
    // 0x2bb4e0: 0x8fa40338  lw          $a0, 0x338($sp)
    ctx->pc = 0x2bb4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 824)));
label_2bb4e4:
    // 0x2bb4e4: 0x8fa20328  lw          $v0, 0x328($sp)
    ctx->pc = 0x2bb4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 808)));
label_2bb4e8:
    // 0x2bb4e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb4ec:
    // 0x2bb4ec: 0xc09c3f0  jal         func_270FC0
label_2bb4f0:
    if (ctx->pc == 0x2BB4F0u) {
        ctx->pc = 0x2BB4F4u;
        goto label_2bb4f4;
    }
    ctx->pc = 0x2BB4ECu;
    SET_GPR_U32(ctx, 31, 0x2BB4F4u);
    ctx->pc = 0x270FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270FC0u, 0x2BB4ECu, 0x2BB4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB4F4u;
label_2bb4f4:
    // 0x2bb4f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb4f8:
    // 0x2bb4f8: 0x8fa40328  lw          $a0, 0x328($sp)
    ctx->pc = 0x2bb4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 808)));
label_2bb4fc:
    // 0x2bb4fc: 0x8fa20338  lw          $v0, 0x338($sp)
    ctx->pc = 0x2bb4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 824)));
label_2bb500:
    // 0x2bb500: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb504:
    // 0x2bb504: 0xc09c3f0  jal         func_270FC0
label_2bb508:
    if (ctx->pc == 0x2BB508u) {
        ctx->pc = 0x2BB50Cu;
        goto label_2bb50c;
    }
    ctx->pc = 0x2BB504u;
    SET_GPR_U32(ctx, 31, 0x2BB50Cu);
    ctx->pc = 0x270FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270FC0u, 0x2BB504u, 0x2BB50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB50Cu;
label_2bb50c:
    // 0x2bb50c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb510:
    // 0x2bb510: 0x8fa50324  lw          $a1, 0x324($sp)
    ctx->pc = 0x2bb510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 804)));
label_2bb514:
    // 0x2bb514: 0x8fa20328  lw          $v0, 0x328($sp)
    ctx->pc = 0x2bb514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 808)));
label_2bb518:
    // 0x2bb518: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
label_2bb51c:
    if (ctx->pc == 0x2BB51Cu) {
        ctx->pc = 0x2BB520u;
        goto label_2bb520;
    }
    ctx->pc = 0x2BB518u;
    {
        const bool branch_taken_0x2bb518 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bb518) {
            ctx->pc = 0x2BB540u;
            goto label_2bb540;
        }
    }
    ctx->pc = 0x2BB520u;
label_2bb520:
    // 0x2bb520: 0x8fa20324  lw          $v0, 0x324($sp)
    ctx->pc = 0x2bb520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 804)));
label_2bb524:
    // 0x2bb524: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bb528:
    if (ctx->pc == 0x2BB528u) {
        ctx->pc = 0x2BB52Cu;
        goto label_2bb52c;
    }
    ctx->pc = 0x2BB524u;
    {
        const bool branch_taken_0x2bb524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb524) {
            ctx->pc = 0x2BB540u;
            goto label_2bb540;
        }
    }
    ctx->pc = 0x2BB52Cu;
label_2bb52c:
    // 0x2bb52c: 0x8fa20324  lw          $v0, 0x324($sp)
    ctx->pc = 0x2bb52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 804)));
label_2bb530:
    // 0x2bb530: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb534:
    // 0x2bb534: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bb534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bb538:
    // 0x2bb538: 0xc09c2c8  jal         func_270B20
label_2bb53c:
    if (ctx->pc == 0x2BB53Cu) {
        ctx->pc = 0x2BB540u;
        goto label_2bb540;
    }
    ctx->pc = 0x2BB538u;
    SET_GPR_U32(ctx, 31, 0x2BB540u);
    ctx->pc = 0x270B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270B20u, 0x2BB538u, 0x2BB540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB540u;
label_2bb540:
    // 0x2bb540: 0x8fa203c0  lw          $v0, 0x3C0($sp)
    ctx->pc = 0x2bb540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2bb544:
    // 0x2bb544: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2bb544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2bb548:
    // 0x2bb548: 0xc048094  jal         func_120250
label_2bb54c:
    if (ctx->pc == 0x2BB54Cu) {
        ctx->pc = 0x2BB550u;
        goto label_2bb550;
    }
    ctx->pc = 0x2BB548u;
    SET_GPR_U32(ctx, 31, 0x2BB550u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2BB548u, 0x2BB550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB550u;
label_2bb550:
    // 0x2bb550: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb554:
    // 0x2bb554: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2bb554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bb558:
    // 0x2bb558: 0x2402047b  addiu       $v0, $zero, 0x47B
    ctx->pc = 0x2bb558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1147));
label_2bb55c:
    // 0x2bb55c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb560:
    // 0x2bb560: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bb560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb564:
    // 0x2bb564: 0xc04146c  jal         func_1051B0
label_2bb568:
    if (ctx->pc == 0x2BB568u) {
        ctx->pc = 0x2BB56Cu;
        goto label_2bb56c;
    }
    ctx->pc = 0x2BB564u;
    SET_GPR_U32(ctx, 31, 0x2BB56Cu);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2BB564u, 0x2BB56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB56Cu;
label_2bb56c:
    // 0x2bb56c: 0x1440009c  bnez        $v0, . + 4 + (0x9C << 2)
label_2bb570:
    if (ctx->pc == 0x2BB570u) {
        ctx->pc = 0x2BB574u;
        goto label_2bb574;
    }
    ctx->pc = 0x2BB56Cu;
    {
        const bool branch_taken_0x2bb56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb56c) {
            ctx->pc = 0x2BB7E0u;
            goto label_2bb7e0;
        }
    }
    ctx->pc = 0x2BB574u;
label_2bb574:
    // 0x2bb574: 0x8fa503c0  lw          $a1, 0x3C0($sp)
    ctx->pc = 0x2bb574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2bb578:
    // 0x2bb578: 0x90a40004  lbu         $a0, 0x4($a1)
    ctx->pc = 0x2bb578u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
label_2bb57c:
    // 0x2bb57c: 0x10800098  beqz        $a0, . + 4 + (0x98 << 2)
label_2bb580:
    if (ctx->pc == 0x2BB580u) {
        ctx->pc = 0x2BB584u;
        goto label_2bb584;
    }
    ctx->pc = 0x2BB57Cu;
    {
        const bool branch_taken_0x2bb57c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb57c) {
            ctx->pc = 0x2BB7E0u;
            goto label_2bb7e0;
        }
    }
    ctx->pc = 0x2BB584u;
label_2bb584:
    // 0x2bb584: 0x93a303b8  lbu         $v1, 0x3B8($sp)
    ctx->pc = 0x2bb584u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 952)));
label_2bb588:
    // 0x2bb588: 0x14600095  bnez        $v1, . + 4 + (0x95 << 2)
label_2bb58c:
    if (ctx->pc == 0x2BB58Cu) {
        ctx->pc = 0x2BB590u;
        goto label_2bb590;
    }
    ctx->pc = 0x2BB588u;
    {
        const bool branch_taken_0x2bb588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb588) {
            ctx->pc = 0x2BB7E0u;
            goto label_2bb7e0;
        }
    }
    ctx->pc = 0x2BB590u;
label_2bb590:
    // 0x2bb590: 0x93a403b7  lbu         $a0, 0x3B7($sp)
    ctx->pc = 0x2bb590u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 951)));
label_2bb594:
    // 0x2bb594: 0x10800092  beqz        $a0, . + 4 + (0x92 << 2)
label_2bb598:
    if (ctx->pc == 0x2BB598u) {
        ctx->pc = 0x2BB59Cu;
        goto label_2bb59c;
    }
    ctx->pc = 0x2BB594u;
    {
        const bool branch_taken_0x2bb594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb594) {
            ctx->pc = 0x2BB7E0u;
            goto label_2bb7e0;
        }
    }
    ctx->pc = 0x2BB59Cu;
label_2bb59c:
    // 0x2bb59c: 0x93a403af  lbu         $a0, 0x3AF($sp)
    ctx->pc = 0x2bb59cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 943)));
label_2bb5a0:
    // 0x2bb5a0: 0x1080008f  beqz        $a0, . + 4 + (0x8F << 2)
label_2bb5a4:
    if (ctx->pc == 0x2BB5A4u) {
        ctx->pc = 0x2BB5A8u;
        goto label_2bb5a8;
    }
    ctx->pc = 0x2BB5A0u;
    {
        const bool branch_taken_0x2bb5a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb5a0) {
            ctx->pc = 0x2BB7E0u;
            goto label_2bb7e0;
        }
    }
    ctx->pc = 0x2BB5A8u;
label_2bb5a8:
    // 0x2bb5a8: 0x16e0008d  bnez        $s7, . + 4 + (0x8D << 2)
label_2bb5ac:
    if (ctx->pc == 0x2BB5ACu) {
        ctx->pc = 0x2BB5B0u;
        goto label_2bb5b0;
    }
    ctx->pc = 0x2BB5A8u;
    {
        const bool branch_taken_0x2bb5a8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb5a8) {
            ctx->pc = 0x2BB7E0u;
            goto label_2bb7e0;
        }
    }
    ctx->pc = 0x2BB5B0u;
label_2bb5b0:
    // 0x2bb5b0: 0x8fa203a8  lw          $v0, 0x3A8($sp)
    ctx->pc = 0x2bb5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
label_2bb5b4:
    // 0x2bb5b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb5b8:
    // 0x2bb5b8: 0xc0480fc  jal         func_1203F0
label_2bb5bc:
    if (ctx->pc == 0x2BB5BCu) {
        ctx->pc = 0x2BB5C0u;
        goto label_2bb5c0;
    }
    ctx->pc = 0x2BB5B8u;
    SET_GPR_U32(ctx, 31, 0x2BB5C0u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2BB5B8u, 0x2BB5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB5C0u;
label_2bb5c0:
    // 0x2bb5c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb5c4:
    // 0x2bb5c4: 0x14800086  bnez        $a0, . + 4 + (0x86 << 2)
label_2bb5c8:
    if (ctx->pc == 0x2BB5C8u) {
        ctx->pc = 0x2BB5CCu;
        goto label_2bb5cc;
    }
    ctx->pc = 0x2BB5C4u;
    {
        const bool branch_taken_0x2bb5c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb5c4) {
            ctx->pc = 0x2BB7E0u;
            goto label_2bb7e0;
        }
    }
    ctx->pc = 0x2BB5CCu;
label_2bb5cc:
    // 0x2bb5cc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2bb5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2bb5d0:
    // 0x2bb5d0: 0xc119b68  jal         func_466DA0
label_2bb5d4:
    if (ctx->pc == 0x2BB5D4u) {
        ctx->pc = 0x2BB5D8u;
        goto label_2bb5d8;
    }
    ctx->pc = 0x2BB5D0u;
    SET_GPR_U32(ctx, 31, 0x2BB5D8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BB5D0u, 0x2BB5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB5D8u;
label_2bb5d8:
    // 0x2bb5d8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2bb5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2bb5dc:
    // 0x2bb5dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb5e0:
    // 0x2bb5e0: 0xc0400e0  jal         func_100380
label_2bb5e4:
    if (ctx->pc == 0x2BB5E4u) {
        ctx->pc = 0x2BB5E8u;
        goto label_2bb5e8;
    }
    ctx->pc = 0x2BB5E0u;
    SET_GPR_U32(ctx, 31, 0x2BB5E8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BB5E0u, 0x2BB5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB5E8u;
label_2bb5e8:
    // 0x2bb5e8: 0xafa20280  sw          $v0, 0x280($sp)
    ctx->pc = 0x2bb5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
label_2bb5ec:
    // 0x2bb5ec: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x2bb5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2bb5f0:
    // 0x2bb5f0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_2bb5f4:
    if (ctx->pc == 0x2BB5F4u) {
        ctx->pc = 0x2BB5F8u;
        goto label_2bb5f8;
    }
    ctx->pc = 0x2BB5F0u;
    {
        const bool branch_taken_0x2bb5f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb5f0) {
            ctx->pc = 0x2BB610u;
            goto label_2bb610;
        }
    }
    ctx->pc = 0x2BB5F8u;
label_2bb5f8:
    // 0x2bb5f8: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2bb5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2bb5fc:
    // 0x2bb5fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb600:
    // 0x2bb600: 0xc09d084  jal         func_274210
label_2bb604:
    if (ctx->pc == 0x2BB604u) {
        ctx->pc = 0x2BB608u;
        goto label_2bb608;
    }
    ctx->pc = 0x2BB600u;
    SET_GPR_U32(ctx, 31, 0x2BB608u);
    ctx->pc = 0x274210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274210u, 0x2BB600u, 0x2BB608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB608u;
label_2bb608:
    // 0x2bb608: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2bb608u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb60c:
    // 0x2bb60c: 0xafb60280  sw          $s6, 0x280($sp)
    ctx->pc = 0x2bb60cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 22));
label_2bb610:
    // 0x2bb610: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x2bb610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2bb614:
    // 0x2bb614: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2bb614u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bb618:
    // 0x2bb618: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2bb618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2bb61c:
    // 0x2bb61c: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x2bb61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_2bb620:
    // 0x2bb620: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb624:
    // 0x2bb624: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bb624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb628:
    // 0x2bb628: 0xc09d0c0  jal         func_274300
label_2bb62c:
    if (ctx->pc == 0x2BB62Cu) {
        ctx->pc = 0x2BB630u;
        goto label_2bb630;
    }
    ctx->pc = 0x2BB628u;
    SET_GPR_U32(ctx, 31, 0x2BB630u);
    ctx->pc = 0x274300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274300u, 0x2BB628u, 0x2BB630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB630u;
label_2bb630:
    // 0x2bb630: 0x93a303bf  lbu         $v1, 0x3BF($sp)
    ctx->pc = 0x2bb630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 959)));
label_2bb634:
    // 0x2bb634: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2bb638:
    if (ctx->pc == 0x2BB638u) {
        ctx->pc = 0x2BB63Cu;
        goto label_2bb63c;
    }
    ctx->pc = 0x2BB634u;
    {
        const bool branch_taken_0x2bb634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb634) {
            ctx->pc = 0x2BB648u;
            goto label_2bb648;
        }
    }
    ctx->pc = 0x2BB63Cu;
label_2bb63c:
    // 0x2bb63c: 0xafa0027c  sw          $zero, 0x27C($sp)
    ctx->pc = 0x2bb63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 0));
label_2bb640:
    // 0x2bb640: 0x10000003  b           . + 4 + (0x3 << 2)
label_2bb644:
    if (ctx->pc == 0x2BB644u) {
        ctx->pc = 0x2BB648u;
        goto label_2bb648;
    }
    ctx->pc = 0x2BB640u;
    {
        const bool branch_taken_0x2bb640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb640) {
            ctx->pc = 0x2BB650u;
            goto label_2bb650;
        }
    }
    ctx->pc = 0x2BB648u;
label_2bb648:
    // 0x2bb648: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bb648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bb64c:
    // 0x2bb64c: 0xafa4027c  sw          $a0, 0x27C($sp)
    ctx->pc = 0x2bb64cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 4));
label_2bb650:
    // 0x2bb650: 0x8fa2027c  lw          $v0, 0x27C($sp)
    ctx->pc = 0x2bb650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
label_2bb654:
    // 0x2bb654: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2bb654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2bb658:
    // 0x2bb658: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb65c:
    // 0x2bb65c: 0xc09d0dc  jal         func_274370
label_2bb660:
    if (ctx->pc == 0x2BB660u) {
        ctx->pc = 0x2BB664u;
        goto label_2bb664;
    }
    ctx->pc = 0x2BB65Cu;
    SET_GPR_U32(ctx, 31, 0x2BB664u);
    ctx->pc = 0x274370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274370u, 0x2BB65Cu, 0x2BB664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB664u;
label_2bb664:
    // 0x2bb664: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb668:
    // 0x2bb668: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2bb668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_2bb66c:
    // 0x2bb66c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2bb66cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2bb670:
    // 0x2bb670: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2bb670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2bb674:
    // 0x2bb674: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x2bb674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
label_2bb678:
    // 0x2bb678: 0x2463e060  addiu       $v1, $v1, -0x1FA0
    ctx->pc = 0x2bb678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959200));
label_2bb67c:
    // 0x2bb67c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2bb67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2bb680:
    // 0x2bb680: 0xc051414  jal         func_145050
label_2bb684:
    if (ctx->pc == 0x2BB684u) {
        ctx->pc = 0x2BB688u;
        goto label_2bb688;
    }
    ctx->pc = 0x2BB680u;
    SET_GPR_U32(ctx, 31, 0x2BB688u);
    ctx->pc = 0x145050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145050u, 0x2BB680u, 0x2BB688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB688u;
label_2bb688:
    // 0x2bb688: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb68c:
    // 0x2bb68c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2bb68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2bb690:
    // 0x2bb690: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2bb690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2bb694:
    // 0x2bb694: 0x2442e080  addiu       $v0, $v0, -0x1F80
    ctx->pc = 0x2bb694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959232));
label_2bb698:
    // 0x2bb698: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb69c:
    // 0x2bb69c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bb69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bb6a0:
    // 0x2bb6a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bb6a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb6a4:
    // 0x2bb6a4: 0xc047314  jal         func_11CC50
label_2bb6a8:
    if (ctx->pc == 0x2BB6A8u) {
        ctx->pc = 0x2BB6ACu;
        goto label_2bb6ac;
    }
    ctx->pc = 0x2BB6A4u;
    SET_GPR_U32(ctx, 31, 0x2BB6ACu);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x2BB6A4u, 0x2BB6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB6ACu;
label_2bb6ac:
    // 0x2bb6ac: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2bb6acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb6b0:
    // 0x2bb6b0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2bb6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2bb6b4:
    // 0x2bb6b4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2bb6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2bb6b8:
    // 0x2bb6b8: 0xc119b68  jal         func_466DA0
label_2bb6bc:
    if (ctx->pc == 0x2BB6BCu) {
        ctx->pc = 0x2BB6C0u;
        goto label_2bb6c0;
    }
    ctx->pc = 0x2BB6B8u;
    SET_GPR_U32(ctx, 31, 0x2BB6C0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BB6B8u, 0x2BB6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB6C0u;
label_2bb6c0:
    // 0x2bb6c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb6c4:
    // 0x2bb6c4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2bb6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2bb6c8:
    // 0x2bb6c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb6cc:
    // 0x2bb6cc: 0xc0400e0  jal         func_100380
label_2bb6d0:
    if (ctx->pc == 0x2BB6D0u) {
        ctx->pc = 0x2BB6D4u;
        goto label_2bb6d4;
    }
    ctx->pc = 0x2BB6CCu;
    SET_GPR_U32(ctx, 31, 0x2BB6D4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BB6CCu, 0x2BB6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB6D4u;
label_2bb6d4:
    // 0x2bb6d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb6d8:
    // 0x2bb6d8: 0xafa40278  sw          $a0, 0x278($sp)
    ctx->pc = 0x2bb6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 4));
label_2bb6dc:
    // 0x2bb6dc: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x2bb6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_2bb6e0:
    // 0x2bb6e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2bb6e4:
    if (ctx->pc == 0x2BB6E4u) {
        ctx->pc = 0x2BB6E8u;
        goto label_2bb6e8;
    }
    ctx->pc = 0x2BB6E0u;
    {
        const bool branch_taken_0x2bb6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb6e0) {
            ctx->pc = 0x2BB6FCu;
            goto label_2bb6fc;
        }
    }
    ctx->pc = 0x2BB6E8u;
label_2bb6e8:
    // 0x2bb6e8: 0x8fa40278  lw          $a0, 0x278($sp)
    ctx->pc = 0x2bb6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_2bb6ec:
    // 0x2bb6ec: 0xc0aa0e8  jal         func_2A83A0
label_2bb6f0:
    if (ctx->pc == 0x2BB6F0u) {
        ctx->pc = 0x2BB6F4u;
        goto label_2bb6f4;
    }
    ctx->pc = 0x2BB6ECu;
    SET_GPR_U32(ctx, 31, 0x2BB6F4u);
    ctx->pc = 0x2A83A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A83A0u, 0x2BB6ECu, 0x2BB6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB6F4u;
label_2bb6f4:
    // 0x2bb6f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb6f8:
    // 0x2bb6f8: 0xafa50278  sw          $a1, 0x278($sp)
    ctx->pc = 0x2bb6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 5));
label_2bb6fc:
    // 0x2bb6fc: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x2bb6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_2bb700:
    // 0x2bb700: 0xafa20320  sw          $v0, 0x320($sp)
    ctx->pc = 0x2bb700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 800), GPR_U32(ctx, 2));
label_2bb704:
    // 0x2bb704: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x2bb704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
label_2bb708:
    // 0x2bb708: 0x8fa203c0  lw          $v0, 0x3C0($sp)
    ctx->pc = 0x2bb708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2bb70c:
    // 0x2bb70c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb710:
    // 0x2bb710: 0xc09d23c  jal         func_2748F0
label_2bb714:
    if (ctx->pc == 0x2BB714u) {
        ctx->pc = 0x2BB718u;
        goto label_2bb718;
    }
    ctx->pc = 0x2BB710u;
    SET_GPR_U32(ctx, 31, 0x2BB718u);
    ctx->pc = 0x2748F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748F0u, 0x2BB710u, 0x2BB718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB718u;
label_2bb718:
    // 0x2bb718: 0x8fa303c0  lw          $v1, 0x3C0($sp)
    ctx->pc = 0x2bb718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2bb71c:
    // 0x2bb71c: 0x8fa20320  lw          $v0, 0x320($sp)
    ctx->pc = 0x2bb71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
label_2bb720:
    // 0x2bb720: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb724:
    // 0x2bb724: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2bb724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2bb728:
    // 0x2bb728: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x2bb728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_2bb72c:
    // 0x2bb72c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2bb72cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb730:
    // 0x2bb730: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bb730u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bb734:
    // 0x2bb734: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2bb734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2bb738:
    // 0x2bb738: 0x320f809  jalr        $t9
label_2bb73c:
    if (ctx->pc == 0x2BB73Cu) {
        ctx->pc = 0x2BB740u;
        goto label_2bb740;
    }
    ctx->pc = 0x2BB738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BB740u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB738u, 0x2BB740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BB740u;
label_2bb740:
    // 0x2bb740: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb744:
    // 0x2bb744: 0x8fa203e0  lw          $v0, 0x3E0($sp)
    ctx->pc = 0x2bb744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
label_2bb748:
    // 0x2bb748: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x2bb748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
label_2bb74c:
    // 0x2bb74c: 0x7ba40140  lq          $a0, 0x140($sp)
    ctx->pc = 0x2bb74cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_2bb750:
    // 0x2bb750: 0xc09c3b0  jal         func_270EC0
label_2bb754:
    if (ctx->pc == 0x2BB754u) {
        ctx->pc = 0x2BB758u;
        goto label_2bb758;
    }
    ctx->pc = 0x2BB750u;
    SET_GPR_U32(ctx, 31, 0x2BB758u);
    ctx->pc = 0x270EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270EC0u, 0x2BB750u, 0x2BB758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB758u;
label_2bb758:
    // 0x2bb758: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x2bb758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_2bb75c:
    // 0x2bb75c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2bb75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2bb760:
    // 0x2bb760: 0xc09d0d0  jal         func_274340
label_2bb764:
    if (ctx->pc == 0x2BB764u) {
        ctx->pc = 0x2BB768u;
        goto label_2bb768;
    }
    ctx->pc = 0x2BB760u;
    SET_GPR_U32(ctx, 31, 0x2BB768u);
    ctx->pc = 0x274340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274340u, 0x2BB760u, 0x2BB768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB768u;
label_2bb768:
    // 0x2bb768: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb76c:
    // 0x2bb76c: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x2bb76cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_2bb770:
    // 0x2bb770: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2bb770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2bb774:
    // 0x2bb774: 0x8fa40320  lw          $a0, 0x320($sp)
    ctx->pc = 0x2bb774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
label_2bb778:
    // 0x2bb778: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb77c:
    // 0x2bb77c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bb77cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bb780:
    // 0x2bb780: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2bb780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2bb784:
    // 0x2bb784: 0x320f809  jalr        $t9
label_2bb788:
    if (ctx->pc == 0x2BB788u) {
        ctx->pc = 0x2BB78Cu;
        goto label_2bb78c;
    }
    ctx->pc = 0x2BB784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BB78Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB784u, 0x2BB78Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BB78Cu;
label_2bb78c:
    // 0x2bb78c: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x2bb78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_2bb790:
    // 0x2bb790: 0x8fa203e0  lw          $v0, 0x3E0($sp)
    ctx->pc = 0x2bb790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
label_2bb794:
    // 0x2bb794: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bb794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb798:
    // 0x2bb798: 0x8fa50320  lw          $a1, 0x320($sp)
    ctx->pc = 0x2bb798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
label_2bb79c:
    // 0x2bb79c: 0xc09c2b8  jal         func_270AE0
label_2bb7a0:
    if (ctx->pc == 0x2BB7A0u) {
        ctx->pc = 0x2BB7A4u;
        goto label_2bb7a4;
    }
    ctx->pc = 0x2BB79Cu;
    SET_GPR_U32(ctx, 31, 0x2BB7A4u);
    ctx->pc = 0x270AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270AE0u, 0x2BB79Cu, 0x2BB7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB7A4u;
label_2bb7a4:
    // 0x2bb7a4: 0x8fa403c0  lw          $a0, 0x3C0($sp)
    ctx->pc = 0x2bb7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_2bb7a8:
    // 0x2bb7a8: 0x24850018  addiu       $a1, $a0, 0x18
    ctx->pc = 0x2bb7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_2bb7ac:
    // 0x2bb7ac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2bb7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bb7b0:
    // 0x2bb7b0: 0x27a20320  addiu       $v0, $sp, 0x320
    ctx->pc = 0x2bb7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_2bb7b4:
    // 0x2bb7b4: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x2bb7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_2bb7b8:
    // 0x2bb7b8: 0x7ba50110  lq          $a1, 0x110($sp)
    ctx->pc = 0x2bb7b8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2bb7bc:
    // 0x2bb7bc: 0xc09c1d8  jal         func_270760
label_2bb7c0:
    if (ctx->pc == 0x2BB7C0u) {
        ctx->pc = 0x2BB7C4u;
        goto label_2bb7c4;
    }
    ctx->pc = 0x2BB7BCu;
    SET_GPR_U32(ctx, 31, 0x2BB7C4u);
    ctx->pc = 0x270760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270760u, 0x2BB7BCu, 0x2BB7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB7C4u;
label_2bb7c4:
    // 0x2bb7c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bb7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bb7c8:
    // 0x2bb7c8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2bb7cc:
    if (ctx->pc == 0x2BB7CCu) {
        ctx->pc = 0x2BB7D0u;
        goto label_2bb7d0;
    }
    ctx->pc = 0x2BB7C8u;
    {
        const bool branch_taken_0x2bb7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb7c8) {
            ctx->pc = 0x2BB7E0u;
            goto label_2bb7e0;
        }
    }
    ctx->pc = 0x2BB7D0u;
label_2bb7d0:
    // 0x2bb7d0: 0x8fa40338  lw          $a0, 0x338($sp)
    ctx->pc = 0x2bb7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 824)));
label_2bb7d4:
    // 0x2bb7d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bb7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb7d8:
    // 0x2bb7d8: 0xc09c3f0  jal         func_270FC0
label_2bb7dc:
    if (ctx->pc == 0x2BB7DCu) {
        ctx->pc = 0x2BB7E0u;
        goto label_2bb7e0;
    }
    ctx->pc = 0x2BB7D8u;
    SET_GPR_U32(ctx, 31, 0x2BB7E0u);
    ctx->pc = 0x270FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270FC0u, 0x2BB7D8u, 0x2BB7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB7E0u;
label_2bb7e0:
    // 0x2bb7e0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2bb7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2bb7e4:
    // 0x2bb7e4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2bb7e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2bb7e8:
    // 0x2bb7e8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2bb7e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2bb7ec:
    // 0x2bb7ec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2bb7ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2bb7f0:
    // 0x2bb7f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2bb7f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2bb7f4:
    // 0x2bb7f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2bb7f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2bb7f8:
    // 0x2bb7f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bb7f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2bb7fc:
    // 0x2bb7fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bb7fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2bb800:
    // 0x2bb800: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bb800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bb804:
    // 0x2bb804: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bb804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bb808:
    // 0x2bb808: 0x27bd03f0  addiu       $sp, $sp, 0x3F0
    ctx->pc = 0x2bb808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
label_2bb80c:
    // 0x2bb80c: 0x3e00008  jr          $ra
label_2bb810:
    if (ctx->pc == 0x2BB810u) {
        ctx->pc = 0x2BB814u;
        goto label_2bb814;
    }
    ctx->pc = 0x2BB80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB814u;
label_2bb814:
    // 0x2bb814: 0x0  nop
    ctx->pc = 0x2bb814u;
    // NOP
label_2bb818:
    // 0x2bb818: 0x0  nop
    ctx->pc = 0x2bb818u;
    // NOP
label_2bb81c:
    // 0x2bb81c: 0x0  nop
    ctx->pc = 0x2bb81cu;
    // NOP
    ctx->pc = 0x2bb820u;
}
