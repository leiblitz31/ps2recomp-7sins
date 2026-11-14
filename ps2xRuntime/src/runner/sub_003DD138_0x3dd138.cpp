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

// Function: sub_003DD138
// Address: 0x3dd138 - 0x3de468
void sub_003DD138_0x3dd138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD138_0x3dd138");
#endif

    switch (ctx->pc) {
        case 0x3dd138u: goto label_3dd138;
        case 0x3dd13cu: goto label_3dd13c;
        case 0x3dd140u: goto label_3dd140;
        case 0x3dd144u: goto label_3dd144;
        case 0x3dd148u: goto label_3dd148;
        case 0x3dd14cu: goto label_3dd14c;
        case 0x3dd150u: goto label_3dd150;
        case 0x3dd154u: goto label_3dd154;
        case 0x3dd158u: goto label_3dd158;
        case 0x3dd15cu: goto label_3dd15c;
        case 0x3dd160u: goto label_3dd160;
        case 0x3dd164u: goto label_3dd164;
        case 0x3dd168u: goto label_3dd168;
        case 0x3dd16cu: goto label_3dd16c;
        case 0x3dd170u: goto label_3dd170;
        case 0x3dd174u: goto label_3dd174;
        case 0x3dd178u: goto label_3dd178;
        case 0x3dd17cu: goto label_3dd17c;
        case 0x3dd180u: goto label_3dd180;
        case 0x3dd184u: goto label_3dd184;
        case 0x3dd188u: goto label_3dd188;
        case 0x3dd18cu: goto label_3dd18c;
        case 0x3dd190u: goto label_3dd190;
        case 0x3dd194u: goto label_3dd194;
        case 0x3dd198u: goto label_3dd198;
        case 0x3dd19cu: goto label_3dd19c;
        case 0x3dd1a0u: goto label_3dd1a0;
        case 0x3dd1a4u: goto label_3dd1a4;
        case 0x3dd1a8u: goto label_3dd1a8;
        case 0x3dd1acu: goto label_3dd1ac;
        case 0x3dd1b0u: goto label_3dd1b0;
        case 0x3dd1b4u: goto label_3dd1b4;
        case 0x3dd1b8u: goto label_3dd1b8;
        case 0x3dd1bcu: goto label_3dd1bc;
        case 0x3dd1c0u: goto label_3dd1c0;
        case 0x3dd1c4u: goto label_3dd1c4;
        case 0x3dd1c8u: goto label_3dd1c8;
        case 0x3dd1ccu: goto label_3dd1cc;
        case 0x3dd1d0u: goto label_3dd1d0;
        case 0x3dd1d4u: goto label_3dd1d4;
        case 0x3dd1d8u: goto label_3dd1d8;
        case 0x3dd1dcu: goto label_3dd1dc;
        case 0x3dd1e0u: goto label_3dd1e0;
        case 0x3dd1e4u: goto label_3dd1e4;
        case 0x3dd1e8u: goto label_3dd1e8;
        case 0x3dd1ecu: goto label_3dd1ec;
        case 0x3dd1f0u: goto label_3dd1f0;
        case 0x3dd1f4u: goto label_3dd1f4;
        case 0x3dd1f8u: goto label_3dd1f8;
        case 0x3dd1fcu: goto label_3dd1fc;
        case 0x3dd200u: goto label_3dd200;
        case 0x3dd204u: goto label_3dd204;
        case 0x3dd208u: goto label_3dd208;
        case 0x3dd20cu: goto label_3dd20c;
        case 0x3dd210u: goto label_3dd210;
        case 0x3dd214u: goto label_3dd214;
        case 0x3dd218u: goto label_3dd218;
        case 0x3dd21cu: goto label_3dd21c;
        case 0x3dd220u: goto label_3dd220;
        case 0x3dd224u: goto label_3dd224;
        case 0x3dd228u: goto label_3dd228;
        case 0x3dd22cu: goto label_3dd22c;
        case 0x3dd230u: goto label_3dd230;
        case 0x3dd234u: goto label_3dd234;
        case 0x3dd238u: goto label_3dd238;
        case 0x3dd23cu: goto label_3dd23c;
        case 0x3dd240u: goto label_3dd240;
        case 0x3dd244u: goto label_3dd244;
        case 0x3dd248u: goto label_3dd248;
        case 0x3dd24cu: goto label_3dd24c;
        case 0x3dd250u: goto label_3dd250;
        case 0x3dd254u: goto label_3dd254;
        case 0x3dd258u: goto label_3dd258;
        case 0x3dd25cu: goto label_3dd25c;
        case 0x3dd260u: goto label_3dd260;
        case 0x3dd264u: goto label_3dd264;
        case 0x3dd268u: goto label_3dd268;
        case 0x3dd26cu: goto label_3dd26c;
        case 0x3dd270u: goto label_3dd270;
        case 0x3dd274u: goto label_3dd274;
        case 0x3dd278u: goto label_3dd278;
        case 0x3dd27cu: goto label_3dd27c;
        case 0x3dd280u: goto label_3dd280;
        case 0x3dd284u: goto label_3dd284;
        case 0x3dd288u: goto label_3dd288;
        case 0x3dd28cu: goto label_3dd28c;
        case 0x3dd290u: goto label_3dd290;
        case 0x3dd294u: goto label_3dd294;
        case 0x3dd298u: goto label_3dd298;
        case 0x3dd29cu: goto label_3dd29c;
        case 0x3dd2a0u: goto label_3dd2a0;
        case 0x3dd2a4u: goto label_3dd2a4;
        case 0x3dd2a8u: goto label_3dd2a8;
        case 0x3dd2acu: goto label_3dd2ac;
        case 0x3dd2b0u: goto label_3dd2b0;
        case 0x3dd2b4u: goto label_3dd2b4;
        case 0x3dd2b8u: goto label_3dd2b8;
        case 0x3dd2bcu: goto label_3dd2bc;
        case 0x3dd2c0u: goto label_3dd2c0;
        case 0x3dd2c4u: goto label_3dd2c4;
        case 0x3dd2c8u: goto label_3dd2c8;
        case 0x3dd2ccu: goto label_3dd2cc;
        case 0x3dd2d0u: goto label_3dd2d0;
        case 0x3dd2d4u: goto label_3dd2d4;
        case 0x3dd2d8u: goto label_3dd2d8;
        case 0x3dd2dcu: goto label_3dd2dc;
        case 0x3dd2e0u: goto label_3dd2e0;
        case 0x3dd2e4u: goto label_3dd2e4;
        case 0x3dd2e8u: goto label_3dd2e8;
        case 0x3dd2ecu: goto label_3dd2ec;
        case 0x3dd2f0u: goto label_3dd2f0;
        case 0x3dd2f4u: goto label_3dd2f4;
        case 0x3dd2f8u: goto label_3dd2f8;
        case 0x3dd2fcu: goto label_3dd2fc;
        case 0x3dd300u: goto label_3dd300;
        case 0x3dd304u: goto label_3dd304;
        case 0x3dd308u: goto label_3dd308;
        case 0x3dd30cu: goto label_3dd30c;
        case 0x3dd310u: goto label_3dd310;
        case 0x3dd314u: goto label_3dd314;
        case 0x3dd318u: goto label_3dd318;
        case 0x3dd31cu: goto label_3dd31c;
        case 0x3dd320u: goto label_3dd320;
        case 0x3dd324u: goto label_3dd324;
        case 0x3dd328u: goto label_3dd328;
        case 0x3dd32cu: goto label_3dd32c;
        case 0x3dd330u: goto label_3dd330;
        case 0x3dd334u: goto label_3dd334;
        case 0x3dd338u: goto label_3dd338;
        case 0x3dd33cu: goto label_3dd33c;
        case 0x3dd340u: goto label_3dd340;
        case 0x3dd344u: goto label_3dd344;
        case 0x3dd348u: goto label_3dd348;
        case 0x3dd34cu: goto label_3dd34c;
        case 0x3dd350u: goto label_3dd350;
        case 0x3dd354u: goto label_3dd354;
        case 0x3dd358u: goto label_3dd358;
        case 0x3dd35cu: goto label_3dd35c;
        case 0x3dd360u: goto label_3dd360;
        case 0x3dd364u: goto label_3dd364;
        case 0x3dd368u: goto label_3dd368;
        case 0x3dd36cu: goto label_3dd36c;
        case 0x3dd370u: goto label_3dd370;
        case 0x3dd374u: goto label_3dd374;
        case 0x3dd378u: goto label_3dd378;
        case 0x3dd37cu: goto label_3dd37c;
        case 0x3dd380u: goto label_3dd380;
        case 0x3dd384u: goto label_3dd384;
        case 0x3dd388u: goto label_3dd388;
        case 0x3dd38cu: goto label_3dd38c;
        case 0x3dd390u: goto label_3dd390;
        case 0x3dd394u: goto label_3dd394;
        case 0x3dd398u: goto label_3dd398;
        case 0x3dd39cu: goto label_3dd39c;
        case 0x3dd3a0u: goto label_3dd3a0;
        case 0x3dd3a4u: goto label_3dd3a4;
        case 0x3dd3a8u: goto label_3dd3a8;
        case 0x3dd3acu: goto label_3dd3ac;
        case 0x3dd3b0u: goto label_3dd3b0;
        case 0x3dd3b4u: goto label_3dd3b4;
        case 0x3dd3b8u: goto label_3dd3b8;
        case 0x3dd3bcu: goto label_3dd3bc;
        case 0x3dd3c0u: goto label_3dd3c0;
        case 0x3dd3c4u: goto label_3dd3c4;
        case 0x3dd3c8u: goto label_3dd3c8;
        case 0x3dd3ccu: goto label_3dd3cc;
        case 0x3dd3d0u: goto label_3dd3d0;
        case 0x3dd3d4u: goto label_3dd3d4;
        case 0x3dd3d8u: goto label_3dd3d8;
        case 0x3dd3dcu: goto label_3dd3dc;
        case 0x3dd3e0u: goto label_3dd3e0;
        case 0x3dd3e4u: goto label_3dd3e4;
        case 0x3dd3e8u: goto label_3dd3e8;
        case 0x3dd3ecu: goto label_3dd3ec;
        case 0x3dd3f0u: goto label_3dd3f0;
        case 0x3dd3f4u: goto label_3dd3f4;
        case 0x3dd3f8u: goto label_3dd3f8;
        case 0x3dd3fcu: goto label_3dd3fc;
        case 0x3dd400u: goto label_3dd400;
        case 0x3dd404u: goto label_3dd404;
        case 0x3dd408u: goto label_3dd408;
        case 0x3dd40cu: goto label_3dd40c;
        case 0x3dd410u: goto label_3dd410;
        case 0x3dd414u: goto label_3dd414;
        case 0x3dd418u: goto label_3dd418;
        case 0x3dd41cu: goto label_3dd41c;
        case 0x3dd420u: goto label_3dd420;
        case 0x3dd424u: goto label_3dd424;
        case 0x3dd428u: goto label_3dd428;
        case 0x3dd42cu: goto label_3dd42c;
        case 0x3dd430u: goto label_3dd430;
        case 0x3dd434u: goto label_3dd434;
        case 0x3dd438u: goto label_3dd438;
        case 0x3dd43cu: goto label_3dd43c;
        case 0x3dd440u: goto label_3dd440;
        case 0x3dd444u: goto label_3dd444;
        case 0x3dd448u: goto label_3dd448;
        case 0x3dd44cu: goto label_3dd44c;
        case 0x3dd450u: goto label_3dd450;
        case 0x3dd454u: goto label_3dd454;
        case 0x3dd458u: goto label_3dd458;
        case 0x3dd45cu: goto label_3dd45c;
        case 0x3dd460u: goto label_3dd460;
        case 0x3dd464u: goto label_3dd464;
        case 0x3dd468u: goto label_3dd468;
        case 0x3dd46cu: goto label_3dd46c;
        case 0x3dd470u: goto label_3dd470;
        case 0x3dd474u: goto label_3dd474;
        case 0x3dd478u: goto label_3dd478;
        case 0x3dd47cu: goto label_3dd47c;
        case 0x3dd480u: goto label_3dd480;
        case 0x3dd484u: goto label_3dd484;
        case 0x3dd488u: goto label_3dd488;
        case 0x3dd48cu: goto label_3dd48c;
        case 0x3dd490u: goto label_3dd490;
        case 0x3dd494u: goto label_3dd494;
        case 0x3dd498u: goto label_3dd498;
        case 0x3dd49cu: goto label_3dd49c;
        case 0x3dd4a0u: goto label_3dd4a0;
        case 0x3dd4a4u: goto label_3dd4a4;
        case 0x3dd4a8u: goto label_3dd4a8;
        case 0x3dd4acu: goto label_3dd4ac;
        case 0x3dd4b0u: goto label_3dd4b0;
        case 0x3dd4b4u: goto label_3dd4b4;
        case 0x3dd4b8u: goto label_3dd4b8;
        case 0x3dd4bcu: goto label_3dd4bc;
        case 0x3dd4c0u: goto label_3dd4c0;
        case 0x3dd4c4u: goto label_3dd4c4;
        case 0x3dd4c8u: goto label_3dd4c8;
        case 0x3dd4ccu: goto label_3dd4cc;
        case 0x3dd4d0u: goto label_3dd4d0;
        case 0x3dd4d4u: goto label_3dd4d4;
        case 0x3dd4d8u: goto label_3dd4d8;
        case 0x3dd4dcu: goto label_3dd4dc;
        case 0x3dd4e0u: goto label_3dd4e0;
        case 0x3dd4e4u: goto label_3dd4e4;
        case 0x3dd4e8u: goto label_3dd4e8;
        case 0x3dd4ecu: goto label_3dd4ec;
        case 0x3dd4f0u: goto label_3dd4f0;
        case 0x3dd4f4u: goto label_3dd4f4;
        case 0x3dd4f8u: goto label_3dd4f8;
        case 0x3dd4fcu: goto label_3dd4fc;
        case 0x3dd500u: goto label_3dd500;
        case 0x3dd504u: goto label_3dd504;
        case 0x3dd508u: goto label_3dd508;
        case 0x3dd50cu: goto label_3dd50c;
        case 0x3dd510u: goto label_3dd510;
        case 0x3dd514u: goto label_3dd514;
        case 0x3dd518u: goto label_3dd518;
        case 0x3dd51cu: goto label_3dd51c;
        case 0x3dd520u: goto label_3dd520;
        case 0x3dd524u: goto label_3dd524;
        case 0x3dd528u: goto label_3dd528;
        case 0x3dd52cu: goto label_3dd52c;
        case 0x3dd530u: goto label_3dd530;
        case 0x3dd534u: goto label_3dd534;
        case 0x3dd538u: goto label_3dd538;
        case 0x3dd53cu: goto label_3dd53c;
        case 0x3dd540u: goto label_3dd540;
        case 0x3dd544u: goto label_3dd544;
        case 0x3dd548u: goto label_3dd548;
        case 0x3dd54cu: goto label_3dd54c;
        case 0x3dd550u: goto label_3dd550;
        case 0x3dd554u: goto label_3dd554;
        case 0x3dd558u: goto label_3dd558;
        case 0x3dd55cu: goto label_3dd55c;
        case 0x3dd560u: goto label_3dd560;
        case 0x3dd564u: goto label_3dd564;
        case 0x3dd568u: goto label_3dd568;
        case 0x3dd56cu: goto label_3dd56c;
        case 0x3dd570u: goto label_3dd570;
        case 0x3dd574u: goto label_3dd574;
        case 0x3dd578u: goto label_3dd578;
        case 0x3dd57cu: goto label_3dd57c;
        case 0x3dd580u: goto label_3dd580;
        case 0x3dd584u: goto label_3dd584;
        case 0x3dd588u: goto label_3dd588;
        case 0x3dd58cu: goto label_3dd58c;
        case 0x3dd590u: goto label_3dd590;
        case 0x3dd594u: goto label_3dd594;
        case 0x3dd598u: goto label_3dd598;
        case 0x3dd59cu: goto label_3dd59c;
        case 0x3dd5a0u: goto label_3dd5a0;
        case 0x3dd5a4u: goto label_3dd5a4;
        case 0x3dd5a8u: goto label_3dd5a8;
        case 0x3dd5acu: goto label_3dd5ac;
        case 0x3dd5b0u: goto label_3dd5b0;
        case 0x3dd5b4u: goto label_3dd5b4;
        case 0x3dd5b8u: goto label_3dd5b8;
        case 0x3dd5bcu: goto label_3dd5bc;
        case 0x3dd5c0u: goto label_3dd5c0;
        case 0x3dd5c4u: goto label_3dd5c4;
        case 0x3dd5c8u: goto label_3dd5c8;
        case 0x3dd5ccu: goto label_3dd5cc;
        case 0x3dd5d0u: goto label_3dd5d0;
        case 0x3dd5d4u: goto label_3dd5d4;
        case 0x3dd5d8u: goto label_3dd5d8;
        case 0x3dd5dcu: goto label_3dd5dc;
        case 0x3dd5e0u: goto label_3dd5e0;
        case 0x3dd5e4u: goto label_3dd5e4;
        case 0x3dd5e8u: goto label_3dd5e8;
        case 0x3dd5ecu: goto label_3dd5ec;
        case 0x3dd5f0u: goto label_3dd5f0;
        case 0x3dd5f4u: goto label_3dd5f4;
        case 0x3dd5f8u: goto label_3dd5f8;
        case 0x3dd5fcu: goto label_3dd5fc;
        case 0x3dd600u: goto label_3dd600;
        case 0x3dd604u: goto label_3dd604;
        case 0x3dd608u: goto label_3dd608;
        case 0x3dd60cu: goto label_3dd60c;
        case 0x3dd610u: goto label_3dd610;
        case 0x3dd614u: goto label_3dd614;
        case 0x3dd618u: goto label_3dd618;
        case 0x3dd61cu: goto label_3dd61c;
        case 0x3dd620u: goto label_3dd620;
        case 0x3dd624u: goto label_3dd624;
        case 0x3dd628u: goto label_3dd628;
        case 0x3dd62cu: goto label_3dd62c;
        case 0x3dd630u: goto label_3dd630;
        case 0x3dd634u: goto label_3dd634;
        case 0x3dd638u: goto label_3dd638;
        case 0x3dd63cu: goto label_3dd63c;
        case 0x3dd640u: goto label_3dd640;
        case 0x3dd644u: goto label_3dd644;
        case 0x3dd648u: goto label_3dd648;
        case 0x3dd64cu: goto label_3dd64c;
        case 0x3dd650u: goto label_3dd650;
        case 0x3dd654u: goto label_3dd654;
        case 0x3dd658u: goto label_3dd658;
        case 0x3dd65cu: goto label_3dd65c;
        case 0x3dd660u: goto label_3dd660;
        case 0x3dd664u: goto label_3dd664;
        case 0x3dd668u: goto label_3dd668;
        case 0x3dd66cu: goto label_3dd66c;
        case 0x3dd670u: goto label_3dd670;
        case 0x3dd674u: goto label_3dd674;
        case 0x3dd678u: goto label_3dd678;
        case 0x3dd67cu: goto label_3dd67c;
        case 0x3dd680u: goto label_3dd680;
        case 0x3dd684u: goto label_3dd684;
        case 0x3dd688u: goto label_3dd688;
        case 0x3dd68cu: goto label_3dd68c;
        case 0x3dd690u: goto label_3dd690;
        case 0x3dd694u: goto label_3dd694;
        case 0x3dd698u: goto label_3dd698;
        case 0x3dd69cu: goto label_3dd69c;
        case 0x3dd6a0u: goto label_3dd6a0;
        case 0x3dd6a4u: goto label_3dd6a4;
        case 0x3dd6a8u: goto label_3dd6a8;
        case 0x3dd6acu: goto label_3dd6ac;
        case 0x3dd6b0u: goto label_3dd6b0;
        case 0x3dd6b4u: goto label_3dd6b4;
        case 0x3dd6b8u: goto label_3dd6b8;
        case 0x3dd6bcu: goto label_3dd6bc;
        case 0x3dd6c0u: goto label_3dd6c0;
        case 0x3dd6c4u: goto label_3dd6c4;
        case 0x3dd6c8u: goto label_3dd6c8;
        case 0x3dd6ccu: goto label_3dd6cc;
        case 0x3dd6d0u: goto label_3dd6d0;
        case 0x3dd6d4u: goto label_3dd6d4;
        case 0x3dd6d8u: goto label_3dd6d8;
        case 0x3dd6dcu: goto label_3dd6dc;
        case 0x3dd6e0u: goto label_3dd6e0;
        case 0x3dd6e4u: goto label_3dd6e4;
        case 0x3dd6e8u: goto label_3dd6e8;
        case 0x3dd6ecu: goto label_3dd6ec;
        case 0x3dd6f0u: goto label_3dd6f0;
        case 0x3dd6f4u: goto label_3dd6f4;
        case 0x3dd6f8u: goto label_3dd6f8;
        case 0x3dd6fcu: goto label_3dd6fc;
        case 0x3dd700u: goto label_3dd700;
        case 0x3dd704u: goto label_3dd704;
        case 0x3dd708u: goto label_3dd708;
        case 0x3dd70cu: goto label_3dd70c;
        case 0x3dd710u: goto label_3dd710;
        case 0x3dd714u: goto label_3dd714;
        case 0x3dd718u: goto label_3dd718;
        case 0x3dd71cu: goto label_3dd71c;
        case 0x3dd720u: goto label_3dd720;
        case 0x3dd724u: goto label_3dd724;
        case 0x3dd728u: goto label_3dd728;
        case 0x3dd72cu: goto label_3dd72c;
        case 0x3dd730u: goto label_3dd730;
        case 0x3dd734u: goto label_3dd734;
        case 0x3dd738u: goto label_3dd738;
        case 0x3dd73cu: goto label_3dd73c;
        case 0x3dd740u: goto label_3dd740;
        case 0x3dd744u: goto label_3dd744;
        case 0x3dd748u: goto label_3dd748;
        case 0x3dd74cu: goto label_3dd74c;
        case 0x3dd750u: goto label_3dd750;
        case 0x3dd754u: goto label_3dd754;
        case 0x3dd758u: goto label_3dd758;
        case 0x3dd75cu: goto label_3dd75c;
        case 0x3dd760u: goto label_3dd760;
        case 0x3dd764u: goto label_3dd764;
        case 0x3dd768u: goto label_3dd768;
        case 0x3dd76cu: goto label_3dd76c;
        case 0x3dd770u: goto label_3dd770;
        case 0x3dd774u: goto label_3dd774;
        case 0x3dd778u: goto label_3dd778;
        case 0x3dd77cu: goto label_3dd77c;
        case 0x3dd780u: goto label_3dd780;
        case 0x3dd784u: goto label_3dd784;
        case 0x3dd788u: goto label_3dd788;
        case 0x3dd78cu: goto label_3dd78c;
        case 0x3dd790u: goto label_3dd790;
        case 0x3dd794u: goto label_3dd794;
        case 0x3dd798u: goto label_3dd798;
        case 0x3dd79cu: goto label_3dd79c;
        case 0x3dd7a0u: goto label_3dd7a0;
        case 0x3dd7a4u: goto label_3dd7a4;
        case 0x3dd7a8u: goto label_3dd7a8;
        case 0x3dd7acu: goto label_3dd7ac;
        case 0x3dd7b0u: goto label_3dd7b0;
        case 0x3dd7b4u: goto label_3dd7b4;
        case 0x3dd7b8u: goto label_3dd7b8;
        case 0x3dd7bcu: goto label_3dd7bc;
        case 0x3dd7c0u: goto label_3dd7c0;
        case 0x3dd7c4u: goto label_3dd7c4;
        case 0x3dd7c8u: goto label_3dd7c8;
        case 0x3dd7ccu: goto label_3dd7cc;
        case 0x3dd7d0u: goto label_3dd7d0;
        case 0x3dd7d4u: goto label_3dd7d4;
        case 0x3dd7d8u: goto label_3dd7d8;
        case 0x3dd7dcu: goto label_3dd7dc;
        case 0x3dd7e0u: goto label_3dd7e0;
        case 0x3dd7e4u: goto label_3dd7e4;
        case 0x3dd7e8u: goto label_3dd7e8;
        case 0x3dd7ecu: goto label_3dd7ec;
        case 0x3dd7f0u: goto label_3dd7f0;
        case 0x3dd7f4u: goto label_3dd7f4;
        case 0x3dd7f8u: goto label_3dd7f8;
        case 0x3dd7fcu: goto label_3dd7fc;
        case 0x3dd800u: goto label_3dd800;
        case 0x3dd804u: goto label_3dd804;
        case 0x3dd808u: goto label_3dd808;
        case 0x3dd80cu: goto label_3dd80c;
        case 0x3dd810u: goto label_3dd810;
        case 0x3dd814u: goto label_3dd814;
        case 0x3dd818u: goto label_3dd818;
        case 0x3dd81cu: goto label_3dd81c;
        case 0x3dd820u: goto label_3dd820;
        case 0x3dd824u: goto label_3dd824;
        case 0x3dd828u: goto label_3dd828;
        case 0x3dd82cu: goto label_3dd82c;
        case 0x3dd830u: goto label_3dd830;
        case 0x3dd834u: goto label_3dd834;
        case 0x3dd838u: goto label_3dd838;
        case 0x3dd83cu: goto label_3dd83c;
        case 0x3dd840u: goto label_3dd840;
        case 0x3dd844u: goto label_3dd844;
        case 0x3dd848u: goto label_3dd848;
        case 0x3dd84cu: goto label_3dd84c;
        case 0x3dd850u: goto label_3dd850;
        case 0x3dd854u: goto label_3dd854;
        case 0x3dd858u: goto label_3dd858;
        case 0x3dd85cu: goto label_3dd85c;
        case 0x3dd860u: goto label_3dd860;
        case 0x3dd864u: goto label_3dd864;
        case 0x3dd868u: goto label_3dd868;
        case 0x3dd86cu: goto label_3dd86c;
        case 0x3dd870u: goto label_3dd870;
        case 0x3dd874u: goto label_3dd874;
        case 0x3dd878u: goto label_3dd878;
        case 0x3dd87cu: goto label_3dd87c;
        case 0x3dd880u: goto label_3dd880;
        case 0x3dd884u: goto label_3dd884;
        case 0x3dd888u: goto label_3dd888;
        case 0x3dd88cu: goto label_3dd88c;
        case 0x3dd890u: goto label_3dd890;
        case 0x3dd894u: goto label_3dd894;
        case 0x3dd898u: goto label_3dd898;
        case 0x3dd89cu: goto label_3dd89c;
        case 0x3dd8a0u: goto label_3dd8a0;
        case 0x3dd8a4u: goto label_3dd8a4;
        case 0x3dd8a8u: goto label_3dd8a8;
        case 0x3dd8acu: goto label_3dd8ac;
        case 0x3dd8b0u: goto label_3dd8b0;
        case 0x3dd8b4u: goto label_3dd8b4;
        case 0x3dd8b8u: goto label_3dd8b8;
        case 0x3dd8bcu: goto label_3dd8bc;
        case 0x3dd8c0u: goto label_3dd8c0;
        case 0x3dd8c4u: goto label_3dd8c4;
        case 0x3dd8c8u: goto label_3dd8c8;
        case 0x3dd8ccu: goto label_3dd8cc;
        case 0x3dd8d0u: goto label_3dd8d0;
        case 0x3dd8d4u: goto label_3dd8d4;
        case 0x3dd8d8u: goto label_3dd8d8;
        case 0x3dd8dcu: goto label_3dd8dc;
        case 0x3dd8e0u: goto label_3dd8e0;
        case 0x3dd8e4u: goto label_3dd8e4;
        case 0x3dd8e8u: goto label_3dd8e8;
        case 0x3dd8ecu: goto label_3dd8ec;
        case 0x3dd8f0u: goto label_3dd8f0;
        case 0x3dd8f4u: goto label_3dd8f4;
        case 0x3dd8f8u: goto label_3dd8f8;
        case 0x3dd8fcu: goto label_3dd8fc;
        case 0x3dd900u: goto label_3dd900;
        case 0x3dd904u: goto label_3dd904;
        case 0x3dd908u: goto label_3dd908;
        case 0x3dd90cu: goto label_3dd90c;
        case 0x3dd910u: goto label_3dd910;
        case 0x3dd914u: goto label_3dd914;
        case 0x3dd918u: goto label_3dd918;
        case 0x3dd91cu: goto label_3dd91c;
        case 0x3dd920u: goto label_3dd920;
        case 0x3dd924u: goto label_3dd924;
        case 0x3dd928u: goto label_3dd928;
        case 0x3dd92cu: goto label_3dd92c;
        case 0x3dd930u: goto label_3dd930;
        case 0x3dd934u: goto label_3dd934;
        case 0x3dd938u: goto label_3dd938;
        case 0x3dd93cu: goto label_3dd93c;
        case 0x3dd940u: goto label_3dd940;
        case 0x3dd944u: goto label_3dd944;
        case 0x3dd948u: goto label_3dd948;
        case 0x3dd94cu: goto label_3dd94c;
        case 0x3dd950u: goto label_3dd950;
        case 0x3dd954u: goto label_3dd954;
        case 0x3dd958u: goto label_3dd958;
        case 0x3dd95cu: goto label_3dd95c;
        case 0x3dd960u: goto label_3dd960;
        case 0x3dd964u: goto label_3dd964;
        case 0x3dd968u: goto label_3dd968;
        case 0x3dd96cu: goto label_3dd96c;
        case 0x3dd970u: goto label_3dd970;
        case 0x3dd974u: goto label_3dd974;
        case 0x3dd978u: goto label_3dd978;
        case 0x3dd97cu: goto label_3dd97c;
        case 0x3dd980u: goto label_3dd980;
        case 0x3dd984u: goto label_3dd984;
        case 0x3dd988u: goto label_3dd988;
        case 0x3dd98cu: goto label_3dd98c;
        case 0x3dd990u: goto label_3dd990;
        case 0x3dd994u: goto label_3dd994;
        case 0x3dd998u: goto label_3dd998;
        case 0x3dd99cu: goto label_3dd99c;
        case 0x3dd9a0u: goto label_3dd9a0;
        case 0x3dd9a4u: goto label_3dd9a4;
        case 0x3dd9a8u: goto label_3dd9a8;
        case 0x3dd9acu: goto label_3dd9ac;
        case 0x3dd9b0u: goto label_3dd9b0;
        case 0x3dd9b4u: goto label_3dd9b4;
        case 0x3dd9b8u: goto label_3dd9b8;
        case 0x3dd9bcu: goto label_3dd9bc;
        case 0x3dd9c0u: goto label_3dd9c0;
        case 0x3dd9c4u: goto label_3dd9c4;
        case 0x3dd9c8u: goto label_3dd9c8;
        case 0x3dd9ccu: goto label_3dd9cc;
        case 0x3dd9d0u: goto label_3dd9d0;
        case 0x3dd9d4u: goto label_3dd9d4;
        case 0x3dd9d8u: goto label_3dd9d8;
        case 0x3dd9dcu: goto label_3dd9dc;
        case 0x3dd9e0u: goto label_3dd9e0;
        case 0x3dd9e4u: goto label_3dd9e4;
        case 0x3dd9e8u: goto label_3dd9e8;
        case 0x3dd9ecu: goto label_3dd9ec;
        case 0x3dd9f0u: goto label_3dd9f0;
        case 0x3dd9f4u: goto label_3dd9f4;
        case 0x3dd9f8u: goto label_3dd9f8;
        case 0x3dd9fcu: goto label_3dd9fc;
        case 0x3dda00u: goto label_3dda00;
        case 0x3dda04u: goto label_3dda04;
        case 0x3dda08u: goto label_3dda08;
        case 0x3dda0cu: goto label_3dda0c;
        case 0x3dda10u: goto label_3dda10;
        case 0x3dda14u: goto label_3dda14;
        case 0x3dda18u: goto label_3dda18;
        case 0x3dda1cu: goto label_3dda1c;
        case 0x3dda20u: goto label_3dda20;
        case 0x3dda24u: goto label_3dda24;
        case 0x3dda28u: goto label_3dda28;
        case 0x3dda2cu: goto label_3dda2c;
        case 0x3dda30u: goto label_3dda30;
        case 0x3dda34u: goto label_3dda34;
        case 0x3dda38u: goto label_3dda38;
        case 0x3dda3cu: goto label_3dda3c;
        case 0x3dda40u: goto label_3dda40;
        case 0x3dda44u: goto label_3dda44;
        case 0x3dda48u: goto label_3dda48;
        case 0x3dda4cu: goto label_3dda4c;
        case 0x3dda50u: goto label_3dda50;
        case 0x3dda54u: goto label_3dda54;
        case 0x3dda58u: goto label_3dda58;
        case 0x3dda5cu: goto label_3dda5c;
        case 0x3dda60u: goto label_3dda60;
        case 0x3dda64u: goto label_3dda64;
        case 0x3dda68u: goto label_3dda68;
        case 0x3dda6cu: goto label_3dda6c;
        case 0x3dda70u: goto label_3dda70;
        case 0x3dda74u: goto label_3dda74;
        case 0x3dda78u: goto label_3dda78;
        case 0x3dda7cu: goto label_3dda7c;
        case 0x3dda80u: goto label_3dda80;
        case 0x3dda84u: goto label_3dda84;
        case 0x3dda88u: goto label_3dda88;
        case 0x3dda8cu: goto label_3dda8c;
        case 0x3dda90u: goto label_3dda90;
        case 0x3dda94u: goto label_3dda94;
        case 0x3dda98u: goto label_3dda98;
        case 0x3dda9cu: goto label_3dda9c;
        case 0x3ddaa0u: goto label_3ddaa0;
        case 0x3ddaa4u: goto label_3ddaa4;
        case 0x3ddaa8u: goto label_3ddaa8;
        case 0x3ddaacu: goto label_3ddaac;
        case 0x3ddab0u: goto label_3ddab0;
        case 0x3ddab4u: goto label_3ddab4;
        case 0x3ddab8u: goto label_3ddab8;
        case 0x3ddabcu: goto label_3ddabc;
        case 0x3ddac0u: goto label_3ddac0;
        case 0x3ddac4u: goto label_3ddac4;
        case 0x3ddac8u: goto label_3ddac8;
        case 0x3ddaccu: goto label_3ddacc;
        case 0x3ddad0u: goto label_3ddad0;
        case 0x3ddad4u: goto label_3ddad4;
        case 0x3ddad8u: goto label_3ddad8;
        case 0x3ddadcu: goto label_3ddadc;
        case 0x3ddae0u: goto label_3ddae0;
        case 0x3ddae4u: goto label_3ddae4;
        case 0x3ddae8u: goto label_3ddae8;
        case 0x3ddaecu: goto label_3ddaec;
        case 0x3ddaf0u: goto label_3ddaf0;
        case 0x3ddaf4u: goto label_3ddaf4;
        case 0x3ddaf8u: goto label_3ddaf8;
        case 0x3ddafcu: goto label_3ddafc;
        case 0x3ddb00u: goto label_3ddb00;
        case 0x3ddb04u: goto label_3ddb04;
        case 0x3ddb08u: goto label_3ddb08;
        case 0x3ddb0cu: goto label_3ddb0c;
        case 0x3ddb10u: goto label_3ddb10;
        case 0x3ddb14u: goto label_3ddb14;
        case 0x3ddb18u: goto label_3ddb18;
        case 0x3ddb1cu: goto label_3ddb1c;
        case 0x3ddb20u: goto label_3ddb20;
        case 0x3ddb24u: goto label_3ddb24;
        case 0x3ddb28u: goto label_3ddb28;
        case 0x3ddb2cu: goto label_3ddb2c;
        case 0x3ddb30u: goto label_3ddb30;
        case 0x3ddb34u: goto label_3ddb34;
        case 0x3ddb38u: goto label_3ddb38;
        case 0x3ddb3cu: goto label_3ddb3c;
        case 0x3ddb40u: goto label_3ddb40;
        case 0x3ddb44u: goto label_3ddb44;
        case 0x3ddb48u: goto label_3ddb48;
        case 0x3ddb4cu: goto label_3ddb4c;
        case 0x3ddb50u: goto label_3ddb50;
        case 0x3ddb54u: goto label_3ddb54;
        case 0x3ddb58u: goto label_3ddb58;
        case 0x3ddb5cu: goto label_3ddb5c;
        case 0x3ddb60u: goto label_3ddb60;
        case 0x3ddb64u: goto label_3ddb64;
        case 0x3ddb68u: goto label_3ddb68;
        case 0x3ddb6cu: goto label_3ddb6c;
        case 0x3ddb70u: goto label_3ddb70;
        case 0x3ddb74u: goto label_3ddb74;
        case 0x3ddb78u: goto label_3ddb78;
        case 0x3ddb7cu: goto label_3ddb7c;
        case 0x3ddb80u: goto label_3ddb80;
        case 0x3ddb84u: goto label_3ddb84;
        case 0x3ddb88u: goto label_3ddb88;
        case 0x3ddb8cu: goto label_3ddb8c;
        case 0x3ddb90u: goto label_3ddb90;
        case 0x3ddb94u: goto label_3ddb94;
        case 0x3ddb98u: goto label_3ddb98;
        case 0x3ddb9cu: goto label_3ddb9c;
        case 0x3ddba0u: goto label_3ddba0;
        case 0x3ddba4u: goto label_3ddba4;
        case 0x3ddba8u: goto label_3ddba8;
        case 0x3ddbacu: goto label_3ddbac;
        case 0x3ddbb0u: goto label_3ddbb0;
        case 0x3ddbb4u: goto label_3ddbb4;
        case 0x3ddbb8u: goto label_3ddbb8;
        case 0x3ddbbcu: goto label_3ddbbc;
        case 0x3ddbc0u: goto label_3ddbc0;
        case 0x3ddbc4u: goto label_3ddbc4;
        case 0x3ddbc8u: goto label_3ddbc8;
        case 0x3ddbccu: goto label_3ddbcc;
        case 0x3ddbd0u: goto label_3ddbd0;
        case 0x3ddbd4u: goto label_3ddbd4;
        case 0x3ddbd8u: goto label_3ddbd8;
        case 0x3ddbdcu: goto label_3ddbdc;
        case 0x3ddbe0u: goto label_3ddbe0;
        case 0x3ddbe4u: goto label_3ddbe4;
        case 0x3ddbe8u: goto label_3ddbe8;
        case 0x3ddbecu: goto label_3ddbec;
        case 0x3ddbf0u: goto label_3ddbf0;
        case 0x3ddbf4u: goto label_3ddbf4;
        case 0x3ddbf8u: goto label_3ddbf8;
        case 0x3ddbfcu: goto label_3ddbfc;
        case 0x3ddc00u: goto label_3ddc00;
        case 0x3ddc04u: goto label_3ddc04;
        case 0x3ddc08u: goto label_3ddc08;
        case 0x3ddc0cu: goto label_3ddc0c;
        case 0x3ddc10u: goto label_3ddc10;
        case 0x3ddc14u: goto label_3ddc14;
        case 0x3ddc18u: goto label_3ddc18;
        case 0x3ddc1cu: goto label_3ddc1c;
        case 0x3ddc20u: goto label_3ddc20;
        case 0x3ddc24u: goto label_3ddc24;
        case 0x3ddc28u: goto label_3ddc28;
        case 0x3ddc2cu: goto label_3ddc2c;
        case 0x3ddc30u: goto label_3ddc30;
        case 0x3ddc34u: goto label_3ddc34;
        case 0x3ddc38u: goto label_3ddc38;
        case 0x3ddc3cu: goto label_3ddc3c;
        case 0x3ddc40u: goto label_3ddc40;
        case 0x3ddc44u: goto label_3ddc44;
        case 0x3ddc48u: goto label_3ddc48;
        case 0x3ddc4cu: goto label_3ddc4c;
        case 0x3ddc50u: goto label_3ddc50;
        case 0x3ddc54u: goto label_3ddc54;
        case 0x3ddc58u: goto label_3ddc58;
        case 0x3ddc5cu: goto label_3ddc5c;
        case 0x3ddc60u: goto label_3ddc60;
        case 0x3ddc64u: goto label_3ddc64;
        case 0x3ddc68u: goto label_3ddc68;
        case 0x3ddc6cu: goto label_3ddc6c;
        case 0x3ddc70u: goto label_3ddc70;
        case 0x3ddc74u: goto label_3ddc74;
        case 0x3ddc78u: goto label_3ddc78;
        case 0x3ddc7cu: goto label_3ddc7c;
        case 0x3ddc80u: goto label_3ddc80;
        case 0x3ddc84u: goto label_3ddc84;
        case 0x3ddc88u: goto label_3ddc88;
        case 0x3ddc8cu: goto label_3ddc8c;
        case 0x3ddc90u: goto label_3ddc90;
        case 0x3ddc94u: goto label_3ddc94;
        case 0x3ddc98u: goto label_3ddc98;
        case 0x3ddc9cu: goto label_3ddc9c;
        case 0x3ddca0u: goto label_3ddca0;
        case 0x3ddca4u: goto label_3ddca4;
        case 0x3ddca8u: goto label_3ddca8;
        case 0x3ddcacu: goto label_3ddcac;
        case 0x3ddcb0u: goto label_3ddcb0;
        case 0x3ddcb4u: goto label_3ddcb4;
        case 0x3ddcb8u: goto label_3ddcb8;
        case 0x3ddcbcu: goto label_3ddcbc;
        case 0x3ddcc0u: goto label_3ddcc0;
        case 0x3ddcc4u: goto label_3ddcc4;
        case 0x3ddcc8u: goto label_3ddcc8;
        case 0x3ddcccu: goto label_3ddccc;
        case 0x3ddcd0u: goto label_3ddcd0;
        case 0x3ddcd4u: goto label_3ddcd4;
        case 0x3ddcd8u: goto label_3ddcd8;
        case 0x3ddcdcu: goto label_3ddcdc;
        case 0x3ddce0u: goto label_3ddce0;
        case 0x3ddce4u: goto label_3ddce4;
        case 0x3ddce8u: goto label_3ddce8;
        case 0x3ddcecu: goto label_3ddcec;
        case 0x3ddcf0u: goto label_3ddcf0;
        case 0x3ddcf4u: goto label_3ddcf4;
        case 0x3ddcf8u: goto label_3ddcf8;
        case 0x3ddcfcu: goto label_3ddcfc;
        case 0x3ddd00u: goto label_3ddd00;
        case 0x3ddd04u: goto label_3ddd04;
        case 0x3ddd08u: goto label_3ddd08;
        case 0x3ddd0cu: goto label_3ddd0c;
        case 0x3ddd10u: goto label_3ddd10;
        case 0x3ddd14u: goto label_3ddd14;
        case 0x3ddd18u: goto label_3ddd18;
        case 0x3ddd1cu: goto label_3ddd1c;
        case 0x3ddd20u: goto label_3ddd20;
        case 0x3ddd24u: goto label_3ddd24;
        case 0x3ddd28u: goto label_3ddd28;
        case 0x3ddd2cu: goto label_3ddd2c;
        case 0x3ddd30u: goto label_3ddd30;
        case 0x3ddd34u: goto label_3ddd34;
        case 0x3ddd38u: goto label_3ddd38;
        case 0x3ddd3cu: goto label_3ddd3c;
        case 0x3ddd40u: goto label_3ddd40;
        case 0x3ddd44u: goto label_3ddd44;
        case 0x3ddd48u: goto label_3ddd48;
        case 0x3ddd4cu: goto label_3ddd4c;
        case 0x3ddd50u: goto label_3ddd50;
        case 0x3ddd54u: goto label_3ddd54;
        case 0x3ddd58u: goto label_3ddd58;
        case 0x3ddd5cu: goto label_3ddd5c;
        case 0x3ddd60u: goto label_3ddd60;
        case 0x3ddd64u: goto label_3ddd64;
        case 0x3ddd68u: goto label_3ddd68;
        case 0x3ddd6cu: goto label_3ddd6c;
        case 0x3ddd70u: goto label_3ddd70;
        case 0x3ddd74u: goto label_3ddd74;
        case 0x3ddd78u: goto label_3ddd78;
        case 0x3ddd7cu: goto label_3ddd7c;
        case 0x3ddd80u: goto label_3ddd80;
        case 0x3ddd84u: goto label_3ddd84;
        case 0x3ddd88u: goto label_3ddd88;
        case 0x3ddd8cu: goto label_3ddd8c;
        case 0x3ddd90u: goto label_3ddd90;
        case 0x3ddd94u: goto label_3ddd94;
        case 0x3ddd98u: goto label_3ddd98;
        case 0x3ddd9cu: goto label_3ddd9c;
        case 0x3ddda0u: goto label_3ddda0;
        case 0x3ddda4u: goto label_3ddda4;
        case 0x3ddda8u: goto label_3ddda8;
        case 0x3dddacu: goto label_3dddac;
        case 0x3dddb0u: goto label_3dddb0;
        case 0x3dddb4u: goto label_3dddb4;
        case 0x3dddb8u: goto label_3dddb8;
        case 0x3dddbcu: goto label_3dddbc;
        case 0x3dddc0u: goto label_3dddc0;
        case 0x3dddc4u: goto label_3dddc4;
        case 0x3dddc8u: goto label_3dddc8;
        case 0x3dddccu: goto label_3dddcc;
        case 0x3dddd0u: goto label_3dddd0;
        case 0x3dddd4u: goto label_3dddd4;
        case 0x3dddd8u: goto label_3dddd8;
        case 0x3ddddcu: goto label_3ddddc;
        case 0x3ddde0u: goto label_3ddde0;
        case 0x3ddde4u: goto label_3ddde4;
        case 0x3ddde8u: goto label_3ddde8;
        case 0x3dddecu: goto label_3dddec;
        case 0x3dddf0u: goto label_3dddf0;
        case 0x3dddf4u: goto label_3dddf4;
        case 0x3dddf8u: goto label_3dddf8;
        case 0x3dddfcu: goto label_3dddfc;
        case 0x3dde00u: goto label_3dde00;
        case 0x3dde04u: goto label_3dde04;
        case 0x3dde08u: goto label_3dde08;
        case 0x3dde0cu: goto label_3dde0c;
        case 0x3dde10u: goto label_3dde10;
        case 0x3dde14u: goto label_3dde14;
        case 0x3dde18u: goto label_3dde18;
        case 0x3dde1cu: goto label_3dde1c;
        case 0x3dde20u: goto label_3dde20;
        case 0x3dde24u: goto label_3dde24;
        case 0x3dde28u: goto label_3dde28;
        case 0x3dde2cu: goto label_3dde2c;
        case 0x3dde30u: goto label_3dde30;
        case 0x3dde34u: goto label_3dde34;
        case 0x3dde38u: goto label_3dde38;
        case 0x3dde3cu: goto label_3dde3c;
        case 0x3dde40u: goto label_3dde40;
        case 0x3dde44u: goto label_3dde44;
        case 0x3dde48u: goto label_3dde48;
        case 0x3dde4cu: goto label_3dde4c;
        case 0x3dde50u: goto label_3dde50;
        case 0x3dde54u: goto label_3dde54;
        case 0x3dde58u: goto label_3dde58;
        case 0x3dde5cu: goto label_3dde5c;
        case 0x3dde60u: goto label_3dde60;
        case 0x3dde64u: goto label_3dde64;
        case 0x3dde68u: goto label_3dde68;
        case 0x3dde6cu: goto label_3dde6c;
        case 0x3dde70u: goto label_3dde70;
        case 0x3dde74u: goto label_3dde74;
        case 0x3dde78u: goto label_3dde78;
        case 0x3dde7cu: goto label_3dde7c;
        case 0x3dde80u: goto label_3dde80;
        case 0x3dde84u: goto label_3dde84;
        case 0x3dde88u: goto label_3dde88;
        case 0x3dde8cu: goto label_3dde8c;
        case 0x3dde90u: goto label_3dde90;
        case 0x3dde94u: goto label_3dde94;
        case 0x3dde98u: goto label_3dde98;
        case 0x3dde9cu: goto label_3dde9c;
        case 0x3ddea0u: goto label_3ddea0;
        case 0x3ddea4u: goto label_3ddea4;
        case 0x3ddea8u: goto label_3ddea8;
        case 0x3ddeacu: goto label_3ddeac;
        case 0x3ddeb0u: goto label_3ddeb0;
        case 0x3ddeb4u: goto label_3ddeb4;
        case 0x3ddeb8u: goto label_3ddeb8;
        case 0x3ddebcu: goto label_3ddebc;
        case 0x3ddec0u: goto label_3ddec0;
        case 0x3ddec4u: goto label_3ddec4;
        case 0x3ddec8u: goto label_3ddec8;
        case 0x3ddeccu: goto label_3ddecc;
        case 0x3dded0u: goto label_3dded0;
        case 0x3dded4u: goto label_3dded4;
        case 0x3dded8u: goto label_3dded8;
        case 0x3ddedcu: goto label_3ddedc;
        case 0x3ddee0u: goto label_3ddee0;
        case 0x3ddee4u: goto label_3ddee4;
        case 0x3ddee8u: goto label_3ddee8;
        case 0x3ddeecu: goto label_3ddeec;
        case 0x3ddef0u: goto label_3ddef0;
        case 0x3ddef4u: goto label_3ddef4;
        case 0x3ddef8u: goto label_3ddef8;
        case 0x3ddefcu: goto label_3ddefc;
        case 0x3ddf00u: goto label_3ddf00;
        case 0x3ddf04u: goto label_3ddf04;
        case 0x3ddf08u: goto label_3ddf08;
        case 0x3ddf0cu: goto label_3ddf0c;
        case 0x3ddf10u: goto label_3ddf10;
        case 0x3ddf14u: goto label_3ddf14;
        case 0x3ddf18u: goto label_3ddf18;
        case 0x3ddf1cu: goto label_3ddf1c;
        case 0x3ddf20u: goto label_3ddf20;
        case 0x3ddf24u: goto label_3ddf24;
        case 0x3ddf28u: goto label_3ddf28;
        case 0x3ddf2cu: goto label_3ddf2c;
        case 0x3ddf30u: goto label_3ddf30;
        case 0x3ddf34u: goto label_3ddf34;
        case 0x3ddf38u: goto label_3ddf38;
        case 0x3ddf3cu: goto label_3ddf3c;
        case 0x3ddf40u: goto label_3ddf40;
        case 0x3ddf44u: goto label_3ddf44;
        case 0x3ddf48u: goto label_3ddf48;
        case 0x3ddf4cu: goto label_3ddf4c;
        case 0x3ddf50u: goto label_3ddf50;
        case 0x3ddf54u: goto label_3ddf54;
        case 0x3ddf58u: goto label_3ddf58;
        case 0x3ddf5cu: goto label_3ddf5c;
        case 0x3ddf60u: goto label_3ddf60;
        case 0x3ddf64u: goto label_3ddf64;
        case 0x3ddf68u: goto label_3ddf68;
        case 0x3ddf6cu: goto label_3ddf6c;
        case 0x3ddf70u: goto label_3ddf70;
        case 0x3ddf74u: goto label_3ddf74;
        case 0x3ddf78u: goto label_3ddf78;
        case 0x3ddf7cu: goto label_3ddf7c;
        case 0x3ddf80u: goto label_3ddf80;
        case 0x3ddf84u: goto label_3ddf84;
        case 0x3ddf88u: goto label_3ddf88;
        case 0x3ddf8cu: goto label_3ddf8c;
        case 0x3ddf90u: goto label_3ddf90;
        case 0x3ddf94u: goto label_3ddf94;
        case 0x3ddf98u: goto label_3ddf98;
        case 0x3ddf9cu: goto label_3ddf9c;
        case 0x3ddfa0u: goto label_3ddfa0;
        case 0x3ddfa4u: goto label_3ddfa4;
        case 0x3ddfa8u: goto label_3ddfa8;
        case 0x3ddfacu: goto label_3ddfac;
        case 0x3ddfb0u: goto label_3ddfb0;
        case 0x3ddfb4u: goto label_3ddfb4;
        case 0x3ddfb8u: goto label_3ddfb8;
        case 0x3ddfbcu: goto label_3ddfbc;
        case 0x3ddfc0u: goto label_3ddfc0;
        case 0x3ddfc4u: goto label_3ddfc4;
        case 0x3ddfc8u: goto label_3ddfc8;
        case 0x3ddfccu: goto label_3ddfcc;
        case 0x3ddfd0u: goto label_3ddfd0;
        case 0x3ddfd4u: goto label_3ddfd4;
        case 0x3ddfd8u: goto label_3ddfd8;
        case 0x3ddfdcu: goto label_3ddfdc;
        case 0x3ddfe0u: goto label_3ddfe0;
        case 0x3ddfe4u: goto label_3ddfe4;
        case 0x3ddfe8u: goto label_3ddfe8;
        case 0x3ddfecu: goto label_3ddfec;
        case 0x3ddff0u: goto label_3ddff0;
        case 0x3ddff4u: goto label_3ddff4;
        case 0x3ddff8u: goto label_3ddff8;
        case 0x3ddffcu: goto label_3ddffc;
        case 0x3de000u: goto label_3de000;
        case 0x3de004u: goto label_3de004;
        case 0x3de008u: goto label_3de008;
        case 0x3de00cu: goto label_3de00c;
        case 0x3de010u: goto label_3de010;
        case 0x3de014u: goto label_3de014;
        case 0x3de018u: goto label_3de018;
        case 0x3de01cu: goto label_3de01c;
        case 0x3de020u: goto label_3de020;
        case 0x3de024u: goto label_3de024;
        case 0x3de028u: goto label_3de028;
        case 0x3de02cu: goto label_3de02c;
        case 0x3de030u: goto label_3de030;
        case 0x3de034u: goto label_3de034;
        case 0x3de038u: goto label_3de038;
        case 0x3de03cu: goto label_3de03c;
        case 0x3de040u: goto label_3de040;
        case 0x3de044u: goto label_3de044;
        case 0x3de048u: goto label_3de048;
        case 0x3de04cu: goto label_3de04c;
        case 0x3de050u: goto label_3de050;
        case 0x3de054u: goto label_3de054;
        case 0x3de058u: goto label_3de058;
        case 0x3de05cu: goto label_3de05c;
        case 0x3de060u: goto label_3de060;
        case 0x3de064u: goto label_3de064;
        case 0x3de068u: goto label_3de068;
        case 0x3de06cu: goto label_3de06c;
        case 0x3de070u: goto label_3de070;
        case 0x3de074u: goto label_3de074;
        case 0x3de078u: goto label_3de078;
        case 0x3de07cu: goto label_3de07c;
        case 0x3de080u: goto label_3de080;
        case 0x3de084u: goto label_3de084;
        case 0x3de088u: goto label_3de088;
        case 0x3de08cu: goto label_3de08c;
        case 0x3de090u: goto label_3de090;
        case 0x3de094u: goto label_3de094;
        case 0x3de098u: goto label_3de098;
        case 0x3de09cu: goto label_3de09c;
        case 0x3de0a0u: goto label_3de0a0;
        case 0x3de0a4u: goto label_3de0a4;
        case 0x3de0a8u: goto label_3de0a8;
        case 0x3de0acu: goto label_3de0ac;
        case 0x3de0b0u: goto label_3de0b0;
        case 0x3de0b4u: goto label_3de0b4;
        case 0x3de0b8u: goto label_3de0b8;
        case 0x3de0bcu: goto label_3de0bc;
        case 0x3de0c0u: goto label_3de0c0;
        case 0x3de0c4u: goto label_3de0c4;
        case 0x3de0c8u: goto label_3de0c8;
        case 0x3de0ccu: goto label_3de0cc;
        case 0x3de0d0u: goto label_3de0d0;
        case 0x3de0d4u: goto label_3de0d4;
        case 0x3de0d8u: goto label_3de0d8;
        case 0x3de0dcu: goto label_3de0dc;
        case 0x3de0e0u: goto label_3de0e0;
        case 0x3de0e4u: goto label_3de0e4;
        case 0x3de0e8u: goto label_3de0e8;
        case 0x3de0ecu: goto label_3de0ec;
        case 0x3de0f0u: goto label_3de0f0;
        case 0x3de0f4u: goto label_3de0f4;
        case 0x3de0f8u: goto label_3de0f8;
        case 0x3de0fcu: goto label_3de0fc;
        case 0x3de100u: goto label_3de100;
        case 0x3de104u: goto label_3de104;
        case 0x3de108u: goto label_3de108;
        case 0x3de10cu: goto label_3de10c;
        case 0x3de110u: goto label_3de110;
        case 0x3de114u: goto label_3de114;
        case 0x3de118u: goto label_3de118;
        case 0x3de11cu: goto label_3de11c;
        case 0x3de120u: goto label_3de120;
        case 0x3de124u: goto label_3de124;
        case 0x3de128u: goto label_3de128;
        case 0x3de12cu: goto label_3de12c;
        case 0x3de130u: goto label_3de130;
        case 0x3de134u: goto label_3de134;
        case 0x3de138u: goto label_3de138;
        case 0x3de13cu: goto label_3de13c;
        case 0x3de140u: goto label_3de140;
        case 0x3de144u: goto label_3de144;
        case 0x3de148u: goto label_3de148;
        case 0x3de14cu: goto label_3de14c;
        case 0x3de150u: goto label_3de150;
        case 0x3de154u: goto label_3de154;
        case 0x3de158u: goto label_3de158;
        case 0x3de15cu: goto label_3de15c;
        case 0x3de160u: goto label_3de160;
        case 0x3de164u: goto label_3de164;
        case 0x3de168u: goto label_3de168;
        case 0x3de16cu: goto label_3de16c;
        case 0x3de170u: goto label_3de170;
        case 0x3de174u: goto label_3de174;
        case 0x3de178u: goto label_3de178;
        case 0x3de17cu: goto label_3de17c;
        case 0x3de180u: goto label_3de180;
        case 0x3de184u: goto label_3de184;
        case 0x3de188u: goto label_3de188;
        case 0x3de18cu: goto label_3de18c;
        case 0x3de190u: goto label_3de190;
        case 0x3de194u: goto label_3de194;
        case 0x3de198u: goto label_3de198;
        case 0x3de19cu: goto label_3de19c;
        case 0x3de1a0u: goto label_3de1a0;
        case 0x3de1a4u: goto label_3de1a4;
        case 0x3de1a8u: goto label_3de1a8;
        case 0x3de1acu: goto label_3de1ac;
        case 0x3de1b0u: goto label_3de1b0;
        case 0x3de1b4u: goto label_3de1b4;
        case 0x3de1b8u: goto label_3de1b8;
        case 0x3de1bcu: goto label_3de1bc;
        case 0x3de1c0u: goto label_3de1c0;
        case 0x3de1c4u: goto label_3de1c4;
        case 0x3de1c8u: goto label_3de1c8;
        case 0x3de1ccu: goto label_3de1cc;
        case 0x3de1d0u: goto label_3de1d0;
        case 0x3de1d4u: goto label_3de1d4;
        case 0x3de1d8u: goto label_3de1d8;
        case 0x3de1dcu: goto label_3de1dc;
        case 0x3de1e0u: goto label_3de1e0;
        case 0x3de1e4u: goto label_3de1e4;
        case 0x3de1e8u: goto label_3de1e8;
        case 0x3de1ecu: goto label_3de1ec;
        case 0x3de1f0u: goto label_3de1f0;
        case 0x3de1f4u: goto label_3de1f4;
        case 0x3de1f8u: goto label_3de1f8;
        case 0x3de1fcu: goto label_3de1fc;
        case 0x3de200u: goto label_3de200;
        case 0x3de204u: goto label_3de204;
        case 0x3de208u: goto label_3de208;
        case 0x3de20cu: goto label_3de20c;
        case 0x3de210u: goto label_3de210;
        case 0x3de214u: goto label_3de214;
        case 0x3de218u: goto label_3de218;
        case 0x3de21cu: goto label_3de21c;
        case 0x3de220u: goto label_3de220;
        case 0x3de224u: goto label_3de224;
        case 0x3de228u: goto label_3de228;
        case 0x3de22cu: goto label_3de22c;
        case 0x3de230u: goto label_3de230;
        case 0x3de234u: goto label_3de234;
        case 0x3de238u: goto label_3de238;
        case 0x3de23cu: goto label_3de23c;
        case 0x3de240u: goto label_3de240;
        case 0x3de244u: goto label_3de244;
        case 0x3de248u: goto label_3de248;
        case 0x3de24cu: goto label_3de24c;
        case 0x3de250u: goto label_3de250;
        case 0x3de254u: goto label_3de254;
        case 0x3de258u: goto label_3de258;
        case 0x3de25cu: goto label_3de25c;
        case 0x3de260u: goto label_3de260;
        case 0x3de264u: goto label_3de264;
        case 0x3de268u: goto label_3de268;
        case 0x3de26cu: goto label_3de26c;
        case 0x3de270u: goto label_3de270;
        case 0x3de274u: goto label_3de274;
        case 0x3de278u: goto label_3de278;
        case 0x3de27cu: goto label_3de27c;
        case 0x3de280u: goto label_3de280;
        case 0x3de284u: goto label_3de284;
        case 0x3de288u: goto label_3de288;
        case 0x3de28cu: goto label_3de28c;
        case 0x3de290u: goto label_3de290;
        case 0x3de294u: goto label_3de294;
        case 0x3de298u: goto label_3de298;
        case 0x3de29cu: goto label_3de29c;
        case 0x3de2a0u: goto label_3de2a0;
        case 0x3de2a4u: goto label_3de2a4;
        case 0x3de2a8u: goto label_3de2a8;
        case 0x3de2acu: goto label_3de2ac;
        case 0x3de2b0u: goto label_3de2b0;
        case 0x3de2b4u: goto label_3de2b4;
        case 0x3de2b8u: goto label_3de2b8;
        case 0x3de2bcu: goto label_3de2bc;
        case 0x3de2c0u: goto label_3de2c0;
        case 0x3de2c4u: goto label_3de2c4;
        case 0x3de2c8u: goto label_3de2c8;
        case 0x3de2ccu: goto label_3de2cc;
        case 0x3de2d0u: goto label_3de2d0;
        case 0x3de2d4u: goto label_3de2d4;
        case 0x3de2d8u: goto label_3de2d8;
        case 0x3de2dcu: goto label_3de2dc;
        case 0x3de2e0u: goto label_3de2e0;
        case 0x3de2e4u: goto label_3de2e4;
        case 0x3de2e8u: goto label_3de2e8;
        case 0x3de2ecu: goto label_3de2ec;
        case 0x3de2f0u: goto label_3de2f0;
        case 0x3de2f4u: goto label_3de2f4;
        case 0x3de2f8u: goto label_3de2f8;
        case 0x3de2fcu: goto label_3de2fc;
        case 0x3de300u: goto label_3de300;
        case 0x3de304u: goto label_3de304;
        case 0x3de308u: goto label_3de308;
        case 0x3de30cu: goto label_3de30c;
        case 0x3de310u: goto label_3de310;
        case 0x3de314u: goto label_3de314;
        case 0x3de318u: goto label_3de318;
        case 0x3de31cu: goto label_3de31c;
        case 0x3de320u: goto label_3de320;
        case 0x3de324u: goto label_3de324;
        case 0x3de328u: goto label_3de328;
        case 0x3de32cu: goto label_3de32c;
        case 0x3de330u: goto label_3de330;
        case 0x3de334u: goto label_3de334;
        case 0x3de338u: goto label_3de338;
        case 0x3de33cu: goto label_3de33c;
        case 0x3de340u: goto label_3de340;
        case 0x3de344u: goto label_3de344;
        case 0x3de348u: goto label_3de348;
        case 0x3de34cu: goto label_3de34c;
        case 0x3de350u: goto label_3de350;
        case 0x3de354u: goto label_3de354;
        case 0x3de358u: goto label_3de358;
        case 0x3de35cu: goto label_3de35c;
        case 0x3de360u: goto label_3de360;
        case 0x3de364u: goto label_3de364;
        case 0x3de368u: goto label_3de368;
        case 0x3de36cu: goto label_3de36c;
        case 0x3de370u: goto label_3de370;
        case 0x3de374u: goto label_3de374;
        case 0x3de378u: goto label_3de378;
        case 0x3de37cu: goto label_3de37c;
        case 0x3de380u: goto label_3de380;
        case 0x3de384u: goto label_3de384;
        case 0x3de388u: goto label_3de388;
        case 0x3de38cu: goto label_3de38c;
        case 0x3de390u: goto label_3de390;
        case 0x3de394u: goto label_3de394;
        case 0x3de398u: goto label_3de398;
        case 0x3de39cu: goto label_3de39c;
        case 0x3de3a0u: goto label_3de3a0;
        case 0x3de3a4u: goto label_3de3a4;
        case 0x3de3a8u: goto label_3de3a8;
        case 0x3de3acu: goto label_3de3ac;
        case 0x3de3b0u: goto label_3de3b0;
        case 0x3de3b4u: goto label_3de3b4;
        case 0x3de3b8u: goto label_3de3b8;
        case 0x3de3bcu: goto label_3de3bc;
        case 0x3de3c0u: goto label_3de3c0;
        case 0x3de3c4u: goto label_3de3c4;
        case 0x3de3c8u: goto label_3de3c8;
        case 0x3de3ccu: goto label_3de3cc;
        case 0x3de3d0u: goto label_3de3d0;
        case 0x3de3d4u: goto label_3de3d4;
        case 0x3de3d8u: goto label_3de3d8;
        case 0x3de3dcu: goto label_3de3dc;
        case 0x3de3e0u: goto label_3de3e0;
        case 0x3de3e4u: goto label_3de3e4;
        case 0x3de3e8u: goto label_3de3e8;
        case 0x3de3ecu: goto label_3de3ec;
        case 0x3de3f0u: goto label_3de3f0;
        case 0x3de3f4u: goto label_3de3f4;
        case 0x3de3f8u: goto label_3de3f8;
        case 0x3de3fcu: goto label_3de3fc;
        case 0x3de400u: goto label_3de400;
        case 0x3de404u: goto label_3de404;
        case 0x3de408u: goto label_3de408;
        case 0x3de40cu: goto label_3de40c;
        case 0x3de410u: goto label_3de410;
        case 0x3de414u: goto label_3de414;
        case 0x3de418u: goto label_3de418;
        case 0x3de41cu: goto label_3de41c;
        case 0x3de420u: goto label_3de420;
        case 0x3de424u: goto label_3de424;
        case 0x3de428u: goto label_3de428;
        case 0x3de42cu: goto label_3de42c;
        case 0x3de430u: goto label_3de430;
        case 0x3de434u: goto label_3de434;
        case 0x3de438u: goto label_3de438;
        case 0x3de43cu: goto label_3de43c;
        case 0x3de440u: goto label_3de440;
        case 0x3de444u: goto label_3de444;
        case 0x3de448u: goto label_3de448;
        case 0x3de44cu: goto label_3de44c;
        case 0x3de450u: goto label_3de450;
        case 0x3de454u: goto label_3de454;
        case 0x3de458u: goto label_3de458;
        case 0x3de45cu: goto label_3de45c;
        case 0x3de460u: goto label_3de460;
        case 0x3de464u: goto label_3de464;
        default: break;
    }

    ctx->pc = 0x3dd138u;

label_3dd138:
    // 0x3dd138: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3dd138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_3dd13c:
    // 0x3dd13c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x3dd13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_3dd140:
    // 0x3dd140: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3dd140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_3dd144:
    // 0x3dd144: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3dd144u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dd148:
    // 0x3dd148: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3dd148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3dd14c:
    // 0x3dd14c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3dd14cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dd150:
    // 0x3dd150: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3dd150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_3dd154:
    // 0x3dd154: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x3dd154u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3dd158:
    // 0x3dd158: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3dd158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_3dd15c:
    // 0x3dd15c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3dd15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_3dd160:
    // 0x3dd160: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x3dd160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_3dd164:
    // 0x3dd164: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x3dd164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_3dd168:
    // 0x3dd168: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x3dd168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_3dd16c:
    // 0x3dd16c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3dd16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3dd170:
    // 0x3dd170: 0x8ea30034  lw          $v1, 0x34($s5)
    ctx->pc = 0x3dd170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_3dd174:
    // 0x3dd174: 0x8eac0038  lw          $t4, 0x38($s5)
    ctx->pc = 0x3dd174u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
label_3dd178:
    // 0x3dd178: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x3dd178u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3dd17c:
    // 0x3dd17c: 0x8ed30004  lw          $s3, 0x4($s6)
    ctx->pc = 0x3dd17cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_3dd180:
    // 0x3dd180: 0x183102b  sltu        $v0, $t4, $v1
    ctx->pc = 0x3dd180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3dd184:
    // 0x3dd184: 0xdeb20020  ld          $s2, 0x20($s5)
    ctx->pc = 0x3dd184u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 21), 32)));
label_3dd188:
    // 0x3dd188: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3dd18c:
    if (ctx->pc == 0x3DD18Cu) {
        ctx->pc = 0x3DD18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD188u;
        // 0x3dd18c: 0x8eb0001c  lw          $s0, 0x1C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD190u;
        goto label_3dd190;
    }
    ctx->pc = 0x3DD188u;
    {
        const bool branch_taken_0x3dd188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD188u;
        // 0x3dd18c: 0x8eb0001c  lw          $s0, 0x1C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd188) {
            ctx->pc = 0x3DD19Cu;
            goto label_3dd19c;
        }
    }
    ctx->pc = 0x3DD190u;
label_3dd190:
    // 0x3dd190: 0x6c1023  subu        $v0, $v1, $t4
    ctx->pc = 0x3dd190u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_3dd194:
    // 0x3dd194: 0x10000004  b           . + 4 + (0x4 << 2)
label_3dd198:
    if (ctx->pc == 0x3DD198u) {
        ctx->pc = 0x3DD198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD194u;
        // 0x3dd198: 0x245effff  addiu       $fp, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD19Cu;
        goto label_3dd19c;
    }
    ctx->pc = 0x3DD194u;
    {
        const bool branch_taken_0x3dd194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD194u;
        // 0x3dd198: 0x245effff  addiu       $fp, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd194) {
            ctx->pc = 0x3DD1A8u;
            goto label_3dd1a8;
        }
    }
    ctx->pc = 0x3DD19Cu;
label_3dd19c:
    // 0x3dd19c: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x3dd19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_3dd1a0:
    // 0x3dd1a0: 0x4cf023  subu        $fp, $v0, $t4
    ctx->pc = 0x3dd1a0u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_3dd1a4:
    // 0x3dd1a4: 0x0  nop
    ctx->pc = 0x3dd1a4u;
    // NOP
label_3dd1a8:
    // 0x3dd1a8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3dd1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3dd1ac:
    // 0x3dd1ac: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x3dd1acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_3dd1b0:
    // 0x3dd1b0: 0x10400491  beqz        $v0, . + 4 + (0x491 << 2)
label_3dd1b4:
    if (ctx->pc == 0x3DD1B4u) {
        ctx->pc = 0x3DD1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD1B0u;
        // 0x3dd1b4: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD1B8u;
        goto label_3dd1b8;
    }
    ctx->pc = 0x3DD1B0u;
    {
        const bool branch_taken_0x3dd1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD1B0u;
        // 0x3dd1b4: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd1b0) {
            ctx->pc = 0x3DE3F8u;
            goto label_3de3f8;
        }
    }
    ctx->pc = 0x3DD1B8u;
label_3dd1b8:
    // 0x3dd1b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3dd1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3dd1bc:
    // 0x3dd1bc: 0x2442d4b0  addiu       $v0, $v0, -0x2B50
    ctx->pc = 0x3dd1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956208));
label_3dd1c0:
    // 0x3dd1c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3dd1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3dd1c4:
    // 0x3dd1c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3dd1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3dd1c8:
    // 0x3dd1c8: 0x800008  jr          $a0
label_3dd1cc:
    if (ctx->pc == 0x3DD1CCu) {
        ctx->pc = 0x3DD1D0u;
        goto label_3dd1d0;
    }
    ctx->pc = 0x3DD1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3DD1D0u: goto label_3dd1d0;
            case 0x3DD420u: goto label_3dd420;
            case 0x3DD5E0u: goto label_3dd5e0;
            case 0x3DD75Cu: goto label_3dd75c;
            case 0x3DD958u: goto label_3dd958;
            case 0x3DDBC4u: goto label_3ddbc4;
            case 0x3DE184u: goto label_3de184;
            case 0x3DE234u: goto label_3de234;
            case 0x3DE288u: goto label_3de288;
            case 0x3DE2A4u: goto label_3de2a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD1C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3DD1D0u;
label_3dd1d0:
    // 0x3dd1d0: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x3dd1d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3dd1d4:
    // 0x3dd1d4: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_3dd1d8:
    if (ctx->pc == 0x3DD1D8u) {
        ctx->pc = 0x3DD1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD1D4u;
        // 0x3dd1d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD1DCu;
        goto label_3dd1dc;
    }
    ctx->pc = 0x3DD1D4u;
    {
        const bool branch_taken_0x3dd1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD1D4u;
        // 0x3dd1d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd1d4) {
            ctx->pc = 0x3DD304u;
            goto label_3dd304;
        }
    }
    ctx->pc = 0x3DD1DCu;
label_3dd1dc:
    // 0x3dd1dc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3dd1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3dd1e0:
    // 0x3dd1e0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3dd1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3dd1e4:
    // 0x3dd1e4: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x3dd1e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_3dd1e8:
    // 0x3dd1e8: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_3dd1ec:
    if (ctx->pc == 0x3DD1ECu) {
        ctx->pc = 0x3DD1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD1E8u;
        // 0x3dd1ec: 0x3044001f  andi        $a0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD1F0u;
        goto label_3dd1f0;
    }
    ctx->pc = 0x3DD1E8u;
    {
        const bool branch_taken_0x3dd1e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD1E8u;
        // 0x3dd1ec: 0x3044001f  andi        $a0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd1e8) {
            ctx->pc = 0x3DD25Cu;
            goto label_3dd25c;
        }
    }
    ctx->pc = 0x3DD1F0u;
label_3dd1f0:
    // 0x3dd1f0: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
label_3dd1f4:
    if (ctx->pc == 0x3DD1F4u) {
        ctx->pc = 0x3DD1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD1F0u;
        // 0x3dd1f4: 0x28820009  slti        $v0, $a0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD1F8u;
        goto label_3dd1f8;
    }
    ctx->pc = 0x3DD1F0u;
    {
        const bool branch_taken_0x3dd1f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD1F0u;
        // 0x3dd1f4: 0x28820009  slti        $v0, $a0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd1f0) {
            ctx->pc = 0x3DD280u;
            goto label_3dd280;
        }
    }
    ctx->pc = 0x3DD1F8u;
label_3dd1f8:
    // 0x3dd1f8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_3dd1fc:
    if (ctx->pc == 0x3DD1FCu) {
        ctx->pc = 0x3DD1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD1F8u;
        // 0x3dd1fc: 0x28820011  slti        $v0, $a0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD200u;
        goto label_3dd200;
    }
    ctx->pc = 0x3DD1F8u;
    {
        const bool branch_taken_0x3dd1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DD1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD1F8u;
        // 0x3dd1fc: 0x28820011  slti        $v0, $a0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd1f8) {
            ctx->pc = 0x3DD25Cu;
            goto label_3dd25c;
        }
    }
    ctx->pc = 0x3DD200u;
label_3dd200:
    // 0x3dd200: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_3dd204:
    if (ctx->pc == 0x3DD204u) {
        ctx->pc = 0x3DD204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD200u;
        // 0x3dd204: 0x28820019  slti        $v0, $a0, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD208u;
        goto label_3dd208;
    }
    ctx->pc = 0x3DD200u;
    {
        const bool branch_taken_0x3dd200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DD204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD200u;
        // 0x3dd204: 0x28820019  slti        $v0, $a0, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd200) {
            ctx->pc = 0x3DD238u;
            goto label_3dd238;
        }
    }
    ctx->pc = 0x3DD208u;
label_3dd208:
    // 0x3dd208: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_3dd20c:
    if (ctx->pc == 0x3DD20Cu) {
        ctx->pc = 0x3DD210u;
        goto label_3dd210;
    }
    ctx->pc = 0x3DD208u;
    {
        const bool branch_taken_0x3dd208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd208) {
            ctx->pc = 0x3DD280u;
            goto label_3dd280;
        }
    }
    ctx->pc = 0x3DD210u;
label_3dd210:
    // 0x3dd210: 0x1260042b  beqz        $s3, . + 4 + (0x42B << 2)
label_3dd214:
    if (ctx->pc == 0x3DD214u) {
        ctx->pc = 0x3DD214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD210u;
        // 0x3dd214: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD218u;
        goto label_3dd218;
    }
    ctx->pc = 0x3DD210u;
    {
        const bool branch_taken_0x3dd210 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD210u;
        // 0x3dd214: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd210) {
            ctx->pc = 0x3DE2C0u;
            goto label_3de2c0;
        }
    }
    ctx->pc = 0x3DD218u;
label_3dd218:
    // 0x3dd218: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x3dd218u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_3dd21c:
    // 0x3dd21c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3dd21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd220:
    // 0x3dd220: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3dd220u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd224:
    // 0x3dd224: 0x2031814  dsllv       $v1, $v1, $s0
    ctx->pc = 0x3dd224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 16) & 0x3F));
label_3dd228:
    // 0x3dd228: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3dd228u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3dd22c:
    // 0x3dd22c: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x3dd22cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
label_3dd230:
    // 0x3dd230: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3dd230u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dd234:
    // 0x3dd234: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3dd234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3dd238:
    // 0x3dd238: 0x12600421  beqz        $s3, . + 4 + (0x421 << 2)
label_3dd23c:
    if (ctx->pc == 0x3DD23Cu) {
        ctx->pc = 0x3DD23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD238u;
        // 0x3dd23c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD240u;
        goto label_3dd240;
    }
    ctx->pc = 0x3DD238u;
    {
        const bool branch_taken_0x3dd238 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD238u;
        // 0x3dd23c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd238) {
            ctx->pc = 0x3DE2C0u;
            goto label_3de2c0;
        }
    }
    ctx->pc = 0x3DD240u;
label_3dd240:
    // 0x3dd240: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3dd240u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3dd244:
    // 0x3dd244: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3dd244u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd248:
    // 0x3dd248: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3dd248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3dd24c:
    // 0x3dd24c: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dd24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3dd250:
    // 0x3dd250: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3dd250u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3dd254:
    // 0x3dd254: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dd254u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3dd258:
    // 0x3dd258: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3dd258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3dd25c:
    // 0x3dd25c: 0x12600418  beqz        $s3, . + 4 + (0x418 << 2)
label_3dd260:
    if (ctx->pc == 0x3DD260u) {
        ctx->pc = 0x3DD260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD25Cu;
        // 0x3dd260: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD264u;
        goto label_3dd264;
    }
    ctx->pc = 0x3DD25Cu;
    {
        const bool branch_taken_0x3dd25c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD25Cu;
        // 0x3dd260: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd25c) {
            ctx->pc = 0x3DE2C0u;
            goto label_3de2c0;
        }
    }
    ctx->pc = 0x3DD264u;
label_3dd264:
    // 0x3dd264: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3dd264u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3dd268:
    // 0x3dd268: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3dd268u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd26c:
    // 0x3dd26c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3dd26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3dd270:
    // 0x3dd270: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dd270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3dd274:
    // 0x3dd274: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3dd278:
    if (ctx->pc == 0x3DD278u) {
        ctx->pc = 0x3DD278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD274u;
        // 0x3dd278: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD27Cu;
        goto label_3dd27c;
    }
    ctx->pc = 0x3DD274u;
    {
        const bool branch_taken_0x3dd274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD274u;
        // 0x3dd278: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd274) {
            ctx->pc = 0x3DD2F0u;
            goto label_3dd2f0;
        }
    }
    ctx->pc = 0x3DD27Cu;
label_3dd27c:
    // 0x3dd27c: 0x0  nop
    ctx->pc = 0x3dd27cu;
    // NOP
label_3dd280:
    // 0x3dd280: 0x1260040f  beqz        $s3, . + 4 + (0x40F << 2)
label_3dd284:
    if (ctx->pc == 0x3DD284u) {
        ctx->pc = 0x3DD284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD280u;
        // 0x3dd284: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD288u;
        goto label_3dd288;
    }
    ctx->pc = 0x3DD280u;
    {
        const bool branch_taken_0x3dd280 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD280u;
        // 0x3dd284: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd280) {
            ctx->pc = 0x3DE2C0u;
            goto label_3de2c0;
        }
    }
    ctx->pc = 0x3DD288u;
label_3dd288:
    // 0x3dd288: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3dd288u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3dd28c:
    // 0x3dd28c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3dd28cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd290:
    // 0x3dd290: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3dd290u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3dd294:
    // 0x3dd294: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dd294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3dd298:
    // 0x3dd298: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dd298u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3dd29c:
    // 0x3dd29c: 0x12600408  beqz        $s3, . + 4 + (0x408 << 2)
label_3dd2a0:
    if (ctx->pc == 0x3DD2A0u) {
        ctx->pc = 0x3DD2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD29Cu;
        // 0x3dd2a0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD2A4u;
        goto label_3dd2a4;
    }
    ctx->pc = 0x3DD29Cu;
    {
        const bool branch_taken_0x3dd29c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD29Cu;
        // 0x3dd2a0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd29c) {
            ctx->pc = 0x3DE2C0u;
            goto label_3de2c0;
        }
    }
    ctx->pc = 0x3DD2A4u;
label_3dd2a4:
    // 0x3dd2a4: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x3dd2a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_3dd2a8:
    // 0x3dd2a8: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3dd2a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3dd2ac:
    // 0x3dd2ac: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3dd2acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3dd2b0:
    // 0x3dd2b0: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dd2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3dd2b4:
    // 0x3dd2b4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dd2b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3dd2b8:
    // 0x3dd2b8: 0x12600401  beqz        $s3, . + 4 + (0x401 << 2)
label_3dd2bc:
    if (ctx->pc == 0x3DD2BCu) {
        ctx->pc = 0x3DD2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD2B8u;
        // 0x3dd2bc: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD2C0u;
        goto label_3dd2c0;
    }
    ctx->pc = 0x3DD2B8u;
    {
        const bool branch_taken_0x3dd2b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD2B8u;
        // 0x3dd2bc: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd2b8) {
            ctx->pc = 0x3DE2C0u;
            goto label_3de2c0;
        }
    }
    ctx->pc = 0x3DD2C0u;
label_3dd2c0:
    // 0x3dd2c0: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x3dd2c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_3dd2c4:
    // 0x3dd2c4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3dd2c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3dd2c8:
    // 0x3dd2c8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3dd2c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3dd2cc:
    // 0x3dd2cc: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dd2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3dd2d0:
    // 0x3dd2d0: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dd2d0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3dd2d4:
    // 0x3dd2d4: 0x126003fa  beqz        $s3, . + 4 + (0x3FA << 2)
label_3dd2d8:
    if (ctx->pc == 0x3DD2D8u) {
        ctx->pc = 0x3DD2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD2D4u;
        // 0x3dd2d8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD2DCu;
        goto label_3dd2dc;
    }
    ctx->pc = 0x3DD2D4u;
    {
        const bool branch_taken_0x3dd2d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD2D4u;
        // 0x3dd2d8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd2d4) {
            ctx->pc = 0x3DE2C0u;
            goto label_3de2c0;
        }
    }
    ctx->pc = 0x3DD2DCu;
label_3dd2dc:
    // 0x3dd2dc: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x3dd2dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_3dd2e0:
    // 0x3dd2e0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3dd2e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3dd2e4:
    // 0x3dd2e4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3dd2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3dd2e8:
    // 0x3dd2e8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3dd2e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3dd2ec:
    // 0x3dd2ec: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dd2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3dd2f0:
    // 0x3dd2f0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3dd2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3dd2f4:
    // 0x3dd2f4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dd2f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3dd2f8:
    // 0x3dd2f8: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x3dd2f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3dd2fc:
    // 0x3dd2fc: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_3dd300:
    if (ctx->pc == 0x3DD300u) {
        ctx->pc = 0x3DD304u;
        goto label_3dd304;
    }
    ctx->pc = 0x3DD2FCu;
    {
        const bool branch_taken_0x3dd2fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dd2fc) {
            ctx->pc = 0x3DD280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dd280;
        }
    }
    ctx->pc = 0x3DD304u;
label_3dd304:
    // 0x3dd304: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x3dd304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_3dd308:
    // 0x3dd308: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3dd308u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3dd30c:
    // 0x3dd30c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3dd30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3dd310:
    // 0x3dd310: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3dd310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3dd314:
    // 0x3dd314: 0x30510007  andi        $s1, $v0, 0x7
    ctx->pc = 0x3dd314u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_3dd318:
    // 0x3dd318: 0x112042  srl         $a0, $s1, 1
    ctx->pc = 0x3dd318u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_3dd31c:
    // 0x3dd31c: 0x10850010  beq         $a0, $a1, . + 4 + (0x10 << 2)
label_3dd320:
    if (ctx->pc == 0x3DD320u) {
        ctx->pc = 0x3DD320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD31Cu;
        // 0x3dd320: 0xaea30018  sw          $v1, 0x18($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD324u;
        goto label_3dd324;
    }
    ctx->pc = 0x3DD31Cu;
    {
        const bool branch_taken_0x3dd31c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x3DD320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD31Cu;
        // 0x3dd320: 0xaea30018  sw          $v1, 0x18($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd31c) {
            ctx->pc = 0x3DD360u;
            goto label_3dd360;
        }
    }
    ctx->pc = 0x3DD324u;
label_3dd324:
    // 0x3dd324: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_3dd328:
    if (ctx->pc == 0x3DD328u) {
        ctx->pc = 0x3DD328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD324u;
        // 0x3dd328: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD32Cu;
        goto label_3dd32c;
    }
    ctx->pc = 0x3DD324u;
    {
        const bool branch_taken_0x3dd324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD324u;
        // 0x3dd328: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd324) {
            ctx->pc = 0x3DD344u;
            goto label_3dd344;
        }
    }
    ctx->pc = 0x3DD32Cu;
label_3dd32c:
    // 0x3dd32c: 0x10820024  beq         $a0, $v0, . + 4 + (0x24 << 2)
label_3dd330:
    if (ctx->pc == 0x3DD330u) {
        ctx->pc = 0x3DD330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD32Cu;
        // 0x3dd330: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD334u;
        goto label_3dd334;
    }
    ctx->pc = 0x3DD32Cu;
    {
        const bool branch_taken_0x3dd32c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DD330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD32Cu;
        // 0x3dd330: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd32c) {
            ctx->pc = 0x3DD3C0u;
            goto label_3dd3c0;
        }
    }
    ctx->pc = 0x3DD334u;
label_3dd334:
    // 0x3dd334: 0x50820026  beql        $a0, $v0, . + 4 + (0x26 << 2)
label_3dd338:
    if (ctx->pc == 0x3DD338u) {
        ctx->pc = 0x3DD338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD334u;
        // 0x3dd338: 0x1290fa  dsrl        $s2, $s2, 3 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> 3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD33Cu;
        goto label_3dd33c;
    }
    ctx->pc = 0x3DD334u;
    {
        const bool branch_taken_0x3dd334 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3dd334) {
            ctx->pc = 0x3DD338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DD334u;
            // 0x3dd338: 0x1290fa  dsrl        $s2, $s2, 3 (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> 3);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DD3D0u;
            goto label_3dd3d0;
        }
    }
    ctx->pc = 0x3DD33Cu;
label_3dd33c:
    // 0x3dd33c: 0x1000ff9b  b           . + 4 + (-0x65 << 2)
label_3dd340:
    if (ctx->pc == 0x3DD340u) {
        ctx->pc = 0x3DD340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD33Cu;
        // 0x3dd340: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD344u;
        goto label_3dd344;
    }
    ctx->pc = 0x3DD33Cu;
    {
        const bool branch_taken_0x3dd33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD33Cu;
        // 0x3dd340: 0x8ea30000  lw          $v1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd33c) {
            ctx->pc = 0x3DD1ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dd1ac;
        }
    }
    ctx->pc = 0x3DD344u;
label_3dd344:
    // 0x3dd344: 0x2610fffd  addiu       $s0, $s0, -0x3
    ctx->pc = 0x3dd344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
label_3dd348:
    // 0x3dd348: 0x1290fa  dsrl        $s2, $s2, 3
    ctx->pc = 0x3dd348u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> 3);
label_3dd34c:
    // 0x3dd34c: 0x32110007  andi        $s1, $s0, 0x7
    ctx->pc = 0x3dd34cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
label_3dd350:
    // 0x3dd350: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x3dd350u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
label_3dd354:
    // 0x3dd354: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x3dd354u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_3dd358:
    // 0x3dd358: 0x1000ff93  b           . + 4 + (-0x6D << 2)
label_3dd35c:
    if (ctx->pc == 0x3DD35Cu) {
        ctx->pc = 0x3DD35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD358u;
        // 0x3dd35c: 0x2329016  dsrlv       $s2, $s2, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (GPR_U32(ctx, 17) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD360u;
        goto label_3dd360;
    }
    ctx->pc = 0x3DD358u;
    {
        const bool branch_taken_0x3dd358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD358u;
        // 0x3dd35c: 0x2329016  dsrlv       $s2, $s2, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (GPR_U32(ctx, 17) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd358) {
            ctx->pc = 0x3DD1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dd1a8;
        }
    }
    ctx->pc = 0x3DD360u;
label_3dd360:
    // 0x3dd360: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3dd360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3dd364:
    // 0x3dd364: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x3dd364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_3dd368:
    // 0x3dd368: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x3dd368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_3dd36c:
    // 0x3dd36c: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x3dd36cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_3dd370:
    // 0x3dd370: 0x7fac0030  sq          $t4, 0x30($sp)
    ctx->pc = 0x3dd370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
label_3dd374:
    // 0x3dd374: 0xc0f7cfc  jal         func_3DF3F0
label_3dd378:
    if (ctx->pc == 0x3DD378u) {
        ctx->pc = 0x3DD378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD374u;
        // 0x3dd378: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD37Cu;
        goto label_3dd37c;
    }
    ctx->pc = 0x3DD374u;
    SET_GPR_U32(ctx, 31, 0x3DD37Cu);
    ctx->pc = 0x3DD378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD374u;
    // 0x3dd378: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF3F0u, 0x3DD374u, 0x3DD37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD37Cu;
label_3dd37c:
    // 0x3dd37c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3dd37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3dd380:
    // 0x3dd380: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3dd380u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3dd384:
    // 0x3dd384: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x3dd384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3dd388:
    // 0x3dd388: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x3dd388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3dd38c:
    // 0x3dd38c: 0xc0f802c  jal         func_3E00B0
label_3dd390:
    if (ctx->pc == 0x3DD390u) {
        ctx->pc = 0x3DD390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD38Cu;
        // 0x3dd390: 0x8fa7001c  lw          $a3, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD394u;
        goto label_3dd394;
    }
    ctx->pc = 0x3DD38Cu;
    SET_GPR_U32(ctx, 31, 0x3DD394u);
    ctx->pc = 0x3DD390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD38Cu;
    // 0x3dd390: 0x8fa7001c  lw          $a3, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E00B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E00B0u, 0x3DD38Cu, 0x3DD394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD394u;
label_3dd394:
    // 0x3dd394: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x3dd394u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_3dd398:
    // 0x3dd398: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3dd39c:
    if (ctx->pc == 0x3DD39Cu) {
        ctx->pc = 0x3DD39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD398u;
        // 0x3dd39c: 0x7bac0030  lq          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD3A0u;
        goto label_3dd3a0;
    }
    ctx->pc = 0x3DD398u;
    {
        const bool branch_taken_0x3dd398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DD39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD398u;
        // 0x3dd39c: 0x7bac0030  lq          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd398) {
            ctx->pc = 0x3DD3BCu;
            goto label_3dd3bc;
        }
    }
    ctx->pc = 0x3DD3A0u;
label_3dd3a0:
    // 0x3dd3a0: 0xfeb20020  sd          $s2, 0x20($s5)
    ctx->pc = 0x3dd3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 18));
label_3dd3a4:
    // 0x3dd3a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3dd3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3dd3a8:
    // 0x3dd3a8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3dd3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3dd3ac:
    // 0x3dd3ac: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3dd3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3dd3b0:
    // 0x3dd3b0: 0xdec30008  ld          $v1, 0x8($s6)
    ctx->pc = 0x3dd3b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 8)));
label_3dd3b4:
    // 0x3dd3b4: 0x10000416  b           . + 4 + (0x416 << 2)
label_3dd3b8:
    if (ctx->pc == 0x3DD3B8u) {
        ctx->pc = 0x3DD3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD3B4u;
        // 0x3dd3b8: 0x2406fffc  addiu       $a2, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD3BCu;
        goto label_3dd3bc;
    }
    ctx->pc = 0x3DD3B4u;
    {
        const bool branch_taken_0x3dd3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD3B4u;
        // 0x3dd3b8: 0x2406fffc  addiu       $a2, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd3b4) {
            ctx->pc = 0x3DE410u;
            goto label_3de410;
        }
    }
    ctx->pc = 0x3DD3BCu;
label_3dd3bc:
    // 0x3dd3bc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3dd3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3dd3c0:
    // 0x3dd3c0: 0x1290fa  dsrl        $s2, $s2, 3
    ctx->pc = 0x3dd3c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> 3);
label_3dd3c4:
    // 0x3dd3c4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3dd3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_3dd3c8:
    // 0x3dd3c8: 0x1000ff77  b           . + 4 + (-0x89 << 2)
label_3dd3cc:
    if (ctx->pc == 0x3DD3CCu) {
        ctx->pc = 0x3DD3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD3C8u;
        // 0x3dd3cc: 0x2610fffd  addiu       $s0, $s0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD3D0u;
        goto label_3dd3d0;
    }
    ctx->pc = 0x3DD3C8u;
    {
        const bool branch_taken_0x3dd3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD3C8u;
        // 0x3dd3cc: 0x2610fffd  addiu       $s0, $s0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd3c8) {
            ctx->pc = 0x3DD1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dd1a8;
        }
    }
    ctx->pc = 0x3DD3D0u;
label_3dd3d0:
    // 0x3dd3d0: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3dd3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3dd3d4:
    // 0x3dd3d4: 0xfeb20020  sd          $s2, 0x20($s5)
    ctx->pc = 0x3dd3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 18));
label_3dd3d8:
    // 0x3dd3d8: 0x2610fffd  addiu       $s0, $s0, -0x3
    ctx->pc = 0x3dd3d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
label_3dd3dc:
    // 0x3dd3dc: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x3dd3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3dd3e0:
    // 0x3dd3e0: 0xaeb0001c  sw          $s0, 0x1C($s5)
    ctx->pc = 0x3dd3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 16));
label_3dd3e4:
    // 0x3dd3e4: 0xdec60008  ld          $a2, 0x8($s6)
    ctx->pc = 0x3dd3e4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 22), 8)));
label_3dd3e8:
    // 0x3dd3e8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3dd3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3dd3ec:
    // 0x3dd3ec: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x3dd3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
label_3dd3f0:
    // 0x3dd3f0: 0x2463d430  addiu       $v1, $v1, -0x2BD0
    ctx->pc = 0x3dd3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956080));
label_3dd3f4:
    // 0x3dd3f4: 0xc2302d  daddu       $a2, $a2, $v0
    ctx->pc = 0x3dd3f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
label_3dd3f8:
    // 0x3dd3f8: 0xaed30004  sw          $s3, 0x4($s6)
    ctx->pc = 0x3dd3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 19));
label_3dd3fc:
    // 0x3dd3fc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3dd3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3dd400:
    // 0x3dd400: 0xfec60008  sd          $a2, 0x8($s6)
    ctx->pc = 0x3dd400u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 6));
label_3dd404:
    // 0x3dd404: 0xaeac0038  sw          $t4, 0x38($s5)
    ctx->pc = 0x3dd404u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 12));
label_3dd408:
    // 0x3dd408: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3dd408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3dd40c:
    // 0x3dd40c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3dd40cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_3dd410:
    // 0x3dd410: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3dd410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3dd414:
    // 0x3dd414: 0xaec30020  sw          $v1, 0x20($s6)
    ctx->pc = 0x3dd414u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 32), GPR_U32(ctx, 3));
label_3dd418:
    // 0x3dd418: 0x10000404  b           . + 4 + (0x404 << 2)
label_3dd41c:
    if (ctx->pc == 0x3DD41Cu) {
        ctx->pc = 0x3DD41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD418u;
        // 0x3dd41c: 0x2406fffd  addiu       $a2, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD420u;
        goto label_3dd420;
    }
    ctx->pc = 0x3DD418u;
    {
        const bool branch_taken_0x3dd418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD418u;
        // 0x3dd41c: 0x2406fffd  addiu       $a2, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd418) {
            ctx->pc = 0x3DE42Cu;
            goto label_3de42c;
        }
    }
    ctx->pc = 0x3DD420u;
label_3dd420:
    // 0x3dd420: 0x2e020020  sltiu       $v0, $s0, 0x20
    ctx->pc = 0x3dd420u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_3dd424:
    // 0x3dd424: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_3dd428:
    if (ctx->pc == 0x3DD428u) {
        ctx->pc = 0x3DD428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD424u;
        // 0x3dd428: 0x101823  negu        $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD42Cu;
        goto label_3dd42c;
    }
    ctx->pc = 0x3DD424u;
    {
        const bool branch_taken_0x3dd424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD424u;
        // 0x3dd428: 0x101823  negu        $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd424) {
            ctx->pc = 0x3DD54Cu;
            goto label_3dd54c;
        }
    }
    ctx->pc = 0x3DD42Cu;
label_3dd42c:
    // 0x3dd42c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3dd42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3dd430:
    // 0x3dd430: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x3dd430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
label_3dd434:
    // 0x3dd434: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_3dd438:
    if (ctx->pc == 0x3DD438u) {
        ctx->pc = 0x3DD438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD434u;
        // 0x3dd438: 0x3063001f  andi        $v1, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD43Cu;
        goto label_3dd43c;
    }
    ctx->pc = 0x3DD434u;
    {
        const bool branch_taken_0x3dd434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD434u;
        // 0x3dd438: 0x3063001f  andi        $v1, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd434) {
            ctx->pc = 0x3DD4A8u;
            goto label_3dd4a8;
        }
    }
    ctx->pc = 0x3DD43Cu;
label_3dd43c:
    // 0x3dd43c: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_3dd440:
    if (ctx->pc == 0x3DD440u) {
        ctx->pc = 0x3DD440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD43Cu;
        // 0x3dd440: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD444u;
        goto label_3dd444;
    }
    ctx->pc = 0x3DD43Cu;
    {
        const bool branch_taken_0x3dd43c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD43Cu;
        // 0x3dd440: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd43c) {
            ctx->pc = 0x3DD4C8u;
            goto label_3dd4c8;
        }
    }
    ctx->pc = 0x3DD444u;
label_3dd444:
    // 0x3dd444: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_3dd448:
    if (ctx->pc == 0x3DD448u) {
        ctx->pc = 0x3DD448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD444u;
        // 0x3dd448: 0x28620011  slti        $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD44Cu;
        goto label_3dd44c;
    }
    ctx->pc = 0x3DD444u;
    {
        const bool branch_taken_0x3dd444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DD448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD444u;
        // 0x3dd448: 0x28620011  slti        $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd444) {
            ctx->pc = 0x3DD4A8u;
            goto label_3dd4a8;
        }
    }
    ctx->pc = 0x3DD44Cu;
label_3dd44c:
    // 0x3dd44c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_3dd450:
    if (ctx->pc == 0x3DD450u) {
        ctx->pc = 0x3DD450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD44Cu;
        // 0x3dd450: 0x28620019  slti        $v0, $v1, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD454u;
        goto label_3dd454;
    }
    ctx->pc = 0x3DD44Cu;
    {
        const bool branch_taken_0x3dd44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DD450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD44Cu;
        // 0x3dd450: 0x28620019  slti        $v0, $v1, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd44c) {
            ctx->pc = 0x3DD484u;
            goto label_3dd484;
        }
    }
    ctx->pc = 0x3DD454u;
label_3dd454:
    // 0x3dd454: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_3dd458:
    if (ctx->pc == 0x3DD458u) {
        ctx->pc = 0x3DD45Cu;
        goto label_3dd45c;
    }
    ctx->pc = 0x3DD454u;
    {
        const bool branch_taken_0x3dd454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd454) {
            ctx->pc = 0x3DD4C8u;
            goto label_3dd4c8;
        }
    }
    ctx->pc = 0x3DD45Cu;
label_3dd45c:
    // 0x3dd45c: 0x126003a5  beqz        $s3, . + 4 + (0x3A5 << 2)
label_3dd460:
    if (ctx->pc == 0x3DD460u) {
        ctx->pc = 0x3DD460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD45Cu;
        // 0x3dd460: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD464u;
        goto label_3dd464;
    }
    ctx->pc = 0x3DD45Cu;
    {
        const bool branch_taken_0x3dd45c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD45Cu;
        // 0x3dd460: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd45c) {
            ctx->pc = 0x3DE2F4u;
            goto label_3de2f4;
        }
    }
    ctx->pc = 0x3DD464u;
label_3dd464:
    // 0x3dd464: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x3dd464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_3dd468:
    // 0x3dd468: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3dd468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd46c:
    // 0x3dd46c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3dd46cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd470:
    // 0x3dd470: 0x2031814  dsllv       $v1, $v1, $s0
    ctx->pc = 0x3dd470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 16) & 0x3F));
label_3dd474:
    // 0x3dd474: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3dd474u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3dd478:
    // 0x3dd478: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x3dd478u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
label_3dd47c:
    // 0x3dd47c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3dd47cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dd480:
    // 0x3dd480: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3dd480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3dd484:
    // 0x3dd484: 0x1260039b  beqz        $s3, . + 4 + (0x39B << 2)
label_3dd488:
    if (ctx->pc == 0x3DD488u) {
        ctx->pc = 0x3DD488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD484u;
        // 0x3dd488: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD48Cu;
        goto label_3dd48c;
    }
    ctx->pc = 0x3DD484u;
    {
        const bool branch_taken_0x3dd484 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD484u;
        // 0x3dd488: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd484) {
            ctx->pc = 0x3DE2F4u;
            goto label_3de2f4;
        }
    }
    ctx->pc = 0x3DD48Cu;
label_3dd48c:
    // 0x3dd48c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3dd48cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3dd490:
    // 0x3dd490: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3dd490u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd494:
    // 0x3dd494: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3dd494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3dd498:
    // 0x3dd498: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dd498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3dd49c:
    // 0x3dd49c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3dd49cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3dd4a0:
    // 0x3dd4a0: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dd4a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3dd4a4:
    // 0x3dd4a4: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3dd4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3dd4a8:
    // 0x3dd4a8: 0x12600392  beqz        $s3, . + 4 + (0x392 << 2)
label_3dd4ac:
    if (ctx->pc == 0x3DD4ACu) {
        ctx->pc = 0x3DD4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD4A8u;
        // 0x3dd4ac: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD4B0u;
        goto label_3dd4b0;
    }
    ctx->pc = 0x3DD4A8u;
    {
        const bool branch_taken_0x3dd4a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD4A8u;
        // 0x3dd4ac: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd4a8) {
            ctx->pc = 0x3DE2F4u;
            goto label_3de2f4;
        }
    }
    ctx->pc = 0x3DD4B0u;
label_3dd4b0:
    // 0x3dd4b0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3dd4b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3dd4b4:
    // 0x3dd4b4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3dd4b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd4b8:
    // 0x3dd4b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3dd4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3dd4bc:
    // 0x3dd4bc: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dd4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3dd4c0:
    // 0x3dd4c0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_3dd4c4:
    if (ctx->pc == 0x3DD4C4u) {
        ctx->pc = 0x3DD4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD4C0u;
        // 0x3dd4c4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD4C8u;
        goto label_3dd4c8;
    }
    ctx->pc = 0x3DD4C0u;
    {
        const bool branch_taken_0x3dd4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD4C0u;
        // 0x3dd4c4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd4c0) {
            ctx->pc = 0x3DD538u;
            goto label_3dd538;
        }
    }
    ctx->pc = 0x3DD4C8u;
label_3dd4c8:
    // 0x3dd4c8: 0x1260038a  beqz        $s3, . + 4 + (0x38A << 2)
label_3dd4cc:
    if (ctx->pc == 0x3DD4CCu) {
        ctx->pc = 0x3DD4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD4C8u;
        // 0x3dd4cc: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD4D0u;
        goto label_3dd4d0;
    }
    ctx->pc = 0x3DD4C8u;
    {
        const bool branch_taken_0x3dd4c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD4C8u;
        // 0x3dd4cc: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd4c8) {
            ctx->pc = 0x3DE2F4u;
            goto label_3de2f4;
        }
    }
    ctx->pc = 0x3DD4D0u;
label_3dd4d0:
    // 0x3dd4d0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3dd4d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3dd4d4:
    // 0x3dd4d4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3dd4d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd4d8:
    // 0x3dd4d8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3dd4d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3dd4dc:
    // 0x3dd4dc: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dd4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3dd4e0:
    // 0x3dd4e0: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dd4e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3dd4e4:
    // 0x3dd4e4: 0x12600383  beqz        $s3, . + 4 + (0x383 << 2)
label_3dd4e8:
    if (ctx->pc == 0x3DD4E8u) {
        ctx->pc = 0x3DD4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD4E4u;
        // 0x3dd4e8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD4ECu;
        goto label_3dd4ec;
    }
    ctx->pc = 0x3DD4E4u;
    {
        const bool branch_taken_0x3dd4e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD4E4u;
        // 0x3dd4e8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd4e4) {
            ctx->pc = 0x3DE2F4u;
            goto label_3de2f4;
        }
    }
    ctx->pc = 0x3DD4ECu;
label_3dd4ec:
    // 0x3dd4ec: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x3dd4ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_3dd4f0:
    // 0x3dd4f0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3dd4f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3dd4f4:
    // 0x3dd4f4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3dd4f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3dd4f8:
    // 0x3dd4f8: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dd4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3dd4fc:
    // 0x3dd4fc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dd4fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3dd500:
    // 0x3dd500: 0x1260037c  beqz        $s3, . + 4 + (0x37C << 2)
label_3dd504:
    if (ctx->pc == 0x3DD504u) {
        ctx->pc = 0x3DD504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD500u;
        // 0x3dd504: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD508u;
        goto label_3dd508;
    }
    ctx->pc = 0x3DD500u;
    {
        const bool branch_taken_0x3dd500 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD500u;
        // 0x3dd504: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd500) {
            ctx->pc = 0x3DE2F4u;
            goto label_3de2f4;
        }
    }
    ctx->pc = 0x3DD508u;
label_3dd508:
    // 0x3dd508: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x3dd508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_3dd50c:
    // 0x3dd50c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3dd50cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3dd510:
    // 0x3dd510: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3dd510u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3dd514:
    // 0x3dd514: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dd514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3dd518:
    // 0x3dd518: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dd518u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3dd51c:
    // 0x3dd51c: 0x12600375  beqz        $s3, . + 4 + (0x375 << 2)
label_3dd520:
    if (ctx->pc == 0x3DD520u) {
        ctx->pc = 0x3DD520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD51Cu;
        // 0x3dd520: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD524u;
        goto label_3dd524;
    }
    ctx->pc = 0x3DD51Cu;
    {
        const bool branch_taken_0x3dd51c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD51Cu;
        // 0x3dd520: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd51c) {
            ctx->pc = 0x3DE2F4u;
            goto label_3de2f4;
        }
    }
    ctx->pc = 0x3DD524u;
label_3dd524:
    // 0x3dd524: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x3dd524u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_3dd528:
    // 0x3dd528: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3dd528u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3dd52c:
    // 0x3dd52c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3dd52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3dd530:
    // 0x3dd530: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3dd530u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3dd534:
    // 0x3dd534: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dd534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3dd538:
    // 0x3dd538: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3dd538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3dd53c:
    // 0x3dd53c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dd53cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3dd540:
    // 0x3dd540: 0x2e020020  sltiu       $v0, $s0, 0x20
    ctx->pc = 0x3dd540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_3dd544:
    // 0x3dd544: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_3dd548:
    if (ctx->pc == 0x3DD548u) {
        ctx->pc = 0x3DD54Cu;
        goto label_3dd54c;
    }
    ctx->pc = 0x3DD544u;
    {
        const bool branch_taken_0x3dd544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dd544) {
            ctx->pc = 0x3DD4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dd4c8;
        }
    }
    ctx->pc = 0x3DD54Cu;
label_3dd54c:
    // 0x3dd54c: 0x121027  nor         $v0, $zero, $s2
    ctx->pc = 0x3dd54cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 18)));
label_3dd550:
    // 0x3dd550: 0x3243ffff  andi        $v1, $s2, 0xFFFF
    ctx->pc = 0x3dd550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_3dd554:
    // 0x3dd554: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x3dd554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
label_3dd558:
    // 0x3dd558: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3dd558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3dd55c:
    // 0x3dd55c: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
label_3dd560:
    if (ctx->pc == 0x3DD560u) {
        ctx->pc = 0x3DD560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD55Cu;
        // 0x3dd560: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD564u;
        goto label_3dd564;
    }
    ctx->pc = 0x3DD55Cu;
    {
        const bool branch_taken_0x3dd55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DD560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD55Cu;
        // 0x3dd560: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd55c) {
            ctx->pc = 0x3DD5A8u;
            goto label_3dd5a8;
        }
    }
    ctx->pc = 0x3DD564u;
label_3dd564:
    // 0x3dd564: 0xfeb20020  sd          $s2, 0x20($s5)
    ctx->pc = 0x3dd564u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 18));
label_3dd568:
    // 0x3dd568: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3dd568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3dd56c:
    // 0x3dd56c: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x3dd56cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_3dd570:
    // 0x3dd570: 0xdec30008  ld          $v1, 0x8($s6)
    ctx->pc = 0x3dd570u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 8)));
label_3dd574:
    // 0x3dd574: 0x24e7d448  addiu       $a3, $a3, -0x2BB8
    ctx->pc = 0x3dd574u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956104));
label_3dd578:
    // 0x3dd578: 0xaeb0001c  sw          $s0, 0x1C($s5)
    ctx->pc = 0x3dd578u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 16));
label_3dd57c:
    // 0x3dd57c: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x3dd57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3dd580:
    // 0x3dd580: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x3dd580u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
label_3dd584:
    // 0x3dd584: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3dd584u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_3dd588:
    // 0x3dd588: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x3dd588u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
label_3dd58c:
    // 0x3dd58c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3dd58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3dd590:
    // 0x3dd590: 0xaed30004  sw          $s3, 0x4($s6)
    ctx->pc = 0x3dd590u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 19));
label_3dd594:
    // 0x3dd594: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3dd594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3dd598:
    // 0x3dd598: 0xaeac0038  sw          $t4, 0x38($s5)
    ctx->pc = 0x3dd598u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 12));
label_3dd59c:
    // 0x3dd59c: 0x2406fffd  addiu       $a2, $zero, -0x3
    ctx->pc = 0x3dd59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3dd5a0:
    // 0x3dd5a0: 0x100003a1  b           . + 4 + (0x3A1 << 2)
label_3dd5a4:
    if (ctx->pc == 0x3DD5A4u) {
        ctx->pc = 0x3DD5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD5A0u;
        // 0x3dd5a4: 0xaec70020  sw          $a3, 0x20($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD5A8u;
        goto label_3dd5a8;
    }
    ctx->pc = 0x3DD5A0u;
    {
        const bool branch_taken_0x3dd5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD5A0u;
        // 0x3dd5a4: 0xaec70020  sw          $a3, 0x20($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd5a0) {
            ctx->pc = 0x3DE428u;
            goto label_3de428;
        }
    }
    ctx->pc = 0x3DD5A8u;
label_3dd5a8:
    // 0x3dd5a8: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x3dd5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_3dd5ac:
    // 0x3dd5ac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3dd5acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3dd5b0:
    // 0x3dd5b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3dd5b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd5b4:
    // 0x3dd5b4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3dd5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3dd5b8:
    // 0x3dd5b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3dd5b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd5bc:
    // 0x3dd5bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3dd5c0:
    if (ctx->pc == 0x3DD5C0u) {
        ctx->pc = 0x3DD5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD5BCu;
        // 0x3dd5c0: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD5C4u;
        goto label_3dd5c4;
    }
    ctx->pc = 0x3DD5BCu;
    {
        const bool branch_taken_0x3dd5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DD5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD5BCu;
        // 0x3dd5c0: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd5bc) {
            ctx->pc = 0x3DD5D4u;
            goto label_3dd5d4;
        }
    }
    ctx->pc = 0x3DD5C4u;
label_3dd5c4:
    // 0x3dd5c4: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x3dd5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_3dd5c8:
    // 0x3dd5c8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3dd5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3dd5cc:
    // 0x3dd5cc: 0x10000002  b           . + 4 + (0x2 << 2)
label_3dd5d0:
    if (ctx->pc == 0x3DD5D0u) {
        ctx->pc = 0x3DD5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD5CCu;
        // 0x3dd5d0: 0x2180a  movz        $v1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD5D4u;
        goto label_3dd5d4;
    }
    ctx->pc = 0x3DD5CCu;
    {
        const bool branch_taken_0x3dd5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD5CCu;
        // 0x3dd5d0: 0x2180a  movz        $v1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd5cc) {
            ctx->pc = 0x3DD5D8u;
            goto label_3dd5d8;
        }
    }
    ctx->pc = 0x3DD5D4u;
label_3dd5d4:
    // 0x3dd5d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3dd5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3dd5d8:
    // 0x3dd5d8: 0x1000fef3  b           . + 4 + (-0x10D << 2)
label_3dd5dc:
    if (ctx->pc == 0x3DD5DCu) {
        ctx->pc = 0x3DD5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD5D8u;
        // 0x3dd5dc: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD5E0u;
        goto label_3dd5e0;
    }
    ctx->pc = 0x3DD5D8u;
    {
        const bool branch_taken_0x3dd5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD5D8u;
        // 0x3dd5dc: 0xaea30000  sw          $v1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd5d8) {
            ctx->pc = 0x3DD1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dd1a8;
        }
    }
    ctx->pc = 0x3DD5E0u;
label_3dd5e0:
    // 0x3dd5e0: 0x1660000d  bnez        $s3, . + 4 + (0xD << 2)
label_3dd5e4:
    if (ctx->pc == 0x3DD5E4u) {
        ctx->pc = 0x3DD5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD5E0u;
        // 0x3dd5e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD5E8u;
        goto label_3dd5e8;
    }
    ctx->pc = 0x3DD5E0u;
    {
        const bool branch_taken_0x3dd5e0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DD5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD5E0u;
        // 0x3dd5e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd5e0) {
            ctx->pc = 0x3DD618u;
            goto label_3dd618;
        }
    }
    ctx->pc = 0x3DD5E8u;
label_3dd5e8:
    // 0x3dd5e8: 0xfeb20020  sd          $s2, 0x20($s5)
    ctx->pc = 0x3dd5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 18));
label_3dd5ec:
    // 0x3dd5ec: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3dd5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3dd5f0:
    // 0x3dd5f0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3dd5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3dd5f4:
    // 0x3dd5f4: 0xdec30008  ld          $v1, 0x8($s6)
    ctx->pc = 0x3dd5f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 8)));
label_3dd5f8:
    // 0x3dd5f8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3dd5f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3dd5fc:
    // 0x3dd5fc: 0xaeb0001c  sw          $s0, 0x1C($s5)
    ctx->pc = 0x3dd5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 16));
label_3dd600:
    // 0x3dd600: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x3dd600u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3dd604:
    // 0x3dd604: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x3dd604u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
label_3dd608:
    // 0x3dd608: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3dd608u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_3dd60c:
    // 0x3dd60c: 0xaeac0038  sw          $t4, 0x38($s5)
    ctx->pc = 0x3dd60cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 12));
label_3dd610:
    // 0x3dd610: 0x10000385  b           . + 4 + (0x385 << 2)
label_3dd614:
    if (ctx->pc == 0x3DD614u) {
        ctx->pc = 0x3DD614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD610u;
        // 0x3dd614: 0xaec00004  sw          $zero, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD618u;
        goto label_3dd618;
    }
    ctx->pc = 0x3DD610u;
    {
        const bool branch_taken_0x3dd610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD610u;
        // 0x3dd614: 0xaec00004  sw          $zero, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd610) {
            ctx->pc = 0x3DE428u;
            goto label_3de428;
        }
    }
    ctx->pc = 0x3DD618u;
label_3dd618:
    // 0x3dd618: 0x57c00038  bnel        $fp, $zero, . + 4 + (0x38 << 2)
label_3dd61c:
    if (ctx->pc == 0x3DD61Cu) {
        ctx->pc = 0x3DD61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD618u;
        // 0x3dd61c: 0x8eb10004  lw          $s1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD620u;
        goto label_3dd620;
    }
    ctx->pc = 0x3DD618u;
    {
        const bool branch_taken_0x3dd618 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dd618) {
            ctx->pc = 0x3DD61Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DD618u;
            // 0x3dd61c: 0x8eb10004  lw          $s1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DD6FCu;
            goto label_3dd6fc;
        }
    }
    ctx->pc = 0x3DD620u;
label_3dd620:
    // 0x3dd620: 0x8ea40030  lw          $a0, 0x30($s5)
    ctx->pc = 0x3dd620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_3dd624:
    // 0x3dd624: 0x1584000c  bne         $t4, $a0, . + 4 + (0xC << 2)
label_3dd628:
    if (ctx->pc == 0x3DD628u) {
        ctx->pc = 0x3DD62Cu;
        goto label_3dd62c;
    }
    ctx->pc = 0x3DD624u;
    {
        const bool branch_taken_0x3dd624 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 4));
        if (branch_taken_0x3dd624) {
            ctx->pc = 0x3DD658u;
            goto label_3dd658;
        }
    }
    ctx->pc = 0x3DD62Cu;
label_3dd62c:
    // 0x3dd62c: 0x8ea30034  lw          $v1, 0x34($s5)
    ctx->pc = 0x3dd62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_3dd630:
    // 0x3dd630: 0x8ea2002c  lw          $v0, 0x2C($s5)
    ctx->pc = 0x3dd630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
label_3dd634:
    // 0x3dd634: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_3dd638:
    if (ctx->pc == 0x3DD638u) {
        ctx->pc = 0x3DD63Cu;
        goto label_3dd63c;
    }
    ctx->pc = 0x3DD634u;
    {
        const bool branch_taken_0x3dd634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3dd634) {
            ctx->pc = 0x3DD658u;
            goto label_3dd658;
        }
    }
    ctx->pc = 0x3DD63Cu;
label_3dd63c:
    // 0x3dd63c: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x3dd63cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd640:
    // 0x3dd640: 0x183102b  sltu        $v0, $t4, $v1
    ctx->pc = 0x3dd640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3dd644:
    // 0x3dd644: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3dd648:
    if (ctx->pc == 0x3DD648u) {
        ctx->pc = 0x3DD648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD644u;
        // 0x3dd648: 0x6c1023  subu        $v0, $v1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD64Cu;
        goto label_3dd64c;
    }
    ctx->pc = 0x3DD644u;
    {
        const bool branch_taken_0x3dd644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD644u;
        // 0x3dd648: 0x6c1023  subu        $v0, $v1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd644) {
            ctx->pc = 0x3DD654u;
            goto label_3dd654;
        }
    }
    ctx->pc = 0x3DD64Cu;
label_3dd64c:
    // 0x3dd64c: 0x10000002  b           . + 4 + (0x2 << 2)
label_3dd650:
    if (ctx->pc == 0x3DD650u) {
        ctx->pc = 0x3DD650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD64Cu;
        // 0x3dd650: 0x245effff  addiu       $fp, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD654u;
        goto label_3dd654;
    }
    ctx->pc = 0x3DD64Cu;
    {
        const bool branch_taken_0x3dd64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD64Cu;
        // 0x3dd650: 0x245effff  addiu       $fp, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd64c) {
            ctx->pc = 0x3DD658u;
            goto label_3dd658;
        }
    }
    ctx->pc = 0x3DD654u;
label_3dd654:
    // 0x3dd654: 0x8cf023  subu        $fp, $a0, $t4
    ctx->pc = 0x3dd654u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_3dd658:
    // 0x3dd658: 0x57c00028  bnel        $fp, $zero, . + 4 + (0x28 << 2)
label_3dd65c:
    if (ctx->pc == 0x3DD65Cu) {
        ctx->pc = 0x3DD65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD658u;
        // 0x3dd65c: 0x8eb10004  lw          $s1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD660u;
        goto label_3dd660;
    }
    ctx->pc = 0x3DD658u;
    {
        const bool branch_taken_0x3dd658 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dd658) {
            ctx->pc = 0x3DD65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DD658u;
            // 0x3dd65c: 0x8eb10004  lw          $s1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DD6FCu;
            goto label_3dd6fc;
        }
    }
    ctx->pc = 0x3DD660u;
label_3dd660:
    // 0x3dd660: 0xaeac0038  sw          $t4, 0x38($s5)
    ctx->pc = 0x3dd660u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 12));
label_3dd664:
    // 0x3dd664: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3dd664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3dd668:
    // 0x3dd668: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3dd668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3dd66c:
    // 0x3dd66c: 0xc0f8054  jal         func_3E0150
label_3dd670:
    if (ctx->pc == 0x3DD670u) {
        ctx->pc = 0x3DD670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD66Cu;
        // 0x3dd670: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD674u;
        goto label_3dd674;
    }
    ctx->pc = 0x3DD66Cu;
    SET_GPR_U32(ctx, 31, 0x3DD674u);
    ctx->pc = 0x3DD670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD66Cu;
    // 0x3dd670: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0150u, 0x3DD66Cu, 0x3DD674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD674u;
label_3dd674:
    // 0x3dd674: 0x8ea30034  lw          $v1, 0x34($s5)
    ctx->pc = 0x3dd674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_3dd678:
    // 0x3dd678: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3dd678u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd67c:
    // 0x3dd67c: 0x8eac0038  lw          $t4, 0x38($s5)
    ctx->pc = 0x3dd67cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
label_3dd680:
    // 0x3dd680: 0x183102b  sltu        $v0, $t4, $v1
    ctx->pc = 0x3dd680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3dd684:
    // 0x3dd684: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3dd688:
    if (ctx->pc == 0x3DD688u) {
        ctx->pc = 0x3DD688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD684u;
        // 0x3dd688: 0x6c1023  subu        $v0, $v1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD68Cu;
        goto label_3dd68c;
    }
    ctx->pc = 0x3DD684u;
    {
        const bool branch_taken_0x3dd684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD684u;
        // 0x3dd688: 0x6c1023  subu        $v0, $v1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd684) {
            ctx->pc = 0x3DD698u;
            goto label_3dd698;
        }
    }
    ctx->pc = 0x3DD68Cu;
label_3dd68c:
    // 0x3dd68c: 0x8ea40030  lw          $a0, 0x30($s5)
    ctx->pc = 0x3dd68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_3dd690:
    // 0x3dd690: 0x10000004  b           . + 4 + (0x4 << 2)
label_3dd694:
    if (ctx->pc == 0x3DD694u) {
        ctx->pc = 0x3DD694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD690u;
        // 0x3dd694: 0x245effff  addiu       $fp, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD698u;
        goto label_3dd698;
    }
    ctx->pc = 0x3DD690u;
    {
        const bool branch_taken_0x3dd690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD690u;
        // 0x3dd694: 0x245effff  addiu       $fp, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd690) {
            ctx->pc = 0x3DD6A4u;
            goto label_3dd6a4;
        }
    }
    ctx->pc = 0x3DD698u;
label_3dd698:
    // 0x3dd698: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x3dd698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_3dd69c:
    // 0x3dd69c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3dd69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd6a0:
    // 0x3dd6a0: 0x4cf023  subu        $fp, $v0, $t4
    ctx->pc = 0x3dd6a0u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_3dd6a4:
    // 0x3dd6a4: 0x1584000c  bne         $t4, $a0, . + 4 + (0xC << 2)
label_3dd6a8:
    if (ctx->pc == 0x3DD6A8u) {
        ctx->pc = 0x3DD6ACu;
        goto label_3dd6ac;
    }
    ctx->pc = 0x3DD6A4u;
    {
        const bool branch_taken_0x3dd6a4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 4));
        if (branch_taken_0x3dd6a4) {
            ctx->pc = 0x3DD6D8u;
            goto label_3dd6d8;
        }
    }
    ctx->pc = 0x3DD6ACu;
label_3dd6ac:
    // 0x3dd6ac: 0x8ea30034  lw          $v1, 0x34($s5)
    ctx->pc = 0x3dd6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_3dd6b0:
    // 0x3dd6b0: 0x8ea2002c  lw          $v0, 0x2C($s5)
    ctx->pc = 0x3dd6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
label_3dd6b4:
    // 0x3dd6b4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_3dd6b8:
    if (ctx->pc == 0x3DD6B8u) {
        ctx->pc = 0x3DD6BCu;
        goto label_3dd6bc;
    }
    ctx->pc = 0x3DD6B4u;
    {
        const bool branch_taken_0x3dd6b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3dd6b4) {
            ctx->pc = 0x3DD6D8u;
            goto label_3dd6d8;
        }
    }
    ctx->pc = 0x3DD6BCu;
label_3dd6bc:
    // 0x3dd6bc: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x3dd6bcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd6c0:
    // 0x3dd6c0: 0x183102b  sltu        $v0, $t4, $v1
    ctx->pc = 0x3dd6c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3dd6c4:
    // 0x3dd6c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3dd6c8:
    if (ctx->pc == 0x3DD6C8u) {
        ctx->pc = 0x3DD6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD6C4u;
        // 0x3dd6c8: 0x6c1023  subu        $v0, $v1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD6CCu;
        goto label_3dd6cc;
    }
    ctx->pc = 0x3DD6C4u;
    {
        const bool branch_taken_0x3dd6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD6C4u;
        // 0x3dd6c8: 0x6c1023  subu        $v0, $v1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd6c4) {
            ctx->pc = 0x3DD6D4u;
            goto label_3dd6d4;
        }
    }
    ctx->pc = 0x3DD6CCu;
label_3dd6cc:
    // 0x3dd6cc: 0x10000002  b           . + 4 + (0x2 << 2)
label_3dd6d0:
    if (ctx->pc == 0x3DD6D0u) {
        ctx->pc = 0x3DD6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD6CCu;
        // 0x3dd6d0: 0x245effff  addiu       $fp, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD6D4u;
        goto label_3dd6d4;
    }
    ctx->pc = 0x3DD6CCu;
    {
        const bool branch_taken_0x3dd6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD6CCu;
        // 0x3dd6d0: 0x245effff  addiu       $fp, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd6cc) {
            ctx->pc = 0x3DD6D8u;
            goto label_3dd6d8;
        }
    }
    ctx->pc = 0x3DD6D4u;
label_3dd6d4:
    // 0x3dd6d4: 0x8cf023  subu        $fp, $a0, $t4
    ctx->pc = 0x3dd6d4u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_3dd6d8:
    // 0x3dd6d8: 0x57c00008  bnel        $fp, $zero, . + 4 + (0x8 << 2)
label_3dd6dc:
    if (ctx->pc == 0x3DD6DCu) {
        ctx->pc = 0x3DD6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD6D8u;
        // 0x3dd6dc: 0x8eb10004  lw          $s1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD6E0u;
        goto label_3dd6e0;
    }
    ctx->pc = 0x3DD6D8u;
    {
        const bool branch_taken_0x3dd6d8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dd6d8) {
            ctx->pc = 0x3DD6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DD6D8u;
            // 0x3dd6dc: 0x8eb10004  lw          $s1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DD6FCu;
            goto label_3dd6fc;
        }
    }
    ctx->pc = 0x3DD6E0u;
label_3dd6e0:
    // 0x3dd6e0: 0xfeb20020  sd          $s2, 0x20($s5)
    ctx->pc = 0x3dd6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 18));
label_3dd6e4:
    // 0x3dd6e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3dd6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3dd6e8:
    // 0x3dd6e8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3dd6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3dd6ec:
    // 0x3dd6ec: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3dd6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3dd6f0:
    // 0x3dd6f0: 0xdec30008  ld          $v1, 0x8($s6)
    ctx->pc = 0x3dd6f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 8)));
label_3dd6f4:
    // 0x3dd6f4: 0x10000346  b           . + 4 + (0x346 << 2)
label_3dd6f8:
    if (ctx->pc == 0x3DD6F8u) {
        ctx->pc = 0x3DD6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD6F4u;
        // 0x3dd6f8: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD6FCu;
        goto label_3dd6fc;
    }
    ctx->pc = 0x3DD6F4u;
    {
        const bool branch_taken_0x3dd6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD6F4u;
        // 0x3dd6f8: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd6f4) {
            ctx->pc = 0x3DE410u;
            goto label_3de410;
        }
    }
    ctx->pc = 0x3DD6FCu;
label_3dd6fc:
    // 0x3dd6fc: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x3dd6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_3dd700:
    // 0x3dd700: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3dd700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3dd704:
    // 0x3dd704: 0x7fac0030  sq          $t4, 0x30($sp)
    ctx->pc = 0x3dd704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
label_3dd708:
    // 0x3dd708: 0x271102b  sltu        $v0, $s3, $s1
    ctx->pc = 0x3dd708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3dd70c:
    // 0x3dd70c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3dd70cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd710:
    // 0x3dd710: 0x262880b  movn        $s1, $s3, $v0
    ctx->pc = 0x3dd710u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 19));
label_3dd714:
    // 0x3dd714: 0x3d1182b  sltu        $v1, $fp, $s1
    ctx->pc = 0x3dd714u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3dd718:
    // 0x3dd718: 0x3c3880b  movn        $s1, $fp, $v1
    ctx->pc = 0x3dd718u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 30));
label_3dd71c:
    // 0x3dd71c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3dd71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dd720:
    // 0x3dd720: 0xc0bb778  jal         func_2EDDE0
label_3dd724:
    if (ctx->pc == 0x3DD724u) {
        ctx->pc = 0x3DD724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD720u;
        // 0x3dd724: 0x291a021  addu        $s4, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD728u;
        goto label_3dd728;
    }
    ctx->pc = 0x3DD720u;
    SET_GPR_U32(ctx, 31, 0x3DD728u);
    ctx->pc = 0x3DD724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD720u;
    // 0x3dd724: 0x291a021  addu        $s4, $s4, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3DD720u, 0x3DD728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD728u;
label_3dd728:
    // 0x3dd728: 0x2719823  subu        $s3, $s3, $s1
    ctx->pc = 0x3dd728u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_3dd72c:
    // 0x3dd72c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x3dd72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3dd730:
    // 0x3dd730: 0x3d1f023  subu        $fp, $fp, $s1
    ctx->pc = 0x3dd730u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 17)));
label_3dd734:
    // 0x3dd734: 0x7bac0030  lq          $t4, 0x30($sp)
    ctx->pc = 0x3dd734u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3dd738:
    // 0x3dd738: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3dd738u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3dd73c:
    // 0x3dd73c: 0x1916021  addu        $t4, $t4, $s1
    ctx->pc = 0x3dd73cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
label_3dd740:
    // 0x3dd740: 0x1440fe99  bnez        $v0, . + 4 + (-0x167 << 2)
label_3dd744:
    if (ctx->pc == 0x3DD744u) {
        ctx->pc = 0x3DD744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD740u;
        // 0x3dd744: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD748u;
        goto label_3dd748;
    }
    ctx->pc = 0x3DD740u;
    {
        const bool branch_taken_0x3dd740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DD744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD740u;
        // 0x3dd744: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd740) {
            ctx->pc = 0x3DD1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dd1a8;
        }
    }
    ctx->pc = 0x3DD748u;
label_3dd748:
    // 0x3dd748: 0x8ea30018  lw          $v1, 0x18($s5)
    ctx->pc = 0x3dd748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_3dd74c:
    // 0x3dd74c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3dd74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3dd750:
    // 0x3dd750: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x3dd750u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_3dd754:
    // 0x3dd754: 0x1000fe94  b           . + 4 + (-0x16C << 2)
label_3dd758:
    if (ctx->pc == 0x3DD758u) {
        ctx->pc = 0x3DD758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD754u;
        // 0x3dd758: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD75Cu;
        goto label_3dd75c;
    }
    ctx->pc = 0x3DD754u;
    {
        const bool branch_taken_0x3dd754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD754u;
        // 0x3dd758: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd754) {
            ctx->pc = 0x3DD1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dd1a8;
        }
    }
    ctx->pc = 0x3DD75Cu;
label_3dd75c:
    // 0x3dd75c: 0x2e02000e  sltiu       $v0, $s0, 0xE
    ctx->pc = 0x3dd75cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_3dd760:
    // 0x3dd760: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_3dd764:
    if (ctx->pc == 0x3DD764u) {
        ctx->pc = 0x3DD764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD760u;
        // 0x3dd764: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD768u;
        goto label_3dd768;
    }
    ctx->pc = 0x3DD760u;
    {
        const bool branch_taken_0x3dd760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD760u;
        // 0x3dd764: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd760) {
            ctx->pc = 0x3DD88Cu;
            goto label_3dd88c;
        }
    }
    ctx->pc = 0x3DD768u;
label_3dd768:
    // 0x3dd768: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3dd768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3dd76c:
    // 0x3dd76c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3dd76cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3dd770:
    // 0x3dd770: 0x2a03000e  slti        $v1, $s0, 0xE
    ctx->pc = 0x3dd770u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)14) ? 1 : 0);
label_3dd774:
    // 0x3dd774: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_3dd778:
    if (ctx->pc == 0x3DD778u) {
        ctx->pc = 0x3DD778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD774u;
        // 0x3dd778: 0x3044001f  andi        $a0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD77Cu;
        goto label_3dd77c;
    }
    ctx->pc = 0x3DD774u;
    {
        const bool branch_taken_0x3dd774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD774u;
        // 0x3dd778: 0x3044001f  andi        $a0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd774) {
            ctx->pc = 0x3DD7E8u;
            goto label_3dd7e8;
        }
    }
    ctx->pc = 0x3DD77Cu;
label_3dd77c:
    // 0x3dd77c: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
label_3dd780:
    if (ctx->pc == 0x3DD780u) {
        ctx->pc = 0x3DD780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD77Cu;
        // 0x3dd780: 0x28820009  slti        $v0, $a0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD784u;
        goto label_3dd784;
    }
    ctx->pc = 0x3DD77Cu;
    {
        const bool branch_taken_0x3dd77c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD77Cu;
        // 0x3dd780: 0x28820009  slti        $v0, $a0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd77c) {
            ctx->pc = 0x3DD808u;
            goto label_3dd808;
        }
    }
    ctx->pc = 0x3DD784u;
label_3dd784:
    // 0x3dd784: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_3dd788:
    if (ctx->pc == 0x3DD788u) {
        ctx->pc = 0x3DD788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD784u;
        // 0x3dd788: 0x28820011  slti        $v0, $a0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD78Cu;
        goto label_3dd78c;
    }
    ctx->pc = 0x3DD784u;
    {
        const bool branch_taken_0x3dd784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DD788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD784u;
        // 0x3dd788: 0x28820011  slti        $v0, $a0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd784) {
            ctx->pc = 0x3DD7E8u;
            goto label_3dd7e8;
        }
    }
    ctx->pc = 0x3DD78Cu;
label_3dd78c:
    // 0x3dd78c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_3dd790:
    if (ctx->pc == 0x3DD790u) {
        ctx->pc = 0x3DD790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD78Cu;
        // 0x3dd790: 0x28820019  slti        $v0, $a0, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD794u;
        goto label_3dd794;
    }
    ctx->pc = 0x3DD78Cu;
    {
        const bool branch_taken_0x3dd78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DD790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD78Cu;
        // 0x3dd790: 0x28820019  slti        $v0, $a0, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd78c) {
            ctx->pc = 0x3DD7C4u;
            goto label_3dd7c4;
        }
    }
    ctx->pc = 0x3DD794u;
label_3dd794:
    // 0x3dd794: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_3dd798:
    if (ctx->pc == 0x3DD798u) {
        ctx->pc = 0x3DD79Cu;
        goto label_3dd79c;
    }
    ctx->pc = 0x3DD794u;
    {
        const bool branch_taken_0x3dd794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd794) {
            ctx->pc = 0x3DD808u;
            goto label_3dd808;
        }
    }
    ctx->pc = 0x3DD79Cu;
label_3dd79c:
    // 0x3dd79c: 0x126002e2  beqz        $s3, . + 4 + (0x2E2 << 2)
label_3dd7a0:
    if (ctx->pc == 0x3DD7A0u) {
        ctx->pc = 0x3DD7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD79Cu;
        // 0x3dd7a0: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD7A4u;
        goto label_3dd7a4;
    }
    ctx->pc = 0x3DD79Cu;
    {
        const bool branch_taken_0x3dd79c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD79Cu;
        // 0x3dd7a0: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd79c) {
            ctx->pc = 0x3DE328u;
            goto label_3de328;
        }
    }
    ctx->pc = 0x3DD7A4u;
label_3dd7a4:
    // 0x3dd7a4: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x3dd7a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_3dd7a8:
    // 0x3dd7a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3dd7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd7ac:
    // 0x3dd7ac: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3dd7acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd7b0:
    // 0x3dd7b0: 0x2031814  dsllv       $v1, $v1, $s0
    ctx->pc = 0x3dd7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 16) & 0x3F));
label_3dd7b4:
    // 0x3dd7b4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3dd7b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3dd7b8:
    // 0x3dd7b8: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x3dd7b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
label_3dd7bc:
    // 0x3dd7bc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3dd7bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dd7c0:
    // 0x3dd7c0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3dd7c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3dd7c4:
    // 0x3dd7c4: 0x126002d8  beqz        $s3, . + 4 + (0x2D8 << 2)
label_3dd7c8:
    if (ctx->pc == 0x3DD7C8u) {
        ctx->pc = 0x3DD7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD7C4u;
        // 0x3dd7c8: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD7CCu;
        goto label_3dd7cc;
    }
    ctx->pc = 0x3DD7C4u;
    {
        const bool branch_taken_0x3dd7c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD7C4u;
        // 0x3dd7c8: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd7c4) {
            ctx->pc = 0x3DE328u;
            goto label_3de328;
        }
    }
    ctx->pc = 0x3DD7CCu;
label_3dd7cc:
    // 0x3dd7cc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3dd7ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3dd7d0:
    // 0x3dd7d0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3dd7d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd7d4:
    // 0x3dd7d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3dd7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3dd7d8:
    // 0x3dd7d8: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dd7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3dd7dc:
    // 0x3dd7dc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3dd7dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3dd7e0:
    // 0x3dd7e0: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dd7e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3dd7e4:
    // 0x3dd7e4: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3dd7e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3dd7e8:
    // 0x3dd7e8: 0x126002cf  beqz        $s3, . + 4 + (0x2CF << 2)
label_3dd7ec:
    if (ctx->pc == 0x3DD7ECu) {
        ctx->pc = 0x3DD7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD7E8u;
        // 0x3dd7ec: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD7F0u;
        goto label_3dd7f0;
    }
    ctx->pc = 0x3DD7E8u;
    {
        const bool branch_taken_0x3dd7e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD7E8u;
        // 0x3dd7ec: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd7e8) {
            ctx->pc = 0x3DE328u;
            goto label_3de328;
        }
    }
    ctx->pc = 0x3DD7F0u;
label_3dd7f0:
    // 0x3dd7f0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3dd7f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3dd7f4:
    // 0x3dd7f4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3dd7f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd7f8:
    // 0x3dd7f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3dd7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3dd7fc:
    // 0x3dd7fc: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dd7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3dd800:
    // 0x3dd800: 0x1000001d  b           . + 4 + (0x1D << 2)
label_3dd804:
    if (ctx->pc == 0x3DD804u) {
        ctx->pc = 0x3DD804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD800u;
        // 0x3dd804: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD808u;
        goto label_3dd808;
    }
    ctx->pc = 0x3DD800u;
    {
        const bool branch_taken_0x3dd800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD800u;
        // 0x3dd804: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd800) {
            ctx->pc = 0x3DD878u;
            goto label_3dd878;
        }
    }
    ctx->pc = 0x3DD808u;
label_3dd808:
    // 0x3dd808: 0x126002c7  beqz        $s3, . + 4 + (0x2C7 << 2)
label_3dd80c:
    if (ctx->pc == 0x3DD80Cu) {
        ctx->pc = 0x3DD80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD808u;
        // 0x3dd80c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD810u;
        goto label_3dd810;
    }
    ctx->pc = 0x3DD808u;
    {
        const bool branch_taken_0x3dd808 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD808u;
        // 0x3dd80c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd808) {
            ctx->pc = 0x3DE328u;
            goto label_3de328;
        }
    }
    ctx->pc = 0x3DD810u;
label_3dd810:
    // 0x3dd810: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3dd810u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3dd814:
    // 0x3dd814: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3dd814u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd818:
    // 0x3dd818: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3dd818u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3dd81c:
    // 0x3dd81c: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dd81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3dd820:
    // 0x3dd820: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dd820u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3dd824:
    // 0x3dd824: 0x126002c0  beqz        $s3, . + 4 + (0x2C0 << 2)
label_3dd828:
    if (ctx->pc == 0x3DD828u) {
        ctx->pc = 0x3DD828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD824u;
        // 0x3dd828: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD82Cu;
        goto label_3dd82c;
    }
    ctx->pc = 0x3DD824u;
    {
        const bool branch_taken_0x3dd824 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD824u;
        // 0x3dd828: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd824) {
            ctx->pc = 0x3DE328u;
            goto label_3de328;
        }
    }
    ctx->pc = 0x3DD82Cu;
label_3dd82c:
    // 0x3dd82c: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x3dd82cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_3dd830:
    // 0x3dd830: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3dd830u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3dd834:
    // 0x3dd834: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3dd834u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3dd838:
    // 0x3dd838: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dd838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3dd83c:
    // 0x3dd83c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dd83cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3dd840:
    // 0x3dd840: 0x126002b9  beqz        $s3, . + 4 + (0x2B9 << 2)
label_3dd844:
    if (ctx->pc == 0x3DD844u) {
        ctx->pc = 0x3DD844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD840u;
        // 0x3dd844: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD848u;
        goto label_3dd848;
    }
    ctx->pc = 0x3DD840u;
    {
        const bool branch_taken_0x3dd840 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD840u;
        // 0x3dd844: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd840) {
            ctx->pc = 0x3DE328u;
            goto label_3de328;
        }
    }
    ctx->pc = 0x3DD848u;
label_3dd848:
    // 0x3dd848: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x3dd848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_3dd84c:
    // 0x3dd84c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3dd84cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3dd850:
    // 0x3dd850: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3dd850u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3dd854:
    // 0x3dd854: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dd854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3dd858:
    // 0x3dd858: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dd858u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3dd85c:
    // 0x3dd85c: 0x126002b2  beqz        $s3, . + 4 + (0x2B2 << 2)
label_3dd860:
    if (ctx->pc == 0x3DD860u) {
        ctx->pc = 0x3DD860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD85Cu;
        // 0x3dd860: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD864u;
        goto label_3dd864;
    }
    ctx->pc = 0x3DD85Cu;
    {
        const bool branch_taken_0x3dd85c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD85Cu;
        // 0x3dd860: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd85c) {
            ctx->pc = 0x3DE328u;
            goto label_3de328;
        }
    }
    ctx->pc = 0x3DD864u;
label_3dd864:
    // 0x3dd864: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x3dd864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_3dd868:
    // 0x3dd868: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3dd868u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3dd86c:
    // 0x3dd86c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3dd86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3dd870:
    // 0x3dd870: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3dd870u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3dd874:
    // 0x3dd874: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dd874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3dd878:
    // 0x3dd878: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3dd878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3dd87c:
    // 0x3dd87c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dd87cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3dd880:
    // 0x3dd880: 0x2e02000e  sltiu       $v0, $s0, 0xE
    ctx->pc = 0x3dd880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_3dd884:
    // 0x3dd884: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_3dd888:
    if (ctx->pc == 0x3DD888u) {
        ctx->pc = 0x3DD88Cu;
        goto label_3dd88c;
    }
    ctx->pc = 0x3DD884u;
    {
        const bool branch_taken_0x3dd884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dd884) {
            ctx->pc = 0x3DD808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dd808;
        }
    }
    ctx->pc = 0x3DD88Cu;
label_3dd88c:
    // 0x3dd88c: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x3dd88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_3dd890:
    // 0x3dd890: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3dd890u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3dd894:
    // 0x3dd894: 0x30513fff  andi        $s1, $v0, 0x3FFF
    ctx->pc = 0x3dd894u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_3dd898:
    // 0x3dd898: 0x3046001f  andi        $a2, $v0, 0x1F
    ctx->pc = 0x3dd898u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_3dd89c:
    // 0x3dd89c: 0x2cc2001e  sltiu       $v0, $a2, 0x1E
    ctx->pc = 0x3dd89cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_3dd8a0:
    // 0x3dd8a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3dd8a4:
    if (ctx->pc == 0x3DD8A4u) {
        ctx->pc = 0x3DD8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD8A0u;
        // 0x3dd8a4: 0xaeb10004  sw          $s1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD8A8u;
        goto label_3dd8a8;
    }
    ctx->pc = 0x3DD8A0u;
    {
        const bool branch_taken_0x3dd8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD8A0u;
        // 0x3dd8a4: 0xaeb10004  sw          $s1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd8a0) {
            ctx->pc = 0x3DD8BCu;
            goto label_3dd8bc;
        }
    }
    ctx->pc = 0x3DD8A8u;
label_3dd8a8:
    // 0x3dd8a8: 0x111142  srl         $v0, $s1, 5
    ctx->pc = 0x3dd8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
label_3dd8ac:
    // 0x3dd8ac: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x3dd8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_3dd8b0:
    // 0x3dd8b0: 0x2c43001e  sltiu       $v1, $v0, 0x1E
    ctx->pc = 0x3dd8b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_3dd8b4:
    // 0x3dd8b4: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_3dd8b8:
    if (ctx->pc == 0x3DD8B8u) {
        ctx->pc = 0x3DD8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD8B4u;
        // 0x3dd8b8: 0x24450102  addiu       $a1, $v0, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 258));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD8BCu;
        goto label_3dd8bc;
    }
    ctx->pc = 0x3DD8B4u;
    {
        const bool branch_taken_0x3dd8b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DD8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD8B4u;
        // 0x3dd8b8: 0x24450102  addiu       $a1, $v0, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd8b4) {
            ctx->pc = 0x3DD904u;
            goto label_3dd904;
        }
    }
    ctx->pc = 0x3DD8BCu;
label_3dd8bc:
    // 0x3dd8bc: 0xfeb20020  sd          $s2, 0x20($s5)
    ctx->pc = 0x3dd8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 18));
label_3dd8c0:
    // 0x3dd8c0: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x3dd8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3dd8c4:
    // 0x3dd8c4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3dd8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3dd8c8:
    // 0x3dd8c8: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x3dd8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_3dd8cc:
    // 0x3dd8cc: 0xdec30008  ld          $v1, 0x8($s6)
    ctx->pc = 0x3dd8ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 8)));
label_3dd8d0:
    // 0x3dd8d0: 0x24e7d468  addiu       $a3, $a3, -0x2B98
    ctx->pc = 0x3dd8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956136));
label_3dd8d4:
    // 0x3dd8d4: 0xaeb0001c  sw          $s0, 0x1C($s5)
    ctx->pc = 0x3dd8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 16));
label_3dd8d8:
    // 0x3dd8d8: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x3dd8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3dd8dc:
    // 0x3dd8dc: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x3dd8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
label_3dd8e0:
    // 0x3dd8e0: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3dd8e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_3dd8e4:
    // 0x3dd8e4: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x3dd8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
label_3dd8e8:
    // 0x3dd8e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3dd8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3dd8ec:
    // 0x3dd8ec: 0xaed30004  sw          $s3, 0x4($s6)
    ctx->pc = 0x3dd8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 19));
label_3dd8f0:
    // 0x3dd8f0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3dd8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3dd8f4:
    // 0x3dd8f4: 0xaeac0038  sw          $t4, 0x38($s5)
    ctx->pc = 0x3dd8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 12));
label_3dd8f8:
    // 0x3dd8f8: 0x2406fffd  addiu       $a2, $zero, -0x3
    ctx->pc = 0x3dd8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3dd8fc:
    // 0x3dd8fc: 0x100002ca  b           . + 4 + (0x2CA << 2)
label_3dd900:
    if (ctx->pc == 0x3DD900u) {
        ctx->pc = 0x3DD900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD8FCu;
        // 0x3dd900: 0xaec70020  sw          $a3, 0x20($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD904u;
        goto label_3dd904;
    }
    ctx->pc = 0x3DD8FCu;
    {
        const bool branch_taken_0x3dd8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD8FCu;
        // 0x3dd900: 0xaec70020  sw          $a3, 0x20($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd8fc) {
            ctx->pc = 0x3DE428u;
            goto label_3de428;
        }
    }
    ctx->pc = 0x3DD904u;
label_3dd904:
    // 0x3dd904: 0x8ec40030  lw          $a0, 0x30($s6)
    ctx->pc = 0x3dd904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
label_3dd908:
    // 0x3dd908: 0x8ec20028  lw          $v0, 0x28($s6)
    ctx->pc = 0x3dd908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
label_3dd90c:
    // 0x3dd90c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x3dd90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_3dd910:
    // 0x3dd910: 0x7fac0030  sq          $t4, 0x30($sp)
    ctx->pc = 0x3dd910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
label_3dd914:
    // 0x3dd914: 0x40f809  jalr        $v0
label_3dd918:
    if (ctx->pc == 0x3DD918u) {
        ctx->pc = 0x3DD918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD914u;
        // 0x3dd918: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD91Cu;
        goto label_3dd91c;
    }
    ctx->pc = 0x3DD914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DD91Cu);
        ctx->pc = 0x3DD918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD914u;
        // 0x3dd918: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD914u, 0x3DD91Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DD91Cu;
label_3dd91c:
    // 0x3dd91c: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x3dd91cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
label_3dd920:
    // 0x3dd920: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3dd924:
    if (ctx->pc == 0x3DD924u) {
        ctx->pc = 0x3DD924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD920u;
        // 0x3dd924: 0x7bac0030  lq          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD928u;
        goto label_3dd928;
    }
    ctx->pc = 0x3DD920u;
    {
        const bool branch_taken_0x3dd920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DD924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD920u;
        // 0x3dd924: 0x7bac0030  lq          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd920) {
            ctx->pc = 0x3DD944u;
            goto label_3dd944;
        }
    }
    ctx->pc = 0x3DD928u;
label_3dd928:
    // 0x3dd928: 0xfeb20020  sd          $s2, 0x20($s5)
    ctx->pc = 0x3dd928u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 18));
label_3dd92c:
    // 0x3dd92c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3dd92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3dd930:
    // 0x3dd930: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3dd930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3dd934:
    // 0x3dd934: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3dd934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3dd938:
    // 0x3dd938: 0xdec30008  ld          $v1, 0x8($s6)
    ctx->pc = 0x3dd938u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 8)));
label_3dd93c:
    // 0x3dd93c: 0x100002b4  b           . + 4 + (0x2B4 << 2)
label_3dd940:
    if (ctx->pc == 0x3DD940u) {
        ctx->pc = 0x3DD940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD93Cu;
        // 0x3dd940: 0x2406fffc  addiu       $a2, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD944u;
        goto label_3dd944;
    }
    ctx->pc = 0x3DD93Cu;
    {
        const bool branch_taken_0x3dd93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD93Cu;
        // 0x3dd940: 0x2406fffc  addiu       $a2, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd93c) {
            ctx->pc = 0x3DE410u;
            goto label_3de410;
        }
    }
    ctx->pc = 0x3DD944u;
label_3dd944:
    // 0x3dd944: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3dd944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3dd948:
    // 0x3dd948: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x3dd948u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
label_3dd94c:
    // 0x3dd94c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3dd94cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_3dd950:
    // 0x3dd950: 0x1293ba  dsrl        $s2, $s2, 14
    ctx->pc = 0x3dd950u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> 14);
label_3dd954:
    // 0x3dd954: 0x2610fff2  addiu       $s0, $s0, -0xE
    ctx->pc = 0x3dd954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967282));
label_3dd958:
    // 0x3dd958: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x3dd958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3dd95c:
    // 0x3dd95c: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x3dd95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_3dd960:
    // 0x3dd960: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x3dd960u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
label_3dd964:
    // 0x3dd964: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3dd964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3dd968:
    // 0x3dd968: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x3dd968u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3dd96c:
    // 0x3dd96c: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
label_3dd970:
    if (ctx->pc == 0x3DD970u) {
        ctx->pc = 0x3DD970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD96Cu;
        // 0x3dd970: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD974u;
        goto label_3dd974;
    }
    ctx->pc = 0x3DD96Cu;
    {
        const bool branch_taken_0x3dd96c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD96Cu;
        // 0x3dd970: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd96c) {
            ctx->pc = 0x3DDAFCu;
            goto label_3ddafc;
        }
    }
    ctx->pc = 0x3DD974u;
label_3dd974:
    // 0x3dd974: 0x2447d3e0  addiu       $a3, $v0, -0x2C20
    ctx->pc = 0x3dd974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956000));
label_3dd978:
    // 0x3dd978: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x3dd978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3dd97c:
    // 0x3dd97c: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_3dd980:
    if (ctx->pc == 0x3DD980u) {
        ctx->pc = 0x3DD980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD97Cu;
        // 0x3dd980: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD984u;
        goto label_3dd984;
    }
    ctx->pc = 0x3DD97Cu;
    {
        const bool branch_taken_0x3dd97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD97Cu;
        // 0x3dd980: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd97c) {
            ctx->pc = 0x3DDAACu;
            goto label_3ddaac;
        }
    }
    ctx->pc = 0x3DD984u;
label_3dd984:
    // 0x3dd984: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3dd984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3dd988:
    // 0x3dd988: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3dd988u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3dd98c:
    // 0x3dd98c: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x3dd98cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_3dd990:
    // 0x3dd990: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_3dd994:
    if (ctx->pc == 0x3DD994u) {
        ctx->pc = 0x3DD994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD990u;
        // 0x3dd994: 0x3044001f  andi        $a0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD998u;
        goto label_3dd998;
    }
    ctx->pc = 0x3DD990u;
    {
        const bool branch_taken_0x3dd990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD990u;
        // 0x3dd994: 0x3044001f  andi        $a0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd990) {
            ctx->pc = 0x3DDA04u;
            goto label_3dda04;
        }
    }
    ctx->pc = 0x3DD998u;
label_3dd998:
    // 0x3dd998: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
label_3dd99c:
    if (ctx->pc == 0x3DD99Cu) {
        ctx->pc = 0x3DD99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD998u;
        // 0x3dd99c: 0x28820009  slti        $v0, $a0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD9A0u;
        goto label_3dd9a0;
    }
    ctx->pc = 0x3DD998u;
    {
        const bool branch_taken_0x3dd998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD998u;
        // 0x3dd99c: 0x28820009  slti        $v0, $a0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd998) {
            ctx->pc = 0x3DDA28u;
            goto label_3dda28;
        }
    }
    ctx->pc = 0x3DD9A0u;
label_3dd9a0:
    // 0x3dd9a0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_3dd9a4:
    if (ctx->pc == 0x3DD9A4u) {
        ctx->pc = 0x3DD9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD9A0u;
        // 0x3dd9a4: 0x28820011  slti        $v0, $a0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD9A8u;
        goto label_3dd9a8;
    }
    ctx->pc = 0x3DD9A0u;
    {
        const bool branch_taken_0x3dd9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DD9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD9A0u;
        // 0x3dd9a4: 0x28820011  slti        $v0, $a0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd9a0) {
            ctx->pc = 0x3DDA04u;
            goto label_3dda04;
        }
    }
    ctx->pc = 0x3DD9A8u;
label_3dd9a8:
    // 0x3dd9a8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_3dd9ac:
    if (ctx->pc == 0x3DD9ACu) {
        ctx->pc = 0x3DD9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD9A8u;
        // 0x3dd9ac: 0x28820019  slti        $v0, $a0, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD9B0u;
        goto label_3dd9b0;
    }
    ctx->pc = 0x3DD9A8u;
    {
        const bool branch_taken_0x3dd9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DD9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD9A8u;
        // 0x3dd9ac: 0x28820019  slti        $v0, $a0, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd9a8) {
            ctx->pc = 0x3DD9E0u;
            goto label_3dd9e0;
        }
    }
    ctx->pc = 0x3DD9B0u;
label_3dd9b0:
    // 0x3dd9b0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_3dd9b4:
    if (ctx->pc == 0x3DD9B4u) {
        ctx->pc = 0x3DD9B8u;
        goto label_3dd9b8;
    }
    ctx->pc = 0x3DD9B0u;
    {
        const bool branch_taken_0x3dd9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd9b0) {
            ctx->pc = 0x3DDA28u;
            goto label_3dda28;
        }
    }
    ctx->pc = 0x3DD9B8u;
label_3dd9b8:
    // 0x3dd9b8: 0x12600268  beqz        $s3, . + 4 + (0x268 << 2)
label_3dd9bc:
    if (ctx->pc == 0x3DD9BCu) {
        ctx->pc = 0x3DD9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD9B8u;
        // 0x3dd9bc: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD9C0u;
        goto label_3dd9c0;
    }
    ctx->pc = 0x3DD9B8u;
    {
        const bool branch_taken_0x3dd9b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD9B8u;
        // 0x3dd9bc: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd9b8) {
            ctx->pc = 0x3DE35Cu;
            goto label_3de35c;
        }
    }
    ctx->pc = 0x3DD9C0u;
label_3dd9c0:
    // 0x3dd9c0: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x3dd9c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_3dd9c4:
    // 0x3dd9c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3dd9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd9c8:
    // 0x3dd9c8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3dd9c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd9cc:
    // 0x3dd9cc: 0x2031814  dsllv       $v1, $v1, $s0
    ctx->pc = 0x3dd9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 16) & 0x3F));
label_3dd9d0:
    // 0x3dd9d0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3dd9d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3dd9d4:
    // 0x3dd9d4: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x3dd9d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
label_3dd9d8:
    // 0x3dd9d8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3dd9d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dd9dc:
    // 0x3dd9dc: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3dd9dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3dd9e0:
    // 0x3dd9e0: 0x1260025e  beqz        $s3, . + 4 + (0x25E << 2)
label_3dd9e4:
    if (ctx->pc == 0x3DD9E4u) {
        ctx->pc = 0x3DD9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD9E0u;
        // 0x3dd9e4: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD9E8u;
        goto label_3dd9e8;
    }
    ctx->pc = 0x3DD9E0u;
    {
        const bool branch_taken_0x3dd9e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD9E0u;
        // 0x3dd9e4: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd9e0) {
            ctx->pc = 0x3DE35Cu;
            goto label_3de35c;
        }
    }
    ctx->pc = 0x3DD9E8u;
label_3dd9e8:
    // 0x3dd9e8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3dd9e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3dd9ec:
    // 0x3dd9ec: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3dd9ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd9f0:
    // 0x3dd9f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3dd9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3dd9f4:
    // 0x3dd9f4: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dd9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3dd9f8:
    // 0x3dd9f8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3dd9f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3dd9fc:
    // 0x3dd9fc: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dd9fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3dda00:
    // 0x3dda00: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3dda00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3dda04:
    // 0x3dda04: 0x12600255  beqz        $s3, . + 4 + (0x255 << 2)
label_3dda08:
    if (ctx->pc == 0x3DDA08u) {
        ctx->pc = 0x3DDA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDA04u;
        // 0x3dda08: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDA0Cu;
        goto label_3dda0c;
    }
    ctx->pc = 0x3DDA04u;
    {
        const bool branch_taken_0x3dda04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDA04u;
        // 0x3dda08: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dda04) {
            ctx->pc = 0x3DE35Cu;
            goto label_3de35c;
        }
    }
    ctx->pc = 0x3DDA0Cu;
label_3dda0c:
    // 0x3dda0c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3dda0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3dda10:
    // 0x3dda10: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3dda10u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dda14:
    // 0x3dda14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3dda14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3dda18:
    // 0x3dda18: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dda18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3dda1c:
    // 0x3dda1c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3dda20:
    if (ctx->pc == 0x3DDA20u) {
        ctx->pc = 0x3DDA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDA1Cu;
        // 0x3dda20: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDA24u;
        goto label_3dda24;
    }
    ctx->pc = 0x3DDA1Cu;
    {
        const bool branch_taken_0x3dda1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDA1Cu;
        // 0x3dda20: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dda1c) {
            ctx->pc = 0x3DDA98u;
            goto label_3dda98;
        }
    }
    ctx->pc = 0x3DDA24u;
label_3dda24:
    // 0x3dda24: 0x0  nop
    ctx->pc = 0x3dda24u;
    // NOP
label_3dda28:
    // 0x3dda28: 0x1260024c  beqz        $s3, . + 4 + (0x24C << 2)
label_3dda2c:
    if (ctx->pc == 0x3DDA2Cu) {
        ctx->pc = 0x3DDA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDA28u;
        // 0x3dda2c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDA30u;
        goto label_3dda30;
    }
    ctx->pc = 0x3DDA28u;
    {
        const bool branch_taken_0x3dda28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDA28u;
        // 0x3dda2c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dda28) {
            ctx->pc = 0x3DE35Cu;
            goto label_3de35c;
        }
    }
    ctx->pc = 0x3DDA30u;
label_3dda30:
    // 0x3dda30: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3dda30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3dda34:
    // 0x3dda34: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3dda34u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dda38:
    // 0x3dda38: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3dda38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3dda3c:
    // 0x3dda3c: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dda3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3dda40:
    // 0x3dda40: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dda40u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3dda44:
    // 0x3dda44: 0x12600245  beqz        $s3, . + 4 + (0x245 << 2)
label_3dda48:
    if (ctx->pc == 0x3DDA48u) {
        ctx->pc = 0x3DDA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDA44u;
        // 0x3dda48: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDA4Cu;
        goto label_3dda4c;
    }
    ctx->pc = 0x3DDA44u;
    {
        const bool branch_taken_0x3dda44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDA44u;
        // 0x3dda48: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dda44) {
            ctx->pc = 0x3DE35Cu;
            goto label_3de35c;
        }
    }
    ctx->pc = 0x3DDA4Cu;
label_3dda4c:
    // 0x3dda4c: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x3dda4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_3dda50:
    // 0x3dda50: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3dda50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3dda54:
    // 0x3dda54: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3dda54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3dda58:
    // 0x3dda58: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dda58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3dda5c:
    // 0x3dda5c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dda5cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3dda60:
    // 0x3dda60: 0x1260023e  beqz        $s3, . + 4 + (0x23E << 2)
label_3dda64:
    if (ctx->pc == 0x3DDA64u) {
        ctx->pc = 0x3DDA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDA60u;
        // 0x3dda64: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDA68u;
        goto label_3dda68;
    }
    ctx->pc = 0x3DDA60u;
    {
        const bool branch_taken_0x3dda60 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDA60u;
        // 0x3dda64: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dda60) {
            ctx->pc = 0x3DE35Cu;
            goto label_3de35c;
        }
    }
    ctx->pc = 0x3DDA68u;
label_3dda68:
    // 0x3dda68: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x3dda68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_3dda6c:
    // 0x3dda6c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3dda6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3dda70:
    // 0x3dda70: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3dda70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3dda74:
    // 0x3dda74: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dda74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3dda78:
    // 0x3dda78: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dda78u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3dda7c:
    // 0x3dda7c: 0x12600237  beqz        $s3, . + 4 + (0x237 << 2)
label_3dda80:
    if (ctx->pc == 0x3DDA80u) {
        ctx->pc = 0x3DDA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDA7Cu;
        // 0x3dda80: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDA84u;
        goto label_3dda84;
    }
    ctx->pc = 0x3DDA7Cu;
    {
        const bool branch_taken_0x3dda7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDA7Cu;
        // 0x3dda80: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dda7c) {
            ctx->pc = 0x3DE35Cu;
            goto label_3de35c;
        }
    }
    ctx->pc = 0x3DDA84u;
label_3dda84:
    // 0x3dda84: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x3dda84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_3dda88:
    // 0x3dda88: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3dda88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3dda8c:
    // 0x3dda8c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3dda8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3dda90:
    // 0x3dda90: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3dda90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3dda94:
    // 0x3dda94: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dda94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3dda98:
    // 0x3dda98: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3dda98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3dda9c:
    // 0x3dda9c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dda9cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3ddaa0:
    // 0x3ddaa0: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x3ddaa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3ddaa4:
    // 0x3ddaa4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_3ddaa8:
    if (ctx->pc == 0x3DDAA8u) {
        ctx->pc = 0x3DDAACu;
        goto label_3ddaac;
    }
    ctx->pc = 0x3DDAA4u;
    {
        const bool branch_taken_0x3ddaa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ddaa4) {
            ctx->pc = 0x3DDA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dda28;
        }
    }
    ctx->pc = 0x3DDAACu;
label_3ddaac:
    // 0x3ddaac: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x3ddaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_3ddab0:
    // 0x3ddab0: 0x12283c  dsll32      $a1, $s2, 0
    ctx->pc = 0x3ddab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 0));
label_3ddab4:
    // 0x3ddab4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3ddab4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_3ddab8:
    // 0x3ddab8: 0x8ea6000c  lw          $a2, 0xC($s5)
    ctx->pc = 0x3ddab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_3ddabc:
    // 0x3ddabc: 0x30a50007  andi        $a1, $a1, 0x7
    ctx->pc = 0x3ddabcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
label_3ddac0:
    // 0x3ddac0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3ddac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3ddac4:
    // 0x3ddac4: 0x1290fa  dsrl        $s2, $s2, 3
    ctx->pc = 0x3ddac4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> 3);
label_3ddac8:
    // 0x3ddac8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3ddac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_3ddacc:
    // 0x3ddacc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3ddaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3ddad0:
    // 0x3ddad0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ddad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ddad4:
    // 0x3ddad4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ddad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3ddad8:
    // 0x3ddad8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3ddad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3ddadc:
    // 0x3ddadc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3ddadcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3ddae0:
    // 0x3ddae0: 0xaea40008  sw          $a0, 0x8($s5)
    ctx->pc = 0x3ddae0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 4));
label_3ddae4:
    // 0x3ddae4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x3ddae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3ddae8:
    // 0x3ddae8: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x3ddae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
label_3ddaec:
    // 0x3ddaec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3ddaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3ddaf0:
    // 0x3ddaf0: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x3ddaf0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ddaf4:
    // 0x3ddaf4: 0x1480ffa0  bnez        $a0, . + 4 + (-0x60 << 2)
label_3ddaf8:
    if (ctx->pc == 0x3DDAF8u) {
        ctx->pc = 0x3DDAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDAF4u;
        // 0x3ddaf8: 0x2610fffd  addiu       $s0, $s0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDAFCu;
        goto label_3ddafc;
    }
    ctx->pc = 0x3DDAF4u;
    {
        const bool branch_taken_0x3ddaf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DDAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDAF4u;
        // 0x3ddaf8: 0x2610fffd  addiu       $s0, $s0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddaf4) {
            ctx->pc = 0x3DD978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dd978;
        }
    }
    ctx->pc = 0x3DDAFCu;
label_3ddafc:
    // 0x3ddafc: 0x8ea70008  lw          $a3, 0x8($s5)
    ctx->pc = 0x3ddafcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_3ddb00:
    // 0x3ddb00: 0x26a90010  addiu       $t1, $s5, 0x10
    ctx->pc = 0x3ddb00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_3ddb04:
    // 0x3ddb04: 0x2ce20013  sltiu       $v0, $a3, 0x13
    ctx->pc = 0x3ddb04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_3ddb08:
    // 0x3ddb08: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3ddb0c:
    if (ctx->pc == 0x3DDB0Cu) {
        ctx->pc = 0x3DDB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDB08u;
        // 0x3ddb0c: 0x26a60014  addiu       $a2, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDB10u;
        goto label_3ddb10;
    }
    ctx->pc = 0x3DDB08u;
    {
        const bool branch_taken_0x3ddb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDB08u;
        // 0x3ddb0c: 0x26a60014  addiu       $a2, $s5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddb08) {
            ctx->pc = 0x3DDB48u;
            goto label_3ddb48;
        }
    }
    ctx->pc = 0x3DDB10u;
label_3ddb10:
    // 0x3ddb10: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3ddb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3ddb14:
    // 0x3ddb14: 0x2448d3e0  addiu       $t0, $v0, -0x2C20
    ctx->pc = 0x3ddb14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956000));
label_3ddb18:
    // 0x3ddb18: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x3ddb18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_3ddb1c:
    // 0x3ddb1c: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x3ddb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_3ddb20:
    // 0x3ddb20: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x3ddb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_3ddb24:
    // 0x3ddb24: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x3ddb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3ddb28:
    // 0x3ddb28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ddb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ddb2c:
    // 0x3ddb2c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3ddb2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ddb30:
    // 0x3ddb30: 0x2ce30013  sltiu       $v1, $a3, 0x13
    ctx->pc = 0x3ddb30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_3ddb34:
    // 0x3ddb34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ddb34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3ddb38:
    // 0x3ddb38: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3ddb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3ddb3c:
    // 0x3ddb3c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3ddb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_3ddb40:
    // 0x3ddb40: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_3ddb44:
    if (ctx->pc == 0x3DDB44u) {
        ctx->pc = 0x3DDB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDB40u;
        // 0x3ddb44: 0xaea40008  sw          $a0, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDB48u;
        goto label_3ddb48;
    }
    ctx->pc = 0x3DDB40u;
    {
        const bool branch_taken_0x3ddb40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DDB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDB40u;
        // 0x3ddb44: 0xaea40008  sw          $a0, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddb40) {
            ctx->pc = 0x3DDB18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ddb18;
        }
    }
    ctx->pc = 0x3DDB48u;
label_3ddb48:
    // 0x3ddb48: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3ddb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3ddb4c:
    // 0x3ddb4c: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x3ddb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_3ddb50:
    // 0x3ddb50: 0x8ea70028  lw          $a3, 0x28($s5)
    ctx->pc = 0x3ddb50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_3ddb54:
    // 0x3ddb54: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x3ddb54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3ddb58:
    // 0x3ddb58: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x3ddb58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
label_3ddb5c:
    // 0x3ddb5c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3ddb5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3ddb60:
    // 0x3ddb60: 0xc0f7c40  jal         func_3DF100
label_3ddb64:
    if (ctx->pc == 0x3DDB64u) {
        ctx->pc = 0x3DDB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDB60u;
        // 0x3ddb64: 0x7fac0030  sq          $t4, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDB68u;
        goto label_3ddb68;
    }
    ctx->pc = 0x3DDB60u;
    SET_GPR_U32(ctx, 31, 0x3DDB68u);
    ctx->pc = 0x3DDB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDB60u;
    // 0x3ddb64: 0x7fac0030  sq          $t4, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF100u, 0x3DDB60u, 0x3DDB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDB68u;
label_3ddb68:
    // 0x3ddb68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ddb68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ddb6c:
    // 0x3ddb6c: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_3ddb70:
    if (ctx->pc == 0x3DDB70u) {
        ctx->pc = 0x3DDB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDB6Cu;
        // 0x3ddb70: 0x7bac0030  lq          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDB74u;
        goto label_3ddb74;
    }
    ctx->pc = 0x3DDB6Cu;
    {
        const bool branch_taken_0x3ddb6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDB6Cu;
        // 0x3ddb70: 0x7bac0030  lq          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddb6c) {
            ctx->pc = 0x3DDBB8u;
            goto label_3ddbb8;
        }
    }
    ctx->pc = 0x3DDB74u;
label_3ddb74:
    // 0x3ddb74: 0x8ec3002c  lw          $v1, 0x2C($s6)
    ctx->pc = 0x3ddb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
label_3ddb78:
    // 0x3ddb78: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x3ddb78u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ddb7c:
    // 0x3ddb7c: 0x8ec40030  lw          $a0, 0x30($s6)
    ctx->pc = 0x3ddb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
label_3ddb80:
    // 0x3ddb80: 0x60f809  jalr        $v1
label_3ddb84:
    if (ctx->pc == 0x3DDB84u) {
        ctx->pc = 0x3DDB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDB80u;
        // 0x3ddb84: 0x8ea5000c  lw          $a1, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDB88u;
        goto label_3ddb88;
    }
    ctx->pc = 0x3DDB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3DDB88u);
        ctx->pc = 0x3DDB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDB80u;
        // 0x3ddb84: 0x8ea5000c  lw          $a1, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDB80u, 0x3DDB88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DDB88u;
label_3ddb88:
    // 0x3ddb88: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3ddb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3ddb8c:
    // 0x3ddb8c: 0x16e20003  bne         $s7, $v0, . + 4 + (0x3 << 2)
label_3ddb90:
    if (ctx->pc == 0x3DDB90u) {
        ctx->pc = 0x3DDB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDB8Cu;
        // 0x3ddb90: 0x7bac0030  lq          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDB94u;
        goto label_3ddb94;
    }
    ctx->pc = 0x3DDB8Cu;
    {
        const bool branch_taken_0x3ddb8c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DDB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDB8Cu;
        // 0x3ddb90: 0x7bac0030  lq          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddb8c) {
            ctx->pc = 0x3DDB9Cu;
            goto label_3ddb9c;
        }
    }
    ctx->pc = 0x3DDB94u;
label_3ddb94:
    // 0x3ddb94: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3ddb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3ddb98:
    // 0x3ddb98: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3ddb98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_3ddb9c:
    // 0x3ddb9c: 0xfeb20020  sd          $s2, 0x20($s5)
    ctx->pc = 0x3ddb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 18));
label_3ddba0:
    // 0x3ddba0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ddba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ddba4:
    // 0x3ddba4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3ddba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3ddba8:
    // 0x3ddba8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3ddba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3ddbac:
    // 0x3ddbac: 0xdec30008  ld          $v1, 0x8($s6)
    ctx->pc = 0x3ddbacu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 8)));
label_3ddbb0:
    // 0x3ddbb0: 0x10000217  b           . + 4 + (0x217 << 2)
label_3ddbb4:
    if (ctx->pc == 0x3DDBB4u) {
        ctx->pc = 0x3DDBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDBB0u;
        // 0x3ddbb4: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDBB8u;
        goto label_3ddbb8;
    }
    ctx->pc = 0x3DDBB0u;
    {
        const bool branch_taken_0x3ddbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDBB0u;
        // 0x3ddbb4: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddbb0) {
            ctx->pc = 0x3DE410u;
            goto label_3de410;
        }
    }
    ctx->pc = 0x3DDBB8u;
label_3ddbb8:
    // 0x3ddbb8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3ddbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3ddbbc:
    // 0x3ddbbc: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x3ddbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
label_3ddbc0:
    // 0x3ddbc0: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3ddbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_3ddbc4:
    // 0x3ddbc4: 0x8eb10004  lw          $s1, 0x4($s5)
    ctx->pc = 0x3ddbc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3ddbc8:
    // 0x3ddbc8: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x3ddbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_3ddbcc:
    // 0x3ddbcc: 0x111942  srl         $v1, $s1, 5
    ctx->pc = 0x3ddbccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
label_3ddbd0:
    // 0x3ddbd0: 0x3224001f  andi        $a0, $s1, 0x1F
    ctx->pc = 0x3ddbd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
label_3ddbd4:
    // 0x3ddbd4: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x3ddbd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_3ddbd8:
    // 0x3ddbd8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3ddbd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ddbdc:
    // 0x3ddbdc: 0x24630102  addiu       $v1, $v1, 0x102
    ctx->pc = 0x3ddbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 258));
label_3ddbe0:
    // 0x3ddbe0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3ddbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ddbe4:
    // 0x3ddbe4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x3ddbe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3ddbe8:
    // 0x3ddbe8: 0x1040012e  beqz        $v0, . + 4 + (0x12E << 2)
label_3ddbec:
    if (ctx->pc == 0x3DDBECu) {
        ctx->pc = 0x3DDBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDBE8u;
        // 0x3ddbec: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDBF0u;
        goto label_3ddbf0;
    }
    ctx->pc = 0x3DDBE8u;
    {
        const bool branch_taken_0x3ddbe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDBE8u;
        // 0x3ddbec: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddbe8) {
            ctx->pc = 0x3DE0A4u;
            goto label_3de0a4;
        }
    }
    ctx->pc = 0x3DDBF0u;
label_3ddbf0:
    // 0x3ddbf0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3ddbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_3ddbf4:
    // 0x3ddbf4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3ddbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3ddbf8:
    // 0x3ddbf8: 0x244dc500  addiu       $t5, $v0, -0x3B00
    ctx->pc = 0x3ddbf8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952192));
label_3ddbfc:
    // 0x3ddbfc: 0x2479d490  addiu       $t9, $v1, -0x2B70
    ctx->pc = 0x3ddbfcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956176));
label_3ddc00:
    // 0x3ddc00: 0x240f000b  addiu       $t7, $zero, 0xB
    ctx->pc = 0x3ddc00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3ddc04:
    // 0x3ddc04: 0x240e0010  addiu       $t6, $zero, 0x10
    ctx->pc = 0x3ddc04u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3ddc08:
    // 0x3ddc08: 0x241e0009  addiu       $fp, $zero, 0x9
    ctx->pc = 0x3ddc08u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3ddc0c:
    // 0x3ddc0c: 0x0  nop
    ctx->pc = 0x3ddc0cu;
    // NOP
label_3ddc10:
    // 0x3ddc10: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x3ddc10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_3ddc14:
    // 0x3ddc14: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x3ddc14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3ddc18:
    // 0x3ddc18: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_3ddc1c:
    if (ctx->pc == 0x3DDC1Cu) {
        ctx->pc = 0x3DDC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDC18u;
        // 0x3ddc1c: 0x2301823  subu        $v1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDC20u;
        goto label_3ddc20;
    }
    ctx->pc = 0x3DDC18u;
    {
        const bool branch_taken_0x3ddc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDC18u;
        // 0x3ddc1c: 0x2301823  subu        $v1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddc18) {
            ctx->pc = 0x3DDD44u;
            goto label_3ddd44;
        }
    }
    ctx->pc = 0x3DDC20u;
label_3ddc20:
    // 0x3ddc20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3ddc20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ddc24:
    // 0x3ddc24: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x3ddc24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_3ddc28:
    // 0x3ddc28: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_3ddc2c:
    if (ctx->pc == 0x3DDC2Cu) {
        ctx->pc = 0x3DDC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDC28u;
        // 0x3ddc2c: 0x3063001f  andi        $v1, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDC30u;
        goto label_3ddc30;
    }
    ctx->pc = 0x3DDC28u;
    {
        const bool branch_taken_0x3ddc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDC28u;
        // 0x3ddc2c: 0x3063001f  andi        $v1, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddc28) {
            ctx->pc = 0x3DDC9Cu;
            goto label_3ddc9c;
        }
    }
    ctx->pc = 0x3DDC30u;
label_3ddc30:
    // 0x3ddc30: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_3ddc34:
    if (ctx->pc == 0x3DDC34u) {
        ctx->pc = 0x3DDC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDC30u;
        // 0x3ddc34: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDC38u;
        goto label_3ddc38;
    }
    ctx->pc = 0x3DDC30u;
    {
        const bool branch_taken_0x3ddc30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDC30u;
        // 0x3ddc34: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddc30) {
            ctx->pc = 0x3DDCC0u;
            goto label_3ddcc0;
        }
    }
    ctx->pc = 0x3DDC38u;
label_3ddc38:
    // 0x3ddc38: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_3ddc3c:
    if (ctx->pc == 0x3DDC3Cu) {
        ctx->pc = 0x3DDC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDC38u;
        // 0x3ddc3c: 0x28620011  slti        $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDC40u;
        goto label_3ddc40;
    }
    ctx->pc = 0x3DDC38u;
    {
        const bool branch_taken_0x3ddc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DDC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDC38u;
        // 0x3ddc3c: 0x28620011  slti        $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddc38) {
            ctx->pc = 0x3DDC9Cu;
            goto label_3ddc9c;
        }
    }
    ctx->pc = 0x3DDC40u;
label_3ddc40:
    // 0x3ddc40: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_3ddc44:
    if (ctx->pc == 0x3DDC44u) {
        ctx->pc = 0x3DDC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDC40u;
        // 0x3ddc44: 0x28620019  slti        $v0, $v1, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDC48u;
        goto label_3ddc48;
    }
    ctx->pc = 0x3DDC40u;
    {
        const bool branch_taken_0x3ddc40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DDC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDC40u;
        // 0x3ddc44: 0x28620019  slti        $v0, $v1, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddc40) {
            ctx->pc = 0x3DDC78u;
            goto label_3ddc78;
        }
    }
    ctx->pc = 0x3DDC48u;
label_3ddc48:
    // 0x3ddc48: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_3ddc4c:
    if (ctx->pc == 0x3DDC4Cu) {
        ctx->pc = 0x3DDC50u;
        goto label_3ddc50;
    }
    ctx->pc = 0x3DDC48u;
    {
        const bool branch_taken_0x3ddc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ddc48) {
            ctx->pc = 0x3DDCC0u;
            goto label_3ddcc0;
        }
    }
    ctx->pc = 0x3DDC50u;
label_3ddc50:
    // 0x3ddc50: 0x126001cf  beqz        $s3, . + 4 + (0x1CF << 2)
label_3ddc54:
    if (ctx->pc == 0x3DDC54u) {
        ctx->pc = 0x3DDC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDC50u;
        // 0x3ddc54: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDC58u;
        goto label_3ddc58;
    }
    ctx->pc = 0x3DDC50u;
    {
        const bool branch_taken_0x3ddc50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDC50u;
        // 0x3ddc54: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddc50) {
            ctx->pc = 0x3DE390u;
            goto label_3de390;
        }
    }
    ctx->pc = 0x3DDC58u;
label_3ddc58:
    // 0x3ddc58: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x3ddc58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_3ddc5c:
    // 0x3ddc5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ddc5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ddc60:
    // 0x3ddc60: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3ddc60u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ddc64:
    // 0x3ddc64: 0x2031814  dsllv       $v1, $v1, $s0
    ctx->pc = 0x3ddc64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 16) & 0x3F));
label_3ddc68:
    // 0x3ddc68: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3ddc68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3ddc6c:
    // 0x3ddc6c: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x3ddc6cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
label_3ddc70:
    // 0x3ddc70: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3ddc70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ddc74:
    // 0x3ddc74: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3ddc74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3ddc78:
    // 0x3ddc78: 0x126001c5  beqz        $s3, . + 4 + (0x1C5 << 2)
label_3ddc7c:
    if (ctx->pc == 0x3DDC7Cu) {
        ctx->pc = 0x3DDC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDC78u;
        // 0x3ddc7c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDC80u;
        goto label_3ddc80;
    }
    ctx->pc = 0x3DDC78u;
    {
        const bool branch_taken_0x3ddc78 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDC78u;
        // 0x3ddc7c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddc78) {
            ctx->pc = 0x3DE390u;
            goto label_3de390;
        }
    }
    ctx->pc = 0x3DDC80u;
label_3ddc80:
    // 0x3ddc80: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ddc80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3ddc84:
    // 0x3ddc84: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3ddc84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ddc88:
    // 0x3ddc88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3ddc88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3ddc8c:
    // 0x3ddc8c: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3ddc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3ddc90:
    // 0x3ddc90: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3ddc90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3ddc94:
    // 0x3ddc94: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3ddc94u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3ddc98:
    // 0x3ddc98: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3ddc98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3ddc9c:
    // 0x3ddc9c: 0x126001bc  beqz        $s3, . + 4 + (0x1BC << 2)
label_3ddca0:
    if (ctx->pc == 0x3DDCA0u) {
        ctx->pc = 0x3DDCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDC9Cu;
        // 0x3ddca0: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDCA4u;
        goto label_3ddca4;
    }
    ctx->pc = 0x3DDC9Cu;
    {
        const bool branch_taken_0x3ddc9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDC9Cu;
        // 0x3ddca0: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddc9c) {
            ctx->pc = 0x3DE390u;
            goto label_3de390;
        }
    }
    ctx->pc = 0x3DDCA4u;
label_3ddca4:
    // 0x3ddca4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ddca4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3ddca8:
    // 0x3ddca8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3ddca8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ddcac:
    // 0x3ddcac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3ddcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3ddcb0:
    // 0x3ddcb0: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3ddcb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3ddcb4:
    // 0x3ddcb4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3ddcb8:
    if (ctx->pc == 0x3DDCB8u) {
        ctx->pc = 0x3DDCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDCB4u;
        // 0x3ddcb8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDCBCu;
        goto label_3ddcbc;
    }
    ctx->pc = 0x3DDCB4u;
    {
        const bool branch_taken_0x3ddcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDCB4u;
        // 0x3ddcb8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddcb4) {
            ctx->pc = 0x3DDD30u;
            goto label_3ddd30;
        }
    }
    ctx->pc = 0x3DDCBCu;
label_3ddcbc:
    // 0x3ddcbc: 0x0  nop
    ctx->pc = 0x3ddcbcu;
    // NOP
label_3ddcc0:
    // 0x3ddcc0: 0x126001b3  beqz        $s3, . + 4 + (0x1B3 << 2)
label_3ddcc4:
    if (ctx->pc == 0x3DDCC4u) {
        ctx->pc = 0x3DDCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDCC0u;
        // 0x3ddcc4: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDCC8u;
        goto label_3ddcc8;
    }
    ctx->pc = 0x3DDCC0u;
    {
        const bool branch_taken_0x3ddcc0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDCC0u;
        // 0x3ddcc4: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddcc0) {
            ctx->pc = 0x3DE390u;
            goto label_3de390;
        }
    }
    ctx->pc = 0x3DDCC8u;
label_3ddcc8:
    // 0x3ddcc8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3ddcc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3ddccc:
    // 0x3ddccc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3ddcccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ddcd0:
    // 0x3ddcd0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3ddcd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3ddcd4:
    // 0x3ddcd4: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3ddcd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3ddcd8:
    // 0x3ddcd8: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3ddcd8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3ddcdc:
    // 0x3ddcdc: 0x126001ac  beqz        $s3, . + 4 + (0x1AC << 2)
label_3ddce0:
    if (ctx->pc == 0x3DDCE0u) {
        ctx->pc = 0x3DDCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDCDCu;
        // 0x3ddce0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDCE4u;
        goto label_3ddce4;
    }
    ctx->pc = 0x3DDCDCu;
    {
        const bool branch_taken_0x3ddcdc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDCDCu;
        // 0x3ddce0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddcdc) {
            ctx->pc = 0x3DE390u;
            goto label_3de390;
        }
    }
    ctx->pc = 0x3DDCE4u;
label_3ddce4:
    // 0x3ddce4: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x3ddce4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_3ddce8:
    // 0x3ddce8: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3ddce8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3ddcec:
    // 0x3ddcec: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3ddcecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3ddcf0:
    // 0x3ddcf0: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3ddcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3ddcf4:
    // 0x3ddcf4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3ddcf4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3ddcf8:
    // 0x3ddcf8: 0x126001a5  beqz        $s3, . + 4 + (0x1A5 << 2)
label_3ddcfc:
    if (ctx->pc == 0x3DDCFCu) {
        ctx->pc = 0x3DDCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDCF8u;
        // 0x3ddcfc: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDD00u;
        goto label_3ddd00;
    }
    ctx->pc = 0x3DDCF8u;
    {
        const bool branch_taken_0x3ddcf8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDCF8u;
        // 0x3ddcfc: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddcf8) {
            ctx->pc = 0x3DE390u;
            goto label_3de390;
        }
    }
    ctx->pc = 0x3DDD00u;
label_3ddd00:
    // 0x3ddd00: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x3ddd00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_3ddd04:
    // 0x3ddd04: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3ddd04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3ddd08:
    // 0x3ddd08: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3ddd08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3ddd0c:
    // 0x3ddd0c: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3ddd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3ddd10:
    // 0x3ddd10: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3ddd10u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3ddd14:
    // 0x3ddd14: 0x1260019e  beqz        $s3, . + 4 + (0x19E << 2)
label_3ddd18:
    if (ctx->pc == 0x3DDD18u) {
        ctx->pc = 0x3DDD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDD14u;
        // 0x3ddd18: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDD1Cu;
        goto label_3ddd1c;
    }
    ctx->pc = 0x3DDD14u;
    {
        const bool branch_taken_0x3ddd14 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDD14u;
        // 0x3ddd18: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddd14) {
            ctx->pc = 0x3DE390u;
            goto label_3de390;
        }
    }
    ctx->pc = 0x3DDD1Cu;
label_3ddd1c:
    // 0x3ddd1c: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x3ddd1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_3ddd20:
    // 0x3ddd20: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3ddd20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3ddd24:
    // 0x3ddd24: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3ddd24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3ddd28:
    // 0x3ddd28: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3ddd28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3ddd2c:
    // 0x3ddd2c: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3ddd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3ddd30:
    // 0x3ddd30: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3ddd30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3ddd34:
    // 0x3ddd34: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3ddd34u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3ddd38:
    // 0x3ddd38: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x3ddd38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3ddd3c:
    // 0x3ddd3c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_3ddd40:
    if (ctx->pc == 0x3DDD40u) {
        ctx->pc = 0x3DDD44u;
        goto label_3ddd44;
    }
    ctx->pc = 0x3DDD3Cu;
    {
        const bool branch_taken_0x3ddd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ddd3c) {
            ctx->pc = 0x3DDCC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ddcc0;
        }
    }
    ctx->pc = 0x3DDD44u;
label_3ddd44:
    // 0x3ddd44: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3ddd44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3ddd48:
    // 0x3ddd48: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x3ddd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_3ddd4c:
    // 0x3ddd4c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3ddd4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3ddd50:
    // 0x3ddd50: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x3ddd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
label_3ddd54:
    // 0x3ddd54: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x3ddd54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_3ddd58:
    // 0x3ddd58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ddd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ddd5c:
    // 0x3ddd5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ddd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3ddd60:
    // 0x3ddd60: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3ddd60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3ddd64:
    // 0x3ddd64: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3ddd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3ddd68:
    // 0x3ddd68: 0x8ca90004  lw          $t1, 0x4($a1)
    ctx->pc = 0x3ddd68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3ddd6c:
    // 0x3ddd6c: 0x2d220010  sltiu       $v0, $t1, 0x10
    ctx->pc = 0x3ddd6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_3ddd70:
    // 0x3ddd70: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3ddd74:
    if (ctx->pc == 0x3DDD74u) {
        ctx->pc = 0x3DDD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDD70u;
        // 0x3ddd74: 0x90b10001  lbu         $s1, 0x1($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDD78u;
        goto label_3ddd78;
    }
    ctx->pc = 0x3DDD70u;
    {
        const bool branch_taken_0x3ddd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDD70u;
        // 0x3ddd74: 0x90b10001  lbu         $s1, 0x1($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddd70) {
            ctx->pc = 0x3DDDA0u;
            goto label_3ddda0;
        }
    }
    ctx->pc = 0x3DDD78u;
label_3ddd78:
    // 0x3ddd78: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x3ddd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_3ddd7c:
    // 0x3ddd7c: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x3ddd7cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_3ddd80:
    // 0x3ddd80: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x3ddd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_3ddd84:
    // 0x3ddd84: 0x2329016  dsrlv       $s2, $s2, $s1
    ctx->pc = 0x3ddd84u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (GPR_U32(ctx, 17) & 0x3F));
label_3ddd88:
    // 0x3ddd88: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3ddd88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3ddd8c:
    // 0x3ddd8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ddd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3ddd90:
    // 0x3ddd90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ddd94:
    // 0x3ddd94: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x3ddd94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
label_3ddd98:
    // 0x3ddd98: 0x100000b6  b           . + 4 + (0xB6 << 2)
label_3ddd9c:
    if (ctx->pc == 0x3DDD9Cu) {
        ctx->pc = 0x3DDD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDD98u;
        // 0x3ddd9c: 0xaea20008  sw          $v0, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDDA0u;
        goto label_3ddda0;
    }
    ctx->pc = 0x3DDD98u;
    {
        const bool branch_taken_0x3ddd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDD98u;
        // 0x3ddd9c: 0xaea20008  sw          $v0, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddd98) {
            ctx->pc = 0x3DE074u;
            goto label_3de074;
        }
    }
    ctx->pc = 0x3DDDA0u;
label_3ddda0:
    // 0x3ddda0: 0x39230012  xori        $v1, $t1, 0x12
    ctx->pc = 0x3ddda0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)18);
label_3ddda4:
    // 0x3ddda4: 0x2522fff2  addiu       $v0, $t1, -0xE
    ctx->pc = 0x3ddda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967282));
label_3ddda8:
    // 0x3ddda8: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x3ddda8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3dddac:
    // 0x3dddac: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3dddacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3dddb0:
    // 0x3dddb0: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x3dddb0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_3dddb4:
    // 0x3dddb4: 0x1e3380a  movz        $a3, $t7, $v1
    ctx->pc = 0x3dddb4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 15));
label_3dddb8:
    // 0x3dddb8: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x3dddb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_3dddbc:
    // 0x3dddbc: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x3dddbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3dddc0:
    // 0x3dddc0: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_3dddc4:
    if (ctx->pc == 0x3DDDC4u) {
        ctx->pc = 0x3DDDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDDC0u;
        // 0x3dddc4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDDC8u;
        goto label_3dddc8;
    }
    ctx->pc = 0x3DDDC0u;
    {
        const bool branch_taken_0x3dddc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDDC0u;
        // 0x3dddc4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dddc0) {
            ctx->pc = 0x3DDEF4u;
            goto label_3ddef4;
        }
    }
    ctx->pc = 0x3DDDC8u;
label_3dddc8:
    // 0x3dddc8: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3dddc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3dddcc:
    // 0x3dddcc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3dddccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3dddd0:
    // 0x3dddd0: 0x1101023  subu        $v0, $t0, $s0
    ctx->pc = 0x3dddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
label_3dddd4:
    // 0x3dddd4: 0x208182a  slt         $v1, $s0, $t0
    ctx->pc = 0x3dddd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_3dddd8:
    // 0x3dddd8: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_3ddddc:
    if (ctx->pc == 0x3DDDDCu) {
        ctx->pc = 0x3DDDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDDD8u;
        // 0x3ddddc: 0x3044001f  andi        $a0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDDE0u;
        goto label_3ddde0;
    }
    ctx->pc = 0x3DDDD8u;
    {
        const bool branch_taken_0x3dddd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDDD8u;
        // 0x3ddddc: 0x3044001f  andi        $a0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dddd8) {
            ctx->pc = 0x3DDE4Cu;
            goto label_3dde4c;
        }
    }
    ctx->pc = 0x3DDDE0u;
label_3ddde0:
    // 0x3ddde0: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
label_3ddde4:
    if (ctx->pc == 0x3DDDE4u) {
        ctx->pc = 0x3DDDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDDE0u;
        // 0x3ddde4: 0x28820009  slti        $v0, $a0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDDE8u;
        goto label_3ddde8;
    }
    ctx->pc = 0x3DDDE0u;
    {
        const bool branch_taken_0x3ddde0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDDE0u;
        // 0x3ddde4: 0x28820009  slti        $v0, $a0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddde0) {
            ctx->pc = 0x3DDE70u;
            goto label_3dde70;
        }
    }
    ctx->pc = 0x3DDDE8u;
label_3ddde8:
    // 0x3ddde8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_3dddec:
    if (ctx->pc == 0x3DDDECu) {
        ctx->pc = 0x3DDDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDDE8u;
        // 0x3dddec: 0x28820011  slti        $v0, $a0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDDF0u;
        goto label_3dddf0;
    }
    ctx->pc = 0x3DDDE8u;
    {
        const bool branch_taken_0x3ddde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DDDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDDE8u;
        // 0x3dddec: 0x28820011  slti        $v0, $a0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddde8) {
            ctx->pc = 0x3DDE4Cu;
            goto label_3dde4c;
        }
    }
    ctx->pc = 0x3DDDF0u;
label_3dddf0:
    // 0x3dddf0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_3dddf4:
    if (ctx->pc == 0x3DDDF4u) {
        ctx->pc = 0x3DDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDDF0u;
        // 0x3dddf4: 0x28820019  slti        $v0, $a0, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDDF8u;
        goto label_3dddf8;
    }
    ctx->pc = 0x3DDDF0u;
    {
        const bool branch_taken_0x3dddf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDDF0u;
        // 0x3dddf4: 0x28820019  slti        $v0, $a0, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dddf0) {
            ctx->pc = 0x3DDE28u;
            goto label_3dde28;
        }
    }
    ctx->pc = 0x3DDDF8u;
label_3dddf8:
    // 0x3dddf8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_3dddfc:
    if (ctx->pc == 0x3DDDFCu) {
        ctx->pc = 0x3DDE00u;
        goto label_3dde00;
    }
    ctx->pc = 0x3DDDF8u;
    {
        const bool branch_taken_0x3dddf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dddf8) {
            ctx->pc = 0x3DDE70u;
            goto label_3dde70;
        }
    }
    ctx->pc = 0x3DDE00u;
label_3dde00:
    // 0x3dde00: 0x12600170  beqz        $s3, . + 4 + (0x170 << 2)
label_3dde04:
    if (ctx->pc == 0x3DDE04u) {
        ctx->pc = 0x3DDE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDE00u;
        // 0x3dde04: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDE08u;
        goto label_3dde08;
    }
    ctx->pc = 0x3DDE00u;
    {
        const bool branch_taken_0x3dde00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDE00u;
        // 0x3dde04: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dde00) {
            ctx->pc = 0x3DE3C4u;
            goto label_3de3c4;
        }
    }
    ctx->pc = 0x3DDE08u;
label_3dde08:
    // 0x3dde08: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x3dde08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_3dde0c:
    // 0x3dde0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3dde0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dde10:
    // 0x3dde10: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3dde10u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dde14:
    // 0x3dde14: 0x2031814  dsllv       $v1, $v1, $s0
    ctx->pc = 0x3dde14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 16) & 0x3F));
label_3dde18:
    // 0x3dde18: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3dde18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3dde1c:
    // 0x3dde1c: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x3dde1cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
label_3dde20:
    // 0x3dde20: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3dde20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dde24:
    // 0x3dde24: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3dde24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3dde28:
    // 0x3dde28: 0x12600166  beqz        $s3, . + 4 + (0x166 << 2)
label_3dde2c:
    if (ctx->pc == 0x3DDE2Cu) {
        ctx->pc = 0x3DDE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDE28u;
        // 0x3dde2c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDE30u;
        goto label_3dde30;
    }
    ctx->pc = 0x3DDE28u;
    {
        const bool branch_taken_0x3dde28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDE28u;
        // 0x3dde2c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dde28) {
            ctx->pc = 0x3DE3C4u;
            goto label_3de3c4;
        }
    }
    ctx->pc = 0x3DDE30u;
label_3dde30:
    // 0x3dde30: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3dde30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3dde34:
    // 0x3dde34: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3dde34u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dde38:
    // 0x3dde38: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3dde38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3dde3c:
    // 0x3dde3c: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dde3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3dde40:
    // 0x3dde40: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3dde40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3dde44:
    // 0x3dde44: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dde44u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3dde48:
    // 0x3dde48: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3dde48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3dde4c:
    // 0x3dde4c: 0x1260015d  beqz        $s3, . + 4 + (0x15D << 2)
label_3dde50:
    if (ctx->pc == 0x3DDE50u) {
        ctx->pc = 0x3DDE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDE4Cu;
        // 0x3dde50: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDE54u;
        goto label_3dde54;
    }
    ctx->pc = 0x3DDE4Cu;
    {
        const bool branch_taken_0x3dde4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDE4Cu;
        // 0x3dde50: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dde4c) {
            ctx->pc = 0x3DE3C4u;
            goto label_3de3c4;
        }
    }
    ctx->pc = 0x3DDE54u;
label_3dde54:
    // 0x3dde54: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3dde54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3dde58:
    // 0x3dde58: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3dde58u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dde5c:
    // 0x3dde5c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3dde5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3dde60:
    // 0x3dde60: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dde60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3dde64:
    // 0x3dde64: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3dde68:
    if (ctx->pc == 0x3DDE68u) {
        ctx->pc = 0x3DDE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDE64u;
        // 0x3dde68: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDE6Cu;
        goto label_3dde6c;
    }
    ctx->pc = 0x3DDE64u;
    {
        const bool branch_taken_0x3dde64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDE64u;
        // 0x3dde68: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dde64) {
            ctx->pc = 0x3DDEE0u;
            goto label_3ddee0;
        }
    }
    ctx->pc = 0x3DDE6Cu;
label_3dde6c:
    // 0x3dde6c: 0x0  nop
    ctx->pc = 0x3dde6cu;
    // NOP
label_3dde70:
    // 0x3dde70: 0x12600154  beqz        $s3, . + 4 + (0x154 << 2)
label_3dde74:
    if (ctx->pc == 0x3DDE74u) {
        ctx->pc = 0x3DDE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDE70u;
        // 0x3dde74: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDE78u;
        goto label_3dde78;
    }
    ctx->pc = 0x3DDE70u;
    {
        const bool branch_taken_0x3dde70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDE70u;
        // 0x3dde74: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dde70) {
            ctx->pc = 0x3DE3C4u;
            goto label_3de3c4;
        }
    }
    ctx->pc = 0x3DDE78u;
label_3dde78:
    // 0x3dde78: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3dde78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3dde7c:
    // 0x3dde7c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3dde7cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dde80:
    // 0x3dde80: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3dde80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3dde84:
    // 0x3dde84: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3dde84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3dde88:
    // 0x3dde88: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3dde88u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3dde8c:
    // 0x3dde8c: 0x1260014d  beqz        $s3, . + 4 + (0x14D << 2)
label_3dde90:
    if (ctx->pc == 0x3DDE90u) {
        ctx->pc = 0x3DDE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDE8Cu;
        // 0x3dde90: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDE94u;
        goto label_3dde94;
    }
    ctx->pc = 0x3DDE8Cu;
    {
        const bool branch_taken_0x3dde8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDE8Cu;
        // 0x3dde90: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dde8c) {
            ctx->pc = 0x3DE3C4u;
            goto label_3de3c4;
        }
    }
    ctx->pc = 0x3DDE94u;
label_3dde94:
    // 0x3dde94: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x3dde94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_3dde98:
    // 0x3dde98: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3dde98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3dde9c:
    // 0x3dde9c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3dde9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3ddea0:
    // 0x3ddea0: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3ddea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3ddea4:
    // 0x3ddea4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3ddea4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3ddea8:
    // 0x3ddea8: 0x12600146  beqz        $s3, . + 4 + (0x146 << 2)
label_3ddeac:
    if (ctx->pc == 0x3DDEACu) {
        ctx->pc = 0x3DDEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDEA8u;
        // 0x3ddeac: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDEB0u;
        goto label_3ddeb0;
    }
    ctx->pc = 0x3DDEA8u;
    {
        const bool branch_taken_0x3ddea8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDEA8u;
        // 0x3ddeac: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddea8) {
            ctx->pc = 0x3DE3C4u;
            goto label_3de3c4;
        }
    }
    ctx->pc = 0x3DDEB0u;
label_3ddeb0:
    // 0x3ddeb0: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x3ddeb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_3ddeb4:
    // 0x3ddeb4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3ddeb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3ddeb8:
    // 0x3ddeb8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3ddeb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3ddebc:
    // 0x3ddebc: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3ddebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3ddec0:
    // 0x3ddec0: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3ddec0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3ddec4:
    // 0x3ddec4: 0x1260013f  beqz        $s3, . + 4 + (0x13F << 2)
label_3ddec8:
    if (ctx->pc == 0x3DDEC8u) {
        ctx->pc = 0x3DDEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDEC4u;
        // 0x3ddec8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDECCu;
        goto label_3ddecc;
    }
    ctx->pc = 0x3DDEC4u;
    {
        const bool branch_taken_0x3ddec4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDEC4u;
        // 0x3ddec8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddec4) {
            ctx->pc = 0x3DE3C4u;
            goto label_3de3c4;
        }
    }
    ctx->pc = 0x3DDECCu;
label_3ddecc:
    // 0x3ddecc: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x3ddeccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_3dded0:
    // 0x3dded0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3dded0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3dded4:
    // 0x3dded4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3dded4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3dded8:
    // 0x3dded8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3dded8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3ddedc:
    // 0x3ddedc: 0x2021014  dsllv       $v0, $v0, $s0
    ctx->pc = 0x3ddedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 16) & 0x3F));
label_3ddee0:
    // 0x3ddee0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x3ddee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3ddee4:
    // 0x3ddee4: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x3ddee4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_3ddee8:
    // 0x3ddee8: 0x208102b  sltu        $v0, $s0, $t0
    ctx->pc = 0x3ddee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_3ddeec:
    // 0x3ddeec: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_3ddef0:
    if (ctx->pc == 0x3DDEF0u) {
        ctx->pc = 0x3DDEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDEECu;
        // 0x3ddef0: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDEF4u;
        goto label_3ddef4;
    }
    ctx->pc = 0x3DDEECu;
    {
        const bool branch_taken_0x3ddeec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DDEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDEECu;
        // 0x3ddef0: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddeec) {
            ctx->pc = 0x3DDE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dde70;
        }
    }
    ctx->pc = 0x3DDEF4u;
label_3ddef4:
    // 0x3ddef4: 0x2329016  dsrlv       $s2, $s2, $s1
    ctx->pc = 0x3ddef4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (GPR_U32(ctx, 17) & 0x3F));
label_3ddef8:
    // 0x3ddef8: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x3ddef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
label_3ddefc:
    // 0x3ddefc: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x3ddefcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_3ddf00:
    // 0x3ddf00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ddf00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ddf04:
    // 0x3ddf04: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x3ddf04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3ddf08:
    // 0x3ddf08: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x3ddf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_3ddf0c:
    // 0x3ddf0c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3ddf0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3ddf10:
    // 0x3ddf10: 0x111942  srl         $v1, $s1, 5
    ctx->pc = 0x3ddf10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
label_3ddf14:
    // 0x3ddf14: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3ddf14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_3ddf18:
    // 0x3ddf18: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x3ddf18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_3ddf1c:
    // 0x3ddf1c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x3ddf1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_3ddf20:
    // 0x3ddf20: 0x24630102  addiu       $v1, $v1, 0x102
    ctx->pc = 0x3ddf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 258));
label_3ddf24:
    // 0x3ddf24: 0x3222001f  andi        $v0, $s1, 0x1F
    ctx->pc = 0x3ddf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
label_3ddf28:
    // 0x3ddf28: 0x2068023  subu        $s0, $s0, $a2
    ctx->pc = 0x3ddf28u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_3ddf2c:
    // 0x3ddf2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ddf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ddf30:
    // 0x3ddf30: 0xd29016  dsrlv       $s2, $s2, $a2
    ctx->pc = 0x3ddf30u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (GPR_U32(ctx, 6) & 0x3F));
label_3ddf34:
    // 0x3ddf34: 0x1471821  addu        $v1, $t2, $a3
    ctx->pc = 0x3ddf34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_3ddf38:
    // 0x3ddf38: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3ddf38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3ddf3c:
    // 0x3ddf3c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3ddf40:
    if (ctx->pc == 0x3DDF40u) {
        ctx->pc = 0x3DDF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDF3Cu;
        // 0x3ddf40: 0x140302d  daddu       $a2, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDF44u;
        goto label_3ddf44;
    }
    ctx->pc = 0x3DDF3Cu;
    {
        const bool branch_taken_0x3ddf3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DDF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDF3Cu;
        // 0x3ddf40: 0x140302d  daddu       $a2, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddf3c) {
            ctx->pc = 0x3DDF54u;
            goto label_3ddf54;
        }
    }
    ctx->pc = 0x3DDF44u;
label_3ddf44:
    // 0x3ddf44: 0x152e001e  bne         $t1, $t6, . + 4 + (0x1E << 2)
label_3ddf48:
    if (ctx->pc == 0x3DDF48u) {
        ctx->pc = 0x3DDF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDF44u;
        // 0x3ddf48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDF4Cu;
        goto label_3ddf4c;
    }
    ctx->pc = 0x3DDF44u;
    {
        const bool branch_taken_0x3ddf44 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 14));
        ctx->pc = 0x3DDF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDF44u;
        // 0x3ddf48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddf44) {
            ctx->pc = 0x3DDFC0u;
            goto label_3ddfc0;
        }
    }
    ctx->pc = 0x3DDF4Cu;
label_3ddf4c:
    // 0x3ddf4c: 0x55400019  bnel        $t2, $zero, . + 4 + (0x19 << 2)
label_3ddf50:
    if (ctx->pc == 0x3DDF50u) {
        ctx->pc = 0x3DDF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDF4Cu;
        // 0x3ddf50: 0x8ea3000c  lw          $v1, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDF54u;
        goto label_3ddf54;
    }
    ctx->pc = 0x3DDF4Cu;
    {
        const bool branch_taken_0x3ddf4c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ddf4c) {
            ctx->pc = 0x3DDF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DDF4Cu;
            // 0x3ddf50: 0x8ea3000c  lw          $v1, 0xC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DDFB4u;
            goto label_3ddfb4;
        }
    }
    ctx->pc = 0x3DDF54u;
label_3ddf54:
    // 0x3ddf54: 0x8ec40030  lw          $a0, 0x30($s6)
    ctx->pc = 0x3ddf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
label_3ddf58:
    // 0x3ddf58: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x3ddf58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_3ddf5c:
    // 0x3ddf5c: 0x8ec2002c  lw          $v0, 0x2C($s6)
    ctx->pc = 0x3ddf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
label_3ddf60:
    // 0x3ddf60: 0x7fac0030  sq          $t4, 0x30($sp)
    ctx->pc = 0x3ddf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
label_3ddf64:
    // 0x3ddf64: 0x40f809  jalr        $v0
label_3ddf68:
    if (ctx->pc == 0x3DDF68u) {
        ctx->pc = 0x3DDF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDF64u;
        // 0x3ddf68: 0x7fb90040  sq          $t9, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDF6Cu;
        goto label_3ddf6c;
    }
    ctx->pc = 0x3DDF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DDF6Cu);
        ctx->pc = 0x3DDF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDF64u;
        // 0x3ddf68: 0x7fb90040  sq          $t9, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDF64u, 0x3DDF6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DDF6Cu;
label_3ddf6c:
    // 0x3ddf6c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3ddf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3ddf70:
    // 0x3ddf70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ddf70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ddf74:
    // 0x3ddf74: 0xfeb20020  sd          $s2, 0x20($s5)
    ctx->pc = 0x3ddf74u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 18));
label_3ddf78:
    // 0x3ddf78: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3ddf78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3ddf7c:
    // 0x3ddf7c: 0xaeb0001c  sw          $s0, 0x1C($s5)
    ctx->pc = 0x3ddf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 16));
label_3ddf80:
    // 0x3ddf80: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x3ddf80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3ddf84:
    // 0x3ddf84: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x3ddf84u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
label_3ddf88:
    // 0x3ddf88: 0x2406fffd  addiu       $a2, $zero, -0x3
    ctx->pc = 0x3ddf88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3ddf8c:
    // 0x3ddf8c: 0xaebe0000  sw          $fp, 0x0($s5)
    ctx->pc = 0x3ddf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 30));
label_3ddf90:
    // 0x3ddf90: 0xdec30008  ld          $v1, 0x8($s6)
    ctx->pc = 0x3ddf90u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 8)));
label_3ddf94:
    // 0x3ddf94: 0x7bb90040  lq          $t9, 0x40($sp)
    ctx->pc = 0x3ddf94u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ddf98:
    // 0x3ddf98: 0xaed30004  sw          $s3, 0x4($s6)
    ctx->pc = 0x3ddf98u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 19));
label_3ddf9c:
    // 0x3ddf9c: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3ddf9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_3ddfa0:
    // 0x3ddfa0: 0xaed90020  sw          $t9, 0x20($s6)
    ctx->pc = 0x3ddfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 32), GPR_U32(ctx, 25));
label_3ddfa4:
    // 0x3ddfa4: 0x7bac0030  lq          $t4, 0x30($sp)
    ctx->pc = 0x3ddfa4u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ddfa8:
    // 0x3ddfa8: 0xfec30008  sd          $v1, 0x8($s6)
    ctx->pc = 0x3ddfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 3));
label_3ddfac:
    // 0x3ddfac: 0x1000011f  b           . + 4 + (0x11F << 2)
label_3ddfb0:
    if (ctx->pc == 0x3DDFB0u) {
        ctx->pc = 0x3DDFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDFACu;
        // 0x3ddfb0: 0xaeac0038  sw          $t4, 0x38($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDFB4u;
        goto label_3ddfb4;
    }
    ctx->pc = 0x3DDFACu;
    {
        const bool branch_taken_0x3ddfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDFACu;
        // 0x3ddfb0: 0xaeac0038  sw          $t4, 0x38($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddfac) {
            ctx->pc = 0x3DE42Cu;
            goto label_3de42c;
        }
    }
    ctx->pc = 0x3DDFB4u;
label_3ddfb4:
    // 0x3ddfb4: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x3ddfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_3ddfb8:
    // 0x3ddfb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ddfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ddfbc:
    // 0x3ddfbc: 0x8c45fffc  lw          $a1, -0x4($v0)
    ctx->pc = 0x3ddfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_3ddfc0:
    // 0x3ddfc0: 0x71023  negu        $v0, $a3
    ctx->pc = 0x3ddfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
label_3ddfc4:
    // 0x3ddfc4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3ddfc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_3ddfc8:
    // 0x3ddfc8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_3ddfcc:
    if (ctx->pc == 0x3DDFCCu) {
        ctx->pc = 0x3DDFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDFC8u;
        // 0x3ddfcc: 0x62080  sll         $a0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDFD0u;
        goto label_3ddfd0;
    }
    ctx->pc = 0x3DDFC8u;
    {
        const bool branch_taken_0x3ddfc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDFC8u;
        // 0x3ddfcc: 0x62080  sll         $a0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddfc8) {
            ctx->pc = 0x3DE030u;
            goto label_3de030;
        }
    }
    ctx->pc = 0x3DDFD0u;
label_3ddfd0:
    // 0x3ddfd0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3ddfd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3ddfd4:
    // 0x3ddfd4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3ddfd8:
    if (ctx->pc == 0x3DDFD8u) {
        ctx->pc = 0x3DDFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDFD4u;
        // 0x3ddfd8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDFDCu;
        goto label_3ddfdc;
    }
    ctx->pc = 0x3DDFD4u;
    {
        const bool branch_taken_0x3ddfd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDFD4u;
        // 0x3ddfd8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddfd4) {
            ctx->pc = 0x3DE010u;
            goto label_3de010;
        }
    }
    ctx->pc = 0x3DDFDCu;
label_3ddfdc:
    // 0x3ddfdc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3ddfe0:
    if (ctx->pc == 0x3DDFE0u) {
        ctx->pc = 0x3DDFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDFDCu;
        // 0x3ddfe0: 0x8ea2000c  lw          $v0, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DDFE4u;
        goto label_3ddfe4;
    }
    ctx->pc = 0x3DDFDCu;
    {
        const bool branch_taken_0x3ddfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDFDCu;
        // 0x3ddfe0: 0x8ea2000c  lw          $v0, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddfdc) {
            ctx->pc = 0x3DDFFCu;
            goto label_3ddffc;
        }
    }
    ctx->pc = 0x3DDFE4u;
label_3ddfe4:
    // 0x3ddfe4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3ddfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3ddfe8:
    // 0x3ddfe8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3ddfe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_3ddfec:
    // 0x3ddfec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3ddfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3ddff0:
    // 0x3ddff0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3ddff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3ddff4:
    // 0x3ddff4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3ddff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3ddff8:
    // 0x3ddff8: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x3ddff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_3ddffc:
    // 0x3ddffc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3ddffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3de000:
    // 0x3de000: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3de000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_3de004:
    // 0x3de004: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3de004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3de008:
    // 0x3de008: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3de008u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3de00c:
    // 0x3de00c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3de00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3de010:
    // 0x3de010: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x3de010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_3de014:
    // 0x3de014: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3de014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3de018:
    // 0x3de018: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3de018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_3de01c:
    // 0x3de01c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3de01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3de020:
    // 0x3de020: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3de020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3de024:
    // 0x3de024: 0x10e00012  beqz        $a3, . + 4 + (0x12 << 2)
label_3de028:
    if (ctx->pc == 0x3DE028u) {
        ctx->pc = 0x3DE028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE024u;
        // 0x3de028: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE02Cu;
        goto label_3de02c;
    }
    ctx->pc = 0x3DE024u;
    {
        const bool branch_taken_0x3de024 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE024u;
        // 0x3de028: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de024) {
            ctx->pc = 0x3DE070u;
            goto label_3de070;
        }
    }
    ctx->pc = 0x3DE02Cu;
label_3de02c:
    // 0x3de02c: 0x0  nop
    ctx->pc = 0x3de02cu;
    // NOP
label_3de030:
    // 0x3de030: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x3de030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_3de034:
    // 0x3de034: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3de034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_3de038:
    // 0x3de038: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x3de038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_3de03c:
    // 0x3de03c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3de03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3de040:
    // 0x3de040: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x3de040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_3de044:
    // 0x3de044: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x3de044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_3de048:
    // 0x3de048: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3de048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3de04c:
    // 0x3de04c: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x3de04cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_3de050:
    // 0x3de050: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x3de050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_3de054:
    // 0x3de054: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3de054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3de058:
    // 0x3de058: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x3de058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_3de05c:
    // 0x3de05c: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x3de05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_3de060:
    // 0x3de060: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3de060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3de064:
    // 0x3de064: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x3de064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
label_3de068:
    // 0x3de068: 0x14e0fff1  bnez        $a3, . + 4 + (-0xF << 2)
label_3de06c:
    if (ctx->pc == 0x3DE06Cu) {
        ctx->pc = 0x3DE06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE068u;
        // 0x3de06c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE070u;
        goto label_3de070;
    }
    ctx->pc = 0x3DE068u;
    {
        const bool branch_taken_0x3de068 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DE06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE068u;
        // 0x3de06c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de068) {
            ctx->pc = 0x3DE030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3de030;
        }
    }
    ctx->pc = 0x3DE070u;
label_3de070:
    // 0x3de070: 0xaea60008  sw          $a2, 0x8($s5)
    ctx->pc = 0x3de070u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 6));
label_3de074:
    // 0x3de074: 0x8eb10004  lw          $s1, 0x4($s5)
    ctx->pc = 0x3de074u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3de078:
    // 0x3de078: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x3de078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_3de07c:
    // 0x3de07c: 0x111942  srl         $v1, $s1, 5
    ctx->pc = 0x3de07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
label_3de080:
    // 0x3de080: 0x3224001f  andi        $a0, $s1, 0x1F
    ctx->pc = 0x3de080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
label_3de084:
    // 0x3de084: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x3de084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_3de088:
    // 0x3de088: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3de088u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de08c:
    // 0x3de08c: 0x24630102  addiu       $v1, $v1, 0x102
    ctx->pc = 0x3de08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 258));
label_3de090:
    // 0x3de090: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3de090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3de094:
    // 0x3de094: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x3de094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3de098:
    // 0x3de098: 0x1440fedd  bnez        $v0, . + 4 + (-0x123 << 2)
label_3de09c:
    if (ctx->pc == 0x3DE09Cu) {
        ctx->pc = 0x3DE09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE098u;
        // 0x3de09c: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE0A0u;
        goto label_3de0a0;
    }
    ctx->pc = 0x3DE098u;
    {
        const bool branch_taken_0x3de098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DE09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE098u;
        // 0x3de09c: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de098) {
            ctx->pc = 0x3DDC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ddc10;
        }
    }
    ctx->pc = 0x3DE0A0u;
label_3de0a0:
    // 0x3de0a0: 0x8eb10004  lw          $s1, 0x4($s5)
    ctx->pc = 0x3de0a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3de0a4:
    // 0x3de0a4: 0x241e0009  addiu       $fp, $zero, 0x9
    ctx->pc = 0x3de0a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3de0a8:
    // 0x3de0a8: 0xaea00014  sw          $zero, 0x14($s5)
    ctx->pc = 0x3de0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 0));
label_3de0ac:
    // 0x3de0ac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3de0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3de0b0:
    // 0x3de0b0: 0x112942  srl         $a1, $s1, 5
    ctx->pc = 0x3de0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
label_3de0b4:
    // 0x3de0b4: 0x8ea6000c  lw          $a2, 0xC($s5)
    ctx->pc = 0x3de0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_3de0b8:
    // 0x3de0b8: 0x8eab0028  lw          $t3, 0x28($s5)
    ctx->pc = 0x3de0b8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_3de0bc:
    // 0x3de0bc: 0x3224001f  andi        $a0, $s1, 0x1F
    ctx->pc = 0x3de0bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)31);
label_3de0c0:
    // 0x3de0c0: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x3de0c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
label_3de0c4:
    // 0x3de0c4: 0x24840101  addiu       $a0, $a0, 0x101
    ctx->pc = 0x3de0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 257));
label_3de0c8:
    // 0x3de0c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3de0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3de0cc:
    // 0x3de0cc: 0x7fac0030  sq          $t4, 0x30($sp)
    ctx->pc = 0x3de0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
label_3de0d0:
    // 0x3de0d0: 0xafbe0020  sw          $fp, 0x20($sp)
    ctx->pc = 0x3de0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 30));
label_3de0d4:
    // 0x3de0d4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x3de0d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3de0d8:
    // 0x3de0d8: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x3de0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_3de0dc:
    // 0x3de0dc: 0x27a80024  addiu       $t0, $sp, 0x24
    ctx->pc = 0x3de0dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_3de0e0:
    // 0x3de0e0: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x3de0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_3de0e4:
    // 0x3de0e4: 0x27a90028  addiu       $t1, $sp, 0x28
    ctx->pc = 0x3de0e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_3de0e8:
    // 0x3de0e8: 0xc0f7c80  jal         func_3DF200
label_3de0ec:
    if (ctx->pc == 0x3DE0ECu) {
        ctx->pc = 0x3DE0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE0E8u;
        // 0x3de0ec: 0x27aa002c  addiu       $t2, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE0F0u;
        goto label_3de0f0;
    }
    ctx->pc = 0x3DE0E8u;
    SET_GPR_U32(ctx, 31, 0x3DE0F0u);
    ctx->pc = 0x3DE0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE0E8u;
    // 0x3de0ec: 0x27aa002c  addiu       $t2, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF200u, 0x3DE0E8u, 0x3DE0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE0F0u;
label_3de0f0:
    // 0x3de0f0: 0x8ec3002c  lw          $v1, 0x2C($s6)
    ctx->pc = 0x3de0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
label_3de0f4:
    // 0x3de0f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3de0f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de0f8:
    // 0x3de0f8: 0x8ec40030  lw          $a0, 0x30($s6)
    ctx->pc = 0x3de0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
label_3de0fc:
    // 0x3de0fc: 0x60f809  jalr        $v1
label_3de100:
    if (ctx->pc == 0x3DE100u) {
        ctx->pc = 0x3DE100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE0FCu;
        // 0x3de100: 0x8ea5000c  lw          $a1, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE104u;
        goto label_3de104;
    }
    ctx->pc = 0x3DE0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3DE104u);
        ctx->pc = 0x3DE100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE0FCu;
        // 0x3de100: 0x8ea5000c  lw          $a1, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE0FCu, 0x3DE104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DE104u;
label_3de104:
    // 0x3de104: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_3de108:
    if (ctx->pc == 0x3DE108u) {
        ctx->pc = 0x3DE108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE104u;
        // 0x3de108: 0x7bac0030  lq          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE10Cu;
        goto label_3de10c;
    }
    ctx->pc = 0x3DE104u;
    {
        const bool branch_taken_0x3de104 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE104u;
        // 0x3de108: 0x7bac0030  lq          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de104) {
            ctx->pc = 0x3DE138u;
            goto label_3de138;
        }
    }
    ctx->pc = 0x3DE10Cu;
label_3de10c:
    // 0x3de10c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3de10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3de110:
    // 0x3de110: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x3de110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_3de114:
    // 0x3de114: 0x52220001  beql        $s1, $v0, . + 4 + (0x1 << 2)
label_3de118:
    if (ctx->pc == 0x3DE118u) {
        ctx->pc = 0x3DE118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE114u;
        // 0x3de118: 0xaebe0000  sw          $fp, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE11Cu;
        goto label_3de11c;
    }
    ctx->pc = 0x3DE114u;
    {
        const bool branch_taken_0x3de114 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3de114) {
            ctx->pc = 0x3DE118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DE114u;
            // 0x3de118: 0xaebe0000  sw          $fp, 0x0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DE11Cu;
            goto label_3de11c;
        }
    }
    ctx->pc = 0x3DE11Cu;
label_3de11c:
    // 0x3de11c: 0xfeb20020  sd          $s2, 0x20($s5)
    ctx->pc = 0x3de11cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 18));
label_3de120:
    // 0x3de120: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3de120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3de124:
    // 0x3de124: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3de124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3de128:
    // 0x3de128: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3de128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3de12c:
    // 0x3de12c: 0xdec30008  ld          $v1, 0x8($s6)
    ctx->pc = 0x3de12cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 8)));
label_3de130:
    // 0x3de130: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_3de134:
    if (ctx->pc == 0x3DE134u) {
        ctx->pc = 0x3DE134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE130u;
        // 0x3de134: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE138u;
        goto label_3de138;
    }
    ctx->pc = 0x3DE130u;
    {
        const bool branch_taken_0x3de130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE130u;
        // 0x3de134: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de130) {
            ctx->pc = 0x3DE410u;
            goto label_3de410;
        }
    }
    ctx->pc = 0x3DE138u;
label_3de138:
    // 0x3de138: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3de138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3de13c:
    // 0x3de13c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x3de13cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3de140:
    // 0x3de140: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x3de140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3de144:
    // 0x3de144: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x3de144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3de148:
    // 0x3de148: 0x8fa7002c  lw          $a3, 0x2C($sp)
    ctx->pc = 0x3de148u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3de14c:
    // 0x3de14c: 0xc0f802c  jal         func_3E00B0
label_3de150:
    if (ctx->pc == 0x3DE150u) {
        ctx->pc = 0x3DE150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE14Cu;
        // 0x3de150: 0x7fac0030  sq          $t4, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE154u;
        goto label_3de154;
    }
    ctx->pc = 0x3DE14Cu;
    SET_GPR_U32(ctx, 31, 0x3DE154u);
    ctx->pc = 0x3DE150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE14Cu;
    // 0x3de150: 0x7fac0030  sq          $t4, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E00B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E00B0u, 0x3DE14Cu, 0x3DE154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE154u;
label_3de154:
    // 0x3de154: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3de158:
    if (ctx->pc == 0x3DE158u) {
        ctx->pc = 0x3DE158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE154u;
        // 0x3de158: 0x7bac0030  lq          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE15Cu;
        goto label_3de15c;
    }
    ctx->pc = 0x3DE154u;
    {
        const bool branch_taken_0x3de154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DE158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE154u;
        // 0x3de158: 0x7bac0030  lq          $t4, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de154) {
            ctx->pc = 0x3DE178u;
            goto label_3de178;
        }
    }
    ctx->pc = 0x3DE15Cu;
label_3de15c:
    // 0x3de15c: 0xfeb20020  sd          $s2, 0x20($s5)
    ctx->pc = 0x3de15cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 18));
label_3de160:
    // 0x3de160: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3de160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3de164:
    // 0x3de164: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3de164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3de168:
    // 0x3de168: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3de168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3de16c:
    // 0x3de16c: 0xdec30008  ld          $v1, 0x8($s6)
    ctx->pc = 0x3de16cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 8)));
label_3de170:
    // 0x3de170: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_3de174:
    if (ctx->pc == 0x3DE174u) {
        ctx->pc = 0x3DE174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE170u;
        // 0x3de174: 0x2406fffc  addiu       $a2, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE178u;
        goto label_3de178;
    }
    ctx->pc = 0x3DE170u;
    {
        const bool branch_taken_0x3de170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE170u;
        // 0x3de174: 0x2406fffc  addiu       $a2, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de170) {
            ctx->pc = 0x3DE410u;
            goto label_3de410;
        }
    }
    ctx->pc = 0x3DE178u;
label_3de178:
    // 0x3de178: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x3de178u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_3de17c:
    // 0x3de17c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3de17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3de180:
    // 0x3de180: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3de180u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_3de184:
    // 0x3de184: 0xfeb20020  sd          $s2, 0x20($s5)
    ctx->pc = 0x3de184u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 18));
label_3de188:
    // 0x3de188: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3de188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3de18c:
    // 0x3de18c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3de18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3de190:
    // 0x3de190: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3de190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3de194:
    // 0x3de194: 0xdec30008  ld          $v1, 0x8($s6)
    ctx->pc = 0x3de194u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 8)));
label_3de198:
    // 0x3de198: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3de198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3de19c:
    // 0x3de19c: 0xaeb0001c  sw          $s0, 0x1C($s5)
    ctx->pc = 0x3de19cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 16));
label_3de1a0:
    // 0x3de1a0: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x3de1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3de1a4:
    // 0x3de1a4: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x3de1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
label_3de1a8:
    // 0x3de1a8: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3de1a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_3de1ac:
    // 0x3de1ac: 0xaed30004  sw          $s3, 0x4($s6)
    ctx->pc = 0x3de1acu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 19));
label_3de1b0:
    // 0x3de1b0: 0xaeac0038  sw          $t4, 0x38($s5)
    ctx->pc = 0x3de1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 12));
label_3de1b4:
    // 0x3de1b4: 0xc0f7d08  jal         func_3DF420
label_3de1b8:
    if (ctx->pc == 0x3DE1B8u) {
        ctx->pc = 0x3DE1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE1B4u;
        // 0x3de1b8: 0xfec30008  sd          $v1, 0x8($s6) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE1BCu;
        goto label_3de1bc;
    }
    ctx->pc = 0x3DE1B4u;
    SET_GPR_U32(ctx, 31, 0x3DE1BCu);
    ctx->pc = 0x3DE1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE1B4u;
    // 0x3de1b8: 0xfec30008  sd          $v1, 0x8($s6) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF420u, 0x3DE1B4u, 0x3DE1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE1BCu;
label_3de1bc:
    // 0x3de1bc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3de1bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de1c0:
    // 0x3de1c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3de1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3de1c4:
    // 0x3de1c4: 0x12e20004  beq         $s7, $v0, . + 4 + (0x4 << 2)
label_3de1c8:
    if (ctx->pc == 0x3DE1C8u) {
        ctx->pc = 0x3DE1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE1C4u;
        // 0x3de1c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE1CCu;
        goto label_3de1cc;
    }
    ctx->pc = 0x3DE1C4u;
    {
        const bool branch_taken_0x3de1c4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DE1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE1C4u;
        // 0x3de1c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de1c4) {
            ctx->pc = 0x3DE1D8u;
            goto label_3de1d8;
        }
    }
    ctx->pc = 0x3DE1CCu;
label_3de1cc:
    // 0x3de1cc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3de1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3de1d0:
    // 0x3de1d0: 0x10000096  b           . + 4 + (0x96 << 2)
label_3de1d4:
    if (ctx->pc == 0x3DE1D4u) {
        ctx->pc = 0x3DE1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE1D0u;
        // 0x3de1d4: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE1D8u;
        goto label_3de1d8;
    }
    ctx->pc = 0x3DE1D0u;
    {
        const bool branch_taken_0x3de1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE1D0u;
        // 0x3de1d4: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de1d0) {
            ctx->pc = 0x3DE42Cu;
            goto label_3de42c;
        }
    }
    ctx->pc = 0x3DE1D8u;
label_3de1d8:
    // 0x3de1d8: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x3de1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3de1dc:
    // 0x3de1dc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3de1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3de1e0:
    // 0x3de1e0: 0xc0f804a  jal         func_3E0128
label_3de1e4:
    if (ctx->pc == 0x3DE1E4u) {
        ctx->pc = 0x3DE1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE1E0u;
        // 0x3de1e4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE1E8u;
        goto label_3de1e8;
    }
    ctx->pc = 0x3DE1E0u;
    SET_GPR_U32(ctx, 31, 0x3DE1E8u);
    ctx->pc = 0x3DE1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE1E0u;
    // 0x3de1e4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0128u, 0x3DE1E0u, 0x3DE1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE1E8u;
label_3de1e8:
    // 0x3de1e8: 0x8ea30034  lw          $v1, 0x34($s5)
    ctx->pc = 0x3de1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_3de1ec:
    // 0x3de1ec: 0x8eac0038  lw          $t4, 0x38($s5)
    ctx->pc = 0x3de1ecu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
label_3de1f0:
    // 0x3de1f0: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x3de1f0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3de1f4:
    // 0x3de1f4: 0x8ed30004  lw          $s3, 0x4($s6)
    ctx->pc = 0x3de1f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_3de1f8:
    // 0x3de1f8: 0x183102b  sltu        $v0, $t4, $v1
    ctx->pc = 0x3de1f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3de1fc:
    // 0x3de1fc: 0xdeb20020  ld          $s2, 0x20($s5)
    ctx->pc = 0x3de1fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 21), 32)));
label_3de200:
    // 0x3de200: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3de204:
    if (ctx->pc == 0x3DE204u) {
        ctx->pc = 0x3DE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE200u;
        // 0x3de204: 0x8eb0001c  lw          $s0, 0x1C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE208u;
        goto label_3de208;
    }
    ctx->pc = 0x3DE200u;
    {
        const bool branch_taken_0x3de200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE200u;
        // 0x3de204: 0x8eb0001c  lw          $s0, 0x1C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de200) {
            ctx->pc = 0x3DE214u;
            goto label_3de214;
        }
    }
    ctx->pc = 0x3DE208u;
label_3de208:
    // 0x3de208: 0x6c1023  subu        $v0, $v1, $t4
    ctx->pc = 0x3de208u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_3de20c:
    // 0x3de20c: 0x10000003  b           . + 4 + (0x3 << 2)
label_3de210:
    if (ctx->pc == 0x3DE210u) {
        ctx->pc = 0x3DE210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE20Cu;
        // 0x3de210: 0x245effff  addiu       $fp, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE214u;
        goto label_3de214;
    }
    ctx->pc = 0x3DE20Cu;
    {
        const bool branch_taken_0x3de20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE20Cu;
        // 0x3de210: 0x245effff  addiu       $fp, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de20c) {
            ctx->pc = 0x3DE21Cu;
            goto label_3de21c;
        }
    }
    ctx->pc = 0x3DE214u;
label_3de214:
    // 0x3de214: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x3de214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_3de218:
    // 0x3de218: 0x4cf023  subu        $fp, $v0, $t4
    ctx->pc = 0x3de218u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_3de21c:
    // 0x3de21c: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x3de21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_3de220:
    // 0x3de220: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3de224:
    if (ctx->pc == 0x3DE224u) {
        ctx->pc = 0x3DE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE220u;
        // 0x3de224: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE228u;
        goto label_3de228;
    }
    ctx->pc = 0x3DE220u;
    {
        const bool branch_taken_0x3de220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE220u;
        // 0x3de224: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de220) {
            ctx->pc = 0x3DE230u;
            goto label_3de230;
        }
    }
    ctx->pc = 0x3DE228u;
label_3de228:
    // 0x3de228: 0x1000fbdf  b           . + 4 + (-0x421 << 2)
label_3de22c:
    if (ctx->pc == 0x3DE22Cu) {
        ctx->pc = 0x3DE22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE228u;
        // 0x3de22c: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE230u;
        goto label_3de230;
    }
    ctx->pc = 0x3DE228u;
    {
        const bool branch_taken_0x3de228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE228u;
        // 0x3de22c: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de228) {
            ctx->pc = 0x3DD1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dd1a8;
        }
    }
    ctx->pc = 0x3DE230u;
label_3de230:
    // 0x3de230: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3de230u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_3de234:
    // 0x3de234: 0xaeac0038  sw          $t4, 0x38($s5)
    ctx->pc = 0x3de234u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 12));
label_3de238:
    // 0x3de238: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3de238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3de23c:
    // 0x3de23c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3de23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3de240:
    // 0x3de240: 0xc0f8054  jal         func_3E0150
label_3de244:
    if (ctx->pc == 0x3DE244u) {
        ctx->pc = 0x3DE244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE240u;
        // 0x3de244: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE248u;
        goto label_3de248;
    }
    ctx->pc = 0x3DE240u;
    SET_GPR_U32(ctx, 31, 0x3DE248u);
    ctx->pc = 0x3DE244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE240u;
    // 0x3de244: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0150u, 0x3DE240u, 0x3DE248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE248u;
label_3de248:
    // 0x3de248: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3de248u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de24c:
    // 0x3de24c: 0x8eac0038  lw          $t4, 0x38($s5)
    ctx->pc = 0x3de24cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
label_3de250:
    // 0x3de250: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x3de250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_3de254:
    // 0x3de254: 0x182102b  sltu        $v0, $t4, $v0
    ctx->pc = 0x3de254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3de258:
    // 0x3de258: 0x8ea30034  lw          $v1, 0x34($s5)
    ctx->pc = 0x3de258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_3de25c:
    // 0x3de25c: 0x8ea20038  lw          $v0, 0x38($s5)
    ctx->pc = 0x3de25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
label_3de260:
    // 0x3de260: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_3de264:
    if (ctx->pc == 0x3DE264u) {
        ctx->pc = 0x3DE264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE260u;
        // 0x3de264: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE268u;
        goto label_3de268;
    }
    ctx->pc = 0x3DE260u;
    {
        const bool branch_taken_0x3de260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DE264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE260u;
        // 0x3de264: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de260) {
            ctx->pc = 0x3DE280u;
            goto label_3de280;
        }
    }
    ctx->pc = 0x3DE268u;
label_3de268:
    // 0x3de268: 0xfeb20020  sd          $s2, 0x20($s5)
    ctx->pc = 0x3de268u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 18));
label_3de26c:
    // 0x3de26c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3de26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3de270:
    // 0x3de270: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3de270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3de274:
    // 0x3de274: 0xdec30008  ld          $v1, 0x8($s6)
    ctx->pc = 0x3de274u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 8)));
label_3de278:
    // 0x3de278: 0x10000065  b           . + 4 + (0x65 << 2)
label_3de27c:
    if (ctx->pc == 0x3DE27Cu) {
        ctx->pc = 0x3DE27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE278u;
        // 0x3de27c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE280u;
        goto label_3de280;
    }
    ctx->pc = 0x3DE278u;
    {
        const bool branch_taken_0x3de278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE278u;
        // 0x3de27c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de278) {
            ctx->pc = 0x3DE410u;
            goto label_3de410;
        }
    }
    ctx->pc = 0x3DE280u;
label_3de280:
    // 0x3de280: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3de280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3de284:
    // 0x3de284: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3de284u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_3de288:
    // 0x3de288: 0xfeb20020  sd          $s2, 0x20($s5)
    ctx->pc = 0x3de288u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 18));
label_3de28c:
    // 0x3de28c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3de28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3de290:
    // 0x3de290: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3de290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3de294:
    // 0x3de294: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3de294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3de298:
    // 0x3de298: 0xdec30008  ld          $v1, 0x8($s6)
    ctx->pc = 0x3de298u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 8)));
label_3de29c:
    // 0x3de29c: 0x1000005c  b           . + 4 + (0x5C << 2)
label_3de2a0:
    if (ctx->pc == 0x3DE2A0u) {
        ctx->pc = 0x3DE2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE29Cu;
        // 0x3de2a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE2A4u;
        goto label_3de2a4;
    }
    ctx->pc = 0x3DE29Cu;
    {
        const bool branch_taken_0x3de29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE29Cu;
        // 0x3de2a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de29c) {
            ctx->pc = 0x3DE410u;
            goto label_3de410;
        }
    }
    ctx->pc = 0x3DE2A4u;
label_3de2a4:
    // 0x3de2a4: 0xfeb20020  sd          $s2, 0x20($s5)
    ctx->pc = 0x3de2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 18));
label_3de2a8:
    // 0x3de2a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3de2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3de2ac:
    // 0x3de2ac: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3de2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3de2b0:
    // 0x3de2b0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3de2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3de2b4:
    // 0x3de2b4: 0xdec30008  ld          $v1, 0x8($s6)
    ctx->pc = 0x3de2b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 8)));
label_3de2b8:
    // 0x3de2b8: 0x10000055  b           . + 4 + (0x55 << 2)
label_3de2bc:
    if (ctx->pc == 0x3DE2BCu) {
        ctx->pc = 0x3DE2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE2B8u;
        // 0x3de2bc: 0x2406fffd  addiu       $a2, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE2C0u;
        goto label_3de2c0;
    }
    ctx->pc = 0x3DE2B8u;
    {
        const bool branch_taken_0x3de2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE2B8u;
        // 0x3de2bc: 0x2406fffd  addiu       $a2, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de2b8) {
            ctx->pc = 0x3DE410u;
            goto label_3de410;
        }
    }
    ctx->pc = 0x3DE2C0u;
label_3de2c0:
    // 0x3de2c0: 0xfeb20020  sd          $s2, 0x20($s5)
    ctx->pc = 0x3de2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 18));
label_3de2c4:
    // 0x3de2c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3de2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3de2c8:
    // 0x3de2c8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3de2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3de2cc:
    // 0x3de2cc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3de2ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3de2d0:
    // 0x3de2d0: 0xdec30008  ld          $v1, 0x8($s6)
    ctx->pc = 0x3de2d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 8)));
label_3de2d4:
    // 0x3de2d4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3de2d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3de2d8:
    // 0x3de2d8: 0xaeb0001c  sw          $s0, 0x1C($s5)
    ctx->pc = 0x3de2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 16));
label_3de2dc:
    // 0x3de2dc: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x3de2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3de2e0:
    // 0x3de2e0: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x3de2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
label_3de2e4:
    // 0x3de2e4: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3de2e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_3de2e8:
    // 0x3de2e8: 0xaeac0038  sw          $t4, 0x38($s5)
    ctx->pc = 0x3de2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 12));
label_3de2ec:
    // 0x3de2ec: 0x1000004e  b           . + 4 + (0x4E << 2)
label_3de2f0:
    if (ctx->pc == 0x3DE2F0u) {
        ctx->pc = 0x3DE2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE2ECu;
        // 0x3de2f0: 0xaec00004  sw          $zero, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE2F4u;
        goto label_3de2f4;
    }
    ctx->pc = 0x3DE2ECu;
    {
        const bool branch_taken_0x3de2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE2ECu;
        // 0x3de2f0: 0xaec00004  sw          $zero, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de2ec) {
            ctx->pc = 0x3DE428u;
            goto label_3de428;
        }
    }
    ctx->pc = 0x3DE2F4u;
label_3de2f4:
    // 0x3de2f4: 0xfeb20020  sd          $s2, 0x20($s5)
    ctx->pc = 0x3de2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 18));
label_3de2f8:
    // 0x3de2f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3de2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3de2fc:
    // 0x3de2fc: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3de2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3de300:
    // 0x3de300: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3de300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3de304:
    // 0x3de304: 0xdec30008  ld          $v1, 0x8($s6)
    ctx->pc = 0x3de304u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 8)));
label_3de308:
    // 0x3de308: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3de308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3de30c:
    // 0x3de30c: 0xaeb0001c  sw          $s0, 0x1C($s5)
    ctx->pc = 0x3de30cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 16));
label_3de310:
    // 0x3de310: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x3de310u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3de314:
    // 0x3de314: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x3de314u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
label_3de318:
    // 0x3de318: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3de318u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_3de31c:
    // 0x3de31c: 0xaeac0038  sw          $t4, 0x38($s5)
    ctx->pc = 0x3de31cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 12));
label_3de320:
    // 0x3de320: 0x10000041  b           . + 4 + (0x41 << 2)
label_3de324:
    if (ctx->pc == 0x3DE324u) {
        ctx->pc = 0x3DE324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE320u;
        // 0x3de324: 0xaec00004  sw          $zero, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE328u;
        goto label_3de328;
    }
    ctx->pc = 0x3DE320u;
    {
        const bool branch_taken_0x3de320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE320u;
        // 0x3de324: 0xaec00004  sw          $zero, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de320) {
            ctx->pc = 0x3DE428u;
            goto label_3de428;
        }
    }
    ctx->pc = 0x3DE328u;
label_3de328:
    // 0x3de328: 0xfeb20020  sd          $s2, 0x20($s5)
    ctx->pc = 0x3de328u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 18));
label_3de32c:
    // 0x3de32c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3de32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3de330:
    // 0x3de330: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3de330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3de334:
    // 0x3de334: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3de334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3de338:
    // 0x3de338: 0xdec30008  ld          $v1, 0x8($s6)
    ctx->pc = 0x3de338u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 8)));
label_3de33c:
    // 0x3de33c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3de33cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3de340:
    // 0x3de340: 0xaeb0001c  sw          $s0, 0x1C($s5)
    ctx->pc = 0x3de340u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 16));
label_3de344:
    // 0x3de344: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x3de344u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3de348:
    // 0x3de348: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x3de348u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
label_3de34c:
    // 0x3de34c: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3de34cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_3de350:
    // 0x3de350: 0xaeac0038  sw          $t4, 0x38($s5)
    ctx->pc = 0x3de350u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 12));
label_3de354:
    // 0x3de354: 0x10000034  b           . + 4 + (0x34 << 2)
label_3de358:
    if (ctx->pc == 0x3DE358u) {
        ctx->pc = 0x3DE358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE354u;
        // 0x3de358: 0xaec00004  sw          $zero, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE35Cu;
        goto label_3de35c;
    }
    ctx->pc = 0x3DE354u;
    {
        const bool branch_taken_0x3de354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE354u;
        // 0x3de358: 0xaec00004  sw          $zero, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de354) {
            ctx->pc = 0x3DE428u;
            goto label_3de428;
        }
    }
    ctx->pc = 0x3DE35Cu;
label_3de35c:
    // 0x3de35c: 0xfeb20020  sd          $s2, 0x20($s5)
    ctx->pc = 0x3de35cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 18));
label_3de360:
    // 0x3de360: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3de360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3de364:
    // 0x3de364: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3de364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3de368:
    // 0x3de368: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3de368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3de36c:
    // 0x3de36c: 0xdec30008  ld          $v1, 0x8($s6)
    ctx->pc = 0x3de36cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 8)));
label_3de370:
    // 0x3de370: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3de370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3de374:
    // 0x3de374: 0xaeb0001c  sw          $s0, 0x1C($s5)
    ctx->pc = 0x3de374u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 16));
label_3de378:
    // 0x3de378: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x3de378u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3de37c:
    // 0x3de37c: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x3de37cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
label_3de380:
    // 0x3de380: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3de380u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_3de384:
    // 0x3de384: 0xaeac0038  sw          $t4, 0x38($s5)
    ctx->pc = 0x3de384u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 12));
label_3de388:
    // 0x3de388: 0x10000027  b           . + 4 + (0x27 << 2)
label_3de38c:
    if (ctx->pc == 0x3DE38Cu) {
        ctx->pc = 0x3DE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE388u;
        // 0x3de38c: 0xaec00004  sw          $zero, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE390u;
        goto label_3de390;
    }
    ctx->pc = 0x3DE388u;
    {
        const bool branch_taken_0x3de388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE388u;
        // 0x3de38c: 0xaec00004  sw          $zero, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de388) {
            ctx->pc = 0x3DE428u;
            goto label_3de428;
        }
    }
    ctx->pc = 0x3DE390u;
label_3de390:
    // 0x3de390: 0xfeb20020  sd          $s2, 0x20($s5)
    ctx->pc = 0x3de390u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 18));
label_3de394:
    // 0x3de394: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3de394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3de398:
    // 0x3de398: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3de398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3de39c:
    // 0x3de39c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3de39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3de3a0:
    // 0x3de3a0: 0xdec30008  ld          $v1, 0x8($s6)
    ctx->pc = 0x3de3a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 8)));
label_3de3a4:
    // 0x3de3a4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3de3a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3de3a8:
    // 0x3de3a8: 0xaeb0001c  sw          $s0, 0x1C($s5)
    ctx->pc = 0x3de3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 16));
label_3de3ac:
    // 0x3de3ac: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x3de3acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3de3b0:
    // 0x3de3b0: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x3de3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
label_3de3b4:
    // 0x3de3b4: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3de3b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_3de3b8:
    // 0x3de3b8: 0xaeac0038  sw          $t4, 0x38($s5)
    ctx->pc = 0x3de3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 12));
label_3de3bc:
    // 0x3de3bc: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3de3c0:
    if (ctx->pc == 0x3DE3C0u) {
        ctx->pc = 0x3DE3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE3BCu;
        // 0x3de3c0: 0xaec00004  sw          $zero, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE3C4u;
        goto label_3de3c4;
    }
    ctx->pc = 0x3DE3BCu;
    {
        const bool branch_taken_0x3de3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE3BCu;
        // 0x3de3c0: 0xaec00004  sw          $zero, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de3bc) {
            ctx->pc = 0x3DE428u;
            goto label_3de428;
        }
    }
    ctx->pc = 0x3DE3C4u;
label_3de3c4:
    // 0x3de3c4: 0xfeb20020  sd          $s2, 0x20($s5)
    ctx->pc = 0x3de3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 18));
label_3de3c8:
    // 0x3de3c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3de3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3de3cc:
    // 0x3de3cc: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3de3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3de3d0:
    // 0x3de3d0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3de3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3de3d4:
    // 0x3de3d4: 0xdec30008  ld          $v1, 0x8($s6)
    ctx->pc = 0x3de3d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 8)));
label_3de3d8:
    // 0x3de3d8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3de3d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3de3dc:
    // 0x3de3dc: 0xaeb0001c  sw          $s0, 0x1C($s5)
    ctx->pc = 0x3de3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 16));
label_3de3e0:
    // 0x3de3e0: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x3de3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3de3e4:
    // 0x3de3e4: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x3de3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
label_3de3e8:
    // 0x3de3e8: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3de3e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_3de3ec:
    // 0x3de3ec: 0xaeac0038  sw          $t4, 0x38($s5)
    ctx->pc = 0x3de3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 12));
label_3de3f0:
    // 0x3de3f0: 0x1000000d  b           . + 4 + (0xD << 2)
label_3de3f4:
    if (ctx->pc == 0x3DE3F4u) {
        ctx->pc = 0x3DE3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE3F0u;
        // 0x3de3f4: 0xaec00004  sw          $zero, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE3F8u;
        goto label_3de3f8;
    }
    ctx->pc = 0x3DE3F0u;
    {
        const bool branch_taken_0x3de3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE3F0u;
        // 0x3de3f4: 0xaec00004  sw          $zero, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de3f0) {
            ctx->pc = 0x3DE428u;
            goto label_3de428;
        }
    }
    ctx->pc = 0x3DE3F8u;
label_3de3f8:
    // 0x3de3f8: 0xfeb20020  sd          $s2, 0x20($s5)
    ctx->pc = 0x3de3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 18));
label_3de3fc:
    // 0x3de3fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3de3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3de400:
    // 0x3de400: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3de400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3de404:
    // 0x3de404: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3de404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3de408:
    // 0x3de408: 0xdec30008  ld          $v1, 0x8($s6)
    ctx->pc = 0x3de408u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 8)));
label_3de40c:
    // 0x3de40c: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x3de40cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3de410:
    // 0x3de410: 0xaeb0001c  sw          $s0, 0x1C($s5)
    ctx->pc = 0x3de410u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 16));
label_3de414:
    // 0x3de414: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x3de414u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3de418:
    // 0x3de418: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x3de418u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
label_3de41c:
    // 0x3de41c: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3de41cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_3de420:
    // 0x3de420: 0xaed30004  sw          $s3, 0x4($s6)
    ctx->pc = 0x3de420u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 19));
label_3de424:
    // 0x3de424: 0xaeac0038  sw          $t4, 0x38($s5)
    ctx->pc = 0x3de424u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 12));
label_3de428:
    // 0x3de428: 0xfec30008  sd          $v1, 0x8($s6)
    ctx->pc = 0x3de428u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 3));
label_3de42c:
    // 0x3de42c: 0xc0f8054  jal         func_3E0150
label_3de430:
    if (ctx->pc == 0x3DE430u) {
        ctx->pc = 0x3DE434u;
        goto label_3de434;
    }
    ctx->pc = 0x3DE42Cu;
    SET_GPR_U32(ctx, 31, 0x3DE434u);
    ctx->pc = 0x3E0150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0150u, 0x3DE42Cu, 0x3DE434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE434u;
label_3de434:
    // 0x3de434: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3de434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3de438:
    // 0x3de438: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3de438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3de43c:
    // 0x3de43c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3de43cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3de440:
    // 0x3de440: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3de440u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3de444:
    // 0x3de444: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3de444u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3de448:
    // 0x3de448: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x3de448u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3de44c:
    // 0x3de44c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3de44cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3de450:
    // 0x3de450: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3de450u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3de454:
    // 0x3de454: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x3de454u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3de458:
    // 0x3de458: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3de458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3de45c:
    // 0x3de45c: 0x3e00008  jr          $ra
label_3de460:
    if (ctx->pc == 0x3DE460u) {
        ctx->pc = 0x3DE460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE45Cu;
        // 0x3de460: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE464u;
        goto label_3de464;
    }
    ctx->pc = 0x3DE45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE45Cu;
        // 0x3de460: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DE464u;
label_3de464:
    // 0x3de464: 0x0  nop
    ctx->pc = 0x3de464u;
    // NOP
    ctx->pc = 0x3de468u;
}
