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

// Function: sub_0047A020
// Address: 0x47a020 - 0x47aaf0
void sub_0047A020_0x47a020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047A020_0x47a020");
#endif

    switch (ctx->pc) {
        case 0x47a020u: goto label_47a020;
        case 0x47a024u: goto label_47a024;
        case 0x47a028u: goto label_47a028;
        case 0x47a02cu: goto label_47a02c;
        case 0x47a030u: goto label_47a030;
        case 0x47a034u: goto label_47a034;
        case 0x47a038u: goto label_47a038;
        case 0x47a03cu: goto label_47a03c;
        case 0x47a040u: goto label_47a040;
        case 0x47a044u: goto label_47a044;
        case 0x47a048u: goto label_47a048;
        case 0x47a04cu: goto label_47a04c;
        case 0x47a050u: goto label_47a050;
        case 0x47a054u: goto label_47a054;
        case 0x47a058u: goto label_47a058;
        case 0x47a05cu: goto label_47a05c;
        case 0x47a060u: goto label_47a060;
        case 0x47a064u: goto label_47a064;
        case 0x47a068u: goto label_47a068;
        case 0x47a06cu: goto label_47a06c;
        case 0x47a070u: goto label_47a070;
        case 0x47a074u: goto label_47a074;
        case 0x47a078u: goto label_47a078;
        case 0x47a07cu: goto label_47a07c;
        case 0x47a080u: goto label_47a080;
        case 0x47a084u: goto label_47a084;
        case 0x47a088u: goto label_47a088;
        case 0x47a08cu: goto label_47a08c;
        case 0x47a090u: goto label_47a090;
        case 0x47a094u: goto label_47a094;
        case 0x47a098u: goto label_47a098;
        case 0x47a09cu: goto label_47a09c;
        case 0x47a0a0u: goto label_47a0a0;
        case 0x47a0a4u: goto label_47a0a4;
        case 0x47a0a8u: goto label_47a0a8;
        case 0x47a0acu: goto label_47a0ac;
        case 0x47a0b0u: goto label_47a0b0;
        case 0x47a0b4u: goto label_47a0b4;
        case 0x47a0b8u: goto label_47a0b8;
        case 0x47a0bcu: goto label_47a0bc;
        case 0x47a0c0u: goto label_47a0c0;
        case 0x47a0c4u: goto label_47a0c4;
        case 0x47a0c8u: goto label_47a0c8;
        case 0x47a0ccu: goto label_47a0cc;
        case 0x47a0d0u: goto label_47a0d0;
        case 0x47a0d4u: goto label_47a0d4;
        case 0x47a0d8u: goto label_47a0d8;
        case 0x47a0dcu: goto label_47a0dc;
        case 0x47a0e0u: goto label_47a0e0;
        case 0x47a0e4u: goto label_47a0e4;
        case 0x47a0e8u: goto label_47a0e8;
        case 0x47a0ecu: goto label_47a0ec;
        case 0x47a0f0u: goto label_47a0f0;
        case 0x47a0f4u: goto label_47a0f4;
        case 0x47a0f8u: goto label_47a0f8;
        case 0x47a0fcu: goto label_47a0fc;
        case 0x47a100u: goto label_47a100;
        case 0x47a104u: goto label_47a104;
        case 0x47a108u: goto label_47a108;
        case 0x47a10cu: goto label_47a10c;
        case 0x47a110u: goto label_47a110;
        case 0x47a114u: goto label_47a114;
        case 0x47a118u: goto label_47a118;
        case 0x47a11cu: goto label_47a11c;
        case 0x47a120u: goto label_47a120;
        case 0x47a124u: goto label_47a124;
        case 0x47a128u: goto label_47a128;
        case 0x47a12cu: goto label_47a12c;
        case 0x47a130u: goto label_47a130;
        case 0x47a134u: goto label_47a134;
        case 0x47a138u: goto label_47a138;
        case 0x47a13cu: goto label_47a13c;
        case 0x47a140u: goto label_47a140;
        case 0x47a144u: goto label_47a144;
        case 0x47a148u: goto label_47a148;
        case 0x47a14cu: goto label_47a14c;
        case 0x47a150u: goto label_47a150;
        case 0x47a154u: goto label_47a154;
        case 0x47a158u: goto label_47a158;
        case 0x47a15cu: goto label_47a15c;
        case 0x47a160u: goto label_47a160;
        case 0x47a164u: goto label_47a164;
        case 0x47a168u: goto label_47a168;
        case 0x47a16cu: goto label_47a16c;
        case 0x47a170u: goto label_47a170;
        case 0x47a174u: goto label_47a174;
        case 0x47a178u: goto label_47a178;
        case 0x47a17cu: goto label_47a17c;
        case 0x47a180u: goto label_47a180;
        case 0x47a184u: goto label_47a184;
        case 0x47a188u: goto label_47a188;
        case 0x47a18cu: goto label_47a18c;
        case 0x47a190u: goto label_47a190;
        case 0x47a194u: goto label_47a194;
        case 0x47a198u: goto label_47a198;
        case 0x47a19cu: goto label_47a19c;
        case 0x47a1a0u: goto label_47a1a0;
        case 0x47a1a4u: goto label_47a1a4;
        case 0x47a1a8u: goto label_47a1a8;
        case 0x47a1acu: goto label_47a1ac;
        case 0x47a1b0u: goto label_47a1b0;
        case 0x47a1b4u: goto label_47a1b4;
        case 0x47a1b8u: goto label_47a1b8;
        case 0x47a1bcu: goto label_47a1bc;
        case 0x47a1c0u: goto label_47a1c0;
        case 0x47a1c4u: goto label_47a1c4;
        case 0x47a1c8u: goto label_47a1c8;
        case 0x47a1ccu: goto label_47a1cc;
        case 0x47a1d0u: goto label_47a1d0;
        case 0x47a1d4u: goto label_47a1d4;
        case 0x47a1d8u: goto label_47a1d8;
        case 0x47a1dcu: goto label_47a1dc;
        case 0x47a1e0u: goto label_47a1e0;
        case 0x47a1e4u: goto label_47a1e4;
        case 0x47a1e8u: goto label_47a1e8;
        case 0x47a1ecu: goto label_47a1ec;
        case 0x47a1f0u: goto label_47a1f0;
        case 0x47a1f4u: goto label_47a1f4;
        case 0x47a1f8u: goto label_47a1f8;
        case 0x47a1fcu: goto label_47a1fc;
        case 0x47a200u: goto label_47a200;
        case 0x47a204u: goto label_47a204;
        case 0x47a208u: goto label_47a208;
        case 0x47a20cu: goto label_47a20c;
        case 0x47a210u: goto label_47a210;
        case 0x47a214u: goto label_47a214;
        case 0x47a218u: goto label_47a218;
        case 0x47a21cu: goto label_47a21c;
        case 0x47a220u: goto label_47a220;
        case 0x47a224u: goto label_47a224;
        case 0x47a228u: goto label_47a228;
        case 0x47a22cu: goto label_47a22c;
        case 0x47a230u: goto label_47a230;
        case 0x47a234u: goto label_47a234;
        case 0x47a238u: goto label_47a238;
        case 0x47a23cu: goto label_47a23c;
        case 0x47a240u: goto label_47a240;
        case 0x47a244u: goto label_47a244;
        case 0x47a248u: goto label_47a248;
        case 0x47a24cu: goto label_47a24c;
        case 0x47a250u: goto label_47a250;
        case 0x47a254u: goto label_47a254;
        case 0x47a258u: goto label_47a258;
        case 0x47a25cu: goto label_47a25c;
        case 0x47a260u: goto label_47a260;
        case 0x47a264u: goto label_47a264;
        case 0x47a268u: goto label_47a268;
        case 0x47a26cu: goto label_47a26c;
        case 0x47a270u: goto label_47a270;
        case 0x47a274u: goto label_47a274;
        case 0x47a278u: goto label_47a278;
        case 0x47a27cu: goto label_47a27c;
        case 0x47a280u: goto label_47a280;
        case 0x47a284u: goto label_47a284;
        case 0x47a288u: goto label_47a288;
        case 0x47a28cu: goto label_47a28c;
        case 0x47a290u: goto label_47a290;
        case 0x47a294u: goto label_47a294;
        case 0x47a298u: goto label_47a298;
        case 0x47a29cu: goto label_47a29c;
        case 0x47a2a0u: goto label_47a2a0;
        case 0x47a2a4u: goto label_47a2a4;
        case 0x47a2a8u: goto label_47a2a8;
        case 0x47a2acu: goto label_47a2ac;
        case 0x47a2b0u: goto label_47a2b0;
        case 0x47a2b4u: goto label_47a2b4;
        case 0x47a2b8u: goto label_47a2b8;
        case 0x47a2bcu: goto label_47a2bc;
        case 0x47a2c0u: goto label_47a2c0;
        case 0x47a2c4u: goto label_47a2c4;
        case 0x47a2c8u: goto label_47a2c8;
        case 0x47a2ccu: goto label_47a2cc;
        case 0x47a2d0u: goto label_47a2d0;
        case 0x47a2d4u: goto label_47a2d4;
        case 0x47a2d8u: goto label_47a2d8;
        case 0x47a2dcu: goto label_47a2dc;
        case 0x47a2e0u: goto label_47a2e0;
        case 0x47a2e4u: goto label_47a2e4;
        case 0x47a2e8u: goto label_47a2e8;
        case 0x47a2ecu: goto label_47a2ec;
        case 0x47a2f0u: goto label_47a2f0;
        case 0x47a2f4u: goto label_47a2f4;
        case 0x47a2f8u: goto label_47a2f8;
        case 0x47a2fcu: goto label_47a2fc;
        case 0x47a300u: goto label_47a300;
        case 0x47a304u: goto label_47a304;
        case 0x47a308u: goto label_47a308;
        case 0x47a30cu: goto label_47a30c;
        case 0x47a310u: goto label_47a310;
        case 0x47a314u: goto label_47a314;
        case 0x47a318u: goto label_47a318;
        case 0x47a31cu: goto label_47a31c;
        case 0x47a320u: goto label_47a320;
        case 0x47a324u: goto label_47a324;
        case 0x47a328u: goto label_47a328;
        case 0x47a32cu: goto label_47a32c;
        case 0x47a330u: goto label_47a330;
        case 0x47a334u: goto label_47a334;
        case 0x47a338u: goto label_47a338;
        case 0x47a33cu: goto label_47a33c;
        case 0x47a340u: goto label_47a340;
        case 0x47a344u: goto label_47a344;
        case 0x47a348u: goto label_47a348;
        case 0x47a34cu: goto label_47a34c;
        case 0x47a350u: goto label_47a350;
        case 0x47a354u: goto label_47a354;
        case 0x47a358u: goto label_47a358;
        case 0x47a35cu: goto label_47a35c;
        case 0x47a360u: goto label_47a360;
        case 0x47a364u: goto label_47a364;
        case 0x47a368u: goto label_47a368;
        case 0x47a36cu: goto label_47a36c;
        case 0x47a370u: goto label_47a370;
        case 0x47a374u: goto label_47a374;
        case 0x47a378u: goto label_47a378;
        case 0x47a37cu: goto label_47a37c;
        case 0x47a380u: goto label_47a380;
        case 0x47a384u: goto label_47a384;
        case 0x47a388u: goto label_47a388;
        case 0x47a38cu: goto label_47a38c;
        case 0x47a390u: goto label_47a390;
        case 0x47a394u: goto label_47a394;
        case 0x47a398u: goto label_47a398;
        case 0x47a39cu: goto label_47a39c;
        case 0x47a3a0u: goto label_47a3a0;
        case 0x47a3a4u: goto label_47a3a4;
        case 0x47a3a8u: goto label_47a3a8;
        case 0x47a3acu: goto label_47a3ac;
        case 0x47a3b0u: goto label_47a3b0;
        case 0x47a3b4u: goto label_47a3b4;
        case 0x47a3b8u: goto label_47a3b8;
        case 0x47a3bcu: goto label_47a3bc;
        case 0x47a3c0u: goto label_47a3c0;
        case 0x47a3c4u: goto label_47a3c4;
        case 0x47a3c8u: goto label_47a3c8;
        case 0x47a3ccu: goto label_47a3cc;
        case 0x47a3d0u: goto label_47a3d0;
        case 0x47a3d4u: goto label_47a3d4;
        case 0x47a3d8u: goto label_47a3d8;
        case 0x47a3dcu: goto label_47a3dc;
        case 0x47a3e0u: goto label_47a3e0;
        case 0x47a3e4u: goto label_47a3e4;
        case 0x47a3e8u: goto label_47a3e8;
        case 0x47a3ecu: goto label_47a3ec;
        case 0x47a3f0u: goto label_47a3f0;
        case 0x47a3f4u: goto label_47a3f4;
        case 0x47a3f8u: goto label_47a3f8;
        case 0x47a3fcu: goto label_47a3fc;
        case 0x47a400u: goto label_47a400;
        case 0x47a404u: goto label_47a404;
        case 0x47a408u: goto label_47a408;
        case 0x47a40cu: goto label_47a40c;
        case 0x47a410u: goto label_47a410;
        case 0x47a414u: goto label_47a414;
        case 0x47a418u: goto label_47a418;
        case 0x47a41cu: goto label_47a41c;
        case 0x47a420u: goto label_47a420;
        case 0x47a424u: goto label_47a424;
        case 0x47a428u: goto label_47a428;
        case 0x47a42cu: goto label_47a42c;
        case 0x47a430u: goto label_47a430;
        case 0x47a434u: goto label_47a434;
        case 0x47a438u: goto label_47a438;
        case 0x47a43cu: goto label_47a43c;
        case 0x47a440u: goto label_47a440;
        case 0x47a444u: goto label_47a444;
        case 0x47a448u: goto label_47a448;
        case 0x47a44cu: goto label_47a44c;
        case 0x47a450u: goto label_47a450;
        case 0x47a454u: goto label_47a454;
        case 0x47a458u: goto label_47a458;
        case 0x47a45cu: goto label_47a45c;
        case 0x47a460u: goto label_47a460;
        case 0x47a464u: goto label_47a464;
        case 0x47a468u: goto label_47a468;
        case 0x47a46cu: goto label_47a46c;
        case 0x47a470u: goto label_47a470;
        case 0x47a474u: goto label_47a474;
        case 0x47a478u: goto label_47a478;
        case 0x47a47cu: goto label_47a47c;
        case 0x47a480u: goto label_47a480;
        case 0x47a484u: goto label_47a484;
        case 0x47a488u: goto label_47a488;
        case 0x47a48cu: goto label_47a48c;
        case 0x47a490u: goto label_47a490;
        case 0x47a494u: goto label_47a494;
        case 0x47a498u: goto label_47a498;
        case 0x47a49cu: goto label_47a49c;
        case 0x47a4a0u: goto label_47a4a0;
        case 0x47a4a4u: goto label_47a4a4;
        case 0x47a4a8u: goto label_47a4a8;
        case 0x47a4acu: goto label_47a4ac;
        case 0x47a4b0u: goto label_47a4b0;
        case 0x47a4b4u: goto label_47a4b4;
        case 0x47a4b8u: goto label_47a4b8;
        case 0x47a4bcu: goto label_47a4bc;
        case 0x47a4c0u: goto label_47a4c0;
        case 0x47a4c4u: goto label_47a4c4;
        case 0x47a4c8u: goto label_47a4c8;
        case 0x47a4ccu: goto label_47a4cc;
        case 0x47a4d0u: goto label_47a4d0;
        case 0x47a4d4u: goto label_47a4d4;
        case 0x47a4d8u: goto label_47a4d8;
        case 0x47a4dcu: goto label_47a4dc;
        case 0x47a4e0u: goto label_47a4e0;
        case 0x47a4e4u: goto label_47a4e4;
        case 0x47a4e8u: goto label_47a4e8;
        case 0x47a4ecu: goto label_47a4ec;
        case 0x47a4f0u: goto label_47a4f0;
        case 0x47a4f4u: goto label_47a4f4;
        case 0x47a4f8u: goto label_47a4f8;
        case 0x47a4fcu: goto label_47a4fc;
        case 0x47a500u: goto label_47a500;
        case 0x47a504u: goto label_47a504;
        case 0x47a508u: goto label_47a508;
        case 0x47a50cu: goto label_47a50c;
        case 0x47a510u: goto label_47a510;
        case 0x47a514u: goto label_47a514;
        case 0x47a518u: goto label_47a518;
        case 0x47a51cu: goto label_47a51c;
        case 0x47a520u: goto label_47a520;
        case 0x47a524u: goto label_47a524;
        case 0x47a528u: goto label_47a528;
        case 0x47a52cu: goto label_47a52c;
        case 0x47a530u: goto label_47a530;
        case 0x47a534u: goto label_47a534;
        case 0x47a538u: goto label_47a538;
        case 0x47a53cu: goto label_47a53c;
        case 0x47a540u: goto label_47a540;
        case 0x47a544u: goto label_47a544;
        case 0x47a548u: goto label_47a548;
        case 0x47a54cu: goto label_47a54c;
        case 0x47a550u: goto label_47a550;
        case 0x47a554u: goto label_47a554;
        case 0x47a558u: goto label_47a558;
        case 0x47a55cu: goto label_47a55c;
        case 0x47a560u: goto label_47a560;
        case 0x47a564u: goto label_47a564;
        case 0x47a568u: goto label_47a568;
        case 0x47a56cu: goto label_47a56c;
        case 0x47a570u: goto label_47a570;
        case 0x47a574u: goto label_47a574;
        case 0x47a578u: goto label_47a578;
        case 0x47a57cu: goto label_47a57c;
        case 0x47a580u: goto label_47a580;
        case 0x47a584u: goto label_47a584;
        case 0x47a588u: goto label_47a588;
        case 0x47a58cu: goto label_47a58c;
        case 0x47a590u: goto label_47a590;
        case 0x47a594u: goto label_47a594;
        case 0x47a598u: goto label_47a598;
        case 0x47a59cu: goto label_47a59c;
        case 0x47a5a0u: goto label_47a5a0;
        case 0x47a5a4u: goto label_47a5a4;
        case 0x47a5a8u: goto label_47a5a8;
        case 0x47a5acu: goto label_47a5ac;
        case 0x47a5b0u: goto label_47a5b0;
        case 0x47a5b4u: goto label_47a5b4;
        case 0x47a5b8u: goto label_47a5b8;
        case 0x47a5bcu: goto label_47a5bc;
        case 0x47a5c0u: goto label_47a5c0;
        case 0x47a5c4u: goto label_47a5c4;
        case 0x47a5c8u: goto label_47a5c8;
        case 0x47a5ccu: goto label_47a5cc;
        case 0x47a5d0u: goto label_47a5d0;
        case 0x47a5d4u: goto label_47a5d4;
        case 0x47a5d8u: goto label_47a5d8;
        case 0x47a5dcu: goto label_47a5dc;
        case 0x47a5e0u: goto label_47a5e0;
        case 0x47a5e4u: goto label_47a5e4;
        case 0x47a5e8u: goto label_47a5e8;
        case 0x47a5ecu: goto label_47a5ec;
        case 0x47a5f0u: goto label_47a5f0;
        case 0x47a5f4u: goto label_47a5f4;
        case 0x47a5f8u: goto label_47a5f8;
        case 0x47a5fcu: goto label_47a5fc;
        case 0x47a600u: goto label_47a600;
        case 0x47a604u: goto label_47a604;
        case 0x47a608u: goto label_47a608;
        case 0x47a60cu: goto label_47a60c;
        case 0x47a610u: goto label_47a610;
        case 0x47a614u: goto label_47a614;
        case 0x47a618u: goto label_47a618;
        case 0x47a61cu: goto label_47a61c;
        case 0x47a620u: goto label_47a620;
        case 0x47a624u: goto label_47a624;
        case 0x47a628u: goto label_47a628;
        case 0x47a62cu: goto label_47a62c;
        case 0x47a630u: goto label_47a630;
        case 0x47a634u: goto label_47a634;
        case 0x47a638u: goto label_47a638;
        case 0x47a63cu: goto label_47a63c;
        case 0x47a640u: goto label_47a640;
        case 0x47a644u: goto label_47a644;
        case 0x47a648u: goto label_47a648;
        case 0x47a64cu: goto label_47a64c;
        case 0x47a650u: goto label_47a650;
        case 0x47a654u: goto label_47a654;
        case 0x47a658u: goto label_47a658;
        case 0x47a65cu: goto label_47a65c;
        case 0x47a660u: goto label_47a660;
        case 0x47a664u: goto label_47a664;
        case 0x47a668u: goto label_47a668;
        case 0x47a66cu: goto label_47a66c;
        case 0x47a670u: goto label_47a670;
        case 0x47a674u: goto label_47a674;
        case 0x47a678u: goto label_47a678;
        case 0x47a67cu: goto label_47a67c;
        case 0x47a680u: goto label_47a680;
        case 0x47a684u: goto label_47a684;
        case 0x47a688u: goto label_47a688;
        case 0x47a68cu: goto label_47a68c;
        case 0x47a690u: goto label_47a690;
        case 0x47a694u: goto label_47a694;
        case 0x47a698u: goto label_47a698;
        case 0x47a69cu: goto label_47a69c;
        case 0x47a6a0u: goto label_47a6a0;
        case 0x47a6a4u: goto label_47a6a4;
        case 0x47a6a8u: goto label_47a6a8;
        case 0x47a6acu: goto label_47a6ac;
        case 0x47a6b0u: goto label_47a6b0;
        case 0x47a6b4u: goto label_47a6b4;
        case 0x47a6b8u: goto label_47a6b8;
        case 0x47a6bcu: goto label_47a6bc;
        case 0x47a6c0u: goto label_47a6c0;
        case 0x47a6c4u: goto label_47a6c4;
        case 0x47a6c8u: goto label_47a6c8;
        case 0x47a6ccu: goto label_47a6cc;
        case 0x47a6d0u: goto label_47a6d0;
        case 0x47a6d4u: goto label_47a6d4;
        case 0x47a6d8u: goto label_47a6d8;
        case 0x47a6dcu: goto label_47a6dc;
        case 0x47a6e0u: goto label_47a6e0;
        case 0x47a6e4u: goto label_47a6e4;
        case 0x47a6e8u: goto label_47a6e8;
        case 0x47a6ecu: goto label_47a6ec;
        case 0x47a6f0u: goto label_47a6f0;
        case 0x47a6f4u: goto label_47a6f4;
        case 0x47a6f8u: goto label_47a6f8;
        case 0x47a6fcu: goto label_47a6fc;
        case 0x47a700u: goto label_47a700;
        case 0x47a704u: goto label_47a704;
        case 0x47a708u: goto label_47a708;
        case 0x47a70cu: goto label_47a70c;
        case 0x47a710u: goto label_47a710;
        case 0x47a714u: goto label_47a714;
        case 0x47a718u: goto label_47a718;
        case 0x47a71cu: goto label_47a71c;
        case 0x47a720u: goto label_47a720;
        case 0x47a724u: goto label_47a724;
        case 0x47a728u: goto label_47a728;
        case 0x47a72cu: goto label_47a72c;
        case 0x47a730u: goto label_47a730;
        case 0x47a734u: goto label_47a734;
        case 0x47a738u: goto label_47a738;
        case 0x47a73cu: goto label_47a73c;
        case 0x47a740u: goto label_47a740;
        case 0x47a744u: goto label_47a744;
        case 0x47a748u: goto label_47a748;
        case 0x47a74cu: goto label_47a74c;
        case 0x47a750u: goto label_47a750;
        case 0x47a754u: goto label_47a754;
        case 0x47a758u: goto label_47a758;
        case 0x47a75cu: goto label_47a75c;
        case 0x47a760u: goto label_47a760;
        case 0x47a764u: goto label_47a764;
        case 0x47a768u: goto label_47a768;
        case 0x47a76cu: goto label_47a76c;
        case 0x47a770u: goto label_47a770;
        case 0x47a774u: goto label_47a774;
        case 0x47a778u: goto label_47a778;
        case 0x47a77cu: goto label_47a77c;
        case 0x47a780u: goto label_47a780;
        case 0x47a784u: goto label_47a784;
        case 0x47a788u: goto label_47a788;
        case 0x47a78cu: goto label_47a78c;
        case 0x47a790u: goto label_47a790;
        case 0x47a794u: goto label_47a794;
        case 0x47a798u: goto label_47a798;
        case 0x47a79cu: goto label_47a79c;
        case 0x47a7a0u: goto label_47a7a0;
        case 0x47a7a4u: goto label_47a7a4;
        case 0x47a7a8u: goto label_47a7a8;
        case 0x47a7acu: goto label_47a7ac;
        case 0x47a7b0u: goto label_47a7b0;
        case 0x47a7b4u: goto label_47a7b4;
        case 0x47a7b8u: goto label_47a7b8;
        case 0x47a7bcu: goto label_47a7bc;
        case 0x47a7c0u: goto label_47a7c0;
        case 0x47a7c4u: goto label_47a7c4;
        case 0x47a7c8u: goto label_47a7c8;
        case 0x47a7ccu: goto label_47a7cc;
        case 0x47a7d0u: goto label_47a7d0;
        case 0x47a7d4u: goto label_47a7d4;
        case 0x47a7d8u: goto label_47a7d8;
        case 0x47a7dcu: goto label_47a7dc;
        case 0x47a7e0u: goto label_47a7e0;
        case 0x47a7e4u: goto label_47a7e4;
        case 0x47a7e8u: goto label_47a7e8;
        case 0x47a7ecu: goto label_47a7ec;
        case 0x47a7f0u: goto label_47a7f0;
        case 0x47a7f4u: goto label_47a7f4;
        case 0x47a7f8u: goto label_47a7f8;
        case 0x47a7fcu: goto label_47a7fc;
        case 0x47a800u: goto label_47a800;
        case 0x47a804u: goto label_47a804;
        case 0x47a808u: goto label_47a808;
        case 0x47a80cu: goto label_47a80c;
        case 0x47a810u: goto label_47a810;
        case 0x47a814u: goto label_47a814;
        case 0x47a818u: goto label_47a818;
        case 0x47a81cu: goto label_47a81c;
        case 0x47a820u: goto label_47a820;
        case 0x47a824u: goto label_47a824;
        case 0x47a828u: goto label_47a828;
        case 0x47a82cu: goto label_47a82c;
        case 0x47a830u: goto label_47a830;
        case 0x47a834u: goto label_47a834;
        case 0x47a838u: goto label_47a838;
        case 0x47a83cu: goto label_47a83c;
        case 0x47a840u: goto label_47a840;
        case 0x47a844u: goto label_47a844;
        case 0x47a848u: goto label_47a848;
        case 0x47a84cu: goto label_47a84c;
        case 0x47a850u: goto label_47a850;
        case 0x47a854u: goto label_47a854;
        case 0x47a858u: goto label_47a858;
        case 0x47a85cu: goto label_47a85c;
        case 0x47a860u: goto label_47a860;
        case 0x47a864u: goto label_47a864;
        case 0x47a868u: goto label_47a868;
        case 0x47a86cu: goto label_47a86c;
        case 0x47a870u: goto label_47a870;
        case 0x47a874u: goto label_47a874;
        case 0x47a878u: goto label_47a878;
        case 0x47a87cu: goto label_47a87c;
        case 0x47a880u: goto label_47a880;
        case 0x47a884u: goto label_47a884;
        case 0x47a888u: goto label_47a888;
        case 0x47a88cu: goto label_47a88c;
        case 0x47a890u: goto label_47a890;
        case 0x47a894u: goto label_47a894;
        case 0x47a898u: goto label_47a898;
        case 0x47a89cu: goto label_47a89c;
        case 0x47a8a0u: goto label_47a8a0;
        case 0x47a8a4u: goto label_47a8a4;
        case 0x47a8a8u: goto label_47a8a8;
        case 0x47a8acu: goto label_47a8ac;
        case 0x47a8b0u: goto label_47a8b0;
        case 0x47a8b4u: goto label_47a8b4;
        case 0x47a8b8u: goto label_47a8b8;
        case 0x47a8bcu: goto label_47a8bc;
        case 0x47a8c0u: goto label_47a8c0;
        case 0x47a8c4u: goto label_47a8c4;
        case 0x47a8c8u: goto label_47a8c8;
        case 0x47a8ccu: goto label_47a8cc;
        case 0x47a8d0u: goto label_47a8d0;
        case 0x47a8d4u: goto label_47a8d4;
        case 0x47a8d8u: goto label_47a8d8;
        case 0x47a8dcu: goto label_47a8dc;
        case 0x47a8e0u: goto label_47a8e0;
        case 0x47a8e4u: goto label_47a8e4;
        case 0x47a8e8u: goto label_47a8e8;
        case 0x47a8ecu: goto label_47a8ec;
        case 0x47a8f0u: goto label_47a8f0;
        case 0x47a8f4u: goto label_47a8f4;
        case 0x47a8f8u: goto label_47a8f8;
        case 0x47a8fcu: goto label_47a8fc;
        case 0x47a900u: goto label_47a900;
        case 0x47a904u: goto label_47a904;
        case 0x47a908u: goto label_47a908;
        case 0x47a90cu: goto label_47a90c;
        case 0x47a910u: goto label_47a910;
        case 0x47a914u: goto label_47a914;
        case 0x47a918u: goto label_47a918;
        case 0x47a91cu: goto label_47a91c;
        case 0x47a920u: goto label_47a920;
        case 0x47a924u: goto label_47a924;
        case 0x47a928u: goto label_47a928;
        case 0x47a92cu: goto label_47a92c;
        case 0x47a930u: goto label_47a930;
        case 0x47a934u: goto label_47a934;
        case 0x47a938u: goto label_47a938;
        case 0x47a93cu: goto label_47a93c;
        case 0x47a940u: goto label_47a940;
        case 0x47a944u: goto label_47a944;
        case 0x47a948u: goto label_47a948;
        case 0x47a94cu: goto label_47a94c;
        case 0x47a950u: goto label_47a950;
        case 0x47a954u: goto label_47a954;
        case 0x47a958u: goto label_47a958;
        case 0x47a95cu: goto label_47a95c;
        case 0x47a960u: goto label_47a960;
        case 0x47a964u: goto label_47a964;
        case 0x47a968u: goto label_47a968;
        case 0x47a96cu: goto label_47a96c;
        case 0x47a970u: goto label_47a970;
        case 0x47a974u: goto label_47a974;
        case 0x47a978u: goto label_47a978;
        case 0x47a97cu: goto label_47a97c;
        case 0x47a980u: goto label_47a980;
        case 0x47a984u: goto label_47a984;
        case 0x47a988u: goto label_47a988;
        case 0x47a98cu: goto label_47a98c;
        case 0x47a990u: goto label_47a990;
        case 0x47a994u: goto label_47a994;
        case 0x47a998u: goto label_47a998;
        case 0x47a99cu: goto label_47a99c;
        case 0x47a9a0u: goto label_47a9a0;
        case 0x47a9a4u: goto label_47a9a4;
        case 0x47a9a8u: goto label_47a9a8;
        case 0x47a9acu: goto label_47a9ac;
        case 0x47a9b0u: goto label_47a9b0;
        case 0x47a9b4u: goto label_47a9b4;
        case 0x47a9b8u: goto label_47a9b8;
        case 0x47a9bcu: goto label_47a9bc;
        case 0x47a9c0u: goto label_47a9c0;
        case 0x47a9c4u: goto label_47a9c4;
        case 0x47a9c8u: goto label_47a9c8;
        case 0x47a9ccu: goto label_47a9cc;
        case 0x47a9d0u: goto label_47a9d0;
        case 0x47a9d4u: goto label_47a9d4;
        case 0x47a9d8u: goto label_47a9d8;
        case 0x47a9dcu: goto label_47a9dc;
        case 0x47a9e0u: goto label_47a9e0;
        case 0x47a9e4u: goto label_47a9e4;
        case 0x47a9e8u: goto label_47a9e8;
        case 0x47a9ecu: goto label_47a9ec;
        case 0x47a9f0u: goto label_47a9f0;
        case 0x47a9f4u: goto label_47a9f4;
        case 0x47a9f8u: goto label_47a9f8;
        case 0x47a9fcu: goto label_47a9fc;
        case 0x47aa00u: goto label_47aa00;
        case 0x47aa04u: goto label_47aa04;
        case 0x47aa08u: goto label_47aa08;
        case 0x47aa0cu: goto label_47aa0c;
        case 0x47aa10u: goto label_47aa10;
        case 0x47aa14u: goto label_47aa14;
        case 0x47aa18u: goto label_47aa18;
        case 0x47aa1cu: goto label_47aa1c;
        case 0x47aa20u: goto label_47aa20;
        case 0x47aa24u: goto label_47aa24;
        case 0x47aa28u: goto label_47aa28;
        case 0x47aa2cu: goto label_47aa2c;
        case 0x47aa30u: goto label_47aa30;
        case 0x47aa34u: goto label_47aa34;
        case 0x47aa38u: goto label_47aa38;
        case 0x47aa3cu: goto label_47aa3c;
        case 0x47aa40u: goto label_47aa40;
        case 0x47aa44u: goto label_47aa44;
        case 0x47aa48u: goto label_47aa48;
        case 0x47aa4cu: goto label_47aa4c;
        case 0x47aa50u: goto label_47aa50;
        case 0x47aa54u: goto label_47aa54;
        case 0x47aa58u: goto label_47aa58;
        case 0x47aa5cu: goto label_47aa5c;
        case 0x47aa60u: goto label_47aa60;
        case 0x47aa64u: goto label_47aa64;
        case 0x47aa68u: goto label_47aa68;
        case 0x47aa6cu: goto label_47aa6c;
        case 0x47aa70u: goto label_47aa70;
        case 0x47aa74u: goto label_47aa74;
        case 0x47aa78u: goto label_47aa78;
        case 0x47aa7cu: goto label_47aa7c;
        case 0x47aa80u: goto label_47aa80;
        case 0x47aa84u: goto label_47aa84;
        case 0x47aa88u: goto label_47aa88;
        case 0x47aa8cu: goto label_47aa8c;
        case 0x47aa90u: goto label_47aa90;
        case 0x47aa94u: goto label_47aa94;
        case 0x47aa98u: goto label_47aa98;
        case 0x47aa9cu: goto label_47aa9c;
        case 0x47aaa0u: goto label_47aaa0;
        case 0x47aaa4u: goto label_47aaa4;
        case 0x47aaa8u: goto label_47aaa8;
        case 0x47aaacu: goto label_47aaac;
        case 0x47aab0u: goto label_47aab0;
        case 0x47aab4u: goto label_47aab4;
        case 0x47aab8u: goto label_47aab8;
        case 0x47aabcu: goto label_47aabc;
        case 0x47aac0u: goto label_47aac0;
        case 0x47aac4u: goto label_47aac4;
        case 0x47aac8u: goto label_47aac8;
        case 0x47aaccu: goto label_47aacc;
        case 0x47aad0u: goto label_47aad0;
        case 0x47aad4u: goto label_47aad4;
        case 0x47aad8u: goto label_47aad8;
        case 0x47aadcu: goto label_47aadc;
        case 0x47aae0u: goto label_47aae0;
        case 0x47aae4u: goto label_47aae4;
        case 0x47aae8u: goto label_47aae8;
        case 0x47aaecu: goto label_47aaec;
        default: break;
    }

    ctx->pc = 0x47a020u;

label_47a020:
    // 0x47a020: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x47a020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_47a024:
    // 0x47a024: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x47a024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_47a028:
    // 0x47a028: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x47a028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_47a02c:
    // 0x47a02c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x47a02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_47a030:
    // 0x47a030: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x47a030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_47a034:
    // 0x47a034: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x47a034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_47a038:
    // 0x47a038: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x47a038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_47a03c:
    // 0x47a03c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47a03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47a040:
    // 0x47a040: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47a040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47a044:
    // 0x47a044: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47a044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47a048:
    // 0x47a048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47a048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47a04c:
    // 0x47a04c: 0xafa40190  sw          $a0, 0x190($sp)
    ctx->pc = 0x47a04cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 4));
label_47a050:
    // 0x47a050: 0xafa501a0  sw          $a1, 0x1A0($sp)
    ctx->pc = 0x47a050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 5));
label_47a054:
    // 0x47a054: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x47a054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_47a058:
    // 0x47a058: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x47a058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_47a05c:
    // 0x47a05c: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x47a05cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_47a060:
    // 0x47a060: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x47a060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_47a064:
    // 0x47a064: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_47a068:
    if (ctx->pc == 0x47A068u) {
        ctx->pc = 0x47A06Cu;
        goto label_47a06c;
    }
    ctx->pc = 0x47A064u;
    {
        const bool branch_taken_0x47a064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47a064) {
            ctx->pc = 0x47A074u;
            goto label_47a074;
        }
    }
    ctx->pc = 0x47A06Cu;
label_47a06c:
    // 0x47a06c: 0x2782b6b0  addiu       $v0, $gp, -0x4950
    ctx->pc = 0x47a06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948528));
label_47a070:
    // 0x47a070: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x47a070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_47a074:
    // 0x47a074: 0x1280028d  beqz        $s4, . + 4 + (0x28D << 2)
label_47a078:
    if (ctx->pc == 0x47A078u) {
        ctx->pc = 0x47A07Cu;
        goto label_47a07c;
    }
    ctx->pc = 0x47A074u;
    {
        const bool branch_taken_0x47a074 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x47a074) {
            ctx->pc = 0x47AAACu;
            goto label_47aaac;
        }
    }
    ctx->pc = 0x47A07Cu;
label_47a07c:
    // 0x47a07c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x47a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_47a080:
    // 0x47a080: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x47a080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a084:
    // 0x47a084: 0x0  nop
    ctx->pc = 0x47a084u;
    // NOP
label_47a088:
    // 0x47a088: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x47a088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_47a08c:
    // 0x47a08c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47a08cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47a090:
    // 0x47a090: 0x0  nop
    ctx->pc = 0x47a090u;
    // NOP
label_47a094:
    // 0x47a094: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x47a094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_47a098:
    // 0x47a098: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x47a098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47a09c:
    // 0x47a09c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x47a09cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47a0a0:
    // 0x47a0a0: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x47a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_47a0a4:
    // 0x47a0a4: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x47a0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
label_47a0a8:
    // 0x47a0a8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x47a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_47a0ac:
    // 0x47a0ac: 0xafa20174  sw          $v0, 0x174($sp)
    ctx->pc = 0x47a0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
label_47a0b0:
    // 0x47a0b0: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x47a0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_47a0b4:
    // 0x47a0b4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x47a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_47a0b8:
    // 0x47a0b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a0bc:
    // 0x47a0bc: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x47a0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_47a0c0:
    // 0x47a0c0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x47a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_47a0c4:
    // 0x47a0c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a0c8:
    // 0x47a0c8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x47a0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a0cc:
    // 0x47a0cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47a0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47a0d0:
    // 0x47a0d0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x47a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_47a0d4:
    // 0x47a0d4: 0x8c42e988  lw          $v0, -0x1678($v0)
    ctx->pc = 0x47a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961544)));
label_47a0d8:
    // 0x47a0d8: 0x40f809  jalr        $v0
label_47a0dc:
    if (ctx->pc == 0x47A0DCu) {
        ctx->pc = 0x47A0E0u;
        goto label_47a0e0;
    }
    ctx->pc = 0x47A0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47A0E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A0D8u, 0x47A0E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47A0E0u;
label_47a0e0:
    // 0x47a0e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x47a0e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47a0e4:
    // 0x47a0e4: 0x8fa3017c  lw          $v1, 0x17C($sp)
    ctx->pc = 0x47a0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_47a0e8:
    // 0x47a0e8: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x47a0e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_47a0ec:
    // 0x47a0ec: 0x1420002b  bnez        $at, . + 4 + (0x2B << 2)
label_47a0f0:
    if (ctx->pc == 0x47A0F0u) {
        ctx->pc = 0x47A0F4u;
        goto label_47a0f4;
    }
    ctx->pc = 0x47A0ECu;
    {
        const bool branch_taken_0x47a0ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x47a0ec) {
            ctx->pc = 0x47A19Cu;
            goto label_47a19c;
        }
    }
    ctx->pc = 0x47A0F4u;
label_47a0f4:
    // 0x47a0f4: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x47a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_47a0f8:
    // 0x47a0f8: 0x2442004c  addiu       $v0, $v0, 0x4C
    ctx->pc = 0x47a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_47a0fc:
    // 0x47a0fc: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x47a0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
label_47a100:
    // 0x47a100: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x47a100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_47a104:
    // 0x47a104: 0x8fa5016c  lw          $a1, 0x16C($sp)
    ctx->pc = 0x47a104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_47a108:
    // 0x47a108: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x47a108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a10c:
    // 0x47a10c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x47a10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a110:
    // 0x47a110: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x47a110u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_47a114:
    // 0x47a114: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x47a114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_47a118:
    // 0x47a118: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x47a118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_47a11c:
    // 0x47a11c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x47a11cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_47a120:
    // 0x47a120: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x47a120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a124:
    // 0x47a124: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x47a124u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_47a128:
    // 0x47a128: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x47a128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_47a12c:
    // 0x47a12c: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x47a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_47a130:
    // 0x47a130: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x47a130u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_47a134:
    // 0x47a134: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x47a134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_47a138:
    // 0x47a138: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47a138u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_47a13c:
    // 0x47a13c: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x47a13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
label_47a140:
    // 0x47a140: 0x8fa3016c  lw          $v1, 0x16C($sp)
    ctx->pc = 0x47a140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_47a144:
    // 0x47a144: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x47a144u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_47a148:
    // 0x47a148: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x47a148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_47a14c:
    // 0x47a14c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47a14cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_47a150:
    // 0x47a150: 0xafa20164  sw          $v0, 0x164($sp)
    ctx->pc = 0x47a150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
label_47a154:
    // 0x47a154: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x47a154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_47a158:
    // 0x47a158: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x47a158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_47a15c:
    // 0x47a15c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x47a15cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a160:
    // 0x47a160: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x47a160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a164:
    // 0x47a164: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x47a164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_47a168:
    // 0x47a168: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x47a168u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a16c:
    // 0x47a16c: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x47a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_47a170:
    // 0x47a170: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x47a170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47a174:
    // 0x47a174: 0x8fa30164  lw          $v1, 0x164($sp)
    ctx->pc = 0x47a174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_47a178:
    // 0x47a178: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x47a178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_47a17c:
    // 0x47a17c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x47a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a180:
    // 0x47a180: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x47a180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a184:
    // 0x47a184: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x47a184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_47a188:
    // 0x47a188: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x47a188u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a18c:
    // 0x47a18c: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x47a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_47a190:
    // 0x47a190: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x47a190u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47a194:
    // 0x47a194: 0x10000004  b           . + 4 + (0x4 << 2)
label_47a198:
    if (ctx->pc == 0x47A198u) {
        ctx->pc = 0x47A19Cu;
        goto label_47a19c;
    }
    ctx->pc = 0x47A194u;
    {
        const bool branch_taken_0x47a194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47a194) {
            ctx->pc = 0x47A1A8u;
            goto label_47a1a8;
        }
    }
    ctx->pc = 0x47A19Cu;
label_47a19c:
    // 0x47a19c: 0x8e95005c  lw          $s5, 0x5C($s4)
    ctx->pc = 0x47a19cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_47a1a0:
    // 0x47a1a0: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x47a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_47a1a4:
    // 0x47a1a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x47a1a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47a1a8:
    // 0x47a1a8: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x47a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_47a1ac:
    // 0x47a1ac: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x47a1acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
label_47a1b0:
    // 0x47a1b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x47a1b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47a1b4:
    // 0x47a1b4: 0x100001f7  b           . + 4 + (0x1F7 << 2)
label_47a1b8:
    if (ctx->pc == 0x47A1B8u) {
        ctx->pc = 0x47A1BCu;
        goto label_47a1bc;
    }
    ctx->pc = 0x47A1B4u;
    {
        const bool branch_taken_0x47a1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47a1b4) {
            ctx->pc = 0x47A994u;
            goto label_47a994;
        }
    }
    ctx->pc = 0x47A1BCu;
label_47a1bc:
    // 0x47a1bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x47a1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_47a1c0:
    // 0x47a1c0: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x47a1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_47a1c4:
    // 0x47a1c4: 0x27a6018e  addiu       $a2, $sp, 0x18E
    ctx->pc = 0x47a1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 398));
label_47a1c8:
    // 0x47a1c8: 0x27a7018c  addiu       $a3, $sp, 0x18C
    ctx->pc = 0x47a1c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_47a1cc:
    // 0x47a1cc: 0x27a8018a  addiu       $t0, $sp, 0x18A
    ctx->pc = 0x47a1ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 394));
label_47a1d0:
    // 0x47a1d0: 0xc0e337e  jal         func_38CDF8
label_47a1d4:
    if (ctx->pc == 0x47A1D4u) {
        ctx->pc = 0x47A1D8u;
        goto label_47a1d8;
    }
    ctx->pc = 0x47A1D0u;
    SET_GPR_U32(ctx, 31, 0x47A1D8u);
    ctx->pc = 0x38CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CDF8u, 0x47A1D0u, 0x47A1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47A1D8u;
label_47a1d8:
    // 0x47a1d8: 0x8fa4017c  lw          $a0, 0x17C($sp)
    ctx->pc = 0x47a1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_47a1dc:
    // 0x47a1dc: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x47a1dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_47a1e0:
    // 0x47a1e0: 0x142000db  bnez        $at, . + 4 + (0xDB << 2)
label_47a1e4:
    if (ctx->pc == 0x47A1E4u) {
        ctx->pc = 0x47A1E8u;
        goto label_47a1e8;
    }
    ctx->pc = 0x47A1E0u;
    {
        const bool branch_taken_0x47a1e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x47a1e0) {
            ctx->pc = 0x47A550u;
            goto label_47a550;
        }
    }
    ctx->pc = 0x47A1E8u;
label_47a1e8:
    // 0x47a1e8: 0x97a5018e  lhu         $a1, 0x18E($sp)
    ctx->pc = 0x47a1e8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 398)));
label_47a1ec:
    // 0x47a1ec: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x47a1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_47a1f0:
    // 0x47a1f0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x47a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_47a1f4:
    // 0x47a1f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x47a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_47a1f8:
    // 0x47a1f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a1fc:
    // 0x47a1fc: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x47a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_47a200:
    // 0x47a200: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x47a200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a204:
    // 0x47a204: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x47a204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a208:
    // 0x47a208: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47a208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47a20c:
    // 0x47a20c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x47a20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_47a210:
    // 0x47a210: 0x97a2018e  lhu         $v0, 0x18E($sp)
    ctx->pc = 0x47a210u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 398)));
label_47a214:
    // 0x47a214: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x47a214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47a218:
    // 0x47a218: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x47a218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_47a21c:
    // 0x47a21c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a220:
    // 0x47a220: 0x2f080  sll         $fp, $v0, 2
    ctx->pc = 0x47a220u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a224:
    // 0x47a224: 0x23e1021  addu        $v0, $s1, $fp
    ctx->pc = 0x47a224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
label_47a228:
    // 0x47a228: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x47a228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a22c:
    // 0x47a22c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x47a22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a230:
    // 0x47a230: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47a230u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47a234:
    // 0x47a234: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x47a234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_47a238:
    // 0x47a238: 0x97a2018e  lhu         $v0, 0x18E($sp)
    ctx->pc = 0x47a238u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 398)));
label_47a23c:
    // 0x47a23c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x47a23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47a240:
    // 0x47a240: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x47a240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_47a244:
    // 0x47a244: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47a244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a248:
    // 0x47a248: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47a248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a24c:
    // 0x47a24c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x47a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_47a250:
    // 0x47a250: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x47a250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a254:
    // 0x47a254: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x47a254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a258:
    // 0x47a258: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47a258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47a25c:
    // 0x47a25c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x47a25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_47a260:
    // 0x47a260: 0x97a2018e  lhu         $v0, 0x18E($sp)
    ctx->pc = 0x47a260u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 398)));
label_47a264:
    // 0x47a264: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x47a264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47a268:
    // 0x47a268: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x47a268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_47a26c:
    // 0x47a26c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a270:
    // 0x47a270: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x47a270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a274:
    // 0x47a274: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x47a274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_47a278:
    // 0x47a278: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x47a278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a27c:
    // 0x47a27c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x47a27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a280:
    // 0x47a280: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47a280u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47a284:
    // 0x47a284: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x47a284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_47a288:
    // 0x47a288: 0x97a2018e  lhu         $v0, 0x18E($sp)
    ctx->pc = 0x47a288u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 398)));
label_47a28c:
    // 0x47a28c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x47a28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47a290:
    // 0x47a290: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x47a290u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_47a294:
    // 0x47a294: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x47a294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_47a298:
    // 0x47a298: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x47a298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_47a29c:
    // 0x47a29c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x47a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_47a2a0:
    // 0x47a2a0: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x47a2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a2a4:
    // 0x47a2a4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x47a2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a2a8:
    // 0x47a2a8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47a2a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47a2ac:
    // 0x47a2ac: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x47a2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_47a2b0:
    // 0x47a2b0: 0x97a2018e  lhu         $v0, 0x18E($sp)
    ctx->pc = 0x47a2b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 398)));
label_47a2b4:
    // 0x47a2b4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x47a2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47a2b8:
    // 0x47a2b8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x47a2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_47a2bc:
    // 0x47a2bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x47a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_47a2c0:
    // 0x47a2c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a2c4:
    // 0x47a2c4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x47a2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_47a2c8:
    // 0x47a2c8: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x47a2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a2cc:
    // 0x47a2cc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x47a2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a2d0:
    // 0x47a2d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47a2d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47a2d4:
    // 0x47a2d4: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x47a2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_47a2d8:
    // 0x47a2d8: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x47a2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a2dc:
    // 0x47a2dc: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x47a2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a2e0:
    // 0x47a2e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x47a2e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_47a2e4:
    // 0x47a2e4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x47a2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_47a2e8:
    // 0x47a2e8: 0xc7a1014c  lwc1        $f1, 0x14C($sp)
    ctx->pc = 0x47a2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a2ec:
    // 0x47a2ec: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x47a2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a2f0:
    // 0x47a2f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x47a2f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_47a2f4:
    // 0x47a2f4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x47a2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_47a2f8:
    // 0x47a2f8: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x47a2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a2fc:
    // 0x47a2fc: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x47a2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a300:
    // 0x47a300: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x47a300u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_47a304:
    // 0x47a304: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x47a304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_47a308:
    // 0x47a308: 0x97a2018c  lhu         $v0, 0x18C($sp)
    ctx->pc = 0x47a308u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 396)));
label_47a30c:
    // 0x47a30c: 0x3057ffff  andi        $s7, $v0, 0xFFFF
    ctx->pc = 0x47a30cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47a310:
    // 0x47a310: 0x171040  sll         $v0, $s7, 1
    ctx->pc = 0x47a310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
label_47a314:
    // 0x47a314: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x47a314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_47a318:
    // 0x47a318: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47a318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a31c:
    // 0x47a31c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x47a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_47a320:
    // 0x47a320: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x47a320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a324:
    // 0x47a324: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x47a324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a328:
    // 0x47a328: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47a328u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47a32c:
    // 0x47a32c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x47a32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_47a330:
    // 0x47a330: 0x97a2018c  lhu         $v0, 0x18C($sp)
    ctx->pc = 0x47a330u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 396)));
label_47a334:
    // 0x47a334: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x47a334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47a338:
    // 0x47a338: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x47a338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_47a33c:
    // 0x47a33c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47a33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a340:
    // 0x47a340: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47a340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a344:
    // 0x47a344: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x47a344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_47a348:
    // 0x47a348: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x47a348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a34c:
    // 0x47a34c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x47a34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a350:
    // 0x47a350: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47a350u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47a354:
    // 0x47a354: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x47a354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_47a358:
    // 0x47a358: 0x97a2018c  lhu         $v0, 0x18C($sp)
    ctx->pc = 0x47a358u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 396)));
label_47a35c:
    // 0x47a35c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x47a35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47a360:
    // 0x47a360: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x47a360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_47a364:
    // 0x47a364: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47a364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a368:
    // 0x47a368: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47a368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a36c:
    // 0x47a36c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x47a36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_47a370:
    // 0x47a370: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x47a370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a374:
    // 0x47a374: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x47a374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a378:
    // 0x47a378: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47a378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47a37c:
    // 0x47a37c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x47a37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_47a380:
    // 0x47a380: 0x97a5018c  lhu         $a1, 0x18C($sp)
    ctx->pc = 0x47a380u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 396)));
label_47a384:
    // 0x47a384: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x47a384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_47a388:
    // 0x47a388: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x47a388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_47a38c:
    // 0x47a38c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x47a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_47a390:
    // 0x47a390: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47a390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a394:
    // 0x47a394: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x47a394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_47a398:
    // 0x47a398: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x47a398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a39c:
    // 0x47a39c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x47a39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a3a0:
    // 0x47a3a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47a3a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47a3a4:
    // 0x47a3a4: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x47a3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_47a3a8:
    // 0x47a3a8: 0x97a2018c  lhu         $v0, 0x18C($sp)
    ctx->pc = 0x47a3a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 396)));
label_47a3ac:
    // 0x47a3ac: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x47a3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47a3b0:
    // 0x47a3b0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x47a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_47a3b4:
    // 0x47a3b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a3b8:
    // 0x47a3b8: 0x2b080  sll         $s6, $v0, 2
    ctx->pc = 0x47a3b8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a3bc:
    // 0x47a3bc: 0x2761021  addu        $v0, $s3, $s6
    ctx->pc = 0x47a3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
label_47a3c0:
    // 0x47a3c0: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x47a3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a3c4:
    // 0x47a3c4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x47a3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a3c8:
    // 0x47a3c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47a3c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47a3cc:
    // 0x47a3cc: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x47a3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_47a3d0:
    // 0x47a3d0: 0x97a2018c  lhu         $v0, 0x18C($sp)
    ctx->pc = 0x47a3d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 396)));
label_47a3d4:
    // 0x47a3d4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x47a3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47a3d8:
    // 0x47a3d8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x47a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_47a3dc:
    // 0x47a3dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a3e0:
    // 0x47a3e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47a3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a3e4:
    // 0x47a3e4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x47a3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_47a3e8:
    // 0x47a3e8: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x47a3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a3ec:
    // 0x47a3ec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x47a3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a3f0:
    // 0x47a3f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47a3f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47a3f4:
    // 0x47a3f4: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x47a3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_47a3f8:
    // 0x47a3f8: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x47a3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a3fc:
    // 0x47a3fc: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x47a3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a400:
    // 0x47a400: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x47a400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_47a404:
    // 0x47a404: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x47a404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_47a408:
    // 0x47a408: 0xc7a1014c  lwc1        $f1, 0x14C($sp)
    ctx->pc = 0x47a408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a40c:
    // 0x47a40c: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x47a40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a410:
    // 0x47a410: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x47a410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_47a414:
    // 0x47a414: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x47a414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_47a418:
    // 0x47a418: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x47a418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a41c:
    // 0x47a41c: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x47a41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a420:
    // 0x47a420: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x47a420u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_47a424:
    // 0x47a424: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x47a424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_47a428:
    // 0x47a428: 0x97a2018a  lhu         $v0, 0x18A($sp)
    ctx->pc = 0x47a428u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 394)));
label_47a42c:
    // 0x47a42c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x47a42cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47a430:
    // 0x47a430: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x47a430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_47a434:
    // 0x47a434: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47a434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a438:
    // 0x47a438: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47a438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a43c:
    // 0x47a43c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x47a43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_47a440:
    // 0x47a440: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x47a440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a444:
    // 0x47a444: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x47a444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a448:
    // 0x47a448: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47a448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47a44c:
    // 0x47a44c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x47a44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_47a450:
    // 0x47a450: 0x97a4018a  lhu         $a0, 0x18A($sp)
    ctx->pc = 0x47a450u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 394)));
label_47a454:
    // 0x47a454: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x47a454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_47a458:
    // 0x47a458: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x47a458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_47a45c:
    // 0x47a45c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x47a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a460:
    // 0x47a460: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x47a460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_47a464:
    // 0x47a464: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x47a464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_47a468:
    // 0x47a468: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x47a468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a46c:
    // 0x47a46c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x47a46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a470:
    // 0x47a470: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47a470u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47a474:
    // 0x47a474: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x47a474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_47a478:
    // 0x47a478: 0x97a2018a  lhu         $v0, 0x18A($sp)
    ctx->pc = 0x47a478u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 394)));
label_47a47c:
    // 0x47a47c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x47a47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47a480:
    // 0x47a480: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x47a480u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_47a484:
    // 0x47a484: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x47a484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_47a488:
    // 0x47a488: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47a488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a48c:
    // 0x47a48c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x47a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_47a490:
    // 0x47a490: 0xc7a10180  lwc1        $f1, 0x180($sp)
    ctx->pc = 0x47a490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a494:
    // 0x47a494: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x47a494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a498:
    // 0x47a498: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47a498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47a49c:
    // 0x47a49c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x47a49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_47a4a0:
    // 0x47a4a0: 0x97a2018a  lhu         $v0, 0x18A($sp)
    ctx->pc = 0x47a4a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 394)));
label_47a4a4:
    // 0x47a4a4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x47a4a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47a4a8:
    // 0x47a4a8: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x47a4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_47a4ac:
    // 0x47a4ac: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x47a4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_47a4b0:
    // 0x47a4b0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x47a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_47a4b4:
    // 0x47a4b4: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x47a4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_47a4b8:
    // 0x47a4b8: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x47a4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a4bc:
    // 0x47a4bc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x47a4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a4c0:
    // 0x47a4c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47a4c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47a4c4:
    // 0x47a4c4: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x47a4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_47a4c8:
    // 0x47a4c8: 0x97a2018a  lhu         $v0, 0x18A($sp)
    ctx->pc = 0x47a4c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 394)));
label_47a4cc:
    // 0x47a4cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x47a4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47a4d0:
    // 0x47a4d0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x47a4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_47a4d4:
    // 0x47a4d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x47a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_47a4d8:
    // 0x47a4d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a4dc:
    // 0x47a4dc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x47a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_47a4e0:
    // 0x47a4e0: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x47a4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a4e4:
    // 0x47a4e4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x47a4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a4e8:
    // 0x47a4e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47a4e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47a4ec:
    // 0x47a4ec: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x47a4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_47a4f0:
    // 0x47a4f0: 0x97a2018a  lhu         $v0, 0x18A($sp)
    ctx->pc = 0x47a4f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 394)));
label_47a4f4:
    // 0x47a4f4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x47a4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47a4f8:
    // 0x47a4f8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x47a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_47a4fc:
    // 0x47a4fc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x47a4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a500:
    // 0x47a500: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x47a500u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_47a504:
    // 0x47a504: 0x2653021  addu        $a2, $s3, $a1
    ctx->pc = 0x47a504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_47a508:
    // 0x47a508: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x47a508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a50c:
    // 0x47a50c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x47a50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a510:
    // 0x47a510: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x47a510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_47a514:
    // 0x47a514: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x47a514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_47a518:
    // 0x47a518: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x47a518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a51c:
    // 0x47a51c: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x47a51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a520:
    // 0x47a520: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x47a520u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_47a524:
    // 0x47a524: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x47a524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_47a528:
    // 0x47a528: 0xc7a1014c  lwc1        $f1, 0x14C($sp)
    ctx->pc = 0x47a528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a52c:
    // 0x47a52c: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x47a52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a530:
    // 0x47a530: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x47a530u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_47a534:
    // 0x47a534: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x47a534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_47a538:
    // 0x47a538: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x47a538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47a53c:
    // 0x47a53c: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x47a53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a540:
    // 0x47a540: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x47a540u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_47a544:
    // 0x47a544: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x47a544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_47a548:
    // 0x47a548: 0x1000001c  b           . + 4 + (0x1C << 2)
label_47a54c:
    if (ctx->pc == 0x47A54Cu) {
        ctx->pc = 0x47A550u;
        goto label_47a550;
    }
    ctx->pc = 0x47A548u;
    {
        const bool branch_taken_0x47a548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47a548) {
            ctx->pc = 0x47A5BCu;
            goto label_47a5bc;
        }
    }
    ctx->pc = 0x47A550u;
label_47a550:
    // 0x47a550: 0x97a2018e  lhu         $v0, 0x18E($sp)
    ctx->pc = 0x47a550u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 398)));
label_47a554:
    // 0x47a554: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x47a554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47a558:
    // 0x47a558: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x47a558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_47a55c:
    // 0x47a55c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x47a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_47a560:
    // 0x47a560: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47a560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a564:
    // 0x47a564: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x47a564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_47a568:
    // 0x47a568: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x47a568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_47a56c:
    // 0x47a56c: 0xc041d58  jal         func_107560
label_47a570:
    if (ctx->pc == 0x47A570u) {
        ctx->pc = 0x47A574u;
        goto label_47a574;
    }
    ctx->pc = 0x47A56Cu;
    SET_GPR_U32(ctx, 31, 0x47A574u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x47A56Cu, 0x47A574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47A574u;
label_47a574:
    // 0x47a574: 0x97a2018c  lhu         $v0, 0x18C($sp)
    ctx->pc = 0x47a574u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 396)));
label_47a578:
    // 0x47a578: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x47a578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47a57c:
    // 0x47a57c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x47a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_47a580:
    // 0x47a580: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47a580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a584:
    // 0x47a584: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47a584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a588:
    // 0x47a588: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x47a588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_47a58c:
    // 0x47a58c: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x47a58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_47a590:
    // 0x47a590: 0xc041d58  jal         func_107560
label_47a594:
    if (ctx->pc == 0x47A594u) {
        ctx->pc = 0x47A598u;
        goto label_47a598;
    }
    ctx->pc = 0x47A590u;
    SET_GPR_U32(ctx, 31, 0x47A598u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x47A590u, 0x47A598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47A598u;
label_47a598:
    // 0x47a598: 0x97a2018a  lhu         $v0, 0x18A($sp)
    ctx->pc = 0x47a598u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 394)));
label_47a59c:
    // 0x47a59c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x47a59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_47a5a0:
    // 0x47a5a0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x47a5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_47a5a4:
    // 0x47a5a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a5a8:
    // 0x47a5a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a5ac:
    // 0x47a5ac: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x47a5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_47a5b0:
    // 0x47a5b0: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x47a5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_47a5b4:
    // 0x47a5b4: 0xc041d58  jal         func_107560
label_47a5b8:
    if (ctx->pc == 0x47A5B8u) {
        ctx->pc = 0x47A5BCu;
        goto label_47a5bc;
    }
    ctx->pc = 0x47A5B4u;
    SET_GPR_U32(ctx, 31, 0x47A5BCu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x47A5B4u, 0x47A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47A5BCu;
label_47a5bc:
    // 0x47a5bc: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x47a5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a5c0:
    // 0x47a5c0: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x47a5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_47a5c4:
    // 0x47a5c4: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x47a5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a5c8:
    // 0x47a5c8: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x47a5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_47a5cc:
    // 0x47a5cc: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x47a5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a5d0:
    // 0x47a5d0: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x47a5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_47a5d4:
    // 0x47a5d4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x47a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_47a5d8:
    // 0x47a5d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x47a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_47a5dc:
    // 0x47a5dc: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x47a5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_47a5e0:
    // 0x47a5e0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x47a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_47a5e4:
    // 0x47a5e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a5e8:
    // 0x47a5e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a5ec:
    // 0x47a5ec: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x47a5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_47a5f0:
    // 0x47a5f0: 0x27a50128  addiu       $a1, $sp, 0x128
    ctx->pc = 0x47a5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_47a5f4:
    // 0x47a5f4: 0xc041d58  jal         func_107560
label_47a5f8:
    if (ctx->pc == 0x47A5F8u) {
        ctx->pc = 0x47A5FCu;
        goto label_47a5fc;
    }
    ctx->pc = 0x47A5F4u;
    SET_GPR_U32(ctx, 31, 0x47A5FCu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x47A5F4u, 0x47A5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47A5FCu;
label_47a5fc:
    // 0x47a5fc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x47a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_47a600:
    // 0x47a600: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x47a600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_47a604:
    // 0x47a604: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x47a604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_47a608:
    // 0x47a608: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x47a608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_47a60c:
    // 0x47a60c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47a60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a610:
    // 0x47a610: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47a610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a614:
    // 0x47a614: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x47a614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_47a618:
    // 0x47a618: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x47a618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_47a61c:
    // 0x47a61c: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x47a61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
label_47a620:
    // 0x47a620: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x47a620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_47a624:
    // 0x47a624: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x47a624u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_47a628:
    // 0x47a628: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x47a628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_47a62c:
    // 0x47a62c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x47a62cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_47a630:
    // 0x47a630: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x47a630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_47a634:
    // 0x47a634: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x47a634u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_47a638:
    // 0x47a638: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x47a638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_47a63c:
    // 0x47a63c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x47a63cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_47a640:
    // 0x47a640: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x47a640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_47a644:
    // 0x47a644: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x47a644u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_47a648:
    // 0x47a648: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x47a648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_47a64c:
    // 0x47a64c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x47a64cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_47a650:
    // 0x47a650: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x47a650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_47a654:
    // 0x47a654: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x47a654u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_47a658:
    // 0x47a658: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x47a658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_47a65c:
    // 0x47a65c: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x47a65cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_47a660:
    // 0x47a660: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x47a660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a664:
    // 0x47a664: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x47a664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_47a668:
    // 0x47a668: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x47a668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a66c:
    // 0x47a66c: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x47a66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_47a670:
    // 0x47a670: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x47a670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a674:
    // 0x47a674: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x47a674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_47a678:
    // 0x47a678: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x47a678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_47a67c:
    // 0x47a67c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x47a67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_47a680:
    // 0x47a680: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x47a680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_47a684:
    // 0x47a684: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x47a684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_47a688:
    // 0x47a688: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x47a688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_47a68c:
    // 0x47a68c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47a68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a690:
    // 0x47a690: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47a690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a694:
    // 0x47a694: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x47a694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_47a698:
    // 0x47a698: 0x27a50118  addiu       $a1, $sp, 0x118
    ctx->pc = 0x47a698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_47a69c:
    // 0x47a69c: 0xc041d58  jal         func_107560
label_47a6a0:
    if (ctx->pc == 0x47A6A0u) {
        ctx->pc = 0x47A6A4u;
        goto label_47a6a4;
    }
    ctx->pc = 0x47A69Cu;
    SET_GPR_U32(ctx, 31, 0x47A6A4u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x47A69Cu, 0x47A6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47A6A4u;
label_47a6a4:
    // 0x47a6a4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x47a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_47a6a8:
    // 0x47a6a8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x47a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_47a6ac:
    // 0x47a6ac: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x47a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_47a6b0:
    // 0x47a6b0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x47a6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_47a6b4:
    // 0x47a6b4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x47a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_47a6b8:
    // 0x47a6b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a6bc:
    // 0x47a6bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a6c0:
    // 0x47a6c0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x47a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_47a6c4:
    // 0x47a6c4: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x47a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_47a6c8:
    // 0x47a6c8: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x47a6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
label_47a6cc:
    // 0x47a6cc: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x47a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_47a6d0:
    // 0x47a6d0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x47a6d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_47a6d4:
    // 0x47a6d4: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x47a6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_47a6d8:
    // 0x47a6d8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x47a6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_47a6dc:
    // 0x47a6dc: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x47a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_47a6e0:
    // 0x47a6e0: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x47a6e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_47a6e4:
    // 0x47a6e4: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x47a6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_47a6e8:
    // 0x47a6e8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x47a6e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_47a6ec:
    // 0x47a6ec: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x47a6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_47a6f0:
    // 0x47a6f0: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x47a6f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_47a6f4:
    // 0x47a6f4: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x47a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_47a6f8:
    // 0x47a6f8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x47a6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_47a6fc:
    // 0x47a6fc: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x47a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_47a700:
    // 0x47a700: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x47a700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_47a704:
    // 0x47a704: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x47a704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_47a708:
    // 0x47a708: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x47a708u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_47a70c:
    // 0x47a70c: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x47a70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a710:
    // 0x47a710: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x47a710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_47a714:
    // 0x47a714: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x47a714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a718:
    // 0x47a718: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x47a718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_47a71c:
    // 0x47a71c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x47a71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a720:
    // 0x47a720: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x47a720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_47a724:
    // 0x47a724: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x47a724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_47a728:
    // 0x47a728: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x47a728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_47a72c:
    // 0x47a72c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x47a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_47a730:
    // 0x47a730: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x47a730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_47a734:
    // 0x47a734: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x47a734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_47a738:
    // 0x47a738: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x47a738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_47a73c:
    // 0x47a73c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47a73cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a740:
    // 0x47a740: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x47a740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_47a744:
    // 0x47a744: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x47a744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_47a748:
    // 0x47a748: 0xc041d58  jal         func_107560
label_47a74c:
    if (ctx->pc == 0x47A74Cu) {
        ctx->pc = 0x47A750u;
        goto label_47a750;
    }
    ctx->pc = 0x47A748u;
    SET_GPR_U32(ctx, 31, 0x47A750u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x47A748u, 0x47A750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47A750u;
label_47a750:
    // 0x47a750: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x47a750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_47a754:
    // 0x47a754: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x47a754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_47a758:
    // 0x47a758: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x47a758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_47a75c:
    // 0x47a75c: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x47a75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_47a760:
    // 0x47a760: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x47a760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_47a764:
    // 0x47a764: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47a764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a768:
    // 0x47a768: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x47a768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a76c:
    // 0x47a76c: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x47a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_47a770:
    // 0x47a770: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x47a770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_47a774:
    // 0x47a774: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x47a774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
label_47a778:
    // 0x47a778: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x47a778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_47a77c:
    // 0x47a77c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x47a77cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_47a780:
    // 0x47a780: 0x8fb50158  lw          $s5, 0x158($sp)
    ctx->pc = 0x47a780u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_47a784:
    // 0x47a784: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x47a784u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_47a788:
    // 0x47a788: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x47a788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_47a78c:
    // 0x47a78c: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x47a78cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_47a790:
    // 0x47a790: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x47a790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_47a794:
    // 0x47a794: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x47a794u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_47a798:
    // 0x47a798: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x47a798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_47a79c:
    // 0x47a79c: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x47a79cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_47a7a0:
    // 0x47a7a0: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x47a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_47a7a4:
    // 0x47a7a4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x47a7a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_47a7a8:
    // 0x47a7a8: 0x8fb501a0  lw          $s5, 0x1A0($sp)
    ctx->pc = 0x47a7a8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_47a7ac:
    // 0x47a7ac: 0x92a20003  lbu         $v0, 0x3($s5)
    ctx->pc = 0x47a7acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
label_47a7b0:
    // 0x47a7b0: 0x8fb50158  lw          $s5, 0x158($sp)
    ctx->pc = 0x47a7b0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_47a7b4:
    // 0x47a7b4: 0xa2a20003  sb          $v0, 0x3($s5)
    ctx->pc = 0x47a7b4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3), (uint8_t)GPR_U32(ctx, 2));
label_47a7b8:
    // 0x47a7b8: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x47a7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a7bc:
    // 0x47a7bc: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x47a7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_47a7c0:
    // 0x47a7c0: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x47a7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a7c4:
    // 0x47a7c4: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x47a7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_47a7c8:
    // 0x47a7c8: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x47a7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a7cc:
    // 0x47a7cc: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x47a7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_47a7d0:
    // 0x47a7d0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x47a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_47a7d4:
    // 0x47a7d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x47a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_47a7d8:
    // 0x47a7d8: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x47a7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_47a7dc:
    // 0x47a7dc: 0x24a60003  addiu       $a2, $a1, 0x3
    ctx->pc = 0x47a7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_47a7e0:
    // 0x47a7e0: 0x638c0  sll         $a3, $a2, 3
    ctx->pc = 0x47a7e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_47a7e4:
    // 0x47a7e4: 0xe64021  addu        $t0, $a3, $a2
    ctx->pc = 0x47a7e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_47a7e8:
    // 0x47a7e8: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x47a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_47a7ec:
    // 0x47a7ec: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x47a7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_47a7f0:
    // 0x47a7f0: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x47a7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_47a7f4:
    // 0x47a7f4: 0xc041d58  jal         func_107560
label_47a7f8:
    if (ctx->pc == 0x47A7F8u) {
        ctx->pc = 0x47A7FCu;
        goto label_47a7fc;
    }
    ctx->pc = 0x47A7F4u;
    SET_GPR_U32(ctx, 31, 0x47A7FCu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x47A7F4u, 0x47A7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47A7FCu;
label_47a7fc:
    // 0x47a7fc: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x47a7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_47a800:
    // 0x47a800: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x47a800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_47a804:
    // 0x47a804: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x47a804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_47a808:
    // 0x47a808: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x47a808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_47a80c:
    // 0x47a80c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x47a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_47a810:
    // 0x47a810: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x47a810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a814:
    // 0x47a814: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x47a814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_47a818:
    // 0x47a818: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x47a818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_47a81c:
    // 0x47a81c: 0x245e000c  addiu       $fp, $v0, 0xC
    ctx->pc = 0x47a81cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_47a820:
    // 0x47a820: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x47a820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_47a824:
    // 0x47a824: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x47a824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_47a828:
    // 0x47a828: 0xa3c20000  sb          $v0, 0x0($fp)
    ctx->pc = 0x47a828u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 2));
label_47a82c:
    // 0x47a82c: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x47a82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_47a830:
    // 0x47a830: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x47a830u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_47a834:
    // 0x47a834: 0xa3c20001  sb          $v0, 0x1($fp)
    ctx->pc = 0x47a834u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 1), (uint8_t)GPR_U32(ctx, 2));
label_47a838:
    // 0x47a838: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x47a838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_47a83c:
    // 0x47a83c: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x47a83cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_47a840:
    // 0x47a840: 0xa3c20002  sb          $v0, 0x2($fp)
    ctx->pc = 0x47a840u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 2), (uint8_t)GPR_U32(ctx, 2));
label_47a844:
    // 0x47a844: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x47a844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_47a848:
    // 0x47a848: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x47a848u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_47a84c:
    // 0x47a84c: 0xa3c20003  sb          $v0, 0x3($fp)
    ctx->pc = 0x47a84cu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 3), (uint8_t)GPR_U32(ctx, 2));
label_47a850:
    // 0x47a850: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x47a850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a854:
    // 0x47a854: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x47a854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_47a858:
    // 0x47a858: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x47a858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a85c:
    // 0x47a85c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x47a85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_47a860:
    // 0x47a860: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x47a860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a864:
    // 0x47a864: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x47a864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_47a868:
    // 0x47a868: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x47a868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_47a86c:
    // 0x47a86c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x47a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_47a870:
    // 0x47a870: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x47a870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_47a874:
    // 0x47a874: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x47a874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_47a878:
    // 0x47a878: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x47a878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_47a87c:
    // 0x47a87c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a880:
    // 0x47a880: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47a880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a884:
    // 0x47a884: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x47a884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_47a888:
    // 0x47a888: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x47a888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_47a88c:
    // 0x47a88c: 0xc041d58  jal         func_107560
label_47a890:
    if (ctx->pc == 0x47A890u) {
        ctx->pc = 0x47A894u;
        goto label_47a894;
    }
    ctx->pc = 0x47A88Cu;
    SET_GPR_U32(ctx, 31, 0x47A894u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x47A88Cu, 0x47A894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47A894u;
label_47a894:
    // 0x47a894: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x47a894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_47a898:
    // 0x47a898: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x47a898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_47a89c:
    // 0x47a89c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x47a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_47a8a0:
    // 0x47a8a0: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x47a8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_47a8a4:
    // 0x47a8a4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x47a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_47a8a8:
    // 0x47a8a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a8ac:
    // 0x47a8ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a8b0:
    // 0x47a8b0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x47a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_47a8b4:
    // 0x47a8b4: 0x2457000c  addiu       $s7, $v0, 0xC
    ctx->pc = 0x47a8b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_47a8b8:
    // 0x47a8b8: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x47a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_47a8bc:
    // 0x47a8bc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x47a8bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_47a8c0:
    // 0x47a8c0: 0xa2e20000  sb          $v0, 0x0($s7)
    ctx->pc = 0x47a8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 2));
label_47a8c4:
    // 0x47a8c4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x47a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_47a8c8:
    // 0x47a8c8: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x47a8c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_47a8cc:
    // 0x47a8cc: 0xa2e20001  sb          $v0, 0x1($s7)
    ctx->pc = 0x47a8ccu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 1), (uint8_t)GPR_U32(ctx, 2));
label_47a8d0:
    // 0x47a8d0: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x47a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_47a8d4:
    // 0x47a8d4: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x47a8d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_47a8d8:
    // 0x47a8d8: 0xa2e30002  sb          $v1, 0x2($s7)
    ctx->pc = 0x47a8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 2), (uint8_t)GPR_U32(ctx, 3));
label_47a8dc:
    // 0x47a8dc: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x47a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_47a8e0:
    // 0x47a8e0: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x47a8e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_47a8e4:
    // 0x47a8e4: 0xa2e20003  sb          $v0, 0x3($s7)
    ctx->pc = 0x47a8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 3), (uint8_t)GPR_U32(ctx, 2));
label_47a8e8:
    // 0x47a8e8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x47a8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a8ec:
    // 0x47a8ec: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x47a8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_47a8f0:
    // 0x47a8f0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x47a8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a8f4:
    // 0x47a8f4: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x47a8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_47a8f8:
    // 0x47a8f8: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x47a8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47a8fc:
    // 0x47a8fc: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x47a8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_47a900:
    // 0x47a900: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x47a900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_47a904:
    // 0x47a904: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x47a904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_47a908:
    // 0x47a908: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x47a908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_47a90c:
    // 0x47a90c: 0x24430005  addiu       $v1, $v0, 0x5
    ctx->pc = 0x47a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_47a910:
    // 0x47a910: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x47a910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_47a914:
    // 0x47a914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47a914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a918:
    // 0x47a918: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47a918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a91c:
    // 0x47a91c: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x47a91cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_47a920:
    // 0x47a920: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x47a920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_47a924:
    // 0x47a924: 0xc041d58  jal         func_107560
label_47a928:
    if (ctx->pc == 0x47A928u) {
        ctx->pc = 0x47A92Cu;
        goto label_47a92c;
    }
    ctx->pc = 0x47A924u;
    SET_GPR_U32(ctx, 31, 0x47A92Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x47A924u, 0x47A92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47A92Cu;
label_47a92c:
    // 0x47a92c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x47a92cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_47a930:
    // 0x47a930: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x47a930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_47a934:
    // 0x47a934: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x47a934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_47a938:
    // 0x47a938: 0x24430005  addiu       $v1, $v0, 0x5
    ctx->pc = 0x47a938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_47a93c:
    // 0x47a93c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x47a93cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_47a940:
    // 0x47a940: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x47a940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a944:
    // 0x47a944: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x47a944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_47a948:
    // 0x47a948: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x47a948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_47a94c:
    // 0x47a94c: 0x2456000c  addiu       $s6, $v0, 0xC
    ctx->pc = 0x47a94cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_47a950:
    // 0x47a950: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x47a950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_47a954:
    // 0x47a954: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x47a954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_47a958:
    // 0x47a958: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x47a958u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
label_47a95c:
    // 0x47a95c: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x47a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_47a960:
    // 0x47a960: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x47a960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_47a964:
    // 0x47a964: 0xa2c20001  sb          $v0, 0x1($s6)
    ctx->pc = 0x47a964u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 2));
label_47a968:
    // 0x47a968: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x47a968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_47a96c:
    // 0x47a96c: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x47a96cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_47a970:
    // 0x47a970: 0xa2c20002  sb          $v0, 0x2($s6)
    ctx->pc = 0x47a970u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2), (uint8_t)GPR_U32(ctx, 2));
label_47a974:
    // 0x47a974: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x47a974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_47a978:
    // 0x47a978: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x47a978u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_47a97c:
    // 0x47a97c: 0xa2c20003  sb          $v0, 0x3($s6)
    ctx->pc = 0x47a97cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 2));
label_47a980:
    // 0x47a980: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x47a980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_47a984:
    // 0x47a984: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x47a984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_47a988:
    // 0x47a988: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x47a988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
label_47a98c:
    // 0x47a98c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x47a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_47a990:
    // 0x47a990: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47a990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47a994:
    // 0x47a994: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x47a994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_47a998:
    // 0x47a998: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x47a998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_47a99c:
    // 0x47a99c: 0x1440fe07  bnez        $v0, . + 4 + (-0x1F9 << 2)
label_47a9a0:
    if (ctx->pc == 0x47A9A0u) {
        ctx->pc = 0x47A9A4u;
        goto label_47a9a4;
    }
    ctx->pc = 0x47A99Cu;
    {
        const bool branch_taken_0x47a99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47a99c) {
            ctx->pc = 0x47A1BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47a1bc;
        }
    }
    ctx->pc = 0x47A9A4u;
label_47a9a4:
    // 0x47a9a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x47a9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47a9a8:
    // 0x47a9a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47a9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47a9ac:
    // 0x47a9ac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x47a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_47a9b0:
    // 0x47a9b0: 0x8c43e8a0  lw          $v1, -0x1760($v0)
    ctx->pc = 0x47a9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_47a9b4:
    // 0x47a9b4: 0x60f809  jalr        $v1
label_47a9b8:
    if (ctx->pc == 0x47A9B8u) {
        ctx->pc = 0x47A9BCu;
        goto label_47a9bc;
    }
    ctx->pc = 0x47A9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x47A9BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A9B4u, 0x47A9BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47A9BCu;
label_47a9bc:
    // 0x47a9bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x47a9bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47a9c0:
    // 0x47a9c0: 0x8fa30174  lw          $v1, 0x174($sp)
    ctx->pc = 0x47a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_47a9c4:
    // 0x47a9c4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x47a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_47a9c8:
    // 0x47a9c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47a9cc:
    // 0x47a9cc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x47a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_47a9d0:
    // 0x47a9d0: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x47a9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
label_47a9d4:
    // 0x47a9d4: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x47a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_47a9d8:
    // 0x47a9d8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x47a9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_47a9dc:
    // 0x47a9dc: 0xc106784  jal         func_419E10
label_47a9e0:
    if (ctx->pc == 0x47A9E0u) {
        ctx->pc = 0x47A9E4u;
        goto label_47a9e4;
    }
    ctx->pc = 0x47A9DCu;
    SET_GPR_U32(ctx, 31, 0x47A9E4u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x47A9DCu, 0x47A9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47A9E4u;
label_47a9e4:
    // 0x47a9e4: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x47a9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_47a9e8:
    // 0x47a9e8: 0x10000016  b           . + 4 + (0x16 << 2)
label_47a9ec:
    if (ctx->pc == 0x47A9ECu) {
        ctx->pc = 0x47A9F0u;
        goto label_47a9f0;
    }
    ctx->pc = 0x47A9E8u;
    {
        const bool branch_taken_0x47a9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47a9e8) {
            ctx->pc = 0x47AA44u;
            goto label_47aa44;
        }
    }
    ctx->pc = 0x47A9F0u;
label_47a9f0:
    // 0x47a9f0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x47a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_47a9f4:
    // 0x47a9f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x47a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_47a9f8:
    // 0x47a9f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x47a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47a9fc:
    // 0x47a9fc: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x47a9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_47aa00:
    // 0x47aa00: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x47aa00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_47aa04:
    // 0x47aa04: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x47aa04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_47aa08:
    // 0x47aa08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47aa08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47aa0c:
    // 0x47aa0c: 0xc1111fe  jal         func_4447F8
label_47aa10:
    if (ctx->pc == 0x47AA10u) {
        ctx->pc = 0x47AA14u;
        goto label_47aa14;
    }
    ctx->pc = 0x47AA0Cu;
    SET_GPR_U32(ctx, 31, 0x47AA14u);
    ctx->pc = 0x4447F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4447F8u, 0x47AA0Cu, 0x47AA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47AA14u;
label_47aa14:
    // 0x47aa14: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_47aa18:
    if (ctx->pc == 0x47AA18u) {
        ctx->pc = 0x47AA1Cu;
        goto label_47aa1c;
    }
    ctx->pc = 0x47AA14u;
    {
        const bool branch_taken_0x47aa14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47aa14) {
            ctx->pc = 0x47AA30u;
            goto label_47aa30;
        }
    }
    ctx->pc = 0x47AA1Cu;
label_47aa1c:
    // 0x47aa1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x47aa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47aa20:
    // 0x47aa20: 0xc1110a8  jal         func_4442A0
label_47aa24:
    if (ctx->pc == 0x47AA24u) {
        ctx->pc = 0x47AA28u;
        goto label_47aa28;
    }
    ctx->pc = 0x47AA20u;
    SET_GPR_U32(ctx, 31, 0x47AA28u);
    ctx->pc = 0x4442A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4442A0u, 0x47AA20u, 0x47AA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47AA28u;
label_47aa28:
    // 0x47aa28: 0xc111228  jal         func_4448A0
label_47aa2c:
    if (ctx->pc == 0x47AA2Cu) {
        ctx->pc = 0x47AA30u;
        goto label_47aa30;
    }
    ctx->pc = 0x47AA28u;
    SET_GPR_U32(ctx, 31, 0x47AA30u);
    ctx->pc = 0x4448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4448A0u, 0x47AA28u, 0x47AA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47AA30u;
label_47aa30:
    // 0x47aa30: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x47aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_47aa34:
    // 0x47aa34: 0x2462fc18  addiu       $v0, $v1, -0x3E8
    ctx->pc = 0x47aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966296));
label_47aa38:
    // 0x47aa38: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x47aa38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
label_47aa3c:
    // 0x47aa3c: 0x260203e8  addiu       $v0, $s0, 0x3E8
    ctx->pc = 0x47aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1000));
label_47aa40:
    // 0x47aa40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47aa40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47aa44:
    // 0x47aa44: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x47aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_47aa48:
    // 0x47aa48: 0x284103e9  slti        $at, $v0, 0x3E9
    ctx->pc = 0x47aa48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1001) ? 1 : 0);
label_47aa4c:
    // 0x47aa4c: 0x1020ffe8  beqz        $at, . + 4 + (-0x18 << 2)
label_47aa50:
    if (ctx->pc == 0x47AA50u) {
        ctx->pc = 0x47AA54u;
        goto label_47aa54;
    }
    ctx->pc = 0x47AA4Cu;
    {
        const bool branch_taken_0x47aa4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x47aa4c) {
            ctx->pc = 0x47A9F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47a9f0;
        }
    }
    ctx->pc = 0x47AA54u;
label_47aa54:
    // 0x47aa54: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x47aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_47aa58:
    // 0x47aa58: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x47aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_47aa5c:
    // 0x47aa5c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x47aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_47aa60:
    // 0x47aa60: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x47aa60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_47aa64:
    // 0x47aa64: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x47aa64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_47aa68:
    // 0x47aa68: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x47aa68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_47aa6c:
    // 0x47aa6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47aa6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47aa70:
    // 0x47aa70: 0xc1111fe  jal         func_4447F8
label_47aa74:
    if (ctx->pc == 0x47AA74u) {
        ctx->pc = 0x47AA78u;
        goto label_47aa78;
    }
    ctx->pc = 0x47AA70u;
    SET_GPR_U32(ctx, 31, 0x47AA78u);
    ctx->pc = 0x4447F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4447F8u, 0x47AA70u, 0x47AA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47AA78u;
label_47aa78:
    // 0x47aa78: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_47aa7c:
    if (ctx->pc == 0x47AA7Cu) {
        ctx->pc = 0x47AA80u;
        goto label_47aa80;
    }
    ctx->pc = 0x47AA78u;
    {
        const bool branch_taken_0x47aa78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47aa78) {
            ctx->pc = 0x47AA94u;
            goto label_47aa94;
        }
    }
    ctx->pc = 0x47AA80u;
label_47aa80:
    // 0x47aa80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x47aa80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47aa84:
    // 0x47aa84: 0xc1110a8  jal         func_4442A0
label_47aa88:
    if (ctx->pc == 0x47AA88u) {
        ctx->pc = 0x47AA8Cu;
        goto label_47aa8c;
    }
    ctx->pc = 0x47AA84u;
    SET_GPR_U32(ctx, 31, 0x47AA8Cu);
    ctx->pc = 0x4442A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4442A0u, 0x47AA84u, 0x47AA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47AA8Cu;
label_47aa8c:
    // 0x47aa8c: 0xc111228  jal         func_4448A0
label_47aa90:
    if (ctx->pc == 0x47AA90u) {
        ctx->pc = 0x47AA94u;
        goto label_47aa94;
    }
    ctx->pc = 0x47AA8Cu;
    SET_GPR_U32(ctx, 31, 0x47AA94u);
    ctx->pc = 0x4448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4448A0u, 0x47AA8Cu, 0x47AA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47AA94u;
label_47aa94:
    // 0x47aa94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x47aa94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47aa98:
    // 0x47aa98: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x47aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_47aa9c:
    // 0x47aa9c: 0x8c42e98c  lw          $v0, -0x1674($v0)
    ctx->pc = 0x47aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961548)));
label_47aaa0:
    // 0x47aaa0: 0x40f809  jalr        $v0
label_47aaa4:
    if (ctx->pc == 0x47AAA4u) {
        ctx->pc = 0x47AAA8u;
        goto label_47aaa8;
    }
    ctx->pc = 0x47AAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47AAA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47AAA0u, 0x47AAA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47AAA8u;
label_47aaa8:
    // 0x47aaa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x47aaa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47aaac:
    // 0x47aaac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x47aaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47aab0:
    // 0x47aab0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x47aab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47aab4:
    // 0x47aab4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x47aab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_47aab8:
    // 0x47aab8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x47aab8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_47aabc:
    // 0x47aabc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x47aabcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_47aac0:
    // 0x47aac0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x47aac0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_47aac4:
    // 0x47aac4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x47aac4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47aac8:
    // 0x47aac8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x47aac8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47aacc:
    // 0x47aacc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47aaccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47aad0:
    // 0x47aad0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47aad0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47aad4:
    // 0x47aad4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47aad4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47aad8:
    // 0x47aad8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47aad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47aadc:
    // 0x47aadc: 0x27bd01b0  addiu       $sp, $sp, 0x1B0
    ctx->pc = 0x47aadcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_47aae0:
    // 0x47aae0: 0x3e00008  jr          $ra
label_47aae4:
    if (ctx->pc == 0x47AAE4u) {
        ctx->pc = 0x47AAE8u;
        goto label_47aae8;
    }
    ctx->pc = 0x47AAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47AAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47AAE8u;
label_47aae8:
    // 0x47aae8: 0x0  nop
    ctx->pc = 0x47aae8u;
    // NOP
label_47aaec:
    // 0x47aaec: 0x0  nop
    ctx->pc = 0x47aaecu;
    // NOP
    ctx->pc = 0x47aaf0u;
}
