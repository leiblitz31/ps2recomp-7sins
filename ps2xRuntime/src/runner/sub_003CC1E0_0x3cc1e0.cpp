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

// Function: sub_003CC1E0
// Address: 0x3cc1e0 - 0x3cc8a8
void sub_003CC1E0_0x3cc1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CC1E0_0x3cc1e0");
#endif

    switch (ctx->pc) {
        case 0x3cc1e0u: goto label_3cc1e0;
        case 0x3cc1e4u: goto label_3cc1e4;
        case 0x3cc1e8u: goto label_3cc1e8;
        case 0x3cc1ecu: goto label_3cc1ec;
        case 0x3cc1f0u: goto label_3cc1f0;
        case 0x3cc1f4u: goto label_3cc1f4;
        case 0x3cc1f8u: goto label_3cc1f8;
        case 0x3cc1fcu: goto label_3cc1fc;
        case 0x3cc200u: goto label_3cc200;
        case 0x3cc204u: goto label_3cc204;
        case 0x3cc208u: goto label_3cc208;
        case 0x3cc20cu: goto label_3cc20c;
        case 0x3cc210u: goto label_3cc210;
        case 0x3cc214u: goto label_3cc214;
        case 0x3cc218u: goto label_3cc218;
        case 0x3cc21cu: goto label_3cc21c;
        case 0x3cc220u: goto label_3cc220;
        case 0x3cc224u: goto label_3cc224;
        case 0x3cc228u: goto label_3cc228;
        case 0x3cc22cu: goto label_3cc22c;
        case 0x3cc230u: goto label_3cc230;
        case 0x3cc234u: goto label_3cc234;
        case 0x3cc238u: goto label_3cc238;
        case 0x3cc23cu: goto label_3cc23c;
        case 0x3cc240u: goto label_3cc240;
        case 0x3cc244u: goto label_3cc244;
        case 0x3cc248u: goto label_3cc248;
        case 0x3cc24cu: goto label_3cc24c;
        case 0x3cc250u: goto label_3cc250;
        case 0x3cc254u: goto label_3cc254;
        case 0x3cc258u: goto label_3cc258;
        case 0x3cc25cu: goto label_3cc25c;
        case 0x3cc260u: goto label_3cc260;
        case 0x3cc264u: goto label_3cc264;
        case 0x3cc268u: goto label_3cc268;
        case 0x3cc26cu: goto label_3cc26c;
        case 0x3cc270u: goto label_3cc270;
        case 0x3cc274u: goto label_3cc274;
        case 0x3cc278u: goto label_3cc278;
        case 0x3cc27cu: goto label_3cc27c;
        case 0x3cc280u: goto label_3cc280;
        case 0x3cc284u: goto label_3cc284;
        case 0x3cc288u: goto label_3cc288;
        case 0x3cc28cu: goto label_3cc28c;
        case 0x3cc290u: goto label_3cc290;
        case 0x3cc294u: goto label_3cc294;
        case 0x3cc298u: goto label_3cc298;
        case 0x3cc29cu: goto label_3cc29c;
        case 0x3cc2a0u: goto label_3cc2a0;
        case 0x3cc2a4u: goto label_3cc2a4;
        case 0x3cc2a8u: goto label_3cc2a8;
        case 0x3cc2acu: goto label_3cc2ac;
        case 0x3cc2b0u: goto label_3cc2b0;
        case 0x3cc2b4u: goto label_3cc2b4;
        case 0x3cc2b8u: goto label_3cc2b8;
        case 0x3cc2bcu: goto label_3cc2bc;
        case 0x3cc2c0u: goto label_3cc2c0;
        case 0x3cc2c4u: goto label_3cc2c4;
        case 0x3cc2c8u: goto label_3cc2c8;
        case 0x3cc2ccu: goto label_3cc2cc;
        case 0x3cc2d0u: goto label_3cc2d0;
        case 0x3cc2d4u: goto label_3cc2d4;
        case 0x3cc2d8u: goto label_3cc2d8;
        case 0x3cc2dcu: goto label_3cc2dc;
        case 0x3cc2e0u: goto label_3cc2e0;
        case 0x3cc2e4u: goto label_3cc2e4;
        case 0x3cc2e8u: goto label_3cc2e8;
        case 0x3cc2ecu: goto label_3cc2ec;
        case 0x3cc2f0u: goto label_3cc2f0;
        case 0x3cc2f4u: goto label_3cc2f4;
        case 0x3cc2f8u: goto label_3cc2f8;
        case 0x3cc2fcu: goto label_3cc2fc;
        case 0x3cc300u: goto label_3cc300;
        case 0x3cc304u: goto label_3cc304;
        case 0x3cc308u: goto label_3cc308;
        case 0x3cc30cu: goto label_3cc30c;
        case 0x3cc310u: goto label_3cc310;
        case 0x3cc314u: goto label_3cc314;
        case 0x3cc318u: goto label_3cc318;
        case 0x3cc31cu: goto label_3cc31c;
        case 0x3cc320u: goto label_3cc320;
        case 0x3cc324u: goto label_3cc324;
        case 0x3cc328u: goto label_3cc328;
        case 0x3cc32cu: goto label_3cc32c;
        case 0x3cc330u: goto label_3cc330;
        case 0x3cc334u: goto label_3cc334;
        case 0x3cc338u: goto label_3cc338;
        case 0x3cc33cu: goto label_3cc33c;
        case 0x3cc340u: goto label_3cc340;
        case 0x3cc344u: goto label_3cc344;
        case 0x3cc348u: goto label_3cc348;
        case 0x3cc34cu: goto label_3cc34c;
        case 0x3cc350u: goto label_3cc350;
        case 0x3cc354u: goto label_3cc354;
        case 0x3cc358u: goto label_3cc358;
        case 0x3cc35cu: goto label_3cc35c;
        case 0x3cc360u: goto label_3cc360;
        case 0x3cc364u: goto label_3cc364;
        case 0x3cc368u: goto label_3cc368;
        case 0x3cc36cu: goto label_3cc36c;
        case 0x3cc370u: goto label_3cc370;
        case 0x3cc374u: goto label_3cc374;
        case 0x3cc378u: goto label_3cc378;
        case 0x3cc37cu: goto label_3cc37c;
        case 0x3cc380u: goto label_3cc380;
        case 0x3cc384u: goto label_3cc384;
        case 0x3cc388u: goto label_3cc388;
        case 0x3cc38cu: goto label_3cc38c;
        case 0x3cc390u: goto label_3cc390;
        case 0x3cc394u: goto label_3cc394;
        case 0x3cc398u: goto label_3cc398;
        case 0x3cc39cu: goto label_3cc39c;
        case 0x3cc3a0u: goto label_3cc3a0;
        case 0x3cc3a4u: goto label_3cc3a4;
        case 0x3cc3a8u: goto label_3cc3a8;
        case 0x3cc3acu: goto label_3cc3ac;
        case 0x3cc3b0u: goto label_3cc3b0;
        case 0x3cc3b4u: goto label_3cc3b4;
        case 0x3cc3b8u: goto label_3cc3b8;
        case 0x3cc3bcu: goto label_3cc3bc;
        case 0x3cc3c0u: goto label_3cc3c0;
        case 0x3cc3c4u: goto label_3cc3c4;
        case 0x3cc3c8u: goto label_3cc3c8;
        case 0x3cc3ccu: goto label_3cc3cc;
        case 0x3cc3d0u: goto label_3cc3d0;
        case 0x3cc3d4u: goto label_3cc3d4;
        case 0x3cc3d8u: goto label_3cc3d8;
        case 0x3cc3dcu: goto label_3cc3dc;
        case 0x3cc3e0u: goto label_3cc3e0;
        case 0x3cc3e4u: goto label_3cc3e4;
        case 0x3cc3e8u: goto label_3cc3e8;
        case 0x3cc3ecu: goto label_3cc3ec;
        case 0x3cc3f0u: goto label_3cc3f0;
        case 0x3cc3f4u: goto label_3cc3f4;
        case 0x3cc3f8u: goto label_3cc3f8;
        case 0x3cc3fcu: goto label_3cc3fc;
        case 0x3cc400u: goto label_3cc400;
        case 0x3cc404u: goto label_3cc404;
        case 0x3cc408u: goto label_3cc408;
        case 0x3cc40cu: goto label_3cc40c;
        case 0x3cc410u: goto label_3cc410;
        case 0x3cc414u: goto label_3cc414;
        case 0x3cc418u: goto label_3cc418;
        case 0x3cc41cu: goto label_3cc41c;
        case 0x3cc420u: goto label_3cc420;
        case 0x3cc424u: goto label_3cc424;
        case 0x3cc428u: goto label_3cc428;
        case 0x3cc42cu: goto label_3cc42c;
        case 0x3cc430u: goto label_3cc430;
        case 0x3cc434u: goto label_3cc434;
        case 0x3cc438u: goto label_3cc438;
        case 0x3cc43cu: goto label_3cc43c;
        case 0x3cc440u: goto label_3cc440;
        case 0x3cc444u: goto label_3cc444;
        case 0x3cc448u: goto label_3cc448;
        case 0x3cc44cu: goto label_3cc44c;
        case 0x3cc450u: goto label_3cc450;
        case 0x3cc454u: goto label_3cc454;
        case 0x3cc458u: goto label_3cc458;
        case 0x3cc45cu: goto label_3cc45c;
        case 0x3cc460u: goto label_3cc460;
        case 0x3cc464u: goto label_3cc464;
        case 0x3cc468u: goto label_3cc468;
        case 0x3cc46cu: goto label_3cc46c;
        case 0x3cc470u: goto label_3cc470;
        case 0x3cc474u: goto label_3cc474;
        case 0x3cc478u: goto label_3cc478;
        case 0x3cc47cu: goto label_3cc47c;
        case 0x3cc480u: goto label_3cc480;
        case 0x3cc484u: goto label_3cc484;
        case 0x3cc488u: goto label_3cc488;
        case 0x3cc48cu: goto label_3cc48c;
        case 0x3cc490u: goto label_3cc490;
        case 0x3cc494u: goto label_3cc494;
        case 0x3cc498u: goto label_3cc498;
        case 0x3cc49cu: goto label_3cc49c;
        case 0x3cc4a0u: goto label_3cc4a0;
        case 0x3cc4a4u: goto label_3cc4a4;
        case 0x3cc4a8u: goto label_3cc4a8;
        case 0x3cc4acu: goto label_3cc4ac;
        case 0x3cc4b0u: goto label_3cc4b0;
        case 0x3cc4b4u: goto label_3cc4b4;
        case 0x3cc4b8u: goto label_3cc4b8;
        case 0x3cc4bcu: goto label_3cc4bc;
        case 0x3cc4c0u: goto label_3cc4c0;
        case 0x3cc4c4u: goto label_3cc4c4;
        case 0x3cc4c8u: goto label_3cc4c8;
        case 0x3cc4ccu: goto label_3cc4cc;
        case 0x3cc4d0u: goto label_3cc4d0;
        case 0x3cc4d4u: goto label_3cc4d4;
        case 0x3cc4d8u: goto label_3cc4d8;
        case 0x3cc4dcu: goto label_3cc4dc;
        case 0x3cc4e0u: goto label_3cc4e0;
        case 0x3cc4e4u: goto label_3cc4e4;
        case 0x3cc4e8u: goto label_3cc4e8;
        case 0x3cc4ecu: goto label_3cc4ec;
        case 0x3cc4f0u: goto label_3cc4f0;
        case 0x3cc4f4u: goto label_3cc4f4;
        case 0x3cc4f8u: goto label_3cc4f8;
        case 0x3cc4fcu: goto label_3cc4fc;
        case 0x3cc500u: goto label_3cc500;
        case 0x3cc504u: goto label_3cc504;
        case 0x3cc508u: goto label_3cc508;
        case 0x3cc50cu: goto label_3cc50c;
        case 0x3cc510u: goto label_3cc510;
        case 0x3cc514u: goto label_3cc514;
        case 0x3cc518u: goto label_3cc518;
        case 0x3cc51cu: goto label_3cc51c;
        case 0x3cc520u: goto label_3cc520;
        case 0x3cc524u: goto label_3cc524;
        case 0x3cc528u: goto label_3cc528;
        case 0x3cc52cu: goto label_3cc52c;
        case 0x3cc530u: goto label_3cc530;
        case 0x3cc534u: goto label_3cc534;
        case 0x3cc538u: goto label_3cc538;
        case 0x3cc53cu: goto label_3cc53c;
        case 0x3cc540u: goto label_3cc540;
        case 0x3cc544u: goto label_3cc544;
        case 0x3cc548u: goto label_3cc548;
        case 0x3cc54cu: goto label_3cc54c;
        case 0x3cc550u: goto label_3cc550;
        case 0x3cc554u: goto label_3cc554;
        case 0x3cc558u: goto label_3cc558;
        case 0x3cc55cu: goto label_3cc55c;
        case 0x3cc560u: goto label_3cc560;
        case 0x3cc564u: goto label_3cc564;
        case 0x3cc568u: goto label_3cc568;
        case 0x3cc56cu: goto label_3cc56c;
        case 0x3cc570u: goto label_3cc570;
        case 0x3cc574u: goto label_3cc574;
        case 0x3cc578u: goto label_3cc578;
        case 0x3cc57cu: goto label_3cc57c;
        case 0x3cc580u: goto label_3cc580;
        case 0x3cc584u: goto label_3cc584;
        case 0x3cc588u: goto label_3cc588;
        case 0x3cc58cu: goto label_3cc58c;
        case 0x3cc590u: goto label_3cc590;
        case 0x3cc594u: goto label_3cc594;
        case 0x3cc598u: goto label_3cc598;
        case 0x3cc59cu: goto label_3cc59c;
        case 0x3cc5a0u: goto label_3cc5a0;
        case 0x3cc5a4u: goto label_3cc5a4;
        case 0x3cc5a8u: goto label_3cc5a8;
        case 0x3cc5acu: goto label_3cc5ac;
        case 0x3cc5b0u: goto label_3cc5b0;
        case 0x3cc5b4u: goto label_3cc5b4;
        case 0x3cc5b8u: goto label_3cc5b8;
        case 0x3cc5bcu: goto label_3cc5bc;
        case 0x3cc5c0u: goto label_3cc5c0;
        case 0x3cc5c4u: goto label_3cc5c4;
        case 0x3cc5c8u: goto label_3cc5c8;
        case 0x3cc5ccu: goto label_3cc5cc;
        case 0x3cc5d0u: goto label_3cc5d0;
        case 0x3cc5d4u: goto label_3cc5d4;
        case 0x3cc5d8u: goto label_3cc5d8;
        case 0x3cc5dcu: goto label_3cc5dc;
        case 0x3cc5e0u: goto label_3cc5e0;
        case 0x3cc5e4u: goto label_3cc5e4;
        case 0x3cc5e8u: goto label_3cc5e8;
        case 0x3cc5ecu: goto label_3cc5ec;
        case 0x3cc5f0u: goto label_3cc5f0;
        case 0x3cc5f4u: goto label_3cc5f4;
        case 0x3cc5f8u: goto label_3cc5f8;
        case 0x3cc5fcu: goto label_3cc5fc;
        case 0x3cc600u: goto label_3cc600;
        case 0x3cc604u: goto label_3cc604;
        case 0x3cc608u: goto label_3cc608;
        case 0x3cc60cu: goto label_3cc60c;
        case 0x3cc610u: goto label_3cc610;
        case 0x3cc614u: goto label_3cc614;
        case 0x3cc618u: goto label_3cc618;
        case 0x3cc61cu: goto label_3cc61c;
        case 0x3cc620u: goto label_3cc620;
        case 0x3cc624u: goto label_3cc624;
        case 0x3cc628u: goto label_3cc628;
        case 0x3cc62cu: goto label_3cc62c;
        case 0x3cc630u: goto label_3cc630;
        case 0x3cc634u: goto label_3cc634;
        case 0x3cc638u: goto label_3cc638;
        case 0x3cc63cu: goto label_3cc63c;
        case 0x3cc640u: goto label_3cc640;
        case 0x3cc644u: goto label_3cc644;
        case 0x3cc648u: goto label_3cc648;
        case 0x3cc64cu: goto label_3cc64c;
        case 0x3cc650u: goto label_3cc650;
        case 0x3cc654u: goto label_3cc654;
        case 0x3cc658u: goto label_3cc658;
        case 0x3cc65cu: goto label_3cc65c;
        case 0x3cc660u: goto label_3cc660;
        case 0x3cc664u: goto label_3cc664;
        case 0x3cc668u: goto label_3cc668;
        case 0x3cc66cu: goto label_3cc66c;
        case 0x3cc670u: goto label_3cc670;
        case 0x3cc674u: goto label_3cc674;
        case 0x3cc678u: goto label_3cc678;
        case 0x3cc67cu: goto label_3cc67c;
        case 0x3cc680u: goto label_3cc680;
        case 0x3cc684u: goto label_3cc684;
        case 0x3cc688u: goto label_3cc688;
        case 0x3cc68cu: goto label_3cc68c;
        case 0x3cc690u: goto label_3cc690;
        case 0x3cc694u: goto label_3cc694;
        case 0x3cc698u: goto label_3cc698;
        case 0x3cc69cu: goto label_3cc69c;
        case 0x3cc6a0u: goto label_3cc6a0;
        case 0x3cc6a4u: goto label_3cc6a4;
        case 0x3cc6a8u: goto label_3cc6a8;
        case 0x3cc6acu: goto label_3cc6ac;
        case 0x3cc6b0u: goto label_3cc6b0;
        case 0x3cc6b4u: goto label_3cc6b4;
        case 0x3cc6b8u: goto label_3cc6b8;
        case 0x3cc6bcu: goto label_3cc6bc;
        case 0x3cc6c0u: goto label_3cc6c0;
        case 0x3cc6c4u: goto label_3cc6c4;
        case 0x3cc6c8u: goto label_3cc6c8;
        case 0x3cc6ccu: goto label_3cc6cc;
        case 0x3cc6d0u: goto label_3cc6d0;
        case 0x3cc6d4u: goto label_3cc6d4;
        case 0x3cc6d8u: goto label_3cc6d8;
        case 0x3cc6dcu: goto label_3cc6dc;
        case 0x3cc6e0u: goto label_3cc6e0;
        case 0x3cc6e4u: goto label_3cc6e4;
        case 0x3cc6e8u: goto label_3cc6e8;
        case 0x3cc6ecu: goto label_3cc6ec;
        case 0x3cc6f0u: goto label_3cc6f0;
        case 0x3cc6f4u: goto label_3cc6f4;
        case 0x3cc6f8u: goto label_3cc6f8;
        case 0x3cc6fcu: goto label_3cc6fc;
        case 0x3cc700u: goto label_3cc700;
        case 0x3cc704u: goto label_3cc704;
        case 0x3cc708u: goto label_3cc708;
        case 0x3cc70cu: goto label_3cc70c;
        case 0x3cc710u: goto label_3cc710;
        case 0x3cc714u: goto label_3cc714;
        case 0x3cc718u: goto label_3cc718;
        case 0x3cc71cu: goto label_3cc71c;
        case 0x3cc720u: goto label_3cc720;
        case 0x3cc724u: goto label_3cc724;
        case 0x3cc728u: goto label_3cc728;
        case 0x3cc72cu: goto label_3cc72c;
        case 0x3cc730u: goto label_3cc730;
        case 0x3cc734u: goto label_3cc734;
        case 0x3cc738u: goto label_3cc738;
        case 0x3cc73cu: goto label_3cc73c;
        case 0x3cc740u: goto label_3cc740;
        case 0x3cc744u: goto label_3cc744;
        case 0x3cc748u: goto label_3cc748;
        case 0x3cc74cu: goto label_3cc74c;
        case 0x3cc750u: goto label_3cc750;
        case 0x3cc754u: goto label_3cc754;
        case 0x3cc758u: goto label_3cc758;
        case 0x3cc75cu: goto label_3cc75c;
        case 0x3cc760u: goto label_3cc760;
        case 0x3cc764u: goto label_3cc764;
        case 0x3cc768u: goto label_3cc768;
        case 0x3cc76cu: goto label_3cc76c;
        case 0x3cc770u: goto label_3cc770;
        case 0x3cc774u: goto label_3cc774;
        case 0x3cc778u: goto label_3cc778;
        case 0x3cc77cu: goto label_3cc77c;
        case 0x3cc780u: goto label_3cc780;
        case 0x3cc784u: goto label_3cc784;
        case 0x3cc788u: goto label_3cc788;
        case 0x3cc78cu: goto label_3cc78c;
        case 0x3cc790u: goto label_3cc790;
        case 0x3cc794u: goto label_3cc794;
        case 0x3cc798u: goto label_3cc798;
        case 0x3cc79cu: goto label_3cc79c;
        case 0x3cc7a0u: goto label_3cc7a0;
        case 0x3cc7a4u: goto label_3cc7a4;
        case 0x3cc7a8u: goto label_3cc7a8;
        case 0x3cc7acu: goto label_3cc7ac;
        case 0x3cc7b0u: goto label_3cc7b0;
        case 0x3cc7b4u: goto label_3cc7b4;
        case 0x3cc7b8u: goto label_3cc7b8;
        case 0x3cc7bcu: goto label_3cc7bc;
        case 0x3cc7c0u: goto label_3cc7c0;
        case 0x3cc7c4u: goto label_3cc7c4;
        case 0x3cc7c8u: goto label_3cc7c8;
        case 0x3cc7ccu: goto label_3cc7cc;
        case 0x3cc7d0u: goto label_3cc7d0;
        case 0x3cc7d4u: goto label_3cc7d4;
        case 0x3cc7d8u: goto label_3cc7d8;
        case 0x3cc7dcu: goto label_3cc7dc;
        case 0x3cc7e0u: goto label_3cc7e0;
        case 0x3cc7e4u: goto label_3cc7e4;
        case 0x3cc7e8u: goto label_3cc7e8;
        case 0x3cc7ecu: goto label_3cc7ec;
        case 0x3cc7f0u: goto label_3cc7f0;
        case 0x3cc7f4u: goto label_3cc7f4;
        case 0x3cc7f8u: goto label_3cc7f8;
        case 0x3cc7fcu: goto label_3cc7fc;
        case 0x3cc800u: goto label_3cc800;
        case 0x3cc804u: goto label_3cc804;
        case 0x3cc808u: goto label_3cc808;
        case 0x3cc80cu: goto label_3cc80c;
        case 0x3cc810u: goto label_3cc810;
        case 0x3cc814u: goto label_3cc814;
        case 0x3cc818u: goto label_3cc818;
        case 0x3cc81cu: goto label_3cc81c;
        case 0x3cc820u: goto label_3cc820;
        case 0x3cc824u: goto label_3cc824;
        case 0x3cc828u: goto label_3cc828;
        case 0x3cc82cu: goto label_3cc82c;
        case 0x3cc830u: goto label_3cc830;
        case 0x3cc834u: goto label_3cc834;
        case 0x3cc838u: goto label_3cc838;
        case 0x3cc83cu: goto label_3cc83c;
        case 0x3cc840u: goto label_3cc840;
        case 0x3cc844u: goto label_3cc844;
        case 0x3cc848u: goto label_3cc848;
        case 0x3cc84cu: goto label_3cc84c;
        case 0x3cc850u: goto label_3cc850;
        case 0x3cc854u: goto label_3cc854;
        case 0x3cc858u: goto label_3cc858;
        case 0x3cc85cu: goto label_3cc85c;
        case 0x3cc860u: goto label_3cc860;
        case 0x3cc864u: goto label_3cc864;
        case 0x3cc868u: goto label_3cc868;
        case 0x3cc86cu: goto label_3cc86c;
        case 0x3cc870u: goto label_3cc870;
        case 0x3cc874u: goto label_3cc874;
        case 0x3cc878u: goto label_3cc878;
        case 0x3cc87cu: goto label_3cc87c;
        case 0x3cc880u: goto label_3cc880;
        case 0x3cc884u: goto label_3cc884;
        case 0x3cc888u: goto label_3cc888;
        case 0x3cc88cu: goto label_3cc88c;
        case 0x3cc890u: goto label_3cc890;
        case 0x3cc894u: goto label_3cc894;
        case 0x3cc898u: goto label_3cc898;
        case 0x3cc89cu: goto label_3cc89c;
        case 0x3cc8a0u: goto label_3cc8a0;
        case 0x3cc8a4u: goto label_3cc8a4;
        default: break;
    }

    ctx->pc = 0x3cc1e0u;

label_3cc1e0:
    // 0x3cc1e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3cc1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3cc1e4:
    // 0x3cc1e4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3cc1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3cc1e8:
    // 0x3cc1e8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3cc1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3cc1ec:
    // 0x3cc1ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3cc1ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3cc1f0:
    // 0x3cc1f0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3cc1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3cc1f4:
    // 0x3cc1f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3cc1f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3cc1f8:
    // 0x3cc1f8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3cc1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3cc1fc:
    // 0x3cc1fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3cc1fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cc200:
    // 0x3cc200: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3cc200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3cc204:
    // 0x3cc204: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3cc204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cc208:
    // 0x3cc208: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3cc208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_3cc20c:
    // 0x3cc20c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3cc20cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3cc210:
    // 0x3cc210: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x3cc210u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_3cc214:
    // 0x3cc214: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3cc214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cc218:
    // 0x3cc218: 0xc0bb7e6  jal         func_2EDF98
label_3cc21c:
    if (ctx->pc == 0x3CC21Cu) {
        ctx->pc = 0x3CC21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC218u;
        // 0x3cc21c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC220u;
        goto label_3cc220;
    }
    ctx->pc = 0x3CC218u;
    SET_GPR_U32(ctx, 31, 0x3CC220u);
    ctx->pc = 0x3CC21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC218u;
    // 0x3cc21c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3CC218u, 0x3CC220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC220u;
label_3cc220:
    // 0x3cc220: 0xc0f537a  jal         func_3D4DE8
label_3cc224:
    if (ctx->pc == 0x3CC224u) {
        ctx->pc = 0x3CC224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC220u;
        // 0x3cc224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC228u;
        goto label_3cc228;
    }
    ctx->pc = 0x3CC220u;
    SET_GPR_U32(ctx, 31, 0x3CC228u);
    ctx->pc = 0x3CC224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC220u;
    // 0x3cc224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4DE8u, 0x3CC220u, 0x3CC228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC228u;
label_3cc228:
    // 0x3cc228: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3cc228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3cc22c:
    // 0x3cc22c: 0x96240084  lhu         $a0, 0x84($s1)
    ctx->pc = 0x3cc22cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 132)));
label_3cc230:
    // 0x3cc230: 0x8c70b1ec  lw          $s0, -0x4E14($v1)
    ctx->pc = 0x3cc230u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947308)));
label_3cc234:
    // 0x3cc234: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x3cc234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3cc238:
    // 0x3cc238: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3cc238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3cc23c:
    // 0x3cc23c: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x3cc23cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_3cc240:
    // 0x3cc240: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x3cc240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_3cc244:
    // 0x3cc244: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x3cc244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
label_3cc248:
    // 0x3cc248: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x3cc248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_3cc24c:
    // 0x3cc24c: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x3cc24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_3cc250:
    // 0x3cc250: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x3cc250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
label_3cc254:
    // 0x3cc254: 0xc6240048  lwc1        $f4, 0x48($s1)
    ctx->pc = 0x3cc254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3cc258:
    // 0x3cc258: 0xc6280054  lwc1        $f8, 0x54($s1)
    ctx->pc = 0x3cc258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_3cc25c:
    // 0x3cc25c: 0xc625004c  lwc1        $f5, 0x4C($s1)
    ctx->pc = 0x3cc25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3cc260:
    // 0x3cc260: 0xc6270058  lwc1        $f7, 0x58($s1)
    ctx->pc = 0x3cc260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3cc264:
    // 0x3cc264: 0x46082080  add.s       $f2, $f4, $f8
    ctx->pc = 0x3cc264u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[8]);
label_3cc268:
    // 0x3cc268: 0xc6230050  lwc1        $f3, 0x50($s1)
    ctx->pc = 0x3cc268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cc26c:
    // 0x3cc26c: 0xc626005c  lwc1        $f6, 0x5C($s1)
    ctx->pc = 0x3cc26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3cc270:
    // 0x3cc270: 0x46072800  add.s       $f0, $f5, $f7
    ctx->pc = 0x3cc270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
label_3cc274:
    // 0x3cc274: 0x46061840  add.s       $f1, $f3, $f6
    ctx->pc = 0x3cc274u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
label_3cc278:
    // 0x3cc278: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3cc278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3cc27c:
    // 0x3cc27c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3cc27cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3cc280:
    // 0x3cc280: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x3cc280u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_3cc284:
    // 0x3cc284: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3cc284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3cc288:
    // 0x3cc288: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3cc288u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_3cc28c:
    // 0x3cc28c: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x3cc28cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3cc290:
    // 0x3cc290: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3cc290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3cc294:
    // 0x3cc294: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x3cc294u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3cc298:
    // 0x3cc298: 0x46082101  sub.s       $f4, $f4, $f8
    ctx->pc = 0x3cc298u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
label_3cc29c:
    // 0x3cc29c: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x3cc29cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
label_3cc2a0:
    // 0x3cc2a0: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x3cc2a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3cc2a4:
    // 0x3cc2a4: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x3cc2a4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
label_3cc2a8:
    // 0x3cc2a8: 0xe7a50054  swc1        $f5, 0x54($sp)
    ctx->pc = 0x3cc2a8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3cc2ac:
    // 0x3cc2ac: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x3cc2acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3cc2b0:
    // 0x3cc2b0: 0xc104d24  jal         func_413490
label_3cc2b4:
    if (ctx->pc == 0x3CC2B4u) {
        ctx->pc = 0x3CC2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC2B0u;
        // 0x3cc2b4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC2B8u;
        goto label_3cc2b8;
    }
    ctx->pc = 0x3CC2B0u;
    SET_GPR_U32(ctx, 31, 0x3CC2B8u);
    ctx->pc = 0x3CC2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC2B0u;
    // 0x3cc2b4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x3CC2B0u, 0x3CC2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC2B8u;
label_3cc2b8:
    // 0x3cc2b8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3cc2b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3cc2bc:
    // 0x3cc2bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3cc2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3cc2c0:
    // 0x3cc2c0: 0x96290080  lhu         $t1, 0x80($s1)
    ctx->pc = 0x3cc2c0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 128)));
label_3cc2c4:
    // 0x3cc2c4: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x3cc2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3cc2c8:
    // 0x3cc2c8: 0x96280082  lhu         $t0, 0x82($s1)
    ctx->pc = 0x3cc2c8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 130)));
label_3cc2cc:
    // 0x3cc2cc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3cc2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3cc2d0:
    // 0x3cc2d0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3cc2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3cc2d4:
    // 0x3cc2d4: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x3cc2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3cc2d8:
    // 0x3cc2d8: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x3cc2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3cc2dc:
    // 0x3cc2dc: 0x8e270030  lw          $a3, 0x30($s1)
    ctx->pc = 0x3cc2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3cc2e0:
    // 0x3cc2e0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3cc2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_3cc2e4:
    // 0x3cc2e4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x3cc2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_3cc2e8:
    // 0x3cc2e8: 0xafa9001c  sw          $t1, 0x1C($sp)
    ctx->pc = 0x3cc2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 9));
label_3cc2ec:
    // 0x3cc2ec: 0xafa80020  sw          $t0, 0x20($sp)
    ctx->pc = 0x3cc2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 8));
label_3cc2f0:
    // 0x3cc2f0: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x3cc2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
label_3cc2f4:
    // 0x3cc2f4: 0xafa5002c  sw          $a1, 0x2C($sp)
    ctx->pc = 0x3cc2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
label_3cc2f8:
    // 0x3cc2f8: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x3cc2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_3cc2fc:
    // 0x3cc2fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3cc300:
    if (ctx->pc == 0x3CC300u) {
        ctx->pc = 0x3CC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC2FCu;
        // 0x3cc300: 0xafa70034  sw          $a3, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC304u;
        goto label_3cc304;
    }
    ctx->pc = 0x3CC2FCu;
    {
        const bool branch_taken_0x3cc2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC2FCu;
        // 0x3cc300: 0xafa70034  sw          $a3, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc2fc) {
            ctx->pc = 0x3CC318u;
            goto label_3cc318;
        }
    }
    ctx->pc = 0x3CC304u;
label_3cc304:
    // 0x3cc304: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x3cc304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_3cc308:
    // 0x3cc308: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x3cc308u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_3cc30c:
    // 0x3cc30c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3cc30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3cc310:
    // 0x3cc310: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x3cc310u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
label_3cc314:
    // 0x3cc314: 0x0  nop
    ctx->pc = 0x3cc314u;
    // NOP
label_3cc318:
    // 0x3cc318: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3cc318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3cc31c:
    // 0x3cc31c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3cc31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_3cc320:
    // 0x3cc320: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_3cc324:
    if (ctx->pc == 0x3CC324u) {
        ctx->pc = 0x3CC324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC320u;
        // 0x3cc324: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC328u;
        goto label_3cc328;
    }
    ctx->pc = 0x3CC320u;
    {
        const bool branch_taken_0x3cc320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC320u;
        // 0x3cc324: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc320) {
            ctx->pc = 0x3CC3E8u;
            goto label_3cc3e8;
        }
    }
    ctx->pc = 0x3CC328u;
label_3cc328:
    // 0x3cc328: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3cc328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3cc32c:
    // 0x3cc32c: 0xc103642  jal         func_40D908
label_3cc330:
    if (ctx->pc == 0x3CC330u) {
        ctx->pc = 0x3CC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC32Cu;
        // 0x3cc330: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC334u;
        goto label_3cc334;
    }
    ctx->pc = 0x3CC32Cu;
    SET_GPR_U32(ctx, 31, 0x3CC334u);
    ctx->pc = 0x3CC330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC32Cu;
    // 0x3cc330: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3CC32Cu, 0x3CC334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC334u;
label_3cc334:
    // 0x3cc334: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3cc334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cc338:
    // 0x3cc338: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3cc338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3cc33c:
    // 0x3cc33c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3cc33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3cc340:
    // 0x3cc340: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x3cc340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_3cc344:
    // 0x3cc344: 0x2450e880  addiu       $s0, $v0, -0x1780
    ctx->pc = 0x3cc344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3cc348:
    // 0x3cc348: 0xac83b34c  sw          $v1, -0x4CB4($a0)
    ctx->pc = 0x3cc348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294947660), GPR_U32(ctx, 3));
label_3cc34c:
    // 0x3cc34c: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x3cc34cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_3cc350:
    // 0x3cc350: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3cc350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
label_3cc354:
    // 0x3cc354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cc354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cc358:
    // 0x3cc358: 0x24a5d4e0  addiu       $a1, $a1, -0x2B20
    ctx->pc = 0x3cc358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956256));
label_3cc35c:
    // 0x3cc35c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3cc35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3cc360:
    // 0x3cc360: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3cc360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cc364:
    // 0x3cc364: 0xc0e7126  jal         func_39C498
label_3cc368:
    if (ctx->pc == 0x3CC368u) {
        ctx->pc = 0x3CC368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC364u;
        // 0x3cc368: 0xa602000a  sh          $v0, 0xA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC36Cu;
        goto label_3cc36c;
    }
    ctx->pc = 0x3CC364u;
    SET_GPR_U32(ctx, 31, 0x3CC36Cu);
    ctx->pc = 0x3CC368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC364u;
    // 0x3cc368: 0xa602000a  sh          $v0, 0xA($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C498u, 0x3CC364u, 0x3CC36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC36Cu;
label_3cc36c:
    // 0x3cc36c: 0xc10376a  jal         func_40DDA8
label_3cc370:
    if (ctx->pc == 0x3CC370u) {
        ctx->pc = 0x3CC370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC36Cu;
        // 0x3cc370: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC374u;
        goto label_3cc374;
    }
    ctx->pc = 0x3CC36Cu;
    SET_GPR_U32(ctx, 31, 0x3CC374u);
    ctx->pc = 0x3CC370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC36Cu;
    // 0x3cc370: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3CC36Cu, 0x3CC374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC374u;
label_3cc374:
    // 0x3cc374: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3cc374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cc378:
    // 0x3cc378: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
label_3cc37c:
    if (ctx->pc == 0x3CC37Cu) {
        ctx->pc = 0x3CC37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC378u;
        // 0x3cc37c: 0xafa4003c  sw          $a0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC380u;
        goto label_3cc380;
    }
    ctx->pc = 0x3CC378u;
    {
        const bool branch_taken_0x3cc378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC378u;
        // 0x3cc37c: 0xafa4003c  sw          $a0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc378) {
            ctx->pc = 0x3CC3D8u;
            goto label_3cc3d8;
        }
    }
    ctx->pc = 0x3CC380u;
label_3cc380:
    // 0x3cc380: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x3cc380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_3cc384:
    // 0x3cc384: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cc384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3cc388:
    // 0x3cc388: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3cc388u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3cc38c:
    // 0x3cc38c: 0x40f809  jalr        $v0
label_3cc390:
    if (ctx->pc == 0x3CC390u) {
        ctx->pc = 0x3CC390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC38Cu;
        // 0x3cc390: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC394u;
        goto label_3cc394;
    }
    ctx->pc = 0x3CC38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CC394u);
        ctx->pc = 0x3CC390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC38Cu;
        // 0x3cc390: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC38Cu, 0x3CC394u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CC394u;
label_3cc394:
    // 0x3cc394: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3cc394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cc398:
    // 0x3cc398: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x3cc398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_3cc39c:
    // 0x3cc39c: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_3cc3a0:
    if (ctx->pc == 0x3CC3A0u) {
        ctx->pc = 0x3CC3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC39Cu;
        // 0x3cc3a0: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC3A4u;
        goto label_3cc3a4;
    }
    ctx->pc = 0x3CC39Cu;
    {
        const bool branch_taken_0x3cc39c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3CC3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC39Cu;
        // 0x3cc3a0: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc39c) {
            ctx->pc = 0x3CC3D8u;
            goto label_3cc3d8;
        }
    }
    ctx->pc = 0x3CC3A4u;
label_3cc3a4:
    // 0x3cc3a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3cc3a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cc3a8:
    // 0x3cc3a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3cc3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cc3ac:
    // 0x3cc3ac: 0xc1036da  jal         func_40DB68
label_3cc3b0:
    if (ctx->pc == 0x3CC3B0u) {
        ctx->pc = 0x3CC3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC3ACu;
        // 0x3cc3b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC3B4u;
        goto label_3cc3b4;
    }
    ctx->pc = 0x3CC3ACu;
    SET_GPR_U32(ctx, 31, 0x3CC3B4u);
    ctx->pc = 0x3CC3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC3ACu;
    // 0x3cc3b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3CC3ACu, 0x3CC3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC3B4u;
label_3cc3b4:
    // 0x3cc3b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3cc3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3cc3b8:
    // 0x3cc3b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3cc3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3cc3bc:
    // 0x3cc3bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3cc3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3cc3c0:
    // 0x3cc3c0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x3cc3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_3cc3c4:
    // 0x3cc3c4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3cc3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_3cc3c8:
    // 0x3cc3c8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3cc3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_3cc3cc:
    // 0x3cc3cc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3cc3ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3cc3d0:
    // 0x3cc3d0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3cc3d4:
    if (ctx->pc == 0x3CC3D4u) {
        ctx->pc = 0x3CC3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC3D0u;
        // 0x3cc3d4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC3D8u;
        goto label_3cc3d8;
    }
    ctx->pc = 0x3CC3D0u;
    {
        const bool branch_taken_0x3cc3d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CC3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC3D0u;
        // 0x3cc3d4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc3d0) {
            ctx->pc = 0x3CC3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cc3a8;
        }
    }
    ctx->pc = 0x3CC3D8u;
label_3cc3d8:
    // 0x3cc3d8: 0xc103684  jal         func_40DA10
label_3cc3dc:
    if (ctx->pc == 0x3CC3DCu) {
        ctx->pc = 0x3CC3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC3D8u;
        // 0x3cc3dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC3E0u;
        goto label_3cc3e0;
    }
    ctx->pc = 0x3CC3D8u;
    SET_GPR_U32(ctx, 31, 0x3CC3E0u);
    ctx->pc = 0x3CC3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC3D8u;
    // 0x3cc3dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3CC3D8u, 0x3CC3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC3E0u;
label_3cc3e0:
    // 0x3cc3e0: 0x10000004  b           . + 4 + (0x4 << 2)
label_3cc3e4:
    if (ctx->pc == 0x3CC3E4u) {
        ctx->pc = 0x3CC3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC3E0u;
        // 0x3cc3e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC3E8u;
        goto label_3cc3e8;
    }
    ctx->pc = 0x3CC3E0u;
    {
        const bool branch_taken_0x3cc3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC3E0u;
        // 0x3cc3e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc3e0) {
            ctx->pc = 0x3CC3F4u;
            goto label_3cc3f4;
        }
    }
    ctx->pc = 0x3CC3E8u;
label_3cc3e8:
    // 0x3cc3e8: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x3cc3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_3cc3ec:
    // 0x3cc3ec: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3cc3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3cc3f0:
    // 0x3cc3f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3cc3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cc3f4:
    // 0x3cc3f4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3cc3f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cc3f8:
    // 0x3cc3f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3cc3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cc3fc:
    // 0x3cc3fc: 0xc0f2974  jal         func_3CA5D0
label_3cc400:
    if (ctx->pc == 0x3CC400u) {
        ctx->pc = 0x3CC400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC3FCu;
        // 0x3cc400: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC404u;
        goto label_3cc404;
    }
    ctx->pc = 0x3CC3FCu;
    SET_GPR_U32(ctx, 31, 0x3CC404u);
    ctx->pc = 0x3CC400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC3FCu;
    // 0x3cc400: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA5D0u, 0x3CC3FCu, 0x3CC404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC404u;
label_3cc404:
    // 0x3cc404: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3cc404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3cc408:
    // 0x3cc408: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3cc40c:
    if (ctx->pc == 0x3CC40Cu) {
        ctx->pc = 0x3CC40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC408u;
        // 0x3cc40c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC410u;
        goto label_3cc410;
    }
    ctx->pc = 0x3CC408u;
    {
        const bool branch_taken_0x3cc408 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC408u;
        // 0x3cc40c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc408) {
            ctx->pc = 0x3CC420u;
            goto label_3cc420;
        }
    }
    ctx->pc = 0x3CC410u;
label_3cc410:
    // 0x3cc410: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3cc410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3cc414:
    // 0x3cc414: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x3cc414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_3cc418:
    // 0x3cc418: 0x40f809  jalr        $v0
label_3cc41c:
    if (ctx->pc == 0x3CC41Cu) {
        ctx->pc = 0x3CC420u;
        goto label_3cc420;
    }
    ctx->pc = 0x3CC418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CC420u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC418u, 0x3CC420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CC420u;
label_3cc420:
    // 0x3cc420: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3cc420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cc424:
    // 0x3cc424: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3cc424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3cc428:
    // 0x3cc428: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3cc428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3cc42c:
    // 0x3cc42c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3cc42cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3cc430:
    // 0x3cc430: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3cc430u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3cc434:
    // 0x3cc434: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3cc434u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cc438:
    // 0x3cc438: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3cc438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3cc43c:
    // 0x3cc43c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x3cc43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3cc440:
    // 0x3cc440: 0x3e00008  jr          $ra
label_3cc444:
    if (ctx->pc == 0x3CC444u) {
        ctx->pc = 0x3CC444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC440u;
        // 0x3cc444: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC448u;
        goto label_3cc448;
    }
    ctx->pc = 0x3CC440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC440u;
        // 0x3cc444: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CC448u;
label_3cc448:
    // 0x3cc448: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3cc448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_3cc44c:
    // 0x3cc44c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3cc44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_3cc450:
    // 0x3cc450: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x3cc450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_3cc454:
    // 0x3cc454: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x3cc454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_3cc458:
    // 0x3cc458: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x3cc458u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3cc45c:
    // 0x3cc45c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x3cc45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_3cc460:
    // 0x3cc460: 0x2448b298  addiu       $t0, $v0, -0x4D68
    ctx->pc = 0x3cc460u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947480));
label_3cc464:
    // 0x3cc464: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x3cc464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_3cc468:
    // 0x3cc468: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x3cc468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3cc46c:
    // 0x3cc46c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x3cc46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_3cc470:
    // 0x3cc470: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3cc470u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3cc474:
    // 0x3cc474: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x3cc474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_3cc478:
    // 0x3cc478: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x3cc478u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cc47c:
    // 0x3cc47c: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x3cc47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_3cc480:
    // 0x3cc480: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3cc480u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cc484:
    // 0x3cc484: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x3cc484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_3cc488:
    // 0x3cc488: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3cc488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3cc48c:
    // 0x3cc48c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3cc48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3cc490:
    // 0x3cc490: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3cc490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3cc494:
    // 0x3cc494: 0x8ea20048  lw          $v0, 0x48($s5)
    ctx->pc = 0x3cc494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
label_3cc498:
    // 0x3cc498: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x3cc498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
label_3cc49c:
    // 0x3cc49c: 0xafa60064  sw          $a2, 0x64($sp)
    ctx->pc = 0x3cc49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
label_3cc4a0:
    // 0x3cc4a0: 0xad0300ac  sw          $v1, 0xAC($t0)
    ctx->pc = 0x3cc4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 172), GPR_U32(ctx, 3));
label_3cc4a4:
    // 0x3cc4a4: 0xad1200b0  sw          $s2, 0xB0($t0)
    ctx->pc = 0x3cc4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 176), GPR_U32(ctx, 18));
label_3cc4a8:
    // 0x3cc4a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3cc4ac:
    if (ctx->pc == 0x3CC4ACu) {
        ctx->pc = 0x3CC4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC4A8u;
        // 0x3cc4ac: 0xad0200a4  sw          $v0, 0xA4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC4B0u;
        goto label_3cc4b0;
    }
    ctx->pc = 0x3CC4A8u;
    {
        const bool branch_taken_0x3cc4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CC4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC4A8u;
        // 0x3cc4ac: 0xad0200a4  sw          $v0, 0xA4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc4a8) {
            ctx->pc = 0x3CC4BCu;
            goto label_3cc4bc;
        }
    }
    ctx->pc = 0x3CC4B0u;
label_3cc4b0:
    // 0x3cc4b0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3cc4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_3cc4b4:
    // 0x3cc4b4: 0x2442d5d0  addiu       $v0, $v0, -0x2A30
    ctx->pc = 0x3cc4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956496));
label_3cc4b8:
    // 0x3cc4b8: 0xad0200a4  sw          $v0, 0xA4($t0)
    ctx->pc = 0x3cc4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 164), GPR_U32(ctx, 2));
label_3cc4bc:
    // 0x3cc4bc: 0x8ebe0044  lw          $fp, 0x44($s5)
    ctx->pc = 0x3cc4bcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_3cc4c0:
    // 0x3cc4c0: 0x17c00003  bnez        $fp, . + 4 + (0x3 << 2)
label_3cc4c4:
    if (ctx->pc == 0x3CC4C4u) {
        ctx->pc = 0x3CC4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC4C0u;
        // 0x3cc4c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC4C8u;
        goto label_3cc4c8;
    }
    ctx->pc = 0x3CC4C0u;
    {
        const bool branch_taken_0x3cc4c0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CC4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC4C0u;
        // 0x3cc4c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc4c0) {
            ctx->pc = 0x3CC4D0u;
            goto label_3cc4d0;
        }
    }
    ctx->pc = 0x3CC4C8u;
label_3cc4c8:
    // 0x3cc4c8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3cc4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_3cc4cc:
    // 0x3cc4cc: 0x245ec8a8  addiu       $fp, $v0, -0x3758
    ctx->pc = 0x3cc4ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953128));
label_3cc4d0:
    // 0x3cc4d0: 0xc10540a  jal         func_415028
label_3cc4d4:
    if (ctx->pc == 0x3CC4D4u) {
        ctx->pc = 0x3CC4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC4D0u;
        // 0x3cc4d4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC4D8u;
        goto label_3cc4d8;
    }
    ctx->pc = 0x3CC4D0u;
    SET_GPR_U32(ctx, 31, 0x3CC4D8u);
    ctx->pc = 0x3CC4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC4D0u;
    // 0x3cc4d4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415028u, 0x3CC4D0u, 0x3CC4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC4D8u;
label_3cc4d8:
    // 0x3cc4d8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3cc4d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cc4dc:
    // 0x3cc4dc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3cc4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3cc4e0:
    // 0x3cc4e0: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x3cc4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_3cc4e4:
    // 0x3cc4e4: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x3cc4e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_3cc4e8:
    // 0x3cc4e8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_3cc4ec:
    if (ctx->pc == 0x3CC4ECu) {
        ctx->pc = 0x3CC4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC4E8u;
        // 0x3cc4ec: 0x27b30050  addiu       $s3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC4F0u;
        goto label_3cc4f0;
    }
    ctx->pc = 0x3CC4E8u;
    {
        const bool branch_taken_0x3cc4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC4E8u;
        // 0x3cc4ec: 0x27b30050  addiu       $s3, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc4e8) {
            ctx->pc = 0x3CC5A8u;
            goto label_3cc5a8;
        }
    }
    ctx->pc = 0x3CC4F0u;
label_3cc4f0:
    // 0x3cc4f0: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x3cc4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3cc4f4:
    // 0x3cc4f4: 0x26f0000c  addiu       $s0, $s7, 0xC
    ctx->pc = 0x3cc4f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
label_3cc4f8:
    // 0x3cc4f8: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x3cc4f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_3cc4fc:
    // 0x3cc4fc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_3cc500:
    if (ctx->pc == 0x3CC500u) {
        ctx->pc = 0x3CC500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC4FCu;
        // 0x3cc500: 0x30630003  andi        $v1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC504u;
        goto label_3cc504;
    }
    ctx->pc = 0x3CC4FCu;
    {
        const bool branch_taken_0x3cc4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CC500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC4FCu;
        // 0x3cc500: 0x30630003  andi        $v1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc4fc) {
            ctx->pc = 0x3CC548u;
            goto label_3cc548;
        }
    }
    ctx->pc = 0x3CC504u;
label_3cc504:
    // 0x3cc504: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_3cc508:
    if (ctx->pc == 0x3CC508u) {
        ctx->pc = 0x3CC508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC504u;
        // 0x3cc508: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC50Cu;
        goto label_3cc50c;
    }
    ctx->pc = 0x3CC504u;
    {
        const bool branch_taken_0x3cc504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC504u;
        // 0x3cc508: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc504) {
            ctx->pc = 0x3CC56Cu;
            goto label_3cc56c;
        }
    }
    ctx->pc = 0x3CC50Cu;
label_3cc50c:
    // 0x3cc50c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3cc50cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3cc510:
    // 0x3cc510: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_3cc514:
    if (ctx->pc == 0x3CC514u) {
        ctx->pc = 0x3CC514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC510u;
        // 0x3cc514: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC518u;
        goto label_3cc518;
    }
    ctx->pc = 0x3CC510u;
    {
        const bool branch_taken_0x3cc510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CC514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC510u;
        // 0x3cc514: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc510) {
            ctx->pc = 0x3CC54Cu;
            goto label_3cc54c;
        }
    }
    ctx->pc = 0x3CC518u;
label_3cc518:
    // 0x3cc518: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3cc518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3cc51c:
    // 0x3cc51c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3cc520:
    if (ctx->pc == 0x3CC520u) {
        ctx->pc = 0x3CC524u;
        goto label_3cc524;
    }
    ctx->pc = 0x3CC51Cu;
    {
        const bool branch_taken_0x3cc51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cc51c) {
            ctx->pc = 0x3CC538u;
            goto label_3cc538;
        }
    }
    ctx->pc = 0x3CC524u;
label_3cc524:
    // 0x3cc524: 0xc105418  jal         func_415060
label_3cc528:
    if (ctx->pc == 0x3CC528u) {
        ctx->pc = 0x3CC528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC524u;
        // 0x3cc528: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC52Cu;
        goto label_3cc52c;
    }
    ctx->pc = 0x3CC524u;
    SET_GPR_U32(ctx, 31, 0x3CC52Cu);
    ctx->pc = 0x3CC528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC524u;
    // 0x3cc528: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415060u, 0x3CC524u, 0x3CC52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC52Cu;
label_3cc52c:
    // 0x3cc52c: 0x26f00018  addiu       $s0, $s7, 0x18
    ctx->pc = 0x3cc52cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
label_3cc530:
    // 0x3cc530: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x3cc530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3cc534:
    // 0x3cc534: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3cc534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cc538:
    // 0x3cc538: 0xc105418  jal         func_415060
label_3cc53c:
    if (ctx->pc == 0x3CC53Cu) {
        ctx->pc = 0x3CC53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC538u;
        // 0x3cc53c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC540u;
        goto label_3cc540;
    }
    ctx->pc = 0x3CC538u;
    SET_GPR_U32(ctx, 31, 0x3CC540u);
    ctx->pc = 0x3CC53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC538u;
    // 0x3cc53c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415060u, 0x3CC538u, 0x3CC540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC540u;
label_3cc540:
    // 0x3cc540: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x3cc540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_3cc544:
    // 0x3cc544: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3cc544u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3cc548:
    // 0x3cc548: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3cc548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cc54c:
    // 0x3cc54c: 0xc105418  jal         func_415060
label_3cc550:
    if (ctx->pc == 0x3CC550u) {
        ctx->pc = 0x3CC550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC54Cu;
        // 0x3cc550: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC554u;
        goto label_3cc554;
    }
    ctx->pc = 0x3CC54Cu;
    SET_GPR_U32(ctx, 31, 0x3CC554u);
    ctx->pc = 0x3CC550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC54Cu;
    // 0x3cc550: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415060u, 0x3CC54Cu, 0x3CC554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC554u;
label_3cc554:
    // 0x3cc554: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3cc554u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3cc558:
    // 0x3cc558: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x3cc558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_3cc55c:
    // 0x3cc55c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_3cc560:
    if (ctx->pc == 0x3CC560u) {
        ctx->pc = 0x3CC560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC55Cu;
        // 0x3cc560: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC564u;
        goto label_3cc564;
    }
    ctx->pc = 0x3CC55Cu;
    {
        const bool branch_taken_0x3cc55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC55Cu;
        // 0x3cc560: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc55c) {
            ctx->pc = 0x3CC5A8u;
            goto label_3cc5a8;
        }
    }
    ctx->pc = 0x3CC564u;
label_3cc564:
    // 0x3cc564: 0x0  nop
    ctx->pc = 0x3cc564u;
    // NOP
label_3cc568:
    // 0x3cc568: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3cc568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cc56c:
    // 0x3cc56c: 0xc105418  jal         func_415060
label_3cc570:
    if (ctx->pc == 0x3CC570u) {
        ctx->pc = 0x3CC570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC56Cu;
        // 0x3cc570: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC574u;
        goto label_3cc574;
    }
    ctx->pc = 0x3CC56Cu;
    SET_GPR_U32(ctx, 31, 0x3CC574u);
    ctx->pc = 0x3CC570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC56Cu;
    // 0x3cc570: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415060u, 0x3CC56Cu, 0x3CC574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC574u;
label_3cc574:
    // 0x3cc574: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3cc574u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3cc578:
    // 0x3cc578: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3cc578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cc57c:
    // 0x3cc57c: 0xc105418  jal         func_415060
label_3cc580:
    if (ctx->pc == 0x3CC580u) {
        ctx->pc = 0x3CC580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC57Cu;
        // 0x3cc580: 0x2605000c  addiu       $a1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC584u;
        goto label_3cc584;
    }
    ctx->pc = 0x3CC57Cu;
    SET_GPR_U32(ctx, 31, 0x3CC584u);
    ctx->pc = 0x3CC580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC57Cu;
    // 0x3cc580: 0x2605000c  addiu       $a1, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415060u, 0x3CC57Cu, 0x3CC584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC584u;
label_3cc584:
    // 0x3cc584: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3cc584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cc588:
    // 0x3cc588: 0xc105418  jal         func_415060
label_3cc58c:
    if (ctx->pc == 0x3CC58Cu) {
        ctx->pc = 0x3CC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC588u;
        // 0x3cc58c: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC590u;
        goto label_3cc590;
    }
    ctx->pc = 0x3CC588u;
    SET_GPR_U32(ctx, 31, 0x3CC590u);
    ctx->pc = 0x3CC58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC588u;
    // 0x3cc58c: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415060u, 0x3CC588u, 0x3CC590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC590u;
label_3cc590:
    // 0x3cc590: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x3cc590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_3cc594:
    // 0x3cc594: 0xc105418  jal         func_415060
label_3cc598:
    if (ctx->pc == 0x3CC598u) {
        ctx->pc = 0x3CC598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC594u;
        // 0x3cc598: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC59Cu;
        goto label_3cc59c;
    }
    ctx->pc = 0x3CC594u;
    SET_GPR_U32(ctx, 31, 0x3CC59Cu);
    ctx->pc = 0x3CC598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC594u;
    // 0x3cc598: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415060u, 0x3CC594u, 0x3CC59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC59Cu;
label_3cc59c:
    // 0x3cc59c: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x3cc59cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_3cc5a0:
    // 0x3cc5a0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_3cc5a4:
    if (ctx->pc == 0x3CC5A4u) {
        ctx->pc = 0x3CC5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC5A0u;
        // 0x3cc5a4: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC5A8u;
        goto label_3cc5a8;
    }
    ctx->pc = 0x3CC5A0u;
    {
        const bool branch_taken_0x3cc5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CC5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC5A0u;
        // 0x3cc5a4: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc5a0) {
            ctx->pc = 0x3CC568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cc568;
        }
    }
    ctx->pc = 0x3CC5A8u;
label_3cc5a8:
    // 0x3cc5a8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x3cc5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cc5ac:
    // 0x3cc5ac: 0xc7a6000c  lwc1        $f6, 0xC($sp)
    ctx->pc = 0x3cc5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3cc5b0:
    // 0x3cc5b0: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x3cc5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cc5b4:
    // 0x3cc5b4: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x3cc5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3cc5b8:
    // 0x3cc5b8: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x3cc5b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
label_3cc5bc:
    // 0x3cc5bc: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x3cc5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cc5c0:
    // 0x3cc5c0: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x3cc5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3cc5c4:
    // 0x3cc5c4: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x3cc5c4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
label_3cc5c8:
    // 0x3cc5c8: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x3cc5c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_3cc5cc:
    // 0x3cc5cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3cc5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3cc5d0:
    // 0x3cc5d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cc5d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cc5d4:
    // 0x3cc5d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3cc5d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cc5d8:
    // 0x3cc5d8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3cc5d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3cc5dc:
    // 0x3cc5dc: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3cc5dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3cc5e0:
    // 0x3cc5e0: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x3cc5e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3cc5e4:
    // 0x3cc5e4: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x3cc5e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3cc5e8:
    // 0x3cc5e8: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x3cc5e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3cc5ec:
    // 0x3cc5ec: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x3cc5ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
label_3cc5f0:
    // 0x3cc5f0: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x3cc5f0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
label_3cc5f4:
    // 0x3cc5f4: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x3cc5f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3cc5f8:
    // 0x3cc5f8: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3cc5f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_3cc5fc:
    // 0x3cc5fc: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x3cc5fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3cc600:
    // 0x3cc600: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x3cc600u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3cc604:
    // 0x3cc604: 0xc104d24  jal         func_413490
label_3cc608:
    if (ctx->pc == 0x3CC608u) {
        ctx->pc = 0x3CC608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC604u;
        // 0x3cc608: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC60Cu;
        goto label_3cc60c;
    }
    ctx->pc = 0x3CC604u;
    SET_GPR_U32(ctx, 31, 0x3CC60Cu);
    ctx->pc = 0x3CC608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC604u;
    // 0x3cc608: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x3CC604u, 0x3CC60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC60Cu;
label_3cc60c:
    // 0x3cc60c: 0x12400025  beqz        $s2, . + 4 + (0x25 << 2)
label_3cc610:
    if (ctx->pc == 0x3CC610u) {
        ctx->pc = 0x3CC610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC60Cu;
        // 0x3cc610: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC614u;
        goto label_3cc614;
    }
    ctx->pc = 0x3CC60Cu;
    {
        const bool branch_taken_0x3cc60c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC60Cu;
        // 0x3cc610: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc60c) {
            ctx->pc = 0x3CC6A4u;
            goto label_3cc6a4;
        }
    }
    ctx->pc = 0x3CC614u;
label_3cc614:
    // 0x3cc614: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x3cc614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3cc618:
    // 0x3cc618: 0xc0f287c  jal         func_3CA1F0
label_3cc61c:
    if (ctx->pc == 0x3CC61Cu) {
        ctx->pc = 0x3CC61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC618u;
        // 0x3cc61c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC620u;
        goto label_3cc620;
    }
    ctx->pc = 0x3CC618u;
    SET_GPR_U32(ctx, 31, 0x3CC620u);
    ctx->pc = 0x3CC61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC618u;
    // 0x3cc61c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA1F0u, 0x3CC618u, 0x3CC620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC620u;
label_3cc620:
    // 0x3cc620: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3cc620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_3cc624:
    // 0x3cc624: 0x2462b298  addiu       $v0, $v1, -0x4D68
    ctx->pc = 0x3cc624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947480));
label_3cc628:
    // 0x3cc628: 0x8c5300b0  lw          $s3, 0xB0($v0)
    ctx->pc = 0x3cc628u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_3cc62c:
    // 0x3cc62c: 0x1260001e  beqz        $s3, . + 4 + (0x1E << 2)
label_3cc630:
    if (ctx->pc == 0x3CC630u) {
        ctx->pc = 0x3CC630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC62Cu;
        // 0x3cc630: 0x3c060062  lui         $a2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC634u;
        goto label_3cc634;
    }
    ctx->pc = 0x3CC62Cu;
    {
        const bool branch_taken_0x3cc62c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC62Cu;
        // 0x3cc630: 0x3c060062  lui         $a2, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc62c) {
            ctx->pc = 0x3CC6A8u;
            goto label_3cc6a8;
        }
    }
    ctx->pc = 0x3CC634u;
label_3cc634:
    // 0x3cc634: 0x10000013  b           . + 4 + (0x13 << 2)
label_3cc638:
    if (ctx->pc == 0x3CC638u) {
        ctx->pc = 0x3CC638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC634u;
        // 0x3cc638: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC63Cu;
        goto label_3cc63c;
    }
    ctx->pc = 0x3CC634u;
    {
        const bool branch_taken_0x3cc634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC634u;
        // 0x3cc638: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc634) {
            ctx->pc = 0x3CC684u;
            goto label_3cc684;
        }
    }
    ctx->pc = 0x3CC63Cu;
label_3cc63c:
    // 0x3cc63c: 0x0  nop
    ctx->pc = 0x3cc63cu;
    // NOP
label_3cc640:
    // 0x3cc640: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3cc640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cc644:
    // 0x3cc644: 0xc1036da  jal         func_40DB68
label_3cc648:
    if (ctx->pc == 0x3CC648u) {
        ctx->pc = 0x3CC648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC644u;
        // 0x3cc648: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC64Cu;
        goto label_3cc64c;
    }
    ctx->pc = 0x3CC644u;
    SET_GPR_U32(ctx, 31, 0x3CC64Cu);
    ctx->pc = 0x3CC648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC644u;
    // 0x3cc648: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3CC644u, 0x3CC64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC64Cu;
label_3cc64c:
    // 0x3cc64c: 0x8c51001c  lw          $s1, 0x1C($v0)
    ctx->pc = 0x3cc64cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_3cc650:
    // 0x3cc650: 0x10000007  b           . + 4 + (0x7 << 2)
label_3cc654:
    if (ctx->pc == 0x3CC654u) {
        ctx->pc = 0x3CC654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC650u;
        // 0x3cc654: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC658u;
        goto label_3cc658;
    }
    ctx->pc = 0x3CC650u;
    {
        const bool branch_taken_0x3cc650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC650u;
        // 0x3cc654: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc650) {
            ctx->pc = 0x3CC670u;
            goto label_3cc670;
        }
    }
    ctx->pc = 0x3CC658u;
label_3cc658:
    // 0x3cc658: 0xc1036da  jal         func_40DB68
label_3cc65c:
    if (ctx->pc == 0x3CC65Cu) {
        ctx->pc = 0x3CC65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC658u;
        // 0x3cc65c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC660u;
        goto label_3cc660;
    }
    ctx->pc = 0x3CC658u;
    SET_GPR_U32(ctx, 31, 0x3CC660u);
    ctx->pc = 0x3CC65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC658u;
    // 0x3cc65c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3CC658u, 0x3CC660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC660u;
label_3cc660:
    // 0x3cc660: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3cc660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3cc664:
    // 0x3cc664: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x3cc664u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3cc668:
    // 0x3cc668: 0x3063fffe  andi        $v1, $v1, 0xFFFE
    ctx->pc = 0x3cc668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
label_3cc66c:
    // 0x3cc66c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x3cc66cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_3cc670:
    // 0x3cc670: 0xc10376a  jal         func_40DDA8
label_3cc674:
    if (ctx->pc == 0x3CC674u) {
        ctx->pc = 0x3CC674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC670u;
        // 0x3cc674: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC678u;
        goto label_3cc678;
    }
    ctx->pc = 0x3CC670u;
    SET_GPR_U32(ctx, 31, 0x3CC678u);
    ctx->pc = 0x3CC674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC670u;
    // 0x3cc674: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3CC670u, 0x3CC678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC678u;
label_3cc678:
    // 0x3cc678: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3cc678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3cc67c:
    // 0x3cc67c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3cc680:
    if (ctx->pc == 0x3CC680u) {
        ctx->pc = 0x3CC680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC67Cu;
        // 0x3cc680: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC684u;
        goto label_3cc684;
    }
    ctx->pc = 0x3CC67Cu;
    {
        const bool branch_taken_0x3cc67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CC680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC67Cu;
        // 0x3cc680: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc67c) {
            ctx->pc = 0x3CC658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cc658;
        }
    }
    ctx->pc = 0x3CC684u;
label_3cc684:
    // 0x3cc684: 0xc10376a  jal         func_40DDA8
label_3cc688:
    if (ctx->pc == 0x3CC688u) {
        ctx->pc = 0x3CC688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC684u;
        // 0x3cc688: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC68Cu;
        goto label_3cc68c;
    }
    ctx->pc = 0x3CC684u;
    SET_GPR_U32(ctx, 31, 0x3CC68Cu);
    ctx->pc = 0x3CC688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC684u;
    // 0x3cc688: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3CC684u, 0x3CC68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC68Cu;
label_3cc68c:
    // 0x3cc68c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3cc68cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3cc690:
    // 0x3cc690: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
label_3cc694:
    if (ctx->pc == 0x3CC694u) {
        ctx->pc = 0x3CC694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC690u;
        // 0x3cc694: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC698u;
        goto label_3cc698;
    }
    ctx->pc = 0x3CC690u;
    {
        const bool branch_taken_0x3cc690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cc690) {
            ctx->pc = 0x3CC694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CC690u;
            // 0x3cc694: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CC640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cc640;
        }
    }
    ctx->pc = 0x3CC698u;
label_3cc698:
    // 0x3cc698: 0x8e730008  lw          $s3, 0x8($s3)
    ctx->pc = 0x3cc698u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3cc69c:
    // 0x3cc69c: 0x1660fff9  bnez        $s3, . + 4 + (-0x7 << 2)
label_3cc6a0:
    if (ctx->pc == 0x3CC6A0u) {
        ctx->pc = 0x3CC6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC69Cu;
        // 0x3cc6a0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC6A4u;
        goto label_3cc6a4;
    }
    ctx->pc = 0x3CC69Cu;
    {
        const bool branch_taken_0x3cc69c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CC6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC69Cu;
        // 0x3cc6a0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc69c) {
            ctx->pc = 0x3CC684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cc684;
        }
    }
    ctx->pc = 0x3CC6A4u;
label_3cc6a4:
    // 0x3cc6a4: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x3cc6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_3cc6a8:
    // 0x3cc6a8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cc6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3cc6ac:
    // 0x3cc6ac: 0x24d0e880  addiu       $s0, $a2, -0x1780
    ctx->pc = 0x3cc6acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961280));
label_3cc6b0:
    // 0x3cc6b0: 0x34a50114  ori         $a1, $a1, 0x114
    ctx->pc = 0x3cc6b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
label_3cc6b4:
    // 0x3cc6b4: 0xc103642  jal         func_40D908
label_3cc6b8:
    if (ctx->pc == 0x3CC6B8u) {
        ctx->pc = 0x3CC6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC6B4u;
        // 0x3cc6b8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC6BCu;
        goto label_3cc6bc;
    }
    ctx->pc = 0x3CC6B4u;
    SET_GPR_U32(ctx, 31, 0x3CC6BCu);
    ctx->pc = 0x3CC6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC6B4u;
    // 0x3cc6b8: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3CC6B4u, 0x3CC6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC6BCu;
label_3cc6bc:
    // 0x3cc6bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3cc6bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cc6c0:
    // 0x3cc6c0: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x3cc6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3cc6c4:
    // 0x3cc6c4: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x3cc6c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_3cc6c8:
    // 0x3cc6c8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3cc6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3cc6cc:
    // 0x3cc6cc: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x3cc6ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_3cc6d0:
    // 0x3cc6d0: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x3cc6d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_3cc6d4:
    // 0x3cc6d4: 0x6ba8000f  ldl         $t0, 0xF($sp)
    ctx->pc = 0x3cc6d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_3cc6d8:
    // 0x3cc6d8: 0x6fa80008  ldr         $t0, 0x8($sp)
    ctx->pc = 0x3cc6d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_3cc6dc:
    // 0x3cc6dc: 0x6ba50017  ldl         $a1, 0x17($sp)
    ctx->pc = 0x3cc6dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_3cc6e0:
    // 0x3cc6e0: 0x6fa50010  ldr         $a1, 0x10($sp)
    ctx->pc = 0x3cc6e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3cc6e4:
    // 0x3cc6e4: 0xb3a70037  sdl         $a3, 0x37($sp)
    ctx->pc = 0x3cc6e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cc6e8:
    // 0x3cc6e8: 0xb7a70030  sdr         $a3, 0x30($sp)
    ctx->pc = 0x3cc6e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cc6ec:
    // 0x3cc6ec: 0xb3a8003f  sdl         $t0, 0x3F($sp)
    ctx->pc = 0x3cc6ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cc6f0:
    // 0x3cc6f0: 0xb7a80038  sdr         $t0, 0x38($sp)
    ctx->pc = 0x3cc6f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cc6f4:
    // 0x3cc6f4: 0xb3a50047  sdl         $a1, 0x47($sp)
    ctx->pc = 0x3cc6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cc6f8:
    // 0x3cc6f8: 0xb7a50040  sdr         $a1, 0x40($sp)
    ctx->pc = 0x3cc6f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cc6fc:
    // 0x3cc6fc: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x3cc6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
label_3cc700:
    // 0x3cc700: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3cc700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3cc704:
    // 0x3cc704: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x3cc704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_3cc708:
    // 0x3cc708: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x3cc708u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
label_3cc70c:
    // 0x3cc70c: 0x24c6d590  addiu       $a2, $a2, -0x2A70
    ctx->pc = 0x3cc70cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956432));
label_3cc710:
    // 0x3cc710: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3cc710u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cc714:
    // 0x3cc714: 0xc0c6b94  jal         func_31AE50
label_3cc718:
    if (ctx->pc == 0x3CC718u) {
        ctx->pc = 0x3CC718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC714u;
        // 0x3cc718: 0xa602000a  sh          $v0, 0xA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC71Cu;
        goto label_3cc71c;
    }
    ctx->pc = 0x3CC714u;
    SET_GPR_U32(ctx, 31, 0x3CC71Cu);
    ctx->pc = 0x3CC718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC714u;
    // 0x3cc718: 0xa602000a  sh          $v0, 0xA($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AE50u, 0x3CC714u, 0x3CC71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC71Cu;
label_3cc71c:
    // 0x3cc71c: 0xc10376a  jal         func_40DDA8
label_3cc720:
    if (ctx->pc == 0x3CC720u) {
        ctx->pc = 0x3CC720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC71Cu;
        // 0x3cc720: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC724u;
        goto label_3cc724;
    }
    ctx->pc = 0x3CC71Cu;
    SET_GPR_U32(ctx, 31, 0x3CC724u);
    ctx->pc = 0x3CC720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC71Cu;
    // 0x3cc720: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3CC71Cu, 0x3CC724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC724u;
label_3cc724:
    // 0x3cc724: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3cc724u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cc728:
    // 0x3cc728: 0x12600041  beqz        $s3, . + 4 + (0x41 << 2)
label_3cc72c:
    if (ctx->pc == 0x3CC72Cu) {
        ctx->pc = 0x3CC72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC728u;
        // 0x3cc72c: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC730u;
        goto label_3cc730;
    }
    ctx->pc = 0x3CC728u;
    {
        const bool branch_taken_0x3cc728 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC728u;
        // 0x3cc72c: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc728) {
            ctx->pc = 0x3CC830u;
            goto label_3cc830;
        }
    }
    ctx->pc = 0x3CC730u;
label_3cc730:
    // 0x3cc730: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x3cc730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_3cc734:
    // 0x3cc734: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x3cc734u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_3cc738:
    // 0x3cc738: 0x40f809  jalr        $v0
label_3cc73c:
    if (ctx->pc == 0x3CC73Cu) {
        ctx->pc = 0x3CC73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC738u;
        // 0x3cc73c: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC740u;
        goto label_3cc740;
    }
    ctx->pc = 0x3CC738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CC740u);
        ctx->pc = 0x3CC73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC738u;
        // 0x3cc73c: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC738u, 0x3CC740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CC740u;
label_3cc740:
    // 0x3cc740: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3cc740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cc744:
    // 0x3cc744: 0x1260003a  beqz        $s3, . + 4 + (0x3A << 2)
label_3cc748:
    if (ctx->pc == 0x3CC748u) {
        ctx->pc = 0x3CC748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC744u;
        // 0x3cc748: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC74Cu;
        goto label_3cc74c;
    }
    ctx->pc = 0x3CC744u;
    {
        const bool branch_taken_0x3cc744 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC744u;
        // 0x3cc748: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc744) {
            ctx->pc = 0x3CC830u;
            goto label_3cc830;
        }
    }
    ctx->pc = 0x3CC74Cu;
label_3cc74c:
    // 0x3cc74c: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x3cc74cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3cc750:
    // 0x3cc750: 0x1a600015  blez        $s3, . + 4 + (0x15 << 2)
label_3cc754:
    if (ctx->pc == 0x3CC754u) {
        ctx->pc = 0x3CC754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC750u;
        // 0x3cc754: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC758u;
        goto label_3cc758;
    }
    ctx->pc = 0x3CC750u;
    {
        const bool branch_taken_0x3cc750 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3CC754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC750u;
        // 0x3cc754: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc750) {
            ctx->pc = 0x3CC7A8u;
            goto label_3cc7a8;
        }
    }
    ctx->pc = 0x3CC758u;
label_3cc758:
    // 0x3cc758: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_3cc75c:
    if (ctx->pc == 0x3CC75Cu) {
        ctx->pc = 0x3CC75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC758u;
        // 0x3cc75c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC760u;
        goto label_3cc760;
    }
    ctx->pc = 0x3CC758u;
    {
        const bool branch_taken_0x3cc758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC758u;
        // 0x3cc75c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc758) {
            ctx->pc = 0x3CC7D4u;
            goto label_3cc7d4;
        }
    }
    ctx->pc = 0x3CC760u;
label_3cc760:
    // 0x3cc760: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3cc760u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3cc764:
    // 0x3cc764: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_3cc768:
    if (ctx->pc == 0x3CC768u) {
        ctx->pc = 0x3CC768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC764u;
        // 0x3cc768: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC76Cu;
        goto label_3cc76c;
    }
    ctx->pc = 0x3CC764u;
    {
        const bool branch_taken_0x3cc764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CC768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC764u;
        // 0x3cc768: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc764) {
            ctx->pc = 0x3CC7ACu;
            goto label_3cc7ac;
        }
    }
    ctx->pc = 0x3CC76Cu;
label_3cc76c:
    // 0x3cc76c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3cc770:
    if (ctx->pc == 0x3CC770u) {
        ctx->pc = 0x3CC770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC76Cu;
        // 0x3cc770: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC774u;
        goto label_3cc774;
    }
    ctx->pc = 0x3CC76Cu;
    {
        const bool branch_taken_0x3cc76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CC770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC76Cu;
        // 0x3cc770: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc76c) {
            ctx->pc = 0x3CC790u;
            goto label_3cc790;
        }
    }
    ctx->pc = 0x3CC774u;
label_3cc774:
    // 0x3cc774: 0xc1036da  jal         func_40DB68
label_3cc778:
    if (ctx->pc == 0x3CC778u) {
        ctx->pc = 0x3CC778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC774u;
        // 0x3cc778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC77Cu;
        goto label_3cc77c;
    }
    ctx->pc = 0x3CC774u;
    SET_GPR_U32(ctx, 31, 0x3CC77Cu);
    ctx->pc = 0x3CC778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC774u;
    // 0x3cc778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3CC774u, 0x3CC77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC77Cu;
label_3cc77c:
    // 0x3cc77c: 0x26d00004  addiu       $s0, $s6, 0x4
    ctx->pc = 0x3cc77cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_3cc780:
    // 0x3cc780: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3cc780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3cc784:
    // 0x3cc784: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3cc784u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cc788:
    // 0x3cc788: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x3cc788u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_3cc78c:
    // 0x3cc78c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3cc78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cc790:
    // 0x3cc790: 0xc1036da  jal         func_40DB68
label_3cc794:
    if (ctx->pc == 0x3CC794u) {
        ctx->pc = 0x3CC794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC790u;
        // 0x3cc794: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC798u;
        goto label_3cc798;
    }
    ctx->pc = 0x3CC790u;
    SET_GPR_U32(ctx, 31, 0x3CC798u);
    ctx->pc = 0x3CC794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC790u;
    // 0x3cc794: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3CC790u, 0x3CC798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC798u;
label_3cc798:
    // 0x3cc798: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3cc798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3cc79c:
    // 0x3cc79c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3cc79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3cc7a0:
    // 0x3cc7a0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3cc7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3cc7a4:
    // 0x3cc7a4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3cc7a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3cc7a8:
    // 0x3cc7a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3cc7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cc7ac:
    // 0x3cc7ac: 0xc1036da  jal         func_40DB68
label_3cc7b0:
    if (ctx->pc == 0x3CC7B0u) {
        ctx->pc = 0x3CC7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC7ACu;
        // 0x3cc7b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC7B4u;
        goto label_3cc7b4;
    }
    ctx->pc = 0x3CC7ACu;
    SET_GPR_U32(ctx, 31, 0x3CC7B4u);
    ctx->pc = 0x3CC7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC7ACu;
    // 0x3cc7b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3CC7ACu, 0x3CC7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC7B4u;
label_3cc7b4:
    // 0x3cc7b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3cc7b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3cc7b8:
    // 0x3cc7b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3cc7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3cc7bc:
    // 0x3cc7bc: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x3cc7bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_3cc7c0:
    // 0x3cc7c0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3cc7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3cc7c4:
    // 0x3cc7c4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_3cc7c8:
    if (ctx->pc == 0x3CC7C8u) {
        ctx->pc = 0x3CC7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC7C4u;
        // 0x3cc7c8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC7CCu;
        goto label_3cc7cc;
    }
    ctx->pc = 0x3CC7C4u;
    {
        const bool branch_taken_0x3cc7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC7C4u;
        // 0x3cc7c8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc7c4) {
            ctx->pc = 0x3CC830u;
            goto label_3cc830;
        }
    }
    ctx->pc = 0x3CC7CCu;
label_3cc7cc:
    // 0x3cc7cc: 0x0  nop
    ctx->pc = 0x3cc7ccu;
    // NOP
label_3cc7d0:
    // 0x3cc7d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3cc7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cc7d4:
    // 0x3cc7d4: 0xc1036da  jal         func_40DB68
label_3cc7d8:
    if (ctx->pc == 0x3CC7D8u) {
        ctx->pc = 0x3CC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC7D4u;
        // 0x3cc7d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC7DCu;
        goto label_3cc7dc;
    }
    ctx->pc = 0x3CC7D4u;
    SET_GPR_U32(ctx, 31, 0x3CC7DCu);
    ctx->pc = 0x3CC7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC7D4u;
    // 0x3cc7d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3CC7D4u, 0x3CC7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC7DCu;
label_3cc7dc:
    // 0x3cc7dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3cc7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3cc7e0:
    // 0x3cc7e0: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x3cc7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3cc7e4:
    // 0x3cc7e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cc7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cc7e8:
    // 0x3cc7e8: 0xc1036da  jal         func_40DB68
label_3cc7ec:
    if (ctx->pc == 0x3CC7ECu) {
        ctx->pc = 0x3CC7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC7E8u;
        // 0x3cc7ec: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC7F0u;
        goto label_3cc7f0;
    }
    ctx->pc = 0x3CC7E8u;
    SET_GPR_U32(ctx, 31, 0x3CC7F0u);
    ctx->pc = 0x3CC7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC7E8u;
    // 0x3cc7ec: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3CC7E8u, 0x3CC7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC7F0u;
label_3cc7f0:
    // 0x3cc7f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3cc7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3cc7f4:
    // 0x3cc7f4: 0x26250002  addiu       $a1, $s1, 0x2
    ctx->pc = 0x3cc7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_3cc7f8:
    // 0x3cc7f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cc7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cc7fc:
    // 0x3cc7fc: 0xc1036da  jal         func_40DB68
label_3cc800:
    if (ctx->pc == 0x3CC800u) {
        ctx->pc = 0x3CC800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC7FCu;
        // 0x3cc800: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC804u;
        goto label_3cc804;
    }
    ctx->pc = 0x3CC7FCu;
    SET_GPR_U32(ctx, 31, 0x3CC804u);
    ctx->pc = 0x3CC800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC7FCu;
    // 0x3cc800: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3CC7FCu, 0x3CC804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC804u;
label_3cc804:
    // 0x3cc804: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3cc804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3cc808:
    // 0x3cc808: 0x26250003  addiu       $a1, $s1, 0x3
    ctx->pc = 0x3cc808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
label_3cc80c:
    // 0x3cc80c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3cc80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cc810:
    // 0x3cc810: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3cc810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3cc814:
    // 0x3cc814: 0xc1036da  jal         func_40DB68
label_3cc818:
    if (ctx->pc == 0x3CC818u) {
        ctx->pc = 0x3CC818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC814u;
        // 0x3cc818: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC81Cu;
        goto label_3cc81c;
    }
    ctx->pc = 0x3CC814u;
    SET_GPR_U32(ctx, 31, 0x3CC81Cu);
    ctx->pc = 0x3CC818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC814u;
    // 0x3cc818: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3CC814u, 0x3CC81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC81Cu;
label_3cc81c:
    // 0x3cc81c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3cc81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3cc820:
    // 0x3cc820: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x3cc820u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_3cc824:
    // 0x3cc824: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x3cc824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_3cc828:
    // 0x3cc828: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_3cc82c:
    if (ctx->pc == 0x3CC82Cu) {
        ctx->pc = 0x3CC82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC828u;
        // 0x3cc82c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC830u;
        goto label_3cc830;
    }
    ctx->pc = 0x3CC828u;
    {
        const bool branch_taken_0x3cc828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CC82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC828u;
        // 0x3cc82c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc828) {
            ctx->pc = 0x3CC7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cc7d0;
        }
    }
    ctx->pc = 0x3CC830u;
label_3cc830:
    // 0x3cc830: 0xc103684  jal         func_40DA10
label_3cc834:
    if (ctx->pc == 0x3CC834u) {
        ctx->pc = 0x3CC834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC830u;
        // 0x3cc834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC838u;
        goto label_3cc838;
    }
    ctx->pc = 0x3CC830u;
    SET_GPR_U32(ctx, 31, 0x3CC838u);
    ctx->pc = 0x3CC834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC830u;
    // 0x3cc834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3CC830u, 0x3CC838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC838u;
label_3cc838:
    // 0x3cc838: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x3cc838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_3cc83c:
    // 0x3cc83c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3cc83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3cc840:
    // 0x3cc840: 0x8faa0060  lw          $t2, 0x60($sp)
    ctx->pc = 0x3cc840u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_3cc844:
    // 0x3cc844: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3cc844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cc848:
    // 0x3cc848: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3cc848u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cc84c:
    // 0x3cc84c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cc84cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cc850:
    // 0x3cc850: 0x3c0f809  jalr        $fp
label_3cc854:
    if (ctx->pc == 0x3CC854u) {
        ctx->pc = 0x3CC854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC850u;
        // 0x3cc854: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC858u;
        goto label_3cc858;
    }
    ctx->pc = 0x3CC850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x3CC858u);
        ctx->pc = 0x3CC854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC850u;
        // 0x3cc854: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC850u, 0x3CC858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CC858u;
label_3cc858:
    // 0x3cc858: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
label_3cc85c:
    if (ctx->pc == 0x3CC85Cu) {
        ctx->pc = 0x3CC85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC858u;
        // 0x3cc85c: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC860u;
        goto label_3cc860;
    }
    ctx->pc = 0x3CC858u;
    {
        const bool branch_taken_0x3cc858 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC858u;
        // 0x3cc85c: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc858) {
            ctx->pc = 0x3CC874u;
            goto label_3cc874;
        }
    }
    ctx->pc = 0x3CC860u;
label_3cc860:
    // 0x3cc860: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x3cc860u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_3cc864:
    // 0x3cc864: 0x24e3e880  addiu       $v1, $a3, -0x1780
    ctx->pc = 0x3cc864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961280));
label_3cc868:
    // 0x3cc868: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3cc868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3cc86c:
    // 0x3cc86c: 0x40f809  jalr        $v0
label_3cc870:
    if (ctx->pc == 0x3CC870u) {
        ctx->pc = 0x3CC870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC86Cu;
        // 0x3cc870: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC874u;
        goto label_3cc874;
    }
    ctx->pc = 0x3CC86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CC874u);
        ctx->pc = 0x3CC870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC86Cu;
        // 0x3cc870: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC86Cu, 0x3CC874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CC874u;
label_3cc874:
    // 0x3cc874: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x3cc874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_3cc878:
    // 0x3cc878: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x3cc878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3cc87c:
    // 0x3cc87c: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x3cc87cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3cc880:
    // 0x3cc880: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x3cc880u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3cc884:
    // 0x3cc884: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x3cc884u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3cc888:
    // 0x3cc888: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x3cc888u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3cc88c:
    // 0x3cc88c: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x3cc88cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3cc890:
    // 0x3cc890: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x3cc890u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3cc894:
    // 0x3cc894: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x3cc894u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3cc898:
    // 0x3cc898: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3cc898u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3cc89c:
    // 0x3cc89c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3cc89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3cc8a0:
    // 0x3cc8a0: 0x3e00008  jr          $ra
label_3cc8a4:
    if (ctx->pc == 0x3CC8A4u) {
        ctx->pc = 0x3CC8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC8A0u;
        // 0x3cc8a4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC8A8u;
        goto label_fallthrough_0x3cc8a0;
    }
    ctx->pc = 0x3CC8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC8A0u;
        // 0x3cc8a4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3cc8a0:
    ctx->pc = 0x3CC8A8u;
}
