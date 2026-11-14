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

// Function: sub_0037E328
// Address: 0x37e328 - 0x37eac8
void sub_0037E328_0x37e328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037E328_0x37e328");
#endif

    switch (ctx->pc) {
        case 0x37e328u: goto label_37e328;
        case 0x37e32cu: goto label_37e32c;
        case 0x37e330u: goto label_37e330;
        case 0x37e334u: goto label_37e334;
        case 0x37e338u: goto label_37e338;
        case 0x37e33cu: goto label_37e33c;
        case 0x37e340u: goto label_37e340;
        case 0x37e344u: goto label_37e344;
        case 0x37e348u: goto label_37e348;
        case 0x37e34cu: goto label_37e34c;
        case 0x37e350u: goto label_37e350;
        case 0x37e354u: goto label_37e354;
        case 0x37e358u: goto label_37e358;
        case 0x37e35cu: goto label_37e35c;
        case 0x37e360u: goto label_37e360;
        case 0x37e364u: goto label_37e364;
        case 0x37e368u: goto label_37e368;
        case 0x37e36cu: goto label_37e36c;
        case 0x37e370u: goto label_37e370;
        case 0x37e374u: goto label_37e374;
        case 0x37e378u: goto label_37e378;
        case 0x37e37cu: goto label_37e37c;
        case 0x37e380u: goto label_37e380;
        case 0x37e384u: goto label_37e384;
        case 0x37e388u: goto label_37e388;
        case 0x37e38cu: goto label_37e38c;
        case 0x37e390u: goto label_37e390;
        case 0x37e394u: goto label_37e394;
        case 0x37e398u: goto label_37e398;
        case 0x37e39cu: goto label_37e39c;
        case 0x37e3a0u: goto label_37e3a0;
        case 0x37e3a4u: goto label_37e3a4;
        case 0x37e3a8u: goto label_37e3a8;
        case 0x37e3acu: goto label_37e3ac;
        case 0x37e3b0u: goto label_37e3b0;
        case 0x37e3b4u: goto label_37e3b4;
        case 0x37e3b8u: goto label_37e3b8;
        case 0x37e3bcu: goto label_37e3bc;
        case 0x37e3c0u: goto label_37e3c0;
        case 0x37e3c4u: goto label_37e3c4;
        case 0x37e3c8u: goto label_37e3c8;
        case 0x37e3ccu: goto label_37e3cc;
        case 0x37e3d0u: goto label_37e3d0;
        case 0x37e3d4u: goto label_37e3d4;
        case 0x37e3d8u: goto label_37e3d8;
        case 0x37e3dcu: goto label_37e3dc;
        case 0x37e3e0u: goto label_37e3e0;
        case 0x37e3e4u: goto label_37e3e4;
        case 0x37e3e8u: goto label_37e3e8;
        case 0x37e3ecu: goto label_37e3ec;
        case 0x37e3f0u: goto label_37e3f0;
        case 0x37e3f4u: goto label_37e3f4;
        case 0x37e3f8u: goto label_37e3f8;
        case 0x37e3fcu: goto label_37e3fc;
        case 0x37e400u: goto label_37e400;
        case 0x37e404u: goto label_37e404;
        case 0x37e408u: goto label_37e408;
        case 0x37e40cu: goto label_37e40c;
        case 0x37e410u: goto label_37e410;
        case 0x37e414u: goto label_37e414;
        case 0x37e418u: goto label_37e418;
        case 0x37e41cu: goto label_37e41c;
        case 0x37e420u: goto label_37e420;
        case 0x37e424u: goto label_37e424;
        case 0x37e428u: goto label_37e428;
        case 0x37e42cu: goto label_37e42c;
        case 0x37e430u: goto label_37e430;
        case 0x37e434u: goto label_37e434;
        case 0x37e438u: goto label_37e438;
        case 0x37e43cu: goto label_37e43c;
        case 0x37e440u: goto label_37e440;
        case 0x37e444u: goto label_37e444;
        case 0x37e448u: goto label_37e448;
        case 0x37e44cu: goto label_37e44c;
        case 0x37e450u: goto label_37e450;
        case 0x37e454u: goto label_37e454;
        case 0x37e458u: goto label_37e458;
        case 0x37e45cu: goto label_37e45c;
        case 0x37e460u: goto label_37e460;
        case 0x37e464u: goto label_37e464;
        case 0x37e468u: goto label_37e468;
        case 0x37e46cu: goto label_37e46c;
        case 0x37e470u: goto label_37e470;
        case 0x37e474u: goto label_37e474;
        case 0x37e478u: goto label_37e478;
        case 0x37e47cu: goto label_37e47c;
        case 0x37e480u: goto label_37e480;
        case 0x37e484u: goto label_37e484;
        case 0x37e488u: goto label_37e488;
        case 0x37e48cu: goto label_37e48c;
        case 0x37e490u: goto label_37e490;
        case 0x37e494u: goto label_37e494;
        case 0x37e498u: goto label_37e498;
        case 0x37e49cu: goto label_37e49c;
        case 0x37e4a0u: goto label_37e4a0;
        case 0x37e4a4u: goto label_37e4a4;
        case 0x37e4a8u: goto label_37e4a8;
        case 0x37e4acu: goto label_37e4ac;
        case 0x37e4b0u: goto label_37e4b0;
        case 0x37e4b4u: goto label_37e4b4;
        case 0x37e4b8u: goto label_37e4b8;
        case 0x37e4bcu: goto label_37e4bc;
        case 0x37e4c0u: goto label_37e4c0;
        case 0x37e4c4u: goto label_37e4c4;
        case 0x37e4c8u: goto label_37e4c8;
        case 0x37e4ccu: goto label_37e4cc;
        case 0x37e4d0u: goto label_37e4d0;
        case 0x37e4d4u: goto label_37e4d4;
        case 0x37e4d8u: goto label_37e4d8;
        case 0x37e4dcu: goto label_37e4dc;
        case 0x37e4e0u: goto label_37e4e0;
        case 0x37e4e4u: goto label_37e4e4;
        case 0x37e4e8u: goto label_37e4e8;
        case 0x37e4ecu: goto label_37e4ec;
        case 0x37e4f0u: goto label_37e4f0;
        case 0x37e4f4u: goto label_37e4f4;
        case 0x37e4f8u: goto label_37e4f8;
        case 0x37e4fcu: goto label_37e4fc;
        case 0x37e500u: goto label_37e500;
        case 0x37e504u: goto label_37e504;
        case 0x37e508u: goto label_37e508;
        case 0x37e50cu: goto label_37e50c;
        case 0x37e510u: goto label_37e510;
        case 0x37e514u: goto label_37e514;
        case 0x37e518u: goto label_37e518;
        case 0x37e51cu: goto label_37e51c;
        case 0x37e520u: goto label_37e520;
        case 0x37e524u: goto label_37e524;
        case 0x37e528u: goto label_37e528;
        case 0x37e52cu: goto label_37e52c;
        case 0x37e530u: goto label_37e530;
        case 0x37e534u: goto label_37e534;
        case 0x37e538u: goto label_37e538;
        case 0x37e53cu: goto label_37e53c;
        case 0x37e540u: goto label_37e540;
        case 0x37e544u: goto label_37e544;
        case 0x37e548u: goto label_37e548;
        case 0x37e54cu: goto label_37e54c;
        case 0x37e550u: goto label_37e550;
        case 0x37e554u: goto label_37e554;
        case 0x37e558u: goto label_37e558;
        case 0x37e55cu: goto label_37e55c;
        case 0x37e560u: goto label_37e560;
        case 0x37e564u: goto label_37e564;
        case 0x37e568u: goto label_37e568;
        case 0x37e56cu: goto label_37e56c;
        case 0x37e570u: goto label_37e570;
        case 0x37e574u: goto label_37e574;
        case 0x37e578u: goto label_37e578;
        case 0x37e57cu: goto label_37e57c;
        case 0x37e580u: goto label_37e580;
        case 0x37e584u: goto label_37e584;
        case 0x37e588u: goto label_37e588;
        case 0x37e58cu: goto label_37e58c;
        case 0x37e590u: goto label_37e590;
        case 0x37e594u: goto label_37e594;
        case 0x37e598u: goto label_37e598;
        case 0x37e59cu: goto label_37e59c;
        case 0x37e5a0u: goto label_37e5a0;
        case 0x37e5a4u: goto label_37e5a4;
        case 0x37e5a8u: goto label_37e5a8;
        case 0x37e5acu: goto label_37e5ac;
        case 0x37e5b0u: goto label_37e5b0;
        case 0x37e5b4u: goto label_37e5b4;
        case 0x37e5b8u: goto label_37e5b8;
        case 0x37e5bcu: goto label_37e5bc;
        case 0x37e5c0u: goto label_37e5c0;
        case 0x37e5c4u: goto label_37e5c4;
        case 0x37e5c8u: goto label_37e5c8;
        case 0x37e5ccu: goto label_37e5cc;
        case 0x37e5d0u: goto label_37e5d0;
        case 0x37e5d4u: goto label_37e5d4;
        case 0x37e5d8u: goto label_37e5d8;
        case 0x37e5dcu: goto label_37e5dc;
        case 0x37e5e0u: goto label_37e5e0;
        case 0x37e5e4u: goto label_37e5e4;
        case 0x37e5e8u: goto label_37e5e8;
        case 0x37e5ecu: goto label_37e5ec;
        case 0x37e5f0u: goto label_37e5f0;
        case 0x37e5f4u: goto label_37e5f4;
        case 0x37e5f8u: goto label_37e5f8;
        case 0x37e5fcu: goto label_37e5fc;
        case 0x37e600u: goto label_37e600;
        case 0x37e604u: goto label_37e604;
        case 0x37e608u: goto label_37e608;
        case 0x37e60cu: goto label_37e60c;
        case 0x37e610u: goto label_37e610;
        case 0x37e614u: goto label_37e614;
        case 0x37e618u: goto label_37e618;
        case 0x37e61cu: goto label_37e61c;
        case 0x37e620u: goto label_37e620;
        case 0x37e624u: goto label_37e624;
        case 0x37e628u: goto label_37e628;
        case 0x37e62cu: goto label_37e62c;
        case 0x37e630u: goto label_37e630;
        case 0x37e634u: goto label_37e634;
        case 0x37e638u: goto label_37e638;
        case 0x37e63cu: goto label_37e63c;
        case 0x37e640u: goto label_37e640;
        case 0x37e644u: goto label_37e644;
        case 0x37e648u: goto label_37e648;
        case 0x37e64cu: goto label_37e64c;
        case 0x37e650u: goto label_37e650;
        case 0x37e654u: goto label_37e654;
        case 0x37e658u: goto label_37e658;
        case 0x37e65cu: goto label_37e65c;
        case 0x37e660u: goto label_37e660;
        case 0x37e664u: goto label_37e664;
        case 0x37e668u: goto label_37e668;
        case 0x37e66cu: goto label_37e66c;
        case 0x37e670u: goto label_37e670;
        case 0x37e674u: goto label_37e674;
        case 0x37e678u: goto label_37e678;
        case 0x37e67cu: goto label_37e67c;
        case 0x37e680u: goto label_37e680;
        case 0x37e684u: goto label_37e684;
        case 0x37e688u: goto label_37e688;
        case 0x37e68cu: goto label_37e68c;
        case 0x37e690u: goto label_37e690;
        case 0x37e694u: goto label_37e694;
        case 0x37e698u: goto label_37e698;
        case 0x37e69cu: goto label_37e69c;
        case 0x37e6a0u: goto label_37e6a0;
        case 0x37e6a4u: goto label_37e6a4;
        case 0x37e6a8u: goto label_37e6a8;
        case 0x37e6acu: goto label_37e6ac;
        case 0x37e6b0u: goto label_37e6b0;
        case 0x37e6b4u: goto label_37e6b4;
        case 0x37e6b8u: goto label_37e6b8;
        case 0x37e6bcu: goto label_37e6bc;
        case 0x37e6c0u: goto label_37e6c0;
        case 0x37e6c4u: goto label_37e6c4;
        case 0x37e6c8u: goto label_37e6c8;
        case 0x37e6ccu: goto label_37e6cc;
        case 0x37e6d0u: goto label_37e6d0;
        case 0x37e6d4u: goto label_37e6d4;
        case 0x37e6d8u: goto label_37e6d8;
        case 0x37e6dcu: goto label_37e6dc;
        case 0x37e6e0u: goto label_37e6e0;
        case 0x37e6e4u: goto label_37e6e4;
        case 0x37e6e8u: goto label_37e6e8;
        case 0x37e6ecu: goto label_37e6ec;
        case 0x37e6f0u: goto label_37e6f0;
        case 0x37e6f4u: goto label_37e6f4;
        case 0x37e6f8u: goto label_37e6f8;
        case 0x37e6fcu: goto label_37e6fc;
        case 0x37e700u: goto label_37e700;
        case 0x37e704u: goto label_37e704;
        case 0x37e708u: goto label_37e708;
        case 0x37e70cu: goto label_37e70c;
        case 0x37e710u: goto label_37e710;
        case 0x37e714u: goto label_37e714;
        case 0x37e718u: goto label_37e718;
        case 0x37e71cu: goto label_37e71c;
        case 0x37e720u: goto label_37e720;
        case 0x37e724u: goto label_37e724;
        case 0x37e728u: goto label_37e728;
        case 0x37e72cu: goto label_37e72c;
        case 0x37e730u: goto label_37e730;
        case 0x37e734u: goto label_37e734;
        case 0x37e738u: goto label_37e738;
        case 0x37e73cu: goto label_37e73c;
        case 0x37e740u: goto label_37e740;
        case 0x37e744u: goto label_37e744;
        case 0x37e748u: goto label_37e748;
        case 0x37e74cu: goto label_37e74c;
        case 0x37e750u: goto label_37e750;
        case 0x37e754u: goto label_37e754;
        case 0x37e758u: goto label_37e758;
        case 0x37e75cu: goto label_37e75c;
        case 0x37e760u: goto label_37e760;
        case 0x37e764u: goto label_37e764;
        case 0x37e768u: goto label_37e768;
        case 0x37e76cu: goto label_37e76c;
        case 0x37e770u: goto label_37e770;
        case 0x37e774u: goto label_37e774;
        case 0x37e778u: goto label_37e778;
        case 0x37e77cu: goto label_37e77c;
        case 0x37e780u: goto label_37e780;
        case 0x37e784u: goto label_37e784;
        case 0x37e788u: goto label_37e788;
        case 0x37e78cu: goto label_37e78c;
        case 0x37e790u: goto label_37e790;
        case 0x37e794u: goto label_37e794;
        case 0x37e798u: goto label_37e798;
        case 0x37e79cu: goto label_37e79c;
        case 0x37e7a0u: goto label_37e7a0;
        case 0x37e7a4u: goto label_37e7a4;
        case 0x37e7a8u: goto label_37e7a8;
        case 0x37e7acu: goto label_37e7ac;
        case 0x37e7b0u: goto label_37e7b0;
        case 0x37e7b4u: goto label_37e7b4;
        case 0x37e7b8u: goto label_37e7b8;
        case 0x37e7bcu: goto label_37e7bc;
        case 0x37e7c0u: goto label_37e7c0;
        case 0x37e7c4u: goto label_37e7c4;
        case 0x37e7c8u: goto label_37e7c8;
        case 0x37e7ccu: goto label_37e7cc;
        case 0x37e7d0u: goto label_37e7d0;
        case 0x37e7d4u: goto label_37e7d4;
        case 0x37e7d8u: goto label_37e7d8;
        case 0x37e7dcu: goto label_37e7dc;
        case 0x37e7e0u: goto label_37e7e0;
        case 0x37e7e4u: goto label_37e7e4;
        case 0x37e7e8u: goto label_37e7e8;
        case 0x37e7ecu: goto label_37e7ec;
        case 0x37e7f0u: goto label_37e7f0;
        case 0x37e7f4u: goto label_37e7f4;
        case 0x37e7f8u: goto label_37e7f8;
        case 0x37e7fcu: goto label_37e7fc;
        case 0x37e800u: goto label_37e800;
        case 0x37e804u: goto label_37e804;
        case 0x37e808u: goto label_37e808;
        case 0x37e80cu: goto label_37e80c;
        case 0x37e810u: goto label_37e810;
        case 0x37e814u: goto label_37e814;
        case 0x37e818u: goto label_37e818;
        case 0x37e81cu: goto label_37e81c;
        case 0x37e820u: goto label_37e820;
        case 0x37e824u: goto label_37e824;
        case 0x37e828u: goto label_37e828;
        case 0x37e82cu: goto label_37e82c;
        case 0x37e830u: goto label_37e830;
        case 0x37e834u: goto label_37e834;
        case 0x37e838u: goto label_37e838;
        case 0x37e83cu: goto label_37e83c;
        case 0x37e840u: goto label_37e840;
        case 0x37e844u: goto label_37e844;
        case 0x37e848u: goto label_37e848;
        case 0x37e84cu: goto label_37e84c;
        case 0x37e850u: goto label_37e850;
        case 0x37e854u: goto label_37e854;
        case 0x37e858u: goto label_37e858;
        case 0x37e85cu: goto label_37e85c;
        case 0x37e860u: goto label_37e860;
        case 0x37e864u: goto label_37e864;
        case 0x37e868u: goto label_37e868;
        case 0x37e86cu: goto label_37e86c;
        case 0x37e870u: goto label_37e870;
        case 0x37e874u: goto label_37e874;
        case 0x37e878u: goto label_37e878;
        case 0x37e87cu: goto label_37e87c;
        case 0x37e880u: goto label_37e880;
        case 0x37e884u: goto label_37e884;
        case 0x37e888u: goto label_37e888;
        case 0x37e88cu: goto label_37e88c;
        case 0x37e890u: goto label_37e890;
        case 0x37e894u: goto label_37e894;
        case 0x37e898u: goto label_37e898;
        case 0x37e89cu: goto label_37e89c;
        case 0x37e8a0u: goto label_37e8a0;
        case 0x37e8a4u: goto label_37e8a4;
        case 0x37e8a8u: goto label_37e8a8;
        case 0x37e8acu: goto label_37e8ac;
        case 0x37e8b0u: goto label_37e8b0;
        case 0x37e8b4u: goto label_37e8b4;
        case 0x37e8b8u: goto label_37e8b8;
        case 0x37e8bcu: goto label_37e8bc;
        case 0x37e8c0u: goto label_37e8c0;
        case 0x37e8c4u: goto label_37e8c4;
        case 0x37e8c8u: goto label_37e8c8;
        case 0x37e8ccu: goto label_37e8cc;
        case 0x37e8d0u: goto label_37e8d0;
        case 0x37e8d4u: goto label_37e8d4;
        case 0x37e8d8u: goto label_37e8d8;
        case 0x37e8dcu: goto label_37e8dc;
        case 0x37e8e0u: goto label_37e8e0;
        case 0x37e8e4u: goto label_37e8e4;
        case 0x37e8e8u: goto label_37e8e8;
        case 0x37e8ecu: goto label_37e8ec;
        case 0x37e8f0u: goto label_37e8f0;
        case 0x37e8f4u: goto label_37e8f4;
        case 0x37e8f8u: goto label_37e8f8;
        case 0x37e8fcu: goto label_37e8fc;
        case 0x37e900u: goto label_37e900;
        case 0x37e904u: goto label_37e904;
        case 0x37e908u: goto label_37e908;
        case 0x37e90cu: goto label_37e90c;
        case 0x37e910u: goto label_37e910;
        case 0x37e914u: goto label_37e914;
        case 0x37e918u: goto label_37e918;
        case 0x37e91cu: goto label_37e91c;
        case 0x37e920u: goto label_37e920;
        case 0x37e924u: goto label_37e924;
        case 0x37e928u: goto label_37e928;
        case 0x37e92cu: goto label_37e92c;
        case 0x37e930u: goto label_37e930;
        case 0x37e934u: goto label_37e934;
        case 0x37e938u: goto label_37e938;
        case 0x37e93cu: goto label_37e93c;
        case 0x37e940u: goto label_37e940;
        case 0x37e944u: goto label_37e944;
        case 0x37e948u: goto label_37e948;
        case 0x37e94cu: goto label_37e94c;
        case 0x37e950u: goto label_37e950;
        case 0x37e954u: goto label_37e954;
        case 0x37e958u: goto label_37e958;
        case 0x37e95cu: goto label_37e95c;
        case 0x37e960u: goto label_37e960;
        case 0x37e964u: goto label_37e964;
        case 0x37e968u: goto label_37e968;
        case 0x37e96cu: goto label_37e96c;
        case 0x37e970u: goto label_37e970;
        case 0x37e974u: goto label_37e974;
        case 0x37e978u: goto label_37e978;
        case 0x37e97cu: goto label_37e97c;
        case 0x37e980u: goto label_37e980;
        case 0x37e984u: goto label_37e984;
        case 0x37e988u: goto label_37e988;
        case 0x37e98cu: goto label_37e98c;
        case 0x37e990u: goto label_37e990;
        case 0x37e994u: goto label_37e994;
        case 0x37e998u: goto label_37e998;
        case 0x37e99cu: goto label_37e99c;
        case 0x37e9a0u: goto label_37e9a0;
        case 0x37e9a4u: goto label_37e9a4;
        case 0x37e9a8u: goto label_37e9a8;
        case 0x37e9acu: goto label_37e9ac;
        case 0x37e9b0u: goto label_37e9b0;
        case 0x37e9b4u: goto label_37e9b4;
        case 0x37e9b8u: goto label_37e9b8;
        case 0x37e9bcu: goto label_37e9bc;
        case 0x37e9c0u: goto label_37e9c0;
        case 0x37e9c4u: goto label_37e9c4;
        case 0x37e9c8u: goto label_37e9c8;
        case 0x37e9ccu: goto label_37e9cc;
        case 0x37e9d0u: goto label_37e9d0;
        case 0x37e9d4u: goto label_37e9d4;
        case 0x37e9d8u: goto label_37e9d8;
        case 0x37e9dcu: goto label_37e9dc;
        case 0x37e9e0u: goto label_37e9e0;
        case 0x37e9e4u: goto label_37e9e4;
        case 0x37e9e8u: goto label_37e9e8;
        case 0x37e9ecu: goto label_37e9ec;
        case 0x37e9f0u: goto label_37e9f0;
        case 0x37e9f4u: goto label_37e9f4;
        case 0x37e9f8u: goto label_37e9f8;
        case 0x37e9fcu: goto label_37e9fc;
        case 0x37ea00u: goto label_37ea00;
        case 0x37ea04u: goto label_37ea04;
        case 0x37ea08u: goto label_37ea08;
        case 0x37ea0cu: goto label_37ea0c;
        case 0x37ea10u: goto label_37ea10;
        case 0x37ea14u: goto label_37ea14;
        case 0x37ea18u: goto label_37ea18;
        case 0x37ea1cu: goto label_37ea1c;
        case 0x37ea20u: goto label_37ea20;
        case 0x37ea24u: goto label_37ea24;
        case 0x37ea28u: goto label_37ea28;
        case 0x37ea2cu: goto label_37ea2c;
        case 0x37ea30u: goto label_37ea30;
        case 0x37ea34u: goto label_37ea34;
        case 0x37ea38u: goto label_37ea38;
        case 0x37ea3cu: goto label_37ea3c;
        case 0x37ea40u: goto label_37ea40;
        case 0x37ea44u: goto label_37ea44;
        case 0x37ea48u: goto label_37ea48;
        case 0x37ea4cu: goto label_37ea4c;
        case 0x37ea50u: goto label_37ea50;
        case 0x37ea54u: goto label_37ea54;
        case 0x37ea58u: goto label_37ea58;
        case 0x37ea5cu: goto label_37ea5c;
        case 0x37ea60u: goto label_37ea60;
        case 0x37ea64u: goto label_37ea64;
        case 0x37ea68u: goto label_37ea68;
        case 0x37ea6cu: goto label_37ea6c;
        case 0x37ea70u: goto label_37ea70;
        case 0x37ea74u: goto label_37ea74;
        case 0x37ea78u: goto label_37ea78;
        case 0x37ea7cu: goto label_37ea7c;
        case 0x37ea80u: goto label_37ea80;
        case 0x37ea84u: goto label_37ea84;
        case 0x37ea88u: goto label_37ea88;
        case 0x37ea8cu: goto label_37ea8c;
        case 0x37ea90u: goto label_37ea90;
        case 0x37ea94u: goto label_37ea94;
        case 0x37ea98u: goto label_37ea98;
        case 0x37ea9cu: goto label_37ea9c;
        case 0x37eaa0u: goto label_37eaa0;
        case 0x37eaa4u: goto label_37eaa4;
        case 0x37eaa8u: goto label_37eaa8;
        case 0x37eaacu: goto label_37eaac;
        case 0x37eab0u: goto label_37eab0;
        case 0x37eab4u: goto label_37eab4;
        case 0x37eab8u: goto label_37eab8;
        case 0x37eabcu: goto label_37eabc;
        case 0x37eac0u: goto label_37eac0;
        case 0x37eac4u: goto label_37eac4;
        default: break;
    }

    ctx->pc = 0x37e328u;

label_37e328:
    // 0x37e328: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x37e328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_37e32c:
    // 0x37e32c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x37e32cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_37e330:
    // 0x37e330: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x37e330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_37e334:
    // 0x37e334: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x37e334u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_37e338:
    // 0x37e338: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x37e338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_37e33c:
    // 0x37e33c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37e33cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37e340:
    // 0x37e340: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x37e340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_37e344:
    // 0x37e344: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x37e344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37e348:
    // 0x37e348: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37e348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_37e34c:
    // 0x37e34c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x37e34cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37e350:
    // 0x37e350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37e350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_37e354:
    // 0x37e354: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x37e354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_37e358:
    // 0x37e358: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x37e358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_37e35c:
    // 0x37e35c: 0x8e080100  lw          $t0, 0x100($s0)
    ctx->pc = 0x37e35cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_37e360:
    // 0x37e360: 0x624821  addu        $t1, $v1, $v0
    ctx->pc = 0x37e360u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_37e364:
    // 0x37e364: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x37e364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_37e368:
    // 0x37e368: 0x10c70017  beq         $a2, $a3, . + 4 + (0x17 << 2)
label_37e36c:
    if (ctx->pc == 0x37E36Cu) {
        ctx->pc = 0x37E36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E368u;
        // 0x37e36c: 0x8d120050  lw          $s2, 0x50($t0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E370u;
        goto label_37e370;
    }
    ctx->pc = 0x37E368u;
    {
        const bool branch_taken_0x37e368 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x37E36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E368u;
        // 0x37e36c: 0x8d120050  lw          $s2, 0x50($t0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e368) {
            ctx->pc = 0x37E3C8u;
            goto label_37e3c8;
        }
    }
    ctx->pc = 0x37E370u;
label_37e370:
    // 0x37e370: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x37e370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_37e374:
    // 0x37e374: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x37e374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_37e378:
    // 0x37e378: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x37e378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_37e37c:
    // 0x37e37c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x37e37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_37e380:
    // 0x37e380: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x37e380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_37e384:
    // 0x37e384: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37e384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_37e388:
    // 0x37e388: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x37e388u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
label_37e38c:
    // 0x37e38c: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x37e38cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
label_37e390:
    // 0x37e390: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x37e390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_37e394:
    // 0x37e394: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37e394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_37e398:
    // 0x37e398: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_37e39c:
    if (ctx->pc == 0x37E39Cu) {
        ctx->pc = 0x37E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E398u;
        // 0x37e39c: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E3A0u;
        goto label_37e3a0;
    }
    ctx->pc = 0x37E398u;
    {
        const bool branch_taken_0x37e398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E398u;
        // 0x37e39c: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e398) {
            ctx->pc = 0x37E3C8u;
            goto label_37e3c8;
        }
    }
    ctx->pc = 0x37E3A0u;
label_37e3a0:
    // 0x37e3a0: 0x8d020054  lw          $v0, 0x54($t0)
    ctx->pc = 0x37e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
label_37e3a4:
    // 0x37e3a4: 0x8ca5001c  lw          $a1, 0x1C($a1)
    ctx->pc = 0x37e3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_37e3a8:
    // 0x37e3a8: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x37e3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_37e3ac:
    // 0x37e3ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x37e3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_37e3b0:
    // 0x37e3b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37e3b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37e3b4:
    // 0x37e3b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x37e3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_37e3b8:
    // 0x37e3b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37e3b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37e3bc:
    // 0x37e3bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_37e3c0:
    // 0x37e3c0: 0xc0e01f4  jal         func_3807D0
label_37e3c4:
    if (ctx->pc == 0x37E3C4u) {
        ctx->pc = 0x37E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E3C0u;
        // 0x37e3c4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E3C8u;
        goto label_37e3c8;
    }
    ctx->pc = 0x37E3C0u;
    SET_GPR_U32(ctx, 31, 0x37E3C8u);
    ctx->pc = 0x37E3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E3C0u;
    // 0x37e3c4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3807D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3807D0u, 0x37E3C0u, 0x37E3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E3C8u;
label_37e3c8:
    // 0x37e3c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x37e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_37e3cc:
    // 0x37e3cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x37e3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_37e3d0:
    // 0x37e3d0: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
label_37e3d4:
    if (ctx->pc == 0x37E3D4u) {
        ctx->pc = 0x37E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E3D0u;
        // 0x37e3d4: 0x24030024  addiu       $v1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E3D8u;
        goto label_37e3d8;
    }
    ctx->pc = 0x37E3D0u;
    {
        const bool branch_taken_0x37e3d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x37E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E3D0u;
        // 0x37e3d4: 0x24030024  addiu       $v1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e3d0) {
            ctx->pc = 0x37E428u;
            goto label_37e428;
        }
    }
    ctx->pc = 0x37E3D8u;
label_37e3d8:
    // 0x37e3d8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x37e3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_37e3dc:
    // 0x37e3dc: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x37e3dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_37e3e0:
    // 0x37e3e0: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x37e3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_37e3e4:
    // 0x37e3e4: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x37e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_37e3e8:
    // 0x37e3e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_37e3ec:
    // 0x37e3ec: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x37e3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
label_37e3f0:
    // 0x37e3f0: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x37e3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_37e3f4:
    // 0x37e3f4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x37e3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_37e3f8:
    // 0x37e3f8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_37e3fc:
    if (ctx->pc == 0x37E3FCu) {
        ctx->pc = 0x37E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E3F8u;
        // 0x37e3fc: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E400u;
        goto label_37e400;
    }
    ctx->pc = 0x37E3F8u;
    {
        const bool branch_taken_0x37e3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E3F8u;
        // 0x37e3fc: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e3f8) {
            ctx->pc = 0x37E428u;
            goto label_37e428;
        }
    }
    ctx->pc = 0x37E400u;
label_37e400:
    // 0x37e400: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x37e400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_37e404:
    // 0x37e404: 0x8ca5001c  lw          $a1, 0x1C($a1)
    ctx->pc = 0x37e404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_37e408:
    // 0x37e408: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37e408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37e40c:
    // 0x37e40c: 0x8c880054  lw          $t0, 0x54($a0)
    ctx->pc = 0x37e40cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_37e410:
    // 0x37e410: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37e410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37e414:
    // 0x37e414: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x37e414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_37e418:
    // 0x37e418: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x37e418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_37e41c:
    // 0x37e41c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37e41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_37e420:
    // 0x37e420: 0xc0e01f4  jal         func_3807D0
label_37e424:
    if (ctx->pc == 0x37E424u) {
        ctx->pc = 0x37E424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E420u;
        // 0x37e424: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E428u;
        goto label_37e428;
    }
    ctx->pc = 0x37E420u;
    SET_GPR_U32(ctx, 31, 0x37E428u);
    ctx->pc = 0x37E424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E420u;
    // 0x37e424: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3807D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3807D0u, 0x37E420u, 0x37E428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E428u;
label_37e428:
    // 0x37e428: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x37e428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_37e42c:
    // 0x37e42c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x37e42cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_37e430:
    // 0x37e430: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37e430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37e434:
    // 0x37e434: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37e434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37e438:
    // 0x37e438: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37e438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_37e43c:
    // 0x37e43c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x37e43cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37e440:
    // 0x37e440: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x37e440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_37e444:
    // 0x37e444: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37e444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37e448:
    // 0x37e448: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x37e448u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37e44c:
    // 0x37e44c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37e44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37e450:
    // 0x37e450: 0x3e00008  jr          $ra
label_37e454:
    if (ctx->pc == 0x37E454u) {
        ctx->pc = 0x37E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E450u;
        // 0x37e454: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E458u;
        goto label_37e458;
    }
    ctx->pc = 0x37E450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E450u;
        // 0x37e454: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37E458u;
label_37e458:
    // 0x37e458: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x37e458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_37e45c:
    // 0x37e45c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x37e45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_37e460:
    // 0x37e460: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x37e460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_37e464:
    // 0x37e464: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x37e464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_37e468:
    // 0x37e468: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x37e468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_37e46c:
    // 0x37e46c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x37e46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_37e470:
    // 0x37e470: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x37e470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_37e474:
    // 0x37e474: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x37e474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_37e478:
    // 0x37e478: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x37e478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_37e47c:
    // 0x37e47c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x37e47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_37e480:
    // 0x37e480: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37e480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_37e484:
    // 0x37e484: 0xc1067b0  jal         func_419EC0
label_37e488:
    if (ctx->pc == 0x37E488u) {
        ctx->pc = 0x37E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E484u;
        // 0x37e488: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E48Cu;
        goto label_37e48c;
    }
    ctx->pc = 0x37E484u;
    SET_GPR_U32(ctx, 31, 0x37E48Cu);
    ctx->pc = 0x37E488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E484u;
    // 0x37e488: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EC0u, 0x37E484u, 0x37E48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E48Cu;
label_37e48c:
    // 0x37e48c: 0xc0e06e0  jal         func_381B80
label_37e490:
    if (ctx->pc == 0x37E490u) {
        ctx->pc = 0x37E490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E48Cu;
        // 0x37e490: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E494u;
        goto label_37e494;
    }
    ctx->pc = 0x37E48Cu;
    SET_GPR_U32(ctx, 31, 0x37E494u);
    ctx->pc = 0x37E490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E48Cu;
    // 0x37e490: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381B80u, 0x37E48Cu, 0x37E494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E494u;
label_37e494:
    // 0x37e494: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x37e494u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37e498:
    // 0x37e498: 0x52800095  beql        $s4, $zero, . + 4 + (0x95 << 2)
label_37e49c:
    if (ctx->pc == 0x37E49Cu) {
        ctx->pc = 0x37E49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E498u;
        // 0x37e49c: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E4A0u;
        goto label_37e4a0;
    }
    ctx->pc = 0x37E498u;
    {
        const bool branch_taken_0x37e498 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e498) {
            ctx->pc = 0x37E49Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37E498u;
            // 0x37e49c: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37E6F0u;
            goto label_37e6f0;
        }
    }
    ctx->pc = 0x37E4A0u;
label_37e4a0:
    // 0x37e4a0: 0xc0e06dc  jal         func_381B70
label_37e4a4:
    if (ctx->pc == 0x37E4A4u) {
        ctx->pc = 0x37E4A8u;
        goto label_37e4a8;
    }
    ctx->pc = 0x37E4A0u;
    SET_GPR_U32(ctx, 31, 0x37E4A8u);
    ctx->pc = 0x381B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381B70u, 0x37E4A0u, 0x37E4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E4A8u;
label_37e4a8:
    // 0x37e4a8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x37e4a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37e4ac:
    // 0x37e4ac: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x37e4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_37e4b0:
    // 0x37e4b0: 0x1040008b  beqz        $v0, . + 4 + (0x8B << 2)
label_37e4b4:
    if (ctx->pc == 0x37E4B4u) {
        ctx->pc = 0x37E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E4B0u;
        // 0x37e4b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E4B8u;
        goto label_37e4b8;
    }
    ctx->pc = 0x37E4B0u;
    {
        const bool branch_taken_0x37e4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E4B0u;
        // 0x37e4b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e4b0) {
            ctx->pc = 0x37E6E0u;
            goto label_37e6e0;
        }
    }
    ctx->pc = 0x37E4B8u;
label_37e4b8:
    // 0x37e4b8: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x37e4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_37e4bc:
    // 0x37e4bc: 0x2477eea8  addiu       $s7, $v1, -0x1158
    ctx->pc = 0x37e4bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962856));
label_37e4c0:
    // 0x37e4c0: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x37e4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_37e4c4:
    // 0x37e4c4: 0x0  nop
    ctx->pc = 0x37e4c4u;
    // NOP
label_37e4c8:
    // 0x37e4c8: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x37e4c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_37e4cc:
    // 0x37e4cc: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x37e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_37e4d0:
    // 0x37e4d0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x37e4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_37e4d4:
    // 0x37e4d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x37e4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_37e4d8:
    // 0x37e4d8: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x37e4d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37e4dc:
    // 0x37e4dc: 0x2643001c  addiu       $v1, $s2, 0x1C
    ctx->pc = 0x37e4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_37e4e0:
    // 0x37e4e0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x37e4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_37e4e4:
    // 0x37e4e4: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x37e4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_37e4e8:
    // 0x37e4e8: 0x10e00023  beqz        $a3, . + 4 + (0x23 << 2)
label_37e4ec:
    if (ctx->pc == 0x37E4ECu) {
        ctx->pc = 0x37E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E4E8u;
        // 0x37e4ec: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E4F0u;
        goto label_37e4f0;
    }
    ctx->pc = 0x37E4E8u;
    {
        const bool branch_taken_0x37e4e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E4E8u;
        // 0x37e4ec: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e4e8) {
            ctx->pc = 0x37E578u;
            goto label_37e578;
        }
    }
    ctx->pc = 0x37E4F0u;
label_37e4f0:
    // 0x37e4f0: 0x8cf10004  lw          $s1, 0x4($a3)
    ctx->pc = 0x37e4f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_37e4f4:
    // 0x37e4f4: 0xc0e2686  jal         func_389A18
label_37e4f8:
    if (ctx->pc == 0x37E4F8u) {
        ctx->pc = 0x37E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E4F4u;
        // 0x37e4f8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E4FCu;
        goto label_37e4fc;
    }
    ctx->pc = 0x37E4F4u;
    SET_GPR_U32(ctx, 31, 0x37E4FCu);
    ctx->pc = 0x37E4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E4F4u;
    // 0x37e4f8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x37E4F4u, 0x37E4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E4FCu;
label_37e4fc:
    // 0x37e4fc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37e4fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37e500:
    // 0x37e500: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x37e500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_37e504:
    // 0x37e504: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x37e504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_37e508:
    // 0x37e508: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x37e508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_37e50c:
    // 0x37e50c: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x37e50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_37e510:
    // 0x37e510: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x37e510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_37e514:
    // 0x37e514: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x37e514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_37e518:
    // 0x37e518: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x37e518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_37e51c:
    // 0x37e51c: 0x2463eed0  addiu       $v1, $v1, -0x1130
    ctx->pc = 0x37e51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962896));
label_37e520:
    // 0x37e520: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37e520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37e524:
    // 0x37e524: 0xace30048  sw          $v1, 0x48($a3)
    ctx->pc = 0x37e524u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 3));
label_37e528:
    // 0x37e528: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x37e528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_37e52c:
    // 0x37e52c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37e52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37e530:
    // 0x37e530: 0xc0e3396  jal         func_38CE58
label_37e534:
    if (ctx->pc == 0x37E534u) {
        ctx->pc = 0x37E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E530u;
        // 0x37e534: 0xae03006c  sw          $v1, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E538u;
        goto label_37e538;
    }
    ctx->pc = 0x37E530u;
    SET_GPR_U32(ctx, 31, 0x37E538u);
    ctx->pc = 0x37E534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E530u;
    // 0x37e534: 0xae03006c  sw          $v1, 0x6C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x37E530u, 0x37E538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E538u;
label_37e538:
    // 0x37e538: 0xc0e2962  jal         func_38A588
label_37e53c:
    if (ctx->pc == 0x37E53Cu) {
        ctx->pc = 0x37E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E538u;
        // 0x37e53c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E540u;
        goto label_37e540;
    }
    ctx->pc = 0x37E538u;
    SET_GPR_U32(ctx, 31, 0x37E540u);
    ctx->pc = 0x37E53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E538u;
    // 0x37e53c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A588u, 0x37E538u, 0x37E540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E540u;
label_37e540:
    // 0x37e540: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x37e540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_37e544:
    // 0x37e544: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x37e544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_37e548:
    // 0x37e548: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x37e548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_37e54c:
    // 0x37e54c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x37e54cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_37e550:
    // 0x37e550: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x37e550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_37e554:
    // 0x37e554: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37e554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37e558:
    // 0x37e558: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x37e558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_37e55c:
    // 0x37e55c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37e55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37e560:
    // 0x37e560: 0xc0e3396  jal         func_38CE58
label_37e564:
    if (ctx->pc == 0x37E564u) {
        ctx->pc = 0x37E564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E560u;
        // 0x37e564: 0xae03006c  sw          $v1, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E568u;
        goto label_37e568;
    }
    ctx->pc = 0x37E560u;
    SET_GPR_U32(ctx, 31, 0x37E568u);
    ctx->pc = 0x37E564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E560u;
    // 0x37e564: 0xae03006c  sw          $v1, 0x6C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x37E560u, 0x37E568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E568u;
label_37e568:
    // 0x37e568: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x37e568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_37e56c:
    // 0x37e56c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37e56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37e570:
    // 0x37e570: 0xc0e2686  jal         func_389A18
label_37e574:
    if (ctx->pc == 0x37E574u) {
        ctx->pc = 0x37E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E570u;
        // 0x37e574: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E578u;
        goto label_37e578;
    }
    ctx->pc = 0x37E570u;
    SET_GPR_U32(ctx, 31, 0x37E578u);
    ctx->pc = 0x37E574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E570u;
    // 0x37e574: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x37E570u, 0x37E578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E578u;
label_37e578:
    // 0x37e578: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x37e578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_37e57c:
    // 0x37e57c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x37e57cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_37e580:
    // 0x37e580: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x37e580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_37e584:
    // 0x37e584: 0x50400052  beql        $v0, $zero, . + 4 + (0x52 << 2)
label_37e588:
    if (ctx->pc == 0x37E588u) {
        ctx->pc = 0x37E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E584u;
        // 0x37e588: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E58Cu;
        goto label_37e58c;
    }
    ctx->pc = 0x37E584u;
    {
        const bool branch_taken_0x37e584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e584) {
            ctx->pc = 0x37E588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37E584u;
            // 0x37e588: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37E6D0u;
            goto label_37e6d0;
        }
    }
    ctx->pc = 0x37E58Cu;
label_37e58c:
    // 0x37e58c: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x37e58cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37e590:
    // 0x37e590: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x37e590u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_37e594:
    // 0x37e594: 0x10e00023  beqz        $a3, . + 4 + (0x23 << 2)
label_37e598:
    if (ctx->pc == 0x37E598u) {
        ctx->pc = 0x37E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E594u;
        // 0x37e598: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E59Cu;
        goto label_37e59c;
    }
    ctx->pc = 0x37E594u;
    {
        const bool branch_taken_0x37e594 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E594u;
        // 0x37e598: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e594) {
            ctx->pc = 0x37E624u;
            goto label_37e624;
        }
    }
    ctx->pc = 0x37E59Cu;
label_37e59c:
    // 0x37e59c: 0x8cf10004  lw          $s1, 0x4($a3)
    ctx->pc = 0x37e59cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_37e5a0:
    // 0x37e5a0: 0xc0e2686  jal         func_389A18
label_37e5a4:
    if (ctx->pc == 0x37E5A4u) {
        ctx->pc = 0x37E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E5A0u;
        // 0x37e5a4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E5A8u;
        goto label_37e5a8;
    }
    ctx->pc = 0x37E5A0u;
    SET_GPR_U32(ctx, 31, 0x37E5A8u);
    ctx->pc = 0x37E5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E5A0u;
    // 0x37e5a4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x37E5A0u, 0x37E5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E5A8u;
label_37e5a8:
    // 0x37e5a8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37e5a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37e5ac:
    // 0x37e5ac: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x37e5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_37e5b0:
    // 0x37e5b0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x37e5b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_37e5b4:
    // 0x37e5b4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x37e5b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_37e5b8:
    // 0x37e5b8: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x37e5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_37e5bc:
    // 0x37e5bc: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x37e5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_37e5c0:
    // 0x37e5c0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x37e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_37e5c4:
    // 0x37e5c4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x37e5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_37e5c8:
    // 0x37e5c8: 0x2463eed0  addiu       $v1, $v1, -0x1130
    ctx->pc = 0x37e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962896));
label_37e5cc:
    // 0x37e5cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37e5d0:
    // 0x37e5d0: 0xace30048  sw          $v1, 0x48($a3)
    ctx->pc = 0x37e5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 3));
label_37e5d4:
    // 0x37e5d4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x37e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_37e5d8:
    // 0x37e5d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37e5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37e5dc:
    // 0x37e5dc: 0xc0e3396  jal         func_38CE58
label_37e5e0:
    if (ctx->pc == 0x37E5E0u) {
        ctx->pc = 0x37E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E5DCu;
        // 0x37e5e0: 0xae03006c  sw          $v1, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E5E4u;
        goto label_37e5e4;
    }
    ctx->pc = 0x37E5DCu;
    SET_GPR_U32(ctx, 31, 0x37E5E4u);
    ctx->pc = 0x37E5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E5DCu;
    // 0x37e5e0: 0xae03006c  sw          $v1, 0x6C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x37E5DCu, 0x37E5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E5E4u;
label_37e5e4:
    // 0x37e5e4: 0xc0e2962  jal         func_38A588
label_37e5e8:
    if (ctx->pc == 0x37E5E8u) {
        ctx->pc = 0x37E5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E5E4u;
        // 0x37e5e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E5ECu;
        goto label_37e5ec;
    }
    ctx->pc = 0x37E5E4u;
    SET_GPR_U32(ctx, 31, 0x37E5ECu);
    ctx->pc = 0x37E5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E5E4u;
    // 0x37e5e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A588u, 0x37E5E4u, 0x37E5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E5ECu;
label_37e5ec:
    // 0x37e5ec: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x37e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_37e5f0:
    // 0x37e5f0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x37e5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_37e5f4:
    // 0x37e5f4: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x37e5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_37e5f8:
    // 0x37e5f8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x37e5f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_37e5fc:
    // 0x37e5fc: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x37e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_37e600:
    // 0x37e600: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37e600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37e604:
    // 0x37e604: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x37e604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_37e608:
    // 0x37e608: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37e608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37e60c:
    // 0x37e60c: 0xc0e3396  jal         func_38CE58
label_37e610:
    if (ctx->pc == 0x37E610u) {
        ctx->pc = 0x37E610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E60Cu;
        // 0x37e610: 0xae03006c  sw          $v1, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E614u;
        goto label_37e614;
    }
    ctx->pc = 0x37E60Cu;
    SET_GPR_U32(ctx, 31, 0x37E614u);
    ctx->pc = 0x37E610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E60Cu;
    // 0x37e610: 0xae03006c  sw          $v1, 0x6C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x37E60Cu, 0x37E614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E614u;
label_37e614:
    // 0x37e614: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x37e614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_37e618:
    // 0x37e618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37e618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37e61c:
    // 0x37e61c: 0xc0e2686  jal         func_389A18
label_37e620:
    if (ctx->pc == 0x37E620u) {
        ctx->pc = 0x37E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E61Cu;
        // 0x37e620: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E624u;
        goto label_37e624;
    }
    ctx->pc = 0x37E61Cu;
    SET_GPR_U32(ctx, 31, 0x37E624u);
    ctx->pc = 0x37E620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E61Cu;
    // 0x37e620: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x37E61Cu, 0x37E624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E624u;
label_37e624:
    // 0x37e624: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x37e624u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_37e628:
    // 0x37e628: 0x10e00023  beqz        $a3, . + 4 + (0x23 << 2)
label_37e62c:
    if (ctx->pc == 0x37E62Cu) {
        ctx->pc = 0x37E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E628u;
        // 0x37e62c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E630u;
        goto label_37e630;
    }
    ctx->pc = 0x37E628u;
    {
        const bool branch_taken_0x37e628 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E628u;
        // 0x37e62c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e628) {
            ctx->pc = 0x37E6B8u;
            goto label_37e6b8;
        }
    }
    ctx->pc = 0x37E630u;
label_37e630:
    // 0x37e630: 0x8cf10004  lw          $s1, 0x4($a3)
    ctx->pc = 0x37e630u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_37e634:
    // 0x37e634: 0xc0e2686  jal         func_389A18
label_37e638:
    if (ctx->pc == 0x37E638u) {
        ctx->pc = 0x37E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E634u;
        // 0x37e638: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E63Cu;
        goto label_37e63c;
    }
    ctx->pc = 0x37E634u;
    SET_GPR_U32(ctx, 31, 0x37E63Cu);
    ctx->pc = 0x37E638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E634u;
    // 0x37e638: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x37E634u, 0x37E63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E63Cu;
label_37e63c:
    // 0x37e63c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37e63cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37e640:
    // 0x37e640: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x37e640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_37e644:
    // 0x37e644: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x37e644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_37e648:
    // 0x37e648: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x37e648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_37e64c:
    // 0x37e64c: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x37e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_37e650:
    // 0x37e650: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x37e650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_37e654:
    // 0x37e654: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x37e654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_37e658:
    // 0x37e658: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x37e658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_37e65c:
    // 0x37e65c: 0x2463eed0  addiu       $v1, $v1, -0x1130
    ctx->pc = 0x37e65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962896));
label_37e660:
    // 0x37e660: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37e660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37e664:
    // 0x37e664: 0xace30048  sw          $v1, 0x48($a3)
    ctx->pc = 0x37e664u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 3));
label_37e668:
    // 0x37e668: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x37e668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_37e66c:
    // 0x37e66c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37e66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37e670:
    // 0x37e670: 0xc0e3396  jal         func_38CE58
label_37e674:
    if (ctx->pc == 0x37E674u) {
        ctx->pc = 0x37E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E670u;
        // 0x37e674: 0xae03006c  sw          $v1, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E678u;
        goto label_37e678;
    }
    ctx->pc = 0x37E670u;
    SET_GPR_U32(ctx, 31, 0x37E678u);
    ctx->pc = 0x37E674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E670u;
    // 0x37e674: 0xae03006c  sw          $v1, 0x6C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x37E670u, 0x37E678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E678u;
label_37e678:
    // 0x37e678: 0xc0e2962  jal         func_38A588
label_37e67c:
    if (ctx->pc == 0x37E67Cu) {
        ctx->pc = 0x37E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E678u;
        // 0x37e67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E680u;
        goto label_37e680;
    }
    ctx->pc = 0x37E678u;
    SET_GPR_U32(ctx, 31, 0x37E680u);
    ctx->pc = 0x37E67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E678u;
    // 0x37e67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A588u, 0x37E678u, 0x37E680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E680u;
label_37e680:
    // 0x37e680: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x37e680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_37e684:
    // 0x37e684: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x37e684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_37e688:
    // 0x37e688: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x37e688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_37e68c:
    // 0x37e68c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x37e68cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_37e690:
    // 0x37e690: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x37e690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_37e694:
    // 0x37e694: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37e694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_37e698:
    // 0x37e698: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x37e698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_37e69c:
    // 0x37e69c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37e69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37e6a0:
    // 0x37e6a0: 0xc0e3396  jal         func_38CE58
label_37e6a4:
    if (ctx->pc == 0x37E6A4u) {
        ctx->pc = 0x37E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E6A0u;
        // 0x37e6a4: 0xae03006c  sw          $v1, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E6A8u;
        goto label_37e6a8;
    }
    ctx->pc = 0x37E6A0u;
    SET_GPR_U32(ctx, 31, 0x37E6A8u);
    ctx->pc = 0x37E6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E6A0u;
    // 0x37e6a4: 0xae03006c  sw          $v1, 0x6C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CE58u, 0x37E6A0u, 0x37E6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E6A8u;
label_37e6a8:
    // 0x37e6a8: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x37e6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_37e6ac:
    // 0x37e6ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37e6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37e6b0:
    // 0x37e6b0: 0xc0e2686  jal         func_389A18
label_37e6b4:
    if (ctx->pc == 0x37E6B4u) {
        ctx->pc = 0x37E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E6B0u;
        // 0x37e6b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E6B8u;
        goto label_37e6b8;
    }
    ctx->pc = 0x37E6B0u;
    SET_GPR_U32(ctx, 31, 0x37E6B8u);
    ctx->pc = 0x37E6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E6B0u;
    // 0x37e6b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x37E6B0u, 0x37E6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E6B8u;
label_37e6b8:
    // 0x37e6b8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x37e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_37e6bc:
    // 0x37e6bc: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x37e6bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_37e6c0:
    // 0x37e6c0: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x37e6c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_37e6c4:
    // 0x37e6c4: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
label_37e6c8:
    if (ctx->pc == 0x37E6C8u) {
        ctx->pc = 0x37E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E6C4u;
        // 0x37e6c8: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E6CCu;
        goto label_37e6cc;
    }
    ctx->pc = 0x37E6C4u;
    {
        const bool branch_taken_0x37e6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37E6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E6C4u;
        // 0x37e6c8: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e6c4) {
            ctx->pc = 0x37E590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37e590;
        }
    }
    ctx->pc = 0x37E6CCu;
label_37e6cc:
    // 0x37e6cc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x37e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_37e6d0:
    // 0x37e6d0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x37e6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_37e6d4:
    // 0x37e6d4: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x37e6d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_37e6d8:
    // 0x37e6d8: 0x1440ff7b  bnez        $v0, . + 4 + (-0x85 << 2)
label_37e6dc:
    if (ctx->pc == 0x37E6DCu) {
        ctx->pc = 0x37E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E6D8u;
        // 0x37e6dc: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E6E0u;
        goto label_37e6e0;
    }
    ctx->pc = 0x37E6D8u;
    {
        const bool branch_taken_0x37e6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E6D8u;
        // 0x37e6dc: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e6d8) {
            ctx->pc = 0x37E4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37e4c8;
        }
    }
    ctx->pc = 0x37E6E0u;
label_37e6e0:
    // 0x37e6e0: 0xc0e06de  jal         func_381B78
label_37e6e4:
    if (ctx->pc == 0x37E6E4u) {
        ctx->pc = 0x37E6E8u;
        goto label_37e6e8;
    }
    ctx->pc = 0x37E6E0u;
    SET_GPR_U32(ctx, 31, 0x37E6E8u);
    ctx->pc = 0x381B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381B78u, 0x37E6E0u, 0x37E6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E6E8u;
label_37e6e8:
    // 0x37e6e8: 0x10000080  b           . + 4 + (0x80 << 2)
label_37e6ec:
    if (ctx->pc == 0x37E6ECu) {
        ctx->pc = 0x37E6F0u;
        goto label_37e6f0;
    }
    ctx->pc = 0x37E6E8u;
    {
        const bool branch_taken_0x37e6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e6e8) {
            ctx->pc = 0x37E8ECu;
            goto label_37e8ec;
        }
    }
    ctx->pc = 0x37E6F0u;
label_37e6f0:
    // 0x37e6f0: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
label_37e6f4:
    if (ctx->pc == 0x37E6F4u) {
        ctx->pc = 0x37E6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E6F0u;
        // 0x37e6f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E6F8u;
        goto label_37e6f8;
    }
    ctx->pc = 0x37E6F0u;
    {
        const bool branch_taken_0x37e6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E6F0u;
        // 0x37e6f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e6f0) {
            ctx->pc = 0x37E8ECu;
            goto label_37e8ec;
        }
    }
    ctx->pc = 0x37E6F8u;
label_37e6f8:
    // 0x37e6f8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x37e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_37e6fc:
    // 0x37e6fc: 0x24170024  addiu       $s7, $zero, 0x24
    ctx->pc = 0x37e6fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_37e700:
    // 0x37e700: 0x2454eed0  addiu       $s4, $v0, -0x1130
    ctx->pc = 0x37e700u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962896));
label_37e704:
    // 0x37e704: 0x971818  mult        $v1, $a0, $s7
    ctx->pc = 0x37e704u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_37e708:
    // 0x37e708: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x37e708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_37e70c:
    // 0x37e70c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x37e70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_37e710:
    // 0x37e710: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x37e710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_37e714:
    // 0x37e714: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x37e714u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37e718:
    // 0x37e718: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x37e718u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_37e71c:
    // 0x37e71c: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_37e720:
    if (ctx->pc == 0x37E720u) {
        ctx->pc = 0x37E720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E71Cu;
        // 0x37e720: 0x2655001c  addiu       $s5, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E724u;
        goto label_37e724;
    }
    ctx->pc = 0x37E71Cu;
    {
        const bool branch_taken_0x37e71c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E71Cu;
        // 0x37e720: 0x2655001c  addiu       $s5, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e71c) {
            ctx->pc = 0x37E754u;
            goto label_37e754;
        }
    }
    ctx->pc = 0x37E724u;
label_37e724:
    // 0x37e724: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37e724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37e728:
    // 0x37e728: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x37e728u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_37e72c:
    // 0x37e72c: 0xc0e2686  jal         func_389A18
label_37e730:
    if (ctx->pc == 0x37E730u) {
        ctx->pc = 0x37E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E72Cu;
        // 0x37e730: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E734u;
        goto label_37e734;
    }
    ctx->pc = 0x37E72Cu;
    SET_GPR_U32(ctx, 31, 0x37E734u);
    ctx->pc = 0x37E730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E72Cu;
    // 0x37e730: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x37E72Cu, 0x37E734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E734u;
label_37e734:
    // 0x37e734: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37e734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37e738:
    // 0x37e738: 0xae340048  sw          $s4, 0x48($s1)
    ctx->pc = 0x37e738u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 20));
label_37e73c:
    // 0x37e73c: 0xc0e2962  jal         func_38A588
label_37e740:
    if (ctx->pc == 0x37E740u) {
        ctx->pc = 0x37E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E73Cu;
        // 0x37e740: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E744u;
        goto label_37e744;
    }
    ctx->pc = 0x37E73Cu;
    SET_GPR_U32(ctx, 31, 0x37E744u);
    ctx->pc = 0x37E740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E73Cu;
    // 0x37e740: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A588u, 0x37E73Cu, 0x37E744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E744u;
label_37e744:
    // 0x37e744: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x37e744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_37e748:
    // 0x37e748: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37e748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37e74c:
    // 0x37e74c: 0xc0e2686  jal         func_389A18
label_37e750:
    if (ctx->pc == 0x37E750u) {
        ctx->pc = 0x37E750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E74Cu;
        // 0x37e750: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E754u;
        goto label_37e754;
    }
    ctx->pc = 0x37E74Cu;
    SET_GPR_U32(ctx, 31, 0x37E754u);
    ctx->pc = 0x37E750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E74Cu;
    // 0x37e750: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x37E74Cu, 0x37E754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E754u;
label_37e754:
    // 0x37e754: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x37e754u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_37e758:
    // 0x37e758: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x37e758u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_37e75c:
    // 0x37e75c: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_37e760:
    if (ctx->pc == 0x37E760u) {
        ctx->pc = 0x37E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E75Cu;
        // 0x37e760: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E764u;
        goto label_37e764;
    }
    ctx->pc = 0x37E75Cu;
    {
        const bool branch_taken_0x37e75c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E75Cu;
        // 0x37e760: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e75c) {
            ctx->pc = 0x37E794u;
            goto label_37e794;
        }
    }
    ctx->pc = 0x37E764u;
label_37e764:
    // 0x37e764: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37e764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37e768:
    // 0x37e768: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x37e768u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_37e76c:
    // 0x37e76c: 0xc0e2686  jal         func_389A18
label_37e770:
    if (ctx->pc == 0x37E770u) {
        ctx->pc = 0x37E770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E76Cu;
        // 0x37e770: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E774u;
        goto label_37e774;
    }
    ctx->pc = 0x37E76Cu;
    SET_GPR_U32(ctx, 31, 0x37E774u);
    ctx->pc = 0x37E770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E76Cu;
    // 0x37e770: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x37E76Cu, 0x37E774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E774u;
label_37e774:
    // 0x37e774: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37e774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37e778:
    // 0x37e778: 0xae340048  sw          $s4, 0x48($s1)
    ctx->pc = 0x37e778u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 20));
label_37e77c:
    // 0x37e77c: 0xc0e2962  jal         func_38A588
label_37e780:
    if (ctx->pc == 0x37E780u) {
        ctx->pc = 0x37E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E77Cu;
        // 0x37e780: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E784u;
        goto label_37e784;
    }
    ctx->pc = 0x37E77Cu;
    SET_GPR_U32(ctx, 31, 0x37E784u);
    ctx->pc = 0x37E780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E77Cu;
    // 0x37e780: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A588u, 0x37E77Cu, 0x37E784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E784u;
label_37e784:
    // 0x37e784: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x37e784u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_37e788:
    // 0x37e788: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37e788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37e78c:
    // 0x37e78c: 0xc0e2686  jal         func_389A18
label_37e790:
    if (ctx->pc == 0x37E790u) {
        ctx->pc = 0x37E790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E78Cu;
        // 0x37e790: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E794u;
        goto label_37e794;
    }
    ctx->pc = 0x37E78Cu;
    SET_GPR_U32(ctx, 31, 0x37E794u);
    ctx->pc = 0x37E790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E78Cu;
    // 0x37e790: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x37E78Cu, 0x37E794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E794u;
label_37e794:
    // 0x37e794: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x37e794u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_37e798:
    // 0x37e798: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x37e798u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_37e79c:
    // 0x37e79c: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_37e7a0:
    if (ctx->pc == 0x37E7A0u) {
        ctx->pc = 0x37E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E79Cu;
        // 0x37e7a0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E7A4u;
        goto label_37e7a4;
    }
    ctx->pc = 0x37E79Cu;
    {
        const bool branch_taken_0x37e79c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E79Cu;
        // 0x37e7a0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e79c) {
            ctx->pc = 0x37E7D4u;
            goto label_37e7d4;
        }
    }
    ctx->pc = 0x37E7A4u;
label_37e7a4:
    // 0x37e7a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37e7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37e7a8:
    // 0x37e7a8: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x37e7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_37e7ac:
    // 0x37e7ac: 0xc0e2686  jal         func_389A18
label_37e7b0:
    if (ctx->pc == 0x37E7B0u) {
        ctx->pc = 0x37E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E7ACu;
        // 0x37e7b0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E7B4u;
        goto label_37e7b4;
    }
    ctx->pc = 0x37E7ACu;
    SET_GPR_U32(ctx, 31, 0x37E7B4u);
    ctx->pc = 0x37E7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E7ACu;
    // 0x37e7b0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x37E7ACu, 0x37E7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E7B4u;
label_37e7b4:
    // 0x37e7b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37e7b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37e7b8:
    // 0x37e7b8: 0xae340048  sw          $s4, 0x48($s1)
    ctx->pc = 0x37e7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 20));
label_37e7bc:
    // 0x37e7bc: 0xc0e2962  jal         func_38A588
label_37e7c0:
    if (ctx->pc == 0x37E7C0u) {
        ctx->pc = 0x37E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E7BCu;
        // 0x37e7c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E7C4u;
        goto label_37e7c4;
    }
    ctx->pc = 0x37E7BCu;
    SET_GPR_U32(ctx, 31, 0x37E7C4u);
    ctx->pc = 0x37E7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E7BCu;
    // 0x37e7c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A588u, 0x37E7BCu, 0x37E7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E7C4u;
label_37e7c4:
    // 0x37e7c4: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x37e7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_37e7c8:
    // 0x37e7c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37e7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37e7cc:
    // 0x37e7cc: 0xc0e2686  jal         func_389A18
label_37e7d0:
    if (ctx->pc == 0x37E7D0u) {
        ctx->pc = 0x37E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E7CCu;
        // 0x37e7d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E7D4u;
        goto label_37e7d4;
    }
    ctx->pc = 0x37E7CCu;
    SET_GPR_U32(ctx, 31, 0x37E7D4u);
    ctx->pc = 0x37E7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E7CCu;
    // 0x37e7d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x37E7CCu, 0x37E7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E7D4u;
label_37e7d4:
    // 0x37e7d4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x37e7d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_37e7d8:
    // 0x37e7d8: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x37e7d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_37e7dc:
    // 0x37e7dc: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_37e7e0:
    if (ctx->pc == 0x37E7E0u) {
        ctx->pc = 0x37E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E7DCu;
        // 0x37e7e0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E7E4u;
        goto label_37e7e4;
    }
    ctx->pc = 0x37E7DCu;
    {
        const bool branch_taken_0x37e7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E7DCu;
        // 0x37e7e0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e7dc) {
            ctx->pc = 0x37E8D8u;
            goto label_37e8d8;
        }
    }
    ctx->pc = 0x37E7E4u;
label_37e7e4:
    // 0x37e7e4: 0x0  nop
    ctx->pc = 0x37e7e4u;
    // NOP
label_37e7e8:
    // 0x37e7e8: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x37e7e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_37e7ec:
    // 0x37e7ec: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_37e7f0:
    if (ctx->pc == 0x37E7F0u) {
        ctx->pc = 0x37E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E7ECu;
        // 0x37e7f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E7F4u;
        goto label_37e7f4;
    }
    ctx->pc = 0x37E7ECu;
    {
        const bool branch_taken_0x37e7ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E7ECu;
        // 0x37e7f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e7ec) {
            ctx->pc = 0x37E820u;
            goto label_37e820;
        }
    }
    ctx->pc = 0x37E7F4u;
label_37e7f4:
    // 0x37e7f4: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x37e7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_37e7f8:
    // 0x37e7f8: 0xc0e2686  jal         func_389A18
label_37e7fc:
    if (ctx->pc == 0x37E7FCu) {
        ctx->pc = 0x37E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E7F8u;
        // 0x37e7fc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E800u;
        goto label_37e800;
    }
    ctx->pc = 0x37E7F8u;
    SET_GPR_U32(ctx, 31, 0x37E800u);
    ctx->pc = 0x37E7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E7F8u;
    // 0x37e7fc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x37E7F8u, 0x37E800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E800u;
label_37e800:
    // 0x37e800: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37e800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37e804:
    // 0x37e804: 0xae340048  sw          $s4, 0x48($s1)
    ctx->pc = 0x37e804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 20));
label_37e808:
    // 0x37e808: 0xc0e2962  jal         func_38A588
label_37e80c:
    if (ctx->pc == 0x37E80Cu) {
        ctx->pc = 0x37E80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E808u;
        // 0x37e80c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E810u;
        goto label_37e810;
    }
    ctx->pc = 0x37E808u;
    SET_GPR_U32(ctx, 31, 0x37E810u);
    ctx->pc = 0x37E80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E808u;
    // 0x37e80c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A588u, 0x37E808u, 0x37E810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E810u;
label_37e810:
    // 0x37e810: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x37e810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_37e814:
    // 0x37e814: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37e814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37e818:
    // 0x37e818: 0xc0e2686  jal         func_389A18
label_37e81c:
    if (ctx->pc == 0x37E81Cu) {
        ctx->pc = 0x37E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E818u;
        // 0x37e81c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E820u;
        goto label_37e820;
    }
    ctx->pc = 0x37E818u;
    SET_GPR_U32(ctx, 31, 0x37E820u);
    ctx->pc = 0x37E81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E818u;
    // 0x37e81c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x37E818u, 0x37E820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E820u;
label_37e820:
    // 0x37e820: 0x8e710004  lw          $s1, 0x4($s3)
    ctx->pc = 0x37e820u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_37e824:
    // 0x37e824: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_37e828:
    if (ctx->pc == 0x37E828u) {
        ctx->pc = 0x37E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E824u;
        // 0x37e828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E82Cu;
        goto label_37e82c;
    }
    ctx->pc = 0x37E824u;
    {
        const bool branch_taken_0x37e824 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E824u;
        // 0x37e828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e824) {
            ctx->pc = 0x37E858u;
            goto label_37e858;
        }
    }
    ctx->pc = 0x37E82Cu;
label_37e82c:
    // 0x37e82c: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x37e82cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_37e830:
    // 0x37e830: 0xc0e2686  jal         func_389A18
label_37e834:
    if (ctx->pc == 0x37E834u) {
        ctx->pc = 0x37E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E830u;
        // 0x37e834: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E838u;
        goto label_37e838;
    }
    ctx->pc = 0x37E830u;
    SET_GPR_U32(ctx, 31, 0x37E838u);
    ctx->pc = 0x37E834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E830u;
    // 0x37e834: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x37E830u, 0x37E838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E838u;
label_37e838:
    // 0x37e838: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37e838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37e83c:
    // 0x37e83c: 0xae340048  sw          $s4, 0x48($s1)
    ctx->pc = 0x37e83cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 20));
label_37e840:
    // 0x37e840: 0xc0e2962  jal         func_38A588
label_37e844:
    if (ctx->pc == 0x37E844u) {
        ctx->pc = 0x37E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E840u;
        // 0x37e844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E848u;
        goto label_37e848;
    }
    ctx->pc = 0x37E840u;
    SET_GPR_U32(ctx, 31, 0x37E848u);
    ctx->pc = 0x37E844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E840u;
    // 0x37e844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A588u, 0x37E840u, 0x37E848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E848u;
label_37e848:
    // 0x37e848: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x37e848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_37e84c:
    // 0x37e84c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37e84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37e850:
    // 0x37e850: 0xc0e2686  jal         func_389A18
label_37e854:
    if (ctx->pc == 0x37E854u) {
        ctx->pc = 0x37E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E850u;
        // 0x37e854: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E858u;
        goto label_37e858;
    }
    ctx->pc = 0x37E850u;
    SET_GPR_U32(ctx, 31, 0x37E858u);
    ctx->pc = 0x37E854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E850u;
    // 0x37e854: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x37E850u, 0x37E858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E858u;
label_37e858:
    // 0x37e858: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x37e858u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_37e85c:
    // 0x37e85c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_37e860:
    if (ctx->pc == 0x37E860u) {
        ctx->pc = 0x37E860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E85Cu;
        // 0x37e860: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E864u;
        goto label_37e864;
    }
    ctx->pc = 0x37E85Cu;
    {
        const bool branch_taken_0x37e85c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E85Cu;
        // 0x37e860: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e85c) {
            ctx->pc = 0x37E890u;
            goto label_37e890;
        }
    }
    ctx->pc = 0x37E864u;
label_37e864:
    // 0x37e864: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x37e864u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_37e868:
    // 0x37e868: 0xc0e2686  jal         func_389A18
label_37e86c:
    if (ctx->pc == 0x37E86Cu) {
        ctx->pc = 0x37E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E868u;
        // 0x37e86c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E870u;
        goto label_37e870;
    }
    ctx->pc = 0x37E868u;
    SET_GPR_U32(ctx, 31, 0x37E870u);
    ctx->pc = 0x37E86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E868u;
    // 0x37e86c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x37E868u, 0x37E870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E870u;
label_37e870:
    // 0x37e870: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37e870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37e874:
    // 0x37e874: 0xae340048  sw          $s4, 0x48($s1)
    ctx->pc = 0x37e874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 20));
label_37e878:
    // 0x37e878: 0xc0e2962  jal         func_38A588
label_37e87c:
    if (ctx->pc == 0x37E87Cu) {
        ctx->pc = 0x37E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E878u;
        // 0x37e87c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E880u;
        goto label_37e880;
    }
    ctx->pc = 0x37E878u;
    SET_GPR_U32(ctx, 31, 0x37E880u);
    ctx->pc = 0x37E87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E878u;
    // 0x37e87c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A588u, 0x37E878u, 0x37E880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E880u;
label_37e880:
    // 0x37e880: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x37e880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_37e884:
    // 0x37e884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37e884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37e888:
    // 0x37e888: 0xc0e2686  jal         func_389A18
label_37e88c:
    if (ctx->pc == 0x37E88Cu) {
        ctx->pc = 0x37E88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E888u;
        // 0x37e88c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E890u;
        goto label_37e890;
    }
    ctx->pc = 0x37E888u;
    SET_GPR_U32(ctx, 31, 0x37E890u);
    ctx->pc = 0x37E88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E888u;
    // 0x37e88c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x37E888u, 0x37E890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E890u;
label_37e890:
    // 0x37e890: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x37e890u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_37e894:
    // 0x37e894: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_37e898:
    if (ctx->pc == 0x37E898u) {
        ctx->pc = 0x37E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E894u;
        // 0x37e898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E89Cu;
        goto label_37e89c;
    }
    ctx->pc = 0x37E894u;
    {
        const bool branch_taken_0x37e894 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E894u;
        // 0x37e898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e894) {
            ctx->pc = 0x37E8C8u;
            goto label_37e8c8;
        }
    }
    ctx->pc = 0x37E89Cu;
label_37e89c:
    // 0x37e89c: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x37e89cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_37e8a0:
    // 0x37e8a0: 0xc0e2686  jal         func_389A18
label_37e8a4:
    if (ctx->pc == 0x37E8A4u) {
        ctx->pc = 0x37E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E8A0u;
        // 0x37e8a4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E8A8u;
        goto label_37e8a8;
    }
    ctx->pc = 0x37E8A0u;
    SET_GPR_U32(ctx, 31, 0x37E8A8u);
    ctx->pc = 0x37E8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E8A0u;
    // 0x37e8a4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x37E8A0u, 0x37E8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E8A8u;
label_37e8a8:
    // 0x37e8a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37e8a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37e8ac:
    // 0x37e8ac: 0xae340048  sw          $s4, 0x48($s1)
    ctx->pc = 0x37e8acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 20));
label_37e8b0:
    // 0x37e8b0: 0xc0e2962  jal         func_38A588
label_37e8b4:
    if (ctx->pc == 0x37E8B4u) {
        ctx->pc = 0x37E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E8B0u;
        // 0x37e8b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E8B8u;
        goto label_37e8b8;
    }
    ctx->pc = 0x37E8B0u;
    SET_GPR_U32(ctx, 31, 0x37E8B8u);
    ctx->pc = 0x37E8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E8B0u;
    // 0x37e8b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A588u, 0x37E8B0u, 0x37E8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E8B8u;
label_37e8b8:
    // 0x37e8b8: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x37e8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_37e8bc:
    // 0x37e8bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37e8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37e8c0:
    // 0x37e8c0: 0xc0e2686  jal         func_389A18
label_37e8c4:
    if (ctx->pc == 0x37E8C4u) {
        ctx->pc = 0x37E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E8C0u;
        // 0x37e8c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E8C8u;
        goto label_37e8c8;
    }
    ctx->pc = 0x37E8C0u;
    SET_GPR_U32(ctx, 31, 0x37E8C8u);
    ctx->pc = 0x37E8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E8C0u;
    // 0x37e8c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x37E8C0u, 0x37E8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E8C8u;
label_37e8c8:
    // 0x37e8c8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x37e8c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_37e8cc:
    // 0x37e8cc: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x37e8ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_37e8d0:
    // 0x37e8d0: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
label_37e8d4:
    if (ctx->pc == 0x37E8D4u) {
        ctx->pc = 0x37E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E8D0u;
        // 0x37e8d4: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E8D8u;
        goto label_37e8d8;
    }
    ctx->pc = 0x37E8D0u;
    {
        const bool branch_taken_0x37e8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E8D0u;
        // 0x37e8d4: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e8d0) {
            ctx->pc = 0x37E7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37e7e8;
        }
    }
    ctx->pc = 0x37E8D8u;
label_37e8d8:
    // 0x37e8d8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x37e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_37e8dc:
    // 0x37e8dc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x37e8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_37e8e0:
    // 0x37e8e0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x37e8e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_37e8e4:
    // 0x37e8e4: 0x1440ff88  bnez        $v0, . + 4 + (-0x78 << 2)
label_37e8e8:
    if (ctx->pc == 0x37E8E8u) {
        ctx->pc = 0x37E8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E8E4u;
        // 0x37e8e8: 0x971818  mult        $v1, $a0, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E8ECu;
        goto label_37e8ec;
    }
    ctx->pc = 0x37E8E4u;
    {
        const bool branch_taken_0x37e8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37E8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E8E4u;
        // 0x37e8e8: 0x971818  mult        $v1, $a0, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e8e4) {
            ctx->pc = 0x37E708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37e708;
        }
    }
    ctx->pc = 0x37E8ECu;
label_37e8ec:
    // 0x37e8ec: 0xc1067c6  jal         func_419F18
label_37e8f0:
    if (ctx->pc == 0x37E8F0u) {
        ctx->pc = 0x37E8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E8ECu;
        // 0x37e8f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E8F4u;
        goto label_37e8f4;
    }
    ctx->pc = 0x37E8ECu;
    SET_GPR_U32(ctx, 31, 0x37E8F4u);
    ctx->pc = 0x37E8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E8ECu;
    // 0x37e8f0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419F18u, 0x37E8ECu, 0x37E8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E8F4u;
label_37e8f4:
    // 0x37e8f4: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x37e8f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_37e8f8:
    // 0x37e8f8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x37e8f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_37e8fc:
    // 0x37e8fc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x37e8fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_37e900:
    // 0x37e900: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x37e900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_37e904:
    // 0x37e904: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x37e904u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_37e908:
    // 0x37e908: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x37e908u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_37e90c:
    // 0x37e90c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x37e90cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_37e910:
    // 0x37e910: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x37e910u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37e914:
    // 0x37e914: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x37e914u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37e918:
    // 0x37e918: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x37e918u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37e91c:
    // 0x37e91c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37e91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_37e920:
    // 0x37e920: 0x3e00008  jr          $ra
label_37e924:
    if (ctx->pc == 0x37E924u) {
        ctx->pc = 0x37E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E920u;
        // 0x37e924: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E928u;
        goto label_37e928;
    }
    ctx->pc = 0x37E920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E920u;
        // 0x37e924: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37E928u;
label_37e928:
    // 0x37e928: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37e928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_37e92c:
    // 0x37e92c: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x37e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_37e930:
    // 0x37e930: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x37e930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_37e934:
    // 0x37e934: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x37e934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_37e938:
    // 0x37e938: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37e938u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37e93c:
    // 0x37e93c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x37e93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_37e940:
    // 0x37e940: 0x2429818  mult        $s3, $s2, $v0
    ctx->pc = 0x37e940u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_37e944:
    // 0x37e944: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x37e944u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_37e948:
    // 0x37e948: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x37e948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_37e94c:
    // 0x37e94c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x37e94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_37e950:
    // 0x37e950: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x37e950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_37e954:
    // 0x37e954: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x37e954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_37e958:
    // 0x37e958: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x37e958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_37e95c:
    // 0x37e95c: 0x34a50022  ori         $a1, $a1, 0x22
    ctx->pc = 0x37e95cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34);
label_37e960:
    // 0x37e960: 0x2648821  addu        $s1, $s3, $a0
    ctx->pc = 0x37e960u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_37e964:
    // 0x37e964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37e964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_37e968:
    // 0x37e968: 0x40f809  jalr        $v0
label_37e96c:
    if (ctx->pc == 0x37E96Cu) {
        ctx->pc = 0x37E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E968u;
        // 0x37e96c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E970u;
        goto label_37e970;
    }
    ctx->pc = 0x37E968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37E970u);
        ctx->pc = 0x37E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E968u;
        // 0x37e96c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E968u, 0x37E970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37E970u;
label_37e970:
    // 0x37e970: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37e970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37e974:
    // 0x37e974: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_37e978:
    if (ctx->pc == 0x37E978u) {
        ctx->pc = 0x37E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E974u;
        // 0x37e978: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E97Cu;
        goto label_37e97c;
    }
    ctx->pc = 0x37E974u;
    {
        const bool branch_taken_0x37e974 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E974u;
        // 0x37e978: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e974) {
            ctx->pc = 0x37E9A0u;
            goto label_37e9a0;
        }
    }
    ctx->pc = 0x37E97Cu;
label_37e97c:
    // 0x37e97c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37e97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37e980:
    // 0x37e980: 0xc0bb7e6  jal         func_2EDF98
label_37e984:
    if (ctx->pc == 0x37E984u) {
        ctx->pc = 0x37E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E980u;
        // 0x37e984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E988u;
        goto label_37e988;
    }
    ctx->pc = 0x37E980u;
    SET_GPR_U32(ctx, 31, 0x37E988u);
    ctx->pc = 0x37E984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E980u;
    // 0x37e984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x37E980u, 0x37E988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E988u;
label_37e988:
    // 0x37e988: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x37e988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_37e98c:
    // 0x37e98c: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x37e98cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_37e990:
    // 0x37e990: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x37e990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_37e994:
    // 0x37e994: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x37e994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_37e998:
    // 0x37e998: 0x1000000b  b           . + 4 + (0xB << 2)
label_37e99c:
    if (ctx->pc == 0x37E99Cu) {
        ctx->pc = 0x37E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E998u;
        // 0x37e99c: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E9A0u;
        goto label_37e9a0;
    }
    ctx->pc = 0x37E998u;
    {
        const bool branch_taken_0x37e998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E998u;
        // 0x37e99c: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e998) {
            ctx->pc = 0x37E9C8u;
            goto label_37e9c8;
        }
    }
    ctx->pc = 0x37E9A0u;
label_37e9a0:
    // 0x37e9a0: 0x24020124  addiu       $v0, $zero, 0x124
    ctx->pc = 0x37e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
label_37e9a4:
    // 0x37e9a4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37e9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_37e9a8:
    // 0x37e9a8: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x37e9a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
label_37e9ac:
    // 0x37e9ac: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x37e9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_37e9b0:
    // 0x37e9b0: 0xc1035f6  jal         func_40D7D8
label_37e9b4:
    if (ctx->pc == 0x37E9B4u) {
        ctx->pc = 0x37E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E9B0u;
        // 0x37e9b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E9B8u;
        goto label_37e9b8;
    }
    ctx->pc = 0x37E9B0u;
    SET_GPR_U32(ctx, 31, 0x37E9B8u);
    ctx->pc = 0x37E9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E9B0u;
    // 0x37e9b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x37E9B0u, 0x37E9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E9B8u;
label_37e9b8:
    // 0x37e9b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x37e9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_37e9bc:
    // 0x37e9bc: 0xc103628  jal         func_40D8A0
label_37e9c0:
    if (ctx->pc == 0x37E9C0u) {
        ctx->pc = 0x37E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E9BCu;
        // 0x37e9c0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E9C4u;
        goto label_37e9c4;
    }
    ctx->pc = 0x37E9BCu;
    SET_GPR_U32(ctx, 31, 0x37E9C4u);
    ctx->pc = 0x37E9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E9BCu;
    // 0x37e9c0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x37E9BCu, 0x37E9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E9C4u;
label_37e9c4:
    // 0x37e9c4: 0x0  nop
    ctx->pc = 0x37e9c4u;
    // NOP
label_37e9c8:
    // 0x37e9c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37e9c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37e9cc:
    // 0x37e9cc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x37e9ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37e9d0:
    // 0x37e9d0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x37e9d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_37e9d4:
    // 0x37e9d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37e9d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37e9d8:
    // 0x37e9d8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x37e9d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37e9dc:
    // 0x37e9dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37e9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_37e9e0:
    // 0x37e9e0: 0x3e00008  jr          $ra
label_37e9e4:
    if (ctx->pc == 0x37E9E4u) {
        ctx->pc = 0x37E9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E9E0u;
        // 0x37e9e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E9E8u;
        goto label_37e9e8;
    }
    ctx->pc = 0x37E9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E9E0u;
        // 0x37e9e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37E9E8u;
label_37e9e8:
    // 0x37e9e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x37e9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_37e9ec:
    // 0x37e9ec: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x37e9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_37e9f0:
    // 0x37e9f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37e9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_37e9f4:
    // 0x37e9f4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x37e9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_37e9f8:
    // 0x37e9f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37e9f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37e9fc:
    // 0x37e9fc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x37e9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_37ea00:
    // 0x37ea00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37ea00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_37ea04:
    // 0x37ea04: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x37ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_37ea08:
    // 0x37ea08: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_37ea0c:
    if (ctx->pc == 0x37EA0Cu) {
        ctx->pc = 0x37EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EA08u;
        // 0x37ea0c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37EA10u;
        goto label_37ea10;
    }
    ctx->pc = 0x37EA08u;
    {
        const bool branch_taken_0x37ea08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EA08u;
        // 0x37ea0c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ea08) {
            ctx->pc = 0x37EA90u;
            goto label_37ea90;
        }
    }
    ctx->pc = 0x37EA10u;
label_37ea10:
    // 0x37ea10: 0x24130024  addiu       $s3, $zero, 0x24
    ctx->pc = 0x37ea10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_37ea14:
    // 0x37ea14: 0x2331018  mult        $v0, $s1, $s3
    ctx->pc = 0x37ea14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_37ea18:
    // 0x37ea18: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x37ea18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_37ea1c:
    // 0x37ea1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x37ea1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_37ea20:
    // 0x37ea20: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x37ea20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_37ea24:
    // 0x37ea24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37ea24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37ea28:
    // 0x37ea28: 0xc0dfb52  jal         func_37ED48
label_37ea2c:
    if (ctx->pc == 0x37EA2Cu) {
        ctx->pc = 0x37EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EA28u;
        // 0x37ea2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37EA30u;
        goto label_37ea30;
    }
    ctx->pc = 0x37EA28u;
    SET_GPR_U32(ctx, 31, 0x37EA30u);
    ctx->pc = 0x37EA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EA28u;
    // 0x37ea2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37ED48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37ED48u, 0x37EA28u, 0x37EA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EA30u;
label_37ea30:
    // 0x37ea30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37ea30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37ea34:
    // 0x37ea34: 0xc0dfb52  jal         func_37ED48
label_37ea38:
    if (ctx->pc == 0x37EA38u) {
        ctx->pc = 0x37EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EA34u;
        // 0x37ea38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37EA3Cu;
        goto label_37ea3c;
    }
    ctx->pc = 0x37EA34u;
    SET_GPR_U32(ctx, 31, 0x37EA3Cu);
    ctx->pc = 0x37EA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EA34u;
    // 0x37ea38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37ED48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37ED48u, 0x37EA34u, 0x37EA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EA3Cu;
label_37ea3c:
    // 0x37ea3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37ea3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37ea40:
    // 0x37ea40: 0xc0dfb52  jal         func_37ED48
label_37ea44:
    if (ctx->pc == 0x37EA44u) {
        ctx->pc = 0x37EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EA40u;
        // 0x37ea44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37EA48u;
        goto label_37ea48;
    }
    ctx->pc = 0x37EA40u;
    SET_GPR_U32(ctx, 31, 0x37EA48u);
    ctx->pc = 0x37EA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EA40u;
    // 0x37ea44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37ED48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37ED48u, 0x37EA40u, 0x37EA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EA48u;
label_37ea48:
    // 0x37ea48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37ea48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37ea4c:
    // 0x37ea4c: 0xc0dfb52  jal         func_37ED48
label_37ea50:
    if (ctx->pc == 0x37EA50u) {
        ctx->pc = 0x37EA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EA4Cu;
        // 0x37ea50: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37EA54u;
        goto label_37ea54;
    }
    ctx->pc = 0x37EA4Cu;
    SET_GPR_U32(ctx, 31, 0x37EA54u);
    ctx->pc = 0x37EA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EA4Cu;
    // 0x37ea50: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37ED48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37ED48u, 0x37EA4Cu, 0x37EA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EA54u;
label_37ea54:
    // 0x37ea54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37ea54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37ea58:
    // 0x37ea58: 0xc0dfb52  jal         func_37ED48
label_37ea5c:
    if (ctx->pc == 0x37EA5Cu) {
        ctx->pc = 0x37EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EA58u;
        // 0x37ea5c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37EA60u;
        goto label_37ea60;
    }
    ctx->pc = 0x37EA58u;
    SET_GPR_U32(ctx, 31, 0x37EA60u);
    ctx->pc = 0x37EA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EA58u;
    // 0x37ea5c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37ED48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37ED48u, 0x37EA58u, 0x37EA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EA60u;
label_37ea60:
    // 0x37ea60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37ea60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37ea64:
    // 0x37ea64: 0xc0dfb52  jal         func_37ED48
label_37ea68:
    if (ctx->pc == 0x37EA68u) {
        ctx->pc = 0x37EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EA64u;
        // 0x37ea68: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37EA6Cu;
        goto label_37ea6c;
    }
    ctx->pc = 0x37EA64u;
    SET_GPR_U32(ctx, 31, 0x37EA6Cu);
    ctx->pc = 0x37EA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EA64u;
    // 0x37ea68: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37ED48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37ED48u, 0x37EA64u, 0x37EA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EA6Cu;
label_37ea6c:
    // 0x37ea6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37ea6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37ea70:
    // 0x37ea70: 0xc0dfb52  jal         func_37ED48
label_37ea74:
    if (ctx->pc == 0x37EA74u) {
        ctx->pc = 0x37EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EA70u;
        // 0x37ea74: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37EA78u;
        goto label_37ea78;
    }
    ctx->pc = 0x37EA70u;
    SET_GPR_U32(ctx, 31, 0x37EA78u);
    ctx->pc = 0x37EA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EA70u;
    // 0x37ea74: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37ED48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37ED48u, 0x37EA70u, 0x37EA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EA78u;
label_37ea78:
    // 0x37ea78: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x37ea78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_37ea7c:
    // 0x37ea7c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x37ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_37ea80:
    // 0x37ea80: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x37ea80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_37ea84:
    // 0x37ea84: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_37ea88:
    if (ctx->pc == 0x37EA88u) {
        ctx->pc = 0x37EA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EA84u;
        // 0x37ea88: 0x2331018  mult        $v0, $s1, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x37EA8Cu;
        goto label_37ea8c;
    }
    ctx->pc = 0x37EA84u;
    {
        const bool branch_taken_0x37ea84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37EA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EA84u;
        // 0x37ea88: 0x2331018  mult        $v0, $s1, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ea84) {
            ctx->pc = 0x37EA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37ea18;
        }
    }
    ctx->pc = 0x37EA8Cu;
label_37ea8c:
    // 0x37ea8c: 0x0  nop
    ctx->pc = 0x37ea8cu;
    // NOP
label_37ea90:
    // 0x37ea90: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x37ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_37ea94:
    // 0x37ea94: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x37ea94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_37ea98:
    // 0x37ea98: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x37ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_37ea9c:
    // 0x37ea9c: 0x60f809  jalr        $v1
label_37eaa0:
    if (ctx->pc == 0x37EAA0u) {
        ctx->pc = 0x37EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EA9Cu;
        // 0x37eaa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37EAA4u;
        goto label_37eaa4;
    }
    ctx->pc = 0x37EA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x37EAA4u);
        ctx->pc = 0x37EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EA9Cu;
        // 0x37eaa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37EA9Cu, 0x37EAA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37EAA4u;
label_37eaa4:
    // 0x37eaa4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x37eaa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37eaa8:
    // 0x37eaa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37eaac:
    // 0x37eaac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37eaacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37eab0:
    // 0x37eab0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37eab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37eab4:
    // 0x37eab4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x37eab4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37eab8:
    // 0x37eab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37eab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37eabc:
    // 0x37eabc: 0x3e00008  jr          $ra
label_37eac0:
    if (ctx->pc == 0x37EAC0u) {
        ctx->pc = 0x37EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EABCu;
        // 0x37eac0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37EAC4u;
        goto label_37eac4;
    }
    ctx->pc = 0x37EABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EABCu;
        // 0x37eac0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37EABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37EAC4u;
label_37eac4:
    // 0x37eac4: 0x0  nop
    ctx->pc = 0x37eac4u;
    // NOP
    ctx->pc = 0x37eac8u;
}
