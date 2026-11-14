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

// Function: sub_002892E0
// Address: 0x2892e0 - 0x28a730
void sub_002892E0_0x2892e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002892E0_0x2892e0");
#endif

    switch (ctx->pc) {
        case 0x2892e0u: goto label_2892e0;
        case 0x2892e4u: goto label_2892e4;
        case 0x2892e8u: goto label_2892e8;
        case 0x2892ecu: goto label_2892ec;
        case 0x2892f0u: goto label_2892f0;
        case 0x2892f4u: goto label_2892f4;
        case 0x2892f8u: goto label_2892f8;
        case 0x2892fcu: goto label_2892fc;
        case 0x289300u: goto label_289300;
        case 0x289304u: goto label_289304;
        case 0x289308u: goto label_289308;
        case 0x28930cu: goto label_28930c;
        case 0x289310u: goto label_289310;
        case 0x289314u: goto label_289314;
        case 0x289318u: goto label_289318;
        case 0x28931cu: goto label_28931c;
        case 0x289320u: goto label_289320;
        case 0x289324u: goto label_289324;
        case 0x289328u: goto label_289328;
        case 0x28932cu: goto label_28932c;
        case 0x289330u: goto label_289330;
        case 0x289334u: goto label_289334;
        case 0x289338u: goto label_289338;
        case 0x28933cu: goto label_28933c;
        case 0x289340u: goto label_289340;
        case 0x289344u: goto label_289344;
        case 0x289348u: goto label_289348;
        case 0x28934cu: goto label_28934c;
        case 0x289350u: goto label_289350;
        case 0x289354u: goto label_289354;
        case 0x289358u: goto label_289358;
        case 0x28935cu: goto label_28935c;
        case 0x289360u: goto label_289360;
        case 0x289364u: goto label_289364;
        case 0x289368u: goto label_289368;
        case 0x28936cu: goto label_28936c;
        case 0x289370u: goto label_289370;
        case 0x289374u: goto label_289374;
        case 0x289378u: goto label_289378;
        case 0x28937cu: goto label_28937c;
        case 0x289380u: goto label_289380;
        case 0x289384u: goto label_289384;
        case 0x289388u: goto label_289388;
        case 0x28938cu: goto label_28938c;
        case 0x289390u: goto label_289390;
        case 0x289394u: goto label_289394;
        case 0x289398u: goto label_289398;
        case 0x28939cu: goto label_28939c;
        case 0x2893a0u: goto label_2893a0;
        case 0x2893a4u: goto label_2893a4;
        case 0x2893a8u: goto label_2893a8;
        case 0x2893acu: goto label_2893ac;
        case 0x2893b0u: goto label_2893b0;
        case 0x2893b4u: goto label_2893b4;
        case 0x2893b8u: goto label_2893b8;
        case 0x2893bcu: goto label_2893bc;
        case 0x2893c0u: goto label_2893c0;
        case 0x2893c4u: goto label_2893c4;
        case 0x2893c8u: goto label_2893c8;
        case 0x2893ccu: goto label_2893cc;
        case 0x2893d0u: goto label_2893d0;
        case 0x2893d4u: goto label_2893d4;
        case 0x2893d8u: goto label_2893d8;
        case 0x2893dcu: goto label_2893dc;
        case 0x2893e0u: goto label_2893e0;
        case 0x2893e4u: goto label_2893e4;
        case 0x2893e8u: goto label_2893e8;
        case 0x2893ecu: goto label_2893ec;
        case 0x2893f0u: goto label_2893f0;
        case 0x2893f4u: goto label_2893f4;
        case 0x2893f8u: goto label_2893f8;
        case 0x2893fcu: goto label_2893fc;
        case 0x289400u: goto label_289400;
        case 0x289404u: goto label_289404;
        case 0x289408u: goto label_289408;
        case 0x28940cu: goto label_28940c;
        case 0x289410u: goto label_289410;
        case 0x289414u: goto label_289414;
        case 0x289418u: goto label_289418;
        case 0x28941cu: goto label_28941c;
        case 0x289420u: goto label_289420;
        case 0x289424u: goto label_289424;
        case 0x289428u: goto label_289428;
        case 0x28942cu: goto label_28942c;
        case 0x289430u: goto label_289430;
        case 0x289434u: goto label_289434;
        case 0x289438u: goto label_289438;
        case 0x28943cu: goto label_28943c;
        case 0x289440u: goto label_289440;
        case 0x289444u: goto label_289444;
        case 0x289448u: goto label_289448;
        case 0x28944cu: goto label_28944c;
        case 0x289450u: goto label_289450;
        case 0x289454u: goto label_289454;
        case 0x289458u: goto label_289458;
        case 0x28945cu: goto label_28945c;
        case 0x289460u: goto label_289460;
        case 0x289464u: goto label_289464;
        case 0x289468u: goto label_289468;
        case 0x28946cu: goto label_28946c;
        case 0x289470u: goto label_289470;
        case 0x289474u: goto label_289474;
        case 0x289478u: goto label_289478;
        case 0x28947cu: goto label_28947c;
        case 0x289480u: goto label_289480;
        case 0x289484u: goto label_289484;
        case 0x289488u: goto label_289488;
        case 0x28948cu: goto label_28948c;
        case 0x289490u: goto label_289490;
        case 0x289494u: goto label_289494;
        case 0x289498u: goto label_289498;
        case 0x28949cu: goto label_28949c;
        case 0x2894a0u: goto label_2894a0;
        case 0x2894a4u: goto label_2894a4;
        case 0x2894a8u: goto label_2894a8;
        case 0x2894acu: goto label_2894ac;
        case 0x2894b0u: goto label_2894b0;
        case 0x2894b4u: goto label_2894b4;
        case 0x2894b8u: goto label_2894b8;
        case 0x2894bcu: goto label_2894bc;
        case 0x2894c0u: goto label_2894c0;
        case 0x2894c4u: goto label_2894c4;
        case 0x2894c8u: goto label_2894c8;
        case 0x2894ccu: goto label_2894cc;
        case 0x2894d0u: goto label_2894d0;
        case 0x2894d4u: goto label_2894d4;
        case 0x2894d8u: goto label_2894d8;
        case 0x2894dcu: goto label_2894dc;
        case 0x2894e0u: goto label_2894e0;
        case 0x2894e4u: goto label_2894e4;
        case 0x2894e8u: goto label_2894e8;
        case 0x2894ecu: goto label_2894ec;
        case 0x2894f0u: goto label_2894f0;
        case 0x2894f4u: goto label_2894f4;
        case 0x2894f8u: goto label_2894f8;
        case 0x2894fcu: goto label_2894fc;
        case 0x289500u: goto label_289500;
        case 0x289504u: goto label_289504;
        case 0x289508u: goto label_289508;
        case 0x28950cu: goto label_28950c;
        case 0x289510u: goto label_289510;
        case 0x289514u: goto label_289514;
        case 0x289518u: goto label_289518;
        case 0x28951cu: goto label_28951c;
        case 0x289520u: goto label_289520;
        case 0x289524u: goto label_289524;
        case 0x289528u: goto label_289528;
        case 0x28952cu: goto label_28952c;
        case 0x289530u: goto label_289530;
        case 0x289534u: goto label_289534;
        case 0x289538u: goto label_289538;
        case 0x28953cu: goto label_28953c;
        case 0x289540u: goto label_289540;
        case 0x289544u: goto label_289544;
        case 0x289548u: goto label_289548;
        case 0x28954cu: goto label_28954c;
        case 0x289550u: goto label_289550;
        case 0x289554u: goto label_289554;
        case 0x289558u: goto label_289558;
        case 0x28955cu: goto label_28955c;
        case 0x289560u: goto label_289560;
        case 0x289564u: goto label_289564;
        case 0x289568u: goto label_289568;
        case 0x28956cu: goto label_28956c;
        case 0x289570u: goto label_289570;
        case 0x289574u: goto label_289574;
        case 0x289578u: goto label_289578;
        case 0x28957cu: goto label_28957c;
        case 0x289580u: goto label_289580;
        case 0x289584u: goto label_289584;
        case 0x289588u: goto label_289588;
        case 0x28958cu: goto label_28958c;
        case 0x289590u: goto label_289590;
        case 0x289594u: goto label_289594;
        case 0x289598u: goto label_289598;
        case 0x28959cu: goto label_28959c;
        case 0x2895a0u: goto label_2895a0;
        case 0x2895a4u: goto label_2895a4;
        case 0x2895a8u: goto label_2895a8;
        case 0x2895acu: goto label_2895ac;
        case 0x2895b0u: goto label_2895b0;
        case 0x2895b4u: goto label_2895b4;
        case 0x2895b8u: goto label_2895b8;
        case 0x2895bcu: goto label_2895bc;
        case 0x2895c0u: goto label_2895c0;
        case 0x2895c4u: goto label_2895c4;
        case 0x2895c8u: goto label_2895c8;
        case 0x2895ccu: goto label_2895cc;
        case 0x2895d0u: goto label_2895d0;
        case 0x2895d4u: goto label_2895d4;
        case 0x2895d8u: goto label_2895d8;
        case 0x2895dcu: goto label_2895dc;
        case 0x2895e0u: goto label_2895e0;
        case 0x2895e4u: goto label_2895e4;
        case 0x2895e8u: goto label_2895e8;
        case 0x2895ecu: goto label_2895ec;
        case 0x2895f0u: goto label_2895f0;
        case 0x2895f4u: goto label_2895f4;
        case 0x2895f8u: goto label_2895f8;
        case 0x2895fcu: goto label_2895fc;
        case 0x289600u: goto label_289600;
        case 0x289604u: goto label_289604;
        case 0x289608u: goto label_289608;
        case 0x28960cu: goto label_28960c;
        case 0x289610u: goto label_289610;
        case 0x289614u: goto label_289614;
        case 0x289618u: goto label_289618;
        case 0x28961cu: goto label_28961c;
        case 0x289620u: goto label_289620;
        case 0x289624u: goto label_289624;
        case 0x289628u: goto label_289628;
        case 0x28962cu: goto label_28962c;
        case 0x289630u: goto label_289630;
        case 0x289634u: goto label_289634;
        case 0x289638u: goto label_289638;
        case 0x28963cu: goto label_28963c;
        case 0x289640u: goto label_289640;
        case 0x289644u: goto label_289644;
        case 0x289648u: goto label_289648;
        case 0x28964cu: goto label_28964c;
        case 0x289650u: goto label_289650;
        case 0x289654u: goto label_289654;
        case 0x289658u: goto label_289658;
        case 0x28965cu: goto label_28965c;
        case 0x289660u: goto label_289660;
        case 0x289664u: goto label_289664;
        case 0x289668u: goto label_289668;
        case 0x28966cu: goto label_28966c;
        case 0x289670u: goto label_289670;
        case 0x289674u: goto label_289674;
        case 0x289678u: goto label_289678;
        case 0x28967cu: goto label_28967c;
        case 0x289680u: goto label_289680;
        case 0x289684u: goto label_289684;
        case 0x289688u: goto label_289688;
        case 0x28968cu: goto label_28968c;
        case 0x289690u: goto label_289690;
        case 0x289694u: goto label_289694;
        case 0x289698u: goto label_289698;
        case 0x28969cu: goto label_28969c;
        case 0x2896a0u: goto label_2896a0;
        case 0x2896a4u: goto label_2896a4;
        case 0x2896a8u: goto label_2896a8;
        case 0x2896acu: goto label_2896ac;
        case 0x2896b0u: goto label_2896b0;
        case 0x2896b4u: goto label_2896b4;
        case 0x2896b8u: goto label_2896b8;
        case 0x2896bcu: goto label_2896bc;
        case 0x2896c0u: goto label_2896c0;
        case 0x2896c4u: goto label_2896c4;
        case 0x2896c8u: goto label_2896c8;
        case 0x2896ccu: goto label_2896cc;
        case 0x2896d0u: goto label_2896d0;
        case 0x2896d4u: goto label_2896d4;
        case 0x2896d8u: goto label_2896d8;
        case 0x2896dcu: goto label_2896dc;
        case 0x2896e0u: goto label_2896e0;
        case 0x2896e4u: goto label_2896e4;
        case 0x2896e8u: goto label_2896e8;
        case 0x2896ecu: goto label_2896ec;
        case 0x2896f0u: goto label_2896f0;
        case 0x2896f4u: goto label_2896f4;
        case 0x2896f8u: goto label_2896f8;
        case 0x2896fcu: goto label_2896fc;
        case 0x289700u: goto label_289700;
        case 0x289704u: goto label_289704;
        case 0x289708u: goto label_289708;
        case 0x28970cu: goto label_28970c;
        case 0x289710u: goto label_289710;
        case 0x289714u: goto label_289714;
        case 0x289718u: goto label_289718;
        case 0x28971cu: goto label_28971c;
        case 0x289720u: goto label_289720;
        case 0x289724u: goto label_289724;
        case 0x289728u: goto label_289728;
        case 0x28972cu: goto label_28972c;
        case 0x289730u: goto label_289730;
        case 0x289734u: goto label_289734;
        case 0x289738u: goto label_289738;
        case 0x28973cu: goto label_28973c;
        case 0x289740u: goto label_289740;
        case 0x289744u: goto label_289744;
        case 0x289748u: goto label_289748;
        case 0x28974cu: goto label_28974c;
        case 0x289750u: goto label_289750;
        case 0x289754u: goto label_289754;
        case 0x289758u: goto label_289758;
        case 0x28975cu: goto label_28975c;
        case 0x289760u: goto label_289760;
        case 0x289764u: goto label_289764;
        case 0x289768u: goto label_289768;
        case 0x28976cu: goto label_28976c;
        case 0x289770u: goto label_289770;
        case 0x289774u: goto label_289774;
        case 0x289778u: goto label_289778;
        case 0x28977cu: goto label_28977c;
        case 0x289780u: goto label_289780;
        case 0x289784u: goto label_289784;
        case 0x289788u: goto label_289788;
        case 0x28978cu: goto label_28978c;
        case 0x289790u: goto label_289790;
        case 0x289794u: goto label_289794;
        case 0x289798u: goto label_289798;
        case 0x28979cu: goto label_28979c;
        case 0x2897a0u: goto label_2897a0;
        case 0x2897a4u: goto label_2897a4;
        case 0x2897a8u: goto label_2897a8;
        case 0x2897acu: goto label_2897ac;
        case 0x2897b0u: goto label_2897b0;
        case 0x2897b4u: goto label_2897b4;
        case 0x2897b8u: goto label_2897b8;
        case 0x2897bcu: goto label_2897bc;
        case 0x2897c0u: goto label_2897c0;
        case 0x2897c4u: goto label_2897c4;
        case 0x2897c8u: goto label_2897c8;
        case 0x2897ccu: goto label_2897cc;
        case 0x2897d0u: goto label_2897d0;
        case 0x2897d4u: goto label_2897d4;
        case 0x2897d8u: goto label_2897d8;
        case 0x2897dcu: goto label_2897dc;
        case 0x2897e0u: goto label_2897e0;
        case 0x2897e4u: goto label_2897e4;
        case 0x2897e8u: goto label_2897e8;
        case 0x2897ecu: goto label_2897ec;
        case 0x2897f0u: goto label_2897f0;
        case 0x2897f4u: goto label_2897f4;
        case 0x2897f8u: goto label_2897f8;
        case 0x2897fcu: goto label_2897fc;
        case 0x289800u: goto label_289800;
        case 0x289804u: goto label_289804;
        case 0x289808u: goto label_289808;
        case 0x28980cu: goto label_28980c;
        case 0x289810u: goto label_289810;
        case 0x289814u: goto label_289814;
        case 0x289818u: goto label_289818;
        case 0x28981cu: goto label_28981c;
        case 0x289820u: goto label_289820;
        case 0x289824u: goto label_289824;
        case 0x289828u: goto label_289828;
        case 0x28982cu: goto label_28982c;
        case 0x289830u: goto label_289830;
        case 0x289834u: goto label_289834;
        case 0x289838u: goto label_289838;
        case 0x28983cu: goto label_28983c;
        case 0x289840u: goto label_289840;
        case 0x289844u: goto label_289844;
        case 0x289848u: goto label_289848;
        case 0x28984cu: goto label_28984c;
        case 0x289850u: goto label_289850;
        case 0x289854u: goto label_289854;
        case 0x289858u: goto label_289858;
        case 0x28985cu: goto label_28985c;
        case 0x289860u: goto label_289860;
        case 0x289864u: goto label_289864;
        case 0x289868u: goto label_289868;
        case 0x28986cu: goto label_28986c;
        case 0x289870u: goto label_289870;
        case 0x289874u: goto label_289874;
        case 0x289878u: goto label_289878;
        case 0x28987cu: goto label_28987c;
        case 0x289880u: goto label_289880;
        case 0x289884u: goto label_289884;
        case 0x289888u: goto label_289888;
        case 0x28988cu: goto label_28988c;
        case 0x289890u: goto label_289890;
        case 0x289894u: goto label_289894;
        case 0x289898u: goto label_289898;
        case 0x28989cu: goto label_28989c;
        case 0x2898a0u: goto label_2898a0;
        case 0x2898a4u: goto label_2898a4;
        case 0x2898a8u: goto label_2898a8;
        case 0x2898acu: goto label_2898ac;
        case 0x2898b0u: goto label_2898b0;
        case 0x2898b4u: goto label_2898b4;
        case 0x2898b8u: goto label_2898b8;
        case 0x2898bcu: goto label_2898bc;
        case 0x2898c0u: goto label_2898c0;
        case 0x2898c4u: goto label_2898c4;
        case 0x2898c8u: goto label_2898c8;
        case 0x2898ccu: goto label_2898cc;
        case 0x2898d0u: goto label_2898d0;
        case 0x2898d4u: goto label_2898d4;
        case 0x2898d8u: goto label_2898d8;
        case 0x2898dcu: goto label_2898dc;
        case 0x2898e0u: goto label_2898e0;
        case 0x2898e4u: goto label_2898e4;
        case 0x2898e8u: goto label_2898e8;
        case 0x2898ecu: goto label_2898ec;
        case 0x2898f0u: goto label_2898f0;
        case 0x2898f4u: goto label_2898f4;
        case 0x2898f8u: goto label_2898f8;
        case 0x2898fcu: goto label_2898fc;
        case 0x289900u: goto label_289900;
        case 0x289904u: goto label_289904;
        case 0x289908u: goto label_289908;
        case 0x28990cu: goto label_28990c;
        case 0x289910u: goto label_289910;
        case 0x289914u: goto label_289914;
        case 0x289918u: goto label_289918;
        case 0x28991cu: goto label_28991c;
        case 0x289920u: goto label_289920;
        case 0x289924u: goto label_289924;
        case 0x289928u: goto label_289928;
        case 0x28992cu: goto label_28992c;
        case 0x289930u: goto label_289930;
        case 0x289934u: goto label_289934;
        case 0x289938u: goto label_289938;
        case 0x28993cu: goto label_28993c;
        case 0x289940u: goto label_289940;
        case 0x289944u: goto label_289944;
        case 0x289948u: goto label_289948;
        case 0x28994cu: goto label_28994c;
        case 0x289950u: goto label_289950;
        case 0x289954u: goto label_289954;
        case 0x289958u: goto label_289958;
        case 0x28995cu: goto label_28995c;
        case 0x289960u: goto label_289960;
        case 0x289964u: goto label_289964;
        case 0x289968u: goto label_289968;
        case 0x28996cu: goto label_28996c;
        case 0x289970u: goto label_289970;
        case 0x289974u: goto label_289974;
        case 0x289978u: goto label_289978;
        case 0x28997cu: goto label_28997c;
        case 0x289980u: goto label_289980;
        case 0x289984u: goto label_289984;
        case 0x289988u: goto label_289988;
        case 0x28998cu: goto label_28998c;
        case 0x289990u: goto label_289990;
        case 0x289994u: goto label_289994;
        case 0x289998u: goto label_289998;
        case 0x28999cu: goto label_28999c;
        case 0x2899a0u: goto label_2899a0;
        case 0x2899a4u: goto label_2899a4;
        case 0x2899a8u: goto label_2899a8;
        case 0x2899acu: goto label_2899ac;
        case 0x2899b0u: goto label_2899b0;
        case 0x2899b4u: goto label_2899b4;
        case 0x2899b8u: goto label_2899b8;
        case 0x2899bcu: goto label_2899bc;
        case 0x2899c0u: goto label_2899c0;
        case 0x2899c4u: goto label_2899c4;
        case 0x2899c8u: goto label_2899c8;
        case 0x2899ccu: goto label_2899cc;
        case 0x2899d0u: goto label_2899d0;
        case 0x2899d4u: goto label_2899d4;
        case 0x2899d8u: goto label_2899d8;
        case 0x2899dcu: goto label_2899dc;
        case 0x2899e0u: goto label_2899e0;
        case 0x2899e4u: goto label_2899e4;
        case 0x2899e8u: goto label_2899e8;
        case 0x2899ecu: goto label_2899ec;
        case 0x2899f0u: goto label_2899f0;
        case 0x2899f4u: goto label_2899f4;
        case 0x2899f8u: goto label_2899f8;
        case 0x2899fcu: goto label_2899fc;
        case 0x289a00u: goto label_289a00;
        case 0x289a04u: goto label_289a04;
        case 0x289a08u: goto label_289a08;
        case 0x289a0cu: goto label_289a0c;
        case 0x289a10u: goto label_289a10;
        case 0x289a14u: goto label_289a14;
        case 0x289a18u: goto label_289a18;
        case 0x289a1cu: goto label_289a1c;
        case 0x289a20u: goto label_289a20;
        case 0x289a24u: goto label_289a24;
        case 0x289a28u: goto label_289a28;
        case 0x289a2cu: goto label_289a2c;
        case 0x289a30u: goto label_289a30;
        case 0x289a34u: goto label_289a34;
        case 0x289a38u: goto label_289a38;
        case 0x289a3cu: goto label_289a3c;
        case 0x289a40u: goto label_289a40;
        case 0x289a44u: goto label_289a44;
        case 0x289a48u: goto label_289a48;
        case 0x289a4cu: goto label_289a4c;
        case 0x289a50u: goto label_289a50;
        case 0x289a54u: goto label_289a54;
        case 0x289a58u: goto label_289a58;
        case 0x289a5cu: goto label_289a5c;
        case 0x289a60u: goto label_289a60;
        case 0x289a64u: goto label_289a64;
        case 0x289a68u: goto label_289a68;
        case 0x289a6cu: goto label_289a6c;
        case 0x289a70u: goto label_289a70;
        case 0x289a74u: goto label_289a74;
        case 0x289a78u: goto label_289a78;
        case 0x289a7cu: goto label_289a7c;
        case 0x289a80u: goto label_289a80;
        case 0x289a84u: goto label_289a84;
        case 0x289a88u: goto label_289a88;
        case 0x289a8cu: goto label_289a8c;
        case 0x289a90u: goto label_289a90;
        case 0x289a94u: goto label_289a94;
        case 0x289a98u: goto label_289a98;
        case 0x289a9cu: goto label_289a9c;
        case 0x289aa0u: goto label_289aa0;
        case 0x289aa4u: goto label_289aa4;
        case 0x289aa8u: goto label_289aa8;
        case 0x289aacu: goto label_289aac;
        case 0x289ab0u: goto label_289ab0;
        case 0x289ab4u: goto label_289ab4;
        case 0x289ab8u: goto label_289ab8;
        case 0x289abcu: goto label_289abc;
        case 0x289ac0u: goto label_289ac0;
        case 0x289ac4u: goto label_289ac4;
        case 0x289ac8u: goto label_289ac8;
        case 0x289accu: goto label_289acc;
        case 0x289ad0u: goto label_289ad0;
        case 0x289ad4u: goto label_289ad4;
        case 0x289ad8u: goto label_289ad8;
        case 0x289adcu: goto label_289adc;
        case 0x289ae0u: goto label_289ae0;
        case 0x289ae4u: goto label_289ae4;
        case 0x289ae8u: goto label_289ae8;
        case 0x289aecu: goto label_289aec;
        case 0x289af0u: goto label_289af0;
        case 0x289af4u: goto label_289af4;
        case 0x289af8u: goto label_289af8;
        case 0x289afcu: goto label_289afc;
        case 0x289b00u: goto label_289b00;
        case 0x289b04u: goto label_289b04;
        case 0x289b08u: goto label_289b08;
        case 0x289b0cu: goto label_289b0c;
        case 0x289b10u: goto label_289b10;
        case 0x289b14u: goto label_289b14;
        case 0x289b18u: goto label_289b18;
        case 0x289b1cu: goto label_289b1c;
        case 0x289b20u: goto label_289b20;
        case 0x289b24u: goto label_289b24;
        case 0x289b28u: goto label_289b28;
        case 0x289b2cu: goto label_289b2c;
        case 0x289b30u: goto label_289b30;
        case 0x289b34u: goto label_289b34;
        case 0x289b38u: goto label_289b38;
        case 0x289b3cu: goto label_289b3c;
        case 0x289b40u: goto label_289b40;
        case 0x289b44u: goto label_289b44;
        case 0x289b48u: goto label_289b48;
        case 0x289b4cu: goto label_289b4c;
        case 0x289b50u: goto label_289b50;
        case 0x289b54u: goto label_289b54;
        case 0x289b58u: goto label_289b58;
        case 0x289b5cu: goto label_289b5c;
        case 0x289b60u: goto label_289b60;
        case 0x289b64u: goto label_289b64;
        case 0x289b68u: goto label_289b68;
        case 0x289b6cu: goto label_289b6c;
        case 0x289b70u: goto label_289b70;
        case 0x289b74u: goto label_289b74;
        case 0x289b78u: goto label_289b78;
        case 0x289b7cu: goto label_289b7c;
        case 0x289b80u: goto label_289b80;
        case 0x289b84u: goto label_289b84;
        case 0x289b88u: goto label_289b88;
        case 0x289b8cu: goto label_289b8c;
        case 0x289b90u: goto label_289b90;
        case 0x289b94u: goto label_289b94;
        case 0x289b98u: goto label_289b98;
        case 0x289b9cu: goto label_289b9c;
        case 0x289ba0u: goto label_289ba0;
        case 0x289ba4u: goto label_289ba4;
        case 0x289ba8u: goto label_289ba8;
        case 0x289bacu: goto label_289bac;
        case 0x289bb0u: goto label_289bb0;
        case 0x289bb4u: goto label_289bb4;
        case 0x289bb8u: goto label_289bb8;
        case 0x289bbcu: goto label_289bbc;
        case 0x289bc0u: goto label_289bc0;
        case 0x289bc4u: goto label_289bc4;
        case 0x289bc8u: goto label_289bc8;
        case 0x289bccu: goto label_289bcc;
        case 0x289bd0u: goto label_289bd0;
        case 0x289bd4u: goto label_289bd4;
        case 0x289bd8u: goto label_289bd8;
        case 0x289bdcu: goto label_289bdc;
        case 0x289be0u: goto label_289be0;
        case 0x289be4u: goto label_289be4;
        case 0x289be8u: goto label_289be8;
        case 0x289becu: goto label_289bec;
        case 0x289bf0u: goto label_289bf0;
        case 0x289bf4u: goto label_289bf4;
        case 0x289bf8u: goto label_289bf8;
        case 0x289bfcu: goto label_289bfc;
        case 0x289c00u: goto label_289c00;
        case 0x289c04u: goto label_289c04;
        case 0x289c08u: goto label_289c08;
        case 0x289c0cu: goto label_289c0c;
        case 0x289c10u: goto label_289c10;
        case 0x289c14u: goto label_289c14;
        case 0x289c18u: goto label_289c18;
        case 0x289c1cu: goto label_289c1c;
        case 0x289c20u: goto label_289c20;
        case 0x289c24u: goto label_289c24;
        case 0x289c28u: goto label_289c28;
        case 0x289c2cu: goto label_289c2c;
        case 0x289c30u: goto label_289c30;
        case 0x289c34u: goto label_289c34;
        case 0x289c38u: goto label_289c38;
        case 0x289c3cu: goto label_289c3c;
        case 0x289c40u: goto label_289c40;
        case 0x289c44u: goto label_289c44;
        case 0x289c48u: goto label_289c48;
        case 0x289c4cu: goto label_289c4c;
        case 0x289c50u: goto label_289c50;
        case 0x289c54u: goto label_289c54;
        case 0x289c58u: goto label_289c58;
        case 0x289c5cu: goto label_289c5c;
        case 0x289c60u: goto label_289c60;
        case 0x289c64u: goto label_289c64;
        case 0x289c68u: goto label_289c68;
        case 0x289c6cu: goto label_289c6c;
        case 0x289c70u: goto label_289c70;
        case 0x289c74u: goto label_289c74;
        case 0x289c78u: goto label_289c78;
        case 0x289c7cu: goto label_289c7c;
        case 0x289c80u: goto label_289c80;
        case 0x289c84u: goto label_289c84;
        case 0x289c88u: goto label_289c88;
        case 0x289c8cu: goto label_289c8c;
        case 0x289c90u: goto label_289c90;
        case 0x289c94u: goto label_289c94;
        case 0x289c98u: goto label_289c98;
        case 0x289c9cu: goto label_289c9c;
        case 0x289ca0u: goto label_289ca0;
        case 0x289ca4u: goto label_289ca4;
        case 0x289ca8u: goto label_289ca8;
        case 0x289cacu: goto label_289cac;
        case 0x289cb0u: goto label_289cb0;
        case 0x289cb4u: goto label_289cb4;
        case 0x289cb8u: goto label_289cb8;
        case 0x289cbcu: goto label_289cbc;
        case 0x289cc0u: goto label_289cc0;
        case 0x289cc4u: goto label_289cc4;
        case 0x289cc8u: goto label_289cc8;
        case 0x289cccu: goto label_289ccc;
        case 0x289cd0u: goto label_289cd0;
        case 0x289cd4u: goto label_289cd4;
        case 0x289cd8u: goto label_289cd8;
        case 0x289cdcu: goto label_289cdc;
        case 0x289ce0u: goto label_289ce0;
        case 0x289ce4u: goto label_289ce4;
        case 0x289ce8u: goto label_289ce8;
        case 0x289cecu: goto label_289cec;
        case 0x289cf0u: goto label_289cf0;
        case 0x289cf4u: goto label_289cf4;
        case 0x289cf8u: goto label_289cf8;
        case 0x289cfcu: goto label_289cfc;
        case 0x289d00u: goto label_289d00;
        case 0x289d04u: goto label_289d04;
        case 0x289d08u: goto label_289d08;
        case 0x289d0cu: goto label_289d0c;
        case 0x289d10u: goto label_289d10;
        case 0x289d14u: goto label_289d14;
        case 0x289d18u: goto label_289d18;
        case 0x289d1cu: goto label_289d1c;
        case 0x289d20u: goto label_289d20;
        case 0x289d24u: goto label_289d24;
        case 0x289d28u: goto label_289d28;
        case 0x289d2cu: goto label_289d2c;
        case 0x289d30u: goto label_289d30;
        case 0x289d34u: goto label_289d34;
        case 0x289d38u: goto label_289d38;
        case 0x289d3cu: goto label_289d3c;
        case 0x289d40u: goto label_289d40;
        case 0x289d44u: goto label_289d44;
        case 0x289d48u: goto label_289d48;
        case 0x289d4cu: goto label_289d4c;
        case 0x289d50u: goto label_289d50;
        case 0x289d54u: goto label_289d54;
        case 0x289d58u: goto label_289d58;
        case 0x289d5cu: goto label_289d5c;
        case 0x289d60u: goto label_289d60;
        case 0x289d64u: goto label_289d64;
        case 0x289d68u: goto label_289d68;
        case 0x289d6cu: goto label_289d6c;
        case 0x289d70u: goto label_289d70;
        case 0x289d74u: goto label_289d74;
        case 0x289d78u: goto label_289d78;
        case 0x289d7cu: goto label_289d7c;
        case 0x289d80u: goto label_289d80;
        case 0x289d84u: goto label_289d84;
        case 0x289d88u: goto label_289d88;
        case 0x289d8cu: goto label_289d8c;
        case 0x289d90u: goto label_289d90;
        case 0x289d94u: goto label_289d94;
        case 0x289d98u: goto label_289d98;
        case 0x289d9cu: goto label_289d9c;
        case 0x289da0u: goto label_289da0;
        case 0x289da4u: goto label_289da4;
        case 0x289da8u: goto label_289da8;
        case 0x289dacu: goto label_289dac;
        case 0x289db0u: goto label_289db0;
        case 0x289db4u: goto label_289db4;
        case 0x289db8u: goto label_289db8;
        case 0x289dbcu: goto label_289dbc;
        case 0x289dc0u: goto label_289dc0;
        case 0x289dc4u: goto label_289dc4;
        case 0x289dc8u: goto label_289dc8;
        case 0x289dccu: goto label_289dcc;
        case 0x289dd0u: goto label_289dd0;
        case 0x289dd4u: goto label_289dd4;
        case 0x289dd8u: goto label_289dd8;
        case 0x289ddcu: goto label_289ddc;
        case 0x289de0u: goto label_289de0;
        case 0x289de4u: goto label_289de4;
        case 0x289de8u: goto label_289de8;
        case 0x289decu: goto label_289dec;
        case 0x289df0u: goto label_289df0;
        case 0x289df4u: goto label_289df4;
        case 0x289df8u: goto label_289df8;
        case 0x289dfcu: goto label_289dfc;
        case 0x289e00u: goto label_289e00;
        case 0x289e04u: goto label_289e04;
        case 0x289e08u: goto label_289e08;
        case 0x289e0cu: goto label_289e0c;
        case 0x289e10u: goto label_289e10;
        case 0x289e14u: goto label_289e14;
        case 0x289e18u: goto label_289e18;
        case 0x289e1cu: goto label_289e1c;
        case 0x289e20u: goto label_289e20;
        case 0x289e24u: goto label_289e24;
        case 0x289e28u: goto label_289e28;
        case 0x289e2cu: goto label_289e2c;
        case 0x289e30u: goto label_289e30;
        case 0x289e34u: goto label_289e34;
        case 0x289e38u: goto label_289e38;
        case 0x289e3cu: goto label_289e3c;
        case 0x289e40u: goto label_289e40;
        case 0x289e44u: goto label_289e44;
        case 0x289e48u: goto label_289e48;
        case 0x289e4cu: goto label_289e4c;
        case 0x289e50u: goto label_289e50;
        case 0x289e54u: goto label_289e54;
        case 0x289e58u: goto label_289e58;
        case 0x289e5cu: goto label_289e5c;
        case 0x289e60u: goto label_289e60;
        case 0x289e64u: goto label_289e64;
        case 0x289e68u: goto label_289e68;
        case 0x289e6cu: goto label_289e6c;
        case 0x289e70u: goto label_289e70;
        case 0x289e74u: goto label_289e74;
        case 0x289e78u: goto label_289e78;
        case 0x289e7cu: goto label_289e7c;
        case 0x289e80u: goto label_289e80;
        case 0x289e84u: goto label_289e84;
        case 0x289e88u: goto label_289e88;
        case 0x289e8cu: goto label_289e8c;
        case 0x289e90u: goto label_289e90;
        case 0x289e94u: goto label_289e94;
        case 0x289e98u: goto label_289e98;
        case 0x289e9cu: goto label_289e9c;
        case 0x289ea0u: goto label_289ea0;
        case 0x289ea4u: goto label_289ea4;
        case 0x289ea8u: goto label_289ea8;
        case 0x289eacu: goto label_289eac;
        case 0x289eb0u: goto label_289eb0;
        case 0x289eb4u: goto label_289eb4;
        case 0x289eb8u: goto label_289eb8;
        case 0x289ebcu: goto label_289ebc;
        case 0x289ec0u: goto label_289ec0;
        case 0x289ec4u: goto label_289ec4;
        case 0x289ec8u: goto label_289ec8;
        case 0x289eccu: goto label_289ecc;
        case 0x289ed0u: goto label_289ed0;
        case 0x289ed4u: goto label_289ed4;
        case 0x289ed8u: goto label_289ed8;
        case 0x289edcu: goto label_289edc;
        case 0x289ee0u: goto label_289ee0;
        case 0x289ee4u: goto label_289ee4;
        case 0x289ee8u: goto label_289ee8;
        case 0x289eecu: goto label_289eec;
        case 0x289ef0u: goto label_289ef0;
        case 0x289ef4u: goto label_289ef4;
        case 0x289ef8u: goto label_289ef8;
        case 0x289efcu: goto label_289efc;
        case 0x289f00u: goto label_289f00;
        case 0x289f04u: goto label_289f04;
        case 0x289f08u: goto label_289f08;
        case 0x289f0cu: goto label_289f0c;
        case 0x289f10u: goto label_289f10;
        case 0x289f14u: goto label_289f14;
        case 0x289f18u: goto label_289f18;
        case 0x289f1cu: goto label_289f1c;
        case 0x289f20u: goto label_289f20;
        case 0x289f24u: goto label_289f24;
        case 0x289f28u: goto label_289f28;
        case 0x289f2cu: goto label_289f2c;
        case 0x289f30u: goto label_289f30;
        case 0x289f34u: goto label_289f34;
        case 0x289f38u: goto label_289f38;
        case 0x289f3cu: goto label_289f3c;
        case 0x289f40u: goto label_289f40;
        case 0x289f44u: goto label_289f44;
        case 0x289f48u: goto label_289f48;
        case 0x289f4cu: goto label_289f4c;
        case 0x289f50u: goto label_289f50;
        case 0x289f54u: goto label_289f54;
        case 0x289f58u: goto label_289f58;
        case 0x289f5cu: goto label_289f5c;
        case 0x289f60u: goto label_289f60;
        case 0x289f64u: goto label_289f64;
        case 0x289f68u: goto label_289f68;
        case 0x289f6cu: goto label_289f6c;
        case 0x289f70u: goto label_289f70;
        case 0x289f74u: goto label_289f74;
        case 0x289f78u: goto label_289f78;
        case 0x289f7cu: goto label_289f7c;
        case 0x289f80u: goto label_289f80;
        case 0x289f84u: goto label_289f84;
        case 0x289f88u: goto label_289f88;
        case 0x289f8cu: goto label_289f8c;
        case 0x289f90u: goto label_289f90;
        case 0x289f94u: goto label_289f94;
        case 0x289f98u: goto label_289f98;
        case 0x289f9cu: goto label_289f9c;
        case 0x289fa0u: goto label_289fa0;
        case 0x289fa4u: goto label_289fa4;
        case 0x289fa8u: goto label_289fa8;
        case 0x289facu: goto label_289fac;
        case 0x289fb0u: goto label_289fb0;
        case 0x289fb4u: goto label_289fb4;
        case 0x289fb8u: goto label_289fb8;
        case 0x289fbcu: goto label_289fbc;
        case 0x289fc0u: goto label_289fc0;
        case 0x289fc4u: goto label_289fc4;
        case 0x289fc8u: goto label_289fc8;
        case 0x289fccu: goto label_289fcc;
        case 0x289fd0u: goto label_289fd0;
        case 0x289fd4u: goto label_289fd4;
        case 0x289fd8u: goto label_289fd8;
        case 0x289fdcu: goto label_289fdc;
        case 0x289fe0u: goto label_289fe0;
        case 0x289fe4u: goto label_289fe4;
        case 0x289fe8u: goto label_289fe8;
        case 0x289fecu: goto label_289fec;
        case 0x289ff0u: goto label_289ff0;
        case 0x289ff4u: goto label_289ff4;
        case 0x289ff8u: goto label_289ff8;
        case 0x289ffcu: goto label_289ffc;
        case 0x28a000u: goto label_28a000;
        case 0x28a004u: goto label_28a004;
        case 0x28a008u: goto label_28a008;
        case 0x28a00cu: goto label_28a00c;
        case 0x28a010u: goto label_28a010;
        case 0x28a014u: goto label_28a014;
        case 0x28a018u: goto label_28a018;
        case 0x28a01cu: goto label_28a01c;
        case 0x28a020u: goto label_28a020;
        case 0x28a024u: goto label_28a024;
        case 0x28a028u: goto label_28a028;
        case 0x28a02cu: goto label_28a02c;
        case 0x28a030u: goto label_28a030;
        case 0x28a034u: goto label_28a034;
        case 0x28a038u: goto label_28a038;
        case 0x28a03cu: goto label_28a03c;
        case 0x28a040u: goto label_28a040;
        case 0x28a044u: goto label_28a044;
        case 0x28a048u: goto label_28a048;
        case 0x28a04cu: goto label_28a04c;
        case 0x28a050u: goto label_28a050;
        case 0x28a054u: goto label_28a054;
        case 0x28a058u: goto label_28a058;
        case 0x28a05cu: goto label_28a05c;
        case 0x28a060u: goto label_28a060;
        case 0x28a064u: goto label_28a064;
        case 0x28a068u: goto label_28a068;
        case 0x28a06cu: goto label_28a06c;
        case 0x28a070u: goto label_28a070;
        case 0x28a074u: goto label_28a074;
        case 0x28a078u: goto label_28a078;
        case 0x28a07cu: goto label_28a07c;
        case 0x28a080u: goto label_28a080;
        case 0x28a084u: goto label_28a084;
        case 0x28a088u: goto label_28a088;
        case 0x28a08cu: goto label_28a08c;
        case 0x28a090u: goto label_28a090;
        case 0x28a094u: goto label_28a094;
        case 0x28a098u: goto label_28a098;
        case 0x28a09cu: goto label_28a09c;
        case 0x28a0a0u: goto label_28a0a0;
        case 0x28a0a4u: goto label_28a0a4;
        case 0x28a0a8u: goto label_28a0a8;
        case 0x28a0acu: goto label_28a0ac;
        case 0x28a0b0u: goto label_28a0b0;
        case 0x28a0b4u: goto label_28a0b4;
        case 0x28a0b8u: goto label_28a0b8;
        case 0x28a0bcu: goto label_28a0bc;
        case 0x28a0c0u: goto label_28a0c0;
        case 0x28a0c4u: goto label_28a0c4;
        case 0x28a0c8u: goto label_28a0c8;
        case 0x28a0ccu: goto label_28a0cc;
        case 0x28a0d0u: goto label_28a0d0;
        case 0x28a0d4u: goto label_28a0d4;
        case 0x28a0d8u: goto label_28a0d8;
        case 0x28a0dcu: goto label_28a0dc;
        case 0x28a0e0u: goto label_28a0e0;
        case 0x28a0e4u: goto label_28a0e4;
        case 0x28a0e8u: goto label_28a0e8;
        case 0x28a0ecu: goto label_28a0ec;
        case 0x28a0f0u: goto label_28a0f0;
        case 0x28a0f4u: goto label_28a0f4;
        case 0x28a0f8u: goto label_28a0f8;
        case 0x28a0fcu: goto label_28a0fc;
        case 0x28a100u: goto label_28a100;
        case 0x28a104u: goto label_28a104;
        case 0x28a108u: goto label_28a108;
        case 0x28a10cu: goto label_28a10c;
        case 0x28a110u: goto label_28a110;
        case 0x28a114u: goto label_28a114;
        case 0x28a118u: goto label_28a118;
        case 0x28a11cu: goto label_28a11c;
        case 0x28a120u: goto label_28a120;
        case 0x28a124u: goto label_28a124;
        case 0x28a128u: goto label_28a128;
        case 0x28a12cu: goto label_28a12c;
        case 0x28a130u: goto label_28a130;
        case 0x28a134u: goto label_28a134;
        case 0x28a138u: goto label_28a138;
        case 0x28a13cu: goto label_28a13c;
        case 0x28a140u: goto label_28a140;
        case 0x28a144u: goto label_28a144;
        case 0x28a148u: goto label_28a148;
        case 0x28a14cu: goto label_28a14c;
        case 0x28a150u: goto label_28a150;
        case 0x28a154u: goto label_28a154;
        case 0x28a158u: goto label_28a158;
        case 0x28a15cu: goto label_28a15c;
        case 0x28a160u: goto label_28a160;
        case 0x28a164u: goto label_28a164;
        case 0x28a168u: goto label_28a168;
        case 0x28a16cu: goto label_28a16c;
        case 0x28a170u: goto label_28a170;
        case 0x28a174u: goto label_28a174;
        case 0x28a178u: goto label_28a178;
        case 0x28a17cu: goto label_28a17c;
        case 0x28a180u: goto label_28a180;
        case 0x28a184u: goto label_28a184;
        case 0x28a188u: goto label_28a188;
        case 0x28a18cu: goto label_28a18c;
        case 0x28a190u: goto label_28a190;
        case 0x28a194u: goto label_28a194;
        case 0x28a198u: goto label_28a198;
        case 0x28a19cu: goto label_28a19c;
        case 0x28a1a0u: goto label_28a1a0;
        case 0x28a1a4u: goto label_28a1a4;
        case 0x28a1a8u: goto label_28a1a8;
        case 0x28a1acu: goto label_28a1ac;
        case 0x28a1b0u: goto label_28a1b0;
        case 0x28a1b4u: goto label_28a1b4;
        case 0x28a1b8u: goto label_28a1b8;
        case 0x28a1bcu: goto label_28a1bc;
        case 0x28a1c0u: goto label_28a1c0;
        case 0x28a1c4u: goto label_28a1c4;
        case 0x28a1c8u: goto label_28a1c8;
        case 0x28a1ccu: goto label_28a1cc;
        case 0x28a1d0u: goto label_28a1d0;
        case 0x28a1d4u: goto label_28a1d4;
        case 0x28a1d8u: goto label_28a1d8;
        case 0x28a1dcu: goto label_28a1dc;
        case 0x28a1e0u: goto label_28a1e0;
        case 0x28a1e4u: goto label_28a1e4;
        case 0x28a1e8u: goto label_28a1e8;
        case 0x28a1ecu: goto label_28a1ec;
        case 0x28a1f0u: goto label_28a1f0;
        case 0x28a1f4u: goto label_28a1f4;
        case 0x28a1f8u: goto label_28a1f8;
        case 0x28a1fcu: goto label_28a1fc;
        case 0x28a200u: goto label_28a200;
        case 0x28a204u: goto label_28a204;
        case 0x28a208u: goto label_28a208;
        case 0x28a20cu: goto label_28a20c;
        case 0x28a210u: goto label_28a210;
        case 0x28a214u: goto label_28a214;
        case 0x28a218u: goto label_28a218;
        case 0x28a21cu: goto label_28a21c;
        case 0x28a220u: goto label_28a220;
        case 0x28a224u: goto label_28a224;
        case 0x28a228u: goto label_28a228;
        case 0x28a22cu: goto label_28a22c;
        case 0x28a230u: goto label_28a230;
        case 0x28a234u: goto label_28a234;
        case 0x28a238u: goto label_28a238;
        case 0x28a23cu: goto label_28a23c;
        case 0x28a240u: goto label_28a240;
        case 0x28a244u: goto label_28a244;
        case 0x28a248u: goto label_28a248;
        case 0x28a24cu: goto label_28a24c;
        case 0x28a250u: goto label_28a250;
        case 0x28a254u: goto label_28a254;
        case 0x28a258u: goto label_28a258;
        case 0x28a25cu: goto label_28a25c;
        case 0x28a260u: goto label_28a260;
        case 0x28a264u: goto label_28a264;
        case 0x28a268u: goto label_28a268;
        case 0x28a26cu: goto label_28a26c;
        case 0x28a270u: goto label_28a270;
        case 0x28a274u: goto label_28a274;
        case 0x28a278u: goto label_28a278;
        case 0x28a27cu: goto label_28a27c;
        case 0x28a280u: goto label_28a280;
        case 0x28a284u: goto label_28a284;
        case 0x28a288u: goto label_28a288;
        case 0x28a28cu: goto label_28a28c;
        case 0x28a290u: goto label_28a290;
        case 0x28a294u: goto label_28a294;
        case 0x28a298u: goto label_28a298;
        case 0x28a29cu: goto label_28a29c;
        case 0x28a2a0u: goto label_28a2a0;
        case 0x28a2a4u: goto label_28a2a4;
        case 0x28a2a8u: goto label_28a2a8;
        case 0x28a2acu: goto label_28a2ac;
        case 0x28a2b0u: goto label_28a2b0;
        case 0x28a2b4u: goto label_28a2b4;
        case 0x28a2b8u: goto label_28a2b8;
        case 0x28a2bcu: goto label_28a2bc;
        case 0x28a2c0u: goto label_28a2c0;
        case 0x28a2c4u: goto label_28a2c4;
        case 0x28a2c8u: goto label_28a2c8;
        case 0x28a2ccu: goto label_28a2cc;
        case 0x28a2d0u: goto label_28a2d0;
        case 0x28a2d4u: goto label_28a2d4;
        case 0x28a2d8u: goto label_28a2d8;
        case 0x28a2dcu: goto label_28a2dc;
        case 0x28a2e0u: goto label_28a2e0;
        case 0x28a2e4u: goto label_28a2e4;
        case 0x28a2e8u: goto label_28a2e8;
        case 0x28a2ecu: goto label_28a2ec;
        case 0x28a2f0u: goto label_28a2f0;
        case 0x28a2f4u: goto label_28a2f4;
        case 0x28a2f8u: goto label_28a2f8;
        case 0x28a2fcu: goto label_28a2fc;
        case 0x28a300u: goto label_28a300;
        case 0x28a304u: goto label_28a304;
        case 0x28a308u: goto label_28a308;
        case 0x28a30cu: goto label_28a30c;
        case 0x28a310u: goto label_28a310;
        case 0x28a314u: goto label_28a314;
        case 0x28a318u: goto label_28a318;
        case 0x28a31cu: goto label_28a31c;
        case 0x28a320u: goto label_28a320;
        case 0x28a324u: goto label_28a324;
        case 0x28a328u: goto label_28a328;
        case 0x28a32cu: goto label_28a32c;
        case 0x28a330u: goto label_28a330;
        case 0x28a334u: goto label_28a334;
        case 0x28a338u: goto label_28a338;
        case 0x28a33cu: goto label_28a33c;
        case 0x28a340u: goto label_28a340;
        case 0x28a344u: goto label_28a344;
        case 0x28a348u: goto label_28a348;
        case 0x28a34cu: goto label_28a34c;
        case 0x28a350u: goto label_28a350;
        case 0x28a354u: goto label_28a354;
        case 0x28a358u: goto label_28a358;
        case 0x28a35cu: goto label_28a35c;
        case 0x28a360u: goto label_28a360;
        case 0x28a364u: goto label_28a364;
        case 0x28a368u: goto label_28a368;
        case 0x28a36cu: goto label_28a36c;
        case 0x28a370u: goto label_28a370;
        case 0x28a374u: goto label_28a374;
        case 0x28a378u: goto label_28a378;
        case 0x28a37cu: goto label_28a37c;
        case 0x28a380u: goto label_28a380;
        case 0x28a384u: goto label_28a384;
        case 0x28a388u: goto label_28a388;
        case 0x28a38cu: goto label_28a38c;
        case 0x28a390u: goto label_28a390;
        case 0x28a394u: goto label_28a394;
        case 0x28a398u: goto label_28a398;
        case 0x28a39cu: goto label_28a39c;
        case 0x28a3a0u: goto label_28a3a0;
        case 0x28a3a4u: goto label_28a3a4;
        case 0x28a3a8u: goto label_28a3a8;
        case 0x28a3acu: goto label_28a3ac;
        case 0x28a3b0u: goto label_28a3b0;
        case 0x28a3b4u: goto label_28a3b4;
        case 0x28a3b8u: goto label_28a3b8;
        case 0x28a3bcu: goto label_28a3bc;
        case 0x28a3c0u: goto label_28a3c0;
        case 0x28a3c4u: goto label_28a3c4;
        case 0x28a3c8u: goto label_28a3c8;
        case 0x28a3ccu: goto label_28a3cc;
        case 0x28a3d0u: goto label_28a3d0;
        case 0x28a3d4u: goto label_28a3d4;
        case 0x28a3d8u: goto label_28a3d8;
        case 0x28a3dcu: goto label_28a3dc;
        case 0x28a3e0u: goto label_28a3e0;
        case 0x28a3e4u: goto label_28a3e4;
        case 0x28a3e8u: goto label_28a3e8;
        case 0x28a3ecu: goto label_28a3ec;
        case 0x28a3f0u: goto label_28a3f0;
        case 0x28a3f4u: goto label_28a3f4;
        case 0x28a3f8u: goto label_28a3f8;
        case 0x28a3fcu: goto label_28a3fc;
        case 0x28a400u: goto label_28a400;
        case 0x28a404u: goto label_28a404;
        case 0x28a408u: goto label_28a408;
        case 0x28a40cu: goto label_28a40c;
        case 0x28a410u: goto label_28a410;
        case 0x28a414u: goto label_28a414;
        case 0x28a418u: goto label_28a418;
        case 0x28a41cu: goto label_28a41c;
        case 0x28a420u: goto label_28a420;
        case 0x28a424u: goto label_28a424;
        case 0x28a428u: goto label_28a428;
        case 0x28a42cu: goto label_28a42c;
        case 0x28a430u: goto label_28a430;
        case 0x28a434u: goto label_28a434;
        case 0x28a438u: goto label_28a438;
        case 0x28a43cu: goto label_28a43c;
        case 0x28a440u: goto label_28a440;
        case 0x28a444u: goto label_28a444;
        case 0x28a448u: goto label_28a448;
        case 0x28a44cu: goto label_28a44c;
        case 0x28a450u: goto label_28a450;
        case 0x28a454u: goto label_28a454;
        case 0x28a458u: goto label_28a458;
        case 0x28a45cu: goto label_28a45c;
        case 0x28a460u: goto label_28a460;
        case 0x28a464u: goto label_28a464;
        case 0x28a468u: goto label_28a468;
        case 0x28a46cu: goto label_28a46c;
        case 0x28a470u: goto label_28a470;
        case 0x28a474u: goto label_28a474;
        case 0x28a478u: goto label_28a478;
        case 0x28a47cu: goto label_28a47c;
        case 0x28a480u: goto label_28a480;
        case 0x28a484u: goto label_28a484;
        case 0x28a488u: goto label_28a488;
        case 0x28a48cu: goto label_28a48c;
        case 0x28a490u: goto label_28a490;
        case 0x28a494u: goto label_28a494;
        case 0x28a498u: goto label_28a498;
        case 0x28a49cu: goto label_28a49c;
        case 0x28a4a0u: goto label_28a4a0;
        case 0x28a4a4u: goto label_28a4a4;
        case 0x28a4a8u: goto label_28a4a8;
        case 0x28a4acu: goto label_28a4ac;
        case 0x28a4b0u: goto label_28a4b0;
        case 0x28a4b4u: goto label_28a4b4;
        case 0x28a4b8u: goto label_28a4b8;
        case 0x28a4bcu: goto label_28a4bc;
        case 0x28a4c0u: goto label_28a4c0;
        case 0x28a4c4u: goto label_28a4c4;
        case 0x28a4c8u: goto label_28a4c8;
        case 0x28a4ccu: goto label_28a4cc;
        case 0x28a4d0u: goto label_28a4d0;
        case 0x28a4d4u: goto label_28a4d4;
        case 0x28a4d8u: goto label_28a4d8;
        case 0x28a4dcu: goto label_28a4dc;
        case 0x28a4e0u: goto label_28a4e0;
        case 0x28a4e4u: goto label_28a4e4;
        case 0x28a4e8u: goto label_28a4e8;
        case 0x28a4ecu: goto label_28a4ec;
        case 0x28a4f0u: goto label_28a4f0;
        case 0x28a4f4u: goto label_28a4f4;
        case 0x28a4f8u: goto label_28a4f8;
        case 0x28a4fcu: goto label_28a4fc;
        case 0x28a500u: goto label_28a500;
        case 0x28a504u: goto label_28a504;
        case 0x28a508u: goto label_28a508;
        case 0x28a50cu: goto label_28a50c;
        case 0x28a510u: goto label_28a510;
        case 0x28a514u: goto label_28a514;
        case 0x28a518u: goto label_28a518;
        case 0x28a51cu: goto label_28a51c;
        case 0x28a520u: goto label_28a520;
        case 0x28a524u: goto label_28a524;
        case 0x28a528u: goto label_28a528;
        case 0x28a52cu: goto label_28a52c;
        case 0x28a530u: goto label_28a530;
        case 0x28a534u: goto label_28a534;
        case 0x28a538u: goto label_28a538;
        case 0x28a53cu: goto label_28a53c;
        case 0x28a540u: goto label_28a540;
        case 0x28a544u: goto label_28a544;
        case 0x28a548u: goto label_28a548;
        case 0x28a54cu: goto label_28a54c;
        case 0x28a550u: goto label_28a550;
        case 0x28a554u: goto label_28a554;
        case 0x28a558u: goto label_28a558;
        case 0x28a55cu: goto label_28a55c;
        case 0x28a560u: goto label_28a560;
        case 0x28a564u: goto label_28a564;
        case 0x28a568u: goto label_28a568;
        case 0x28a56cu: goto label_28a56c;
        case 0x28a570u: goto label_28a570;
        case 0x28a574u: goto label_28a574;
        case 0x28a578u: goto label_28a578;
        case 0x28a57cu: goto label_28a57c;
        case 0x28a580u: goto label_28a580;
        case 0x28a584u: goto label_28a584;
        case 0x28a588u: goto label_28a588;
        case 0x28a58cu: goto label_28a58c;
        case 0x28a590u: goto label_28a590;
        case 0x28a594u: goto label_28a594;
        case 0x28a598u: goto label_28a598;
        case 0x28a59cu: goto label_28a59c;
        case 0x28a5a0u: goto label_28a5a0;
        case 0x28a5a4u: goto label_28a5a4;
        case 0x28a5a8u: goto label_28a5a8;
        case 0x28a5acu: goto label_28a5ac;
        case 0x28a5b0u: goto label_28a5b0;
        case 0x28a5b4u: goto label_28a5b4;
        case 0x28a5b8u: goto label_28a5b8;
        case 0x28a5bcu: goto label_28a5bc;
        case 0x28a5c0u: goto label_28a5c0;
        case 0x28a5c4u: goto label_28a5c4;
        case 0x28a5c8u: goto label_28a5c8;
        case 0x28a5ccu: goto label_28a5cc;
        case 0x28a5d0u: goto label_28a5d0;
        case 0x28a5d4u: goto label_28a5d4;
        case 0x28a5d8u: goto label_28a5d8;
        case 0x28a5dcu: goto label_28a5dc;
        case 0x28a5e0u: goto label_28a5e0;
        case 0x28a5e4u: goto label_28a5e4;
        case 0x28a5e8u: goto label_28a5e8;
        case 0x28a5ecu: goto label_28a5ec;
        case 0x28a5f0u: goto label_28a5f0;
        case 0x28a5f4u: goto label_28a5f4;
        case 0x28a5f8u: goto label_28a5f8;
        case 0x28a5fcu: goto label_28a5fc;
        case 0x28a600u: goto label_28a600;
        case 0x28a604u: goto label_28a604;
        case 0x28a608u: goto label_28a608;
        case 0x28a60cu: goto label_28a60c;
        case 0x28a610u: goto label_28a610;
        case 0x28a614u: goto label_28a614;
        case 0x28a618u: goto label_28a618;
        case 0x28a61cu: goto label_28a61c;
        case 0x28a620u: goto label_28a620;
        case 0x28a624u: goto label_28a624;
        case 0x28a628u: goto label_28a628;
        case 0x28a62cu: goto label_28a62c;
        case 0x28a630u: goto label_28a630;
        case 0x28a634u: goto label_28a634;
        case 0x28a638u: goto label_28a638;
        case 0x28a63cu: goto label_28a63c;
        case 0x28a640u: goto label_28a640;
        case 0x28a644u: goto label_28a644;
        case 0x28a648u: goto label_28a648;
        case 0x28a64cu: goto label_28a64c;
        case 0x28a650u: goto label_28a650;
        case 0x28a654u: goto label_28a654;
        case 0x28a658u: goto label_28a658;
        case 0x28a65cu: goto label_28a65c;
        case 0x28a660u: goto label_28a660;
        case 0x28a664u: goto label_28a664;
        case 0x28a668u: goto label_28a668;
        case 0x28a66cu: goto label_28a66c;
        case 0x28a670u: goto label_28a670;
        case 0x28a674u: goto label_28a674;
        case 0x28a678u: goto label_28a678;
        case 0x28a67cu: goto label_28a67c;
        case 0x28a680u: goto label_28a680;
        case 0x28a684u: goto label_28a684;
        case 0x28a688u: goto label_28a688;
        case 0x28a68cu: goto label_28a68c;
        case 0x28a690u: goto label_28a690;
        case 0x28a694u: goto label_28a694;
        case 0x28a698u: goto label_28a698;
        case 0x28a69cu: goto label_28a69c;
        case 0x28a6a0u: goto label_28a6a0;
        case 0x28a6a4u: goto label_28a6a4;
        case 0x28a6a8u: goto label_28a6a8;
        case 0x28a6acu: goto label_28a6ac;
        case 0x28a6b0u: goto label_28a6b0;
        case 0x28a6b4u: goto label_28a6b4;
        case 0x28a6b8u: goto label_28a6b8;
        case 0x28a6bcu: goto label_28a6bc;
        case 0x28a6c0u: goto label_28a6c0;
        case 0x28a6c4u: goto label_28a6c4;
        case 0x28a6c8u: goto label_28a6c8;
        case 0x28a6ccu: goto label_28a6cc;
        case 0x28a6d0u: goto label_28a6d0;
        case 0x28a6d4u: goto label_28a6d4;
        case 0x28a6d8u: goto label_28a6d8;
        case 0x28a6dcu: goto label_28a6dc;
        case 0x28a6e0u: goto label_28a6e0;
        case 0x28a6e4u: goto label_28a6e4;
        case 0x28a6e8u: goto label_28a6e8;
        case 0x28a6ecu: goto label_28a6ec;
        case 0x28a6f0u: goto label_28a6f0;
        case 0x28a6f4u: goto label_28a6f4;
        case 0x28a6f8u: goto label_28a6f8;
        case 0x28a6fcu: goto label_28a6fc;
        case 0x28a700u: goto label_28a700;
        case 0x28a704u: goto label_28a704;
        case 0x28a708u: goto label_28a708;
        case 0x28a70cu: goto label_28a70c;
        case 0x28a710u: goto label_28a710;
        case 0x28a714u: goto label_28a714;
        case 0x28a718u: goto label_28a718;
        case 0x28a71cu: goto label_28a71c;
        case 0x28a720u: goto label_28a720;
        case 0x28a724u: goto label_28a724;
        case 0x28a728u: goto label_28a728;
        case 0x28a72cu: goto label_28a72c;
        default: break;
    }

    ctx->pc = 0x2892e0u;

label_2892e0:
    // 0x2892e0: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x2892e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
label_2892e4:
    // 0x2892e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2892e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2892e8:
    // 0x2892e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2892e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2892ec:
    // 0x2892ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2892ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2892f0:
    // 0x2892f0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2892f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2892f4:
    // 0x2892f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2892f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2892f8:
    // 0x2892f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2892f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2892fc:
    // 0x2892fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2892fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_289300:
    // 0x289300: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x289300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_289304:
    // 0x289304: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x289304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_289308:
    // 0x289308: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x289308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28930c:
    // 0x28930c: 0xafa402c0  sw          $a0, 0x2C0($sp)
    ctx->pc = 0x28930cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 4));
label_289310:
    // 0x289310: 0xafa502d0  sw          $a1, 0x2D0($sp)
    ctx->pc = 0x289310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 5));
label_289314:
    // 0x289314: 0xe7ac02e0  swc1        $f12, 0x2E0($sp)
    ctx->pc = 0x289314u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 736), bits); }
label_289318:
    // 0x289318: 0xe7ad02f0  swc1        $f13, 0x2F0($sp)
    ctx->pc = 0x289318u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
label_28931c:
    // 0x28931c: 0xc7a102e0  lwc1        $f1, 0x2E0($sp)
    ctx->pc = 0x28931cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_289320:
    // 0x289320: 0xc7a002f0  lwc1        $f0, 0x2F0($sp)
    ctx->pc = 0x289320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289324:
    // 0x289324: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x289324u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_289328:
    // 0x289328: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_28932c:
    if (ctx->pc == 0x28932Cu) {
        ctx->pc = 0x289330u;
        goto label_289330;
    }
    ctx->pc = 0x289328u;
    {
        const bool branch_taken_0x289328 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x289328) {
            ctx->pc = 0x28933Cu;
            goto label_28933c;
        }
    }
    ctx->pc = 0x289330u;
label_289330:
    // 0x289330: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x289330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289334:
    // 0x289334: 0x100004f0  b           . + 4 + (0x4F0 << 2)
label_289338:
    if (ctx->pc == 0x289338u) {
        ctx->pc = 0x28933Cu;
        goto label_28933c;
    }
    ctx->pc = 0x289334u;
    {
        const bool branch_taken_0x289334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289334) {
            ctx->pc = 0x28A6F8u;
            goto label_28a6f8;
        }
    }
    ctx->pc = 0x28933Cu;
label_28933c:
    // 0x28933c: 0xc7a102e0  lwc1        $f1, 0x2E0($sp)
    ctx->pc = 0x28933cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_289340:
    // 0x289340: 0xc7a002f0  lwc1        $f0, 0x2F0($sp)
    ctx->pc = 0x289340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289344:
    // 0x289344: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x289344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_289348:
    // 0x289348: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_28934c:
    if (ctx->pc == 0x28934Cu) {
        ctx->pc = 0x289350u;
        goto label_289350;
    }
    ctx->pc = 0x289348u;
    {
        const bool branch_taken_0x289348 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x289348) {
            ctx->pc = 0x289360u;
            goto label_289360;
        }
    }
    ctx->pc = 0x289350u;
label_289350:
    // 0x289350: 0xc7a002e0  lwc1        $f0, 0x2E0($sp)
    ctx->pc = 0x289350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289354:
    // 0x289354: 0xe7a001f4  swc1        $f0, 0x1F4($sp)
    ctx->pc = 0x289354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
label_289358:
    // 0x289358: 0x10000003  b           . + 4 + (0x3 << 2)
label_28935c:
    if (ctx->pc == 0x28935Cu) {
        ctx->pc = 0x289360u;
        goto label_289360;
    }
    ctx->pc = 0x289358u;
    {
        const bool branch_taken_0x289358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289358) {
            ctx->pc = 0x289368u;
            goto label_289368;
        }
    }
    ctx->pc = 0x289360u;
label_289360:
    // 0x289360: 0xc7a002f0  lwc1        $f0, 0x2F0($sp)
    ctx->pc = 0x289360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289364:
    // 0x289364: 0xe7a001f4  swc1        $f0, 0x1F4($sp)
    ctx->pc = 0x289364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
label_289368:
    // 0x289368: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x289368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28936c:
    // 0x28936c: 0xe7a002b8  swc1        $f0, 0x2B8($sp)
    ctx->pc = 0x28936cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
label_289370:
    // 0x289370: 0xc7a102e0  lwc1        $f1, 0x2E0($sp)
    ctx->pc = 0x289370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_289374:
    // 0x289374: 0xc7a002f0  lwc1        $f0, 0x2F0($sp)
    ctx->pc = 0x289374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289378:
    // 0x289378: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x289378u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28937c:
    // 0x28937c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_289380:
    if (ctx->pc == 0x289380u) {
        ctx->pc = 0x289384u;
        goto label_289384;
    }
    ctx->pc = 0x28937Cu;
    {
        const bool branch_taken_0x28937c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28937c) {
            ctx->pc = 0x289394u;
            goto label_289394;
        }
    }
    ctx->pc = 0x289384u;
label_289384:
    // 0x289384: 0xc7a002e0  lwc1        $f0, 0x2E0($sp)
    ctx->pc = 0x289384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289388:
    // 0x289388: 0xe7a001f0  swc1        $f0, 0x1F0($sp)
    ctx->pc = 0x289388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_28938c:
    // 0x28938c: 0x10000003  b           . + 4 + (0x3 << 2)
label_289390:
    if (ctx->pc == 0x289390u) {
        ctx->pc = 0x289394u;
        goto label_289394;
    }
    ctx->pc = 0x28938Cu;
    {
        const bool branch_taken_0x28938c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28938c) {
            ctx->pc = 0x28939Cu;
            goto label_28939c;
        }
    }
    ctx->pc = 0x289394u;
label_289394:
    // 0x289394: 0xc7a002f0  lwc1        $f0, 0x2F0($sp)
    ctx->pc = 0x289394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289398:
    // 0x289398: 0xe7a001f0  swc1        $f0, 0x1F0($sp)
    ctx->pc = 0x289398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_28939c:
    // 0x28939c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x28939cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_2893a0:
    // 0x2893a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2893a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2893a4:
    // 0x2893a4: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x2893a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2893a8:
    // 0x2893a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2893a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2893ac:
    // 0x2893ac: 0xe7a002b4  swc1        $f0, 0x2B4($sp)
    ctx->pc = 0x2893acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 692), bits); }
label_2893b0:
    // 0x2893b0: 0xc7a102e0  lwc1        $f1, 0x2E0($sp)
    ctx->pc = 0x2893b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2893b4:
    // 0x2893b4: 0xc7a002f0  lwc1        $f0, 0x2F0($sp)
    ctx->pc = 0x2893b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2893b8:
    // 0x2893b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2893b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2893bc:
    // 0x2893bc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2893c0:
    if (ctx->pc == 0x2893C0u) {
        ctx->pc = 0x2893C4u;
        goto label_2893c4;
    }
    ctx->pc = 0x2893BCu;
    {
        const bool branch_taken_0x2893bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2893bc) {
            ctx->pc = 0x2893D4u;
            goto label_2893d4;
        }
    }
    ctx->pc = 0x2893C4u;
label_2893c4:
    // 0x2893c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2893c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2893c8:
    // 0x2893c8: 0xa3a502bd  sb          $a1, 0x2BD($sp)
    ctx->pc = 0x2893c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 701), (uint8_t)GPR_U32(ctx, 5));
label_2893cc:
    // 0x2893cc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2893d0:
    if (ctx->pc == 0x2893D0u) {
        ctx->pc = 0x2893D4u;
        goto label_2893d4;
    }
    ctx->pc = 0x2893CCu;
    {
        const bool branch_taken_0x2893cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2893cc) {
            ctx->pc = 0x2893D8u;
            goto label_2893d8;
        }
    }
    ctx->pc = 0x2893D4u;
label_2893d4:
    // 0x2893d4: 0xa3a002bd  sb          $zero, 0x2BD($sp)
    ctx->pc = 0x2893d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 701), (uint8_t)GPR_U32(ctx, 0));
label_2893d8:
    // 0x2893d8: 0x93a602bd  lbu         $a2, 0x2BD($sp)
    ctx->pc = 0x2893d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 701)));
label_2893dc:
    // 0x2893dc: 0xa3a602bf  sb          $a2, 0x2BF($sp)
    ctx->pc = 0x2893dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 703), (uint8_t)GPR_U32(ctx, 6));
label_2893e0:
    // 0x2893e0: 0xa3a002be  sb          $zero, 0x2BE($sp)
    ctx->pc = 0x2893e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 702), (uint8_t)GPR_U32(ctx, 0));
label_2893e4:
    // 0x2893e4: 0x27a401c8  addiu       $a0, $sp, 0x1C8
    ctx->pc = 0x2893e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_2893e8:
    // 0x2893e8: 0xc0a2b50  jal         func_28AD40
label_2893ec:
    if (ctx->pc == 0x2893ECu) {
        ctx->pc = 0x2893F0u;
        goto label_2893f0;
    }
    ctx->pc = 0x2893E8u;
    SET_GPR_U32(ctx, 31, 0x2893F0u);
    ctx->pc = 0x28AD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AD40u, 0x2893E8u, 0x2893F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2893F0u;
label_2893f0:
    // 0x2893f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2893f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2893f4:
    // 0x2893f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2893f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2893f8:
    // 0x2893f8: 0x0  nop
    ctx->pc = 0x2893f8u;
    // NOP
label_2893fc:
    // 0x2893fc: 0xe7a002b0  swc1        $f0, 0x2B0($sp)
    ctx->pc = 0x2893fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
label_289400:
    // 0x289400: 0x10000014  b           . + 4 + (0x14 << 2)
label_289404:
    if (ctx->pc == 0x289404u) {
        ctx->pc = 0x289408u;
        goto label_289408;
    }
    ctx->pc = 0x289400u;
    {
        const bool branch_taken_0x289400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289400) {
            ctx->pc = 0x289454u;
            goto label_289454;
        }
    }
    ctx->pc = 0x289408u;
label_289408:
    // 0x289408: 0x3c0642a0  lui         $a2, 0x42A0
    ctx->pc = 0x289408u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17056 << 16));
label_28940c:
    // 0x28940c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x28940cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_289410:
    // 0x289410: 0xc7a002b0  lwc1        $f0, 0x2B0($sp)
    ctx->pc = 0x289410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289414:
    // 0x289414: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x289414u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_289418:
    // 0x289418: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x289418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_28941c:
    // 0x28941c: 0x27a20220  addiu       $v0, $sp, 0x220
    ctx->pc = 0x28941cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_289420:
    // 0x289420: 0xafa201ec  sw          $v0, 0x1EC($sp)
    ctx->pc = 0x289420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
label_289424:
    // 0x289424: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x289424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_289428:
    // 0x289428: 0x27a701c8  addiu       $a3, $sp, 0x1C8
    ctx->pc = 0x289428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_28942c:
    // 0x28942c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x28942cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_289430:
    // 0x289430: 0x8fa601ec  lw          $a2, 0x1EC($sp)
    ctx->pc = 0x289430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_289434:
    // 0x289434: 0xc0a2b28  jal         func_28ACA0
label_289438:
    if (ctx->pc == 0x289438u) {
        ctx->pc = 0x28943Cu;
        goto label_28943c;
    }
    ctx->pc = 0x289434u;
    SET_GPR_U32(ctx, 31, 0x28943Cu);
    ctx->pc = 0x28ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ACA0u, 0x289434u, 0x28943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28943Cu;
label_28943c:
    // 0x28943c: 0xc7a102b0  lwc1        $f1, 0x2B0($sp)
    ctx->pc = 0x28943cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_289440:
    // 0x289440: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x289440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_289444:
    // 0x289444: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x289444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289448:
    // 0x289448: 0x0  nop
    ctx->pc = 0x289448u;
    // NOP
label_28944c:
    // 0x28944c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28944cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_289450:
    // 0x289450: 0xe7a002b0  swc1        $f0, 0x2B0($sp)
    ctx->pc = 0x289450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
label_289454:
    // 0x289454: 0xc7a102b0  lwc1        $f1, 0x2B0($sp)
    ctx->pc = 0x289454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_289458:
    // 0x289458: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x289458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_28945c:
    // 0x28945c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28945cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289460:
    // 0x289460: 0x0  nop
    ctx->pc = 0x289460u;
    // NOP
label_289464:
    // 0x289464: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x289464u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_289468:
    // 0x289468: 0x4501ffe7  bc1t        . + 4 + (-0x19 << 2)
label_28946c:
    if (ctx->pc == 0x28946Cu) {
        ctx->pc = 0x289470u;
        goto label_289470;
    }
    ctx->pc = 0x289468u;
    {
        const bool branch_taken_0x289468 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x289468) {
            ctx->pc = 0x289408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_289408;
        }
    }
    ctx->pc = 0x289470u;
label_289470:
    // 0x289470: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x289470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_289474:
    // 0x289474: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x289474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289478:
    // 0x289478: 0x0  nop
    ctx->pc = 0x289478u;
    // NOP
label_28947c:
    // 0x28947c: 0xe7a002ac  swc1        $f0, 0x2AC($sp)
    ctx->pc = 0x28947cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 684), bits); }
label_289480:
    // 0x289480: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x289480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289484:
    // 0x289484: 0x0  nop
    ctx->pc = 0x289484u;
    // NOP
label_289488:
    // 0x289488: 0xe7a002a8  swc1        $f0, 0x2A8($sp)
    ctx->pc = 0x289488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
label_28948c:
    // 0x28948c: 0x27a601b8  addiu       $a2, $sp, 0x1B8
    ctx->pc = 0x28948cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_289490:
    // 0x289490: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x289490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_289494:
    // 0x289494: 0xc0a2b50  jal         func_28AD40
label_289498:
    if (ctx->pc == 0x289498u) {
        ctx->pc = 0x28949Cu;
        goto label_28949c;
    }
    ctx->pc = 0x289494u;
    SET_GPR_U32(ctx, 31, 0x28949Cu);
    ctx->pc = 0x28AD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AD40u, 0x289494u, 0x28949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28949Cu;
label_28949c:
    // 0x28949c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x28949cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_2894a0:
    // 0x2894a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2894a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2894a4:
    // 0x2894a4: 0xc7a002b8  lwc1        $f0, 0x2B8($sp)
    ctx->pc = 0x2894a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2894a8:
    // 0x2894a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2894a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2894ac:
    // 0x2894ac: 0xe7a002a4  swc1        $f0, 0x2A4($sp)
    ctx->pc = 0x2894acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
label_2894b0:
    // 0x2894b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2894b4:
    if (ctx->pc == 0x2894B4u) {
        ctx->pc = 0x2894B8u;
        goto label_2894b8;
    }
    ctx->pc = 0x2894B0u;
    {
        const bool branch_taken_0x2894b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2894b0) {
            ctx->pc = 0x2894D0u;
            goto label_2894d0;
        }
    }
    ctx->pc = 0x2894B8u;
label_2894b8:
    // 0x2894b8: 0xc7a102a4  lwc1        $f1, 0x2A4($sp)
    ctx->pc = 0x2894b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2894bc:
    // 0x2894bc: 0x3c0842a0  lui         $t0, 0x42A0
    ctx->pc = 0x2894bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17056 << 16));
label_2894c0:
    // 0x2894c0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2894c0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2894c4:
    // 0x2894c4: 0x0  nop
    ctx->pc = 0x2894c4u;
    // NOP
label_2894c8:
    // 0x2894c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2894c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2894cc:
    // 0x2894cc: 0xe7a002a4  swc1        $f0, 0x2A4($sp)
    ctx->pc = 0x2894ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
label_2894d0:
    // 0x2894d0: 0xc7a102a4  lwc1        $f1, 0x2A4($sp)
    ctx->pc = 0x2894d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2894d4:
    // 0x2894d4: 0xc7a002b4  lwc1        $f0, 0x2B4($sp)
    ctx->pc = 0x2894d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2894d8:
    // 0x2894d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2894d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2894dc:
    // 0x2894dc: 0x4501fff6  bc1t        . + 4 + (-0xA << 2)
label_2894e0:
    if (ctx->pc == 0x2894E0u) {
        ctx->pc = 0x2894E4u;
        goto label_2894e4;
    }
    ctx->pc = 0x2894DCu;
    {
        const bool branch_taken_0x2894dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2894dc) {
            ctx->pc = 0x2894B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2894b8;
        }
    }
    ctx->pc = 0x2894E4u;
label_2894e4:
    // 0x2894e4: 0x27a40148  addiu       $a0, $sp, 0x148
    ctx->pc = 0x2894e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_2894e8:
    // 0x2894e8: 0x27a501b8  addiu       $a1, $sp, 0x1B8
    ctx->pc = 0x2894e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_2894ec:
    // 0x2894ec: 0x27a602b4  addiu       $a2, $sp, 0x2B4
    ctx->pc = 0x2894ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 692));
label_2894f0:
    // 0x2894f0: 0xc0a2b28  jal         func_28ACA0
label_2894f4:
    if (ctx->pc == 0x2894F4u) {
        ctx->pc = 0x2894F8u;
        goto label_2894f8;
    }
    ctx->pc = 0x2894F0u;
    SET_GPR_U32(ctx, 31, 0x2894F8u);
    ctx->pc = 0x28ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ACA0u, 0x2894F0u, 0x2894F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2894F8u;
label_2894f8:
    // 0x2894f8: 0xc7a002b4  lwc1        $f0, 0x2B4($sp)
    ctx->pc = 0x2894f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2894fc:
    // 0x2894fc: 0xe7a002a0  swc1        $f0, 0x2A0($sp)
    ctx->pc = 0x2894fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
label_289500:
    // 0x289500: 0xc7a002b8  lwc1        $f0, 0x2B8($sp)
    ctx->pc = 0x289500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289504:
    // 0x289504: 0xe7a0029c  swc1        $f0, 0x29C($sp)
    ctx->pc = 0x289504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 668), bits); }
label_289508:
    // 0x289508: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x289508u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28950c:
    // 0x28950c: 0x0  nop
    ctx->pc = 0x28950cu;
    // NOP
label_289510:
    // 0x289510: 0xe7a00294  swc1        $f0, 0x294($sp)
    ctx->pc = 0x289510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 660), bits); }
label_289514:
    // 0x289514: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x289514u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289518:
    // 0x289518: 0x0  nop
    ctx->pc = 0x289518u;
    // NOP
label_28951c:
    // 0x28951c: 0xe7a0028c  swc1        $f0, 0x28C($sp)
    ctx->pc = 0x28951cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 652), bits); }
label_289520:
    // 0x289520: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x289520u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289524:
    // 0x289524: 0x27a50288  addiu       $a1, $sp, 0x288
    ctx->pc = 0x289524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
label_289528:
    // 0x289528: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x289528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28952c:
    // 0x28952c: 0xc0a2b20  jal         func_28AC80
label_289530:
    if (ctx->pc == 0x289530u) {
        ctx->pc = 0x289534u;
        goto label_289534;
    }
    ctx->pc = 0x28952Cu;
    SET_GPR_U32(ctx, 31, 0x289534u);
    ctx->pc = 0x28AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AC80u, 0x28952Cu, 0x289534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289534u;
label_289534:
    // 0x289534: 0x27a40284  addiu       $a0, $sp, 0x284
    ctx->pc = 0x289534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
label_289538:
    // 0x289538: 0xc0a2b20  jal         func_28AC80
label_28953c:
    if (ctx->pc == 0x28953Cu) {
        ctx->pc = 0x289540u;
        goto label_289540;
    }
    ctx->pc = 0x289538u;
    SET_GPR_U32(ctx, 31, 0x289540u);
    ctx->pc = 0x28AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AC80u, 0x289538u, 0x289540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289540u;
label_289540:
    // 0x289540: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x289540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289544:
    // 0x289544: 0xc7a002b8  lwc1        $f0, 0x2B8($sp)
    ctx->pc = 0x289544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289548:
    // 0x289548: 0xe7a00294  swc1        $f0, 0x294($sp)
    ctx->pc = 0x289548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 660), bits); }
label_28954c:
    // 0x28954c: 0x27a4021c  addiu       $a0, $sp, 0x21C
    ctx->pc = 0x28954cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
label_289550:
    // 0x289550: 0x27a501b8  addiu       $a1, $sp, 0x1B8
    ctx->pc = 0x289550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_289554:
    // 0x289554: 0xc0a2b00  jal         func_28AC00
label_289558:
    if (ctx->pc == 0x289558u) {
        ctx->pc = 0x28955Cu;
        goto label_28955c;
    }
    ctx->pc = 0x289554u;
    SET_GPR_U32(ctx, 31, 0x28955Cu);
    ctx->pc = 0x28AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AC00u, 0x289554u, 0x28955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28955Cu;
label_28955c:
    // 0x28955c: 0x27a40288  addiu       $a0, $sp, 0x288
    ctx->pc = 0x28955cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
label_289560:
    // 0x289560: 0x27a5021c  addiu       $a1, $sp, 0x21C
    ctx->pc = 0x289560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
label_289564:
    // 0x289564: 0xc0a2af0  jal         func_28ABC0
label_289568:
    if (ctx->pc == 0x289568u) {
        ctx->pc = 0x28956Cu;
        goto label_28956c;
    }
    ctx->pc = 0x289564u;
    SET_GPR_U32(ctx, 31, 0x28956Cu);
    ctx->pc = 0x28ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ABC0u, 0x289564u, 0x28956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28956Cu;
label_28956c:
    // 0x28956c: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x28956cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_289570:
    // 0x289570: 0x10000046  b           . + 4 + (0x46 << 2)
label_289574:
    if (ctx->pc == 0x289574u) {
        ctx->pc = 0x289578u;
        goto label_289578;
    }
    ctx->pc = 0x289570u;
    {
        const bool branch_taken_0x289570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289570) {
            ctx->pc = 0x28968Cu;
            goto label_28968c;
        }
    }
    ctx->pc = 0x289578u;
label_289578:
    // 0x289578: 0x27a40288  addiu       $a0, $sp, 0x288
    ctx->pc = 0x289578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
label_28957c:
    // 0x28957c: 0xc0a2ae8  jal         func_28ABA0
label_289580:
    if (ctx->pc == 0x289580u) {
        ctx->pc = 0x289584u;
        goto label_289584;
    }
    ctx->pc = 0x28957Cu;
    SET_GPR_U32(ctx, 31, 0x289584u);
    ctx->pc = 0x28ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ABA0u, 0x28957Cu, 0x289584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289584u;
label_289584:
    // 0x289584: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x289584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289588:
    // 0x289588: 0xe7a00298  swc1        $f0, 0x298($sp)
    ctx->pc = 0x289588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
label_28958c:
    // 0x28958c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28958cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289590:
    // 0x289590: 0x0  nop
    ctx->pc = 0x289590u;
    // NOP
label_289594:
    // 0x289594: 0xe7a0028c  swc1        $f0, 0x28C($sp)
    ctx->pc = 0x289594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 652), bits); }
label_289598:
    // 0x289598: 0x27a40218  addiu       $a0, $sp, 0x218
    ctx->pc = 0x289598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
label_28959c:
    // 0x28959c: 0x27a501c8  addiu       $a1, $sp, 0x1C8
    ctx->pc = 0x28959cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_2895a0:
    // 0x2895a0: 0xc0a2b00  jal         func_28AC00
label_2895a4:
    if (ctx->pc == 0x2895A4u) {
        ctx->pc = 0x2895A8u;
        goto label_2895a8;
    }
    ctx->pc = 0x2895A0u;
    SET_GPR_U32(ctx, 31, 0x2895A8u);
    ctx->pc = 0x28AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AC00u, 0x2895A0u, 0x2895A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2895A8u;
label_2895a8:
    // 0x2895a8: 0x27a80284  addiu       $t0, $sp, 0x284
    ctx->pc = 0x2895a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
label_2895ac:
    // 0x2895ac: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2895acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2895b0:
    // 0x2895b0: 0x27a60218  addiu       $a2, $sp, 0x218
    ctx->pc = 0x2895b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 536));
label_2895b4:
    // 0x2895b4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2895b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2895b8:
    // 0x2895b8: 0xc0a2af0  jal         func_28ABC0
label_2895bc:
    if (ctx->pc == 0x2895BCu) {
        ctx->pc = 0x2895C0u;
        goto label_2895c0;
    }
    ctx->pc = 0x2895B8u;
    SET_GPR_U32(ctx, 31, 0x2895C0u);
    ctx->pc = 0x28ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ABC0u, 0x2895B8u, 0x2895C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2895C0u;
label_2895c0:
    // 0x2895c0: 0x10000022  b           . + 4 + (0x22 << 2)
label_2895c4:
    if (ctx->pc == 0x2895C4u) {
        ctx->pc = 0x2895C8u;
        goto label_2895c8;
    }
    ctx->pc = 0x2895C0u;
    {
        const bool branch_taken_0x2895c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2895c0) {
            ctx->pc = 0x28964Cu;
            goto label_28964c;
        }
    }
    ctx->pc = 0x2895C8u;
label_2895c8:
    // 0x2895c8: 0x27a40284  addiu       $a0, $sp, 0x284
    ctx->pc = 0x2895c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
label_2895cc:
    // 0x2895cc: 0xc0a2ae8  jal         func_28ABA0
label_2895d0:
    if (ctx->pc == 0x2895D0u) {
        ctx->pc = 0x2895D4u;
        goto label_2895d4;
    }
    ctx->pc = 0x2895CCu;
    SET_GPR_U32(ctx, 31, 0x2895D4u);
    ctx->pc = 0x28ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ABA0u, 0x2895CCu, 0x2895D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2895D4u;
label_2895d4:
    // 0x2895d4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2895d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2895d8:
    // 0x2895d8: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x2895d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2895dc:
    // 0x2895dc: 0xe7a00290  swc1        $f0, 0x290($sp)
    ctx->pc = 0x2895dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
label_2895e0:
    // 0x2895e0: 0xc7a1028c  lwc1        $f1, 0x28C($sp)
    ctx->pc = 0x2895e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2895e4:
    // 0x2895e4: 0xc7a002ac  lwc1        $f0, 0x2AC($sp)
    ctx->pc = 0x2895e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2895e8:
    // 0x2895e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2895e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2895ec:
    // 0x2895ec: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_2895f0:
    if (ctx->pc == 0x2895F0u) {
        ctx->pc = 0x2895F4u;
        goto label_2895f4;
    }
    ctx->pc = 0x2895ECu;
    {
        const bool branch_taken_0x2895ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2895ec) {
            ctx->pc = 0x289638u;
            goto label_289638;
        }
    }
    ctx->pc = 0x2895F4u;
label_2895f4:
    // 0x2895f4: 0xc7a10290  lwc1        $f1, 0x290($sp)
    ctx->pc = 0x2895f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2895f8:
    // 0x2895f8: 0xc7a002a8  lwc1        $f0, 0x2A8($sp)
    ctx->pc = 0x2895f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2895fc:
    // 0x2895fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2895fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_289600:
    // 0x289600: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_289604:
    if (ctx->pc == 0x289604u) {
        ctx->pc = 0x289608u;
        goto label_289608;
    }
    ctx->pc = 0x289600u;
    {
        const bool branch_taken_0x289600 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x289600) {
            ctx->pc = 0x289638u;
            goto label_289638;
        }
    }
    ctx->pc = 0x289608u;
label_289608:
    // 0x289608: 0xc7a10294  lwc1        $f1, 0x294($sp)
    ctx->pc = 0x289608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28960c:
    // 0x28960c: 0xc7a002a0  lwc1        $f0, 0x2A0($sp)
    ctx->pc = 0x28960cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289610:
    // 0x289610: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x289610u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_289614:
    // 0x289614: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_289618:
    if (ctx->pc == 0x289618u) {
        ctx->pc = 0x28961Cu;
        goto label_28961c;
    }
    ctx->pc = 0x289614u;
    {
        const bool branch_taken_0x289614 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x289614) {
            ctx->pc = 0x289638u;
            goto label_289638;
        }
    }
    ctx->pc = 0x28961Cu;
label_28961c:
    // 0x28961c: 0xc7a10298  lwc1        $f1, 0x298($sp)
    ctx->pc = 0x28961cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_289620:
    // 0x289620: 0xc7a0029c  lwc1        $f0, 0x29C($sp)
    ctx->pc = 0x289620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289624:
    // 0x289624: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x289624u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_289628:
    // 0x289628: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_28962c:
    if (ctx->pc == 0x28962Cu) {
        ctx->pc = 0x289630u;
        goto label_289630;
    }
    ctx->pc = 0x289628u;
    {
        const bool branch_taken_0x289628 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x289628) {
            ctx->pc = 0x289638u;
            goto label_289638;
        }
    }
    ctx->pc = 0x289630u;
label_289630:
    // 0x289630: 0x26e30002  addiu       $v1, $s7, 0x2
    ctx->pc = 0x289630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
label_289634:
    // 0x289634: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x289634u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_289638:
    // 0x289638: 0xc7a00290  lwc1        $f0, 0x290($sp)
    ctx->pc = 0x289638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28963c:
    // 0x28963c: 0xe7a0028c  swc1        $f0, 0x28C($sp)
    ctx->pc = 0x28963cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 652), bits); }
label_289640:
    // 0x289640: 0x27a40284  addiu       $a0, $sp, 0x284
    ctx->pc = 0x289640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
label_289644:
    // 0x289644: 0xc0a2ad8  jal         func_28AB60
label_289648:
    if (ctx->pc == 0x289648u) {
        ctx->pc = 0x28964Cu;
        goto label_28964c;
    }
    ctx->pc = 0x289644u;
    SET_GPR_U32(ctx, 31, 0x28964Cu);
    ctx->pc = 0x28AB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB60u, 0x289644u, 0x28964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28964Cu;
label_28964c:
    // 0x28964c: 0x27a60214  addiu       $a2, $sp, 0x214
    ctx->pc = 0x28964cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 532));
label_289650:
    // 0x289650: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x289650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_289654:
    // 0x289654: 0x27a501c8  addiu       $a1, $sp, 0x1C8
    ctx->pc = 0x289654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_289658:
    // 0x289658: 0xc0a2aac  jal         func_28AAB0
label_28965c:
    if (ctx->pc == 0x28965Cu) {
        ctx->pc = 0x289660u;
        goto label_289660;
    }
    ctx->pc = 0x289658u;
    SET_GPR_U32(ctx, 31, 0x289660u);
    ctx->pc = 0x28AAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAB0u, 0x289658u, 0x289660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289660u;
label_289660:
    // 0x289660: 0x27a40284  addiu       $a0, $sp, 0x284
    ctx->pc = 0x289660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
label_289664:
    // 0x289664: 0x27a50214  addiu       $a1, $sp, 0x214
    ctx->pc = 0x289664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 532));
label_289668:
    // 0x289668: 0xc041998  jal         func_106660
label_28966c:
    if (ctx->pc == 0x28966Cu) {
        ctx->pc = 0x289670u;
        goto label_289670;
    }
    ctx->pc = 0x289668u;
    SET_GPR_U32(ctx, 31, 0x289670u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x289668u, 0x289670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289670u;
label_289670:
    // 0x289670: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_289674:
    if (ctx->pc == 0x289674u) {
        ctx->pc = 0x289678u;
        goto label_289678;
    }
    ctx->pc = 0x289670u;
    {
        const bool branch_taken_0x289670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289670) {
            ctx->pc = 0x2895C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2895c8;
        }
    }
    ctx->pc = 0x289678u;
label_289678:
    // 0x289678: 0xc7a00298  lwc1        $f0, 0x298($sp)
    ctx->pc = 0x289678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28967c:
    // 0x28967c: 0xe7a00294  swc1        $f0, 0x294($sp)
    ctx->pc = 0x28967cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 660), bits); }
label_289680:
    // 0x289680: 0x27a40288  addiu       $a0, $sp, 0x288
    ctx->pc = 0x289680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
label_289684:
    // 0x289684: 0xc0a2ad8  jal         func_28AB60
label_289688:
    if (ctx->pc == 0x289688u) {
        ctx->pc = 0x28968Cu;
        goto label_28968c;
    }
    ctx->pc = 0x289684u;
    SET_GPR_U32(ctx, 31, 0x28968Cu);
    ctx->pc = 0x28AB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB60u, 0x289684u, 0x28968Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28968Cu;
label_28968c:
    // 0x28968c: 0x27a20210  addiu       $v0, $sp, 0x210
    ctx->pc = 0x28968cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_289690:
    // 0x289690: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x289690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_289694:
    // 0x289694: 0x7ba400f0  lq          $a0, 0xF0($sp)
    ctx->pc = 0x289694u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_289698:
    // 0x289698: 0x27a501b8  addiu       $a1, $sp, 0x1B8
    ctx->pc = 0x289698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_28969c:
    // 0x28969c: 0xc0a2aac  jal         func_28AAB0
label_2896a0:
    if (ctx->pc == 0x2896A0u) {
        ctx->pc = 0x2896A4u;
        goto label_2896a4;
    }
    ctx->pc = 0x28969Cu;
    SET_GPR_U32(ctx, 31, 0x2896A4u);
    ctx->pc = 0x28AAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAB0u, 0x28969Cu, 0x2896A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2896A4u;
label_2896a4:
    // 0x2896a4: 0x27a40288  addiu       $a0, $sp, 0x288
    ctx->pc = 0x2896a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
label_2896a8:
    // 0x2896a8: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x2896a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_2896ac:
    // 0x2896ac: 0xc041998  jal         func_106660
label_2896b0:
    if (ctx->pc == 0x2896B0u) {
        ctx->pc = 0x2896B4u;
        goto label_2896b4;
    }
    ctx->pc = 0x2896ACu;
    SET_GPR_U32(ctx, 31, 0x2896B4u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x2896ACu, 0x2896B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2896B4u;
label_2896b4:
    // 0x2896b4: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
label_2896b8:
    if (ctx->pc == 0x2896B8u) {
        ctx->pc = 0x2896BCu;
        goto label_2896bc;
    }
    ctx->pc = 0x2896B4u;
    {
        const bool branch_taken_0x2896b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2896b4) {
            ctx->pc = 0x289578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_289578;
        }
    }
    ctx->pc = 0x2896BCu;
label_2896bc:
    // 0x2896bc: 0x16e0000e  bnez        $s7, . + 4 + (0xE << 2)
label_2896c0:
    if (ctx->pc == 0x2896C0u) {
        ctx->pc = 0x2896C4u;
        goto label_2896c4;
    }
    ctx->pc = 0x2896BCu;
    {
        const bool branch_taken_0x2896bc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2896bc) {
            ctx->pc = 0x2896F8u;
            goto label_2896f8;
        }
    }
    ctx->pc = 0x2896C4u;
label_2896c4:
    // 0x2896c4: 0xafa00228  sw          $zero, 0x228($sp)
    ctx->pc = 0x2896c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 0));
label_2896c8:
    // 0x2896c8: 0x27a401b8  addiu       $a0, $sp, 0x1B8
    ctx->pc = 0x2896c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_2896cc:
    // 0x2896cc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2896ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2896d0:
    // 0x2896d0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2896d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2896d4:
    // 0x2896d4: 0xc0a2a04  jal         func_28A810
label_2896d8:
    if (ctx->pc == 0x2896D8u) {
        ctx->pc = 0x2896DCu;
        goto label_2896dc;
    }
    ctx->pc = 0x2896D4u;
    SET_GPR_U32(ctx, 31, 0x2896DCu);
    ctx->pc = 0x28A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A810u, 0x2896D4u, 0x2896DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2896DCu;
label_2896dc:
    // 0x2896dc: 0x27a401c8  addiu       $a0, $sp, 0x1C8
    ctx->pc = 0x2896dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_2896e0:
    // 0x2896e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2896e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2896e4:
    // 0x2896e4: 0xc0a2a04  jal         func_28A810
label_2896e8:
    if (ctx->pc == 0x2896E8u) {
        ctx->pc = 0x2896ECu;
        goto label_2896ec;
    }
    ctx->pc = 0x2896E4u;
    SET_GPR_U32(ctx, 31, 0x2896ECu);
    ctx->pc = 0x28A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A810u, 0x2896E4u, 0x2896ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2896ECu;
label_2896ec:
    // 0x2896ec: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x2896ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
label_2896f0:
    // 0x2896f0: 0x10000401  b           . + 4 + (0x401 << 2)
label_2896f4:
    if (ctx->pc == 0x2896F4u) {
        ctx->pc = 0x2896F8u;
        goto label_2896f8;
    }
    ctx->pc = 0x2896F0u;
    {
        const bool branch_taken_0x2896f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2896f0) {
            ctx->pc = 0x28A6F8u;
            goto label_28a6f8;
        }
    }
    ctx->pc = 0x2896F8u;
label_2896f8:
    // 0x2896f8: 0x27a801c8  addiu       $t0, $sp, 0x1C8
    ctx->pc = 0x2896f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_2896fc:
    // 0x2896fc: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2896fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_289700:
    // 0x289700: 0xc0a29f0  jal         func_28A7C0
label_289704:
    if (ctx->pc == 0x289704u) {
        ctx->pc = 0x289708u;
        goto label_289708;
    }
    ctx->pc = 0x289700u;
    SET_GPR_U32(ctx, 31, 0x289708u);
    ctx->pc = 0x28A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A7C0u, 0x289700u, 0x289708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289708u;
label_289708:
    // 0x289708: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x289708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28970c:
    // 0x28970c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x28970cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_289710:
    // 0x289710: 0x27a401b8  addiu       $a0, $sp, 0x1B8
    ctx->pc = 0x289710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_289714:
    // 0x289714: 0xc0a29f0  jal         func_28A7C0
label_289718:
    if (ctx->pc == 0x289718u) {
        ctx->pc = 0x28971Cu;
        goto label_28971c;
    }
    ctx->pc = 0x289714u;
    SET_GPR_U32(ctx, 31, 0x28971Cu);
    ctx->pc = 0x28A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A7C0u, 0x289714u, 0x28971Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28971Cu;
label_28971c:
    // 0x28971c: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x28971cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_289720:
    // 0x289720: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x289720u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_289724:
    // 0x289724: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x289724u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_289728:
    // 0x289728: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x289728u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28972c:
    // 0x28972c: 0x149040  sll         $s2, $s4, 1
    ctx->pc = 0x28972cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_289730:
    // 0x289730: 0xafb20280  sw          $s2, 0x280($sp)
    ctx->pc = 0x289730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 18));
label_289734:
    // 0x289734: 0x178040  sll         $s0, $s7, 1
    ctx->pc = 0x289734u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
label_289738:
    // 0x289738: 0xafb0027c  sw          $s0, 0x27C($sp)
    ctx->pc = 0x289738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 16));
label_28973c:
    // 0x28973c: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x28973cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_289740:
    // 0x289740: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x289740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_289744:
    // 0x289744: 0xafa20280  sw          $v0, 0x280($sp)
    ctx->pc = 0x289744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
label_289748:
    // 0x289748: 0x8fa2027c  lw          $v0, 0x27C($sp)
    ctx->pc = 0x289748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
label_28974c:
    // 0x28974c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x28974cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_289750:
    // 0x289750: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x289750u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_289754:
    // 0x289754: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x289754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_289758:
    // 0x289758: 0xafa5027c  sw          $a1, 0x27C($sp)
    ctx->pc = 0x289758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 5));
label_28975c:
    // 0x28975c: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x28975cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_289760:
    // 0x289760: 0x8fa5027c  lw          $a1, 0x27C($sp)
    ctx->pc = 0x289760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
label_289764:
    // 0x289764: 0x240600f9  addiu       $a2, $zero, 0xF9
    ctx->pc = 0x289764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
label_289768:
    // 0x289768: 0xc0e2dbc  jal         func_38B6F0
label_28976c:
    if (ctx->pc == 0x28976Cu) {
        ctx->pc = 0x289770u;
        goto label_289770;
    }
    ctx->pc = 0x289768u;
    SET_GPR_U32(ctx, 31, 0x289770u);
    ctx->pc = 0x38B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B6F0u, 0x289768u, 0x289770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289770u;
label_289770:
    // 0x289770: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x289770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_289774:
    // 0x289774: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x289774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_289778:
    // 0x289778: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x289778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_28977c:
    // 0x28977c: 0xafa40278  sw          $a0, 0x278($sp)
    ctx->pc = 0x28977cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 4));
label_289780:
    // 0x289780: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x289780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_289784:
    // 0x289784: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x289784u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_289788:
    // 0x289788: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x289788u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28978c:
    // 0x28978c: 0x8fb20278  lw          $s2, 0x278($sp)
    ctx->pc = 0x28978cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_289790:
    // 0x289790: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x289790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_289794:
    // 0x289794: 0xafa20274  sw          $v0, 0x274($sp)
    ctx->pc = 0x289794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
label_289798:
    // 0x289798: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x289798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_28979c:
    // 0x28979c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x28979cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2897a0:
    // 0x2897a0: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x2897a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2897a4:
    // 0x2897a4: 0xafa50270  sw          $a1, 0x270($sp)
    ctx->pc = 0x2897a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 5));
label_2897a8:
    // 0x2897a8: 0x27a2026c  addiu       $v0, $sp, 0x26C
    ctx->pc = 0x2897a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 620));
label_2897ac:
    // 0x2897ac: 0xc780a294  lwc1        $f0, -0x5D6C($gp)
    ctx->pc = 0x2897acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2897b0:
    // 0x2897b0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2897b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2897b4:
    // 0x2897b4: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2897b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
label_2897b8:
    // 0x2897b8: 0x2484d450  addiu       $a0, $a0, -0x2BB0
    ctx->pc = 0x2897b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956112));
label_2897bc:
    // 0x2897bc: 0x27a501a8  addiu       $a1, $sp, 0x1A8
    ctx->pc = 0x2897bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_2897c0:
    // 0x2897c0: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2897c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_2897c4:
    // 0x2897c4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2897c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2897c8:
    // 0x2897c8: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x2897c8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_2897cc:
    // 0x2897cc: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2897ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_2897d0:
    // 0x2897d0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2897d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2897d4:
    // 0x2897d4: 0x2442d460  addiu       $v0, $v0, -0x2BA0
    ctx->pc = 0x2897d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956128));
label_2897d8:
    // 0x2897d8: 0x27a40198  addiu       $a0, $sp, 0x198
    ctx->pc = 0x2897d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_2897dc:
    // 0x2897dc: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2897dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_2897e0:
    // 0x2897e0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2897e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2897e4:
    // 0x2897e4: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x2897e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_2897e8:
    // 0x2897e8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2897e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2897ec:
    // 0x2897ec: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x2897ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
label_2897f0:
    // 0x2897f0: 0x2484d470  addiu       $a0, $a0, -0x2B90
    ctx->pc = 0x2897f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956144));
label_2897f4:
    // 0x2897f4: 0x27a30188  addiu       $v1, $sp, 0x188
    ctx->pc = 0x2897f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_2897f8:
    // 0x2897f8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x2897f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_2897fc:
    // 0x2897fc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2897fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289800:
    // 0x289800: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x289800u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_289804:
    // 0x289804: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x289804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_289808:
    // 0x289808: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x289808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_28980c:
    // 0x28980c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x28980cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289810:
    // 0x289810: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x289810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_289814:
    // 0x289814: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x289814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_289818:
    // 0x289818: 0xafa20268  sw          $v0, 0x268($sp)
    ctx->pc = 0x289818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
label_28981c:
    // 0x28981c: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x28981cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_289820:
    // 0x289820: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x289820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_289824:
    // 0x289824: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x289824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_289828:
    // 0x289828: 0x8f84bc24  lw          $a0, -0x43DC($gp)
    ctx->pc = 0x289828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949924)));
label_28982c:
    // 0x28982c: 0x8fa50268  lw          $a1, 0x268($sp)
    ctx->pc = 0x28982cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_289830:
    // 0x289830: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x289830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_289834:
    // 0x289834: 0xc0a69b0  jal         func_29A6C0
label_289838:
    if (ctx->pc == 0x289838u) {
        ctx->pc = 0x28983Cu;
        goto label_28983c;
    }
    ctx->pc = 0x289834u;
    SET_GPR_U32(ctx, 31, 0x28983Cu);
    ctx->pc = 0x29A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6C0u, 0x289834u, 0x28983Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28983Cu;
label_28983c:
    // 0x28983c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28983cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289840:
    // 0x289840: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x289840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_289844:
    // 0x289844: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x289844u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_289848:
    // 0x289848: 0x320f809  jalr        $t9
label_28984c:
    if (ctx->pc == 0x28984Cu) {
        ctx->pc = 0x289850u;
        goto label_289850;
    }
    ctx->pc = 0x289848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x289850u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289848u, 0x289850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x289850u;
label_289850:
    // 0x289850: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x289850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289854:
    // 0x289854: 0xc0e3736  jal         func_38DCD8
label_289858:
    if (ctx->pc == 0x289858u) {
        ctx->pc = 0x28985Cu;
        goto label_28985c;
    }
    ctx->pc = 0x289854u;
    SET_GPR_U32(ctx, 31, 0x28985Cu);
    ctx->pc = 0x38DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DCD8u, 0x289854u, 0x28985Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28985Cu;
label_28985c:
    // 0x28985c: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x28985cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
label_289860:
    // 0x289860: 0x8f84bc24  lw          $a0, -0x43DC($gp)
    ctx->pc = 0x289860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949924)));
label_289864:
    // 0x289864: 0x8fa50264  lw          $a1, 0x264($sp)
    ctx->pc = 0x289864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_289868:
    // 0x289868: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x289868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28986c:
    // 0x28986c: 0xc0a69b0  jal         func_29A6C0
label_289870:
    if (ctx->pc == 0x289870u) {
        ctx->pc = 0x289874u;
        goto label_289874;
    }
    ctx->pc = 0x28986Cu;
    SET_GPR_U32(ctx, 31, 0x289874u);
    ctx->pc = 0x29A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6C0u, 0x28986Cu, 0x289874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289874u;
label_289874:
    // 0x289874: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x289874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289878:
    // 0x289878: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x289878u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28987c:
    // 0x28987c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x28987cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_289880:
    // 0x289880: 0x320f809  jalr        $t9
label_289884:
    if (ctx->pc == 0x289884u) {
        ctx->pc = 0x289888u;
        goto label_289888;
    }
    ctx->pc = 0x289880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x289888u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289880u, 0x289888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x289888u;
label_289888:
    // 0x289888: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x289888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28988c:
    // 0x28988c: 0xc0e3736  jal         func_38DCD8
label_289890:
    if (ctx->pc == 0x289890u) {
        ctx->pc = 0x289894u;
        goto label_289894;
    }
    ctx->pc = 0x28988Cu;
    SET_GPR_U32(ctx, 31, 0x289894u);
    ctx->pc = 0x38DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DCD8u, 0x28988Cu, 0x289894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289894u;
label_289894:
    // 0x289894: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x289894u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289898:
    // 0x289898: 0xafa3025c  sw          $v1, 0x25C($sp)
    ctx->pc = 0x289898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 3));
label_28989c:
    // 0x28989c: 0x8f84bc24  lw          $a0, -0x43DC($gp)
    ctx->pc = 0x28989cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949924)));
label_2898a0:
    // 0x2898a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2898a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2898a4:
    // 0x2898a4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2898a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2898a8:
    // 0x2898a8: 0xc0a69b0  jal         func_29A6C0
label_2898ac:
    if (ctx->pc == 0x2898ACu) {
        ctx->pc = 0x2898B0u;
        goto label_2898b0;
    }
    ctx->pc = 0x2898A8u;
    SET_GPR_U32(ctx, 31, 0x2898B0u);
    ctx->pc = 0x29A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6C0u, 0x2898A8u, 0x2898B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2898B0u;
label_2898b0:
    // 0x2898b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2898b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2898b4:
    // 0x2898b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2898b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2898b8:
    // 0x2898b8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2898b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2898bc:
    // 0x2898bc: 0x320f809  jalr        $t9
label_2898c0:
    if (ctx->pc == 0x2898C0u) {
        ctx->pc = 0x2898C4u;
        goto label_2898c4;
    }
    ctx->pc = 0x2898BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2898C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2898BCu, 0x2898C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2898C4u;
label_2898c4:
    // 0x2898c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2898c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2898c8:
    // 0x2898c8: 0xc0e3736  jal         func_38DCD8
label_2898cc:
    if (ctx->pc == 0x2898CCu) {
        ctx->pc = 0x2898D0u;
        goto label_2898d0;
    }
    ctx->pc = 0x2898C8u;
    SET_GPR_U32(ctx, 31, 0x2898D0u);
    ctx->pc = 0x38DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DCD8u, 0x2898C8u, 0x2898D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2898D0u;
label_2898d0:
    // 0x2898d0: 0xafa20258  sw          $v0, 0x258($sp)
    ctx->pc = 0x2898d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 2));
label_2898d4:
    // 0x2898d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2898d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2898d8:
    // 0x2898d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2898d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2898dc:
    // 0x2898dc: 0x27a4020c  addiu       $a0, $sp, 0x20C
    ctx->pc = 0x2898dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 524));
label_2898e0:
    // 0x2898e0: 0x27a501b8  addiu       $a1, $sp, 0x1B8
    ctx->pc = 0x2898e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_2898e4:
    // 0x2898e4: 0xc0a2b00  jal         func_28AC00
label_2898e8:
    if (ctx->pc == 0x2898E8u) {
        ctx->pc = 0x2898ECu;
        goto label_2898ec;
    }
    ctx->pc = 0x2898E4u;
    SET_GPR_U32(ctx, 31, 0x2898ECu);
    ctx->pc = 0x28AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AC00u, 0x2898E4u, 0x2898ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2898ECu;
label_2898ec:
    // 0x2898ec: 0x27a40288  addiu       $a0, $sp, 0x288
    ctx->pc = 0x2898ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
label_2898f0:
    // 0x2898f0: 0x27a5020c  addiu       $a1, $sp, 0x20C
    ctx->pc = 0x2898f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 524));
label_2898f4:
    // 0x2898f4: 0xc0a2af0  jal         func_28ABC0
label_2898f8:
    if (ctx->pc == 0x2898F8u) {
        ctx->pc = 0x2898FCu;
        goto label_2898fc;
    }
    ctx->pc = 0x2898F4u;
    SET_GPR_U32(ctx, 31, 0x2898FCu);
    ctx->pc = 0x28ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ABC0u, 0x2898F4u, 0x2898FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2898FCu;
label_2898fc:
    // 0x2898fc: 0xc7a002b8  lwc1        $f0, 0x2B8($sp)
    ctx->pc = 0x2898fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289900:
    // 0x289900: 0xe7a00294  swc1        $f0, 0x294($sp)
    ctx->pc = 0x289900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 660), bits); }
label_289904:
    // 0x289904: 0xafa00254  sw          $zero, 0x254($sp)
    ctx->pc = 0x289904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 0));
label_289908:
    // 0x289908: 0x10000170  b           . + 4 + (0x170 << 2)
label_28990c:
    if (ctx->pc == 0x28990Cu) {
        ctx->pc = 0x289910u;
        goto label_289910;
    }
    ctx->pc = 0x289908u;
    {
        const bool branch_taken_0x289908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289908) {
            ctx->pc = 0x289ECCu;
            goto label_289ecc;
        }
    }
    ctx->pc = 0x289910u;
label_289910:
    // 0x289910: 0x27a40208  addiu       $a0, $sp, 0x208
    ctx->pc = 0x289910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
label_289914:
    // 0x289914: 0x27a501c8  addiu       $a1, $sp, 0x1C8
    ctx->pc = 0x289914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_289918:
    // 0x289918: 0xc0a2b00  jal         func_28AC00
label_28991c:
    if (ctx->pc == 0x28991Cu) {
        ctx->pc = 0x289920u;
        goto label_289920;
    }
    ctx->pc = 0x289918u;
    SET_GPR_U32(ctx, 31, 0x289920u);
    ctx->pc = 0x28AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AC00u, 0x289918u, 0x289920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289920u;
label_289920:
    // 0x289920: 0x27a40284  addiu       $a0, $sp, 0x284
    ctx->pc = 0x289920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
label_289924:
    // 0x289924: 0x27a50208  addiu       $a1, $sp, 0x208
    ctx->pc = 0x289924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
label_289928:
    // 0x289928: 0xc0a2af0  jal         func_28ABC0
label_28992c:
    if (ctx->pc == 0x28992Cu) {
        ctx->pc = 0x289930u;
        goto label_289930;
    }
    ctx->pc = 0x289928u;
    SET_GPR_U32(ctx, 31, 0x289930u);
    ctx->pc = 0x28ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ABC0u, 0x289928u, 0x289930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289930u;
label_289930:
    // 0x289930: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x289930u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289934:
    // 0x289934: 0x0  nop
    ctx->pc = 0x289934u;
    // NOP
label_289938:
    // 0x289938: 0xe7a0028c  swc1        $f0, 0x28C($sp)
    ctx->pc = 0x289938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 652), bits); }
label_28993c:
    // 0x28993c: 0x27a40204  addiu       $a0, $sp, 0x204
    ctx->pc = 0x28993cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
label_289940:
    // 0x289940: 0x27a501b8  addiu       $a1, $sp, 0x1B8
    ctx->pc = 0x289940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_289944:
    // 0x289944: 0xc0a2aac  jal         func_28AAB0
label_289948:
    if (ctx->pc == 0x289948u) {
        ctx->pc = 0x28994Cu;
        goto label_28994c;
    }
    ctx->pc = 0x289944u;
    SET_GPR_U32(ctx, 31, 0x28994Cu);
    ctx->pc = 0x28AAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAB0u, 0x289944u, 0x28994Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28994Cu;
label_28994c:
    // 0x28994c: 0x27a40288  addiu       $a0, $sp, 0x288
    ctx->pc = 0x28994cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
label_289950:
    // 0x289950: 0x27a50204  addiu       $a1, $sp, 0x204
    ctx->pc = 0x289950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
label_289954:
    // 0x289954: 0xc041998  jal         func_106660
label_289958:
    if (ctx->pc == 0x289958u) {
        ctx->pc = 0x28995Cu;
        goto label_28995c;
    }
    ctx->pc = 0x289954u;
    SET_GPR_U32(ctx, 31, 0x28995Cu);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x289954u, 0x28995Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28995Cu;
label_28995c:
    // 0x28995c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_289960:
    if (ctx->pc == 0x289960u) {
        ctx->pc = 0x289964u;
        goto label_289964;
    }
    ctx->pc = 0x28995Cu;
    {
        const bool branch_taken_0x28995c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28995c) {
            ctx->pc = 0x28998Cu;
            goto label_28998c;
        }
    }
    ctx->pc = 0x289964u;
label_289964:
    // 0x289964: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x289964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_289968:
    // 0x289968: 0x27a50288  addiu       $a1, $sp, 0x288
    ctx->pc = 0x289968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
label_28996c:
    // 0x28996c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28996cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289970:
    // 0x289970: 0xc0a29cc  jal         func_28A730
label_289974:
    if (ctx->pc == 0x289974u) {
        ctx->pc = 0x289978u;
        goto label_289978;
    }
    ctx->pc = 0x289970u;
    SET_GPR_U32(ctx, 31, 0x289978u);
    ctx->pc = 0x28A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A730u, 0x289970u, 0x289978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289978u;
label_289978:
    // 0x289978: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x289978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_28997c:
    // 0x28997c: 0xc0a2ae8  jal         func_28ABA0
label_289980:
    if (ctx->pc == 0x289980u) {
        ctx->pc = 0x289984u;
        goto label_289984;
    }
    ctx->pc = 0x28997Cu;
    SET_GPR_U32(ctx, 31, 0x289984u);
    ctx->pc = 0x28ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ABA0u, 0x28997Cu, 0x289984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289984u;
label_289984:
    // 0x289984: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x289984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289988:
    // 0x289988: 0xe7a00298  swc1        $f0, 0x298($sp)
    ctx->pc = 0x289988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
label_28998c:
    // 0x28998c: 0xafa00250  sw          $zero, 0x250($sp)
    ctx->pc = 0x28998cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 0));
label_289990:
    // 0x289990: 0x1000013e  b           . + 4 + (0x13E << 2)
label_289994:
    if (ctx->pc == 0x289994u) {
        ctx->pc = 0x289998u;
        goto label_289998;
    }
    ctx->pc = 0x289990u;
    {
        const bool branch_taken_0x289990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289990) {
            ctx->pc = 0x289E8Cu;
            goto label_289e8c;
        }
    }
    ctx->pc = 0x289998u;
label_289998:
    // 0x289998: 0x27a401fc  addiu       $a0, $sp, 0x1FC
    ctx->pc = 0x289998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 508));
label_28999c:
    // 0x28999c: 0x27a501c8  addiu       $a1, $sp, 0x1C8
    ctx->pc = 0x28999cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_2899a0:
    // 0x2899a0: 0xc0a2aac  jal         func_28AAB0
label_2899a4:
    if (ctx->pc == 0x2899A4u) {
        ctx->pc = 0x2899A8u;
        goto label_2899a8;
    }
    ctx->pc = 0x2899A0u;
    SET_GPR_U32(ctx, 31, 0x2899A8u);
    ctx->pc = 0x28AAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAB0u, 0x2899A0u, 0x2899A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2899A8u;
label_2899a8:
    // 0x2899a8: 0x27a50284  addiu       $a1, $sp, 0x284
    ctx->pc = 0x2899a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
label_2899ac:
    // 0x2899ac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2899acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2899b0:
    // 0x2899b0: 0x27a501fc  addiu       $a1, $sp, 0x1FC
    ctx->pc = 0x2899b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 508));
label_2899b4:
    // 0x2899b4: 0xc041998  jal         func_106660
label_2899b8:
    if (ctx->pc == 0x2899B8u) {
        ctx->pc = 0x2899BCu;
        goto label_2899bc;
    }
    ctx->pc = 0x2899B4u;
    SET_GPR_U32(ctx, 31, 0x2899BCu);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x2899B4u, 0x2899BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2899BCu;
label_2899bc:
    // 0x2899bc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2899c0:
    if (ctx->pc == 0x2899C0u) {
        ctx->pc = 0x2899C4u;
        goto label_2899c4;
    }
    ctx->pc = 0x2899BCu;
    {
        const bool branch_taken_0x2899bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2899bc) {
            ctx->pc = 0x2899ECu;
            goto label_2899ec;
        }
    }
    ctx->pc = 0x2899C4u;
label_2899c4:
    // 0x2899c4: 0x27a401f8  addiu       $a0, $sp, 0x1F8
    ctx->pc = 0x2899c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
label_2899c8:
    // 0x2899c8: 0x27a50284  addiu       $a1, $sp, 0x284
    ctx->pc = 0x2899c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
label_2899cc:
    // 0x2899cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2899ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2899d0:
    // 0x2899d0: 0xc0a29cc  jal         func_28A730
label_2899d4:
    if (ctx->pc == 0x2899D4u) {
        ctx->pc = 0x2899D8u;
        goto label_2899d8;
    }
    ctx->pc = 0x2899D0u;
    SET_GPR_U32(ctx, 31, 0x2899D8u);
    ctx->pc = 0x28A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A730u, 0x2899D0u, 0x2899D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2899D8u;
label_2899d8:
    // 0x2899d8: 0x27a401f8  addiu       $a0, $sp, 0x1F8
    ctx->pc = 0x2899d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
label_2899dc:
    // 0x2899dc: 0xc0a2ae8  jal         func_28ABA0
label_2899e0:
    if (ctx->pc == 0x2899E0u) {
        ctx->pc = 0x2899E4u;
        goto label_2899e4;
    }
    ctx->pc = 0x2899DCu;
    SET_GPR_U32(ctx, 31, 0x2899E4u);
    ctx->pc = 0x28ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ABA0u, 0x2899DCu, 0x2899E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2899E4u;
label_2899e4:
    // 0x2899e4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2899e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2899e8:
    // 0x2899e8: 0xe7a00290  swc1        $f0, 0x290($sp)
    ctx->pc = 0x2899e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
label_2899ec:
    // 0x2899ec: 0xc7a10294  lwc1        $f1, 0x294($sp)
    ctx->pc = 0x2899ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2899f0:
    // 0x2899f0: 0xc7a002b8  lwc1        $f0, 0x2B8($sp)
    ctx->pc = 0x2899f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2899f4:
    // 0x2899f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2899f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2899f8:
    // 0x2899f8: 0x3c043f40  lui         $a0, 0x3F40
    ctx->pc = 0x2899f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16192 << 16));
label_2899fc:
    // 0x2899fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2899fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289a00:
    // 0x289a00: 0x0  nop
    ctx->pc = 0x289a00u;
    // NOP
label_289a04:
    // 0x289a04: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x289a04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_289a08:
    // 0x289a08: 0x3c0542a0  lui         $a1, 0x42A0
    ctx->pc = 0x289a08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17056 << 16));
label_289a0c:
    // 0x289a0c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x289a0cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289a10:
    // 0x289a10: 0x0  nop
    ctx->pc = 0x289a10u;
    // NOP
label_289a14:
    // 0x289a14: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x289a14u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_289a18:
    // 0x289a18: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x289a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_289a1c:
    // 0x289a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x289a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289a20:
    // 0x289a20: 0x0  nop
    ctx->pc = 0x289a20u;
    // NOP
label_289a24:
    // 0x289a24: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x289a24u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_289a28:
    // 0x289a28: 0xe7a0024c  swc1        $f0, 0x24C($sp)
    ctx->pc = 0x289a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 588), bits); }
label_289a2c:
    // 0x289a2c: 0xc7a102b8  lwc1        $f1, 0x2B8($sp)
    ctx->pc = 0x289a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_289a30:
    // 0x289a30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x289a30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289a34:
    // 0x289a34: 0x0  nop
    ctx->pc = 0x289a34u;
    // NOP
label_289a38:
    // 0x289a38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x289a38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_289a3c:
    // 0x289a3c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_289a40:
    if (ctx->pc == 0x289A40u) {
        ctx->pc = 0x289A44u;
        goto label_289a44;
    }
    ctx->pc = 0x289A3Cu;
    {
        const bool branch_taken_0x289a3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x289a3c) {
            ctx->pc = 0x289A5Cu;
            goto label_289a5c;
        }
    }
    ctx->pc = 0x289A44u;
label_289a44:
    // 0x289a44: 0xc7a1024c  lwc1        $f1, 0x24C($sp)
    ctx->pc = 0x289a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_289a48:
    // 0x289a48: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x289a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_289a4c:
    // 0x289a4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x289a4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289a50:
    // 0x289a50: 0x0  nop
    ctx->pc = 0x289a50u;
    // NOP
label_289a54:
    // 0x289a54: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x289a54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_289a58:
    // 0x289a58: 0xe7a0024c  swc1        $f0, 0x24C($sp)
    ctx->pc = 0x289a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 588), bits); }
label_289a5c:
    // 0x289a5c: 0xc7a0028c  lwc1        $f0, 0x28C($sp)
    ctx->pc = 0x289a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289a60:
    // 0x289a60: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x289a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_289a64:
    // 0x289a64: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x289a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_289a68:
    // 0x289a68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x289a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_289a6c:
    // 0x289a6c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x289a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_289a70:
    // 0x289a70: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x289a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_289a74:
    // 0x289a74: 0xc7a00294  lwc1        $f0, 0x294($sp)
    ctx->pc = 0x289a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289a78:
    // 0x289a78: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x289a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_289a7c:
    // 0x289a7c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x289a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_289a80:
    // 0x289a80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x289a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_289a84:
    // 0x289a84: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x289a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_289a88:
    // 0x289a88: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x289a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_289a8c:
    // 0x289a8c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x289a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_289a90:
    // 0x289a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x289a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289a94:
    // 0x289a94: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x289a94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_289a98:
    // 0x289a98: 0xb03021  addu        $a2, $a1, $s0
    ctx->pc = 0x289a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_289a9c:
    // 0x289a9c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x289a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_289aa0:
    // 0x289aa0: 0x2623821  addu        $a3, $s3, $v0
    ctx->pc = 0x289aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_289aa4:
    // 0x289aa4: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x289aa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_289aa8:
    // 0x289aa8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x289aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_289aac:
    // 0x289aac: 0x8fa80270  lw          $t0, 0x270($sp)
    ctx->pc = 0x289aacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_289ab0:
    // 0x289ab0: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x289ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_289ab4:
    // 0x289ab4: 0x27a5026c  addiu       $a1, $sp, 0x26C
    ctx->pc = 0x289ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 620));
label_289ab8:
    // 0x289ab8: 0xc052608  jal         func_149820
label_289abc:
    if (ctx->pc == 0x289ABCu) {
        ctx->pc = 0x289AC0u;
        goto label_289ac0;
    }
    ctx->pc = 0x289AB8u;
    SET_GPR_U32(ctx, 31, 0x289AC0u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x289AB8u, 0x289AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289AC0u;
label_289ac0:
    // 0x289ac0: 0x103040  sll         $a2, $s0, 1
    ctx->pc = 0x289ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_289ac4:
    // 0x289ac4: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x289ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_289ac8:
    // 0x289ac8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x289ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_289acc:
    // 0x289acc: 0x8fa20274  lw          $v0, 0x274($sp)
    ctx->pc = 0x289accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_289ad0:
    // 0x289ad0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x289ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_289ad4:
    // 0x289ad4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x289ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_289ad8:
    // 0x289ad8: 0x27a501a8  addiu       $a1, $sp, 0x1A8
    ctx->pc = 0x289ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_289adc:
    // 0x289adc: 0xc041d58  jal         func_107560
label_289ae0:
    if (ctx->pc == 0x289AE0u) {
        ctx->pc = 0x289AE4u;
        goto label_289ae4;
    }
    ctx->pc = 0x289ADCu;
    SET_GPR_U32(ctx, 31, 0x289AE4u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x289ADCu, 0x289AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289AE4u;
label_289ae4:
    // 0x289ae4: 0x3c0442a0  lui         $a0, 0x42A0
    ctx->pc = 0x289ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17056 << 16));
label_289ae8:
    // 0x289ae8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x289ae8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_289aec:
    // 0x289aec: 0xc7a0028c  lwc1        $f0, 0x28C($sp)
    ctx->pc = 0x289aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289af0:
    // 0x289af0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x289af0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_289af4:
    // 0x289af4: 0x1038c0  sll         $a3, $s0, 3
    ctx->pc = 0x289af4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_289af8:
    // 0x289af8: 0x2c72021  addu        $a0, $s6, $a3
    ctx->pc = 0x289af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
label_289afc:
    // 0x289afc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x289afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_289b00:
    // 0x289b00: 0xc7a0024c  lwc1        $f0, 0x24C($sp)
    ctx->pc = 0x289b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289b04:
    // 0x289b04: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x289b04u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_289b08:
    // 0x289b08: 0x1040c0  sll         $t0, $s0, 3
    ctx->pc = 0x289b08u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_289b0c:
    // 0x289b0c: 0x2c81021  addu        $v0, $s6, $t0
    ctx->pc = 0x289b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 8)));
label_289b10:
    // 0x289b10: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x289b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_289b14:
    // 0x289b14: 0xc7a0028c  lwc1        $f0, 0x28C($sp)
    ctx->pc = 0x289b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289b18:
    // 0x289b18: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x289b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_289b1c:
    // 0x289b1c: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x289b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_289b20:
    // 0x289b20: 0xa23021  addu        $a2, $a1, $v0
    ctx->pc = 0x289b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_289b24:
    // 0x289b24: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x289b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_289b28:
    // 0x289b28: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x289b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_289b2c:
    // 0x289b2c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x289b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_289b30:
    // 0x289b30: 0xc7a00294  lwc1        $f0, 0x294($sp)
    ctx->pc = 0x289b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289b34:
    // 0x289b34: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x289b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_289b38:
    // 0x289b38: 0x2f040  sll         $fp, $v0, 1
    ctx->pc = 0x289b38u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_289b3c:
    // 0x289b3c: 0x3c22021  addu        $a0, $fp, $v0
    ctx->pc = 0x289b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_289b40:
    // 0x289b40: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x289b40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_289b44:
    // 0x289b44: 0x2651021  addu        $v0, $s3, $a1
    ctx->pc = 0x289b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_289b48:
    // 0x289b48: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x289b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_289b4c:
    // 0x289b4c: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x289b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
label_289b50:
    // 0x289b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x289b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289b54:
    // 0x289b54: 0x2902021  addu        $a0, $s4, $s0
    ctx->pc = 0x289b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_289b58:
    // 0x289b58: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x289b58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_289b5c:
    // 0x289b5c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x289b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_289b60:
    // 0x289b60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x289b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_289b64:
    // 0x289b64: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x289b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_289b68:
    // 0x289b68: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x289b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_289b6c:
    // 0x289b6c: 0x2902021  addu        $a0, $s4, $s0
    ctx->pc = 0x289b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_289b70:
    // 0x289b70: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x289b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_289b74:
    // 0x289b74: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x289b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_289b78:
    // 0x289b78: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x289b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_289b7c:
    // 0x289b7c: 0x27a5026c  addiu       $a1, $sp, 0x26C
    ctx->pc = 0x289b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 620));
label_289b80:
    // 0x289b80: 0xc052608  jal         func_149820
label_289b84:
    if (ctx->pc == 0x289B84u) {
        ctx->pc = 0x289B88u;
        goto label_289b88;
    }
    ctx->pc = 0x289B80u;
    SET_GPR_U32(ctx, 31, 0x289B88u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x289B80u, 0x289B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289B88u;
label_289b88:
    // 0x289b88: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x289b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_289b8c:
    // 0x289b8c: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x289b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_289b90:
    // 0x289b90: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x289b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_289b94:
    // 0x289b94: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x289b94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_289b98:
    // 0x289b98: 0x8fa50274  lw          $a1, 0x274($sp)
    ctx->pc = 0x289b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_289b9c:
    // 0x289b9c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x289b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_289ba0:
    // 0x289ba0: 0x27a50198  addiu       $a1, $sp, 0x198
    ctx->pc = 0x289ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_289ba4:
    // 0x289ba4: 0xc041d58  jal         func_107560
label_289ba8:
    if (ctx->pc == 0x289BA8u) {
        ctx->pc = 0x289BACu;
        goto label_289bac;
    }
    ctx->pc = 0x289BA4u;
    SET_GPR_U32(ctx, 31, 0x289BACu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x289BA4u, 0x289BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289BACu;
label_289bac:
    // 0x289bac: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x289bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_289bb0:
    // 0x289bb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x289bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_289bb4:
    // 0x289bb4: 0xc7a0028c  lwc1        $f0, 0x28C($sp)
    ctx->pc = 0x289bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289bb8:
    // 0x289bb8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x289bb8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_289bbc:
    // 0x289bbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x289bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_289bc0:
    // 0x289bc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x289bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289bc4:
    // 0x289bc4: 0x0  nop
    ctx->pc = 0x289bc4u;
    // NOP
label_289bc8:
    // 0x289bc8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x289bc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_289bcc:
    // 0x289bcc: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x289bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_289bd0:
    // 0x289bd0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x289bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_289bd4:
    // 0x289bd4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x289bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_289bd8:
    // 0x289bd8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x289bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_289bdc:
    // 0x289bdc: 0xc7a0024c  lwc1        $f0, 0x24C($sp)
    ctx->pc = 0x289bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289be0:
    // 0x289be0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x289be0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_289be4:
    // 0x289be4: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x289be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_289be8:
    // 0x289be8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x289be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_289bec:
    // 0x289bec: 0x2c31021  addu        $v0, $s6, $v1
    ctx->pc = 0x289becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_289bf0:
    // 0x289bf0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x289bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_289bf4:
    // 0x289bf4: 0x8fa20254  lw          $v0, 0x254($sp)
    ctx->pc = 0x289bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_289bf8:
    // 0x289bf8: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x289bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_289bfc:
    // 0x289bfc: 0x27a401b8  addiu       $a0, $sp, 0x1B8
    ctx->pc = 0x289bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_289c00:
    // 0x289c00: 0xc0a29f0  jal         func_28A7C0
label_289c04:
    if (ctx->pc == 0x289C04u) {
        ctx->pc = 0x289C08u;
        goto label_289c08;
    }
    ctx->pc = 0x289C00u;
    SET_GPR_U32(ctx, 31, 0x289C08u);
    ctx->pc = 0x28A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A7C0u, 0x289C00u, 0x289C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289C08u;
label_289c08:
    // 0x289c08: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x289c08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_289c0c:
    // 0x289c0c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x289c0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_289c10:
    // 0x289c10: 0x10200098  beqz        $at, . + 4 + (0x98 << 2)
label_289c14:
    if (ctx->pc == 0x289C14u) {
        ctx->pc = 0x289C18u;
        goto label_289c18;
    }
    ctx->pc = 0x289C10u;
    {
        const bool branch_taken_0x289c10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x289c10) {
            ctx->pc = 0x289E74u;
            goto label_289e74;
        }
    }
    ctx->pc = 0x289C18u;
label_289c18:
    // 0x289c18: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x289c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_289c1c:
    // 0x289c1c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x289c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_289c20:
    // 0x289c20: 0x27a401c8  addiu       $a0, $sp, 0x1C8
    ctx->pc = 0x289c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_289c24:
    // 0x289c24: 0xc0a29f0  jal         func_28A7C0
label_289c28:
    if (ctx->pc == 0x289C28u) {
        ctx->pc = 0x289C2Cu;
        goto label_289c2c;
    }
    ctx->pc = 0x289C24u;
    SET_GPR_U32(ctx, 31, 0x289C2Cu);
    ctx->pc = 0x28A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A7C0u, 0x289C24u, 0x289C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289C2Cu;
label_289c2c:
    // 0x289c2c: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x289c2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_289c30:
    // 0x289c30: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x289c30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_289c34:
    // 0x289c34: 0x1020008f  beqz        $at, . + 4 + (0x8F << 2)
label_289c38:
    if (ctx->pc == 0x289C38u) {
        ctx->pc = 0x289C3Cu;
        goto label_289c3c;
    }
    ctx->pc = 0x289C34u;
    {
        const bool branch_taken_0x289c34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x289c34) {
            ctx->pc = 0x289E74u;
            goto label_289e74;
        }
    }
    ctx->pc = 0x289C3Cu;
label_289c3c:
    // 0x289c3c: 0xc7a1028c  lwc1        $f1, 0x28C($sp)
    ctx->pc = 0x289c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_289c40:
    // 0x289c40: 0xc7a002ac  lwc1        $f0, 0x2AC($sp)
    ctx->pc = 0x289c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289c44:
    // 0x289c44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x289c44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_289c48:
    // 0x289c48: 0x4500008a  bc1f        . + 4 + (0x8A << 2)
label_289c4c:
    if (ctx->pc == 0x289C4Cu) {
        ctx->pc = 0x289C50u;
        goto label_289c50;
    }
    ctx->pc = 0x289C48u;
    {
        const bool branch_taken_0x289c48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x289c48) {
            ctx->pc = 0x289E74u;
            goto label_289e74;
        }
    }
    ctx->pc = 0x289C50u;
label_289c50:
    // 0x289c50: 0xc7a10290  lwc1        $f1, 0x290($sp)
    ctx->pc = 0x289c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_289c54:
    // 0x289c54: 0xc7a002a8  lwc1        $f0, 0x2A8($sp)
    ctx->pc = 0x289c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289c58:
    // 0x289c58: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x289c58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_289c5c:
    // 0x289c5c: 0x45010085  bc1t        . + 4 + (0x85 << 2)
label_289c60:
    if (ctx->pc == 0x289C60u) {
        ctx->pc = 0x289C64u;
        goto label_289c64;
    }
    ctx->pc = 0x289C5Cu;
    {
        const bool branch_taken_0x289c5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x289c5c) {
            ctx->pc = 0x289E74u;
            goto label_289e74;
        }
    }
    ctx->pc = 0x289C64u;
label_289c64:
    // 0x289c64: 0xc7a10294  lwc1        $f1, 0x294($sp)
    ctx->pc = 0x289c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_289c68:
    // 0x289c68: 0xc7a002a0  lwc1        $f0, 0x2A0($sp)
    ctx->pc = 0x289c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289c6c:
    // 0x289c6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x289c6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_289c70:
    // 0x289c70: 0x45000080  bc1f        . + 4 + (0x80 << 2)
label_289c74:
    if (ctx->pc == 0x289C74u) {
        ctx->pc = 0x289C78u;
        goto label_289c78;
    }
    ctx->pc = 0x289C70u;
    {
        const bool branch_taken_0x289c70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x289c70) {
            ctx->pc = 0x289E74u;
            goto label_289e74;
        }
    }
    ctx->pc = 0x289C78u;
label_289c78:
    // 0x289c78: 0xc7a10298  lwc1        $f1, 0x298($sp)
    ctx->pc = 0x289c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_289c7c:
    // 0x289c7c: 0xc7a0029c  lwc1        $f0, 0x29C($sp)
    ctx->pc = 0x289c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289c80:
    // 0x289c80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x289c80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_289c84:
    // 0x289c84: 0x4501007b  bc1t        . + 4 + (0x7B << 2)
label_289c88:
    if (ctx->pc == 0x289C88u) {
        ctx->pc = 0x289C8Cu;
        goto label_289c8c;
    }
    ctx->pc = 0x289C84u;
    {
        const bool branch_taken_0x289c84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x289c84) {
            ctx->pc = 0x289E74u;
            goto label_289e74;
        }
    }
    ctx->pc = 0x289C8Cu;
label_289c8c:
    // 0x289c8c: 0x27a401c8  addiu       $a0, $sp, 0x1C8
    ctx->pc = 0x289c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_289c90:
    // 0x289c90: 0xc0a29f0  jal         func_28A7C0
label_289c94:
    if (ctx->pc == 0x289C94u) {
        ctx->pc = 0x289C98u;
        goto label_289c98;
    }
    ctx->pc = 0x289C90u;
    SET_GPR_U32(ctx, 31, 0x289C98u);
    ctx->pc = 0x28A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A7C0u, 0x289C90u, 0x289C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289C98u;
label_289c98:
    // 0x289c98: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x289c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_289c9c:
    // 0x289c9c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x289c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_289ca0:
    // 0x289ca0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x289ca0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_289ca4:
    // 0x289ca4: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x289ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_289ca8:
    // 0x289ca8: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x289ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_289cac:
    // 0x289cac: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x289cacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_289cb0:
    // 0x289cb0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x289cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_289cb4:
    // 0x289cb4: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x289cb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_289cb8:
    // 0x289cb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_289cbc:
    // 0x289cbc: 0xc0e3356  jal         func_38CD58
label_289cc0:
    if (ctx->pc == 0x289CC0u) {
        ctx->pc = 0x289CC4u;
        goto label_289cc4;
    }
    ctx->pc = 0x289CBCu;
    SET_GPR_U32(ctx, 31, 0x289CC4u);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x289CBCu, 0x289CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289CC4u;
label_289cc4:
    // 0x289cc4: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x289cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_289cc8:
    // 0x289cc8: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x289cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_289ccc:
    // 0x289ccc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_289cd0:
    // 0x289cd0: 0x8fa60260  lw          $a2, 0x260($sp)
    ctx->pc = 0x289cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_289cd4:
    // 0x289cd4: 0xc0e335c  jal         func_38CD70
label_289cd8:
    if (ctx->pc == 0x289CD8u) {
        ctx->pc = 0x289CDCu;
        goto label_289cdc;
    }
    ctx->pc = 0x289CD4u;
    SET_GPR_U32(ctx, 31, 0x289CDCu);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x289CD4u, 0x289CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289CDCu;
label_289cdc:
    // 0x289cdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x289cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289ce0:
    // 0x289ce0: 0x27a201c8  addiu       $v0, $sp, 0x1C8
    ctx->pc = 0x289ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_289ce4:
    // 0x289ce4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x289ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289ce8:
    // 0x289ce8: 0xc0a29f0  jal         func_28A7C0
label_289cec:
    if (ctx->pc == 0x289CECu) {
        ctx->pc = 0x289CF0u;
        goto label_289cf0;
    }
    ctx->pc = 0x289CE8u;
    SET_GPR_U32(ctx, 31, 0x289CF0u);
    ctx->pc = 0x28A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A7C0u, 0x289CE8u, 0x289CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289CF0u;
label_289cf0:
    // 0x289cf0: 0x2903021  addu        $a2, $s4, $s0
    ctx->pc = 0x289cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_289cf4:
    // 0x289cf4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x289cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_289cf8:
    // 0x289cf8: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x289cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_289cfc:
    // 0x289cfc: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x289cfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_289d00:
    // 0x289d00: 0x2f23021  addu        $a2, $s7, $s2
    ctx->pc = 0x289d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
label_289d04:
    // 0x289d04: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x289d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_289d08:
    // 0x289d08: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x289d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_289d0c:
    // 0x289d0c: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x289d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_289d10:
    // 0x289d10: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x289d10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_289d14:
    // 0x289d14: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x289d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_289d18:
    // 0x289d18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x289d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_289d1c:
    // 0x289d1c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x289d1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_289d20:
    // 0x289d20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_289d24:
    // 0x289d24: 0xc0e3356  jal         func_38CD58
label_289d28:
    if (ctx->pc == 0x289D28u) {
        ctx->pc = 0x289D2Cu;
        goto label_289d2c;
    }
    ctx->pc = 0x289D24u;
    SET_GPR_U32(ctx, 31, 0x289D2Cu);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x289D24u, 0x289D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289D2Cu;
label_289d2c:
    // 0x289d2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x289d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289d30:
    // 0x289d30: 0x2f22821  addu        $a1, $s7, $s2
    ctx->pc = 0x289d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
label_289d34:
    // 0x289d34: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x289d34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_289d38:
    // 0x289d38: 0x2a62821  addu        $a1, $s5, $a2
    ctx->pc = 0x289d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
label_289d3c:
    // 0x289d3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_289d40:
    // 0x289d40: 0x8fa2025c  lw          $v0, 0x25C($sp)
    ctx->pc = 0x289d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_289d44:
    // 0x289d44: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x289d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289d48:
    // 0x289d48: 0xc0e335c  jal         func_38CD70
label_289d4c:
    if (ctx->pc == 0x289D4Cu) {
        ctx->pc = 0x289D50u;
        goto label_289d50;
    }
    ctx->pc = 0x289D48u;
    SET_GPR_U32(ctx, 31, 0x289D50u);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x289D48u, 0x289D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289D50u;
label_289d50:
    // 0x289d50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x289d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289d54:
    // 0x289d54: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x289d54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_289d58:
    // 0x289d58: 0x27a401c8  addiu       $a0, $sp, 0x1C8
    ctx->pc = 0x289d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_289d5c:
    // 0x289d5c: 0xc0a29f0  jal         func_28A7C0
label_289d60:
    if (ctx->pc == 0x289D60u) {
        ctx->pc = 0x289D64u;
        goto label_289d64;
    }
    ctx->pc = 0x289D5Cu;
    SET_GPR_U32(ctx, 31, 0x289D64u);
    ctx->pc = 0x28A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A7C0u, 0x289D5Cu, 0x289D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289D64u;
label_289d64:
    // 0x289d64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x289d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289d68:
    // 0x289d68: 0x2052021  addu        $a0, $s0, $a1
    ctx->pc = 0x289d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_289d6c:
    // 0x289d6c: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x289d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_289d70:
    // 0x289d70: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x289d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_289d74:
    // 0x289d74: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x289d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_289d78:
    // 0x289d78: 0x27a401c8  addiu       $a0, $sp, 0x1C8
    ctx->pc = 0x289d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_289d7c:
    // 0x289d7c: 0xc0a29f0  jal         func_28A7C0
label_289d80:
    if (ctx->pc == 0x289D80u) {
        ctx->pc = 0x289D84u;
        goto label_289d84;
    }
    ctx->pc = 0x289D7Cu;
    SET_GPR_U32(ctx, 31, 0x289D84u);
    ctx->pc = 0x28A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A7C0u, 0x289D7Cu, 0x289D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289D84u;
label_289d84:
    // 0x289d84: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x289d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_289d88:
    // 0x289d88: 0x24850002  addiu       $a1, $a0, 0x2
    ctx->pc = 0x289d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_289d8c:
    // 0x289d8c: 0x30a8ffff  andi        $t0, $a1, 0xFFFF
    ctx->pc = 0x289d8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_289d90:
    // 0x289d90: 0x1230c0  sll         $a2, $s2, 3
    ctx->pc = 0x289d90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_289d94:
    // 0x289d94: 0x2a61021  addu        $v0, $s5, $a2
    ctx->pc = 0x289d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
label_289d98:
    // 0x289d98: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x289d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_289d9c:
    // 0x289d9c: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x289d9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_289da0:
    // 0x289da0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_289da4:
    // 0x289da4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x289da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289da8:
    // 0x289da8: 0x7ba60100  lq          $a2, 0x100($sp)
    ctx->pc = 0x289da8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_289dac:
    // 0x289dac: 0xc0e3356  jal         func_38CD58
label_289db0:
    if (ctx->pc == 0x289DB0u) {
        ctx->pc = 0x289DB4u;
        goto label_289db4;
    }
    ctx->pc = 0x289DACu;
    SET_GPR_U32(ctx, 31, 0x289DB4u);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x289DACu, 0x289DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289DB4u;
label_289db4:
    // 0x289db4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x289db4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289db8:
    // 0x289db8: 0x1220c0  sll         $a0, $s2, 3
    ctx->pc = 0x289db8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_289dbc:
    // 0x289dbc: 0x2a41021  addu        $v0, $s5, $a0
    ctx->pc = 0x289dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_289dc0:
    // 0x289dc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_289dc4:
    // 0x289dc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x289dc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289dc8:
    // 0x289dc8: 0x8fa60260  lw          $a2, 0x260($sp)
    ctx->pc = 0x289dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_289dcc:
    // 0x289dcc: 0xc0e335c  jal         func_38CD70
label_289dd0:
    if (ctx->pc == 0x289DD0u) {
        ctx->pc = 0x289DD4u;
        goto label_289dd4;
    }
    ctx->pc = 0x289DCCu;
    SET_GPR_U32(ctx, 31, 0x289DD4u);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x289DCCu, 0x289DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289DD4u;
label_289dd4:
    // 0x289dd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x289dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289dd8:
    // 0x289dd8: 0x27a401c8  addiu       $a0, $sp, 0x1C8
    ctx->pc = 0x289dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_289ddc:
    // 0x289ddc: 0xc0a29f0  jal         func_28A7C0
label_289de0:
    if (ctx->pc == 0x289DE0u) {
        ctx->pc = 0x289DE4u;
        goto label_289de4;
    }
    ctx->pc = 0x289DDCu;
    SET_GPR_U32(ctx, 31, 0x289DE4u);
    ctx->pc = 0x28A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A7C0u, 0x289DDCu, 0x289DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289DE4u;
label_289de4:
    // 0x289de4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x289de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289de8:
    // 0x289de8: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x289de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_289dec:
    // 0x289dec: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x289decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_289df0:
    // 0x289df0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x289df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_289df4:
    // 0x289df4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x289df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_289df8:
    // 0x289df8: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x289df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_289dfc:
    // 0x289dfc: 0x27a501c8  addiu       $a1, $sp, 0x1C8
    ctx->pc = 0x289dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_289e00:
    // 0x289e00: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x289e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_289e04:
    // 0x289e04: 0xc0a29f0  jal         func_28A7C0
label_289e08:
    if (ctx->pc == 0x289E08u) {
        ctx->pc = 0x289E0Cu;
        goto label_289e0c;
    }
    ctx->pc = 0x289E04u;
    SET_GPR_U32(ctx, 31, 0x289E0Cu);
    ctx->pc = 0x28A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A7C0u, 0x289E04u, 0x289E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289E0Cu;
label_289e0c:
    // 0x289e0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x289e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289e10:
    // 0x289e10: 0x2902821  addu        $a1, $s4, $s0
    ctx->pc = 0x289e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_289e14:
    // 0x289e14: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x289e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_289e18:
    // 0x289e18: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x289e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_289e1c:
    // 0x289e1c: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x289e1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_289e20:
    // 0x289e20: 0x2f21021  addu        $v0, $s7, $s2
    ctx->pc = 0x289e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
label_289e24:
    // 0x289e24: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x289e24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_289e28:
    // 0x289e28: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x289e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_289e2c:
    // 0x289e2c: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x289e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_289e30:
    // 0x289e30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x289e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_289e34:
    // 0x289e34: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x289e34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_289e38:
    // 0x289e38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_289e3c:
    // 0x289e3c: 0x7ba600f0  lq          $a2, 0xF0($sp)
    ctx->pc = 0x289e3cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_289e40:
    // 0x289e40: 0xc0e3356  jal         func_38CD58
label_289e44:
    if (ctx->pc == 0x289E44u) {
        ctx->pc = 0x289E48u;
        goto label_289e48;
    }
    ctx->pc = 0x289E40u;
    SET_GPR_U32(ctx, 31, 0x289E48u);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x289E40u, 0x289E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289E48u;
label_289e48:
    // 0x289e48: 0x2f21021  addu        $v0, $s7, $s2
    ctx->pc = 0x289e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
label_289e4c:
    // 0x289e4c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x289e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_289e50:
    // 0x289e50: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x289e50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_289e54:
    // 0x289e54: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x289e54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_289e58:
    // 0x289e58: 0x2a41021  addu        $v0, $s5, $a0
    ctx->pc = 0x289e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_289e5c:
    // 0x289e5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_289e60:
    // 0x289e60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x289e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289e64:
    // 0x289e64: 0x8fa6025c  lw          $a2, 0x25C($sp)
    ctx->pc = 0x289e64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_289e68:
    // 0x289e68: 0xc0e335c  jal         func_38CD70
label_289e6c:
    if (ctx->pc == 0x289E6Cu) {
        ctx->pc = 0x289E70u;
        goto label_289e70;
    }
    ctx->pc = 0x289E68u;
    SET_GPR_U32(ctx, 31, 0x289E70u);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x289E68u, 0x289E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289E70u;
label_289e70:
    // 0x289e70: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x289e70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_289e74:
    // 0x289e74: 0xc7a00290  lwc1        $f0, 0x290($sp)
    ctx->pc = 0x289e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289e78:
    // 0x289e78: 0xe7a0028c  swc1        $f0, 0x28C($sp)
    ctx->pc = 0x289e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 652), bits); }
label_289e7c:
    // 0x289e7c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x289e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_289e80:
    // 0x289e80: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x289e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_289e84:
    // 0x289e84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x289e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_289e88:
    // 0x289e88: 0xafa20250  sw          $v0, 0x250($sp)
    ctx->pc = 0x289e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
label_289e8c:
    // 0x289e8c: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x289e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_289e90:
    // 0x289e90: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x289e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_289e94:
    // 0x289e94: 0x27a501c8  addiu       $a1, $sp, 0x1C8
    ctx->pc = 0x289e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_289e98:
    // 0x289e98: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x289e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_289e9c:
    // 0x289e9c: 0xc0a29f0  jal         func_28A7C0
label_289ea0:
    if (ctx->pc == 0x289EA0u) {
        ctx->pc = 0x289EA4u;
        goto label_289ea4;
    }
    ctx->pc = 0x289E9Cu;
    SET_GPR_U32(ctx, 31, 0x289EA4u);
    ctx->pc = 0x28A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A7C0u, 0x289E9Cu, 0x289EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289EA4u;
label_289ea4:
    // 0x289ea4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x289ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289ea8:
    // 0x289ea8: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x289ea8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_289eac:
    // 0x289eac: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x289eacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_289eb0:
    // 0x289eb0: 0x1020feb9  beqz        $at, . + 4 + (-0x147 << 2)
label_289eb4:
    if (ctx->pc == 0x289EB4u) {
        ctx->pc = 0x289EB8u;
        goto label_289eb8;
    }
    ctx->pc = 0x289EB0u;
    {
        const bool branch_taken_0x289eb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x289eb0) {
            ctx->pc = 0x289998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_289998;
        }
    }
    ctx->pc = 0x289EB8u;
label_289eb8:
    // 0x289eb8: 0xc7a00298  lwc1        $f0, 0x298($sp)
    ctx->pc = 0x289eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289ebc:
    // 0x289ebc: 0xe7a00294  swc1        $f0, 0x294($sp)
    ctx->pc = 0x289ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 660), bits); }
label_289ec0:
    // 0x289ec0: 0x8fa50254  lw          $a1, 0x254($sp)
    ctx->pc = 0x289ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_289ec4:
    // 0x289ec4: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x289ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_289ec8:
    // 0x289ec8: 0xafa60254  sw          $a2, 0x254($sp)
    ctx->pc = 0x289ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 6));
label_289ecc:
    // 0x289ecc: 0x8fa20254  lw          $v0, 0x254($sp)
    ctx->pc = 0x289eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_289ed0:
    // 0x289ed0: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x289ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_289ed4:
    // 0x289ed4: 0x27a401b8  addiu       $a0, $sp, 0x1B8
    ctx->pc = 0x289ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_289ed8:
    // 0x289ed8: 0xc0a29f0  jal         func_28A7C0
label_289edc:
    if (ctx->pc == 0x289EDCu) {
        ctx->pc = 0x289EE0u;
        goto label_289ee0;
    }
    ctx->pc = 0x289ED8u;
    SET_GPR_U32(ctx, 31, 0x289EE0u);
    ctx->pc = 0x28A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A7C0u, 0x289ED8u, 0x289EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289EE0u;
label_289ee0:
    // 0x289ee0: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x289ee0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_289ee4:
    // 0x289ee4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x289ee4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_289ee8:
    // 0x289ee8: 0x1020fe89  beqz        $at, . + 4 + (-0x177 << 2)
label_289eec:
    if (ctx->pc == 0x289EECu) {
        ctx->pc = 0x289EF0u;
        goto label_289ef0;
    }
    ctx->pc = 0x289EE8u;
    {
        const bool branch_taken_0x289ee8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x289ee8) {
            ctx->pc = 0x289910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_289910;
        }
    }
    ctx->pc = 0x289EF0u;
label_289ef0:
    // 0x289ef0: 0x148040  sll         $s0, $s4, 1
    ctx->pc = 0x289ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_289ef4:
    // 0x289ef4: 0x179040  sll         $s2, $s7, 1
    ctx->pc = 0x289ef4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
label_289ef8:
    // 0x289ef8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x289ef8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289efc:
    // 0x289efc: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_289f00:
    if (ctx->pc == 0x289F00u) {
        ctx->pc = 0x289F04u;
        goto label_289f04;
    }
    ctx->pc = 0x289EFCu;
    {
        const bool branch_taken_0x289efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289efc) {
            ctx->pc = 0x28A220u;
            goto label_28a220;
        }
    }
    ctx->pc = 0x289F04u;
label_289f04:
    // 0x289f04: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x289f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_289f08:
    // 0x289f08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x289f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_289f0c:
    // 0x289f0c: 0x7c00006  bltz        $fp, . + 4 + (0x6 << 2)
label_289f10:
    if (ctx->pc == 0x289F10u) {
        ctx->pc = 0x289F14u;
        goto label_289f14;
    }
    ctx->pc = 0x289F0Cu;
    {
        const bool branch_taken_0x289f0c = (GPR_S32(ctx, 30) < 0);
        if (branch_taken_0x289f0c) {
            ctx->pc = 0x289F28u;
            goto label_289f28;
        }
    }
    ctx->pc = 0x289F14u;
label_289f14:
    // 0x289f14: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x289f14u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289f18:
    // 0x289f18: 0x0  nop
    ctx->pc = 0x289f18u;
    // NOP
label_289f1c:
    // 0x289f1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x289f1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_289f20:
    // 0x289f20: 0x10000008  b           . + 4 + (0x8 << 2)
label_289f24:
    if (ctx->pc == 0x289F24u) {
        ctx->pc = 0x289F28u;
        goto label_289f28;
    }
    ctx->pc = 0x289F20u;
    {
        const bool branch_taken_0x289f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289f20) {
            ctx->pc = 0x289F44u;
            goto label_289f44;
        }
    }
    ctx->pc = 0x289F28u;
label_289f28:
    // 0x289f28: 0x1e2042  srl         $a0, $fp, 1
    ctx->pc = 0x289f28u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 30), 1));
label_289f2c:
    // 0x289f2c: 0x33c50001  andi        $a1, $fp, 0x1
    ctx->pc = 0x289f2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_289f30:
    // 0x289f30: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x289f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_289f34:
    // 0x289f34: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x289f34u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289f38:
    // 0x289f38: 0x0  nop
    ctx->pc = 0x289f38u;
    // NOP
label_289f3c:
    // 0x289f3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x289f3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_289f40:
    // 0x289f40: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x289f40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_289f44:
    // 0x289f44: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x289f44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_289f48:
    // 0x289f48: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x289f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_289f4c:
    // 0x289f4c: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x289f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_289f50:
    // 0x289f50: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x289f50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_289f54:
    // 0x289f54: 0x2651021  addu        $v0, $s3, $a1
    ctx->pc = 0x289f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_289f58:
    // 0x289f58: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x289f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_289f5c:
    // 0x289f5c: 0xc7a002b4  lwc1        $f0, 0x2B4($sp)
    ctx->pc = 0x289f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_289f60:
    // 0x289f60: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x289f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_289f64:
    // 0x289f64: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x289f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_289f68:
    // 0x289f68: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x289f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_289f6c:
    // 0x289f6c: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x289f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_289f70:
    // 0x289f70: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x289f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_289f74:
    // 0x289f74: 0x3c03c080  lui         $v1, 0xC080
    ctx->pc = 0x289f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49280 << 16));
label_289f78:
    // 0x289f78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x289f78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289f7c:
    // 0x289f7c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x289f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_289f80:
    // 0x289f80: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x289f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_289f84:
    // 0x289f84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x289f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_289f88:
    // 0x289f88: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x289f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_289f8c:
    // 0x289f8c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x289f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_289f90:
    // 0x289f90: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x289f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_289f94:
    // 0x289f94: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x289f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_289f98:
    // 0x289f98: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x289f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_289f9c:
    // 0x289f9c: 0x27a5026c  addiu       $a1, $sp, 0x26C
    ctx->pc = 0x289f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 620));
label_289fa0:
    // 0x289fa0: 0xc052608  jal         func_149820
label_289fa4:
    if (ctx->pc == 0x289FA4u) {
        ctx->pc = 0x289FA8u;
        goto label_289fa8;
    }
    ctx->pc = 0x289FA0u;
    SET_GPR_U32(ctx, 31, 0x289FA8u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x289FA0u, 0x289FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289FA8u;
label_289fa8:
    // 0x289fa8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x289fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_289fac:
    // 0x289fac: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x289facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_289fb0:
    // 0x289fb0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x289fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_289fb4:
    // 0x289fb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x289fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_289fb8:
    // 0x289fb8: 0x8fa40274  lw          $a0, 0x274($sp)
    ctx->pc = 0x289fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_289fbc:
    // 0x289fbc: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x289fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_289fc0:
    // 0x289fc0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x289fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_289fc4:
    // 0x289fc4: 0x27a60188  addiu       $a2, $sp, 0x188
    ctx->pc = 0x289fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_289fc8:
    // 0x289fc8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x289fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_289fcc:
    // 0x289fcc: 0xc041d58  jal         func_107560
label_289fd0:
    if (ctx->pc == 0x289FD0u) {
        ctx->pc = 0x289FD4u;
        goto label_289fd4;
    }
    ctx->pc = 0x289FCCu;
    SET_GPR_U32(ctx, 31, 0x289FD4u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x289FCCu, 0x289FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289FD4u;
label_289fd4:
    // 0x289fd4: 0x7c00006  bltz        $fp, . + 4 + (0x6 << 2)
label_289fd8:
    if (ctx->pc == 0x289FD8u) {
        ctx->pc = 0x289FDCu;
        goto label_289fdc;
    }
    ctx->pc = 0x289FD4u;
    {
        const bool branch_taken_0x289fd4 = (GPR_S32(ctx, 30) < 0);
        if (branch_taken_0x289fd4) {
            ctx->pc = 0x289FF0u;
            goto label_289ff0;
        }
    }
    ctx->pc = 0x289FDCu;
label_289fdc:
    // 0x289fdc: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x289fdcu;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_289fe0:
    // 0x289fe0: 0x0  nop
    ctx->pc = 0x289fe0u;
    // NOP
label_289fe4:
    // 0x289fe4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x289fe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_289fe8:
    // 0x289fe8: 0x10000008  b           . + 4 + (0x8 << 2)
label_289fec:
    if (ctx->pc == 0x289FECu) {
        ctx->pc = 0x289FF0u;
        goto label_289ff0;
    }
    ctx->pc = 0x289FE8u;
    {
        const bool branch_taken_0x289fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289fe8) {
            ctx->pc = 0x28A00Cu;
            goto label_28a00c;
        }
    }
    ctx->pc = 0x289FF0u;
label_289ff0:
    // 0x289ff0: 0x1e1042  srl         $v0, $fp, 1
    ctx->pc = 0x289ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 30), 1));
label_289ff4:
    // 0x289ff4: 0x33c30001  andi        $v1, $fp, 0x1
    ctx->pc = 0x289ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_289ff8:
    // 0x289ff8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x289ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_289ffc:
    // 0x289ffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x289ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28a000:
    // 0x28a000: 0x0  nop
    ctx->pc = 0x28a000u;
    // NOP
label_28a004:
    // 0x28a004: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28a004u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28a008:
    // 0x28a008: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28a008u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28a00c:
    // 0x28a00c: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x28a00cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_28a010:
    // 0x28a010: 0x2c42821  addu        $a1, $s6, $a0
    ctx->pc = 0x28a010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_28a014:
    // 0x28a014: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x28a014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_28a018:
    // 0x28a018: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28a018u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28a01c:
    // 0x28a01c: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x28a01cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_28a020:
    // 0x28a020: 0x2c61021  addu        $v0, $s6, $a2
    ctx->pc = 0x28a020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
label_28a024:
    // 0x28a024: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x28a024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_28a028:
    // 0x28a028: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x28a028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_28a02c:
    // 0x28a02c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28a02cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28a030:
    // 0x28a030: 0x7c00006  bltz        $fp, . + 4 + (0x6 << 2)
label_28a034:
    if (ctx->pc == 0x28A034u) {
        ctx->pc = 0x28A038u;
        goto label_28a038;
    }
    ctx->pc = 0x28A030u;
    {
        const bool branch_taken_0x28a030 = (GPR_S32(ctx, 30) < 0);
        if (branch_taken_0x28a030) {
            ctx->pc = 0x28A04Cu;
            goto label_28a04c;
        }
    }
    ctx->pc = 0x28A038u;
label_28a038:
    // 0x28a038: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x28a038u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28a03c:
    // 0x28a03c: 0x0  nop
    ctx->pc = 0x28a03cu;
    // NOP
label_28a040:
    // 0x28a040: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28a040u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28a044:
    // 0x28a044: 0x10000008  b           . + 4 + (0x8 << 2)
label_28a048:
    if (ctx->pc == 0x28A048u) {
        ctx->pc = 0x28A04Cu;
        goto label_28a04c;
    }
    ctx->pc = 0x28A044u;
    {
        const bool branch_taken_0x28a044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a044) {
            ctx->pc = 0x28A068u;
            goto label_28a068;
        }
    }
    ctx->pc = 0x28A04Cu;
label_28a04c:
    // 0x28a04c: 0x1e1042  srl         $v0, $fp, 1
    ctx->pc = 0x28a04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 30), 1));
label_28a050:
    // 0x28a050: 0x33c40001  andi        $a0, $fp, 0x1
    ctx->pc = 0x28a050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_28a054:
    // 0x28a054: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x28a054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_28a058:
    // 0x28a058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28a058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28a05c:
    // 0x28a05c: 0x0  nop
    ctx->pc = 0x28a05cu;
    // NOP
label_28a060:
    // 0x28a060: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28a060u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28a064:
    // 0x28a064: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28a064u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28a068:
    // 0x28a068: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28a068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28a06c:
    // 0x28a06c: 0x26050002  addiu       $a1, $s0, 0x2
    ctx->pc = 0x28a06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28a070:
    // 0x28a070: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x28a070u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_28a074:
    // 0x28a074: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x28a074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_28a078:
    // 0x28a078: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x28a078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_28a07c:
    // 0x28a07c: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x28a07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_28a080:
    // 0x28a080: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x28a080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_28a084:
    // 0x28a084: 0xc7a002b4  lwc1        $f0, 0x2B4($sp)
    ctx->pc = 0x28a084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28a088:
    // 0x28a088: 0x26050002  addiu       $a1, $s0, 0x2
    ctx->pc = 0x28a088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28a08c:
    // 0x28a08c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x28a08cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_28a090:
    // 0x28a090: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x28a090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_28a094:
    // 0x28a094: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x28a094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_28a098:
    // 0x28a098: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x28a098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_28a09c:
    // 0x28a09c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x28a09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_28a0a0:
    // 0x28a0a0: 0x3c054080  lui         $a1, 0x4080
    ctx->pc = 0x28a0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16512 << 16));
label_28a0a4:
    // 0x28a0a4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28a0a4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28a0a8:
    // 0x28a0a8: 0x26040002  addiu       $a0, $s0, 0x2
    ctx->pc = 0x28a0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28a0ac:
    // 0x28a0ac: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x28a0acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_28a0b0:
    // 0x28a0b0: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x28a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_28a0b4:
    // 0x28a0b4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x28a0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28a0b8:
    // 0x28a0b8: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x28a0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_28a0bc:
    // 0x28a0bc: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x28a0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_28a0c0:
    // 0x28a0c0: 0x26040002  addiu       $a0, $s0, 0x2
    ctx->pc = 0x28a0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28a0c4:
    // 0x28a0c4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x28a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_28a0c8:
    // 0x28a0c8: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x28a0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_28a0cc:
    // 0x28a0cc: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x28a0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_28a0d0:
    // 0x28a0d0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x28a0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28a0d4:
    // 0x28a0d4: 0x27a5026c  addiu       $a1, $sp, 0x26C
    ctx->pc = 0x28a0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 620));
label_28a0d8:
    // 0x28a0d8: 0xc052608  jal         func_149820
label_28a0dc:
    if (ctx->pc == 0x28A0DCu) {
        ctx->pc = 0x28A0E0u;
        goto label_28a0e0;
    }
    ctx->pc = 0x28A0D8u;
    SET_GPR_U32(ctx, 31, 0x28A0E0u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x28A0D8u, 0x28A0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A0E0u;
label_28a0e0:
    // 0x28a0e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28a0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28a0e4:
    // 0x28a0e4: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x28a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28a0e8:
    // 0x28a0e8: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x28a0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_28a0ec:
    // 0x28a0ec: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x28a0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_28a0f0:
    // 0x28a0f0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x28a0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_28a0f4:
    // 0x28a0f4: 0x8fa20274  lw          $v0, 0x274($sp)
    ctx->pc = 0x28a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_28a0f8:
    // 0x28a0f8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x28a0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_28a0fc:
    // 0x28a0fc: 0x27a50188  addiu       $a1, $sp, 0x188
    ctx->pc = 0x28a0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_28a100:
    // 0x28a100: 0xc041d58  jal         func_107560
label_28a104:
    if (ctx->pc == 0x28A104u) {
        ctx->pc = 0x28A108u;
        goto label_28a108;
    }
    ctx->pc = 0x28A100u;
    SET_GPR_U32(ctx, 31, 0x28A108u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x28A100u, 0x28A108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A108u;
label_28a108:
    // 0x28a108: 0x7c00006  bltz        $fp, . + 4 + (0x6 << 2)
label_28a10c:
    if (ctx->pc == 0x28A10Cu) {
        ctx->pc = 0x28A110u;
        goto label_28a110;
    }
    ctx->pc = 0x28A108u;
    {
        const bool branch_taken_0x28a108 = (GPR_S32(ctx, 30) < 0);
        if (branch_taken_0x28a108) {
            ctx->pc = 0x28A124u;
            goto label_28a124;
        }
    }
    ctx->pc = 0x28A110u;
label_28a110:
    // 0x28a110: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x28a110u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28a114:
    // 0x28a114: 0x0  nop
    ctx->pc = 0x28a114u;
    // NOP
label_28a118:
    // 0x28a118: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28a118u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28a11c:
    // 0x28a11c: 0x10000008  b           . + 4 + (0x8 << 2)
label_28a120:
    if (ctx->pc == 0x28A120u) {
        ctx->pc = 0x28A124u;
        goto label_28a124;
    }
    ctx->pc = 0x28A11Cu;
    {
        const bool branch_taken_0x28a11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a11c) {
            ctx->pc = 0x28A140u;
            goto label_28a140;
        }
    }
    ctx->pc = 0x28A124u;
label_28a124:
    // 0x28a124: 0x1e1842  srl         $v1, $fp, 1
    ctx->pc = 0x28a124u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 30), 1));
label_28a128:
    // 0x28a128: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x28a128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_28a12c:
    // 0x28a12c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28a12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_28a130:
    // 0x28a130: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28a130u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28a134:
    // 0x28a134: 0x0  nop
    ctx->pc = 0x28a134u;
    // NOP
label_28a138:
    // 0x28a138: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28a138u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28a13c:
    // 0x28a13c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28a13cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28a140:
    // 0x28a140: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x28a140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28a144:
    // 0x28a144: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28a144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_28a148:
    // 0x28a148: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x28a148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_28a14c:
    // 0x28a14c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28a14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_28a150:
    // 0x28a150: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28a150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_28a154:
    // 0x28a154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28a154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28a158:
    // 0x28a158: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x28a158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28a15c:
    // 0x28a15c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28a15cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_28a160:
    // 0x28a160: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x28a160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_28a164:
    // 0x28a164: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x28a164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_28a168:
    // 0x28a168: 0x17c0002a  bnez        $fp, . + 4 + (0x2A << 2)
label_28a16c:
    if (ctx->pc == 0x28A16Cu) {
        ctx->pc = 0x28A170u;
        goto label_28a170;
    }
    ctx->pc = 0x28A168u;
    {
        const bool branch_taken_0x28a168 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a168) {
            ctx->pc = 0x28A214u;
            goto label_28a214;
        }
    }
    ctx->pc = 0x28A170u;
label_28a170:
    // 0x28a170: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x28a170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_28a174:
    // 0x28a174: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x28a174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_28a178:
    // 0x28a178: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x28a178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_28a17c:
    // 0x28a17c: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x28a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28a180:
    // 0x28a180: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x28a180u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_28a184:
    // 0x28a184: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x28a184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28a188:
    // 0x28a188: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x28a188u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_28a18c:
    // 0x28a18c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28a18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a190:
    // 0x28a190: 0xc0e3356  jal         func_38CD58
label_28a194:
    if (ctx->pc == 0x28A194u) {
        ctx->pc = 0x28A198u;
        goto label_28a198;
    }
    ctx->pc = 0x28A190u;
    SET_GPR_U32(ctx, 31, 0x28A198u);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x28A190u, 0x28A198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A198u;
label_28a198:
    // 0x28a198: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28a198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28a19c:
    // 0x28a19c: 0x1228c0  sll         $a1, $s2, 3
    ctx->pc = 0x28a19cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_28a1a0:
    // 0x28a1a0: 0x2a51021  addu        $v0, $s5, $a1
    ctx->pc = 0x28a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_28a1a4:
    // 0x28a1a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28a1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a1a8:
    // 0x28a1a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28a1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28a1ac:
    // 0x28a1ac: 0x8fa60258  lw          $a2, 0x258($sp)
    ctx->pc = 0x28a1acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_28a1b0:
    // 0x28a1b0: 0xc0e335c  jal         func_38CD70
label_28a1b4:
    if (ctx->pc == 0x28A1B4u) {
        ctx->pc = 0x28A1B8u;
        goto label_28a1b8;
    }
    ctx->pc = 0x28A1B0u;
    SET_GPR_U32(ctx, 31, 0x28A1B8u);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x28A1B0u, 0x28A1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A1B8u;
label_28a1b8:
    // 0x28a1b8: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x28a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_28a1bc:
    // 0x28a1bc: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x28a1bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28a1c0:
    // 0x28a1c0: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x28a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_28a1c4:
    // 0x28a1c4: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x28a1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_28a1c8:
    // 0x28a1c8: 0x26050002  addiu       $a1, $s0, 0x2
    ctx->pc = 0x28a1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_28a1cc:
    // 0x28a1cc: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x28a1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_28a1d0:
    // 0x28a1d0: 0x26040003  addiu       $a0, $s0, 0x3
    ctx->pc = 0x28a1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_28a1d4:
    // 0x28a1d4: 0x3087ffff  andi        $a3, $a0, 0xFFFF
    ctx->pc = 0x28a1d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_28a1d8:
    // 0x28a1d8: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x28a1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28a1dc:
    // 0x28a1dc: 0x3088ffff  andi        $t0, $a0, 0xFFFF
    ctx->pc = 0x28a1dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_28a1e0:
    // 0x28a1e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28a1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a1e4:
    // 0x28a1e4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x28a1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28a1e8:
    // 0x28a1e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28a1e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28a1ec:
    // 0x28a1ec: 0xc0e3356  jal         func_38CD58
label_28a1f0:
    if (ctx->pc == 0x28A1F0u) {
        ctx->pc = 0x28A1F4u;
        goto label_28a1f4;
    }
    ctx->pc = 0x28A1ECu;
    SET_GPR_U32(ctx, 31, 0x28A1F4u);
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x28A1ECu, 0x28A1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A1F4u;
label_28a1f4:
    // 0x28a1f4: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x28a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_28a1f8:
    // 0x28a1f8: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x28a1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_28a1fc:
    // 0x28a1fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28a1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a200:
    // 0x28a200: 0x8fa60258  lw          $a2, 0x258($sp)
    ctx->pc = 0x28a200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_28a204:
    // 0x28a204: 0xc0e335c  jal         func_38CD70
label_28a208:
    if (ctx->pc == 0x28A208u) {
        ctx->pc = 0x28A20Cu;
        goto label_28a20c;
    }
    ctx->pc = 0x28A204u;
    SET_GPR_U32(ctx, 31, 0x28A20Cu);
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x28A204u, 0x28A20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A20Cu;
label_28a20c:
    // 0x28a20c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x28a20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_28a210:
    // 0x28a210: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28a210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28a214:
    // 0x28a214: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x28a214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28a218:
    // 0x28a218: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28a218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28a21c:
    // 0x28a21c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x28a21cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_28a220:
    // 0x28a220: 0x2fc10002  sltiu       $at, $fp, 0x2
    ctx->pc = 0x28a220u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_28a224:
    // 0x28a224: 0x1420ff37  bnez        $at, . + 4 + (-0xC9 << 2)
label_28a228:
    if (ctx->pc == 0x28A228u) {
        ctx->pc = 0x28A22Cu;
        goto label_28a22c;
    }
    ctx->pc = 0x28A224u;
    {
        const bool branch_taken_0x28a224 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a224) {
            ctx->pc = 0x289F04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_289f04;
        }
    }
    ctx->pc = 0x28A22Cu;
label_28a22c:
    // 0x28a22c: 0x8fa40278  lw          $a0, 0x278($sp)
    ctx->pc = 0x28a22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_28a230:
    // 0x28a230: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x28a230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_28a234:
    // 0x28a234: 0xc0e2ab0  jal         func_38AAC0
label_28a238:
    if (ctx->pc == 0x28A238u) {
        ctx->pc = 0x28A23Cu;
        goto label_28a23c;
    }
    ctx->pc = 0x28A234u;
    SET_GPR_U32(ctx, 31, 0x28A23Cu);
    ctx->pc = 0x38AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AAC0u, 0x28A234u, 0x28A23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A23Cu;
label_28a23c:
    // 0x28a23c: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x28a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_28a240:
    // 0x28a240: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x28a240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_28a244:
    // 0x28a244: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x28a244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_28a248:
    // 0x28a248: 0xc046270  jal         func_1189C0
label_28a24c:
    if (ctx->pc == 0x28A24Cu) {
        ctx->pc = 0x28A250u;
        goto label_28a250;
    }
    ctx->pc = 0x28A248u;
    SET_GPR_U32(ctx, 31, 0x28A250u);
    ctx->pc = 0x1189C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C0u, 0x28A248u, 0x28A250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A250u;
label_28a250:
    // 0x28a250: 0x27a20278  addiu       $v0, $sp, 0x278
    ctx->pc = 0x28a250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
label_28a254:
    // 0x28a254: 0xafa201e8  sw          $v0, 0x1E8($sp)
    ctx->pc = 0x28a254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
label_28a258:
    // 0x28a258: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x28a258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_28a25c:
    // 0x28a25c: 0xafb10248  sw          $s1, 0x248($sp)
    ctx->pc = 0x28a25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 17));
label_28a260:
    // 0x28a260: 0x8fa40248  lw          $a0, 0x248($sp)
    ctx->pc = 0x28a260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_28a264:
    // 0x28a264: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28a268:
    // 0x28a268: 0xc0e751e  jal         func_39D478
label_28a26c:
    if (ctx->pc == 0x28A26Cu) {
        ctx->pc = 0x28A270u;
        goto label_28a270;
    }
    ctx->pc = 0x28A268u;
    SET_GPR_U32(ctx, 31, 0x28A270u);
    ctx->pc = 0x39D478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39D478u, 0x28A268u, 0x28A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A270u;
label_28a270:
    // 0x28a270: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28a270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28a274:
    // 0x28a274: 0x8fa40248  lw          $a0, 0x248($sp)
    ctx->pc = 0x28a274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_28a278:
    // 0x28a278: 0xc0e3414  jal         func_38D050
label_28a27c:
    if (ctx->pc == 0x28A27Cu) {
        ctx->pc = 0x28A280u;
        goto label_28a280;
    }
    ctx->pc = 0x28A278u;
    SET_GPR_U32(ctx, 31, 0x28A280u);
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x28A278u, 0x28A280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A280u;
label_28a280:
    // 0x28a280: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28a280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28a284:
    // 0x28a284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28a284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a288:
    // 0x28a288: 0xc0e2d08  jal         func_38B420
label_28a28c:
    if (ctx->pc == 0x28A28Cu) {
        ctx->pc = 0x28A290u;
        goto label_28a290;
    }
    ctx->pc = 0x28A288u;
    SET_GPR_U32(ctx, 31, 0x28A290u);
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x28A288u, 0x28A290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A290u;
label_28a290:
    // 0x28a290: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28a290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28a294:
    // 0x28a294: 0xc0e2094  jal         func_388250
label_28a298:
    if (ctx->pc == 0x28A298u) {
        ctx->pc = 0x28A29Cu;
        goto label_28a29c;
    }
    ctx->pc = 0x28A294u;
    SET_GPR_U32(ctx, 31, 0x28A29Cu);
    ctx->pc = 0x388250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388250u, 0x28A294u, 0x28A29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A29Cu;
label_28a29c:
    // 0x28a29c: 0xafa20244  sw          $v0, 0x244($sp)
    ctx->pc = 0x28a29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 2));
label_28a2a0:
    // 0x28a2a0: 0xc1067b0  jal         func_419EC0
label_28a2a4:
    if (ctx->pc == 0x28A2A4u) {
        ctx->pc = 0x28A2A8u;
        goto label_28a2a8;
    }
    ctx->pc = 0x28A2A0u;
    SET_GPR_U32(ctx, 31, 0x28A2A8u);
    ctx->pc = 0x419EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EC0u, 0x28A2A0u, 0x28A2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A2A8u;
label_28a2a8:
    // 0x28a2a8: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x28a2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_28a2ac:
    // 0x28a2ac: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x28a2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_28a2b0:
    // 0x28a2b0: 0xc106638  jal         func_4198E0
label_28a2b4:
    if (ctx->pc == 0x28A2B4u) {
        ctx->pc = 0x28A2B8u;
        goto label_28a2b8;
    }
    ctx->pc = 0x28A2B0u;
    SET_GPR_U32(ctx, 31, 0x28A2B8u);
    ctx->pc = 0x4198E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4198E0u, 0x28A2B0u, 0x28A2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A2B8u;
label_28a2b8:
    // 0x28a2b8: 0x8fa40244  lw          $a0, 0x244($sp)
    ctx->pc = 0x28a2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_28a2bc:
    // 0x28a2bc: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x28a2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_28a2c0:
    // 0x28a2c0: 0xc0e2686  jal         func_389A18
label_28a2c4:
    if (ctx->pc == 0x28A2C4u) {
        ctx->pc = 0x28A2C8u;
        goto label_28a2c8;
    }
    ctx->pc = 0x28A2C0u;
    SET_GPR_U32(ctx, 31, 0x28A2C8u);
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x28A2C0u, 0x28A2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A2C8u;
label_28a2c8:
    // 0x28a2c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28a2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28a2cc:
    // 0x28a2cc: 0x8fa50244  lw          $a1, 0x244($sp)
    ctx->pc = 0x28a2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_28a2d0:
    // 0x28a2d0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x28a2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28a2d4:
    // 0x28a2d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28a2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a2d8:
    // 0x28a2d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28a2d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28a2dc:
    // 0x28a2dc: 0xc0e2836  jal         func_38A0D8
label_28a2e0:
    if (ctx->pc == 0x28A2E0u) {
        ctx->pc = 0x28A2E4u;
        goto label_28a2e4;
    }
    ctx->pc = 0x28A2DCu;
    SET_GPR_U32(ctx, 31, 0x28A2E4u);
    ctx->pc = 0x38A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A0D8u, 0x28A2DCu, 0x28A2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A2E4u;
label_28a2e4:
    // 0x28a2e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28a2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a2e8:
    // 0x28a2e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28a2ec:
    // 0x28a2ec: 0xc0c5380  jal         func_314E00
label_28a2f0:
    if (ctx->pc == 0x28A2F0u) {
        ctx->pc = 0x28A2F4u;
        goto label_28a2f4;
    }
    ctx->pc = 0x28A2ECu;
    SET_GPR_U32(ctx, 31, 0x28A2F4u);
    ctx->pc = 0x314E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314E00u, 0x28A2ECu, 0x28A2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A2F4u;
label_28a2f4:
    // 0x28a2f4: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x28a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_28a2f8:
    // 0x28a2f8: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x28a2f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_28a2fc:
    // 0x28a2fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28a2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_28a300:
    // 0x28a300: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x28a300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
label_28a304:
    // 0x28a304: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x28a304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_28a308:
    // 0x28a308: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28a308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_28a30c:
    // 0x28a30c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28a30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_28a310:
    // 0x28a310: 0x8fa20244  lw          $v0, 0x244($sp)
    ctx->pc = 0x28a310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_28a314:
    // 0x28a314: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x28a314u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_28a318:
    // 0x28a318: 0x27a20244  addiu       $v0, $sp, 0x244
    ctx->pc = 0x28a318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
label_28a31c:
    // 0x28a31c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x28a31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_28a320:
    // 0x28a320: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x28a320u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_28a324:
    // 0x28a324: 0xafa201e4  sw          $v0, 0x1E4($sp)
    ctx->pc = 0x28a324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 2));
label_28a328:
    // 0x28a328: 0x8fa401e4  lw          $a0, 0x1E4($sp)
    ctx->pc = 0x28a328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
label_28a32c:
    // 0x28a32c: 0xc0e2744  jal         func_389D10
label_28a330:
    if (ctx->pc == 0x28A330u) {
        ctx->pc = 0x28A334u;
        goto label_28a334;
    }
    ctx->pc = 0x28A32Cu;
    SET_GPR_U32(ctx, 31, 0x28A334u);
    ctx->pc = 0x389D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389D10u, 0x28A32Cu, 0x28A334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A334u;
label_28a334:
    // 0x28a334: 0xafa2023c  sw          $v0, 0x23C($sp)
    ctx->pc = 0x28a334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 2));
label_28a338:
    // 0x28a338: 0xc1067b0  jal         func_419EC0
label_28a33c:
    if (ctx->pc == 0x28A33Cu) {
        ctx->pc = 0x28A340u;
        goto label_28a340;
    }
    ctx->pc = 0x28A338u;
    SET_GPR_U32(ctx, 31, 0x28A340u);
    ctx->pc = 0x419EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EC0u, 0x28A338u, 0x28A340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A340u;
label_28a340:
    // 0x28a340: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x28a340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_28a344:
    // 0x28a344: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x28a344u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_28a348:
    // 0x28a348: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x28a348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_28a34c:
    // 0x28a34c: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x28a34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_28a350:
    // 0x28a350: 0xc106638  jal         func_4198E0
label_28a354:
    if (ctx->pc == 0x28A354u) {
        ctx->pc = 0x28A358u;
        goto label_28a358;
    }
    ctx->pc = 0x28A350u;
    SET_GPR_U32(ctx, 31, 0x28A358u);
    ctx->pc = 0x4198E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4198E0u, 0x28A350u, 0x28A358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A358u;
label_28a358:
    // 0x28a358: 0x8fa402d0  lw          $a0, 0x2D0($sp)
    ctx->pc = 0x28a358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_28a35c:
    // 0x28a35c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x28a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28a360:
    // 0x28a360: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x28a360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_28a364:
    // 0x28a364: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28a364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_28a368:
    // 0x28a368: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
label_28a36c:
    if (ctx->pc == 0x28A36Cu) {
        ctx->pc = 0x28A370u;
        goto label_28a370;
    }
    ctx->pc = 0x28A368u;
    {
        const bool branch_taken_0x28a368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a368) {
            ctx->pc = 0x28A4F8u;
            goto label_28a4f8;
        }
    }
    ctx->pc = 0x28A370u;
label_28a370:
    // 0x28a370: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x28a370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_28a374:
    // 0x28a374: 0x2442d480  addiu       $v0, $v0, -0x2B80
    ctx->pc = 0x28a374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956160));
label_28a378:
    // 0x28a378: 0x27a50178  addiu       $a1, $sp, 0x178
    ctx->pc = 0x28a378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_28a37c:
    // 0x28a37c: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x28a37cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_28a380:
    // 0x28a380: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x28a380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28a384:
    // 0x28a384: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x28a384u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
label_28a388:
    // 0x28a388: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x28a388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_28a38c:
    // 0x28a38c: 0x3c04c2b4  lui         $a0, 0xC2B4
    ctx->pc = 0x28a38cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49844 << 16));
label_28a390:
    // 0x28a390: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x28a390u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28a394:
    // 0x28a394: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x28a394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_28a398:
    // 0x28a398: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28a398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28a39c:
    // 0x28a39c: 0x27a20178  addiu       $v0, $sp, 0x178
    ctx->pc = 0x28a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_28a3a0:
    // 0x28a3a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28a3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28a3a4:
    // 0x28a3a4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x28a3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28a3a8:
    // 0x28a3a8: 0xc1065b8  jal         func_4196E0
label_28a3ac:
    if (ctx->pc == 0x28A3ACu) {
        ctx->pc = 0x28A3B0u;
        goto label_28a3b0;
    }
    ctx->pc = 0x28A3A8u;
    SET_GPR_U32(ctx, 31, 0x28A3B0u);
    ctx->pc = 0x4196E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4196E0u, 0x28A3A8u, 0x28A3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A3B0u;
label_28a3b0:
    // 0x28a3b0: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x28a3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_28a3b4:
    // 0x28a3b4: 0x8c870038  lw          $a3, 0x38($a0)
    ctx->pc = 0x28a3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_28a3b8:
    // 0x28a3b8: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x28a3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_28a3bc:
    // 0x28a3bc: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x28a3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_28a3c0:
    // 0x28a3c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x28a3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28a3c4:
    // 0x28a3c4: 0x5107c  dsll32      $v0, $a1, 1
    ctx->pc = 0x28a3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 1));
label_28a3c8:
    // 0x28a3c8: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x28a3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
label_28a3cc:
    // 0x28a3cc: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x28a3ccu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_28a3d0:
    // 0x28a3d0: 0x3012  mflo        $a2
    ctx->pc = 0x28a3d0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_28a3d4:
    // 0x28a3d4: 0xafa60238  sw          $a2, 0x238($sp)
    ctx->pc = 0x28a3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 6));
label_28a3d8:
    // 0x28a3d8: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x28a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_28a3dc:
    // 0x28a3dc: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x28a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_28a3e0:
    // 0x28a3e0: 0x24480001  addiu       $t0, $v0, 0x1
    ctx->pc = 0x28a3e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28a3e4:
    // 0x28a3e4: 0x8fa402d0  lw          $a0, 0x2D0($sp)
    ctx->pc = 0x28a3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_28a3e8:
    // 0x28a3e8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x28a3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28a3ec:
    // 0x28a3ec: 0x5307c  dsll32      $a2, $a1, 1
    ctx->pc = 0x28a3ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 1));
label_28a3f0:
    // 0x28a3f0: 0x6307e  dsrl32      $a2, $a2, 1
    ctx->pc = 0x28a3f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 1));
label_28a3f4:
    // 0x28a3f4: 0xc8001b  divu        $zero, $a2, $t0
    ctx->pc = 0x28a3f4u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_28a3f8:
    // 0x28a3f8: 0x2810  mfhi        $a1
    ctx->pc = 0x28a3f8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_28a3fc:
    // 0x28a3fc: 0xafa50234  sw          $a1, 0x234($sp)
    ctx->pc = 0x28a3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 5));
label_28a400:
    // 0x28a400: 0x27a20168  addiu       $v0, $sp, 0x168
    ctx->pc = 0x28a400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_28a404:
    // 0x28a404: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x28a404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_28a408:
    // 0x28a408: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_28a40c:
    if (ctx->pc == 0x28A40Cu) {
        ctx->pc = 0x28A410u;
        goto label_28a410;
    }
    ctx->pc = 0x28A408u;
    {
        const bool branch_taken_0x28a408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a408) {
            ctx->pc = 0x28A430u;
            goto label_28a430;
        }
    }
    ctx->pc = 0x28A410u;
label_28a410:
    // 0x28a410: 0x409021  addu        $s2, $v0, $zero
    ctx->pc = 0x28a410u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_28a414:
    // 0x28a414: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x28a414u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_28a418:
    // 0x28a418: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28a418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28a41c:
    // 0x28a41c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x28a41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_28a420:
    // 0x28a420: 0x0  nop
    ctx->pc = 0x28a420u;
    // NOP
label_28a424:
    // 0x28a424: 0x0  nop
    ctx->pc = 0x28a424u;
    // NOP
label_28a428:
    // 0x28a428: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_28a42c:
    if (ctx->pc == 0x28A42Cu) {
        ctx->pc = 0x28A430u;
        goto label_28a430;
    }
    ctx->pc = 0x28A428u;
    {
        const bool branch_taken_0x28a428 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a428) {
            ctx->pc = 0x28A414u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a414;
        }
    }
    ctx->pc = 0x28A430u;
label_28a430:
    // 0x28a430: 0x3c0442a0  lui         $a0, 0x42A0
    ctx->pc = 0x28a430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17056 << 16));
label_28a434:
    // 0x28a434: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28a434u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28a438:
    // 0x28a438: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x28a438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
label_28a43c:
    // 0x28a43c: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_28a440:
    if (ctx->pc == 0x28A440u) {
        ctx->pc = 0x28A444u;
        goto label_28a444;
    }
    ctx->pc = 0x28A43Cu;
    {
        const bool branch_taken_0x28a43c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x28a43c) {
            ctx->pc = 0x28A458u;
            goto label_28a458;
        }
    }
    ctx->pc = 0x28A444u;
label_28a444:
    // 0x28a444: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28a444u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28a448:
    // 0x28a448: 0x0  nop
    ctx->pc = 0x28a448u;
    // NOP
label_28a44c:
    // 0x28a44c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28a44cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28a450:
    // 0x28a450: 0x10000008  b           . + 4 + (0x8 << 2)
label_28a454:
    if (ctx->pc == 0x28A454u) {
        ctx->pc = 0x28A458u;
        goto label_28a458;
    }
    ctx->pc = 0x28A450u;
    {
        const bool branch_taken_0x28a450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a450) {
            ctx->pc = 0x28A474u;
            goto label_28a474;
        }
    }
    ctx->pc = 0x28A458u;
label_28a458:
    // 0x28a458: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x28a458u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_28a45c:
    // 0x28a45c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x28a45cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_28a460:
    // 0x28a460: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x28a460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_28a464:
    // 0x28a464: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28a464u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28a468:
    // 0x28a468: 0x0  nop
    ctx->pc = 0x28a468u;
    // NOP
label_28a46c:
    // 0x28a46c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28a46cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28a470:
    // 0x28a470: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28a470u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28a474:
    // 0x28a474: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28a474u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28a478:
    // 0x28a478: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x28a478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_28a47c:
    // 0x28a47c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x28a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_28a480:
    // 0x28a480: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x28a480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_28a484:
    // 0x28a484: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x28a484u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_28a488:
    // 0x28a488: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28a488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28a48c:
    // 0x28a48c: 0x8fa40238  lw          $a0, 0x238($sp)
    ctx->pc = 0x28a48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_28a490:
    // 0x28a490: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_28a494:
    if (ctx->pc == 0x28A494u) {
        ctx->pc = 0x28A498u;
        goto label_28a498;
    }
    ctx->pc = 0x28A490u;
    {
        const bool branch_taken_0x28a490 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28a490) {
            ctx->pc = 0x28A4ACu;
            goto label_28a4ac;
        }
    }
    ctx->pc = 0x28A498u;
label_28a498:
    // 0x28a498: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28a498u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28a49c:
    // 0x28a49c: 0x0  nop
    ctx->pc = 0x28a49cu;
    // NOP
label_28a4a0:
    // 0x28a4a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28a4a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28a4a4:
    // 0x28a4a4: 0x10000008  b           . + 4 + (0x8 << 2)
label_28a4a8:
    if (ctx->pc == 0x28A4A8u) {
        ctx->pc = 0x28A4ACu;
        goto label_28a4ac;
    }
    ctx->pc = 0x28A4A4u;
    {
        const bool branch_taken_0x28a4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a4a4) {
            ctx->pc = 0x28A4C8u;
            goto label_28a4c8;
        }
    }
    ctx->pc = 0x28A4ACu;
label_28a4ac:
    // 0x28a4ac: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x28a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_28a4b0:
    // 0x28a4b0: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x28a4b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_28a4b4:
    // 0x28a4b4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x28a4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_28a4b8:
    // 0x28a4b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28a4b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28a4bc:
    // 0x28a4bc: 0x0  nop
    ctx->pc = 0x28a4bcu;
    // NOP
label_28a4c0:
    // 0x28a4c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28a4c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28a4c4:
    // 0x28a4c4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28a4c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28a4c8:
    // 0x28a4c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28a4c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28a4cc:
    // 0x28a4cc: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x28a4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_28a4d0:
    // 0x28a4d0: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x28a4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_28a4d4:
    // 0x28a4d4: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x28a4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_28a4d8:
    // 0x28a4d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x28a4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28a4dc:
    // 0x28a4dc: 0x27a80168  addiu       $t0, $sp, 0x168
    ctx->pc = 0x28a4dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_28a4e0:
    // 0x28a4e0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x28a4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_28a4e4:
    // 0x28a4e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x28a4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28a4e8:
    // 0x28a4e8: 0xc106598  jal         func_419660
label_28a4ec:
    if (ctx->pc == 0x28A4ECu) {
        ctx->pc = 0x28A4F0u;
        goto label_28a4f0;
    }
    ctx->pc = 0x28A4E8u;
    SET_GPR_U32(ctx, 31, 0x28A4F0u);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x28A4E8u, 0x28A4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A4F0u;
label_28a4f0:
    // 0x28a4f0: 0x10000051  b           . + 4 + (0x51 << 2)
label_28a4f4:
    if (ctx->pc == 0x28A4F4u) {
        ctx->pc = 0x28A4F8u;
        goto label_28a4f8;
    }
    ctx->pc = 0x28A4F0u;
    {
        const bool branch_taken_0x28a4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a4f0) {
            ctx->pc = 0x28A638u;
            goto label_28a638;
        }
    }
    ctx->pc = 0x28A4F8u;
label_28a4f8:
    // 0x28a4f8: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x28a4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_28a4fc:
    // 0x28a4fc: 0x8c870038  lw          $a3, 0x38($a0)
    ctx->pc = 0x28a4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_28a500:
    // 0x28a500: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x28a500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_28a504:
    // 0x28a504: 0x8fa402d0  lw          $a0, 0x2D0($sp)
    ctx->pc = 0x28a504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_28a508:
    // 0x28a508: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x28a508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28a50c:
    // 0x28a50c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x28a50cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_28a510:
    // 0x28a510: 0x3012  mflo        $a2
    ctx->pc = 0x28a510u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_28a514:
    // 0x28a514: 0xafa60230  sw          $a2, 0x230($sp)
    ctx->pc = 0x28a514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 6));
label_28a518:
    // 0x28a518: 0x8fa502c0  lw          $a1, 0x2C0($sp)
    ctx->pc = 0x28a518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_28a51c:
    // 0x28a51c: 0x8ca40038  lw          $a0, 0x38($a1)
    ctx->pc = 0x28a51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_28a520:
    // 0x28a520: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x28a520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_28a524:
    // 0x28a524: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x28a524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_28a528:
    // 0x28a528: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28a528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28a52c:
    // 0x28a52c: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x28a52cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_28a530:
    // 0x28a530: 0x1010  mfhi        $v0
    ctx->pc = 0x28a530u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_28a534:
    // 0x28a534: 0xafa2022c  sw          $v0, 0x22C($sp)
    ctx->pc = 0x28a534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 2));
label_28a538:
    // 0x28a538: 0x27a20158  addiu       $v0, $sp, 0x158
    ctx->pc = 0x28a538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_28a53c:
    // 0x28a53c: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x28a53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_28a540:
    // 0x28a540: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x28a540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_28a544:
    // 0x28a544: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x28a544u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_28a548:
    // 0x28a548: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_28a54c:
    if (ctx->pc == 0x28A54Cu) {
        ctx->pc = 0x28A550u;
        goto label_28a550;
    }
    ctx->pc = 0x28A548u;
    {
        const bool branch_taken_0x28a548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a548) {
            ctx->pc = 0x28A578u;
            goto label_28a578;
        }
    }
    ctx->pc = 0x28A550u;
label_28a550:
    // 0x28a550: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x28a550u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_28a554:
    // 0x28a554: 0x402021  addu        $a0, $v0, $zero
    ctx->pc = 0x28a554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_28a558:
    // 0x28a558: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x28a558u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_28a55c:
    // 0x28a55c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x28a55cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_28a560:
    // 0x28a560: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x28a560u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_28a564:
    // 0x28a564: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28a564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28a568:
    // 0x28a568: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x28a568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_28a56c:
    // 0x28a56c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x28a56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_28a570:
    // 0x28a570: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
label_28a574:
    if (ctx->pc == 0x28A574u) {
        ctx->pc = 0x28A578u;
        goto label_28a578;
    }
    ctx->pc = 0x28A570u;
    {
        const bool branch_taken_0x28a570 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a570) {
            ctx->pc = 0x28A558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a558;
        }
    }
    ctx->pc = 0x28A578u;
label_28a578:
    // 0x28a578: 0x3c0542a0  lui         $a1, 0x42A0
    ctx->pc = 0x28a578u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17056 << 16));
label_28a57c:
    // 0x28a57c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x28a57cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28a580:
    // 0x28a580: 0x8fa2022c  lw          $v0, 0x22C($sp)
    ctx->pc = 0x28a580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
label_28a584:
    // 0x28a584: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_28a588:
    if (ctx->pc == 0x28A588u) {
        ctx->pc = 0x28A58Cu;
        goto label_28a58c;
    }
    ctx->pc = 0x28A584u;
    {
        const bool branch_taken_0x28a584 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28a584) {
            ctx->pc = 0x28A5A0u;
            goto label_28a5a0;
        }
    }
    ctx->pc = 0x28A58Cu;
label_28a58c:
    // 0x28a58c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28a58cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28a590:
    // 0x28a590: 0x0  nop
    ctx->pc = 0x28a590u;
    // NOP
label_28a594:
    // 0x28a594: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28a594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28a598:
    // 0x28a598: 0x10000008  b           . + 4 + (0x8 << 2)
label_28a59c:
    if (ctx->pc == 0x28A59Cu) {
        ctx->pc = 0x28A5A0u;
        goto label_28a5a0;
    }
    ctx->pc = 0x28A598u;
    {
        const bool branch_taken_0x28a598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a598) {
            ctx->pc = 0x28A5BCu;
            goto label_28a5bc;
        }
    }
    ctx->pc = 0x28A5A0u;
label_28a5a0:
    // 0x28a5a0: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x28a5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_28a5a4:
    // 0x28a5a4: 0x30470001  andi        $a3, $v0, 0x1
    ctx->pc = 0x28a5a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28a5a8:
    // 0x28a5a8: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x28a5a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
label_28a5ac:
    // 0x28a5ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28a5acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28a5b0:
    // 0x28a5b0: 0x0  nop
    ctx->pc = 0x28a5b0u;
    // NOP
label_28a5b4:
    // 0x28a5b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28a5b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28a5b8:
    // 0x28a5b8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28a5b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28a5bc:
    // 0x28a5bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28a5bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28a5c0:
    // 0x28a5c0: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x28a5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_28a5c4:
    // 0x28a5c4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x28a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_28a5c8:
    // 0x28a5c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28a5c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28a5cc:
    // 0x28a5cc: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x28a5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_28a5d0:
    // 0x28a5d0: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_28a5d4:
    if (ctx->pc == 0x28A5D4u) {
        ctx->pc = 0x28A5D8u;
        goto label_28a5d8;
    }
    ctx->pc = 0x28A5D0u;
    {
        const bool branch_taken_0x28a5d0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28a5d0) {
            ctx->pc = 0x28A5ECu;
            goto label_28a5ec;
        }
    }
    ctx->pc = 0x28A5D8u;
label_28a5d8:
    // 0x28a5d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28a5d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28a5dc:
    // 0x28a5dc: 0x0  nop
    ctx->pc = 0x28a5dcu;
    // NOP
label_28a5e0:
    // 0x28a5e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28a5e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28a5e4:
    // 0x28a5e4: 0x10000008  b           . + 4 + (0x8 << 2)
label_28a5e8:
    if (ctx->pc == 0x28A5E8u) {
        ctx->pc = 0x28A5ECu;
        goto label_28a5ec;
    }
    ctx->pc = 0x28A5E4u;
    {
        const bool branch_taken_0x28a5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a5e4) {
            ctx->pc = 0x28A608u;
            goto label_28a608;
        }
    }
    ctx->pc = 0x28A5ECu;
label_28a5ec:
    // 0x28a5ec: 0x42842  srl         $a1, $a0, 1
    ctx->pc = 0x28a5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_28a5f0:
    // 0x28a5f0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x28a5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_28a5f4:
    // 0x28a5f4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x28a5f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_28a5f8:
    // 0x28a5f8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x28a5f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28a5fc:
    // 0x28a5fc: 0x0  nop
    ctx->pc = 0x28a5fcu;
    // NOP
label_28a600:
    // 0x28a600: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28a600u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28a604:
    // 0x28a604: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28a604u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_28a608:
    // 0x28a608: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x28a608u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28a60c:
    // 0x28a60c: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x28a60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_28a610:
    // 0x28a610: 0xe7a001dc  swc1        $f0, 0x1DC($sp)
    ctx->pc = 0x28a610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
label_28a614:
    // 0x28a614: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x28a614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_28a618:
    // 0x28a618: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28a618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28a61c:
    // 0x28a61c: 0x27a80158  addiu       $t0, $sp, 0x158
    ctx->pc = 0x28a61cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_28a620:
    // 0x28a620: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x28a620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_28a624:
    // 0x28a624: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28a624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28a628:
    // 0x28a628: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28a628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28a62c:
    // 0x28a62c: 0xc106598  jal         func_419660
label_28a630:
    if (ctx->pc == 0x28A630u) {
        ctx->pc = 0x28A634u;
        goto label_28a634;
    }
    ctx->pc = 0x28A62Cu;
    SET_GPR_U32(ctx, 31, 0x28A634u);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x28A62Cu, 0x28A634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A634u;
label_28a634:
    // 0x28a634: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x28a634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_28a638:
    // 0x28a638: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x28a638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_28a63c:
    // 0x28a63c: 0x8fa2023c  lw          $v0, 0x23C($sp)
    ctx->pc = 0x28a63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_28a640:
    // 0x28a640: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x28a640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_28a644:
    // 0x28a644: 0x27a6023c  addiu       $a2, $sp, 0x23C
    ctx->pc = 0x28a644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 572));
label_28a648:
    // 0x28a648: 0xafa601d8  sw          $a2, 0x1D8($sp)
    ctx->pc = 0x28a648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 6));
label_28a64c:
    // 0x28a64c: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x28a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_28a650:
    // 0x28a650: 0x8fb2023c  lw          $s2, 0x23C($sp)
    ctx->pc = 0x28a650u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_28a654:
    // 0x28a654: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28a654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28a658:
    // 0x28a658: 0x8fb00244  lw          $s0, 0x244($sp)
    ctx->pc = 0x28a658u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_28a65c:
    // 0x28a65c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28a65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28a660:
    // 0x28a660: 0xc0e2700  jal         func_389C00
label_28a664:
    if (ctx->pc == 0x28A664u) {
        ctx->pc = 0x28A668u;
        goto label_28a668;
    }
    ctx->pc = 0x28A660u;
    SET_GPR_U32(ctx, 31, 0x28A668u);
    ctx->pc = 0x389C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389C00u, 0x28A660u, 0x28A668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A668u;
label_28a668:
    // 0x28a668: 0x8fa2023c  lw          $v0, 0x23C($sp)
    ctx->pc = 0x28a668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_28a66c:
    // 0x28a66c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x28a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_28a670:
    // 0x28a670: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x28a670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_28a674:
    // 0x28a674: 0x7ba400d0  lq          $a0, 0xD0($sp)
    ctx->pc = 0x28a674u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_28a678:
    // 0x28a678: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x28a678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_28a67c:
    // 0x28a67c: 0xc10671c  jal         func_419C70
label_28a680:
    if (ctx->pc == 0x28A680u) {
        ctx->pc = 0x28A684u;
        goto label_28a684;
    }
    ctx->pc = 0x28A67Cu;
    SET_GPR_U32(ctx, 31, 0x28A684u);
    ctx->pc = 0x419C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419C70u, 0x28A67Cu, 0x28A684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A684u;
label_28a684:
    // 0x28a684: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28a684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28a688:
    // 0x28a688: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28a688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28a68c:
    // 0x28a68c: 0xc0e3414  jal         func_38D050
label_28a690:
    if (ctx->pc == 0x28A690u) {
        ctx->pc = 0x28A694u;
        goto label_28a694;
    }
    ctx->pc = 0x28A68Cu;
    SET_GPR_U32(ctx, 31, 0x28A694u);
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x28A68Cu, 0x28A694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A694u;
label_28a694:
    // 0x28a694: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28a694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28a698:
    // 0x28a698: 0x8fa60260  lw          $a2, 0x260($sp)
    ctx->pc = 0x28a698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_28a69c:
    // 0x28a69c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x28a69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28a6a0:
    // 0x28a6a0: 0xc0e39c0  jal         func_38E700
label_28a6a4:
    if (ctx->pc == 0x28A6A4u) {
        ctx->pc = 0x28A6A8u;
        goto label_28a6a8;
    }
    ctx->pc = 0x28A6A0u;
    SET_GPR_U32(ctx, 31, 0x28A6A8u);
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x28A6A0u, 0x28A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A6A8u;
label_28a6a8:
    // 0x28a6a8: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x28a6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_28a6ac:
    // 0x28a6ac: 0x8fa4025c  lw          $a0, 0x25C($sp)
    ctx->pc = 0x28a6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_28a6b0:
    // 0x28a6b0: 0xc0e39c0  jal         func_38E700
label_28a6b4:
    if (ctx->pc == 0x28A6B4u) {
        ctx->pc = 0x28A6B8u;
        goto label_28a6b8;
    }
    ctx->pc = 0x28A6B0u;
    SET_GPR_U32(ctx, 31, 0x28A6B8u);
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x28A6B0u, 0x28A6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A6B8u;
label_28a6b8:
    // 0x28a6b8: 0x8fb00258  lw          $s0, 0x258($sp)
    ctx->pc = 0x28a6b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_28a6bc:
    // 0x28a6bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28a6c0:
    // 0x28a6c0: 0xc0e39c0  jal         func_38E700
label_28a6c4:
    if (ctx->pc == 0x28A6C4u) {
        ctx->pc = 0x28A6C8u;
        goto label_28a6c8;
    }
    ctx->pc = 0x28A6C0u;
    SET_GPR_U32(ctx, 31, 0x28A6C8u);
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x28A6C0u, 0x28A6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A6C8u;
label_28a6c8:
    // 0x28a6c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28a6c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28a6cc:
    // 0x28a6cc: 0x8fa2023c  lw          $v0, 0x23C($sp)
    ctx->pc = 0x28a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_28a6d0:
    // 0x28a6d0: 0xafa20224  sw          $v0, 0x224($sp)
    ctx->pc = 0x28a6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
label_28a6d4:
    // 0x28a6d4: 0x27a401b8  addiu       $a0, $sp, 0x1B8
    ctx->pc = 0x28a6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_28a6d8:
    // 0x28a6d8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28a6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28a6dc:
    // 0x28a6dc: 0xc0a2a04  jal         func_28A810
label_28a6e0:
    if (ctx->pc == 0x28A6E0u) {
        ctx->pc = 0x28A6E4u;
        goto label_28a6e4;
    }
    ctx->pc = 0x28A6DCu;
    SET_GPR_U32(ctx, 31, 0x28A6E4u);
    ctx->pc = 0x28A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A810u, 0x28A6DCu, 0x28A6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A6E4u;
label_28a6e4:
    // 0x28a6e4: 0x27a401c8  addiu       $a0, $sp, 0x1C8
    ctx->pc = 0x28a6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_28a6e8:
    // 0x28a6e8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28a6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28a6ec:
    // 0x28a6ec: 0xc0a2a04  jal         func_28A810
label_28a6f0:
    if (ctx->pc == 0x28A6F0u) {
        ctx->pc = 0x28A6F4u;
        goto label_28a6f4;
    }
    ctx->pc = 0x28A6ECu;
    SET_GPR_U32(ctx, 31, 0x28A6F4u);
    ctx->pc = 0x28A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A810u, 0x28A6ECu, 0x28A6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A6F4u;
label_28a6f4:
    // 0x28a6f4: 0x8fa20224  lw          $v0, 0x224($sp)
    ctx->pc = 0x28a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
label_28a6f8:
    // 0x28a6f8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x28a6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_28a6fc:
    // 0x28a6fc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x28a6fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28a700:
    // 0x28a700: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28a700u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28a704:
    // 0x28a704: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28a704u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28a708:
    // 0x28a708: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28a708u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28a70c:
    // 0x28a70c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28a70cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28a710:
    // 0x28a710: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28a710u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28a714:
    // 0x28a714: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28a714u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28a718:
    // 0x28a718: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28a718u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28a71c:
    // 0x28a71c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28a71cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28a720:
    // 0x28a720: 0x27bd0300  addiu       $sp, $sp, 0x300
    ctx->pc = 0x28a720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_28a724:
    // 0x28a724: 0x3e00008  jr          $ra
label_28a728:
    if (ctx->pc == 0x28A728u) {
        ctx->pc = 0x28A72Cu;
        goto label_28a72c;
    }
    ctx->pc = 0x28A724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A72Cu;
label_28a72c:
    // 0x28a72c: 0x0  nop
    ctx->pc = 0x28a72cu;
    // NOP
    ctx->pc = 0x28a730u;
}
