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

// Function: sub_005DE6B0
// Address: 0x5de6b0 - 0x5ded90
void sub_005DE6B0_0x5de6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DE6B0_0x5de6b0");
#endif

    switch (ctx->pc) {
        case 0x5de6b0u: goto label_5de6b0;
        case 0x5de6b4u: goto label_5de6b4;
        case 0x5de6b8u: goto label_5de6b8;
        case 0x5de6bcu: goto label_5de6bc;
        case 0x5de6c0u: goto label_5de6c0;
        case 0x5de6c4u: goto label_5de6c4;
        case 0x5de6c8u: goto label_5de6c8;
        case 0x5de6ccu: goto label_5de6cc;
        case 0x5de6d0u: goto label_5de6d0;
        case 0x5de6d4u: goto label_5de6d4;
        case 0x5de6d8u: goto label_5de6d8;
        case 0x5de6dcu: goto label_5de6dc;
        case 0x5de6e0u: goto label_5de6e0;
        case 0x5de6e4u: goto label_5de6e4;
        case 0x5de6e8u: goto label_5de6e8;
        case 0x5de6ecu: goto label_5de6ec;
        case 0x5de6f0u: goto label_5de6f0;
        case 0x5de6f4u: goto label_5de6f4;
        case 0x5de6f8u: goto label_5de6f8;
        case 0x5de6fcu: goto label_5de6fc;
        case 0x5de700u: goto label_5de700;
        case 0x5de704u: goto label_5de704;
        case 0x5de708u: goto label_5de708;
        case 0x5de70cu: goto label_5de70c;
        case 0x5de710u: goto label_5de710;
        case 0x5de714u: goto label_5de714;
        case 0x5de718u: goto label_5de718;
        case 0x5de71cu: goto label_5de71c;
        case 0x5de720u: goto label_5de720;
        case 0x5de724u: goto label_5de724;
        case 0x5de728u: goto label_5de728;
        case 0x5de72cu: goto label_5de72c;
        case 0x5de730u: goto label_5de730;
        case 0x5de734u: goto label_5de734;
        case 0x5de738u: goto label_5de738;
        case 0x5de73cu: goto label_5de73c;
        case 0x5de740u: goto label_5de740;
        case 0x5de744u: goto label_5de744;
        case 0x5de748u: goto label_5de748;
        case 0x5de74cu: goto label_5de74c;
        case 0x5de750u: goto label_5de750;
        case 0x5de754u: goto label_5de754;
        case 0x5de758u: goto label_5de758;
        case 0x5de75cu: goto label_5de75c;
        case 0x5de760u: goto label_5de760;
        case 0x5de764u: goto label_5de764;
        case 0x5de768u: goto label_5de768;
        case 0x5de76cu: goto label_5de76c;
        case 0x5de770u: goto label_5de770;
        case 0x5de774u: goto label_5de774;
        case 0x5de778u: goto label_5de778;
        case 0x5de77cu: goto label_5de77c;
        case 0x5de780u: goto label_5de780;
        case 0x5de784u: goto label_5de784;
        case 0x5de788u: goto label_5de788;
        case 0x5de78cu: goto label_5de78c;
        case 0x5de790u: goto label_5de790;
        case 0x5de794u: goto label_5de794;
        case 0x5de798u: goto label_5de798;
        case 0x5de79cu: goto label_5de79c;
        case 0x5de7a0u: goto label_5de7a0;
        case 0x5de7a4u: goto label_5de7a4;
        case 0x5de7a8u: goto label_5de7a8;
        case 0x5de7acu: goto label_5de7ac;
        case 0x5de7b0u: goto label_5de7b0;
        case 0x5de7b4u: goto label_5de7b4;
        case 0x5de7b8u: goto label_5de7b8;
        case 0x5de7bcu: goto label_5de7bc;
        case 0x5de7c0u: goto label_5de7c0;
        case 0x5de7c4u: goto label_5de7c4;
        case 0x5de7c8u: goto label_5de7c8;
        case 0x5de7ccu: goto label_5de7cc;
        case 0x5de7d0u: goto label_5de7d0;
        case 0x5de7d4u: goto label_5de7d4;
        case 0x5de7d8u: goto label_5de7d8;
        case 0x5de7dcu: goto label_5de7dc;
        case 0x5de7e0u: goto label_5de7e0;
        case 0x5de7e4u: goto label_5de7e4;
        case 0x5de7e8u: goto label_5de7e8;
        case 0x5de7ecu: goto label_5de7ec;
        case 0x5de7f0u: goto label_5de7f0;
        case 0x5de7f4u: goto label_5de7f4;
        case 0x5de7f8u: goto label_5de7f8;
        case 0x5de7fcu: goto label_5de7fc;
        case 0x5de800u: goto label_5de800;
        case 0x5de804u: goto label_5de804;
        case 0x5de808u: goto label_5de808;
        case 0x5de80cu: goto label_5de80c;
        case 0x5de810u: goto label_5de810;
        case 0x5de814u: goto label_5de814;
        case 0x5de818u: goto label_5de818;
        case 0x5de81cu: goto label_5de81c;
        case 0x5de820u: goto label_5de820;
        case 0x5de824u: goto label_5de824;
        case 0x5de828u: goto label_5de828;
        case 0x5de82cu: goto label_5de82c;
        case 0x5de830u: goto label_5de830;
        case 0x5de834u: goto label_5de834;
        case 0x5de838u: goto label_5de838;
        case 0x5de83cu: goto label_5de83c;
        case 0x5de840u: goto label_5de840;
        case 0x5de844u: goto label_5de844;
        case 0x5de848u: goto label_5de848;
        case 0x5de84cu: goto label_5de84c;
        case 0x5de850u: goto label_5de850;
        case 0x5de854u: goto label_5de854;
        case 0x5de858u: goto label_5de858;
        case 0x5de85cu: goto label_5de85c;
        case 0x5de860u: goto label_5de860;
        case 0x5de864u: goto label_5de864;
        case 0x5de868u: goto label_5de868;
        case 0x5de86cu: goto label_5de86c;
        case 0x5de870u: goto label_5de870;
        case 0x5de874u: goto label_5de874;
        case 0x5de878u: goto label_5de878;
        case 0x5de87cu: goto label_5de87c;
        case 0x5de880u: goto label_5de880;
        case 0x5de884u: goto label_5de884;
        case 0x5de888u: goto label_5de888;
        case 0x5de88cu: goto label_5de88c;
        case 0x5de890u: goto label_5de890;
        case 0x5de894u: goto label_5de894;
        case 0x5de898u: goto label_5de898;
        case 0x5de89cu: goto label_5de89c;
        case 0x5de8a0u: goto label_5de8a0;
        case 0x5de8a4u: goto label_5de8a4;
        case 0x5de8a8u: goto label_5de8a8;
        case 0x5de8acu: goto label_5de8ac;
        case 0x5de8b0u: goto label_5de8b0;
        case 0x5de8b4u: goto label_5de8b4;
        case 0x5de8b8u: goto label_5de8b8;
        case 0x5de8bcu: goto label_5de8bc;
        case 0x5de8c0u: goto label_5de8c0;
        case 0x5de8c4u: goto label_5de8c4;
        case 0x5de8c8u: goto label_5de8c8;
        case 0x5de8ccu: goto label_5de8cc;
        case 0x5de8d0u: goto label_5de8d0;
        case 0x5de8d4u: goto label_5de8d4;
        case 0x5de8d8u: goto label_5de8d8;
        case 0x5de8dcu: goto label_5de8dc;
        case 0x5de8e0u: goto label_5de8e0;
        case 0x5de8e4u: goto label_5de8e4;
        case 0x5de8e8u: goto label_5de8e8;
        case 0x5de8ecu: goto label_5de8ec;
        case 0x5de8f0u: goto label_5de8f0;
        case 0x5de8f4u: goto label_5de8f4;
        case 0x5de8f8u: goto label_5de8f8;
        case 0x5de8fcu: goto label_5de8fc;
        case 0x5de900u: goto label_5de900;
        case 0x5de904u: goto label_5de904;
        case 0x5de908u: goto label_5de908;
        case 0x5de90cu: goto label_5de90c;
        case 0x5de910u: goto label_5de910;
        case 0x5de914u: goto label_5de914;
        case 0x5de918u: goto label_5de918;
        case 0x5de91cu: goto label_5de91c;
        case 0x5de920u: goto label_5de920;
        case 0x5de924u: goto label_5de924;
        case 0x5de928u: goto label_5de928;
        case 0x5de92cu: goto label_5de92c;
        case 0x5de930u: goto label_5de930;
        case 0x5de934u: goto label_5de934;
        case 0x5de938u: goto label_5de938;
        case 0x5de93cu: goto label_5de93c;
        case 0x5de940u: goto label_5de940;
        case 0x5de944u: goto label_5de944;
        case 0x5de948u: goto label_5de948;
        case 0x5de94cu: goto label_5de94c;
        case 0x5de950u: goto label_5de950;
        case 0x5de954u: goto label_5de954;
        case 0x5de958u: goto label_5de958;
        case 0x5de95cu: goto label_5de95c;
        case 0x5de960u: goto label_5de960;
        case 0x5de964u: goto label_5de964;
        case 0x5de968u: goto label_5de968;
        case 0x5de96cu: goto label_5de96c;
        case 0x5de970u: goto label_5de970;
        case 0x5de974u: goto label_5de974;
        case 0x5de978u: goto label_5de978;
        case 0x5de97cu: goto label_5de97c;
        case 0x5de980u: goto label_5de980;
        case 0x5de984u: goto label_5de984;
        case 0x5de988u: goto label_5de988;
        case 0x5de98cu: goto label_5de98c;
        case 0x5de990u: goto label_5de990;
        case 0x5de994u: goto label_5de994;
        case 0x5de998u: goto label_5de998;
        case 0x5de99cu: goto label_5de99c;
        case 0x5de9a0u: goto label_5de9a0;
        case 0x5de9a4u: goto label_5de9a4;
        case 0x5de9a8u: goto label_5de9a8;
        case 0x5de9acu: goto label_5de9ac;
        case 0x5de9b0u: goto label_5de9b0;
        case 0x5de9b4u: goto label_5de9b4;
        case 0x5de9b8u: goto label_5de9b8;
        case 0x5de9bcu: goto label_5de9bc;
        case 0x5de9c0u: goto label_5de9c0;
        case 0x5de9c4u: goto label_5de9c4;
        case 0x5de9c8u: goto label_5de9c8;
        case 0x5de9ccu: goto label_5de9cc;
        case 0x5de9d0u: goto label_5de9d0;
        case 0x5de9d4u: goto label_5de9d4;
        case 0x5de9d8u: goto label_5de9d8;
        case 0x5de9dcu: goto label_5de9dc;
        case 0x5de9e0u: goto label_5de9e0;
        case 0x5de9e4u: goto label_5de9e4;
        case 0x5de9e8u: goto label_5de9e8;
        case 0x5de9ecu: goto label_5de9ec;
        case 0x5de9f0u: goto label_5de9f0;
        case 0x5de9f4u: goto label_5de9f4;
        case 0x5de9f8u: goto label_5de9f8;
        case 0x5de9fcu: goto label_5de9fc;
        case 0x5dea00u: goto label_5dea00;
        case 0x5dea04u: goto label_5dea04;
        case 0x5dea08u: goto label_5dea08;
        case 0x5dea0cu: goto label_5dea0c;
        case 0x5dea10u: goto label_5dea10;
        case 0x5dea14u: goto label_5dea14;
        case 0x5dea18u: goto label_5dea18;
        case 0x5dea1cu: goto label_5dea1c;
        case 0x5dea20u: goto label_5dea20;
        case 0x5dea24u: goto label_5dea24;
        case 0x5dea28u: goto label_5dea28;
        case 0x5dea2cu: goto label_5dea2c;
        case 0x5dea30u: goto label_5dea30;
        case 0x5dea34u: goto label_5dea34;
        case 0x5dea38u: goto label_5dea38;
        case 0x5dea3cu: goto label_5dea3c;
        case 0x5dea40u: goto label_5dea40;
        case 0x5dea44u: goto label_5dea44;
        case 0x5dea48u: goto label_5dea48;
        case 0x5dea4cu: goto label_5dea4c;
        case 0x5dea50u: goto label_5dea50;
        case 0x5dea54u: goto label_5dea54;
        case 0x5dea58u: goto label_5dea58;
        case 0x5dea5cu: goto label_5dea5c;
        case 0x5dea60u: goto label_5dea60;
        case 0x5dea64u: goto label_5dea64;
        case 0x5dea68u: goto label_5dea68;
        case 0x5dea6cu: goto label_5dea6c;
        case 0x5dea70u: goto label_5dea70;
        case 0x5dea74u: goto label_5dea74;
        case 0x5dea78u: goto label_5dea78;
        case 0x5dea7cu: goto label_5dea7c;
        case 0x5dea80u: goto label_5dea80;
        case 0x5dea84u: goto label_5dea84;
        case 0x5dea88u: goto label_5dea88;
        case 0x5dea8cu: goto label_5dea8c;
        case 0x5dea90u: goto label_5dea90;
        case 0x5dea94u: goto label_5dea94;
        case 0x5dea98u: goto label_5dea98;
        case 0x5dea9cu: goto label_5dea9c;
        case 0x5deaa0u: goto label_5deaa0;
        case 0x5deaa4u: goto label_5deaa4;
        case 0x5deaa8u: goto label_5deaa8;
        case 0x5deaacu: goto label_5deaac;
        case 0x5deab0u: goto label_5deab0;
        case 0x5deab4u: goto label_5deab4;
        case 0x5deab8u: goto label_5deab8;
        case 0x5deabcu: goto label_5deabc;
        case 0x5deac0u: goto label_5deac0;
        case 0x5deac4u: goto label_5deac4;
        case 0x5deac8u: goto label_5deac8;
        case 0x5deaccu: goto label_5deacc;
        case 0x5dead0u: goto label_5dead0;
        case 0x5dead4u: goto label_5dead4;
        case 0x5dead8u: goto label_5dead8;
        case 0x5deadcu: goto label_5deadc;
        case 0x5deae0u: goto label_5deae0;
        case 0x5deae4u: goto label_5deae4;
        case 0x5deae8u: goto label_5deae8;
        case 0x5deaecu: goto label_5deaec;
        case 0x5deaf0u: goto label_5deaf0;
        case 0x5deaf4u: goto label_5deaf4;
        case 0x5deaf8u: goto label_5deaf8;
        case 0x5deafcu: goto label_5deafc;
        case 0x5deb00u: goto label_5deb00;
        case 0x5deb04u: goto label_5deb04;
        case 0x5deb08u: goto label_5deb08;
        case 0x5deb0cu: goto label_5deb0c;
        case 0x5deb10u: goto label_5deb10;
        case 0x5deb14u: goto label_5deb14;
        case 0x5deb18u: goto label_5deb18;
        case 0x5deb1cu: goto label_5deb1c;
        case 0x5deb20u: goto label_5deb20;
        case 0x5deb24u: goto label_5deb24;
        case 0x5deb28u: goto label_5deb28;
        case 0x5deb2cu: goto label_5deb2c;
        case 0x5deb30u: goto label_5deb30;
        case 0x5deb34u: goto label_5deb34;
        case 0x5deb38u: goto label_5deb38;
        case 0x5deb3cu: goto label_5deb3c;
        case 0x5deb40u: goto label_5deb40;
        case 0x5deb44u: goto label_5deb44;
        case 0x5deb48u: goto label_5deb48;
        case 0x5deb4cu: goto label_5deb4c;
        case 0x5deb50u: goto label_5deb50;
        case 0x5deb54u: goto label_5deb54;
        case 0x5deb58u: goto label_5deb58;
        case 0x5deb5cu: goto label_5deb5c;
        case 0x5deb60u: goto label_5deb60;
        case 0x5deb64u: goto label_5deb64;
        case 0x5deb68u: goto label_5deb68;
        case 0x5deb6cu: goto label_5deb6c;
        case 0x5deb70u: goto label_5deb70;
        case 0x5deb74u: goto label_5deb74;
        case 0x5deb78u: goto label_5deb78;
        case 0x5deb7cu: goto label_5deb7c;
        case 0x5deb80u: goto label_5deb80;
        case 0x5deb84u: goto label_5deb84;
        case 0x5deb88u: goto label_5deb88;
        case 0x5deb8cu: goto label_5deb8c;
        case 0x5deb90u: goto label_5deb90;
        case 0x5deb94u: goto label_5deb94;
        case 0x5deb98u: goto label_5deb98;
        case 0x5deb9cu: goto label_5deb9c;
        case 0x5deba0u: goto label_5deba0;
        case 0x5deba4u: goto label_5deba4;
        case 0x5deba8u: goto label_5deba8;
        case 0x5debacu: goto label_5debac;
        case 0x5debb0u: goto label_5debb0;
        case 0x5debb4u: goto label_5debb4;
        case 0x5debb8u: goto label_5debb8;
        case 0x5debbcu: goto label_5debbc;
        case 0x5debc0u: goto label_5debc0;
        case 0x5debc4u: goto label_5debc4;
        case 0x5debc8u: goto label_5debc8;
        case 0x5debccu: goto label_5debcc;
        case 0x5debd0u: goto label_5debd0;
        case 0x5debd4u: goto label_5debd4;
        case 0x5debd8u: goto label_5debd8;
        case 0x5debdcu: goto label_5debdc;
        case 0x5debe0u: goto label_5debe0;
        case 0x5debe4u: goto label_5debe4;
        case 0x5debe8u: goto label_5debe8;
        case 0x5debecu: goto label_5debec;
        case 0x5debf0u: goto label_5debf0;
        case 0x5debf4u: goto label_5debf4;
        case 0x5debf8u: goto label_5debf8;
        case 0x5debfcu: goto label_5debfc;
        case 0x5dec00u: goto label_5dec00;
        case 0x5dec04u: goto label_5dec04;
        case 0x5dec08u: goto label_5dec08;
        case 0x5dec0cu: goto label_5dec0c;
        case 0x5dec10u: goto label_5dec10;
        case 0x5dec14u: goto label_5dec14;
        case 0x5dec18u: goto label_5dec18;
        case 0x5dec1cu: goto label_5dec1c;
        case 0x5dec20u: goto label_5dec20;
        case 0x5dec24u: goto label_5dec24;
        case 0x5dec28u: goto label_5dec28;
        case 0x5dec2cu: goto label_5dec2c;
        case 0x5dec30u: goto label_5dec30;
        case 0x5dec34u: goto label_5dec34;
        case 0x5dec38u: goto label_5dec38;
        case 0x5dec3cu: goto label_5dec3c;
        case 0x5dec40u: goto label_5dec40;
        case 0x5dec44u: goto label_5dec44;
        case 0x5dec48u: goto label_5dec48;
        case 0x5dec4cu: goto label_5dec4c;
        case 0x5dec50u: goto label_5dec50;
        case 0x5dec54u: goto label_5dec54;
        case 0x5dec58u: goto label_5dec58;
        case 0x5dec5cu: goto label_5dec5c;
        case 0x5dec60u: goto label_5dec60;
        case 0x5dec64u: goto label_5dec64;
        case 0x5dec68u: goto label_5dec68;
        case 0x5dec6cu: goto label_5dec6c;
        case 0x5dec70u: goto label_5dec70;
        case 0x5dec74u: goto label_5dec74;
        case 0x5dec78u: goto label_5dec78;
        case 0x5dec7cu: goto label_5dec7c;
        case 0x5dec80u: goto label_5dec80;
        case 0x5dec84u: goto label_5dec84;
        case 0x5dec88u: goto label_5dec88;
        case 0x5dec8cu: goto label_5dec8c;
        case 0x5dec90u: goto label_5dec90;
        case 0x5dec94u: goto label_5dec94;
        case 0x5dec98u: goto label_5dec98;
        case 0x5dec9cu: goto label_5dec9c;
        case 0x5deca0u: goto label_5deca0;
        case 0x5deca4u: goto label_5deca4;
        case 0x5deca8u: goto label_5deca8;
        case 0x5decacu: goto label_5decac;
        case 0x5decb0u: goto label_5decb0;
        case 0x5decb4u: goto label_5decb4;
        case 0x5decb8u: goto label_5decb8;
        case 0x5decbcu: goto label_5decbc;
        case 0x5decc0u: goto label_5decc0;
        case 0x5decc4u: goto label_5decc4;
        case 0x5decc8u: goto label_5decc8;
        case 0x5decccu: goto label_5deccc;
        case 0x5decd0u: goto label_5decd0;
        case 0x5decd4u: goto label_5decd4;
        case 0x5decd8u: goto label_5decd8;
        case 0x5decdcu: goto label_5decdc;
        case 0x5dece0u: goto label_5dece0;
        case 0x5dece4u: goto label_5dece4;
        case 0x5dece8u: goto label_5dece8;
        case 0x5dececu: goto label_5decec;
        case 0x5decf0u: goto label_5decf0;
        case 0x5decf4u: goto label_5decf4;
        case 0x5decf8u: goto label_5decf8;
        case 0x5decfcu: goto label_5decfc;
        case 0x5ded00u: goto label_5ded00;
        case 0x5ded04u: goto label_5ded04;
        case 0x5ded08u: goto label_5ded08;
        case 0x5ded0cu: goto label_5ded0c;
        case 0x5ded10u: goto label_5ded10;
        case 0x5ded14u: goto label_5ded14;
        case 0x5ded18u: goto label_5ded18;
        case 0x5ded1cu: goto label_5ded1c;
        case 0x5ded20u: goto label_5ded20;
        case 0x5ded24u: goto label_5ded24;
        case 0x5ded28u: goto label_5ded28;
        case 0x5ded2cu: goto label_5ded2c;
        case 0x5ded30u: goto label_5ded30;
        case 0x5ded34u: goto label_5ded34;
        case 0x5ded38u: goto label_5ded38;
        case 0x5ded3cu: goto label_5ded3c;
        case 0x5ded40u: goto label_5ded40;
        case 0x5ded44u: goto label_5ded44;
        case 0x5ded48u: goto label_5ded48;
        case 0x5ded4cu: goto label_5ded4c;
        case 0x5ded50u: goto label_5ded50;
        case 0x5ded54u: goto label_5ded54;
        case 0x5ded58u: goto label_5ded58;
        case 0x5ded5cu: goto label_5ded5c;
        case 0x5ded60u: goto label_5ded60;
        case 0x5ded64u: goto label_5ded64;
        case 0x5ded68u: goto label_5ded68;
        case 0x5ded6cu: goto label_5ded6c;
        case 0x5ded70u: goto label_5ded70;
        case 0x5ded74u: goto label_5ded74;
        case 0x5ded78u: goto label_5ded78;
        case 0x5ded7cu: goto label_5ded7c;
        case 0x5ded80u: goto label_5ded80;
        case 0x5ded84u: goto label_5ded84;
        case 0x5ded88u: goto label_5ded88;
        case 0x5ded8cu: goto label_5ded8c;
        default: break;
    }

    ctx->pc = 0x5de6b0u;

label_5de6b0:
    // 0x5de6b0: 0x20212121  addi        $at, $at, 0x2121
    ctx->pc = 0x5de6b0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8481, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_5de6b4:
    // 0x5de6b4: 0x544e4144  bnel        $v0, $t6, . + 4 + (0x4144 << 2)
label_5de6b8:
    if (ctx->pc == 0x5DE6B8u) {
        ctx->pc = 0x5DE6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DE6B4u;
        // 0x5de6b8: 0x64205345  daddiu      $zero, $at, 0x5345 (Delay Slot)
        SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)21317);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DE6BCu;
        goto label_5de6bc;
    }
    ctx->pc = 0x5DE6B4u;
    {
        const bool branch_taken_0x5de6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        if (branch_taken_0x5de6b4) {
            ctx->pc = 0x5DE6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DE6B4u;
            // 0x5de6b8: 0x64205345  daddiu      $zero, $at, 0x5345 (Delay Slot)
            SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)21317);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5EEBC8u;
            return;
        }
    }
    ctx->pc = 0x5DE6BCu;
label_5de6bc:
    // 0x5de6bc: 0x65446374  daddiu      $a0, $t2, 0x6374
    ctx->pc = 0x5de6bcu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)25460);
label_5de6c0:
    // 0x5de6c0: 0x4d677562  .word       0x4D677562                   # INVALID     $t3, $a3, 0x7562 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de6c0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DE6C0 raw=0x4D677562");
label_5de6c4:
    // 0x5de6c4: 0x67616e61  daddiu      $at, $k1, 0x6E61
    ctx->pc = 0x5de6c4u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28257);
label_5de6c8:
    // 0x5de6c8: 0x3a3a7265  xori        $k0, $s1, 0x7265
    ctx->pc = 0x5de6c8u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)29285);
label_5de6cc:
    // 0x5de6cc: 0x74696e49  .word       0x74696E49                   # INVALID     $v1, $t1, 0x6E49 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de6ccu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE6CC raw=0x74696E49");
label_5de6d0:
    // 0x5de6d0: 0x696c6169  ldl         $t4, 0x6169($t3)
    ctx->pc = 0x5de6d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24937); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_5de6d4:
    // 0x5de6d4: 0x3a206573  xori        $zero, $s1, 0x6573
    ctx->pc = 0x5de6d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)25971);
label_5de6d8:
    // 0x5de6d8: 0x69616620  ldl         $at, 0x6620($t3)
    ctx->pc = 0x5de6d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_5de6dc:
    // 0x5de6dc: 0xa64656c  j           func_99195B0
label_5de6e0:
    if (ctx->pc == 0x5DE6E0u) {
        ctx->pc = 0x5DE6E4u;
        goto label_5de6e4;
    }
    ctx->pc = 0x5DE6DCu;
    ctx->pc = 0x99195B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x99195B0u, 0x5DE6DCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5DE6E4u;
label_5de6e4:
    // 0x5de6e4: 0x0  nop
    ctx->pc = 0x5de6e4u;
    // NOP
label_5de6e8:
    // 0x5de6e8: 0x0  nop
    ctx->pc = 0x5de6e8u;
    // NOP
label_5de6ec:
    // 0x5de6ec: 0x0  nop
    ctx->pc = 0x5de6ecu;
    // NOP
label_5de6f0:
    // 0x5de6f0: 0x20212121  addi        $at, $at, 0x2121
    ctx->pc = 0x5de6f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8481, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_5de6f4:
    // 0x5de6f4: 0x544e4144  bnel        $v0, $t6, . + 4 + (0x4144 << 2)
label_5de6f8:
    if (ctx->pc == 0x5DE6F8u) {
        ctx->pc = 0x5DE6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DE6F4u;
        // 0x5de6f8: 0x64205345  daddiu      $zero, $at, 0x5345 (Delay Slot)
        SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)21317);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DE6FCu;
        goto label_5de6fc;
    }
    ctx->pc = 0x5DE6F4u;
    {
        const bool branch_taken_0x5de6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        if (branch_taken_0x5de6f4) {
            ctx->pc = 0x5DE6F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DE6F4u;
            // 0x5de6f8: 0x64205345  daddiu      $zero, $at, 0x5345 (Delay Slot)
            SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)21317);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5EEC08u;
            return;
        }
    }
    ctx->pc = 0x5DE6FCu;
label_5de6fc:
    // 0x5de6fc: 0x65446374  daddiu      $a0, $t2, 0x6374
    ctx->pc = 0x5de6fcu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)25460);
label_5de700:
    // 0x5de700: 0x4d677562  .word       0x4D677562                   # INVALID     $t3, $a3, 0x7562 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de700u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DE700 raw=0x4D677562");
label_5de704:
    // 0x5de704: 0x67616e61  daddiu      $at, $k1, 0x6E61
    ctx->pc = 0x5de704u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28257);
label_5de708:
    // 0x5de708: 0x3a3a7265  xori        $k0, $s1, 0x7265
    ctx->pc = 0x5de708u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)29285);
label_5de70c:
    // 0x5de70c: 0x74756853  .word       0x74756853                   # INVALID     $v1, $s5, 0x6853 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de70cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE70C raw=0x74756853");
label_5de710:
    // 0x5de710: 0x6e776f64  ldr         $s7, 0x6F64($s3)
    ctx->pc = 0x5de710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28516); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem >> shift)); }
label_5de714:
    // 0x5de714: 0x66203a20  daddiu      $zero, $s1, 0x3A20
    ctx->pc = 0x5de714u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)14880);
label_5de718:
    // 0x5de718: 0x656c6961  daddiu      $t4, $t3, 0x6961
    ctx->pc = 0x5de718u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26977);
label_5de71c:
    // 0x5de71c: 0xa64  .word       0x00000A64                   # and         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5de71cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_5de720:
    // 0x5de720: 0x21212121  addi        $at, $t1, 0x2121
    ctx->pc = 0x5de720u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)8481, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_5de724:
    // 0x5de724: 0x4e414420  .word       0x4E414420                   # INVALID     $s2, $at, 0x4420 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de724u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DE724 raw=0x4E414420");
label_5de728:
    // 0x5de728: 0x20534554  addi        $s3, $v0, 0x4554
    ctx->pc = 0x5de728u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)17748, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_5de72c:
    // 0x5de72c: 0x45637464  .word       0x45637464                   # INVALID     $t3, $v1, 0x7464 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5de72cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0xB, function 0x24 at 0x5DE72C raw=0x45637464");
label_5de730:
    // 0x5de730: 0x726f7272  .word       0x726F7272                   # INVALID     $s3, $t7, 0x7272 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de730u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x5DE730 raw=0x726F7272");
label_5de734:
    // 0x5de734: 0x68533a3a  ldl         $s3, 0x3A3A($v0)
    ctx->pc = 0x5de734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 14906); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_5de738:
    // 0x5de738: 0x6f647475  ldr         $a0, 0x7475($k1)
    ctx->pc = 0x5de738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29813); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_5de73c:
    // 0x5de73c: 0x2d206e77  sltiu       $zero, $t1, 0x6E77
    ctx->pc = 0x5de73cu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)28279) ? 1 : 0);
label_5de740:
    // 0x5de740: 0x64203e2d  daddiu      $zero, $at, 0x3E2D
    ctx->pc = 0x5de740u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)15917);
label_5de744:
    // 0x5de744: 0x72456374  .word       0x72456374                   # psllh       $t4, $a1, 13 # 02400000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de744u;
    SET_GPR_VEC(ctx, 12, _mm_slli_epi16(GPR_VEC(ctx, 5), 13));
label_5de748:
    // 0x5de748: 0x3a726f72  xori        $s2, $s3, 0x6F72
    ctx->pc = 0x5de748u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28530);
label_5de74c:
    // 0x5de74c: 0x7568533a  .word       0x7568533A                   # INVALID     $t3, $t0, 0x533A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de74cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE74C raw=0x7568533A");
label_5de750:
    // 0x5de750: 0x776f6474  .word       0x776F6474                   # INVALID     $k1, $t7, 0x6474 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de750u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE750 raw=0x776F6474");
label_5de754:
    // 0x5de754: 0x4146206e  .word       0x4146206E                   # INVALID     $t2, $a2, 0x206E # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5de754u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x5DE754 raw=0x4146206E");
label_5de758:
    // 0x5de758: 0x44454c49  .word       0x44454C49                   # cfc1        $a1, $9 # 00000449 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5de758u;
    SET_GPR_U32(ctx, 5, 0); // Unimplemented FCR9
label_5de75c:
    // 0x5de75c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5de75cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_5de760:
    // 0x5de760: 0x21212121  addi        $at, $t1, 0x2121
    ctx->pc = 0x5de760u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)8481, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_5de764:
    // 0x5de764: 0x4e414420  .word       0x4E414420                   # INVALID     $s2, $at, 0x4420 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de764u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DE764 raw=0x4E414420");
label_5de768:
    // 0x5de768: 0x20534554  addi        $s3, $v0, 0x4554
    ctx->pc = 0x5de768u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)17748, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_5de76c:
    // 0x5de76c: 0x45637464  .word       0x45637464                   # INVALID     $t3, $v1, 0x7464 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5de76cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0xB, function 0x24 at 0x5DE76C raw=0x45637464");
label_5de770:
    // 0x5de770: 0x7972746e  lq          $s2, 0x746E($t3)
    ctx->pc = 0x5de770u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 11), 29806)));
label_5de774:
    // 0x5de774: 0x6e696f50  ldr         $t1, 0x6F50($s3)
    ctx->pc = 0x5de774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28496); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5de778:
    // 0x5de778: 0x533a3a74  beql        $t9, $k0, . + 4 + (0x3A74 << 2)
label_5de77c:
    if (ctx->pc == 0x5DE77Cu) {
        ctx->pc = 0x5DE77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DE778u;
        // 0x5de77c: 0x64747568  daddiu      $s4, $v1, 0x7568 (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)30056);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DE780u;
        goto label_5de780;
    }
    ctx->pc = 0x5DE778u;
    {
        const bool branch_taken_0x5de778 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 26));
        if (branch_taken_0x5de778) {
            ctx->pc = 0x5DE77Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DE778u;
            // 0x5de77c: 0x64747568  daddiu      $s4, $v1, 0x7568 (Delay Slot)
            SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)30056);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5ED14Cu;
            return;
        }
    }
    ctx->pc = 0x5DE780u;
label_5de780:
    // 0x5de780: 0x206e776f  addi        $t6, $v1, 0x776F
    ctx->pc = 0x5de780u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30575, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_5de784:
    // 0x5de784: 0x203e2d2d  addi        $fp, $at, 0x2D2D
    ctx->pc = 0x5de784u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11565, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_5de788:
    // 0x5de788: 0x4d637464  .word       0x4D637464                   # INVALID     $t3, $v1, 0x7464 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de788u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DE788 raw=0x4D637464");
label_5de78c:
    // 0x5de78c: 0x3a3a6d65  xori        $k0, $s1, 0x6D65
    ctx->pc = 0x5de78cu;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)28005);
label_5de790:
    // 0x5de790: 0x74756853  .word       0x74756853                   # INVALID     $v1, $s5, 0x6853 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de790u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE790 raw=0x74756853");
label_5de794:
    // 0x5de794: 0x6e776f64  ldr         $s7, 0x6F64($s3)
    ctx->pc = 0x5de794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28516); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem >> shift)); }
label_5de798:
    // 0x5de798: 0x49414620  .word       0x49414620                   # INVALID     $t2, $at, 0x4620 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5de798u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5DE798 raw=0x49414620");
label_5de79c:
    // 0x5de79c: 0xa44454c  j           func_9111530
label_5de7a0:
    if (ctx->pc == 0x5DE7A0u) {
        ctx->pc = 0x5DE7A4u;
        goto label_5de7a4;
    }
    ctx->pc = 0x5DE79Cu;
    ctx->pc = 0x9111530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9111530u, 0x5DE79Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5DE7A4u;
label_5de7a4:
    // 0x5de7a4: 0x0  nop
    ctx->pc = 0x5de7a4u;
    // NOP
label_5de7a8:
    // 0x5de7a8: 0x0  nop
    ctx->pc = 0x5de7a8u;
    // NOP
label_5de7ac:
    // 0x5de7ac: 0x0  nop
    ctx->pc = 0x5de7acu;
    // NOP
label_5de7b0:
    // 0x5de7b0: 0x7273752f  .word       0x7273752F                   # INVALID     $s3, $s3, 0x752F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de7b0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x5DE7B0 raw=0x7273752F");
label_5de7b4:
    // 0x5de7b4: 0x636f6c2f  daddi       $t7, $k1, 0x6C2F
    ctx->pc = 0x5de7b4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27695; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_5de7b8:
    // 0x5de7b8: 0x732f6c61  .word       0x732F6C61                   # maddu1      $t5, $t9, $t7 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de7b8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 25) * (uint64_t)GPR_U32(ctx, 15); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_5de7bc:
    // 0x5de7bc: 0x692f6563  ldl         $t7, 0x6563($t1)
    ctx->pc = 0x5de7bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25955); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
label_5de7c0:
    // 0x5de7c0: 0x6d2f706f  ldr         $t7, 0x706F($t1)
    ctx->pc = 0x5de7c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 28783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_5de7c4:
    // 0x5de7c4: 0x6c75646f  ldr         $s5, 0x646F($v1)
    ctx->pc = 0x5de7c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25711); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_5de7c8:
    // 0x5de7c8: 0x2f7365  .word       0x002F7365                   # or          $t6, $at, $t7 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5de7c8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) | GPR_U64(ctx, 15));
label_5de7cc:
    // 0x5de7cc: 0x0  nop
    ctx->pc = 0x5de7ccu;
    // NOP
label_5de7d0:
    // 0x5de7d0: 0x48637464  .word       0x48637464                   # INVALID     $v1, $v1, 0x7464 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5de7d0u;
    throw std::runtime_error("Unhandled COP2 format: 0x3 at 0x5DE7D0 raw=0x48637464");
label_5de7d4:
    // 0x5de7d4: 0x3a74736f  xori        $s4, $s3, 0x736F
    ctx->pc = 0x5de7d4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)29551);
label_5de7d8:
    // 0x5de7d8: 0x696e493a  ldl         $t6, 0x493A($t3)
    ctx->pc = 0x5de7d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 18746); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_5de7dc:
    // 0x5de7dc: 0x616c5074  daddi       $t4, $t3, 0x5074
    ctx->pc = 0x5de7dcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)20596; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_5de7e0:
    // 0x5de7e0: 0x726f6674  .word       0x726F6674                   # psllh       $t4, $t7, 25 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de7e0u;
    SET_GPR_VEC(ctx, 12, _mm_slli_epi16(GPR_VEC(ctx, 15), 25));
label_5de7e4:
    // 0x5de7e4: 0x6570536d  daddiu      $s0, $t3, 0x536D
    ctx->pc = 0x5de7e4u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)21357);
label_5de7e8:
    // 0x5de7e8: 0x69666963  ldl         $a2, 0x6963($t3)
    ctx->pc = 0x5de7e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26979); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_5de7ec:
    // 0x5de7ec: 0x203a2063  addi        $k0, $at, 0x2063
    ctx->pc = 0x5de7ecu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8291, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_5de7f0:
    // 0x5de7f0: 0x616c4256  daddi       $t4, $t3, 0x4256
    ctx->pc = 0x5de7f0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)16982; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_5de7f4:
    // 0x5de7f4: 0x49206b6e  .word       0x49206B6E                   # INVALID     $t1, $zero, 0x6B6E # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5de7f4u;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x5DE7F4 raw=0x49206B6E");
label_5de7f8:
    // 0x5de7f8: 0x4820746e  .word       0x4820746E                   # qmfc2.ni    $zero, $vf14 # 0000046E <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5de7f8u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[14]));
label_5de7fc:
    // 0x5de7fc: 0x6c646e61  ldr         $a0, 0x6E61($v1)
    ctx->pc = 0x5de7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_5de800:
    // 0x5de800: 0x73207265  .word       0x73207265                   # INVALID     $t9, $zero, 0x7265 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de800u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5DE800 raw=0x73207265");
label_5de804:
    // 0x5de804: 0x70757465  .word       0x70757465                   # INVALID     $v1, $s5, 0x7465 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de804u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5DE804 raw=0x70757465");
label_5de808:
    // 0x5de808: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5de808u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_5de80c:
    // 0x5de80c: 0x0  nop
    ctx->pc = 0x5de80cu;
    // NOP
label_5de810:
    // 0x5de810: 0x746e6144  .word       0x746E6144                   # INVALID     $v1, $t6, 0x6144 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de810u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE810 raw=0x746E6144");
label_5de814:
    // 0x5de814: 0x203a7365  addi        $k0, $at, 0x7365
    ctx->pc = 0x5de814u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29541, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_5de818:
    // 0x5de818: 0x48637464  .word       0x48637464                   # INVALID     $v1, $v1, 0x7464 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5de818u;
    throw std::runtime_error("Unhandled COP2 format: 0x3 at 0x5DE818 raw=0x48637464");
label_5de81c:
    // 0x5de81c: 0x3a74736f  xori        $s4, $s3, 0x736F
    ctx->pc = 0x5de81cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)29551);
label_5de820:
    // 0x5de820: 0x706f4920  .word       0x706F4920                   # madd1       $t1, $v1, $t7 # 00000100 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de820u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_5de824:
    // 0x5de824: 0x6f626552  ldr         $v0, 0x6552($k1)
    ctx->pc = 0x5de824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25938); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_5de828:
    // 0x5de828: 0x203a746f  addi        $k0, $at, 0x746F
    ctx->pc = 0x5de828u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29807, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_5de82c:
    // 0x5de82c: 0x6c696166  ldr         $t1, 0x6166($v1)
    ctx->pc = 0x5de82cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24934); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5de830:
    // 0x5de830: 0xa6465  .word       0x000A6465                   # or          $t4, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5de830u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
label_5de834:
    // 0x5de834: 0x0  nop
    ctx->pc = 0x5de834u;
    // NOP
label_5de838:
    // 0x5de838: 0x0  nop
    ctx->pc = 0x5de838u;
    // NOP
label_5de83c:
    // 0x5de83c: 0x0  nop
    ctx->pc = 0x5de83cu;
    // NOP
label_5de840:
    // 0x5de840: 0x746e6144  .word       0x746E6144                   # INVALID     $v1, $t6, 0x6144 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de840u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE840 raw=0x746E6144");
label_5de844:
    // 0x5de844: 0x203a7365  addi        $k0, $at, 0x7365
    ctx->pc = 0x5de844u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29541, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_5de848:
    // 0x5de848: 0x48637464  .word       0x48637464                   # INVALID     $v1, $v1, 0x7464 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5de848u;
    throw std::runtime_error("Unhandled COP2 format: 0x3 at 0x5DE848 raw=0x48637464");
label_5de84c:
    // 0x5de84c: 0x3a74736f  xori        $s4, $s3, 0x736F
    ctx->pc = 0x5de84cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)29551);
label_5de850:
    // 0x5de850: 0x696e4920  ldl         $t6, 0x4920($t3)
    ctx->pc = 0x5de850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 18720); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_5de854:
    // 0x5de854: 0x6c616974  ldr         $at, 0x6974($v1)
    ctx->pc = 0x5de854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5de858:
    // 0x5de858: 0x44657369  .word       0x44657369                   # INVALID     $v1, $a1, 0x7369 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5de858u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x29 at 0x5DE858 raw=0x44657369");
label_5de85c:
    // 0x5de85c: 0x53637369  beql        $k1, $v1, . + 4 + (0x7369 << 2)
label_5de860:
    if (ctx->pc == 0x5DE860u) {
        ctx->pc = 0x5DE860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DE85Cu;
        // 0x5de860: 0x65747379  daddiu      $s4, $t3, 0x7379 (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29561);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DE864u;
        goto label_5de864;
    }
    ctx->pc = 0x5DE85Cu;
    {
        const bool branch_taken_0x5de85c = (GPR_U64(ctx, 27) == GPR_U64(ctx, 3));
        if (branch_taken_0x5de85c) {
            ctx->pc = 0x5DE860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DE85Cu;
            // 0x5de860: 0x65747379  daddiu      $s4, $t3, 0x7379 (Delay Slot)
            SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29561);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FB604u;
            return;
        }
    }
    ctx->pc = 0x5DE864u;
label_5de864:
    // 0x5de864: 0x66203a6d  daddiu      $zero, $s1, 0x3A6D
    ctx->pc = 0x5de864u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)14957);
label_5de868:
    // 0x5de868: 0x656c6961  daddiu      $t4, $t3, 0x6961
    ctx->pc = 0x5de868u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26977);
label_5de86c:
    // 0x5de86c: 0xa64  .word       0x00000A64                   # and         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5de86cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_5de870:
    // 0x5de870: 0x746e6144  .word       0x746E6144                   # INVALID     $v1, $t6, 0x6144 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de870u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE870 raw=0x746E6144");
label_5de874:
    // 0x5de874: 0x203a7365  addi        $k0, $at, 0x7365
    ctx->pc = 0x5de874u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29541, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_5de878:
    // 0x5de878: 0x48637464  .word       0x48637464                   # INVALID     $v1, $v1, 0x7464 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5de878u;
    throw std::runtime_error("Unhandled COP2 format: 0x3 at 0x5DE878 raw=0x48637464");
label_5de87c:
    // 0x5de87c: 0x3a74736f  xori        $s4, $s3, 0x736F
    ctx->pc = 0x5de87cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)29551);
label_5de880:
    // 0x5de880: 0x616f4c20  daddi       $t7, $t3, 0x4C20
    ctx->pc = 0x5de880u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)19488; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_5de884:
    // 0x5de884: 0x646f4d64  daddiu      $t7, $v1, 0x4D64
    ctx->pc = 0x5de884u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)19812);
label_5de888:
    // 0x5de888: 0x73656c75  .word       0x73656C75                   # INVALID     $k1, $a1, 0x6C75 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de888u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x5DE888 raw=0x73656C75");
label_5de88c:
    // 0x5de88c: 0x6166203a  daddi       $a2, $t3, 0x203A
    ctx->pc = 0x5de88cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8250; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
label_5de890:
    // 0x5de890: 0x64656c69  daddiu      $a1, $v1, 0x6C69
    ctx->pc = 0x5de890u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27753);
label_5de894:
    // 0x5de894: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5de894u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_5de898:
    // 0x5de898: 0x0  nop
    ctx->pc = 0x5de898u;
    // NOP
label_5de89c:
    // 0x5de89c: 0x0  nop
    ctx->pc = 0x5de89cu;
    // NOP
label_5de8a0:
    // 0x5de8a0: 0x746e6144  .word       0x746E6144                   # INVALID     $v1, $t6, 0x6144 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de8a0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE8A0 raw=0x746E6144");
label_5de8a4:
    // 0x5de8a4: 0x203a7365  addi        $k0, $at, 0x7365
    ctx->pc = 0x5de8a4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29541, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_5de8a8:
    // 0x5de8a8: 0x48637464  .word       0x48637464                   # INVALID     $v1, $v1, 0x7464 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5de8a8u;
    throw std::runtime_error("Unhandled COP2 format: 0x3 at 0x5DE8A8 raw=0x48637464");
label_5de8ac:
    // 0x5de8ac: 0x3a74736f  xori        $s4, $s3, 0x736F
    ctx->pc = 0x5de8acu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)29551);
label_5de8b0:
    // 0x5de8b0: 0x696e4920  ldl         $t6, 0x4920($t3)
    ctx->pc = 0x5de8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 18720); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_5de8b4:
    // 0x5de8b4: 0x6c616974  ldr         $at, 0x6974($v1)
    ctx->pc = 0x5de8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5de8b8:
    // 0x5de8b8: 0x4d657369  .word       0x4D657369                   # INVALID     $t3, $a1, 0x7369 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de8b8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DE8B8 raw=0x4D657369");
label_5de8bc:
    // 0x5de8bc: 0x6c75646f  ldr         $s5, 0x646F($v1)
    ctx->pc = 0x5de8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25711); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_5de8c0:
    // 0x5de8c0: 0x203a7365  addi        $k0, $at, 0x7365
    ctx->pc = 0x5de8c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29541, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_5de8c4:
    // 0x5de8c4: 0x6c696166  ldr         $t1, 0x6166($v1)
    ctx->pc = 0x5de8c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24934); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5de8c8:
    // 0x5de8c8: 0xa6465  .word       0x000A6465                   # or          $t4, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5de8c8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
label_5de8cc:
    // 0x5de8cc: 0x0  nop
    ctx->pc = 0x5de8ccu;
    // NOP
label_5de8d0:
    // 0x5de8d0: 0x64616f6c  daddiu      $at, $v1, 0x6F6C
    ctx->pc = 0x5de8d0u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28524);
label_5de8d4:
    // 0x5de8d4: 0x20676e69  addi        $a3, $v1, 0x6E69
    ctx->pc = 0x5de8d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28265, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_5de8d8:
    // 0x5de8d8: 0x66207325  daddiu      $zero, $s1, 0x7325
    ctx->pc = 0x5de8d8u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)29477);
label_5de8dc:
    // 0x5de8dc: 0x656c6961  daddiu      $t4, $t3, 0x6961
    ctx->pc = 0x5de8dcu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26977);
label_5de8e0:
    // 0x5de8e0: 0xa64  .word       0x00000A64                   # and         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5de8e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_5de8e4:
    // 0x5de8e4: 0x0  nop
    ctx->pc = 0x5de8e4u;
    // NOP
label_5de8e8:
    // 0x5de8e8: 0x52504f49  beql        $s2, $s0, . + 4 + (0x4F49 << 2)
label_5de8ec:
    if (ctx->pc == 0x5DE8ECu) {
        ctx->pc = 0x5DE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DE8E8u;
        // 0x5de8ec: 0x30303350  andi        $s0, $at, 0x3350 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)13136);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DE8F0u;
        goto label_5de8f0;
    }
    ctx->pc = 0x5DE8E8u;
    {
        const bool branch_taken_0x5de8e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        if (branch_taken_0x5de8e8) {
            ctx->pc = 0x5DE8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DE8E8u;
            // 0x5de8ec: 0x30303350  andi        $s0, $at, 0x3350 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)13136);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F2610u;
            return;
        }
    }
    ctx->pc = 0x5DE8F0u;
label_5de8f0:
    // 0x5de8f0: 0x474d492e  .word       0x474D492E                   # INVALID     $k0, $t5, 0x492E # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5de8f0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x2E at 0x5DE8F0 raw=0x474D492E");
label_5de8f4:
    // 0x5de8f4: 0x0  nop
    ctx->pc = 0x5de8f4u;
    // NOP
label_5de8f8:
    // 0x5de8f8: 0x0  nop
    ctx->pc = 0x5de8f8u;
    // NOP
label_5de8fc:
    // 0x5de8fc: 0x0  nop
    ctx->pc = 0x5de8fcu;
    // NOP
label_5de900:
    // 0x5de900: 0x746e6144  .word       0x746E6144                   # INVALID     $v1, $t6, 0x6144 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de900u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE900 raw=0x746E6144");
label_5de904:
    // 0x5de904: 0x3a207365  xori        $zero, $s1, 0x7365
    ctx->pc = 0x5de904u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)29541);
label_5de908:
    // 0x5de908: 0x616f6c20  daddi       $t7, $t3, 0x6C20
    ctx->pc = 0x5de908u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27680; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_5de90c:
    // 0x5de90c: 0x676e6964  daddiu      $t6, $k1, 0x6964
    ctx->pc = 0x5de90cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26980);
label_5de910:
    // 0x5de910: 0x504f4920  beql        $v0, $t7, . + 4 + (0x4920 << 2)
label_5de914:
    if (ctx->pc == 0x5DE914u) {
        ctx->pc = 0x5DE914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DE910u;
        // 0x5de914: 0x646f6d20  daddiu      $t7, $v1, 0x6D20 (Delay Slot)
        SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27936);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DE918u;
        goto label_5de918;
    }
    ctx->pc = 0x5DE910u;
    {
        const bool branch_taken_0x5de910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        if (branch_taken_0x5de910) {
            ctx->pc = 0x5DE914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DE910u;
            // 0x5de914: 0x646f6d20  daddiu      $t7, $v1, 0x6D20 (Delay Slot)
            SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F0D94u;
            return;
        }
    }
    ctx->pc = 0x5DE918u;
label_5de918:
    // 0x5de918: 0x73656c75  .word       0x73656C75                   # INVALID     $k1, $a1, 0x6C75 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de918u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x5DE918 raw=0x73656C75");
label_5de91c:
    // 0x5de91c: 0x2e2e2e20  sltiu       $t6, $s1, 0x2E20
    ctx->pc = 0x5de91cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)11808) ? 1 : 0);
label_5de920:
    // 0x5de920: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5de920u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_5de924:
    // 0x5de924: 0x0  nop
    ctx->pc = 0x5de924u;
    // NOP
label_5de928:
    // 0x5de928: 0x324f4953  andi        $t7, $s2, 0x4953
    ctx->pc = 0x5de928u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)18771);
label_5de92c:
    // 0x5de92c: 0x2e4e414d  sltiu       $t6, $s2, 0x414D
    ctx->pc = 0x5de92cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16717) ? 1 : 0);
label_5de930:
    // 0x5de930: 0x585249  .word       0x00585249                   # jalr        $t2, $v0 # 00180240 <InstrIdType: CPU_SPECIAL>
label_5de934:
    if (ctx->pc == 0x5DE934u) {
        ctx->pc = 0x5DE938u;
        goto label_5de938;
    }
    ctx->pc = 0x5DE930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 10, 0x5DE938u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5DE930u, 0x5DE938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x5DE938u;
label_5de938:
    // 0x5de938: 0x4d434244  .word       0x4D434244                   # INVALID     $t2, $v1, 0x4244 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de938u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DE938 raw=0x4D434244");
label_5de93c:
    // 0x5de93c: 0x492e4e41  .word       0x492E4E41                   # INVALID     $t1, $t6, 0x4E41 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5de93cu;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x5DE93C raw=0x492E4E41");
label_5de940:
    // 0x5de940: 0x5852  .word       0x00005852                   # mflo        $t3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5de940u;
    SET_GPR_U64(ctx, 11, ctx->lo);
label_5de944:
    // 0x5de944: 0x0  nop
    ctx->pc = 0x5de944u;
    // NOP
label_5de948:
    // 0x5de948: 0x324f4953  andi        $t7, $s2, 0x4953
    ctx->pc = 0x5de948u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)18771);
label_5de94c:
    // 0x5de94c: 0x52492e44  beql        $s2, $t1, . + 4 + (0x2E44 << 2)
label_5de950:
    if (ctx->pc == 0x5DE950u) {
        ctx->pc = 0x5DE950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DE94Cu;
        // 0x5de950: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DE954u;
        goto label_5de954;
    }
    ctx->pc = 0x5DE94Cu;
    {
        const bool branch_taken_0x5de94c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 9));
        if (branch_taken_0x5de94c) {
            ctx->pc = 0x5DE950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DE94Cu;
            // 0x5de950: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL> (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5EA260u;
            return;
        }
    }
    ctx->pc = 0x5DE954u;
label_5de954:
    // 0x5de954: 0x0  nop
    ctx->pc = 0x5de954u;
    // NOP
label_5de958:
    // 0x5de958: 0x0  nop
    ctx->pc = 0x5de958u;
    // NOP
label_5de95c:
    // 0x5de95c: 0x0  nop
    ctx->pc = 0x5de95cu;
    // NOP
label_5de960:
    // 0x5de960: 0x32444150  andi        $a0, $s2, 0x4150
    ctx->pc = 0x5de960u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16720);
label_5de964:
    // 0x5de964: 0x3153442f  andi        $s3, $t2, 0x442F
    ctx->pc = 0x5de964u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)17455);
label_5de968:
    // 0x5de968: 0x31535f4f  andi        $s3, $t2, 0x5F4F
    ctx->pc = 0x5de968u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)24399);
label_5de96c:
    // 0x5de96c: 0x5852492e  .word       0x5852492E                   # blezl       $v0, . + 4 + (0x492E << 2) # 00120000 <InstrIdType: CPU_NORMAL>
label_5de970:
    if (ctx->pc == 0x5DE970u) {
        ctx->pc = 0x5DE974u;
        goto label_5de974;
    }
    ctx->pc = 0x5DE96Cu;
    {
        const bool branch_taken_0x5de96c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5de96c) {
            ctx->pc = 0x5F0E28u;
            return;
        }
    }
    ctx->pc = 0x5DE974u;
label_5de974:
    // 0x5de974: 0x0  nop
    ctx->pc = 0x5de974u;
    // NOP
label_5de978:
    // 0x5de978: 0x5342494c  beql        $k0, $v0, . + 4 + (0x494C << 2)
label_5de97c:
    if (ctx->pc == 0x5DE97Cu) {
        ctx->pc = 0x5DE97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DE978u;
        // 0x5de97c: 0x52492e44  beql        $s2, $t1, . + 4 + (0x2E44 << 2) (Delay Slot)
        // Likely branch instruction at 0x5DE97C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DE980u;
        goto label_5de980;
    }
    ctx->pc = 0x5DE978u;
    {
        const bool branch_taken_0x5de978 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 2));
        if (branch_taken_0x5de978) {
            ctx->pc = 0x5DE97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DE978u;
            // 0x5de97c: 0x52492e44  beql        $s2, $t1, . + 4 + (0x2E44 << 2) (Delay Slot)
            // Likely branch instruction at 0x5DE97C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F0EACu;
            return;
        }
    }
    ctx->pc = 0x5DE980u;
label_5de980:
    // 0x5de980: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5de980u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_5de984:
    // 0x5de984: 0x0  nop
    ctx->pc = 0x5de984u;
    // NOP
label_5de988:
    // 0x5de988: 0x0  nop
    ctx->pc = 0x5de988u;
    // NOP
label_5de98c:
    // 0x5de98c: 0x0  nop
    ctx->pc = 0x5de98cu;
    // NOP
label_5de990:
    // 0x5de990: 0x454c4552  .word       0x454C4552                   # INVALID     $t2, $t4, 0x4552 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5de990u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x12 at 0x5DE990 raw=0x454C4552");
label_5de994:
    // 0x5de994: 0x2f455341  sltiu       $a1, $k0, 0x5341
    ctx->pc = 0x5de994u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 26) < (uint64_t)(int64_t)(int32_t)21313) ? 1 : 0);
label_5de998:
    // 0x5de998: 0x2e415752  sltiu       $at, $s2, 0x5752
    ctx->pc = 0x5de998u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)22354) ? 1 : 0);
label_5de99c:
    // 0x5de99c: 0x585249  .word       0x00585249                   # jalr        $t2, $v0 # 00180240 <InstrIdType: CPU_SPECIAL>
label_5de9a0:
    if (ctx->pc == 0x5DE9A0u) {
        ctx->pc = 0x5DE9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DE99Cu;
        // 0x5de9a0: 0x454c4552  .word       0x454C4552                   # INVALID     $t2, $t4, 0x4552 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x12 at 0x5DE9A0 raw=0x454C4552");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DE9A4u;
        goto label_5de9a4;
    }
    ctx->pc = 0x5DE99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 10, 0x5DE9A4u);
        ctx->pc = 0x5DE9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DE99Cu;
        // 0x5de9a0: 0x454c4552  .word       0x454C4552                   # INVALID     $t2, $t4, 0x4552 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x12 at 0x5DE9A0 raw=0x454C4552");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5DE99Cu, 0x5DE9A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x5DE9A4u;
label_5de9a4:
    // 0x5de9a4: 0x2f455341  sltiu       $a1, $k0, 0x5341
    ctx->pc = 0x5de9a4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 26) < (uint64_t)(int64_t)(int32_t)21313) ? 1 : 0);
label_5de9a8:
    // 0x5de9a8: 0x53465452  beql        $k0, $a2, . + 4 + (0x5452 << 2)
label_5de9ac:
    if (ctx->pc == 0x5DE9ACu) {
        ctx->pc = 0x5DE9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DE9A8u;
        // 0x5de9ac: 0x504f4953  beql        $v0, $t7, . + 4 + (0x4953 << 2) (Delay Slot)
        // Likely branch instruction at 0x5DE9AC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DE9B0u;
        goto label_5de9b0;
    }
    ctx->pc = 0x5DE9A8u;
    {
        const bool branch_taken_0x5de9a8 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 6));
        if (branch_taken_0x5de9a8) {
            ctx->pc = 0x5DE9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DE9A8u;
            // 0x5de9ac: 0x504f4953  beql        $v0, $t7, . + 4 + (0x4953 << 2) (Delay Slot)
            // Likely branch instruction at 0x5DE9AC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F3AF4u;
            return;
        }
    }
    ctx->pc = 0x5DE9B0u;
label_5de9b0:
    // 0x5de9b0: 0x5852492e  .word       0x5852492E                   # blezl       $v0, . + 4 + (0x492E << 2) # 00120000 <InstrIdType: CPU_NORMAL>
label_5de9b4:
    if (ctx->pc == 0x5DE9B4u) {
        ctx->pc = 0x5DE9B8u;
        goto label_5de9b8;
    }
    ctx->pc = 0x5DE9B0u;
    {
        const bool branch_taken_0x5de9b0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5de9b0) {
            ctx->pc = 0x5F0E6Cu;
            return;
        }
    }
    ctx->pc = 0x5DE9B8u;
label_5de9b8:
    // 0x5de9b8: 0x0  nop
    ctx->pc = 0x5de9b8u;
    // NOP
label_5de9bc:
    // 0x5de9bc: 0x0  nop
    ctx->pc = 0x5de9bcu;
    // NOP
label_5de9c0:
    // 0x5de9c0: 0x48637464  .word       0x48637464                   # INVALID     $v1, $v1, 0x7464 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5de9c0u;
    throw std::runtime_error("Unhandled COP2 format: 0x3 at 0x5DE9C0 raw=0x48637464");
label_5de9c4:
    // 0x5de9c4: 0x5f74736f  .word       0x5F74736F                   # bgtzl       $k1, . + 4 + (0x736F << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_5de9c8:
    if (ctx->pc == 0x5DE9C8u) {
        ctx->pc = 0x5DE9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DE9C4u;
        // 0x5de9c8: 0x2e325350  sltiu       $s2, $s1, 0x5350 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)21328) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DE9CCu;
        goto label_5de9cc;
    }
    ctx->pc = 0x5DE9C4u;
    {
        const bool branch_taken_0x5de9c4 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x5de9c4) {
            ctx->pc = 0x5DE9C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DE9C4u;
            // 0x5de9c8: 0x2e325350  sltiu       $s2, $s1, 0x5350 (Delay Slot)
            SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)21328) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FB784u;
            return;
        }
    }
    ctx->pc = 0x5DE9CCu;
label_5de9cc:
    // 0x5de9cc: 0x707063  .word       0x00707063                   # subu        $t6, $v1, $s0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5de9ccu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_5de9d0:
    // 0x5de9d0: 0x74655273  .word       0x74655273                   # INVALID     $v1, $a1, 0x5273 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de9d0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE9D0 raw=0x74655273");
label_5de9d4:
    // 0x5de9d4: 0x65646f43  daddiu      $a0, $t3, 0x6F43
    ctx->pc = 0x5de9d4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28483);
label_5de9d8:
    // 0x5de9d8: 0x203d3d20  addi        $sp, $at, 0x3D20
    ctx->pc = 0x5de9d8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)15648, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_5de9dc:
    // 0x5de9dc: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x5de9dcu;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5de9e0:
    // 0x5de9e0: 0x6c696146  ldr         $t1, 0x6146($v1)
    ctx->pc = 0x5de9e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24902); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5de9e4:
    // 0x5de9e4: 0x74206465  .word       0x74206465                   # INVALID     $at, $zero, 0x6465 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de9e4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE9E4 raw=0x74206465");
label_5de9e8:
    // 0x5de9e8: 0x6f6c206f  ldr         $t4, 0x206F($k1)
    ctx->pc = 0x5de9e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_5de9ec:
    // 0x5de9ec: 0x52206461  beql        $s1, $zero, . + 4 + (0x6461 << 2)
label_5de9f0:
    if (ctx->pc == 0x5DE9F0u) {
        ctx->pc = 0x5DE9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DE9ECu;
        // 0x5de9f0: 0x54522057  bnel        $v0, $s2, . + 4 + (0x2057 << 2) (Delay Slot)
        // Likely branch instruction at 0x5DE9F0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DE9F4u;
        goto label_5de9f4;
    }
    ctx->pc = 0x5DE9ECu;
    {
        const bool branch_taken_0x5de9ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x5de9ec) {
            ctx->pc = 0x5DE9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DE9ECu;
            // 0x5de9f0: 0x54522057  bnel        $v0, $s2, . + 4 + (0x2057 << 2) (Delay Slot)
            // Likely branch instruction at 0x5DE9F0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F7B74u;
            return;
        }
    }
    ctx->pc = 0x5DE9F4u;
label_5de9f4:
    // 0x5de9f4: 0x49205346  .word       0x49205346                   # INVALID     $t1, $zero, 0x5346 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5de9f4u;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x5DE9F4 raw=0x49205346");
label_5de9f8:
    // 0x5de9f8: 0x5852  .word       0x00005852                   # mflo        $t3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5de9f8u;
    SET_GPR_U64(ctx, 11, ctx->lo);
label_5de9fc:
    // 0x5de9fc: 0x0  nop
    ctx->pc = 0x5de9fcu;
    // NOP
label_5dea00:
    // 0x5dea00: 0x746e6144  .word       0x746E6144                   # INVALID     $v1, $t6, 0x6144 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dea00u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DEA00 raw=0x746E6144");
label_5dea04:
    // 0x5dea04: 0x3a207365  xori        $zero, $s1, 0x7365
    ctx->pc = 0x5dea04u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)29541);
label_5dea08:
    // 0x5dea08: 0x504f4920  beql        $v0, $t7, . + 4 + (0x4920 << 2)
label_5dea0c:
    if (ctx->pc == 0x5DEA0Cu) {
        ctx->pc = 0x5DEA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DEA08u;
        // 0x5dea0c: 0x646f6d20  daddiu      $t7, $v1, 0x6D20 (Delay Slot)
        SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27936);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DEA10u;
        goto label_5dea10;
    }
    ctx->pc = 0x5DEA08u;
    {
        const bool branch_taken_0x5dea08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        if (branch_taken_0x5dea08) {
            ctx->pc = 0x5DEA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DEA08u;
            // 0x5dea0c: 0x646f6d20  daddiu      $t7, $v1, 0x6D20 (Delay Slot)
            SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27936);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F0E8Cu;
            return;
        }
    }
    ctx->pc = 0x5DEA10u;
label_5dea10:
    // 0x5dea10: 0x73656c75  .word       0x73656C75                   # INVALID     $k1, $a1, 0x6C75 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dea10u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x5DEA10 raw=0x73656C75");
label_5dea14:
    // 0x5dea14: 0x616f6c20  daddi       $t7, $t3, 0x6C20
    ctx->pc = 0x5dea14u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27680; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_5dea18:
    // 0x5dea18: 0x676e6964  daddiu      $t6, $k1, 0x6964
    ctx->pc = 0x5dea18u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26980);
label_5dea1c:
    // 0x5dea1c: 0x44203a20  .word       0x44203A20                   # dmfc1       $zero, $f7 # 00000220 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5dea1cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x20 at 0x5DEA1C raw=0x44203A20");
label_5dea20:
    // 0x5dea20: 0x2e656e6f  sltiu       $a1, $s3, 0x6E6F
    ctx->pc = 0x5dea20u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)28271) ? 1 : 0);
label_5dea24:
    // 0x5dea24: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5dea24u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_5dea28:
    // 0x5dea28: 0x0  nop
    ctx->pc = 0x5dea28u;
    // NOP
label_5dea2c:
    // 0x5dea2c: 0x0  nop
    ctx->pc = 0x5dea2cu;
    // NOP
label_5dea30:
    // 0x5dea30: 0x41637464  .word       0x41637464                   # INVALID     $t3, $v1, 0x7464 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5dea30u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x5DEA30 raw=0x41637464");
label_5dea34:
    // 0x5dea34: 0x6f697463  ldr         $t1, 0x7463($k1)
    ctx->pc = 0x5dea34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29795); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5dea38:
    // 0x5dea38: 0x70614d6e  .word       0x70614D6E                   # INVALID     $v1, $at, 0x4D6E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dea38u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DEA38 raw=0x70614D6E");
label_5dea3c:
    // 0x5dea3c: 0x7070632e  .word       0x7070632E                   # INVALID     $v1, $s0, 0x632E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dea3cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DEA3C raw=0x7070632E");
label_5dea40:
    // 0x5dea40: 0x0  nop
    ctx->pc = 0x5dea40u;
    // NOP
label_5dea44:
    // 0x5dea44: 0x0  nop
    ctx->pc = 0x5dea44u;
    // NOP
label_5dea48:
    // 0x5dea48: 0x6f50755f  ldr         $s0, 0x755F($k0)
    ctx->pc = 0x5dea48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 30047); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_5dea4c:
    // 0x5dea4c: 0x3c207472  .word       0x3C207472                   # lui         $zero, 0x7472 # 00200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dea4cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)29810 << 16));
label_5dea50:
    // 0x5dea50: 0x3420  .word       0x00003420                   # add         $a2, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dea50u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_5dea54:
    // 0x5dea54: 0x0  nop
    ctx->pc = 0x5dea54u;
    // NOP
label_5dea58:
    // 0x5dea58: 0x0  nop
    ctx->pc = 0x5dea58u;
    // NOP
label_5dea5c:
    // 0x5dea5c: 0x0  nop
    ctx->pc = 0x5dea5cu;
    // NOP
label_5dea60:
    // 0x5dea60: 0x41637464  .word       0x41637464                   # INVALID     $t3, $v1, 0x7464 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5dea60u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x5DEA60 raw=0x41637464");
label_5dea64:
    // 0x5dea64: 0x6f697463  ldr         $t1, 0x7463($k1)
    ctx->pc = 0x5dea64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29795); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5dea68:
    // 0x5dea68: 0x70614d6e  .word       0x70614D6E                   # INVALID     $v1, $at, 0x4D6E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dea68u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DEA68 raw=0x70614D6E");
label_5dea6c:
    // 0x5dea6c: 0x72543a3a  .word       0x72543A3A                   # INVALID     $s2, $s4, 0x3A3A # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dea6cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x3A at 0x5DEA6C raw=0x72543A3A");
label_5dea70:
    // 0x5dea70: 0x6c736e61  ldr         $s3, 0x6E61($v1)
    ctx->pc = 0x5dea70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_5dea74:
    // 0x5dea74: 0x46657461  .word       0x46657461                   # INVALID     $s3, $a1, 0x7461 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5dea74u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x21 at 0x5DEA74 raw=0x46657461");
label_5dea78:
    // 0x5dea78: 0x436d6f72  .word       0x436D6F72                   # INVALID     $k1, $t5, 0x6F72 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5dea78u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x5DEA78 raw=0x436D6F72");
label_5dea7c:
    // 0x5dea7c: 0x72746e6f  .word       0x72746E6F                   # INVALID     $s3, $s4, 0x6E6F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dea7cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x5DEA7C raw=0x72746E6F");
label_5dea80:
    // 0x5dea80: 0x656c6c6f  daddiu      $t4, $t3, 0x6C6F
    ctx->pc = 0x5dea80u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27759);
label_5dea84:
    // 0x5dea84: 0x203a2072  addi        $k0, $at, 0x2072
    ctx->pc = 0x5dea84u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8306, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_5dea88:
    // 0x5dea88: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x5dea88u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
label_5dea8c:
    // 0x5dea8c: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x5dea8cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5dea90:
    // 0x5dea90: 0x746e6f63  .word       0x746E6F63                   # INVALID     $v1, $t6, 0x6F63 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dea90u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DEA90 raw=0x746E6F63");
label_5dea94:
    // 0x5dea94: 0x6c6c6f72  ldr         $t4, 0x6F72($v1)
    ctx->pc = 0x5dea94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28530); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_5dea98:
    // 0x5dea98: 0x70207265  .word       0x70207265                   # INVALID     $at, $zero, 0x7265 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dea98u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5DEA98 raw=0x70207265");
label_5dea9c:
    // 0x5dea9c: 0x2074726f  addi        $s4, $v1, 0x726F
    ctx->pc = 0x5dea9cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_5deaa0:
    // 0x5deaa0: 0x626d756e  daddi       $t5, $s3, 0x756E
    ctx->pc = 0x5deaa0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)30062; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_5deaa4:
    // 0x5deaa4: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5deaa4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_5deaa8:
    // 0x5deaa8: 0x0  nop
    ctx->pc = 0x5deaa8u;
    // NOP
label_5deaac:
    // 0x5deaac: 0x0  nop
    ctx->pc = 0x5deaacu;
    // NOP
label_5deab0:
    // 0x5deab0: 0x70614d70  .word       0x70614D70                   # INVALID     $v1, $at, 0x4D70 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x5deab0u;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0x15 at 0x5DEAB0 raw=0x70614D70");
label_5deab4:
    // 0x5deab4: 0x676e6970  daddiu      $t6, $k1, 0x6970
    ctx->pc = 0x5deab4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26992);
label_5deab8:
    // 0x5deab8: 0x203d2120  addi        $sp, $at, 0x2120
    ctx->pc = 0x5deab8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_5deabc:
    // 0x5deabc: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5deabcu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DEABC raw=0x4C4C554E");
label_5deac0:
    // 0x5deac0: 0x0  nop
    ctx->pc = 0x5deac0u;
    // NOP
label_5deac4:
    // 0x5deac4: 0x0  nop
    ctx->pc = 0x5deac4u;
    // NOP
label_5deac8:
    // 0x5deac8: 0x0  nop
    ctx->pc = 0x5deac8u;
    // NOP
label_5deacc:
    // 0x5deacc: 0x0  nop
    ctx->pc = 0x5deaccu;
    // NOP
label_5dead0:
    // 0x5dead0: 0x70614d70  .word       0x70614D70                   # INVALID     $v1, $at, 0x4D70 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x5dead0u;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0x15 at 0x5DEAD0 raw=0x70614D70");
label_5dead4:
    // 0x5dead4: 0x676e6970  daddiu      $t6, $k1, 0x6970
    ctx->pc = 0x5dead4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26992);
label_5dead8:
    // 0x5dead8: 0x42753e2d  .word       0x42753E2D                   # INVALID     $s3, $s5, 0x3E2D # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5dead8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x5DEAD8 raw=0x42753E2D");
label_5deadc:
    // 0x5deadc: 0x6f747475  ldr         $s4, 0x7475($k1)
    ctx->pc = 0x5deadcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29813); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_5deae0:
    // 0x5deae0: 0x3d3c206e  .word       0x3D3C206E                   # lui         $gp, 0x206E # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5deae0u;
    SET_GPR_S32(ctx, 28, (int32_t)((uint32_t)8302 << 16));
label_5deae4:
    // 0x5deae4: 0x43544420  .word       0x43544420                   # INVALID     $k0, $s4, 0x4420 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5deae4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5DEAE4 raw=0x43544420");
label_5deae8:
    // 0x5deae8: 0x544e4f43  bnel        $v0, $t6, . + 4 + (0x4F43 << 2)
label_5deaec:
    if (ctx->pc == 0x5DEAECu) {
        ctx->pc = 0x5DEAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DEAE8u;
        // 0x5deaec: 0x4c4c4f52  .word       0x4C4C4F52                   # INVALID     $v0, $t4, 0x4F52 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DEAEC raw=0x4C4C4F52");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DEAF0u;
        goto label_5deaf0;
    }
    ctx->pc = 0x5DEAE8u;
    {
        const bool branch_taken_0x5deae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        if (branch_taken_0x5deae8) {
            ctx->pc = 0x5DEAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DEAE8u;
            // 0x5deaec: 0x4c4c4f52  .word       0x4C4C4F52                   # INVALID     $v0, $t4, 0x4F52 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DEAEC raw=0x4C4C4F52");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F27F8u;
            return;
        }
    }
    ctx->pc = 0x5DEAF0u;
label_5deaf0:
    // 0x5deaf0: 0x4e5f5245  .word       0x4E5F5245                   # INVALID     $s2, $ra, 0x5245 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5deaf0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DEAF0 raw=0x4E5F5245");
label_5deaf4:
    // 0x5deaf4: 0x425f4d55  .word       0x425F4D55                   # INVALID     $s2, $ra, 0x4D55 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5deaf4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x5DEAF4 raw=0x425F4D55");
label_5deaf8:
    // 0x5deaf8: 0x4f545455  .word       0x4F545455                   # INVALID     $k0, $s4, 0x5455 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5deaf8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DEAF8 raw=0x4F545455");
label_5deafc:
    // 0x5deafc: 0x534e  .word       0x0000534E                   # INVALID     $zero, $zero, 0x534E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5deafcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x5DEAFC raw=0x0000534E");
label_5deb00:
    // 0x5deb00: 0x43637464  .word       0x43637464                   # INVALID     $k1, $v1, 0x7464 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5deb00u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x5DEB00 raw=0x43637464");
label_5deb04:
    // 0x5deb04: 0x72746e6f  .word       0x72746E6F                   # INVALID     $s3, $s4, 0x6E6F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5deb04u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x5DEB04 raw=0x72746E6F");
label_5deb08:
    // 0x5deb08: 0x656c6c6f  daddiu      $t4, $t3, 0x6C6F
    ctx->pc = 0x5deb08u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27759);
label_5deb0c:
    // 0x5deb0c: 0x6f435f72  ldr         $v1, 0x5F72($k0)
    ctx->pc = 0x5deb0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 24434); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_5deb10:
    // 0x5deb10: 0x6e6f6d6d  ldr         $t7, 0x6D6D($s3)
    ctx->pc = 0x5deb10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28013); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_5deb14:
    // 0x5deb14: 0x7070632e  .word       0x7070632E                   # INVALID     $v1, $s0, 0x632E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5deb14u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DEB14 raw=0x7070632E");
label_5deb18:
    // 0x5deb18: 0x0  nop
    ctx->pc = 0x5deb18u;
    // NOP
label_5deb1c:
    // 0x5deb1c: 0x0  nop
    ctx->pc = 0x5deb1cu;
    // NOP
label_5deb20:
    // 0x5deb20: 0x726f705f  .word       0x726F705F                   # INVALID     $s3, $t7, 0x705F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5deb20u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x5DEB20 raw=0x726F705F");
label_5deb24:
    // 0x5deb24: 0x756e5f74  .word       0x756E5F74                   # INVALID     $t3, $t6, 0x5F74 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5deb24u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DEB24 raw=0x756E5F74");
label_5deb28:
    // 0x5deb28: 0x203c206d  addi        $gp, $at, 0x206D
    ctx->pc = 0x5deb28u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8301, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 28, (int32_t)tmp); }
label_5deb2c:
    // 0x5deb2c: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x5deb2cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5deb30:
    // 0x5deb30: 0x7475625f  .word       0x7475625F                   # INVALID     $v1, $s5, 0x625F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5deb30u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DEB30 raw=0x7475625F");
label_5deb34:
    // 0x5deb34: 0x5f6e6f74  .word       0x5F6E6F74                   # bgtzl       $k1, . + 4 + (0x6F74 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_5deb38:
    if (ctx->pc == 0x5DEB38u) {
        ctx->pc = 0x5DEB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DEB34u;
        // 0x5deb38: 0x3c206469  .word       0x3C206469                   # lui         $zero, 0x6469 # 00200000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)25705 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DEB3Cu;
        goto label_5deb3c;
    }
    ctx->pc = 0x5DEB34u;
    {
        const bool branch_taken_0x5deb34 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x5deb34) {
            ctx->pc = 0x5DEB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DEB34u;
            // 0x5deb38: 0x3c206469  .word       0x3C206469                   # lui         $zero, 0x6469 # 00200000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)25705 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FA908u;
            return;
        }
    }
    ctx->pc = 0x5DEB3Cu;
label_5deb3c:
    // 0x5deb3c: 0x5444203d  bnel        $v0, $a0, . + 4 + (0x203D << 2)
label_5deb40:
    if (ctx->pc == 0x5DEB40u) {
        ctx->pc = 0x5DEB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DEB3Cu;
        // 0x5deb40: 0x4e4f4343  .word       0x4E4F4343                   # INVALID     $s2, $t7, 0x4343 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DEB40 raw=0x4E4F4343");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DEB44u;
        goto label_5deb44;
    }
    ctx->pc = 0x5DEB3Cu;
    {
        const bool branch_taken_0x5deb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x5deb3c) {
            ctx->pc = 0x5DEB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DEB3Cu;
            // 0x5deb40: 0x4e4f4343  .word       0x4E4F4343                   # INVALID     $s2, $t7, 0x4343 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DEB40 raw=0x4E4F4343");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5E6C34u;
            return;
        }
    }
    ctx->pc = 0x5DEB44u;
label_5deb44:
    // 0x5deb44: 0x4c4f5254  .word       0x4C4F5254                   # INVALID     $v0, $t7, 0x5254 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5deb44u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DEB44 raw=0x4C4F5254");
label_5deb48:
    // 0x5deb48: 0x5f52454c  .word       0x5F52454C                   # bgtzl       $k0, . + 4 + (0x454C << 2) # 00120000 <InstrIdType: CPU_NORMAL>
label_5deb4c:
    if (ctx->pc == 0x5DEB4Cu) {
        ctx->pc = 0x5DEB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DEB48u;
        // 0x5deb4c: 0x5f4d554e  .word       0x5F4D554E                   # bgtzl       $k0, . + 4 + (0x554E << 2) # 000D0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x5DEB4C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DEB50u;
        goto label_5deb50;
    }
    ctx->pc = 0x5DEB48u;
    {
        const bool branch_taken_0x5deb48 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5deb48) {
            ctx->pc = 0x5DEB4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DEB48u;
            // 0x5deb4c: 0x5f4d554e  .word       0x5F4D554E                   # bgtzl       $k0, . + 4 + (0x554E << 2) # 000D0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x5DEB4C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F007Cu;
            return;
        }
    }
    ctx->pc = 0x5DEB50u;
label_5deb50:
    // 0x5deb50: 0x54545542  bnel        $v0, $s4, . + 4 + (0x5542 << 2)
label_5deb54:
    if (ctx->pc == 0x5DEB54u) {
        ctx->pc = 0x5DEB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DEB50u;
        // 0x5deb54: 0x534e4f  .word       0x00534E4F                   # sync.p # 00534800 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DEB58u;
        goto label_5deb58;
    }
    ctx->pc = 0x5DEB50u;
    {
        const bool branch_taken_0x5deb50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x5deb50) {
            ctx->pc = 0x5DEB54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DEB50u;
            // 0x5deb54: 0x534e4f  .word       0x00534E4F                   # sync.p # 00534800 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            // SYNC instruction - memory barrier
            // In recompiled code, we don't need explicit memory barriers
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F405Cu;
            return;
        }
    }
    ctx->pc = 0x5DEB58u;
label_5deb58:
    // 0x5deb58: 0x0  nop
    ctx->pc = 0x5deb58u;
    // NOP
label_5deb5c:
    // 0x5deb5c: 0x0  nop
    ctx->pc = 0x5deb5cu;
    // NOP
label_5deb60:
    // 0x5deb60: 0x43637464  .word       0x43637464                   # INVALID     $k1, $v1, 0x7464 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5deb60u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x5DEB60 raw=0x43637464");
label_5deb64:
    // 0x5deb64: 0x72746e6f  .word       0x72746E6F                   # INVALID     $s3, $s4, 0x6E6F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5deb64u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x5DEB64 raw=0x72746E6F");
label_5deb68:
    // 0x5deb68: 0x656c6c6f  daddiu      $t4, $t3, 0x6C6F
    ctx->pc = 0x5deb68u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27759);
label_5deb6c:
    // 0x5deb6c: 0x53505f72  beql        $k0, $s0, . + 4 + (0x5F72 << 2)
label_5deb70:
    if (ctx->pc == 0x5DEB70u) {
        ctx->pc = 0x5DEB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DEB6Cu;
        // 0x5deb70: 0x70632e32  .word       0x70632E32                   # INVALID     $v1, $v1, 0x2E32 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
        throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x5DEB70 raw=0x70632E32");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DEB74u;
        goto label_5deb74;
    }
    ctx->pc = 0x5DEB6Cu;
    {
        const bool branch_taken_0x5deb6c = (GPR_U64(ctx, 26) == GPR_U64(ctx, 16));
        if (branch_taken_0x5deb6c) {
            ctx->pc = 0x5DEB70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DEB6Cu;
            // 0x5deb70: 0x70632e32  .word       0x70632E32                   # INVALID     $v1, $v1, 0x2E32 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x5DEB70 raw=0x70632E32");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F6938u;
            return;
        }
    }
    ctx->pc = 0x5DEB74u;
label_5deb74:
    // 0x5deb74: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x5deb74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5deb78:
    // 0x5deb78: 0x0  nop
    ctx->pc = 0x5deb78u;
    // NOP
label_5deb7c:
    // 0x5deb7c: 0x0  nop
    ctx->pc = 0x5deb7cu;
    // NOP
label_5deb80:
    // 0x5deb80: 0x48637464  .word       0x48637464                   # INVALID     $v1, $v1, 0x7464 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5deb80u;
    throw std::runtime_error("Unhandled COP2 format: 0x3 at 0x5DEB80 raw=0x48637464");
label_5deb84:
    // 0x5deb84: 0x3a74736f  xori        $s4, $s3, 0x736F
    ctx->pc = 0x5deb84u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)29551);
label_5deb88:
    // 0x5deb88: 0x4973493a  .word       0x4973493A                   # INVALID     $t3, $s3, 0x493A # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5deb88u;
    throw std::runtime_error("Unhandled COP2 format: 0xB at 0x5DEB88 raw=0x4973493A");
label_5deb8c:
    // 0x5deb8c: 0x6974696e  ldl         $s4, 0x696E($t3)
    ctx->pc = 0x5deb8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26990); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5deb90:
    // 0x5deb90: 0x73696c61  .word       0x73696C61                   # maddu1      $t5, $k1, $t1 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5deb90u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 9); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_5deb94:
    // 0x5deb94: 0x29286465  slti        $t0, $t1, 0x6465
    ctx->pc = 0x5deb94u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)25701) ? 1 : 0);
label_5deb98:
    // 0x5deb98: 0x0  nop
    ctx->pc = 0x5deb98u;
    // NOP
label_5deb9c:
    // 0x5deb9c: 0x0  nop
    ctx->pc = 0x5deb9cu;
    // NOP
label_5deba0:
    // 0x5deba0: 0x43637464  .word       0x43637464                   # INVALID     $k1, $v1, 0x7464 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5deba0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x5DEBA0 raw=0x43637464");
label_5deba4:
    // 0x5deba4: 0x72746e6f  .word       0x72746E6F                   # INVALID     $s3, $s4, 0x6E6F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5deba4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x5DEBA4 raw=0x72746E6F");
label_5deba8:
    // 0x5deba8: 0x656c6c6f  daddiu      $t4, $t3, 0x6C6F
    ctx->pc = 0x5deba8u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27759);
label_5debac:
    // 0x5debac: 0x493a3a72  .word       0x493A3A72                   # INVALID     $t1, $k0, 0x3A72 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5debacu;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x5DEBAC raw=0x493A3A72");
label_5debb0:
    // 0x5debb0: 0x6974696e  ldl         $s4, 0x696E($t3)
    ctx->pc = 0x5debb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26990); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5debb4:
    // 0x5debb4: 0x73696c61  .word       0x73696C61                   # maddu1      $t5, $k1, $t1 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5debb4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 9); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_5debb8:
    // 0x5debb8: 0x203a2065  addi        $k0, $at, 0x2065
    ctx->pc = 0x5debb8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8293, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_5debbc:
    // 0x5debbc: 0x656b616d  daddiu      $t3, $t3, 0x616D
    ctx->pc = 0x5debbcu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24941);
label_5debc0:
    // 0x5debc0: 0x72757320  .word       0x72757320                   # madd1       $t6, $s3, $s5 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5debc0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_5debc4:
    // 0x5debc4: 0x74642065  .word       0x74642065                   # INVALID     $v1, $a0, 0x2065 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5debc4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DEBC4 raw=0x74642065");
label_5debc8:
    // 0x5debc8: 0x736f4863  .word       0x736F4863                   # INVALID     $k1, $t7, 0x4863 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5debc8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x5DEBC8 raw=0x736F4863");
label_5debcc:
    // 0x5debcc: 0x61682074  daddi       $t0, $t3, 0x2074
    ctx->pc = 0x5debccu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8308; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_5debd0:
    // 0x5debd0: 0x65622073  daddiu      $v0, $t3, 0x2073
    ctx->pc = 0x5debd0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8307);
label_5debd4:
    // 0x5debd4: 0x69206e65  ldl         $zero, 0x6E65($t1)
    ctx->pc = 0x5debd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 28261); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_5debd8:
    // 0x5debd8: 0x6974696e  ldl         $s4, 0x696E($t3)
    ctx->pc = 0x5debd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26990); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5debdc:
    // 0x5debdc: 0x73696c61  .word       0x73696C61                   # maddu1      $t5, $k1, $t1 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5debdcu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 9); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_5debe0:
    // 0x5debe0: 0x62206465  daddi       $zero, $s1, 0x6465
    ctx->pc = 0x5debe0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)25701; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_5debe4:
    // 0x5debe4: 0x726f6665  .word       0x726F6665                   # INVALID     $s3, $t7, 0x6665 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5debe4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5DEBE4 raw=0x726F6665");
label_5debe8:
    // 0x5debe8: 0x61632065  daddi       $v1, $t3, 0x2065
    ctx->pc = 0x5debe8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8293; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_5debec:
    // 0x5debec: 0x6e696c6c  ldr         $t1, 0x6C6C($s3)
    ctx->pc = 0x5debecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 27756); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5debf0:
    // 0x5debf0: 0x68742067  ldl         $s4, 0x2067($v1)
    ctx->pc = 0x5debf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5debf4:
    // 0x5debf4: 0x66207369  daddiu      $zero, $s1, 0x7369
    ctx->pc = 0x5debf4u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)29545);
label_5debf8:
    // 0x5debf8: 0x74636e75  .word       0x74636E75                   # INVALID     $v1, $v1, 0x6E75 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5debf8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DEBF8 raw=0x74636E75");
label_5debfc:
    // 0x5debfc: 0x6e6f69  .word       0x006E6F69                   # mtsa        $v1 # 000E6F40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5debfcu;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
label_5dec00:
    // 0x5dec00: 0x43637464  .word       0x43637464                   # INVALID     $k1, $v1, 0x7464 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5dec00u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x5DEC00 raw=0x43637464");
label_5dec04:
    // 0x5dec04: 0x72746e6f  .word       0x72746E6F                   # INVALID     $s3, $s4, 0x6E6F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dec04u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x5DEC04 raw=0x72746E6F");
label_5dec08:
    // 0x5dec08: 0x656c6c6f  daddiu      $t4, $t3, 0x6C6F
    ctx->pc = 0x5dec08u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27759);
label_5dec0c:
    // 0x5dec0c: 0x493a3a72  .word       0x493A3A72                   # INVALID     $t1, $k0, 0x3A72 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5dec0cu;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x5DEC0C raw=0x493A3A72");
label_5dec10:
    // 0x5dec10: 0x6974696e  ldl         $s4, 0x696E($t3)
    ctx->pc = 0x5dec10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26990); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5dec14:
    // 0x5dec14: 0x73696c61  .word       0x73696C61                   # maddu1      $t5, $k1, $t1 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dec14u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 9); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_5dec18:
    // 0x5dec18: 0x2d2d2065  sltiu       $t5, $t1, 0x2065
    ctx->pc = 0x5dec18u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)8293) ? 1 : 0);
label_5dec1c:
    // 0x5dec1c: 0x4150203e  .word       0x4150203E                   # INVALID     $t2, $s0, 0x203E # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5dec1cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x5DEC1C raw=0x4150203E");
label_5dec20:
    // 0x5dec20: 0x49203244  .word       0x49203244                   # INVALID     $t1, $zero, 0x3244 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5dec20u;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x5DEC20 raw=0x49203244");
label_5dec24:
    // 0x5dec24: 0x2074696e  addi        $s4, $v1, 0x696E
    ctx->pc = 0x5dec24u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26990, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_5dec28:
    // 0x5dec28: 0x6c696166  ldr         $t1, 0x6166($v1)
    ctx->pc = 0x5dec28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24934); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5dec2c:
    // 0x5dec2c: 0xa6465  .word       0x000A6465                   # or          $t4, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dec2cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
label_5dec30:
    // 0x5dec30: 0x50637464  beql        $v1, $v1, . + 4 + (0x7464 << 2)
label_5dec34:
    if (ctx->pc == 0x5DEC34u) {
        ctx->pc = 0x5DEC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DEC30u;
        // 0x5dec34: 0x69466b61  ldl         $a2, 0x6B61($t2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 10), 27489); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DEC38u;
        goto label_5dec38;
    }
    ctx->pc = 0x5DEC30u;
    {
        const bool branch_taken_0x5dec30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 3));
        if (branch_taken_0x5dec30) {
            ctx->pc = 0x5DEC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DEC30u;
            // 0x5dec34: 0x69466b61  ldl         $a2, 0x6B61($t2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 10), 27489); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FBDC4u;
            return;
        }
    }
    ctx->pc = 0x5DEC38u;
label_5dec38:
    // 0x5dec38: 0x632e656c  daddi       $t6, $t9, 0x656C
    ctx->pc = 0x5dec38u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)25964; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_5dec3c:
    // 0x5dec3c: 0x7070  tge         $zero, $zero, 449
    ctx->pc = 0x5dec3cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dec40:
    // 0x5dec40: 0x6f207325  ldr         $zero, 0x7325($t9)
    ctx->pc = 0x5dec40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 29477); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_5dec44:
    // 0x5dec44: 0x656e6570  daddiu      $t6, $t3, 0x6570
    ctx->pc = 0x5dec44u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25968);
label_5dec48:
    // 0x5dec48: 0x6e692064  ldr         $t1, 0x2064($s3)
    ctx->pc = 0x5dec48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5dec4c:
    // 0x5dec4c: 0x4b415020  .word       0x4B415020                   # vaddq.xz    $vf0, $vf10, $Q # 00010000 <InstrIdType: R5900_COP2_SPECIAL1>
    ctx->pc = 0x5dec4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_5dec50:
    // 0x5dec50: 0x0  nop
    ctx->pc = 0x5dec50u;
    // NOP
label_5dec54:
    // 0x5dec54: 0x0  nop
    ctx->pc = 0x5dec54u;
    // NOP
label_5dec58:
    // 0x5dec58: 0x0  nop
    ctx->pc = 0x5dec58u;
    // NOP
label_5dec5c:
    // 0x5dec5c: 0x0  nop
    ctx->pc = 0x5dec5cu;
    // NOP
label_5dec60:
    // 0x5dec60: 0x20434f54  addi        $v1, $v0, 0x4F54
    ctx->pc = 0x5dec60u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)20308, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_5dec64:
    // 0x5dec64: 0x746e6f63  .word       0x746E6F63                   # INVALID     $v1, $t6, 0x6F63 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dec64u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DEC64 raw=0x746E6F63");
label_5dec68:
    // 0x5dec68: 0x736e6961  .word       0x736E6961                   # maddu1      $t5, $k1, $t6 # 00000140 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dec68u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 14); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_5dec6c:
    // 0x5dec6c: 0x20642520  addi        $a0, $v1, 0x2520
    ctx->pc = 0x5dec6cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)9504, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5dec70:
    // 0x5dec70: 0x656c6966  daddiu      $t4, $t3, 0x6966
    ctx->pc = 0x5dec70u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26982);
label_5dec74:
    // 0x5dec74: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x5dec74u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5dec78:
    // 0x5dec78: 0x0  nop
    ctx->pc = 0x5dec78u;
    // NOP
label_5dec7c:
    // 0x5dec7c: 0x0  nop
    ctx->pc = 0x5dec7cu;
    // NOP
label_5dec80:
    // 0x5dec80: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x5dec80u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_5dec84:
    // 0x5dec84: 0x6b61702e  ldl         $at, 0x702E($k1)
    ctx->pc = 0x5dec84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28718); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_5dec88:
    // 0x5dec88: 0x0  nop
    ctx->pc = 0x5dec88u;
    // NOP
label_5dec8c:
    // 0x5dec8c: 0x0  nop
    ctx->pc = 0x5dec8cu;
    // NOP
label_5dec90:
    // 0x5dec90: 0x0  nop
    ctx->pc = 0x5dec90u;
    // NOP
label_5dec94:
    // 0x5dec94: 0x0  nop
    ctx->pc = 0x5dec94u;
    // NOP
label_5dec98:
    // 0x5dec98: 0x0  nop
    ctx->pc = 0x5dec98u;
    // NOP
label_5dec9c:
    // 0x5dec9c: 0x0  nop
    ctx->pc = 0x5dec9cu;
    // NOP
label_5deca0:
    // 0x5deca0: 0x6d696e61  ldr         $t1, 0x6E61($t3)
    ctx->pc = 0x5deca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5deca4:
    // 0x5deca4: 0x6b61702e  ldl         $at, 0x702E($k1)
    ctx->pc = 0x5deca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28718); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_5deca8:
    // 0x5deca8: 0x0  nop
    ctx->pc = 0x5deca8u;
    // NOP
label_5decac:
    // 0x5decac: 0x0  nop
    ctx->pc = 0x5decacu;
    // NOP
label_5decb0:
    // 0x5decb0: 0x0  nop
    ctx->pc = 0x5decb0u;
    // NOP
label_5decb4:
    // 0x5decb4: 0x0  nop
    ctx->pc = 0x5decb4u;
    // NOP
label_5decb8:
    // 0x5decb8: 0x0  nop
    ctx->pc = 0x5decb8u;
    // NOP
label_5decbc:
    // 0x5decbc: 0x0  nop
    ctx->pc = 0x5decbcu;
    // NOP
label_5decc0:
    // 0x5decc0: 0x63696f76  daddi       $t1, $k1, 0x6F76
    ctx->pc = 0x5decc0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)28534; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_5decc4:
    // 0x5decc4: 0x61702e65  daddi       $s0, $t3, 0x2E65
    ctx->pc = 0x5decc4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)11877; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_5decc8:
    // 0x5decc8: 0x6b  .word       0x0000006B                   # sltu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5decc8u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_5deccc:
    // 0x5deccc: 0x0  nop
    ctx->pc = 0x5decccu;
    // NOP
label_5decd0:
    // 0x5decd0: 0x0  nop
    ctx->pc = 0x5decd0u;
    // NOP
label_5decd4:
    // 0x5decd4: 0x0  nop
    ctx->pc = 0x5decd4u;
    // NOP
label_5decd8:
    // 0x5decd8: 0x0  nop
    ctx->pc = 0x5decd8u;
    // NOP
label_5decdc:
    // 0x5decdc: 0x0  nop
    ctx->pc = 0x5decdcu;
    // NOP
label_5dece0:
    // 0x5dece0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x5dece0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
label_5dece4:
    // 0x5dece4: 0x0  nop
    ctx->pc = 0x5dece4u;
    // NOP
label_5dece8:
    // 0x5dece8: 0x6b700000  ldl         $s0, 0x0($k1)
    ctx->pc = 0x5dece8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_5decec:
    // 0x5decec: 0x3a31  tgeu        $zero, $zero, 232
    ctx->pc = 0x5dececu;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5decf0:
    // 0x5decf0: 0x0  nop
    ctx->pc = 0x5decf0u;
    // NOP
label_5decf4:
    // 0x5decf4: 0x3a326b70  xori        $s2, $s1, 0x6B70
    ctx->pc = 0x5decf4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)27504);
label_5decf8:
    // 0x5decf8: 0x0  nop
    ctx->pc = 0x5decf8u;
    // NOP
label_5decfc:
    // 0x5decfc: 0x0  nop
    ctx->pc = 0x5decfcu;
    // NOP
label_5ded00:
    // 0x5ded00: 0x73666b70  .word       0x73666B70                   # INVALID     $k1, $a2, 0x6B70 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x5ded00u;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0xD at 0x5DED00 raw=0x73666B70");
label_5ded04:
    // 0x5ded04: 0x0  nop
    ctx->pc = 0x5ded04u;
    // NOP
label_5ded08:
    // 0x5ded08: 0x6b700000  ldl         $s0, 0x0($k1)
    ctx->pc = 0x5ded08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_5ded0c:
    // 0x5ded0c: 0x3166  .word       0x00003166                   # xor         $a2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5ded0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_5ded10:
    // 0x5ded10: 0x0  nop
    ctx->pc = 0x5ded10u;
    // NOP
label_5ded14:
    // 0x5ded14: 0x32666b70  andi        $a2, $s3, 0x6B70
    ctx->pc = 0x5ded14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)27504);
label_5ded18:
    // 0x5ded18: 0x0  nop
    ctx->pc = 0x5ded18u;
    // NOP
label_5ded1c:
    // 0x5ded1c: 0x0  nop
    ctx->pc = 0x5ded1cu;
    // NOP
label_5ded20:
    // 0x5ded20: 0x4d637464  .word       0x4D637464                   # INVALID     $t3, $v1, 0x7464 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5ded20u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DED20 raw=0x4D637464");
label_5ded24:
    // 0x5ded24: 0x726f6d65  .word       0x726F6D65                   # INVALID     $s3, $t7, 0x6D65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5ded24u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5DED24 raw=0x726F6D65");
label_5ded28:
    // 0x5ded28: 0x72614379  .word       0x72614379                   # INVALID     $s3, $at, 0x4379 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5ded28u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x39 at 0x5DED28 raw=0x72614379");
label_5ded2c:
    // 0x5ded2c: 0x53505f64  beql        $k0, $s0, . + 4 + (0x5F64 << 2)
label_5ded30:
    if (ctx->pc == 0x5DED30u) {
        ctx->pc = 0x5DED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DED2Cu;
        // 0x5ded30: 0x70632e32  .word       0x70632E32                   # INVALID     $v1, $v1, 0x2E32 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
        throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x5DED30 raw=0x70632E32");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DED34u;
        goto label_5ded34;
    }
    ctx->pc = 0x5DED2Cu;
    {
        const bool branch_taken_0x5ded2c = (GPR_U64(ctx, 26) == GPR_U64(ctx, 16));
        if (branch_taken_0x5ded2c) {
            ctx->pc = 0x5DED30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DED2Cu;
            // 0x5ded30: 0x70632e32  .word       0x70632E32                   # INVALID     $v1, $v1, 0x2E32 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x5DED30 raw=0x70632E32");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F6AC0u;
            return;
        }
    }
    ctx->pc = 0x5DED34u;
label_5ded34:
    // 0x5ded34: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x5ded34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5ded38:
    // 0x5ded38: 0x0  nop
    ctx->pc = 0x5ded38u;
    // NOP
label_5ded3c:
    // 0x5ded3c: 0x0  nop
    ctx->pc = 0x5ded3cu;
    // NOP
label_5ded40:
    // 0x5ded40: 0x6e754670  ldr         $s5, 0x4670($s3)
    ctx->pc = 0x5ded40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 18032); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_5ded44:
    // 0x5ded44: 0x6f697463  ldr         $t1, 0x7463($k1)
    ctx->pc = 0x5ded44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29795); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5ded48:
    // 0x5ded48: 0x7365526e  .word       0x7365526E                   # INVALID     $k1, $a1, 0x526E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5ded48u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DED48 raw=0x7365526E");
label_5ded4c:
    // 0x5ded4c: 0x746c75  .word       0x00746C75                   # INVALID     $v1, $s4, 0x6C75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5ded4cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x5DED4C raw=0x00746C75");
label_5ded50:
    // 0x5ded50: 0x6c6c754e  ldr         $t4, 0x754E($v1)
    ctx->pc = 0x5ded50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30030); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_5ded54:
    // 0x5ded54: 0x696f7020  ldl         $t7, 0x7020($t3)
    ctx->pc = 0x5ded54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28704); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
label_5ded58:
    // 0x5ded58: 0x7265746e  .word       0x7265746E                   # INVALID     $s3, $a1, 0x746E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5ded58u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DED58 raw=0x7265746E");
label_5ded5c:
    // 0x5ded5c: 0x0  nop
    ctx->pc = 0x5ded5cu;
    // NOP
label_5ded60:
    // 0x5ded60: 0x414d434d  .word       0x414D434D                   # INVALID     $t2, $t5, 0x434D # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5ded60u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x5DED60 raw=0x414D434D");
label_5ded64:
    // 0x5ded64: 0x52492e4e  beql        $s2, $t1, . + 4 + (0x2E4E << 2)
label_5ded68:
    if (ctx->pc == 0x5DED68u) {
        ctx->pc = 0x5DED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DED64u;
        // 0x5ded68: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DED6Cu;
        goto label_5ded6c;
    }
    ctx->pc = 0x5DED64u;
    {
        const bool branch_taken_0x5ded64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 9));
        if (branch_taken_0x5ded64) {
            ctx->pc = 0x5DED68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DED64u;
            // 0x5ded68: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL> (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5EA6A0u;
            return;
        }
    }
    ctx->pc = 0x5DED6Cu;
label_5ded6c:
    // 0x5ded6c: 0x0  nop
    ctx->pc = 0x5ded6cu;
    // NOP
label_5ded70:
    // 0x5ded70: 0x4553434d  .word       0x4553434D                   # INVALID     $t2, $s3, 0x434D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5ded70u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xD at 0x5DED70 raw=0x4553434D");
label_5ded74:
    // 0x5ded74: 0x492e5652  .word       0x492E5652                   # INVALID     $t1, $t6, 0x5652 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5ded74u;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x5DED74 raw=0x492E5652");
label_5ded78:
    // 0x5ded78: 0x5852  .word       0x00005852                   # mflo        $t3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5ded78u;
    SET_GPR_U64(ctx, 11, ctx->lo);
label_5ded7c:
    // 0x5ded7c: 0x0  nop
    ctx->pc = 0x5ded7cu;
    // NOP
label_5ded80:
    // 0x5ded80: 0x5ded60  .word       0x005DED60                   # add         $sp, $v0, $sp # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5ded80u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 29);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_5ded84:
    // 0x5ded84: 0x5ded70  tge         $v0, $sp, 949
    ctx->pc = 0x5ded84u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_5ded88:
    // 0x5ded88: 0x60a108  .word       0x0060A108                   # jr          $v1 # 0000A100 <InstrIdType: CPU_SPECIAL>
label_5ded8c:
    if (ctx->pc == 0x5DED8Cu) {
        ctx->pc = 0x5DED90u;
        goto label_fallthrough_0x5ded88;
    }
    ctx->pc = 0x5DED88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5DED88u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x5ded88:
    ctx->pc = 0x5DED90u;
}
