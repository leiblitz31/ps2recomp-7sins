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

// Function: sub_002CE020
// Address: 0x2ce020 - 0x2cef00
void sub_002CE020_0x2ce020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE020_0x2ce020");
#endif

    switch (ctx->pc) {
        case 0x2ce020u: goto label_2ce020;
        case 0x2ce024u: goto label_2ce024;
        case 0x2ce028u: goto label_2ce028;
        case 0x2ce02cu: goto label_2ce02c;
        case 0x2ce030u: goto label_2ce030;
        case 0x2ce034u: goto label_2ce034;
        case 0x2ce038u: goto label_2ce038;
        case 0x2ce03cu: goto label_2ce03c;
        case 0x2ce040u: goto label_2ce040;
        case 0x2ce044u: goto label_2ce044;
        case 0x2ce048u: goto label_2ce048;
        case 0x2ce04cu: goto label_2ce04c;
        case 0x2ce050u: goto label_2ce050;
        case 0x2ce054u: goto label_2ce054;
        case 0x2ce058u: goto label_2ce058;
        case 0x2ce05cu: goto label_2ce05c;
        case 0x2ce060u: goto label_2ce060;
        case 0x2ce064u: goto label_2ce064;
        case 0x2ce068u: goto label_2ce068;
        case 0x2ce06cu: goto label_2ce06c;
        case 0x2ce070u: goto label_2ce070;
        case 0x2ce074u: goto label_2ce074;
        case 0x2ce078u: goto label_2ce078;
        case 0x2ce07cu: goto label_2ce07c;
        case 0x2ce080u: goto label_2ce080;
        case 0x2ce084u: goto label_2ce084;
        case 0x2ce088u: goto label_2ce088;
        case 0x2ce08cu: goto label_2ce08c;
        case 0x2ce090u: goto label_2ce090;
        case 0x2ce094u: goto label_2ce094;
        case 0x2ce098u: goto label_2ce098;
        case 0x2ce09cu: goto label_2ce09c;
        case 0x2ce0a0u: goto label_2ce0a0;
        case 0x2ce0a4u: goto label_2ce0a4;
        case 0x2ce0a8u: goto label_2ce0a8;
        case 0x2ce0acu: goto label_2ce0ac;
        case 0x2ce0b0u: goto label_2ce0b0;
        case 0x2ce0b4u: goto label_2ce0b4;
        case 0x2ce0b8u: goto label_2ce0b8;
        case 0x2ce0bcu: goto label_2ce0bc;
        case 0x2ce0c0u: goto label_2ce0c0;
        case 0x2ce0c4u: goto label_2ce0c4;
        case 0x2ce0c8u: goto label_2ce0c8;
        case 0x2ce0ccu: goto label_2ce0cc;
        case 0x2ce0d0u: goto label_2ce0d0;
        case 0x2ce0d4u: goto label_2ce0d4;
        case 0x2ce0d8u: goto label_2ce0d8;
        case 0x2ce0dcu: goto label_2ce0dc;
        case 0x2ce0e0u: goto label_2ce0e0;
        case 0x2ce0e4u: goto label_2ce0e4;
        case 0x2ce0e8u: goto label_2ce0e8;
        case 0x2ce0ecu: goto label_2ce0ec;
        case 0x2ce0f0u: goto label_2ce0f0;
        case 0x2ce0f4u: goto label_2ce0f4;
        case 0x2ce0f8u: goto label_2ce0f8;
        case 0x2ce0fcu: goto label_2ce0fc;
        case 0x2ce100u: goto label_2ce100;
        case 0x2ce104u: goto label_2ce104;
        case 0x2ce108u: goto label_2ce108;
        case 0x2ce10cu: goto label_2ce10c;
        case 0x2ce110u: goto label_2ce110;
        case 0x2ce114u: goto label_2ce114;
        case 0x2ce118u: goto label_2ce118;
        case 0x2ce11cu: goto label_2ce11c;
        case 0x2ce120u: goto label_2ce120;
        case 0x2ce124u: goto label_2ce124;
        case 0x2ce128u: goto label_2ce128;
        case 0x2ce12cu: goto label_2ce12c;
        case 0x2ce130u: goto label_2ce130;
        case 0x2ce134u: goto label_2ce134;
        case 0x2ce138u: goto label_2ce138;
        case 0x2ce13cu: goto label_2ce13c;
        case 0x2ce140u: goto label_2ce140;
        case 0x2ce144u: goto label_2ce144;
        case 0x2ce148u: goto label_2ce148;
        case 0x2ce14cu: goto label_2ce14c;
        case 0x2ce150u: goto label_2ce150;
        case 0x2ce154u: goto label_2ce154;
        case 0x2ce158u: goto label_2ce158;
        case 0x2ce15cu: goto label_2ce15c;
        case 0x2ce160u: goto label_2ce160;
        case 0x2ce164u: goto label_2ce164;
        case 0x2ce168u: goto label_2ce168;
        case 0x2ce16cu: goto label_2ce16c;
        case 0x2ce170u: goto label_2ce170;
        case 0x2ce174u: goto label_2ce174;
        case 0x2ce178u: goto label_2ce178;
        case 0x2ce17cu: goto label_2ce17c;
        case 0x2ce180u: goto label_2ce180;
        case 0x2ce184u: goto label_2ce184;
        case 0x2ce188u: goto label_2ce188;
        case 0x2ce18cu: goto label_2ce18c;
        case 0x2ce190u: goto label_2ce190;
        case 0x2ce194u: goto label_2ce194;
        case 0x2ce198u: goto label_2ce198;
        case 0x2ce19cu: goto label_2ce19c;
        case 0x2ce1a0u: goto label_2ce1a0;
        case 0x2ce1a4u: goto label_2ce1a4;
        case 0x2ce1a8u: goto label_2ce1a8;
        case 0x2ce1acu: goto label_2ce1ac;
        case 0x2ce1b0u: goto label_2ce1b0;
        case 0x2ce1b4u: goto label_2ce1b4;
        case 0x2ce1b8u: goto label_2ce1b8;
        case 0x2ce1bcu: goto label_2ce1bc;
        case 0x2ce1c0u: goto label_2ce1c0;
        case 0x2ce1c4u: goto label_2ce1c4;
        case 0x2ce1c8u: goto label_2ce1c8;
        case 0x2ce1ccu: goto label_2ce1cc;
        case 0x2ce1d0u: goto label_2ce1d0;
        case 0x2ce1d4u: goto label_2ce1d4;
        case 0x2ce1d8u: goto label_2ce1d8;
        case 0x2ce1dcu: goto label_2ce1dc;
        case 0x2ce1e0u: goto label_2ce1e0;
        case 0x2ce1e4u: goto label_2ce1e4;
        case 0x2ce1e8u: goto label_2ce1e8;
        case 0x2ce1ecu: goto label_2ce1ec;
        case 0x2ce1f0u: goto label_2ce1f0;
        case 0x2ce1f4u: goto label_2ce1f4;
        case 0x2ce1f8u: goto label_2ce1f8;
        case 0x2ce1fcu: goto label_2ce1fc;
        case 0x2ce200u: goto label_2ce200;
        case 0x2ce204u: goto label_2ce204;
        case 0x2ce208u: goto label_2ce208;
        case 0x2ce20cu: goto label_2ce20c;
        case 0x2ce210u: goto label_2ce210;
        case 0x2ce214u: goto label_2ce214;
        case 0x2ce218u: goto label_2ce218;
        case 0x2ce21cu: goto label_2ce21c;
        case 0x2ce220u: goto label_2ce220;
        case 0x2ce224u: goto label_2ce224;
        case 0x2ce228u: goto label_2ce228;
        case 0x2ce22cu: goto label_2ce22c;
        case 0x2ce230u: goto label_2ce230;
        case 0x2ce234u: goto label_2ce234;
        case 0x2ce238u: goto label_2ce238;
        case 0x2ce23cu: goto label_2ce23c;
        case 0x2ce240u: goto label_2ce240;
        case 0x2ce244u: goto label_2ce244;
        case 0x2ce248u: goto label_2ce248;
        case 0x2ce24cu: goto label_2ce24c;
        case 0x2ce250u: goto label_2ce250;
        case 0x2ce254u: goto label_2ce254;
        case 0x2ce258u: goto label_2ce258;
        case 0x2ce25cu: goto label_2ce25c;
        case 0x2ce260u: goto label_2ce260;
        case 0x2ce264u: goto label_2ce264;
        case 0x2ce268u: goto label_2ce268;
        case 0x2ce26cu: goto label_2ce26c;
        case 0x2ce270u: goto label_2ce270;
        case 0x2ce274u: goto label_2ce274;
        case 0x2ce278u: goto label_2ce278;
        case 0x2ce27cu: goto label_2ce27c;
        case 0x2ce280u: goto label_2ce280;
        case 0x2ce284u: goto label_2ce284;
        case 0x2ce288u: goto label_2ce288;
        case 0x2ce28cu: goto label_2ce28c;
        case 0x2ce290u: goto label_2ce290;
        case 0x2ce294u: goto label_2ce294;
        case 0x2ce298u: goto label_2ce298;
        case 0x2ce29cu: goto label_2ce29c;
        case 0x2ce2a0u: goto label_2ce2a0;
        case 0x2ce2a4u: goto label_2ce2a4;
        case 0x2ce2a8u: goto label_2ce2a8;
        case 0x2ce2acu: goto label_2ce2ac;
        case 0x2ce2b0u: goto label_2ce2b0;
        case 0x2ce2b4u: goto label_2ce2b4;
        case 0x2ce2b8u: goto label_2ce2b8;
        case 0x2ce2bcu: goto label_2ce2bc;
        case 0x2ce2c0u: goto label_2ce2c0;
        case 0x2ce2c4u: goto label_2ce2c4;
        case 0x2ce2c8u: goto label_2ce2c8;
        case 0x2ce2ccu: goto label_2ce2cc;
        case 0x2ce2d0u: goto label_2ce2d0;
        case 0x2ce2d4u: goto label_2ce2d4;
        case 0x2ce2d8u: goto label_2ce2d8;
        case 0x2ce2dcu: goto label_2ce2dc;
        case 0x2ce2e0u: goto label_2ce2e0;
        case 0x2ce2e4u: goto label_2ce2e4;
        case 0x2ce2e8u: goto label_2ce2e8;
        case 0x2ce2ecu: goto label_2ce2ec;
        case 0x2ce2f0u: goto label_2ce2f0;
        case 0x2ce2f4u: goto label_2ce2f4;
        case 0x2ce2f8u: goto label_2ce2f8;
        case 0x2ce2fcu: goto label_2ce2fc;
        case 0x2ce300u: goto label_2ce300;
        case 0x2ce304u: goto label_2ce304;
        case 0x2ce308u: goto label_2ce308;
        case 0x2ce30cu: goto label_2ce30c;
        case 0x2ce310u: goto label_2ce310;
        case 0x2ce314u: goto label_2ce314;
        case 0x2ce318u: goto label_2ce318;
        case 0x2ce31cu: goto label_2ce31c;
        case 0x2ce320u: goto label_2ce320;
        case 0x2ce324u: goto label_2ce324;
        case 0x2ce328u: goto label_2ce328;
        case 0x2ce32cu: goto label_2ce32c;
        case 0x2ce330u: goto label_2ce330;
        case 0x2ce334u: goto label_2ce334;
        case 0x2ce338u: goto label_2ce338;
        case 0x2ce33cu: goto label_2ce33c;
        case 0x2ce340u: goto label_2ce340;
        case 0x2ce344u: goto label_2ce344;
        case 0x2ce348u: goto label_2ce348;
        case 0x2ce34cu: goto label_2ce34c;
        case 0x2ce350u: goto label_2ce350;
        case 0x2ce354u: goto label_2ce354;
        case 0x2ce358u: goto label_2ce358;
        case 0x2ce35cu: goto label_2ce35c;
        case 0x2ce360u: goto label_2ce360;
        case 0x2ce364u: goto label_2ce364;
        case 0x2ce368u: goto label_2ce368;
        case 0x2ce36cu: goto label_2ce36c;
        case 0x2ce370u: goto label_2ce370;
        case 0x2ce374u: goto label_2ce374;
        case 0x2ce378u: goto label_2ce378;
        case 0x2ce37cu: goto label_2ce37c;
        case 0x2ce380u: goto label_2ce380;
        case 0x2ce384u: goto label_2ce384;
        case 0x2ce388u: goto label_2ce388;
        case 0x2ce38cu: goto label_2ce38c;
        case 0x2ce390u: goto label_2ce390;
        case 0x2ce394u: goto label_2ce394;
        case 0x2ce398u: goto label_2ce398;
        case 0x2ce39cu: goto label_2ce39c;
        case 0x2ce3a0u: goto label_2ce3a0;
        case 0x2ce3a4u: goto label_2ce3a4;
        case 0x2ce3a8u: goto label_2ce3a8;
        case 0x2ce3acu: goto label_2ce3ac;
        case 0x2ce3b0u: goto label_2ce3b0;
        case 0x2ce3b4u: goto label_2ce3b4;
        case 0x2ce3b8u: goto label_2ce3b8;
        case 0x2ce3bcu: goto label_2ce3bc;
        case 0x2ce3c0u: goto label_2ce3c0;
        case 0x2ce3c4u: goto label_2ce3c4;
        case 0x2ce3c8u: goto label_2ce3c8;
        case 0x2ce3ccu: goto label_2ce3cc;
        case 0x2ce3d0u: goto label_2ce3d0;
        case 0x2ce3d4u: goto label_2ce3d4;
        case 0x2ce3d8u: goto label_2ce3d8;
        case 0x2ce3dcu: goto label_2ce3dc;
        case 0x2ce3e0u: goto label_2ce3e0;
        case 0x2ce3e4u: goto label_2ce3e4;
        case 0x2ce3e8u: goto label_2ce3e8;
        case 0x2ce3ecu: goto label_2ce3ec;
        case 0x2ce3f0u: goto label_2ce3f0;
        case 0x2ce3f4u: goto label_2ce3f4;
        case 0x2ce3f8u: goto label_2ce3f8;
        case 0x2ce3fcu: goto label_2ce3fc;
        case 0x2ce400u: goto label_2ce400;
        case 0x2ce404u: goto label_2ce404;
        case 0x2ce408u: goto label_2ce408;
        case 0x2ce40cu: goto label_2ce40c;
        case 0x2ce410u: goto label_2ce410;
        case 0x2ce414u: goto label_2ce414;
        case 0x2ce418u: goto label_2ce418;
        case 0x2ce41cu: goto label_2ce41c;
        case 0x2ce420u: goto label_2ce420;
        case 0x2ce424u: goto label_2ce424;
        case 0x2ce428u: goto label_2ce428;
        case 0x2ce42cu: goto label_2ce42c;
        case 0x2ce430u: goto label_2ce430;
        case 0x2ce434u: goto label_2ce434;
        case 0x2ce438u: goto label_2ce438;
        case 0x2ce43cu: goto label_2ce43c;
        case 0x2ce440u: goto label_2ce440;
        case 0x2ce444u: goto label_2ce444;
        case 0x2ce448u: goto label_2ce448;
        case 0x2ce44cu: goto label_2ce44c;
        case 0x2ce450u: goto label_2ce450;
        case 0x2ce454u: goto label_2ce454;
        case 0x2ce458u: goto label_2ce458;
        case 0x2ce45cu: goto label_2ce45c;
        case 0x2ce460u: goto label_2ce460;
        case 0x2ce464u: goto label_2ce464;
        case 0x2ce468u: goto label_2ce468;
        case 0x2ce46cu: goto label_2ce46c;
        case 0x2ce470u: goto label_2ce470;
        case 0x2ce474u: goto label_2ce474;
        case 0x2ce478u: goto label_2ce478;
        case 0x2ce47cu: goto label_2ce47c;
        case 0x2ce480u: goto label_2ce480;
        case 0x2ce484u: goto label_2ce484;
        case 0x2ce488u: goto label_2ce488;
        case 0x2ce48cu: goto label_2ce48c;
        case 0x2ce490u: goto label_2ce490;
        case 0x2ce494u: goto label_2ce494;
        case 0x2ce498u: goto label_2ce498;
        case 0x2ce49cu: goto label_2ce49c;
        case 0x2ce4a0u: goto label_2ce4a0;
        case 0x2ce4a4u: goto label_2ce4a4;
        case 0x2ce4a8u: goto label_2ce4a8;
        case 0x2ce4acu: goto label_2ce4ac;
        case 0x2ce4b0u: goto label_2ce4b0;
        case 0x2ce4b4u: goto label_2ce4b4;
        case 0x2ce4b8u: goto label_2ce4b8;
        case 0x2ce4bcu: goto label_2ce4bc;
        case 0x2ce4c0u: goto label_2ce4c0;
        case 0x2ce4c4u: goto label_2ce4c4;
        case 0x2ce4c8u: goto label_2ce4c8;
        case 0x2ce4ccu: goto label_2ce4cc;
        case 0x2ce4d0u: goto label_2ce4d0;
        case 0x2ce4d4u: goto label_2ce4d4;
        case 0x2ce4d8u: goto label_2ce4d8;
        case 0x2ce4dcu: goto label_2ce4dc;
        case 0x2ce4e0u: goto label_2ce4e0;
        case 0x2ce4e4u: goto label_2ce4e4;
        case 0x2ce4e8u: goto label_2ce4e8;
        case 0x2ce4ecu: goto label_2ce4ec;
        case 0x2ce4f0u: goto label_2ce4f0;
        case 0x2ce4f4u: goto label_2ce4f4;
        case 0x2ce4f8u: goto label_2ce4f8;
        case 0x2ce4fcu: goto label_2ce4fc;
        case 0x2ce500u: goto label_2ce500;
        case 0x2ce504u: goto label_2ce504;
        case 0x2ce508u: goto label_2ce508;
        case 0x2ce50cu: goto label_2ce50c;
        case 0x2ce510u: goto label_2ce510;
        case 0x2ce514u: goto label_2ce514;
        case 0x2ce518u: goto label_2ce518;
        case 0x2ce51cu: goto label_2ce51c;
        case 0x2ce520u: goto label_2ce520;
        case 0x2ce524u: goto label_2ce524;
        case 0x2ce528u: goto label_2ce528;
        case 0x2ce52cu: goto label_2ce52c;
        case 0x2ce530u: goto label_2ce530;
        case 0x2ce534u: goto label_2ce534;
        case 0x2ce538u: goto label_2ce538;
        case 0x2ce53cu: goto label_2ce53c;
        case 0x2ce540u: goto label_2ce540;
        case 0x2ce544u: goto label_2ce544;
        case 0x2ce548u: goto label_2ce548;
        case 0x2ce54cu: goto label_2ce54c;
        case 0x2ce550u: goto label_2ce550;
        case 0x2ce554u: goto label_2ce554;
        case 0x2ce558u: goto label_2ce558;
        case 0x2ce55cu: goto label_2ce55c;
        case 0x2ce560u: goto label_2ce560;
        case 0x2ce564u: goto label_2ce564;
        case 0x2ce568u: goto label_2ce568;
        case 0x2ce56cu: goto label_2ce56c;
        case 0x2ce570u: goto label_2ce570;
        case 0x2ce574u: goto label_2ce574;
        case 0x2ce578u: goto label_2ce578;
        case 0x2ce57cu: goto label_2ce57c;
        case 0x2ce580u: goto label_2ce580;
        case 0x2ce584u: goto label_2ce584;
        case 0x2ce588u: goto label_2ce588;
        case 0x2ce58cu: goto label_2ce58c;
        case 0x2ce590u: goto label_2ce590;
        case 0x2ce594u: goto label_2ce594;
        case 0x2ce598u: goto label_2ce598;
        case 0x2ce59cu: goto label_2ce59c;
        case 0x2ce5a0u: goto label_2ce5a0;
        case 0x2ce5a4u: goto label_2ce5a4;
        case 0x2ce5a8u: goto label_2ce5a8;
        case 0x2ce5acu: goto label_2ce5ac;
        case 0x2ce5b0u: goto label_2ce5b0;
        case 0x2ce5b4u: goto label_2ce5b4;
        case 0x2ce5b8u: goto label_2ce5b8;
        case 0x2ce5bcu: goto label_2ce5bc;
        case 0x2ce5c0u: goto label_2ce5c0;
        case 0x2ce5c4u: goto label_2ce5c4;
        case 0x2ce5c8u: goto label_2ce5c8;
        case 0x2ce5ccu: goto label_2ce5cc;
        case 0x2ce5d0u: goto label_2ce5d0;
        case 0x2ce5d4u: goto label_2ce5d4;
        case 0x2ce5d8u: goto label_2ce5d8;
        case 0x2ce5dcu: goto label_2ce5dc;
        case 0x2ce5e0u: goto label_2ce5e0;
        case 0x2ce5e4u: goto label_2ce5e4;
        case 0x2ce5e8u: goto label_2ce5e8;
        case 0x2ce5ecu: goto label_2ce5ec;
        case 0x2ce5f0u: goto label_2ce5f0;
        case 0x2ce5f4u: goto label_2ce5f4;
        case 0x2ce5f8u: goto label_2ce5f8;
        case 0x2ce5fcu: goto label_2ce5fc;
        case 0x2ce600u: goto label_2ce600;
        case 0x2ce604u: goto label_2ce604;
        case 0x2ce608u: goto label_2ce608;
        case 0x2ce60cu: goto label_2ce60c;
        case 0x2ce610u: goto label_2ce610;
        case 0x2ce614u: goto label_2ce614;
        case 0x2ce618u: goto label_2ce618;
        case 0x2ce61cu: goto label_2ce61c;
        case 0x2ce620u: goto label_2ce620;
        case 0x2ce624u: goto label_2ce624;
        case 0x2ce628u: goto label_2ce628;
        case 0x2ce62cu: goto label_2ce62c;
        case 0x2ce630u: goto label_2ce630;
        case 0x2ce634u: goto label_2ce634;
        case 0x2ce638u: goto label_2ce638;
        case 0x2ce63cu: goto label_2ce63c;
        case 0x2ce640u: goto label_2ce640;
        case 0x2ce644u: goto label_2ce644;
        case 0x2ce648u: goto label_2ce648;
        case 0x2ce64cu: goto label_2ce64c;
        case 0x2ce650u: goto label_2ce650;
        case 0x2ce654u: goto label_2ce654;
        case 0x2ce658u: goto label_2ce658;
        case 0x2ce65cu: goto label_2ce65c;
        case 0x2ce660u: goto label_2ce660;
        case 0x2ce664u: goto label_2ce664;
        case 0x2ce668u: goto label_2ce668;
        case 0x2ce66cu: goto label_2ce66c;
        case 0x2ce670u: goto label_2ce670;
        case 0x2ce674u: goto label_2ce674;
        case 0x2ce678u: goto label_2ce678;
        case 0x2ce67cu: goto label_2ce67c;
        case 0x2ce680u: goto label_2ce680;
        case 0x2ce684u: goto label_2ce684;
        case 0x2ce688u: goto label_2ce688;
        case 0x2ce68cu: goto label_2ce68c;
        case 0x2ce690u: goto label_2ce690;
        case 0x2ce694u: goto label_2ce694;
        case 0x2ce698u: goto label_2ce698;
        case 0x2ce69cu: goto label_2ce69c;
        case 0x2ce6a0u: goto label_2ce6a0;
        case 0x2ce6a4u: goto label_2ce6a4;
        case 0x2ce6a8u: goto label_2ce6a8;
        case 0x2ce6acu: goto label_2ce6ac;
        case 0x2ce6b0u: goto label_2ce6b0;
        case 0x2ce6b4u: goto label_2ce6b4;
        case 0x2ce6b8u: goto label_2ce6b8;
        case 0x2ce6bcu: goto label_2ce6bc;
        case 0x2ce6c0u: goto label_2ce6c0;
        case 0x2ce6c4u: goto label_2ce6c4;
        case 0x2ce6c8u: goto label_2ce6c8;
        case 0x2ce6ccu: goto label_2ce6cc;
        case 0x2ce6d0u: goto label_2ce6d0;
        case 0x2ce6d4u: goto label_2ce6d4;
        case 0x2ce6d8u: goto label_2ce6d8;
        case 0x2ce6dcu: goto label_2ce6dc;
        case 0x2ce6e0u: goto label_2ce6e0;
        case 0x2ce6e4u: goto label_2ce6e4;
        case 0x2ce6e8u: goto label_2ce6e8;
        case 0x2ce6ecu: goto label_2ce6ec;
        case 0x2ce6f0u: goto label_2ce6f0;
        case 0x2ce6f4u: goto label_2ce6f4;
        case 0x2ce6f8u: goto label_2ce6f8;
        case 0x2ce6fcu: goto label_2ce6fc;
        case 0x2ce700u: goto label_2ce700;
        case 0x2ce704u: goto label_2ce704;
        case 0x2ce708u: goto label_2ce708;
        case 0x2ce70cu: goto label_2ce70c;
        case 0x2ce710u: goto label_2ce710;
        case 0x2ce714u: goto label_2ce714;
        case 0x2ce718u: goto label_2ce718;
        case 0x2ce71cu: goto label_2ce71c;
        case 0x2ce720u: goto label_2ce720;
        case 0x2ce724u: goto label_2ce724;
        case 0x2ce728u: goto label_2ce728;
        case 0x2ce72cu: goto label_2ce72c;
        case 0x2ce730u: goto label_2ce730;
        case 0x2ce734u: goto label_2ce734;
        case 0x2ce738u: goto label_2ce738;
        case 0x2ce73cu: goto label_2ce73c;
        case 0x2ce740u: goto label_2ce740;
        case 0x2ce744u: goto label_2ce744;
        case 0x2ce748u: goto label_2ce748;
        case 0x2ce74cu: goto label_2ce74c;
        case 0x2ce750u: goto label_2ce750;
        case 0x2ce754u: goto label_2ce754;
        case 0x2ce758u: goto label_2ce758;
        case 0x2ce75cu: goto label_2ce75c;
        case 0x2ce760u: goto label_2ce760;
        case 0x2ce764u: goto label_2ce764;
        case 0x2ce768u: goto label_2ce768;
        case 0x2ce76cu: goto label_2ce76c;
        case 0x2ce770u: goto label_2ce770;
        case 0x2ce774u: goto label_2ce774;
        case 0x2ce778u: goto label_2ce778;
        case 0x2ce77cu: goto label_2ce77c;
        case 0x2ce780u: goto label_2ce780;
        case 0x2ce784u: goto label_2ce784;
        case 0x2ce788u: goto label_2ce788;
        case 0x2ce78cu: goto label_2ce78c;
        case 0x2ce790u: goto label_2ce790;
        case 0x2ce794u: goto label_2ce794;
        case 0x2ce798u: goto label_2ce798;
        case 0x2ce79cu: goto label_2ce79c;
        case 0x2ce7a0u: goto label_2ce7a0;
        case 0x2ce7a4u: goto label_2ce7a4;
        case 0x2ce7a8u: goto label_2ce7a8;
        case 0x2ce7acu: goto label_2ce7ac;
        case 0x2ce7b0u: goto label_2ce7b0;
        case 0x2ce7b4u: goto label_2ce7b4;
        case 0x2ce7b8u: goto label_2ce7b8;
        case 0x2ce7bcu: goto label_2ce7bc;
        case 0x2ce7c0u: goto label_2ce7c0;
        case 0x2ce7c4u: goto label_2ce7c4;
        case 0x2ce7c8u: goto label_2ce7c8;
        case 0x2ce7ccu: goto label_2ce7cc;
        case 0x2ce7d0u: goto label_2ce7d0;
        case 0x2ce7d4u: goto label_2ce7d4;
        case 0x2ce7d8u: goto label_2ce7d8;
        case 0x2ce7dcu: goto label_2ce7dc;
        case 0x2ce7e0u: goto label_2ce7e0;
        case 0x2ce7e4u: goto label_2ce7e4;
        case 0x2ce7e8u: goto label_2ce7e8;
        case 0x2ce7ecu: goto label_2ce7ec;
        case 0x2ce7f0u: goto label_2ce7f0;
        case 0x2ce7f4u: goto label_2ce7f4;
        case 0x2ce7f8u: goto label_2ce7f8;
        case 0x2ce7fcu: goto label_2ce7fc;
        case 0x2ce800u: goto label_2ce800;
        case 0x2ce804u: goto label_2ce804;
        case 0x2ce808u: goto label_2ce808;
        case 0x2ce80cu: goto label_2ce80c;
        case 0x2ce810u: goto label_2ce810;
        case 0x2ce814u: goto label_2ce814;
        case 0x2ce818u: goto label_2ce818;
        case 0x2ce81cu: goto label_2ce81c;
        case 0x2ce820u: goto label_2ce820;
        case 0x2ce824u: goto label_2ce824;
        case 0x2ce828u: goto label_2ce828;
        case 0x2ce82cu: goto label_2ce82c;
        case 0x2ce830u: goto label_2ce830;
        case 0x2ce834u: goto label_2ce834;
        case 0x2ce838u: goto label_2ce838;
        case 0x2ce83cu: goto label_2ce83c;
        case 0x2ce840u: goto label_2ce840;
        case 0x2ce844u: goto label_2ce844;
        case 0x2ce848u: goto label_2ce848;
        case 0x2ce84cu: goto label_2ce84c;
        case 0x2ce850u: goto label_2ce850;
        case 0x2ce854u: goto label_2ce854;
        case 0x2ce858u: goto label_2ce858;
        case 0x2ce85cu: goto label_2ce85c;
        case 0x2ce860u: goto label_2ce860;
        case 0x2ce864u: goto label_2ce864;
        case 0x2ce868u: goto label_2ce868;
        case 0x2ce86cu: goto label_2ce86c;
        case 0x2ce870u: goto label_2ce870;
        case 0x2ce874u: goto label_2ce874;
        case 0x2ce878u: goto label_2ce878;
        case 0x2ce87cu: goto label_2ce87c;
        case 0x2ce880u: goto label_2ce880;
        case 0x2ce884u: goto label_2ce884;
        case 0x2ce888u: goto label_2ce888;
        case 0x2ce88cu: goto label_2ce88c;
        case 0x2ce890u: goto label_2ce890;
        case 0x2ce894u: goto label_2ce894;
        case 0x2ce898u: goto label_2ce898;
        case 0x2ce89cu: goto label_2ce89c;
        case 0x2ce8a0u: goto label_2ce8a0;
        case 0x2ce8a4u: goto label_2ce8a4;
        case 0x2ce8a8u: goto label_2ce8a8;
        case 0x2ce8acu: goto label_2ce8ac;
        case 0x2ce8b0u: goto label_2ce8b0;
        case 0x2ce8b4u: goto label_2ce8b4;
        case 0x2ce8b8u: goto label_2ce8b8;
        case 0x2ce8bcu: goto label_2ce8bc;
        case 0x2ce8c0u: goto label_2ce8c0;
        case 0x2ce8c4u: goto label_2ce8c4;
        case 0x2ce8c8u: goto label_2ce8c8;
        case 0x2ce8ccu: goto label_2ce8cc;
        case 0x2ce8d0u: goto label_2ce8d0;
        case 0x2ce8d4u: goto label_2ce8d4;
        case 0x2ce8d8u: goto label_2ce8d8;
        case 0x2ce8dcu: goto label_2ce8dc;
        case 0x2ce8e0u: goto label_2ce8e0;
        case 0x2ce8e4u: goto label_2ce8e4;
        case 0x2ce8e8u: goto label_2ce8e8;
        case 0x2ce8ecu: goto label_2ce8ec;
        case 0x2ce8f0u: goto label_2ce8f0;
        case 0x2ce8f4u: goto label_2ce8f4;
        case 0x2ce8f8u: goto label_2ce8f8;
        case 0x2ce8fcu: goto label_2ce8fc;
        case 0x2ce900u: goto label_2ce900;
        case 0x2ce904u: goto label_2ce904;
        case 0x2ce908u: goto label_2ce908;
        case 0x2ce90cu: goto label_2ce90c;
        case 0x2ce910u: goto label_2ce910;
        case 0x2ce914u: goto label_2ce914;
        case 0x2ce918u: goto label_2ce918;
        case 0x2ce91cu: goto label_2ce91c;
        case 0x2ce920u: goto label_2ce920;
        case 0x2ce924u: goto label_2ce924;
        case 0x2ce928u: goto label_2ce928;
        case 0x2ce92cu: goto label_2ce92c;
        case 0x2ce930u: goto label_2ce930;
        case 0x2ce934u: goto label_2ce934;
        case 0x2ce938u: goto label_2ce938;
        case 0x2ce93cu: goto label_2ce93c;
        case 0x2ce940u: goto label_2ce940;
        case 0x2ce944u: goto label_2ce944;
        case 0x2ce948u: goto label_2ce948;
        case 0x2ce94cu: goto label_2ce94c;
        case 0x2ce950u: goto label_2ce950;
        case 0x2ce954u: goto label_2ce954;
        case 0x2ce958u: goto label_2ce958;
        case 0x2ce95cu: goto label_2ce95c;
        case 0x2ce960u: goto label_2ce960;
        case 0x2ce964u: goto label_2ce964;
        case 0x2ce968u: goto label_2ce968;
        case 0x2ce96cu: goto label_2ce96c;
        case 0x2ce970u: goto label_2ce970;
        case 0x2ce974u: goto label_2ce974;
        case 0x2ce978u: goto label_2ce978;
        case 0x2ce97cu: goto label_2ce97c;
        case 0x2ce980u: goto label_2ce980;
        case 0x2ce984u: goto label_2ce984;
        case 0x2ce988u: goto label_2ce988;
        case 0x2ce98cu: goto label_2ce98c;
        case 0x2ce990u: goto label_2ce990;
        case 0x2ce994u: goto label_2ce994;
        case 0x2ce998u: goto label_2ce998;
        case 0x2ce99cu: goto label_2ce99c;
        case 0x2ce9a0u: goto label_2ce9a0;
        case 0x2ce9a4u: goto label_2ce9a4;
        case 0x2ce9a8u: goto label_2ce9a8;
        case 0x2ce9acu: goto label_2ce9ac;
        case 0x2ce9b0u: goto label_2ce9b0;
        case 0x2ce9b4u: goto label_2ce9b4;
        case 0x2ce9b8u: goto label_2ce9b8;
        case 0x2ce9bcu: goto label_2ce9bc;
        case 0x2ce9c0u: goto label_2ce9c0;
        case 0x2ce9c4u: goto label_2ce9c4;
        case 0x2ce9c8u: goto label_2ce9c8;
        case 0x2ce9ccu: goto label_2ce9cc;
        case 0x2ce9d0u: goto label_2ce9d0;
        case 0x2ce9d4u: goto label_2ce9d4;
        case 0x2ce9d8u: goto label_2ce9d8;
        case 0x2ce9dcu: goto label_2ce9dc;
        case 0x2ce9e0u: goto label_2ce9e0;
        case 0x2ce9e4u: goto label_2ce9e4;
        case 0x2ce9e8u: goto label_2ce9e8;
        case 0x2ce9ecu: goto label_2ce9ec;
        case 0x2ce9f0u: goto label_2ce9f0;
        case 0x2ce9f4u: goto label_2ce9f4;
        case 0x2ce9f8u: goto label_2ce9f8;
        case 0x2ce9fcu: goto label_2ce9fc;
        case 0x2cea00u: goto label_2cea00;
        case 0x2cea04u: goto label_2cea04;
        case 0x2cea08u: goto label_2cea08;
        case 0x2cea0cu: goto label_2cea0c;
        case 0x2cea10u: goto label_2cea10;
        case 0x2cea14u: goto label_2cea14;
        case 0x2cea18u: goto label_2cea18;
        case 0x2cea1cu: goto label_2cea1c;
        case 0x2cea20u: goto label_2cea20;
        case 0x2cea24u: goto label_2cea24;
        case 0x2cea28u: goto label_2cea28;
        case 0x2cea2cu: goto label_2cea2c;
        case 0x2cea30u: goto label_2cea30;
        case 0x2cea34u: goto label_2cea34;
        case 0x2cea38u: goto label_2cea38;
        case 0x2cea3cu: goto label_2cea3c;
        case 0x2cea40u: goto label_2cea40;
        case 0x2cea44u: goto label_2cea44;
        case 0x2cea48u: goto label_2cea48;
        case 0x2cea4cu: goto label_2cea4c;
        case 0x2cea50u: goto label_2cea50;
        case 0x2cea54u: goto label_2cea54;
        case 0x2cea58u: goto label_2cea58;
        case 0x2cea5cu: goto label_2cea5c;
        case 0x2cea60u: goto label_2cea60;
        case 0x2cea64u: goto label_2cea64;
        case 0x2cea68u: goto label_2cea68;
        case 0x2cea6cu: goto label_2cea6c;
        case 0x2cea70u: goto label_2cea70;
        case 0x2cea74u: goto label_2cea74;
        case 0x2cea78u: goto label_2cea78;
        case 0x2cea7cu: goto label_2cea7c;
        case 0x2cea80u: goto label_2cea80;
        case 0x2cea84u: goto label_2cea84;
        case 0x2cea88u: goto label_2cea88;
        case 0x2cea8cu: goto label_2cea8c;
        case 0x2cea90u: goto label_2cea90;
        case 0x2cea94u: goto label_2cea94;
        case 0x2cea98u: goto label_2cea98;
        case 0x2cea9cu: goto label_2cea9c;
        case 0x2ceaa0u: goto label_2ceaa0;
        case 0x2ceaa4u: goto label_2ceaa4;
        case 0x2ceaa8u: goto label_2ceaa8;
        case 0x2ceaacu: goto label_2ceaac;
        case 0x2ceab0u: goto label_2ceab0;
        case 0x2ceab4u: goto label_2ceab4;
        case 0x2ceab8u: goto label_2ceab8;
        case 0x2ceabcu: goto label_2ceabc;
        case 0x2ceac0u: goto label_2ceac0;
        case 0x2ceac4u: goto label_2ceac4;
        case 0x2ceac8u: goto label_2ceac8;
        case 0x2ceaccu: goto label_2ceacc;
        case 0x2cead0u: goto label_2cead0;
        case 0x2cead4u: goto label_2cead4;
        case 0x2cead8u: goto label_2cead8;
        case 0x2ceadcu: goto label_2ceadc;
        case 0x2ceae0u: goto label_2ceae0;
        case 0x2ceae4u: goto label_2ceae4;
        case 0x2ceae8u: goto label_2ceae8;
        case 0x2ceaecu: goto label_2ceaec;
        case 0x2ceaf0u: goto label_2ceaf0;
        case 0x2ceaf4u: goto label_2ceaf4;
        case 0x2ceaf8u: goto label_2ceaf8;
        case 0x2ceafcu: goto label_2ceafc;
        case 0x2ceb00u: goto label_2ceb00;
        case 0x2ceb04u: goto label_2ceb04;
        case 0x2ceb08u: goto label_2ceb08;
        case 0x2ceb0cu: goto label_2ceb0c;
        case 0x2ceb10u: goto label_2ceb10;
        case 0x2ceb14u: goto label_2ceb14;
        case 0x2ceb18u: goto label_2ceb18;
        case 0x2ceb1cu: goto label_2ceb1c;
        case 0x2ceb20u: goto label_2ceb20;
        case 0x2ceb24u: goto label_2ceb24;
        case 0x2ceb28u: goto label_2ceb28;
        case 0x2ceb2cu: goto label_2ceb2c;
        case 0x2ceb30u: goto label_2ceb30;
        case 0x2ceb34u: goto label_2ceb34;
        case 0x2ceb38u: goto label_2ceb38;
        case 0x2ceb3cu: goto label_2ceb3c;
        case 0x2ceb40u: goto label_2ceb40;
        case 0x2ceb44u: goto label_2ceb44;
        case 0x2ceb48u: goto label_2ceb48;
        case 0x2ceb4cu: goto label_2ceb4c;
        case 0x2ceb50u: goto label_2ceb50;
        case 0x2ceb54u: goto label_2ceb54;
        case 0x2ceb58u: goto label_2ceb58;
        case 0x2ceb5cu: goto label_2ceb5c;
        case 0x2ceb60u: goto label_2ceb60;
        case 0x2ceb64u: goto label_2ceb64;
        case 0x2ceb68u: goto label_2ceb68;
        case 0x2ceb6cu: goto label_2ceb6c;
        case 0x2ceb70u: goto label_2ceb70;
        case 0x2ceb74u: goto label_2ceb74;
        case 0x2ceb78u: goto label_2ceb78;
        case 0x2ceb7cu: goto label_2ceb7c;
        case 0x2ceb80u: goto label_2ceb80;
        case 0x2ceb84u: goto label_2ceb84;
        case 0x2ceb88u: goto label_2ceb88;
        case 0x2ceb8cu: goto label_2ceb8c;
        case 0x2ceb90u: goto label_2ceb90;
        case 0x2ceb94u: goto label_2ceb94;
        case 0x2ceb98u: goto label_2ceb98;
        case 0x2ceb9cu: goto label_2ceb9c;
        case 0x2ceba0u: goto label_2ceba0;
        case 0x2ceba4u: goto label_2ceba4;
        case 0x2ceba8u: goto label_2ceba8;
        case 0x2cebacu: goto label_2cebac;
        case 0x2cebb0u: goto label_2cebb0;
        case 0x2cebb4u: goto label_2cebb4;
        case 0x2cebb8u: goto label_2cebb8;
        case 0x2cebbcu: goto label_2cebbc;
        case 0x2cebc0u: goto label_2cebc0;
        case 0x2cebc4u: goto label_2cebc4;
        case 0x2cebc8u: goto label_2cebc8;
        case 0x2cebccu: goto label_2cebcc;
        case 0x2cebd0u: goto label_2cebd0;
        case 0x2cebd4u: goto label_2cebd4;
        case 0x2cebd8u: goto label_2cebd8;
        case 0x2cebdcu: goto label_2cebdc;
        case 0x2cebe0u: goto label_2cebe0;
        case 0x2cebe4u: goto label_2cebe4;
        case 0x2cebe8u: goto label_2cebe8;
        case 0x2cebecu: goto label_2cebec;
        case 0x2cebf0u: goto label_2cebf0;
        case 0x2cebf4u: goto label_2cebf4;
        case 0x2cebf8u: goto label_2cebf8;
        case 0x2cebfcu: goto label_2cebfc;
        case 0x2cec00u: goto label_2cec00;
        case 0x2cec04u: goto label_2cec04;
        case 0x2cec08u: goto label_2cec08;
        case 0x2cec0cu: goto label_2cec0c;
        case 0x2cec10u: goto label_2cec10;
        case 0x2cec14u: goto label_2cec14;
        case 0x2cec18u: goto label_2cec18;
        case 0x2cec1cu: goto label_2cec1c;
        case 0x2cec20u: goto label_2cec20;
        case 0x2cec24u: goto label_2cec24;
        case 0x2cec28u: goto label_2cec28;
        case 0x2cec2cu: goto label_2cec2c;
        case 0x2cec30u: goto label_2cec30;
        case 0x2cec34u: goto label_2cec34;
        case 0x2cec38u: goto label_2cec38;
        case 0x2cec3cu: goto label_2cec3c;
        case 0x2cec40u: goto label_2cec40;
        case 0x2cec44u: goto label_2cec44;
        case 0x2cec48u: goto label_2cec48;
        case 0x2cec4cu: goto label_2cec4c;
        case 0x2cec50u: goto label_2cec50;
        case 0x2cec54u: goto label_2cec54;
        case 0x2cec58u: goto label_2cec58;
        case 0x2cec5cu: goto label_2cec5c;
        case 0x2cec60u: goto label_2cec60;
        case 0x2cec64u: goto label_2cec64;
        case 0x2cec68u: goto label_2cec68;
        case 0x2cec6cu: goto label_2cec6c;
        case 0x2cec70u: goto label_2cec70;
        case 0x2cec74u: goto label_2cec74;
        case 0x2cec78u: goto label_2cec78;
        case 0x2cec7cu: goto label_2cec7c;
        case 0x2cec80u: goto label_2cec80;
        case 0x2cec84u: goto label_2cec84;
        case 0x2cec88u: goto label_2cec88;
        case 0x2cec8cu: goto label_2cec8c;
        case 0x2cec90u: goto label_2cec90;
        case 0x2cec94u: goto label_2cec94;
        case 0x2cec98u: goto label_2cec98;
        case 0x2cec9cu: goto label_2cec9c;
        case 0x2ceca0u: goto label_2ceca0;
        case 0x2ceca4u: goto label_2ceca4;
        case 0x2ceca8u: goto label_2ceca8;
        case 0x2cecacu: goto label_2cecac;
        case 0x2cecb0u: goto label_2cecb0;
        case 0x2cecb4u: goto label_2cecb4;
        case 0x2cecb8u: goto label_2cecb8;
        case 0x2cecbcu: goto label_2cecbc;
        case 0x2cecc0u: goto label_2cecc0;
        case 0x2cecc4u: goto label_2cecc4;
        case 0x2cecc8u: goto label_2cecc8;
        case 0x2cecccu: goto label_2ceccc;
        case 0x2cecd0u: goto label_2cecd0;
        case 0x2cecd4u: goto label_2cecd4;
        case 0x2cecd8u: goto label_2cecd8;
        case 0x2cecdcu: goto label_2cecdc;
        case 0x2cece0u: goto label_2cece0;
        case 0x2cece4u: goto label_2cece4;
        case 0x2cece8u: goto label_2cece8;
        case 0x2cececu: goto label_2cecec;
        case 0x2cecf0u: goto label_2cecf0;
        case 0x2cecf4u: goto label_2cecf4;
        case 0x2cecf8u: goto label_2cecf8;
        case 0x2cecfcu: goto label_2cecfc;
        case 0x2ced00u: goto label_2ced00;
        case 0x2ced04u: goto label_2ced04;
        case 0x2ced08u: goto label_2ced08;
        case 0x2ced0cu: goto label_2ced0c;
        case 0x2ced10u: goto label_2ced10;
        case 0x2ced14u: goto label_2ced14;
        case 0x2ced18u: goto label_2ced18;
        case 0x2ced1cu: goto label_2ced1c;
        case 0x2ced20u: goto label_2ced20;
        case 0x2ced24u: goto label_2ced24;
        case 0x2ced28u: goto label_2ced28;
        case 0x2ced2cu: goto label_2ced2c;
        case 0x2ced30u: goto label_2ced30;
        case 0x2ced34u: goto label_2ced34;
        case 0x2ced38u: goto label_2ced38;
        case 0x2ced3cu: goto label_2ced3c;
        case 0x2ced40u: goto label_2ced40;
        case 0x2ced44u: goto label_2ced44;
        case 0x2ced48u: goto label_2ced48;
        case 0x2ced4cu: goto label_2ced4c;
        case 0x2ced50u: goto label_2ced50;
        case 0x2ced54u: goto label_2ced54;
        case 0x2ced58u: goto label_2ced58;
        case 0x2ced5cu: goto label_2ced5c;
        case 0x2ced60u: goto label_2ced60;
        case 0x2ced64u: goto label_2ced64;
        case 0x2ced68u: goto label_2ced68;
        case 0x2ced6cu: goto label_2ced6c;
        case 0x2ced70u: goto label_2ced70;
        case 0x2ced74u: goto label_2ced74;
        case 0x2ced78u: goto label_2ced78;
        case 0x2ced7cu: goto label_2ced7c;
        case 0x2ced80u: goto label_2ced80;
        case 0x2ced84u: goto label_2ced84;
        case 0x2ced88u: goto label_2ced88;
        case 0x2ced8cu: goto label_2ced8c;
        case 0x2ced90u: goto label_2ced90;
        case 0x2ced94u: goto label_2ced94;
        case 0x2ced98u: goto label_2ced98;
        case 0x2ced9cu: goto label_2ced9c;
        case 0x2ceda0u: goto label_2ceda0;
        case 0x2ceda4u: goto label_2ceda4;
        case 0x2ceda8u: goto label_2ceda8;
        case 0x2cedacu: goto label_2cedac;
        case 0x2cedb0u: goto label_2cedb0;
        case 0x2cedb4u: goto label_2cedb4;
        case 0x2cedb8u: goto label_2cedb8;
        case 0x2cedbcu: goto label_2cedbc;
        case 0x2cedc0u: goto label_2cedc0;
        case 0x2cedc4u: goto label_2cedc4;
        case 0x2cedc8u: goto label_2cedc8;
        case 0x2cedccu: goto label_2cedcc;
        case 0x2cedd0u: goto label_2cedd0;
        case 0x2cedd4u: goto label_2cedd4;
        case 0x2cedd8u: goto label_2cedd8;
        case 0x2ceddcu: goto label_2ceddc;
        case 0x2cede0u: goto label_2cede0;
        case 0x2cede4u: goto label_2cede4;
        case 0x2cede8u: goto label_2cede8;
        case 0x2cedecu: goto label_2cedec;
        case 0x2cedf0u: goto label_2cedf0;
        case 0x2cedf4u: goto label_2cedf4;
        case 0x2cedf8u: goto label_2cedf8;
        case 0x2cedfcu: goto label_2cedfc;
        case 0x2cee00u: goto label_2cee00;
        case 0x2cee04u: goto label_2cee04;
        case 0x2cee08u: goto label_2cee08;
        case 0x2cee0cu: goto label_2cee0c;
        case 0x2cee10u: goto label_2cee10;
        case 0x2cee14u: goto label_2cee14;
        case 0x2cee18u: goto label_2cee18;
        case 0x2cee1cu: goto label_2cee1c;
        case 0x2cee20u: goto label_2cee20;
        case 0x2cee24u: goto label_2cee24;
        case 0x2cee28u: goto label_2cee28;
        case 0x2cee2cu: goto label_2cee2c;
        case 0x2cee30u: goto label_2cee30;
        case 0x2cee34u: goto label_2cee34;
        case 0x2cee38u: goto label_2cee38;
        case 0x2cee3cu: goto label_2cee3c;
        case 0x2cee40u: goto label_2cee40;
        case 0x2cee44u: goto label_2cee44;
        case 0x2cee48u: goto label_2cee48;
        case 0x2cee4cu: goto label_2cee4c;
        case 0x2cee50u: goto label_2cee50;
        case 0x2cee54u: goto label_2cee54;
        case 0x2cee58u: goto label_2cee58;
        case 0x2cee5cu: goto label_2cee5c;
        case 0x2cee60u: goto label_2cee60;
        case 0x2cee64u: goto label_2cee64;
        case 0x2cee68u: goto label_2cee68;
        case 0x2cee6cu: goto label_2cee6c;
        case 0x2cee70u: goto label_2cee70;
        case 0x2cee74u: goto label_2cee74;
        case 0x2cee78u: goto label_2cee78;
        case 0x2cee7cu: goto label_2cee7c;
        case 0x2cee80u: goto label_2cee80;
        case 0x2cee84u: goto label_2cee84;
        case 0x2cee88u: goto label_2cee88;
        case 0x2cee8cu: goto label_2cee8c;
        case 0x2cee90u: goto label_2cee90;
        case 0x2cee94u: goto label_2cee94;
        case 0x2cee98u: goto label_2cee98;
        case 0x2cee9cu: goto label_2cee9c;
        case 0x2ceea0u: goto label_2ceea0;
        case 0x2ceea4u: goto label_2ceea4;
        case 0x2ceea8u: goto label_2ceea8;
        case 0x2ceeacu: goto label_2ceeac;
        case 0x2ceeb0u: goto label_2ceeb0;
        case 0x2ceeb4u: goto label_2ceeb4;
        case 0x2ceeb8u: goto label_2ceeb8;
        case 0x2ceebcu: goto label_2ceebc;
        case 0x2ceec0u: goto label_2ceec0;
        case 0x2ceec4u: goto label_2ceec4;
        case 0x2ceec8u: goto label_2ceec8;
        case 0x2ceeccu: goto label_2ceecc;
        case 0x2ceed0u: goto label_2ceed0;
        case 0x2ceed4u: goto label_2ceed4;
        case 0x2ceed8u: goto label_2ceed8;
        case 0x2ceedcu: goto label_2ceedc;
        case 0x2ceee0u: goto label_2ceee0;
        case 0x2ceee4u: goto label_2ceee4;
        case 0x2ceee8u: goto label_2ceee8;
        case 0x2ceeecu: goto label_2ceeec;
        case 0x2ceef0u: goto label_2ceef0;
        case 0x2ceef4u: goto label_2ceef4;
        case 0x2ceef8u: goto label_2ceef8;
        case 0x2ceefcu: goto label_2ceefc;
        default: break;
    }

    ctx->pc = 0x2ce020u;

label_2ce020:
    // 0x2ce020: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x2ce020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
label_2ce024:
    // 0x2ce024: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2ce024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2ce028:
    // 0x2ce028: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2ce028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2ce02c:
    // 0x2ce02c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2ce02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2ce030:
    // 0x2ce030: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ce030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2ce034:
    // 0x2ce034: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ce034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2ce038:
    // 0x2ce038: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ce038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2ce03c:
    // 0x2ce03c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ce03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2ce040:
    // 0x2ce040: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ce040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ce044:
    // 0x2ce044: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ce044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ce048:
    // 0x2ce048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ce048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ce04c:
    // 0x2ce04c: 0xafa401e0  sw          $a0, 0x1E0($sp)
    ctx->pc = 0x2ce04cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 4));
label_2ce050:
    // 0x2ce050: 0xafa501f0  sw          $a1, 0x1F0($sp)
    ctx->pc = 0x2ce050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 5));
label_2ce054:
    // 0x2ce054: 0xafa60200  sw          $a2, 0x200($sp)
    ctx->pc = 0x2ce054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 6));
label_2ce058:
    // 0x2ce058: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x2ce058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ce05c:
    // 0x2ce05c: 0xc096d7c  jal         func_25B5F0
label_2ce060:
    if (ctx->pc == 0x2CE060u) {
        ctx->pc = 0x2CE064u;
        goto label_2ce064;
    }
    ctx->pc = 0x2CE05Cu;
    SET_GPR_U32(ctx, 31, 0x2CE064u);
    ctx->pc = 0x25B5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B5F0u, 0x2CE05Cu, 0x2CE064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE064u;
label_2ce064:
    // 0x2ce064: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ce064u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce068:
    // 0x2ce068: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ce068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ce06c:
    // 0x2ce06c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ce06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce070:
    // 0x2ce070: 0xc0966fc  jal         func_259BF0
label_2ce074:
    if (ctx->pc == 0x2CE074u) {
        ctx->pc = 0x2CE078u;
        goto label_2ce078;
    }
    ctx->pc = 0x2CE070u;
    SET_GPR_U32(ctx, 31, 0x2CE078u);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x2CE070u, 0x2CE078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE078u;
label_2ce078:
    // 0x2ce078: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2ce078u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ce07c:
    // 0x2ce07c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ce07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ce080:
    // 0x2ce080: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ce080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ce084:
    // 0x2ce084: 0x104401ad  beq         $v0, $a0, . + 4 + (0x1AD << 2)
label_2ce088:
    if (ctx->pc == 0x2CE088u) {
        ctx->pc = 0x2CE08Cu;
        goto label_2ce08c;
    }
    ctx->pc = 0x2CE084u;
    {
        const bool branch_taken_0x2ce084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ce084) {
            ctx->pc = 0x2CE73Cu;
            goto label_2ce73c;
        }
    }
    ctx->pc = 0x2CE08Cu;
label_2ce08c:
    // 0x2ce08c: 0x10400148  beqz        $v0, . + 4 + (0x148 << 2)
label_2ce090:
    if (ctx->pc == 0x2CE090u) {
        ctx->pc = 0x2CE094u;
        goto label_2ce094;
    }
    ctx->pc = 0x2CE08Cu;
    {
        const bool branch_taken_0x2ce08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce08c) {
            ctx->pc = 0x2CE5B0u;
            goto label_2ce5b0;
        }
    }
    ctx->pc = 0x2CE094u;
label_2ce094:
    // 0x2ce094: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ce094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce098:
    // 0x2ce098: 0x1045001e  beq         $v0, $a1, . + 4 + (0x1E << 2)
label_2ce09c:
    if (ctx->pc == 0x2CE09Cu) {
        ctx->pc = 0x2CE0A0u;
        goto label_2ce0a0;
    }
    ctx->pc = 0x2CE098u;
    {
        const bool branch_taken_0x2ce098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2ce098) {
            ctx->pc = 0x2CE114u;
            goto label_2ce114;
        }
    }
    ctx->pc = 0x2CE0A0u;
label_2ce0a0:
    // 0x2ce0a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ce0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ce0a4:
    // 0x2ce0a4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_2ce0a8:
    if (ctx->pc == 0x2CE0A8u) {
        ctx->pc = 0x2CE0ACu;
        goto label_2ce0ac;
    }
    ctx->pc = 0x2CE0A4u;
    {
        const bool branch_taken_0x2ce0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ce0a4) {
            ctx->pc = 0x2CE0B4u;
            goto label_2ce0b4;
        }
    }
    ctx->pc = 0x2CE0ACu;
label_2ce0ac:
    // 0x2ce0ac: 0x10000382  b           . + 4 + (0x382 << 2)
label_2ce0b0:
    if (ctx->pc == 0x2CE0B0u) {
        ctx->pc = 0x2CE0B4u;
        goto label_2ce0b4;
    }
    ctx->pc = 0x2CE0ACu;
    {
        const bool branch_taken_0x2ce0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce0ac) {
            ctx->pc = 0x2CEEB8u;
            goto label_2ceeb8;
        }
    }
    ctx->pc = 0x2CE0B4u;
label_2ce0b4:
    // 0x2ce0b4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2ce0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ce0b8:
    // 0x2ce0b8: 0xc085530  jal         func_2154C0
label_2ce0bc:
    if (ctx->pc == 0x2CE0BCu) {
        ctx->pc = 0x2CE0C0u;
        goto label_2ce0c0;
    }
    ctx->pc = 0x2CE0B8u;
    SET_GPR_U32(ctx, 31, 0x2CE0C0u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x2CE0B8u, 0x2CE0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE0C0u;
label_2ce0c0:
    // 0x2ce0c0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2ce0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2ce0c4:
    // 0x2ce0c4: 0x14440013  bne         $v0, $a0, . + 4 + (0x13 << 2)
label_2ce0c8:
    if (ctx->pc == 0x2CE0C8u) {
        ctx->pc = 0x2CE0CCu;
        goto label_2ce0cc;
    }
    ctx->pc = 0x2CE0C4u;
    {
        const bool branch_taken_0x2ce0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ce0c4) {
            ctx->pc = 0x2CE114u;
            goto label_2ce114;
        }
    }
    ctx->pc = 0x2CE0CCu;
label_2ce0cc:
    // 0x2ce0cc: 0xc0b06cc  jal         func_2C1B30
label_2ce0d0:
    if (ctx->pc == 0x2CE0D0u) {
        ctx->pc = 0x2CE0D4u;
        goto label_2ce0d4;
    }
    ctx->pc = 0x2CE0CCu;
    SET_GPR_U32(ctx, 31, 0x2CE0D4u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2CE0CCu, 0x2CE0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE0D4u;
label_2ce0d4:
    // 0x2ce0d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ce0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce0d8:
    // 0x2ce0d8: 0xc0b06c4  jal         func_2C1B10
label_2ce0dc:
    if (ctx->pc == 0x2CE0DCu) {
        ctx->pc = 0x2CE0E0u;
        goto label_2ce0e0;
    }
    ctx->pc = 0x2CE0D8u;
    SET_GPR_U32(ctx, 31, 0x2CE0E0u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x2CE0D8u, 0x2CE0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE0E0u;
label_2ce0e0:
    // 0x2ce0e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ce0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce0e4:
    // 0x2ce0e4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2ce0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ce0e8:
    // 0x2ce0e8: 0xc0b5ad0  jal         func_2D6B40
label_2ce0ec:
    if (ctx->pc == 0x2CE0ECu) {
        ctx->pc = 0x2CE0F0u;
        goto label_2ce0f0;
    }
    ctx->pc = 0x2CE0E8u;
    SET_GPR_U32(ctx, 31, 0x2CE0F0u);
    ctx->pc = 0x2D6B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6B40u, 0x2CE0E8u, 0x2CE0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE0F0u;
label_2ce0f0:
    // 0x2ce0f0: 0xc0b06cc  jal         func_2C1B30
label_2ce0f4:
    if (ctx->pc == 0x2CE0F4u) {
        ctx->pc = 0x2CE0F8u;
        goto label_2ce0f8;
    }
    ctx->pc = 0x2CE0F0u;
    SET_GPR_U32(ctx, 31, 0x2CE0F8u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2CE0F0u, 0x2CE0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE0F8u;
label_2ce0f8:
    // 0x2ce0f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ce0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce0fc:
    // 0x2ce0fc: 0xc0b06c4  jal         func_2C1B10
label_2ce100:
    if (ctx->pc == 0x2CE100u) {
        ctx->pc = 0x2CE104u;
        goto label_2ce104;
    }
    ctx->pc = 0x2CE0FCu;
    SET_GPR_U32(ctx, 31, 0x2CE104u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x2CE0FCu, 0x2CE104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE104u;
label_2ce104:
    // 0x2ce104: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ce104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce108:
    // 0x2ce108: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2ce108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ce10c:
    // 0x2ce10c: 0xc0b4a64  jal         func_2D2990
label_2ce110:
    if (ctx->pc == 0x2CE110u) {
        ctx->pc = 0x2CE114u;
        goto label_2ce114;
    }
    ctx->pc = 0x2CE10Cu;
    SET_GPR_U32(ctx, 31, 0x2CE114u);
    ctx->pc = 0x2D2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2990u, 0x2CE10Cu, 0x2CE114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE114u;
label_2ce114:
    // 0x2ce114: 0xafb001d4  sw          $s0, 0x1D4($sp)
    ctx->pc = 0x2ce114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 16));
label_2ce118:
    // 0x2ce118: 0x8fa501d4  lw          $a1, 0x1D4($sp)
    ctx->pc = 0x2ce118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_2ce11c:
    // 0x2ce11c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ce11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2ce120:
    // 0x2ce120: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ce120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce124:
    // 0x2ce124: 0x14440007  bne         $v0, $a0, . + 4 + (0x7 << 2)
label_2ce128:
    if (ctx->pc == 0x2CE128u) {
        ctx->pc = 0x2CE12Cu;
        goto label_2ce12c;
    }
    ctx->pc = 0x2CE124u;
    {
        const bool branch_taken_0x2ce124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ce124) {
            ctx->pc = 0x2CE144u;
            goto label_2ce144;
        }
    }
    ctx->pc = 0x2CE12Cu;
label_2ce12c:
    // 0x2ce12c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ce12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ce130:
    // 0x2ce130: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ce130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce134:
    // 0x2ce134: 0xc0966fc  jal         func_259BF0
label_2ce138:
    if (ctx->pc == 0x2CE138u) {
        ctx->pc = 0x2CE13Cu;
        goto label_2ce13c;
    }
    ctx->pc = 0x2CE134u;
    SET_GPR_U32(ctx, 31, 0x2CE13Cu);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x2CE134u, 0x2CE13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE13Cu;
label_2ce13c:
    // 0x2ce13c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ce13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ce140:
    // 0x2ce140: 0xafa201d4  sw          $v0, 0x1D4($sp)
    ctx->pc = 0x2ce140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
label_2ce144:
    // 0x2ce144: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x2ce144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_2ce148:
    // 0x2ce148: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ce148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ce14c:
    // 0x2ce14c: 0xc096e08  jal         func_25B820
label_2ce150:
    if (ctx->pc == 0x2CE150u) {
        ctx->pc = 0x2CE154u;
        goto label_2ce154;
    }
    ctx->pc = 0x2CE14Cu;
    SET_GPR_U32(ctx, 31, 0x2CE154u);
    ctx->pc = 0x25B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B820u, 0x2CE14Cu, 0x2CE154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE154u;
label_2ce154:
    // 0x2ce154: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_2ce158:
    if (ctx->pc == 0x2CE158u) {
        ctx->pc = 0x2CE15Cu;
        goto label_2ce15c;
    }
    ctx->pc = 0x2CE154u;
    {
        const bool branch_taken_0x2ce154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce154) {
            ctx->pc = 0x2CE200u;
            goto label_2ce200;
        }
    }
    ctx->pc = 0x2CE15Cu;
label_2ce15c:
    // 0x2ce15c: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x2ce15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ce160:
    // 0x2ce160: 0xc0480fc  jal         func_1203F0
label_2ce164:
    if (ctx->pc == 0x2CE164u) {
        ctx->pc = 0x2CE168u;
        goto label_2ce168;
    }
    ctx->pc = 0x2CE160u;
    SET_GPR_U32(ctx, 31, 0x2CE168u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2CE160u, 0x2CE168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE168u;
label_2ce168:
    // 0x2ce168: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_2ce16c:
    if (ctx->pc == 0x2CE16Cu) {
        ctx->pc = 0x2CE170u;
        goto label_2ce170;
    }
    ctx->pc = 0x2CE168u;
    {
        const bool branch_taken_0x2ce168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce168) {
            ctx->pc = 0x2CE200u;
            goto label_2ce200;
        }
    }
    ctx->pc = 0x2CE170u;
label_2ce170:
    // 0x2ce170: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x2ce170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ce174:
    // 0x2ce174: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2ce174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2ce178:
    // 0x2ce178: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2ce178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2ce17c:
    // 0x2ce17c: 0xc085538  jal         func_2154E0
label_2ce180:
    if (ctx->pc == 0x2CE180u) {
        ctx->pc = 0x2CE184u;
        goto label_2ce184;
    }
    ctx->pc = 0x2CE17Cu;
    SET_GPR_U32(ctx, 31, 0x2CE184u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CE17Cu, 0x2CE184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE184u;
label_2ce184:
    // 0x2ce184: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x2ce184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_2ce188:
    // 0x2ce188: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x2ce188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_2ce18c:
    // 0x2ce18c: 0xc0a82cc  jal         func_2A0B30
label_2ce190:
    if (ctx->pc == 0x2CE190u) {
        ctx->pc = 0x2CE194u;
        goto label_2ce194;
    }
    ctx->pc = 0x2CE18Cu;
    SET_GPR_U32(ctx, 31, 0x2CE194u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x2CE18Cu, 0x2CE194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE194u;
label_2ce194:
    // 0x2ce194: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ce194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce198:
    // 0x2ce198: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2ce198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2ce19c:
    // 0x2ce19c: 0xc121e84  jal         func_487A10
label_2ce1a0:
    if (ctx->pc == 0x2CE1A0u) {
        ctx->pc = 0x2CE1A4u;
        goto label_2ce1a4;
    }
    ctx->pc = 0x2CE19Cu;
    SET_GPR_U32(ctx, 31, 0x2CE1A4u);
    ctx->pc = 0x487A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A10u, 0x2CE19Cu, 0x2CE1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE1A4u;
label_2ce1a4:
    // 0x2ce1a4: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x2ce1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2ce1a8:
    // 0x2ce1a8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2ce1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2ce1ac:
    // 0x2ce1ac: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2ce1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ce1b0:
    // 0x2ce1b0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2ce1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce1b4:
    // 0x2ce1b4: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x2ce1b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2ce1b8:
    // 0x2ce1b8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2ce1b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2ce1bc:
    // 0x2ce1bc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2ce1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2ce1c0:
    // 0x2ce1c0: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x2ce1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ce1c4:
    // 0x2ce1c4: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x2ce1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_2ce1c8:
    // 0x2ce1c8: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x2ce1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2ce1cc:
    // 0x2ce1cc: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x2ce1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_2ce1d0:
    // 0x2ce1d0: 0x8fa70200  lw          $a3, 0x200($sp)
    ctx->pc = 0x2ce1d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_2ce1d4:
    // 0x2ce1d4: 0xc0b5cfc  jal         func_2D73F0
label_2ce1d8:
    if (ctx->pc == 0x2CE1D8u) {
        ctx->pc = 0x2CE1DCu;
        goto label_2ce1dc;
    }
    ctx->pc = 0x2CE1D4u;
    SET_GPR_U32(ctx, 31, 0x2CE1DCu);
    ctx->pc = 0x2D73F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D73F0u, 0x2CE1D4u, 0x2CE1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE1DCu;
label_2ce1dc:
    // 0x2ce1dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2ce1e0:
    if (ctx->pc == 0x2CE1E0u) {
        ctx->pc = 0x2CE1E4u;
        goto label_2ce1e4;
    }
    ctx->pc = 0x2CE1DCu;
    {
        const bool branch_taken_0x2ce1dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce1dc) {
            ctx->pc = 0x2CE200u;
            goto label_2ce200;
        }
    }
    ctx->pc = 0x2CE1E4u;
label_2ce1e4:
    // 0x2ce1e4: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x2ce1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ce1e8:
    // 0x2ce1e8: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2ce1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_2ce1ec:
    // 0x2ce1ec: 0x7ba400d0  lq          $a0, 0xD0($sp)
    ctx->pc = 0x2ce1ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2ce1f0:
    // 0x2ce1f0: 0xc096da0  jal         func_25B680
label_2ce1f4:
    if (ctx->pc == 0x2CE1F4u) {
        ctx->pc = 0x2CE1F8u;
        goto label_2ce1f8;
    }
    ctx->pc = 0x2CE1F0u;
    SET_GPR_U32(ctx, 31, 0x2CE1F8u);
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x2CE1F0u, 0x2CE1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE1F8u;
label_2ce1f8:
    // 0x2ce1f8: 0x10000334  b           . + 4 + (0x334 << 2)
label_2ce1fc:
    if (ctx->pc == 0x2CE1FCu) {
        ctx->pc = 0x2CE200u;
        goto label_2ce200;
    }
    ctx->pc = 0x2CE1F8u;
    {
        const bool branch_taken_0x2ce1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce1f8) {
            ctx->pc = 0x2CEECCu;
            goto label_2ceecc;
        }
    }
    ctx->pc = 0x2CE200u;
label_2ce200:
    // 0x2ce200: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2ce200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2ce204:
    // 0x2ce204: 0xafa201cc  sw          $v0, 0x1CC($sp)
    ctx->pc = 0x2ce204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 2));
label_2ce208:
    // 0x2ce208: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2ce208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ce20c:
    // 0x2ce20c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2ce20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_2ce210:
    // 0x2ce210: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x2ce210u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2ce214:
    // 0x2ce214: 0x10400095  beqz        $v0, . + 4 + (0x95 << 2)
label_2ce218:
    if (ctx->pc == 0x2CE218u) {
        ctx->pc = 0x2CE21Cu;
        goto label_2ce21c;
    }
    ctx->pc = 0x2CE214u;
    {
        const bool branch_taken_0x2ce214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce214) {
            ctx->pc = 0x2CE46Cu;
            goto label_2ce46c;
        }
    }
    ctx->pc = 0x2CE21Cu;
label_2ce21c:
    // 0x2ce21c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x2ce21cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ce220:
    // 0x2ce220: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2ce220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ce224:
    // 0x2ce224: 0xc085530  jal         func_2154C0
label_2ce228:
    if (ctx->pc == 0x2CE228u) {
        ctx->pc = 0x2CE22Cu;
        goto label_2ce22c;
    }
    ctx->pc = 0x2CE224u;
    SET_GPR_U32(ctx, 31, 0x2CE22Cu);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x2CE224u, 0x2CE22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE22Cu;
label_2ce22c:
    // 0x2ce22c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2ce22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ce230:
    // 0x2ce230: 0x14430069  bne         $v0, $v1, . + 4 + (0x69 << 2)
label_2ce234:
    if (ctx->pc == 0x2CE234u) {
        ctx->pc = 0x2CE238u;
        goto label_2ce238;
    }
    ctx->pc = 0x2CE230u;
    {
        const bool branch_taken_0x2ce230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ce230) {
            ctx->pc = 0x2CE3D8u;
            goto label_2ce3d8;
        }
    }
    ctx->pc = 0x2CE238u;
label_2ce238:
    // 0x2ce238: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2ce238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ce23c:
    // 0x2ce23c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2ce23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2ce240:
    // 0x2ce240: 0xc085538  jal         func_2154E0
label_2ce244:
    if (ctx->pc == 0x2CE244u) {
        ctx->pc = 0x2CE248u;
        goto label_2ce248;
    }
    ctx->pc = 0x2CE240u;
    SET_GPR_U32(ctx, 31, 0x2CE248u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CE240u, 0x2CE248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE248u;
label_2ce248:
    // 0x2ce248: 0xafa201c8  sw          $v0, 0x1C8($sp)
    ctx->pc = 0x2ce248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 2));
label_2ce24c:
    // 0x2ce24c: 0x8fa401c8  lw          $a0, 0x1C8($sp)
    ctx->pc = 0x2ce24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_2ce250:
    // 0x2ce250: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2ce250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce254:
    // 0x2ce254: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x2ce254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ce258:
    // 0x2ce258: 0x27a701cc  addiu       $a3, $sp, 0x1CC
    ctx->pc = 0x2ce258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
label_2ce25c:
    // 0x2ce25c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ce25cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce260:
    // 0x2ce260: 0xc09b3f4  jal         func_26CFD0
label_2ce264:
    if (ctx->pc == 0x2CE264u) {
        ctx->pc = 0x2CE268u;
        goto label_2ce268;
    }
    ctx->pc = 0x2CE260u;
    SET_GPR_U32(ctx, 31, 0x2CE268u);
    ctx->pc = 0x26CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CFD0u, 0x2CE260u, 0x2CE268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE268u;
label_2ce268:
    // 0x2ce268: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x2ce268u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ce26c:
    // 0x2ce26c: 0x12e00008  beqz        $s7, . + 4 + (0x8 << 2)
label_2ce270:
    if (ctx->pc == 0x2CE270u) {
        ctx->pc = 0x2CE274u;
        goto label_2ce274;
    }
    ctx->pc = 0x2CE26Cu;
    {
        const bool branch_taken_0x2ce26c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce26c) {
            ctx->pc = 0x2CE290u;
            goto label_2ce290;
        }
    }
    ctx->pc = 0x2CE274u;
label_2ce274:
    // 0x2ce274: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x2ce274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ce278:
    // 0x2ce278: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2ce278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ce27c:
    // 0x2ce27c: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x2ce27cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2ce280:
    // 0x2ce280: 0x8fa601cc  lw          $a2, 0x1CC($sp)
    ctx->pc = 0x2ce280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
label_2ce284:
    // 0x2ce284: 0xc09ba18  jal         func_26E860
label_2ce288:
    if (ctx->pc == 0x2CE288u) {
        ctx->pc = 0x2CE28Cu;
        goto label_2ce28c;
    }
    ctx->pc = 0x2CE284u;
    SET_GPR_U32(ctx, 31, 0x2CE28Cu);
    ctx->pc = 0x26E860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E860u, 0x2CE284u, 0x2CE28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE28Cu;
label_2ce28c:
    // 0x2ce28c: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x2ce28cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ce290:
    // 0x2ce290: 0x12e0004a  beqz        $s7, . + 4 + (0x4A << 2)
label_2ce294:
    if (ctx->pc == 0x2CE294u) {
        ctx->pc = 0x2CE298u;
        goto label_2ce298;
    }
    ctx->pc = 0x2CE290u;
    {
        const bool branch_taken_0x2ce290 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce290) {
            ctx->pc = 0x2CE3BCu;
            goto label_2ce3bc;
        }
    }
    ctx->pc = 0x2CE298u;
label_2ce298:
    // 0x2ce298: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ce298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ce29c:
    // 0x2ce29c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ce29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce2a0:
    // 0x2ce2a0: 0x14440046  bne         $v0, $a0, . + 4 + (0x46 << 2)
label_2ce2a4:
    if (ctx->pc == 0x2CE2A4u) {
        ctx->pc = 0x2CE2A8u;
        goto label_2ce2a8;
    }
    ctx->pc = 0x2CE2A0u;
    {
        const bool branch_taken_0x2ce2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ce2a0) {
            ctx->pc = 0x2CE3BCu;
            goto label_2ce3bc;
        }
    }
    ctx->pc = 0x2CE2A8u;
label_2ce2a8:
    // 0x2ce2a8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2ce2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ce2ac:
    // 0x2ce2ac: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2ce2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2ce2b0:
    // 0x2ce2b0: 0xc085538  jal         func_2154E0
label_2ce2b4:
    if (ctx->pc == 0x2CE2B4u) {
        ctx->pc = 0x2CE2B8u;
        goto label_2ce2b8;
    }
    ctx->pc = 0x2CE2B0u;
    SET_GPR_U32(ctx, 31, 0x2CE2B8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CE2B0u, 0x2CE2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE2B8u;
label_2ce2b8:
    // 0x2ce2b8: 0xafa201c4  sw          $v0, 0x1C4($sp)
    ctx->pc = 0x2ce2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 2));
label_2ce2bc:
    // 0x2ce2bc: 0x8fa401c4  lw          $a0, 0x1C4($sp)
    ctx->pc = 0x2ce2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_2ce2c0:
    // 0x2ce2c0: 0xc0976e4  jal         func_25DB90
label_2ce2c4:
    if (ctx->pc == 0x2CE2C4u) {
        ctx->pc = 0x2CE2C8u;
        goto label_2ce2c8;
    }
    ctx->pc = 0x2CE2C0u;
    SET_GPR_U32(ctx, 31, 0x2CE2C8u);
    ctx->pc = 0x25DB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DB90u, 0x2CE2C0u, 0x2CE2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE2C8u;
label_2ce2c8:
    // 0x2ce2c8: 0xafa201c0  sw          $v0, 0x1C0($sp)
    ctx->pc = 0x2ce2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
label_2ce2cc:
    // 0x2ce2cc: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2ce2ccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce2d0:
    // 0x2ce2d0: 0x10000036  b           . + 4 + (0x36 << 2)
label_2ce2d4:
    if (ctx->pc == 0x2CE2D4u) {
        ctx->pc = 0x2CE2D8u;
        goto label_2ce2d8;
    }
    ctx->pc = 0x2CE2D0u;
    {
        const bool branch_taken_0x2ce2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce2d0) {
            ctx->pc = 0x2CE3ACu;
            goto label_2ce3ac;
        }
    }
    ctx->pc = 0x2CE2D8u;
label_2ce2d8:
    // 0x2ce2d8: 0x8fa401c4  lw          $a0, 0x1C4($sp)
    ctx->pc = 0x2ce2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_2ce2dc:
    // 0x2ce2dc: 0xc0976dc  jal         func_25DB70
label_2ce2e0:
    if (ctx->pc == 0x2CE2E0u) {
        ctx->pc = 0x2CE2E4u;
        goto label_2ce2e4;
    }
    ctx->pc = 0x2CE2DCu;
    SET_GPR_U32(ctx, 31, 0x2CE2E4u);
    ctx->pc = 0x25DB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DB70u, 0x2CE2DCu, 0x2CE2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE2E4u;
label_2ce2e4:
    // 0x2ce2e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ce2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce2e8:
    // 0x2ce2e8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2ce2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2ce2ec:
    // 0x2ce2ec: 0xc09748c  jal         func_25D230
label_2ce2f0:
    if (ctx->pc == 0x2CE2F0u) {
        ctx->pc = 0x2CE2F4u;
        goto label_2ce2f4;
    }
    ctx->pc = 0x2CE2ECu;
    SET_GPR_U32(ctx, 31, 0x2CE2F4u);
    ctx->pc = 0x25D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D230u, 0x2CE2ECu, 0x2CE2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE2F4u;
label_2ce2f4:
    // 0x2ce2f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ce2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ce2f8:
    // 0x2ce2f8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2ce2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2ce2fc:
    // 0x2ce2fc: 0xc085538  jal         func_2154E0
label_2ce300:
    if (ctx->pc == 0x2CE300u) {
        ctx->pc = 0x2CE304u;
        goto label_2ce304;
    }
    ctx->pc = 0x2CE2FCu;
    SET_GPR_U32(ctx, 31, 0x2CE304u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CE2FCu, 0x2CE304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE304u;
label_2ce304:
    // 0x2ce304: 0xafa201bc  sw          $v0, 0x1BC($sp)
    ctx->pc = 0x2ce304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 2));
label_2ce308:
    // 0x2ce308: 0x8fa201bc  lw          $v0, 0x1BC($sp)
    ctx->pc = 0x2ce308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_2ce30c:
    // 0x2ce30c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2ce30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2ce310:
    // 0x2ce310: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x2ce310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ce314:
    // 0x2ce314: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x2ce314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2ce318:
    // 0x2ce318: 0x10820023  beq         $a0, $v0, . + 4 + (0x23 << 2)
label_2ce31c:
    if (ctx->pc == 0x2CE31Cu) {
        ctx->pc = 0x2CE320u;
        goto label_2ce320;
    }
    ctx->pc = 0x2CE318u;
    {
        const bool branch_taken_0x2ce318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce318) {
            ctx->pc = 0x2CE3A8u;
            goto label_2ce3a8;
        }
    }
    ctx->pc = 0x2CE320u;
label_2ce320:
    // 0x2ce320: 0x8fa401bc  lw          $a0, 0x1BC($sp)
    ctx->pc = 0x2ce320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_2ce324:
    // 0x2ce324: 0xc096b6c  jal         func_25ADB0
label_2ce328:
    if (ctx->pc == 0x2CE328u) {
        ctx->pc = 0x2CE32Cu;
        goto label_2ce32c;
    }
    ctx->pc = 0x2CE324u;
    SET_GPR_U32(ctx, 31, 0x2CE32Cu);
    ctx->pc = 0x25ADB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ADB0u, 0x2CE324u, 0x2CE32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE32Cu;
label_2ce32c:
    // 0x2ce32c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_2ce330:
    if (ctx->pc == 0x2CE330u) {
        ctx->pc = 0x2CE334u;
        goto label_2ce334;
    }
    ctx->pc = 0x2CE32Cu;
    {
        const bool branch_taken_0x2ce32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce32c) {
            ctx->pc = 0x2CE3A8u;
            goto label_2ce3a8;
        }
    }
    ctx->pc = 0x2CE334u;
label_2ce334:
    // 0x2ce334: 0x8fa401bc  lw          $a0, 0x1BC($sp)
    ctx->pc = 0x2ce334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_2ce338:
    // 0x2ce338: 0xc096874  jal         func_25A1D0
label_2ce33c:
    if (ctx->pc == 0x2CE33Cu) {
        ctx->pc = 0x2CE340u;
        goto label_2ce340;
    }
    ctx->pc = 0x2CE338u;
    SET_GPR_U32(ctx, 31, 0x2CE340u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x2CE338u, 0x2CE340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE340u;
label_2ce340:
    // 0x2ce340: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_2ce344:
    if (ctx->pc == 0x2CE344u) {
        ctx->pc = 0x2CE348u;
        goto label_2ce348;
    }
    ctx->pc = 0x2CE340u;
    {
        const bool branch_taken_0x2ce340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce340) {
            ctx->pc = 0x2CE3BCu;
            goto label_2ce3bc;
        }
    }
    ctx->pc = 0x2CE348u;
label_2ce348:
    // 0x2ce348: 0x8fa401c4  lw          $a0, 0x1C4($sp)
    ctx->pc = 0x2ce348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_2ce34c:
    // 0x2ce34c: 0xc0976dc  jal         func_25DB70
label_2ce350:
    if (ctx->pc == 0x2CE350u) {
        ctx->pc = 0x2CE354u;
        goto label_2ce354;
    }
    ctx->pc = 0x2CE34Cu;
    SET_GPR_U32(ctx, 31, 0x2CE354u);
    ctx->pc = 0x25DB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DB70u, 0x2CE34Cu, 0x2CE354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE354u;
label_2ce354:
    // 0x2ce354: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ce354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce358:
    // 0x2ce358: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2ce358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2ce35c:
    // 0x2ce35c: 0xc09748c  jal         func_25D230
label_2ce360:
    if (ctx->pc == 0x2CE360u) {
        ctx->pc = 0x2CE364u;
        goto label_2ce364;
    }
    ctx->pc = 0x2CE35Cu;
    SET_GPR_U32(ctx, 31, 0x2CE364u);
    ctx->pc = 0x25D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D230u, 0x2CE35Cu, 0x2CE364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE364u;
label_2ce364:
    // 0x2ce364: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x2ce364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ce368:
    // 0x2ce368: 0x8f84bcb0  lw          $a0, -0x4350($gp)
    ctx->pc = 0x2ce368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950064)));
label_2ce36c:
    // 0x2ce36c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2ce36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ce370:
    // 0x2ce370: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2ce370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce374:
    // 0x2ce374: 0x8c67002c  lw          $a3, 0x2C($v1)
    ctx->pc = 0x2ce374u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ce378:
    // 0x2ce378: 0xc0aff64  jal         func_2BFD90
label_2ce37c:
    if (ctx->pc == 0x2CE37Cu) {
        ctx->pc = 0x2CE380u;
        goto label_2ce380;
    }
    ctx->pc = 0x2CE378u;
    SET_GPR_U32(ctx, 31, 0x2CE380u);
    ctx->pc = 0x2BFD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFD90u, 0x2CE378u, 0x2CE380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE380u;
label_2ce380:
    // 0x2ce380: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2ce380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ce384:
    // 0x2ce384: 0x0  nop
    ctx->pc = 0x2ce384u;
    // NOP
label_2ce388:
    // 0x2ce388: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ce388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ce38c:
    // 0x2ce38c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ce38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce390:
    // 0x2ce390: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2ce394:
    if (ctx->pc == 0x2CE394u) {
        ctx->pc = 0x2CE398u;
        goto label_2ce398;
    }
    ctx->pc = 0x2CE390u;
    {
        const bool branch_taken_0x2ce390 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ce390) {
            ctx->pc = 0x2CE39Cu;
            goto label_2ce39c;
        }
    }
    ctx->pc = 0x2CE398u;
label_2ce398:
    // 0x2ce398: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ce398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce39c:
    // 0x2ce39c: 0x30b700ff  andi        $s7, $a1, 0xFF
    ctx->pc = 0x2ce39cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2ce3a0:
    // 0x2ce3a0: 0x10000006  b           . + 4 + (0x6 << 2)
label_2ce3a4:
    if (ctx->pc == 0x2CE3A4u) {
        ctx->pc = 0x2CE3A8u;
        goto label_2ce3a8;
    }
    ctx->pc = 0x2CE3A0u;
    {
        const bool branch_taken_0x2ce3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce3a0) {
            ctx->pc = 0x2CE3BCu;
            goto label_2ce3bc;
        }
    }
    ctx->pc = 0x2CE3A8u;
label_2ce3a8:
    // 0x2ce3a8: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2ce3a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_2ce3ac:
    // 0x2ce3ac: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x2ce3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_2ce3b0:
    // 0x2ce3b0: 0x3c2202b  sltu        $a0, $fp, $v0
    ctx->pc = 0x2ce3b0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ce3b4:
    // 0x2ce3b4: 0x1480ffc8  bnez        $a0, . + 4 + (-0x38 << 2)
label_2ce3b8:
    if (ctx->pc == 0x2CE3B8u) {
        ctx->pc = 0x2CE3BCu;
        goto label_2ce3bc;
    }
    ctx->pc = 0x2CE3B4u;
    {
        const bool branch_taken_0x2ce3b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce3b4) {
            ctx->pc = 0x2CE2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce2d8;
        }
    }
    ctx->pc = 0x2CE3BCu;
label_2ce3bc:
    // 0x2ce3bc: 0x16e0002b  bnez        $s7, . + 4 + (0x2B << 2)
label_2ce3c0:
    if (ctx->pc == 0x2CE3C0u) {
        ctx->pc = 0x2CE3C4u;
        goto label_2ce3c4;
    }
    ctx->pc = 0x2CE3BCu;
    {
        const bool branch_taken_0x2ce3bc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce3bc) {
            ctx->pc = 0x2CE46Cu;
            goto label_2ce46c;
        }
    }
    ctx->pc = 0x2CE3C4u;
label_2ce3c4:
    // 0x2ce3c4: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x2ce3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ce3c8:
    // 0x2ce3c8: 0xc096da0  jal         func_25B680
label_2ce3cc:
    if (ctx->pc == 0x2CE3CCu) {
        ctx->pc = 0x2CE3D0u;
        goto label_2ce3d0;
    }
    ctx->pc = 0x2CE3C8u;
    SET_GPR_U32(ctx, 31, 0x2CE3D0u);
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x2CE3C8u, 0x2CE3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE3D0u;
label_2ce3d0:
    // 0x2ce3d0: 0x100002be  b           . + 4 + (0x2BE << 2)
label_2ce3d4:
    if (ctx->pc == 0x2CE3D4u) {
        ctx->pc = 0x2CE3D8u;
        goto label_2ce3d8;
    }
    ctx->pc = 0x2CE3D0u;
    {
        const bool branch_taken_0x2ce3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce3d0) {
            ctx->pc = 0x2CEECCu;
            goto label_2ceecc;
        }
    }
    ctx->pc = 0x2CE3D8u;
label_2ce3d8:
    // 0x2ce3d8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2ce3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ce3dc:
    // 0x2ce3dc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ce3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ce3e0:
    // 0x2ce3e0: 0xc085530  jal         func_2154C0
label_2ce3e4:
    if (ctx->pc == 0x2CE3E4u) {
        ctx->pc = 0x2CE3E8u;
        goto label_2ce3e8;
    }
    ctx->pc = 0x2CE3E0u;
    SET_GPR_U32(ctx, 31, 0x2CE3E8u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x2CE3E0u, 0x2CE3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE3E8u;
label_2ce3e8:
    // 0x2ce3e8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2ce3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2ce3ec:
    // 0x2ce3ec: 0x1444001f  bne         $v0, $a0, . + 4 + (0x1F << 2)
label_2ce3f0:
    if (ctx->pc == 0x2CE3F0u) {
        ctx->pc = 0x2CE3F4u;
        goto label_2ce3f4;
    }
    ctx->pc = 0x2CE3ECu;
    {
        const bool branch_taken_0x2ce3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ce3ec) {
            ctx->pc = 0x2CE46Cu;
            goto label_2ce46c;
        }
    }
    ctx->pc = 0x2CE3F4u;
label_2ce3f4:
    // 0x2ce3f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ce3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ce3f8:
    // 0x2ce3f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ce3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce3fc:
    // 0x2ce3fc: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
label_2ce400:
    if (ctx->pc == 0x2CE400u) {
        ctx->pc = 0x2CE404u;
        goto label_2ce404;
    }
    ctx->pc = 0x2CE3FCu;
    {
        const bool branch_taken_0x2ce3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ce3fc) {
            ctx->pc = 0x2CE46Cu;
            goto label_2ce46c;
        }
    }
    ctx->pc = 0x2CE404u;
label_2ce404:
    // 0x2ce404: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2ce404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ce408:
    // 0x2ce408: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2ce408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2ce40c:
    // 0x2ce40c: 0xc085538  jal         func_2154E0
label_2ce410:
    if (ctx->pc == 0x2CE410u) {
        ctx->pc = 0x2CE414u;
        goto label_2ce414;
    }
    ctx->pc = 0x2CE40Cu;
    SET_GPR_U32(ctx, 31, 0x2CE414u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CE40Cu, 0x2CE414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE414u;
label_2ce414:
    // 0x2ce414: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x2ce414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
label_2ce418:
    // 0x2ce418: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ce418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ce41c:
    // 0x2ce41c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ce41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce420:
    // 0x2ce420: 0xc0966fc  jal         func_259BF0
label_2ce424:
    if (ctx->pc == 0x2CE424u) {
        ctx->pc = 0x2CE428u;
        goto label_2ce428;
    }
    ctx->pc = 0x2CE420u;
    SET_GPR_U32(ctx, 31, 0x2CE428u);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x2CE420u, 0x2CE428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE428u;
label_2ce428:
    // 0x2ce428: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2ce428u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ce42c:
    // 0x2ce42c: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2ce42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2ce430:
    // 0x2ce430: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2ce430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2ce434:
    // 0x2ce434: 0xc0b3bc0  jal         func_2CEF00
label_2ce438:
    if (ctx->pc == 0x2CE438u) {
        ctx->pc = 0x2CE43Cu;
        goto label_2ce43c;
    }
    ctx->pc = 0x2CE434u;
    SET_GPR_U32(ctx, 31, 0x2CE43Cu);
    ctx->pc = 0x2CEF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEF00u, 0x2CE434u, 0x2CE43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE43Cu;
label_2ce43c:
    // 0x2ce43c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2ce43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_2ce440:
    // 0x2ce440: 0x8fa401b8  lw          $a0, 0x1B8($sp)
    ctx->pc = 0x2ce440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_2ce444:
    // 0x2ce444: 0xc0480fc  jal         func_1203F0
label_2ce448:
    if (ctx->pc == 0x2CE448u) {
        ctx->pc = 0x2CE44Cu;
        goto label_2ce44c;
    }
    ctx->pc = 0x2CE444u;
    SET_GPR_U32(ctx, 31, 0x2CE44Cu);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2CE444u, 0x2CE44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE44Cu;
label_2ce44c:
    // 0x2ce44c: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x2ce44cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2ce450:
    // 0x2ce450: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_2ce454:
    if (ctx->pc == 0x2CE454u) {
        ctx->pc = 0x2CE458u;
        goto label_2ce458;
    }
    ctx->pc = 0x2CE450u;
    {
        const bool branch_taken_0x2ce450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce450) {
            ctx->pc = 0x2CE46Cu;
            goto label_2ce46c;
        }
    }
    ctx->pc = 0x2CE458u;
label_2ce458:
    // 0x2ce458: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x2ce458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ce45c:
    // 0x2ce45c: 0xc096da0  jal         func_25B680
label_2ce460:
    if (ctx->pc == 0x2CE460u) {
        ctx->pc = 0x2CE464u;
        goto label_2ce464;
    }
    ctx->pc = 0x2CE45Cu;
    SET_GPR_U32(ctx, 31, 0x2CE464u);
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x2CE45Cu, 0x2CE464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE464u;
label_2ce464:
    // 0x2ce464: 0x10000299  b           . + 4 + (0x299 << 2)
label_2ce468:
    if (ctx->pc == 0x2CE468u) {
        ctx->pc = 0x2CE46Cu;
        goto label_2ce46c;
    }
    ctx->pc = 0x2CE464u;
    {
        const bool branch_taken_0x2ce464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce464) {
            ctx->pc = 0x2CEECCu;
            goto label_2ceecc;
        }
    }
    ctx->pc = 0x2CE46Cu;
label_2ce46c:
    // 0x2ce46c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2ce46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ce470:
    // 0x2ce470: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ce470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ce474:
    // 0x2ce474: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2ce474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2ce478:
    // 0x2ce478: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2ce478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ce47c:
    // 0x2ce47c: 0xc085538  jal         func_2154E0
label_2ce480:
    if (ctx->pc == 0x2CE480u) {
        ctx->pc = 0x2CE484u;
        goto label_2ce484;
    }
    ctx->pc = 0x2CE47Cu;
    SET_GPR_U32(ctx, 31, 0x2CE484u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CE47Cu, 0x2CE484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE484u;
label_2ce484:
    // 0x2ce484: 0xafa201b4  sw          $v0, 0x1B4($sp)
    ctx->pc = 0x2ce484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
label_2ce488:
    // 0x2ce488: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2ce488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2ce48c:
    // 0x2ce48c: 0xc09ac08  jal         func_26B020
label_2ce490:
    if (ctx->pc == 0x2CE490u) {
        ctx->pc = 0x2CE494u;
        goto label_2ce494;
    }
    ctx->pc = 0x2CE48Cu;
    SET_GPR_U32(ctx, 31, 0x2CE494u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x2CE48Cu, 0x2CE494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE494u;
label_2ce494:
    // 0x2ce494: 0x8fa401b4  lw          $a0, 0x1B4($sp)
    ctx->pc = 0x2ce494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_2ce498:
    // 0x2ce498: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x2ce498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2ce49c:
    // 0x2ce49c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2ce49cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ce4a0:
    // 0x2ce4a0: 0x8fa701f0  lw          $a3, 0x1F0($sp)
    ctx->pc = 0x2ce4a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ce4a4:
    // 0x2ce4a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ce4a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce4a8:
    // 0x2ce4a8: 0xc09b364  jal         func_26CD90
label_2ce4ac:
    if (ctx->pc == 0x2CE4ACu) {
        ctx->pc = 0x2CE4B0u;
        goto label_2ce4b0;
    }
    ctx->pc = 0x2CE4A8u;
    SET_GPR_U32(ctx, 31, 0x2CE4B0u);
    ctx->pc = 0x26CD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CD90u, 0x2CE4A8u, 0x2CE4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE4B0u;
label_2ce4b0:
    // 0x2ce4b0: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_2ce4b4:
    if (ctx->pc == 0x2CE4B4u) {
        ctx->pc = 0x2CE4B8u;
        goto label_2ce4b8;
    }
    ctx->pc = 0x2CE4B0u;
    {
        const bool branch_taken_0x2ce4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce4b0) {
            ctx->pc = 0x2CE59Cu;
            goto label_2ce59c;
        }
    }
    ctx->pc = 0x2CE4B8u;
label_2ce4b8:
    // 0x2ce4b8: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x2ce4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_2ce4bc:
    // 0x2ce4bc: 0xc096e08  jal         func_25B820
label_2ce4c0:
    if (ctx->pc == 0x2CE4C0u) {
        ctx->pc = 0x2CE4C4u;
        goto label_2ce4c4;
    }
    ctx->pc = 0x2CE4BCu;
    SET_GPR_U32(ctx, 31, 0x2CE4C4u);
    ctx->pc = 0x25B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B820u, 0x2CE4BCu, 0x2CE4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE4C4u;
label_2ce4c4:
    // 0x2ce4c4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2ce4c8:
    if (ctx->pc == 0x2CE4C8u) {
        ctx->pc = 0x2CE4CCu;
        goto label_2ce4cc;
    }
    ctx->pc = 0x2CE4C4u;
    {
        const bool branch_taken_0x2ce4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce4c4) {
            ctx->pc = 0x2CE4DCu;
            goto label_2ce4dc;
        }
    }
    ctx->pc = 0x2CE4CCu;
label_2ce4cc:
    // 0x2ce4cc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2ce4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ce4d0:
    // 0x2ce4d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce4d4:
    // 0x2ce4d4: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_2ce4d8:
    if (ctx->pc == 0x2CE4D8u) {
        ctx->pc = 0x2CE4DCu;
        goto label_2ce4dc;
    }
    ctx->pc = 0x2CE4D4u;
    {
        const bool branch_taken_0x2ce4d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ce4d4) {
            ctx->pc = 0x2CE528u;
            goto label_2ce528;
        }
    }
    ctx->pc = 0x2CE4DCu;
label_2ce4dc:
    // 0x2ce4dc: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x2ce4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_2ce4e0:
    // 0x2ce4e0: 0xc048094  jal         func_120250
label_2ce4e4:
    if (ctx->pc == 0x2CE4E4u) {
        ctx->pc = 0x2CE4E8u;
        goto label_2ce4e8;
    }
    ctx->pc = 0x2CE4E0u;
    SET_GPR_U32(ctx, 31, 0x2CE4E8u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2CE4E0u, 0x2CE4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE4E8u;
label_2ce4e8:
    // 0x2ce4e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ce4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce4ec:
    // 0x2ce4ec: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2ce4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2ce4f0:
    // 0x2ce4f0: 0x24a5e310  addiu       $a1, $a1, -0x1CF0
    ctx->pc = 0x2ce4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959888));
label_2ce4f4:
    // 0x2ce4f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ce4f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce4f8:
    // 0x2ce4f8: 0xc047328  jal         func_11CCA0
label_2ce4fc:
    if (ctx->pc == 0x2CE4FCu) {
        ctx->pc = 0x2CE500u;
        goto label_2ce500;
    }
    ctx->pc = 0x2CE4F8u;
    SET_GPR_U32(ctx, 31, 0x2CE500u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x2CE4F8u, 0x2CE500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE500u;
label_2ce500:
    // 0x2ce500: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ce500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ce504:
    // 0x2ce504: 0x38460001  xori        $a2, $v0, 0x1
    ctx->pc = 0x2ce504u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2ce508:
    // 0x2ce508: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x2ce508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ce50c:
    // 0x2ce50c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2ce50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2ce510:
    // 0x2ce510: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x2ce510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2ce514:
    // 0x2ce514: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ce514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce518:
    // 0x2ce518: 0xc0af028  jal         func_2BC0A0
label_2ce51c:
    if (ctx->pc == 0x2CE51Cu) {
        ctx->pc = 0x2CE520u;
        goto label_2ce520;
    }
    ctx->pc = 0x2CE518u;
    SET_GPR_U32(ctx, 31, 0x2CE520u);
    ctx->pc = 0x2BC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0A0u, 0x2CE518u, 0x2CE520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE520u;
label_2ce520:
    // 0x2ce520: 0x10000012  b           . + 4 + (0x12 << 2)
label_2ce524:
    if (ctx->pc == 0x2CE524u) {
        ctx->pc = 0x2CE528u;
        goto label_2ce528;
    }
    ctx->pc = 0x2CE520u;
    {
        const bool branch_taken_0x2ce520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce520) {
            ctx->pc = 0x2CE56Cu;
            goto label_2ce56c;
        }
    }
    ctx->pc = 0x2CE528u;
label_2ce528:
    // 0x2ce528: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x2ce528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_2ce52c:
    // 0x2ce52c: 0xc048094  jal         func_120250
label_2ce530:
    if (ctx->pc == 0x2CE530u) {
        ctx->pc = 0x2CE534u;
        goto label_2ce534;
    }
    ctx->pc = 0x2CE52Cu;
    SET_GPR_U32(ctx, 31, 0x2CE534u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2CE52Cu, 0x2CE534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE534u;
label_2ce534:
    // 0x2ce534: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ce534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce538:
    // 0x2ce538: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2ce538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2ce53c:
    // 0x2ce53c: 0x24a5e310  addiu       $a1, $a1, -0x1CF0
    ctx->pc = 0x2ce53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959888));
label_2ce540:
    // 0x2ce540: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ce540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce544:
    // 0x2ce544: 0xc047328  jal         func_11CCA0
label_2ce548:
    if (ctx->pc == 0x2CE548u) {
        ctx->pc = 0x2CE54Cu;
        goto label_2ce54c;
    }
    ctx->pc = 0x2CE544u;
    SET_GPR_U32(ctx, 31, 0x2CE54Cu);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x2CE544u, 0x2CE54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE54Cu;
label_2ce54c:
    // 0x2ce54c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ce54cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ce550:
    // 0x2ce550: 0x38460001  xori        $a2, $v0, 0x1
    ctx->pc = 0x2ce550u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2ce554:
    // 0x2ce554: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x2ce554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ce558:
    // 0x2ce558: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2ce558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2ce55c:
    // 0x2ce55c: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x2ce55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2ce560:
    // 0x2ce560: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ce560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce564:
    // 0x2ce564: 0xc0af03c  jal         func_2BC0F0
label_2ce568:
    if (ctx->pc == 0x2CE568u) {
        ctx->pc = 0x2CE56Cu;
        goto label_2ce56c;
    }
    ctx->pc = 0x2CE564u;
    SET_GPR_U32(ctx, 31, 0x2CE56Cu);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x2CE564u, 0x2CE56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE56Cu;
label_2ce56c:
    // 0x2ce56c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2ce56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ce570:
    // 0x2ce570: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ce570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ce574:
    // 0x2ce574: 0x14620250  bne         $v1, $v0, . + 4 + (0x250 << 2)
label_2ce578:
    if (ctx->pc == 0x2CE578u) {
        ctx->pc = 0x2CE57Cu;
        goto label_2ce57c;
    }
    ctx->pc = 0x2CE574u;
    {
        const bool branch_taken_0x2ce574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ce574) {
            ctx->pc = 0x2CEEB8u;
            goto label_2ceeb8;
        }
    }
    ctx->pc = 0x2CE57Cu;
label_2ce57c:
    // 0x2ce57c: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x2ce57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ce580:
    // 0x2ce580: 0xc096a18  jal         func_25A860
label_2ce584:
    if (ctx->pc == 0x2CE584u) {
        ctx->pc = 0x2CE588u;
        goto label_2ce588;
    }
    ctx->pc = 0x2CE580u;
    SET_GPR_U32(ctx, 31, 0x2CE588u);
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x2CE580u, 0x2CE588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE588u;
label_2ce588:
    // 0x2ce588: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ce588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce58c:
    // 0x2ce58c: 0xc0970d0  jal         func_25C340
label_2ce590:
    if (ctx->pc == 0x2CE590u) {
        ctx->pc = 0x2CE594u;
        goto label_2ce594;
    }
    ctx->pc = 0x2CE58Cu;
    SET_GPR_U32(ctx, 31, 0x2CE594u);
    ctx->pc = 0x25C340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C340u, 0x2CE58Cu, 0x2CE594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE594u;
label_2ce594:
    // 0x2ce594: 0x10000248  b           . + 4 + (0x248 << 2)
label_2ce598:
    if (ctx->pc == 0x2CE598u) {
        ctx->pc = 0x2CE59Cu;
        goto label_2ce59c;
    }
    ctx->pc = 0x2CE594u;
    {
        const bool branch_taken_0x2ce594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce594) {
            ctx->pc = 0x2CEEB8u;
            goto label_2ceeb8;
        }
    }
    ctx->pc = 0x2CE59Cu;
label_2ce59c:
    // 0x2ce59c: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x2ce59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ce5a0:
    // 0x2ce5a0: 0xc096da0  jal         func_25B680
label_2ce5a4:
    if (ctx->pc == 0x2CE5A4u) {
        ctx->pc = 0x2CE5A8u;
        goto label_2ce5a8;
    }
    ctx->pc = 0x2CE5A0u;
    SET_GPR_U32(ctx, 31, 0x2CE5A8u);
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x2CE5A0u, 0x2CE5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE5A8u;
label_2ce5a8:
    // 0x2ce5a8: 0x10000248  b           . + 4 + (0x248 << 2)
label_2ce5ac:
    if (ctx->pc == 0x2CE5ACu) {
        ctx->pc = 0x2CE5B0u;
        goto label_2ce5b0;
    }
    ctx->pc = 0x2CE5A8u;
    {
        const bool branch_taken_0x2ce5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce5a8) {
            ctx->pc = 0x2CEECCu;
            goto label_2ceecc;
        }
    }
    ctx->pc = 0x2CE5B0u;
label_2ce5b0:
    // 0x2ce5b0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2ce5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ce5b4:
    // 0x2ce5b4: 0xc085530  jal         func_2154C0
label_2ce5b8:
    if (ctx->pc == 0x2CE5B8u) {
        ctx->pc = 0x2CE5BCu;
        goto label_2ce5bc;
    }
    ctx->pc = 0x2CE5B4u;
    SET_GPR_U32(ctx, 31, 0x2CE5BCu);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x2CE5B4u, 0x2CE5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE5BCu;
label_2ce5bc:
    // 0x2ce5bc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2ce5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2ce5c0:
    // 0x2ce5c0: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
label_2ce5c4:
    if (ctx->pc == 0x2CE5C4u) {
        ctx->pc = 0x2CE5C8u;
        goto label_2ce5c8;
    }
    ctx->pc = 0x2CE5C0u;
    {
        const bool branch_taken_0x2ce5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ce5c0) {
            ctx->pc = 0x2CE628u;
            goto label_2ce628;
        }
    }
    ctx->pc = 0x2CE5C8u;
label_2ce5c8:
    // 0x2ce5c8: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2ce5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2ce5cc:
    // 0x2ce5cc: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2ce5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2ce5d0:
    // 0x2ce5d0: 0xc0b06c4  jal         func_2C1B10
label_2ce5d4:
    if (ctx->pc == 0x2CE5D4u) {
        ctx->pc = 0x2CE5D8u;
        goto label_2ce5d8;
    }
    ctx->pc = 0x2CE5D0u;
    SET_GPR_U32(ctx, 31, 0x2CE5D8u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x2CE5D0u, 0x2CE5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE5D8u;
label_2ce5d8:
    // 0x2ce5d8: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x2ce5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ce5dc:
    // 0x2ce5dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ce5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce5e0:
    // 0x2ce5e0: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x2ce5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ce5e4:
    // 0x2ce5e4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x2ce5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ce5e8:
    // 0x2ce5e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ce5e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ce5ec:
    // 0x2ce5ec: 0x8fa801e0  lw          $t0, 0x1E0($sp)
    ctx->pc = 0x2ce5ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2ce5f0:
    // 0x2ce5f0: 0x24090064  addiu       $t1, $zero, 0x64
    ctx->pc = 0x2ce5f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2ce5f4:
    // 0x2ce5f4: 0xc0b43d8  jal         func_2D0F60
label_2ce5f8:
    if (ctx->pc == 0x2CE5F8u) {
        ctx->pc = 0x2CE5FCu;
        goto label_2ce5fc;
    }
    ctx->pc = 0x2CE5F4u;
    SET_GPR_U32(ctx, 31, 0x2CE5FCu);
    ctx->pc = 0x2D0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0F60u, 0x2CE5F4u, 0x2CE5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE5FCu;
label_2ce5fc:
    // 0x2ce5fc: 0x1440022e  bnez        $v0, . + 4 + (0x22E << 2)
label_2ce600:
    if (ctx->pc == 0x2CE600u) {
        ctx->pc = 0x2CE604u;
        goto label_2ce604;
    }
    ctx->pc = 0x2CE5FCu;
    {
        const bool branch_taken_0x2ce5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce5fc) {
            ctx->pc = 0x2CEEB8u;
            goto label_2ceeb8;
        }
    }
    ctx->pc = 0x2CE604u;
label_2ce604:
    // 0x2ce604: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x2ce604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ce608:
    // 0x2ce608: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2ce608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2ce60c:
    // 0x2ce60c: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x2ce60cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2ce610:
    // 0x2ce610: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ce610u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ce614:
    // 0x2ce614: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2ce614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2ce618:
    // 0x2ce618: 0x320f809  jalr        $t9
label_2ce61c:
    if (ctx->pc == 0x2CE61Cu) {
        ctx->pc = 0x2CE620u;
        goto label_2ce620;
    }
    ctx->pc = 0x2CE618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CE620u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE618u, 0x2CE620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CE620u;
label_2ce620:
    // 0x2ce620: 0x1000022a  b           . + 4 + (0x22A << 2)
label_2ce624:
    if (ctx->pc == 0x2CE624u) {
        ctx->pc = 0x2CE628u;
        goto label_2ce628;
    }
    ctx->pc = 0x2CE620u;
    {
        const bool branch_taken_0x2ce620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce620) {
            ctx->pc = 0x2CEECCu;
            goto label_2ceecc;
        }
    }
    ctx->pc = 0x2CE628u;
label_2ce628:
    // 0x2ce628: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2ce628u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce62c:
    // 0x2ce62c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ce630:
    if (ctx->pc == 0x2CE630u) {
        ctx->pc = 0x2CE634u;
        goto label_2ce634;
    }
    ctx->pc = 0x2CE62Cu;
    {
        const bool branch_taken_0x2ce62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce62c) {
            ctx->pc = 0x2CE638u;
            goto label_2ce638;
        }
    }
    ctx->pc = 0x2CE634u;
label_2ce634:
    // 0x2ce634: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2ce634u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2ce638:
    // 0x2ce638: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ce638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ce63c:
    // 0x2ce63c: 0xc0966e4  jal         func_259B90
label_2ce640:
    if (ctx->pc == 0x2CE640u) {
        ctx->pc = 0x2CE644u;
        goto label_2ce644;
    }
    ctx->pc = 0x2CE63Cu;
    SET_GPR_U32(ctx, 31, 0x2CE644u);
    ctx->pc = 0x259B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259B90u, 0x2CE63Cu, 0x2CE644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE644u;
label_2ce644:
    // 0x2ce644: 0x2a2082b  sltu        $at, $s5, $v0
    ctx->pc = 0x2ce644u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ce648:
    // 0x2ce648: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_2ce64c:
    if (ctx->pc == 0x2CE64Cu) {
        ctx->pc = 0x2CE650u;
        goto label_2ce650;
    }
    ctx->pc = 0x2CE648u;
    {
        const bool branch_taken_0x2ce648 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce648) {
            ctx->pc = 0x2CE698u;
            goto label_2ce698;
        }
    }
    ctx->pc = 0x2CE650u;
label_2ce650:
    // 0x2ce650: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ce650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ce654:
    // 0x2ce654: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2ce654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ce658:
    // 0x2ce658: 0xc0966fc  jal         func_259BF0
label_2ce65c:
    if (ctx->pc == 0x2CE65Cu) {
        ctx->pc = 0x2CE660u;
        goto label_2ce660;
    }
    ctx->pc = 0x2CE658u;
    SET_GPR_U32(ctx, 31, 0x2CE660u);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x2CE658u, 0x2CE660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE660u;
label_2ce660:
    // 0x2ce660: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ce660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ce664:
    // 0x2ce664: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ce664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ce668:
    // 0x2ce668: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ce668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ce66c:
    // 0x2ce66c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_2ce670:
    if (ctx->pc == 0x2CE670u) {
        ctx->pc = 0x2CE674u;
        goto label_2ce674;
    }
    ctx->pc = 0x2CE66Cu;
    {
        const bool branch_taken_0x2ce66c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce66c) {
            ctx->pc = 0x2CE698u;
            goto label_2ce698;
        }
    }
    ctx->pc = 0x2CE674u;
label_2ce674:
    // 0x2ce674: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ce674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ce678:
    // 0x2ce678: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2ce678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ce67c:
    // 0x2ce67c: 0xc0966fc  jal         func_259BF0
label_2ce680:
    if (ctx->pc == 0x2CE680u) {
        ctx->pc = 0x2CE684u;
        goto label_2ce684;
    }
    ctx->pc = 0x2CE67Cu;
    SET_GPR_U32(ctx, 31, 0x2CE684u);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x2CE67Cu, 0x2CE684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE684u;
label_2ce684:
    // 0x2ce684: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ce684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ce688:
    // 0x2ce688: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ce688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ce68c:
    // 0x2ce68c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce690:
    // 0x2ce690: 0x1462ffe8  bne         $v1, $v0, . + 4 + (-0x18 << 2)
label_2ce694:
    if (ctx->pc == 0x2CE694u) {
        ctx->pc = 0x2CE698u;
        goto label_2ce698;
    }
    ctx->pc = 0x2CE690u;
    {
        const bool branch_taken_0x2ce690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ce690) {
            ctx->pc = 0x2CE634u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce634;
        }
    }
    ctx->pc = 0x2CE698u;
label_2ce698:
    // 0x2ce698: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ce698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ce69c:
    // 0x2ce69c: 0xc0966e4  jal         func_259B90
label_2ce6a0:
    if (ctx->pc == 0x2CE6A0u) {
        ctx->pc = 0x2CE6A4u;
        goto label_2ce6a4;
    }
    ctx->pc = 0x2CE69Cu;
    SET_GPR_U32(ctx, 31, 0x2CE6A4u);
    ctx->pc = 0x259B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259B90u, 0x2CE69Cu, 0x2CE6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE6A4u;
label_2ce6a4:
    // 0x2ce6a4: 0x2a2082b  sltu        $at, $s5, $v0
    ctx->pc = 0x2ce6a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ce6a8:
    // 0x2ce6a8: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
label_2ce6ac:
    if (ctx->pc == 0x2CE6ACu) {
        ctx->pc = 0x2CE6B0u;
        goto label_2ce6b0;
    }
    ctx->pc = 0x2CE6A8u;
    {
        const bool branch_taken_0x2ce6a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce6a8) {
            ctx->pc = 0x2CE728u;
            goto label_2ce728;
        }
    }
    ctx->pc = 0x2CE6B0u;
label_2ce6b0:
    // 0x2ce6b0: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2ce6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2ce6b4:
    // 0x2ce6b4: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2ce6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2ce6b8:
    // 0x2ce6b8: 0xc0b06c4  jal         func_2C1B10
label_2ce6bc:
    if (ctx->pc == 0x2CE6BCu) {
        ctx->pc = 0x2CE6C0u;
        goto label_2ce6c0;
    }
    ctx->pc = 0x2CE6B8u;
    SET_GPR_U32(ctx, 31, 0x2CE6C0u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x2CE6B8u, 0x2CE6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE6C0u;
label_2ce6c0:
    // 0x2ce6c0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2ce6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_2ce6c4:
    // 0x2ce6c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ce6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ce6c8:
    // 0x2ce6c8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2ce6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ce6cc:
    // 0x2ce6cc: 0xc0966fc  jal         func_259BF0
label_2ce6d0:
    if (ctx->pc == 0x2CE6D0u) {
        ctx->pc = 0x2CE6D4u;
        goto label_2ce6d4;
    }
    ctx->pc = 0x2CE6CCu;
    SET_GPR_U32(ctx, 31, 0x2CE6D4u);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x2CE6CCu, 0x2CE6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE6D4u;
label_2ce6d4:
    // 0x2ce6d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ce6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ce6d8:
    // 0x2ce6d8: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x2ce6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ce6dc:
    // 0x2ce6dc: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x2ce6dcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2ce6e0:
    // 0x2ce6e0: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x2ce6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2ce6e4:
    // 0x2ce6e4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x2ce6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ce6e8:
    // 0x2ce6e8: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x2ce6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ce6ec:
    // 0x2ce6ec: 0x8fa801e0  lw          $t0, 0x1E0($sp)
    ctx->pc = 0x2ce6ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2ce6f0:
    // 0x2ce6f0: 0x24090064  addiu       $t1, $zero, 0x64
    ctx->pc = 0x2ce6f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2ce6f4:
    // 0x2ce6f4: 0xc0b43d8  jal         func_2D0F60
label_2ce6f8:
    if (ctx->pc == 0x2CE6F8u) {
        ctx->pc = 0x2CE6FCu;
        goto label_2ce6fc;
    }
    ctx->pc = 0x2CE6F4u;
    SET_GPR_U32(ctx, 31, 0x2CE6FCu);
    ctx->pc = 0x2D0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0F60u, 0x2CE6F4u, 0x2CE6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE6FCu;
label_2ce6fc:
    // 0x2ce6fc: 0x144001ee  bnez        $v0, . + 4 + (0x1EE << 2)
label_2ce700:
    if (ctx->pc == 0x2CE700u) {
        ctx->pc = 0x2CE704u;
        goto label_2ce704;
    }
    ctx->pc = 0x2CE6FCu;
    {
        const bool branch_taken_0x2ce6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce6fc) {
            ctx->pc = 0x2CEEB8u;
            goto label_2ceeb8;
        }
    }
    ctx->pc = 0x2CE704u;
label_2ce704:
    // 0x2ce704: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x2ce704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ce708:
    // 0x2ce708: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2ce708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2ce70c:
    // 0x2ce70c: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x2ce70cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2ce710:
    // 0x2ce710: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ce710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ce714:
    // 0x2ce714: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2ce714u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2ce718:
    // 0x2ce718: 0x320f809  jalr        $t9
label_2ce71c:
    if (ctx->pc == 0x2CE71Cu) {
        ctx->pc = 0x2CE720u;
        goto label_2ce720;
    }
    ctx->pc = 0x2CE718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CE720u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE718u, 0x2CE720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CE720u;
label_2ce720:
    // 0x2ce720: 0x100001ea  b           . + 4 + (0x1EA << 2)
label_2ce724:
    if (ctx->pc == 0x2CE724u) {
        ctx->pc = 0x2CE728u;
        goto label_2ce728;
    }
    ctx->pc = 0x2CE720u;
    {
        const bool branch_taken_0x2ce720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce720) {
            ctx->pc = 0x2CEECCu;
            goto label_2ceecc;
        }
    }
    ctx->pc = 0x2CE728u;
label_2ce728:
    // 0x2ce728: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x2ce728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ce72c:
    // 0x2ce72c: 0xc096da0  jal         func_25B680
label_2ce730:
    if (ctx->pc == 0x2CE730u) {
        ctx->pc = 0x2CE734u;
        goto label_2ce734;
    }
    ctx->pc = 0x2CE72Cu;
    SET_GPR_U32(ctx, 31, 0x2CE734u);
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x2CE72Cu, 0x2CE734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE734u;
label_2ce734:
    // 0x2ce734: 0x100001e5  b           . + 4 + (0x1E5 << 2)
label_2ce738:
    if (ctx->pc == 0x2CE738u) {
        ctx->pc = 0x2CE73Cu;
        goto label_2ce73c;
    }
    ctx->pc = 0x2CE734u;
    {
        const bool branch_taken_0x2ce734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce734) {
            ctx->pc = 0x2CEECCu;
            goto label_2ceecc;
        }
    }
    ctx->pc = 0x2CE73Cu;
label_2ce73c:
    // 0x2ce73c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ce73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ce740:
    // 0x2ce740: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ce740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce744:
    // 0x2ce744: 0xc0966fc  jal         func_259BF0
label_2ce748:
    if (ctx->pc == 0x2CE748u) {
        ctx->pc = 0x2CE74Cu;
        goto label_2ce74c;
    }
    ctx->pc = 0x2CE744u;
    SET_GPR_U32(ctx, 31, 0x2CE74Cu);
    ctx->pc = 0x259BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259BF0u, 0x2CE744u, 0x2CE74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE74Cu;
label_2ce74c:
    // 0x2ce74c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ce74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ce750:
    // 0x2ce750: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2ce750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ce754:
    // 0x2ce754: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x2ce754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
label_2ce758:
    // 0x2ce758: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x2ce758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2ce75c:
    // 0x2ce75c: 0xc096e08  jal         func_25B820
label_2ce760:
    if (ctx->pc == 0x2CE760u) {
        ctx->pc = 0x2CE764u;
        goto label_2ce764;
    }
    ctx->pc = 0x2CE75Cu;
    SET_GPR_U32(ctx, 31, 0x2CE764u);
    ctx->pc = 0x25B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B820u, 0x2CE75Cu, 0x2CE764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE764u;
label_2ce764:
    // 0x2ce764: 0xa3a201df  sb          $v0, 0x1DF($sp)
    ctx->pc = 0x2ce764u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 479), (uint8_t)GPR_U32(ctx, 2));
label_2ce768:
    // 0x2ce768: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2ce768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ce76c:
    // 0x2ce76c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2ce76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2ce770:
    // 0x2ce770: 0xc085538  jal         func_2154E0
label_2ce774:
    if (ctx->pc == 0x2CE774u) {
        ctx->pc = 0x2CE778u;
        goto label_2ce778;
    }
    ctx->pc = 0x2CE770u;
    SET_GPR_U32(ctx, 31, 0x2CE778u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CE770u, 0x2CE778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE778u;
label_2ce778:
    // 0x2ce778: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ce778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce77c:
    // 0x2ce77c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ce77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ce780:
    // 0x2ce780: 0xc0480fc  jal         func_1203F0
label_2ce784:
    if (ctx->pc == 0x2CE784u) {
        ctx->pc = 0x2CE788u;
        goto label_2ce788;
    }
    ctx->pc = 0x2CE780u;
    SET_GPR_U32(ctx, 31, 0x2CE788u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2CE780u, 0x2CE788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE788u;
label_2ce788:
    // 0x2ce788: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x2ce788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
label_2ce78c:
    // 0x2ce78c: 0x93a201df  lbu         $v0, 0x1DF($sp)
    ctx->pc = 0x2ce78cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 479)));
label_2ce790:
    // 0x2ce790: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_2ce794:
    if (ctx->pc == 0x2CE794u) {
        ctx->pc = 0x2CE798u;
        goto label_2ce798;
    }
    ctx->pc = 0x2CE790u;
    {
        const bool branch_taken_0x2ce790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce790) {
            ctx->pc = 0x2CE820u;
            goto label_2ce820;
        }
    }
    ctx->pc = 0x2CE798u;
label_2ce798:
    // 0x2ce798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ce798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ce79c:
    // 0x2ce79c: 0xc096880  jal         func_25A200
label_2ce7a0:
    if (ctx->pc == 0x2CE7A0u) {
        ctx->pc = 0x2CE7A4u;
        goto label_2ce7a4;
    }
    ctx->pc = 0x2CE79Cu;
    SET_GPR_U32(ctx, 31, 0x2CE7A4u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2CE79Cu, 0x2CE7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE7A4u;
label_2ce7a4:
    // 0x2ce7a4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ce7a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ce7a8:
    // 0x2ce7a8: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x2ce7a8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ce7ac:
    // 0x2ce7ac: 0x16c0000b  bnez        $s6, . + 4 + (0xB << 2)
label_2ce7b0:
    if (ctx->pc == 0x2CE7B0u) {
        ctx->pc = 0x2CE7B4u;
        goto label_2ce7b4;
    }
    ctx->pc = 0x2CE7ACu;
    {
        const bool branch_taken_0x2ce7ac = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce7ac) {
            ctx->pc = 0x2CE7DCu;
            goto label_2ce7dc;
        }
    }
    ctx->pc = 0x2CE7B4u;
label_2ce7b4:
    // 0x2ce7b4: 0xc0b06cc  jal         func_2C1B30
label_2ce7b8:
    if (ctx->pc == 0x2CE7B8u) {
        ctx->pc = 0x2CE7BCu;
        goto label_2ce7bc;
    }
    ctx->pc = 0x2CE7B4u;
    SET_GPR_U32(ctx, 31, 0x2CE7BCu);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2CE7B4u, 0x2CE7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE7BCu;
label_2ce7bc:
    // 0x2ce7bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ce7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce7c0:
    // 0x2ce7c0: 0xc0b06c4  jal         func_2C1B10
label_2ce7c4:
    if (ctx->pc == 0x2CE7C4u) {
        ctx->pc = 0x2CE7C8u;
        goto label_2ce7c8;
    }
    ctx->pc = 0x2CE7C0u;
    SET_GPR_U32(ctx, 31, 0x2CE7C8u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x2CE7C0u, 0x2CE7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE7C8u;
label_2ce7c8:
    // 0x2ce7c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ce7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce7cc:
    // 0x2ce7cc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2ce7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ce7d0:
    // 0x2ce7d0: 0xc0b4aac  jal         func_2D2AB0
label_2ce7d4:
    if (ctx->pc == 0x2CE7D4u) {
        ctx->pc = 0x2CE7D8u;
        goto label_2ce7d8;
    }
    ctx->pc = 0x2CE7D0u;
    SET_GPR_U32(ctx, 31, 0x2CE7D8u);
    ctx->pc = 0x2D2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2AB0u, 0x2CE7D0u, 0x2CE7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE7D8u;
label_2ce7d8:
    // 0x2ce7d8: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x2ce7d8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2ce7dc:
    // 0x2ce7dc: 0x16c00007  bnez        $s6, . + 4 + (0x7 << 2)
label_2ce7e0:
    if (ctx->pc == 0x2CE7E0u) {
        ctx->pc = 0x2CE7E4u;
        goto label_2ce7e4;
    }
    ctx->pc = 0x2CE7DCu;
    {
        const bool branch_taken_0x2ce7dc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce7dc) {
            ctx->pc = 0x2CE7FCu;
            goto label_2ce7fc;
        }
    }
    ctx->pc = 0x2CE7E4u;
label_2ce7e4:
    // 0x2ce7e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ce7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ce7e8:
    // 0x2ce7e8: 0xc09702c  jal         func_25C0B0
label_2ce7ec:
    if (ctx->pc == 0x2CE7ECu) {
        ctx->pc = 0x2CE7F0u;
        goto label_2ce7f0;
    }
    ctx->pc = 0x2CE7E8u;
    SET_GPR_U32(ctx, 31, 0x2CE7F0u);
    ctx->pc = 0x25C0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C0B0u, 0x2CE7E8u, 0x2CE7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE7F0u;
label_2ce7f0:
    // 0x2ce7f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ce7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce7f4:
    // 0x2ce7f4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2ce7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2ce7f8:
    // 0x2ce7f8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2ce7f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce7fc:
    // 0x2ce7fc: 0x12c00008  beqz        $s6, . + 4 + (0x8 << 2)
label_2ce800:
    if (ctx->pc == 0x2CE800u) {
        ctx->pc = 0x2CE804u;
        goto label_2ce804;
    }
    ctx->pc = 0x2CE7FCu;
    {
        const bool branch_taken_0x2ce7fc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce7fc) {
            ctx->pc = 0x2CE820u;
            goto label_2ce820;
        }
    }
    ctx->pc = 0x2CE804u;
label_2ce804:
    // 0x2ce804: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x2ce804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ce808:
    // 0x2ce808: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ce808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce80c:
    // 0x2ce80c: 0xc096da0  jal         func_25B680
label_2ce810:
    if (ctx->pc == 0x2CE810u) {
        ctx->pc = 0x2CE814u;
        goto label_2ce814;
    }
    ctx->pc = 0x2CE80Cu;
    SET_GPR_U32(ctx, 31, 0x2CE814u);
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x2CE80Cu, 0x2CE814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE814u;
label_2ce814:
    // 0x2ce814: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ce814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce818:
    // 0x2ce818: 0x100001ac  b           . + 4 + (0x1AC << 2)
label_2ce81c:
    if (ctx->pc == 0x2CE81Cu) {
        ctx->pc = 0x2CE820u;
        goto label_2ce820;
    }
    ctx->pc = 0x2CE818u;
    {
        const bool branch_taken_0x2ce818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce818) {
            ctx->pc = 0x2CEECCu;
            goto label_2ceecc;
        }
    }
    ctx->pc = 0x2CE820u;
label_2ce820:
    // 0x2ce820: 0xc0b06cc  jal         func_2C1B30
label_2ce824:
    if (ctx->pc == 0x2CE824u) {
        ctx->pc = 0x2CE828u;
        goto label_2ce828;
    }
    ctx->pc = 0x2CE820u;
    SET_GPR_U32(ctx, 31, 0x2CE828u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2CE820u, 0x2CE828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE828u;
label_2ce828:
    // 0x2ce828: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ce828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce82c:
    // 0x2ce82c: 0xc0b06c4  jal         func_2C1B10
label_2ce830:
    if (ctx->pc == 0x2CE830u) {
        ctx->pc = 0x2CE834u;
        goto label_2ce834;
    }
    ctx->pc = 0x2CE82Cu;
    SET_GPR_U32(ctx, 31, 0x2CE834u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x2CE82Cu, 0x2CE834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE834u;
label_2ce834:
    // 0x2ce834: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ce834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce838:
    // 0x2ce838: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2ce838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ce83c:
    // 0x2ce83c: 0xc0b4d8c  jal         func_2D3630
label_2ce840:
    if (ctx->pc == 0x2CE840u) {
        ctx->pc = 0x2CE844u;
        goto label_2ce844;
    }
    ctx->pc = 0x2CE83Cu;
    SET_GPR_U32(ctx, 31, 0x2CE844u);
    ctx->pc = 0x2D3630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3630u, 0x2CE83Cu, 0x2CE844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE844u;
label_2ce844:
    // 0x2ce844: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ce844u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce848:
    // 0x2ce848: 0xafa301a8  sw          $v1, 0x1A8($sp)
    ctx->pc = 0x2ce848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 3));
label_2ce84c:
    // 0x2ce84c: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x2ce84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2ce850:
    // 0x2ce850: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_2ce854:
    if (ctx->pc == 0x2CE854u) {
        ctx->pc = 0x2CE858u;
        goto label_2ce858;
    }
    ctx->pc = 0x2CE850u;
    {
        const bool branch_taken_0x2ce850 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce850) {
            ctx->pc = 0x2CE8ACu;
            goto label_2ce8ac;
        }
    }
    ctx->pc = 0x2CE858u;
label_2ce858:
    // 0x2ce858: 0x8fa201ac  lw          $v0, 0x1AC($sp)
    ctx->pc = 0x2ce858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_2ce85c:
    // 0x2ce85c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2ce860:
    if (ctx->pc == 0x2CE860u) {
        ctx->pc = 0x2CE864u;
        goto label_2ce864;
    }
    ctx->pc = 0x2CE85Cu;
    {
        const bool branch_taken_0x2ce85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce85c) {
            ctx->pc = 0x2CE8ACu;
            goto label_2ce8ac;
        }
    }
    ctx->pc = 0x2CE864u;
label_2ce864:
    // 0x2ce864: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x2ce864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2ce868:
    // 0x2ce868: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2ce868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2ce86c:
    // 0x2ce86c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ce86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce870:
    // 0x2ce870: 0xc085538  jal         func_2154E0
label_2ce874:
    if (ctx->pc == 0x2CE874u) {
        ctx->pc = 0x2CE878u;
        goto label_2ce878;
    }
    ctx->pc = 0x2CE870u;
    SET_GPR_U32(ctx, 31, 0x2CE878u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CE870u, 0x2CE878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE878u;
label_2ce878:
    // 0x2ce878: 0xafa201a4  sw          $v0, 0x1A4($sp)
    ctx->pc = 0x2ce878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 2));
label_2ce87c:
    // 0x2ce87c: 0x8fa501a4  lw          $a1, 0x1A4($sp)
    ctx->pc = 0x2ce87cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
label_2ce880:
    // 0x2ce880: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ce880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ce884:
    // 0x2ce884: 0xc0480fc  jal         func_1203F0
label_2ce888:
    if (ctx->pc == 0x2CE888u) {
        ctx->pc = 0x2CE88Cu;
        goto label_2ce88c;
    }
    ctx->pc = 0x2CE884u;
    SET_GPR_U32(ctx, 31, 0x2CE88Cu);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2CE884u, 0x2CE88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE88Cu;
label_2ce88c:
    // 0x2ce88c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2ce890:
    if (ctx->pc == 0x2CE890u) {
        ctx->pc = 0x2CE894u;
        goto label_2ce894;
    }
    ctx->pc = 0x2CE88Cu;
    {
        const bool branch_taken_0x2ce88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce88c) {
            ctx->pc = 0x2CE8ACu;
            goto label_2ce8ac;
        }
    }
    ctx->pc = 0x2CE894u;
label_2ce894:
    // 0x2ce894: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x2ce894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ce898:
    // 0x2ce898: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ce898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce89c:
    // 0x2ce89c: 0xc096da0  jal         func_25B680
label_2ce8a0:
    if (ctx->pc == 0x2CE8A0u) {
        ctx->pc = 0x2CE8A4u;
        goto label_2ce8a4;
    }
    ctx->pc = 0x2CE89Cu;
    SET_GPR_U32(ctx, 31, 0x2CE8A4u);
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x2CE89Cu, 0x2CE8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE8A4u;
label_2ce8a4:
    // 0x2ce8a4: 0x10000189  b           . + 4 + (0x189 << 2)
label_2ce8a8:
    if (ctx->pc == 0x2CE8A8u) {
        ctx->pc = 0x2CE8ACu;
        goto label_2ce8ac;
    }
    ctx->pc = 0x2CE8A4u;
    {
        const bool branch_taken_0x2ce8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce8a4) {
            ctx->pc = 0x2CEECCu;
            goto label_2ceecc;
        }
    }
    ctx->pc = 0x2CE8ACu;
label_2ce8ac:
    // 0x2ce8ac: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x2ce8acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ce8b0:
    // 0x2ce8b0: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x2ce8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_2ce8b4:
    // 0x2ce8b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ce8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce8b8:
    // 0x2ce8b8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2ce8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2ce8bc:
    // 0x2ce8bc: 0xc085538  jal         func_2154E0
label_2ce8c0:
    if (ctx->pc == 0x2CE8C0u) {
        ctx->pc = 0x2CE8C4u;
        goto label_2ce8c4;
    }
    ctx->pc = 0x2CE8BCu;
    SET_GPR_U32(ctx, 31, 0x2CE8C4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CE8BCu, 0x2CE8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE8C4u;
label_2ce8c4:
    // 0x2ce8c4: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x2ce8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_2ce8c8:
    // 0x2ce8c8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2ce8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ce8cc:
    // 0x2ce8cc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2ce8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2ce8d0:
    // 0x2ce8d0: 0xc085538  jal         func_2154E0
label_2ce8d4:
    if (ctx->pc == 0x2CE8D4u) {
        ctx->pc = 0x2CE8D8u;
        goto label_2ce8d8;
    }
    ctx->pc = 0x2CE8D0u;
    SET_GPR_U32(ctx, 31, 0x2CE8D8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CE8D0u, 0x2CE8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE8D8u;
label_2ce8d8:
    // 0x2ce8d8: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x2ce8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
label_2ce8dc:
    // 0x2ce8dc: 0x8fa201ac  lw          $v0, 0x1AC($sp)
    ctx->pc = 0x2ce8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_2ce8e0:
    // 0x2ce8e0: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
label_2ce8e4:
    if (ctx->pc == 0x2CE8E4u) {
        ctx->pc = 0x2CE8E8u;
        goto label_2ce8e8;
    }
    ctx->pc = 0x2CE8E0u;
    {
        const bool branch_taken_0x2ce8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce8e0) {
            ctx->pc = 0x2CEA40u;
            goto label_2cea40;
        }
    }
    ctx->pc = 0x2CE8E8u;
label_2ce8e8:
    // 0x2ce8e8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2ce8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_2ce8ec:
    // 0x2ce8ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ce8ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ce8f0:
    // 0x2ce8f0: 0x0  nop
    ctx->pc = 0x2ce8f0u;
    // NOP
label_2ce8f4:
    // 0x2ce8f4: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x2ce8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_2ce8f8:
    // 0x2ce8f8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2ce8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2ce8fc:
    // 0x2ce8fc: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x2ce8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_2ce900:
    // 0x2ce900: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ce900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce904:
    // 0x2ce904: 0xc090f80  jal         func_243E00
label_2ce908:
    if (ctx->pc == 0x2CE908u) {
        ctx->pc = 0x2CE90Cu;
        goto label_2ce90c;
    }
    ctx->pc = 0x2CE904u;
    SET_GPR_U32(ctx, 31, 0x2CE90Cu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2CE904u, 0x2CE90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE90Cu;
label_2ce90c:
    // 0x2ce90c: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x2ce90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce910:
    // 0x2ce910: 0xe7a00194  swc1        $f0, 0x194($sp)
    ctx->pc = 0x2ce910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_2ce914:
    // 0x2ce914: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2ce914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2ce918:
    // 0x2ce918: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x2ce918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
label_2ce91c:
    // 0x2ce91c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ce91cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ce920:
    // 0x2ce920: 0xc090f80  jal         func_243E00
label_2ce924:
    if (ctx->pc == 0x2CE924u) {
        ctx->pc = 0x2CE928u;
        goto label_2ce928;
    }
    ctx->pc = 0x2CE920u;
    SET_GPR_U32(ctx, 31, 0x2CE928u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2CE920u, 0x2CE928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE928u;
label_2ce928:
    // 0x2ce928: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x2ce928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce92c:
    // 0x2ce92c: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x2ce92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_2ce930:
    // 0x2ce930: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x2ce930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ce934:
    // 0x2ce934: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x2ce934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce938:
    // 0x2ce938: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2ce938u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2ce93c:
    // 0x2ce93c: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x2ce93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce940:
    // 0x2ce940: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ce940u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ce944:
    // 0x2ce944: 0x45000039  bc1f        . + 4 + (0x39 << 2)
label_2ce948:
    if (ctx->pc == 0x2CE948u) {
        ctx->pc = 0x2CE94Cu;
        goto label_2ce94c;
    }
    ctx->pc = 0x2CE944u;
    {
        const bool branch_taken_0x2ce944 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ce944) {
            ctx->pc = 0x2CEA2Cu;
            goto label_2cea2c;
        }
    }
    ctx->pc = 0x2CE94Cu;
label_2ce94c:
    // 0x2ce94c: 0xc7a20190  lwc1        $f2, 0x190($sp)
    ctx->pc = 0x2ce94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2ce950:
    // 0x2ce950: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x2ce950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ce954:
    // 0x2ce954: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x2ce954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce958:
    // 0x2ce958: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ce958u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2ce95c:
    // 0x2ce95c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2ce95cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ce960:
    // 0x2ce960: 0x45000032  bc1f        . + 4 + (0x32 << 2)
label_2ce964:
    if (ctx->pc == 0x2CE964u) {
        ctx->pc = 0x2CE968u;
        goto label_2ce968;
    }
    ctx->pc = 0x2CE960u;
    {
        const bool branch_taken_0x2ce960 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ce960) {
            ctx->pc = 0x2CEA2Cu;
            goto label_2cea2c;
        }
    }
    ctx->pc = 0x2CE968u;
label_2ce968:
    // 0x2ce968: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x2ce968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ce96c:
    // 0x2ce96c: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x2ce96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce970:
    // 0x2ce970: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2ce970u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2ce974:
    // 0x2ce974: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x2ce974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
label_2ce978:
    // 0x2ce978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ce978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ce97c:
    // 0x2ce97c: 0x0  nop
    ctx->pc = 0x2ce97cu;
    // NOP
label_2ce980:
    // 0x2ce980: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ce980u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ce984:
    // 0x2ce984: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_2ce988:
    if (ctx->pc == 0x2CE988u) {
        ctx->pc = 0x2CE98Cu;
        goto label_2ce98c;
    }
    ctx->pc = 0x2CE984u;
    {
        const bool branch_taken_0x2ce984 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ce984) {
            ctx->pc = 0x2CE9ACu;
            goto label_2ce9ac;
        }
    }
    ctx->pc = 0x2CE98Cu;
label_2ce98c:
    // 0x2ce98c: 0x3c04c2a0  lui         $a0, 0xC2A0
    ctx->pc = 0x2ce98cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49824 << 16));
label_2ce990:
    // 0x2ce990: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2ce990u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2ce994:
    // 0x2ce994: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x2ce994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ce998:
    // 0x2ce998: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x2ce998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce99c:
    // 0x2ce99c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ce99cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2ce9a0:
    // 0x2ce9a0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2ce9a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ce9a4:
    // 0x2ce9a4: 0x45010026  bc1t        . + 4 + (0x26 << 2)
label_2ce9a8:
    if (ctx->pc == 0x2CE9A8u) {
        ctx->pc = 0x2CE9ACu;
        goto label_2ce9ac;
    }
    ctx->pc = 0x2CE9A4u;
    {
        const bool branch_taken_0x2ce9a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ce9a4) {
            ctx->pc = 0x2CEA40u;
            goto label_2cea40;
        }
    }
    ctx->pc = 0x2CE9ACu;
label_2ce9ac:
    // 0x2ce9ac: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x2ce9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ce9b0:
    // 0x2ce9b0: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x2ce9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce9b4:
    // 0x2ce9b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2ce9b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2ce9b8:
    // 0x2ce9b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ce9b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ce9bc:
    // 0x2ce9bc: 0x0  nop
    ctx->pc = 0x2ce9bcu;
    // NOP
label_2ce9c0:
    // 0x2ce9c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ce9c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ce9c4:
    // 0x2ce9c4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_2ce9c8:
    if (ctx->pc == 0x2CE9C8u) {
        ctx->pc = 0x2CE9CCu;
        goto label_2ce9cc;
    }
    ctx->pc = 0x2CE9C4u;
    {
        const bool branch_taken_0x2ce9c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ce9c4) {
            ctx->pc = 0x2CE9E8u;
            goto label_2ce9e8;
        }
    }
    ctx->pc = 0x2CE9CCu;
label_2ce9cc:
    // 0x2ce9cc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2ce9ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2ce9d0:
    // 0x2ce9d0: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x2ce9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ce9d4:
    // 0x2ce9d4: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x2ce9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce9d8:
    // 0x2ce9d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ce9d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2ce9dc:
    // 0x2ce9dc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2ce9dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ce9e0:
    // 0x2ce9e0: 0x45010017  bc1t        . + 4 + (0x17 << 2)
label_2ce9e4:
    if (ctx->pc == 0x2CE9E4u) {
        ctx->pc = 0x2CE9E8u;
        goto label_2ce9e8;
    }
    ctx->pc = 0x2CE9E0u;
    {
        const bool branch_taken_0x2ce9e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ce9e0) {
            ctx->pc = 0x2CEA40u;
            goto label_2cea40;
        }
    }
    ctx->pc = 0x2CE9E8u;
label_2ce9e8:
    // 0x2ce9e8: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x2ce9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ce9ec:
    // 0x2ce9ec: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x2ce9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ce9f0:
    // 0x2ce9f0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2ce9f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2ce9f4:
    // 0x2ce9f4: 0x3c054320  lui         $a1, 0x4320
    ctx->pc = 0x2ce9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17184 << 16));
label_2ce9f8:
    // 0x2ce9f8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2ce9f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ce9fc:
    // 0x2ce9fc: 0x0  nop
    ctx->pc = 0x2ce9fcu;
    // NOP
label_2cea00:
    // 0x2cea00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cea00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cea04:
    // 0x2cea04: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_2cea08:
    if (ctx->pc == 0x2CEA08u) {
        ctx->pc = 0x2CEA0Cu;
        goto label_2cea0c;
    }
    ctx->pc = 0x2CEA04u;
    {
        const bool branch_taken_0x2cea04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cea04) {
            ctx->pc = 0x2CEA2Cu;
            goto label_2cea2c;
        }
    }
    ctx->pc = 0x2CEA0Cu;
label_2cea0c:
    // 0x2cea0c: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x2cea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_2cea10:
    // 0x2cea10: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2cea10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2cea14:
    // 0x2cea14: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x2cea14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cea18:
    // 0x2cea18: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x2cea18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2cea1c:
    // 0x2cea1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cea1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2cea20:
    // 0x2cea20: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2cea20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cea24:
    // 0x2cea24: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_2cea28:
    if (ctx->pc == 0x2CEA28u) {
        ctx->pc = 0x2CEA2Cu;
        goto label_2cea2c;
    }
    ctx->pc = 0x2CEA24u;
    {
        const bool branch_taken_0x2cea24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cea24) {
            ctx->pc = 0x2CEA40u;
            goto label_2cea40;
        }
    }
    ctx->pc = 0x2CEA2Cu;
label_2cea2c:
    // 0x2cea2c: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x2cea2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2cea30:
    // 0x2cea30: 0xc096da0  jal         func_25B680
label_2cea34:
    if (ctx->pc == 0x2CEA34u) {
        ctx->pc = 0x2CEA38u;
        goto label_2cea38;
    }
    ctx->pc = 0x2CEA30u;
    SET_GPR_U32(ctx, 31, 0x2CEA38u);
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x2CEA30u, 0x2CEA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEA38u;
label_2cea38:
    // 0x2cea38: 0x10000124  b           . + 4 + (0x124 << 2)
label_2cea3c:
    if (ctx->pc == 0x2CEA3Cu) {
        ctx->pc = 0x2CEA40u;
        goto label_2cea40;
    }
    ctx->pc = 0x2CEA38u;
    {
        const bool branch_taken_0x2cea38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cea38) {
            ctx->pc = 0x2CEECCu;
            goto label_2ceecc;
        }
    }
    ctx->pc = 0x2CEA40u;
label_2cea40:
    // 0x2cea40: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2cea40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2cea44:
    // 0x2cea44: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2cea44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cea48:
    // 0x2cea48: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2cea48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2cea4c:
    // 0x2cea4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cea4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cea50:
    // 0x2cea50: 0xc085538  jal         func_2154E0
label_2cea54:
    if (ctx->pc == 0x2CEA54u) {
        ctx->pc = 0x2CEA58u;
        goto label_2cea58;
    }
    ctx->pc = 0x2CEA50u;
    SET_GPR_U32(ctx, 31, 0x2CEA58u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CEA50u, 0x2CEA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEA58u;
label_2cea58:
    // 0x2cea58: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2cea58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cea5c:
    // 0x2cea5c: 0xafa3018c  sw          $v1, 0x18C($sp)
    ctx->pc = 0x2cea5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 3));
label_2cea60:
    // 0x2cea60: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x2cea60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_2cea64:
    // 0x2cea64: 0xc063dd0  jal         func_18F740
label_2cea68:
    if (ctx->pc == 0x2CEA68u) {
        ctx->pc = 0x2CEA6Cu;
        goto label_2cea6c;
    }
    ctx->pc = 0x2CEA64u;
    SET_GPR_U32(ctx, 31, 0x2CEA6Cu);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x2CEA64u, 0x2CEA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEA6Cu;
label_2cea6c:
    // 0x2cea6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cea6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cea70:
    // 0x2cea70: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2cea70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cea74:
    // 0x2cea74: 0xa3a001dd  sb          $zero, 0x1DD($sp)
    ctx->pc = 0x2cea74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 477), (uint8_t)GPR_U32(ctx, 0));
label_2cea78:
    // 0x2cea78: 0xa3a001dc  sb          $zero, 0x1DC($sp)
    ctx->pc = 0x2cea78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 476), (uint8_t)GPR_U32(ctx, 0));
label_2cea7c:
    // 0x2cea7c: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_2cea80:
    if (ctx->pc == 0x2CEA80u) {
        ctx->pc = 0x2CEA84u;
        goto label_2cea84;
    }
    ctx->pc = 0x2CEA7Cu;
    {
        const bool branch_taken_0x2cea7c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cea7c) {
            ctx->pc = 0x2CEAA4u;
            goto label_2ceaa4;
        }
    }
    ctx->pc = 0x2CEA84u;
label_2cea84:
    // 0x2cea84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cea84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2cea88:
    // 0x2cea88: 0xc0ae4b4  jal         func_2B92D0
label_2cea8c:
    if (ctx->pc == 0x2CEA8Cu) {
        ctx->pc = 0x2CEA90u;
        goto label_2cea90;
    }
    ctx->pc = 0x2CEA88u;
    SET_GPR_U32(ctx, 31, 0x2CEA90u);
    ctx->pc = 0x2B92D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92D0u, 0x2CEA88u, 0x2CEA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEA90u;
label_2cea90:
    // 0x2cea90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cea90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cea94:
    // 0x2cea94: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2cea98:
    if (ctx->pc == 0x2CEA98u) {
        ctx->pc = 0x2CEA9Cu;
        goto label_2cea9c;
    }
    ctx->pc = 0x2CEA94u;
    {
        const bool branch_taken_0x2cea94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cea94) {
            ctx->pc = 0x2CEAA4u;
            goto label_2ceaa4;
        }
    }
    ctx->pc = 0x2CEA9Cu;
label_2cea9c:
    // 0x2cea9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2cea9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ceaa0:
    // 0x2ceaa0: 0xa3a601dc  sb          $a2, 0x1DC($sp)
    ctx->pc = 0x2ceaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 476), (uint8_t)GPR_U32(ctx, 6));
label_2ceaa4:
    // 0x2ceaa4: 0x93a701dc  lbu         $a3, 0x1DC($sp)
    ctx->pc = 0x2ceaa4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 476)));
label_2ceaa8:
    // 0x2ceaa8: 0x10e00027  beqz        $a3, . + 4 + (0x27 << 2)
label_2ceaac:
    if (ctx->pc == 0x2CEAACu) {
        ctx->pc = 0x2CEAB0u;
        goto label_2ceab0;
    }
    ctx->pc = 0x2CEAA8u;
    {
        const bool branch_taken_0x2ceaa8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ceaa8) {
            ctx->pc = 0x2CEB48u;
            goto label_2ceb48;
        }
    }
    ctx->pc = 0x2CEAB0u;
label_2ceab0:
    // 0x2ceab0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ceab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ceab4:
    // 0x2ceab4: 0xa3a201db  sb          $v0, 0x1DB($sp)
    ctx->pc = 0x2ceab4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 475), (uint8_t)GPR_U32(ctx, 2));
label_2ceab8:
    // 0x2ceab8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ceab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ceabc:
    // 0x2ceabc: 0xc0ae4b4  jal         func_2B92D0
label_2ceac0:
    if (ctx->pc == 0x2CEAC0u) {
        ctx->pc = 0x2CEAC4u;
        goto label_2ceac4;
    }
    ctx->pc = 0x2CEABCu;
    SET_GPR_U32(ctx, 31, 0x2CEAC4u);
    ctx->pc = 0x2B92D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92D0u, 0x2CEABCu, 0x2CEAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEAC4u;
label_2ceac4:
    // 0x2ceac4: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2ceac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_2ceac8:
    // 0x2ceac8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ceac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ceacc:
    // 0x2ceacc: 0xc0513f0  jal         func_144FC0
label_2cead0:
    if (ctx->pc == 0x2CEAD0u) {
        ctx->pc = 0x2CEAD4u;
        goto label_2cead4;
    }
    ctx->pc = 0x2CEACCu;
    SET_GPR_U32(ctx, 31, 0x2CEAD4u);
    ctx->pc = 0x144FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FC0u, 0x2CEACCu, 0x2CEAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEAD4u;
label_2cead4:
    // 0x2cead4: 0x7ba400d0  lq          $a0, 0xD0($sp)
    ctx->pc = 0x2cead4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2cead8:
    // 0x2cead8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cead8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ceadc:
    // 0x2ceadc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ceadcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ceae0:
    // 0x2ceae0: 0xc099f94  jal         func_267E50
label_2ceae4:
    if (ctx->pc == 0x2CEAE4u) {
        ctx->pc = 0x2CEAE8u;
        goto label_2ceae8;
    }
    ctx->pc = 0x2CEAE0u;
    SET_GPR_U32(ctx, 31, 0x2CEAE8u);
    ctx->pc = 0x267E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267E50u, 0x2CEAE0u, 0x2CEAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEAE8u;
label_2ceae8:
    // 0x2ceae8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_2ceaec:
    if (ctx->pc == 0x2CEAECu) {
        ctx->pc = 0x2CEAF0u;
        goto label_2ceaf0;
    }
    ctx->pc = 0x2CEAE8u;
    {
        const bool branch_taken_0x2ceae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ceae8) {
            ctx->pc = 0x2CEB34u;
            goto label_2ceb34;
        }
    }
    ctx->pc = 0x2CEAF0u;
label_2ceaf0:
    // 0x2ceaf0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ceaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ceaf4:
    // 0x2ceaf4: 0xc0ae4b4  jal         func_2B92D0
label_2ceaf8:
    if (ctx->pc == 0x2CEAF8u) {
        ctx->pc = 0x2CEAFCu;
        goto label_2ceafc;
    }
    ctx->pc = 0x2CEAF4u;
    SET_GPR_U32(ctx, 31, 0x2CEAFCu);
    ctx->pc = 0x2B92D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B92D0u, 0x2CEAF4u, 0x2CEAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEAFCu;
label_2ceafc:
    // 0x2ceafc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2ceafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_2ceb00:
    // 0x2ceb00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ceb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ceb04:
    // 0x2ceb04: 0xc0513f0  jal         func_144FC0
label_2ceb08:
    if (ctx->pc == 0x2CEB08u) {
        ctx->pc = 0x2CEB0Cu;
        goto label_2ceb0c;
    }
    ctx->pc = 0x2CEB04u;
    SET_GPR_U32(ctx, 31, 0x2CEB0Cu);
    ctx->pc = 0x144FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FC0u, 0x2CEB04u, 0x2CEB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEB0Cu;
label_2ceb0c:
    // 0x2ceb0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ceb0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ceb10:
    // 0x2ceb10: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x2ceb10u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2ceb14:
    // 0x2ceb14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ceb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ceb18:
    // 0x2ceb18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ceb18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ceb1c:
    // 0x2ceb1c: 0xc099f94  jal         func_267E50
label_2ceb20:
    if (ctx->pc == 0x2CEB20u) {
        ctx->pc = 0x2CEB24u;
        goto label_2ceb24;
    }
    ctx->pc = 0x2CEB1Cu;
    SET_GPR_U32(ctx, 31, 0x2CEB24u);
    ctx->pc = 0x267E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267E50u, 0x2CEB1Cu, 0x2CEB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEB24u;
label_2ceb24:
    // 0x2ceb24: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ceb24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ceb28:
    // 0x2ceb28: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_2ceb2c:
    if (ctx->pc == 0x2CEB2Cu) {
        ctx->pc = 0x2CEB30u;
        goto label_2ceb30;
    }
    ctx->pc = 0x2CEB28u;
    {
        const bool branch_taken_0x2ceb28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ceb28) {
            ctx->pc = 0x2CEB34u;
            goto label_2ceb34;
        }
    }
    ctx->pc = 0x2CEB30u;
label_2ceb30:
    // 0x2ceb30: 0xa3a001db  sb          $zero, 0x1DB($sp)
    ctx->pc = 0x2ceb30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 475), (uint8_t)GPR_U32(ctx, 0));
label_2ceb34:
    // 0x2ceb34: 0x93a401db  lbu         $a0, 0x1DB($sp)
    ctx->pc = 0x2ceb34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 475)));
label_2ceb38:
    // 0x2ceb38: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2ceb3c:
    if (ctx->pc == 0x2CEB3Cu) {
        ctx->pc = 0x2CEB40u;
        goto label_2ceb40;
    }
    ctx->pc = 0x2CEB38u;
    {
        const bool branch_taken_0x2ceb38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ceb38) {
            ctx->pc = 0x2CEB48u;
            goto label_2ceb48;
        }
    }
    ctx->pc = 0x2CEB40u;
label_2ceb40:
    // 0x2ceb40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ceb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ceb44:
    // 0x2ceb44: 0xa3a501dd  sb          $a1, 0x1DD($sp)
    ctx->pc = 0x2ceb44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 477), (uint8_t)GPR_U32(ctx, 5));
label_2ceb48:
    // 0x2ceb48: 0x93a201dd  lbu         $v0, 0x1DD($sp)
    ctx->pc = 0x2ceb48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 477)));
label_2ceb4c:
    // 0x2ceb4c: 0xa3a201de  sb          $v0, 0x1DE($sp)
    ctx->pc = 0x2ceb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 478), (uint8_t)GPR_U32(ctx, 2));
label_2ceb50:
    // 0x2ceb50: 0x93a401de  lbu         $a0, 0x1DE($sp)
    ctx->pc = 0x2ceb50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 478)));
label_2ceb54:
    // 0x2ceb54: 0x4282b  sltu        $a1, $zero, $a0
    ctx->pc = 0x2ceb54u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2ceb58:
    // 0x2ceb58: 0x38a60001  xori        $a2, $a1, 0x1
    ctx->pc = 0x2ceb58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_2ceb5c:
    // 0x2ceb5c: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x2ceb5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2ceb60:
    // 0x2ceb60: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2ceb60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2ceb64:
    // 0x2ceb64: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_2ceb68:
    if (ctx->pc == 0x2CEB68u) {
        ctx->pc = 0x2CEB6Cu;
        goto label_2ceb6c;
    }
    ctx->pc = 0x2CEB64u;
    {
        const bool branch_taken_0x2ceb64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ceb64) {
            ctx->pc = 0x2CEB78u;
            goto label_2ceb78;
        }
    }
    ctx->pc = 0x2CEB6Cu;
label_2ceb6c:
    // 0x2ceb6c: 0x16800002  bnez        $s4, . + 4 + (0x2 << 2)
label_2ceb70:
    if (ctx->pc == 0x2CEB70u) {
        ctx->pc = 0x2CEB74u;
        goto label_2ceb74;
    }
    ctx->pc = 0x2CEB6Cu;
    {
        const bool branch_taken_0x2ceb6c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ceb6c) {
            ctx->pc = 0x2CEB78u;
            goto label_2ceb78;
        }
    }
    ctx->pc = 0x2CEB74u;
label_2ceb74:
    // 0x2ceb74: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2ceb74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ceb78:
    // 0x2ceb78: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
label_2ceb7c:
    if (ctx->pc == 0x2CEB7Cu) {
        ctx->pc = 0x2CEB80u;
        goto label_2ceb80;
    }
    ctx->pc = 0x2CEB78u;
    {
        const bool branch_taken_0x2ceb78 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ceb78) {
            ctx->pc = 0x2CEBCCu;
            goto label_2cebcc;
        }
    }
    ctx->pc = 0x2CEB80u;
label_2ceb80:
    // 0x2ceb80: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2ceb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2ceb84:
    // 0x2ceb84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ceb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ceb88:
    // 0x2ceb88: 0x24170010  addiu       $s7, $zero, 0x10
    ctx->pc = 0x2ceb88u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2ceb8c:
    // 0x2ceb8c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2ceb8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2ceb90:
    // 0x2ceb90: 0xc085538  jal         func_2154E0
label_2ceb94:
    if (ctx->pc == 0x2CEB94u) {
        ctx->pc = 0x2CEB98u;
        goto label_2ceb98;
    }
    ctx->pc = 0x2CEB90u;
    SET_GPR_U32(ctx, 31, 0x2CEB98u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CEB90u, 0x2CEB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEB98u;
label_2ceb98:
    // 0x2ceb98: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x2ceb98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
label_2ceb9c:
    // 0x2ceb9c: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x2ceb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_2ceba0:
    // 0x2ceba0: 0xc09c5d8  jal         func_271760
label_2ceba4:
    if (ctx->pc == 0x2CEBA4u) {
        ctx->pc = 0x2CEBA8u;
        goto label_2ceba8;
    }
    ctx->pc = 0x2CEBA0u;
    SET_GPR_U32(ctx, 31, 0x2CEBA8u);
    ctx->pc = 0x271760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271760u, 0x2CEBA0u, 0x2CEBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEBA8u;
label_2ceba8:
    // 0x2ceba8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ceba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cebac:
    // 0x2cebac: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_2cebb0:
    if (ctx->pc == 0x2CEBB0u) {
        ctx->pc = 0x2CEBB4u;
        goto label_2cebb4;
    }
    ctx->pc = 0x2CEBACu;
    {
        const bool branch_taken_0x2cebac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cebac) {
            ctx->pc = 0x2CEBCCu;
            goto label_2cebcc;
        }
    }
    ctx->pc = 0x2CEBB4u;
label_2cebb4:
    // 0x2cebb4: 0x8fa6018c  lw          $a2, 0x18C($sp)
    ctx->pc = 0x2cebb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_2cebb8:
    // 0x2cebb8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2cebb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2cebbc:
    // 0x2cebbc: 0xc0ae184  jal         func_2B8610
label_2cebc0:
    if (ctx->pc == 0x2CEBC0u) {
        ctx->pc = 0x2CEBC4u;
        goto label_2cebc4;
    }
    ctx->pc = 0x2CEBBCu;
    SET_GPR_U32(ctx, 31, 0x2CEBC4u);
    ctx->pc = 0x2B8610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8610u, 0x2CEBBCu, 0x2CEBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEBC4u;
label_2cebc4:
    // 0x2cebc4: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x2cebc4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2cebc8:
    // 0x2cebc8: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x2cebc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2cebcc:
    // 0x2cebcc: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
label_2cebd0:
    if (ctx->pc == 0x2CEBD0u) {
        ctx->pc = 0x2CEBD4u;
        goto label_2cebd4;
    }
    ctx->pc = 0x2CEBCCu;
    {
        const bool branch_taken_0x2cebcc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cebcc) {
            ctx->pc = 0x2CEC18u;
            goto label_2cec18;
        }
    }
    ctx->pc = 0x2CEBD4u;
label_2cebd4:
    // 0x2cebd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cebd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cebd8:
    // 0x2cebd8: 0xc096874  jal         func_25A1D0
label_2cebdc:
    if (ctx->pc == 0x2CEBDCu) {
        ctx->pc = 0x2CEBE0u;
        goto label_2cebe0;
    }
    ctx->pc = 0x2CEBD8u;
    SET_GPR_U32(ctx, 31, 0x2CEBE0u);
    ctx->pc = 0x25A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A1D0u, 0x2CEBD8u, 0x2CEBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEBE0u;
label_2cebe0:
    // 0x2cebe0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2cebe4:
    if (ctx->pc == 0x2CEBE4u) {
        ctx->pc = 0x2CEBE8u;
        goto label_2cebe8;
    }
    ctx->pc = 0x2CEBE0u;
    {
        const bool branch_taken_0x2cebe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cebe0) {
            ctx->pc = 0x2CEC18u;
            goto label_2cec18;
        }
    }
    ctx->pc = 0x2CEBE8u;
label_2cebe8:
    // 0x2cebe8: 0xc0b06cc  jal         func_2C1B30
label_2cebec:
    if (ctx->pc == 0x2CEBECu) {
        ctx->pc = 0x2CEBF0u;
        goto label_2cebf0;
    }
    ctx->pc = 0x2CEBE8u;
    SET_GPR_U32(ctx, 31, 0x2CEBF0u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2CEBE8u, 0x2CEBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEBF0u;
label_2cebf0:
    // 0x2cebf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cebf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cebf4:
    // 0x2cebf4: 0xc0b06c4  jal         func_2C1B10
label_2cebf8:
    if (ctx->pc == 0x2CEBF8u) {
        ctx->pc = 0x2CEBFCu;
        goto label_2cebfc;
    }
    ctx->pc = 0x2CEBF4u;
    SET_GPR_U32(ctx, 31, 0x2CEBFCu);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x2CEBF4u, 0x2CEBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEBFCu;
label_2cebfc:
    // 0x2cebfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cebfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cec00:
    // 0x2cec00: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2cec00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2cec04:
    // 0x2cec04: 0xc0b4db0  jal         func_2D36C0
label_2cec08:
    if (ctx->pc == 0x2CEC08u) {
        ctx->pc = 0x2CEC0Cu;
        goto label_2cec0c;
    }
    ctx->pc = 0x2CEC04u;
    SET_GPR_U32(ctx, 31, 0x2CEC0Cu);
    ctx->pc = 0x2D36C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D36C0u, 0x2CEC04u, 0x2CEC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEC0Cu;
label_2cec0c:
    // 0x2cec0c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2cec10:
    if (ctx->pc == 0x2CEC10u) {
        ctx->pc = 0x2CEC14u;
        goto label_2cec14;
    }
    ctx->pc = 0x2CEC0Cu;
    {
        const bool branch_taken_0x2cec0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cec0c) {
            ctx->pc = 0x2CEC18u;
            goto label_2cec18;
        }
    }
    ctx->pc = 0x2CEC14u;
label_2cec14:
    // 0x2cec14: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2cec14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cec18:
    // 0x2cec18: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_2cec1c:
    if (ctx->pc == 0x2CEC1Cu) {
        ctx->pc = 0x2CEC20u;
        goto label_2cec20;
    }
    ctx->pc = 0x2CEC18u;
    {
        const bool branch_taken_0x2cec18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cec18) {
            ctx->pc = 0x2CEC34u;
            goto label_2cec34;
        }
    }
    ctx->pc = 0x2CEC20u;
label_2cec20:
    // 0x2cec20: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x2cec20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_2cec24:
    // 0x2cec24: 0xc0ae184  jal         func_2B8610
label_2cec28:
    if (ctx->pc == 0x2CEC28u) {
        ctx->pc = 0x2CEC2Cu;
        goto label_2cec2c;
    }
    ctx->pc = 0x2CEC24u;
    SET_GPR_U32(ctx, 31, 0x2CEC2Cu);
    ctx->pc = 0x2B8610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8610u, 0x2CEC24u, 0x2CEC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEC2Cu;
label_2cec2c:
    // 0x2cec2c: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
label_2cec30:
    if (ctx->pc == 0x2CEC30u) {
        ctx->pc = 0x2CEC34u;
        goto label_2cec34;
    }
    ctx->pc = 0x2CEC2Cu;
    {
        const bool branch_taken_0x2cec2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cec2c) {
            ctx->pc = 0x2CED8Cu;
            goto label_2ced8c;
        }
    }
    ctx->pc = 0x2CEC34u;
label_2cec34:
    // 0x2cec34: 0x93a401df  lbu         $a0, 0x1DF($sp)
    ctx->pc = 0x2cec34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 479)));
label_2cec38:
    // 0x2cec38: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
label_2cec3c:
    if (ctx->pc == 0x2CEC3Cu) {
        ctx->pc = 0x2CEC40u;
        goto label_2cec40;
    }
    ctx->pc = 0x2CEC38u;
    {
        const bool branch_taken_0x2cec38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cec38) {
            ctx->pc = 0x2CEC70u;
            goto label_2cec70;
        }
    }
    ctx->pc = 0x2CEC40u;
label_2cec40:
    // 0x2cec40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cec40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cec44:
    // 0x2cec44: 0xc096880  jal         func_25A200
label_2cec48:
    if (ctx->pc == 0x2CEC48u) {
        ctx->pc = 0x2CEC4Cu;
        goto label_2cec4c;
    }
    ctx->pc = 0x2CEC44u;
    SET_GPR_U32(ctx, 31, 0x2CEC4Cu);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2CEC44u, 0x2CEC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEC4Cu;
label_2cec4c:
    // 0x2cec4c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2cec50:
    if (ctx->pc == 0x2CEC50u) {
        ctx->pc = 0x2CEC54u;
        goto label_2cec54;
    }
    ctx->pc = 0x2CEC4Cu;
    {
        const bool branch_taken_0x2cec4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cec4c) {
            ctx->pc = 0x2CEC70u;
            goto label_2cec70;
        }
    }
    ctx->pc = 0x2CEC54u;
label_2cec54:
    // 0x2cec54: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x2cec54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2cec58:
    // 0x2cec58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cec58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cec5c:
    // 0x2cec5c: 0xc096da0  jal         func_25B680
label_2cec60:
    if (ctx->pc == 0x2CEC60u) {
        ctx->pc = 0x2CEC64u;
        goto label_2cec64;
    }
    ctx->pc = 0x2CEC5Cu;
    SET_GPR_U32(ctx, 31, 0x2CEC64u);
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x2CEC5Cu, 0x2CEC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEC64u;
label_2cec64:
    // 0x2cec64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cec64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cec68:
    // 0x2cec68: 0x10000046  b           . + 4 + (0x46 << 2)
label_2cec6c:
    if (ctx->pc == 0x2CEC6Cu) {
        ctx->pc = 0x2CEC70u;
        goto label_2cec70;
    }
    ctx->pc = 0x2CEC68u;
    {
        const bool branch_taken_0x2cec68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cec68) {
            ctx->pc = 0x2CED84u;
            goto label_2ced84;
        }
    }
    ctx->pc = 0x2CEC70u;
label_2cec70:
    // 0x2cec70: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x2cec70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2cec74:
    // 0x2cec74: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2cec74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cec78:
    // 0x2cec78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cec78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cec7c:
    // 0x2cec7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cec7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cec80:
    // 0x2cec80: 0xc096e24  jal         func_25B890
label_2cec84:
    if (ctx->pc == 0x2CEC84u) {
        ctx->pc = 0x2CEC88u;
        goto label_2cec88;
    }
    ctx->pc = 0x2CEC80u;
    SET_GPR_U32(ctx, 31, 0x2CEC88u);
    ctx->pc = 0x25B890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B890u, 0x2CEC80u, 0x2CEC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEC88u;
label_2cec88:
    // 0x2cec88: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x2cec88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2cec8c:
    // 0x2cec8c: 0xc0480fc  jal         func_1203F0
label_2cec90:
    if (ctx->pc == 0x2CEC90u) {
        ctx->pc = 0x2CEC94u;
        goto label_2cec94;
    }
    ctx->pc = 0x2CEC8Cu;
    SET_GPR_U32(ctx, 31, 0x2CEC94u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2CEC8Cu, 0x2CEC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEC94u;
label_2cec94:
    // 0x2cec94: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_2cec98:
    if (ctx->pc == 0x2CEC98u) {
        ctx->pc = 0x2CEC9Cu;
        goto label_2cec9c;
    }
    ctx->pc = 0x2CEC94u;
    {
        const bool branch_taken_0x2cec94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cec94) {
            ctx->pc = 0x2CED84u;
            goto label_2ced84;
        }
    }
    ctx->pc = 0x2CEC9Cu;
label_2cec9c:
    // 0x2cec9c: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x2cec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ceca0:
    // 0x2ceca0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2ceca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2ceca4:
    // 0x2ceca4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2ceca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2ceca8:
    // 0x2ceca8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ceca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cecac:
    // 0x2cecac: 0xc085538  jal         func_2154E0
label_2cecb0:
    if (ctx->pc == 0x2CECB0u) {
        ctx->pc = 0x2CECB4u;
        goto label_2cecb4;
    }
    ctx->pc = 0x2CECACu;
    SET_GPR_U32(ctx, 31, 0x2CECB4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CECACu, 0x2CECB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CECB4u;
label_2cecb4:
    // 0x2cecb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cecb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cecb8:
    // 0x2cecb8: 0xafa40184  sw          $a0, 0x184($sp)
    ctx->pc = 0x2cecb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 4));
label_2cecbc:
    // 0x2cecbc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2cecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2cecc0:
    // 0x2cecc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cecc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cecc4:
    // 0x2cecc4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2cecc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2cecc8:
    // 0x2cecc8: 0xc085538  jal         func_2154E0
label_2ceccc:
    if (ctx->pc == 0x2CECCCu) {
        ctx->pc = 0x2CECD0u;
        goto label_2cecd0;
    }
    ctx->pc = 0x2CECC8u;
    SET_GPR_U32(ctx, 31, 0x2CECD0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CECC8u, 0x2CECD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CECD0u;
label_2cecd0:
    // 0x2cecd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cecd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cecd4:
    // 0x2cecd4: 0xafa40180  sw          $a0, 0x180($sp)
    ctx->pc = 0x2cecd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 4));
label_2cecd8:
    // 0x2cecd8: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x2cecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2cecdc:
    // 0x2cecdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cecdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cece0:
    // 0x2cece0: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x2cece0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_2cece4:
    // 0x2cece4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cece4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cece8:
    // 0x2cece8: 0xc090f80  jal         func_243E00
label_2cecec:
    if (ctx->pc == 0x2CECECu) {
        ctx->pc = 0x2CECF0u;
        goto label_2cecf0;
    }
    ctx->pc = 0x2CECE8u;
    SET_GPR_U32(ctx, 31, 0x2CECF0u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2CECE8u, 0x2CECF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CECF0u;
label_2cecf0:
    // 0x2cecf0: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x2cecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2cecf4:
    // 0x2cecf4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2cecf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2cecf8:
    // 0x2cecf8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2cecf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2cecfc:
    // 0x2cecfc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2cecfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ced00:
    // 0x2ced00: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2ced00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ced04:
    // 0x2ced04: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x2ced04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2ced08:
    // 0x2ced08: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2ced08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_2ced0c:
    // 0x2ced0c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2ced0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2ced10:
    // 0x2ced10: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2ced10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2ced14:
    // 0x2ced14: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ced14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ced18:
    // 0x2ced18: 0x8fa60180  lw          $a2, 0x180($sp)
    ctx->pc = 0x2ced18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_2ced1c:
    // 0x2ced1c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2ced1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ced20:
    // 0x2ced20: 0xc090f80  jal         func_243E00
label_2ced24:
    if (ctx->pc == 0x2CED24u) {
        ctx->pc = 0x2CED28u;
        goto label_2ced28;
    }
    ctx->pc = 0x2CED20u;
    SET_GPR_U32(ctx, 31, 0x2CED28u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2CED20u, 0x2CED28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CED28u;
label_2ced28:
    // 0x2ced28: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x2ced28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2ced2c:
    // 0x2ced2c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x2ced2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2ced30:
    // 0x2ced30: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x2ced30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2ced34:
    // 0x2ced34: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x2ced34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ced38:
    // 0x2ced38: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x2ced38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ced3c:
    // 0x2ced3c: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x2ced3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_2ced40:
    // 0x2ced40: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x2ced40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_2ced44:
    // 0x2ced44: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2ced44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_2ced48:
    // 0x2ced48: 0x27b70140  addiu       $s7, $sp, 0x140
    ctx->pc = 0x2ced48u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2ced4c:
    // 0x2ced4c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2ced4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2ced50:
    // 0x2ced50: 0x27be0130  addiu       $fp, $sp, 0x130
    ctx->pc = 0x2ced50u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2ced54:
    // 0x2ced54: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2ced54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2ced58:
    // 0x2ced58: 0xc0b5f04  jal         func_2D7C10
label_2ced5c:
    if (ctx->pc == 0x2CED5Cu) {
        ctx->pc = 0x2CED60u;
        goto label_2ced60;
    }
    ctx->pc = 0x2CED58u;
    SET_GPR_U32(ctx, 31, 0x2CED60u);
    ctx->pc = 0x2D7C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C10u, 0x2CED58u, 0x2CED60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CED60u;
label_2ced60:
    // 0x2ced60: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x2ced60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_2ced64:
    // 0x2ced64: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2ced64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_2ced68:
    // 0x2ced68: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2ced68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2ced6c:
    // 0x2ced6c: 0x8fa40184  lw          $a0, 0x184($sp)
    ctx->pc = 0x2ced6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_2ced70:
    // 0x2ced70: 0xc7ac017c  lwc1        $f12, 0x17C($sp)
    ctx->pc = 0x2ced70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ced74:
    // 0x2ced74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ced74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ced78:
    // 0x2ced78: 0xc090fe0  jal         func_243F80
label_2ced7c:
    if (ctx->pc == 0x2CED7Cu) {
        ctx->pc = 0x2CED80u;
        goto label_2ced80;
    }
    ctx->pc = 0x2CED78u;
    SET_GPR_U32(ctx, 31, 0x2CED80u);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x2CED78u, 0x2CED80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CED80u;
label_2ced80:
    // 0x2ced80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ced80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ced84:
    // 0x2ced84: 0x10000051  b           . + 4 + (0x51 << 2)
label_2ced88:
    if (ctx->pc == 0x2CED88u) {
        ctx->pc = 0x2CED8Cu;
        goto label_2ced8c;
    }
    ctx->pc = 0x2CED84u;
    {
        const bool branch_taken_0x2ced84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ced84) {
            ctx->pc = 0x2CEECCu;
            goto label_2ceecc;
        }
    }
    ctx->pc = 0x2CED8Cu;
label_2ced8c:
    // 0x2ced8c: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x2ced8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_2ced90:
    // 0x2ced90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ced90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ced94:
    // 0x2ced94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ced94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ced98:
    // 0x2ced98: 0xc0ae044  jal         func_2B8110
label_2ced9c:
    if (ctx->pc == 0x2CED9Cu) {
        ctx->pc = 0x2CEDA0u;
        goto label_2ceda0;
    }
    ctx->pc = 0x2CED98u;
    SET_GPR_U32(ctx, 31, 0x2CEDA0u);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x2CED98u, 0x2CEDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEDA0u;
label_2ceda0:
    // 0x2ceda0: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x2ceda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ceda4:
    // 0x2ceda4: 0xc0480fc  jal         func_1203F0
label_2ceda8:
    if (ctx->pc == 0x2CEDA8u) {
        ctx->pc = 0x2CEDACu;
        goto label_2cedac;
    }
    ctx->pc = 0x2CEDA4u;
    SET_GPR_U32(ctx, 31, 0x2CEDACu);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2CEDA4u, 0x2CEDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEDACu;
label_2cedac:
    // 0x2cedac: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x2cedacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
label_2cedb0:
    // 0x2cedb0: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2cedb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_2cedb4:
    // 0x2cedb4: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
label_2cedb8:
    if (ctx->pc == 0x2CEDB8u) {
        ctx->pc = 0x2CEDBCu;
        goto label_2cedbc;
    }
    ctx->pc = 0x2CEDB4u;
    {
        const bool branch_taken_0x2cedb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cedb4) {
            ctx->pc = 0x2CEE80u;
            goto label_2cee80;
        }
    }
    ctx->pc = 0x2CEDBCu;
label_2cedbc:
    // 0x2cedbc: 0x8fa401ac  lw          $a0, 0x1AC($sp)
    ctx->pc = 0x2cedbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_2cedc0:
    // 0x2cedc0: 0x10800039  beqz        $a0, . + 4 + (0x39 << 2)
label_2cedc4:
    if (ctx->pc == 0x2CEDC4u) {
        ctx->pc = 0x2CEDC8u;
        goto label_2cedc8;
    }
    ctx->pc = 0x2CEDC0u;
    {
        const bool branch_taken_0x2cedc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cedc0) {
            ctx->pc = 0x2CEEA8u;
            goto label_2ceea8;
        }
    }
    ctx->pc = 0x2CEDC8u;
label_2cedc8:
    // 0x2cedc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cedc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cedcc:
    // 0x2cedcc: 0xc0968a8  jal         func_25A2A0
label_2cedd0:
    if (ctx->pc == 0x2CEDD0u) {
        ctx->pc = 0x2CEDD4u;
        goto label_2cedd4;
    }
    ctx->pc = 0x2CEDCCu;
    SET_GPR_U32(ctx, 31, 0x2CEDD4u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2CEDCCu, 0x2CEDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEDD4u;
label_2cedd4:
    // 0x2cedd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cedd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cedd8:
    // 0x2cedd8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2cedd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ceddc:
    // 0x2ceddc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2ceddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2cede0:
    // 0x2cede0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cede0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cede4:
    // 0x2cede4: 0xc085538  jal         func_2154E0
label_2cede8:
    if (ctx->pc == 0x2CEDE8u) {
        ctx->pc = 0x2CEDECu;
        goto label_2cedec;
    }
    ctx->pc = 0x2CEDE4u;
    SET_GPR_U32(ctx, 31, 0x2CEDECu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CEDE4u, 0x2CEDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEDECu;
label_2cedec:
    // 0x2cedec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cedecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cedf0:
    // 0x2cedf0: 0xafa50174  sw          $a1, 0x174($sp)
    ctx->pc = 0x2cedf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 5));
label_2cedf4:
    // 0x2cedf4: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x2cedf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_2cedf8:
    // 0x2cedf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cedf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cedfc:
    // 0x2cedfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2cedfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cee00:
    // 0x2cee00: 0x8fa60178  lw          $a2, 0x178($sp)
    ctx->pc = 0x2cee00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_2cee04:
    // 0x2cee04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cee04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cee08:
    // 0x2cee08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2cee08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cee0c:
    // 0x2cee0c: 0xc09bca0  jal         func_26F280
label_2cee10:
    if (ctx->pc == 0x2CEE10u) {
        ctx->pc = 0x2CEE14u;
        goto label_2cee14;
    }
    ctx->pc = 0x2CEE0Cu;
    SET_GPR_U32(ctx, 31, 0x2CEE14u);
    ctx->pc = 0x26F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F280u, 0x2CEE0Cu, 0x2CEE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEE14u;
label_2cee14:
    // 0x2cee14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cee14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cee18:
    // 0x2cee18: 0xafa40170  sw          $a0, 0x170($sp)
    ctx->pc = 0x2cee18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 4));
label_2cee1c:
    // 0x2cee1c: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2cee1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2cee20:
    // 0x2cee20: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2cee20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cee24:
    // 0x2cee24: 0xc09ac08  jal         func_26B020
label_2cee28:
    if (ctx->pc == 0x2CEE28u) {
        ctx->pc = 0x2CEE2Cu;
        goto label_2cee2c;
    }
    ctx->pc = 0x2CEE24u;
    SET_GPR_U32(ctx, 31, 0x2CEE2Cu);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x2CEE24u, 0x2CEE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEE2Cu;
label_2cee2c:
    // 0x2cee2c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2cee2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_2cee30:
    // 0x2cee30: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2cee30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2cee34:
    // 0x2cee34: 0xafa40124  sw          $a0, 0x124($sp)
    ctx->pc = 0x2cee34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 4));
label_2cee38:
    // 0x2cee38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cee38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cee3c:
    // 0x2cee3c: 0xc0968a8  jal         func_25A2A0
label_2cee40:
    if (ctx->pc == 0x2CEE40u) {
        ctx->pc = 0x2CEE44u;
        goto label_2cee44;
    }
    ctx->pc = 0x2CEE3Cu;
    SET_GPR_U32(ctx, 31, 0x2CEE44u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2CEE3Cu, 0x2CEE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEE44u;
label_2cee44:
    // 0x2cee44: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x2cee44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
label_2cee48:
    // 0x2cee48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cee48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cee4c:
    // 0x2cee4c: 0xc096ea4  jal         func_25BA90
label_2cee50:
    if (ctx->pc == 0x2CEE50u) {
        ctx->pc = 0x2CEE54u;
        goto label_2cee54;
    }
    ctx->pc = 0x2CEE4Cu;
    SET_GPR_U32(ctx, 31, 0x2CEE54u);
    ctx->pc = 0x25BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BA90u, 0x2CEE4Cu, 0x2CEE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEE54u;
label_2cee54:
    // 0x2cee54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cee54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cee58:
    // 0x2cee58: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x2cee58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
label_2cee5c:
    // 0x2cee5c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2cee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2cee60:
    // 0x2cee60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cee60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cee64:
    // 0x2cee64: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2cee64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2cee68:
    // 0x2cee68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2cee68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cee6c:
    // 0x2cee6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cee6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cee70:
    // 0x2cee70: 0xc0af028  jal         func_2BC0A0
label_2cee74:
    if (ctx->pc == 0x2CEE74u) {
        ctx->pc = 0x2CEE78u;
        goto label_2cee78;
    }
    ctx->pc = 0x2CEE70u;
    SET_GPR_U32(ctx, 31, 0x2CEE78u);
    ctx->pc = 0x2BC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0A0u, 0x2CEE70u, 0x2CEE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEE78u;
label_2cee78:
    // 0x2cee78: 0x10000014  b           . + 4 + (0x14 << 2)
label_2cee7c:
    if (ctx->pc == 0x2CEE7Cu) {
        ctx->pc = 0x2CEE80u;
        goto label_2cee80;
    }
    ctx->pc = 0x2CEE78u;
    {
        const bool branch_taken_0x2cee78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cee78) {
            ctx->pc = 0x2CEECCu;
            goto label_2ceecc;
        }
    }
    ctx->pc = 0x2CEE80u;
label_2cee80:
    // 0x2cee80: 0x8fa401ac  lw          $a0, 0x1AC($sp)
    ctx->pc = 0x2cee80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_2cee84:
    // 0x2cee84: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_2cee88:
    if (ctx->pc == 0x2CEE88u) {
        ctx->pc = 0x2CEE8Cu;
        goto label_2cee8c;
    }
    ctx->pc = 0x2CEE84u;
    {
        const bool branch_taken_0x2cee84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cee84) {
            ctx->pc = 0x2CEEA8u;
            goto label_2ceea8;
        }
    }
    ctx->pc = 0x2CEE8Cu;
label_2cee8c:
    // 0x2cee8c: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x2cee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2cee90:
    // 0x2cee90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cee90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cee94:
    // 0x2cee94: 0xc096da0  jal         func_25B680
label_2cee98:
    if (ctx->pc == 0x2CEE98u) {
        ctx->pc = 0x2CEE9Cu;
        goto label_2cee9c;
    }
    ctx->pc = 0x2CEE94u;
    SET_GPR_U32(ctx, 31, 0x2CEE9Cu);
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x2CEE94u, 0x2CEE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEE9Cu;
label_2cee9c:
    // 0x2cee9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cee9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ceea0:
    // 0x2ceea0: 0x1000000a  b           . + 4 + (0xA << 2)
label_2ceea4:
    if (ctx->pc == 0x2CEEA4u) {
        ctx->pc = 0x2CEEA8u;
        goto label_2ceea8;
    }
    ctx->pc = 0x2CEEA0u;
    {
        const bool branch_taken_0x2ceea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ceea0) {
            ctx->pc = 0x2CEECCu;
            goto label_2ceecc;
        }
    }
    ctx->pc = 0x2CEEA8u;
label_2ceea8:
    // 0x2ceea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ceea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ceeac:
    // 0x2ceeac: 0xc096da0  jal         func_25B680
label_2ceeb0:
    if (ctx->pc == 0x2CEEB0u) {
        ctx->pc = 0x2CEEB4u;
        goto label_2ceeb4;
    }
    ctx->pc = 0x2CEEACu;
    SET_GPR_U32(ctx, 31, 0x2CEEB4u);
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x2CEEACu, 0x2CEEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEEB4u;
label_2ceeb4:
    // 0x2ceeb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ceeb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ceeb8:
    // 0x2ceeb8: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x2ceeb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_2ceebc:
    // 0x2ceebc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2ceebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ceec0:
    // 0x2ceec0: 0xc096d20  jal         func_25B480
label_2ceec4:
    if (ctx->pc == 0x2CEEC4u) {
        ctx->pc = 0x2CEEC8u;
        goto label_2ceec8;
    }
    ctx->pc = 0x2CEEC0u;
    SET_GPR_U32(ctx, 31, 0x2CEEC8u);
    ctx->pc = 0x25B480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B480u, 0x2CEEC0u, 0x2CEEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEEC8u;
label_2ceec8:
    // 0x2ceec8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2ceec8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ceecc:
    // 0x2ceecc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2ceeccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2ceed0:
    // 0x2ceed0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2ceed0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2ceed4:
    // 0x2ceed4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2ceed4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2ceed8:
    // 0x2ceed8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2ceed8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ceedc:
    // 0x2ceedc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ceedcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ceee0:
    // 0x2ceee0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ceee0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ceee4:
    // 0x2ceee4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ceee4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ceee8:
    // 0x2ceee8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ceee8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ceeec:
    // 0x2ceeec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ceeecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ceef0:
    // 0x2ceef0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ceef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ceef4:
    // 0x2ceef4: 0x27bd0210  addiu       $sp, $sp, 0x210
    ctx->pc = 0x2ceef4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_2ceef8:
    // 0x2ceef8: 0x3e00008  jr          $ra
label_2ceefc:
    if (ctx->pc == 0x2CEEFCu) {
        ctx->pc = 0x2CEF00u;
        goto label_fallthrough_0x2ceef8;
    }
    ctx->pc = 0x2CEEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ceef8:
    ctx->pc = 0x2CEF00u;
}
