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

// Function: sub_0042A178
// Address: 0x42a178 - 0x42c098
void sub_0042A178_0x42a178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042A178_0x42a178");
#endif

    switch (ctx->pc) {
        case 0x42a178u: goto label_42a178;
        case 0x42a17cu: goto label_42a17c;
        case 0x42a180u: goto label_42a180;
        case 0x42a184u: goto label_42a184;
        case 0x42a188u: goto label_42a188;
        case 0x42a18cu: goto label_42a18c;
        case 0x42a190u: goto label_42a190;
        case 0x42a194u: goto label_42a194;
        case 0x42a198u: goto label_42a198;
        case 0x42a19cu: goto label_42a19c;
        case 0x42a1a0u: goto label_42a1a0;
        case 0x42a1a4u: goto label_42a1a4;
        case 0x42a1a8u: goto label_42a1a8;
        case 0x42a1acu: goto label_42a1ac;
        case 0x42a1b0u: goto label_42a1b0;
        case 0x42a1b4u: goto label_42a1b4;
        case 0x42a1b8u: goto label_42a1b8;
        case 0x42a1bcu: goto label_42a1bc;
        case 0x42a1c0u: goto label_42a1c0;
        case 0x42a1c4u: goto label_42a1c4;
        case 0x42a1c8u: goto label_42a1c8;
        case 0x42a1ccu: goto label_42a1cc;
        case 0x42a1d0u: goto label_42a1d0;
        case 0x42a1d4u: goto label_42a1d4;
        case 0x42a1d8u: goto label_42a1d8;
        case 0x42a1dcu: goto label_42a1dc;
        case 0x42a1e0u: goto label_42a1e0;
        case 0x42a1e4u: goto label_42a1e4;
        case 0x42a1e8u: goto label_42a1e8;
        case 0x42a1ecu: goto label_42a1ec;
        case 0x42a1f0u: goto label_42a1f0;
        case 0x42a1f4u: goto label_42a1f4;
        case 0x42a1f8u: goto label_42a1f8;
        case 0x42a1fcu: goto label_42a1fc;
        case 0x42a200u: goto label_42a200;
        case 0x42a204u: goto label_42a204;
        case 0x42a208u: goto label_42a208;
        case 0x42a20cu: goto label_42a20c;
        case 0x42a210u: goto label_42a210;
        case 0x42a214u: goto label_42a214;
        case 0x42a218u: goto label_42a218;
        case 0x42a21cu: goto label_42a21c;
        case 0x42a220u: goto label_42a220;
        case 0x42a224u: goto label_42a224;
        case 0x42a228u: goto label_42a228;
        case 0x42a22cu: goto label_42a22c;
        case 0x42a230u: goto label_42a230;
        case 0x42a234u: goto label_42a234;
        case 0x42a238u: goto label_42a238;
        case 0x42a23cu: goto label_42a23c;
        case 0x42a240u: goto label_42a240;
        case 0x42a244u: goto label_42a244;
        case 0x42a248u: goto label_42a248;
        case 0x42a24cu: goto label_42a24c;
        case 0x42a250u: goto label_42a250;
        case 0x42a254u: goto label_42a254;
        case 0x42a258u: goto label_42a258;
        case 0x42a25cu: goto label_42a25c;
        case 0x42a260u: goto label_42a260;
        case 0x42a264u: goto label_42a264;
        case 0x42a268u: goto label_42a268;
        case 0x42a26cu: goto label_42a26c;
        case 0x42a270u: goto label_42a270;
        case 0x42a274u: goto label_42a274;
        case 0x42a278u: goto label_42a278;
        case 0x42a27cu: goto label_42a27c;
        case 0x42a280u: goto label_42a280;
        case 0x42a284u: goto label_42a284;
        case 0x42a288u: goto label_42a288;
        case 0x42a28cu: goto label_42a28c;
        case 0x42a290u: goto label_42a290;
        case 0x42a294u: goto label_42a294;
        case 0x42a298u: goto label_42a298;
        case 0x42a29cu: goto label_42a29c;
        case 0x42a2a0u: goto label_42a2a0;
        case 0x42a2a4u: goto label_42a2a4;
        case 0x42a2a8u: goto label_42a2a8;
        case 0x42a2acu: goto label_42a2ac;
        case 0x42a2b0u: goto label_42a2b0;
        case 0x42a2b4u: goto label_42a2b4;
        case 0x42a2b8u: goto label_42a2b8;
        case 0x42a2bcu: goto label_42a2bc;
        case 0x42a2c0u: goto label_42a2c0;
        case 0x42a2c4u: goto label_42a2c4;
        case 0x42a2c8u: goto label_42a2c8;
        case 0x42a2ccu: goto label_42a2cc;
        case 0x42a2d0u: goto label_42a2d0;
        case 0x42a2d4u: goto label_42a2d4;
        case 0x42a2d8u: goto label_42a2d8;
        case 0x42a2dcu: goto label_42a2dc;
        case 0x42a2e0u: goto label_42a2e0;
        case 0x42a2e4u: goto label_42a2e4;
        case 0x42a2e8u: goto label_42a2e8;
        case 0x42a2ecu: goto label_42a2ec;
        case 0x42a2f0u: goto label_42a2f0;
        case 0x42a2f4u: goto label_42a2f4;
        case 0x42a2f8u: goto label_42a2f8;
        case 0x42a2fcu: goto label_42a2fc;
        case 0x42a300u: goto label_42a300;
        case 0x42a304u: goto label_42a304;
        case 0x42a308u: goto label_42a308;
        case 0x42a30cu: goto label_42a30c;
        case 0x42a310u: goto label_42a310;
        case 0x42a314u: goto label_42a314;
        case 0x42a318u: goto label_42a318;
        case 0x42a31cu: goto label_42a31c;
        case 0x42a320u: goto label_42a320;
        case 0x42a324u: goto label_42a324;
        case 0x42a328u: goto label_42a328;
        case 0x42a32cu: goto label_42a32c;
        case 0x42a330u: goto label_42a330;
        case 0x42a334u: goto label_42a334;
        case 0x42a338u: goto label_42a338;
        case 0x42a33cu: goto label_42a33c;
        case 0x42a340u: goto label_42a340;
        case 0x42a344u: goto label_42a344;
        case 0x42a348u: goto label_42a348;
        case 0x42a34cu: goto label_42a34c;
        case 0x42a350u: goto label_42a350;
        case 0x42a354u: goto label_42a354;
        case 0x42a358u: goto label_42a358;
        case 0x42a35cu: goto label_42a35c;
        case 0x42a360u: goto label_42a360;
        case 0x42a364u: goto label_42a364;
        case 0x42a368u: goto label_42a368;
        case 0x42a36cu: goto label_42a36c;
        case 0x42a370u: goto label_42a370;
        case 0x42a374u: goto label_42a374;
        case 0x42a378u: goto label_42a378;
        case 0x42a37cu: goto label_42a37c;
        case 0x42a380u: goto label_42a380;
        case 0x42a384u: goto label_42a384;
        case 0x42a388u: goto label_42a388;
        case 0x42a38cu: goto label_42a38c;
        case 0x42a390u: goto label_42a390;
        case 0x42a394u: goto label_42a394;
        case 0x42a398u: goto label_42a398;
        case 0x42a39cu: goto label_42a39c;
        case 0x42a3a0u: goto label_42a3a0;
        case 0x42a3a4u: goto label_42a3a4;
        case 0x42a3a8u: goto label_42a3a8;
        case 0x42a3acu: goto label_42a3ac;
        case 0x42a3b0u: goto label_42a3b0;
        case 0x42a3b4u: goto label_42a3b4;
        case 0x42a3b8u: goto label_42a3b8;
        case 0x42a3bcu: goto label_42a3bc;
        case 0x42a3c0u: goto label_42a3c0;
        case 0x42a3c4u: goto label_42a3c4;
        case 0x42a3c8u: goto label_42a3c8;
        case 0x42a3ccu: goto label_42a3cc;
        case 0x42a3d0u: goto label_42a3d0;
        case 0x42a3d4u: goto label_42a3d4;
        case 0x42a3d8u: goto label_42a3d8;
        case 0x42a3dcu: goto label_42a3dc;
        case 0x42a3e0u: goto label_42a3e0;
        case 0x42a3e4u: goto label_42a3e4;
        case 0x42a3e8u: goto label_42a3e8;
        case 0x42a3ecu: goto label_42a3ec;
        case 0x42a3f0u: goto label_42a3f0;
        case 0x42a3f4u: goto label_42a3f4;
        case 0x42a3f8u: goto label_42a3f8;
        case 0x42a3fcu: goto label_42a3fc;
        case 0x42a400u: goto label_42a400;
        case 0x42a404u: goto label_42a404;
        case 0x42a408u: goto label_42a408;
        case 0x42a40cu: goto label_42a40c;
        case 0x42a410u: goto label_42a410;
        case 0x42a414u: goto label_42a414;
        case 0x42a418u: goto label_42a418;
        case 0x42a41cu: goto label_42a41c;
        case 0x42a420u: goto label_42a420;
        case 0x42a424u: goto label_42a424;
        case 0x42a428u: goto label_42a428;
        case 0x42a42cu: goto label_42a42c;
        case 0x42a430u: goto label_42a430;
        case 0x42a434u: goto label_42a434;
        case 0x42a438u: goto label_42a438;
        case 0x42a43cu: goto label_42a43c;
        case 0x42a440u: goto label_42a440;
        case 0x42a444u: goto label_42a444;
        case 0x42a448u: goto label_42a448;
        case 0x42a44cu: goto label_42a44c;
        case 0x42a450u: goto label_42a450;
        case 0x42a454u: goto label_42a454;
        case 0x42a458u: goto label_42a458;
        case 0x42a45cu: goto label_42a45c;
        case 0x42a460u: goto label_42a460;
        case 0x42a464u: goto label_42a464;
        case 0x42a468u: goto label_42a468;
        case 0x42a46cu: goto label_42a46c;
        case 0x42a470u: goto label_42a470;
        case 0x42a474u: goto label_42a474;
        case 0x42a478u: goto label_42a478;
        case 0x42a47cu: goto label_42a47c;
        case 0x42a480u: goto label_42a480;
        case 0x42a484u: goto label_42a484;
        case 0x42a488u: goto label_42a488;
        case 0x42a48cu: goto label_42a48c;
        case 0x42a490u: goto label_42a490;
        case 0x42a494u: goto label_42a494;
        case 0x42a498u: goto label_42a498;
        case 0x42a49cu: goto label_42a49c;
        case 0x42a4a0u: goto label_42a4a0;
        case 0x42a4a4u: goto label_42a4a4;
        case 0x42a4a8u: goto label_42a4a8;
        case 0x42a4acu: goto label_42a4ac;
        case 0x42a4b0u: goto label_42a4b0;
        case 0x42a4b4u: goto label_42a4b4;
        case 0x42a4b8u: goto label_42a4b8;
        case 0x42a4bcu: goto label_42a4bc;
        case 0x42a4c0u: goto label_42a4c0;
        case 0x42a4c4u: goto label_42a4c4;
        case 0x42a4c8u: goto label_42a4c8;
        case 0x42a4ccu: goto label_42a4cc;
        case 0x42a4d0u: goto label_42a4d0;
        case 0x42a4d4u: goto label_42a4d4;
        case 0x42a4d8u: goto label_42a4d8;
        case 0x42a4dcu: goto label_42a4dc;
        case 0x42a4e0u: goto label_42a4e0;
        case 0x42a4e4u: goto label_42a4e4;
        case 0x42a4e8u: goto label_42a4e8;
        case 0x42a4ecu: goto label_42a4ec;
        case 0x42a4f0u: goto label_42a4f0;
        case 0x42a4f4u: goto label_42a4f4;
        case 0x42a4f8u: goto label_42a4f8;
        case 0x42a4fcu: goto label_42a4fc;
        case 0x42a500u: goto label_42a500;
        case 0x42a504u: goto label_42a504;
        case 0x42a508u: goto label_42a508;
        case 0x42a50cu: goto label_42a50c;
        case 0x42a510u: goto label_42a510;
        case 0x42a514u: goto label_42a514;
        case 0x42a518u: goto label_42a518;
        case 0x42a51cu: goto label_42a51c;
        case 0x42a520u: goto label_42a520;
        case 0x42a524u: goto label_42a524;
        case 0x42a528u: goto label_42a528;
        case 0x42a52cu: goto label_42a52c;
        case 0x42a530u: goto label_42a530;
        case 0x42a534u: goto label_42a534;
        case 0x42a538u: goto label_42a538;
        case 0x42a53cu: goto label_42a53c;
        case 0x42a540u: goto label_42a540;
        case 0x42a544u: goto label_42a544;
        case 0x42a548u: goto label_42a548;
        case 0x42a54cu: goto label_42a54c;
        case 0x42a550u: goto label_42a550;
        case 0x42a554u: goto label_42a554;
        case 0x42a558u: goto label_42a558;
        case 0x42a55cu: goto label_42a55c;
        case 0x42a560u: goto label_42a560;
        case 0x42a564u: goto label_42a564;
        case 0x42a568u: goto label_42a568;
        case 0x42a56cu: goto label_42a56c;
        case 0x42a570u: goto label_42a570;
        case 0x42a574u: goto label_42a574;
        case 0x42a578u: goto label_42a578;
        case 0x42a57cu: goto label_42a57c;
        case 0x42a580u: goto label_42a580;
        case 0x42a584u: goto label_42a584;
        case 0x42a588u: goto label_42a588;
        case 0x42a58cu: goto label_42a58c;
        case 0x42a590u: goto label_42a590;
        case 0x42a594u: goto label_42a594;
        case 0x42a598u: goto label_42a598;
        case 0x42a59cu: goto label_42a59c;
        case 0x42a5a0u: goto label_42a5a0;
        case 0x42a5a4u: goto label_42a5a4;
        case 0x42a5a8u: goto label_42a5a8;
        case 0x42a5acu: goto label_42a5ac;
        case 0x42a5b0u: goto label_42a5b0;
        case 0x42a5b4u: goto label_42a5b4;
        case 0x42a5b8u: goto label_42a5b8;
        case 0x42a5bcu: goto label_42a5bc;
        case 0x42a5c0u: goto label_42a5c0;
        case 0x42a5c4u: goto label_42a5c4;
        case 0x42a5c8u: goto label_42a5c8;
        case 0x42a5ccu: goto label_42a5cc;
        case 0x42a5d0u: goto label_42a5d0;
        case 0x42a5d4u: goto label_42a5d4;
        case 0x42a5d8u: goto label_42a5d8;
        case 0x42a5dcu: goto label_42a5dc;
        case 0x42a5e0u: goto label_42a5e0;
        case 0x42a5e4u: goto label_42a5e4;
        case 0x42a5e8u: goto label_42a5e8;
        case 0x42a5ecu: goto label_42a5ec;
        case 0x42a5f0u: goto label_42a5f0;
        case 0x42a5f4u: goto label_42a5f4;
        case 0x42a5f8u: goto label_42a5f8;
        case 0x42a5fcu: goto label_42a5fc;
        case 0x42a600u: goto label_42a600;
        case 0x42a604u: goto label_42a604;
        case 0x42a608u: goto label_42a608;
        case 0x42a60cu: goto label_42a60c;
        case 0x42a610u: goto label_42a610;
        case 0x42a614u: goto label_42a614;
        case 0x42a618u: goto label_42a618;
        case 0x42a61cu: goto label_42a61c;
        case 0x42a620u: goto label_42a620;
        case 0x42a624u: goto label_42a624;
        case 0x42a628u: goto label_42a628;
        case 0x42a62cu: goto label_42a62c;
        case 0x42a630u: goto label_42a630;
        case 0x42a634u: goto label_42a634;
        case 0x42a638u: goto label_42a638;
        case 0x42a63cu: goto label_42a63c;
        case 0x42a640u: goto label_42a640;
        case 0x42a644u: goto label_42a644;
        case 0x42a648u: goto label_42a648;
        case 0x42a64cu: goto label_42a64c;
        case 0x42a650u: goto label_42a650;
        case 0x42a654u: goto label_42a654;
        case 0x42a658u: goto label_42a658;
        case 0x42a65cu: goto label_42a65c;
        case 0x42a660u: goto label_42a660;
        case 0x42a664u: goto label_42a664;
        case 0x42a668u: goto label_42a668;
        case 0x42a66cu: goto label_42a66c;
        case 0x42a670u: goto label_42a670;
        case 0x42a674u: goto label_42a674;
        case 0x42a678u: goto label_42a678;
        case 0x42a67cu: goto label_42a67c;
        case 0x42a680u: goto label_42a680;
        case 0x42a684u: goto label_42a684;
        case 0x42a688u: goto label_42a688;
        case 0x42a68cu: goto label_42a68c;
        case 0x42a690u: goto label_42a690;
        case 0x42a694u: goto label_42a694;
        case 0x42a698u: goto label_42a698;
        case 0x42a69cu: goto label_42a69c;
        case 0x42a6a0u: goto label_42a6a0;
        case 0x42a6a4u: goto label_42a6a4;
        case 0x42a6a8u: goto label_42a6a8;
        case 0x42a6acu: goto label_42a6ac;
        case 0x42a6b0u: goto label_42a6b0;
        case 0x42a6b4u: goto label_42a6b4;
        case 0x42a6b8u: goto label_42a6b8;
        case 0x42a6bcu: goto label_42a6bc;
        case 0x42a6c0u: goto label_42a6c0;
        case 0x42a6c4u: goto label_42a6c4;
        case 0x42a6c8u: goto label_42a6c8;
        case 0x42a6ccu: goto label_42a6cc;
        case 0x42a6d0u: goto label_42a6d0;
        case 0x42a6d4u: goto label_42a6d4;
        case 0x42a6d8u: goto label_42a6d8;
        case 0x42a6dcu: goto label_42a6dc;
        case 0x42a6e0u: goto label_42a6e0;
        case 0x42a6e4u: goto label_42a6e4;
        case 0x42a6e8u: goto label_42a6e8;
        case 0x42a6ecu: goto label_42a6ec;
        case 0x42a6f0u: goto label_42a6f0;
        case 0x42a6f4u: goto label_42a6f4;
        case 0x42a6f8u: goto label_42a6f8;
        case 0x42a6fcu: goto label_42a6fc;
        case 0x42a700u: goto label_42a700;
        case 0x42a704u: goto label_42a704;
        case 0x42a708u: goto label_42a708;
        case 0x42a70cu: goto label_42a70c;
        case 0x42a710u: goto label_42a710;
        case 0x42a714u: goto label_42a714;
        case 0x42a718u: goto label_42a718;
        case 0x42a71cu: goto label_42a71c;
        case 0x42a720u: goto label_42a720;
        case 0x42a724u: goto label_42a724;
        case 0x42a728u: goto label_42a728;
        case 0x42a72cu: goto label_42a72c;
        case 0x42a730u: goto label_42a730;
        case 0x42a734u: goto label_42a734;
        case 0x42a738u: goto label_42a738;
        case 0x42a73cu: goto label_42a73c;
        case 0x42a740u: goto label_42a740;
        case 0x42a744u: goto label_42a744;
        case 0x42a748u: goto label_42a748;
        case 0x42a74cu: goto label_42a74c;
        case 0x42a750u: goto label_42a750;
        case 0x42a754u: goto label_42a754;
        case 0x42a758u: goto label_42a758;
        case 0x42a75cu: goto label_42a75c;
        case 0x42a760u: goto label_42a760;
        case 0x42a764u: goto label_42a764;
        case 0x42a768u: goto label_42a768;
        case 0x42a76cu: goto label_42a76c;
        case 0x42a770u: goto label_42a770;
        case 0x42a774u: goto label_42a774;
        case 0x42a778u: goto label_42a778;
        case 0x42a77cu: goto label_42a77c;
        case 0x42a780u: goto label_42a780;
        case 0x42a784u: goto label_42a784;
        case 0x42a788u: goto label_42a788;
        case 0x42a78cu: goto label_42a78c;
        case 0x42a790u: goto label_42a790;
        case 0x42a794u: goto label_42a794;
        case 0x42a798u: goto label_42a798;
        case 0x42a79cu: goto label_42a79c;
        case 0x42a7a0u: goto label_42a7a0;
        case 0x42a7a4u: goto label_42a7a4;
        case 0x42a7a8u: goto label_42a7a8;
        case 0x42a7acu: goto label_42a7ac;
        case 0x42a7b0u: goto label_42a7b0;
        case 0x42a7b4u: goto label_42a7b4;
        case 0x42a7b8u: goto label_42a7b8;
        case 0x42a7bcu: goto label_42a7bc;
        case 0x42a7c0u: goto label_42a7c0;
        case 0x42a7c4u: goto label_42a7c4;
        case 0x42a7c8u: goto label_42a7c8;
        case 0x42a7ccu: goto label_42a7cc;
        case 0x42a7d0u: goto label_42a7d0;
        case 0x42a7d4u: goto label_42a7d4;
        case 0x42a7d8u: goto label_42a7d8;
        case 0x42a7dcu: goto label_42a7dc;
        case 0x42a7e0u: goto label_42a7e0;
        case 0x42a7e4u: goto label_42a7e4;
        case 0x42a7e8u: goto label_42a7e8;
        case 0x42a7ecu: goto label_42a7ec;
        case 0x42a7f0u: goto label_42a7f0;
        case 0x42a7f4u: goto label_42a7f4;
        case 0x42a7f8u: goto label_42a7f8;
        case 0x42a7fcu: goto label_42a7fc;
        case 0x42a800u: goto label_42a800;
        case 0x42a804u: goto label_42a804;
        case 0x42a808u: goto label_42a808;
        case 0x42a80cu: goto label_42a80c;
        case 0x42a810u: goto label_42a810;
        case 0x42a814u: goto label_42a814;
        case 0x42a818u: goto label_42a818;
        case 0x42a81cu: goto label_42a81c;
        case 0x42a820u: goto label_42a820;
        case 0x42a824u: goto label_42a824;
        case 0x42a828u: goto label_42a828;
        case 0x42a82cu: goto label_42a82c;
        case 0x42a830u: goto label_42a830;
        case 0x42a834u: goto label_42a834;
        case 0x42a838u: goto label_42a838;
        case 0x42a83cu: goto label_42a83c;
        case 0x42a840u: goto label_42a840;
        case 0x42a844u: goto label_42a844;
        case 0x42a848u: goto label_42a848;
        case 0x42a84cu: goto label_42a84c;
        case 0x42a850u: goto label_42a850;
        case 0x42a854u: goto label_42a854;
        case 0x42a858u: goto label_42a858;
        case 0x42a85cu: goto label_42a85c;
        case 0x42a860u: goto label_42a860;
        case 0x42a864u: goto label_42a864;
        case 0x42a868u: goto label_42a868;
        case 0x42a86cu: goto label_42a86c;
        case 0x42a870u: goto label_42a870;
        case 0x42a874u: goto label_42a874;
        case 0x42a878u: goto label_42a878;
        case 0x42a87cu: goto label_42a87c;
        case 0x42a880u: goto label_42a880;
        case 0x42a884u: goto label_42a884;
        case 0x42a888u: goto label_42a888;
        case 0x42a88cu: goto label_42a88c;
        case 0x42a890u: goto label_42a890;
        case 0x42a894u: goto label_42a894;
        case 0x42a898u: goto label_42a898;
        case 0x42a89cu: goto label_42a89c;
        case 0x42a8a0u: goto label_42a8a0;
        case 0x42a8a4u: goto label_42a8a4;
        case 0x42a8a8u: goto label_42a8a8;
        case 0x42a8acu: goto label_42a8ac;
        case 0x42a8b0u: goto label_42a8b0;
        case 0x42a8b4u: goto label_42a8b4;
        case 0x42a8b8u: goto label_42a8b8;
        case 0x42a8bcu: goto label_42a8bc;
        case 0x42a8c0u: goto label_42a8c0;
        case 0x42a8c4u: goto label_42a8c4;
        case 0x42a8c8u: goto label_42a8c8;
        case 0x42a8ccu: goto label_42a8cc;
        case 0x42a8d0u: goto label_42a8d0;
        case 0x42a8d4u: goto label_42a8d4;
        case 0x42a8d8u: goto label_42a8d8;
        case 0x42a8dcu: goto label_42a8dc;
        case 0x42a8e0u: goto label_42a8e0;
        case 0x42a8e4u: goto label_42a8e4;
        case 0x42a8e8u: goto label_42a8e8;
        case 0x42a8ecu: goto label_42a8ec;
        case 0x42a8f0u: goto label_42a8f0;
        case 0x42a8f4u: goto label_42a8f4;
        case 0x42a8f8u: goto label_42a8f8;
        case 0x42a8fcu: goto label_42a8fc;
        case 0x42a900u: goto label_42a900;
        case 0x42a904u: goto label_42a904;
        case 0x42a908u: goto label_42a908;
        case 0x42a90cu: goto label_42a90c;
        case 0x42a910u: goto label_42a910;
        case 0x42a914u: goto label_42a914;
        case 0x42a918u: goto label_42a918;
        case 0x42a91cu: goto label_42a91c;
        case 0x42a920u: goto label_42a920;
        case 0x42a924u: goto label_42a924;
        case 0x42a928u: goto label_42a928;
        case 0x42a92cu: goto label_42a92c;
        case 0x42a930u: goto label_42a930;
        case 0x42a934u: goto label_42a934;
        case 0x42a938u: goto label_42a938;
        case 0x42a93cu: goto label_42a93c;
        case 0x42a940u: goto label_42a940;
        case 0x42a944u: goto label_42a944;
        case 0x42a948u: goto label_42a948;
        case 0x42a94cu: goto label_42a94c;
        case 0x42a950u: goto label_42a950;
        case 0x42a954u: goto label_42a954;
        case 0x42a958u: goto label_42a958;
        case 0x42a95cu: goto label_42a95c;
        case 0x42a960u: goto label_42a960;
        case 0x42a964u: goto label_42a964;
        case 0x42a968u: goto label_42a968;
        case 0x42a96cu: goto label_42a96c;
        case 0x42a970u: goto label_42a970;
        case 0x42a974u: goto label_42a974;
        case 0x42a978u: goto label_42a978;
        case 0x42a97cu: goto label_42a97c;
        case 0x42a980u: goto label_42a980;
        case 0x42a984u: goto label_42a984;
        case 0x42a988u: goto label_42a988;
        case 0x42a98cu: goto label_42a98c;
        case 0x42a990u: goto label_42a990;
        case 0x42a994u: goto label_42a994;
        case 0x42a998u: goto label_42a998;
        case 0x42a99cu: goto label_42a99c;
        case 0x42a9a0u: goto label_42a9a0;
        case 0x42a9a4u: goto label_42a9a4;
        case 0x42a9a8u: goto label_42a9a8;
        case 0x42a9acu: goto label_42a9ac;
        case 0x42a9b0u: goto label_42a9b0;
        case 0x42a9b4u: goto label_42a9b4;
        case 0x42a9b8u: goto label_42a9b8;
        case 0x42a9bcu: goto label_42a9bc;
        case 0x42a9c0u: goto label_42a9c0;
        case 0x42a9c4u: goto label_42a9c4;
        case 0x42a9c8u: goto label_42a9c8;
        case 0x42a9ccu: goto label_42a9cc;
        case 0x42a9d0u: goto label_42a9d0;
        case 0x42a9d4u: goto label_42a9d4;
        case 0x42a9d8u: goto label_42a9d8;
        case 0x42a9dcu: goto label_42a9dc;
        case 0x42a9e0u: goto label_42a9e0;
        case 0x42a9e4u: goto label_42a9e4;
        case 0x42a9e8u: goto label_42a9e8;
        case 0x42a9ecu: goto label_42a9ec;
        case 0x42a9f0u: goto label_42a9f0;
        case 0x42a9f4u: goto label_42a9f4;
        case 0x42a9f8u: goto label_42a9f8;
        case 0x42a9fcu: goto label_42a9fc;
        case 0x42aa00u: goto label_42aa00;
        case 0x42aa04u: goto label_42aa04;
        case 0x42aa08u: goto label_42aa08;
        case 0x42aa0cu: goto label_42aa0c;
        case 0x42aa10u: goto label_42aa10;
        case 0x42aa14u: goto label_42aa14;
        case 0x42aa18u: goto label_42aa18;
        case 0x42aa1cu: goto label_42aa1c;
        case 0x42aa20u: goto label_42aa20;
        case 0x42aa24u: goto label_42aa24;
        case 0x42aa28u: goto label_42aa28;
        case 0x42aa2cu: goto label_42aa2c;
        case 0x42aa30u: goto label_42aa30;
        case 0x42aa34u: goto label_42aa34;
        case 0x42aa38u: goto label_42aa38;
        case 0x42aa3cu: goto label_42aa3c;
        case 0x42aa40u: goto label_42aa40;
        case 0x42aa44u: goto label_42aa44;
        case 0x42aa48u: goto label_42aa48;
        case 0x42aa4cu: goto label_42aa4c;
        case 0x42aa50u: goto label_42aa50;
        case 0x42aa54u: goto label_42aa54;
        case 0x42aa58u: goto label_42aa58;
        case 0x42aa5cu: goto label_42aa5c;
        case 0x42aa60u: goto label_42aa60;
        case 0x42aa64u: goto label_42aa64;
        case 0x42aa68u: goto label_42aa68;
        case 0x42aa6cu: goto label_42aa6c;
        case 0x42aa70u: goto label_42aa70;
        case 0x42aa74u: goto label_42aa74;
        case 0x42aa78u: goto label_42aa78;
        case 0x42aa7cu: goto label_42aa7c;
        case 0x42aa80u: goto label_42aa80;
        case 0x42aa84u: goto label_42aa84;
        case 0x42aa88u: goto label_42aa88;
        case 0x42aa8cu: goto label_42aa8c;
        case 0x42aa90u: goto label_42aa90;
        case 0x42aa94u: goto label_42aa94;
        case 0x42aa98u: goto label_42aa98;
        case 0x42aa9cu: goto label_42aa9c;
        case 0x42aaa0u: goto label_42aaa0;
        case 0x42aaa4u: goto label_42aaa4;
        case 0x42aaa8u: goto label_42aaa8;
        case 0x42aaacu: goto label_42aaac;
        case 0x42aab0u: goto label_42aab0;
        case 0x42aab4u: goto label_42aab4;
        case 0x42aab8u: goto label_42aab8;
        case 0x42aabcu: goto label_42aabc;
        case 0x42aac0u: goto label_42aac0;
        case 0x42aac4u: goto label_42aac4;
        case 0x42aac8u: goto label_42aac8;
        case 0x42aaccu: goto label_42aacc;
        case 0x42aad0u: goto label_42aad0;
        case 0x42aad4u: goto label_42aad4;
        case 0x42aad8u: goto label_42aad8;
        case 0x42aadcu: goto label_42aadc;
        case 0x42aae0u: goto label_42aae0;
        case 0x42aae4u: goto label_42aae4;
        case 0x42aae8u: goto label_42aae8;
        case 0x42aaecu: goto label_42aaec;
        case 0x42aaf0u: goto label_42aaf0;
        case 0x42aaf4u: goto label_42aaf4;
        case 0x42aaf8u: goto label_42aaf8;
        case 0x42aafcu: goto label_42aafc;
        case 0x42ab00u: goto label_42ab00;
        case 0x42ab04u: goto label_42ab04;
        case 0x42ab08u: goto label_42ab08;
        case 0x42ab0cu: goto label_42ab0c;
        case 0x42ab10u: goto label_42ab10;
        case 0x42ab14u: goto label_42ab14;
        case 0x42ab18u: goto label_42ab18;
        case 0x42ab1cu: goto label_42ab1c;
        case 0x42ab20u: goto label_42ab20;
        case 0x42ab24u: goto label_42ab24;
        case 0x42ab28u: goto label_42ab28;
        case 0x42ab2cu: goto label_42ab2c;
        case 0x42ab30u: goto label_42ab30;
        case 0x42ab34u: goto label_42ab34;
        case 0x42ab38u: goto label_42ab38;
        case 0x42ab3cu: goto label_42ab3c;
        case 0x42ab40u: goto label_42ab40;
        case 0x42ab44u: goto label_42ab44;
        case 0x42ab48u: goto label_42ab48;
        case 0x42ab4cu: goto label_42ab4c;
        case 0x42ab50u: goto label_42ab50;
        case 0x42ab54u: goto label_42ab54;
        case 0x42ab58u: goto label_42ab58;
        case 0x42ab5cu: goto label_42ab5c;
        case 0x42ab60u: goto label_42ab60;
        case 0x42ab64u: goto label_42ab64;
        case 0x42ab68u: goto label_42ab68;
        case 0x42ab6cu: goto label_42ab6c;
        case 0x42ab70u: goto label_42ab70;
        case 0x42ab74u: goto label_42ab74;
        case 0x42ab78u: goto label_42ab78;
        case 0x42ab7cu: goto label_42ab7c;
        case 0x42ab80u: goto label_42ab80;
        case 0x42ab84u: goto label_42ab84;
        case 0x42ab88u: goto label_42ab88;
        case 0x42ab8cu: goto label_42ab8c;
        case 0x42ab90u: goto label_42ab90;
        case 0x42ab94u: goto label_42ab94;
        case 0x42ab98u: goto label_42ab98;
        case 0x42ab9cu: goto label_42ab9c;
        case 0x42aba0u: goto label_42aba0;
        case 0x42aba4u: goto label_42aba4;
        case 0x42aba8u: goto label_42aba8;
        case 0x42abacu: goto label_42abac;
        case 0x42abb0u: goto label_42abb0;
        case 0x42abb4u: goto label_42abb4;
        case 0x42abb8u: goto label_42abb8;
        case 0x42abbcu: goto label_42abbc;
        case 0x42abc0u: goto label_42abc0;
        case 0x42abc4u: goto label_42abc4;
        case 0x42abc8u: goto label_42abc8;
        case 0x42abccu: goto label_42abcc;
        case 0x42abd0u: goto label_42abd0;
        case 0x42abd4u: goto label_42abd4;
        case 0x42abd8u: goto label_42abd8;
        case 0x42abdcu: goto label_42abdc;
        case 0x42abe0u: goto label_42abe0;
        case 0x42abe4u: goto label_42abe4;
        case 0x42abe8u: goto label_42abe8;
        case 0x42abecu: goto label_42abec;
        case 0x42abf0u: goto label_42abf0;
        case 0x42abf4u: goto label_42abf4;
        case 0x42abf8u: goto label_42abf8;
        case 0x42abfcu: goto label_42abfc;
        case 0x42ac00u: goto label_42ac00;
        case 0x42ac04u: goto label_42ac04;
        case 0x42ac08u: goto label_42ac08;
        case 0x42ac0cu: goto label_42ac0c;
        case 0x42ac10u: goto label_42ac10;
        case 0x42ac14u: goto label_42ac14;
        case 0x42ac18u: goto label_42ac18;
        case 0x42ac1cu: goto label_42ac1c;
        case 0x42ac20u: goto label_42ac20;
        case 0x42ac24u: goto label_42ac24;
        case 0x42ac28u: goto label_42ac28;
        case 0x42ac2cu: goto label_42ac2c;
        case 0x42ac30u: goto label_42ac30;
        case 0x42ac34u: goto label_42ac34;
        case 0x42ac38u: goto label_42ac38;
        case 0x42ac3cu: goto label_42ac3c;
        case 0x42ac40u: goto label_42ac40;
        case 0x42ac44u: goto label_42ac44;
        case 0x42ac48u: goto label_42ac48;
        case 0x42ac4cu: goto label_42ac4c;
        case 0x42ac50u: goto label_42ac50;
        case 0x42ac54u: goto label_42ac54;
        case 0x42ac58u: goto label_42ac58;
        case 0x42ac5cu: goto label_42ac5c;
        case 0x42ac60u: goto label_42ac60;
        case 0x42ac64u: goto label_42ac64;
        case 0x42ac68u: goto label_42ac68;
        case 0x42ac6cu: goto label_42ac6c;
        case 0x42ac70u: goto label_42ac70;
        case 0x42ac74u: goto label_42ac74;
        case 0x42ac78u: goto label_42ac78;
        case 0x42ac7cu: goto label_42ac7c;
        case 0x42ac80u: goto label_42ac80;
        case 0x42ac84u: goto label_42ac84;
        case 0x42ac88u: goto label_42ac88;
        case 0x42ac8cu: goto label_42ac8c;
        case 0x42ac90u: goto label_42ac90;
        case 0x42ac94u: goto label_42ac94;
        case 0x42ac98u: goto label_42ac98;
        case 0x42ac9cu: goto label_42ac9c;
        case 0x42aca0u: goto label_42aca0;
        case 0x42aca4u: goto label_42aca4;
        case 0x42aca8u: goto label_42aca8;
        case 0x42acacu: goto label_42acac;
        case 0x42acb0u: goto label_42acb0;
        case 0x42acb4u: goto label_42acb4;
        case 0x42acb8u: goto label_42acb8;
        case 0x42acbcu: goto label_42acbc;
        case 0x42acc0u: goto label_42acc0;
        case 0x42acc4u: goto label_42acc4;
        case 0x42acc8u: goto label_42acc8;
        case 0x42acccu: goto label_42accc;
        case 0x42acd0u: goto label_42acd0;
        case 0x42acd4u: goto label_42acd4;
        case 0x42acd8u: goto label_42acd8;
        case 0x42acdcu: goto label_42acdc;
        case 0x42ace0u: goto label_42ace0;
        case 0x42ace4u: goto label_42ace4;
        case 0x42ace8u: goto label_42ace8;
        case 0x42acecu: goto label_42acec;
        case 0x42acf0u: goto label_42acf0;
        case 0x42acf4u: goto label_42acf4;
        case 0x42acf8u: goto label_42acf8;
        case 0x42acfcu: goto label_42acfc;
        case 0x42ad00u: goto label_42ad00;
        case 0x42ad04u: goto label_42ad04;
        case 0x42ad08u: goto label_42ad08;
        case 0x42ad0cu: goto label_42ad0c;
        case 0x42ad10u: goto label_42ad10;
        case 0x42ad14u: goto label_42ad14;
        case 0x42ad18u: goto label_42ad18;
        case 0x42ad1cu: goto label_42ad1c;
        case 0x42ad20u: goto label_42ad20;
        case 0x42ad24u: goto label_42ad24;
        case 0x42ad28u: goto label_42ad28;
        case 0x42ad2cu: goto label_42ad2c;
        case 0x42ad30u: goto label_42ad30;
        case 0x42ad34u: goto label_42ad34;
        case 0x42ad38u: goto label_42ad38;
        case 0x42ad3cu: goto label_42ad3c;
        case 0x42ad40u: goto label_42ad40;
        case 0x42ad44u: goto label_42ad44;
        case 0x42ad48u: goto label_42ad48;
        case 0x42ad4cu: goto label_42ad4c;
        case 0x42ad50u: goto label_42ad50;
        case 0x42ad54u: goto label_42ad54;
        case 0x42ad58u: goto label_42ad58;
        case 0x42ad5cu: goto label_42ad5c;
        case 0x42ad60u: goto label_42ad60;
        case 0x42ad64u: goto label_42ad64;
        case 0x42ad68u: goto label_42ad68;
        case 0x42ad6cu: goto label_42ad6c;
        case 0x42ad70u: goto label_42ad70;
        case 0x42ad74u: goto label_42ad74;
        case 0x42ad78u: goto label_42ad78;
        case 0x42ad7cu: goto label_42ad7c;
        case 0x42ad80u: goto label_42ad80;
        case 0x42ad84u: goto label_42ad84;
        case 0x42ad88u: goto label_42ad88;
        case 0x42ad8cu: goto label_42ad8c;
        case 0x42ad90u: goto label_42ad90;
        case 0x42ad94u: goto label_42ad94;
        case 0x42ad98u: goto label_42ad98;
        case 0x42ad9cu: goto label_42ad9c;
        case 0x42ada0u: goto label_42ada0;
        case 0x42ada4u: goto label_42ada4;
        case 0x42ada8u: goto label_42ada8;
        case 0x42adacu: goto label_42adac;
        case 0x42adb0u: goto label_42adb0;
        case 0x42adb4u: goto label_42adb4;
        case 0x42adb8u: goto label_42adb8;
        case 0x42adbcu: goto label_42adbc;
        case 0x42adc0u: goto label_42adc0;
        case 0x42adc4u: goto label_42adc4;
        case 0x42adc8u: goto label_42adc8;
        case 0x42adccu: goto label_42adcc;
        case 0x42add0u: goto label_42add0;
        case 0x42add4u: goto label_42add4;
        case 0x42add8u: goto label_42add8;
        case 0x42addcu: goto label_42addc;
        case 0x42ade0u: goto label_42ade0;
        case 0x42ade4u: goto label_42ade4;
        case 0x42ade8u: goto label_42ade8;
        case 0x42adecu: goto label_42adec;
        case 0x42adf0u: goto label_42adf0;
        case 0x42adf4u: goto label_42adf4;
        case 0x42adf8u: goto label_42adf8;
        case 0x42adfcu: goto label_42adfc;
        case 0x42ae00u: goto label_42ae00;
        case 0x42ae04u: goto label_42ae04;
        case 0x42ae08u: goto label_42ae08;
        case 0x42ae0cu: goto label_42ae0c;
        case 0x42ae10u: goto label_42ae10;
        case 0x42ae14u: goto label_42ae14;
        case 0x42ae18u: goto label_42ae18;
        case 0x42ae1cu: goto label_42ae1c;
        case 0x42ae20u: goto label_42ae20;
        case 0x42ae24u: goto label_42ae24;
        case 0x42ae28u: goto label_42ae28;
        case 0x42ae2cu: goto label_42ae2c;
        case 0x42ae30u: goto label_42ae30;
        case 0x42ae34u: goto label_42ae34;
        case 0x42ae38u: goto label_42ae38;
        case 0x42ae3cu: goto label_42ae3c;
        case 0x42ae40u: goto label_42ae40;
        case 0x42ae44u: goto label_42ae44;
        case 0x42ae48u: goto label_42ae48;
        case 0x42ae4cu: goto label_42ae4c;
        case 0x42ae50u: goto label_42ae50;
        case 0x42ae54u: goto label_42ae54;
        case 0x42ae58u: goto label_42ae58;
        case 0x42ae5cu: goto label_42ae5c;
        case 0x42ae60u: goto label_42ae60;
        case 0x42ae64u: goto label_42ae64;
        case 0x42ae68u: goto label_42ae68;
        case 0x42ae6cu: goto label_42ae6c;
        case 0x42ae70u: goto label_42ae70;
        case 0x42ae74u: goto label_42ae74;
        case 0x42ae78u: goto label_42ae78;
        case 0x42ae7cu: goto label_42ae7c;
        case 0x42ae80u: goto label_42ae80;
        case 0x42ae84u: goto label_42ae84;
        case 0x42ae88u: goto label_42ae88;
        case 0x42ae8cu: goto label_42ae8c;
        case 0x42ae90u: goto label_42ae90;
        case 0x42ae94u: goto label_42ae94;
        case 0x42ae98u: goto label_42ae98;
        case 0x42ae9cu: goto label_42ae9c;
        case 0x42aea0u: goto label_42aea0;
        case 0x42aea4u: goto label_42aea4;
        case 0x42aea8u: goto label_42aea8;
        case 0x42aeacu: goto label_42aeac;
        case 0x42aeb0u: goto label_42aeb0;
        case 0x42aeb4u: goto label_42aeb4;
        case 0x42aeb8u: goto label_42aeb8;
        case 0x42aebcu: goto label_42aebc;
        case 0x42aec0u: goto label_42aec0;
        case 0x42aec4u: goto label_42aec4;
        case 0x42aec8u: goto label_42aec8;
        case 0x42aeccu: goto label_42aecc;
        case 0x42aed0u: goto label_42aed0;
        case 0x42aed4u: goto label_42aed4;
        case 0x42aed8u: goto label_42aed8;
        case 0x42aedcu: goto label_42aedc;
        case 0x42aee0u: goto label_42aee0;
        case 0x42aee4u: goto label_42aee4;
        case 0x42aee8u: goto label_42aee8;
        case 0x42aeecu: goto label_42aeec;
        case 0x42aef0u: goto label_42aef0;
        case 0x42aef4u: goto label_42aef4;
        case 0x42aef8u: goto label_42aef8;
        case 0x42aefcu: goto label_42aefc;
        case 0x42af00u: goto label_42af00;
        case 0x42af04u: goto label_42af04;
        case 0x42af08u: goto label_42af08;
        case 0x42af0cu: goto label_42af0c;
        case 0x42af10u: goto label_42af10;
        case 0x42af14u: goto label_42af14;
        case 0x42af18u: goto label_42af18;
        case 0x42af1cu: goto label_42af1c;
        case 0x42af20u: goto label_42af20;
        case 0x42af24u: goto label_42af24;
        case 0x42af28u: goto label_42af28;
        case 0x42af2cu: goto label_42af2c;
        case 0x42af30u: goto label_42af30;
        case 0x42af34u: goto label_42af34;
        case 0x42af38u: goto label_42af38;
        case 0x42af3cu: goto label_42af3c;
        case 0x42af40u: goto label_42af40;
        case 0x42af44u: goto label_42af44;
        case 0x42af48u: goto label_42af48;
        case 0x42af4cu: goto label_42af4c;
        case 0x42af50u: goto label_42af50;
        case 0x42af54u: goto label_42af54;
        case 0x42af58u: goto label_42af58;
        case 0x42af5cu: goto label_42af5c;
        case 0x42af60u: goto label_42af60;
        case 0x42af64u: goto label_42af64;
        case 0x42af68u: goto label_42af68;
        case 0x42af6cu: goto label_42af6c;
        case 0x42af70u: goto label_42af70;
        case 0x42af74u: goto label_42af74;
        case 0x42af78u: goto label_42af78;
        case 0x42af7cu: goto label_42af7c;
        case 0x42af80u: goto label_42af80;
        case 0x42af84u: goto label_42af84;
        case 0x42af88u: goto label_42af88;
        case 0x42af8cu: goto label_42af8c;
        case 0x42af90u: goto label_42af90;
        case 0x42af94u: goto label_42af94;
        case 0x42af98u: goto label_42af98;
        case 0x42af9cu: goto label_42af9c;
        case 0x42afa0u: goto label_42afa0;
        case 0x42afa4u: goto label_42afa4;
        case 0x42afa8u: goto label_42afa8;
        case 0x42afacu: goto label_42afac;
        case 0x42afb0u: goto label_42afb0;
        case 0x42afb4u: goto label_42afb4;
        case 0x42afb8u: goto label_42afb8;
        case 0x42afbcu: goto label_42afbc;
        case 0x42afc0u: goto label_42afc0;
        case 0x42afc4u: goto label_42afc4;
        case 0x42afc8u: goto label_42afc8;
        case 0x42afccu: goto label_42afcc;
        case 0x42afd0u: goto label_42afd0;
        case 0x42afd4u: goto label_42afd4;
        case 0x42afd8u: goto label_42afd8;
        case 0x42afdcu: goto label_42afdc;
        case 0x42afe0u: goto label_42afe0;
        case 0x42afe4u: goto label_42afe4;
        case 0x42afe8u: goto label_42afe8;
        case 0x42afecu: goto label_42afec;
        case 0x42aff0u: goto label_42aff0;
        case 0x42aff4u: goto label_42aff4;
        case 0x42aff8u: goto label_42aff8;
        case 0x42affcu: goto label_42affc;
        case 0x42b000u: goto label_42b000;
        case 0x42b004u: goto label_42b004;
        case 0x42b008u: goto label_42b008;
        case 0x42b00cu: goto label_42b00c;
        case 0x42b010u: goto label_42b010;
        case 0x42b014u: goto label_42b014;
        case 0x42b018u: goto label_42b018;
        case 0x42b01cu: goto label_42b01c;
        case 0x42b020u: goto label_42b020;
        case 0x42b024u: goto label_42b024;
        case 0x42b028u: goto label_42b028;
        case 0x42b02cu: goto label_42b02c;
        case 0x42b030u: goto label_42b030;
        case 0x42b034u: goto label_42b034;
        case 0x42b038u: goto label_42b038;
        case 0x42b03cu: goto label_42b03c;
        case 0x42b040u: goto label_42b040;
        case 0x42b044u: goto label_42b044;
        case 0x42b048u: goto label_42b048;
        case 0x42b04cu: goto label_42b04c;
        case 0x42b050u: goto label_42b050;
        case 0x42b054u: goto label_42b054;
        case 0x42b058u: goto label_42b058;
        case 0x42b05cu: goto label_42b05c;
        case 0x42b060u: goto label_42b060;
        case 0x42b064u: goto label_42b064;
        case 0x42b068u: goto label_42b068;
        case 0x42b06cu: goto label_42b06c;
        case 0x42b070u: goto label_42b070;
        case 0x42b074u: goto label_42b074;
        case 0x42b078u: goto label_42b078;
        case 0x42b07cu: goto label_42b07c;
        case 0x42b080u: goto label_42b080;
        case 0x42b084u: goto label_42b084;
        case 0x42b088u: goto label_42b088;
        case 0x42b08cu: goto label_42b08c;
        case 0x42b090u: goto label_42b090;
        case 0x42b094u: goto label_42b094;
        case 0x42b098u: goto label_42b098;
        case 0x42b09cu: goto label_42b09c;
        case 0x42b0a0u: goto label_42b0a0;
        case 0x42b0a4u: goto label_42b0a4;
        case 0x42b0a8u: goto label_42b0a8;
        case 0x42b0acu: goto label_42b0ac;
        case 0x42b0b0u: goto label_42b0b0;
        case 0x42b0b4u: goto label_42b0b4;
        case 0x42b0b8u: goto label_42b0b8;
        case 0x42b0bcu: goto label_42b0bc;
        case 0x42b0c0u: goto label_42b0c0;
        case 0x42b0c4u: goto label_42b0c4;
        case 0x42b0c8u: goto label_42b0c8;
        case 0x42b0ccu: goto label_42b0cc;
        case 0x42b0d0u: goto label_42b0d0;
        case 0x42b0d4u: goto label_42b0d4;
        case 0x42b0d8u: goto label_42b0d8;
        case 0x42b0dcu: goto label_42b0dc;
        case 0x42b0e0u: goto label_42b0e0;
        case 0x42b0e4u: goto label_42b0e4;
        case 0x42b0e8u: goto label_42b0e8;
        case 0x42b0ecu: goto label_42b0ec;
        case 0x42b0f0u: goto label_42b0f0;
        case 0x42b0f4u: goto label_42b0f4;
        case 0x42b0f8u: goto label_42b0f8;
        case 0x42b0fcu: goto label_42b0fc;
        case 0x42b100u: goto label_42b100;
        case 0x42b104u: goto label_42b104;
        case 0x42b108u: goto label_42b108;
        case 0x42b10cu: goto label_42b10c;
        case 0x42b110u: goto label_42b110;
        case 0x42b114u: goto label_42b114;
        case 0x42b118u: goto label_42b118;
        case 0x42b11cu: goto label_42b11c;
        case 0x42b120u: goto label_42b120;
        case 0x42b124u: goto label_42b124;
        case 0x42b128u: goto label_42b128;
        case 0x42b12cu: goto label_42b12c;
        case 0x42b130u: goto label_42b130;
        case 0x42b134u: goto label_42b134;
        case 0x42b138u: goto label_42b138;
        case 0x42b13cu: goto label_42b13c;
        case 0x42b140u: goto label_42b140;
        case 0x42b144u: goto label_42b144;
        case 0x42b148u: goto label_42b148;
        case 0x42b14cu: goto label_42b14c;
        case 0x42b150u: goto label_42b150;
        case 0x42b154u: goto label_42b154;
        case 0x42b158u: goto label_42b158;
        case 0x42b15cu: goto label_42b15c;
        case 0x42b160u: goto label_42b160;
        case 0x42b164u: goto label_42b164;
        case 0x42b168u: goto label_42b168;
        case 0x42b16cu: goto label_42b16c;
        case 0x42b170u: goto label_42b170;
        case 0x42b174u: goto label_42b174;
        case 0x42b178u: goto label_42b178;
        case 0x42b17cu: goto label_42b17c;
        case 0x42b180u: goto label_42b180;
        case 0x42b184u: goto label_42b184;
        case 0x42b188u: goto label_42b188;
        case 0x42b18cu: goto label_42b18c;
        case 0x42b190u: goto label_42b190;
        case 0x42b194u: goto label_42b194;
        case 0x42b198u: goto label_42b198;
        case 0x42b19cu: goto label_42b19c;
        case 0x42b1a0u: goto label_42b1a0;
        case 0x42b1a4u: goto label_42b1a4;
        case 0x42b1a8u: goto label_42b1a8;
        case 0x42b1acu: goto label_42b1ac;
        case 0x42b1b0u: goto label_42b1b0;
        case 0x42b1b4u: goto label_42b1b4;
        case 0x42b1b8u: goto label_42b1b8;
        case 0x42b1bcu: goto label_42b1bc;
        case 0x42b1c0u: goto label_42b1c0;
        case 0x42b1c4u: goto label_42b1c4;
        case 0x42b1c8u: goto label_42b1c8;
        case 0x42b1ccu: goto label_42b1cc;
        case 0x42b1d0u: goto label_42b1d0;
        case 0x42b1d4u: goto label_42b1d4;
        case 0x42b1d8u: goto label_42b1d8;
        case 0x42b1dcu: goto label_42b1dc;
        case 0x42b1e0u: goto label_42b1e0;
        case 0x42b1e4u: goto label_42b1e4;
        case 0x42b1e8u: goto label_42b1e8;
        case 0x42b1ecu: goto label_42b1ec;
        case 0x42b1f0u: goto label_42b1f0;
        case 0x42b1f4u: goto label_42b1f4;
        case 0x42b1f8u: goto label_42b1f8;
        case 0x42b1fcu: goto label_42b1fc;
        case 0x42b200u: goto label_42b200;
        case 0x42b204u: goto label_42b204;
        case 0x42b208u: goto label_42b208;
        case 0x42b20cu: goto label_42b20c;
        case 0x42b210u: goto label_42b210;
        case 0x42b214u: goto label_42b214;
        case 0x42b218u: goto label_42b218;
        case 0x42b21cu: goto label_42b21c;
        case 0x42b220u: goto label_42b220;
        case 0x42b224u: goto label_42b224;
        case 0x42b228u: goto label_42b228;
        case 0x42b22cu: goto label_42b22c;
        case 0x42b230u: goto label_42b230;
        case 0x42b234u: goto label_42b234;
        case 0x42b238u: goto label_42b238;
        case 0x42b23cu: goto label_42b23c;
        case 0x42b240u: goto label_42b240;
        case 0x42b244u: goto label_42b244;
        case 0x42b248u: goto label_42b248;
        case 0x42b24cu: goto label_42b24c;
        case 0x42b250u: goto label_42b250;
        case 0x42b254u: goto label_42b254;
        case 0x42b258u: goto label_42b258;
        case 0x42b25cu: goto label_42b25c;
        case 0x42b260u: goto label_42b260;
        case 0x42b264u: goto label_42b264;
        case 0x42b268u: goto label_42b268;
        case 0x42b26cu: goto label_42b26c;
        case 0x42b270u: goto label_42b270;
        case 0x42b274u: goto label_42b274;
        case 0x42b278u: goto label_42b278;
        case 0x42b27cu: goto label_42b27c;
        case 0x42b280u: goto label_42b280;
        case 0x42b284u: goto label_42b284;
        case 0x42b288u: goto label_42b288;
        case 0x42b28cu: goto label_42b28c;
        case 0x42b290u: goto label_42b290;
        case 0x42b294u: goto label_42b294;
        case 0x42b298u: goto label_42b298;
        case 0x42b29cu: goto label_42b29c;
        case 0x42b2a0u: goto label_42b2a0;
        case 0x42b2a4u: goto label_42b2a4;
        case 0x42b2a8u: goto label_42b2a8;
        case 0x42b2acu: goto label_42b2ac;
        case 0x42b2b0u: goto label_42b2b0;
        case 0x42b2b4u: goto label_42b2b4;
        case 0x42b2b8u: goto label_42b2b8;
        case 0x42b2bcu: goto label_42b2bc;
        case 0x42b2c0u: goto label_42b2c0;
        case 0x42b2c4u: goto label_42b2c4;
        case 0x42b2c8u: goto label_42b2c8;
        case 0x42b2ccu: goto label_42b2cc;
        case 0x42b2d0u: goto label_42b2d0;
        case 0x42b2d4u: goto label_42b2d4;
        case 0x42b2d8u: goto label_42b2d8;
        case 0x42b2dcu: goto label_42b2dc;
        case 0x42b2e0u: goto label_42b2e0;
        case 0x42b2e4u: goto label_42b2e4;
        case 0x42b2e8u: goto label_42b2e8;
        case 0x42b2ecu: goto label_42b2ec;
        case 0x42b2f0u: goto label_42b2f0;
        case 0x42b2f4u: goto label_42b2f4;
        case 0x42b2f8u: goto label_42b2f8;
        case 0x42b2fcu: goto label_42b2fc;
        case 0x42b300u: goto label_42b300;
        case 0x42b304u: goto label_42b304;
        case 0x42b308u: goto label_42b308;
        case 0x42b30cu: goto label_42b30c;
        case 0x42b310u: goto label_42b310;
        case 0x42b314u: goto label_42b314;
        case 0x42b318u: goto label_42b318;
        case 0x42b31cu: goto label_42b31c;
        case 0x42b320u: goto label_42b320;
        case 0x42b324u: goto label_42b324;
        case 0x42b328u: goto label_42b328;
        case 0x42b32cu: goto label_42b32c;
        case 0x42b330u: goto label_42b330;
        case 0x42b334u: goto label_42b334;
        case 0x42b338u: goto label_42b338;
        case 0x42b33cu: goto label_42b33c;
        case 0x42b340u: goto label_42b340;
        case 0x42b344u: goto label_42b344;
        case 0x42b348u: goto label_42b348;
        case 0x42b34cu: goto label_42b34c;
        case 0x42b350u: goto label_42b350;
        case 0x42b354u: goto label_42b354;
        case 0x42b358u: goto label_42b358;
        case 0x42b35cu: goto label_42b35c;
        case 0x42b360u: goto label_42b360;
        case 0x42b364u: goto label_42b364;
        case 0x42b368u: goto label_42b368;
        case 0x42b36cu: goto label_42b36c;
        case 0x42b370u: goto label_42b370;
        case 0x42b374u: goto label_42b374;
        case 0x42b378u: goto label_42b378;
        case 0x42b37cu: goto label_42b37c;
        case 0x42b380u: goto label_42b380;
        case 0x42b384u: goto label_42b384;
        case 0x42b388u: goto label_42b388;
        case 0x42b38cu: goto label_42b38c;
        case 0x42b390u: goto label_42b390;
        case 0x42b394u: goto label_42b394;
        case 0x42b398u: goto label_42b398;
        case 0x42b39cu: goto label_42b39c;
        case 0x42b3a0u: goto label_42b3a0;
        case 0x42b3a4u: goto label_42b3a4;
        case 0x42b3a8u: goto label_42b3a8;
        case 0x42b3acu: goto label_42b3ac;
        case 0x42b3b0u: goto label_42b3b0;
        case 0x42b3b4u: goto label_42b3b4;
        case 0x42b3b8u: goto label_42b3b8;
        case 0x42b3bcu: goto label_42b3bc;
        case 0x42b3c0u: goto label_42b3c0;
        case 0x42b3c4u: goto label_42b3c4;
        case 0x42b3c8u: goto label_42b3c8;
        case 0x42b3ccu: goto label_42b3cc;
        case 0x42b3d0u: goto label_42b3d0;
        case 0x42b3d4u: goto label_42b3d4;
        case 0x42b3d8u: goto label_42b3d8;
        case 0x42b3dcu: goto label_42b3dc;
        case 0x42b3e0u: goto label_42b3e0;
        case 0x42b3e4u: goto label_42b3e4;
        case 0x42b3e8u: goto label_42b3e8;
        case 0x42b3ecu: goto label_42b3ec;
        case 0x42b3f0u: goto label_42b3f0;
        case 0x42b3f4u: goto label_42b3f4;
        case 0x42b3f8u: goto label_42b3f8;
        case 0x42b3fcu: goto label_42b3fc;
        case 0x42b400u: goto label_42b400;
        case 0x42b404u: goto label_42b404;
        case 0x42b408u: goto label_42b408;
        case 0x42b40cu: goto label_42b40c;
        case 0x42b410u: goto label_42b410;
        case 0x42b414u: goto label_42b414;
        case 0x42b418u: goto label_42b418;
        case 0x42b41cu: goto label_42b41c;
        case 0x42b420u: goto label_42b420;
        case 0x42b424u: goto label_42b424;
        case 0x42b428u: goto label_42b428;
        case 0x42b42cu: goto label_42b42c;
        case 0x42b430u: goto label_42b430;
        case 0x42b434u: goto label_42b434;
        case 0x42b438u: goto label_42b438;
        case 0x42b43cu: goto label_42b43c;
        case 0x42b440u: goto label_42b440;
        case 0x42b444u: goto label_42b444;
        case 0x42b448u: goto label_42b448;
        case 0x42b44cu: goto label_42b44c;
        case 0x42b450u: goto label_42b450;
        case 0x42b454u: goto label_42b454;
        case 0x42b458u: goto label_42b458;
        case 0x42b45cu: goto label_42b45c;
        case 0x42b460u: goto label_42b460;
        case 0x42b464u: goto label_42b464;
        case 0x42b468u: goto label_42b468;
        case 0x42b46cu: goto label_42b46c;
        case 0x42b470u: goto label_42b470;
        case 0x42b474u: goto label_42b474;
        case 0x42b478u: goto label_42b478;
        case 0x42b47cu: goto label_42b47c;
        case 0x42b480u: goto label_42b480;
        case 0x42b484u: goto label_42b484;
        case 0x42b488u: goto label_42b488;
        case 0x42b48cu: goto label_42b48c;
        case 0x42b490u: goto label_42b490;
        case 0x42b494u: goto label_42b494;
        case 0x42b498u: goto label_42b498;
        case 0x42b49cu: goto label_42b49c;
        case 0x42b4a0u: goto label_42b4a0;
        case 0x42b4a4u: goto label_42b4a4;
        case 0x42b4a8u: goto label_42b4a8;
        case 0x42b4acu: goto label_42b4ac;
        case 0x42b4b0u: goto label_42b4b0;
        case 0x42b4b4u: goto label_42b4b4;
        case 0x42b4b8u: goto label_42b4b8;
        case 0x42b4bcu: goto label_42b4bc;
        case 0x42b4c0u: goto label_42b4c0;
        case 0x42b4c4u: goto label_42b4c4;
        case 0x42b4c8u: goto label_42b4c8;
        case 0x42b4ccu: goto label_42b4cc;
        case 0x42b4d0u: goto label_42b4d0;
        case 0x42b4d4u: goto label_42b4d4;
        case 0x42b4d8u: goto label_42b4d8;
        case 0x42b4dcu: goto label_42b4dc;
        case 0x42b4e0u: goto label_42b4e0;
        case 0x42b4e4u: goto label_42b4e4;
        case 0x42b4e8u: goto label_42b4e8;
        case 0x42b4ecu: goto label_42b4ec;
        case 0x42b4f0u: goto label_42b4f0;
        case 0x42b4f4u: goto label_42b4f4;
        case 0x42b4f8u: goto label_42b4f8;
        case 0x42b4fcu: goto label_42b4fc;
        case 0x42b500u: goto label_42b500;
        case 0x42b504u: goto label_42b504;
        case 0x42b508u: goto label_42b508;
        case 0x42b50cu: goto label_42b50c;
        case 0x42b510u: goto label_42b510;
        case 0x42b514u: goto label_42b514;
        case 0x42b518u: goto label_42b518;
        case 0x42b51cu: goto label_42b51c;
        case 0x42b520u: goto label_42b520;
        case 0x42b524u: goto label_42b524;
        case 0x42b528u: goto label_42b528;
        case 0x42b52cu: goto label_42b52c;
        case 0x42b530u: goto label_42b530;
        case 0x42b534u: goto label_42b534;
        case 0x42b538u: goto label_42b538;
        case 0x42b53cu: goto label_42b53c;
        case 0x42b540u: goto label_42b540;
        case 0x42b544u: goto label_42b544;
        case 0x42b548u: goto label_42b548;
        case 0x42b54cu: goto label_42b54c;
        case 0x42b550u: goto label_42b550;
        case 0x42b554u: goto label_42b554;
        case 0x42b558u: goto label_42b558;
        case 0x42b55cu: goto label_42b55c;
        case 0x42b560u: goto label_42b560;
        case 0x42b564u: goto label_42b564;
        case 0x42b568u: goto label_42b568;
        case 0x42b56cu: goto label_42b56c;
        case 0x42b570u: goto label_42b570;
        case 0x42b574u: goto label_42b574;
        case 0x42b578u: goto label_42b578;
        case 0x42b57cu: goto label_42b57c;
        case 0x42b580u: goto label_42b580;
        case 0x42b584u: goto label_42b584;
        case 0x42b588u: goto label_42b588;
        case 0x42b58cu: goto label_42b58c;
        case 0x42b590u: goto label_42b590;
        case 0x42b594u: goto label_42b594;
        case 0x42b598u: goto label_42b598;
        case 0x42b59cu: goto label_42b59c;
        case 0x42b5a0u: goto label_42b5a0;
        case 0x42b5a4u: goto label_42b5a4;
        case 0x42b5a8u: goto label_42b5a8;
        case 0x42b5acu: goto label_42b5ac;
        case 0x42b5b0u: goto label_42b5b0;
        case 0x42b5b4u: goto label_42b5b4;
        case 0x42b5b8u: goto label_42b5b8;
        case 0x42b5bcu: goto label_42b5bc;
        case 0x42b5c0u: goto label_42b5c0;
        case 0x42b5c4u: goto label_42b5c4;
        case 0x42b5c8u: goto label_42b5c8;
        case 0x42b5ccu: goto label_42b5cc;
        case 0x42b5d0u: goto label_42b5d0;
        case 0x42b5d4u: goto label_42b5d4;
        case 0x42b5d8u: goto label_42b5d8;
        case 0x42b5dcu: goto label_42b5dc;
        case 0x42b5e0u: goto label_42b5e0;
        case 0x42b5e4u: goto label_42b5e4;
        case 0x42b5e8u: goto label_42b5e8;
        case 0x42b5ecu: goto label_42b5ec;
        case 0x42b5f0u: goto label_42b5f0;
        case 0x42b5f4u: goto label_42b5f4;
        case 0x42b5f8u: goto label_42b5f8;
        case 0x42b5fcu: goto label_42b5fc;
        case 0x42b600u: goto label_42b600;
        case 0x42b604u: goto label_42b604;
        case 0x42b608u: goto label_42b608;
        case 0x42b60cu: goto label_42b60c;
        case 0x42b610u: goto label_42b610;
        case 0x42b614u: goto label_42b614;
        case 0x42b618u: goto label_42b618;
        case 0x42b61cu: goto label_42b61c;
        case 0x42b620u: goto label_42b620;
        case 0x42b624u: goto label_42b624;
        case 0x42b628u: goto label_42b628;
        case 0x42b62cu: goto label_42b62c;
        case 0x42b630u: goto label_42b630;
        case 0x42b634u: goto label_42b634;
        case 0x42b638u: goto label_42b638;
        case 0x42b63cu: goto label_42b63c;
        case 0x42b640u: goto label_42b640;
        case 0x42b644u: goto label_42b644;
        case 0x42b648u: goto label_42b648;
        case 0x42b64cu: goto label_42b64c;
        case 0x42b650u: goto label_42b650;
        case 0x42b654u: goto label_42b654;
        case 0x42b658u: goto label_42b658;
        case 0x42b65cu: goto label_42b65c;
        case 0x42b660u: goto label_42b660;
        case 0x42b664u: goto label_42b664;
        case 0x42b668u: goto label_42b668;
        case 0x42b66cu: goto label_42b66c;
        case 0x42b670u: goto label_42b670;
        case 0x42b674u: goto label_42b674;
        case 0x42b678u: goto label_42b678;
        case 0x42b67cu: goto label_42b67c;
        case 0x42b680u: goto label_42b680;
        case 0x42b684u: goto label_42b684;
        case 0x42b688u: goto label_42b688;
        case 0x42b68cu: goto label_42b68c;
        case 0x42b690u: goto label_42b690;
        case 0x42b694u: goto label_42b694;
        case 0x42b698u: goto label_42b698;
        case 0x42b69cu: goto label_42b69c;
        case 0x42b6a0u: goto label_42b6a0;
        case 0x42b6a4u: goto label_42b6a4;
        case 0x42b6a8u: goto label_42b6a8;
        case 0x42b6acu: goto label_42b6ac;
        case 0x42b6b0u: goto label_42b6b0;
        case 0x42b6b4u: goto label_42b6b4;
        case 0x42b6b8u: goto label_42b6b8;
        case 0x42b6bcu: goto label_42b6bc;
        case 0x42b6c0u: goto label_42b6c0;
        case 0x42b6c4u: goto label_42b6c4;
        case 0x42b6c8u: goto label_42b6c8;
        case 0x42b6ccu: goto label_42b6cc;
        case 0x42b6d0u: goto label_42b6d0;
        case 0x42b6d4u: goto label_42b6d4;
        case 0x42b6d8u: goto label_42b6d8;
        case 0x42b6dcu: goto label_42b6dc;
        case 0x42b6e0u: goto label_42b6e0;
        case 0x42b6e4u: goto label_42b6e4;
        case 0x42b6e8u: goto label_42b6e8;
        case 0x42b6ecu: goto label_42b6ec;
        case 0x42b6f0u: goto label_42b6f0;
        case 0x42b6f4u: goto label_42b6f4;
        case 0x42b6f8u: goto label_42b6f8;
        case 0x42b6fcu: goto label_42b6fc;
        case 0x42b700u: goto label_42b700;
        case 0x42b704u: goto label_42b704;
        case 0x42b708u: goto label_42b708;
        case 0x42b70cu: goto label_42b70c;
        case 0x42b710u: goto label_42b710;
        case 0x42b714u: goto label_42b714;
        case 0x42b718u: goto label_42b718;
        case 0x42b71cu: goto label_42b71c;
        case 0x42b720u: goto label_42b720;
        case 0x42b724u: goto label_42b724;
        case 0x42b728u: goto label_42b728;
        case 0x42b72cu: goto label_42b72c;
        case 0x42b730u: goto label_42b730;
        case 0x42b734u: goto label_42b734;
        case 0x42b738u: goto label_42b738;
        case 0x42b73cu: goto label_42b73c;
        case 0x42b740u: goto label_42b740;
        case 0x42b744u: goto label_42b744;
        case 0x42b748u: goto label_42b748;
        case 0x42b74cu: goto label_42b74c;
        case 0x42b750u: goto label_42b750;
        case 0x42b754u: goto label_42b754;
        case 0x42b758u: goto label_42b758;
        case 0x42b75cu: goto label_42b75c;
        case 0x42b760u: goto label_42b760;
        case 0x42b764u: goto label_42b764;
        case 0x42b768u: goto label_42b768;
        case 0x42b76cu: goto label_42b76c;
        case 0x42b770u: goto label_42b770;
        case 0x42b774u: goto label_42b774;
        case 0x42b778u: goto label_42b778;
        case 0x42b77cu: goto label_42b77c;
        case 0x42b780u: goto label_42b780;
        case 0x42b784u: goto label_42b784;
        case 0x42b788u: goto label_42b788;
        case 0x42b78cu: goto label_42b78c;
        case 0x42b790u: goto label_42b790;
        case 0x42b794u: goto label_42b794;
        case 0x42b798u: goto label_42b798;
        case 0x42b79cu: goto label_42b79c;
        case 0x42b7a0u: goto label_42b7a0;
        case 0x42b7a4u: goto label_42b7a4;
        case 0x42b7a8u: goto label_42b7a8;
        case 0x42b7acu: goto label_42b7ac;
        case 0x42b7b0u: goto label_42b7b0;
        case 0x42b7b4u: goto label_42b7b4;
        case 0x42b7b8u: goto label_42b7b8;
        case 0x42b7bcu: goto label_42b7bc;
        case 0x42b7c0u: goto label_42b7c0;
        case 0x42b7c4u: goto label_42b7c4;
        case 0x42b7c8u: goto label_42b7c8;
        case 0x42b7ccu: goto label_42b7cc;
        case 0x42b7d0u: goto label_42b7d0;
        case 0x42b7d4u: goto label_42b7d4;
        case 0x42b7d8u: goto label_42b7d8;
        case 0x42b7dcu: goto label_42b7dc;
        case 0x42b7e0u: goto label_42b7e0;
        case 0x42b7e4u: goto label_42b7e4;
        case 0x42b7e8u: goto label_42b7e8;
        case 0x42b7ecu: goto label_42b7ec;
        case 0x42b7f0u: goto label_42b7f0;
        case 0x42b7f4u: goto label_42b7f4;
        case 0x42b7f8u: goto label_42b7f8;
        case 0x42b7fcu: goto label_42b7fc;
        case 0x42b800u: goto label_42b800;
        case 0x42b804u: goto label_42b804;
        case 0x42b808u: goto label_42b808;
        case 0x42b80cu: goto label_42b80c;
        case 0x42b810u: goto label_42b810;
        case 0x42b814u: goto label_42b814;
        case 0x42b818u: goto label_42b818;
        case 0x42b81cu: goto label_42b81c;
        case 0x42b820u: goto label_42b820;
        case 0x42b824u: goto label_42b824;
        case 0x42b828u: goto label_42b828;
        case 0x42b82cu: goto label_42b82c;
        case 0x42b830u: goto label_42b830;
        case 0x42b834u: goto label_42b834;
        case 0x42b838u: goto label_42b838;
        case 0x42b83cu: goto label_42b83c;
        case 0x42b840u: goto label_42b840;
        case 0x42b844u: goto label_42b844;
        case 0x42b848u: goto label_42b848;
        case 0x42b84cu: goto label_42b84c;
        case 0x42b850u: goto label_42b850;
        case 0x42b854u: goto label_42b854;
        case 0x42b858u: goto label_42b858;
        case 0x42b85cu: goto label_42b85c;
        case 0x42b860u: goto label_42b860;
        case 0x42b864u: goto label_42b864;
        case 0x42b868u: goto label_42b868;
        case 0x42b86cu: goto label_42b86c;
        case 0x42b870u: goto label_42b870;
        case 0x42b874u: goto label_42b874;
        case 0x42b878u: goto label_42b878;
        case 0x42b87cu: goto label_42b87c;
        case 0x42b880u: goto label_42b880;
        case 0x42b884u: goto label_42b884;
        case 0x42b888u: goto label_42b888;
        case 0x42b88cu: goto label_42b88c;
        case 0x42b890u: goto label_42b890;
        case 0x42b894u: goto label_42b894;
        case 0x42b898u: goto label_42b898;
        case 0x42b89cu: goto label_42b89c;
        case 0x42b8a0u: goto label_42b8a0;
        case 0x42b8a4u: goto label_42b8a4;
        case 0x42b8a8u: goto label_42b8a8;
        case 0x42b8acu: goto label_42b8ac;
        case 0x42b8b0u: goto label_42b8b0;
        case 0x42b8b4u: goto label_42b8b4;
        case 0x42b8b8u: goto label_42b8b8;
        case 0x42b8bcu: goto label_42b8bc;
        case 0x42b8c0u: goto label_42b8c0;
        case 0x42b8c4u: goto label_42b8c4;
        case 0x42b8c8u: goto label_42b8c8;
        case 0x42b8ccu: goto label_42b8cc;
        case 0x42b8d0u: goto label_42b8d0;
        case 0x42b8d4u: goto label_42b8d4;
        case 0x42b8d8u: goto label_42b8d8;
        case 0x42b8dcu: goto label_42b8dc;
        case 0x42b8e0u: goto label_42b8e0;
        case 0x42b8e4u: goto label_42b8e4;
        case 0x42b8e8u: goto label_42b8e8;
        case 0x42b8ecu: goto label_42b8ec;
        case 0x42b8f0u: goto label_42b8f0;
        case 0x42b8f4u: goto label_42b8f4;
        case 0x42b8f8u: goto label_42b8f8;
        case 0x42b8fcu: goto label_42b8fc;
        case 0x42b900u: goto label_42b900;
        case 0x42b904u: goto label_42b904;
        case 0x42b908u: goto label_42b908;
        case 0x42b90cu: goto label_42b90c;
        case 0x42b910u: goto label_42b910;
        case 0x42b914u: goto label_42b914;
        case 0x42b918u: goto label_42b918;
        case 0x42b91cu: goto label_42b91c;
        case 0x42b920u: goto label_42b920;
        case 0x42b924u: goto label_42b924;
        case 0x42b928u: goto label_42b928;
        case 0x42b92cu: goto label_42b92c;
        case 0x42b930u: goto label_42b930;
        case 0x42b934u: goto label_42b934;
        case 0x42b938u: goto label_42b938;
        case 0x42b93cu: goto label_42b93c;
        case 0x42b940u: goto label_42b940;
        case 0x42b944u: goto label_42b944;
        case 0x42b948u: goto label_42b948;
        case 0x42b94cu: goto label_42b94c;
        case 0x42b950u: goto label_42b950;
        case 0x42b954u: goto label_42b954;
        case 0x42b958u: goto label_42b958;
        case 0x42b95cu: goto label_42b95c;
        case 0x42b960u: goto label_42b960;
        case 0x42b964u: goto label_42b964;
        case 0x42b968u: goto label_42b968;
        case 0x42b96cu: goto label_42b96c;
        case 0x42b970u: goto label_42b970;
        case 0x42b974u: goto label_42b974;
        case 0x42b978u: goto label_42b978;
        case 0x42b97cu: goto label_42b97c;
        case 0x42b980u: goto label_42b980;
        case 0x42b984u: goto label_42b984;
        case 0x42b988u: goto label_42b988;
        case 0x42b98cu: goto label_42b98c;
        case 0x42b990u: goto label_42b990;
        case 0x42b994u: goto label_42b994;
        case 0x42b998u: goto label_42b998;
        case 0x42b99cu: goto label_42b99c;
        case 0x42b9a0u: goto label_42b9a0;
        case 0x42b9a4u: goto label_42b9a4;
        case 0x42b9a8u: goto label_42b9a8;
        case 0x42b9acu: goto label_42b9ac;
        case 0x42b9b0u: goto label_42b9b0;
        case 0x42b9b4u: goto label_42b9b4;
        case 0x42b9b8u: goto label_42b9b8;
        case 0x42b9bcu: goto label_42b9bc;
        case 0x42b9c0u: goto label_42b9c0;
        case 0x42b9c4u: goto label_42b9c4;
        case 0x42b9c8u: goto label_42b9c8;
        case 0x42b9ccu: goto label_42b9cc;
        case 0x42b9d0u: goto label_42b9d0;
        case 0x42b9d4u: goto label_42b9d4;
        case 0x42b9d8u: goto label_42b9d8;
        case 0x42b9dcu: goto label_42b9dc;
        case 0x42b9e0u: goto label_42b9e0;
        case 0x42b9e4u: goto label_42b9e4;
        case 0x42b9e8u: goto label_42b9e8;
        case 0x42b9ecu: goto label_42b9ec;
        case 0x42b9f0u: goto label_42b9f0;
        case 0x42b9f4u: goto label_42b9f4;
        case 0x42b9f8u: goto label_42b9f8;
        case 0x42b9fcu: goto label_42b9fc;
        case 0x42ba00u: goto label_42ba00;
        case 0x42ba04u: goto label_42ba04;
        case 0x42ba08u: goto label_42ba08;
        case 0x42ba0cu: goto label_42ba0c;
        case 0x42ba10u: goto label_42ba10;
        case 0x42ba14u: goto label_42ba14;
        case 0x42ba18u: goto label_42ba18;
        case 0x42ba1cu: goto label_42ba1c;
        case 0x42ba20u: goto label_42ba20;
        case 0x42ba24u: goto label_42ba24;
        case 0x42ba28u: goto label_42ba28;
        case 0x42ba2cu: goto label_42ba2c;
        case 0x42ba30u: goto label_42ba30;
        case 0x42ba34u: goto label_42ba34;
        case 0x42ba38u: goto label_42ba38;
        case 0x42ba3cu: goto label_42ba3c;
        case 0x42ba40u: goto label_42ba40;
        case 0x42ba44u: goto label_42ba44;
        case 0x42ba48u: goto label_42ba48;
        case 0x42ba4cu: goto label_42ba4c;
        case 0x42ba50u: goto label_42ba50;
        case 0x42ba54u: goto label_42ba54;
        case 0x42ba58u: goto label_42ba58;
        case 0x42ba5cu: goto label_42ba5c;
        case 0x42ba60u: goto label_42ba60;
        case 0x42ba64u: goto label_42ba64;
        case 0x42ba68u: goto label_42ba68;
        case 0x42ba6cu: goto label_42ba6c;
        case 0x42ba70u: goto label_42ba70;
        case 0x42ba74u: goto label_42ba74;
        case 0x42ba78u: goto label_42ba78;
        case 0x42ba7cu: goto label_42ba7c;
        case 0x42ba80u: goto label_42ba80;
        case 0x42ba84u: goto label_42ba84;
        case 0x42ba88u: goto label_42ba88;
        case 0x42ba8cu: goto label_42ba8c;
        case 0x42ba90u: goto label_42ba90;
        case 0x42ba94u: goto label_42ba94;
        case 0x42ba98u: goto label_42ba98;
        case 0x42ba9cu: goto label_42ba9c;
        case 0x42baa0u: goto label_42baa0;
        case 0x42baa4u: goto label_42baa4;
        case 0x42baa8u: goto label_42baa8;
        case 0x42baacu: goto label_42baac;
        case 0x42bab0u: goto label_42bab0;
        case 0x42bab4u: goto label_42bab4;
        case 0x42bab8u: goto label_42bab8;
        case 0x42babcu: goto label_42babc;
        case 0x42bac0u: goto label_42bac0;
        case 0x42bac4u: goto label_42bac4;
        case 0x42bac8u: goto label_42bac8;
        case 0x42baccu: goto label_42bacc;
        case 0x42bad0u: goto label_42bad0;
        case 0x42bad4u: goto label_42bad4;
        case 0x42bad8u: goto label_42bad8;
        case 0x42badcu: goto label_42badc;
        case 0x42bae0u: goto label_42bae0;
        case 0x42bae4u: goto label_42bae4;
        case 0x42bae8u: goto label_42bae8;
        case 0x42baecu: goto label_42baec;
        case 0x42baf0u: goto label_42baf0;
        case 0x42baf4u: goto label_42baf4;
        case 0x42baf8u: goto label_42baf8;
        case 0x42bafcu: goto label_42bafc;
        case 0x42bb00u: goto label_42bb00;
        case 0x42bb04u: goto label_42bb04;
        case 0x42bb08u: goto label_42bb08;
        case 0x42bb0cu: goto label_42bb0c;
        case 0x42bb10u: goto label_42bb10;
        case 0x42bb14u: goto label_42bb14;
        case 0x42bb18u: goto label_42bb18;
        case 0x42bb1cu: goto label_42bb1c;
        case 0x42bb20u: goto label_42bb20;
        case 0x42bb24u: goto label_42bb24;
        case 0x42bb28u: goto label_42bb28;
        case 0x42bb2cu: goto label_42bb2c;
        case 0x42bb30u: goto label_42bb30;
        case 0x42bb34u: goto label_42bb34;
        case 0x42bb38u: goto label_42bb38;
        case 0x42bb3cu: goto label_42bb3c;
        case 0x42bb40u: goto label_42bb40;
        case 0x42bb44u: goto label_42bb44;
        case 0x42bb48u: goto label_42bb48;
        case 0x42bb4cu: goto label_42bb4c;
        case 0x42bb50u: goto label_42bb50;
        case 0x42bb54u: goto label_42bb54;
        case 0x42bb58u: goto label_42bb58;
        case 0x42bb5cu: goto label_42bb5c;
        case 0x42bb60u: goto label_42bb60;
        case 0x42bb64u: goto label_42bb64;
        case 0x42bb68u: goto label_42bb68;
        case 0x42bb6cu: goto label_42bb6c;
        case 0x42bb70u: goto label_42bb70;
        case 0x42bb74u: goto label_42bb74;
        case 0x42bb78u: goto label_42bb78;
        case 0x42bb7cu: goto label_42bb7c;
        case 0x42bb80u: goto label_42bb80;
        case 0x42bb84u: goto label_42bb84;
        case 0x42bb88u: goto label_42bb88;
        case 0x42bb8cu: goto label_42bb8c;
        case 0x42bb90u: goto label_42bb90;
        case 0x42bb94u: goto label_42bb94;
        case 0x42bb98u: goto label_42bb98;
        case 0x42bb9cu: goto label_42bb9c;
        case 0x42bba0u: goto label_42bba0;
        case 0x42bba4u: goto label_42bba4;
        case 0x42bba8u: goto label_42bba8;
        case 0x42bbacu: goto label_42bbac;
        case 0x42bbb0u: goto label_42bbb0;
        case 0x42bbb4u: goto label_42bbb4;
        case 0x42bbb8u: goto label_42bbb8;
        case 0x42bbbcu: goto label_42bbbc;
        case 0x42bbc0u: goto label_42bbc0;
        case 0x42bbc4u: goto label_42bbc4;
        case 0x42bbc8u: goto label_42bbc8;
        case 0x42bbccu: goto label_42bbcc;
        case 0x42bbd0u: goto label_42bbd0;
        case 0x42bbd4u: goto label_42bbd4;
        case 0x42bbd8u: goto label_42bbd8;
        case 0x42bbdcu: goto label_42bbdc;
        case 0x42bbe0u: goto label_42bbe0;
        case 0x42bbe4u: goto label_42bbe4;
        case 0x42bbe8u: goto label_42bbe8;
        case 0x42bbecu: goto label_42bbec;
        case 0x42bbf0u: goto label_42bbf0;
        case 0x42bbf4u: goto label_42bbf4;
        case 0x42bbf8u: goto label_42bbf8;
        case 0x42bbfcu: goto label_42bbfc;
        case 0x42bc00u: goto label_42bc00;
        case 0x42bc04u: goto label_42bc04;
        case 0x42bc08u: goto label_42bc08;
        case 0x42bc0cu: goto label_42bc0c;
        case 0x42bc10u: goto label_42bc10;
        case 0x42bc14u: goto label_42bc14;
        case 0x42bc18u: goto label_42bc18;
        case 0x42bc1cu: goto label_42bc1c;
        case 0x42bc20u: goto label_42bc20;
        case 0x42bc24u: goto label_42bc24;
        case 0x42bc28u: goto label_42bc28;
        case 0x42bc2cu: goto label_42bc2c;
        case 0x42bc30u: goto label_42bc30;
        case 0x42bc34u: goto label_42bc34;
        case 0x42bc38u: goto label_42bc38;
        case 0x42bc3cu: goto label_42bc3c;
        case 0x42bc40u: goto label_42bc40;
        case 0x42bc44u: goto label_42bc44;
        case 0x42bc48u: goto label_42bc48;
        case 0x42bc4cu: goto label_42bc4c;
        case 0x42bc50u: goto label_42bc50;
        case 0x42bc54u: goto label_42bc54;
        case 0x42bc58u: goto label_42bc58;
        case 0x42bc5cu: goto label_42bc5c;
        case 0x42bc60u: goto label_42bc60;
        case 0x42bc64u: goto label_42bc64;
        case 0x42bc68u: goto label_42bc68;
        case 0x42bc6cu: goto label_42bc6c;
        case 0x42bc70u: goto label_42bc70;
        case 0x42bc74u: goto label_42bc74;
        case 0x42bc78u: goto label_42bc78;
        case 0x42bc7cu: goto label_42bc7c;
        case 0x42bc80u: goto label_42bc80;
        case 0x42bc84u: goto label_42bc84;
        case 0x42bc88u: goto label_42bc88;
        case 0x42bc8cu: goto label_42bc8c;
        case 0x42bc90u: goto label_42bc90;
        case 0x42bc94u: goto label_42bc94;
        case 0x42bc98u: goto label_42bc98;
        case 0x42bc9cu: goto label_42bc9c;
        case 0x42bca0u: goto label_42bca0;
        case 0x42bca4u: goto label_42bca4;
        case 0x42bca8u: goto label_42bca8;
        case 0x42bcacu: goto label_42bcac;
        case 0x42bcb0u: goto label_42bcb0;
        case 0x42bcb4u: goto label_42bcb4;
        case 0x42bcb8u: goto label_42bcb8;
        case 0x42bcbcu: goto label_42bcbc;
        case 0x42bcc0u: goto label_42bcc0;
        case 0x42bcc4u: goto label_42bcc4;
        case 0x42bcc8u: goto label_42bcc8;
        case 0x42bcccu: goto label_42bccc;
        case 0x42bcd0u: goto label_42bcd0;
        case 0x42bcd4u: goto label_42bcd4;
        case 0x42bcd8u: goto label_42bcd8;
        case 0x42bcdcu: goto label_42bcdc;
        case 0x42bce0u: goto label_42bce0;
        case 0x42bce4u: goto label_42bce4;
        case 0x42bce8u: goto label_42bce8;
        case 0x42bcecu: goto label_42bcec;
        case 0x42bcf0u: goto label_42bcf0;
        case 0x42bcf4u: goto label_42bcf4;
        case 0x42bcf8u: goto label_42bcf8;
        case 0x42bcfcu: goto label_42bcfc;
        case 0x42bd00u: goto label_42bd00;
        case 0x42bd04u: goto label_42bd04;
        case 0x42bd08u: goto label_42bd08;
        case 0x42bd0cu: goto label_42bd0c;
        case 0x42bd10u: goto label_42bd10;
        case 0x42bd14u: goto label_42bd14;
        case 0x42bd18u: goto label_42bd18;
        case 0x42bd1cu: goto label_42bd1c;
        case 0x42bd20u: goto label_42bd20;
        case 0x42bd24u: goto label_42bd24;
        case 0x42bd28u: goto label_42bd28;
        case 0x42bd2cu: goto label_42bd2c;
        case 0x42bd30u: goto label_42bd30;
        case 0x42bd34u: goto label_42bd34;
        case 0x42bd38u: goto label_42bd38;
        case 0x42bd3cu: goto label_42bd3c;
        case 0x42bd40u: goto label_42bd40;
        case 0x42bd44u: goto label_42bd44;
        case 0x42bd48u: goto label_42bd48;
        case 0x42bd4cu: goto label_42bd4c;
        case 0x42bd50u: goto label_42bd50;
        case 0x42bd54u: goto label_42bd54;
        case 0x42bd58u: goto label_42bd58;
        case 0x42bd5cu: goto label_42bd5c;
        case 0x42bd60u: goto label_42bd60;
        case 0x42bd64u: goto label_42bd64;
        case 0x42bd68u: goto label_42bd68;
        case 0x42bd6cu: goto label_42bd6c;
        case 0x42bd70u: goto label_42bd70;
        case 0x42bd74u: goto label_42bd74;
        case 0x42bd78u: goto label_42bd78;
        case 0x42bd7cu: goto label_42bd7c;
        case 0x42bd80u: goto label_42bd80;
        case 0x42bd84u: goto label_42bd84;
        case 0x42bd88u: goto label_42bd88;
        case 0x42bd8cu: goto label_42bd8c;
        case 0x42bd90u: goto label_42bd90;
        case 0x42bd94u: goto label_42bd94;
        case 0x42bd98u: goto label_42bd98;
        case 0x42bd9cu: goto label_42bd9c;
        case 0x42bda0u: goto label_42bda0;
        case 0x42bda4u: goto label_42bda4;
        case 0x42bda8u: goto label_42bda8;
        case 0x42bdacu: goto label_42bdac;
        case 0x42bdb0u: goto label_42bdb0;
        case 0x42bdb4u: goto label_42bdb4;
        case 0x42bdb8u: goto label_42bdb8;
        case 0x42bdbcu: goto label_42bdbc;
        case 0x42bdc0u: goto label_42bdc0;
        case 0x42bdc4u: goto label_42bdc4;
        case 0x42bdc8u: goto label_42bdc8;
        case 0x42bdccu: goto label_42bdcc;
        case 0x42bdd0u: goto label_42bdd0;
        case 0x42bdd4u: goto label_42bdd4;
        case 0x42bdd8u: goto label_42bdd8;
        case 0x42bddcu: goto label_42bddc;
        case 0x42bde0u: goto label_42bde0;
        case 0x42bde4u: goto label_42bde4;
        case 0x42bde8u: goto label_42bde8;
        case 0x42bdecu: goto label_42bdec;
        case 0x42bdf0u: goto label_42bdf0;
        case 0x42bdf4u: goto label_42bdf4;
        case 0x42bdf8u: goto label_42bdf8;
        case 0x42bdfcu: goto label_42bdfc;
        case 0x42be00u: goto label_42be00;
        case 0x42be04u: goto label_42be04;
        case 0x42be08u: goto label_42be08;
        case 0x42be0cu: goto label_42be0c;
        case 0x42be10u: goto label_42be10;
        case 0x42be14u: goto label_42be14;
        case 0x42be18u: goto label_42be18;
        case 0x42be1cu: goto label_42be1c;
        case 0x42be20u: goto label_42be20;
        case 0x42be24u: goto label_42be24;
        case 0x42be28u: goto label_42be28;
        case 0x42be2cu: goto label_42be2c;
        case 0x42be30u: goto label_42be30;
        case 0x42be34u: goto label_42be34;
        case 0x42be38u: goto label_42be38;
        case 0x42be3cu: goto label_42be3c;
        case 0x42be40u: goto label_42be40;
        case 0x42be44u: goto label_42be44;
        case 0x42be48u: goto label_42be48;
        case 0x42be4cu: goto label_42be4c;
        case 0x42be50u: goto label_42be50;
        case 0x42be54u: goto label_42be54;
        case 0x42be58u: goto label_42be58;
        case 0x42be5cu: goto label_42be5c;
        case 0x42be60u: goto label_42be60;
        case 0x42be64u: goto label_42be64;
        case 0x42be68u: goto label_42be68;
        case 0x42be6cu: goto label_42be6c;
        case 0x42be70u: goto label_42be70;
        case 0x42be74u: goto label_42be74;
        case 0x42be78u: goto label_42be78;
        case 0x42be7cu: goto label_42be7c;
        case 0x42be80u: goto label_42be80;
        case 0x42be84u: goto label_42be84;
        case 0x42be88u: goto label_42be88;
        case 0x42be8cu: goto label_42be8c;
        case 0x42be90u: goto label_42be90;
        case 0x42be94u: goto label_42be94;
        case 0x42be98u: goto label_42be98;
        case 0x42be9cu: goto label_42be9c;
        case 0x42bea0u: goto label_42bea0;
        case 0x42bea4u: goto label_42bea4;
        case 0x42bea8u: goto label_42bea8;
        case 0x42beacu: goto label_42beac;
        case 0x42beb0u: goto label_42beb0;
        case 0x42beb4u: goto label_42beb4;
        case 0x42beb8u: goto label_42beb8;
        case 0x42bebcu: goto label_42bebc;
        case 0x42bec0u: goto label_42bec0;
        case 0x42bec4u: goto label_42bec4;
        case 0x42bec8u: goto label_42bec8;
        case 0x42beccu: goto label_42becc;
        case 0x42bed0u: goto label_42bed0;
        case 0x42bed4u: goto label_42bed4;
        case 0x42bed8u: goto label_42bed8;
        case 0x42bedcu: goto label_42bedc;
        case 0x42bee0u: goto label_42bee0;
        case 0x42bee4u: goto label_42bee4;
        case 0x42bee8u: goto label_42bee8;
        case 0x42beecu: goto label_42beec;
        case 0x42bef0u: goto label_42bef0;
        case 0x42bef4u: goto label_42bef4;
        case 0x42bef8u: goto label_42bef8;
        case 0x42befcu: goto label_42befc;
        case 0x42bf00u: goto label_42bf00;
        case 0x42bf04u: goto label_42bf04;
        case 0x42bf08u: goto label_42bf08;
        case 0x42bf0cu: goto label_42bf0c;
        case 0x42bf10u: goto label_42bf10;
        case 0x42bf14u: goto label_42bf14;
        case 0x42bf18u: goto label_42bf18;
        case 0x42bf1cu: goto label_42bf1c;
        case 0x42bf20u: goto label_42bf20;
        case 0x42bf24u: goto label_42bf24;
        case 0x42bf28u: goto label_42bf28;
        case 0x42bf2cu: goto label_42bf2c;
        case 0x42bf30u: goto label_42bf30;
        case 0x42bf34u: goto label_42bf34;
        case 0x42bf38u: goto label_42bf38;
        case 0x42bf3cu: goto label_42bf3c;
        case 0x42bf40u: goto label_42bf40;
        case 0x42bf44u: goto label_42bf44;
        case 0x42bf48u: goto label_42bf48;
        case 0x42bf4cu: goto label_42bf4c;
        case 0x42bf50u: goto label_42bf50;
        case 0x42bf54u: goto label_42bf54;
        case 0x42bf58u: goto label_42bf58;
        case 0x42bf5cu: goto label_42bf5c;
        case 0x42bf60u: goto label_42bf60;
        case 0x42bf64u: goto label_42bf64;
        case 0x42bf68u: goto label_42bf68;
        case 0x42bf6cu: goto label_42bf6c;
        case 0x42bf70u: goto label_42bf70;
        case 0x42bf74u: goto label_42bf74;
        case 0x42bf78u: goto label_42bf78;
        case 0x42bf7cu: goto label_42bf7c;
        case 0x42bf80u: goto label_42bf80;
        case 0x42bf84u: goto label_42bf84;
        case 0x42bf88u: goto label_42bf88;
        case 0x42bf8cu: goto label_42bf8c;
        case 0x42bf90u: goto label_42bf90;
        case 0x42bf94u: goto label_42bf94;
        case 0x42bf98u: goto label_42bf98;
        case 0x42bf9cu: goto label_42bf9c;
        case 0x42bfa0u: goto label_42bfa0;
        case 0x42bfa4u: goto label_42bfa4;
        case 0x42bfa8u: goto label_42bfa8;
        case 0x42bfacu: goto label_42bfac;
        case 0x42bfb0u: goto label_42bfb0;
        case 0x42bfb4u: goto label_42bfb4;
        case 0x42bfb8u: goto label_42bfb8;
        case 0x42bfbcu: goto label_42bfbc;
        case 0x42bfc0u: goto label_42bfc0;
        case 0x42bfc4u: goto label_42bfc4;
        case 0x42bfc8u: goto label_42bfc8;
        case 0x42bfccu: goto label_42bfcc;
        case 0x42bfd0u: goto label_42bfd0;
        case 0x42bfd4u: goto label_42bfd4;
        case 0x42bfd8u: goto label_42bfd8;
        case 0x42bfdcu: goto label_42bfdc;
        case 0x42bfe0u: goto label_42bfe0;
        case 0x42bfe4u: goto label_42bfe4;
        case 0x42bfe8u: goto label_42bfe8;
        case 0x42bfecu: goto label_42bfec;
        case 0x42bff0u: goto label_42bff0;
        case 0x42bff4u: goto label_42bff4;
        case 0x42bff8u: goto label_42bff8;
        case 0x42bffcu: goto label_42bffc;
        case 0x42c000u: goto label_42c000;
        case 0x42c004u: goto label_42c004;
        case 0x42c008u: goto label_42c008;
        case 0x42c00cu: goto label_42c00c;
        case 0x42c010u: goto label_42c010;
        case 0x42c014u: goto label_42c014;
        case 0x42c018u: goto label_42c018;
        case 0x42c01cu: goto label_42c01c;
        case 0x42c020u: goto label_42c020;
        case 0x42c024u: goto label_42c024;
        case 0x42c028u: goto label_42c028;
        case 0x42c02cu: goto label_42c02c;
        case 0x42c030u: goto label_42c030;
        case 0x42c034u: goto label_42c034;
        case 0x42c038u: goto label_42c038;
        case 0x42c03cu: goto label_42c03c;
        case 0x42c040u: goto label_42c040;
        case 0x42c044u: goto label_42c044;
        case 0x42c048u: goto label_42c048;
        case 0x42c04cu: goto label_42c04c;
        case 0x42c050u: goto label_42c050;
        case 0x42c054u: goto label_42c054;
        case 0x42c058u: goto label_42c058;
        case 0x42c05cu: goto label_42c05c;
        case 0x42c060u: goto label_42c060;
        case 0x42c064u: goto label_42c064;
        case 0x42c068u: goto label_42c068;
        case 0x42c06cu: goto label_42c06c;
        case 0x42c070u: goto label_42c070;
        case 0x42c074u: goto label_42c074;
        case 0x42c078u: goto label_42c078;
        case 0x42c07cu: goto label_42c07c;
        case 0x42c080u: goto label_42c080;
        case 0x42c084u: goto label_42c084;
        case 0x42c088u: goto label_42c088;
        case 0x42c08cu: goto label_42c08c;
        case 0x42c090u: goto label_42c090;
        case 0x42c094u: goto label_42c094;
        default: break;
    }

    ctx->pc = 0x42a178u;

label_42a178:
    // 0x42a178: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42a178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_42a17c:
    // 0x42a17c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x42a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_42a180:
    // 0x42a180: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x42a180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_42a184:
    // 0x42a184: 0x2c62001e  sltiu       $v0, $v1, 0x1E
    ctx->pc = 0x42a184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_42a188:
    // 0x42a188: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42a188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42a18c:
    // 0x42a18c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x42a18cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_42a190:
    // 0x42a190: 0x10400296  beqz        $v0, . + 4 + (0x296 << 2)
label_42a194:
    if (ctx->pc == 0x42A194u) {
        ctx->pc = 0x42A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A190u;
        // 0x42a194: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A198u;
        goto label_42a198;
    }
    ctx->pc = 0x42A190u;
    {
        const bool branch_taken_0x42a190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A190u;
        // 0x42a194: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a190) {
            ctx->pc = 0x42ABECu;
            goto label_42abec;
        }
    }
    ctx->pc = 0x42A198u;
label_42a198:
    // 0x42a198: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x42a198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_42a19c:
    // 0x42a19c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x42a19cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_42a1a0:
    // 0x42a1a0: 0x244206f0  addiu       $v0, $v0, 0x6F0
    ctx->pc = 0x42a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1776));
label_42a1a4:
    // 0x42a1a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x42a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_42a1a8:
    // 0x42a1a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x42a1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42a1ac:
    // 0x42a1ac: 0x800008  jr          $a0
label_42a1b0:
    if (ctx->pc == 0x42A1B0u) {
        ctx->pc = 0x42A1B4u;
        goto label_42a1b4;
    }
    ctx->pc = 0x42A1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x42A1B4u: goto label_42a1b4;
            case 0x42A340u: goto label_42a340;
            case 0x42A3D0u: goto label_42a3d0;
            case 0x42A468u: goto label_42a468;
            case 0x42A500u: goto label_42a500;
            case 0x42A510u: goto label_42a510;
            case 0x42A588u: goto label_42a588;
            case 0x42A5B4u: goto label_42a5b4;
            case 0x42A678u: goto label_42a678;
            case 0x42A750u: goto label_42a750;
            case 0x42A848u: goto label_42a848;
            case 0x42A940u: goto label_42a940;
            case 0x42A97Cu: goto label_42a97c;
            case 0x42A9B4u: goto label_42a9b4;
            case 0x42AA18u: goto label_42aa18;
            case 0x42AA34u: goto label_42aa34;
            case 0x42AA58u: goto label_42aa58;
            case 0x42AB70u: goto label_42ab70;
            case 0x42ABECu: goto label_42abec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A1ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x42A1B4u;
label_42a1b4:
    // 0x42a1b4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x42a1b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42a1b8:
    // 0x42a1b8: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_42a1bc:
    if (ctx->pc == 0x42A1BCu) {
        ctx->pc = 0x42A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A1B8u;
        // 0x42a1bc: 0xaf90bec0  sw          $s0, -0x4140($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A1C0u;
        goto label_42a1c0;
    }
    ctx->pc = 0x42A1B8u;
    {
        const bool branch_taken_0x42a1b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A1B8u;
        // 0x42a1bc: 0xaf90bec0  sw          $s0, -0x4140($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a1b8) {
            ctx->pc = 0x42A224u;
            goto label_42a224;
        }
    }
    ctx->pc = 0x42A1C0u;
label_42a1c0:
    // 0x42a1c0: 0xc110e98  jal         func_443A60
label_42a1c4:
    if (ctx->pc == 0x42A1C4u) {
        ctx->pc = 0x42A1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A1C0u;
        // 0x42a1c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A1C8u;
        goto label_42a1c8;
    }
    ctx->pc = 0x42A1C0u;
    SET_GPR_U32(ctx, 31, 0x42A1C8u);
    ctx->pc = 0x42A1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A1C0u;
    // 0x42a1c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443A60u, 0x42A1C0u, 0x42A1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A1C8u;
label_42a1c8:
    // 0x42a1c8: 0x8f84bec0  lw          $a0, -0x4140($gp)
    ctx->pc = 0x42a1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950592)));
label_42a1cc:
    // 0x42a1cc: 0xc110b7e  jal         func_442DF8
label_42a1d0:
    if (ctx->pc == 0x42A1D0u) {
        ctx->pc = 0x42A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A1CCu;
        // 0x42a1d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A1D4u;
        goto label_42a1d4;
    }
    ctx->pc = 0x42A1CCu;
    SET_GPR_U32(ctx, 31, 0x42A1D4u);
    ctx->pc = 0x42A1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A1CCu;
    // 0x42a1d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x42A1CCu, 0x42A1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A1D4u;
label_42a1d4:
    // 0x42a1d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_42a1d8:
    if (ctx->pc == 0x42A1D8u) {
        ctx->pc = 0x42A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A1D4u;
        // 0x42a1d8: 0xdf83ae80  ld          $v1, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A1DCu;
        goto label_42a1dc;
    }
    ctx->pc = 0x42A1D4u;
    {
        const bool branch_taken_0x42a1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A1D4u;
        // 0x42a1d8: 0xdf83ae80  ld          $v1, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a1d4) {
            ctx->pc = 0x42A208u;
            goto label_42a208;
        }
    }
    ctx->pc = 0x42A1DCu;
label_42a1dc:
    // 0x42a1dc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x42a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_42a1e0:
    // 0x42a1e0: 0x8f84bec0  lw          $a0, -0x4140($gp)
    ctx->pc = 0x42a1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950592)));
label_42a1e4:
    // 0x42a1e4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x42a1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_42a1e8:
    // 0x42a1e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x42a1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_42a1ec:
    // 0x42a1ec: 0xff83ae80  sd          $v1, -0x5180($gp)
    ctx->pc = 0x42a1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 3));
label_42a1f0:
    // 0x42a1f0: 0x90820023  lbu         $v0, 0x23($a0)
    ctx->pc = 0x42a1f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
label_42a1f4:
    // 0x42a1f4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x42a1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_42a1f8:
    // 0x42a1f8: 0x5445000f  bnel        $v0, $a1, . + 4 + (0xF << 2)
label_42a1fc:
    if (ctx->pc == 0x42A1FCu) {
        ctx->pc = 0x42A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A1F8u;
        // 0x42a1fc: 0xaf91bec4  sw          $s1, -0x413C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A200u;
        goto label_42a200;
    }
    ctx->pc = 0x42A1F8u;
    {
        const bool branch_taken_0x42a1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x42a1f8) {
            ctx->pc = 0x42A1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42A1F8u;
            // 0x42a1fc: 0xaf91bec4  sw          $s1, -0x413C($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42A238u;
            goto label_42a238;
        }
    }
    ctx->pc = 0x42A200u;
label_42a200:
    // 0x42a200: 0x1000000d  b           . + 4 + (0xD << 2)
label_42a204:
    if (ctx->pc == 0x42A204u) {
        ctx->pc = 0x42A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A200u;
        // 0x42a204: 0xaf80bec4  sw          $zero, -0x413C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A208u;
        goto label_42a208;
    }
    ctx->pc = 0x42A200u;
    {
        const bool branch_taken_0x42a200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A200u;
        // 0x42a204: 0xaf80bec4  sw          $zero, -0x413C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a200) {
            ctx->pc = 0x42A238u;
            goto label_42a238;
        }
    }
    ctx->pc = 0x42A208u;
label_42a208:
    // 0x42a208: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x42a208u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_42a20c:
    // 0x42a20c: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x42a20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_42a210:
    // 0x42a210: 0xaf80bec4  sw          $zero, -0x413C($gp)
    ctx->pc = 0x42a210u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 0));
label_42a214:
    // 0x42a214: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x42a214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42a218:
    // 0x42a218: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x42a218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_42a21c:
    // 0x42a21c: 0x10000005  b           . + 4 + (0x5 << 2)
label_42a220:
    if (ctx->pc == 0x42A220u) {
        ctx->pc = 0x42A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A21Cu;
        // 0x42a220: 0xaf80bec0  sw          $zero, -0x4140($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A224u;
        goto label_42a224;
    }
    ctx->pc = 0x42A21Cu;
    {
        const bool branch_taken_0x42a21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A21Cu;
        // 0x42a220: 0xaf80bec0  sw          $zero, -0x4140($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a21c) {
            ctx->pc = 0x42A234u;
            goto label_42a234;
        }
    }
    ctx->pc = 0x42A224u;
label_42a224:
    // 0x42a224: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x42a224u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_42a228:
    // 0x42a228: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x42a228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_42a22c:
    // 0x42a22c: 0xaf80bec4  sw          $zero, -0x413C($gp)
    ctx->pc = 0x42a22cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 0));
label_42a230:
    // 0x42a230: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x42a230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_42a234:
    // 0x42a234: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x42a234u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
label_42a238:
    // 0x42a238: 0x8f82bec8  lw          $v0, -0x4138($gp)
    ctx->pc = 0x42a238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950600)));
label_42a23c:
    // 0x42a23c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_42a240:
    if (ctx->pc == 0x42A240u) {
        ctx->pc = 0x42A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A23Cu;
        // 0x42a240: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A244u;
        goto label_42a244;
    }
    ctx->pc = 0x42A23Cu;
    {
        const bool branch_taken_0x42a23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A23Cu;
        // 0x42a240: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a23c) {
            ctx->pc = 0x42A250u;
            goto label_42a250;
        }
    }
    ctx->pc = 0x42A244u;
label_42a244:
    // 0x42a244: 0x8f82bec4  lw          $v0, -0x413C($gp)
    ctx->pc = 0x42a244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
label_42a248:
    // 0x42a248: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_42a24c:
    if (ctx->pc == 0x42A24Cu) {
        ctx->pc = 0x42A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A248u;
        // 0x42a24c: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A250u;
        goto label_42a250;
    }
    ctx->pc = 0x42A248u;
    {
        const bool branch_taken_0x42a248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A248u;
        // 0x42a24c: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a248) {
            ctx->pc = 0x42A25Cu;
            goto label_42a25c;
        }
    }
    ctx->pc = 0x42A250u;
label_42a250:
    // 0x42a250: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x42a250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_42a254:
    // 0x42a254: 0x10000003  b           . + 4 + (0x3 << 2)
label_42a258:
    if (ctx->pc == 0x42A258u) {
        ctx->pc = 0x42A258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A254u;
        // 0x42a258: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A25Cu;
        goto label_42a25c;
    }
    ctx->pc = 0x42A254u;
    {
        const bool branch_taken_0x42a254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A254u;
        // 0x42a258: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a254) {
            ctx->pc = 0x42A264u;
            goto label_42a264;
        }
    }
    ctx->pc = 0x42A25Cu;
label_42a25c:
    // 0x42a25c: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x42a25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_42a260:
    // 0x42a260: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x42a260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_42a264:
    // 0x42a264: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x42a264u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
label_42a268:
    // 0x42a268: 0x8f82bec4  lw          $v0, -0x413C($gp)
    ctx->pc = 0x42a268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
label_42a26c:
    // 0x42a26c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_42a270:
    if (ctx->pc == 0x42A270u) {
        ctx->pc = 0x42A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A26Cu;
        // 0x42a270: 0xdf83ae48  ld          $v1, -0x51B8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A274u;
        goto label_42a274;
    }
    ctx->pc = 0x42A26Cu;
    {
        const bool branch_taken_0x42a26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A26Cu;
        // 0x42a270: 0xdf83ae48  ld          $v1, -0x51B8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a26c) {
            ctx->pc = 0x42A2D0u;
            goto label_42a2d0;
        }
    }
    ctx->pc = 0x42A274u;
label_42a274:
    // 0x42a274: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x42a274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_42a278:
    // 0x42a278: 0x5440025f  bnel        $v0, $zero, . + 4 + (0x25F << 2)
label_42a27c:
    if (ctx->pc == 0x42A27Cu) {
        ctx->pc = 0x42A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A278u;
        // 0x42a27c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A280u;
        goto label_42a280;
    }
    ctx->pc = 0x42A278u;
    {
        const bool branch_taken_0x42a278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42a278) {
            ctx->pc = 0x42A27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42A278u;
            // 0x42a27c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42ABF8u;
            goto label_42abf8;
        }
    }
    ctx->pc = 0x42A280u;
label_42a280:
    // 0x42a280: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42a280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42a284:
    // 0x42a284: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42a284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_42a288:
    // 0x42a288: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x42a288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_42a28c:
    // 0x42a28c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x42a28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42a290:
    // 0x42a290: 0xc10a322  jal         func_428C88
label_42a294:
    if (ctx->pc == 0x42A294u) {
        ctx->pc = 0x42A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A290u;
        // 0x42a294: 0xff82ae48  sd          $v0, -0x51B8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A298u;
        goto label_42a298;
    }
    ctx->pc = 0x42A290u;
    SET_GPR_U32(ctx, 31, 0x42A298u);
    ctx->pc = 0x42A294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A290u;
    // 0x42a294: 0xff82ae48  sd          $v0, -0x51B8($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x42A290u, 0x42A298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A298u;
label_42a298:
    // 0x42a298: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x42a298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_42a29c:
    // 0x42a29c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x42a29cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_42a2a0:
    // 0x42a2a0: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x42a2a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
label_42a2a4:
    // 0x42a2a4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x42a2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_42a2a8:
    // 0x42a2a8: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x42a2a8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_42a2ac:
    // 0x42a2ac: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x42a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_42a2b0:
    // 0x42a2b0: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x42a2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_42a2b4:
    // 0x42a2b4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_42a2b8:
    // 0x42a2b8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42a2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42a2bc:
    // 0x42a2bc: 0xdf85ae48  ld          $a1, -0x51B8($gp)
    ctx->pc = 0x42a2bcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_42a2c0:
    // 0x42a2c0: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x42a2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_42a2c4:
    // 0x42a2c4: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x42a2c4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_42a2c8:
    // 0x42a2c8: 0x10000019  b           . + 4 + (0x19 << 2)
label_42a2cc:
    if (ctx->pc == 0x42A2CCu) {
        ctx->pc = 0x42A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A2C8u;
        // 0x42a2cc: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A2D0u;
        goto label_42a2d0;
    }
    ctx->pc = 0x42A2C8u;
    {
        const bool branch_taken_0x42a2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A2C8u;
        // 0x42a2cc: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a2c8) {
            ctx->pc = 0x42A330u;
            goto label_42a330;
        }
    }
    ctx->pc = 0x42A2D0u;
label_42a2d0:
    // 0x42a2d0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x42a2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_42a2d4:
    // 0x42a2d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x42a2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_42a2d8:
    // 0x42a2d8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x42a2d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_42a2dc:
    // 0x42a2dc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_42a2e0:
    if (ctx->pc == 0x42A2E0u) {
        ctx->pc = 0x42A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A2DCu;
        // 0x42a2e0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A2E4u;
        goto label_42a2e4;
    }
    ctx->pc = 0x42A2DCu;
    {
        const bool branch_taken_0x42a2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A2DCu;
        // 0x42a2e0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a2dc) {
            ctx->pc = 0x42A338u;
            goto label_42a338;
        }
    }
    ctx->pc = 0x42A2E4u;
label_42a2e4:
    // 0x42a2e4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42a2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_42a2e8:
    // 0x42a2e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x42a2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_42a2ec:
    // 0x42a2ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x42a2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42a2f0:
    // 0x42a2f0: 0xc10a322  jal         func_428C88
label_42a2f4:
    if (ctx->pc == 0x42A2F4u) {
        ctx->pc = 0x42A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A2F0u;
        // 0x42a2f4: 0xff82ae48  sd          $v0, -0x51B8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A2F8u;
        goto label_42a2f8;
    }
    ctx->pc = 0x42A2F0u;
    SET_GPR_U32(ctx, 31, 0x42A2F8u);
    ctx->pc = 0x42A2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A2F0u;
    // 0x42a2f4: 0xff82ae48  sd          $v0, -0x51B8($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x42A2F0u, 0x42A2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A2F8u;
label_42a2f8:
    // 0x42a2f8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x42a2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_42a2fc:
    // 0x42a2fc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x42a2fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_42a300:
    // 0x42a300: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x42a300u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
label_42a304:
    // 0x42a304: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x42a304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_42a308:
    // 0x42a308: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x42a308u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_42a30c:
    // 0x42a30c: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x42a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_42a310:
    // 0x42a310: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x42a310u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_42a314:
    // 0x42a314: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42a314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_42a318:
    // 0x42a318: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42a318u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42a31c:
    // 0x42a31c: 0xdf85ae48  ld          $a1, -0x51B8($gp)
    ctx->pc = 0x42a31cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_42a320:
    // 0x42a320: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x42a320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_42a324:
    // 0x42a324: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x42a324u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_42a328:
    // 0x42a328: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x42a328u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_42a32c:
    // 0x42a32c: 0x0  nop
    ctx->pc = 0x42a32cu;
    // NOP
label_42a330:
    // 0x42a330: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42a330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_42a334:
    // 0x42a334: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42a334u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42a338:
    // 0x42a338: 0x1000022f  b           . + 4 + (0x22F << 2)
label_42a33c:
    if (ctx->pc == 0x42A33Cu) {
        ctx->pc = 0x42A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A338u;
        // 0x42a33c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A340u;
        goto label_42a340;
    }
    ctx->pc = 0x42A338u;
    {
        const bool branch_taken_0x42a338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A338u;
        // 0x42a33c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a338) {
            ctx->pc = 0x42ABF8u;
            goto label_42abf8;
        }
    }
    ctx->pc = 0x42A340u;
label_42a340:
    // 0x42a340: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x42a340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42a344:
    // 0x42a344: 0x12020229  beq         $s0, $v0, . + 4 + (0x229 << 2)
label_42a348:
    if (ctx->pc == 0x42A348u) {
        ctx->pc = 0x42A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A344u;
        // 0x42a348: 0x2e020003  sltiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A34Cu;
        goto label_42a34c;
    }
    ctx->pc = 0x42A344u;
    {
        const bool branch_taken_0x42a344 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x42A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A344u;
        // 0x42a348: 0x2e020003  sltiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a344) {
            ctx->pc = 0x42ABECu;
            goto label_42abec;
        }
    }
    ctx->pc = 0x42A34Cu;
label_42a34c:
    // 0x42a34c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_42a350:
    if (ctx->pc == 0x42A350u) {
        ctx->pc = 0x42A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A34Cu;
        // 0x42a350: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A354u;
        goto label_42a354;
    }
    ctx->pc = 0x42A34Cu;
    {
        const bool branch_taken_0x42a34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A34Cu;
        // 0x42a350: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a34c) {
            ctx->pc = 0x42A364u;
            goto label_42a364;
        }
    }
    ctx->pc = 0x42A354u;
label_42a354:
    // 0x42a354: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_42a358:
    if (ctx->pc == 0x42A358u) {
        ctx->pc = 0x42A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A354u;
        // 0x42a358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A35Cu;
        goto label_42a35c;
    }
    ctx->pc = 0x42A354u;
    {
        const bool branch_taken_0x42a354 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x42A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A354u;
        // 0x42a358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a354) {
            ctx->pc = 0x42A378u;
            goto label_42a378;
        }
    }
    ctx->pc = 0x42A35Cu;
label_42a35c:
    // 0x42a35c: 0x10000227  b           . + 4 + (0x227 << 2)
label_42a360:
    if (ctx->pc == 0x42A360u) {
        ctx->pc = 0x42A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A35Cu;
        // 0x42a360: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A364u;
        goto label_42a364;
    }
    ctx->pc = 0x42A35Cu;
    {
        const bool branch_taken_0x42a35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A35Cu;
        // 0x42a360: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a35c) {
            ctx->pc = 0x42ABFCu;
            goto label_42abfc;
        }
    }
    ctx->pc = 0x42A364u;
label_42a364:
    // 0x42a364: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x42a364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_42a368:
    // 0x42a368: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_42a36c:
    if (ctx->pc == 0x42A36Cu) {
        ctx->pc = 0x42A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A368u;
        // 0x42a36c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A370u;
        goto label_42a370;
    }
    ctx->pc = 0x42A368u;
    {
        const bool branch_taken_0x42a368 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x42A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A368u;
        // 0x42a36c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a368) {
            ctx->pc = 0x42A380u;
            goto label_42a380;
        }
    }
    ctx->pc = 0x42A370u;
label_42a370:
    // 0x42a370: 0x10000222  b           . + 4 + (0x222 << 2)
label_42a374:
    if (ctx->pc == 0x42A374u) {
        ctx->pc = 0x42A374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A370u;
        // 0x42a374: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A378u;
        goto label_42a378;
    }
    ctx->pc = 0x42A370u;
    {
        const bool branch_taken_0x42a370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A370u;
        // 0x42a374: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a370) {
            ctx->pc = 0x42ABFCu;
            goto label_42abfc;
        }
    }
    ctx->pc = 0x42A378u;
label_42a378:
    // 0x42a378: 0x10000003  b           . + 4 + (0x3 << 2)
label_42a37c:
    if (ctx->pc == 0x42A37Cu) {
        ctx->pc = 0x42A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A378u;
        // 0x42a37c: 0xff80ae60  sd          $zero, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A380u;
        goto label_42a380;
    }
    ctx->pc = 0x42A378u;
    {
        const bool branch_taken_0x42a378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A378u;
        // 0x42a37c: 0xff80ae60  sd          $zero, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a378) {
            ctx->pc = 0x42A388u;
            goto label_42a388;
        }
    }
    ctx->pc = 0x42A380u;
label_42a380:
    // 0x42a380: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x42a380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_42a384:
    // 0x42a384: 0xff82ae60  sd          $v0, -0x51A0($gp)
    ctx->pc = 0x42a384u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
label_42a388:
    // 0x42a388: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42a388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_42a38c:
    // 0x42a38c: 0xc10a322  jal         func_428C88
label_42a390:
    if (ctx->pc == 0x42A390u) {
        ctx->pc = 0x42A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A38Cu;
        // 0x42a390: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A394u;
        goto label_42a394;
    }
    ctx->pc = 0x42A38Cu;
    SET_GPR_U32(ctx, 31, 0x42A394u);
    ctx->pc = 0x42A390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A38Cu;
    // 0x42a390: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x42A38Cu, 0x42A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A394u;
label_42a394:
    // 0x42a394: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x42a394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_42a398:
    // 0x42a398: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x42a398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_42a39c:
    // 0x42a39c: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x42a39cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
label_42a3a0:
    // 0x42a3a0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x42a3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_42a3a4:
    // 0x42a3a4: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x42a3a4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_42a3a8:
    // 0x42a3a8: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x42a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_42a3ac:
    // 0x42a3ac: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x42a3acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_42a3b0:
    // 0x42a3b0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_42a3b4:
    // 0x42a3b4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42a3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42a3b8:
    // 0x42a3b8: 0xdf85ae60  ld          $a1, -0x51A0($gp)
    ctx->pc = 0x42a3b8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
label_42a3bc:
    // 0x42a3bc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x42a3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_42a3c0:
    // 0x42a3c0: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x42a3c0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_42a3c4:
    // 0x42a3c4: 0x10000206  b           . + 4 + (0x206 << 2)
label_42a3c8:
    if (ctx->pc == 0x42A3C8u) {
        ctx->pc = 0x42A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A3C4u;
        // 0x42a3c8: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A3CCu;
        goto label_42a3cc;
    }
    ctx->pc = 0x42A3C4u;
    {
        const bool branch_taken_0x42a3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A3C4u;
        // 0x42a3c8: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a3c4) {
            ctx->pc = 0x42ABE0u;
            goto label_42abe0;
        }
    }
    ctx->pc = 0x42A3CCu;
label_42a3cc:
    // 0x42a3cc: 0x0  nop
    ctx->pc = 0x42a3ccu;
    // NOP
label_42a3d0:
    // 0x42a3d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x42a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42a3d4:
    // 0x42a3d4: 0x12020205  beq         $s0, $v0, . + 4 + (0x205 << 2)
label_42a3d8:
    if (ctx->pc == 0x42A3D8u) {
        ctx->pc = 0x42A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A3D4u;
        // 0x42a3d8: 0x2e020003  sltiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A3DCu;
        goto label_42a3dc;
    }
    ctx->pc = 0x42A3D4u;
    {
        const bool branch_taken_0x42a3d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x42A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A3D4u;
        // 0x42a3d8: 0x2e020003  sltiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a3d4) {
            ctx->pc = 0x42ABECu;
            goto label_42abec;
        }
    }
    ctx->pc = 0x42A3DCu;
label_42a3dc:
    // 0x42a3dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_42a3e0:
    if (ctx->pc == 0x42A3E0u) {
        ctx->pc = 0x42A3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A3DCu;
        // 0x42a3e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A3E4u;
        goto label_42a3e4;
    }
    ctx->pc = 0x42A3DCu;
    {
        const bool branch_taken_0x42a3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A3DCu;
        // 0x42a3e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a3dc) {
            ctx->pc = 0x42A3F4u;
            goto label_42a3f4;
        }
    }
    ctx->pc = 0x42A3E4u;
label_42a3e4:
    // 0x42a3e4: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_42a3e8:
    if (ctx->pc == 0x42A3E8u) {
        ctx->pc = 0x42A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A3E4u;
        // 0x42a3e8: 0xdf82ae60  ld          $v0, -0x51A0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A3ECu;
        goto label_42a3ec;
    }
    ctx->pc = 0x42A3E4u;
    {
        const bool branch_taken_0x42a3e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x42A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A3E4u;
        // 0x42a3e8: 0xdf82ae60  ld          $v0, -0x51A0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a3e4) {
            ctx->pc = 0x42A408u;
            goto label_42a408;
        }
    }
    ctx->pc = 0x42A3ECu;
label_42a3ec:
    // 0x42a3ec: 0x10000202  b           . + 4 + (0x202 << 2)
label_42a3f0:
    if (ctx->pc == 0x42A3F0u) {
        ctx->pc = 0x42A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A3ECu;
        // 0x42a3f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A3F4u;
        goto label_42a3f4;
    }
    ctx->pc = 0x42A3ECu;
    {
        const bool branch_taken_0x42a3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A3ECu;
        // 0x42a3f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a3ec) {
            ctx->pc = 0x42ABF8u;
            goto label_42abf8;
        }
    }
    ctx->pc = 0x42A3F4u;
label_42a3f4:
    // 0x42a3f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x42a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_42a3f8:
    // 0x42a3f8: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
label_42a3fc:
    if (ctx->pc == 0x42A3FCu) {
        ctx->pc = 0x42A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A3F8u;
        // 0x42a3fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A400u;
        goto label_42a400;
    }
    ctx->pc = 0x42A3F8u;
    {
        const bool branch_taken_0x42a3f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x42A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A3F8u;
        // 0x42a3fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a3f8) {
            ctx->pc = 0x42A414u;
            goto label_42a414;
        }
    }
    ctx->pc = 0x42A400u;
label_42a400:
    // 0x42a400: 0x100001fe  b           . + 4 + (0x1FE << 2)
label_42a404:
    if (ctx->pc == 0x42A404u) {
        ctx->pc = 0x42A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A400u;
        // 0x42a404: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A408u;
        goto label_42a408;
    }
    ctx->pc = 0x42A400u;
    {
        const bool branch_taken_0x42a400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A400u;
        // 0x42a404: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a400) {
            ctx->pc = 0x42ABFCu;
            goto label_42abfc;
        }
    }
    ctx->pc = 0x42A408u;
label_42a408:
    // 0x42a408: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x42a408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_42a40c:
    // 0x42a40c: 0x10000004  b           . + 4 + (0x4 << 2)
label_42a410:
    if (ctx->pc == 0x42A410u) {
        ctx->pc = 0x42A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A40Cu;
        // 0x42a410: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A414u;
        goto label_42a414;
    }
    ctx->pc = 0x42A40Cu;
    {
        const bool branch_taken_0x42a40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A40Cu;
        // 0x42a410: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a40c) {
            ctx->pc = 0x42A420u;
            goto label_42a420;
        }
    }
    ctx->pc = 0x42A414u;
label_42a414:
    // 0x42a414: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x42a414u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
label_42a418:
    // 0x42a418: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x42a418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42a41c:
    // 0x42a41c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x42a41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_42a420:
    // 0x42a420: 0xff82ae60  sd          $v0, -0x51A0($gp)
    ctx->pc = 0x42a420u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
label_42a424:
    // 0x42a424: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42a424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_42a428:
    // 0x42a428: 0xc10a322  jal         func_428C88
label_42a42c:
    if (ctx->pc == 0x42A42Cu) {
        ctx->pc = 0x42A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A428u;
        // 0x42a42c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A430u;
        goto label_42a430;
    }
    ctx->pc = 0x42A428u;
    SET_GPR_U32(ctx, 31, 0x42A430u);
    ctx->pc = 0x42A42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A428u;
    // 0x42a42c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x42A428u, 0x42A430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A430u;
label_42a430:
    // 0x42a430: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x42a430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_42a434:
    // 0x42a434: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x42a434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_42a438:
    // 0x42a438: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x42a438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
label_42a43c:
    // 0x42a43c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x42a43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_42a440:
    // 0x42a440: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x42a440u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_42a444:
    // 0x42a444: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x42a444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_42a448:
    // 0x42a448: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x42a448u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_42a44c:
    // 0x42a44c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_42a450:
    // 0x42a450: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42a450u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42a454:
    // 0x42a454: 0xdf85ae60  ld          $a1, -0x51A0($gp)
    ctx->pc = 0x42a454u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
label_42a458:
    // 0x42a458: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x42a458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_42a45c:
    // 0x42a45c: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x42a45cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_42a460:
    // 0x42a460: 0x100001df  b           . + 4 + (0x1DF << 2)
label_42a464:
    if (ctx->pc == 0x42A464u) {
        ctx->pc = 0x42A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A460u;
        // 0x42a464: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A468u;
        goto label_42a468;
    }
    ctx->pc = 0x42A460u;
    {
        const bool branch_taken_0x42a460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A460u;
        // 0x42a464: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a460) {
            ctx->pc = 0x42ABE0u;
            goto label_42abe0;
        }
    }
    ctx->pc = 0x42A468u;
label_42a468:
    // 0x42a468: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x42a468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42a46c:
    // 0x42a46c: 0x120201df  beq         $s0, $v0, . + 4 + (0x1DF << 2)
label_42a470:
    if (ctx->pc == 0x42A470u) {
        ctx->pc = 0x42A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A46Cu;
        // 0x42a470: 0x2e020003  sltiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A474u;
        goto label_42a474;
    }
    ctx->pc = 0x42A46Cu;
    {
        const bool branch_taken_0x42a46c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x42A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A46Cu;
        // 0x42a470: 0x2e020003  sltiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a46c) {
            ctx->pc = 0x42ABECu;
            goto label_42abec;
        }
    }
    ctx->pc = 0x42A474u;
label_42a474:
    // 0x42a474: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_42a478:
    if (ctx->pc == 0x42A478u) {
        ctx->pc = 0x42A478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A474u;
        // 0x42a478: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A47Cu;
        goto label_42a47c;
    }
    ctx->pc = 0x42A474u;
    {
        const bool branch_taken_0x42a474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A474u;
        // 0x42a478: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a474) {
            ctx->pc = 0x42A48Cu;
            goto label_42a48c;
        }
    }
    ctx->pc = 0x42A47Cu;
label_42a47c:
    // 0x42a47c: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_42a480:
    if (ctx->pc == 0x42A480u) {
        ctx->pc = 0x42A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A47Cu;
        // 0x42a480: 0xdf82ae60  ld          $v0, -0x51A0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A484u;
        goto label_42a484;
    }
    ctx->pc = 0x42A47Cu;
    {
        const bool branch_taken_0x42a47c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x42A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A47Cu;
        // 0x42a480: 0xdf82ae60  ld          $v0, -0x51A0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a47c) {
            ctx->pc = 0x42A4A0u;
            goto label_42a4a0;
        }
    }
    ctx->pc = 0x42A484u;
label_42a484:
    // 0x42a484: 0x100001dc  b           . + 4 + (0x1DC << 2)
label_42a488:
    if (ctx->pc == 0x42A488u) {
        ctx->pc = 0x42A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A484u;
        // 0x42a488: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A48Cu;
        goto label_42a48c;
    }
    ctx->pc = 0x42A484u;
    {
        const bool branch_taken_0x42a484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A484u;
        // 0x42a488: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a484) {
            ctx->pc = 0x42ABF8u;
            goto label_42abf8;
        }
    }
    ctx->pc = 0x42A48Cu;
label_42a48c:
    // 0x42a48c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x42a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_42a490:
    // 0x42a490: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
label_42a494:
    if (ctx->pc == 0x42A494u) {
        ctx->pc = 0x42A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A490u;
        // 0x42a494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A498u;
        goto label_42a498;
    }
    ctx->pc = 0x42A490u;
    {
        const bool branch_taken_0x42a490 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x42A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A490u;
        // 0x42a494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a490) {
            ctx->pc = 0x42A4ACu;
            goto label_42a4ac;
        }
    }
    ctx->pc = 0x42A498u;
label_42a498:
    // 0x42a498: 0x100001d8  b           . + 4 + (0x1D8 << 2)
label_42a49c:
    if (ctx->pc == 0x42A49Cu) {
        ctx->pc = 0x42A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A498u;
        // 0x42a49c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A4A0u;
        goto label_42a4a0;
    }
    ctx->pc = 0x42A498u;
    {
        const bool branch_taken_0x42a498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A498u;
        // 0x42a49c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a498) {
            ctx->pc = 0x42ABFCu;
            goto label_42abfc;
        }
    }
    ctx->pc = 0x42A4A0u;
label_42a4a0:
    // 0x42a4a0: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x42a4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_42a4a4:
    // 0x42a4a4: 0x10000004  b           . + 4 + (0x4 << 2)
label_42a4a8:
    if (ctx->pc == 0x42A4A8u) {
        ctx->pc = 0x42A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A4A4u;
        // 0x42a4a8: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A4ACu;
        goto label_42a4ac;
    }
    ctx->pc = 0x42A4A4u;
    {
        const bool branch_taken_0x42a4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A4A4u;
        // 0x42a4a8: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a4a4) {
            ctx->pc = 0x42A4B8u;
            goto label_42a4b8;
        }
    }
    ctx->pc = 0x42A4ACu;
label_42a4ac:
    // 0x42a4ac: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x42a4acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
label_42a4b0:
    // 0x42a4b0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x42a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_42a4b4:
    // 0x42a4b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x42a4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_42a4b8:
    // 0x42a4b8: 0xff82ae60  sd          $v0, -0x51A0($gp)
    ctx->pc = 0x42a4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
label_42a4bc:
    // 0x42a4bc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42a4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_42a4c0:
    // 0x42a4c0: 0xc10a322  jal         func_428C88
label_42a4c4:
    if (ctx->pc == 0x42A4C4u) {
        ctx->pc = 0x42A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A4C0u;
        // 0x42a4c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A4C8u;
        goto label_42a4c8;
    }
    ctx->pc = 0x42A4C0u;
    SET_GPR_U32(ctx, 31, 0x42A4C8u);
    ctx->pc = 0x42A4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A4C0u;
    // 0x42a4c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x42A4C0u, 0x42A4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A4C8u;
label_42a4c8:
    // 0x42a4c8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x42a4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_42a4cc:
    // 0x42a4cc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x42a4ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_42a4d0:
    // 0x42a4d0: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x42a4d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
label_42a4d4:
    // 0x42a4d4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x42a4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_42a4d8:
    // 0x42a4d8: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x42a4d8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_42a4dc:
    // 0x42a4dc: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x42a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_42a4e0:
    // 0x42a4e0: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x42a4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_42a4e4:
    // 0x42a4e4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_42a4e8:
    // 0x42a4e8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42a4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42a4ec:
    // 0x42a4ec: 0xdf85ae60  ld          $a1, -0x51A0($gp)
    ctx->pc = 0x42a4ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
label_42a4f0:
    // 0x42a4f0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x42a4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_42a4f4:
    // 0x42a4f4: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x42a4f4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_42a4f8:
    // 0x42a4f8: 0x100001b9  b           . + 4 + (0x1B9 << 2)
label_42a4fc:
    if (ctx->pc == 0x42A4FCu) {
        ctx->pc = 0x42A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A4F8u;
        // 0x42a4fc: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A500u;
        goto label_42a500;
    }
    ctx->pc = 0x42A4F8u;
    {
        const bool branch_taken_0x42a4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A4F8u;
        // 0x42a4fc: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a4f8) {
            ctx->pc = 0x42ABE0u;
            goto label_42abe0;
        }
    }
    ctx->pc = 0x42A500u;
label_42a500:
    // 0x42a500: 0x120001ba  beqz        $s0, . + 4 + (0x1BA << 2)
label_42a504:
    if (ctx->pc == 0x42A504u) {
        ctx->pc = 0x42A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A500u;
        // 0x42a504: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A508u;
        goto label_42a508;
    }
    ctx->pc = 0x42A500u;
    {
        const bool branch_taken_0x42a500 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A500u;
        // 0x42a504: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a500) {
            ctx->pc = 0x42ABECu;
            goto label_42abec;
        }
    }
    ctx->pc = 0x42A508u;
label_42a508:
    // 0x42a508: 0x10000119  b           . + 4 + (0x119 << 2)
label_42a50c:
    if (ctx->pc == 0x42A50Cu) {
        ctx->pc = 0x42A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A508u;
        // 0x42a50c: 0x2403feff  addiu       $v1, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A510u;
        goto label_42a510;
    }
    ctx->pc = 0x42A508u;
    {
        const bool branch_taken_0x42a508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A508u;
        // 0x42a50c: 0x2403feff  addiu       $v1, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a508) {
            ctx->pc = 0x42A970u;
            goto label_42a970;
        }
    }
    ctx->pc = 0x42A510u;
label_42a510:
    // 0x42a510: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_42a514:
    if (ctx->pc == 0x42A514u) {
        ctx->pc = 0x42A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A510u;
        // 0x42a514: 0xdf82ae48  ld          $v0, -0x51B8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A518u;
        goto label_42a518;
    }
    ctx->pc = 0x42A510u;
    {
        const bool branch_taken_0x42a510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A510u;
        // 0x42a514: 0xdf82ae48  ld          $v0, -0x51B8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a510) {
            ctx->pc = 0x42A528u;
            goto label_42a528;
        }
    }
    ctx->pc = 0x42A518u;
label_42a518:
    // 0x42a518: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x42a518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
label_42a51c:
    // 0x42a51c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x42a51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_42a520:
    // 0x42a520: 0x10000004  b           . + 4 + (0x4 << 2)
label_42a524:
    if (ctx->pc == 0x42A524u) {
        ctx->pc = 0x42A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A520u;
        // 0x42a524: 0x3c040005  lui         $a0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A528u;
        goto label_42a528;
    }
    ctx->pc = 0x42A520u;
    {
        const bool branch_taken_0x42a520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A520u;
        // 0x42a524: 0x3c040005  lui         $a0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a520) {
            ctx->pc = 0x42A534u;
            goto label_42a534;
        }
    }
    ctx->pc = 0x42A528u;
label_42a528:
    // 0x42a528: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x42a528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
label_42a52c:
    // 0x42a52c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x42a52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_42a530:
    // 0x42a530: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x42a530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
label_42a534:
    // 0x42a534: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x42a534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_42a538:
    // 0x42a538: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x42a538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_42a53c:
    // 0x42a53c: 0xff82ae48  sd          $v0, -0x51B8($gp)
    ctx->pc = 0x42a53cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 2));
label_42a540:
    // 0x42a540: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42a540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_42a544:
    // 0x42a544: 0xc10a322  jal         func_428C88
label_42a548:
    if (ctx->pc == 0x42A548u) {
        ctx->pc = 0x42A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A544u;
        // 0x42a548: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A54Cu;
        goto label_42a54c;
    }
    ctx->pc = 0x42A544u;
    SET_GPR_U32(ctx, 31, 0x42A54Cu);
    ctx->pc = 0x42A548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A544u;
    // 0x42a548: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x42A544u, 0x42A54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A54Cu;
label_42a54c:
    // 0x42a54c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x42a54cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_42a550:
    // 0x42a550: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x42a550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_42a554:
    // 0x42a554: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x42a554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
label_42a558:
    // 0x42a558: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x42a558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_42a55c:
    // 0x42a55c: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x42a55cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_42a560:
    // 0x42a560: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x42a560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_42a564:
    // 0x42a564: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x42a564u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_42a568:
    // 0x42a568: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42a568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_42a56c:
    // 0x42a56c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42a570:
    // 0x42a570: 0xdf85ae48  ld          $a1, -0x51B8($gp)
    ctx->pc = 0x42a570u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_42a574:
    // 0x42a574: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x42a574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_42a578:
    // 0x42a578: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x42a578u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_42a57c:
    // 0x42a57c: 0x10000198  b           . + 4 + (0x198 << 2)
label_42a580:
    if (ctx->pc == 0x42A580u) {
        ctx->pc = 0x42A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A57Cu;
        // 0x42a580: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A584u;
        goto label_42a584;
    }
    ctx->pc = 0x42A57Cu;
    {
        const bool branch_taken_0x42a57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A57Cu;
        // 0x42a580: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a57c) {
            ctx->pc = 0x42ABE0u;
            goto label_42abe0;
        }
    }
    ctx->pc = 0x42A584u;
label_42a584:
    // 0x42a584: 0x0  nop
    ctx->pc = 0x42a584u;
    // NOP
label_42a588:
    // 0x42a588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42a588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42a58c:
    // 0x42a58c: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_42a590:
    if (ctx->pc == 0x42A590u) {
        ctx->pc = 0x42A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A58Cu;
        // 0x42a590: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A594u;
        goto label_42a594;
    }
    ctx->pc = 0x42A58Cu;
    {
        const bool branch_taken_0x42a58c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x42A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A58Cu;
        // 0x42a590: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a58c) {
            ctx->pc = 0x42A5A0u;
            goto label_42a5a0;
        }
    }
    ctx->pc = 0x42A594u;
label_42a594:
    // 0x42a594: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x42a594u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_42a598:
    // 0x42a598: 0x100000f5  b           . + 4 + (0xF5 << 2)
label_42a59c:
    if (ctx->pc == 0x42A59Cu) {
        ctx->pc = 0x42A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A598u;
        // 0x42a59c: 0x2403fff7  addiu       $v1, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A5A0u;
        goto label_42a5a0;
    }
    ctx->pc = 0x42A598u;
    {
        const bool branch_taken_0x42a598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A598u;
        // 0x42a59c: 0x2403fff7  addiu       $v1, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a598) {
            ctx->pc = 0x42A970u;
            goto label_42a970;
        }
    }
    ctx->pc = 0x42A5A0u;
label_42a5a0:
    // 0x42a5a0: 0x16020195  bne         $s0, $v0, . + 4 + (0x195 << 2)
label_42a5a4:
    if (ctx->pc == 0x42A5A4u) {
        ctx->pc = 0x42A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A5A0u;
        // 0x42a5a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A5A8u;
        goto label_42a5a8;
    }
    ctx->pc = 0x42A5A0u;
    {
        const bool branch_taken_0x42a5a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x42A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A5A0u;
        // 0x42a5a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a5a0) {
            ctx->pc = 0x42ABF8u;
            goto label_42abf8;
        }
    }
    ctx->pc = 0x42A5A8u;
label_42a5a8:
    // 0x42a5a8: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x42a5a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_42a5ac:
    // 0x42a5ac: 0x100000ec  b           . + 4 + (0xEC << 2)
label_42a5b0:
    if (ctx->pc == 0x42A5B0u) {
        ctx->pc = 0x42A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A5ACu;
        // 0x42a5b0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A5B4u;
        goto label_42a5b4;
    }
    ctx->pc = 0x42A5ACu;
    {
        const bool branch_taken_0x42a5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A5ACu;
        // 0x42a5b0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a5ac) {
            ctx->pc = 0x42A960u;
            goto label_42a960;
        }
    }
    ctx->pc = 0x42A5B4u;
label_42a5b4:
    // 0x42a5b4: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_42a5b8:
    if (ctx->pc == 0x42A5B8u) {
        ctx->pc = 0x42A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A5B4u;
        // 0x42a5b8: 0xdf82ae38  ld          $v0, -0x51C8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946360)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A5BCu;
        goto label_42a5bc;
    }
    ctx->pc = 0x42A5B4u;
    {
        const bool branch_taken_0x42a5b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A5B4u;
        // 0x42a5b8: 0xdf82ae38  ld          $v0, -0x51C8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a5b4) {
            ctx->pc = 0x42A604u;
            goto label_42a604;
        }
    }
    ctx->pc = 0x42A5BCu;
label_42a5bc:
    // 0x42a5bc: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x42a5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_42a5c0:
    // 0x42a5c0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x42a5c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_42a5c4:
    // 0x42a5c4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x42a5c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_42a5c8:
    // 0x42a5c8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x42a5c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_42a5cc:
    // 0x42a5cc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x42a5ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_42a5d0:
    // 0x42a5d0: 0xdf85ae48  ld          $a1, -0x51B8($gp)
    ctx->pc = 0x42a5d0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_42a5d4:
    // 0x42a5d4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x42a5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_42a5d8:
    // 0x42a5d8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x42a5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_42a5dc:
    // 0x42a5dc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x42a5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_42a5e0:
    // 0x42a5e0: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_42a5e4:
    if (ctx->pc == 0x42A5E4u) {
        ctx->pc = 0x42A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A5E0u;
        // 0x42a5e4: 0xff82ae38  sd          $v0, -0x51C8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946360), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A5E8u;
        goto label_42a5e8;
    }
    ctx->pc = 0x42A5E0u;
    {
        const bool branch_taken_0x42a5e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A5E0u;
        // 0x42a5e4: 0xff82ae38  sd          $v0, -0x51C8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946360), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a5e0) {
            ctx->pc = 0x42A614u;
            goto label_42a614;
        }
    }
    ctx->pc = 0x42A5E8u;
label_42a5e8:
    // 0x42a5e8: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x42a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
label_42a5ec:
    // 0x42a5ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x42a5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_42a5f0:
    // 0x42a5f0: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x42a5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_42a5f4:
    // 0x42a5f4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x42a5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_42a5f8:
    // 0x42a5f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x42a5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_42a5fc:
    // 0x42a5fc: 0x10000005  b           . + 4 + (0x5 << 2)
label_42a600:
    if (ctx->pc == 0x42A600u) {
        ctx->pc = 0x42A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A5FCu;
        // 0x42a600: 0xff82ae48  sd          $v0, -0x51B8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A604u;
        goto label_42a604;
    }
    ctx->pc = 0x42A5FCu;
    {
        const bool branch_taken_0x42a5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A5FCu;
        // 0x42a600: 0xff82ae48  sd          $v0, -0x51B8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a5fc) {
            ctx->pc = 0x42A614u;
            goto label_42a614;
        }
    }
    ctx->pc = 0x42A604u;
label_42a604:
    // 0x42a604: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x42a604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_42a608:
    // 0x42a608: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x42a608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
label_42a60c:
    // 0x42a60c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x42a60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_42a610:
    // 0x42a610: 0xff82ae38  sd          $v0, -0x51C8($gp)
    ctx->pc = 0x42a610u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946360), GPR_U64(ctx, 2));
label_42a614:
    // 0x42a614: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42a614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_42a618:
    // 0x42a618: 0xc10a322  jal         func_428C88
label_42a61c:
    if (ctx->pc == 0x42A61Cu) {
        ctx->pc = 0x42A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A618u;
        // 0x42a61c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A620u;
        goto label_42a620;
    }
    ctx->pc = 0x42A618u;
    SET_GPR_U32(ctx, 31, 0x42A620u);
    ctx->pc = 0x42A61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A618u;
    // 0x42a61c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x42A618u, 0x42A620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A620u;
label_42a620:
    // 0x42a620: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x42a620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_42a624:
    // 0x42a624: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x42a624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_42a628:
    // 0x42a628: 0x34a58002  ori         $a1, $a1, 0x8002
    ctx->pc = 0x42a628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32770);
label_42a62c:
    // 0x42a62c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x42a62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_42a630:
    // 0x42a630: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x42a630u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_42a634:
    // 0x42a634: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x42a634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_42a638:
    // 0x42a638: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x42a638u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_42a63c:
    // 0x42a63c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x42a63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_42a640:
    // 0x42a640: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x42a640u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_42a644:
    // 0x42a644: 0xdf85ae38  ld          $a1, -0x51C8($gp)
    ctx->pc = 0x42a644u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294946360)));
label_42a648:
    // 0x42a648: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x42a648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_42a64c:
    // 0x42a64c: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x42a64cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_42a650:
    // 0x42a650: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x42a650u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_42a654:
    // 0x42a654: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x42a654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_42a658:
    // 0x42a658: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42a658u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42a65c:
    // 0x42a65c: 0xdf85ae48  ld          $a1, -0x51B8($gp)
    ctx->pc = 0x42a65cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_42a660:
    // 0x42a660: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x42a660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_42a664:
    // 0x42a664: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x42a664u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_42a668:
    // 0x42a668: 0x7c640010  sq          $a0, 0x10($v1)
    ctx->pc = 0x42a668u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 4));
label_42a66c:
    // 0x42a66c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x42a66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_42a670:
    // 0x42a670: 0x10000160  b           . + 4 + (0x160 << 2)
label_42a674:
    if (ctx->pc == 0x42A674u) {
        ctx->pc = 0x42A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A670u;
        // 0x42a674: 0xaf83be20  sw          $v1, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A678u;
        goto label_42a678;
    }
    ctx->pc = 0x42A670u;
    {
        const bool branch_taken_0x42a670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A670u;
        // 0x42a674: 0xaf83be20  sw          $v1, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a670) {
            ctx->pc = 0x42ABF4u;
            goto label_42abf4;
        }
    }
    ctx->pc = 0x42A678u;
label_42a678:
    // 0x42a678: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x42a678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_42a67c:
    // 0x42a67c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x42a67cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_42a680:
    // 0x42a680: 0x1040015a  beqz        $v0, . + 4 + (0x15A << 2)
label_42a684:
    if (ctx->pc == 0x42A684u) {
        ctx->pc = 0x42A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A680u;
        // 0x42a684: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A688u;
        goto label_42a688;
    }
    ctx->pc = 0x42A680u;
    {
        const bool branch_taken_0x42a680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A680u;
        // 0x42a684: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a680) {
            ctx->pc = 0x42ABECu;
            goto label_42abec;
        }
    }
    ctx->pc = 0x42A688u;
label_42a688:
    // 0x42a688: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x42a688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_42a68c:
    // 0x42a68c: 0x24420770  addiu       $v0, $v0, 0x770
    ctx->pc = 0x42a68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1904));
label_42a690:
    // 0x42a690: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x42a690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_42a694:
    // 0x42a694: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x42a694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42a698:
    // 0x42a698: 0x800008  jr          $a0
label_42a69c:
    if (ctx->pc == 0x42A69Cu) {
        ctx->pc = 0x42A6A0u;
        goto label_42a6a0;
    }
    ctx->pc = 0x42A698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x42A6A0u: goto label_42a6a0;
            case 0x42A6B0u: goto label_42a6b0;
            case 0x42A6C0u: goto label_42a6c0;
            case 0x42A6D0u: goto label_42a6d0;
            case 0x42A6E0u: goto label_42a6e0;
            case 0x42A6F0u: goto label_42a6f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A698u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x42A6A0u;
label_42a6a0:
    // 0x42a6a0: 0xdf82ae68  ld          $v0, -0x5198($gp)
    ctx->pc = 0x42a6a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
label_42a6a4:
    // 0x42a6a4: 0x2403fe1f  addiu       $v1, $zero, -0x1E1
    ctx->pc = 0x42a6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
label_42a6a8:
    // 0x42a6a8: 0x10000016  b           . + 4 + (0x16 << 2)
label_42a6ac:
    if (ctx->pc == 0x42A6ACu) {
        ctx->pc = 0x42A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A6A8u;
        // 0x42a6ac: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A6B0u;
        goto label_42a6b0;
    }
    ctx->pc = 0x42A6A8u;
    {
        const bool branch_taken_0x42a6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A6A8u;
        // 0x42a6ac: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a6a8) {
            ctx->pc = 0x42A704u;
            goto label_42a704;
        }
    }
    ctx->pc = 0x42A6B0u;
label_42a6b0:
    // 0x42a6b0: 0xdf82ae68  ld          $v0, -0x5198($gp)
    ctx->pc = 0x42a6b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
label_42a6b4:
    // 0x42a6b4: 0x2403fe1f  addiu       $v1, $zero, -0x1E1
    ctx->pc = 0x42a6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
label_42a6b8:
    // 0x42a6b8: 0x10000010  b           . + 4 + (0x10 << 2)
label_42a6bc:
    if (ctx->pc == 0x42A6BCu) {
        ctx->pc = 0x42A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A6B8u;
        // 0x42a6bc: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A6C0u;
        goto label_42a6c0;
    }
    ctx->pc = 0x42A6B8u;
    {
        const bool branch_taken_0x42a6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A6B8u;
        // 0x42a6bc: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a6b8) {
            ctx->pc = 0x42A6FCu;
            goto label_42a6fc;
        }
    }
    ctx->pc = 0x42A6C0u;
label_42a6c0:
    // 0x42a6c0: 0xdf82ae68  ld          $v0, -0x5198($gp)
    ctx->pc = 0x42a6c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
label_42a6c4:
    // 0x42a6c4: 0x2403fe1f  addiu       $v1, $zero, -0x1E1
    ctx->pc = 0x42a6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
label_42a6c8:
    // 0x42a6c8: 0x1000000c  b           . + 4 + (0xC << 2)
label_42a6cc:
    if (ctx->pc == 0x42A6CCu) {
        ctx->pc = 0x42A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A6C8u;
        // 0x42a6cc: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A6D0u;
        goto label_42a6d0;
    }
    ctx->pc = 0x42A6C8u;
    {
        const bool branch_taken_0x42a6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A6C8u;
        // 0x42a6cc: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a6c8) {
            ctx->pc = 0x42A6FCu;
            goto label_42a6fc;
        }
    }
    ctx->pc = 0x42A6D0u;
label_42a6d0:
    // 0x42a6d0: 0xdf82ae68  ld          $v0, -0x5198($gp)
    ctx->pc = 0x42a6d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
label_42a6d4:
    // 0x42a6d4: 0x2403fe1f  addiu       $v1, $zero, -0x1E1
    ctx->pc = 0x42a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
label_42a6d8:
    // 0x42a6d8: 0x10000008  b           . + 4 + (0x8 << 2)
label_42a6dc:
    if (ctx->pc == 0x42A6DCu) {
        ctx->pc = 0x42A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A6D8u;
        // 0x42a6dc: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A6E0u;
        goto label_42a6e0;
    }
    ctx->pc = 0x42A6D8u;
    {
        const bool branch_taken_0x42a6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A6D8u;
        // 0x42a6dc: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a6d8) {
            ctx->pc = 0x42A6FCu;
            goto label_42a6fc;
        }
    }
    ctx->pc = 0x42A6E0u;
label_42a6e0:
    // 0x42a6e0: 0xdf82ae68  ld          $v0, -0x5198($gp)
    ctx->pc = 0x42a6e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
label_42a6e4:
    // 0x42a6e4: 0x2403fe1f  addiu       $v1, $zero, -0x1E1
    ctx->pc = 0x42a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
label_42a6e8:
    // 0x42a6e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_42a6ec:
    if (ctx->pc == 0x42A6ECu) {
        ctx->pc = 0x42A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A6E8u;
        // 0x42a6ec: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A6F0u;
        goto label_42a6f0;
    }
    ctx->pc = 0x42A6E8u;
    {
        const bool branch_taken_0x42a6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A6E8u;
        // 0x42a6ec: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a6e8) {
            ctx->pc = 0x42A6FCu;
            goto label_42a6fc;
        }
    }
    ctx->pc = 0x42A6F0u;
label_42a6f0:
    // 0x42a6f0: 0xdf82ae68  ld          $v0, -0x5198($gp)
    ctx->pc = 0x42a6f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
label_42a6f4:
    // 0x42a6f4: 0x2403fe1f  addiu       $v1, $zero, -0x1E1
    ctx->pc = 0x42a6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
label_42a6f8:
    // 0x42a6f8: 0x24040160  addiu       $a0, $zero, 0x160
    ctx->pc = 0x42a6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_42a6fc:
    // 0x42a6fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x42a6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_42a700:
    // 0x42a700: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x42a700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_42a704:
    // 0x42a704: 0xff82ae68  sd          $v0, -0x5198($gp)
    ctx->pc = 0x42a704u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946408), GPR_U64(ctx, 2));
label_42a708:
    // 0x42a708: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42a708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_42a70c:
    // 0x42a70c: 0xc10a322  jal         func_428C88
label_42a710:
    if (ctx->pc == 0x42A710u) {
        ctx->pc = 0x42A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A70Cu;
        // 0x42a710: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A714u;
        goto label_42a714;
    }
    ctx->pc = 0x42A70Cu;
    SET_GPR_U32(ctx, 31, 0x42A714u);
    ctx->pc = 0x42A710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A70Cu;
    // 0x42a710: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x42A70Cu, 0x42A714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A714u;
label_42a714:
    // 0x42a714: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x42a714u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_42a718:
    // 0x42a718: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x42a718u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_42a71c:
    // 0x42a71c: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x42a71cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
label_42a720:
    // 0x42a720: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x42a720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_42a724:
    // 0x42a724: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x42a724u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_42a728:
    // 0x42a728: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x42a728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_42a72c:
    // 0x42a72c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x42a72cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_42a730:
    // 0x42a730: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42a730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_42a734:
    // 0x42a734: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42a734u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42a738:
    // 0x42a738: 0xdf85ae68  ld          $a1, -0x5198($gp)
    ctx->pc = 0x42a738u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
label_42a73c:
    // 0x42a73c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x42a73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_42a740:
    // 0x42a740: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x42a740u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_42a744:
    // 0x42a744: 0x10000126  b           . + 4 + (0x126 << 2)
label_42a748:
    if (ctx->pc == 0x42A748u) {
        ctx->pc = 0x42A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A744u;
        // 0x42a748: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A74Cu;
        goto label_42a74c;
    }
    ctx->pc = 0x42A744u;
    {
        const bool branch_taken_0x42a744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A744u;
        // 0x42a748: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a744) {
            ctx->pc = 0x42ABE0u;
            goto label_42abe0;
        }
    }
    ctx->pc = 0x42A74Cu;
label_42a74c:
    // 0x42a74c: 0x0  nop
    ctx->pc = 0x42a74cu;
    // NOP
label_42a750:
    // 0x42a750: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x42a750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_42a754:
    // 0x42a754: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x42a754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_42a758:
    // 0x42a758: 0x10400124  beqz        $v0, . + 4 + (0x124 << 2)
label_42a75c:
    if (ctx->pc == 0x42A75Cu) {
        ctx->pc = 0x42A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A758u;
        // 0x42a75c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A760u;
        goto label_42a760;
    }
    ctx->pc = 0x42A758u;
    {
        const bool branch_taken_0x42a758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A758u;
        // 0x42a75c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a758) {
            ctx->pc = 0x42ABECu;
            goto label_42abec;
        }
    }
    ctx->pc = 0x42A760u;
label_42a760:
    // 0x42a760: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x42a760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_42a764:
    // 0x42a764: 0x24420790  addiu       $v0, $v0, 0x790
    ctx->pc = 0x42a764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1936));
label_42a768:
    // 0x42a768: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x42a768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_42a76c:
    // 0x42a76c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x42a76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42a770:
    // 0x42a770: 0x800008  jr          $a0
label_42a774:
    if (ctx->pc == 0x42A774u) {
        ctx->pc = 0x42A778u;
        goto label_42a778;
    }
    ctx->pc = 0x42A770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x42A778u: goto label_42a778;
            case 0x42A780u: goto label_42a780;
            case 0x42A788u: goto label_42a788;
            case 0x42A790u: goto label_42a790;
            case 0x42A798u: goto label_42a798;
            case 0x42A7A0u: goto label_42a7a0;
            case 0x42ABECu: goto label_42abec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A770u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x42A778u;
label_42a778:
    // 0x42a778: 0x1000000b  b           . + 4 + (0xB << 2)
label_42a77c:
    if (ctx->pc == 0x42A77Cu) {
        ctx->pc = 0x42A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A778u;
        // 0x42a77c: 0xaf80ae88  sw          $zero, -0x5178($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A780u;
        goto label_42a780;
    }
    ctx->pc = 0x42A778u;
    {
        const bool branch_taken_0x42a778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A778u;
        // 0x42a77c: 0xaf80ae88  sw          $zero, -0x5178($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a778) {
            ctx->pc = 0x42A7A8u;
            goto label_42a7a8;
        }
    }
    ctx->pc = 0x42A780u;
label_42a780:
    // 0x42a780: 0x10000008  b           . + 4 + (0x8 << 2)
label_42a784:
    if (ctx->pc == 0x42A784u) {
        ctx->pc = 0x42A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A780u;
        // 0x42a784: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A788u;
        goto label_42a788;
    }
    ctx->pc = 0x42A780u;
    {
        const bool branch_taken_0x42a780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A780u;
        // 0x42a784: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a780) {
            ctx->pc = 0x42A7A4u;
            goto label_42a7a4;
        }
    }
    ctx->pc = 0x42A788u;
label_42a788:
    // 0x42a788: 0x10000006  b           . + 4 + (0x6 << 2)
label_42a78c:
    if (ctx->pc == 0x42A78Cu) {
        ctx->pc = 0x42A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A788u;
        // 0x42a78c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A790u;
        goto label_42a790;
    }
    ctx->pc = 0x42A788u;
    {
        const bool branch_taken_0x42a788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A788u;
        // 0x42a78c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a788) {
            ctx->pc = 0x42A7A4u;
            goto label_42a7a4;
        }
    }
    ctx->pc = 0x42A790u;
label_42a790:
    // 0x42a790: 0x10000004  b           . + 4 + (0x4 << 2)
label_42a794:
    if (ctx->pc == 0x42A794u) {
        ctx->pc = 0x42A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A790u;
        // 0x42a794: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A798u;
        goto label_42a798;
    }
    ctx->pc = 0x42A790u;
    {
        const bool branch_taken_0x42a790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A790u;
        // 0x42a794: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a790) {
            ctx->pc = 0x42A7A4u;
            goto label_42a7a4;
        }
    }
    ctx->pc = 0x42A798u;
label_42a798:
    // 0x42a798: 0x10000002  b           . + 4 + (0x2 << 2)
label_42a79c:
    if (ctx->pc == 0x42A79Cu) {
        ctx->pc = 0x42A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A798u;
        // 0x42a79c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A7A0u;
        goto label_42a7a0;
    }
    ctx->pc = 0x42A798u;
    {
        const bool branch_taken_0x42a798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A798u;
        // 0x42a79c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a798) {
            ctx->pc = 0x42A7A4u;
            goto label_42a7a4;
        }
    }
    ctx->pc = 0x42A7A0u;
label_42a7a0:
    // 0x42a7a0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x42a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_42a7a4:
    // 0x42a7a4: 0xaf82ae88  sw          $v0, -0x5178($gp)
    ctx->pc = 0x42a7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946440), GPR_U32(ctx, 2));
label_42a7a8:
    // 0x42a7a8: 0x8f86ae8c  lw          $a2, -0x5174($gp)
    ctx->pc = 0x42a7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946444)));
label_42a7ac:
    // 0x42a7ac: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x42a7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_42a7b0:
    // 0x42a7b0: 0x8f85ae88  lw          $a1, -0x5178($gp)
    ctx->pc = 0x42a7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946440)));
label_42a7b4:
    // 0x42a7b4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x42a7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_42a7b8:
    // 0x42a7b8: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x42a7b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_42a7bc:
    // 0x42a7bc: 0x2463d330  addiu       $v1, $v1, -0x2CD0
    ctx->pc = 0x42a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955824));
label_42a7c0:
    // 0x42a7c0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x42a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_42a7c4:
    // 0x42a7c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x42a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_42a7c8:
    // 0x42a7c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x42a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_42a7cc:
    // 0x42a7cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x42a7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42a7d0:
    // 0x42a7d0: 0xff83ae70  sd          $v1, -0x5190($gp)
    ctx->pc = 0x42a7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946416), GPR_U64(ctx, 3));
label_42a7d4:
    // 0x42a7d4: 0x4600108  bltz        $v1, . + 4 + (0x108 << 2)
label_42a7d8:
    if (ctx->pc == 0x42A7D8u) {
        ctx->pc = 0x42A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A7D4u;
        // 0x42a7d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A7DCu;
        goto label_42a7dc;
    }
    ctx->pc = 0x42A7D4u;
    {
        const bool branch_taken_0x42a7d4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x42A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A7D4u;
        // 0x42a7d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a7d4) {
            ctx->pc = 0x42ABF8u;
            goto label_42abf8;
        }
    }
    ctx->pc = 0x42A7DCu;
label_42a7dc:
    // 0x42a7dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42a7e0:
    // 0x42a7e0: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
label_42a7e4:
    if (ctx->pc == 0x42A7E4u) {
        ctx->pc = 0x42A7E8u;
        goto label_42a7e8;
    }
    ctx->pc = 0x42A7E0u;
    {
        const bool branch_taken_0x42a7e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x42a7e0) {
            ctx->pc = 0x42A800u;
            goto label_42a800;
        }
    }
    ctx->pc = 0x42A7E8u;
label_42a7e8:
    // 0x42a7e8: 0x14c50005  bne         $a2, $a1, . + 4 + (0x5 << 2)
label_42a7ec:
    if (ctx->pc == 0x42A7ECu) {
        ctx->pc = 0x42A7F0u;
        goto label_42a7f0;
    }
    ctx->pc = 0x42A7E8u;
    {
        const bool branch_taken_0x42a7e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x42a7e8) {
            ctx->pc = 0x42A800u;
            goto label_42a800;
        }
    }
    ctx->pc = 0x42A7F0u;
label_42a7f0:
    // 0x42a7f0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x42a7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_42a7f4:
    // 0x42a7f4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x42a7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_42a7f8:
    // 0x42a7f8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x42a7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_42a7fc:
    // 0x42a7fc: 0xff82ae70  sd          $v0, -0x5190($gp)
    ctx->pc = 0x42a7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946416), GPR_U64(ctx, 2));
label_42a800:
    // 0x42a800: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42a800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_42a804:
    // 0x42a804: 0xc10a322  jal         func_428C88
label_42a808:
    if (ctx->pc == 0x42A808u) {
        ctx->pc = 0x42A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A804u;
        // 0x42a808: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A80Cu;
        goto label_42a80c;
    }
    ctx->pc = 0x42A804u;
    SET_GPR_U32(ctx, 31, 0x42A80Cu);
    ctx->pc = 0x42A808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A804u;
    // 0x42a808: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x42A804u, 0x42A80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A80Cu;
label_42a80c:
    // 0x42a80c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x42a80cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_42a810:
    // 0x42a810: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x42a810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_42a814:
    // 0x42a814: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x42a814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
label_42a818:
    // 0x42a818: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x42a818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_42a81c:
    // 0x42a81c: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x42a81cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_42a820:
    // 0x42a820: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x42a820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_42a824:
    // 0x42a824: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x42a824u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_42a828:
    // 0x42a828: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42a828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_42a82c:
    // 0x42a82c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42a82cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42a830:
    // 0x42a830: 0xdf85ae70  ld          $a1, -0x5190($gp)
    ctx->pc = 0x42a830u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294946416)));
label_42a834:
    // 0x42a834: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x42a834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_42a838:
    // 0x42a838: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x42a838u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_42a83c:
    // 0x42a83c: 0x100000e8  b           . + 4 + (0xE8 << 2)
label_42a840:
    if (ctx->pc == 0x42A840u) {
        ctx->pc = 0x42A840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A83Cu;
        // 0x42a840: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A844u;
        goto label_42a844;
    }
    ctx->pc = 0x42A83Cu;
    {
        const bool branch_taken_0x42a83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A83Cu;
        // 0x42a840: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a83c) {
            ctx->pc = 0x42ABE0u;
            goto label_42abe0;
        }
    }
    ctx->pc = 0x42A844u;
label_42a844:
    // 0x42a844: 0x0  nop
    ctx->pc = 0x42a844u;
    // NOP
label_42a848:
    // 0x42a848: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x42a848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_42a84c:
    // 0x42a84c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x42a84cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_42a850:
    // 0x42a850: 0x104000e6  beqz        $v0, . + 4 + (0xE6 << 2)
label_42a854:
    if (ctx->pc == 0x42A854u) {
        ctx->pc = 0x42A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A850u;
        // 0x42a854: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A858u;
        goto label_42a858;
    }
    ctx->pc = 0x42A850u;
    {
        const bool branch_taken_0x42a850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A850u;
        // 0x42a854: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a850) {
            ctx->pc = 0x42ABECu;
            goto label_42abec;
        }
    }
    ctx->pc = 0x42A858u;
label_42a858:
    // 0x42a858: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x42a858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_42a85c:
    // 0x42a85c: 0x244207b0  addiu       $v0, $v0, 0x7B0
    ctx->pc = 0x42a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1968));
label_42a860:
    // 0x42a860: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x42a860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_42a864:
    // 0x42a864: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x42a864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42a868:
    // 0x42a868: 0x800008  jr          $a0
label_42a86c:
    if (ctx->pc == 0x42A86Cu) {
        ctx->pc = 0x42A870u;
        goto label_42a870;
    }
    ctx->pc = 0x42A868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x42A870u: goto label_42a870;
            case 0x42A878u: goto label_42a878;
            case 0x42A880u: goto label_42a880;
            case 0x42A888u: goto label_42a888;
            case 0x42A890u: goto label_42a890;
            case 0x42A898u: goto label_42a898;
            case 0x42ABECu: goto label_42abec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42A868u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x42A870u;
label_42a870:
    // 0x42a870: 0x1000000b  b           . + 4 + (0xB << 2)
label_42a874:
    if (ctx->pc == 0x42A874u) {
        ctx->pc = 0x42A874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A870u;
        // 0x42a874: 0xaf80ae8c  sw          $zero, -0x5174($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946444), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A878u;
        goto label_42a878;
    }
    ctx->pc = 0x42A870u;
    {
        const bool branch_taken_0x42a870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A870u;
        // 0x42a874: 0xaf80ae8c  sw          $zero, -0x5174($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946444), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a870) {
            ctx->pc = 0x42A8A0u;
            goto label_42a8a0;
        }
    }
    ctx->pc = 0x42A878u;
label_42a878:
    // 0x42a878: 0x10000008  b           . + 4 + (0x8 << 2)
label_42a87c:
    if (ctx->pc == 0x42A87Cu) {
        ctx->pc = 0x42A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A878u;
        // 0x42a87c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A880u;
        goto label_42a880;
    }
    ctx->pc = 0x42A878u;
    {
        const bool branch_taken_0x42a878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A878u;
        // 0x42a87c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a878) {
            ctx->pc = 0x42A89Cu;
            goto label_42a89c;
        }
    }
    ctx->pc = 0x42A880u;
label_42a880:
    // 0x42a880: 0x10000006  b           . + 4 + (0x6 << 2)
label_42a884:
    if (ctx->pc == 0x42A884u) {
        ctx->pc = 0x42A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A880u;
        // 0x42a884: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A888u;
        goto label_42a888;
    }
    ctx->pc = 0x42A880u;
    {
        const bool branch_taken_0x42a880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A880u;
        // 0x42a884: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a880) {
            ctx->pc = 0x42A89Cu;
            goto label_42a89c;
        }
    }
    ctx->pc = 0x42A888u;
label_42a888:
    // 0x42a888: 0x10000004  b           . + 4 + (0x4 << 2)
label_42a88c:
    if (ctx->pc == 0x42A88Cu) {
        ctx->pc = 0x42A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A888u;
        // 0x42a88c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A890u;
        goto label_42a890;
    }
    ctx->pc = 0x42A888u;
    {
        const bool branch_taken_0x42a888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A888u;
        // 0x42a88c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a888) {
            ctx->pc = 0x42A89Cu;
            goto label_42a89c;
        }
    }
    ctx->pc = 0x42A890u;
label_42a890:
    // 0x42a890: 0x10000002  b           . + 4 + (0x2 << 2)
label_42a894:
    if (ctx->pc == 0x42A894u) {
        ctx->pc = 0x42A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A890u;
        // 0x42a894: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A898u;
        goto label_42a898;
    }
    ctx->pc = 0x42A890u;
    {
        const bool branch_taken_0x42a890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A890u;
        // 0x42a894: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a890) {
            ctx->pc = 0x42A89Cu;
            goto label_42a89c;
        }
    }
    ctx->pc = 0x42A898u;
label_42a898:
    // 0x42a898: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x42a898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_42a89c:
    // 0x42a89c: 0xaf82ae8c  sw          $v0, -0x5174($gp)
    ctx->pc = 0x42a89cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946444), GPR_U32(ctx, 2));
label_42a8a0:
    // 0x42a8a0: 0x8f86ae8c  lw          $a2, -0x5174($gp)
    ctx->pc = 0x42a8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946444)));
label_42a8a4:
    // 0x42a8a4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x42a8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_42a8a8:
    // 0x42a8a8: 0x8f85ae88  lw          $a1, -0x5178($gp)
    ctx->pc = 0x42a8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946440)));
label_42a8ac:
    // 0x42a8ac: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x42a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_42a8b0:
    // 0x42a8b0: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x42a8b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_42a8b4:
    // 0x42a8b4: 0x2463d330  addiu       $v1, $v1, -0x2CD0
    ctx->pc = 0x42a8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955824));
label_42a8b8:
    // 0x42a8b8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x42a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_42a8bc:
    // 0x42a8bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x42a8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_42a8c0:
    // 0x42a8c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x42a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_42a8c4:
    // 0x42a8c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x42a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42a8c8:
    // 0x42a8c8: 0xff83ae70  sd          $v1, -0x5190($gp)
    ctx->pc = 0x42a8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946416), GPR_U64(ctx, 3));
label_42a8cc:
    // 0x42a8cc: 0x46000ca  bltz        $v1, . + 4 + (0xCA << 2)
label_42a8d0:
    if (ctx->pc == 0x42A8D0u) {
        ctx->pc = 0x42A8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A8CCu;
        // 0x42a8d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A8D4u;
        goto label_42a8d4;
    }
    ctx->pc = 0x42A8CCu;
    {
        const bool branch_taken_0x42a8cc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x42A8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A8CCu;
        // 0x42a8d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a8cc) {
            ctx->pc = 0x42ABF8u;
            goto label_42abf8;
        }
    }
    ctx->pc = 0x42A8D4u;
label_42a8d4:
    // 0x42a8d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42a8d8:
    // 0x42a8d8: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
label_42a8dc:
    if (ctx->pc == 0x42A8DCu) {
        ctx->pc = 0x42A8E0u;
        goto label_42a8e0;
    }
    ctx->pc = 0x42A8D8u;
    {
        const bool branch_taken_0x42a8d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x42a8d8) {
            ctx->pc = 0x42A8F8u;
            goto label_42a8f8;
        }
    }
    ctx->pc = 0x42A8E0u;
label_42a8e0:
    // 0x42a8e0: 0x14c50005  bne         $a2, $a1, . + 4 + (0x5 << 2)
label_42a8e4:
    if (ctx->pc == 0x42A8E4u) {
        ctx->pc = 0x42A8E8u;
        goto label_42a8e8;
    }
    ctx->pc = 0x42A8E0u;
    {
        const bool branch_taken_0x42a8e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x42a8e0) {
            ctx->pc = 0x42A8F8u;
            goto label_42a8f8;
        }
    }
    ctx->pc = 0x42A8E8u;
label_42a8e8:
    // 0x42a8e8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x42a8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_42a8ec:
    // 0x42a8ec: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x42a8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_42a8f0:
    // 0x42a8f0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x42a8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_42a8f4:
    // 0x42a8f4: 0xff82ae70  sd          $v0, -0x5190($gp)
    ctx->pc = 0x42a8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946416), GPR_U64(ctx, 2));
label_42a8f8:
    // 0x42a8f8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42a8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_42a8fc:
    // 0x42a8fc: 0xc10a322  jal         func_428C88
label_42a900:
    if (ctx->pc == 0x42A900u) {
        ctx->pc = 0x42A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A8FCu;
        // 0x42a900: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A904u;
        goto label_42a904;
    }
    ctx->pc = 0x42A8FCu;
    SET_GPR_U32(ctx, 31, 0x42A904u);
    ctx->pc = 0x42A900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A8FCu;
    // 0x42a900: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x42A8FCu, 0x42A904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A904u;
label_42a904:
    // 0x42a904: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x42a904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_42a908:
    // 0x42a908: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x42a908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_42a90c:
    // 0x42a90c: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x42a90cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
label_42a910:
    // 0x42a910: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x42a910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_42a914:
    // 0x42a914: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x42a914u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_42a918:
    // 0x42a918: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x42a918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_42a91c:
    // 0x42a91c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x42a91cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_42a920:
    // 0x42a920: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42a920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_42a924:
    // 0x42a924: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42a924u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42a928:
    // 0x42a928: 0xdf85ae70  ld          $a1, -0x5190($gp)
    ctx->pc = 0x42a928u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294946416)));
label_42a92c:
    // 0x42a92c: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x42a92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_42a930:
    // 0x42a930: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x42a930u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_42a934:
    // 0x42a934: 0x100000aa  b           . + 4 + (0xAA << 2)
label_42a938:
    if (ctx->pc == 0x42A938u) {
        ctx->pc = 0x42A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A934u;
        // 0x42a938: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A93Cu;
        goto label_42a93c;
    }
    ctx->pc = 0x42A934u;
    {
        const bool branch_taken_0x42a934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A934u;
        // 0x42a938: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a934) {
            ctx->pc = 0x42ABE0u;
            goto label_42abe0;
        }
    }
    ctx->pc = 0x42A93Cu;
label_42a93c:
    // 0x42a93c: 0x0  nop
    ctx->pc = 0x42a93cu;
    // NOP
label_42a940:
    // 0x42a940: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x42a940u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_42a944:
    // 0x42a944: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_42a948:
    if (ctx->pc == 0x42A948u) {
        ctx->pc = 0x42A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A944u;
        // 0x42a948: 0xaf82bec8  sw          $v0, -0x4138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A94Cu;
        goto label_42a94c;
    }
    ctx->pc = 0x42A944u;
    {
        const bool branch_taken_0x42a944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A944u;
        // 0x42a948: 0xaf82bec8  sw          $v0, -0x4138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a944) {
            ctx->pc = 0x42A958u;
            goto label_42a958;
        }
    }
    ctx->pc = 0x42A94Cu;
label_42a94c:
    // 0x42a94c: 0x8f82bec4  lw          $v0, -0x413C($gp)
    ctx->pc = 0x42a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
label_42a950:
    // 0x42a950: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_42a954:
    if (ctx->pc == 0x42A954u) {
        ctx->pc = 0x42A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A950u;
        // 0x42a954: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A958u;
        goto label_42a958;
    }
    ctx->pc = 0x42A950u;
    {
        const bool branch_taken_0x42a950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A950u;
        // 0x42a954: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a950) {
            ctx->pc = 0x42A96Cu;
            goto label_42a96c;
        }
    }
    ctx->pc = 0x42A958u;
label_42a958:
    // 0x42a958: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x42a958u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_42a95c:
    // 0x42a95c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x42a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_42a960:
    // 0x42a960: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x42a960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_42a964:
    // 0x42a964: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_42a968:
    if (ctx->pc == 0x42A968u) {
        ctx->pc = 0x42A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A964u;
        // 0x42a968: 0xff82ae80  sd          $v0, -0x5180($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A96Cu;
        goto label_42a96c;
    }
    ctx->pc = 0x42A964u;
    {
        const bool branch_taken_0x42a964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A964u;
        // 0x42a968: 0xff82ae80  sd          $v0, -0x5180($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a964) {
            ctx->pc = 0x42ABF4u;
            goto label_42abf4;
        }
    }
    ctx->pc = 0x42A96Cu;
label_42a96c:
    // 0x42a96c: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x42a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_42a970:
    // 0x42a970: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x42a970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_42a974:
    // 0x42a974: 0x1000009f  b           . + 4 + (0x9F << 2)
label_42a978:
    if (ctx->pc == 0x42A978u) {
        ctx->pc = 0x42A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A974u;
        // 0x42a978: 0xff82ae80  sd          $v0, -0x5180($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A97Cu;
        goto label_42a97c;
    }
    ctx->pc = 0x42A974u;
    {
        const bool branch_taken_0x42a974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A974u;
        // 0x42a978: 0xff82ae80  sd          $v0, -0x5180($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a974) {
            ctx->pc = 0x42ABF4u;
            goto label_42abf4;
        }
    }
    ctx->pc = 0x42A97Cu;
label_42a97c:
    // 0x42a97c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_42a980:
    if (ctx->pc == 0x42A980u) {
        ctx->pc = 0x42A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A97Cu;
        // 0x42a980: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A984u;
        goto label_42a984;
    }
    ctx->pc = 0x42A97Cu;
    {
        const bool branch_taken_0x42a97c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A97Cu;
        // 0x42a980: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a97c) {
            ctx->pc = 0x42A998u;
            goto label_42a998;
        }
    }
    ctx->pc = 0x42A984u;
label_42a984:
    // 0x42a984: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x42a984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_42a988:
    // 0x42a988: 0x9383aed0  lbu         $v1, -0x5130($gp)
    ctx->pc = 0x42a988u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
label_42a98c:
    // 0x42a98c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x42a98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_42a990:
    // 0x42a990: 0x10000005  b           . + 4 + (0x5 << 2)
label_42a994:
    if (ctx->pc == 0x42A994u) {
        ctx->pc = 0x42A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A990u;
        // 0x42a994: 0x34630001  ori         $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A998u;
        goto label_42a998;
    }
    ctx->pc = 0x42A990u;
    {
        const bool branch_taken_0x42a990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A990u;
        // 0x42a994: 0x34630001  ori         $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a990) {
            ctx->pc = 0x42A9A8u;
            goto label_42a9a8;
        }
    }
    ctx->pc = 0x42A998u;
label_42a998:
    // 0x42a998: 0x2404ffdf  addiu       $a0, $zero, -0x21
    ctx->pc = 0x42a998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_42a99c:
    // 0x42a99c: 0x9383aed0  lbu         $v1, -0x5130($gp)
    ctx->pc = 0x42a99cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
label_42a9a0:
    // 0x42a9a0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x42a9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_42a9a4:
    // 0x42a9a4: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x42a9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
label_42a9a8:
    // 0x42a9a8: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x42a9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
label_42a9ac:
    // 0x42a9ac: 0x10000091  b           . + 4 + (0x91 << 2)
label_42a9b0:
    if (ctx->pc == 0x42A9B0u) {
        ctx->pc = 0x42A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A9ACu;
        // 0x42a9b0: 0xa383aed0  sb          $v1, -0x5130($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294946512), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A9B4u;
        goto label_42a9b4;
    }
    ctx->pc = 0x42A9ACu;
    {
        const bool branch_taken_0x42a9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A9ACu;
        // 0x42a9b0: 0xa383aed0  sb          $v1, -0x5130($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294946512), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42a9ac) {
            ctx->pc = 0x42ABF4u;
            goto label_42abf4;
        }
    }
    ctx->pc = 0x42A9B4u;
label_42a9b4:
    // 0x42a9b4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42a9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_42a9b8:
    // 0x42a9b8: 0xc10a322  jal         func_428C88
label_42a9bc:
    if (ctx->pc == 0x42A9BCu) {
        ctx->pc = 0x42A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42A9B8u;
        // 0x42a9bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42A9C0u;
        goto label_42a9c0;
    }
    ctx->pc = 0x42A9B8u;
    SET_GPR_U32(ctx, 31, 0x42A9C0u);
    ctx->pc = 0x42A9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42A9B8u;
    // 0x42a9bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x42A9B8u, 0x42A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42A9C0u;
label_42a9c0:
    // 0x42a9c0: 0x101c02  srl         $v1, $s0, 16
    ctx->pc = 0x42a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
label_42a9c4:
    // 0x42a9c4: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x42a9c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_42a9c8:
    // 0x42a9c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x42a9c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_42a9cc:
    // 0x42a9cc: 0x3202ff00  andi        $v0, $s0, 0xFF00
    ctx->pc = 0x42a9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65280);
label_42a9d0:
    // 0x42a9d0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x42a9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_42a9d4:
    // 0x42a9d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x42a9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_42a9d8:
    // 0x42a9d8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x42a9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_42a9dc:
    // 0x42a9dc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x42a9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_42a9e0:
    // 0x42a9e0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x42a9e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_42a9e4:
    // 0x42a9e4: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x42a9e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
label_42a9e8:
    // 0x42a9e8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x42a9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_42a9ec:
    // 0x42a9ec: 0xff83ae58  sd          $v1, -0x51A8($gp)
    ctx->pc = 0x42a9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946392), GPR_U64(ctx, 3));
label_42a9f0:
    // 0x42a9f0: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x42a9f0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_42a9f4:
    // 0x42a9f4: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x42a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_42a9f8:
    // 0x42a9f8: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x42a9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_42a9fc:
    // 0x42a9fc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_42aa00:
    // 0x42aa00: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42aa00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42aa04:
    // 0x42aa04: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x42aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_42aa08:
    // 0x42aa08: 0x70832389  pcpyld      $a0, $a0, $v1
    ctx->pc = 0x42aa08u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_42aa0c:
    // 0x42aa0c: 0x10000074  b           . + 4 + (0x74 << 2)
label_42aa10:
    if (ctx->pc == 0x42AA10u) {
        ctx->pc = 0x42AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA0Cu;
        // 0x42aa10: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AA14u;
        goto label_42aa14;
    }
    ctx->pc = 0x42AA0Cu;
    {
        const bool branch_taken_0x42aa0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA0Cu;
        // 0x42aa10: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42aa0c) {
            ctx->pc = 0x42ABE0u;
            goto label_42abe0;
        }
    }
    ctx->pc = 0x42AA14u;
label_42aa14:
    // 0x42aa14: 0x0  nop
    ctx->pc = 0x42aa14u;
    // NOP
label_42aa18:
    // 0x42aa18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42aa1c:
    // 0x42aa1c: 0x16020076  bne         $s0, $v0, . + 4 + (0x76 << 2)
label_42aa20:
    if (ctx->pc == 0x42AA20u) {
        ctx->pc = 0x42AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA1Cu;
        // 0x42aa20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AA24u;
        goto label_42aa24;
    }
    ctx->pc = 0x42AA1Cu;
    {
        const bool branch_taken_0x42aa1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x42AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA1Cu;
        // 0x42aa20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42aa1c) {
            ctx->pc = 0x42ABF8u;
            goto label_42abf8;
        }
    }
    ctx->pc = 0x42AA24u;
label_42aa24:
    // 0x42aa24: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x42aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_42aa28:
    // 0x42aa28: 0x24423c10  addiu       $v0, $v0, 0x3C10
    ctx->pc = 0x42aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15376));
label_42aa2c:
    // 0x42aa2c: 0x10000071  b           . + 4 + (0x71 << 2)
label_42aa30:
    if (ctx->pc == 0x42AA30u) {
        ctx->pc = 0x42AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA2Cu;
        // 0x42aa30: 0xaf82bed4  sw          $v0, -0x412C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AA34u;
        goto label_42aa34;
    }
    ctx->pc = 0x42AA2Cu;
    {
        const bool branch_taken_0x42aa2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA2Cu;
        // 0x42aa30: 0xaf82bed4  sw          $v0, -0x412C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42aa2c) {
            ctx->pc = 0x42ABF4u;
            goto label_42abf4;
        }
    }
    ctx->pc = 0x42AA34u;
label_42aa34:
    // 0x42aa34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42aa38:
    // 0x42aa38: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_42aa3c:
    if (ctx->pc == 0x42AA3Cu) {
        ctx->pc = 0x42AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA38u;
        // 0x42aa3c: 0x9382aed0  lbu         $v0, -0x5130($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AA40u;
        goto label_42aa40;
    }
    ctx->pc = 0x42AA38u;
    {
        const bool branch_taken_0x42aa38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x42AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA38u;
        // 0x42aa3c: 0x9382aed0  lbu         $v0, -0x5130($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42aa38) {
            ctx->pc = 0x42AA48u;
            goto label_42aa48;
        }
    }
    ctx->pc = 0x42AA40u;
label_42aa40:
    // 0x42aa40: 0x10000002  b           . + 4 + (0x2 << 2)
label_42aa44:
    if (ctx->pc == 0x42AA44u) {
        ctx->pc = 0x42AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA40u;
        // 0x42aa44: 0x304200df  andi        $v0, $v0, 0xDF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AA48u;
        goto label_42aa48;
    }
    ctx->pc = 0x42AA40u;
    {
        const bool branch_taken_0x42aa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA40u;
        // 0x42aa44: 0x304200df  andi        $v0, $v0, 0xDF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42aa40) {
            ctx->pc = 0x42AA4Cu;
            goto label_42aa4c;
        }
    }
    ctx->pc = 0x42AA48u;
label_42aa48:
    // 0x42aa48: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x42aa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_42aa4c:
    // 0x42aa4c: 0xa382aed0  sb          $v0, -0x5130($gp)
    ctx->pc = 0x42aa4cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294946512), (uint8_t)GPR_U32(ctx, 2));
label_42aa50:
    // 0x42aa50: 0x10000068  b           . + 4 + (0x68 << 2)
label_42aa54:
    if (ctx->pc == 0x42AA54u) {
        ctx->pc = 0x42AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA50u;
        // 0x42aa54: 0xaf90becc  sw          $s0, -0x4134($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950604), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AA58u;
        goto label_42aa58;
    }
    ctx->pc = 0x42AA50u;
    {
        const bool branch_taken_0x42aa50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA50u;
        // 0x42aa54: 0xaf90becc  sw          $s0, -0x4134($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950604), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42aa50) {
            ctx->pc = 0x42ABF4u;
            goto label_42abf4;
        }
    }
    ctx->pc = 0x42AA58u;
label_42aa58:
    // 0x42aa58: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x42aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_42aa5c:
    // 0x42aa5c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x42aa5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_42aa60:
    // 0x42aa60: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
label_42aa64:
    if (ctx->pc == 0x42AA64u) {
        ctx->pc = 0x42AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA60u;
        // 0x42aa64: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AA68u;
        goto label_42aa68;
    }
    ctx->pc = 0x42AA60u;
    {
        const bool branch_taken_0x42aa60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA60u;
        // 0x42aa64: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42aa60) {
            ctx->pc = 0x42ABECu;
            goto label_42abec;
        }
    }
    ctx->pc = 0x42AA68u;
label_42aa68:
    // 0x42aa68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x42aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_42aa6c:
    // 0x42aa6c: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x42aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
label_42aa70:
    // 0x42aa70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x42aa70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_42aa74:
    // 0x42aa74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x42aa74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42aa78:
    // 0x42aa78: 0x800008  jr          $a0
label_42aa7c:
    if (ctx->pc == 0x42AA7Cu) {
        ctx->pc = 0x42AA80u;
        goto label_42aa80;
    }
    ctx->pc = 0x42AA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x42AA80u: goto label_42aa80;
            case 0x42AA90u: goto label_42aa90;
            case 0x42AAA0u: goto label_42aaa0;
            case 0x42AAB0u: goto label_42aab0;
            case 0x42AAC0u: goto label_42aac0;
            case 0x42AAD0u: goto label_42aad0;
            case 0x42AAE0u: goto label_42aae0;
            case 0x42AAF0u: goto label_42aaf0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42AA78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x42AA80u;
label_42aa80:
    // 0x42aa80: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x42aa80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_42aa84:
    // 0x42aa84: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x42aa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_42aa88:
    // 0x42aa88: 0x1000001c  b           . + 4 + (0x1C << 2)
label_42aa8c:
    if (ctx->pc == 0x42AA8Cu) {
        ctx->pc = 0x42AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA88u;
        // 0x42aa8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AA90u;
        goto label_42aa90;
    }
    ctx->pc = 0x42AA88u;
    {
        const bool branch_taken_0x42aa88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA88u;
        // 0x42aa8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42aa88) {
            ctx->pc = 0x42AAFCu;
            goto label_42aafc;
        }
    }
    ctx->pc = 0x42AA90u;
label_42aa90:
    // 0x42aa90: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x42aa90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_42aa94:
    // 0x42aa94: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x42aa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_42aa98:
    // 0x42aa98: 0x10000018  b           . + 4 + (0x18 << 2)
label_42aa9c:
    if (ctx->pc == 0x42AA9Cu) {
        ctx->pc = 0x42AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA98u;
        // 0x42aa9c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AAA0u;
        goto label_42aaa0;
    }
    ctx->pc = 0x42AA98u;
    {
        const bool branch_taken_0x42aa98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AA98u;
        // 0x42aa9c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42aa98) {
            ctx->pc = 0x42AAFCu;
            goto label_42aafc;
        }
    }
    ctx->pc = 0x42AAA0u;
label_42aaa0:
    // 0x42aaa0: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x42aaa0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_42aaa4:
    // 0x42aaa4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x42aaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_42aaa8:
    // 0x42aaa8: 0x10000014  b           . + 4 + (0x14 << 2)
label_42aaac:
    if (ctx->pc == 0x42AAACu) {
        ctx->pc = 0x42AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AAA8u;
        // 0x42aaac: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AAB0u;
        goto label_42aab0;
    }
    ctx->pc = 0x42AAA8u;
    {
        const bool branch_taken_0x42aaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AAA8u;
        // 0x42aaac: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42aaa8) {
            ctx->pc = 0x42AAFCu;
            goto label_42aafc;
        }
    }
    ctx->pc = 0x42AAB0u;
label_42aab0:
    // 0x42aab0: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x42aab0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_42aab4:
    // 0x42aab4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x42aab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_42aab8:
    // 0x42aab8: 0x10000010  b           . + 4 + (0x10 << 2)
label_42aabc:
    if (ctx->pc == 0x42AABCu) {
        ctx->pc = 0x42AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AAB8u;
        // 0x42aabc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AAC0u;
        goto label_42aac0;
    }
    ctx->pc = 0x42AAB8u;
    {
        const bool branch_taken_0x42aab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AAB8u;
        // 0x42aabc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42aab8) {
            ctx->pc = 0x42AAFCu;
            goto label_42aafc;
        }
    }
    ctx->pc = 0x42AAC0u;
label_42aac0:
    // 0x42aac0: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x42aac0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_42aac4:
    // 0x42aac4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x42aac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_42aac8:
    // 0x42aac8: 0x1000000c  b           . + 4 + (0xC << 2)
label_42aacc:
    if (ctx->pc == 0x42AACCu) {
        ctx->pc = 0x42AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AAC8u;
        // 0x42aacc: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AAD0u;
        goto label_42aad0;
    }
    ctx->pc = 0x42AAC8u;
    {
        const bool branch_taken_0x42aac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AAC8u;
        // 0x42aacc: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42aac8) {
            ctx->pc = 0x42AAFCu;
            goto label_42aafc;
        }
    }
    ctx->pc = 0x42AAD0u;
label_42aad0:
    // 0x42aad0: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x42aad0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_42aad4:
    // 0x42aad4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x42aad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_42aad8:
    // 0x42aad8: 0x10000008  b           . + 4 + (0x8 << 2)
label_42aadc:
    if (ctx->pc == 0x42AADCu) {
        ctx->pc = 0x42AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AAD8u;
        // 0x42aadc: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AAE0u;
        goto label_42aae0;
    }
    ctx->pc = 0x42AAD8u;
    {
        const bool branch_taken_0x42aad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AAD8u;
        // 0x42aadc: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42aad8) {
            ctx->pc = 0x42AAFCu;
            goto label_42aafc;
        }
    }
    ctx->pc = 0x42AAE0u;
label_42aae0:
    // 0x42aae0: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x42aae0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_42aae4:
    // 0x42aae4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x42aae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_42aae8:
    // 0x42aae8: 0x10000004  b           . + 4 + (0x4 << 2)
label_42aaec:
    if (ctx->pc == 0x42AAECu) {
        ctx->pc = 0x42AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AAE8u;
        // 0x42aaec: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AAF0u;
        goto label_42aaf0;
    }
    ctx->pc = 0x42AAE8u;
    {
        const bool branch_taken_0x42aae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AAE8u;
        // 0x42aaec: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42aae8) {
            ctx->pc = 0x42AAFCu;
            goto label_42aafc;
        }
    }
    ctx->pc = 0x42AAF0u;
label_42aaf0:
    // 0x42aaf0: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x42aaf0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_42aaf4:
    // 0x42aaf4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x42aaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_42aaf8:
    // 0x42aaf8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x42aaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42aafc:
    // 0x42aafc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x42aafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_42ab00:
    // 0x42ab00: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x42ab00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_42ab04:
    // 0x42ab04: 0xff82ae48  sd          $v0, -0x51B8($gp)
    ctx->pc = 0x42ab04u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 2));
label_42ab08:
    // 0x42ab08: 0xdf83ae48  ld          $v1, -0x51B8($gp)
    ctx->pc = 0x42ab08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_42ab0c:
    // 0x42ab0c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x42ab0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_42ab10:
    // 0x42ab10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x42ab10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_42ab14:
    // 0x42ab14: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x42ab14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_42ab18:
    // 0x42ab18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_42ab1c:
    if (ctx->pc == 0x42AB1Cu) {
        ctx->pc = 0x42AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AB18u;
        // 0x42ab1c: 0x2402cfff  addiu       $v0, $zero, -0x3001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294955007));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AB20u;
        goto label_42ab20;
    }
    ctx->pc = 0x42AB18u;
    {
        const bool branch_taken_0x42ab18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AB18u;
        // 0x42ab1c: 0x2402cfff  addiu       $v0, $zero, -0x3001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294955007));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ab18) {
            ctx->pc = 0x42AB28u;
            goto label_42ab28;
        }
    }
    ctx->pc = 0x42AB20u;
label_42ab20:
    // 0x42ab20: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x42ab20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_42ab24:
    // 0x42ab24: 0xff82ae48  sd          $v0, -0x51B8($gp)
    ctx->pc = 0x42ab24u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 2));
label_42ab28:
    // 0x42ab28: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42ab28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_42ab2c:
    // 0x42ab2c: 0xc10a322  jal         func_428C88
label_42ab30:
    if (ctx->pc == 0x42AB30u) {
        ctx->pc = 0x42AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AB2Cu;
        // 0x42ab30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AB34u;
        goto label_42ab34;
    }
    ctx->pc = 0x42AB2Cu;
    SET_GPR_U32(ctx, 31, 0x42AB34u);
    ctx->pc = 0x42AB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42AB2Cu;
    // 0x42ab30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x42AB2Cu, 0x42AB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42AB34u;
label_42ab34:
    // 0x42ab34: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x42ab34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_42ab38:
    // 0x42ab38: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x42ab38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_42ab3c:
    // 0x42ab3c: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x42ab3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
label_42ab40:
    // 0x42ab40: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x42ab40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_42ab44:
    // 0x42ab44: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x42ab44u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_42ab48:
    // 0x42ab48: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x42ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_42ab4c:
    // 0x42ab4c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x42ab4cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_42ab50:
    // 0x42ab50: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_42ab54:
    // 0x42ab54: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42ab54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42ab58:
    // 0x42ab58: 0xdf85ae48  ld          $a1, -0x51B8($gp)
    ctx->pc = 0x42ab58u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_42ab5c:
    // 0x42ab5c: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x42ab5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_42ab60:
    // 0x42ab60: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x42ab60u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_42ab64:
    // 0x42ab64: 0x1000001e  b           . + 4 + (0x1E << 2)
label_42ab68:
    if (ctx->pc == 0x42AB68u) {
        ctx->pc = 0x42AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AB64u;
        // 0x42ab68: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AB6Cu;
        goto label_42ab6c;
    }
    ctx->pc = 0x42AB64u;
    {
        const bool branch_taken_0x42ab64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AB64u;
        // 0x42ab68: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ab64) {
            ctx->pc = 0x42ABE0u;
            goto label_42abe0;
        }
    }
    ctx->pc = 0x42AB6Cu;
label_42ab6c:
    // 0x42ab6c: 0x0  nop
    ctx->pc = 0x42ab6cu;
    // NOP
label_42ab70:
    // 0x42ab70: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x42ab70u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_42ab74:
    // 0x42ab74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x42ab74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_42ab78:
    // 0x42ab78: 0xc781806c  lwc1        $f1, -0x7F94($gp)
    ctx->pc = 0x42ab78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42ab7c:
    // 0x42ab7c: 0xdf83ae48  ld          $v1, -0x51B8($gp)
    ctx->pc = 0x42ab7cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_42ab80:
    // 0x42ab80: 0x2406f00f  addiu       $a2, $zero, -0xFF1
    ctx->pc = 0x42ab80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
label_42ab84:
    // 0x42ab84: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42ab84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_42ab88:
    // 0x42ab88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x42ab88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42ab8c:
    // 0x42ab8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x42ab8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_42ab90:
    // 0x42ab90: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x42ab90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_42ab94:
    // 0x42ab94: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x42ab94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_42ab98:
    // 0x42ab98: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x42ab98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_42ab9c:
    // 0x42ab9c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x42ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_42aba0:
    // 0x42aba0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x42aba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_42aba4:
    // 0x42aba4: 0xc10a322  jal         func_428C88
label_42aba8:
    if (ctx->pc == 0x42ABA8u) {
        ctx->pc = 0x42ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ABA4u;
        // 0x42aba8: 0xff83ae48  sd          $v1, -0x51B8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ABACu;
        goto label_42abac;
    }
    ctx->pc = 0x42ABA4u;
    SET_GPR_U32(ctx, 31, 0x42ABACu);
    ctx->pc = 0x42ABA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42ABA4u;
    // 0x42aba8: 0xff83ae48  sd          $v1, -0x51B8($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x42ABA4u, 0x42ABACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42ABACu;
label_42abac:
    // 0x42abac: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x42abacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_42abb0:
    // 0x42abb0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x42abb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_42abb4:
    // 0x42abb4: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x42abb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
label_42abb8:
    // 0x42abb8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x42abb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_42abbc:
    // 0x42abbc: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x42abbcu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_42abc0:
    // 0x42abc0: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x42abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_42abc4:
    // 0x42abc4: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x42abc4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_42abc8:
    // 0x42abc8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42abc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_42abcc:
    // 0x42abcc: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42abccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42abd0:
    // 0x42abd0: 0xdf85ae48  ld          $a1, -0x51B8($gp)
    ctx->pc = 0x42abd0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_42abd4:
    // 0x42abd4: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x42abd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_42abd8:
    // 0x42abd8: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x42abd8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_42abdc:
    // 0x42abdc: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x42abdcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_42abe0:
    // 0x42abe0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_42abe4:
    // 0x42abe4: 0x10000003  b           . + 4 + (0x3 << 2)
label_42abe8:
    if (ctx->pc == 0x42ABE8u) {
        ctx->pc = 0x42ABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ABE4u;
        // 0x42abe8: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ABECu;
        goto label_42abec;
    }
    ctx->pc = 0x42ABE4u;
    {
        const bool branch_taken_0x42abe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42ABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ABE4u;
        // 0x42abe8: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42abe4) {
            ctx->pc = 0x42ABF4u;
            goto label_42abf4;
        }
    }
    ctx->pc = 0x42ABECu;
label_42abec:
    // 0x42abec: 0x10000002  b           . + 4 + (0x2 << 2)
label_42abf0:
    if (ctx->pc == 0x42ABF0u) {
        ctx->pc = 0x42ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ABECu;
        // 0x42abf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ABF4u;
        goto label_42abf4;
    }
    ctx->pc = 0x42ABECu;
    {
        const bool branch_taken_0x42abec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ABECu;
        // 0x42abf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42abec) {
            ctx->pc = 0x42ABF8u;
            goto label_42abf8;
        }
    }
    ctx->pc = 0x42ABF4u;
label_42abf4:
    // 0x42abf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42abf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42abf8:
    // 0x42abf8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x42abf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42abfc:
    // 0x42abfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42abfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42ac00:
    // 0x42ac00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42ac00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_42ac04:
    // 0x42ac04: 0x3e00008  jr          $ra
label_42ac08:
    if (ctx->pc == 0x42AC08u) {
        ctx->pc = 0x42AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AC04u;
        // 0x42ac08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AC0Cu;
        goto label_42ac0c;
    }
    ctx->pc = 0x42AC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AC04u;
        // 0x42ac08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42AC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42AC0Cu;
label_42ac0c:
    // 0x42ac0c: 0x0  nop
    ctx->pc = 0x42ac0cu;
    // NOP
label_42ac10:
    // 0x42ac10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42ac10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_42ac14:
    // 0x42ac14: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x42ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_42ac18:
    // 0x42ac18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x42ac18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_42ac1c:
    // 0x42ac1c: 0x2c62001e  sltiu       $v0, $v1, 0x1E
    ctx->pc = 0x42ac1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_42ac20:
    // 0x42ac20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42ac20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_42ac24:
    // 0x42ac24: 0x104000f6  beqz        $v0, . + 4 + (0xF6 << 2)
label_42ac28:
    if (ctx->pc == 0x42AC28u) {
        ctx->pc = 0x42AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AC24u;
        // 0x42ac28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AC2Cu;
        goto label_42ac2c;
    }
    ctx->pc = 0x42AC24u;
    {
        const bool branch_taken_0x42ac24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AC24u;
        // 0x42ac28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ac24) {
            ctx->pc = 0x42B000u;
            goto label_42b000;
        }
    }
    ctx->pc = 0x42AC2Cu;
label_42ac2c:
    // 0x42ac2c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x42ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_42ac30:
    // 0x42ac30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x42ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_42ac34:
    // 0x42ac34: 0x244207f0  addiu       $v0, $v0, 0x7F0
    ctx->pc = 0x42ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2032));
label_42ac38:
    // 0x42ac38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x42ac38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_42ac3c:
    // 0x42ac3c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x42ac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42ac40:
    // 0x42ac40: 0x800008  jr          $a0
label_42ac44:
    if (ctx->pc == 0x42AC44u) {
        ctx->pc = 0x42AC48u;
        goto label_42ac48;
    }
    ctx->pc = 0x42AC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x42AC48u: goto label_42ac48;
            case 0x42AC5Cu: goto label_42ac5c;
            case 0x42AC80u: goto label_42ac80;
            case 0x42AC98u: goto label_42ac98;
            case 0x42ACB0u: goto label_42acb0;
            case 0x42ACC8u: goto label_42acc8;
            case 0x42ACE8u: goto label_42ace8;
            case 0x42AD04u: goto label_42ad04;
            case 0x42AD18u: goto label_42ad18;
            case 0x42AD80u: goto label_42ad80;
            case 0x42AE0Cu: goto label_42ae0c;
            case 0x42AE98u: goto label_42ae98;
            case 0x42AEA4u: goto label_42aea4;
            case 0x42AEBCu: goto label_42aebc;
            case 0x42AEF8u: goto label_42aef8;
            case 0x42AF2Cu: goto label_42af2c;
            case 0x42AF38u: goto label_42af38;
            case 0x42AFD8u: goto label_42afd8;
            case 0x42B000u: goto label_42b000;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42AC40u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x42AC48u;
label_42ac48:
    // 0x42ac48: 0x8f82bec0  lw          $v0, -0x4140($gp)
    ctx->pc = 0x42ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950592)));
label_42ac4c:
    // 0x42ac4c: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x42ac4cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_42ac50:
    // 0x42ac50: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x42ac50u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_42ac54:
    // 0x42ac54: 0x100000ec  b           . + 4 + (0xEC << 2)
label_42ac58:
    if (ctx->pc == 0x42AC58u) {
        ctx->pc = 0x42AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AC54u;
        // 0x42ac58: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AC5Cu;
        goto label_42ac5c;
    }
    ctx->pc = 0x42AC54u;
    {
        const bool branch_taken_0x42ac54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AC54u;
        // 0x42ac58: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ac54) {
            ctx->pc = 0x42B008u;
            goto label_42b008;
        }
    }
    ctx->pc = 0x42AC5Cu;
label_42ac5c:
    // 0x42ac5c: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x42ac5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
label_42ac60:
    // 0x42ac60: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x42ac60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_42ac64:
    // 0x42ac64: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x42ac64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
label_42ac68:
    // 0x42ac68: 0x546200e7  bnel        $v1, $v0, . + 4 + (0xE7 << 2)
label_42ac6c:
    if (ctx->pc == 0x42AC6Cu) {
        ctx->pc = 0x42AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AC68u;
        // 0x42ac6c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AC70u;
        goto label_42ac70;
    }
    ctx->pc = 0x42AC68u;
    {
        const bool branch_taken_0x42ac68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x42ac68) {
            ctx->pc = 0x42AC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42AC68u;
            // 0x42ac6c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B008u;
            goto label_42b008;
        }
    }
    ctx->pc = 0x42AC70u;
label_42ac70:
    // 0x42ac70: 0x146000ce  bnez        $v1, . + 4 + (0xCE << 2)
label_42ac74:
    if (ctx->pc == 0x42AC74u) {
        ctx->pc = 0x42AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AC70u;
        // 0x42ac74: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AC78u;
        goto label_42ac78;
    }
    ctx->pc = 0x42AC70u;
    {
        const bool branch_taken_0x42ac70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AC70u;
        // 0x42ac74: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ac70) {
            ctx->pc = 0x42AFACu;
            goto label_42afac;
        }
    }
    ctx->pc = 0x42AC78u;
label_42ac78:
    // 0x42ac78: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_42ac7c:
    if (ctx->pc == 0x42AC7Cu) {
        ctx->pc = 0x42AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AC78u;
        // 0x42ac7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AC80u;
        goto label_42ac80;
    }
    ctx->pc = 0x42AC78u;
    {
        const bool branch_taken_0x42ac78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AC78u;
        // 0x42ac7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ac78) {
            ctx->pc = 0x42AF7Cu;
            goto label_42af7c;
        }
    }
    ctx->pc = 0x42AC80u;
label_42ac80:
    // 0x42ac80: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x42ac80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
label_42ac84:
    // 0x42ac84: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x42ac84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_42ac88:
    // 0x42ac88: 0x144000c8  bnez        $v0, . + 4 + (0xC8 << 2)
label_42ac8c:
    if (ctx->pc == 0x42AC8Cu) {
        ctx->pc = 0x42AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AC88u;
        // 0x42ac8c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AC90u;
        goto label_42ac90;
    }
    ctx->pc = 0x42AC88u;
    {
        const bool branch_taken_0x42ac88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42AC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AC88u;
        // 0x42ac8c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ac88) {
            ctx->pc = 0x42AFACu;
            goto label_42afac;
        }
    }
    ctx->pc = 0x42AC90u;
label_42ac90:
    // 0x42ac90: 0x100000ba  b           . + 4 + (0xBA << 2)
label_42ac94:
    if (ctx->pc == 0x42AC94u) {
        ctx->pc = 0x42AC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AC90u;
        // 0x42ac94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AC98u;
        goto label_42ac98;
    }
    ctx->pc = 0x42AC90u;
    {
        const bool branch_taken_0x42ac90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AC90u;
        // 0x42ac94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ac90) {
            ctx->pc = 0x42AF7Cu;
            goto label_42af7c;
        }
    }
    ctx->pc = 0x42AC98u;
label_42ac98:
    // 0x42ac98: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x42ac98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
label_42ac9c:
    // 0x42ac9c: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x42ac9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
label_42aca0:
    // 0x42aca0: 0x144000c2  bnez        $v0, . + 4 + (0xC2 << 2)
label_42aca4:
    if (ctx->pc == 0x42ACA4u) {
        ctx->pc = 0x42ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ACA0u;
        // 0x42aca4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ACA8u;
        goto label_42aca8;
    }
    ctx->pc = 0x42ACA0u;
    {
        const bool branch_taken_0x42aca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ACA0u;
        // 0x42aca4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42aca0) {
            ctx->pc = 0x42AFACu;
            goto label_42afac;
        }
    }
    ctx->pc = 0x42ACA8u;
label_42aca8:
    // 0x42aca8: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_42acac:
    if (ctx->pc == 0x42ACACu) {
        ctx->pc = 0x42ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ACA8u;
        // 0x42acac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ACB0u;
        goto label_42acb0;
    }
    ctx->pc = 0x42ACA8u;
    {
        const bool branch_taken_0x42aca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ACA8u;
        // 0x42acac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42aca8) {
            ctx->pc = 0x42AF7Cu;
            goto label_42af7c;
        }
    }
    ctx->pc = 0x42ACB0u;
label_42acb0:
    // 0x42acb0: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x42acb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_42acb4:
    // 0x42acb4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x42acb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_42acb8:
    // 0x42acb8: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
label_42acbc:
    if (ctx->pc == 0x42ACBCu) {
        ctx->pc = 0x42ACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ACB8u;
        // 0x42acbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ACC0u;
        goto label_42acc0;
    }
    ctx->pc = 0x42ACB8u;
    {
        const bool branch_taken_0x42acb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42ACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ACB8u;
        // 0x42acbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42acb8) {
            ctx->pc = 0x42AF7Cu;
            goto label_42af7c;
        }
    }
    ctx->pc = 0x42ACC0u;
label_42acc0:
    // 0x42acc0: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_42acc4:
    if (ctx->pc == 0x42ACC4u) {
        ctx->pc = 0x42ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ACC0u;
        // 0x42acc4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ACC8u;
        goto label_42acc8;
    }
    ctx->pc = 0x42ACC0u;
    {
        const bool branch_taken_0x42acc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ACC0u;
        // 0x42acc4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42acc0) {
            ctx->pc = 0x42B008u;
            goto label_42b008;
        }
    }
    ctx->pc = 0x42ACC8u;
label_42acc8:
    // 0x42acc8: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x42acc8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_42accc:
    // 0x42accc: 0x3c030006  lui         $v1, 0x6
    ctx->pc = 0x42acccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
label_42acd0:
    // 0x42acd0: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x42acd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
label_42acd4:
    // 0x42acd4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x42acd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_42acd8:
    // 0x42acd8: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x42acd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
label_42acdc:
    // 0x42acdc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x42acdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_42ace0:
    // 0x42ace0: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_42ace4:
    if (ctx->pc == 0x42ACE4u) {
        ctx->pc = 0x42ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ACE0u;
        // 0x42ace4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ACE8u;
        goto label_42ace8;
    }
    ctx->pc = 0x42ACE0u;
    {
        const bool branch_taken_0x42ace0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ACE0u;
        // 0x42ace4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ace0) {
            ctx->pc = 0x42B008u;
            goto label_42b008;
        }
    }
    ctx->pc = 0x42ACE8u;
label_42ace8:
    // 0x42ace8: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x42ace8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_42acec:
    // 0x42acec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x42acecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42acf0:
    // 0x42acf0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x42acf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42acf4:
    // 0x42acf4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x42acf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_42acf8:
    // 0x42acf8: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x42acf8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_42acfc:
    // 0x42acfc: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_42ad00:
    if (ctx->pc == 0x42AD00u) {
        ctx->pc = 0x42AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ACFCu;
        // 0x42ad00: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AD04u;
        goto label_42ad04;
    }
    ctx->pc = 0x42ACFCu;
    {
        const bool branch_taken_0x42acfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ACFCu;
        // 0x42ad00: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42acfc) {
            ctx->pc = 0x42B008u;
            goto label_42b008;
        }
    }
    ctx->pc = 0x42AD04u;
label_42ad04:
    // 0x42ad04: 0x9f82ae3c  lwu         $v0, -0x51C4($gp)
    ctx->pc = 0x42ad04u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294946364)));
label_42ad08:
    // 0x42ad08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x42ad08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_42ad0c:
    // 0x42ad0c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x42ad0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_42ad10:
    // 0x42ad10: 0x10000067  b           . + 4 + (0x67 << 2)
label_42ad14:
    if (ctx->pc == 0x42AD14u) {
        ctx->pc = 0x42AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD10u;
        // 0x42ad14: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AD18u;
        goto label_42ad18;
    }
    ctx->pc = 0x42AD10u;
    {
        const bool branch_taken_0x42ad10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD10u;
        // 0x42ad14: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ad10) {
            ctx->pc = 0x42AEB0u;
            goto label_42aeb0;
        }
    }
    ctx->pc = 0x42AD18u;
label_42ad18:
    // 0x42ad18: 0xdf82ae68  ld          $v0, -0x5198($gp)
    ctx->pc = 0x42ad18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
label_42ad1c:
    // 0x42ad1c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x42ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_42ad20:
    // 0x42ad20: 0x304401e0  andi        $a0, $v0, 0x1E0
    ctx->pc = 0x42ad20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)480);
label_42ad24:
    // 0x42ad24: 0x108300a0  beq         $a0, $v1, . + 4 + (0xA0 << 2)
label_42ad28:
    if (ctx->pc == 0x42AD28u) {
        ctx->pc = 0x42AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD24u;
        // 0x42ad28: 0x28820081  slti        $v0, $a0, 0x81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)129) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AD2Cu;
        goto label_42ad2c;
    }
    ctx->pc = 0x42AD24u;
    {
        const bool branch_taken_0x42ad24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x42AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD24u;
        // 0x42ad28: 0x28820081  slti        $v0, $a0, 0x81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)129) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ad24) {
            ctx->pc = 0x42AFA8u;
            goto label_42afa8;
        }
    }
    ctx->pc = 0x42AD2Cu;
label_42ad2c:
    // 0x42ad2c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_42ad30:
    if (ctx->pc == 0x42AD30u) {
        ctx->pc = 0x42AD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD2Cu;
        // 0x42ad30: 0x24020120  addiu       $v0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AD34u;
        goto label_42ad34;
    }
    ctx->pc = 0x42AD2Cu;
    {
        const bool branch_taken_0x42ad2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD2Cu;
        // 0x42ad30: 0x24020120  addiu       $v0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ad2c) {
            ctx->pc = 0x42AD4Cu;
            goto label_42ad4c;
        }
    }
    ctx->pc = 0x42AD34u;
label_42ad34:
    // 0x42ad34: 0x10800090  beqz        $a0, . + 4 + (0x90 << 2)
label_42ad38:
    if (ctx->pc == 0x42AD38u) {
        ctx->pc = 0x42AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD34u;
        // 0x42ad38: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AD3Cu;
        goto label_42ad3c;
    }
    ctx->pc = 0x42AD34u;
    {
        const bool branch_taken_0x42ad34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD34u;
        // 0x42ad38: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ad34) {
            ctx->pc = 0x42AF78u;
            goto label_42af78;
        }
    }
    ctx->pc = 0x42AD3Cu;
label_42ad3c:
    // 0x42ad3c: 0x10820094  beq         $a0, $v0, . + 4 + (0x94 << 2)
label_42ad40:
    if (ctx->pc == 0x42AD40u) {
        ctx->pc = 0x42AD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD3Cu;
        // 0x42ad40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AD44u;
        goto label_42ad44;
    }
    ctx->pc = 0x42AD3Cu;
    {
        const bool branch_taken_0x42ad3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x42AD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD3Cu;
        // 0x42ad40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ad3c) {
            ctx->pc = 0x42AF90u;
            goto label_42af90;
        }
    }
    ctx->pc = 0x42AD44u;
label_42ad44:
    // 0x42ad44: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_42ad48:
    if (ctx->pc == 0x42AD48u) {
        ctx->pc = 0x42AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD44u;
        // 0x42ad48: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AD4Cu;
        goto label_42ad4c;
    }
    ctx->pc = 0x42AD44u;
    {
        const bool branch_taken_0x42ad44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD44u;
        // 0x42ad48: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ad44) {
            ctx->pc = 0x42B010u;
            goto label_42b010;
        }
    }
    ctx->pc = 0x42AD4Cu;
label_42ad4c:
    // 0x42ad4c: 0x10820093  beq         $a0, $v0, . + 4 + (0x93 << 2)
label_42ad50:
    if (ctx->pc == 0x42AD50u) {
        ctx->pc = 0x42AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD4Cu;
        // 0x42ad50: 0x28820121  slti        $v0, $a0, 0x121 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)289) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AD54u;
        goto label_42ad54;
    }
    ctx->pc = 0x42AD4Cu;
    {
        const bool branch_taken_0x42ad4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x42AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD4Cu;
        // 0x42ad50: 0x28820121  slti        $v0, $a0, 0x121 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)289) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ad4c) {
            ctx->pc = 0x42AF9Cu;
            goto label_42af9c;
        }
    }
    ctx->pc = 0x42AD54u;
label_42ad54:
    // 0x42ad54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_42ad58:
    if (ctx->pc == 0x42AD58u) {
        ctx->pc = 0x42AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD54u;
        // 0x42ad58: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AD5Cu;
        goto label_42ad5c;
    }
    ctx->pc = 0x42AD54u;
    {
        const bool branch_taken_0x42ad54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD54u;
        // 0x42ad58: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ad54) {
            ctx->pc = 0x42AD6Cu;
            goto label_42ad6c;
        }
    }
    ctx->pc = 0x42AD5Cu;
label_42ad5c:
    // 0x42ad5c: 0x10820098  beq         $a0, $v0, . + 4 + (0x98 << 2)
label_42ad60:
    if (ctx->pc == 0x42AD60u) {
        ctx->pc = 0x42AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD5Cu;
        // 0x42ad60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AD64u;
        goto label_42ad64;
    }
    ctx->pc = 0x42AD5Cu;
    {
        const bool branch_taken_0x42ad5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x42AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD5Cu;
        // 0x42ad60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ad5c) {
            ctx->pc = 0x42AFC0u;
            goto label_42afc0;
        }
    }
    ctx->pc = 0x42AD64u;
label_42ad64:
    // 0x42ad64: 0x100000aa  b           . + 4 + (0xAA << 2)
label_42ad68:
    if (ctx->pc == 0x42AD68u) {
        ctx->pc = 0x42AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD64u;
        // 0x42ad68: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AD6Cu;
        goto label_42ad6c;
    }
    ctx->pc = 0x42AD64u;
    {
        const bool branch_taken_0x42ad64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD64u;
        // 0x42ad68: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ad64) {
            ctx->pc = 0x42B010u;
            goto label_42b010;
        }
    }
    ctx->pc = 0x42AD6Cu;
label_42ad6c:
    // 0x42ad6c: 0x24020160  addiu       $v0, $zero, 0x160
    ctx->pc = 0x42ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_42ad70:
    // 0x42ad70: 0x10820096  beq         $a0, $v0, . + 4 + (0x96 << 2)
label_42ad74:
    if (ctx->pc == 0x42AD74u) {
        ctx->pc = 0x42AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD70u;
        // 0x42ad74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AD78u;
        goto label_42ad78;
    }
    ctx->pc = 0x42AD70u;
    {
        const bool branch_taken_0x42ad70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x42AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD70u;
        // 0x42ad74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ad70) {
            ctx->pc = 0x42AFCCu;
            goto label_42afcc;
        }
    }
    ctx->pc = 0x42AD78u;
label_42ad78:
    // 0x42ad78: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_42ad7c:
    if (ctx->pc == 0x42AD7Cu) {
        ctx->pc = 0x42AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD78u;
        // 0x42ad7c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AD80u;
        goto label_42ad80;
    }
    ctx->pc = 0x42AD78u;
    {
        const bool branch_taken_0x42ad78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD78u;
        // 0x42ad7c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ad78) {
            ctx->pc = 0x42B010u;
            goto label_42b010;
        }
    }
    ctx->pc = 0x42AD80u;
label_42ad80:
    // 0x42ad80: 0xdf87ae70  ld          $a3, -0x5190($gp)
    ctx->pc = 0x42ad80u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294946416)));
label_42ad84:
    // 0x42ad84: 0x4e0009e  bltz        $a3, . + 4 + (0x9E << 2)
label_42ad88:
    if (ctx->pc == 0x42AD88u) {
        ctx->pc = 0x42AD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD84u;
        // 0x42ad88: 0x8f88ae8c  lw          $t0, -0x5174($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AD8Cu;
        goto label_42ad8c;
    }
    ctx->pc = 0x42AD84u;
    {
        const bool branch_taken_0x42ad84 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x42AD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AD84u;
        // 0x42ad88: 0x8f88ae8c  lw          $t0, -0x5174($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ad84) {
            ctx->pc = 0x42B000u;
            goto label_42b000;
        }
    }
    ctx->pc = 0x42AD8Cu;
label_42ad8c:
    // 0x42ad8c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x42ad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_42ad90:
    // 0x42ad90: 0x8f82ae88  lw          $v0, -0x5178($gp)
    ctx->pc = 0x42ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946440)));
label_42ad94:
    // 0x42ad94: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x42ad94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_42ad98:
    // 0x42ad98: 0x1042018  mult        $a0, $t0, $a0
    ctx->pc = 0x42ad98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_42ad9c:
    // 0x42ad9c: 0x2463d330  addiu       $v1, $v1, -0x2CD0
    ctx->pc = 0x42ad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955824));
label_42ada0:
    // 0x42ada0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x42ada0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42ada4:
    // 0x42ada4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x42ada4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42ada8:
    // 0x42ada8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x42ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_42adac:
    // 0x42adac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x42adacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_42adb0:
    // 0x42adb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x42adb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_42adb4:
    // 0x42adb4: 0x14c5000a  bne         $a2, $a1, . + 4 + (0xA << 2)
label_42adb8:
    if (ctx->pc == 0x42ADB8u) {
        ctx->pc = 0x42ADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ADB4u;
        // 0x42adb8: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ADBCu;
        goto label_42adbc;
    }
    ctx->pc = 0x42ADB4u;
    {
        const bool branch_taken_0x42adb4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x42ADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ADB4u;
        // 0x42adb8: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42adb4) {
            ctx->pc = 0x42ADE0u;
            goto label_42ade0;
        }
    }
    ctx->pc = 0x42ADBCu;
label_42adbc:
    // 0x42adbc: 0x15060008  bne         $t0, $a2, . + 4 + (0x8 << 2)
label_42adc0:
    if (ctx->pc == 0x42ADC0u) {
        ctx->pc = 0x42ADC4u;
        goto label_42adc4;
    }
    ctx->pc = 0x42ADBCu;
    {
        const bool branch_taken_0x42adbc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x42adbc) {
            ctx->pc = 0x42ADE0u;
            goto label_42ade0;
        }
    }
    ctx->pc = 0x42ADC4u;
label_42adc4:
    // 0x42adc4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x42adc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_42adc8:
    // 0x42adc8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x42adc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_42adcc:
    // 0x42adcc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x42adccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_42add0:
    // 0x42add0: 0x14e2008e  bne         $a3, $v0, . + 4 + (0x8E << 2)
label_42add4:
    if (ctx->pc == 0x42ADD4u) {
        ctx->pc = 0x42ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ADD0u;
        // 0x42add4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ADD8u;
        goto label_42add8;
    }
    ctx->pc = 0x42ADD0u;
    {
        const bool branch_taken_0x42add0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x42ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ADD0u;
        // 0x42add4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42add0) {
            ctx->pc = 0x42B00Cu;
            goto label_42b00c;
        }
    }
    ctx->pc = 0x42ADD8u;
label_42add8:
    // 0x42add8: 0x10000004  b           . + 4 + (0x4 << 2)
label_42addc:
    if (ctx->pc == 0x42ADDCu) {
        ctx->pc = 0x42ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ADD8u;
        // 0x42addc: 0x2cc20006  sltiu       $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ADE0u;
        goto label_42ade0;
    }
    ctx->pc = 0x42ADD8u;
    {
        const bool branch_taken_0x42add8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ADD8u;
        // 0x42addc: 0x2cc20006  sltiu       $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42add8) {
            ctx->pc = 0x42ADECu;
            goto label_42adec;
        }
    }
    ctx->pc = 0x42ADE0u;
label_42ade0:
    // 0x42ade0: 0x14e3008a  bne         $a3, $v1, . + 4 + (0x8A << 2)
label_42ade4:
    if (ctx->pc == 0x42ADE4u) {
        ctx->pc = 0x42ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ADE0u;
        // 0x42ade4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ADE8u;
        goto label_42ade8;
    }
    ctx->pc = 0x42ADE0u;
    {
        const bool branch_taken_0x42ade0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x42ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ADE0u;
        // 0x42ade4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ade0) {
            ctx->pc = 0x42B00Cu;
            goto label_42b00c;
        }
    }
    ctx->pc = 0x42ADE8u;
label_42ade8:
    // 0x42ade8: 0x2cc20006  sltiu       $v0, $a2, 0x6
    ctx->pc = 0x42ade8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_42adec:
    // 0x42adec: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
label_42adf0:
    if (ctx->pc == 0x42ADF0u) {
        ctx->pc = 0x42ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ADECu;
        // 0x42adf0: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42ADF4u;
        goto label_42adf4;
    }
    ctx->pc = 0x42ADECu;
    {
        const bool branch_taken_0x42adec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42ADECu;
        // 0x42adf0: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42adec) {
            ctx->pc = 0x42B000u;
            goto label_42b000;
        }
    }
    ctx->pc = 0x42ADF4u;
label_42adf4:
    // 0x42adf4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x42adf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_42adf8:
    // 0x42adf8: 0x24420870  addiu       $v0, $v0, 0x870
    ctx->pc = 0x42adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2160));
label_42adfc:
    // 0x42adfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x42adfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_42ae00:
    // 0x42ae00: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x42ae00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42ae04:
    // 0x42ae04: 0x800008  jr          $a0
label_42ae08:
    if (ctx->pc == 0x42AE08u) {
        ctx->pc = 0x42AE0Cu;
        goto label_42ae0c;
    }
    ctx->pc = 0x42AE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x42AF78u: goto label_42af78;
            case 0x42AF84u: goto label_42af84;
            case 0x42AF90u: goto label_42af90;
            case 0x42AFB4u: goto label_42afb4;
            case 0x42AFC0u: goto label_42afc0;
            case 0x42AFCCu: goto label_42afcc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42AE04u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x42AE0Cu;
label_42ae0c:
    // 0x42ae0c: 0xdf87ae70  ld          $a3, -0x5190($gp)
    ctx->pc = 0x42ae0cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294946416)));
label_42ae10:
    // 0x42ae10: 0x4e0007b  bltz        $a3, . + 4 + (0x7B << 2)
label_42ae14:
    if (ctx->pc == 0x42AE14u) {
        ctx->pc = 0x42AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AE10u;
        // 0x42ae14: 0x8f84ae8c  lw          $a0, -0x5174($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AE18u;
        goto label_42ae18;
    }
    ctx->pc = 0x42AE10u;
    {
        const bool branch_taken_0x42ae10 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x42AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AE10u;
        // 0x42ae14: 0x8f84ae8c  lw          $a0, -0x5174($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ae10) {
            ctx->pc = 0x42B000u;
            goto label_42b000;
        }
    }
    ctx->pc = 0x42AE18u;
label_42ae18:
    // 0x42ae18: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x42ae18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_42ae1c:
    // 0x42ae1c: 0x8f86ae88  lw          $a2, -0x5178($gp)
    ctx->pc = 0x42ae1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946440)));
label_42ae20:
    // 0x42ae20: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x42ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_42ae24:
    // 0x42ae24: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x42ae24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42ae28:
    // 0x42ae28: 0x2463d330  addiu       $v1, $v1, -0x2CD0
    ctx->pc = 0x42ae28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955824));
label_42ae2c:
    // 0x42ae2c: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x42ae2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_42ae30:
    // 0x42ae30: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x42ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_42ae34:
    // 0x42ae34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x42ae34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42ae38:
    // 0x42ae38: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x42ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_42ae3c:
    // 0x42ae3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x42ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_42ae40:
    // 0x42ae40: 0x14c5000a  bne         $a2, $a1, . + 4 + (0xA << 2)
label_42ae44:
    if (ctx->pc == 0x42AE44u) {
        ctx->pc = 0x42AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AE40u;
        // 0x42ae44: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AE48u;
        goto label_42ae48;
    }
    ctx->pc = 0x42AE40u;
    {
        const bool branch_taken_0x42ae40 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x42AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AE40u;
        // 0x42ae44: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ae40) {
            ctx->pc = 0x42AE6Cu;
            goto label_42ae6c;
        }
    }
    ctx->pc = 0x42AE48u;
label_42ae48:
    // 0x42ae48: 0x15060008  bne         $t0, $a2, . + 4 + (0x8 << 2)
label_42ae4c:
    if (ctx->pc == 0x42AE4Cu) {
        ctx->pc = 0x42AE50u;
        goto label_42ae50;
    }
    ctx->pc = 0x42AE48u;
    {
        const bool branch_taken_0x42ae48 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x42ae48) {
            ctx->pc = 0x42AE6Cu;
            goto label_42ae6c;
        }
    }
    ctx->pc = 0x42AE50u;
label_42ae50:
    // 0x42ae50: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x42ae50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_42ae54:
    // 0x42ae54: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x42ae54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_42ae58:
    // 0x42ae58: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x42ae58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_42ae5c:
    // 0x42ae5c: 0x14e2006b  bne         $a3, $v0, . + 4 + (0x6B << 2)
label_42ae60:
    if (ctx->pc == 0x42AE60u) {
        ctx->pc = 0x42AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AE5Cu;
        // 0x42ae60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AE64u;
        goto label_42ae64;
    }
    ctx->pc = 0x42AE5Cu;
    {
        const bool branch_taken_0x42ae5c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x42AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AE5Cu;
        // 0x42ae60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ae5c) {
            ctx->pc = 0x42B00Cu;
            goto label_42b00c;
        }
    }
    ctx->pc = 0x42AE64u;
label_42ae64:
    // 0x42ae64: 0x10000004  b           . + 4 + (0x4 << 2)
label_42ae68:
    if (ctx->pc == 0x42AE68u) {
        ctx->pc = 0x42AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AE64u;
        // 0x42ae68: 0x2d020006  sltiu       $v0, $t0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AE6Cu;
        goto label_42ae6c;
    }
    ctx->pc = 0x42AE64u;
    {
        const bool branch_taken_0x42ae64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AE64u;
        // 0x42ae68: 0x2d020006  sltiu       $v0, $t0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ae64) {
            ctx->pc = 0x42AE78u;
            goto label_42ae78;
        }
    }
    ctx->pc = 0x42AE6Cu;
label_42ae6c:
    // 0x42ae6c: 0x14e30067  bne         $a3, $v1, . + 4 + (0x67 << 2)
label_42ae70:
    if (ctx->pc == 0x42AE70u) {
        ctx->pc = 0x42AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AE6Cu;
        // 0x42ae70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AE74u;
        goto label_42ae74;
    }
    ctx->pc = 0x42AE6Cu;
    {
        const bool branch_taken_0x42ae6c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x42AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AE6Cu;
        // 0x42ae70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ae6c) {
            ctx->pc = 0x42B00Cu;
            goto label_42b00c;
        }
    }
    ctx->pc = 0x42AE74u;
label_42ae74:
    // 0x42ae74: 0x2d020006  sltiu       $v0, $t0, 0x6
    ctx->pc = 0x42ae74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_42ae78:
    // 0x42ae78: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
label_42ae7c:
    if (ctx->pc == 0x42AE7Cu) {
        ctx->pc = 0x42AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AE78u;
        // 0x42ae7c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AE80u;
        goto label_42ae80;
    }
    ctx->pc = 0x42AE78u;
    {
        const bool branch_taken_0x42ae78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AE78u;
        // 0x42ae7c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ae78) {
            ctx->pc = 0x42B000u;
            goto label_42b000;
        }
    }
    ctx->pc = 0x42AE80u;
label_42ae80:
    // 0x42ae80: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x42ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_42ae84:
    // 0x42ae84: 0x24420890  addiu       $v0, $v0, 0x890
    ctx->pc = 0x42ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2192));
label_42ae88:
    // 0x42ae88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x42ae88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_42ae8c:
    // 0x42ae8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x42ae8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42ae90:
    // 0x42ae90: 0x800008  jr          $a0
label_42ae94:
    if (ctx->pc == 0x42AE94u) {
        ctx->pc = 0x42AE98u;
        goto label_42ae98;
    }
    ctx->pc = 0x42AE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x42AF78u: goto label_42af78;
            case 0x42AF84u: goto label_42af84;
            case 0x42AF90u: goto label_42af90;
            case 0x42AFB4u: goto label_42afb4;
            case 0x42AFC0u: goto label_42afc0;
            case 0x42AFCCu: goto label_42afcc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42AE90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x42AE98u;
label_42ae98:
    // 0x42ae98: 0x8f82bec8  lw          $v0, -0x4138($gp)
    ctx->pc = 0x42ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950600)));
label_42ae9c:
    // 0x42ae9c: 0x1000005a  b           . + 4 + (0x5A << 2)
label_42aea0:
    if (ctx->pc == 0x42AEA0u) {
        ctx->pc = 0x42AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AE9Cu;
        // 0x42aea0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AEA4u;
        goto label_42aea4;
    }
    ctx->pc = 0x42AE9Cu;
    {
        const bool branch_taken_0x42ae9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AE9Cu;
        // 0x42aea0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ae9c) {
            ctx->pc = 0x42B008u;
            goto label_42b008;
        }
    }
    ctx->pc = 0x42AEA4u;
label_42aea4:
    // 0x42aea4: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x42aea4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_42aea8:
    // 0x42aea8: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x42aea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
label_42aeac:
    // 0x42aeac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x42aeacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_42aeb0:
    // 0x42aeb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x42aeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_42aeb4:
    // 0x42aeb4: 0x10000054  b           . + 4 + (0x54 << 2)
label_42aeb8:
    if (ctx->pc == 0x42AEB8u) {
        ctx->pc = 0x42AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AEB4u;
        // 0x42aeb8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AEBCu;
        goto label_42aebc;
    }
    ctx->pc = 0x42AEB4u;
    {
        const bool branch_taken_0x42aeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AEB4u;
        // 0x42aeb8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42aeb4) {
            ctx->pc = 0x42B008u;
            goto label_42b008;
        }
    }
    ctx->pc = 0x42AEBCu;
label_42aebc:
    // 0x42aebc: 0xdf83ae58  ld          $v1, -0x51A8($gp)
    ctx->pc = 0x42aebcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294946392)));
label_42aec0:
    // 0x42aec0: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x42aec0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_42aec4:
    // 0x42aec4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x42aec4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_42aec8:
    // 0x42aec8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x42aec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_42aecc:
    // 0x42aecc: 0x3243a  dsrl        $a0, $v1, 16
    ctx->pc = 0x42aeccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> 16);
label_42aed0:
    // 0x42aed0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x42aed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_42aed4:
    // 0x42aed4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x42aed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
label_42aed8:
    // 0x42aed8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x42aed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_42aedc:
    // 0x42aedc: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x42aedcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_42aee0:
    // 0x42aee0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x42aee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_42aee4:
    // 0x42aee4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x42aee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_42aee8:
    // 0x42aee8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x42aee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_42aeec:
    // 0x42aeec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x42aeecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_42aef0:
    // 0x42aef0: 0x10000045  b           . + 4 + (0x45 << 2)
label_42aef4:
    if (ctx->pc == 0x42AEF4u) {
        ctx->pc = 0x42AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AEF0u;
        // 0x42aef4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AEF8u;
        goto label_42aef8;
    }
    ctx->pc = 0x42AEF0u;
    {
        const bool branch_taken_0x42aef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AEF0u;
        // 0x42aef4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42aef0) {
            ctx->pc = 0x42B008u;
            goto label_42b008;
        }
    }
    ctx->pc = 0x42AEF8u;
label_42aef8:
    // 0x42aef8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x42aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_42aefc:
    // 0x42aefc: 0x8f83bed4  lw          $v1, -0x412C($gp)
    ctx->pc = 0x42aefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950612)));
label_42af00:
    // 0x42af00: 0x24423c10  addiu       $v0, $v0, 0x3C10
    ctx->pc = 0x42af00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15376));
label_42af04:
    // 0x42af04: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_42af08:
    if (ctx->pc == 0x42AF08u) {
        ctx->pc = 0x42AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF04u;
        // 0x42af08: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AF0Cu;
        goto label_42af0c;
    }
    ctx->pc = 0x42AF04u;
    {
        const bool branch_taken_0x42af04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x42AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF04u;
        // 0x42af08: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42af04) {
            ctx->pc = 0x42AF78u;
            goto label_42af78;
        }
    }
    ctx->pc = 0x42AF0Cu;
label_42af0c:
    // 0x42af0c: 0x24423cf0  addiu       $v0, $v0, 0x3CF0
    ctx->pc = 0x42af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15600));
label_42af10:
    // 0x42af10: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
label_42af14:
    if (ctx->pc == 0x42AF14u) {
        ctx->pc = 0x42AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF10u;
        // 0x42af14: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AF18u;
        goto label_42af18;
    }
    ctx->pc = 0x42AF10u;
    {
        const bool branch_taken_0x42af10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x42AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF10u;
        // 0x42af14: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42af10) {
            ctx->pc = 0x42AF90u;
            goto label_42af90;
        }
    }
    ctx->pc = 0x42AF18u;
label_42af18:
    // 0x42af18: 0x24423dd0  addiu       $v0, $v0, 0x3DD0
    ctx->pc = 0x42af18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15824));
label_42af1c:
    // 0x42af1c: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
label_42af20:
    if (ctx->pc == 0x42AF20u) {
        ctx->pc = 0x42AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF1Cu;
        // 0x42af20: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AF24u;
        goto label_42af24;
    }
    ctx->pc = 0x42AF1Cu;
    {
        const bool branch_taken_0x42af1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x42AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF1Cu;
        // 0x42af20: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42af1c) {
            ctx->pc = 0x42AFACu;
            goto label_42afac;
        }
    }
    ctx->pc = 0x42AF24u;
label_42af24:
    // 0x42af24: 0x10000038  b           . + 4 + (0x38 << 2)
label_42af28:
    if (ctx->pc == 0x42AF28u) {
        ctx->pc = 0x42AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF24u;
        // 0x42af28: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AF2Cu;
        goto label_42af2c;
    }
    ctx->pc = 0x42AF24u;
    {
        const bool branch_taken_0x42af24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF24u;
        // 0x42af28: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42af24) {
            ctx->pc = 0x42B008u;
            goto label_42b008;
        }
    }
    ctx->pc = 0x42AF2Cu;
label_42af2c:
    // 0x42af2c: 0x8f82becc  lw          $v0, -0x4134($gp)
    ctx->pc = 0x42af2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950604)));
label_42af30:
    // 0x42af30: 0x10000035  b           . + 4 + (0x35 << 2)
label_42af34:
    if (ctx->pc == 0x42AF34u) {
        ctx->pc = 0x42AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF30u;
        // 0x42af34: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AF38u;
        goto label_42af38;
    }
    ctx->pc = 0x42AF30u;
    {
        const bool branch_taken_0x42af30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF30u;
        // 0x42af34: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42af30) {
            ctx->pc = 0x42B008u;
            goto label_42b008;
        }
    }
    ctx->pc = 0x42AF38u;
label_42af38:
    // 0x42af38: 0xdf83ae48  ld          $v1, -0x51B8($gp)
    ctx->pc = 0x42af38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_42af3c:
    // 0x42af3c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x42af3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_42af40:
    // 0x42af40: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_42af44:
    if (ctx->pc == 0x42AF44u) {
        ctx->pc = 0x42AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF40u;
        // 0x42af44: 0x3063300e  andi        $v1, $v1, 0x300E (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12302);
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AF48u;
        goto label_42af48;
    }
    ctx->pc = 0x42AF40u;
    {
        const bool branch_taken_0x42af40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF40u;
        // 0x42af44: 0x3063300e  andi        $v1, $v1, 0x300E (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12302);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42af40) {
            ctx->pc = 0x42AF84u;
            goto label_42af84;
        }
    }
    ctx->pc = 0x42AF48u;
label_42af48:
    // 0x42af48: 0x2c62000e  sltiu       $v0, $v1, 0xE
    ctx->pc = 0x42af48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_42af4c:
    // 0x42af4c: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
label_42af50:
    if (ctx->pc == 0x42AF50u) {
        ctx->pc = 0x42AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF4Cu;
        // 0x42af50: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AF54u;
        goto label_42af54;
    }
    ctx->pc = 0x42AF4Cu;
    {
        const bool branch_taken_0x42af4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42af4c) {
            ctx->pc = 0x42AF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42AF4Cu;
            // 0x42af50: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B008u;
            goto label_42b008;
        }
    }
    ctx->pc = 0x42AF54u;
label_42af54:
    // 0x42af54: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x42af54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_42af58:
    // 0x42af58: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x42af58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_42af5c:
    // 0x42af5c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x42af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_42af60:
    // 0x42af60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x42af60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_42af64:
    // 0x42af64: 0x246308b0  addiu       $v1, $v1, 0x8B0
    ctx->pc = 0x42af64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2224));
label_42af68:
    // 0x42af68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x42af68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_42af6c:
    // 0x42af6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x42af6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42af70:
    // 0x42af70: 0x800008  jr          $a0
label_42af74:
    if (ctx->pc == 0x42AF74u) {
        ctx->pc = 0x42AF78u;
        goto label_42af78;
    }
    ctx->pc = 0x42AF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42AF70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x42AF78u;
label_42af78:
    // 0x42af78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42af78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42af7c:
    // 0x42af7c: 0x10000022  b           . + 4 + (0x22 << 2)
label_42af80:
    if (ctx->pc == 0x42AF80u) {
        ctx->pc = 0x42AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF7Cu;
        // 0x42af80: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AF84u;
        goto label_42af84;
    }
    ctx->pc = 0x42AF7Cu;
    {
        const bool branch_taken_0x42af7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF7Cu;
        // 0x42af80: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42af7c) {
            ctx->pc = 0x42B008u;
            goto label_42b008;
        }
    }
    ctx->pc = 0x42AF84u;
label_42af84:
    // 0x42af84: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x42af84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_42af88:
    // 0x42af88: 0x1000001f  b           . + 4 + (0x1F << 2)
label_42af8c:
    if (ctx->pc == 0x42AF8Cu) {
        ctx->pc = 0x42AF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF88u;
        // 0x42af8c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AF90u;
        goto label_42af90;
    }
    ctx->pc = 0x42AF88u;
    {
        const bool branch_taken_0x42af88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF88u;
        // 0x42af8c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42af88) {
            ctx->pc = 0x42B008u;
            goto label_42b008;
        }
    }
    ctx->pc = 0x42AF90u;
label_42af90:
    // 0x42af90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x42af90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42af94:
    // 0x42af94: 0x1000001c  b           . + 4 + (0x1C << 2)
label_42af98:
    if (ctx->pc == 0x42AF98u) {
        ctx->pc = 0x42AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF94u;
        // 0x42af98: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AF9Cu;
        goto label_42af9c;
    }
    ctx->pc = 0x42AF94u;
    {
        const bool branch_taken_0x42af94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AF94u;
        // 0x42af98: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42af94) {
            ctx->pc = 0x42B008u;
            goto label_42b008;
        }
    }
    ctx->pc = 0x42AF9Cu;
label_42af9c:
    // 0x42af9c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x42af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_42afa0:
    // 0x42afa0: 0x10000019  b           . + 4 + (0x19 << 2)
label_42afa4:
    if (ctx->pc == 0x42AFA4u) {
        ctx->pc = 0x42AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AFA0u;
        // 0x42afa4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AFA8u;
        goto label_42afa8;
    }
    ctx->pc = 0x42AFA0u;
    {
        const bool branch_taken_0x42afa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AFA0u;
        // 0x42afa4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42afa0) {
            ctx->pc = 0x42B008u;
            goto label_42b008;
        }
    }
    ctx->pc = 0x42AFA8u;
label_42afa8:
    // 0x42afa8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x42afa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_42afac:
    // 0x42afac: 0x10000016  b           . + 4 + (0x16 << 2)
label_42afb0:
    if (ctx->pc == 0x42AFB0u) {
        ctx->pc = 0x42AFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AFACu;
        // 0x42afb0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AFB4u;
        goto label_42afb4;
    }
    ctx->pc = 0x42AFACu;
    {
        const bool branch_taken_0x42afac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AFACu;
        // 0x42afb0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42afac) {
            ctx->pc = 0x42B008u;
            goto label_42b008;
        }
    }
    ctx->pc = 0x42AFB4u;
label_42afb4:
    // 0x42afb4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x42afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_42afb8:
    // 0x42afb8: 0x10000013  b           . + 4 + (0x13 << 2)
label_42afbc:
    if (ctx->pc == 0x42AFBCu) {
        ctx->pc = 0x42AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AFB8u;
        // 0x42afbc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AFC0u;
        goto label_42afc0;
    }
    ctx->pc = 0x42AFB8u;
    {
        const bool branch_taken_0x42afb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AFB8u;
        // 0x42afbc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42afb8) {
            ctx->pc = 0x42B008u;
            goto label_42b008;
        }
    }
    ctx->pc = 0x42AFC0u;
label_42afc0:
    // 0x42afc0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x42afc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_42afc4:
    // 0x42afc4: 0x10000010  b           . + 4 + (0x10 << 2)
label_42afc8:
    if (ctx->pc == 0x42AFC8u) {
        ctx->pc = 0x42AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AFC4u;
        // 0x42afc8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AFCCu;
        goto label_42afcc;
    }
    ctx->pc = 0x42AFC4u;
    {
        const bool branch_taken_0x42afc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AFC4u;
        // 0x42afc8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42afc4) {
            ctx->pc = 0x42B008u;
            goto label_42b008;
        }
    }
    ctx->pc = 0x42AFCCu;
label_42afcc:
    // 0x42afcc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x42afccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_42afd0:
    // 0x42afd0: 0x1000000d  b           . + 4 + (0xD << 2)
label_42afd4:
    if (ctx->pc == 0x42AFD4u) {
        ctx->pc = 0x42AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AFD0u;
        // 0x42afd4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AFD8u;
        goto label_42afd8;
    }
    ctx->pc = 0x42AFD0u;
    {
        const bool branch_taken_0x42afd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AFD0u;
        // 0x42afd4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42afd0) {
            ctx->pc = 0x42B008u;
            goto label_42b008;
        }
    }
    ctx->pc = 0x42AFD8u;
label_42afd8:
    // 0x42afd8: 0xdf84ae48  ld          $a0, -0x51B8($gp)
    ctx->pc = 0x42afd8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_42afdc:
    // 0x42afdc: 0x30840ff0  andi        $a0, $a0, 0xFF0
    ctx->pc = 0x42afdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4080);
label_42afe0:
    // 0x42afe0: 0xc0beb04  jal         func_2FAC10
label_42afe4:
    if (ctx->pc == 0x42AFE4u) {
        ctx->pc = 0x42AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AFE0u;
        // 0x42afe4: 0x4213a  dsrl        $a0, $a0, 4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x42AFE8u;
        goto label_42afe8;
    }
    ctx->pc = 0x42AFE0u;
    SET_GPR_U32(ctx, 31, 0x42AFE8u);
    ctx->pc = 0x42AFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42AFE0u;
    // 0x42afe4: 0x4213a  dsrl        $a0, $a0, 4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAC10u, 0x42AFE0u, 0x42AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42AFE8u;
label_42afe8:
    // 0x42afe8: 0xc7818070  lwc1        $f1, -0x7F90($gp)
    ctx->pc = 0x42afe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42afec:
    // 0x42afec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x42afecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_42aff0:
    // 0x42aff0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x42aff0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_42aff4:
    // 0x42aff4: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x42aff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_42aff8:
    // 0x42aff8: 0x10000004  b           . + 4 + (0x4 << 2)
label_42affc:
    if (ctx->pc == 0x42AFFCu) {
        ctx->pc = 0x42AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AFF8u;
        // 0x42affc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B000u;
        goto label_42b000;
    }
    ctx->pc = 0x42AFF8u;
    {
        const bool branch_taken_0x42aff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42AFF8u;
        // 0x42affc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42aff8) {
            ctx->pc = 0x42B00Cu;
            goto label_42b00c;
        }
    }
    ctx->pc = 0x42B000u;
label_42b000:
    // 0x42b000: 0x10000002  b           . + 4 + (0x2 << 2)
label_42b004:
    if (ctx->pc == 0x42B004u) {
        ctx->pc = 0x42B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B000u;
        // 0x42b004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B008u;
        goto label_42b008;
    }
    ctx->pc = 0x42B000u;
    {
        const bool branch_taken_0x42b000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B000u;
        // 0x42b004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b000) {
            ctx->pc = 0x42B00Cu;
            goto label_42b00c;
        }
    }
    ctx->pc = 0x42B008u;
label_42b008:
    // 0x42b008: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42b008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42b00c:
    // 0x42b00c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x42b00cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42b010:
    // 0x42b010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42b010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_42b014:
    // 0x42b014: 0x3e00008  jr          $ra
label_42b018:
    if (ctx->pc == 0x42B018u) {
        ctx->pc = 0x42B018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B014u;
        // 0x42b018: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B01Cu;
        goto label_42b01c;
    }
    ctx->pc = 0x42B014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42B018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B014u;
        // 0x42b018: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42B014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42B01Cu;
label_42b01c:
    // 0x42b01c: 0x0  nop
    ctx->pc = 0x42b01cu;
    // NOP
label_42b020:
    // 0x42b020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42b020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_42b024:
    // 0x42b024: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x42b024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_42b028:
    // 0x42b028: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x42b028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_42b02c:
    // 0x42b02c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x42b02cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_42b030:
    // 0x42b030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42b030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_42b034:
    // 0x42b034: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_42b038:
    if (ctx->pc == 0x42B038u) {
        ctx->pc = 0x42B038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B034u;
        // 0x42b038: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B03Cu;
        goto label_42b03c;
    }
    ctx->pc = 0x42B034u;
    {
        const bool branch_taken_0x42b034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B034u;
        // 0x42b038: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b034) {
            ctx->pc = 0x42B064u;
            goto label_42b064;
        }
    }
    ctx->pc = 0x42B03Cu;
label_42b03c:
    // 0x42b03c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x42b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_42b040:
    // 0x42b040: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x42b040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_42b044:
    // 0x42b044: 0x244208f0  addiu       $v0, $v0, 0x8F0
    ctx->pc = 0x42b044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2288));
label_42b048:
    // 0x42b048: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x42b048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_42b04c:
    // 0x42b04c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x42b04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42b050:
    // 0x42b050: 0x800008  jr          $a0
label_42b054:
    if (ctx->pc == 0x42B054u) {
        ctx->pc = 0x42B058u;
        goto label_42b058;
    }
    ctx->pc = 0x42B050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x42B058u: goto label_42b058;
            case 0x42B110u: goto label_42b110;
            case 0x42B170u: goto label_42b170;
            case 0x42B1D8u: goto label_42b1d8;
            case 0x42B1E8u: goto label_42b1e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42B050u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x42B058u;
label_42b058:
    // 0x42b058: 0x8f82bee0  lw          $v0, -0x4120($gp)
    ctx->pc = 0x42b058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950624)));
label_42b05c:
    // 0x42b05c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_42b060:
    if (ctx->pc == 0x42B060u) {
        ctx->pc = 0x42B064u;
        goto label_42b064;
    }
    ctx->pc = 0x42B05Cu;
    {
        const bool branch_taken_0x42b05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42b05c) {
            ctx->pc = 0x42B06Cu;
            goto label_42b06c;
        }
    }
    ctx->pc = 0x42B064u;
label_42b064:
    // 0x42b064: 0x10000067  b           . + 4 + (0x67 << 2)
label_42b068:
    if (ctx->pc == 0x42B068u) {
        ctx->pc = 0x42B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B064u;
        // 0x42b068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B06Cu;
        goto label_42b06c;
    }
    ctx->pc = 0x42B064u;
    {
        const bool branch_taken_0x42b064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B064u;
        // 0x42b068: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b064) {
            ctx->pc = 0x42B204u;
            goto label_42b204;
        }
    }
    ctx->pc = 0x42B06Cu;
label_42b06c:
    // 0x42b06c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42b06cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_42b070:
    // 0x42b070: 0xc10a322  jal         func_428C88
label_42b074:
    if (ctx->pc == 0x42B074u) {
        ctx->pc = 0x42B074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B070u;
        // 0x42b074: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B078u;
        goto label_42b078;
    }
    ctx->pc = 0x42B070u;
    SET_GPR_U32(ctx, 31, 0x42B078u);
    ctx->pc = 0x42B074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B070u;
    // 0x42b074: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x42B070u, 0x42B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B078u;
label_42b078:
    // 0x42b078: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_42b07c:
    if (ctx->pc == 0x42B07Cu) {
        ctx->pc = 0x42B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B078u;
        // 0x42b07c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B080u;
        goto label_42b080;
    }
    ctx->pc = 0x42B078u;
    {
        const bool branch_taken_0x42b078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B078u;
        // 0x42b07c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b078) {
            ctx->pc = 0x42B064u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42b064;
        }
    }
    ctx->pc = 0x42B080u;
label_42b080:
    // 0x42b080: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x42b080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_42b084:
    // 0x42b084: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x42b084u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_42b088:
    // 0x42b088: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x42b088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
label_42b08c:
    // 0x42b08c: 0x70443389  pcpyld      $a2, $v0, $a0
    ctx->pc = 0x42b08cu;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_42b090:
    // 0x42b090: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x42b090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_42b094:
    // 0x42b094: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x42b094u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
label_42b098:
    // 0x42b098: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42b098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_42b09c:
    // 0x42b09c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_42b0a0:
    if (ctx->pc == 0x42B0A0u) {
        ctx->pc = 0x42B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B09Cu;
        // 0x42b0a0: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B0A4u;
        goto label_42b0a4;
    }
    ctx->pc = 0x42B09Cu;
    {
        const bool branch_taken_0x42b09c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x42B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B09Cu;
        // 0x42b0a0: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b09c) {
            ctx->pc = 0x42B0B0u;
            goto label_42b0b0;
        }
    }
    ctx->pc = 0x42B0A4u;
label_42b0a4:
    // 0x42b0a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x42b0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42b0a8:
    // 0x42b0a8: 0x10000014  b           . + 4 + (0x14 << 2)
label_42b0ac:
    if (ctx->pc == 0x42B0ACu) {
        ctx->pc = 0x42B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B0A8u;
        // 0x42b0ac: 0xaf80bee4  sw          $zero, -0x411C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B0B0u;
        goto label_42b0b0;
    }
    ctx->pc = 0x42B0A8u;
    {
        const bool branch_taken_0x42b0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B0A8u;
        // 0x42b0ac: 0xaf80bee4  sw          $zero, -0x411C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950628), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b0a8) {
            ctx->pc = 0x42B0FCu;
            goto label_42b0fc;
        }
    }
    ctx->pc = 0x42B0B0u;
label_42b0b0:
    // 0x42b0b0: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x42b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
label_42b0b4:
    // 0x42b0b4: 0x34425555  ori         $v0, $v0, 0x5555
    ctx->pc = 0x42b0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21845);
label_42b0b8:
    // 0x42b0b8: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
label_42b0bc:
    if (ctx->pc == 0x42B0BCu) {
        ctx->pc = 0x42B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B0B8u;
        // 0x42b0bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B0C0u;
        goto label_42b0c0;
    }
    ctx->pc = 0x42B0B8u;
    {
        const bool branch_taken_0x42b0b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x42B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B0B8u;
        // 0x42b0bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b0b8) {
            ctx->pc = 0x42B0E0u;
            goto label_42b0e0;
        }
    }
    ctx->pc = 0x42B0C0u;
label_42b0c0:
    // 0x42b0c0: 0x3c041212  lui         $a0, 0x1212
    ctx->pc = 0x42b0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4626 << 16));
label_42b0c4:
    // 0x42b0c4: 0x34843030  ori         $a0, $a0, 0x3030
    ctx->pc = 0x42b0c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12336);
label_42b0c8:
    // 0x42b0c8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x42b0c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_42b0cc:
    // 0x42b0cc: 0x34841212  ori         $a0, $a0, 0x1212
    ctx->pc = 0x42b0ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4626);
label_42b0d0:
    // 0x42b0d0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x42b0d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_42b0d4:
    // 0x42b0d4: 0x34843030  ori         $a0, $a0, 0x3030
    ctx->pc = 0x42b0d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12336);
label_42b0d8:
    // 0x42b0d8: 0x10000008  b           . + 4 + (0x8 << 2)
label_42b0dc:
    if (ctx->pc == 0x42B0DCu) {
        ctx->pc = 0x42B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B0D8u;
        // 0x42b0dc: 0xaf90bee4  sw          $s0, -0x411C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950628), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B0E0u;
        goto label_42b0e0;
    }
    ctx->pc = 0x42B0D8u;
    {
        const bool branch_taken_0x42b0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B0D8u;
        // 0x42b0dc: 0xaf90bee4  sw          $s0, -0x411C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950628), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b0d8) {
            ctx->pc = 0x42B0FCu;
            goto label_42b0fc;
        }
    }
    ctx->pc = 0x42B0E0u;
label_42b0e0:
    // 0x42b0e0: 0x3c046071  lui         $a0, 0x6071
    ctx->pc = 0x42b0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24689 << 16));
label_42b0e4:
    // 0x42b0e4: 0x34842435  ori         $a0, $a0, 0x2435
    ctx->pc = 0x42b0e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9269);
label_42b0e8:
    // 0x42b0e8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x42b0e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_42b0ec:
    // 0x42b0ec: 0x34847160  ori         $a0, $a0, 0x7160
    ctx->pc = 0x42b0ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)29024);
label_42b0f0:
    // 0x42b0f0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x42b0f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_42b0f4:
    // 0x42b0f4: 0x34843524  ori         $a0, $a0, 0x3524
    ctx->pc = 0x42b0f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13604);
label_42b0f8:
    // 0x42b0f8: 0xaf82bee4  sw          $v0, -0x411C($gp)
    ctx->pc = 0x42b0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950628), GPR_U32(ctx, 2));
label_42b0fc:
    // 0x42b0fc: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x42b0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_42b100:
    // 0x42b100: 0x70643389  pcpyld      $a2, $v1, $a0
    ctx->pc = 0x42b100u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_42b104:
    // 0x42b104: 0x10000030  b           . + 4 + (0x30 << 2)
label_42b108:
    if (ctx->pc == 0x42B108u) {
        ctx->pc = 0x42B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B104u;
        // 0x42b108: 0x8f82be20  lw          $v0, -0x41E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B10Cu;
        goto label_42b10c;
    }
    ctx->pc = 0x42B104u;
    {
        const bool branch_taken_0x42b104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B104u;
        // 0x42b108: 0x8f82be20  lw          $v0, -0x41E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b104) {
            ctx->pc = 0x42B1C8u;
            goto label_42b1c8;
        }
    }
    ctx->pc = 0x42B10Cu;
label_42b10c:
    // 0x42b10c: 0x0  nop
    ctx->pc = 0x42b10cu;
    // NOP
label_42b110:
    // 0x42b110: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42b110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_42b114:
    // 0x42b114: 0xc10a322  jal         func_428C88
label_42b118:
    if (ctx->pc == 0x42B118u) {
        ctx->pc = 0x42B118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B114u;
        // 0x42b118: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B11Cu;
        goto label_42b11c;
    }
    ctx->pc = 0x42B114u;
    SET_GPR_U32(ctx, 31, 0x42B11Cu);
    ctx->pc = 0x42B118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B114u;
    // 0x42b118: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x42B114u, 0x42B11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B11Cu;
label_42b11c:
    // 0x42b11c: 0x1040ffd1  beqz        $v0, . + 4 + (-0x2F << 2)
label_42b120:
    if (ctx->pc == 0x42B120u) {
        ctx->pc = 0x42B120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B11Cu;
        // 0x42b120: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B124u;
        goto label_42b124;
    }
    ctx->pc = 0x42B11Cu;
    {
        const bool branch_taken_0x42b11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B11Cu;
        // 0x42b120: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b11c) {
            ctx->pc = 0x42B064u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42b064;
        }
    }
    ctx->pc = 0x42B124u;
label_42b124:
    // 0x42b124: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x42b124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_42b128:
    // 0x42b128: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x42b128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_42b12c:
    // 0x42b12c: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x42b12cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
label_42b130:
    // 0x42b130: 0x70443389  pcpyld      $a2, $v0, $a0
    ctx->pc = 0x42b130u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_42b134:
    // 0x42b134: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x42b134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_42b138:
    // 0x42b138: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x42b138u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
label_42b13c:
    // 0x42b13c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_42b140:
    // 0x42b140: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42b140u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42b144:
    // 0x42b144: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x42b144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_42b148:
    // 0x42b148: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x42b148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
label_42b14c:
    // 0x42b14c: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x42b14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_42b150:
    // 0x42b150: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x42b150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
label_42b154:
    // 0x42b154: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x42b154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_42b158:
    // 0x42b158: 0x31e3a  dsrl        $v1, $v1, 24
    ctx->pc = 0x42b158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 24);
label_42b15c:
    // 0x42b15c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x42b15cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_42b160:
    // 0x42b160: 0x70a43389  pcpyld      $a2, $a1, $a0
    ctx->pc = 0x42b160u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_42b164:
    // 0x42b164: 0x10000018  b           . + 4 + (0x18 << 2)
label_42b168:
    if (ctx->pc == 0x42B168u) {
        ctx->pc = 0x42B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B164u;
        // 0x42b168: 0xff84ae70  sd          $a0, -0x5190($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946416), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B16Cu;
        goto label_42b16c;
    }
    ctx->pc = 0x42B164u;
    {
        const bool branch_taken_0x42b164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B164u;
        // 0x42b168: 0xff84ae70  sd          $a0, -0x5190($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946416), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b164) {
            ctx->pc = 0x42B1C8u;
            goto label_42b1c8;
        }
    }
    ctx->pc = 0x42B16Cu;
label_42b16c:
    // 0x42b16c: 0x0  nop
    ctx->pc = 0x42b16cu;
    // NOP
label_42b170:
    // 0x42b170: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42b170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_42b174:
    // 0x42b174: 0xc10a322  jal         func_428C88
label_42b178:
    if (ctx->pc == 0x42B178u) {
        ctx->pc = 0x42B178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B174u;
        // 0x42b178: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B17Cu;
        goto label_42b17c;
    }
    ctx->pc = 0x42B174u;
    SET_GPR_U32(ctx, 31, 0x42B17Cu);
    ctx->pc = 0x42B178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B174u;
    // 0x42b178: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x42B174u, 0x42B17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B17Cu;
label_42b17c:
    // 0x42b17c: 0x1040ffb9  beqz        $v0, . + 4 + (-0x47 << 2)
label_42b180:
    if (ctx->pc == 0x42B180u) {
        ctx->pc = 0x42B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B17Cu;
        // 0x42b180: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B184u;
        goto label_42b184;
    }
    ctx->pc = 0x42B17Cu;
    {
        const bool branch_taken_0x42b17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B17Cu;
        // 0x42b180: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b17c) {
            ctx->pc = 0x42B064u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42b064;
        }
    }
    ctx->pc = 0x42B184u;
label_42b184:
    // 0x42b184: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x42b184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_42b188:
    // 0x42b188: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x42b188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_42b18c:
    // 0x42b18c: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x42b18cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
label_42b190:
    // 0x42b190: 0x70443389  pcpyld      $a2, $v0, $a0
    ctx->pc = 0x42b190u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
label_42b194:
    // 0x42b194: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x42b194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_42b198:
    // 0x42b198: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x42b198u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
label_42b19c:
    // 0x42b19c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_42b1a0:
    // 0x42b1a0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42b1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42b1a4:
    // 0x42b1a4: 0xdf83ae48  ld          $v1, -0x51B8($gp)
    ctx->pc = 0x42b1a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_42b1a8:
    // 0x42b1a8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x42b1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_42b1ac:
    // 0x42b1ac: 0x24060047  addiu       $a2, $zero, 0x47
    ctx->pc = 0x42b1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_42b1b0:
    // 0x42b1b0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x42b1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_42b1b4:
    // 0x42b1b4: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x42b1b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_42b1b8:
    // 0x42b1b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x42b1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_42b1bc:
    // 0x42b1bc: 0x70c33389  pcpyld      $a2, $a2, $v1
    ctx->pc = 0x42b1bcu;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 3)));
label_42b1c0:
    // 0x42b1c0: 0xff83ae48  sd          $v1, -0x51B8($gp)
    ctx->pc = 0x42b1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 3));
label_42b1c4:
    // 0x42b1c4: 0x0  nop
    ctx->pc = 0x42b1c4u;
    // NOP
label_42b1c8:
    // 0x42b1c8: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x42b1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
label_42b1cc:
    // 0x42b1cc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42b1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_42b1d0:
    // 0x42b1d0: 0x1000000b  b           . + 4 + (0xB << 2)
label_42b1d4:
    if (ctx->pc == 0x42B1D4u) {
        ctx->pc = 0x42B1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B1D0u;
        // 0x42b1d4: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B1D8u;
        goto label_42b1d8;
    }
    ctx->pc = 0x42B1D0u;
    {
        const bool branch_taken_0x42b1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B1D0u;
        // 0x42b1d4: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b1d0) {
            ctx->pc = 0x42B200u;
            goto label_42b200;
        }
    }
    ctx->pc = 0x42B1D8u;
label_42b1d8:
    // 0x42b1d8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x42b1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42b1dc:
    // 0x42b1dc: 0xaf80bf10  sw          $zero, -0x40F0($gp)
    ctx->pc = 0x42b1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950672), GPR_U32(ctx, 0));
label_42b1e0:
    // 0x42b1e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_42b1e4:
    if (ctx->pc == 0x42B1E4u) {
        ctx->pc = 0x42B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B1E0u;
        // 0x42b1e4: 0xe780bf14  swc1        $f0, -0x40EC($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294950676), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B1E8u;
        goto label_42b1e8;
    }
    ctx->pc = 0x42B1E0u;
    {
        const bool branch_taken_0x42b1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B1E0u;
        // 0x42b1e4: 0xe780bf14  swc1        $f0, -0x40EC($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294950676), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b1e0) {
            ctx->pc = 0x42B200u;
            goto label_42b200;
        }
    }
    ctx->pc = 0x42B1E8u;
label_42b1e8:
    // 0x42b1e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x42b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_42b1ec:
    // 0x42b1ec: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x42b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_42b1f0:
    // 0x42b1f0: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x42b1f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_42b1f4:
    // 0x42b1f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_42b1f8:
    if (ctx->pc == 0x42B1F8u) {
        ctx->pc = 0x42B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B1F4u;
        // 0x42b1f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B1FCu;
        goto label_42b1fc;
    }
    ctx->pc = 0x42B1F4u;
    {
        const bool branch_taken_0x42b1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B1F4u;
        // 0x42b1f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b1f4) {
            ctx->pc = 0x42B204u;
            goto label_42b204;
        }
    }
    ctx->pc = 0x42B1FCu;
label_42b1fc:
    // 0x42b1fc: 0xaf83ae90  sw          $v1, -0x5170($gp)
    ctx->pc = 0x42b1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946448), GPR_U32(ctx, 3));
label_42b200:
    // 0x42b200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42b200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42b204:
    // 0x42b204: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x42b204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42b208:
    // 0x42b208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42b208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_42b20c:
    // 0x42b20c: 0x3e00008  jr          $ra
label_42b210:
    if (ctx->pc == 0x42B210u) {
        ctx->pc = 0x42B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B20Cu;
        // 0x42b210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B214u;
        goto label_42b214;
    }
    ctx->pc = 0x42B20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B20Cu;
        // 0x42b210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42B20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42B214u;
label_42b214:
    // 0x42b214: 0x0  nop
    ctx->pc = 0x42b214u;
    // NOP
label_42b218:
    // 0x42b218: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x42b218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_42b21c:
    // 0x42b21c: 0x8f86ae10  lw          $a2, -0x51F0($gp)
    ctx->pc = 0x42b21cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946320)));
label_42b220:
    // 0x42b220: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x42b220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_42b224:
    // 0x42b224: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x42b224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_42b228:
    // 0x42b228: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x42b228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_42b22c:
    // 0x42b22c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x42b22cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_42b230:
    // 0x42b230: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x42b230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_42b234:
    // 0x42b234: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x42b234u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_42b238:
    // 0x42b238: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x42b238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_42b23c:
    // 0x42b23c: 0x8f82bebc  lw          $v0, -0x4144($gp)
    ctx->pc = 0x42b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950588)));
label_42b240:
    // 0x42b240: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x42b240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_42b244:
    // 0x42b244: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x42b244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_42b248:
    // 0x42b248: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x42b248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_42b24c:
    // 0x42b24c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x42b24cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_42b250:
    // 0x42b250: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_42b254:
    if (ctx->pc == 0x42B254u) {
        ctx->pc = 0x42B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B250u;
        // 0x42b254: 0x2428821  addu        $s1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B258u;
        goto label_42b258;
    }
    ctx->pc = 0x42B250u;
    {
        const bool branch_taken_0x42b250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B250u;
        // 0x42b254: 0x2428821  addu        $s1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b250) {
            ctx->pc = 0x42B26Cu;
            goto label_42b26c;
        }
    }
    ctx->pc = 0x42B258u;
label_42b258:
    // 0x42b258: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x42b258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_42b25c:
    // 0x42b25c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x42b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_42b260:
    // 0x42b260: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x42b260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_42b264:
    // 0x42b264: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_42b268:
    if (ctx->pc == 0x42B268u) {
        ctx->pc = 0x42B26Cu;
        goto label_42b26c;
    }
    ctx->pc = 0x42B264u;
    {
        const bool branch_taken_0x42b264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b264) {
            ctx->pc = 0x42B298u;
            goto label_42b298;
        }
    }
    ctx->pc = 0x42B26Cu;
label_42b26c:
    // 0x42b26c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42b26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42b270:
    // 0x42b270: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42b270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_42b274:
    // 0x42b274: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x42b274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_42b278:
    // 0x42b278: 0xc1035f6  jal         func_40D7D8
label_42b27c:
    if (ctx->pc == 0x42B27Cu) {
        ctx->pc = 0x42B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B278u;
        // 0x42b27c: 0x34840010  ori         $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B280u;
        goto label_42b280;
    }
    ctx->pc = 0x42B278u;
    SET_GPR_U32(ctx, 31, 0x42B280u);
    ctx->pc = 0x42B27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B278u;
    // 0x42b27c: 0x34840010  ori         $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x42B278u, 0x42B280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B280u;
label_42b280:
    // 0x42b280: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x42b280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_42b284:
    // 0x42b284: 0xc103628  jal         func_40D8A0
label_42b288:
    if (ctx->pc == 0x42B288u) {
        ctx->pc = 0x42B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B284u;
        // 0x42b288: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B28Cu;
        goto label_42b28c;
    }
    ctx->pc = 0x42B284u;
    SET_GPR_U32(ctx, 31, 0x42B28Cu);
    ctx->pc = 0x42B288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B284u;
    // 0x42b288: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x42B284u, 0x42B28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B28Cu;
label_42b28c:
    // 0x42b28c: 0x1000025a  b           . + 4 + (0x25A << 2)
label_42b290:
    if (ctx->pc == 0x42B290u) {
        ctx->pc = 0x42B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B28Cu;
        // 0x42b290: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B294u;
        goto label_42b294;
    }
    ctx->pc = 0x42B28Cu;
    {
        const bool branch_taken_0x42b28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B28Cu;
        // 0x42b290: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b28c) {
            ctx->pc = 0x42BBF8u;
            goto label_42bbf8;
        }
    }
    ctx->pc = 0x42B294u;
label_42b294:
    // 0x42b294: 0x0  nop
    ctx->pc = 0x42b294u;
    // NOP
label_42b298:
    // 0x42b298: 0xc10a78a  jal         func_429E28
label_42b29c:
    if (ctx->pc == 0x42B29Cu) {
        ctx->pc = 0x42B2A0u;
        goto label_42b2a0;
    }
    ctx->pc = 0x42B298u;
    SET_GPR_U32(ctx, 31, 0x42B2A0u);
    ctx->pc = 0x429E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429E28u, 0x42B298u, 0x42B2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B2A0u;
label_42b2a0:
    // 0x42b2a0: 0x8f82ae30  lw          $v0, -0x51D0($gp)
    ctx->pc = 0x42b2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946352)));
label_42b2a4:
    // 0x42b2a4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_42b2a8:
    if (ctx->pc == 0x42B2A8u) {
        ctx->pc = 0x42B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B2A4u;
        // 0x42b2a8: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B2ACu;
        goto label_42b2ac;
    }
    ctx->pc = 0x42B2A4u;
    {
        const bool branch_taken_0x42b2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42b2a4) {
            ctx->pc = 0x42B2A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B2A4u;
            // 0x42b2a8: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B2B8u;
            goto label_42b2b8;
        }
    }
    ctx->pc = 0x42B2ACu;
label_42b2ac:
    // 0x42b2ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42b2b0:
    // 0x42b2b0: 0xaf82ae30  sw          $v0, -0x51D0($gp)
    ctx->pc = 0x42b2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946352), GPR_U32(ctx, 2));
label_42b2b4:
    // 0x42b2b4: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x42b2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_42b2b8:
    // 0x42b2b8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x42b2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_42b2bc:
    // 0x42b2bc: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x42b2bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_42b2c0:
    // 0x42b2c0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x42b2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_42b2c4:
    // 0x42b2c4: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
label_42b2c8:
    if (ctx->pc == 0x42B2C8u) {
        ctx->pc = 0x42B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B2C4u;
        // 0x42b2c8: 0x8f82ae94  lw          $v0, -0x516C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946452)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B2CCu;
        goto label_42b2cc;
    }
    ctx->pc = 0x42B2C4u;
    {
        const bool branch_taken_0x42b2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x42B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B2C4u;
        // 0x42b2c8: 0x8f82ae94  lw          $v0, -0x516C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b2c4) {
            ctx->pc = 0x42B31Cu;
            goto label_42b31c;
        }
    }
    ctx->pc = 0x42B2CCu;
label_42b2cc:
    // 0x42b2cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x42b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42b2d0:
    // 0x42b2d0: 0x8f83beb8  lw          $v1, -0x4148($gp)
    ctx->pc = 0x42b2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
label_42b2d4:
    // 0x42b2d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x42b2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_42b2d8:
    // 0x42b2d8: 0x90440017  lbu         $a0, 0x17($v0)
    ctx->pc = 0x42b2d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23)));
label_42b2dc:
    // 0x42b2dc: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
label_42b2e0:
    if (ctx->pc == 0x42B2E0u) {
        ctx->pc = 0x42B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B2DCu;
        // 0x42b2e0: 0x8c430008  lw          $v1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B2E4u;
        goto label_42b2e4;
    }
    ctx->pc = 0x42B2DCu;
    {
        const bool branch_taken_0x42b2dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x42b2dc) {
            ctx->pc = 0x42B2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42B2DCu;
            // 0x42b2e0: 0x8c430008  lw          $v1, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42B2ECu;
            goto label_42b2ec;
        }
    }
    ctx->pc = 0x42B2E4u;
label_42b2e4:
    // 0x42b2e4: 0x10000244  b           . + 4 + (0x244 << 2)
label_42b2e8:
    if (ctx->pc == 0x42B2E8u) {
        ctx->pc = 0x42B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B2E4u;
        // 0x42b2e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B2ECu;
        goto label_42b2ec;
    }
    ctx->pc = 0x42B2E4u;
    {
        const bool branch_taken_0x42b2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B2E4u;
        // 0x42b2e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b2e4) {
            ctx->pc = 0x42BBF8u;
            goto label_42bbf8;
        }
    }
    ctx->pc = 0x42B2ECu;
label_42b2ec:
    // 0x42b2ec: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x42b2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_42b2f0:
    // 0x42b2f0: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x42b2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
label_42b2f4:
    // 0x42b2f4: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x42b2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_42b2f8:
    // 0x42b2f8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x42b2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_42b2fc:
    // 0x42b2fc: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x42b2fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_42b300:
    // 0x42b300: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x42b300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_42b304:
    // 0x42b304: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x42b304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_42b308:
    // 0x42b308: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x42b308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_42b30c:
    // 0x42b30c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x42b30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_42b310:
    // 0x42b310: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x42b310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_42b314:
    // 0x42b314: 0x10000009  b           . + 4 + (0x9 << 2)
label_42b318:
    if (ctx->pc == 0x42B318u) {
        ctx->pc = 0x42B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B314u;
        // 0x42b318: 0xff82ae40  sd          $v0, -0x51C0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946368), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B31Cu;
        goto label_42b31c;
    }
    ctx->pc = 0x42B314u;
    {
        const bool branch_taken_0x42b314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B314u;
        // 0x42b318: 0xff82ae40  sd          $v0, -0x51C0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946368), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b314) {
            ctx->pc = 0x42B33Cu;
            goto label_42b33c;
        }
    }
    ctx->pc = 0x42B31Cu;
label_42b31c:
    // 0x42b31c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x42b31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_42b320:
    // 0x42b320: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_42b324:
    if (ctx->pc == 0x42B324u) {
        ctx->pc = 0x42B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B320u;
        // 0x42b324: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B328u;
        goto label_42b328;
    }
    ctx->pc = 0x42B320u;
    {
        const bool branch_taken_0x42b320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B320u;
        // 0x42b324: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b320) {
            ctx->pc = 0x42B330u;
            goto label_42b330;
        }
    }
    ctx->pc = 0x42B328u;
label_42b328:
    // 0x42b328: 0x10000003  b           . + 4 + (0x3 << 2)
label_42b32c:
    if (ctx->pc == 0x42B32Cu) {
        ctx->pc = 0x42B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B328u;
        // 0x42b32c: 0xdc4331d0  ld          $v1, 0x31D0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 12752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B330u;
        goto label_42b330;
    }
    ctx->pc = 0x42B328u;
    {
        const bool branch_taken_0x42b328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B328u;
        // 0x42b32c: 0xdc4331d0  ld          $v1, 0x31D0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 12752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b328) {
            ctx->pc = 0x42B338u;
            goto label_42b338;
        }
    }
    ctx->pc = 0x42B330u;
label_42b330:
    // 0x42b330: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x42b330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_42b334:
    // 0x42b334: 0xdc433340  ld          $v1, 0x3340($v0)
    ctx->pc = 0x42b334u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 13120)));
label_42b338:
    // 0x42b338: 0xff83ae40  sd          $v1, -0x51C0($gp)
    ctx->pc = 0x42b338u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946368), GPR_U64(ctx, 3));
label_42b33c:
    // 0x42b33c: 0x8f82aeb4  lw          $v0, -0x514C($gp)
    ctx->pc = 0x42b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946484)));
label_42b340:
    // 0x42b340: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_42b344:
    if (ctx->pc == 0x42B344u) {
        ctx->pc = 0x42B348u;
        goto label_42b348;
    }
    ctx->pc = 0x42B340u;
    {
        const bool branch_taken_0x42b340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42b340) {
            ctx->pc = 0x42B354u;
            goto label_42b354;
        }
    }
    ctx->pc = 0x42B348u;
label_42b348:
    // 0x42b348: 0xc110db8  jal         func_4436E0
label_42b34c:
    if (ctx->pc == 0x42B34Cu) {
        ctx->pc = 0x42B350u;
        goto label_42b350;
    }
    ctx->pc = 0x42B348u;
    SET_GPR_U32(ctx, 31, 0x42B350u);
    ctx->pc = 0x4436E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4436E0u, 0x42B348u, 0x42B350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B350u;
label_42b350:
    // 0x42b350: 0xaf80aeb4  sw          $zero, -0x514C($gp)
    ctx->pc = 0x42b350u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946484), GPR_U32(ctx, 0));
label_42b354:
    // 0x42b354: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42b354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_42b358:
    // 0x42b358: 0xc10a322  jal         func_428C88
label_42b35c:
    if (ctx->pc == 0x42B35Cu) {
        ctx->pc = 0x42B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B358u;
        // 0x42b35c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B360u;
        goto label_42b360;
    }
    ctx->pc = 0x42B358u;
    SET_GPR_U32(ctx, 31, 0x42B360u);
    ctx->pc = 0x42B35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B358u;
    // 0x42b35c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x42B358u, 0x42B360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B360u;
label_42b360:
    // 0x42b360: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x42b360u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_42b364:
    // 0x42b364: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x42b364u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
label_42b368:
    // 0x42b368: 0x34e78009  ori         $a3, $a3, 0x8009
    ctx->pc = 0x42b368u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32777);
label_42b36c:
    // 0x42b36c: 0x240a000e  addiu       $t2, $zero, 0xE
    ctx->pc = 0x42b36cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_42b370:
    // 0x42b370: 0x71472b89  pcpyld      $a1, $t2, $a3
    ctx->pc = 0x42b370u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
label_42b374:
    // 0x42b374: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x42b374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_42b378:
    // 0x42b378: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x42b378u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
label_42b37c:
    // 0x42b37c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42b37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_42b380:
    // 0x42b380: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42b380u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42b384:
    // 0x42b384: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x42b384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_42b388:
    // 0x42b388: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x42b388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_42b38c:
    // 0x42b38c: 0x90a20020  lbu         $v0, 0x20($a1)
    ctx->pc = 0x42b38cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 32)));
label_42b390:
    // 0x42b390: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x42b390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_42b394:
    // 0x42b394: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
label_42b398:
    if (ctx->pc == 0x42B398u) {
        ctx->pc = 0x42B398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B394u;
        // 0x42b398: 0xdf82ae98  ld          $v0, -0x5168($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946456)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B39Cu;
        goto label_42b39c;
    }
    ctx->pc = 0x42B394u;
    {
        const bool branch_taken_0x42b394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x42B398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B394u;
        // 0x42b398: 0xdf82ae98  ld          $v0, -0x5168($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b394) {
            ctx->pc = 0x42B3D0u;
            goto label_42b3d0;
        }
    }
    ctx->pc = 0x42B39Cu;
label_42b39c:
    // 0x42b39c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x42b39cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_42b3a0:
    // 0x42b3a0: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x42b3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_42b3a4:
    // 0x42b3a4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x42b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_42b3a8:
    // 0x42b3a8: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x42b3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_42b3ac:
    // 0x42b3ac: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x42b3acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
label_42b3b0:
    // 0x42b3b0: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x42b3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
label_42b3b4:
    // 0x42b3b4: 0x4207b  dsra        $a0, $a0, 1
    ctx->pc = 0x42b3b4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> 1);
label_42b3b8:
    // 0x42b3b8: 0x64182f  dsubu       $v1, $v1, $a0
    ctx->pc = 0x42b3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
label_42b3bc:
    // 0x42b3bc: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x42b3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
label_42b3c0:
    // 0x42b3c0: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x42b3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
label_42b3c4:
    // 0x42b3c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x42b3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_42b3c8:
    // 0x42b3c8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_42b3cc:
    if (ctx->pc == 0x42B3CCu) {
        ctx->pc = 0x42B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B3C8u;
        // 0x42b3cc: 0xff83ae50  sd          $v1, -0x51B0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946384), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B3D0u;
        goto label_42b3d0;
    }
    ctx->pc = 0x42B3C8u;
    {
        const bool branch_taken_0x42b3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B3C8u;
        // 0x42b3cc: 0xff83ae50  sd          $v1, -0x51B0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946384), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b3c8) {
            ctx->pc = 0x42B434u;
            goto label_42b434;
        }
    }
    ctx->pc = 0x42B3D0u;
label_42b3d0:
    // 0x42b3d0: 0xdf83aea0  ld          $v1, -0x5160($gp)
    ctx->pc = 0x42b3d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294946464)));
label_42b3d4:
    // 0x42b3d4: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x42b3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
label_42b3d8:
    // 0x42b3d8: 0x9384be2c  lbu         $a0, -0x41D4($gp)
    ctx->pc = 0x42b3d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950444)));
label_42b3dc:
    // 0x42b3dc: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x42b3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
label_42b3e0:
    // 0x42b3e0: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_42b3e4:
    if (ctx->pc == 0x42B3E4u) {
        ctx->pc = 0x42B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B3E0u;
        // 0x42b3e4: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B3E8u;
        goto label_42b3e8;
    }
    ctx->pc = 0x42B3E0u;
    {
        const bool branch_taken_0x42b3e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x42B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B3E0u;
        // 0x42b3e4: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42b3e0) {
            ctx->pc = 0x42B430u;
            goto label_42b430;
        }
    }
    ctx->pc = 0x42B3E8u;
label_42b3e8:
    // 0x42b3e8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x42b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_42b3ec:
    // 0x42b3ec: 0x42000039  di
    ctx->pc = 0x42b3ecu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
label_42b3f0:
    // 0x42b3f0: 0x40f  sync.p
    ctx->pc = 0x42b3f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_42b3f4:
    // 0x42b3f4: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x42b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
label_42b3f8:
    // 0x42b3f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x42b3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_42b3fc:
    // 0x42b3fc: 0x0  nop
    ctx->pc = 0x42b3fcu;
    // NOP
label_42b400:
    // 0x42b400: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_42b404:
    if (ctx->pc == 0x42B404u) {
        ctx->pc = 0x42B408u;
        goto label_42b408;
    }
    ctx->pc = 0x42B400u;
    {
        const bool branch_taken_0x42b400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x42b400) {
            ctx->pc = 0x42B3ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42b3ec;
        }
    }
    ctx->pc = 0x42B408u;
label_42b408:
    // 0x42b408: 0x9383be2e  lbu         $v1, -0x41D2($gp)
    ctx->pc = 0x42b408u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950446)));
label_42b40c:
    // 0x42b40c: 0x9382be2d  lbu         $v0, -0x41D3($gp)
    ctx->pc = 0x42b40cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950445)));
label_42b410:
    // 0x42b410: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x42b410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_42b414:
    // 0x42b414: 0x9384be2f  lbu         $a0, -0x41D1($gp)
    ctx->pc = 0x42b414u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950447)));
label_42b418:
    // 0x42b418: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x42b418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_42b41c:
    // 0x42b41c: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x42b41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
label_42b420:
    // 0x42b420: 0x42000038  ei
    ctx->pc = 0x42b420u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_42b424:
    // 0x42b424: 0x210fc  dsll32      $v0, $v0, 3
    ctx->pc = 0x42b424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 3));
label_42b428:
    // 0x42b428: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x42b428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_42b42c:
    // 0x42b42c: 0x0  nop
    ctx->pc = 0x42b42cu;
    // NOP
label_42b430:
    // 0x42b430: 0xff85ae50  sd          $a1, -0x51B0($gp)
    ctx->pc = 0x42b430u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946384), GPR_U64(ctx, 5));
label_42b434:
    // 0x42b434: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x42b434u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_42b438:
    // 0x42b438: 0xdf82ae50  ld          $v0, -0x51B0($gp)
    ctx->pc = 0x42b438u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946384)));
label_42b43c:
    // 0x42b43c: 0x71422b89  pcpyld      $a1, $t2, $v0
    ctx->pc = 0x42b43cu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
label_42b440:
    // 0x42b440: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x42b440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_42b444:
    // 0x42b444: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x42b444u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
label_42b448:
    // 0x42b448: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x42b448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_42b44c:
    // 0x42b44c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x42b44cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_42b450:
    // 0x42b450: 0x240a0019  addiu       $t2, $zero, 0x19
    ctx->pc = 0x42b450u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_42b454:
    // 0x42b454: 0x71422b89  pcpyld      $a1, $t2, $v0
    ctx->pc = 0x42b454u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
label_42b458:
    // 0x42b458: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x42b458u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
label_42b45c:
    // 0x42b45c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x42b45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_42b460:
    // 0x42b460: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42b460u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42b464:
    // 0x42b464: 0x8e490060  lw          $t1, 0x60($s2)
    ctx->pc = 0x42b464u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_42b468:
    // 0x42b468: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x42b468u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_42b46c:
    // 0x42b46c: 0x9527001c  lhu         $a3, 0x1C($t1)
    ctx->pc = 0x42b46cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 28)));
label_42b470:
    // 0x42b470: 0x9528001e  lhu         $t0, 0x1E($t1)
    ctx->pc = 0x42b470u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 30)));
label_42b474:
    // 0x42b474: 0x72400  sll         $a0, $a3, 16
    ctx->pc = 0x42b474u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_42b478:
    // 0x42b478: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x42b478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_42b47c:
    // 0x42b47c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x42b47cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
label_42b480:
    // 0x42b480: 0x83400  sll         $a2, $t0, 16
    ctx->pc = 0x42b480u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_42b484:
    // 0x42b484: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x42b484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_42b488:
    // 0x42b488: 0x8d250010  lw          $a1, 0x10($t1)
    ctx->pc = 0x42b488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_42b48c:
    // 0x42b48c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x42b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_42b490:
    // 0x42b490: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x42b490u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
label_42b494:
    // 0x42b494: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x42b494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_42b498:
    // 0x42b498: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x42b498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_42b49c:
    // 0x42b49c: 0x30e707ff  andi        $a3, $a3, 0x7FF
    ctx->pc = 0x42b49cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
label_42b4a0:
    // 0x42b4a0: 0x310807ff  andi        $t0, $t0, 0x7FF
    ctx->pc = 0x42b4a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2047);
label_42b4a4:
    // 0x42b4a4: 0x473825  or          $a3, $v0, $a3
    ctx->pc = 0x42b4a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_42b4a8:
    // 0x42b4a8: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x42b4a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
label_42b4ac:
    // 0x42b4ac: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x42b4acu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_42b4b0:
    // 0x42b4b0: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x42b4b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_42b4b4:
    // 0x42b4b4: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x42b4b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_42b4b8:
    // 0x42b4b8: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x42b4b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
label_42b4bc:
    // 0x42b4bc: 0x71472b89  pcpyld      $a1, $t2, $a3
    ctx->pc = 0x42b4bcu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
label_42b4c0:
    // 0x42b4c0: 0x7c650010  sq          $a1, 0x10($v1)
    ctx->pc = 0x42b4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 5));
label_42b4c4:
    // 0x42b4c4: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x42b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_42b4c8:
    // 0x42b4c8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42b4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42b4cc:
    // 0x42b4cc: 0x240a0041  addiu       $t2, $zero, 0x41
    ctx->pc = 0x42b4ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_42b4d0:
    // 0x42b4d0: 0x71472b89  pcpyld      $a1, $t2, $a3
    ctx->pc = 0x42b4d0u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
label_42b4d4:
    // 0x42b4d4: 0x7c650020  sq          $a1, 0x20($v1)
    ctx->pc = 0x42b4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 5));
label_42b4d8:
    // 0x42b4d8: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x42b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_42b4dc:
    // 0x42b4dc: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42b4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42b4e0:
    // 0x42b4e0: 0x240a0047  addiu       $t2, $zero, 0x47
    ctx->pc = 0x42b4e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_42b4e4:
    // 0x42b4e4: 0xdf84ae48  ld          $a0, -0x51B8($gp)
    ctx->pc = 0x42b4e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_42b4e8:
    // 0x42b4e8: 0x71442b89  pcpyld      $a1, $t2, $a0
    ctx->pc = 0x42b4e8u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 4)));
label_42b4ec:
    // 0x42b4ec: 0x7c650030  sq          $a1, 0x30($v1)
    ctx->pc = 0x42b4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 5));
label_42b4f0:
    // 0x42b4f0: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x42b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_42b4f4:
    // 0x42b4f4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42b4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42b4f8:
    // 0x42b4f8: 0x240a0048  addiu       $t2, $zero, 0x48
    ctx->pc = 0x42b4f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_42b4fc:
    // 0x42b4fc: 0x71442b89  pcpyld      $a1, $t2, $a0
    ctx->pc = 0x42b4fcu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 4)));
label_42b500:
    // 0x42b500: 0x7c650040  sq          $a1, 0x40($v1)
    ctx->pc = 0x42b500u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 5));
label_42b504:
    // 0x42b504: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x42b504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_42b508:
    // 0x42b508: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42b508u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42b50c:
    // 0x42b50c: 0x240a0045  addiu       $t2, $zero, 0x45
    ctx->pc = 0x42b50cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_42b510:
    // 0x42b510: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x42b510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
label_42b514:
    // 0x42b514: 0x2c420018  sltiu       $v0, $v0, 0x18
    ctx->pc = 0x42b514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
label_42b518:
    // 0x42b518: 0x71422b89  pcpyld      $a1, $t2, $v0
    ctx->pc = 0x42b518u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 2)));
label_42b51c:
    // 0x42b51c: 0x7c650050  sq          $a1, 0x50($v1)
    ctx->pc = 0x42b51cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), GPR_VEC(ctx, 5));
label_42b520:
    // 0x42b520: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x42b520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_42b524:
    // 0x42b524: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42b524u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42b528:
    // 0x42b528: 0xdf87ae40  ld          $a3, -0x51C0($gp)
    ctx->pc = 0x42b528u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294946368)));
label_42b52c:
    // 0x42b52c: 0x240a004c  addiu       $t2, $zero, 0x4C
    ctx->pc = 0x42b52cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_42b530:
    // 0x42b530: 0x71472b89  pcpyld      $a1, $t2, $a3
    ctx->pc = 0x42b530u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
label_42b534:
    // 0x42b534: 0x7c650060  sq          $a1, 0x60($v1)
    ctx->pc = 0x42b534u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 96), GPR_VEC(ctx, 5));
label_42b538:
    // 0x42b538: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x42b538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_42b53c:
    // 0x42b53c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42b53cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42b540:
    // 0x42b540: 0x240a004d  addiu       $t2, $zero, 0x4D
    ctx->pc = 0x42b540u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_42b544:
    // 0x42b544: 0x71472b89  pcpyld      $a1, $t2, $a3
    ctx->pc = 0x42b544u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 7)));
label_42b548:
    // 0x42b548: 0x7c650070  sq          $a1, 0x70($v1)
    ctx->pc = 0x42b548u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), GPR_VEC(ctx, 5));
label_42b54c:
    // 0x42b54c: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x42b54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_42b550:
    // 0x42b550: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x42b550u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_42b554:
    // 0x42b554: 0xc1102be  jal         func_440AF8
label_42b558:
    if (ctx->pc == 0x42B558u) {
        ctx->pc = 0x42B558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B554u;
        // 0x42b558: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B55Cu;
        goto label_42b55c;
    }
    ctx->pc = 0x42B554u;
    SET_GPR_U32(ctx, 31, 0x42B55Cu);
    ctx->pc = 0x42B558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B554u;
    // 0x42b558: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x440AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x440AF8u, 0x42B554u, 0x42B55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B55Cu;
label_42b55c:
    // 0x42b55c: 0x26300060  addiu       $s0, $s1, 0x60
    ctx->pc = 0x42b55cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_42b560:
    // 0x42b560: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x42b560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_42b564:
    // 0x42b564: 0xc7898074  lwc1        $f9, -0x7F8C($gp)
    ctx->pc = 0x42b564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_42b568:
    // 0x42b568: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x42b568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_42b56c:
    // 0x42b56c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x42b56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_42b570:
    // 0x42b570: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x42b570u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_42b574:
    // 0x42b574: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x42b574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_42b578:
    // 0x42b578: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x42b578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_42b57c:
    // 0x42b57c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x42b57cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_42b580:
    // 0x42b580: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x42b580u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_42b584:
    // 0x42b584: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x42b584u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_42b588:
    // 0x42b588: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x42b588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_42b58c:
    // 0x42b58c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x42b58cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_42b590:
    // 0x42b590: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x42b590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_42b594:
    // 0x42b594: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x42b594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_42b598:
    // 0x42b598: 0x46004a81  sub.s       $f10, $f9, $f0
    ctx->pc = 0x42b598u;
    ctx->f[10] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
label_42b59c:
    // 0x42b59c: 0x46014a41  sub.s       $f9, $f9, $f1
    ctx->pc = 0x42b59cu;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
label_42b5a0:
    // 0x42b5a0: 0x46005283  div.s       $f10, $f10, $f0
    ctx->pc = 0x42b5a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = FPU_DIV_S(ctx->f[10], ctx->f[0]); }
label_42b5a4:
    // 0x42b5a4: 0x46014a43  div.s       $f9, $f9, $f1
    ctx->pc = 0x42b5a4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[9] = FPU_DIV_S(ctx->f[9], ctx->f[1]); }
label_42b5a8:
    // 0x42b5a8: 0x46035281  sub.s       $f10, $f10, $f3
    ctx->pc = 0x42b5a8u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[3]);
label_42b5ac:
    // 0x42b5ac: 0x46034a41  sub.s       $f9, $f9, $f3
    ctx->pc = 0x42b5acu;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[3]);
label_42b5b0:
    // 0x42b5b0: 0x46025282  mul.s       $f10, $f10, $f2
    ctx->pc = 0x42b5b0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
label_42b5b4:
    // 0x42b5b4: 0x46024a42  mul.s       $f9, $f9, $f2
    ctx->pc = 0x42b5b4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
label_42b5b8:
    // 0x42b5b8: 0xc6440130  lwc1        $f4, 0x130($s2)
    ctx->pc = 0x42b5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_42b5bc:
    // 0x42b5bc: 0xc647013c  lwc1        $f7, 0x13C($s2)
    ctx->pc = 0x42b5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_42b5c0:
    // 0x42b5c0: 0xc6450134  lwc1        $f5, 0x134($s2)
    ctx->pc = 0x42b5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_42b5c4:
    // 0x42b5c4: 0xc6480140  lwc1        $f8, 0x140($s2)
    ctx->pc = 0x42b5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_42b5c8:
    // 0x42b5c8: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x42b5c8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
label_42b5cc:
    // 0x42b5cc: 0xc6460138  lwc1        $f6, 0x138($s2)
    ctx->pc = 0x42b5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_42b5d0:
    // 0x42b5d0: 0xc6430144  lwc1        $f3, 0x144($s2)
    ctx->pc = 0x42b5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_42b5d4:
    // 0x42b5d4: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x42b5d4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
label_42b5d8:
    // 0x42b5d8: 0x46033181  sub.s       $f6, $f6, $f3
    ctx->pc = 0x42b5d8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
label_42b5dc:
    // 0x42b5dc: 0xc6400148  lwc1        $f0, 0x148($s2)
    ctx->pc = 0x42b5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42b5e0:
    // 0x42b5e0: 0xc642014c  lwc1        $f2, 0x14C($s2)
    ctx->pc = 0x42b5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42b5e4:
    // 0x42b5e4: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x42b5e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
label_42b5e8:
    // 0x42b5e8: 0xc6410150  lwc1        $f1, 0x150($s2)
    ctx->pc = 0x42b5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42b5ec:
    // 0x42b5ec: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x42b5ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
label_42b5f0:
    // 0x42b5f0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x42b5f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_42b5f4:
    // 0x42b5f4: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x42b5f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
label_42b5f8:
    // 0x42b5f8: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x42b5f8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
label_42b5fc:
    // 0x42b5fc: 0x46093182  mul.s       $f6, $f6, $f9
    ctx->pc = 0x42b5fcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
label_42b600:
    // 0x42b600: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x42b600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
label_42b604:
    // 0x42b604: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x42b604u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
label_42b608:
    // 0x42b608: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x42b608u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
label_42b60c:
    // 0x42b60c: 0x460020c0  add.s       $f3, $f4, $f0
    ctx->pc = 0x42b60cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_42b610:
    // 0x42b610: 0x460229c0  add.s       $f7, $f5, $f2
    ctx->pc = 0x42b610u;
    ctx->f[7] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_42b614:
    // 0x42b614: 0x46013200  add.s       $f8, $f6, $f1
    ctx->pc = 0x42b614u;
    ctx->f[8] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
label_42b618:
    // 0x42b618: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x42b618u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_42b61c:
    // 0x42b61c: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x42b61cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_42b620:
    // 0x42b620: 0x46013181  sub.s       $f6, $f6, $f1
    ctx->pc = 0x42b620u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[1]);
label_42b624:
    // 0x42b624: 0xc6400124  lwc1        $f0, 0x124($s2)
    ctx->pc = 0x42b624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42b628:
    // 0x42b628: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x42b628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_42b62c:
    // 0x42b62c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x42b62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_42b630:
    // 0x42b630: 0xc6410128  lwc1        $f1, 0x128($s2)
    ctx->pc = 0x42b630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42b634:
    // 0x42b634: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x42b634u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
label_42b638:
    // 0x42b638: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x42b638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_42b63c:
    // 0x42b63c: 0xc640012c  lwc1        $f0, 0x12C($s2)
    ctx->pc = 0x42b63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42b640:
    // 0x42b640: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x42b640u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
label_42b644:
    // 0x42b644: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x42b644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_42b648:
    // 0x42b648: 0xc6410130  lwc1        $f1, 0x130($s2)
    ctx->pc = 0x42b648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42b64c:
    // 0x42b64c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x42b64cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_42b650:
    // 0x42b650: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x42b650u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_42b654:
    // 0x42b654: 0xc6400134  lwc1        $f0, 0x134($s2)
    ctx->pc = 0x42b654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42b658:
    // 0x42b658: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x42b658u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_42b65c:
    // 0x42b65c: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x42b65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_42b660:
    // 0x42b660: 0xc6410138  lwc1        $f1, 0x138($s2)
    ctx->pc = 0x42b660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42b664:
    // 0x42b664: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x42b664u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_42b668:
    // 0x42b668: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x42b668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_42b66c:
    // 0x42b66c: 0xc640013c  lwc1        $f0, 0x13C($s2)
    ctx->pc = 0x42b66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42b670:
    // 0x42b670: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x42b670u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_42b674:
    // 0x42b674: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x42b674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_42b678:
    // 0x42b678: 0xc6410140  lwc1        $f1, 0x140($s2)
    ctx->pc = 0x42b678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42b67c:
    // 0x42b67c: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x42b67cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
label_42b680:
    // 0x42b680: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x42b680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_42b684:
    // 0x42b684: 0xc6400144  lwc1        $f0, 0x144($s2)
    ctx->pc = 0x42b684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42b688:
    // 0x42b688: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x42b688u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
label_42b68c:
    // 0x42b68c: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x42b68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_42b690:
    // 0x42b690: 0xc6410148  lwc1        $f1, 0x148($s2)
    ctx->pc = 0x42b690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42b694:
    // 0x42b694: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x42b694u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_42b698:
    // 0x42b698: 0xe6210024  swc1        $f1, 0x24($s1)
    ctx->pc = 0x42b698u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_42b69c:
    // 0x42b69c: 0xc640014c  lwc1        $f0, 0x14C($s2)
    ctx->pc = 0x42b69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42b6a0:
    // 0x42b6a0: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x42b6a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_42b6a4:
    // 0x42b6a4: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x42b6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_42b6a8:
    // 0x42b6a8: 0xc6410150  lwc1        $f1, 0x150($s2)
    ctx->pc = 0x42b6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42b6ac:
    // 0x42b6ac: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x42b6acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
label_42b6b0:
    // 0x42b6b0: 0xe621002c  swc1        $f1, 0x2C($s1)
    ctx->pc = 0x42b6b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
label_42b6b4:
    // 0x42b6b4: 0xc6440160  lwc1        $f4, 0x160($s2)
    ctx->pc = 0x42b6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_42b6b8:
    // 0x42b6b8: 0xc647016c  lwc1        $f7, 0x16C($s2)
    ctx->pc = 0x42b6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_42b6bc:
    // 0x42b6bc: 0xc6450164  lwc1        $f5, 0x164($s2)
    ctx->pc = 0x42b6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_42b6c0:
    // 0x42b6c0: 0xc6480170  lwc1        $f8, 0x170($s2)
    ctx->pc = 0x42b6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_42b6c4:
    // 0x42b6c4: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x42b6c4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
label_42b6c8:
    // 0x42b6c8: 0xc6460168  lwc1        $f6, 0x168($s2)
    ctx->pc = 0x42b6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_42b6cc:
    // 0x42b6cc: 0xc6430174  lwc1        $f3, 0x174($s2)
    ctx->pc = 0x42b6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_42b6d0:
    // 0x42b6d0: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x42b6d0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
label_42b6d4:
    // 0x42b6d4: 0x46033181  sub.s       $f6, $f6, $f3
    ctx->pc = 0x42b6d4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
label_42b6d8:
    // 0x42b6d8: 0xc6400178  lwc1        $f0, 0x178($s2)
    ctx->pc = 0x42b6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42b6dc:
    // 0x42b6dc: 0xc641017c  lwc1        $f1, 0x17C($s2)
    ctx->pc = 0x42b6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42b6e0:
    // 0x42b6e0: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x42b6e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
label_42b6e4:
    // 0x42b6e4: 0xc6420180  lwc1        $f2, 0x180($s2)
    ctx->pc = 0x42b6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42b6e8:
    // 0x42b6e8: 0x46080841  sub.s       $f1, $f1, $f8
    ctx->pc = 0x42b6e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[8]);
label_42b6ec:
    // 0x42b6ec: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x42b6ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_42b6f0:
    // 0x42b6f0: 0x46092102  mul.s       $f4, $f4, $f9
    ctx->pc = 0x42b6f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
label_42b6f4:
    // 0x42b6f4: 0x46093182  mul.s       $f6, $f6, $f9
    ctx->pc = 0x42b6f4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
label_42b6f8:
    // 0x42b6f8: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x42b6f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_42b6fc:
    // 0x42b6fc: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x42b6fcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
label_42b700:
    // 0x42b700: 0xe7a60008  swc1        $f6, 0x8($sp)
    ctx->pc = 0x42b700u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_42b704:
    // 0x42b704: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x42b704u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_42b708:
    // 0x42b708: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x42b708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
label_42b70c:
    // 0x42b70c: 0x460a1082  mul.s       $f2, $f2, $f10
    ctx->pc = 0x42b70cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
label_42b710:
    // 0x42b710: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x42b710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_42b714:
    // 0x42b714: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x42b714u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
label_42b718:
    // 0x42b718: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x42b718u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_42b71c:
    // 0x42b71c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x42b71cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_42b720:
    // 0x42b720: 0x460020c0  add.s       $f3, $f4, $f0
    ctx->pc = 0x42b720u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_42b724:
    // 0x42b724: 0x460129c0  add.s       $f7, $f5, $f1
    ctx->pc = 0x42b724u;
    ctx->f[7] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_42b728:
    // 0x42b728: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x42b728u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_42b72c:
    // 0x42b72c: 0x46023200  add.s       $f8, $f6, $f2
    ctx->pc = 0x42b72cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
label_42b730:
    // 0x42b730: 0xe7a70024  swc1        $f7, 0x24($sp)
    ctx->pc = 0x42b730u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_42b734:
    // 0x42b734: 0xe7a80028  swc1        $f8, 0x28($sp)
    ctx->pc = 0x42b734u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_42b738:
    // 0x42b738: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x42b738u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_42b73c:
    // 0x42b73c: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x42b73cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
label_42b740:
    // 0x42b740: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x42b740u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_42b744:
    // 0x42b744: 0x46023181  sub.s       $f6, $f6, $f2
    ctx->pc = 0x42b744u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
label_42b748:
    // 0x42b748: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x42b748u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_42b74c:
    // 0x42b74c: 0xe7a60038  swc1        $f6, 0x38($sp)
    ctx->pc = 0x42b74cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_42b750:
    // 0x42b750: 0xc6400154  lwc1        $f0, 0x154($s2)
    ctx->pc = 0x42b750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42b754:
    // 0x42b754: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x42b754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_42b758:
    // 0x42b758: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x42b758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
label_42b75c:
    // 0x42b75c: 0xc6410158  lwc1        $f1, 0x158($s2)
    ctx->pc = 0x42b75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42b760:
    // 0x42b760: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x42b760u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
label_42b764:
    // 0x42b764: 0xe6210034  swc1        $f1, 0x34($s1)
    ctx->pc = 0x42b764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_42b768:
    // 0x42b768: 0xc640015c  lwc1        $f0, 0x15C($s2)
    ctx->pc = 0x42b768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42b76c:
    // 0x42b76c: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x42b76cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
label_42b770:
    // 0x42b770: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x42b770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_42b774:
    // 0x42b774: 0xc6410160  lwc1        $f1, 0x160($s2)
    ctx->pc = 0x42b774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42b778:
    // 0x42b778: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x42b778u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_42b77c:
    // 0x42b77c: 0xe621003c  swc1        $f1, 0x3C($s1)
    ctx->pc = 0x42b77cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
label_42b780:
    // 0x42b780: 0xc6400164  lwc1        $f0, 0x164($s2)
    ctx->pc = 0x42b780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42b784:
    // 0x42b784: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x42b784u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_42b788:
    // 0x42b788: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x42b788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
label_42b78c:
    // 0x42b78c: 0xc6410168  lwc1        $f1, 0x168($s2)
    ctx->pc = 0x42b78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42b790:
    // 0x42b790: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x42b790u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_42b794:
    // 0x42b794: 0xe6210044  swc1        $f1, 0x44($s1)
    ctx->pc = 0x42b794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_42b798:
    // 0x42b798: 0xc640016c  lwc1        $f0, 0x16C($s2)
    ctx->pc = 0x42b798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42b79c:
    // 0x42b79c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x42b79cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_42b7a0:
    // 0x42b7a0: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x42b7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
label_42b7a4:
    // 0x42b7a4: 0xc6410170  lwc1        $f1, 0x170($s2)
    ctx->pc = 0x42b7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42b7a8:
    // 0x42b7a8: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x42b7a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
label_42b7ac:
    // 0x42b7ac: 0xe621004c  swc1        $f1, 0x4C($s1)
    ctx->pc = 0x42b7acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
label_42b7b0:
    // 0x42b7b0: 0xc6400174  lwc1        $f0, 0x174($s2)
    ctx->pc = 0x42b7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42b7b4:
    // 0x42b7b4: 0x46080001  sub.s       $f0, $f0, $f8
    ctx->pc = 0x42b7b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
label_42b7b8:
    // 0x42b7b8: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x42b7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_42b7bc:
    // 0x42b7bc: 0xc6410178  lwc1        $f1, 0x178($s2)
    ctx->pc = 0x42b7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42b7c0:
    // 0x42b7c0: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x42b7c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_42b7c4:
    // 0x42b7c4: 0xe6210054  swc1        $f1, 0x54($s1)
    ctx->pc = 0x42b7c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
label_42b7c8:
    // 0x42b7c8: 0xc640017c  lwc1        $f0, 0x17C($s2)
    ctx->pc = 0x42b7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42b7cc:
    // 0x42b7cc: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x42b7ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_42b7d0:
    // 0x42b7d0: 0xe6200058  swc1        $f0, 0x58($s1)
    ctx->pc = 0x42b7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
label_42b7d4:
    // 0x42b7d4: 0xc6410180  lwc1        $f1, 0x180($s2)
    ctx->pc = 0x42b7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42b7d8:
    // 0x42b7d8: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x42b7d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
label_42b7dc:
    // 0x42b7dc: 0xe621005c  swc1        $f1, 0x5C($s1)
    ctx->pc = 0x42b7dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
label_42b7e0:
    // 0x42b7e0: 0x6a64009b  ldl         $a0, 0x9B($s3)
    ctx->pc = 0x42b7e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 155); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_42b7e4:
    // 0x42b7e4: 0x6e640094  ldr         $a0, 0x94($s3)
    ctx->pc = 0x42b7e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 148); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_42b7e8:
    // 0x42b7e8: 0x6a6500a3  ldl         $a1, 0xA3($s3)
    ctx->pc = 0x42b7e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 163); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_42b7ec:
    // 0x42b7ec: 0x6e65009c  ldr         $a1, 0x9C($s3)
    ctx->pc = 0x42b7ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 156); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_42b7f0:
    // 0x42b7f0: 0x8e6200a4  lw          $v0, 0xA4($s3)
    ctx->pc = 0x42b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
label_42b7f4:
    // 0x42b7f4: 0xb2240067  sdl         $a0, 0x67($s1)
    ctx->pc = 0x42b7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_42b7f8:
    // 0x42b7f8: 0xb6240060  sdr         $a0, 0x60($s1)
    ctx->pc = 0x42b7f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_42b7fc:
    // 0x42b7fc: 0xb225006f  sdl         $a1, 0x6F($s1)
    ctx->pc = 0x42b7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_42b800:
    // 0x42b800: 0xb6250068  sdr         $a1, 0x68($s1)
    ctx->pc = 0x42b800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_42b804:
    // 0x42b804: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x42b804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
label_42b808:
    // 0x42b808: 0x6a6400af  ldl         $a0, 0xAF($s3)
    ctx->pc = 0x42b808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_42b80c:
    // 0x42b80c: 0x6e6400a8  ldr         $a0, 0xA8($s3)
    ctx->pc = 0x42b80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_42b810:
    // 0x42b810: 0x6a6500b7  ldl         $a1, 0xB7($s3)
    ctx->pc = 0x42b810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_42b814:
    // 0x42b814: 0x6e6500b0  ldr         $a1, 0xB0($s3)
    ctx->pc = 0x42b814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_42b818:
    // 0x42b818: 0x8e6200b8  lw          $v0, 0xB8($s3)
    ctx->pc = 0x42b818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
label_42b81c:
    // 0x42b81c: 0xb204001b  sdl         $a0, 0x1B($s0)
    ctx->pc = 0x42b81cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_42b820:
    // 0x42b820: 0xb6040014  sdr         $a0, 0x14($s0)
    ctx->pc = 0x42b820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_42b824:
    // 0x42b824: 0xb2050023  sdl         $a1, 0x23($s0)
    ctx->pc = 0x42b824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_42b828:
    // 0x42b828: 0xb605001c  sdr         $a1, 0x1C($s0)
    ctx->pc = 0x42b828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_42b82c:
    // 0x42b82c: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x42b82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_42b830:
    // 0x42b830: 0xc626000c  lwc1        $f6, 0xC($s1)
    ctx->pc = 0x42b830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_42b834:
    // 0x42b834: 0xc627003c  lwc1        $f7, 0x3C($s1)
    ctx->pc = 0x42b834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_42b838:
    // 0x42b838: 0xc6250010  lwc1        $f5, 0x10($s1)
    ctx->pc = 0x42b838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_42b83c:
    // 0x42b83c: 0xc6280040  lwc1        $f8, 0x40($s1)
    ctx->pc = 0x42b83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_42b840:
    // 0x42b840: 0x46073181  sub.s       $f6, $f6, $f7
    ctx->pc = 0x42b840u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[7]);
label_42b844:
    // 0x42b844: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x42b844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_42b848:
    // 0x42b848: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x42b848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42b84c:
    // 0x42b84c: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x42b84cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
label_42b850:
    // 0x42b850: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x42b850u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_42b854:
    // 0x42b854: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x42b854u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_42b858:
    // 0x42b858: 0xe7a50044  swc1        $f5, 0x44($sp)
    ctx->pc = 0x42b858u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_42b85c:
    // 0x42b85c: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x42b85cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_42b860:
    // 0x42b860: 0xc6200048  lwc1        $f0, 0x48($s1)
    ctx->pc = 0x42b860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42b864:
    // 0x42b864: 0xc623004c  lwc1        $f3, 0x4C($s1)
    ctx->pc = 0x42b864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_42b868:
    // 0x42b868: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x42b868u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
label_42b86c:
    // 0x42b86c: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x42b86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42b870:
    // 0x42b870: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x42b870u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
label_42b874:
    // 0x42b874: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x42b874u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_42b878:
    // 0x42b878: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x42b878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_42b87c:
    // 0x42b87c: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x42b87cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_42b880:
    // 0x42b880: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x42b880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_42b884:
    // 0x42b884: 0x460129c2  mul.s       $f7, $f5, $f1
    ctx->pc = 0x42b884u;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_42b888:
    // 0x42b888: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x42b888u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_42b88c:
    // 0x42b88c: 0x46033082  mul.s       $f2, $f6, $f3
    ctx->pc = 0x42b88cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_42b890:
    // 0x42b890: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x42b890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_42b894:
    // 0x42b894: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x42b894u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_42b898:
    // 0x42b898: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x42b898u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_42b89c:
    // 0x42b89c: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x42b89cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_42b8a0:
    // 0x42b8a0: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x42b8a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_42b8a4:
    // 0x42b8a4: 0x460439c1  sub.s       $f7, $f7, $f4
    ctx->pc = 0x42b8a4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
label_42b8a8:
    // 0x42b8a8: 0xe6020030  swc1        $f2, 0x30($s0)
    ctx->pc = 0x42b8a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_42b8ac:
    // 0x42b8ac: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x42b8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_42b8b0:
    // 0x42b8b0: 0xe6070028  swc1        $f7, 0x28($s0)
    ctx->pc = 0x42b8b0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_42b8b4:
    // 0x42b8b4: 0x26240088  addiu       $a0, $s1, 0x88
    ctx->pc = 0x42b8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
label_42b8b8:
    // 0x42b8b8: 0xc104da4  jal         func_413690
label_42b8bc:
    if (ctx->pc == 0x42B8BCu) {
        ctx->pc = 0x42B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B8B8u;
        // 0x42b8bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B8C0u;
        goto label_42b8c0;
    }
    ctx->pc = 0x42B8B8u;
    SET_GPR_U32(ctx, 31, 0x42B8C0u);
    ctx->pc = 0x42B8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B8B8u;
    // 0x42b8bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413690u, 0x42B8B8u, 0x42B8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B8C0u;
label_42b8c0:
    // 0x42b8c0: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x42b8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42b8c4:
    // 0x42b8c4: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x42b8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42b8c8:
    // 0x42b8c8: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x42b8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42b8cc:
    // 0x42b8cc: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x42b8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_42b8d0:
    // 0x42b8d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x42b8d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_42b8d4:
    // 0x42b8d4: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x42b8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_42b8d8:
    // 0x42b8d8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x42b8d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_42b8dc:
    // 0x42b8dc: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x42b8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42b8e0:
    // 0x42b8e0: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x42b8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_42b8e4:
    // 0x42b8e4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x42b8e4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_42b8e8:
    // 0x42b8e8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x42b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_42b8ec:
    // 0x42b8ec: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x42b8ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_42b8f0:
    // 0x42b8f0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x42b8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_42b8f4:
    // 0x42b8f4: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x42b8f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
label_42b8f8:
    // 0x42b8f8: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x42b8f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
label_42b8fc:
    // 0x42b8fc: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x42b8fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
label_42b900:
    // 0x42b900: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x42b900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_42b904:
    // 0x42b904: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x42b904u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_42b908:
    // 0x42b908: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x42b908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_42b90c:
    // 0x42b90c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x42b90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_42b910:
    // 0x42b910: 0xa2040038  sb          $a0, 0x38($s0)
    ctx->pc = 0x42b910u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 4));
label_42b914:
    // 0x42b914: 0xa2020039  sb          $v0, 0x39($s0)
    ctx->pc = 0x42b914u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 57), (uint8_t)GPR_U32(ctx, 2));
label_42b918:
    // 0x42b918: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x42b918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_42b91c:
    // 0x42b91c: 0xa203003a  sb          $v1, 0x3A($s0)
    ctx->pc = 0x42b91cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 3));
label_42b920:
    // 0x42b920: 0xc6230030  lwc1        $f3, 0x30($s1)
    ctx->pc = 0x42b920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_42b924:
    // 0x42b924: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x42b924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42b928:
    // 0x42b928: 0xc6220034  lwc1        $f2, 0x34($s1)
    ctx->pc = 0x42b928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42b92c:
    // 0x42b92c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x42b92cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_42b930:
    // 0x42b930: 0xc6240040  lwc1        $f4, 0x40($s1)
    ctx->pc = 0x42b930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_42b934:
    // 0x42b934: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x42b934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42b938:
    // 0x42b938: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x42b938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42b93c:
    // 0x42b93c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x42b93cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_42b940:
    // 0x42b940: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x42b940u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_42b944:
    // 0x42b944: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x42b944u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_42b948:
    // 0x42b948: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x42b948u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_42b94c:
    // 0x42b94c: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x42b94cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_42b950:
    // 0x42b950: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x42b950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_42b954:
    // 0x42b954: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x42b954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42b958:
    // 0x42b958: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x42b958u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_42b95c:
    // 0x42b95c: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x42b95cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_42b960:
    // 0x42b960: 0xc7a50044  lwc1        $f5, 0x44($sp)
    ctx->pc = 0x42b960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_42b964:
    // 0x42b964: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x42b964u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_42b968:
    // 0x42b968: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x42b968u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_42b96c:
    // 0x42b96c: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x42b96cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_42b970:
    // 0x42b970: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x42b970u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_42b974:
    // 0x42b974: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x42b974u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_42b978:
    // 0x42b978: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x42b978u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_42b97c:
    // 0x42b97c: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x42b97cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
label_42b980:
    // 0x42b980: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x42b980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_42b984:
    // 0x42b984: 0xe6030044  swc1        $f3, 0x44($s0)
    ctx->pc = 0x42b984u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_42b988:
    // 0x42b988: 0xe604003c  swc1        $f4, 0x3C($s0)
    ctx->pc = 0x42b988u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_42b98c:
    // 0x42b98c: 0x2624009c  addiu       $a0, $s1, 0x9C
    ctx->pc = 0x42b98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 156));
label_42b990:
    // 0x42b990: 0xc104da4  jal         func_413690
label_42b994:
    if (ctx->pc == 0x42B994u) {
        ctx->pc = 0x42B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42B990u;
        // 0x42b994: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42B998u;
        goto label_42b998;
    }
    ctx->pc = 0x42B990u;
    SET_GPR_U32(ctx, 31, 0x42B998u);
    ctx->pc = 0x42B994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42B990u;
    // 0x42b994: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413690u, 0x42B990u, 0x42B998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42B998u;
label_42b998:
    // 0x42b998: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x42b998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42b99c:
    // 0x42b99c: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x42b99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42b9a0:
    // 0x42b9a0: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x42b9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42b9a4:
    // 0x42b9a4: 0xc6030040  lwc1        $f3, 0x40($s0)
    ctx->pc = 0x42b9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_42b9a8:
    // 0x42b9a8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x42b9a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_42b9ac:
    // 0x42b9ac: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x42b9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_42b9b0:
    // 0x42b9b0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x42b9b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_42b9b4:
    // 0x42b9b4: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x42b9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42b9b8:
    // 0x42b9b8: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x42b9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_42b9bc:
    // 0x42b9bc: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x42b9bcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_42b9c0:
    // 0x42b9c0: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x42b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_42b9c4:
    // 0x42b9c4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x42b9c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_42b9c8:
    // 0x42b9c8: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x42b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_42b9cc:
    // 0x42b9cc: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x42b9ccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
label_42b9d0:
    // 0x42b9d0: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x42b9d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
label_42b9d4:
    // 0x42b9d4: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x42b9d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
label_42b9d8:
    // 0x42b9d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x42b9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_42b9dc:
    // 0x42b9dc: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x42b9dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_42b9e0:
    // 0x42b9e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x42b9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_42b9e4:
    // 0x42b9e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x42b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_42b9e8:
    // 0x42b9e8: 0xa204004c  sb          $a0, 0x4C($s0)
    ctx->pc = 0x42b9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 4));
label_42b9ec:
    // 0x42b9ec: 0xa202004d  sb          $v0, 0x4D($s0)
    ctx->pc = 0x42b9ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 2));
label_42b9f0:
    // 0x42b9f0: 0xe6010048  swc1        $f1, 0x48($s0)
    ctx->pc = 0x42b9f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_42b9f4:
    // 0x42b9f4: 0xa203004e  sb          $v1, 0x4E($s0)
    ctx->pc = 0x42b9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 3));
label_42b9f8:
    // 0x42b9f8: 0xc6260024  lwc1        $f6, 0x24($s1)
    ctx->pc = 0x42b9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_42b9fc:
    // 0x42b9fc: 0xc6270054  lwc1        $f7, 0x54($s1)
    ctx->pc = 0x42b9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_42ba00:
    // 0x42ba00: 0xc6250028  lwc1        $f5, 0x28($s1)
    ctx->pc = 0x42ba00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_42ba04:
    // 0x42ba04: 0xc6280058  lwc1        $f8, 0x58($s1)
    ctx->pc = 0x42ba04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_42ba08:
    // 0x42ba08: 0x46073181  sub.s       $f6, $f6, $f7
    ctx->pc = 0x42ba08u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[7]);
label_42ba0c:
    // 0x42ba0c: 0xc624002c  lwc1        $f4, 0x2C($s1)
    ctx->pc = 0x42ba0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_42ba10:
    // 0x42ba10: 0xc622005c  lwc1        $f2, 0x5C($s1)
    ctx->pc = 0x42ba10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42ba14:
    // 0x42ba14: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x42ba14u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
label_42ba18:
    // 0x42ba18: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x42ba18u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_42ba1c:
    // 0x42ba1c: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x42ba1cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_42ba20:
    // 0x42ba20: 0xe7a50044  swc1        $f5, 0x44($sp)
    ctx->pc = 0x42ba20u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_42ba24:
    // 0x42ba24: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x42ba24u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_42ba28:
    // 0x42ba28: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x42ba28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42ba2c:
    // 0x42ba2c: 0xc6230034  lwc1        $f3, 0x34($s1)
    ctx->pc = 0x42ba2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_42ba30:
    // 0x42ba30: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x42ba30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
label_42ba34:
    // 0x42ba34: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x42ba34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42ba38:
    // 0x42ba38: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x42ba38u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
label_42ba3c:
    // 0x42ba3c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x42ba3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_42ba40:
    // 0x42ba40: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x42ba40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_42ba44:
    // 0x42ba44: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x42ba44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_42ba48:
    // 0x42ba48: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x42ba48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_42ba4c:
    // 0x42ba4c: 0x460129c2  mul.s       $f7, $f5, $f1
    ctx->pc = 0x42ba4cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_42ba50:
    // 0x42ba50: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x42ba50u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_42ba54:
    // 0x42ba54: 0x46033082  mul.s       $f2, $f6, $f3
    ctx->pc = 0x42ba54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_42ba58:
    // 0x42ba58: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x42ba58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_42ba5c:
    // 0x42ba5c: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x42ba5cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_42ba60:
    // 0x42ba60: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x42ba60u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_42ba64:
    // 0x42ba64: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x42ba64u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_42ba68:
    // 0x42ba68: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x42ba68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_42ba6c:
    // 0x42ba6c: 0x460439c1  sub.s       $f7, $f7, $f4
    ctx->pc = 0x42ba6cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
label_42ba70:
    // 0x42ba70: 0xe6020058  swc1        $f2, 0x58($s0)
    ctx->pc = 0x42ba70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_42ba74:
    // 0x42ba74: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x42ba74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_42ba78:
    // 0x42ba78: 0xe6070050  swc1        $f7, 0x50($s0)
    ctx->pc = 0x42ba78u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_42ba7c:
    // 0x42ba7c: 0x262400b0  addiu       $a0, $s1, 0xB0
    ctx->pc = 0x42ba7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_42ba80:
    // 0x42ba80: 0xc104da4  jal         func_413690
label_42ba84:
    if (ctx->pc == 0x42BA84u) {
        ctx->pc = 0x42BA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BA80u;
        // 0x42ba84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42BA88u;
        goto label_42ba88;
    }
    ctx->pc = 0x42BA80u;
    SET_GPR_U32(ctx, 31, 0x42BA88u);
    ctx->pc = 0x42BA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42BA80u;
    // 0x42ba84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413690u, 0x42BA80u, 0x42BA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42BA88u;
label_42ba88:
    // 0x42ba88: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x42ba88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42ba8c:
    // 0x42ba8c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x42ba8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42ba90:
    // 0x42ba90: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x42ba90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42ba94:
    // 0x42ba94: 0xc6030054  lwc1        $f3, 0x54($s0)
    ctx->pc = 0x42ba94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_42ba98:
    // 0x42ba98: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x42ba98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_42ba9c:
    // 0x42ba9c: 0xc624002c  lwc1        $f4, 0x2C($s1)
    ctx->pc = 0x42ba9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_42baa0:
    // 0x42baa0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x42baa0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_42baa4:
    // 0x42baa4: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x42baa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42baa8:
    // 0x42baa8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x42baa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_42baac:
    // 0x42baac: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x42baacu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_42bab0:
    // 0x42bab0: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x42bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_42bab4:
    // 0x42bab4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x42bab4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_42bab8:
    // 0x42bab8: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x42bab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_42babc:
    // 0x42babc: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x42babcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
label_42bac0:
    // 0x42bac0: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x42bac0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
label_42bac4:
    // 0x42bac4: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x42bac4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
label_42bac8:
    // 0x42bac8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x42bac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_42bacc:
    // 0x42bacc: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x42baccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_42bad0:
    // 0x42bad0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x42bad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_42bad4:
    // 0x42bad4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x42bad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_42bad8:
    // 0x42bad8: 0xa2040060  sb          $a0, 0x60($s0)
    ctx->pc = 0x42bad8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 4));
label_42badc:
    // 0x42badc: 0xa2020061  sb          $v0, 0x61($s0)
    ctx->pc = 0x42badcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 2));
label_42bae0:
    // 0x42bae0: 0xe601005c  swc1        $f1, 0x5C($s0)
    ctx->pc = 0x42bae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
label_42bae4:
    // 0x42bae4: 0xa2030062  sb          $v1, 0x62($s0)
    ctx->pc = 0x42bae4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 98), (uint8_t)GPR_U32(ctx, 3));
label_42bae8:
    // 0x42bae8: 0xc6230048  lwc1        $f3, 0x48($s1)
    ctx->pc = 0x42bae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_42baec:
    // 0x42baec: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x42baecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42baf0:
    // 0x42baf0: 0xc622004c  lwc1        $f2, 0x4C($s1)
    ctx->pc = 0x42baf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42baf4:
    // 0x42baf4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x42baf4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_42baf8:
    // 0x42baf8: 0xc6240058  lwc1        $f4, 0x58($s1)
    ctx->pc = 0x42baf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_42bafc:
    // 0x42bafc: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x42bafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42bb00:
    // 0x42bb00: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x42bb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42bb04:
    // 0x42bb04: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x42bb04u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_42bb08:
    // 0x42bb08: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x42bb08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_42bb0c:
    // 0x42bb0c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x42bb0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_42bb10:
    // 0x42bb10: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x42bb10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_42bb14:
    // 0x42bb14: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x42bb14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_42bb18:
    // 0x42bb18: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x42bb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_42bb1c:
    // 0x42bb1c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x42bb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42bb20:
    // 0x42bb20: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x42bb20u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_42bb24:
    // 0x42bb24: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x42bb24u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_42bb28:
    // 0x42bb28: 0xc7a50044  lwc1        $f5, 0x44($sp)
    ctx->pc = 0x42bb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_42bb2c:
    // 0x42bb2c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x42bb2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_42bb30:
    // 0x42bb30: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x42bb30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_42bb34:
    // 0x42bb34: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x42bb34u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_42bb38:
    // 0x42bb38: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x42bb38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_42bb3c:
    // 0x42bb3c: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x42bb3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_42bb40:
    // 0x42bb40: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x42bb40u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_42bb44:
    // 0x42bb44: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x42bb44u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
label_42bb48:
    // 0x42bb48: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x42bb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
label_42bb4c:
    // 0x42bb4c: 0xe603006c  swc1        $f3, 0x6C($s0)
    ctx->pc = 0x42bb4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
label_42bb50:
    // 0x42bb50: 0xe6040064  swc1        $f4, 0x64($s0)
    ctx->pc = 0x42bb50u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
label_42bb54:
    // 0x42bb54: 0x262400c4  addiu       $a0, $s1, 0xC4
    ctx->pc = 0x42bb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
label_42bb58:
    // 0x42bb58: 0xc104da4  jal         func_413690
label_42bb5c:
    if (ctx->pc == 0x42BB5Cu) {
        ctx->pc = 0x42BB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BB58u;
        // 0x42bb5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42BB60u;
        goto label_42bb60;
    }
    ctx->pc = 0x42BB58u;
    SET_GPR_U32(ctx, 31, 0x42BB60u);
    ctx->pc = 0x42BB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42BB58u;
    // 0x42bb5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413690u, 0x42BB58u, 0x42BB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42BB60u;
label_42bb60:
    // 0x42bb60: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x42bb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42bb64:
    // 0x42bb64: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x42bb64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_42bb68:
    // 0x42bb68: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x42bb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42bb6c:
    // 0x42bb6c: 0x24c63a80  addiu       $a2, $a2, 0x3A80
    ctx->pc = 0x42bb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14976));
label_42bb70:
    // 0x42bb70: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x42bb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42bb74:
    // 0x42bb74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42bb78:
    // 0x42bb78: 0xc6030068  lwc1        $f3, 0x68($s0)
    ctx->pc = 0x42bb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_42bb7c:
    // 0x42bb7c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x42bb7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_42bb80:
    // 0x42bb80: 0xc624002c  lwc1        $f4, 0x2C($s1)
    ctx->pc = 0x42bb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_42bb84:
    // 0x42bb84: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x42bb84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_42bb88:
    // 0x42bb88: 0xc600006c  lwc1        $f0, 0x6C($s0)
    ctx->pc = 0x42bb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42bb8c:
    // 0x42bb8c: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x42bb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_42bb90:
    // 0x42bb90: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x42bb90u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_42bb94:
    // 0x42bb94: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x42bb94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_42bb98:
    // 0x42bb98: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x42bb98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_42bb9c:
    // 0x42bb9c: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x42bb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_42bba0:
    // 0x42bba0: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x42bba0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
label_42bba4:
    // 0x42bba4: 0x52fc3  sra         $a1, $a1, 31
    ctx->pc = 0x42bba4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 31));
label_42bba8:
    // 0x42bba8: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x42bba8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
label_42bbac:
    // 0x42bbac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x42bbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_42bbb0:
    // 0x42bbb0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x42bbb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_42bbb4:
    // 0x42bbb4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x42bbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_42bbb8:
    // 0x42bbb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x42bbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_42bbbc:
    // 0x42bbbc: 0xa2040074  sb          $a0, 0x74($s0)
    ctx->pc = 0x42bbbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 116), (uint8_t)GPR_U32(ctx, 4));
label_42bbc0:
    // 0x42bbc0: 0xa2030076  sb          $v1, 0x76($s0)
    ctx->pc = 0x42bbc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 118), (uint8_t)GPR_U32(ctx, 3));
label_42bbc4:
    // 0x42bbc4: 0xa2050075  sb          $a1, 0x75($s0)
    ctx->pc = 0x42bbc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 117), (uint8_t)GPR_U32(ctx, 5));
label_42bbc8:
    // 0x42bbc8: 0xe6010070  swc1        $f1, 0x70($s0)
    ctx->pc = 0x42bbc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
label_42bbcc:
    // 0x42bbcc: 0x8f85bed0  lw          $a1, -0x4130($gp)
    ctx->pc = 0x42bbccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950608)));
label_42bbd0:
    // 0x42bbd0: 0x7a440020  lq          $a0, 0x20($s2)
    ctx->pc = 0x42bbd0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_42bbd4:
    // 0x42bbd4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x42bbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_42bbd8:
    // 0x42bbd8: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x42bbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
label_42bbdc:
    // 0x42bbdc: 0x7a430030  lq          $v1, 0x30($s2)
    ctx->pc = 0x42bbdcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 48)));
label_42bbe0:
    // 0x42bbe0: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x42bbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
label_42bbe4:
    // 0x42bbe4: 0x7a440040  lq          $a0, 0x40($s2)
    ctx->pc = 0x42bbe4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 64)));
label_42bbe8:
    // 0x42bbe8: 0x7cc40020  sq          $a0, 0x20($a2)
    ctx->pc = 0x42bbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 4));
label_42bbec:
    // 0x42bbec: 0x7a430050  lq          $v1, 0x50($s2)
    ctx->pc = 0x42bbecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 80)));
label_42bbf0:
    // 0x42bbf0: 0xaf85bed0  sw          $a1, -0x4130($gp)
    ctx->pc = 0x42bbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950608), GPR_U32(ctx, 5));
label_42bbf4:
    // 0x42bbf4: 0x7cc30030  sq          $v1, 0x30($a2)
    ctx->pc = 0x42bbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 3));
label_42bbf8:
    // 0x42bbf8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x42bbf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_42bbfc:
    // 0x42bbfc: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x42bbfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_42bc00:
    // 0x42bc00: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x42bc00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_42bc04:
    // 0x42bc04: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x42bc04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_42bc08:
    // 0x42bc08: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x42bc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_42bc0c:
    // 0x42bc0c: 0x3e00008  jr          $ra
label_42bc10:
    if (ctx->pc == 0x42BC10u) {
        ctx->pc = 0x42BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BC0Cu;
        // 0x42bc10: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42BC14u;
        goto label_42bc14;
    }
    ctx->pc = 0x42BC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42BC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BC0Cu;
        // 0x42bc10: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42BC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42BC14u;
label_42bc14:
    // 0x42bc14: 0x0  nop
    ctx->pc = 0x42bc14u;
    // NOP
label_42bc18:
    // 0x42bc18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x42bc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_42bc1c:
    // 0x42bc1c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x42bc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_42bc20:
    // 0x42bc20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42bc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42bc24:
    // 0x42bc24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x42bc24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_42bc28:
    // 0x42bc28: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x42bc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_42bc2c:
    // 0x42bc2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x42bc2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42bc30:
    // 0x42bc30: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x42bc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_42bc34:
    // 0x42bc34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42bc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_42bc38:
    // 0x42bc38: 0xc10a78a  jal         func_429E28
label_42bc3c:
    if (ctx->pc == 0x42BC3Cu) {
        ctx->pc = 0x42BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BC38u;
        // 0x42bc3c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42BC40u;
        goto label_42bc40;
    }
    ctx->pc = 0x42BC38u;
    SET_GPR_U32(ctx, 31, 0x42BC40u);
    ctx->pc = 0x42BC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42BC38u;
    // 0x42bc3c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429E28u, 0x42BC38u, 0x42BC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42BC40u;
label_42bc40:
    // 0x42bc40: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x42bc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_42bc44:
    // 0x42bc44: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x42bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_42bc48:
    // 0x42bc48: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x42bc48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_42bc4c:
    // 0x42bc4c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x42bc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_42bc50:
    // 0x42bc50: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
label_42bc54:
    if (ctx->pc == 0x42BC54u) {
        ctx->pc = 0x42BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BC50u;
        // 0x42bc54: 0x8f82ae94  lw          $v0, -0x516C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946452)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42BC58u;
        goto label_42bc58;
    }
    ctx->pc = 0x42BC50u;
    {
        const bool branch_taken_0x42bc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x42BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BC50u;
        // 0x42bc54: 0x8f82ae94  lw          $v0, -0x516C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bc50) {
            ctx->pc = 0x42BCA8u;
            goto label_42bca8;
        }
    }
    ctx->pc = 0x42BC58u;
label_42bc58:
    // 0x42bc58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x42bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42bc5c:
    // 0x42bc5c: 0x8f83beb8  lw          $v1, -0x4148($gp)
    ctx->pc = 0x42bc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
label_42bc60:
    // 0x42bc60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x42bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_42bc64:
    // 0x42bc64: 0x90440017  lbu         $a0, 0x17($v0)
    ctx->pc = 0x42bc64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23)));
label_42bc68:
    // 0x42bc68: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
label_42bc6c:
    if (ctx->pc == 0x42BC6Cu) {
        ctx->pc = 0x42BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BC68u;
        // 0x42bc6c: 0x8c430008  lw          $v1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42BC70u;
        goto label_42bc70;
    }
    ctx->pc = 0x42BC68u;
    {
        const bool branch_taken_0x42bc68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x42bc68) {
            ctx->pc = 0x42BC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42BC68u;
            // 0x42bc6c: 0x8c430008  lw          $v1, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42BC78u;
            goto label_42bc78;
        }
    }
    ctx->pc = 0x42BC70u;
label_42bc70:
    // 0x42bc70: 0x10000101  b           . + 4 + (0x101 << 2)
label_42bc74:
    if (ctx->pc == 0x42BC74u) {
        ctx->pc = 0x42BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BC70u;
        // 0x42bc74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42BC78u;
        goto label_42bc78;
    }
    ctx->pc = 0x42BC70u;
    {
        const bool branch_taken_0x42bc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BC70u;
        // 0x42bc74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bc70) {
            ctx->pc = 0x42C078u;
            goto label_42c078;
        }
    }
    ctx->pc = 0x42BC78u;
label_42bc78:
    // 0x42bc78: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x42bc78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_42bc7c:
    // 0x42bc7c: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x42bc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
label_42bc80:
    // 0x42bc80: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x42bc80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_42bc84:
    // 0x42bc84: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x42bc84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_42bc88:
    // 0x42bc88: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x42bc88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_42bc8c:
    // 0x42bc8c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x42bc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_42bc90:
    // 0x42bc90: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x42bc90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_42bc94:
    // 0x42bc94: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x42bc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_42bc98:
    // 0x42bc98: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x42bc98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_42bc9c:
    // 0x42bc9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x42bc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_42bca0:
    // 0x42bca0: 0x10000009  b           . + 4 + (0x9 << 2)
label_42bca4:
    if (ctx->pc == 0x42BCA4u) {
        ctx->pc = 0x42BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BCA0u;
        // 0x42bca4: 0xff82ae40  sd          $v0, -0x51C0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946368), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42BCA8u;
        goto label_42bca8;
    }
    ctx->pc = 0x42BCA0u;
    {
        const bool branch_taken_0x42bca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BCA0u;
        // 0x42bca4: 0xff82ae40  sd          $v0, -0x51C0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946368), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bca0) {
            ctx->pc = 0x42BCC8u;
            goto label_42bcc8;
        }
    }
    ctx->pc = 0x42BCA8u;
label_42bca8:
    // 0x42bca8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x42bca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_42bcac:
    // 0x42bcac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_42bcb0:
    if (ctx->pc == 0x42BCB0u) {
        ctx->pc = 0x42BCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BCACu;
        // 0x42bcb0: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42BCB4u;
        goto label_42bcb4;
    }
    ctx->pc = 0x42BCACu;
    {
        const bool branch_taken_0x42bcac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BCACu;
        // 0x42bcb0: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bcac) {
            ctx->pc = 0x42BCBCu;
            goto label_42bcbc;
        }
    }
    ctx->pc = 0x42BCB4u;
label_42bcb4:
    // 0x42bcb4: 0x10000003  b           . + 4 + (0x3 << 2)
label_42bcb8:
    if (ctx->pc == 0x42BCB8u) {
        ctx->pc = 0x42BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BCB4u;
        // 0x42bcb8: 0xdc4331d0  ld          $v1, 0x31D0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 12752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42BCBCu;
        goto label_42bcbc;
    }
    ctx->pc = 0x42BCB4u;
    {
        const bool branch_taken_0x42bcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BCB4u;
        // 0x42bcb8: 0xdc4331d0  ld          $v1, 0x31D0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 12752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bcb4) {
            ctx->pc = 0x42BCC4u;
            goto label_42bcc4;
        }
    }
    ctx->pc = 0x42BCBCu;
label_42bcbc:
    // 0x42bcbc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x42bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_42bcc0:
    // 0x42bcc0: 0xdc433340  ld          $v1, 0x3340($v0)
    ctx->pc = 0x42bcc0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 13120)));
label_42bcc4:
    // 0x42bcc4: 0xff83ae40  sd          $v1, -0x51C0($gp)
    ctx->pc = 0x42bcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946368), GPR_U64(ctx, 3));
label_42bcc8:
    // 0x42bcc8: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x42bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_42bccc:
    // 0x42bccc: 0x2406ffe0  addiu       $a2, $zero, -0x20
    ctx->pc = 0x42bcccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_42bcd0:
    // 0x42bcd0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42bcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_42bcd4:
    // 0x42bcd4: 0x8465001c  lh          $a1, 0x1C($v1)
    ctx->pc = 0x42bcd4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
label_42bcd8:
    // 0x42bcd8: 0x8c70000c  lw          $s0, 0xC($v1)
    ctx->pc = 0x42bcd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_42bcdc:
    // 0x42bcdc: 0x9462001c  lhu         $v0, 0x1C($v1)
    ctx->pc = 0x42bcdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
label_42bce0:
    // 0x42bce0: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x42bce0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_42bce4:
    // 0x42bce4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x42bce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_42bce8:
    // 0x42bce8: 0x2610001f  addiu       $s0, $s0, 0x1F
    ctx->pc = 0x42bce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
label_42bcec:
    // 0x42bcec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x42bcecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_42bcf0:
    // 0x42bcf0: 0x2068024  and         $s0, $s0, $a2
    ctx->pc = 0x42bcf0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 6));
label_42bcf4:
    // 0x42bcf4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x42bcf4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_42bcf8:
    // 0x42bcf8: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x42bcf8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_42bcfc:
    // 0x42bcfc: 0x108143  sra         $s0, $s0, 5
    ctx->pc = 0x42bcfcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 5));
label_42bd00:
    // 0x42bd00: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x42bd00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_42bd04:
    // 0x42bd04: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x42bd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_42bd08:
    // 0x42bd08: 0xc10a322  jal         func_428C88
label_42bd0c:
    if (ctx->pc == 0x42BD0Cu) {
        ctx->pc = 0x42BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BD08u;
        // 0x42bd0c: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42BD10u;
        goto label_42bd10;
    }
    ctx->pc = 0x42BD08u;
    SET_GPR_U32(ctx, 31, 0x42BD10u);
    ctx->pc = 0x42BD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42BD08u;
    // 0x42bd0c: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x42BD08u, 0x42BD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42BD10u;
label_42bd10:
    // 0x42bd10: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x42bd10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_42bd14:
    // 0x42bd14: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x42bd14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_42bd18:
    // 0x42bd18: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x42bd18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_42bd1c:
    // 0x42bd1c: 0x6602000b  daddiu      $v0, $s0, 0xB
    ctx->pc = 0x42bd1cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)11);
label_42bd20:
    // 0x42bd20: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x42bd20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_42bd24:
    // 0x42bd24: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x42bd24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_42bd28:
    // 0x42bd28: 0x50102d  daddu       $v0, $v0, $s0
    ctx->pc = 0x42bd28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 16));
label_42bd2c:
    // 0x42bd2c: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x42bd2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_42bd30:
    // 0x42bd30: 0x71272389  pcpyld      $a0, $t1, $a3
    ctx->pc = 0x42bd30u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 7)));
label_42bd34:
    // 0x42bd34: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x42bd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_42bd38:
    // 0x42bd38: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x42bd38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_42bd3c:
    // 0x42bd3c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x42bd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_42bd40:
    // 0x42bd40: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x42bd40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_42bd44:
    // 0x42bd44: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_42bd48:
    if (ctx->pc == 0x42BD48u) {
        ctx->pc = 0x42BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BD44u;
        // 0x42bd48: 0xaf83be20  sw          $v1, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42BD4Cu;
        goto label_42bd4c;
    }
    ctx->pc = 0x42BD44u;
    {
        const bool branch_taken_0x42bd44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BD44u;
        // 0x42bd48: 0xaf83be20  sw          $v1, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bd44) {
            ctx->pc = 0x42BD60u;
            goto label_42bd60;
        }
    }
    ctx->pc = 0x42BD4Cu;
label_42bd4c:
    // 0x42bd4c: 0x9f87ae40  lwu         $a3, -0x51C0($gp)
    ctx->pc = 0x42bd4cu;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 28), 4294946368)));
label_42bd50:
    // 0x42bd50: 0x2409004c  addiu       $t1, $zero, 0x4C
    ctx->pc = 0x42bd50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_42bd54:
    // 0x42bd54: 0x71272389  pcpyld      $a0, $t1, $a3
    ctx->pc = 0x42bd54u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 7)));
label_42bd58:
    // 0x42bd58: 0x10000009  b           . + 4 + (0x9 << 2)
label_42bd5c:
    if (ctx->pc == 0x42BD5Cu) {
        ctx->pc = 0x42BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BD58u;
        // 0x42bd5c: 0x7c640000  sq          $a0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42BD60u;
        goto label_42bd60;
    }
    ctx->pc = 0x42BD58u;
    {
        const bool branch_taken_0x42bd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BD58u;
        // 0x42bd5c: 0x7c640000  sq          $a0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bd58) {
            ctx->pc = 0x42BD80u;
            goto label_42bd80;
        }
    }
    ctx->pc = 0x42BD60u;
label_42bd60:
    // 0x42bd60: 0xdf87ae40  ld          $a3, -0x51C0($gp)
    ctx->pc = 0x42bd60u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294946368)));
label_42bd64:
    // 0x42bd64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x42bd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_42bd68:
    // 0x42bd68: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x42bd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_42bd6c:
    // 0x42bd6c: 0x2409004c  addiu       $t1, $zero, 0x4C
    ctx->pc = 0x42bd6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_42bd70:
    // 0x42bd70: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x42bd70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_42bd74:
    // 0x42bd74: 0x71272389  pcpyld      $a0, $t1, $a3
    ctx->pc = 0x42bd74u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 7)));
label_42bd78:
    // 0x42bd78: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x42bd78u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_42bd7c:
    // 0x42bd7c: 0x0  nop
    ctx->pc = 0x42bd7cu;
    // NOP
label_42bd80:
    // 0x42bd80: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x42bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_42bd84:
    // 0x42bd84: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42bd84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42bd88:
    // 0x42bd88: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x42bd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
label_42bd8c:
    // 0x42bd8c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_42bd90:
    if (ctx->pc == 0x42BD90u) {
        ctx->pc = 0x42BD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BD8Cu;
        // 0x42bd90: 0xdf87ae38  ld          $a3, -0x51C8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294946360)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42BD94u;
        goto label_42bd94;
    }
    ctx->pc = 0x42BD8Cu;
    {
        const bool branch_taken_0x42bd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BD8Cu;
        // 0x42bd90: 0xdf87ae38  ld          $a3, -0x51C8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294946360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bd8c) {
            ctx->pc = 0x42BDC0u;
            goto label_42bdc0;
        }
    }
    ctx->pc = 0x42BD94u;
label_42bd94:
    // 0x42bd94: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x42bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_42bd98:
    // 0x42bd98: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x42bd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_42bd9c:
    // 0x42bd9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x42bd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_42bda0:
    // 0x42bda0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x42bda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_42bda4:
    // 0x42bda4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x42bda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_42bda8:
    // 0x42bda8: 0x2409004e  addiu       $t1, $zero, 0x4E
    ctx->pc = 0x42bda8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_42bdac:
    // 0x42bdac: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x42bdacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_42bdb0:
    // 0x42bdb0: 0x71272389  pcpyld      $a0, $t1, $a3
    ctx->pc = 0x42bdb0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 7)));
label_42bdb4:
    // 0x42bdb4: 0x10000008  b           . + 4 + (0x8 << 2)
label_42bdb8:
    if (ctx->pc == 0x42BDB8u) {
        ctx->pc = 0x42BDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BDB4u;
        // 0x42bdb8: 0x8f82be20  lw          $v0, -0x41E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42BDBCu;
        goto label_42bdbc;
    }
    ctx->pc = 0x42BDB4u;
    {
        const bool branch_taken_0x42bdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BDB4u;
        // 0x42bdb8: 0x8f82be20  lw          $v0, -0x41E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bdb4) {
            ctx->pc = 0x42BDD8u;
            goto label_42bdd8;
        }
    }
    ctx->pc = 0x42BDBCu;
label_42bdbc:
    // 0x42bdbc: 0x0  nop
    ctx->pc = 0x42bdbcu;
    // NOP
label_42bdc0:
    // 0x42bdc0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x42bdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_42bdc4:
    // 0x42bdc4: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x42bdc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
label_42bdc8:
    // 0x42bdc8: 0x2409004e  addiu       $t1, $zero, 0x4E
    ctx->pc = 0x42bdc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_42bdcc:
    // 0x42bdcc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x42bdccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_42bdd0:
    // 0x42bdd0: 0x71272389  pcpyld      $a0, $t1, $a3
    ctx->pc = 0x42bdd0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 7)));
label_42bdd4:
    // 0x42bdd4: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x42bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_42bdd8:
    // 0x42bdd8: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x42bdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_42bddc:
    // 0x42bddc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42bddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_42bde0:
    // 0x42bde0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42bde0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42bde4:
    // 0x42bde4: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x42bde4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_42bde8:
    // 0x42bde8: 0x24090045  addiu       $t1, $zero, 0x45
    ctx->pc = 0x42bde8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_42bdec:
    // 0x42bdec: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x42bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_42bdf0:
    // 0x42bdf0: 0x2c420018  sltiu       $v0, $v0, 0x18
    ctx->pc = 0x42bdf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
label_42bdf4:
    // 0x42bdf4: 0x71222389  pcpyld      $a0, $t1, $v0
    ctx->pc = 0x42bdf4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
label_42bdf8:
    // 0x42bdf8: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x42bdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_42bdfc:
    // 0x42bdfc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x42bdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_42be00:
    // 0x42be00: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x42be00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_42be04:
    // 0x42be04: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x42be04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_42be08:
    // 0x42be08: 0xdf87ae48  ld          $a3, -0x51B8($gp)
    ctx->pc = 0x42be08u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_42be0c:
    // 0x42be0c: 0x3c02fffa  lui         $v0, 0xFFFA
    ctx->pc = 0x42be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65530 << 16));
label_42be10:
    // 0x42be10: 0x3442bffe  ori         $v0, $v0, 0xBFFE
    ctx->pc = 0x42be10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49150);
label_42be14:
    // 0x42be14: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x42be14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
label_42be18:
    // 0x42be18: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x42be18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_42be1c:
    // 0x42be1c: 0x24090047  addiu       $t1, $zero, 0x47
    ctx->pc = 0x42be1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_42be20:
    // 0x42be20: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x42be20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_42be24:
    // 0x42be24: 0x71272389  pcpyld      $a0, $t1, $a3
    ctx->pc = 0x42be24u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 7)));
label_42be28:
    // 0x42be28: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x42be28u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_42be2c:
    // 0x42be2c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x42be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_42be30:
    // 0x42be30: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42be30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42be34:
    // 0x42be34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x42be34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42be38:
    // 0x42be38: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x42be38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_42be3c:
    // 0x42be3c: 0x71272389  pcpyld      $a0, $t1, $a3
    ctx->pc = 0x42be3cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 7)));
label_42be40:
    // 0x42be40: 0x7c640010  sq          $a0, 0x10($v1)
    ctx->pc = 0x42be40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 4));
label_42be44:
    // 0x42be44: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x42be44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_42be48:
    // 0x42be48: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42be48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42be4c:
    // 0x42be4c: 0x3c077fff  lui         $a3, 0x7FFF
    ctx->pc = 0x42be4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32767 << 16));
label_42be50:
    // 0x42be50: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x42be50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_42be54:
    // 0x42be54: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x42be54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
label_42be58:
    // 0x42be58: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x42be58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_42be5c:
    // 0x42be5c: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x42be5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_42be60:
    // 0x42be60: 0x71272389  pcpyld      $a0, $t1, $a3
    ctx->pc = 0x42be60u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 7)));
label_42be64:
    // 0x42be64: 0x7c640020  sq          $a0, 0x20($v1)
    ctx->pc = 0x42be64u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 4));
label_42be68:
    // 0x42be68: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x42be68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_42be6c:
    // 0x42be6c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42be6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42be70:
    // 0x42be70: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x42be70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_42be74:
    // 0x42be74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x42be74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42be78:
    // 0x42be78: 0x71272389  pcpyld      $a0, $t1, $a3
    ctx->pc = 0x42be78u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 7)));
label_42be7c:
    // 0x42be7c: 0x7c640030  sq          $a0, 0x30($v1)
    ctx->pc = 0x42be7cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 4));
label_42be80:
    // 0x42be80: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x42be80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_42be84:
    // 0x42be84: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x42be84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_42be88:
    // 0x42be88: 0x84aa001c  lh          $t2, 0x1C($a1)
    ctx->pc = 0x42be88u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
label_42be8c:
    // 0x42be8c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x42be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_42be90:
    // 0x42be90: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x42be90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_42be94:
    // 0x42be94: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x42be94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_42be98:
    // 0x42be98: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_42be9c:
    if (ctx->pc == 0x42BE9Cu) {
        ctx->pc = 0x42BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BE98u;
        // 0x42be9c: 0xdf87ae40  ld          $a3, -0x51C0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294946368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42BEA0u;
        goto label_42bea0;
    }
    ctx->pc = 0x42BE98u;
    {
        const bool branch_taken_0x42be98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BE98u;
        // 0x42be9c: 0xdf87ae40  ld          $a3, -0x51C0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294946368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42be98) {
            ctx->pc = 0x42BFA8u;
            goto label_42bfa8;
        }
    }
    ctx->pc = 0x42BEA0u;
label_42bea0:
    // 0x42bea0: 0xc7818084  lwc1        $f1, -0x7F7C($gp)
    ctx->pc = 0x42bea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42bea4:
    // 0x42bea4: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x42bea4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_42bea8:
    // 0x42bea8: 0x240cffe0  addiu       $t4, $zero, -0x20
    ctx->pc = 0x42bea8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_42beac:
    // 0x42beac: 0x0  nop
    ctx->pc = 0x42beacu;
    // NOP
label_42beb0:
    // 0x42beb0: 0x84a2001e  lh          $v0, 0x1E($a1)
    ctx->pc = 0x42beb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
label_42beb4:
    // 0x42beb4: 0xa1900  sll         $v1, $t2, 4
    ctx->pc = 0x42beb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_42beb8:
    // 0x42beb8: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x42beb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_42bebc:
    // 0x42bebc: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x42bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
label_42bec0:
    // 0x42bec0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x42bec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_42bec4:
    // 0x42bec4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x42bec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42bec8:
    // 0x42bec8: 0x71272389  pcpyld      $a0, $t1, $a3
    ctx->pc = 0x42bec8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 7)));
label_42becc:
    // 0x42becc: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x42beccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_42bed0:
    // 0x42bed0: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x42bed0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_42bed4:
    // 0x42bed4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_42bed8:
    // 0x42bed8: 0x11600013  beqz        $t3, . + 4 + (0x13 << 2)
label_42bedc:
    if (ctx->pc == 0x42BEDCu) {
        ctx->pc = 0x42BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BED8u;
        // 0x42bedc: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42BEE0u;
        goto label_42bee0;
    }
    ctx->pc = 0x42BED8u;
    {
        const bool branch_taken_0x42bed8 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BED8u;
        // 0x42bedc: 0xaf82be20  sw          $v0, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bed8) {
            ctx->pc = 0x42BF28u;
            goto label_42bf28;
        }
    }
    ctx->pc = 0x42BEE0u;
label_42bee0:
    // 0x42bee0: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x42bee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_42bee4:
    // 0x42bee4: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x42bee4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_42bee8:
    // 0x42bee8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x42bee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_42beec:
    // 0x42beec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x42beecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_42bef0:
    // 0x42bef0: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x42bef0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_42bef4:
    // 0x42bef4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x42bef4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_42bef8:
    // 0x42bef8: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x42bef8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_42befc:
    // 0x42befc: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x42befcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_42bf00:
    // 0x42bf00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x42bf00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_42bf04:
    // 0x42bf04: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x42bf04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_42bf08:
    // 0x42bf08: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x42bf08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_42bf0c:
    // 0x42bf0c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x42bf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_42bf10:
    // 0x42bf10: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x42bf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_42bf14:
    // 0x42bf14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x42bf14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_42bf18:
    // 0x42bf18: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x42bf18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_42bf1c:
    // 0x42bf1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x42bf1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_42bf20:
    // 0x42bf20: 0x10000002  b           . + 4 + (0x2 << 2)
label_42bf24:
    if (ctx->pc == 0x42BF24u) {
        ctx->pc = 0x42BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BF20u;
        // 0x42bf24: 0x2383e  dsrl32      $a3, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42BF28u;
        goto label_42bf28;
    }
    ctx->pc = 0x42BF20u;
    {
        const bool branch_taken_0x42bf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BF20u;
        // 0x42bf24: 0x2383e  dsrl32      $a3, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bf20) {
            ctx->pc = 0x42BF2Cu;
            goto label_42bf2c;
        }
    }
    ctx->pc = 0x42BF28u;
label_42bf28:
    // 0x42bf28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x42bf28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42bf2c:
    // 0x42bf2c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x42bf2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42bf30:
    // 0x42bf30: 0x71272389  pcpyld      $a0, $t1, $a3
    ctx->pc = 0x42bf30u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 7)));
label_42bf34:
    // 0x42bf34: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x42bf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_42bf38:
    // 0x42bf38: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x42bf38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_42bf3c:
    // 0x42bf3c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x42bf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_42bf40:
    // 0x42bf40: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x42bf40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_42bf44:
    // 0x42bf44: 0x8e480060  lw          $t0, 0x60($s2)
    ctx->pc = 0x42bf44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_42bf48:
    // 0x42bf48: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x42bf48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_42bf4c:
    // 0x42bf4c: 0x8505001c  lh          $a1, 0x1C($t0)
    ctx->pc = 0x42bf4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 28)));
label_42bf50:
    // 0x42bf50: 0x25440020  addiu       $a0, $t2, 0x20
    ctx->pc = 0x42bf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
label_42bf54:
    // 0x42bf54: 0x8d06000c  lw          $a2, 0xC($t0)
    ctx->pc = 0x42bf54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_42bf58:
    // 0x42bf58: 0x8507001e  lh          $a3, 0x1E($t0)
    ctx->pc = 0x42bf58u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 30)));
label_42bf5c:
    // 0x42bf5c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x42bf5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_42bf60:
    // 0x42bf60: 0x8d020010  lw          $v0, 0x10($t0)
    ctx->pc = 0x42bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_42bf64:
    // 0x42bf64: 0xc4282a  slt         $a1, $a2, $a0
    ctx->pc = 0x42bf64u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_42bf68:
    // 0x42bf68: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x42bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_42bf6c:
    // 0x42bf6c: 0xc5200b  movn        $a0, $a2, $a1
    ctx->pc = 0x42bf6cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
label_42bf70:
    // 0x42bf70: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x42bf70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_42bf74:
    // 0x42bf74: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x42bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
label_42bf78:
    // 0x42bf78: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x42bf78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_42bf7c:
    // 0x42bf7c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x42bf7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42bf80:
    // 0x42bf80: 0x71272389  pcpyld      $a0, $t1, $a3
    ctx->pc = 0x42bf80u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 7)));
label_42bf84:
    // 0x42bf84: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x42bf84u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_42bf88:
    // 0x42bf88: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x42bf88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_42bf8c:
    // 0x42bf8c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x42bf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_42bf90:
    // 0x42bf90: 0x25420020  addiu       $v0, $t2, 0x20
    ctx->pc = 0x42bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
label_42bf94:
    // 0x42bf94: 0x4c5024  and         $t2, $v0, $t4
    ctx->pc = 0x42bf94u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
label_42bf98:
    // 0x42bf98: 0x146302a  slt         $a2, $t2, $a2
    ctx->pc = 0x42bf98u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_42bf9c:
    // 0x42bf9c: 0x14c0ffc4  bnez        $a2, . + 4 + (-0x3C << 2)
label_42bfa0:
    if (ctx->pc == 0x42BFA0u) {
        ctx->pc = 0x42BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BF9Cu;
        // 0x42bfa0: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42BFA4u;
        goto label_42bfa4;
    }
    ctx->pc = 0x42BF9Cu;
    {
        const bool branch_taken_0x42bf9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x42BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BF9Cu;
        // 0x42bfa0: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bf9c) {
            ctx->pc = 0x42BEB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42beb0;
        }
    }
    ctx->pc = 0x42BFA4u;
label_42bfa4:
    // 0x42bfa4: 0xdf87ae40  ld          $a3, -0x51C0($gp)
    ctx->pc = 0x42bfa4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294946368)));
label_42bfa8:
    // 0x42bfa8: 0x2409004c  addiu       $t1, $zero, 0x4C
    ctx->pc = 0x42bfa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_42bfac:
    // 0x42bfac: 0x71272389  pcpyld      $a0, $t1, $a3
    ctx->pc = 0x42bfacu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 7)));
label_42bfb0:
    // 0x42bfb0: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x42bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_42bfb4:
    // 0x42bfb4: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x42bfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_42bfb8:
    // 0x42bfb8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_42bfbc:
    // 0x42bfbc: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42bfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42bfc0:
    // 0x42bfc0: 0xdf87ae38  ld          $a3, -0x51C8($gp)
    ctx->pc = 0x42bfc0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294946360)));
label_42bfc4:
    // 0x42bfc4: 0x2409004e  addiu       $t1, $zero, 0x4E
    ctx->pc = 0x42bfc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_42bfc8:
    // 0x42bfc8: 0x71272389  pcpyld      $a0, $t1, $a3
    ctx->pc = 0x42bfc8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 7)));
label_42bfcc:
    // 0x42bfcc: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x42bfccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_42bfd0:
    // 0x42bfd0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_42bfd4:
    // 0x42bfd4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42bfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42bfd8:
    // 0x42bfd8: 0xdf84ae50  ld          $a0, -0x51B0($gp)
    ctx->pc = 0x42bfd8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294946384)));
label_42bfdc:
    // 0x42bfdc: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x42bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_42bfe0:
    // 0x42bfe0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x42bfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_42bfe4:
    // 0x42bfe4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x42bfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_42bfe8:
    // 0x42bfe8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x42bfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_42bfec:
    // 0x42bfec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x42bfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_42bff0:
    // 0x42bff0: 0x9383be2c  lbu         $v1, -0x41D4($gp)
    ctx->pc = 0x42bff0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950444)));
label_42bff4:
    // 0x42bff4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_42bff8:
    if (ctx->pc == 0x42BFF8u) {
        ctx->pc = 0x42BFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BFF4u;
        // 0x42bff8: 0x822824  and         $a1, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42BFFCu;
        goto label_42bffc;
    }
    ctx->pc = 0x42BFF4u;
    {
        const bool branch_taken_0x42bff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BFF4u;
        // 0x42bff8: 0x822824  and         $a1, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bff4) {
            ctx->pc = 0x42C040u;
            goto label_42c040;
        }
    }
    ctx->pc = 0x42BFFCu;
label_42bffc:
    // 0x42bffc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x42bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_42c000:
    // 0x42c000: 0x42000039  di
    ctx->pc = 0x42c000u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
label_42c004:
    // 0x42c004: 0x40f  sync.p
    ctx->pc = 0x42c004u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_42c008:
    // 0x42c008: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x42c008u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
label_42c00c:
    // 0x42c00c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x42c00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_42c010:
    // 0x42c010: 0x0  nop
    ctx->pc = 0x42c010u;
    // NOP
label_42c014:
    // 0x42c014: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_42c018:
    if (ctx->pc == 0x42C018u) {
        ctx->pc = 0x42C01Cu;
        goto label_42c01c;
    }
    ctx->pc = 0x42C014u;
    {
        const bool branch_taken_0x42c014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x42c014) {
            ctx->pc = 0x42C000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42c000;
        }
    }
    ctx->pc = 0x42C01Cu;
label_42c01c:
    // 0x42c01c: 0x9383be2e  lbu         $v1, -0x41D2($gp)
    ctx->pc = 0x42c01cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950446)));
label_42c020:
    // 0x42c020: 0x9382be2d  lbu         $v0, -0x41D3($gp)
    ctx->pc = 0x42c020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950445)));
label_42c024:
    // 0x42c024: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x42c024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_42c028:
    // 0x42c028: 0x9384be2f  lbu         $a0, -0x41D1($gp)
    ctx->pc = 0x42c028u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950447)));
label_42c02c:
    // 0x42c02c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x42c02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_42c030:
    // 0x42c030: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x42c030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
label_42c034:
    // 0x42c034: 0x42000038  ei
    ctx->pc = 0x42c034u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_42c038:
    // 0x42c038: 0x210fc  dsll32      $v0, $v0, 3
    ctx->pc = 0x42c038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 3));
label_42c03c:
    // 0x42c03c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x42c03cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_42c040:
    // 0x42c040: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x42c040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_42c044:
    // 0x42c044: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x42c044u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_42c048:
    // 0x42c048: 0x71272389  pcpyld      $a0, $t1, $a3
    ctx->pc = 0x42c048u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 7)));
label_42c04c:
    // 0x42c04c: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x42c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_42c050:
    // 0x42c050: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x42c050u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_42c054:
    // 0x42c054: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42c054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_42c058:
    // 0x42c058: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42c058u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42c05c:
    // 0x42c05c: 0x24090019  addiu       $t1, $zero, 0x19
    ctx->pc = 0x42c05cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_42c060:
    // 0x42c060: 0x71272389  pcpyld      $a0, $t1, $a3
    ctx->pc = 0x42c060u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 7)));
label_42c064:
    // 0x42c064: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x42c064u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_42c068:
    // 0x42c068: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x42c068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_42c06c:
    // 0x42c06c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x42c06cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_42c070:
    // 0x42c070: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42c070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42c074:
    // 0x42c074: 0x0  nop
    ctx->pc = 0x42c074u;
    // NOP
label_42c078:
    // 0x42c078: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x42c078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_42c07c:
    // 0x42c07c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x42c07cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42c080:
    // 0x42c080: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42c080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42c084:
    // 0x42c084: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x42c084u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42c088:
    // 0x42c088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42c088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_42c08c:
    // 0x42c08c: 0x3e00008  jr          $ra
label_42c090:
    if (ctx->pc == 0x42C090u) {
        ctx->pc = 0x42C090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C08Cu;
        // 0x42c090: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42C094u;
        goto label_42c094;
    }
    ctx->pc = 0x42C08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C08Cu;
        // 0x42c090: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C094u;
label_42c094:
    // 0x42c094: 0x0  nop
    ctx->pc = 0x42c094u;
    // NOP
    ctx->pc = 0x42c098u;
}
