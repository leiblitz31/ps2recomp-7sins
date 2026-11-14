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

// Function: sub_00239F30
// Address: 0x239f30 - 0x23aae0
void sub_00239F30_0x239f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239F30_0x239f30");
#endif

    switch (ctx->pc) {
        case 0x239f30u: goto label_239f30;
        case 0x239f34u: goto label_239f34;
        case 0x239f38u: goto label_239f38;
        case 0x239f3cu: goto label_239f3c;
        case 0x239f40u: goto label_239f40;
        case 0x239f44u: goto label_239f44;
        case 0x239f48u: goto label_239f48;
        case 0x239f4cu: goto label_239f4c;
        case 0x239f50u: goto label_239f50;
        case 0x239f54u: goto label_239f54;
        case 0x239f58u: goto label_239f58;
        case 0x239f5cu: goto label_239f5c;
        case 0x239f60u: goto label_239f60;
        case 0x239f64u: goto label_239f64;
        case 0x239f68u: goto label_239f68;
        case 0x239f6cu: goto label_239f6c;
        case 0x239f70u: goto label_239f70;
        case 0x239f74u: goto label_239f74;
        case 0x239f78u: goto label_239f78;
        case 0x239f7cu: goto label_239f7c;
        case 0x239f80u: goto label_239f80;
        case 0x239f84u: goto label_239f84;
        case 0x239f88u: goto label_239f88;
        case 0x239f8cu: goto label_239f8c;
        case 0x239f90u: goto label_239f90;
        case 0x239f94u: goto label_239f94;
        case 0x239f98u: goto label_239f98;
        case 0x239f9cu: goto label_239f9c;
        case 0x239fa0u: goto label_239fa0;
        case 0x239fa4u: goto label_239fa4;
        case 0x239fa8u: goto label_239fa8;
        case 0x239facu: goto label_239fac;
        case 0x239fb0u: goto label_239fb0;
        case 0x239fb4u: goto label_239fb4;
        case 0x239fb8u: goto label_239fb8;
        case 0x239fbcu: goto label_239fbc;
        case 0x239fc0u: goto label_239fc0;
        case 0x239fc4u: goto label_239fc4;
        case 0x239fc8u: goto label_239fc8;
        case 0x239fccu: goto label_239fcc;
        case 0x239fd0u: goto label_239fd0;
        case 0x239fd4u: goto label_239fd4;
        case 0x239fd8u: goto label_239fd8;
        case 0x239fdcu: goto label_239fdc;
        case 0x239fe0u: goto label_239fe0;
        case 0x239fe4u: goto label_239fe4;
        case 0x239fe8u: goto label_239fe8;
        case 0x239fecu: goto label_239fec;
        case 0x239ff0u: goto label_239ff0;
        case 0x239ff4u: goto label_239ff4;
        case 0x239ff8u: goto label_239ff8;
        case 0x239ffcu: goto label_239ffc;
        case 0x23a000u: goto label_23a000;
        case 0x23a004u: goto label_23a004;
        case 0x23a008u: goto label_23a008;
        case 0x23a00cu: goto label_23a00c;
        case 0x23a010u: goto label_23a010;
        case 0x23a014u: goto label_23a014;
        case 0x23a018u: goto label_23a018;
        case 0x23a01cu: goto label_23a01c;
        case 0x23a020u: goto label_23a020;
        case 0x23a024u: goto label_23a024;
        case 0x23a028u: goto label_23a028;
        case 0x23a02cu: goto label_23a02c;
        case 0x23a030u: goto label_23a030;
        case 0x23a034u: goto label_23a034;
        case 0x23a038u: goto label_23a038;
        case 0x23a03cu: goto label_23a03c;
        case 0x23a040u: goto label_23a040;
        case 0x23a044u: goto label_23a044;
        case 0x23a048u: goto label_23a048;
        case 0x23a04cu: goto label_23a04c;
        case 0x23a050u: goto label_23a050;
        case 0x23a054u: goto label_23a054;
        case 0x23a058u: goto label_23a058;
        case 0x23a05cu: goto label_23a05c;
        case 0x23a060u: goto label_23a060;
        case 0x23a064u: goto label_23a064;
        case 0x23a068u: goto label_23a068;
        case 0x23a06cu: goto label_23a06c;
        case 0x23a070u: goto label_23a070;
        case 0x23a074u: goto label_23a074;
        case 0x23a078u: goto label_23a078;
        case 0x23a07cu: goto label_23a07c;
        case 0x23a080u: goto label_23a080;
        case 0x23a084u: goto label_23a084;
        case 0x23a088u: goto label_23a088;
        case 0x23a08cu: goto label_23a08c;
        case 0x23a090u: goto label_23a090;
        case 0x23a094u: goto label_23a094;
        case 0x23a098u: goto label_23a098;
        case 0x23a09cu: goto label_23a09c;
        case 0x23a0a0u: goto label_23a0a0;
        case 0x23a0a4u: goto label_23a0a4;
        case 0x23a0a8u: goto label_23a0a8;
        case 0x23a0acu: goto label_23a0ac;
        case 0x23a0b0u: goto label_23a0b0;
        case 0x23a0b4u: goto label_23a0b4;
        case 0x23a0b8u: goto label_23a0b8;
        case 0x23a0bcu: goto label_23a0bc;
        case 0x23a0c0u: goto label_23a0c0;
        case 0x23a0c4u: goto label_23a0c4;
        case 0x23a0c8u: goto label_23a0c8;
        case 0x23a0ccu: goto label_23a0cc;
        case 0x23a0d0u: goto label_23a0d0;
        case 0x23a0d4u: goto label_23a0d4;
        case 0x23a0d8u: goto label_23a0d8;
        case 0x23a0dcu: goto label_23a0dc;
        case 0x23a0e0u: goto label_23a0e0;
        case 0x23a0e4u: goto label_23a0e4;
        case 0x23a0e8u: goto label_23a0e8;
        case 0x23a0ecu: goto label_23a0ec;
        case 0x23a0f0u: goto label_23a0f0;
        case 0x23a0f4u: goto label_23a0f4;
        case 0x23a0f8u: goto label_23a0f8;
        case 0x23a0fcu: goto label_23a0fc;
        case 0x23a100u: goto label_23a100;
        case 0x23a104u: goto label_23a104;
        case 0x23a108u: goto label_23a108;
        case 0x23a10cu: goto label_23a10c;
        case 0x23a110u: goto label_23a110;
        case 0x23a114u: goto label_23a114;
        case 0x23a118u: goto label_23a118;
        case 0x23a11cu: goto label_23a11c;
        case 0x23a120u: goto label_23a120;
        case 0x23a124u: goto label_23a124;
        case 0x23a128u: goto label_23a128;
        case 0x23a12cu: goto label_23a12c;
        case 0x23a130u: goto label_23a130;
        case 0x23a134u: goto label_23a134;
        case 0x23a138u: goto label_23a138;
        case 0x23a13cu: goto label_23a13c;
        case 0x23a140u: goto label_23a140;
        case 0x23a144u: goto label_23a144;
        case 0x23a148u: goto label_23a148;
        case 0x23a14cu: goto label_23a14c;
        case 0x23a150u: goto label_23a150;
        case 0x23a154u: goto label_23a154;
        case 0x23a158u: goto label_23a158;
        case 0x23a15cu: goto label_23a15c;
        case 0x23a160u: goto label_23a160;
        case 0x23a164u: goto label_23a164;
        case 0x23a168u: goto label_23a168;
        case 0x23a16cu: goto label_23a16c;
        case 0x23a170u: goto label_23a170;
        case 0x23a174u: goto label_23a174;
        case 0x23a178u: goto label_23a178;
        case 0x23a17cu: goto label_23a17c;
        case 0x23a180u: goto label_23a180;
        case 0x23a184u: goto label_23a184;
        case 0x23a188u: goto label_23a188;
        case 0x23a18cu: goto label_23a18c;
        case 0x23a190u: goto label_23a190;
        case 0x23a194u: goto label_23a194;
        case 0x23a198u: goto label_23a198;
        case 0x23a19cu: goto label_23a19c;
        case 0x23a1a0u: goto label_23a1a0;
        case 0x23a1a4u: goto label_23a1a4;
        case 0x23a1a8u: goto label_23a1a8;
        case 0x23a1acu: goto label_23a1ac;
        case 0x23a1b0u: goto label_23a1b0;
        case 0x23a1b4u: goto label_23a1b4;
        case 0x23a1b8u: goto label_23a1b8;
        case 0x23a1bcu: goto label_23a1bc;
        case 0x23a1c0u: goto label_23a1c0;
        case 0x23a1c4u: goto label_23a1c4;
        case 0x23a1c8u: goto label_23a1c8;
        case 0x23a1ccu: goto label_23a1cc;
        case 0x23a1d0u: goto label_23a1d0;
        case 0x23a1d4u: goto label_23a1d4;
        case 0x23a1d8u: goto label_23a1d8;
        case 0x23a1dcu: goto label_23a1dc;
        case 0x23a1e0u: goto label_23a1e0;
        case 0x23a1e4u: goto label_23a1e4;
        case 0x23a1e8u: goto label_23a1e8;
        case 0x23a1ecu: goto label_23a1ec;
        case 0x23a1f0u: goto label_23a1f0;
        case 0x23a1f4u: goto label_23a1f4;
        case 0x23a1f8u: goto label_23a1f8;
        case 0x23a1fcu: goto label_23a1fc;
        case 0x23a200u: goto label_23a200;
        case 0x23a204u: goto label_23a204;
        case 0x23a208u: goto label_23a208;
        case 0x23a20cu: goto label_23a20c;
        case 0x23a210u: goto label_23a210;
        case 0x23a214u: goto label_23a214;
        case 0x23a218u: goto label_23a218;
        case 0x23a21cu: goto label_23a21c;
        case 0x23a220u: goto label_23a220;
        case 0x23a224u: goto label_23a224;
        case 0x23a228u: goto label_23a228;
        case 0x23a22cu: goto label_23a22c;
        case 0x23a230u: goto label_23a230;
        case 0x23a234u: goto label_23a234;
        case 0x23a238u: goto label_23a238;
        case 0x23a23cu: goto label_23a23c;
        case 0x23a240u: goto label_23a240;
        case 0x23a244u: goto label_23a244;
        case 0x23a248u: goto label_23a248;
        case 0x23a24cu: goto label_23a24c;
        case 0x23a250u: goto label_23a250;
        case 0x23a254u: goto label_23a254;
        case 0x23a258u: goto label_23a258;
        case 0x23a25cu: goto label_23a25c;
        case 0x23a260u: goto label_23a260;
        case 0x23a264u: goto label_23a264;
        case 0x23a268u: goto label_23a268;
        case 0x23a26cu: goto label_23a26c;
        case 0x23a270u: goto label_23a270;
        case 0x23a274u: goto label_23a274;
        case 0x23a278u: goto label_23a278;
        case 0x23a27cu: goto label_23a27c;
        case 0x23a280u: goto label_23a280;
        case 0x23a284u: goto label_23a284;
        case 0x23a288u: goto label_23a288;
        case 0x23a28cu: goto label_23a28c;
        case 0x23a290u: goto label_23a290;
        case 0x23a294u: goto label_23a294;
        case 0x23a298u: goto label_23a298;
        case 0x23a29cu: goto label_23a29c;
        case 0x23a2a0u: goto label_23a2a0;
        case 0x23a2a4u: goto label_23a2a4;
        case 0x23a2a8u: goto label_23a2a8;
        case 0x23a2acu: goto label_23a2ac;
        case 0x23a2b0u: goto label_23a2b0;
        case 0x23a2b4u: goto label_23a2b4;
        case 0x23a2b8u: goto label_23a2b8;
        case 0x23a2bcu: goto label_23a2bc;
        case 0x23a2c0u: goto label_23a2c0;
        case 0x23a2c4u: goto label_23a2c4;
        case 0x23a2c8u: goto label_23a2c8;
        case 0x23a2ccu: goto label_23a2cc;
        case 0x23a2d0u: goto label_23a2d0;
        case 0x23a2d4u: goto label_23a2d4;
        case 0x23a2d8u: goto label_23a2d8;
        case 0x23a2dcu: goto label_23a2dc;
        case 0x23a2e0u: goto label_23a2e0;
        case 0x23a2e4u: goto label_23a2e4;
        case 0x23a2e8u: goto label_23a2e8;
        case 0x23a2ecu: goto label_23a2ec;
        case 0x23a2f0u: goto label_23a2f0;
        case 0x23a2f4u: goto label_23a2f4;
        case 0x23a2f8u: goto label_23a2f8;
        case 0x23a2fcu: goto label_23a2fc;
        case 0x23a300u: goto label_23a300;
        case 0x23a304u: goto label_23a304;
        case 0x23a308u: goto label_23a308;
        case 0x23a30cu: goto label_23a30c;
        case 0x23a310u: goto label_23a310;
        case 0x23a314u: goto label_23a314;
        case 0x23a318u: goto label_23a318;
        case 0x23a31cu: goto label_23a31c;
        case 0x23a320u: goto label_23a320;
        case 0x23a324u: goto label_23a324;
        case 0x23a328u: goto label_23a328;
        case 0x23a32cu: goto label_23a32c;
        case 0x23a330u: goto label_23a330;
        case 0x23a334u: goto label_23a334;
        case 0x23a338u: goto label_23a338;
        case 0x23a33cu: goto label_23a33c;
        case 0x23a340u: goto label_23a340;
        case 0x23a344u: goto label_23a344;
        case 0x23a348u: goto label_23a348;
        case 0x23a34cu: goto label_23a34c;
        case 0x23a350u: goto label_23a350;
        case 0x23a354u: goto label_23a354;
        case 0x23a358u: goto label_23a358;
        case 0x23a35cu: goto label_23a35c;
        case 0x23a360u: goto label_23a360;
        case 0x23a364u: goto label_23a364;
        case 0x23a368u: goto label_23a368;
        case 0x23a36cu: goto label_23a36c;
        case 0x23a370u: goto label_23a370;
        case 0x23a374u: goto label_23a374;
        case 0x23a378u: goto label_23a378;
        case 0x23a37cu: goto label_23a37c;
        case 0x23a380u: goto label_23a380;
        case 0x23a384u: goto label_23a384;
        case 0x23a388u: goto label_23a388;
        case 0x23a38cu: goto label_23a38c;
        case 0x23a390u: goto label_23a390;
        case 0x23a394u: goto label_23a394;
        case 0x23a398u: goto label_23a398;
        case 0x23a39cu: goto label_23a39c;
        case 0x23a3a0u: goto label_23a3a0;
        case 0x23a3a4u: goto label_23a3a4;
        case 0x23a3a8u: goto label_23a3a8;
        case 0x23a3acu: goto label_23a3ac;
        case 0x23a3b0u: goto label_23a3b0;
        case 0x23a3b4u: goto label_23a3b4;
        case 0x23a3b8u: goto label_23a3b8;
        case 0x23a3bcu: goto label_23a3bc;
        case 0x23a3c0u: goto label_23a3c0;
        case 0x23a3c4u: goto label_23a3c4;
        case 0x23a3c8u: goto label_23a3c8;
        case 0x23a3ccu: goto label_23a3cc;
        case 0x23a3d0u: goto label_23a3d0;
        case 0x23a3d4u: goto label_23a3d4;
        case 0x23a3d8u: goto label_23a3d8;
        case 0x23a3dcu: goto label_23a3dc;
        case 0x23a3e0u: goto label_23a3e0;
        case 0x23a3e4u: goto label_23a3e4;
        case 0x23a3e8u: goto label_23a3e8;
        case 0x23a3ecu: goto label_23a3ec;
        case 0x23a3f0u: goto label_23a3f0;
        case 0x23a3f4u: goto label_23a3f4;
        case 0x23a3f8u: goto label_23a3f8;
        case 0x23a3fcu: goto label_23a3fc;
        case 0x23a400u: goto label_23a400;
        case 0x23a404u: goto label_23a404;
        case 0x23a408u: goto label_23a408;
        case 0x23a40cu: goto label_23a40c;
        case 0x23a410u: goto label_23a410;
        case 0x23a414u: goto label_23a414;
        case 0x23a418u: goto label_23a418;
        case 0x23a41cu: goto label_23a41c;
        case 0x23a420u: goto label_23a420;
        case 0x23a424u: goto label_23a424;
        case 0x23a428u: goto label_23a428;
        case 0x23a42cu: goto label_23a42c;
        case 0x23a430u: goto label_23a430;
        case 0x23a434u: goto label_23a434;
        case 0x23a438u: goto label_23a438;
        case 0x23a43cu: goto label_23a43c;
        case 0x23a440u: goto label_23a440;
        case 0x23a444u: goto label_23a444;
        case 0x23a448u: goto label_23a448;
        case 0x23a44cu: goto label_23a44c;
        case 0x23a450u: goto label_23a450;
        case 0x23a454u: goto label_23a454;
        case 0x23a458u: goto label_23a458;
        case 0x23a45cu: goto label_23a45c;
        case 0x23a460u: goto label_23a460;
        case 0x23a464u: goto label_23a464;
        case 0x23a468u: goto label_23a468;
        case 0x23a46cu: goto label_23a46c;
        case 0x23a470u: goto label_23a470;
        case 0x23a474u: goto label_23a474;
        case 0x23a478u: goto label_23a478;
        case 0x23a47cu: goto label_23a47c;
        case 0x23a480u: goto label_23a480;
        case 0x23a484u: goto label_23a484;
        case 0x23a488u: goto label_23a488;
        case 0x23a48cu: goto label_23a48c;
        case 0x23a490u: goto label_23a490;
        case 0x23a494u: goto label_23a494;
        case 0x23a498u: goto label_23a498;
        case 0x23a49cu: goto label_23a49c;
        case 0x23a4a0u: goto label_23a4a0;
        case 0x23a4a4u: goto label_23a4a4;
        case 0x23a4a8u: goto label_23a4a8;
        case 0x23a4acu: goto label_23a4ac;
        case 0x23a4b0u: goto label_23a4b0;
        case 0x23a4b4u: goto label_23a4b4;
        case 0x23a4b8u: goto label_23a4b8;
        case 0x23a4bcu: goto label_23a4bc;
        case 0x23a4c0u: goto label_23a4c0;
        case 0x23a4c4u: goto label_23a4c4;
        case 0x23a4c8u: goto label_23a4c8;
        case 0x23a4ccu: goto label_23a4cc;
        case 0x23a4d0u: goto label_23a4d0;
        case 0x23a4d4u: goto label_23a4d4;
        case 0x23a4d8u: goto label_23a4d8;
        case 0x23a4dcu: goto label_23a4dc;
        case 0x23a4e0u: goto label_23a4e0;
        case 0x23a4e4u: goto label_23a4e4;
        case 0x23a4e8u: goto label_23a4e8;
        case 0x23a4ecu: goto label_23a4ec;
        case 0x23a4f0u: goto label_23a4f0;
        case 0x23a4f4u: goto label_23a4f4;
        case 0x23a4f8u: goto label_23a4f8;
        case 0x23a4fcu: goto label_23a4fc;
        case 0x23a500u: goto label_23a500;
        case 0x23a504u: goto label_23a504;
        case 0x23a508u: goto label_23a508;
        case 0x23a50cu: goto label_23a50c;
        case 0x23a510u: goto label_23a510;
        case 0x23a514u: goto label_23a514;
        case 0x23a518u: goto label_23a518;
        case 0x23a51cu: goto label_23a51c;
        case 0x23a520u: goto label_23a520;
        case 0x23a524u: goto label_23a524;
        case 0x23a528u: goto label_23a528;
        case 0x23a52cu: goto label_23a52c;
        case 0x23a530u: goto label_23a530;
        case 0x23a534u: goto label_23a534;
        case 0x23a538u: goto label_23a538;
        case 0x23a53cu: goto label_23a53c;
        case 0x23a540u: goto label_23a540;
        case 0x23a544u: goto label_23a544;
        case 0x23a548u: goto label_23a548;
        case 0x23a54cu: goto label_23a54c;
        case 0x23a550u: goto label_23a550;
        case 0x23a554u: goto label_23a554;
        case 0x23a558u: goto label_23a558;
        case 0x23a55cu: goto label_23a55c;
        case 0x23a560u: goto label_23a560;
        case 0x23a564u: goto label_23a564;
        case 0x23a568u: goto label_23a568;
        case 0x23a56cu: goto label_23a56c;
        case 0x23a570u: goto label_23a570;
        case 0x23a574u: goto label_23a574;
        case 0x23a578u: goto label_23a578;
        case 0x23a57cu: goto label_23a57c;
        case 0x23a580u: goto label_23a580;
        case 0x23a584u: goto label_23a584;
        case 0x23a588u: goto label_23a588;
        case 0x23a58cu: goto label_23a58c;
        case 0x23a590u: goto label_23a590;
        case 0x23a594u: goto label_23a594;
        case 0x23a598u: goto label_23a598;
        case 0x23a59cu: goto label_23a59c;
        case 0x23a5a0u: goto label_23a5a0;
        case 0x23a5a4u: goto label_23a5a4;
        case 0x23a5a8u: goto label_23a5a8;
        case 0x23a5acu: goto label_23a5ac;
        case 0x23a5b0u: goto label_23a5b0;
        case 0x23a5b4u: goto label_23a5b4;
        case 0x23a5b8u: goto label_23a5b8;
        case 0x23a5bcu: goto label_23a5bc;
        case 0x23a5c0u: goto label_23a5c0;
        case 0x23a5c4u: goto label_23a5c4;
        case 0x23a5c8u: goto label_23a5c8;
        case 0x23a5ccu: goto label_23a5cc;
        case 0x23a5d0u: goto label_23a5d0;
        case 0x23a5d4u: goto label_23a5d4;
        case 0x23a5d8u: goto label_23a5d8;
        case 0x23a5dcu: goto label_23a5dc;
        case 0x23a5e0u: goto label_23a5e0;
        case 0x23a5e4u: goto label_23a5e4;
        case 0x23a5e8u: goto label_23a5e8;
        case 0x23a5ecu: goto label_23a5ec;
        case 0x23a5f0u: goto label_23a5f0;
        case 0x23a5f4u: goto label_23a5f4;
        case 0x23a5f8u: goto label_23a5f8;
        case 0x23a5fcu: goto label_23a5fc;
        case 0x23a600u: goto label_23a600;
        case 0x23a604u: goto label_23a604;
        case 0x23a608u: goto label_23a608;
        case 0x23a60cu: goto label_23a60c;
        case 0x23a610u: goto label_23a610;
        case 0x23a614u: goto label_23a614;
        case 0x23a618u: goto label_23a618;
        case 0x23a61cu: goto label_23a61c;
        case 0x23a620u: goto label_23a620;
        case 0x23a624u: goto label_23a624;
        case 0x23a628u: goto label_23a628;
        case 0x23a62cu: goto label_23a62c;
        case 0x23a630u: goto label_23a630;
        case 0x23a634u: goto label_23a634;
        case 0x23a638u: goto label_23a638;
        case 0x23a63cu: goto label_23a63c;
        case 0x23a640u: goto label_23a640;
        case 0x23a644u: goto label_23a644;
        case 0x23a648u: goto label_23a648;
        case 0x23a64cu: goto label_23a64c;
        case 0x23a650u: goto label_23a650;
        case 0x23a654u: goto label_23a654;
        case 0x23a658u: goto label_23a658;
        case 0x23a65cu: goto label_23a65c;
        case 0x23a660u: goto label_23a660;
        case 0x23a664u: goto label_23a664;
        case 0x23a668u: goto label_23a668;
        case 0x23a66cu: goto label_23a66c;
        case 0x23a670u: goto label_23a670;
        case 0x23a674u: goto label_23a674;
        case 0x23a678u: goto label_23a678;
        case 0x23a67cu: goto label_23a67c;
        case 0x23a680u: goto label_23a680;
        case 0x23a684u: goto label_23a684;
        case 0x23a688u: goto label_23a688;
        case 0x23a68cu: goto label_23a68c;
        case 0x23a690u: goto label_23a690;
        case 0x23a694u: goto label_23a694;
        case 0x23a698u: goto label_23a698;
        case 0x23a69cu: goto label_23a69c;
        case 0x23a6a0u: goto label_23a6a0;
        case 0x23a6a4u: goto label_23a6a4;
        case 0x23a6a8u: goto label_23a6a8;
        case 0x23a6acu: goto label_23a6ac;
        case 0x23a6b0u: goto label_23a6b0;
        case 0x23a6b4u: goto label_23a6b4;
        case 0x23a6b8u: goto label_23a6b8;
        case 0x23a6bcu: goto label_23a6bc;
        case 0x23a6c0u: goto label_23a6c0;
        case 0x23a6c4u: goto label_23a6c4;
        case 0x23a6c8u: goto label_23a6c8;
        case 0x23a6ccu: goto label_23a6cc;
        case 0x23a6d0u: goto label_23a6d0;
        case 0x23a6d4u: goto label_23a6d4;
        case 0x23a6d8u: goto label_23a6d8;
        case 0x23a6dcu: goto label_23a6dc;
        case 0x23a6e0u: goto label_23a6e0;
        case 0x23a6e4u: goto label_23a6e4;
        case 0x23a6e8u: goto label_23a6e8;
        case 0x23a6ecu: goto label_23a6ec;
        case 0x23a6f0u: goto label_23a6f0;
        case 0x23a6f4u: goto label_23a6f4;
        case 0x23a6f8u: goto label_23a6f8;
        case 0x23a6fcu: goto label_23a6fc;
        case 0x23a700u: goto label_23a700;
        case 0x23a704u: goto label_23a704;
        case 0x23a708u: goto label_23a708;
        case 0x23a70cu: goto label_23a70c;
        case 0x23a710u: goto label_23a710;
        case 0x23a714u: goto label_23a714;
        case 0x23a718u: goto label_23a718;
        case 0x23a71cu: goto label_23a71c;
        case 0x23a720u: goto label_23a720;
        case 0x23a724u: goto label_23a724;
        case 0x23a728u: goto label_23a728;
        case 0x23a72cu: goto label_23a72c;
        case 0x23a730u: goto label_23a730;
        case 0x23a734u: goto label_23a734;
        case 0x23a738u: goto label_23a738;
        case 0x23a73cu: goto label_23a73c;
        case 0x23a740u: goto label_23a740;
        case 0x23a744u: goto label_23a744;
        case 0x23a748u: goto label_23a748;
        case 0x23a74cu: goto label_23a74c;
        case 0x23a750u: goto label_23a750;
        case 0x23a754u: goto label_23a754;
        case 0x23a758u: goto label_23a758;
        case 0x23a75cu: goto label_23a75c;
        case 0x23a760u: goto label_23a760;
        case 0x23a764u: goto label_23a764;
        case 0x23a768u: goto label_23a768;
        case 0x23a76cu: goto label_23a76c;
        case 0x23a770u: goto label_23a770;
        case 0x23a774u: goto label_23a774;
        case 0x23a778u: goto label_23a778;
        case 0x23a77cu: goto label_23a77c;
        case 0x23a780u: goto label_23a780;
        case 0x23a784u: goto label_23a784;
        case 0x23a788u: goto label_23a788;
        case 0x23a78cu: goto label_23a78c;
        case 0x23a790u: goto label_23a790;
        case 0x23a794u: goto label_23a794;
        case 0x23a798u: goto label_23a798;
        case 0x23a79cu: goto label_23a79c;
        case 0x23a7a0u: goto label_23a7a0;
        case 0x23a7a4u: goto label_23a7a4;
        case 0x23a7a8u: goto label_23a7a8;
        case 0x23a7acu: goto label_23a7ac;
        case 0x23a7b0u: goto label_23a7b0;
        case 0x23a7b4u: goto label_23a7b4;
        case 0x23a7b8u: goto label_23a7b8;
        case 0x23a7bcu: goto label_23a7bc;
        case 0x23a7c0u: goto label_23a7c0;
        case 0x23a7c4u: goto label_23a7c4;
        case 0x23a7c8u: goto label_23a7c8;
        case 0x23a7ccu: goto label_23a7cc;
        case 0x23a7d0u: goto label_23a7d0;
        case 0x23a7d4u: goto label_23a7d4;
        case 0x23a7d8u: goto label_23a7d8;
        case 0x23a7dcu: goto label_23a7dc;
        case 0x23a7e0u: goto label_23a7e0;
        case 0x23a7e4u: goto label_23a7e4;
        case 0x23a7e8u: goto label_23a7e8;
        case 0x23a7ecu: goto label_23a7ec;
        case 0x23a7f0u: goto label_23a7f0;
        case 0x23a7f4u: goto label_23a7f4;
        case 0x23a7f8u: goto label_23a7f8;
        case 0x23a7fcu: goto label_23a7fc;
        case 0x23a800u: goto label_23a800;
        case 0x23a804u: goto label_23a804;
        case 0x23a808u: goto label_23a808;
        case 0x23a80cu: goto label_23a80c;
        case 0x23a810u: goto label_23a810;
        case 0x23a814u: goto label_23a814;
        case 0x23a818u: goto label_23a818;
        case 0x23a81cu: goto label_23a81c;
        case 0x23a820u: goto label_23a820;
        case 0x23a824u: goto label_23a824;
        case 0x23a828u: goto label_23a828;
        case 0x23a82cu: goto label_23a82c;
        case 0x23a830u: goto label_23a830;
        case 0x23a834u: goto label_23a834;
        case 0x23a838u: goto label_23a838;
        case 0x23a83cu: goto label_23a83c;
        case 0x23a840u: goto label_23a840;
        case 0x23a844u: goto label_23a844;
        case 0x23a848u: goto label_23a848;
        case 0x23a84cu: goto label_23a84c;
        case 0x23a850u: goto label_23a850;
        case 0x23a854u: goto label_23a854;
        case 0x23a858u: goto label_23a858;
        case 0x23a85cu: goto label_23a85c;
        case 0x23a860u: goto label_23a860;
        case 0x23a864u: goto label_23a864;
        case 0x23a868u: goto label_23a868;
        case 0x23a86cu: goto label_23a86c;
        case 0x23a870u: goto label_23a870;
        case 0x23a874u: goto label_23a874;
        case 0x23a878u: goto label_23a878;
        case 0x23a87cu: goto label_23a87c;
        case 0x23a880u: goto label_23a880;
        case 0x23a884u: goto label_23a884;
        case 0x23a888u: goto label_23a888;
        case 0x23a88cu: goto label_23a88c;
        case 0x23a890u: goto label_23a890;
        case 0x23a894u: goto label_23a894;
        case 0x23a898u: goto label_23a898;
        case 0x23a89cu: goto label_23a89c;
        case 0x23a8a0u: goto label_23a8a0;
        case 0x23a8a4u: goto label_23a8a4;
        case 0x23a8a8u: goto label_23a8a8;
        case 0x23a8acu: goto label_23a8ac;
        case 0x23a8b0u: goto label_23a8b0;
        case 0x23a8b4u: goto label_23a8b4;
        case 0x23a8b8u: goto label_23a8b8;
        case 0x23a8bcu: goto label_23a8bc;
        case 0x23a8c0u: goto label_23a8c0;
        case 0x23a8c4u: goto label_23a8c4;
        case 0x23a8c8u: goto label_23a8c8;
        case 0x23a8ccu: goto label_23a8cc;
        case 0x23a8d0u: goto label_23a8d0;
        case 0x23a8d4u: goto label_23a8d4;
        case 0x23a8d8u: goto label_23a8d8;
        case 0x23a8dcu: goto label_23a8dc;
        case 0x23a8e0u: goto label_23a8e0;
        case 0x23a8e4u: goto label_23a8e4;
        case 0x23a8e8u: goto label_23a8e8;
        case 0x23a8ecu: goto label_23a8ec;
        case 0x23a8f0u: goto label_23a8f0;
        case 0x23a8f4u: goto label_23a8f4;
        case 0x23a8f8u: goto label_23a8f8;
        case 0x23a8fcu: goto label_23a8fc;
        case 0x23a900u: goto label_23a900;
        case 0x23a904u: goto label_23a904;
        case 0x23a908u: goto label_23a908;
        case 0x23a90cu: goto label_23a90c;
        case 0x23a910u: goto label_23a910;
        case 0x23a914u: goto label_23a914;
        case 0x23a918u: goto label_23a918;
        case 0x23a91cu: goto label_23a91c;
        case 0x23a920u: goto label_23a920;
        case 0x23a924u: goto label_23a924;
        case 0x23a928u: goto label_23a928;
        case 0x23a92cu: goto label_23a92c;
        case 0x23a930u: goto label_23a930;
        case 0x23a934u: goto label_23a934;
        case 0x23a938u: goto label_23a938;
        case 0x23a93cu: goto label_23a93c;
        case 0x23a940u: goto label_23a940;
        case 0x23a944u: goto label_23a944;
        case 0x23a948u: goto label_23a948;
        case 0x23a94cu: goto label_23a94c;
        case 0x23a950u: goto label_23a950;
        case 0x23a954u: goto label_23a954;
        case 0x23a958u: goto label_23a958;
        case 0x23a95cu: goto label_23a95c;
        case 0x23a960u: goto label_23a960;
        case 0x23a964u: goto label_23a964;
        case 0x23a968u: goto label_23a968;
        case 0x23a96cu: goto label_23a96c;
        case 0x23a970u: goto label_23a970;
        case 0x23a974u: goto label_23a974;
        case 0x23a978u: goto label_23a978;
        case 0x23a97cu: goto label_23a97c;
        case 0x23a980u: goto label_23a980;
        case 0x23a984u: goto label_23a984;
        case 0x23a988u: goto label_23a988;
        case 0x23a98cu: goto label_23a98c;
        case 0x23a990u: goto label_23a990;
        case 0x23a994u: goto label_23a994;
        case 0x23a998u: goto label_23a998;
        case 0x23a99cu: goto label_23a99c;
        case 0x23a9a0u: goto label_23a9a0;
        case 0x23a9a4u: goto label_23a9a4;
        case 0x23a9a8u: goto label_23a9a8;
        case 0x23a9acu: goto label_23a9ac;
        case 0x23a9b0u: goto label_23a9b0;
        case 0x23a9b4u: goto label_23a9b4;
        case 0x23a9b8u: goto label_23a9b8;
        case 0x23a9bcu: goto label_23a9bc;
        case 0x23a9c0u: goto label_23a9c0;
        case 0x23a9c4u: goto label_23a9c4;
        case 0x23a9c8u: goto label_23a9c8;
        case 0x23a9ccu: goto label_23a9cc;
        case 0x23a9d0u: goto label_23a9d0;
        case 0x23a9d4u: goto label_23a9d4;
        case 0x23a9d8u: goto label_23a9d8;
        case 0x23a9dcu: goto label_23a9dc;
        case 0x23a9e0u: goto label_23a9e0;
        case 0x23a9e4u: goto label_23a9e4;
        case 0x23a9e8u: goto label_23a9e8;
        case 0x23a9ecu: goto label_23a9ec;
        case 0x23a9f0u: goto label_23a9f0;
        case 0x23a9f4u: goto label_23a9f4;
        case 0x23a9f8u: goto label_23a9f8;
        case 0x23a9fcu: goto label_23a9fc;
        case 0x23aa00u: goto label_23aa00;
        case 0x23aa04u: goto label_23aa04;
        case 0x23aa08u: goto label_23aa08;
        case 0x23aa0cu: goto label_23aa0c;
        case 0x23aa10u: goto label_23aa10;
        case 0x23aa14u: goto label_23aa14;
        case 0x23aa18u: goto label_23aa18;
        case 0x23aa1cu: goto label_23aa1c;
        case 0x23aa20u: goto label_23aa20;
        case 0x23aa24u: goto label_23aa24;
        case 0x23aa28u: goto label_23aa28;
        case 0x23aa2cu: goto label_23aa2c;
        case 0x23aa30u: goto label_23aa30;
        case 0x23aa34u: goto label_23aa34;
        case 0x23aa38u: goto label_23aa38;
        case 0x23aa3cu: goto label_23aa3c;
        case 0x23aa40u: goto label_23aa40;
        case 0x23aa44u: goto label_23aa44;
        case 0x23aa48u: goto label_23aa48;
        case 0x23aa4cu: goto label_23aa4c;
        case 0x23aa50u: goto label_23aa50;
        case 0x23aa54u: goto label_23aa54;
        case 0x23aa58u: goto label_23aa58;
        case 0x23aa5cu: goto label_23aa5c;
        case 0x23aa60u: goto label_23aa60;
        case 0x23aa64u: goto label_23aa64;
        case 0x23aa68u: goto label_23aa68;
        case 0x23aa6cu: goto label_23aa6c;
        case 0x23aa70u: goto label_23aa70;
        case 0x23aa74u: goto label_23aa74;
        case 0x23aa78u: goto label_23aa78;
        case 0x23aa7cu: goto label_23aa7c;
        case 0x23aa80u: goto label_23aa80;
        case 0x23aa84u: goto label_23aa84;
        case 0x23aa88u: goto label_23aa88;
        case 0x23aa8cu: goto label_23aa8c;
        case 0x23aa90u: goto label_23aa90;
        case 0x23aa94u: goto label_23aa94;
        case 0x23aa98u: goto label_23aa98;
        case 0x23aa9cu: goto label_23aa9c;
        case 0x23aaa0u: goto label_23aaa0;
        case 0x23aaa4u: goto label_23aaa4;
        case 0x23aaa8u: goto label_23aaa8;
        case 0x23aaacu: goto label_23aaac;
        case 0x23aab0u: goto label_23aab0;
        case 0x23aab4u: goto label_23aab4;
        case 0x23aab8u: goto label_23aab8;
        case 0x23aabcu: goto label_23aabc;
        case 0x23aac0u: goto label_23aac0;
        case 0x23aac4u: goto label_23aac4;
        case 0x23aac8u: goto label_23aac8;
        case 0x23aaccu: goto label_23aacc;
        case 0x23aad0u: goto label_23aad0;
        case 0x23aad4u: goto label_23aad4;
        case 0x23aad8u: goto label_23aad8;
        case 0x23aadcu: goto label_23aadc;
        default: break;
    }

    ctx->pc = 0x239f30u;

label_239f30:
    // 0x239f30: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x239f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
label_239f34:
    // 0x239f34: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x239f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_239f38:
    // 0x239f38: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x239f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_239f3c:
    // 0x239f3c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x239f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_239f40:
    // 0x239f40: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x239f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_239f44:
    // 0x239f44: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x239f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_239f48:
    // 0x239f48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x239f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_239f4c:
    // 0x239f4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x239f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_239f50:
    // 0x239f50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x239f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_239f54:
    // 0x239f54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x239f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_239f58:
    // 0x239f58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x239f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_239f5c:
    // 0x239f5c: 0xc12242c  jal         func_4890B0
label_239f60:
    if (ctx->pc == 0x239F60u) {
        ctx->pc = 0x239F64u;
        goto label_239f64;
    }
    ctx->pc = 0x239F5Cu;
    SET_GPR_U32(ctx, 31, 0x239F64u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x239F5Cu, 0x239F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F64u;
label_239f64:
    // 0x239f64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x239f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239f68:
    // 0x239f68: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x239f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_239f6c:
    // 0x239f6c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x239f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_239f70:
    // 0x239f70: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_239f74:
    if (ctx->pc == 0x239F74u) {
        ctx->pc = 0x239F78u;
        goto label_239f78;
    }
    ctx->pc = 0x239F70u;
    {
        const bool branch_taken_0x239f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x239f70) {
            ctx->pc = 0x239F98u;
            goto label_239f98;
        }
    }
    ctx->pc = 0x239F78u;
label_239f78:
    // 0x239f78: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x239f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_239f7c:
    // 0x239f7c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x239f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_239f80:
    // 0x239f80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x239f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_239f84:
    // 0x239f84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x239f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239f88:
    // 0x239f88: 0x0  nop
    ctx->pc = 0x239f88u;
    // NOP
label_239f8c:
    // 0x239f8c: 0x0  nop
    ctx->pc = 0x239f8cu;
    // NOP
label_239f90:
    // 0x239f90: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_239f94:
    if (ctx->pc == 0x239F94u) {
        ctx->pc = 0x239F98u;
        goto label_239f98;
    }
    ctx->pc = 0x239F90u;
    {
        const bool branch_taken_0x239f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239f90) {
            ctx->pc = 0x239F7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239f7c;
        }
    }
    ctx->pc = 0x239F98u;
label_239f98:
    // 0x239f98: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x239f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_239f9c:
    // 0x239f9c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x239f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_239fa0:
    // 0x239fa0: 0xafa20268  sw          $v0, 0x268($sp)
    ctx->pc = 0x239fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
label_239fa4:
    // 0x239fa4: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x239fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_239fa8:
    // 0x239fa8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x239fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_239fac:
    // 0x239fac: 0xafa2026c  sw          $v0, 0x26C($sp)
    ctx->pc = 0x239facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
label_239fb0:
    // 0x239fb0: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x239fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
label_239fb4:
    // 0x239fb4: 0x2484bcb0  addiu       $a0, $a0, -0x4350
    ctx->pc = 0x239fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950064));
label_239fb8:
    // 0x239fb8: 0xc107156  jal         func_41C558
label_239fbc:
    if (ctx->pc == 0x239FBCu) {
        ctx->pc = 0x239FC0u;
        goto label_239fc0;
    }
    ctx->pc = 0x239FB8u;
    SET_GPR_U32(ctx, 31, 0x239FC0u);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x239FB8u, 0x239FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FC0u;
label_239fc0:
    // 0x239fc0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x239fc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239fc4:
    // 0x239fc4: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x239fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
label_239fc8:
    // 0x239fc8: 0x2484bcd0  addiu       $a0, $a0, -0x4330
    ctx->pc = 0x239fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950096));
label_239fcc:
    // 0x239fcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239fd0:
    // 0x239fd0: 0xc107fa4  jal         func_41FE90
label_239fd4:
    if (ctx->pc == 0x239FD4u) {
        ctx->pc = 0x239FD8u;
        goto label_239fd8;
    }
    ctx->pc = 0x239FD0u;
    SET_GPR_U32(ctx, 31, 0x239FD8u);
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x239FD0u, 0x239FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FD8u;
label_239fd8:
    // 0x239fd8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x239fd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239fdc:
    // 0x239fdc: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x239fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
label_239fe0:
    // 0x239fe0: 0x2484bce8  addiu       $a0, $a0, -0x4318
    ctx->pc = 0x239fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950120));
label_239fe4:
    // 0x239fe4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239fe8:
    // 0x239fe8: 0xc107fa4  jal         func_41FE90
label_239fec:
    if (ctx->pc == 0x239FECu) {
        ctx->pc = 0x239FF0u;
        goto label_239ff0;
    }
    ctx->pc = 0x239FE8u;
    SET_GPR_U32(ctx, 31, 0x239FF0u);
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x239FE8u, 0x239FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FF0u;
label_239ff0:
    // 0x239ff0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x239ff0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239ff4:
    // 0x239ff4: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x239ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_239ff8:
    // 0x239ff8: 0x24c6bc18  addiu       $a2, $a2, -0x43E8
    ctx->pc = 0x239ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949912));
label_239ffc:
    // 0x239ffc: 0x27a50288  addiu       $a1, $sp, 0x288
    ctx->pc = 0x239ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
label_23a000:
    // 0x23a000: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x23a000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23a004:
    // 0x23a004: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x23a004u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_23a008:
    // 0x23a008: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x23a008u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_23a00c:
    // 0x23a00c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x23a00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_23a010:
    // 0x23a010: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x23a010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_23a014:
    // 0x23a014: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x23a014u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_23a018:
    // 0x23a018: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x23a018u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
label_23a01c:
    // 0x23a01c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x23a01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_23a020:
    // 0x23a020: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
label_23a024:
    if (ctx->pc == 0x23A024u) {
        ctx->pc = 0x23A028u;
        goto label_23a028;
    }
    ctx->pc = 0x23A020u;
    {
        const bool branch_taken_0x23a020 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x23a020) {
            ctx->pc = 0x23A004u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a004;
        }
    }
    ctx->pc = 0x23A028u;
label_23a028:
    // 0x23a028: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x23a028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_23a02c:
    // 0x23a02c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a02cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a030:
    // 0x23a030: 0x0  nop
    ctx->pc = 0x23a030u;
    // NOP
label_23a034:
    // 0x23a034: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23a034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_23a038:
    // 0x23a038: 0xe7a002d8  swc1        $f0, 0x2D8($sp)
    ctx->pc = 0x23a038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 728), bits); }
label_23a03c:
    // 0x23a03c: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x23a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_23a040:
    // 0x23a040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a044:
    // 0x23a044: 0x0  nop
    ctx->pc = 0x23a044u;
    // NOP
label_23a048:
    // 0x23a048: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23a048u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_23a04c:
    // 0x23a04c: 0xe7a002d4  swc1        $f0, 0x2D4($sp)
    ctx->pc = 0x23a04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 724), bits); }
label_23a050:
    // 0x23a050: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_23a054:
    if (ctx->pc == 0x23A054u) {
        ctx->pc = 0x23A058u;
        goto label_23a058;
    }
    ctx->pc = 0x23A050u;
    {
        const bool branch_taken_0x23a050 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a050) {
            ctx->pc = 0x23A068u;
            goto label_23a068;
        }
    }
    ctx->pc = 0x23A058u;
label_23a058:
    // 0x23a058: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x23a058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_23a05c:
    // 0x23a05c: 0xafa202a0  sw          $v0, 0x2A0($sp)
    ctx->pc = 0x23a05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 2));
label_23a060:
    // 0x23a060: 0x10000002  b           . + 4 + (0x2 << 2)
label_23a064:
    if (ctx->pc == 0x23A064u) {
        ctx->pc = 0x23A068u;
        goto label_23a068;
    }
    ctx->pc = 0x23A060u;
    {
        const bool branch_taken_0x23a060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a060) {
            ctx->pc = 0x23A06Cu;
            goto label_23a06c;
        }
    }
    ctx->pc = 0x23A068u;
label_23a068:
    // 0x23a068: 0xafa002a0  sw          $zero, 0x2A0($sp)
    ctx->pc = 0x23a068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 0));
label_23a06c:
    // 0x23a06c: 0x8fb202a0  lw          $s2, 0x2A0($sp)
    ctx->pc = 0x23a06cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_23a070:
    // 0x23a070: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_23a074:
    if (ctx->pc == 0x23A074u) {
        ctx->pc = 0x23A078u;
        goto label_23a078;
    }
    ctx->pc = 0x23A070u;
    {
        const bool branch_taken_0x23a070 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a070) {
            ctx->pc = 0x23A084u;
            goto label_23a084;
        }
    }
    ctx->pc = 0x23A078u;
label_23a078:
    // 0x23a078: 0x8e7e0000  lw          $fp, 0x0($s3)
    ctx->pc = 0x23a078u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_23a07c:
    // 0x23a07c: 0x10000002  b           . + 4 + (0x2 << 2)
label_23a080:
    if (ctx->pc == 0x23A080u) {
        ctx->pc = 0x23A084u;
        goto label_23a084;
    }
    ctx->pc = 0x23A07Cu;
    {
        const bool branch_taken_0x23a07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a07c) {
            ctx->pc = 0x23A088u;
            goto label_23a088;
        }
    }
    ctx->pc = 0x23A084u;
label_23a084:
    // 0x23a084: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x23a084u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a088:
    // 0x23a088: 0xafbe02c0  sw          $fp, 0x2C0($sp)
    ctx->pc = 0x23a088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 30));
label_23a08c:
    // 0x23a08c: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_23a090:
    if (ctx->pc == 0x23A090u) {
        ctx->pc = 0x23A094u;
        goto label_23a094;
    }
    ctx->pc = 0x23A08Cu;
    {
        const bool branch_taken_0x23a08c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a08c) {
            ctx->pc = 0x23A0A0u;
            goto label_23a0a0;
        }
    }
    ctx->pc = 0x23A094u;
label_23a094:
    // 0x23a094: 0x8e970000  lw          $s7, 0x0($s4)
    ctx->pc = 0x23a094u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_23a098:
    // 0x23a098: 0x10000002  b           . + 4 + (0x2 << 2)
label_23a09c:
    if (ctx->pc == 0x23A09Cu) {
        ctx->pc = 0x23A0A0u;
        goto label_23a0a0;
    }
    ctx->pc = 0x23A098u;
    {
        const bool branch_taken_0x23a098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a098) {
            ctx->pc = 0x23A0A4u;
            goto label_23a0a4;
        }
    }
    ctx->pc = 0x23A0A0u;
label_23a0a0:
    // 0x23a0a0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x23a0a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a0a4:
    // 0x23a0a4: 0xafb702bc  sw          $s7, 0x2BC($sp)
    ctx->pc = 0x23a0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 700), GPR_U32(ctx, 23));
label_23a0a8:
    // 0x23a0a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a0a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a0ac:
    // 0x23a0ac: 0x0  nop
    ctx->pc = 0x23a0acu;
    // NOP
label_23a0b0:
    // 0x23a0b0: 0xe7a002c8  swc1        $f0, 0x2C8($sp)
    ctx->pc = 0x23a0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
label_23a0b4:
    // 0x23a0b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a0b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a0b8:
    // 0x23a0b8: 0x0  nop
    ctx->pc = 0x23a0b8u;
    // NOP
label_23a0bc:
    // 0x23a0bc: 0xe7a002c4  swc1        $f0, 0x2C4($sp)
    ctx->pc = 0x23a0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 708), bits); }
label_23a0c0:
    // 0x23a0c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_23a0c4:
    // 0x23a0c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a0c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a0c8:
    // 0x23a0c8: 0x0  nop
    ctx->pc = 0x23a0c8u;
    // NOP
label_23a0cc:
    // 0x23a0cc: 0xe7a002d0  swc1        $f0, 0x2D0($sp)
    ctx->pc = 0x23a0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
label_23a0d0:
    // 0x23a0d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_23a0d4:
    // 0x23a0d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a0d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a0d8:
    // 0x23a0d8: 0x0  nop
    ctx->pc = 0x23a0d8u;
    // NOP
label_23a0dc:
    // 0x23a0dc: 0xe7a002cc  swc1        $f0, 0x2CC($sp)
    ctx->pc = 0x23a0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 716), bits); }
label_23a0e0:
    // 0x23a0e0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_23a0e4:
    if (ctx->pc == 0x23A0E4u) {
        ctx->pc = 0x23A0E8u;
        goto label_23a0e8;
    }
    ctx->pc = 0x23A0E0u;
    {
        const bool branch_taken_0x23a0e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a0e0) {
            ctx->pc = 0x23A0F8u;
            goto label_23a0f8;
        }
    }
    ctx->pc = 0x23A0E8u;
label_23a0e8:
    // 0x23a0e8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x23a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_23a0ec:
    // 0x23a0ec: 0xafa202b8  sw          $v0, 0x2B8($sp)
    ctx->pc = 0x23a0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 696), GPR_U32(ctx, 2));
label_23a0f0:
    // 0x23a0f0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x23a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_23a0f4:
    // 0x23a0f4: 0xafa202b4  sw          $v0, 0x2B4($sp)
    ctx->pc = 0x23a0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 2));
label_23a0f8:
    // 0x23a0f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a0f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a0fc:
    // 0x23a0fc: 0x0  nop
    ctx->pc = 0x23a0fcu;
    // NOP
label_23a100:
    // 0x23a100: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x23a100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_23a104:
    // 0x23a104: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a104u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a108:
    // 0x23a108: 0x0  nop
    ctx->pc = 0x23a108u;
    // NOP
label_23a10c:
    // 0x23a10c: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x23a10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_23a110:
    // 0x23a110: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x23a110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_23a114:
    // 0x23a114: 0xc440e898  lwc1        $f0, -0x1768($v0)
    ctx->pc = 0x23a114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a118:
    // 0x23a118: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x23a118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_23a11c:
    // 0x23a11c: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x23a11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a120:
    // 0x23a120: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x23a120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_23a124:
    // 0x23a124: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23a124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_23a128:
    // 0x23a128: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23a128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23a12c:
    // 0x23a12c: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x23a12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a130:
    // 0x23a130: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x23a130u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_23a134:
    // 0x23a134: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x23a134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_23a138:
    // 0x23a138: 0xc7a002c8  lwc1        $f0, 0x2C8($sp)
    ctx->pc = 0x23a138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a13c:
    // 0x23a13c: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x23a13cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_23a140:
    // 0x23a140: 0xc7a002c4  lwc1        $f0, 0x2C4($sp)
    ctx->pc = 0x23a140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a144:
    // 0x23a144: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x23a144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_23a148:
    // 0x23a148: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23a148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_23a14c:
    // 0x23a14c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a14cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a150:
    // 0x23a150: 0x0  nop
    ctx->pc = 0x23a150u;
    // NOP
label_23a154:
    // 0x23a154: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x23a154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_23a158:
    // 0x23a158: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23a158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_23a15c:
    // 0x23a15c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a15cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a160:
    // 0x23a160: 0x0  nop
    ctx->pc = 0x23a160u;
    // NOP
label_23a164:
    // 0x23a164: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x23a164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_23a168:
    // 0x23a168: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23a168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_23a16c:
    // 0x23a16c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a170:
    // 0x23a170: 0x0  nop
    ctx->pc = 0x23a170u;
    // NOP
label_23a174:
    // 0x23a174: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x23a174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_23a178:
    // 0x23a178: 0x3c02437e  lui         $v0, 0x437E
    ctx->pc = 0x23a178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17278 << 16));
label_23a17c:
    // 0x23a17c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a17cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a180:
    // 0x23a180: 0x0  nop
    ctx->pc = 0x23a180u;
    // NOP
label_23a184:
    // 0x23a184: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x23a184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_23a188:
    // 0x23a188: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a18c:
    // 0x23a18c: 0x0  nop
    ctx->pc = 0x23a18cu;
    // NOP
label_23a190:
    // 0x23a190: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x23a190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_23a194:
    // 0x23a194: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x23a194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_23a198:
    // 0x23a198: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x23a198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_23a19c:
    // 0x23a19c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a19cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a1a0:
    // 0x23a1a0: 0x0  nop
    ctx->pc = 0x23a1a0u;
    // NOP
label_23a1a4:
    // 0x23a1a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23a1a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_23a1a8:
    // 0x23a1a8: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x23a1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_23a1ac:
    // 0x23a1ac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x23a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_23a1b0:
    // 0x23a1b0: 0xc440e898  lwc1        $f0, -0x1768($v0)
    ctx->pc = 0x23a1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a1b4:
    // 0x23a1b4: 0xe7a001a8  swc1        $f0, 0x1A8($sp)
    ctx->pc = 0x23a1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_23a1b8:
    // 0x23a1b8: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x23a1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a1bc:
    // 0x23a1bc: 0xe7a001ac  swc1        $f0, 0x1AC($sp)
    ctx->pc = 0x23a1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
label_23a1c0:
    // 0x23a1c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_23a1c4:
    // 0x23a1c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23a1c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23a1c8:
    // 0x23a1c8: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x23a1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a1cc:
    // 0x23a1cc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x23a1ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_23a1d0:
    // 0x23a1d0: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x23a1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_23a1d4:
    // 0x23a1d4: 0xc7a002c8  lwc1        $f0, 0x2C8($sp)
    ctx->pc = 0x23a1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a1d8:
    // 0x23a1d8: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x23a1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_23a1dc:
    // 0x23a1dc: 0xc7a002cc  lwc1        $f0, 0x2CC($sp)
    ctx->pc = 0x23a1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a1e0:
    // 0x23a1e0: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x23a1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_23a1e4:
    // 0x23a1e4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_23a1e8:
    // 0x23a1e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a1e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a1ec:
    // 0x23a1ec: 0x0  nop
    ctx->pc = 0x23a1ecu;
    // NOP
label_23a1f0:
    // 0x23a1f0: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x23a1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_23a1f4:
    // 0x23a1f4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_23a1f8:
    // 0x23a1f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a1f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a1fc:
    // 0x23a1fc: 0x0  nop
    ctx->pc = 0x23a1fcu;
    // NOP
label_23a200:
    // 0x23a200: 0xe7a001c4  swc1        $f0, 0x1C4($sp)
    ctx->pc = 0x23a200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_23a204:
    // 0x23a204: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23a204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_23a208:
    // 0x23a208: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a20c:
    // 0x23a20c: 0x0  nop
    ctx->pc = 0x23a20cu;
    // NOP
label_23a210:
    // 0x23a210: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x23a210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_23a214:
    // 0x23a214: 0x3c02437e  lui         $v0, 0x437E
    ctx->pc = 0x23a214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17278 << 16));
label_23a218:
    // 0x23a218: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a21c:
    // 0x23a21c: 0x0  nop
    ctx->pc = 0x23a21cu;
    // NOP
label_23a220:
    // 0x23a220: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x23a220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
label_23a224:
    // 0x23a224: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x23a224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_23a228:
    // 0x23a228: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23a228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_23a22c:
    // 0x23a22c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a22cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a230:
    // 0x23a230: 0x0  nop
    ctx->pc = 0x23a230u;
    // NOP
label_23a234:
    // 0x23a234: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23a234u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_23a238:
    // 0x23a238: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x23a238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_23a23c:
    // 0x23a23c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x23a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_23a240:
    // 0x23a240: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x23a240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_23a244:
    // 0x23a244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a248:
    // 0x23a248: 0x0  nop
    ctx->pc = 0x23a248u;
    // NOP
label_23a24c:
    // 0x23a24c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23a24cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_23a250:
    // 0x23a250: 0xe7a001e4  swc1        $f0, 0x1E4($sp)
    ctx->pc = 0x23a250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
label_23a254:
    // 0x23a254: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x23a254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_23a258:
    // 0x23a258: 0xc440e898  lwc1        $f0, -0x1768($v0)
    ctx->pc = 0x23a258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a25c:
    // 0x23a25c: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x23a25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_23a260:
    // 0x23a260: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x23a260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a264:
    // 0x23a264: 0xe7a001ec  swc1        $f0, 0x1EC($sp)
    ctx->pc = 0x23a264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
label_23a268:
    // 0x23a268: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23a268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_23a26c:
    // 0x23a26c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23a26cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23a270:
    // 0x23a270: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x23a270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a274:
    // 0x23a274: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x23a274u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_23a278:
    // 0x23a278: 0xe7a001f8  swc1        $f0, 0x1F8($sp)
    ctx->pc = 0x23a278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_23a27c:
    // 0x23a27c: 0xc7a002d0  lwc1        $f0, 0x2D0($sp)
    ctx->pc = 0x23a27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a280:
    // 0x23a280: 0xe7a001f0  swc1        $f0, 0x1F0($sp)
    ctx->pc = 0x23a280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_23a284:
    // 0x23a284: 0xc7a002cc  lwc1        $f0, 0x2CC($sp)
    ctx->pc = 0x23a284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a288:
    // 0x23a288: 0xe7a001f4  swc1        $f0, 0x1F4($sp)
    ctx->pc = 0x23a288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
label_23a28c:
    // 0x23a28c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_23a290:
    // 0x23a290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a294:
    // 0x23a294: 0x0  nop
    ctx->pc = 0x23a294u;
    // NOP
label_23a298:
    // 0x23a298: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x23a298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_23a29c:
    // 0x23a29c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_23a2a0:
    // 0x23a2a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a2a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a2a4:
    // 0x23a2a4: 0x0  nop
    ctx->pc = 0x23a2a4u;
    // NOP
label_23a2a8:
    // 0x23a2a8: 0xe7a00204  swc1        $f0, 0x204($sp)
    ctx->pc = 0x23a2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
label_23a2ac:
    // 0x23a2ac: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_23a2b0:
    // 0x23a2b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a2b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a2b4:
    // 0x23a2b4: 0x0  nop
    ctx->pc = 0x23a2b4u;
    // NOP
label_23a2b8:
    // 0x23a2b8: 0xe7a00208  swc1        $f0, 0x208($sp)
    ctx->pc = 0x23a2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_23a2bc:
    // 0x23a2bc: 0x3c02437e  lui         $v0, 0x437E
    ctx->pc = 0x23a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17278 << 16));
label_23a2c0:
    // 0x23a2c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a2c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a2c4:
    // 0x23a2c4: 0x0  nop
    ctx->pc = 0x23a2c4u;
    // NOP
label_23a2c8:
    // 0x23a2c8: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x23a2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
label_23a2cc:
    // 0x23a2cc: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x23a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_23a2d0:
    // 0x23a2d0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_23a2d4:
    // 0x23a2d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a2d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a2d8:
    // 0x23a2d8: 0x0  nop
    ctx->pc = 0x23a2d8u;
    // NOP
label_23a2dc:
    // 0x23a2dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23a2dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_23a2e0:
    // 0x23a2e0: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x23a2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_23a2e4:
    // 0x23a2e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a2e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a2e8:
    // 0x23a2e8: 0x0  nop
    ctx->pc = 0x23a2e8u;
    // NOP
label_23a2ec:
    // 0x23a2ec: 0xe7a00224  swc1        $f0, 0x224($sp)
    ctx->pc = 0x23a2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
label_23a2f0:
    // 0x23a2f0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x23a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_23a2f4:
    // 0x23a2f4: 0xc440e898  lwc1        $f0, -0x1768($v0)
    ctx->pc = 0x23a2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a2f8:
    // 0x23a2f8: 0xe7a00228  swc1        $f0, 0x228($sp)
    ctx->pc = 0x23a2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_23a2fc:
    // 0x23a2fc: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x23a2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a300:
    // 0x23a300: 0xe7a0022c  swc1        $f0, 0x22C($sp)
    ctx->pc = 0x23a300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
label_23a304:
    // 0x23a304: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23a304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_23a308:
    // 0x23a308: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23a308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23a30c:
    // 0x23a30c: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x23a30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a310:
    // 0x23a310: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x23a310u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_23a314:
    // 0x23a314: 0xe7a00238  swc1        $f0, 0x238($sp)
    ctx->pc = 0x23a314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
label_23a318:
    // 0x23a318: 0xc7a002d0  lwc1        $f0, 0x2D0($sp)
    ctx->pc = 0x23a318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a31c:
    // 0x23a31c: 0xe7a00230  swc1        $f0, 0x230($sp)
    ctx->pc = 0x23a31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
label_23a320:
    // 0x23a320: 0xc7a002c4  lwc1        $f0, 0x2C4($sp)
    ctx->pc = 0x23a320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a324:
    // 0x23a324: 0xe7a00234  swc1        $f0, 0x234($sp)
    ctx->pc = 0x23a324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
label_23a328:
    // 0x23a328: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23a328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_23a32c:
    // 0x23a32c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a32cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a330:
    // 0x23a330: 0x0  nop
    ctx->pc = 0x23a330u;
    // NOP
label_23a334:
    // 0x23a334: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x23a334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
label_23a338:
    // 0x23a338: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23a338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_23a33c:
    // 0x23a33c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a340:
    // 0x23a340: 0x0  nop
    ctx->pc = 0x23a340u;
    // NOP
label_23a344:
    // 0x23a344: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x23a344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
label_23a348:
    // 0x23a348: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23a348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_23a34c:
    // 0x23a34c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a34cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a350:
    // 0x23a350: 0x0  nop
    ctx->pc = 0x23a350u;
    // NOP
label_23a354:
    // 0x23a354: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x23a354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
label_23a358:
    // 0x23a358: 0x3c02437e  lui         $v0, 0x437E
    ctx->pc = 0x23a358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17278 << 16));
label_23a35c:
    // 0x23a35c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a35cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a360:
    // 0x23a360: 0x0  nop
    ctx->pc = 0x23a360u;
    // NOP
label_23a364:
    // 0x23a364: 0xe7a0024c  swc1        $f0, 0x24C($sp)
    ctx->pc = 0x23a364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 588), bits); }
label_23a368:
    // 0x23a368: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x23a368u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_23a36c:
    // 0x23a36c: 0x24c6bc30  addiu       $a2, $a2, -0x43D0
    ctx->pc = 0x23a36cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949936));
label_23a370:
    // 0x23a370: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x23a370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_23a374:
    // 0x23a374: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x23a374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23a378:
    // 0x23a378: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x23a378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_23a37c:
    // 0x23a37c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x23a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_23a380:
    // 0x23a380: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x23a380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_23a384:
    // 0x23a384: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x23a384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_23a388:
    // 0x23a388: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x23a388u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_23a38c:
    // 0x23a38c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x23a38cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_23a390:
    // 0x23a390: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x23a390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_23a394:
    // 0x23a394: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
label_23a398:
    if (ctx->pc == 0x23A398u) {
        ctx->pc = 0x23A39Cu;
        goto label_23a39c;
    }
    ctx->pc = 0x23A394u;
    {
        const bool branch_taken_0x23a394 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x23a394) {
            ctx->pc = 0x23A378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a378;
        }
    }
    ctx->pc = 0x23A39Cu;
label_23a39c:
    // 0x23a39c: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x23a39cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_23a3a0:
    // 0x23a3a0: 0x24c6bc50  addiu       $a2, $a2, -0x43B0
    ctx->pc = 0x23a3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949968));
label_23a3a4:
    // 0x23a3a4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x23a3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_23a3a8:
    // 0x23a3a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x23a3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23a3ac:
    // 0x23a3ac: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x23a3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_23a3b0:
    // 0x23a3b0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x23a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_23a3b4:
    // 0x23a3b4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x23a3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_23a3b8:
    // 0x23a3b8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x23a3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_23a3bc:
    // 0x23a3bc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x23a3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_23a3c0:
    // 0x23a3c0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x23a3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_23a3c4:
    // 0x23a3c4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x23a3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_23a3c8:
    // 0x23a3c8: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
label_23a3cc:
    if (ctx->pc == 0x23A3CCu) {
        ctx->pc = 0x23A3D0u;
        goto label_23a3d0;
    }
    ctx->pc = 0x23A3C8u;
    {
        const bool branch_taken_0x23a3c8 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x23a3c8) {
            ctx->pc = 0x23A3ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a3ac;
        }
    }
    ctx->pc = 0x23A3D0u;
label_23a3d0:
    // 0x23a3d0: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x23a3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_23a3d4:
    // 0x23a3d4: 0x24c6bc70  addiu       $a2, $a2, -0x4390
    ctx->pc = 0x23a3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950000));
label_23a3d8:
    // 0x23a3d8: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x23a3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_23a3dc:
    // 0x23a3dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x23a3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23a3e0:
    // 0x23a3e0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x23a3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_23a3e4:
    // 0x23a3e4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x23a3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_23a3e8:
    // 0x23a3e8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x23a3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_23a3ec:
    // 0x23a3ec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x23a3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_23a3f0:
    // 0x23a3f0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x23a3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_23a3f4:
    // 0x23a3f4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x23a3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_23a3f8:
    // 0x23a3f8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x23a3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_23a3fc:
    // 0x23a3fc: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
label_23a400:
    if (ctx->pc == 0x23A400u) {
        ctx->pc = 0x23A404u;
        goto label_23a404;
    }
    ctx->pc = 0x23A3FCu;
    {
        const bool branch_taken_0x23a3fc = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x23a3fc) {
            ctx->pc = 0x23A3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a3e0;
        }
    }
    ctx->pc = 0x23A404u;
label_23a404:
    // 0x23a404: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x23a404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_23a408:
    // 0x23a408: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23a408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_23a40c:
    // 0x23a40c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a40cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a410:
    // 0x23a410: 0x0  nop
    ctx->pc = 0x23a410u;
    // NOP
label_23a414:
    // 0x23a414: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23a414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_23a418:
    // 0x23a418: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x23a418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_23a41c:
    // 0x23a41c: 0xe7a0029c  swc1        $f0, 0x29C($sp)
    ctx->pc = 0x23a41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 668), bits); }
label_23a420:
    // 0x23a420: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x23a420u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_23a424:
    // 0x23a424: 0x24c6bc90  addiu       $a2, $a2, -0x4370
    ctx->pc = 0x23a424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950032));
label_23a428:
    // 0x23a428: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x23a428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_23a42c:
    // 0x23a42c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x23a42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23a430:
    // 0x23a430: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x23a430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_23a434:
    // 0x23a434: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x23a434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_23a438:
    // 0x23a438: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x23a438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_23a43c:
    // 0x23a43c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x23a43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_23a440:
    // 0x23a440: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x23a440u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_23a444:
    // 0x23a444: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x23a444u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_23a448:
    // 0x23a448: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x23a448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_23a44c:
    // 0x23a44c: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
label_23a450:
    if (ctx->pc == 0x23A450u) {
        ctx->pc = 0x23A454u;
        goto label_23a454;
    }
    ctx->pc = 0x23A44Cu;
    {
        const bool branch_taken_0x23a44c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x23a44c) {
            ctx->pc = 0x23A430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a430;
        }
    }
    ctx->pc = 0x23A454u;
label_23a454:
    // 0x23a454: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x23a454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_23a458:
    // 0x23a458: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x23a458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_23a45c:
    // 0x23a45c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a45cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a460:
    // 0x23a460: 0x0  nop
    ctx->pc = 0x23a460u;
    // NOP
label_23a464:
    // 0x23a464: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23a464u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_23a468:
    // 0x23a468: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x23a468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_23a46c:
    // 0x23a46c: 0xe7a00298  swc1        $f0, 0x298($sp)
    ctx->pc = 0x23a46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
label_23a470:
    // 0x23a470: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x23a470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
label_23a474:
    // 0x23a474: 0x2484bb50  addiu       $a0, $a0, -0x44B0
    ctx->pc = 0x23a474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949712));
label_23a478:
    // 0x23a478: 0x27859d94  addiu       $a1, $gp, -0x626C
    ctx->pc = 0x23a478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942100));
label_23a47c:
    // 0x23a47c: 0xc0bc5c6  jal         func_2F1718
label_23a480:
    if (ctx->pc == 0x23A480u) {
        ctx->pc = 0x23A484u;
        goto label_23a484;
    }
    ctx->pc = 0x23A47Cu;
    SET_GPR_U32(ctx, 31, 0x23A484u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x23A47Cu, 0x23A484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A484u;
label_23a484:
    // 0x23a484: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x23a484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_23a488:
    // 0x23a488: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x23a488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_23a48c:
    // 0x23a48c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_23a490:
    if (ctx->pc == 0x23A490u) {
        ctx->pc = 0x23A494u;
        goto label_23a494;
    }
    ctx->pc = 0x23A48Cu;
    {
        const bool branch_taken_0x23a48c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a48c) {
            ctx->pc = 0x23A4B4u;
            goto label_23a4b4;
        }
    }
    ctx->pc = 0x23A494u;
label_23a494:
    // 0x23a494: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x23a494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_23a498:
    // 0x23a498: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x23a498u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_23a49c:
    // 0x23a49c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23a49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23a4a0:
    // 0x23a4a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23a4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a4a4:
    // 0x23a4a4: 0x0  nop
    ctx->pc = 0x23a4a4u;
    // NOP
label_23a4a8:
    // 0x23a4a8: 0x0  nop
    ctx->pc = 0x23a4a8u;
    // NOP
label_23a4ac:
    // 0x23a4ac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_23a4b0:
    if (ctx->pc == 0x23A4B0u) {
        ctx->pc = 0x23A4B4u;
        goto label_23a4b4;
    }
    ctx->pc = 0x23A4ACu;
    {
        const bool branch_taken_0x23a4ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a4ac) {
            ctx->pc = 0x23A498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a498;
        }
    }
    ctx->pc = 0x23A4B4u;
label_23a4b4:
    // 0x23a4b4: 0xc11904c  jal         func_464130
label_23a4b8:
    if (ctx->pc == 0x23A4B8u) {
        ctx->pc = 0x23A4BCu;
        goto label_23a4bc;
    }
    ctx->pc = 0x23A4B4u;
    SET_GPR_U32(ctx, 31, 0x23A4BCu);
    ctx->pc = 0x464130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464130u, 0x23A4B4u, 0x23A4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A4BCu;
label_23a4bc:
    // 0x23a4bc: 0xffa20280  sd          $v0, 0x280($sp)
    ctx->pc = 0x23a4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 2));
label_23a4c0:
    // 0x23a4c0: 0xdfa20280  ld          $v0, 0x280($sp)
    ctx->pc = 0x23a4c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_23a4c4:
    // 0x23a4c4: 0x221ba  dsrl        $a0, $v0, 6
    ctx->pc = 0x23a4c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> 6);
label_23a4c8:
    // 0x23a4c8: 0xc09005c  jal         func_240170
label_23a4cc:
    if (ctx->pc == 0x23A4CCu) {
        ctx->pc = 0x23A4D0u;
        goto label_23a4d0;
    }
    ctx->pc = 0x23A4C8u;
    SET_GPR_U32(ctx, 31, 0x23A4D0u);
    ctx->pc = 0x240170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240170u, 0x23A4C8u, 0x23A4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A4D0u;
label_23a4d0:
    // 0x23a4d0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x23a4d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_23a4d4:
    // 0x23a4d4: 0xc0c3966  jal         func_30E598
label_23a4d8:
    if (ctx->pc == 0x23A4D8u) {
        ctx->pc = 0x23A4DCu;
        goto label_23a4dc;
    }
    ctx->pc = 0x23A4D4u;
    SET_GPR_U32(ctx, 31, 0x23A4DCu);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x23A4D4u, 0x23A4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A4DCu;
label_23a4dc:
    // 0x23a4dc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x23a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_23a4e0:
    // 0x23a4e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23a4e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23a4e4:
    // 0x23a4e4: 0x0  nop
    ctx->pc = 0x23a4e4u;
    // NOP
label_23a4e8:
    // 0x23a4e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x23a4e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_23a4ec:
    // 0x23a4ec: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x23a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_23a4f0:
    // 0x23a4f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a4f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a4f4:
    // 0x23a4f4: 0x0  nop
    ctx->pc = 0x23a4f4u;
    // NOP
label_23a4f8:
    // 0x23a4f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x23a4f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23a4fc:
    // 0x23a4fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_23a500:
    if (ctx->pc == 0x23A500u) {
        ctx->pc = 0x23A504u;
        goto label_23a504;
    }
    ctx->pc = 0x23A4FCu;
    {
        const bool branch_taken_0x23a4fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a4fc) {
            ctx->pc = 0x23A514u;
            goto label_23a514;
        }
    }
    ctx->pc = 0x23A504u;
label_23a504:
    // 0x23a504: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23a504u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_23a508:
    // 0x23a508: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x23a508u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_23a50c:
    // 0x23a50c: 0x10000006  b           . + 4 + (0x6 << 2)
label_23a510:
    if (ctx->pc == 0x23A510u) {
        ctx->pc = 0x23A514u;
        goto label_23a514;
    }
    ctx->pc = 0x23A50Cu;
    {
        const bool branch_taken_0x23a50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a50c) {
            ctx->pc = 0x23A528u;
            goto label_23a528;
        }
    }
    ctx->pc = 0x23A514u;
label_23a514:
    // 0x23a514: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x23a514u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_23a518:
    // 0x23a518: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23a518u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_23a51c:
    // 0x23a51c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x23a51cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_23a520:
    // 0x23a520: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x23a520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_23a524:
    // 0x23a524: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23a524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_23a528:
    // 0x23a528: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x23a528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_23a52c:
    // 0x23a52c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x23a52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_23a530:
    // 0x23a530: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23a530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23a534:
    // 0x23a534: 0xa3a202df  sb          $v0, 0x2DF($sp)
    ctx->pc = 0x23a534u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 735), (uint8_t)GPR_U32(ctx, 2));
label_23a538:
    // 0x23a538: 0xc116edc  jal         func_45BB70
label_23a53c:
    if (ctx->pc == 0x23A53Cu) {
        ctx->pc = 0x23A540u;
        goto label_23a540;
    }
    ctx->pc = 0x23A538u;
    SET_GPR_U32(ctx, 31, 0x23A540u);
    ctx->pc = 0x45BB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BB70u, 0x23A538u, 0x23A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A540u;
label_23a540:
    // 0x23a540: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23a540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a544:
    // 0x23a544: 0xc116ea4  jal         func_45BA90
label_23a548:
    if (ctx->pc == 0x23A548u) {
        ctx->pc = 0x23A54Cu;
        goto label_23a54c;
    }
    ctx->pc = 0x23A544u;
    SET_GPR_U32(ctx, 31, 0x23A54Cu);
    ctx->pc = 0x45BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BA90u, 0x23A544u, 0x23A54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A54Cu;
label_23a54c:
    // 0x23a54c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x23a54cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23a550:
    // 0x23a550: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x23a550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_23a554:
    // 0x23a554: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x23a554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23a558:
    // 0x23a558: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_23a55c:
    if (ctx->pc == 0x23A55Cu) {
        ctx->pc = 0x23A560u;
        goto label_23a560;
    }
    ctx->pc = 0x23A558u;
    {
        const bool branch_taken_0x23a558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a558) {
            ctx->pc = 0x23A580u;
            goto label_23a580;
        }
    }
    ctx->pc = 0x23A560u;
label_23a560:
    // 0x23a560: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x23a560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_23a564:
    // 0x23a564: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x23a564u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_23a568:
    // 0x23a568: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23a568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23a56c:
    // 0x23a56c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a570:
    // 0x23a570: 0x0  nop
    ctx->pc = 0x23a570u;
    // NOP
label_23a574:
    // 0x23a574: 0x0  nop
    ctx->pc = 0x23a574u;
    // NOP
label_23a578:
    // 0x23a578: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_23a57c:
    if (ctx->pc == 0x23A57Cu) {
        ctx->pc = 0x23A580u;
        goto label_23a580;
    }
    ctx->pc = 0x23A578u;
    {
        const bool branch_taken_0x23a578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a578) {
            ctx->pc = 0x23A564u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a564;
        }
    }
    ctx->pc = 0x23A580u;
label_23a580:
    // 0x23a580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23a584:
    // 0x23a584: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x23a584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_23a588:
    // 0x23a588: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x23a588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23a58c:
    // 0x23a58c: 0xc105fa6  jal         func_417E98
label_23a590:
    if (ctx->pc == 0x23A590u) {
        ctx->pc = 0x23A594u;
        goto label_23a594;
    }
    ctx->pc = 0x23A58Cu;
    SET_GPR_U32(ctx, 31, 0x23A594u);
    ctx->pc = 0x417E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E98u, 0x23A58Cu, 0x23A594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A594u;
label_23a594:
    // 0x23a594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23a598:
    // 0x23a598: 0xc105f96  jal         func_417E58
label_23a59c:
    if (ctx->pc == 0x23A59Cu) {
        ctx->pc = 0x23A5A0u;
        goto label_23a5a0;
    }
    ctx->pc = 0x23A598u;
    SET_GPR_U32(ctx, 31, 0x23A5A0u);
    ctx->pc = 0x417E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E58u, 0x23A598u, 0x23A5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A5A0u;
label_23a5a0:
    // 0x23a5a0: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
label_23a5a4:
    if (ctx->pc == 0x23A5A4u) {
        ctx->pc = 0x23A5A8u;
        goto label_23a5a8;
    }
    ctx->pc = 0x23A5A0u;
    {
        const bool branch_taken_0x23a5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a5a0) {
            ctx->pc = 0x23A808u;
            goto label_23a808;
        }
    }
    ctx->pc = 0x23A5A8u;
label_23a5a8:
    // 0x23a5a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23a5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23a5ac:
    // 0x23a5ac: 0x12c3013f  beq         $s6, $v1, . + 4 + (0x13F << 2)
label_23a5b0:
    if (ctx->pc == 0x23A5B0u) {
        ctx->pc = 0x23A5B4u;
        goto label_23a5b4;
    }
    ctx->pc = 0x23A5ACu;
    {
        const bool branch_taken_0x23a5ac = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        if (branch_taken_0x23a5ac) {
            ctx->pc = 0x23AAACu;
            goto label_23aaac;
        }
    }
    ctx->pc = 0x23A5B4u;
label_23a5b4:
    // 0x23a5b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23a5b8:
    // 0x23a5b8: 0x16c2008b  bne         $s6, $v0, . + 4 + (0x8B << 2)
label_23a5bc:
    if (ctx->pc == 0x23A5BCu) {
        ctx->pc = 0x23A5C0u;
        goto label_23a5c0;
    }
    ctx->pc = 0x23A5B8u;
    {
        const bool branch_taken_0x23a5b8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x23a5b8) {
            ctx->pc = 0x23A7E8u;
            goto label_23a7e8;
        }
    }
    ctx->pc = 0x23A5C0u;
label_23a5c0:
    // 0x23a5c0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x23a5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_23a5c4:
    // 0x23a5c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23a5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23a5c8:
    // 0x23a5c8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x23a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_23a5cc:
    // 0x23a5cc: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x23a5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_23a5d0:
    // 0x23a5d0: 0x40f809  jalr        $v0
label_23a5d4:
    if (ctx->pc == 0x23A5D4u) {
        ctx->pc = 0x23A5D8u;
        goto label_23a5d8;
    }
    ctx->pc = 0x23A5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23A5D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A5D0u, 0x23A5D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23A5D8u;
label_23a5d8:
    // 0x23a5d8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x23a5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_23a5dc:
    // 0x23a5dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23a5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a5e0:
    // 0x23a5e0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x23a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_23a5e4:
    // 0x23a5e4: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x23a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_23a5e8:
    // 0x23a5e8: 0x40f809  jalr        $v0
label_23a5ec:
    if (ctx->pc == 0x23A5ECu) {
        ctx->pc = 0x23A5F0u;
        goto label_23a5f0;
    }
    ctx->pc = 0x23A5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23A5F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A5E8u, 0x23A5F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23A5F0u;
label_23a5f0:
    // 0x23a5f0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x23a5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23a5f4:
    // 0x23a5f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23a5f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a5f8:
    // 0x23a5f8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x23a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_23a5fc:
    // 0x23a5fc: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x23a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_23a600:
    // 0x23a600: 0x40f809  jalr        $v0
label_23a604:
    if (ctx->pc == 0x23A604u) {
        ctx->pc = 0x23A608u;
        goto label_23a608;
    }
    ctx->pc = 0x23A600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23A608u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A600u, 0x23A608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23A608u;
label_23a608:
    // 0x23a608: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x23a608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_23a60c:
    // 0x23a60c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23a60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a610:
    // 0x23a610: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x23a610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_23a614:
    // 0x23a614: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x23a614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_23a618:
    // 0x23a618: 0x40f809  jalr        $v0
label_23a61c:
    if (ctx->pc == 0x23A61Cu) {
        ctx->pc = 0x23A620u;
        goto label_23a620;
    }
    ctx->pc = 0x23A618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23A620u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A618u, 0x23A620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23A620u;
label_23a620:
    // 0x23a620: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23a620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23a624:
    // 0x23a624: 0x8fa502bc  lw          $a1, 0x2BC($sp)
    ctx->pc = 0x23a624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 700)));
label_23a628:
    // 0x23a628: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x23a628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_23a62c:
    // 0x23a62c: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x23a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_23a630:
    // 0x23a630: 0x40f809  jalr        $v0
label_23a634:
    if (ctx->pc == 0x23A634u) {
        ctx->pc = 0x23A638u;
        goto label_23a638;
    }
    ctx->pc = 0x23A630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23A638u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A630u, 0x23A638u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23A638u;
label_23a638:
    // 0x23a638: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x23a638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_23a63c:
    // 0x23a63c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23a63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23a640:
    // 0x23a640: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x23a640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_23a644:
    // 0x23a644: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x23a644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_23a648:
    // 0x23a648: 0x40f809  jalr        $v0
label_23a64c:
    if (ctx->pc == 0x23A64Cu) {
        ctx->pc = 0x23A650u;
        goto label_23a650;
    }
    ctx->pc = 0x23A648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23A650u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A648u, 0x23A650u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23A650u;
label_23a650:
    // 0x23a650: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x23a650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23a654:
    // 0x23a654: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x23a654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23a658:
    // 0x23a658: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x23a658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_23a65c:
    // 0x23a65c: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x23a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_23a660:
    // 0x23a660: 0x40f809  jalr        $v0
label_23a664:
    if (ctx->pc == 0x23A664u) {
        ctx->pc = 0x23A668u;
        goto label_23a668;
    }
    ctx->pc = 0x23A660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23A668u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A660u, 0x23A668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23A668u;
label_23a668:
    // 0x23a668: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x23a668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_23a66c:
    // 0x23a66c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x23a66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23a670:
    // 0x23a670: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x23a670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_23a674:
    // 0x23a674: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x23a674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_23a678:
    // 0x23a678: 0x40f809  jalr        $v0
label_23a67c:
    if (ctx->pc == 0x23A67Cu) {
        ctx->pc = 0x23A680u;
        goto label_23a680;
    }
    ctx->pc = 0x23A678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23A680u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A678u, 0x23A680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23A680u;
label_23a680:
    // 0x23a680: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23a680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_23a684:
    // 0x23a684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a688:
    // 0x23a688: 0x0  nop
    ctx->pc = 0x23a688u;
    // NOP
label_23a68c:
    // 0x23a68c: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x23a68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_23a690:
    // 0x23a690: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23a690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_23a694:
    // 0x23a694: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a698:
    // 0x23a698: 0x0  nop
    ctx->pc = 0x23a698u;
    // NOP
label_23a69c:
    // 0x23a69c: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x23a69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_23a6a0:
    // 0x23a6a0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_23a6a4:
    // 0x23a6a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a6a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a6a8:
    // 0x23a6a8: 0x0  nop
    ctx->pc = 0x23a6a8u;
    // NOP
label_23a6ac:
    // 0x23a6ac: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x23a6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_23a6b0:
    // 0x23a6b0: 0x3c02437e  lui         $v0, 0x437E
    ctx->pc = 0x23a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17278 << 16));
label_23a6b4:
    // 0x23a6b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a6b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a6b8:
    // 0x23a6b8: 0x0  nop
    ctx->pc = 0x23a6b8u;
    // NOP
label_23a6bc:
    // 0x23a6bc: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x23a6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_23a6c0:
    // 0x23a6c0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_23a6c4:
    // 0x23a6c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a6c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a6c8:
    // 0x23a6c8: 0x0  nop
    ctx->pc = 0x23a6c8u;
    // NOP
label_23a6cc:
    // 0x23a6cc: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x23a6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_23a6d0:
    // 0x23a6d0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23a6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_23a6d4:
    // 0x23a6d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a6d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a6d8:
    // 0x23a6d8: 0x0  nop
    ctx->pc = 0x23a6d8u;
    // NOP
label_23a6dc:
    // 0x23a6dc: 0xe7a001c4  swc1        $f0, 0x1C4($sp)
    ctx->pc = 0x23a6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_23a6e0:
    // 0x23a6e0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_23a6e4:
    // 0x23a6e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a6e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a6e8:
    // 0x23a6e8: 0x0  nop
    ctx->pc = 0x23a6e8u;
    // NOP
label_23a6ec:
    // 0x23a6ec: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x23a6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_23a6f0:
    // 0x23a6f0: 0x3c02437e  lui         $v0, 0x437E
    ctx->pc = 0x23a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17278 << 16));
label_23a6f4:
    // 0x23a6f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a6f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a6f8:
    // 0x23a6f8: 0x0  nop
    ctx->pc = 0x23a6f8u;
    // NOP
label_23a6fc:
    // 0x23a6fc: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x23a6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
label_23a700:
    // 0x23a700: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23a700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_23a704:
    // 0x23a704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a708:
    // 0x23a708: 0x0  nop
    ctx->pc = 0x23a708u;
    // NOP
label_23a70c:
    // 0x23a70c: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x23a70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_23a710:
    // 0x23a710: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23a710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_23a714:
    // 0x23a714: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a718:
    // 0x23a718: 0x0  nop
    ctx->pc = 0x23a718u;
    // NOP
label_23a71c:
    // 0x23a71c: 0xe7a00204  swc1        $f0, 0x204($sp)
    ctx->pc = 0x23a71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
label_23a720:
    // 0x23a720: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23a720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_23a724:
    // 0x23a724: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a728:
    // 0x23a728: 0x0  nop
    ctx->pc = 0x23a728u;
    // NOP
label_23a72c:
    // 0x23a72c: 0xe7a00208  swc1        $f0, 0x208($sp)
    ctx->pc = 0x23a72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_23a730:
    // 0x23a730: 0x3c02437e  lui         $v0, 0x437E
    ctx->pc = 0x23a730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17278 << 16));
label_23a734:
    // 0x23a734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a738:
    // 0x23a738: 0x0  nop
    ctx->pc = 0x23a738u;
    // NOP
label_23a73c:
    // 0x23a73c: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x23a73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
label_23a740:
    // 0x23a740: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23a740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_23a744:
    // 0x23a744: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a748:
    // 0x23a748: 0x0  nop
    ctx->pc = 0x23a748u;
    // NOP
label_23a74c:
    // 0x23a74c: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x23a74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
label_23a750:
    // 0x23a750: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23a750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_23a754:
    // 0x23a754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a758:
    // 0x23a758: 0x0  nop
    ctx->pc = 0x23a758u;
    // NOP
label_23a75c:
    // 0x23a75c: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x23a75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
label_23a760:
    // 0x23a760: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x23a760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_23a764:
    // 0x23a764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a768:
    // 0x23a768: 0x0  nop
    ctx->pc = 0x23a768u;
    // NOP
label_23a76c:
    // 0x23a76c: 0xe7a00248  swc1        $f0, 0x248($sp)
    ctx->pc = 0x23a76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
label_23a770:
    // 0x23a770: 0x3c02437e  lui         $v0, 0x437E
    ctx->pc = 0x23a770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17278 << 16));
label_23a774:
    // 0x23a774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a778:
    // 0x23a778: 0x0  nop
    ctx->pc = 0x23a778u;
    // NOP
label_23a77c:
    // 0x23a77c: 0xe7a0024c  swc1        $f0, 0x24C($sp)
    ctx->pc = 0x23a77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 588), bits); }
label_23a780:
    // 0x23a780: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x23a780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a784:
    // 0x23a784: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x23a784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_23a788:
    // 0x23a788: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x23a788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a78c:
    // 0x23a78c: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x23a78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_23a790:
    // 0x23a790: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x23a790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a794:
    // 0x23a794: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x23a794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_23a798:
    // 0x23a798: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x23a798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a79c:
    // 0x23a79c: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x23a79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_23a7a0:
    // 0x23a7a0: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x23a7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a7a4:
    // 0x23a7a4: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x23a7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_23a7a8:
    // 0x23a7a8: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x23a7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a7ac:
    // 0x23a7ac: 0xe7a001e4  swc1        $f0, 0x1E4($sp)
    ctx->pc = 0x23a7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
label_23a7b0:
    // 0x23a7b0: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x23a7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a7b4:
    // 0x23a7b4: 0xe7a00220  swc1        $f0, 0x220($sp)
    ctx->pc = 0x23a7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_23a7b8:
    // 0x23a7b8: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x23a7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a7bc:
    // 0x23a7bc: 0xe7a00224  swc1        $f0, 0x224($sp)
    ctx->pc = 0x23a7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
label_23a7c0:
    // 0x23a7c0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x23a7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23a7c4:
    // 0x23a7c4: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x23a7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_23a7c8:
    // 0x23a7c8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x23a7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23a7cc:
    // 0x23a7cc: 0x27a70288  addiu       $a3, $sp, 0x288
    ctx->pc = 0x23a7ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
label_23a7d0:
    // 0x23a7d0: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x23a7d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23a7d4:
    // 0x23a7d4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x23a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_23a7d8:
    // 0x23a7d8: 0x8c42e8b4  lw          $v0, -0x174C($v0)
    ctx->pc = 0x23a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
label_23a7dc:
    // 0x23a7dc: 0x40f809  jalr        $v0
label_23a7e0:
    if (ctx->pc == 0x23A7E0u) {
        ctx->pc = 0x23A7E4u;
        goto label_23a7e4;
    }
    ctx->pc = 0x23A7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23A7E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A7DCu, 0x23A7E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23A7E4u;
label_23a7e4:
    // 0x23a7e4: 0xafa202ac  sw          $v0, 0x2AC($sp)
    ctx->pc = 0x23a7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 684), GPR_U32(ctx, 2));
label_23a7e8:
    // 0x23a7e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23a7ec:
    // 0x23a7ec: 0xc105f9e  jal         func_417E78
label_23a7f0:
    if (ctx->pc == 0x23A7F0u) {
        ctx->pc = 0x23A7F4u;
        goto label_23a7f4;
    }
    ctx->pc = 0x23A7ECu;
    SET_GPR_U32(ctx, 31, 0x23A7F4u);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x23A7ECu, 0x23A7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A7F4u;
label_23a7f4:
    // 0x23a7f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23a7f8:
    // 0x23a7f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23a7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a7fc:
    // 0x23a7fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x23a7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23a800:
    // 0x23a800: 0xc105fb4  jal         func_417ED0
label_23a804:
    if (ctx->pc == 0x23A804u) {
        ctx->pc = 0x23A808u;
        goto label_23a808;
    }
    ctx->pc = 0x23A800u;
    SET_GPR_U32(ctx, 31, 0x23A808u);
    ctx->pc = 0x417ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417ED0u, 0x23A800u, 0x23A808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A808u;
label_23a808:
    // 0x23a808: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23a808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23a80c:
    // 0x23a80c: 0x16c2ff29  bne         $s6, $v0, . + 4 + (-0xD7 << 2)
label_23a810:
    if (ctx->pc == 0x23A810u) {
        ctx->pc = 0x23A814u;
        goto label_23a814;
    }
    ctx->pc = 0x23A80Cu;
    {
        const bool branch_taken_0x23a80c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x23a80c) {
            ctx->pc = 0x23A4B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a4b4;
        }
    }
    ctx->pc = 0x23A814u;
label_23a814:
    // 0x23a814: 0x8f829d90  lw          $v0, -0x6270($gp)
    ctx->pc = 0x23a814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942096)));
label_23a818:
    // 0x23a818: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_23a81c:
    if (ctx->pc == 0x23A81Cu) {
        ctx->pc = 0x23A820u;
        goto label_23a820;
    }
    ctx->pc = 0x23A818u;
    {
        const bool branch_taken_0x23a818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a818) {
            ctx->pc = 0x23A834u;
            goto label_23a834;
        }
    }
    ctx->pc = 0x23A820u;
label_23a820:
    // 0x23a820: 0x8f829d90  lw          $v0, -0x6270($gp)
    ctx->pc = 0x23a820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942096)));
label_23a824:
    // 0x23a824: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23a824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23a828:
    // 0x23a828: 0xaf829d90  sw          $v0, -0x6270($gp)
    ctx->pc = 0x23a828u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942096), GPR_U32(ctx, 2));
label_23a82c:
    // 0x23a82c: 0x1440ff21  bnez        $v0, . + 4 + (-0xDF << 2)
label_23a830:
    if (ctx->pc == 0x23A830u) {
        ctx->pc = 0x23A834u;
        goto label_23a834;
    }
    ctx->pc = 0x23A82Cu;
    {
        const bool branch_taken_0x23a82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a82c) {
            ctx->pc = 0x23A4B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a4b4;
        }
    }
    ctx->pc = 0x23A834u;
label_23a834:
    // 0x23a834: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23a834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a838:
    // 0x23a838: 0x10000008  b           . + 4 + (0x8 << 2)
label_23a83c:
    if (ctx->pc == 0x23A83Cu) {
        ctx->pc = 0x23A840u;
        goto label_23a840;
    }
    ctx->pc = 0x23A838u;
    {
        const bool branch_taken_0x23a838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a838) {
            ctx->pc = 0x23A85Cu;
            goto label_23a85c;
        }
    }
    ctx->pc = 0x23A840u;
label_23a840:
    // 0x23a840: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x23a840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_23a844:
    // 0x23a844: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x23a844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_23a848:
    // 0x23a848: 0x8c4300a0  lw          $v1, 0xA0($v0)
    ctx->pc = 0x23a848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_23a84c:
    // 0x23a84c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x23a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_23a850:
    // 0x23a850: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x23a850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_23a854:
    // 0x23a854: 0xac4300bc  sw          $v1, 0xBC($v0)
    ctx->pc = 0x23a854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 3));
label_23a858:
    // 0x23a858: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23a858u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_23a85c:
    // 0x23a85c: 0x2a220007  slti        $v0, $s1, 0x7
    ctx->pc = 0x23a85cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
label_23a860:
    // 0x23a860: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_23a864:
    if (ctx->pc == 0x23A864u) {
        ctx->pc = 0x23A868u;
        goto label_23a868;
    }
    ctx->pc = 0x23A860u;
    {
        const bool branch_taken_0x23a860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a860) {
            ctx->pc = 0x23A840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a840;
        }
    }
    ctx->pc = 0x23A868u;
label_23a868:
    // 0x23a868: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23a868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a86c:
    // 0x23a86c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x23a86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23a870:
    // 0x23a870: 0xc116d44  jal         func_45B510
label_23a874:
    if (ctx->pc == 0x23A874u) {
        ctx->pc = 0x23A878u;
        goto label_23a878;
    }
    ctx->pc = 0x23A870u;
    SET_GPR_U32(ctx, 31, 0x23A878u);
    ctx->pc = 0x45B510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45B510u, 0x23A870u, 0x23A878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A878u;
label_23a878:
    // 0x23a878: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x23a878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_23a87c:
    // 0x23a87c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23a87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a880:
    // 0x23a880: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x23a880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23a884:
    // 0x23a884: 0xc116d44  jal         func_45B510
label_23a888:
    if (ctx->pc == 0x23A888u) {
        ctx->pc = 0x23A88Cu;
        goto label_23a88c;
    }
    ctx->pc = 0x23A884u;
    SET_GPR_U32(ctx, 31, 0x23A88Cu);
    ctx->pc = 0x45B510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45B510u, 0x23A884u, 0x23A88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A88Cu;
label_23a88c:
    // 0x23a88c: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x23a88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_23a890:
    // 0x23a890: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23a890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a894:
    // 0x23a894: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x23a894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_23a898:
    // 0x23a898: 0xc116d44  jal         func_45B510
label_23a89c:
    if (ctx->pc == 0x23A89Cu) {
        ctx->pc = 0x23A8A0u;
        goto label_23a8a0;
    }
    ctx->pc = 0x23A898u;
    SET_GPR_U32(ctx, 31, 0x23A8A0u);
    ctx->pc = 0x45B510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45B510u, 0x23A898u, 0x23A8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A8A0u;
label_23a8a0:
    // 0x23a8a0: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x23a8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_23a8a4:
    // 0x23a8a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23a8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a8a8:
    // 0x23a8a8: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x23a8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_23a8ac:
    // 0x23a8ac: 0xc116d44  jal         func_45B510
label_23a8b0:
    if (ctx->pc == 0x23A8B0u) {
        ctx->pc = 0x23A8B4u;
        goto label_23a8b4;
    }
    ctx->pc = 0x23A8ACu;
    SET_GPR_U32(ctx, 31, 0x23A8B4u);
    ctx->pc = 0x45B510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45B510u, 0x23A8ACu, 0x23A8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A8B4u;
label_23a8b4:
    // 0x23a8b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a8b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a8b8:
    // 0x23a8b8: 0x0  nop
    ctx->pc = 0x23a8b8u;
    // NOP
label_23a8bc:
    // 0x23a8bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23a8bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_23a8c0:
    // 0x23a8c0: 0xe7a002a8  swc1        $f0, 0x2A8($sp)
    ctx->pc = 0x23a8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
label_23a8c4:
    // 0x23a8c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23a8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a8c8:
    // 0x23a8c8: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x23a8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_23a8cc:
    // 0x23a8cc: 0xc116d44  jal         func_45B510
label_23a8d0:
    if (ctx->pc == 0x23A8D0u) {
        ctx->pc = 0x23A8D4u;
        goto label_23a8d4;
    }
    ctx->pc = 0x23A8CCu;
    SET_GPR_U32(ctx, 31, 0x23A8D4u);
    ctx->pc = 0x45B510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45B510u, 0x23A8CCu, 0x23A8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A8D4u;
label_23a8d4:
    // 0x23a8d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a8d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a8d8:
    // 0x23a8d8: 0x0  nop
    ctx->pc = 0x23a8d8u;
    // NOP
label_23a8dc:
    // 0x23a8dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23a8dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_23a8e0:
    // 0x23a8e0: 0xe7a002a4  swc1        $f0, 0x2A4($sp)
    ctx->pc = 0x23a8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
label_23a8e4:
    // 0x23a8e4: 0xc7a102a8  lwc1        $f1, 0x2A8($sp)
    ctx->pc = 0x23a8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23a8e8:
    // 0x23a8e8: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x23a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
label_23a8ec:
    // 0x23a8ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a8ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a8f0:
    // 0x23a8f0: 0x0  nop
    ctx->pc = 0x23a8f0u;
    // NOP
label_23a8f4:
    // 0x23a8f4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x23a8f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_23a8f8:
    // 0x23a8f8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x23a8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_23a8fc:
    // 0x23a8fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a8fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a900:
    // 0x23a900: 0x0  nop
    ctx->pc = 0x23a900u;
    // NOP
label_23a904:
    // 0x23a904: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x23a904u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_23a908:
    // 0x23a908: 0xe7a002a8  swc1        $f0, 0x2A8($sp)
    ctx->pc = 0x23a908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
label_23a90c:
    // 0x23a90c: 0xc7a102a4  lwc1        $f1, 0x2A4($sp)
    ctx->pc = 0x23a90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23a910:
    // 0x23a910: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x23a910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
label_23a914:
    // 0x23a914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a918:
    // 0x23a918: 0x0  nop
    ctx->pc = 0x23a918u;
    // NOP
label_23a91c:
    // 0x23a91c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x23a91cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_23a920:
    // 0x23a920: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x23a920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_23a924:
    // 0x23a924: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23a924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23a928:
    // 0x23a928: 0x0  nop
    ctx->pc = 0x23a928u;
    // NOP
label_23a92c:
    // 0x23a92c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x23a92cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_23a930:
    // 0x23a930: 0xe7a002a4  swc1        $f0, 0x2A4($sp)
    ctx->pc = 0x23a930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
label_23a934:
    // 0x23a934: 0xc7a102a8  lwc1        $f1, 0x2A8($sp)
    ctx->pc = 0x23a934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23a938:
    // 0x23a938: 0xc7808430  lwc1        $f0, -0x7BD0($gp)
    ctx->pc = 0x23a938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a93c:
    // 0x23a93c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23a93cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23a940:
    // 0x23a940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23a944:
    // 0x23a944: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_23a948:
    if (ctx->pc == 0x23A948u) {
        ctx->pc = 0x23A94Cu;
        goto label_23a94c;
    }
    ctx->pc = 0x23A944u;
    {
        const bool branch_taken_0x23a944 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a944) {
            ctx->pc = 0x23A950u;
            goto label_23a950;
        }
    }
    ctx->pc = 0x23A94Cu;
label_23a94c:
    // 0x23a94c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23a94cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a950:
    // 0x23a950: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23a950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23a954:
    // 0x23a954: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x23a954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_23a958:
    // 0x23a958: 0xc7a102a8  lwc1        $f1, 0x2A8($sp)
    ctx->pc = 0x23a958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23a95c:
    // 0x23a95c: 0xc7808280  lwc1        $f0, -0x7D80($gp)
    ctx->pc = 0x23a95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a960:
    // 0x23a960: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23a960u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23a964:
    // 0x23a964: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23a968:
    // 0x23a968: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_23a96c:
    if (ctx->pc == 0x23A96Cu) {
        ctx->pc = 0x23A970u;
        goto label_23a970;
    }
    ctx->pc = 0x23A968u;
    {
        const bool branch_taken_0x23a968 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a968) {
            ctx->pc = 0x23A974u;
            goto label_23a974;
        }
    }
    ctx->pc = 0x23A970u;
label_23a970:
    // 0x23a970: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23a970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a974:
    // 0x23a974: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23a974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23a978:
    // 0x23a978: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x23a978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_23a97c:
    // 0x23a97c: 0xc7a102a4  lwc1        $f1, 0x2A4($sp)
    ctx->pc = 0x23a97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23a980:
    // 0x23a980: 0xc7808430  lwc1        $f0, -0x7BD0($gp)
    ctx->pc = 0x23a980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a984:
    // 0x23a984: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23a984u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23a988:
    // 0x23a988: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23a98c:
    // 0x23a98c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_23a990:
    if (ctx->pc == 0x23A990u) {
        ctx->pc = 0x23A994u;
        goto label_23a994;
    }
    ctx->pc = 0x23A98Cu;
    {
        const bool branch_taken_0x23a98c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a98c) {
            ctx->pc = 0x23A998u;
            goto label_23a998;
        }
    }
    ctx->pc = 0x23A994u;
label_23a994:
    // 0x23a994: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23a994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a998:
    // 0x23a998: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23a998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23a99c:
    // 0x23a99c: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x23a99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_23a9a0:
    // 0x23a9a0: 0xc7a102a4  lwc1        $f1, 0x2A4($sp)
    ctx->pc = 0x23a9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23a9a4:
    // 0x23a9a4: 0xc7808280  lwc1        $f0, -0x7D80($gp)
    ctx->pc = 0x23a9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23a9a8:
    // 0x23a9a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23a9a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23a9ac:
    // 0x23a9ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23a9b0:
    // 0x23a9b0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_23a9b4:
    if (ctx->pc == 0x23A9B4u) {
        ctx->pc = 0x23A9B8u;
        goto label_23a9b8;
    }
    ctx->pc = 0x23A9B0u;
    {
        const bool branch_taken_0x23a9b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a9b0) {
            ctx->pc = 0x23A9BCu;
            goto label_23a9bc;
        }
    }
    ctx->pc = 0x23A9B8u;
label_23a9b8:
    // 0x23a9b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23a9b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a9bc:
    // 0x23a9bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23a9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23a9c0:
    // 0x23a9c0: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x23a9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_23a9c4:
    // 0x23a9c4: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x23a9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_23a9c8:
    // 0x23a9c8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x23a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_23a9cc:
    // 0x23a9cc: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_23a9d0:
    if (ctx->pc == 0x23A9D0u) {
        ctx->pc = 0x23A9D4u;
        goto label_23a9d4;
    }
    ctx->pc = 0x23A9CCu;
    {
        const bool branch_taken_0x23a9cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a9cc) {
            ctx->pc = 0x23A9F4u;
            goto label_23a9f4;
        }
    }
    ctx->pc = 0x23A9D4u;
label_23a9d4:
    // 0x23a9d4: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x23a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_23a9d8:
    // 0x23a9d8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x23a9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_23a9dc:
    // 0x23a9dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23a9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23a9e0:
    // 0x23a9e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23a9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a9e4:
    // 0x23a9e4: 0x0  nop
    ctx->pc = 0x23a9e4u;
    // NOP
label_23a9e8:
    // 0x23a9e8: 0x0  nop
    ctx->pc = 0x23a9e8u;
    // NOP
label_23a9ec:
    // 0x23a9ec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_23a9f0:
    if (ctx->pc == 0x23A9F0u) {
        ctx->pc = 0x23A9F4u;
        goto label_23a9f4;
    }
    ctx->pc = 0x23A9ECu;
    {
        const bool branch_taken_0x23a9ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a9ec) {
            ctx->pc = 0x23A9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a9d8;
        }
    }
    ctx->pc = 0x23A9F4u;
label_23a9f4:
    // 0x23a9f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23a9f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a9f8:
    // 0x23a9f8: 0x10000027  b           . + 4 + (0x27 << 2)
label_23a9fc:
    if (ctx->pc == 0x23A9FCu) {
        ctx->pc = 0x23AA00u;
        goto label_23aa00;
    }
    ctx->pc = 0x23A9F8u;
    {
        const bool branch_taken_0x23a9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a9f8) {
            ctx->pc = 0x23AA98u;
            goto label_23aa98;
        }
    }
    ctx->pc = 0x23AA00u;
label_23aa00:
    // 0x23aa00: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x23aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_23aa04:
    // 0x23aa04: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x23aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_23aa08:
    // 0x23aa08: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x23aa08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_23aa0c:
    // 0x23aa0c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x23aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_23aa10:
    // 0x23aa10: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x23aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_23aa14:
    // 0x23aa14: 0x8c4200a0  lw          $v0, 0xA0($v0)
    ctx->pc = 0x23aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_23aa18:
    // 0x23aa18: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_23aa1c:
    if (ctx->pc == 0x23AA1Cu) {
        ctx->pc = 0x23AA20u;
        goto label_23aa20;
    }
    ctx->pc = 0x23AA18u;
    {
        const bool branch_taken_0x23aa18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23aa18) {
            ctx->pc = 0x23AA90u;
            goto label_23aa90;
        }
    }
    ctx->pc = 0x23AA20u;
label_23aa20:
    // 0x23aa20: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x23aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_23aa24:
    // 0x23aa24: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x23aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_23aa28:
    // 0x23aa28: 0x8c4200a0  lw          $v0, 0xA0($v0)
    ctx->pc = 0x23aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_23aa2c:
    // 0x23aa2c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_23aa30:
    if (ctx->pc == 0x23AA30u) {
        ctx->pc = 0x23AA34u;
        goto label_23aa34;
    }
    ctx->pc = 0x23AA2Cu;
    {
        const bool branch_taken_0x23aa2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23aa2c) {
            ctx->pc = 0x23AA90u;
            goto label_23aa90;
        }
    }
    ctx->pc = 0x23AA34u;
label_23aa34:
    // 0x23aa34: 0x2e210007  sltiu       $at, $s1, 0x7
    ctx->pc = 0x23aa34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_23aa38:
    // 0x23aa38: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_23aa3c:
    if (ctx->pc == 0x23AA3Cu) {
        ctx->pc = 0x23AA40u;
        goto label_23aa40;
    }
    ctx->pc = 0x23AA38u;
    {
        const bool branch_taken_0x23aa38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23aa38) {
            ctx->pc = 0x23AA90u;
            goto label_23aa90;
        }
    }
    ctx->pc = 0x23AA40u;
label_23aa40:
    // 0x23aa40: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x23aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_23aa44:
    // 0x23aa44: 0x24428920  addiu       $v0, $v0, -0x76E0
    ctx->pc = 0x23aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936864));
label_23aa48:
    // 0x23aa48: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x23aa48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_23aa4c:
    // 0x23aa4c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x23aa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_23aa50:
    // 0x23aa50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23aa54:
    // 0x23aa54: 0x400008  jr          $v0
label_23aa58:
    if (ctx->pc == 0x23AA58u) {
        ctx->pc = 0x23AA5Cu;
        goto label_23aa5c;
    }
    ctx->pc = 0x23AA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23AA5Cu: goto label_23aa5c;
            case 0x23AA70u: goto label_23aa70;
            case 0x23AA84u: goto label_23aa84;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AA54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23AA5Cu;
label_23aa5c:
    // 0x23aa5c: 0x8fa20274  lw          $v0, 0x274($sp)
    ctx->pc = 0x23aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_23aa60:
    // 0x23aa60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23aa64:
    // 0x23aa64: 0xafa20274  sw          $v0, 0x274($sp)
    ctx->pc = 0x23aa64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
label_23aa68:
    // 0x23aa68: 0x10000009  b           . + 4 + (0x9 << 2)
label_23aa6c:
    if (ctx->pc == 0x23AA6Cu) {
        ctx->pc = 0x23AA70u;
        goto label_23aa70;
    }
    ctx->pc = 0x23AA68u;
    {
        const bool branch_taken_0x23aa68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23aa68) {
            ctx->pc = 0x23AA90u;
            goto label_23aa90;
        }
    }
    ctx->pc = 0x23AA70u;
label_23aa70:
    // 0x23aa70: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x23aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_23aa74:
    // 0x23aa74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23aa78:
    // 0x23aa78: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x23aa78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_23aa7c:
    // 0x23aa7c: 0x10000004  b           . + 4 + (0x4 << 2)
label_23aa80:
    if (ctx->pc == 0x23AA80u) {
        ctx->pc = 0x23AA84u;
        goto label_23aa84;
    }
    ctx->pc = 0x23AA7Cu;
    {
        const bool branch_taken_0x23aa7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23aa7c) {
            ctx->pc = 0x23AA90u;
            goto label_23aa90;
        }
    }
    ctx->pc = 0x23AA84u;
label_23aa84:
    // 0x23aa84: 0x8fa40278  lw          $a0, 0x278($sp)
    ctx->pc = 0x23aa84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
label_23aa88:
    // 0x23aa88: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x23aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23aa8c:
    // 0x23aa8c: 0xafa20278  sw          $v0, 0x278($sp)
    ctx->pc = 0x23aa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 2));
label_23aa90:
    // 0x23aa90: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x23aa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_23aa94:
    // 0x23aa94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23aa94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23aa98:
    // 0x23aa98: 0x2a220007  slti        $v0, $s1, 0x7
    ctx->pc = 0x23aa98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
label_23aa9c:
    // 0x23aa9c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_23aaa0:
    if (ctx->pc == 0x23AAA0u) {
        ctx->pc = 0x23AAA4u;
        goto label_23aaa4;
    }
    ctx->pc = 0x23AA9Cu;
    {
        const bool branch_taken_0x23aa9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23aa9c) {
            ctx->pc = 0x23AA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23aa00;
        }
    }
    ctx->pc = 0x23AAA4u;
label_23aaa4:
    // 0x23aaa4: 0x1000fe83  b           . + 4 + (-0x17D << 2)
label_23aaa8:
    if (ctx->pc == 0x23AAA8u) {
        ctx->pc = 0x23AAACu;
        goto label_23aaac;
    }
    ctx->pc = 0x23AAA4u;
    {
        const bool branch_taken_0x23aaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23aaa4) {
            ctx->pc = 0x23A4B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a4b4;
        }
    }
    ctx->pc = 0x23AAACu;
label_23aaac:
    // 0x23aaac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x23aaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_23aab0:
    // 0x23aab0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x23aab0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_23aab4:
    // 0x23aab4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x23aab4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_23aab8:
    // 0x23aab8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x23aab8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_23aabc:
    // 0x23aabc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x23aabcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23aac0:
    // 0x23aac0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23aac0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23aac4:
    // 0x23aac4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23aac4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23aac8:
    // 0x23aac8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23aac8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23aacc:
    // 0x23aacc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23aaccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23aad0:
    // 0x23aad0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23aad0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23aad4:
    // 0x23aad4: 0x27bd02e0  addiu       $sp, $sp, 0x2E0
    ctx->pc = 0x23aad4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_23aad8:
    // 0x23aad8: 0x3e00008  jr          $ra
label_23aadc:
    if (ctx->pc == 0x23AADCu) {
        ctx->pc = 0x23AAE0u;
        goto label_fallthrough_0x23aad8;
    }
    ctx->pc = 0x23AAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AAD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23aad8:
    ctx->pc = 0x23AAE0u;
}
