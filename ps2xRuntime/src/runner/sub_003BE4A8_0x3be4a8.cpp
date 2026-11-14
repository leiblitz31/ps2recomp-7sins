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

// Function: sub_003BE4A8
// Address: 0x3be4a8 - 0x3beb78
void sub_003BE4A8_0x3be4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BE4A8_0x3be4a8");
#endif

    switch (ctx->pc) {
        case 0x3be4a8u: goto label_3be4a8;
        case 0x3be4acu: goto label_3be4ac;
        case 0x3be4b0u: goto label_3be4b0;
        case 0x3be4b4u: goto label_3be4b4;
        case 0x3be4b8u: goto label_3be4b8;
        case 0x3be4bcu: goto label_3be4bc;
        case 0x3be4c0u: goto label_3be4c0;
        case 0x3be4c4u: goto label_3be4c4;
        case 0x3be4c8u: goto label_3be4c8;
        case 0x3be4ccu: goto label_3be4cc;
        case 0x3be4d0u: goto label_3be4d0;
        case 0x3be4d4u: goto label_3be4d4;
        case 0x3be4d8u: goto label_3be4d8;
        case 0x3be4dcu: goto label_3be4dc;
        case 0x3be4e0u: goto label_3be4e0;
        case 0x3be4e4u: goto label_3be4e4;
        case 0x3be4e8u: goto label_3be4e8;
        case 0x3be4ecu: goto label_3be4ec;
        case 0x3be4f0u: goto label_3be4f0;
        case 0x3be4f4u: goto label_3be4f4;
        case 0x3be4f8u: goto label_3be4f8;
        case 0x3be4fcu: goto label_3be4fc;
        case 0x3be500u: goto label_3be500;
        case 0x3be504u: goto label_3be504;
        case 0x3be508u: goto label_3be508;
        case 0x3be50cu: goto label_3be50c;
        case 0x3be510u: goto label_3be510;
        case 0x3be514u: goto label_3be514;
        case 0x3be518u: goto label_3be518;
        case 0x3be51cu: goto label_3be51c;
        case 0x3be520u: goto label_3be520;
        case 0x3be524u: goto label_3be524;
        case 0x3be528u: goto label_3be528;
        case 0x3be52cu: goto label_3be52c;
        case 0x3be530u: goto label_3be530;
        case 0x3be534u: goto label_3be534;
        case 0x3be538u: goto label_3be538;
        case 0x3be53cu: goto label_3be53c;
        case 0x3be540u: goto label_3be540;
        case 0x3be544u: goto label_3be544;
        case 0x3be548u: goto label_3be548;
        case 0x3be54cu: goto label_3be54c;
        case 0x3be550u: goto label_3be550;
        case 0x3be554u: goto label_3be554;
        case 0x3be558u: goto label_3be558;
        case 0x3be55cu: goto label_3be55c;
        case 0x3be560u: goto label_3be560;
        case 0x3be564u: goto label_3be564;
        case 0x3be568u: goto label_3be568;
        case 0x3be56cu: goto label_3be56c;
        case 0x3be570u: goto label_3be570;
        case 0x3be574u: goto label_3be574;
        case 0x3be578u: goto label_3be578;
        case 0x3be57cu: goto label_3be57c;
        case 0x3be580u: goto label_3be580;
        case 0x3be584u: goto label_3be584;
        case 0x3be588u: goto label_3be588;
        case 0x3be58cu: goto label_3be58c;
        case 0x3be590u: goto label_3be590;
        case 0x3be594u: goto label_3be594;
        case 0x3be598u: goto label_3be598;
        case 0x3be59cu: goto label_3be59c;
        case 0x3be5a0u: goto label_3be5a0;
        case 0x3be5a4u: goto label_3be5a4;
        case 0x3be5a8u: goto label_3be5a8;
        case 0x3be5acu: goto label_3be5ac;
        case 0x3be5b0u: goto label_3be5b0;
        case 0x3be5b4u: goto label_3be5b4;
        case 0x3be5b8u: goto label_3be5b8;
        case 0x3be5bcu: goto label_3be5bc;
        case 0x3be5c0u: goto label_3be5c0;
        case 0x3be5c4u: goto label_3be5c4;
        case 0x3be5c8u: goto label_3be5c8;
        case 0x3be5ccu: goto label_3be5cc;
        case 0x3be5d0u: goto label_3be5d0;
        case 0x3be5d4u: goto label_3be5d4;
        case 0x3be5d8u: goto label_3be5d8;
        case 0x3be5dcu: goto label_3be5dc;
        case 0x3be5e0u: goto label_3be5e0;
        case 0x3be5e4u: goto label_3be5e4;
        case 0x3be5e8u: goto label_3be5e8;
        case 0x3be5ecu: goto label_3be5ec;
        case 0x3be5f0u: goto label_3be5f0;
        case 0x3be5f4u: goto label_3be5f4;
        case 0x3be5f8u: goto label_3be5f8;
        case 0x3be5fcu: goto label_3be5fc;
        case 0x3be600u: goto label_3be600;
        case 0x3be604u: goto label_3be604;
        case 0x3be608u: goto label_3be608;
        case 0x3be60cu: goto label_3be60c;
        case 0x3be610u: goto label_3be610;
        case 0x3be614u: goto label_3be614;
        case 0x3be618u: goto label_3be618;
        case 0x3be61cu: goto label_3be61c;
        case 0x3be620u: goto label_3be620;
        case 0x3be624u: goto label_3be624;
        case 0x3be628u: goto label_3be628;
        case 0x3be62cu: goto label_3be62c;
        case 0x3be630u: goto label_3be630;
        case 0x3be634u: goto label_3be634;
        case 0x3be638u: goto label_3be638;
        case 0x3be63cu: goto label_3be63c;
        case 0x3be640u: goto label_3be640;
        case 0x3be644u: goto label_3be644;
        case 0x3be648u: goto label_3be648;
        case 0x3be64cu: goto label_3be64c;
        case 0x3be650u: goto label_3be650;
        case 0x3be654u: goto label_3be654;
        case 0x3be658u: goto label_3be658;
        case 0x3be65cu: goto label_3be65c;
        case 0x3be660u: goto label_3be660;
        case 0x3be664u: goto label_3be664;
        case 0x3be668u: goto label_3be668;
        case 0x3be66cu: goto label_3be66c;
        case 0x3be670u: goto label_3be670;
        case 0x3be674u: goto label_3be674;
        case 0x3be678u: goto label_3be678;
        case 0x3be67cu: goto label_3be67c;
        case 0x3be680u: goto label_3be680;
        case 0x3be684u: goto label_3be684;
        case 0x3be688u: goto label_3be688;
        case 0x3be68cu: goto label_3be68c;
        case 0x3be690u: goto label_3be690;
        case 0x3be694u: goto label_3be694;
        case 0x3be698u: goto label_3be698;
        case 0x3be69cu: goto label_3be69c;
        case 0x3be6a0u: goto label_3be6a0;
        case 0x3be6a4u: goto label_3be6a4;
        case 0x3be6a8u: goto label_3be6a8;
        case 0x3be6acu: goto label_3be6ac;
        case 0x3be6b0u: goto label_3be6b0;
        case 0x3be6b4u: goto label_3be6b4;
        case 0x3be6b8u: goto label_3be6b8;
        case 0x3be6bcu: goto label_3be6bc;
        case 0x3be6c0u: goto label_3be6c0;
        case 0x3be6c4u: goto label_3be6c4;
        case 0x3be6c8u: goto label_3be6c8;
        case 0x3be6ccu: goto label_3be6cc;
        case 0x3be6d0u: goto label_3be6d0;
        case 0x3be6d4u: goto label_3be6d4;
        case 0x3be6d8u: goto label_3be6d8;
        case 0x3be6dcu: goto label_3be6dc;
        case 0x3be6e0u: goto label_3be6e0;
        case 0x3be6e4u: goto label_3be6e4;
        case 0x3be6e8u: goto label_3be6e8;
        case 0x3be6ecu: goto label_3be6ec;
        case 0x3be6f0u: goto label_3be6f0;
        case 0x3be6f4u: goto label_3be6f4;
        case 0x3be6f8u: goto label_3be6f8;
        case 0x3be6fcu: goto label_3be6fc;
        case 0x3be700u: goto label_3be700;
        case 0x3be704u: goto label_3be704;
        case 0x3be708u: goto label_3be708;
        case 0x3be70cu: goto label_3be70c;
        case 0x3be710u: goto label_3be710;
        case 0x3be714u: goto label_3be714;
        case 0x3be718u: goto label_3be718;
        case 0x3be71cu: goto label_3be71c;
        case 0x3be720u: goto label_3be720;
        case 0x3be724u: goto label_3be724;
        case 0x3be728u: goto label_3be728;
        case 0x3be72cu: goto label_3be72c;
        case 0x3be730u: goto label_3be730;
        case 0x3be734u: goto label_3be734;
        case 0x3be738u: goto label_3be738;
        case 0x3be73cu: goto label_3be73c;
        case 0x3be740u: goto label_3be740;
        case 0x3be744u: goto label_3be744;
        case 0x3be748u: goto label_3be748;
        case 0x3be74cu: goto label_3be74c;
        case 0x3be750u: goto label_3be750;
        case 0x3be754u: goto label_3be754;
        case 0x3be758u: goto label_3be758;
        case 0x3be75cu: goto label_3be75c;
        case 0x3be760u: goto label_3be760;
        case 0x3be764u: goto label_3be764;
        case 0x3be768u: goto label_3be768;
        case 0x3be76cu: goto label_3be76c;
        case 0x3be770u: goto label_3be770;
        case 0x3be774u: goto label_3be774;
        case 0x3be778u: goto label_3be778;
        case 0x3be77cu: goto label_3be77c;
        case 0x3be780u: goto label_3be780;
        case 0x3be784u: goto label_3be784;
        case 0x3be788u: goto label_3be788;
        case 0x3be78cu: goto label_3be78c;
        case 0x3be790u: goto label_3be790;
        case 0x3be794u: goto label_3be794;
        case 0x3be798u: goto label_3be798;
        case 0x3be79cu: goto label_3be79c;
        case 0x3be7a0u: goto label_3be7a0;
        case 0x3be7a4u: goto label_3be7a4;
        case 0x3be7a8u: goto label_3be7a8;
        case 0x3be7acu: goto label_3be7ac;
        case 0x3be7b0u: goto label_3be7b0;
        case 0x3be7b4u: goto label_3be7b4;
        case 0x3be7b8u: goto label_3be7b8;
        case 0x3be7bcu: goto label_3be7bc;
        case 0x3be7c0u: goto label_3be7c0;
        case 0x3be7c4u: goto label_3be7c4;
        case 0x3be7c8u: goto label_3be7c8;
        case 0x3be7ccu: goto label_3be7cc;
        case 0x3be7d0u: goto label_3be7d0;
        case 0x3be7d4u: goto label_3be7d4;
        case 0x3be7d8u: goto label_3be7d8;
        case 0x3be7dcu: goto label_3be7dc;
        case 0x3be7e0u: goto label_3be7e0;
        case 0x3be7e4u: goto label_3be7e4;
        case 0x3be7e8u: goto label_3be7e8;
        case 0x3be7ecu: goto label_3be7ec;
        case 0x3be7f0u: goto label_3be7f0;
        case 0x3be7f4u: goto label_3be7f4;
        case 0x3be7f8u: goto label_3be7f8;
        case 0x3be7fcu: goto label_3be7fc;
        case 0x3be800u: goto label_3be800;
        case 0x3be804u: goto label_3be804;
        case 0x3be808u: goto label_3be808;
        case 0x3be80cu: goto label_3be80c;
        case 0x3be810u: goto label_3be810;
        case 0x3be814u: goto label_3be814;
        case 0x3be818u: goto label_3be818;
        case 0x3be81cu: goto label_3be81c;
        case 0x3be820u: goto label_3be820;
        case 0x3be824u: goto label_3be824;
        case 0x3be828u: goto label_3be828;
        case 0x3be82cu: goto label_3be82c;
        case 0x3be830u: goto label_3be830;
        case 0x3be834u: goto label_3be834;
        case 0x3be838u: goto label_3be838;
        case 0x3be83cu: goto label_3be83c;
        case 0x3be840u: goto label_3be840;
        case 0x3be844u: goto label_3be844;
        case 0x3be848u: goto label_3be848;
        case 0x3be84cu: goto label_3be84c;
        case 0x3be850u: goto label_3be850;
        case 0x3be854u: goto label_3be854;
        case 0x3be858u: goto label_3be858;
        case 0x3be85cu: goto label_3be85c;
        case 0x3be860u: goto label_3be860;
        case 0x3be864u: goto label_3be864;
        case 0x3be868u: goto label_3be868;
        case 0x3be86cu: goto label_3be86c;
        case 0x3be870u: goto label_3be870;
        case 0x3be874u: goto label_3be874;
        case 0x3be878u: goto label_3be878;
        case 0x3be87cu: goto label_3be87c;
        case 0x3be880u: goto label_3be880;
        case 0x3be884u: goto label_3be884;
        case 0x3be888u: goto label_3be888;
        case 0x3be88cu: goto label_3be88c;
        case 0x3be890u: goto label_3be890;
        case 0x3be894u: goto label_3be894;
        case 0x3be898u: goto label_3be898;
        case 0x3be89cu: goto label_3be89c;
        case 0x3be8a0u: goto label_3be8a0;
        case 0x3be8a4u: goto label_3be8a4;
        case 0x3be8a8u: goto label_3be8a8;
        case 0x3be8acu: goto label_3be8ac;
        case 0x3be8b0u: goto label_3be8b0;
        case 0x3be8b4u: goto label_3be8b4;
        case 0x3be8b8u: goto label_3be8b8;
        case 0x3be8bcu: goto label_3be8bc;
        case 0x3be8c0u: goto label_3be8c0;
        case 0x3be8c4u: goto label_3be8c4;
        case 0x3be8c8u: goto label_3be8c8;
        case 0x3be8ccu: goto label_3be8cc;
        case 0x3be8d0u: goto label_3be8d0;
        case 0x3be8d4u: goto label_3be8d4;
        case 0x3be8d8u: goto label_3be8d8;
        case 0x3be8dcu: goto label_3be8dc;
        case 0x3be8e0u: goto label_3be8e0;
        case 0x3be8e4u: goto label_3be8e4;
        case 0x3be8e8u: goto label_3be8e8;
        case 0x3be8ecu: goto label_3be8ec;
        case 0x3be8f0u: goto label_3be8f0;
        case 0x3be8f4u: goto label_3be8f4;
        case 0x3be8f8u: goto label_3be8f8;
        case 0x3be8fcu: goto label_3be8fc;
        case 0x3be900u: goto label_3be900;
        case 0x3be904u: goto label_3be904;
        case 0x3be908u: goto label_3be908;
        case 0x3be90cu: goto label_3be90c;
        case 0x3be910u: goto label_3be910;
        case 0x3be914u: goto label_3be914;
        case 0x3be918u: goto label_3be918;
        case 0x3be91cu: goto label_3be91c;
        case 0x3be920u: goto label_3be920;
        case 0x3be924u: goto label_3be924;
        case 0x3be928u: goto label_3be928;
        case 0x3be92cu: goto label_3be92c;
        case 0x3be930u: goto label_3be930;
        case 0x3be934u: goto label_3be934;
        case 0x3be938u: goto label_3be938;
        case 0x3be93cu: goto label_3be93c;
        case 0x3be940u: goto label_3be940;
        case 0x3be944u: goto label_3be944;
        case 0x3be948u: goto label_3be948;
        case 0x3be94cu: goto label_3be94c;
        case 0x3be950u: goto label_3be950;
        case 0x3be954u: goto label_3be954;
        case 0x3be958u: goto label_3be958;
        case 0x3be95cu: goto label_3be95c;
        case 0x3be960u: goto label_3be960;
        case 0x3be964u: goto label_3be964;
        case 0x3be968u: goto label_3be968;
        case 0x3be96cu: goto label_3be96c;
        case 0x3be970u: goto label_3be970;
        case 0x3be974u: goto label_3be974;
        case 0x3be978u: goto label_3be978;
        case 0x3be97cu: goto label_3be97c;
        case 0x3be980u: goto label_3be980;
        case 0x3be984u: goto label_3be984;
        case 0x3be988u: goto label_3be988;
        case 0x3be98cu: goto label_3be98c;
        case 0x3be990u: goto label_3be990;
        case 0x3be994u: goto label_3be994;
        case 0x3be998u: goto label_3be998;
        case 0x3be99cu: goto label_3be99c;
        case 0x3be9a0u: goto label_3be9a0;
        case 0x3be9a4u: goto label_3be9a4;
        case 0x3be9a8u: goto label_3be9a8;
        case 0x3be9acu: goto label_3be9ac;
        case 0x3be9b0u: goto label_3be9b0;
        case 0x3be9b4u: goto label_3be9b4;
        case 0x3be9b8u: goto label_3be9b8;
        case 0x3be9bcu: goto label_3be9bc;
        case 0x3be9c0u: goto label_3be9c0;
        case 0x3be9c4u: goto label_3be9c4;
        case 0x3be9c8u: goto label_3be9c8;
        case 0x3be9ccu: goto label_3be9cc;
        case 0x3be9d0u: goto label_3be9d0;
        case 0x3be9d4u: goto label_3be9d4;
        case 0x3be9d8u: goto label_3be9d8;
        case 0x3be9dcu: goto label_3be9dc;
        case 0x3be9e0u: goto label_3be9e0;
        case 0x3be9e4u: goto label_3be9e4;
        case 0x3be9e8u: goto label_3be9e8;
        case 0x3be9ecu: goto label_3be9ec;
        case 0x3be9f0u: goto label_3be9f0;
        case 0x3be9f4u: goto label_3be9f4;
        case 0x3be9f8u: goto label_3be9f8;
        case 0x3be9fcu: goto label_3be9fc;
        case 0x3bea00u: goto label_3bea00;
        case 0x3bea04u: goto label_3bea04;
        case 0x3bea08u: goto label_3bea08;
        case 0x3bea0cu: goto label_3bea0c;
        case 0x3bea10u: goto label_3bea10;
        case 0x3bea14u: goto label_3bea14;
        case 0x3bea18u: goto label_3bea18;
        case 0x3bea1cu: goto label_3bea1c;
        case 0x3bea20u: goto label_3bea20;
        case 0x3bea24u: goto label_3bea24;
        case 0x3bea28u: goto label_3bea28;
        case 0x3bea2cu: goto label_3bea2c;
        case 0x3bea30u: goto label_3bea30;
        case 0x3bea34u: goto label_3bea34;
        case 0x3bea38u: goto label_3bea38;
        case 0x3bea3cu: goto label_3bea3c;
        case 0x3bea40u: goto label_3bea40;
        case 0x3bea44u: goto label_3bea44;
        case 0x3bea48u: goto label_3bea48;
        case 0x3bea4cu: goto label_3bea4c;
        case 0x3bea50u: goto label_3bea50;
        case 0x3bea54u: goto label_3bea54;
        case 0x3bea58u: goto label_3bea58;
        case 0x3bea5cu: goto label_3bea5c;
        case 0x3bea60u: goto label_3bea60;
        case 0x3bea64u: goto label_3bea64;
        case 0x3bea68u: goto label_3bea68;
        case 0x3bea6cu: goto label_3bea6c;
        case 0x3bea70u: goto label_3bea70;
        case 0x3bea74u: goto label_3bea74;
        case 0x3bea78u: goto label_3bea78;
        case 0x3bea7cu: goto label_3bea7c;
        case 0x3bea80u: goto label_3bea80;
        case 0x3bea84u: goto label_3bea84;
        case 0x3bea88u: goto label_3bea88;
        case 0x3bea8cu: goto label_3bea8c;
        case 0x3bea90u: goto label_3bea90;
        case 0x3bea94u: goto label_3bea94;
        case 0x3bea98u: goto label_3bea98;
        case 0x3bea9cu: goto label_3bea9c;
        case 0x3beaa0u: goto label_3beaa0;
        case 0x3beaa4u: goto label_3beaa4;
        case 0x3beaa8u: goto label_3beaa8;
        case 0x3beaacu: goto label_3beaac;
        case 0x3beab0u: goto label_3beab0;
        case 0x3beab4u: goto label_3beab4;
        case 0x3beab8u: goto label_3beab8;
        case 0x3beabcu: goto label_3beabc;
        case 0x3beac0u: goto label_3beac0;
        case 0x3beac4u: goto label_3beac4;
        case 0x3beac8u: goto label_3beac8;
        case 0x3beaccu: goto label_3beacc;
        case 0x3bead0u: goto label_3bead0;
        case 0x3bead4u: goto label_3bead4;
        case 0x3bead8u: goto label_3bead8;
        case 0x3beadcu: goto label_3beadc;
        case 0x3beae0u: goto label_3beae0;
        case 0x3beae4u: goto label_3beae4;
        case 0x3beae8u: goto label_3beae8;
        case 0x3beaecu: goto label_3beaec;
        case 0x3beaf0u: goto label_3beaf0;
        case 0x3beaf4u: goto label_3beaf4;
        case 0x3beaf8u: goto label_3beaf8;
        case 0x3beafcu: goto label_3beafc;
        case 0x3beb00u: goto label_3beb00;
        case 0x3beb04u: goto label_3beb04;
        case 0x3beb08u: goto label_3beb08;
        case 0x3beb0cu: goto label_3beb0c;
        case 0x3beb10u: goto label_3beb10;
        case 0x3beb14u: goto label_3beb14;
        case 0x3beb18u: goto label_3beb18;
        case 0x3beb1cu: goto label_3beb1c;
        case 0x3beb20u: goto label_3beb20;
        case 0x3beb24u: goto label_3beb24;
        case 0x3beb28u: goto label_3beb28;
        case 0x3beb2cu: goto label_3beb2c;
        case 0x3beb30u: goto label_3beb30;
        case 0x3beb34u: goto label_3beb34;
        case 0x3beb38u: goto label_3beb38;
        case 0x3beb3cu: goto label_3beb3c;
        case 0x3beb40u: goto label_3beb40;
        case 0x3beb44u: goto label_3beb44;
        case 0x3beb48u: goto label_3beb48;
        case 0x3beb4cu: goto label_3beb4c;
        case 0x3beb50u: goto label_3beb50;
        case 0x3beb54u: goto label_3beb54;
        case 0x3beb58u: goto label_3beb58;
        case 0x3beb5cu: goto label_3beb5c;
        case 0x3beb60u: goto label_3beb60;
        case 0x3beb64u: goto label_3beb64;
        case 0x3beb68u: goto label_3beb68;
        case 0x3beb6cu: goto label_3beb6c;
        case 0x3beb70u: goto label_3beb70;
        case 0x3beb74u: goto label_3beb74;
        default: break;
    }

    ctx->pc = 0x3be4a8u;

label_3be4a8:
    // 0x3be4a8: 0x27bdfac0  addiu       $sp, $sp, -0x540
    ctx->pc = 0x3be4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965952));
label_3be4ac:
    // 0x3be4ac: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3be4acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3be4b0:
    // 0x3be4b0: 0x7fb404f0  sq          $s4, 0x4F0($sp)
    ctx->pc = 0x3be4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 20));
label_3be4b4:
    // 0x3be4b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3be4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3be4b8:
    // 0x3be4b8: 0x7fb00530  sq          $s0, 0x530($sp)
    ctx->pc = 0x3be4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 16));
label_3be4bc:
    // 0x3be4bc: 0x7fb10520  sq          $s1, 0x520($sp)
    ctx->pc = 0x3be4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 17));
label_3be4c0:
    // 0x3be4c0: 0x7fb20510  sq          $s2, 0x510($sp)
    ctx->pc = 0x3be4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1296), GPR_VEC(ctx, 18));
label_3be4c4:
    // 0x3be4c4: 0x7fb30500  sq          $s3, 0x500($sp)
    ctx->pc = 0x3be4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 19));
label_3be4c8:
    // 0x3be4c8: 0x7fb504e0  sq          $s5, 0x4E0($sp)
    ctx->pc = 0x3be4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 21));
label_3be4cc:
    // 0x3be4cc: 0x7fb604d0  sq          $s6, 0x4D0($sp)
    ctx->pc = 0x3be4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 22));
label_3be4d0:
    // 0x3be4d0: 0x7fb704c0  sq          $s7, 0x4C0($sp)
    ctx->pc = 0x3be4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 23));
label_3be4d4:
    // 0x3be4d4: 0x7fbe04b0  sq          $fp, 0x4B0($sp)
    ctx->pc = 0x3be4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 30));
label_3be4d8:
    // 0x3be4d8: 0xffbf04a0  sd          $ra, 0x4A0($sp)
    ctx->pc = 0x3be4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 31));
label_3be4dc:
    // 0x3be4dc: 0xc10493e  jal         func_4124F8
label_3be4e0:
    if (ctx->pc == 0x3BE4E0u) {
        ctx->pc = 0x3BE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE4DCu;
        // 0x3be4e0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE4E4u;
        goto label_3be4e4;
    }
    ctx->pc = 0x3BE4DCu;
    SET_GPR_U32(ctx, 31, 0x3BE4E4u);
    ctx->pc = 0x3BE4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE4DCu;
    // 0x3be4e0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4124F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4124F8u, 0x3BE4DCu, 0x3BE4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE4E4u;
label_3be4e4:
    // 0x3be4e4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3be4e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3be4e8:
    // 0x3be4e8: 0x1280017c  beqz        $s4, . + 4 + (0x17C << 2)
label_3be4ec:
    if (ctx->pc == 0x3BE4ECu) {
        ctx->pc = 0x3BE4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE4E8u;
        // 0x3be4ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE4F0u;
        goto label_3be4f0;
    }
    ctx->pc = 0x3BE4E8u;
    {
        const bool branch_taken_0x3be4e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE4E8u;
        // 0x3be4ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be4e8) {
            ctx->pc = 0x3BEADCu;
            goto label_3beadc;
        }
    }
    ctx->pc = 0x3BE4F0u;
label_3be4f0:
    // 0x3be4f0: 0x27a50490  addiu       $a1, $sp, 0x490
    ctx->pc = 0x3be4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
label_3be4f4:
    // 0x3be4f4: 0xc10480a  jal         func_412028
label_3be4f8:
    if (ctx->pc == 0x3BE4F8u) {
        ctx->pc = 0x3BE4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE4F4u;
        // 0x3be4f8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE4FCu;
        goto label_3be4fc;
    }
    ctx->pc = 0x3BE4F4u;
    SET_GPR_U32(ctx, 31, 0x3BE4FCu);
    ctx->pc = 0x3BE4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE4F4u;
    // 0x3be4f8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3BE4F4u, 0x3BE4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE4FCu;
label_3be4fc:
    // 0x3be4fc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3be4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3be500:
    // 0x3be500: 0x14430174  bne         $v0, $v1, . + 4 + (0x174 << 2)
label_3be504:
    if (ctx->pc == 0x3BE504u) {
        ctx->pc = 0x3BE504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE500u;
        // 0x3be504: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE508u;
        goto label_3be508;
    }
    ctx->pc = 0x3BE500u;
    {
        const bool branch_taken_0x3be500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3BE504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE500u;
        // 0x3be504: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be500) {
            ctx->pc = 0x3BEAD4u;
            goto label_3bead4;
        }
    }
    ctx->pc = 0x3BE508u;
label_3be508:
    // 0x3be508: 0x97a30490  lhu         $v1, 0x490($sp)
    ctx->pc = 0x3be508u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 1168)));
label_3be50c:
    // 0x3be50c: 0x24024d42  addiu       $v0, $zero, 0x4D42
    ctx->pc = 0x3be50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19778));
label_3be510:
    // 0x3be510: 0x14620170  bne         $v1, $v0, . + 4 + (0x170 << 2)
label_3be514:
    if (ctx->pc == 0x3BE514u) {
        ctx->pc = 0x3BE514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE510u;
        // 0x3be514: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE518u;
        goto label_3be518;
    }
    ctx->pc = 0x3BE510u;
    {
        const bool branch_taken_0x3be510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BE514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE510u;
        // 0x3be514: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be510) {
            ctx->pc = 0x3BEAD4u;
            goto label_3bead4;
        }
    }
    ctx->pc = 0x3BE518u;
label_3be518:
    // 0x3be518: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3be518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3be51c:
    // 0x3be51c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3be51cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3be520:
    // 0x3be520: 0x27a50042  addiu       $a1, $sp, 0x42
    ctx->pc = 0x3be520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 66));
label_3be524:
    // 0x3be524: 0xc10480a  jal         func_412028
label_3be528:
    if (ctx->pc == 0x3BE528u) {
        ctx->pc = 0x3BE528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE524u;
        // 0x3be528: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE52Cu;
        goto label_3be52c;
    }
    ctx->pc = 0x3BE524u;
    SET_GPR_U32(ctx, 31, 0x3BE52Cu);
    ctx->pc = 0x3BE528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE524u;
    // 0x3be528: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3BE524u, 0x3BE52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE52Cu;
label_3be52c:
    // 0x3be52c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3be52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3be530:
    // 0x3be530: 0x14430168  bne         $v0, $v1, . + 4 + (0x168 << 2)
label_3be534:
    if (ctx->pc == 0x3BE534u) {
        ctx->pc = 0x3BE534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE530u;
        // 0x3be534: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE538u;
        goto label_3be538;
    }
    ctx->pc = 0x3BE530u;
    {
        const bool branch_taken_0x3be530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3BE534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE530u;
        // 0x3be534: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be530) {
            ctx->pc = 0x3BEAD4u;
            goto label_3bead4;
        }
    }
    ctx->pc = 0x3BE538u;
label_3be538:
    // 0x3be538: 0x8fb1004c  lw          $s1, 0x4C($sp)
    ctx->pc = 0x3be538u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3be53c:
    // 0x3be53c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3be53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3be540:
    // 0x3be540: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3be540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3be544:
    // 0x3be544: 0x2630fffc  addiu       $s0, $s1, -0x4
    ctx->pc = 0x3be544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_3be548:
    // 0x3be548: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3be548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3be54c:
    // 0x3be54c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x3be54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_3be550:
    // 0x3be550: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3be550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3be554:
    // 0x3be554: 0xc10480a  jal         func_412028
label_3be558:
    if (ctx->pc == 0x3BE558u) {
        ctx->pc = 0x3BE558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE554u;
        // 0x3be558: 0xafb10010  sw          $s1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE55Cu;
        goto label_3be55c;
    }
    ctx->pc = 0x3BE554u;
    SET_GPR_U32(ctx, 31, 0x3BE55Cu);
    ctx->pc = 0x3BE558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE554u;
    // 0x3be558: 0xafb10010  sw          $s1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3BE554u, 0x3BE55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE55Cu;
label_3be55c:
    // 0x3be55c: 0x1450015d  bne         $v0, $s0, . + 4 + (0x15D << 2)
label_3be560:
    if (ctx->pc == 0x3BE560u) {
        ctx->pc = 0x3BE560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE55Cu;
        // 0x3be560: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE564u;
        goto label_3be564;
    }
    ctx->pc = 0x3BE55Cu;
    {
        const bool branch_taken_0x3be55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3BE560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE55Cu;
        // 0x3be560: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be55c) {
            ctx->pc = 0x3BEAD4u;
            goto label_3bead4;
        }
    }
    ctx->pc = 0x3BE564u;
label_3be564:
    // 0x3be564: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3be564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3be568:
    // 0x3be568: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3be568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3be56c:
    // 0x3be56c: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_3be570:
    if (ctx->pc == 0x3BE570u) {
        ctx->pc = 0x3BE570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE56Cu;
        // 0x3be570: 0x2633000e  addiu       $s3, $s1, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE574u;
        goto label_3be574;
    }
    ctx->pc = 0x3BE56Cu;
    {
        const bool branch_taken_0x3be56c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BE570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE56Cu;
        // 0x3be570: 0x2633000e  addiu       $s3, $s1, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be56c) {
            ctx->pc = 0x3BE5D4u;
            goto label_3be5d4;
        }
    }
    ctx->pc = 0x3BE574u;
label_3be574:
    // 0x3be574: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x3be574u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_3be578:
    // 0x3be578: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x3be578u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3be57c:
    // 0x3be57c: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x3be57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3be580:
    // 0x3be580: 0x97a50048  lhu         $a1, 0x48($sp)
    ctx->pc = 0x3be580u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
label_3be584:
    // 0x3be584: 0x97a6004a  lhu         $a2, 0x4A($sp)
    ctx->pc = 0x3be584u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 74)));
label_3be588:
    // 0x3be588: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x3be588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3be58c:
    // 0x3be58c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x3be58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3be590:
    // 0x3be590: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x3be590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
label_3be594:
    // 0x3be594: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3be594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_3be598:
    // 0x3be598: 0xa7a5001c  sh          $a1, 0x1C($sp)
    ctx->pc = 0x3be598u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 28), (uint16_t)GPR_U32(ctx, 5));
label_3be59c:
    // 0x3be59c: 0xa7a6001e  sh          $a2, 0x1E($sp)
    ctx->pc = 0x3be59cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 30), (uint16_t)GPR_U32(ctx, 6));
label_3be5a0:
    // 0x3be5a0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x3be5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_3be5a4:
    // 0x3be5a4: 0x14680016  bne         $v1, $t0, . + 4 + (0x16 << 2)
label_3be5a8:
    if (ctx->pc == 0x3BE5A8u) {
        ctx->pc = 0x3BE5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE5A4u;
        // 0x3be5a8: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE5ACu;
        goto label_3be5ac;
    }
    ctx->pc = 0x3BE5A4u;
    {
        const bool branch_taken_0x3be5a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x3BE5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE5A4u;
        // 0x3be5a8: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be5a4) {
            ctx->pc = 0x3BE600u;
            goto label_3be600;
        }
    }
    ctx->pc = 0x3BE5ACu;
label_3be5ac:
    // 0x3be5ac: 0x2402019d  addiu       $v0, $zero, 0x19D
    ctx->pc = 0x3be5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 413));
label_3be5b0:
    // 0x3be5b0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3be5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3be5b4:
    // 0x3be5b4: 0xafa20440  sw          $v0, 0x440($sp)
    ctx->pc = 0x3be5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 2));
label_3be5b8:
    // 0x3be5b8: 0xc1035f6  jal         func_40D7D8
label_3be5bc:
    if (ctx->pc == 0x3BE5BCu) {
        ctx->pc = 0x3BE5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE5B8u;
        // 0x3be5bc: 0x34840009  ori         $a0, $a0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE5C0u;
        goto label_3be5c0;
    }
    ctx->pc = 0x3BE5B8u;
    SET_GPR_U32(ctx, 31, 0x3BE5C0u);
    ctx->pc = 0x3BE5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE5B8u;
    // 0x3be5bc: 0x34840009  ori         $a0, $a0, 0x9 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3BE5B8u, 0x3BE5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE5C0u;
label_3be5c0:
    // 0x3be5c0: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x3be5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3be5c4:
    // 0x3be5c4: 0xc103628  jal         func_40D8A0
label_3be5c8:
    if (ctx->pc == 0x3BE5C8u) {
        ctx->pc = 0x3BE5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE5C4u;
        // 0x3be5c8: 0xafa20444  sw          $v0, 0x444($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1092), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE5CCu;
        goto label_3be5cc;
    }
    ctx->pc = 0x3BE5C4u;
    SET_GPR_U32(ctx, 31, 0x3BE5CCu);
    ctx->pc = 0x3BE5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE5C4u;
    // 0x3be5c8: 0xafa20444  sw          $v0, 0x444($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1092), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3BE5C4u, 0x3BE5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE5CCu;
label_3be5cc:
    // 0x3be5cc: 0x10000141  b           . + 4 + (0x141 << 2)
label_3be5d0:
    if (ctx->pc == 0x3BE5D0u) {
        ctx->pc = 0x3BE5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE5CCu;
        // 0x3be5d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE5D4u;
        goto label_3be5d4;
    }
    ctx->pc = 0x3BE5CCu;
    {
        const bool branch_taken_0x3be5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE5CCu;
        // 0x3be5d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be5cc) {
            ctx->pc = 0x3BEAD4u;
            goto label_3bead4;
        }
    }
    ctx->pc = 0x3BE5D4u;
label_3be5d4:
    // 0x3be5d4: 0x87a20040  lh          $v0, 0x40($sp)
    ctx->pc = 0x3be5d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
label_3be5d8:
    // 0x3be5d8: 0x87a30042  lh          $v1, 0x42($sp)
    ctx->pc = 0x3be5d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 66)));
label_3be5dc:
    // 0x3be5dc: 0x97a40044  lhu         $a0, 0x44($sp)
    ctx->pc = 0x3be5dcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 68)));
label_3be5e0:
    // 0x3be5e0: 0x97a50046  lhu         $a1, 0x46($sp)
    ctx->pc = 0x3be5e0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 70)));
label_3be5e4:
    // 0x3be5e4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3be5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_3be5e8:
    // 0x3be5e8: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x3be5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_3be5ec:
    // 0x3be5ec: 0xa7a4001c  sh          $a0, 0x1C($sp)
    ctx->pc = 0x3be5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 28), (uint16_t)GPR_U32(ctx, 4));
label_3be5f0:
    // 0x3be5f0: 0xa7a5001e  sh          $a1, 0x1E($sp)
    ctx->pc = 0x3be5f0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 30), (uint16_t)GPR_U32(ctx, 5));
label_3be5f4:
    // 0x3be5f4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3be5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3be5f8:
    // 0x3be5f8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3be5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_3be5fc:
    // 0x3be5fc: 0x0  nop
    ctx->pc = 0x3be5fcu;
    // NOP
label_3be600:
    // 0x3be600: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x3be600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3be604:
    // 0x3be604: 0x18800006  blez        $a0, . + 4 + (0x6 << 2)
label_3be608:
    if (ctx->pc == 0x3BE608u) {
        ctx->pc = 0x3BE608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE604u;
        // 0x3be608: 0x87a3001e  lh          $v1, 0x1E($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE60Cu;
        goto label_3be60c;
    }
    ctx->pc = 0x3BE604u;
    {
        const bool branch_taken_0x3be604 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x3BE608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE604u;
        // 0x3be608: 0x87a3001e  lh          $v1, 0x1E($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be604) {
            ctx->pc = 0x3BE620u;
            goto label_3be620;
        }
    }
    ctx->pc = 0x3BE60Cu;
label_3be60c:
    // 0x3be60c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3be60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3be610:
    // 0x3be610: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x3be610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_3be614:
    // 0x3be614: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3be614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3be618:
    // 0x3be618: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3be61c:
    if (ctx->pc == 0x3BE61Cu) {
        ctx->pc = 0x3BE61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE618u;
        // 0x3be61c: 0x97a2001e  lhu         $v0, 0x1E($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE620u;
        goto label_3be620;
    }
    ctx->pc = 0x3BE618u;
    {
        const bool branch_taken_0x3be618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE618u;
        // 0x3be61c: 0x97a2001e  lhu         $v0, 0x1E($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be618) {
            ctx->pc = 0x3BE638u;
            goto label_3be638;
        }
    }
    ctx->pc = 0x3BE620u;
label_3be620:
    // 0x3be620: 0x87a3001e  lh          $v1, 0x1E($sp)
    ctx->pc = 0x3be620u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 30)));
label_3be624:
    // 0x3be624: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3be624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3be628:
    // 0x3be628: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x3be628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_3be62c:
    // 0x3be62c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x3be62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_3be630:
    // 0x3be630: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x3be630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_3be634:
    // 0x3be634: 0x97a2001e  lhu         $v0, 0x1E($sp)
    ctx->pc = 0x3be634u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 30)));
label_3be638:
    // 0x3be638: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3be638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3be63c:
    // 0x3be63c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3be63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_3be640:
    // 0x3be640: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x3be640u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
label_3be644:
    // 0x3be644: 0x2c830020  sltiu       $v1, $a0, 0x20
    ctx->pc = 0x3be644u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_3be648:
    // 0x3be648: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_3be64c:
    if (ctx->pc == 0x3BE64Cu) {
        ctx->pc = 0x3BE64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE648u;
        // 0x3be64c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE650u;
        goto label_3be650;
    }
    ctx->pc = 0x3BE648u;
    {
        const bool branch_taken_0x3be648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE648u;
        // 0x3be64c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be648) {
            ctx->pc = 0x3BE678u;
            goto label_3be678;
        }
    }
    ctx->pc = 0x3BE650u;
label_3be650:
    // 0x3be650: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3be650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3be654:
    // 0x3be654: 0x2442c170  addiu       $v0, $v0, -0x3E90
    ctx->pc = 0x3be654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951280));
label_3be658:
    // 0x3be658: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3be658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3be65c:
    // 0x3be65c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3be65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3be660:
    // 0x3be660: 0x800008  jr          $a0
label_3be664:
    if (ctx->pc == 0x3BE664u) {
        ctx->pc = 0x3BE668u;
        goto label_3be668;
    }
    ctx->pc = 0x3BE660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3BE668u: goto label_3be668;
            case 0x3BE670u: goto label_3be670;
            case 0x3BE678u: goto label_3be678;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BE660u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3BE668u;
label_3be668:
    // 0x3be668: 0x10000004  b           . + 4 + (0x4 << 2)
label_3be66c:
    if (ctx->pc == 0x3BE66Cu) {
        ctx->pc = 0x3BE66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE668u;
        // 0x3be66c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE670u;
        goto label_3be670;
    }
    ctx->pc = 0x3BE668u;
    {
        const bool branch_taken_0x3be668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE668u;
        // 0x3be66c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be668) {
            ctx->pc = 0x3BE67Cu;
            goto label_3be67c;
        }
    }
    ctx->pc = 0x3BE670u;
label_3be670:
    // 0x3be670: 0x10000002  b           . + 4 + (0x2 << 2)
label_3be674:
    if (ctx->pc == 0x3BE674u) {
        ctx->pc = 0x3BE674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE670u;
        // 0x3be674: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE678u;
        goto label_3be678;
    }
    ctx->pc = 0x3BE670u;
    {
        const bool branch_taken_0x3be670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE670u;
        // 0x3be674: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be670) {
            ctx->pc = 0x3BE67Cu;
            goto label_3be67c;
        }
    }
    ctx->pc = 0x3BE678u;
label_3be678:
    // 0x3be678: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3be678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3be67c:
    // 0x3be67c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x3be67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3be680:
    // 0x3be680: 0xc107034  jal         func_41C0D0
label_3be684:
    if (ctx->pc == 0x3BE684u) {
        ctx->pc = 0x3BE684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE680u;
        // 0x3be684: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE688u;
        goto label_3be688;
    }
    ctx->pc = 0x3BE680u;
    SET_GPR_U32(ctx, 31, 0x3BE688u);
    ctx->pc = 0x3BE684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE680u;
    // 0x3be684: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x3BE680u, 0x3BE688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE688u;
label_3be688:
    // 0x3be688: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3be688u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3be68c:
    // 0x3be68c: 0x12c00111  beqz        $s6, . + 4 + (0x111 << 2)
label_3be690:
    if (ctx->pc == 0x3BE690u) {
        ctx->pc = 0x3BE690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE68Cu;
        // 0x3be690: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE694u;
        goto label_3be694;
    }
    ctx->pc = 0x3BE68Cu;
    {
        const bool branch_taken_0x3be68c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE68Cu;
        // 0x3be690: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be68c) {
            ctx->pc = 0x3BEAD4u;
            goto label_3bead4;
        }
    }
    ctx->pc = 0x3BE694u;
label_3be694:
    // 0x3be694: 0xc107078  jal         func_41C1E0
label_3be698:
    if (ctx->pc == 0x3BE698u) {
        ctx->pc = 0x3BE698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE694u;
        // 0x3be698: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE69Cu;
        goto label_3be69c;
    }
    ctx->pc = 0x3BE694u;
    SET_GPR_U32(ctx, 31, 0x3BE69Cu);
    ctx->pc = 0x3BE698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE694u;
    // 0x3be698: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x3BE694u, 0x3BE69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE69Cu;
label_3be69c:
    // 0x3be69c: 0x1040010a  beqz        $v0, . + 4 + (0x10A << 2)
label_3be6a0:
    if (ctx->pc == 0x3BE6A0u) {
        ctx->pc = 0x3BE6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE69Cu;
        // 0x3be6a0: 0x87a2001e  lh          $v0, 0x1E($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE6A4u;
        goto label_3be6a4;
    }
    ctx->pc = 0x3BE69Cu;
    {
        const bool branch_taken_0x3be69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE69Cu;
        // 0x3be6a0: 0x87a2001e  lh          $v0, 0x1E($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be69c) {
            ctx->pc = 0x3BEAC8u;
            goto label_3beac8;
        }
    }
    ctx->pc = 0x3BE6A4u;
label_3be6a4:
    // 0x3be6a4: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x3be6a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_3be6a8:
    // 0x3be6a8: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_3be6ac:
    if (ctx->pc == 0x3BE6ACu) {
        ctx->pc = 0x3BE6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE6A8u;
        // 0x3be6ac: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE6B0u;
        goto label_3be6b0;
    }
    ctx->pc = 0x3BE6A8u;
    {
        const bool branch_taken_0x3be6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE6A8u;
        // 0x3be6ac: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be6a8) {
            ctx->pc = 0x3BE7E8u;
            goto label_3be7e8;
        }
    }
    ctx->pc = 0x3BE6B0u;
label_3be6b0:
    // 0x3be6b0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3be6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3be6b4:
    // 0x3be6b4: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
label_3be6b8:
    if (ctx->pc == 0x3BE6B8u) {
        ctx->pc = 0x3BE6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE6B4u;
        // 0x3be6b8: 0x8ed20018  lw          $s2, 0x18($s6) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE6BCu;
        goto label_3be6bc;
    }
    ctx->pc = 0x3BE6B4u;
    {
        const bool branch_taken_0x3be6b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BE6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE6B4u;
        // 0x3be6b8: 0x8ed20018  lw          $s2, 0x18($s6) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be6b4) {
            ctx->pc = 0x3BE73Cu;
            goto label_3be73c;
        }
    }
    ctx->pc = 0x3BE6BCu;
label_3be6bc:
    // 0x3be6bc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x3be6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3be6c0:
    // 0x3be6c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3be6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3be6c4:
    // 0x3be6c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3be6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3be6c8:
    // 0x3be6c8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3be6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3be6cc:
    // 0x3be6cc: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x3be6ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3be6d0:
    // 0x3be6d0: 0xc10480a  jal         func_412028
label_3be6d4:
    if (ctx->pc == 0x3BE6D4u) {
        ctx->pc = 0x3BE6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE6D0u;
        // 0x3be6d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE6D8u;
        goto label_3be6d8;
    }
    ctx->pc = 0x3BE6D0u;
    SET_GPR_U32(ctx, 31, 0x3BE6D8u);
    ctx->pc = 0x3BE6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE6D0u;
    // 0x3be6d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3BE6D0u, 0x3BE6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE6D8u;
label_3be6d8:
    // 0x3be6d8: 0x145000fe  bne         $v0, $s0, . + 4 + (0xFE << 2)
label_3be6dc:
    if (ctx->pc == 0x3BE6DCu) {
        ctx->pc = 0x3BE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE6D8u;
        // 0x3be6dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE6E0u;
        goto label_3be6e0;
    }
    ctx->pc = 0x3BE6D8u;
    {
        const bool branch_taken_0x3be6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3BE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE6D8u;
        // 0x3be6dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be6d8) {
            ctx->pc = 0x3BEAD4u;
            goto label_3bead4;
        }
    }
    ctx->pc = 0x3BE6E0u;
label_3be6e0:
    // 0x3be6e0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3be6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3be6e4:
    // 0x3be6e4: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x3be6e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_3be6e8:
    // 0x3be6e8: 0x1840003f  blez        $v0, . + 4 + (0x3F << 2)
label_3be6ec:
    if (ctx->pc == 0x3BE6ECu) {
        ctx->pc = 0x3BE6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE6E8u;
        // 0x3be6ec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE6F0u;
        goto label_3be6f0;
    }
    ctx->pc = 0x3BE6E8u;
    {
        const bool branch_taken_0x3be6e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3BE6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE6E8u;
        // 0x3be6ec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be6e8) {
            ctx->pc = 0x3BE7E8u;
            goto label_3be7e8;
        }
    }
    ctx->pc = 0x3BE6F0u;
label_3be6f0:
    // 0x3be6f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3be6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3be6f4:
    // 0x3be6f4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3be6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3be6f8:
    // 0x3be6f8: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x3be6f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3be6fc:
    // 0x3be6fc: 0x0  nop
    ctx->pc = 0x3be6fcu;
    // NOP
label_3be700:
    // 0x3be700: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x3be700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_3be704:
    // 0x3be704: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3be704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3be708:
    // 0x3be708: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3be708u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_3be70c:
    // 0x3be70c: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x3be70cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_3be710:
    // 0x3be710: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x3be710u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_3be714:
    // 0x3be714: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3be714u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3be718:
    // 0x3be718: 0xa0860003  sb          $a2, 0x3($a0)
    ctx->pc = 0x3be718u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 6));
label_3be71c:
    // 0x3be71c: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x3be71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_3be720:
    // 0x3be720: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3be720u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_3be724:
    // 0x3be724: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3be724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3be728:
    // 0x3be728: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3be728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3be72c:
    // 0x3be72c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_3be730:
    if (ctx->pc == 0x3BE730u) {
        ctx->pc = 0x3BE730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE72Cu;
        // 0x3be730: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE734u;
        goto label_3be734;
    }
    ctx->pc = 0x3BE72Cu;
    {
        const bool branch_taken_0x3be72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BE730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE72Cu;
        // 0x3be730: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be72c) {
            ctx->pc = 0x3BE700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3be700;
        }
    }
    ctx->pc = 0x3BE734u;
label_3be734:
    // 0x3be734: 0x1000002d  b           . + 4 + (0x2D << 2)
label_3be738:
    if (ctx->pc == 0x3BE738u) {
        ctx->pc = 0x3BE738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE734u;
        // 0x3be738: 0x8fa5000c  lw          $a1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE73Cu;
        goto label_3be73c;
    }
    ctx->pc = 0x3BE734u;
    {
        const bool branch_taken_0x3be734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE734u;
        // 0x3be738: 0x8fa5000c  lw          $a1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be734) {
            ctx->pc = 0x3BE7ECu;
            goto label_3be7ec;
        }
    }
    ctx->pc = 0x3BE73Cu;
label_3be73c:
    // 0x3be73c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x3be73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_3be740:
    // 0x3be740: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
label_3be744:
    if (ctx->pc == 0x3BE744u) {
        ctx->pc = 0x3BE744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE740u;
        // 0x3be744: 0x2402019d  addiu       $v0, $zero, 0x19D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 413));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE748u;
        goto label_3be748;
    }
    ctx->pc = 0x3BE740u;
    {
        const bool branch_taken_0x3be740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BE744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE740u;
        // 0x3be744: 0x2402019d  addiu       $v0, $zero, 0x19D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 413));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be740) {
            ctx->pc = 0x3BE7C4u;
            goto label_3be7c4;
        }
    }
    ctx->pc = 0x3BE748u;
label_3be748:
    // 0x3be748: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3be748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3be74c:
    // 0x3be74c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3be74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3be750:
    // 0x3be750: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3be750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3be754:
    // 0x3be754: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x3be754u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3be758:
    // 0x3be758: 0xc10480a  jal         func_412028
label_3be75c:
    if (ctx->pc == 0x3BE75Cu) {
        ctx->pc = 0x3BE75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE758u;
        // 0x3be75c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE760u;
        goto label_3be760;
    }
    ctx->pc = 0x3BE758u;
    SET_GPR_U32(ctx, 31, 0x3BE760u);
    ctx->pc = 0x3BE75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE758u;
    // 0x3be75c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3BE758u, 0x3BE760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE760u;
label_3be760:
    // 0x3be760: 0x145000dc  bne         $v0, $s0, . + 4 + (0xDC << 2)
label_3be764:
    if (ctx->pc == 0x3BE764u) {
        ctx->pc = 0x3BE764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE760u;
        // 0x3be764: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE768u;
        goto label_3be768;
    }
    ctx->pc = 0x3BE760u;
    {
        const bool branch_taken_0x3be760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3BE764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE760u;
        // 0x3be764: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be760) {
            ctx->pc = 0x3BEAD4u;
            goto label_3bead4;
        }
    }
    ctx->pc = 0x3BE768u;
label_3be768:
    // 0x3be768: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3be768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3be76c:
    // 0x3be76c: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x3be76cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_3be770:
    // 0x3be770: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
label_3be774:
    if (ctx->pc == 0x3BE774u) {
        ctx->pc = 0x3BE774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE770u;
        // 0x3be774: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE778u;
        goto label_3be778;
    }
    ctx->pc = 0x3BE770u;
    {
        const bool branch_taken_0x3be770 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3BE774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE770u;
        // 0x3be774: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be770) {
            ctx->pc = 0x3BE7E8u;
            goto label_3be7e8;
        }
    }
    ctx->pc = 0x3BE778u;
label_3be778:
    // 0x3be778: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3be778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3be77c:
    // 0x3be77c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3be77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3be780:
    // 0x3be780: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x3be780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3be784:
    // 0x3be784: 0x0  nop
    ctx->pc = 0x3be784u;
    // NOP
label_3be788:
    // 0x3be788: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x3be788u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_3be78c:
    // 0x3be78c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3be78cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3be790:
    // 0x3be790: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3be790u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_3be794:
    // 0x3be794: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x3be794u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_3be798:
    // 0x3be798: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x3be798u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_3be79c:
    // 0x3be79c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3be79cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3be7a0:
    // 0x3be7a0: 0xa0860003  sb          $a2, 0x3($a0)
    ctx->pc = 0x3be7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 6));
label_3be7a4:
    // 0x3be7a4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3be7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3be7a8:
    // 0x3be7a8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3be7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_3be7ac:
    // 0x3be7ac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3be7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3be7b0:
    // 0x3be7b0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3be7b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3be7b4:
    // 0x3be7b4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_3be7b8:
    if (ctx->pc == 0x3BE7B8u) {
        ctx->pc = 0x3BE7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE7B4u;
        // 0x3be7b8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE7BCu;
        goto label_3be7bc;
    }
    ctx->pc = 0x3BE7B4u;
    {
        const bool branch_taken_0x3be7b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BE7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE7B4u;
        // 0x3be7b8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be7b4) {
            ctx->pc = 0x3BE788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3be788;
        }
    }
    ctx->pc = 0x3BE7BCu;
label_3be7bc:
    // 0x3be7bc: 0x1000000b  b           . + 4 + (0xB << 2)
label_3be7c0:
    if (ctx->pc == 0x3BE7C0u) {
        ctx->pc = 0x3BE7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE7BCu;
        // 0x3be7c0: 0x8fa5000c  lw          $a1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE7C4u;
        goto label_3be7c4;
    }
    ctx->pc = 0x3BE7BCu;
    {
        const bool branch_taken_0x3be7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE7BCu;
        // 0x3be7c0: 0x8fa5000c  lw          $a1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be7bc) {
            ctx->pc = 0x3BE7ECu;
            goto label_3be7ec;
        }
    }
    ctx->pc = 0x3BE7C4u;
label_3be7c4:
    // 0x3be7c4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3be7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3be7c8:
    // 0x3be7c8: 0xafa20450  sw          $v0, 0x450($sp)
    ctx->pc = 0x3be7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 2));
label_3be7cc:
    // 0x3be7cc: 0xc1035f6  jal         func_40D7D8
label_3be7d0:
    if (ctx->pc == 0x3BE7D0u) {
        ctx->pc = 0x3BE7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE7CCu;
        // 0x3be7d0: 0x34840009  ori         $a0, $a0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE7D4u;
        goto label_3be7d4;
    }
    ctx->pc = 0x3BE7CCu;
    SET_GPR_U32(ctx, 31, 0x3BE7D4u);
    ctx->pc = 0x3BE7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE7CCu;
    // 0x3be7d0: 0x34840009  ori         $a0, $a0, 0x9 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3BE7CCu, 0x3BE7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE7D4u;
label_3be7d4:
    // 0x3be7d4: 0xafa20454  sw          $v0, 0x454($sp)
    ctx->pc = 0x3be7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1108), GPR_U32(ctx, 2));
label_3be7d8:
    // 0x3be7d8: 0xc103628  jal         func_40D8A0
label_3be7dc:
    if (ctx->pc == 0x3BE7DCu) {
        ctx->pc = 0x3BE7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE7D8u;
        // 0x3be7dc: 0x27a40450  addiu       $a0, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE7E0u;
        goto label_3be7e0;
    }
    ctx->pc = 0x3BE7D8u;
    SET_GPR_U32(ctx, 31, 0x3BE7E0u);
    ctx->pc = 0x3BE7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE7D8u;
    // 0x3be7dc: 0x27a40450  addiu       $a0, $sp, 0x450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3BE7D8u, 0x3BE7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE7E0u;
label_3be7e0:
    // 0x3be7e0: 0x100000bc  b           . + 4 + (0xBC << 2)
label_3be7e4:
    if (ctx->pc == 0x3BE7E4u) {
        ctx->pc = 0x3BE7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE7E0u;
        // 0x3be7e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE7E8u;
        goto label_3be7e8;
    }
    ctx->pc = 0x3BE7E0u;
    {
        const bool branch_taken_0x3be7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE7E0u;
        // 0x3be7e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be7e0) {
            ctx->pc = 0x3BEAD4u;
            goto label_3bead4;
        }
    }
    ctx->pc = 0x3BE7E8u;
label_3be7e8:
    // 0x3be7e8: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x3be7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3be7ec:
    // 0x3be7ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3be7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3be7f0:
    // 0x3be7f0: 0xc1048ec  jal         func_4123B0
label_3be7f4:
    if (ctx->pc == 0x3BE7F4u) {
        ctx->pc = 0x3BE7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE7F0u;
        // 0x3be7f4: 0xb32823  subu        $a1, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE7F8u;
        goto label_3be7f8;
    }
    ctx->pc = 0x3BE7F0u;
    SET_GPR_U32(ctx, 31, 0x3BE7F8u);
    ctx->pc = 0x3BE7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE7F0u;
    // 0x3be7f4: 0xb32823  subu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4123B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4123B0u, 0x3BE7F0u, 0x3BE7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE7F8u;
label_3be7f8:
    // 0x3be7f8: 0x104000b3  beqz        $v0, . + 4 + (0xB3 << 2)
label_3be7fc:
    if (ctx->pc == 0x3BE7FCu) {
        ctx->pc = 0x3BE7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE7F8u;
        // 0x3be7fc: 0x87a3001e  lh          $v1, 0x1E($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE800u;
        goto label_3be800;
    }
    ctx->pc = 0x3BE7F8u;
    {
        const bool branch_taken_0x3be7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE7F8u;
        // 0x3be7fc: 0x87a3001e  lh          $v1, 0x1E($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be7f8) {
            ctx->pc = 0x3BEAC8u;
            goto label_3beac8;
        }
    }
    ctx->pc = 0x3BE800u;
label_3be800:
    // 0x3be800: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x3be800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3be804:
    // 0x3be804: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x3be804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3be808:
    // 0x3be808: 0x2413fff8  addiu       $s3, $zero, -0x8
    ctx->pc = 0x3be808u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_3be80c:
    // 0x3be80c: 0x24660007  addiu       $a2, $v1, 0x7
    ctx->pc = 0x3be80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_3be810:
    // 0x3be810: 0x2464000e  addiu       $a0, $v1, 0xE
    ctx->pc = 0x3be810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
label_3be814:
    // 0x3be814: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x3be814u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3be818:
    // 0x3be818: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x3be818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_3be81c:
    // 0x3be81c: 0xc2200b  movn        $a0, $a2, $v0
    ctx->pc = 0x3be81cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
label_3be820:
    // 0x3be820: 0x24a50007  addiu       $a1, $a1, 0x7
    ctx->pc = 0x3be820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_3be824:
    // 0x3be824: 0xb32824  and         $a1, $a1, $s3
    ctx->pc = 0x3be824u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 19));
label_3be828:
    // 0x3be828: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x3be828u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_3be82c:
    // 0x3be82c: 0xa40018  mult        $zero, $a1, $a0
    ctx->pc = 0x3be82cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3be830:
    // 0x3be830: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x3be830u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_3be834:
    // 0x3be834: 0x24660007  addiu       $a2, $v1, 0x7
    ctx->pc = 0x3be834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_3be838:
    // 0x3be838: 0x24f5e880  addiu       $s5, $a3, -0x1780
    ctx->pc = 0x3be838u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961280));
label_3be83c:
    // 0x3be83c: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x3be83cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_3be840:
    // 0x3be840: 0x2463000e  addiu       $v1, $v1, 0xE
    ctx->pc = 0x3be840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
label_3be844:
    // 0x3be844: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x3be844u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
label_3be848:
    // 0x3be848: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x3be848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_3be84c:
    // 0x3be84c: 0x388c3  sra         $s1, $v1, 3
    ctx->pc = 0x3be84cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 3));
label_3be850:
    // 0x3be850: 0x8ea20108  lw          $v0, 0x108($s5)
    ctx->pc = 0x3be850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 264)));
label_3be854:
    // 0x3be854: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x3be854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
label_3be858:
    // 0x3be858: 0x2012  mflo        $a0
    ctx->pc = 0x3be858u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_3be85c:
    // 0x3be85c: 0x658824  and         $s1, $v1, $a1
    ctx->pc = 0x3be85cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_3be860:
    // 0x3be860: 0x40f809  jalr        $v0
label_3be864:
    if (ctx->pc == 0x3BE864u) {
        ctx->pc = 0x3BE864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE860u;
        // 0x3be864: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE868u;
        goto label_3be868;
    }
    ctx->pc = 0x3BE860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BE868u);
        ctx->pc = 0x3BE864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE860u;
        // 0x3be864: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BE860u, 0x3BE868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BE868u;
label_3be868:
    // 0x3be868: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3be868u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3be86c:
    // 0x3be86c: 0x16400016  bnez        $s2, . + 4 + (0x16 << 2)
label_3be870:
    if (ctx->pc == 0x3BE870u) {
        ctx->pc = 0x3BE870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE86Cu;
        // 0x3be870: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE874u;
        goto label_3be874;
    }
    ctx->pc = 0x3BE86Cu;
    {
        const bool branch_taken_0x3be86c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BE870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE86Cu;
        // 0x3be870: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be86c) {
            ctx->pc = 0x3BE8C8u;
            goto label_3be8c8;
        }
    }
    ctx->pc = 0x3BE874u;
label_3be874:
    // 0x3be874: 0x87a5001e  lh          $a1, 0x1E($sp)
    ctx->pc = 0x3be874u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 30)));
label_3be878:
    // 0x3be878: 0x2407019d  addiu       $a3, $zero, 0x19D
    ctx->pc = 0x3be878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 413));
label_3be87c:
    // 0x3be87c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3be87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3be880:
    // 0x3be880: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3be880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3be884:
    // 0x3be884: 0x24a60007  addiu       $a2, $a1, 0x7
    ctx->pc = 0x3be884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_3be888:
    // 0x3be888: 0xafa70460  sw          $a3, 0x460($sp)
    ctx->pc = 0x3be888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 7));
label_3be88c:
    // 0x3be88c: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x3be88cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_3be890:
    // 0x3be890: 0x24a5000e  addiu       $a1, $a1, 0xE
    ctx->pc = 0x3be890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14));
label_3be894:
    // 0x3be894: 0xc2280b  movn        $a1, $a2, $v0
    ctx->pc = 0x3be894u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
label_3be898:
    // 0x3be898: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x3be898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_3be89c:
    // 0x3be89c: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x3be89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
label_3be8a0:
    // 0x3be8a0: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x3be8a0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
label_3be8a4:
    // 0x3be8a4: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x3be8a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3be8a8:
    // 0x3be8a8: 0x2812  mflo        $a1
    ctx->pc = 0x3be8a8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_3be8ac:
    // 0x3be8ac: 0xc1035f6  jal         func_40D7D8
label_3be8b0:
    if (ctx->pc == 0x3BE8B0u) {
        ctx->pc = 0x3BE8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE8ACu;
        // 0x3be8b0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE8B4u;
        goto label_3be8b4;
    }
    ctx->pc = 0x3BE8ACu;
    SET_GPR_U32(ctx, 31, 0x3BE8B4u);
    ctx->pc = 0x3BE8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE8ACu;
    // 0x3be8b0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3BE8ACu, 0x3BE8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE8B4u;
label_3be8b4:
    // 0x3be8b4: 0xafa20464  sw          $v0, 0x464($sp)
    ctx->pc = 0x3be8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1124), GPR_U32(ctx, 2));
label_3be8b8:
    // 0x3be8b8: 0xc103628  jal         func_40D8A0
label_3be8bc:
    if (ctx->pc == 0x3BE8BCu) {
        ctx->pc = 0x3BE8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE8B8u;
        // 0x3be8bc: 0x27a40460  addiu       $a0, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE8C0u;
        goto label_3be8c0;
    }
    ctx->pc = 0x3BE8B8u;
    SET_GPR_U32(ctx, 31, 0x3BE8C0u);
    ctx->pc = 0x3BE8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE8B8u;
    // 0x3be8bc: 0x27a40460  addiu       $a0, $sp, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3BE8B8u, 0x3BE8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE8C0u;
label_3be8c0:
    // 0x3be8c0: 0x10000081  b           . + 4 + (0x81 << 2)
label_3be8c4:
    if (ctx->pc == 0x3BE8C4u) {
        ctx->pc = 0x3BE8C8u;
        goto label_3be8c8;
    }
    ctx->pc = 0x3BE8C0u;
    {
        const bool branch_taken_0x3be8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3be8c0) {
            ctx->pc = 0x3BEAC8u;
            goto label_3beac8;
        }
    }
    ctx->pc = 0x3BE8C8u;
label_3be8c8:
    // 0x3be8c8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_3be8cc:
    if (ctx->pc == 0x3BE8CCu) {
        ctx->pc = 0x3BE8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE8C8u;
        // 0x3be8cc: 0x87a3001e  lh          $v1, 0x1E($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE8D0u;
        goto label_3be8d0;
    }
    ctx->pc = 0x3BE8C8u;
    {
        const bool branch_taken_0x3be8c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE8C8u;
        // 0x3be8cc: 0x87a3001e  lh          $v1, 0x1E($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be8c8) {
            ctx->pc = 0x3BE8E4u;
            goto label_3be8e4;
        }
    }
    ctx->pc = 0x3BE8D0u;
label_3be8d0:
    // 0x3be8d0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x3be8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3be8d4:
    // 0x3be8d4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_3be8d8:
    if (ctx->pc == 0x3BE8D8u) {
        ctx->pc = 0x3BE8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE8D4u;
        // 0x3be8d8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE8DCu;
        goto label_3be8dc;
    }
    ctx->pc = 0x3BE8D4u;
    {
        const bool branch_taken_0x3be8d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BE8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE8D4u;
        // 0x3be8d8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be8d4) {
            ctx->pc = 0x3BE8E4u;
            goto label_3be8e4;
        }
    }
    ctx->pc = 0x3BE8DCu;
label_3be8dc:
    // 0x3be8dc: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
label_3be8e0:
    if (ctx->pc == 0x3BE8E0u) {
        ctx->pc = 0x3BE8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE8DCu;
        // 0x3be8e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE8E4u;
        goto label_3be8e4;
    }
    ctx->pc = 0x3BE8DCu;
    {
        const bool branch_taken_0x3be8dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BE8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE8DCu;
        // 0x3be8e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be8dc) {
            ctx->pc = 0x3BE93Cu;
            goto label_3be93c;
        }
    }
    ctx->pc = 0x3BE8E4u;
label_3be8e4:
    // 0x3be8e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3be8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3be8e8:
    // 0x3be8e8: 0x18400067  blez        $v0, . + 4 + (0x67 << 2)
label_3be8ec:
    if (ctx->pc == 0x3BE8ECu) {
        ctx->pc = 0x3BE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE8E8u;
        // 0x3be8ec: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE8F0u;
        goto label_3be8f0;
    }
    ctx->pc = 0x3BE8E8u;
    {
        const bool branch_taken_0x3be8e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3BE8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE8E8u;
        // 0x3be8ec: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be8e8) {
            ctx->pc = 0x3BEA88u;
            goto label_3bea88;
        }
    }
    ctx->pc = 0x3BE8F0u;
label_3be8f0:
    // 0x3be8f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3be8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3be8f4:
    // 0x3be8f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3be8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3be8f8:
    // 0x3be8f8: 0xc10480a  jal         func_412028
label_3be8fc:
    if (ctx->pc == 0x3BE8FCu) {
        ctx->pc = 0x3BE8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE8F8u;
        // 0x3be8fc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE900u;
        goto label_3be900;
    }
    ctx->pc = 0x3BE8F8u;
    SET_GPR_U32(ctx, 31, 0x3BE900u);
    ctx->pc = 0x3BE8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE8F8u;
    // 0x3be8fc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3BE8F8u, 0x3BE900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE900u;
label_3be900:
    // 0x3be900: 0x1451006b  bne         $v0, $s1, . + 4 + (0x6B << 2)
label_3be904:
    if (ctx->pc == 0x3BE904u) {
        ctx->pc = 0x3BE904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE900u;
        // 0x3be904: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE908u;
        goto label_3be908;
    }
    ctx->pc = 0x3BE900u;
    {
        const bool branch_taken_0x3be900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x3BE904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE900u;
        // 0x3be904: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be900) {
            ctx->pc = 0x3BEAB0u;
            goto label_3beab0;
        }
    }
    ctx->pc = 0x3BE908u;
label_3be908:
    // 0x3be908: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3be908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3be90c:
    // 0x3be90c: 0x87a7001e  lh          $a3, 0x1E($sp)
    ctx->pc = 0x3be90cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 30)));
label_3be910:
    // 0x3be910: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3be910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3be914:
    // 0x3be914: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x3be914u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_3be918:
    // 0x3be918: 0xc0ef7e4  jal         func_3BDF90
label_3be91c:
    if (ctx->pc == 0x3BE91Cu) {
        ctx->pc = 0x3BE91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE918u;
        // 0x3be91c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE920u;
        goto label_3be920;
    }
    ctx->pc = 0x3BE918u;
    SET_GPR_U32(ctx, 31, 0x3BE920u);
    ctx->pc = 0x3BE91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE918u;
    // 0x3be91c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BDF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BDF90u, 0x3BE918u, 0x3BE920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE920u;
label_3be920:
    // 0x3be920: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3be920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3be924:
    // 0x3be924: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3be924u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3be928:
    // 0x3be928: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3be928u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3be92c:
    // 0x3be92c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_3be930:
    if (ctx->pc == 0x3BE930u) {
        ctx->pc = 0x3BE930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE92Cu;
        // 0x3be930: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE934u;
        goto label_3be934;
    }
    ctx->pc = 0x3BE92Cu;
    {
        const bool branch_taken_0x3be92c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BE930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE92Cu;
        // 0x3be930: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be92c) {
            ctx->pc = 0x3BE8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3be8f0;
        }
    }
    ctx->pc = 0x3BE934u;
label_3be934:
    // 0x3be934: 0x10000055  b           . + 4 + (0x55 << 2)
label_3be938:
    if (ctx->pc == 0x3BE938u) {
        ctx->pc = 0x3BE938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE934u;
        // 0x3be938: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE93Cu;
        goto label_3be93c;
    }
    ctx->pc = 0x3BE934u;
    {
        const bool branch_taken_0x3be934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE934u;
        // 0x3be938: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be934) {
            ctx->pc = 0x3BEA8Cu;
            goto label_3bea8c;
        }
    }
    ctx->pc = 0x3BE93Cu;
label_3be93c:
    // 0x3be93c: 0x14820046  bne         $a0, $v0, . + 4 + (0x46 << 2)
label_3be940:
    if (ctx->pc == 0x3BE940u) {
        ctx->pc = 0x3BE940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE93Cu;
        // 0x3be940: 0x2402019d  addiu       $v0, $zero, 0x19D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 413));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE944u;
        goto label_3be944;
    }
    ctx->pc = 0x3BE93Cu;
    {
        const bool branch_taken_0x3be93c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BE940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE93Cu;
        // 0x3be940: 0x2402019d  addiu       $v0, $zero, 0x19D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 413));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be93c) {
            ctx->pc = 0x3BEA58u;
            goto label_3bea58;
        }
    }
    ctx->pc = 0x3BE944u;
label_3be944:
    // 0x3be944: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3be944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3be948:
    // 0x3be948: 0x1840004f  blez        $v0, . + 4 + (0x4F << 2)
label_3be94c:
    if (ctx->pc == 0x3BE94Cu) {
        ctx->pc = 0x3BE94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE948u;
        // 0x3be94c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE950u;
        goto label_3be950;
    }
    ctx->pc = 0x3BE948u;
    {
        const bool branch_taken_0x3be948 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3BE94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE948u;
        // 0x3be94c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be948) {
            ctx->pc = 0x3BEA88u;
            goto label_3bea88;
        }
    }
    ctx->pc = 0x3BE950u;
label_3be950:
    // 0x3be950: 0x27b70470  addiu       $s7, $sp, 0x470
    ctx->pc = 0x3be950u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3be954:
    // 0x3be954: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x3be954u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3be958:
    // 0x3be958: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3be958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3be95c:
    // 0x3be95c: 0x0  nop
    ctx->pc = 0x3be95cu;
    // NOP
label_3be960:
    // 0x3be960: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3be960u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3be964:
    // 0x3be964: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x3be964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3be968:
    // 0x3be968: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3be968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3be96c:
    // 0x3be96c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3be96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3be970:
    // 0x3be970: 0xc10480a  jal         func_412028
label_3be974:
    if (ctx->pc == 0x3BE974u) {
        ctx->pc = 0x3BE974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE970u;
        // 0x3be974: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE978u;
        goto label_3be978;
    }
    ctx->pc = 0x3BE970u;
    SET_GPR_U32(ctx, 31, 0x3BE978u);
    ctx->pc = 0x3BE974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE970u;
    // 0x3be974: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3BE970u, 0x3BE978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE978u;
label_3be978:
    // 0x3be978: 0x1450004d  bne         $v0, $s0, . + 4 + (0x4D << 2)
label_3be97c:
    if (ctx->pc == 0x3BE97Cu) {
        ctx->pc = 0x3BE97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE978u;
        // 0x3be97c: 0x93a20470  lbu         $v0, 0x470($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE980u;
        goto label_3be980;
    }
    ctx->pc = 0x3BE978u;
    {
        const bool branch_taken_0x3be978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3BE97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE978u;
        // 0x3be97c: 0x93a20470  lbu         $v0, 0x470($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be978) {
            ctx->pc = 0x3BEAB0u;
            goto label_3beab0;
        }
    }
    ctx->pc = 0x3BE980u;
label_3be980:
    // 0x3be980: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3be984:
    if (ctx->pc == 0x3BE984u) {
        ctx->pc = 0x3BE984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE980u;
        // 0x3be984: 0x93a50471  lbu         $a1, 0x471($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1137)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE988u;
        goto label_3be988;
    }
    ctx->pc = 0x3BE980u;
    {
        const bool branch_taken_0x3be980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE980u;
        // 0x3be984: 0x93a50471  lbu         $a1, 0x471($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1137)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be980) {
            ctx->pc = 0x3BE9A0u;
            goto label_3be9a0;
        }
    }
    ctx->pc = 0x3BE988u;
label_3be988:
    // 0x3be988: 0x2512021  addu        $a0, $s2, $s1
    ctx->pc = 0x3be988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_3be98c:
    // 0x3be98c: 0xc0bb7e6  jal         func_2EDF98
label_3be990:
    if (ctx->pc == 0x3BE990u) {
        ctx->pc = 0x3BE990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE98Cu;
        // 0x3be990: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE994u;
        goto label_3be994;
    }
    ctx->pc = 0x3BE98Cu;
    SET_GPR_U32(ctx, 31, 0x3BE994u);
    ctx->pc = 0x3BE990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE98Cu;
    // 0x3be990: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3BE98Cu, 0x3BE994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE994u;
label_3be994:
    // 0x3be994: 0x93a30470  lbu         $v1, 0x470($sp)
    ctx->pc = 0x3be994u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1136)));
label_3be998:
    // 0x3be998: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3be99c:
    if (ctx->pc == 0x3BE99Cu) {
        ctx->pc = 0x3BE99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE998u;
        // 0x3be99c: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE9A0u;
        goto label_3be9a0;
    }
    ctx->pc = 0x3BE998u;
    {
        const bool branch_taken_0x3be998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE998u;
        // 0x3be99c: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be998) {
            ctx->pc = 0x3BEA14u;
            goto label_3bea14;
        }
    }
    ctx->pc = 0x3BE9A0u;
label_3be9a0:
    // 0x3be9a0: 0x93a30471  lbu         $v1, 0x471($sp)
    ctx->pc = 0x3be9a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1137)));
label_3be9a4:
    // 0x3be9a4: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x3be9a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3be9a8:
    // 0x3be9a8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_3be9ac:
    if (ctx->pc == 0x3BE9ACu) {
        ctx->pc = 0x3BE9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE9A8u;
        // 0x3be9ac: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE9B0u;
        goto label_3be9b0;
    }
    ctx->pc = 0x3BE9A8u;
    {
        const bool branch_taken_0x3be9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BE9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE9A8u;
        // 0x3be9ac: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be9a8) {
            ctx->pc = 0x3BE9FCu;
            goto label_3be9fc;
        }
    }
    ctx->pc = 0x3BE9B0u;
label_3be9b0:
    // 0x3be9b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3be9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3be9b4:
    // 0x3be9b4: 0x2512821  addu        $a1, $s2, $s1
    ctx->pc = 0x3be9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_3be9b8:
    // 0x3be9b8: 0xc10480a  jal         func_412028
label_3be9bc:
    if (ctx->pc == 0x3BE9BCu) {
        ctx->pc = 0x3BE9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE9B8u;
        // 0x3be9bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE9C0u;
        goto label_3be9c0;
    }
    ctx->pc = 0x3BE9B8u;
    SET_GPR_U32(ctx, 31, 0x3BE9C0u);
    ctx->pc = 0x3BE9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE9B8u;
    // 0x3be9bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3BE9B8u, 0x3BE9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE9C0u;
label_3be9c0:
    // 0x3be9c0: 0x1450003b  bne         $v0, $s0, . + 4 + (0x3B << 2)
label_3be9c4:
    if (ctx->pc == 0x3BE9C4u) {
        ctx->pc = 0x3BE9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE9C0u;
        // 0x3be9c4: 0x93a20471  lbu         $v0, 0x471($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1137)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE9C8u;
        goto label_3be9c8;
    }
    ctx->pc = 0x3BE9C0u;
    {
        const bool branch_taken_0x3be9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3BE9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE9C0u;
        // 0x3be9c4: 0x93a20471  lbu         $v0, 0x471($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1137)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be9c0) {
            ctx->pc = 0x3BEAB0u;
            goto label_3beab0;
        }
    }
    ctx->pc = 0x3BE9C8u;
label_3be9c8:
    // 0x3be9c8: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3be9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3be9cc:
    // 0x3be9cc: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_3be9d0:
    if (ctx->pc == 0x3BE9D0u) {
        ctx->pc = 0x3BE9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE9CCu;
        // 0x3be9d0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE9D4u;
        goto label_3be9d4;
    }
    ctx->pc = 0x3BE9CCu;
    {
        const bool branch_taken_0x3be9cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE9CCu;
        // 0x3be9d0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be9cc) {
            ctx->pc = 0x3BEA14u;
            goto label_3bea14;
        }
    }
    ctx->pc = 0x3BE9D4u;
label_3be9d4:
    // 0x3be9d4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3be9d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3be9d8:
    // 0x3be9d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3be9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3be9dc:
    // 0x3be9dc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3be9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3be9e0:
    // 0x3be9e0: 0xc10480a  jal         func_412028
label_3be9e4:
    if (ctx->pc == 0x3BE9E4u) {
        ctx->pc = 0x3BE9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE9E0u;
        // 0x3be9e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE9E8u;
        goto label_3be9e8;
    }
    ctx->pc = 0x3BE9E0u;
    SET_GPR_U32(ctx, 31, 0x3BE9E8u);
    ctx->pc = 0x3BE9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE9E0u;
    // 0x3be9e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3BE9E0u, 0x3BE9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE9E8u;
label_3be9e8:
    // 0x3be9e8: 0x1050000a  beq         $v0, $s0, . + 4 + (0xA << 2)
label_3be9ec:
    if (ctx->pc == 0x3BE9ECu) {
        ctx->pc = 0x3BE9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE9E8u;
        // 0x3be9ec: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE9F0u;
        goto label_3be9f0;
    }
    ctx->pc = 0x3BE9E8u;
    {
        const bool branch_taken_0x3be9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x3BE9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE9E8u;
        // 0x3be9ec: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be9e8) {
            ctx->pc = 0x3BEA14u;
            goto label_3bea14;
        }
    }
    ctx->pc = 0x3BE9F0u;
label_3be9f0:
    // 0x3be9f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3be9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3be9f4:
    // 0x3be9f4: 0x10000031  b           . + 4 + (0x31 << 2)
label_3be9f8:
    if (ctx->pc == 0x3BE9F8u) {
        ctx->pc = 0x3BE9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE9F4u;
        // 0x3be9f8: 0x2463e880  addiu       $v1, $v1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BE9FCu;
        goto label_3be9fc;
    }
    ctx->pc = 0x3BE9F4u;
    {
        const bool branch_taken_0x3be9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE9F4u;
        // 0x3be9f8: 0x2463e880  addiu       $v1, $v1, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be9f4) {
            ctx->pc = 0x3BEABCu;
            goto label_3beabc;
        }
    }
    ctx->pc = 0x3BE9FCu;
label_3be9fc:
    // 0x3be9fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_3bea00:
    if (ctx->pc == 0x3BEA00u) {
        ctx->pc = 0x3BEA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE9FCu;
        // 0x3bea00: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BEA04u;
        goto label_3bea04;
    }
    ctx->pc = 0x3BE9FCu;
    {
        const bool branch_taken_0x3be9fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BEA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE9FCu;
        // 0x3bea00: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be9fc) {
            ctx->pc = 0x3BEA14u;
            goto label_3bea14;
        }
    }
    ctx->pc = 0x3BEA04u;
label_3bea04:
    // 0x3bea04: 0x147e002a  bne         $v1, $fp, . + 4 + (0x2A << 2)
label_3bea08:
    if (ctx->pc == 0x3BEA08u) {
        ctx->pc = 0x3BEA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEA04u;
        // 0x3bea08: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BEA0Cu;
        goto label_3bea0c;
    }
    ctx->pc = 0x3BEA04u;
    {
        const bool branch_taken_0x3bea04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 30));
        ctx->pc = 0x3BEA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEA04u;
        // 0x3bea08: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bea04) {
            ctx->pc = 0x3BEAB0u;
            goto label_3beab0;
        }
    }
    ctx->pc = 0x3BEA0Cu;
label_3bea0c:
    // 0x3bea0c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3bea0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bea10:
    // 0x3bea10: 0x2453ffff  addiu       $s3, $v0, -0x1
    ctx->pc = 0x3bea10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3bea14:
    // 0x3bea14: 0x12a0ffd4  beqz        $s5, . + 4 + (-0x2C << 2)
label_3bea18:
    if (ctx->pc == 0x3BEA18u) {
        ctx->pc = 0x3BEA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEA14u;
        // 0x3bea18: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BEA1Cu;
        goto label_3bea1c;
    }
    ctx->pc = 0x3BEA14u;
    {
        const bool branch_taken_0x3bea14 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BEA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEA14u;
        // 0x3bea18: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bea14) {
            ctx->pc = 0x3BE968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3be968;
        }
    }
    ctx->pc = 0x3BEA1Cu;
label_3bea1c:
    // 0x3bea1c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x3bea1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3bea20:
    // 0x3bea20: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x3bea20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3bea24:
    // 0x3bea24: 0x87a7001e  lh          $a3, 0x1E($sp)
    ctx->pc = 0x3bea24u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 30)));
label_3bea28:
    // 0x3bea28: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3bea28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bea2c:
    // 0x3bea2c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3bea2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3bea30:
    // 0x3bea30: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x3bea30u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3bea34:
    // 0x3bea34: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3bea34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3bea38:
    // 0x3bea38: 0xc0ef7e4  jal         func_3BDF90
label_3bea3c:
    if (ctx->pc == 0x3BEA3Cu) {
        ctx->pc = 0x3BEA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEA38u;
        // 0x3bea3c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BEA40u;
        goto label_3bea40;
    }
    ctx->pc = 0x3BEA38u;
    SET_GPR_U32(ctx, 31, 0x3BEA40u);
    ctx->pc = 0x3BEA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEA38u;
    // 0x3bea3c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BDF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BDF90u, 0x3BEA38u, 0x3BEA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEA40u;
label_3bea40:
    // 0x3bea40: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3bea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3bea44:
    // 0x3bea44: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x3bea44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3bea48:
    // 0x3bea48: 0x1460ffc5  bnez        $v1, . + 4 + (-0x3B << 2)
label_3bea4c:
    if (ctx->pc == 0x3BEA4Cu) {
        ctx->pc = 0x3BEA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEA48u;
        // 0x3bea4c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BEA50u;
        goto label_3bea50;
    }
    ctx->pc = 0x3BEA48u;
    {
        const bool branch_taken_0x3bea48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BEA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEA48u;
        // 0x3bea4c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bea48) {
            ctx->pc = 0x3BE960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3be960;
        }
    }
    ctx->pc = 0x3BEA50u;
label_3bea50:
    // 0x3bea50: 0x1000000e  b           . + 4 + (0xE << 2)
label_3bea54:
    if (ctx->pc == 0x3BEA54u) {
        ctx->pc = 0x3BEA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEA50u;
        // 0x3bea54: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BEA58u;
        goto label_3bea58;
    }
    ctx->pc = 0x3BEA50u;
    {
        const bool branch_taken_0x3bea50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BEA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEA50u;
        // 0x3bea54: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bea50) {
            ctx->pc = 0x3BEA8Cu;
            goto label_3bea8c;
        }
    }
    ctx->pc = 0x3BEA58u;
label_3bea58:
    // 0x3bea58: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3bea58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3bea5c:
    // 0x3bea5c: 0xafa20480  sw          $v0, 0x480($sp)
    ctx->pc = 0x3bea5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1152), GPR_U32(ctx, 2));
label_3bea60:
    // 0x3bea60: 0xc1035f6  jal         func_40D7D8
label_3bea64:
    if (ctx->pc == 0x3BEA64u) {
        ctx->pc = 0x3BEA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEA60u;
        // 0x3bea64: 0x34840009  ori         $a0, $a0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BEA68u;
        goto label_3bea68;
    }
    ctx->pc = 0x3BEA60u;
    SET_GPR_U32(ctx, 31, 0x3BEA68u);
    ctx->pc = 0x3BEA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEA60u;
    // 0x3bea64: 0x34840009  ori         $a0, $a0, 0x9 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3BEA60u, 0x3BEA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEA68u;
label_3bea68:
    // 0x3bea68: 0xafa20484  sw          $v0, 0x484($sp)
    ctx->pc = 0x3bea68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1156), GPR_U32(ctx, 2));
label_3bea6c:
    // 0x3bea6c: 0xc103628  jal         func_40D8A0
label_3bea70:
    if (ctx->pc == 0x3BEA70u) {
        ctx->pc = 0x3BEA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEA6Cu;
        // 0x3bea70: 0x27a40480  addiu       $a0, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BEA74u;
        goto label_3bea74;
    }
    ctx->pc = 0x3BEA6Cu;
    SET_GPR_U32(ctx, 31, 0x3BEA74u);
    ctx->pc = 0x3BEA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEA6Cu;
    // 0x3bea70: 0x27a40480  addiu       $a0, $sp, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3BEA6Cu, 0x3BEA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEA74u;
label_3bea74:
    // 0x3bea74: 0x8ea3010c  lw          $v1, 0x10C($s5)
    ctx->pc = 0x3bea74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 268)));
label_3bea78:
    // 0x3bea78: 0x60f809  jalr        $v1
label_3bea7c:
    if (ctx->pc == 0x3BEA7Cu) {
        ctx->pc = 0x3BEA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEA78u;
        // 0x3bea7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BEA80u;
        goto label_3bea80;
    }
    ctx->pc = 0x3BEA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3BEA80u);
        ctx->pc = 0x3BEA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEA78u;
        // 0x3bea7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BEA78u, 0x3BEA80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BEA80u;
label_3bea80:
    // 0x3bea80: 0x10000011  b           . + 4 + (0x11 << 2)
label_3bea84:
    if (ctx->pc == 0x3BEA84u) {
        ctx->pc = 0x3BEA88u;
        goto label_3bea88;
    }
    ctx->pc = 0x3BEA80u;
    {
        const bool branch_taken_0x3bea80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bea80) {
            ctx->pc = 0x3BEAC8u;
            goto label_3beac8;
        }
    }
    ctx->pc = 0x3BEA88u;
label_3bea88:
    // 0x3bea88: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3bea88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3bea8c:
    // 0x3bea8c: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x3bea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3bea90:
    // 0x3bea90: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3bea90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3bea94:
    // 0x3bea94: 0x40f809  jalr        $v0
label_3bea98:
    if (ctx->pc == 0x3BEA98u) {
        ctx->pc = 0x3BEA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEA94u;
        // 0x3bea98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BEA9Cu;
        goto label_3bea9c;
    }
    ctx->pc = 0x3BEA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BEA9Cu);
        ctx->pc = 0x3BEA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEA94u;
        // 0x3bea98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BEA94u, 0x3BEA9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BEA9Cu;
label_3bea9c:
    // 0x3bea9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3bea9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3beaa0:
    // 0x3beaa0: 0xc10496a  jal         func_4125A8
label_3beaa4:
    if (ctx->pc == 0x3BEAA4u) {
        ctx->pc = 0x3BEAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEAA0u;
        // 0x3beaa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BEAA8u;
        goto label_3beaa8;
    }
    ctx->pc = 0x3BEAA0u;
    SET_GPR_U32(ctx, 31, 0x3BEAA8u);
    ctx->pc = 0x3BEAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEAA0u;
    // 0x3beaa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x3BEAA0u, 0x3BEAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEAA8u;
label_3beaa8:
    // 0x3beaa8: 0x1000000d  b           . + 4 + (0xD << 2)
label_3beaac:
    if (ctx->pc == 0x3BEAACu) {
        ctx->pc = 0x3BEAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEAA8u;
        // 0x3beaac: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BEAB0u;
        goto label_3beab0;
    }
    ctx->pc = 0x3BEAA8u;
    {
        const bool branch_taken_0x3beaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BEAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEAA8u;
        // 0x3beaac: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3beaa8) {
            ctx->pc = 0x3BEAE0u;
            goto label_3beae0;
        }
    }
    ctx->pc = 0x3BEAB0u;
label_3beab0:
    // 0x3beab0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3beab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3beab4:
    // 0x3beab4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3beab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3beab8:
    // 0x3beab8: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x3beab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3beabc:
    // 0x3beabc: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3beabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3beac0:
    // 0x3beac0: 0x40f809  jalr        $v0
label_3beac4:
    if (ctx->pc == 0x3BEAC4u) {
        ctx->pc = 0x3BEAC8u;
        goto label_3beac8;
    }
    ctx->pc = 0x3BEAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BEAC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BEAC0u, 0x3BEAC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BEAC8u;
label_3beac8:
    // 0x3beac8: 0xc10705c  jal         func_41C170
label_3beacc:
    if (ctx->pc == 0x3BEACCu) {
        ctx->pc = 0x3BEACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEAC8u;
        // 0x3beacc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BEAD0u;
        goto label_3bead0;
    }
    ctx->pc = 0x3BEAC8u;
    SET_GPR_U32(ctx, 31, 0x3BEAD0u);
    ctx->pc = 0x3BEACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEAC8u;
    // 0x3beacc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3BEAC8u, 0x3BEAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEAD0u;
label_3bead0:
    // 0x3bead0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3bead0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3bead4:
    // 0x3bead4: 0xc10496a  jal         func_4125A8
label_3bead8:
    if (ctx->pc == 0x3BEAD8u) {
        ctx->pc = 0x3BEAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEAD4u;
        // 0x3bead8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BEADCu;
        goto label_3beadc;
    }
    ctx->pc = 0x3BEAD4u;
    SET_GPR_U32(ctx, 31, 0x3BEADCu);
    ctx->pc = 0x3BEAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEAD4u;
    // 0x3bead8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x3BEAD4u, 0x3BEADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEADCu;
label_3beadc:
    // 0x3beadc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3beadcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3beae0:
    // 0x3beae0: 0x7bb00530  lq          $s0, 0x530($sp)
    ctx->pc = 0x3beae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
label_3beae4:
    // 0x3beae4: 0x7bb10520  lq          $s1, 0x520($sp)
    ctx->pc = 0x3beae4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
label_3beae8:
    // 0x3beae8: 0x7bb20510  lq          $s2, 0x510($sp)
    ctx->pc = 0x3beae8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1296)));
label_3beaec:
    // 0x3beaec: 0x7bb30500  lq          $s3, 0x500($sp)
    ctx->pc = 0x3beaecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_3beaf0:
    // 0x3beaf0: 0x7bb404f0  lq          $s4, 0x4F0($sp)
    ctx->pc = 0x3beaf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_3beaf4:
    // 0x3beaf4: 0x7bb504e0  lq          $s5, 0x4E0($sp)
    ctx->pc = 0x3beaf4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_3beaf8:
    // 0x3beaf8: 0x7bb604d0  lq          $s6, 0x4D0($sp)
    ctx->pc = 0x3beaf8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3beafc:
    // 0x3beafc: 0x7bb704c0  lq          $s7, 0x4C0($sp)
    ctx->pc = 0x3beafcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3beb00:
    // 0x3beb00: 0x7bbe04b0  lq          $fp, 0x4B0($sp)
    ctx->pc = 0x3beb00u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3beb04:
    // 0x3beb04: 0xdfbf04a0  ld          $ra, 0x4A0($sp)
    ctx->pc = 0x3beb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
label_3beb08:
    // 0x3beb08: 0x3e00008  jr          $ra
label_3beb0c:
    if (ctx->pc == 0x3BEB0Cu) {
        ctx->pc = 0x3BEB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEB08u;
        // 0x3beb0c: 0x27bd0540  addiu       $sp, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BEB10u;
        goto label_3beb10;
    }
    ctx->pc = 0x3BEB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BEB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEB08u;
        // 0x3beb0c: 0x27bd0540  addiu       $sp, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BEB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BEB10u;
label_3beb10:
    // 0x3beb10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3beb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3beb14:
    // 0x3beb14: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3beb14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3beb18:
    // 0x3beb18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3beb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3beb1c:
    // 0x3beb1c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3beb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3beb20:
    // 0x3beb20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3beb20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3beb24:
    // 0x3beb24: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3beb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3beb28:
    // 0x3beb28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3beb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3beb2c:
    // 0x3beb2c: 0xc10493e  jal         func_4124F8
label_3beb30:
    if (ctx->pc == 0x3BEB30u) {
        ctx->pc = 0x3BEB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEB2Cu;
        // 0x3beb30: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BEB34u;
        goto label_3beb34;
    }
    ctx->pc = 0x3BEB2Cu;
    SET_GPR_U32(ctx, 31, 0x3BEB34u);
    ctx->pc = 0x3BEB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEB2Cu;
    // 0x3beb30: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4124F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4124F8u, 0x3BEB2Cu, 0x3BEB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEB34u;
label_3beb34:
    // 0x3beb34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3beb34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3beb38:
    // 0x3beb38: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_3beb3c:
    if (ctx->pc == 0x3BEB3Cu) {
        ctx->pc = 0x3BEB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEB38u;
        // 0x3beb3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BEB40u;
        goto label_3beb40;
    }
    ctx->pc = 0x3BEB38u;
    {
        const bool branch_taken_0x3beb38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BEB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEB38u;
        // 0x3beb3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3beb38) {
            ctx->pc = 0x3BEB48u;
            goto label_3beb48;
        }
    }
    ctx->pc = 0x3BEB40u;
label_3beb40:
    // 0x3beb40: 0x10000007  b           . + 4 + (0x7 << 2)
label_3beb44:
    if (ctx->pc == 0x3BEB44u) {
        ctx->pc = 0x3BEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEB40u;
        // 0x3beb44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BEB48u;
        goto label_3beb48;
    }
    ctx->pc = 0x3BEB40u;
    {
        const bool branch_taken_0x3beb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEB40u;
        // 0x3beb44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3beb40) {
            ctx->pc = 0x3BEB60u;
            goto label_3beb60;
        }
    }
    ctx->pc = 0x3BEB48u;
label_3beb48:
    // 0x3beb48: 0xc0ef778  jal         func_3BDDE0
label_3beb4c:
    if (ctx->pc == 0x3BEB4Cu) {
        ctx->pc = 0x3BEB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEB48u;
        // 0x3beb4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BEB50u;
        goto label_3beb50;
    }
    ctx->pc = 0x3BEB48u;
    SET_GPR_U32(ctx, 31, 0x3BEB50u);
    ctx->pc = 0x3BEB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEB48u;
    // 0x3beb4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BDDE0u, 0x3BEB48u, 0x3BEB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEB50u;
label_3beb50:
    // 0x3beb50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3beb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3beb54:
    // 0x3beb54: 0xc10496a  jal         func_4125A8
label_3beb58:
    if (ctx->pc == 0x3BEB58u) {
        ctx->pc = 0x3BEB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEB54u;
        // 0x3beb58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BEB5Cu;
        goto label_3beb5c;
    }
    ctx->pc = 0x3BEB54u;
    SET_GPR_U32(ctx, 31, 0x3BEB5Cu);
    ctx->pc = 0x3BEB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEB54u;
    // 0x3beb58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x3BEB54u, 0x3BEB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEB5Cu;
label_3beb5c:
    // 0x3beb5c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3beb5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3beb60:
    // 0x3beb60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3beb60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3beb64:
    // 0x3beb64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3beb64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3beb68:
    // 0x3beb68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3beb68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3beb6c:
    // 0x3beb6c: 0x3e00008  jr          $ra
label_3beb70:
    if (ctx->pc == 0x3BEB70u) {
        ctx->pc = 0x3BEB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEB6Cu;
        // 0x3beb70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BEB74u;
        goto label_3beb74;
    }
    ctx->pc = 0x3BEB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BEB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEB6Cu;
        // 0x3beb70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BEB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BEB74u;
label_3beb74:
    // 0x3beb74: 0x0  nop
    ctx->pc = 0x3beb74u;
    // NOP
    ctx->pc = 0x3beb78u;
}
