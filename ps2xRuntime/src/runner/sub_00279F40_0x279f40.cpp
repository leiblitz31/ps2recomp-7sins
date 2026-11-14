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

// Function: sub_00279F40
// Address: 0x279f40 - 0x27a5b0
void sub_00279F40_0x279f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279F40_0x279f40");
#endif

    switch (ctx->pc) {
        case 0x279f40u: goto label_279f40;
        case 0x279f44u: goto label_279f44;
        case 0x279f48u: goto label_279f48;
        case 0x279f4cu: goto label_279f4c;
        case 0x279f50u: goto label_279f50;
        case 0x279f54u: goto label_279f54;
        case 0x279f58u: goto label_279f58;
        case 0x279f5cu: goto label_279f5c;
        case 0x279f60u: goto label_279f60;
        case 0x279f64u: goto label_279f64;
        case 0x279f68u: goto label_279f68;
        case 0x279f6cu: goto label_279f6c;
        case 0x279f70u: goto label_279f70;
        case 0x279f74u: goto label_279f74;
        case 0x279f78u: goto label_279f78;
        case 0x279f7cu: goto label_279f7c;
        case 0x279f80u: goto label_279f80;
        case 0x279f84u: goto label_279f84;
        case 0x279f88u: goto label_279f88;
        case 0x279f8cu: goto label_279f8c;
        case 0x279f90u: goto label_279f90;
        case 0x279f94u: goto label_279f94;
        case 0x279f98u: goto label_279f98;
        case 0x279f9cu: goto label_279f9c;
        case 0x279fa0u: goto label_279fa0;
        case 0x279fa4u: goto label_279fa4;
        case 0x279fa8u: goto label_279fa8;
        case 0x279facu: goto label_279fac;
        case 0x279fb0u: goto label_279fb0;
        case 0x279fb4u: goto label_279fb4;
        case 0x279fb8u: goto label_279fb8;
        case 0x279fbcu: goto label_279fbc;
        case 0x279fc0u: goto label_279fc0;
        case 0x279fc4u: goto label_279fc4;
        case 0x279fc8u: goto label_279fc8;
        case 0x279fccu: goto label_279fcc;
        case 0x279fd0u: goto label_279fd0;
        case 0x279fd4u: goto label_279fd4;
        case 0x279fd8u: goto label_279fd8;
        case 0x279fdcu: goto label_279fdc;
        case 0x279fe0u: goto label_279fe0;
        case 0x279fe4u: goto label_279fe4;
        case 0x279fe8u: goto label_279fe8;
        case 0x279fecu: goto label_279fec;
        case 0x279ff0u: goto label_279ff0;
        case 0x279ff4u: goto label_279ff4;
        case 0x279ff8u: goto label_279ff8;
        case 0x279ffcu: goto label_279ffc;
        case 0x27a000u: goto label_27a000;
        case 0x27a004u: goto label_27a004;
        case 0x27a008u: goto label_27a008;
        case 0x27a00cu: goto label_27a00c;
        case 0x27a010u: goto label_27a010;
        case 0x27a014u: goto label_27a014;
        case 0x27a018u: goto label_27a018;
        case 0x27a01cu: goto label_27a01c;
        case 0x27a020u: goto label_27a020;
        case 0x27a024u: goto label_27a024;
        case 0x27a028u: goto label_27a028;
        case 0x27a02cu: goto label_27a02c;
        case 0x27a030u: goto label_27a030;
        case 0x27a034u: goto label_27a034;
        case 0x27a038u: goto label_27a038;
        case 0x27a03cu: goto label_27a03c;
        case 0x27a040u: goto label_27a040;
        case 0x27a044u: goto label_27a044;
        case 0x27a048u: goto label_27a048;
        case 0x27a04cu: goto label_27a04c;
        case 0x27a050u: goto label_27a050;
        case 0x27a054u: goto label_27a054;
        case 0x27a058u: goto label_27a058;
        case 0x27a05cu: goto label_27a05c;
        case 0x27a060u: goto label_27a060;
        case 0x27a064u: goto label_27a064;
        case 0x27a068u: goto label_27a068;
        case 0x27a06cu: goto label_27a06c;
        case 0x27a070u: goto label_27a070;
        case 0x27a074u: goto label_27a074;
        case 0x27a078u: goto label_27a078;
        case 0x27a07cu: goto label_27a07c;
        case 0x27a080u: goto label_27a080;
        case 0x27a084u: goto label_27a084;
        case 0x27a088u: goto label_27a088;
        case 0x27a08cu: goto label_27a08c;
        case 0x27a090u: goto label_27a090;
        case 0x27a094u: goto label_27a094;
        case 0x27a098u: goto label_27a098;
        case 0x27a09cu: goto label_27a09c;
        case 0x27a0a0u: goto label_27a0a0;
        case 0x27a0a4u: goto label_27a0a4;
        case 0x27a0a8u: goto label_27a0a8;
        case 0x27a0acu: goto label_27a0ac;
        case 0x27a0b0u: goto label_27a0b0;
        case 0x27a0b4u: goto label_27a0b4;
        case 0x27a0b8u: goto label_27a0b8;
        case 0x27a0bcu: goto label_27a0bc;
        case 0x27a0c0u: goto label_27a0c0;
        case 0x27a0c4u: goto label_27a0c4;
        case 0x27a0c8u: goto label_27a0c8;
        case 0x27a0ccu: goto label_27a0cc;
        case 0x27a0d0u: goto label_27a0d0;
        case 0x27a0d4u: goto label_27a0d4;
        case 0x27a0d8u: goto label_27a0d8;
        case 0x27a0dcu: goto label_27a0dc;
        case 0x27a0e0u: goto label_27a0e0;
        case 0x27a0e4u: goto label_27a0e4;
        case 0x27a0e8u: goto label_27a0e8;
        case 0x27a0ecu: goto label_27a0ec;
        case 0x27a0f0u: goto label_27a0f0;
        case 0x27a0f4u: goto label_27a0f4;
        case 0x27a0f8u: goto label_27a0f8;
        case 0x27a0fcu: goto label_27a0fc;
        case 0x27a100u: goto label_27a100;
        case 0x27a104u: goto label_27a104;
        case 0x27a108u: goto label_27a108;
        case 0x27a10cu: goto label_27a10c;
        case 0x27a110u: goto label_27a110;
        case 0x27a114u: goto label_27a114;
        case 0x27a118u: goto label_27a118;
        case 0x27a11cu: goto label_27a11c;
        case 0x27a120u: goto label_27a120;
        case 0x27a124u: goto label_27a124;
        case 0x27a128u: goto label_27a128;
        case 0x27a12cu: goto label_27a12c;
        case 0x27a130u: goto label_27a130;
        case 0x27a134u: goto label_27a134;
        case 0x27a138u: goto label_27a138;
        case 0x27a13cu: goto label_27a13c;
        case 0x27a140u: goto label_27a140;
        case 0x27a144u: goto label_27a144;
        case 0x27a148u: goto label_27a148;
        case 0x27a14cu: goto label_27a14c;
        case 0x27a150u: goto label_27a150;
        case 0x27a154u: goto label_27a154;
        case 0x27a158u: goto label_27a158;
        case 0x27a15cu: goto label_27a15c;
        case 0x27a160u: goto label_27a160;
        case 0x27a164u: goto label_27a164;
        case 0x27a168u: goto label_27a168;
        case 0x27a16cu: goto label_27a16c;
        case 0x27a170u: goto label_27a170;
        case 0x27a174u: goto label_27a174;
        case 0x27a178u: goto label_27a178;
        case 0x27a17cu: goto label_27a17c;
        case 0x27a180u: goto label_27a180;
        case 0x27a184u: goto label_27a184;
        case 0x27a188u: goto label_27a188;
        case 0x27a18cu: goto label_27a18c;
        case 0x27a190u: goto label_27a190;
        case 0x27a194u: goto label_27a194;
        case 0x27a198u: goto label_27a198;
        case 0x27a19cu: goto label_27a19c;
        case 0x27a1a0u: goto label_27a1a0;
        case 0x27a1a4u: goto label_27a1a4;
        case 0x27a1a8u: goto label_27a1a8;
        case 0x27a1acu: goto label_27a1ac;
        case 0x27a1b0u: goto label_27a1b0;
        case 0x27a1b4u: goto label_27a1b4;
        case 0x27a1b8u: goto label_27a1b8;
        case 0x27a1bcu: goto label_27a1bc;
        case 0x27a1c0u: goto label_27a1c0;
        case 0x27a1c4u: goto label_27a1c4;
        case 0x27a1c8u: goto label_27a1c8;
        case 0x27a1ccu: goto label_27a1cc;
        case 0x27a1d0u: goto label_27a1d0;
        case 0x27a1d4u: goto label_27a1d4;
        case 0x27a1d8u: goto label_27a1d8;
        case 0x27a1dcu: goto label_27a1dc;
        case 0x27a1e0u: goto label_27a1e0;
        case 0x27a1e4u: goto label_27a1e4;
        case 0x27a1e8u: goto label_27a1e8;
        case 0x27a1ecu: goto label_27a1ec;
        case 0x27a1f0u: goto label_27a1f0;
        case 0x27a1f4u: goto label_27a1f4;
        case 0x27a1f8u: goto label_27a1f8;
        case 0x27a1fcu: goto label_27a1fc;
        case 0x27a200u: goto label_27a200;
        case 0x27a204u: goto label_27a204;
        case 0x27a208u: goto label_27a208;
        case 0x27a20cu: goto label_27a20c;
        case 0x27a210u: goto label_27a210;
        case 0x27a214u: goto label_27a214;
        case 0x27a218u: goto label_27a218;
        case 0x27a21cu: goto label_27a21c;
        case 0x27a220u: goto label_27a220;
        case 0x27a224u: goto label_27a224;
        case 0x27a228u: goto label_27a228;
        case 0x27a22cu: goto label_27a22c;
        case 0x27a230u: goto label_27a230;
        case 0x27a234u: goto label_27a234;
        case 0x27a238u: goto label_27a238;
        case 0x27a23cu: goto label_27a23c;
        case 0x27a240u: goto label_27a240;
        case 0x27a244u: goto label_27a244;
        case 0x27a248u: goto label_27a248;
        case 0x27a24cu: goto label_27a24c;
        case 0x27a250u: goto label_27a250;
        case 0x27a254u: goto label_27a254;
        case 0x27a258u: goto label_27a258;
        case 0x27a25cu: goto label_27a25c;
        case 0x27a260u: goto label_27a260;
        case 0x27a264u: goto label_27a264;
        case 0x27a268u: goto label_27a268;
        case 0x27a26cu: goto label_27a26c;
        case 0x27a270u: goto label_27a270;
        case 0x27a274u: goto label_27a274;
        case 0x27a278u: goto label_27a278;
        case 0x27a27cu: goto label_27a27c;
        case 0x27a280u: goto label_27a280;
        case 0x27a284u: goto label_27a284;
        case 0x27a288u: goto label_27a288;
        case 0x27a28cu: goto label_27a28c;
        case 0x27a290u: goto label_27a290;
        case 0x27a294u: goto label_27a294;
        case 0x27a298u: goto label_27a298;
        case 0x27a29cu: goto label_27a29c;
        case 0x27a2a0u: goto label_27a2a0;
        case 0x27a2a4u: goto label_27a2a4;
        case 0x27a2a8u: goto label_27a2a8;
        case 0x27a2acu: goto label_27a2ac;
        case 0x27a2b0u: goto label_27a2b0;
        case 0x27a2b4u: goto label_27a2b4;
        case 0x27a2b8u: goto label_27a2b8;
        case 0x27a2bcu: goto label_27a2bc;
        case 0x27a2c0u: goto label_27a2c0;
        case 0x27a2c4u: goto label_27a2c4;
        case 0x27a2c8u: goto label_27a2c8;
        case 0x27a2ccu: goto label_27a2cc;
        case 0x27a2d0u: goto label_27a2d0;
        case 0x27a2d4u: goto label_27a2d4;
        case 0x27a2d8u: goto label_27a2d8;
        case 0x27a2dcu: goto label_27a2dc;
        case 0x27a2e0u: goto label_27a2e0;
        case 0x27a2e4u: goto label_27a2e4;
        case 0x27a2e8u: goto label_27a2e8;
        case 0x27a2ecu: goto label_27a2ec;
        case 0x27a2f0u: goto label_27a2f0;
        case 0x27a2f4u: goto label_27a2f4;
        case 0x27a2f8u: goto label_27a2f8;
        case 0x27a2fcu: goto label_27a2fc;
        case 0x27a300u: goto label_27a300;
        case 0x27a304u: goto label_27a304;
        case 0x27a308u: goto label_27a308;
        case 0x27a30cu: goto label_27a30c;
        case 0x27a310u: goto label_27a310;
        case 0x27a314u: goto label_27a314;
        case 0x27a318u: goto label_27a318;
        case 0x27a31cu: goto label_27a31c;
        case 0x27a320u: goto label_27a320;
        case 0x27a324u: goto label_27a324;
        case 0x27a328u: goto label_27a328;
        case 0x27a32cu: goto label_27a32c;
        case 0x27a330u: goto label_27a330;
        case 0x27a334u: goto label_27a334;
        case 0x27a338u: goto label_27a338;
        case 0x27a33cu: goto label_27a33c;
        case 0x27a340u: goto label_27a340;
        case 0x27a344u: goto label_27a344;
        case 0x27a348u: goto label_27a348;
        case 0x27a34cu: goto label_27a34c;
        case 0x27a350u: goto label_27a350;
        case 0x27a354u: goto label_27a354;
        case 0x27a358u: goto label_27a358;
        case 0x27a35cu: goto label_27a35c;
        case 0x27a360u: goto label_27a360;
        case 0x27a364u: goto label_27a364;
        case 0x27a368u: goto label_27a368;
        case 0x27a36cu: goto label_27a36c;
        case 0x27a370u: goto label_27a370;
        case 0x27a374u: goto label_27a374;
        case 0x27a378u: goto label_27a378;
        case 0x27a37cu: goto label_27a37c;
        case 0x27a380u: goto label_27a380;
        case 0x27a384u: goto label_27a384;
        case 0x27a388u: goto label_27a388;
        case 0x27a38cu: goto label_27a38c;
        case 0x27a390u: goto label_27a390;
        case 0x27a394u: goto label_27a394;
        case 0x27a398u: goto label_27a398;
        case 0x27a39cu: goto label_27a39c;
        case 0x27a3a0u: goto label_27a3a0;
        case 0x27a3a4u: goto label_27a3a4;
        case 0x27a3a8u: goto label_27a3a8;
        case 0x27a3acu: goto label_27a3ac;
        case 0x27a3b0u: goto label_27a3b0;
        case 0x27a3b4u: goto label_27a3b4;
        case 0x27a3b8u: goto label_27a3b8;
        case 0x27a3bcu: goto label_27a3bc;
        case 0x27a3c0u: goto label_27a3c0;
        case 0x27a3c4u: goto label_27a3c4;
        case 0x27a3c8u: goto label_27a3c8;
        case 0x27a3ccu: goto label_27a3cc;
        case 0x27a3d0u: goto label_27a3d0;
        case 0x27a3d4u: goto label_27a3d4;
        case 0x27a3d8u: goto label_27a3d8;
        case 0x27a3dcu: goto label_27a3dc;
        case 0x27a3e0u: goto label_27a3e0;
        case 0x27a3e4u: goto label_27a3e4;
        case 0x27a3e8u: goto label_27a3e8;
        case 0x27a3ecu: goto label_27a3ec;
        case 0x27a3f0u: goto label_27a3f0;
        case 0x27a3f4u: goto label_27a3f4;
        case 0x27a3f8u: goto label_27a3f8;
        case 0x27a3fcu: goto label_27a3fc;
        case 0x27a400u: goto label_27a400;
        case 0x27a404u: goto label_27a404;
        case 0x27a408u: goto label_27a408;
        case 0x27a40cu: goto label_27a40c;
        case 0x27a410u: goto label_27a410;
        case 0x27a414u: goto label_27a414;
        case 0x27a418u: goto label_27a418;
        case 0x27a41cu: goto label_27a41c;
        case 0x27a420u: goto label_27a420;
        case 0x27a424u: goto label_27a424;
        case 0x27a428u: goto label_27a428;
        case 0x27a42cu: goto label_27a42c;
        case 0x27a430u: goto label_27a430;
        case 0x27a434u: goto label_27a434;
        case 0x27a438u: goto label_27a438;
        case 0x27a43cu: goto label_27a43c;
        case 0x27a440u: goto label_27a440;
        case 0x27a444u: goto label_27a444;
        case 0x27a448u: goto label_27a448;
        case 0x27a44cu: goto label_27a44c;
        case 0x27a450u: goto label_27a450;
        case 0x27a454u: goto label_27a454;
        case 0x27a458u: goto label_27a458;
        case 0x27a45cu: goto label_27a45c;
        case 0x27a460u: goto label_27a460;
        case 0x27a464u: goto label_27a464;
        case 0x27a468u: goto label_27a468;
        case 0x27a46cu: goto label_27a46c;
        case 0x27a470u: goto label_27a470;
        case 0x27a474u: goto label_27a474;
        case 0x27a478u: goto label_27a478;
        case 0x27a47cu: goto label_27a47c;
        case 0x27a480u: goto label_27a480;
        case 0x27a484u: goto label_27a484;
        case 0x27a488u: goto label_27a488;
        case 0x27a48cu: goto label_27a48c;
        case 0x27a490u: goto label_27a490;
        case 0x27a494u: goto label_27a494;
        case 0x27a498u: goto label_27a498;
        case 0x27a49cu: goto label_27a49c;
        case 0x27a4a0u: goto label_27a4a0;
        case 0x27a4a4u: goto label_27a4a4;
        case 0x27a4a8u: goto label_27a4a8;
        case 0x27a4acu: goto label_27a4ac;
        case 0x27a4b0u: goto label_27a4b0;
        case 0x27a4b4u: goto label_27a4b4;
        case 0x27a4b8u: goto label_27a4b8;
        case 0x27a4bcu: goto label_27a4bc;
        case 0x27a4c0u: goto label_27a4c0;
        case 0x27a4c4u: goto label_27a4c4;
        case 0x27a4c8u: goto label_27a4c8;
        case 0x27a4ccu: goto label_27a4cc;
        case 0x27a4d0u: goto label_27a4d0;
        case 0x27a4d4u: goto label_27a4d4;
        case 0x27a4d8u: goto label_27a4d8;
        case 0x27a4dcu: goto label_27a4dc;
        case 0x27a4e0u: goto label_27a4e0;
        case 0x27a4e4u: goto label_27a4e4;
        case 0x27a4e8u: goto label_27a4e8;
        case 0x27a4ecu: goto label_27a4ec;
        case 0x27a4f0u: goto label_27a4f0;
        case 0x27a4f4u: goto label_27a4f4;
        case 0x27a4f8u: goto label_27a4f8;
        case 0x27a4fcu: goto label_27a4fc;
        case 0x27a500u: goto label_27a500;
        case 0x27a504u: goto label_27a504;
        case 0x27a508u: goto label_27a508;
        case 0x27a50cu: goto label_27a50c;
        case 0x27a510u: goto label_27a510;
        case 0x27a514u: goto label_27a514;
        case 0x27a518u: goto label_27a518;
        case 0x27a51cu: goto label_27a51c;
        case 0x27a520u: goto label_27a520;
        case 0x27a524u: goto label_27a524;
        case 0x27a528u: goto label_27a528;
        case 0x27a52cu: goto label_27a52c;
        case 0x27a530u: goto label_27a530;
        case 0x27a534u: goto label_27a534;
        case 0x27a538u: goto label_27a538;
        case 0x27a53cu: goto label_27a53c;
        case 0x27a540u: goto label_27a540;
        case 0x27a544u: goto label_27a544;
        case 0x27a548u: goto label_27a548;
        case 0x27a54cu: goto label_27a54c;
        case 0x27a550u: goto label_27a550;
        case 0x27a554u: goto label_27a554;
        case 0x27a558u: goto label_27a558;
        case 0x27a55cu: goto label_27a55c;
        case 0x27a560u: goto label_27a560;
        case 0x27a564u: goto label_27a564;
        case 0x27a568u: goto label_27a568;
        case 0x27a56cu: goto label_27a56c;
        case 0x27a570u: goto label_27a570;
        case 0x27a574u: goto label_27a574;
        case 0x27a578u: goto label_27a578;
        case 0x27a57cu: goto label_27a57c;
        case 0x27a580u: goto label_27a580;
        case 0x27a584u: goto label_27a584;
        case 0x27a588u: goto label_27a588;
        case 0x27a58cu: goto label_27a58c;
        case 0x27a590u: goto label_27a590;
        case 0x27a594u: goto label_27a594;
        case 0x27a598u: goto label_27a598;
        case 0x27a59cu: goto label_27a59c;
        case 0x27a5a0u: goto label_27a5a0;
        case 0x27a5a4u: goto label_27a5a4;
        case 0x27a5a8u: goto label_27a5a8;
        case 0x27a5acu: goto label_27a5ac;
        default: break;
    }

    ctx->pc = 0x279f40u;

label_279f40:
    // 0x279f40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x279f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_279f44:
    // 0x279f44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x279f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_279f48:
    // 0x279f48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x279f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_279f4c:
    // 0x279f4c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x279f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_279f50:
    // 0x279f50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x279f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_279f54:
    // 0x279f54: 0x3e00008  jr          $ra
label_279f58:
    if (ctx->pc == 0x279F58u) {
        ctx->pc = 0x279F5Cu;
        goto label_279f5c;
    }
    ctx->pc = 0x279F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279F5Cu;
label_279f5c:
    // 0x279f5c: 0x0  nop
    ctx->pc = 0x279f5cu;
    // NOP
label_279f60:
    // 0x279f60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_279f64:
    // 0x279f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_279f68:
    // 0x279f68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x279f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_279f6c:
    // 0x279f6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x279f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_279f70:
    // 0x279f70: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x279f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_279f74:
    // 0x279f74: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x279f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_279f78:
    // 0x279f78: 0xc0852b8  jal         func_214AE0
label_279f7c:
    if (ctx->pc == 0x279F7Cu) {
        ctx->pc = 0x279F80u;
        goto label_279f80;
    }
    ctx->pc = 0x279F78u;
    SET_GPR_U32(ctx, 31, 0x279F80u);
    ctx->pc = 0x214AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214AE0u, 0x279F78u, 0x279F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279F80u;
label_279f80:
    // 0x279f80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_279f84:
    // 0x279f84: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x279f84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_279f88:
    // 0x279f88: 0x3e00008  jr          $ra
label_279f8c:
    if (ctx->pc == 0x279F8Cu) {
        ctx->pc = 0x279F90u;
        goto label_279f90;
    }
    ctx->pc = 0x279F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279F90u;
label_279f90:
    // 0x279f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_279f94:
    // 0x279f94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_279f98:
    // 0x279f98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x279f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_279f9c:
    // 0x279f9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x279f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_279fa0:
    // 0x279fa0: 0xc0852c4  jal         func_214B10
label_279fa4:
    if (ctx->pc == 0x279FA4u) {
        ctx->pc = 0x279FA8u;
        goto label_279fa8;
    }
    ctx->pc = 0x279FA0u;
    SET_GPR_U32(ctx, 31, 0x279FA8u);
    ctx->pc = 0x214B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214B10u, 0x279FA0u, 0x279FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279FA8u;
label_279fa8:
    // 0x279fa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_279fac:
    // 0x279fac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x279facu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_279fb0:
    // 0x279fb0: 0x3e00008  jr          $ra
label_279fb4:
    if (ctx->pc == 0x279FB4u) {
        ctx->pc = 0x279FB8u;
        goto label_279fb8;
    }
    ctx->pc = 0x279FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279FB8u;
label_279fb8:
    // 0x279fb8: 0x0  nop
    ctx->pc = 0x279fb8u;
    // NOP
label_279fbc:
    // 0x279fbc: 0x0  nop
    ctx->pc = 0x279fbcu;
    // NOP
label_279fc0:
    // 0x279fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_279fc4:
    // 0x279fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_279fc8:
    // 0x279fc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x279fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_279fcc:
    // 0x279fcc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x279fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_279fd0:
    // 0x279fd0: 0xc0852d0  jal         func_214B40
label_279fd4:
    if (ctx->pc == 0x279FD4u) {
        ctx->pc = 0x279FD8u;
        goto label_279fd8;
    }
    ctx->pc = 0x279FD0u;
    SET_GPR_U32(ctx, 31, 0x279FD8u);
    ctx->pc = 0x214B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214B40u, 0x279FD0u, 0x279FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279FD8u;
label_279fd8:
    // 0x279fd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_279fdc:
    // 0x279fdc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x279fdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_279fe0:
    // 0x279fe0: 0x3e00008  jr          $ra
label_279fe4:
    if (ctx->pc == 0x279FE4u) {
        ctx->pc = 0x279FE8u;
        goto label_279fe8;
    }
    ctx->pc = 0x279FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279FE8u;
label_279fe8:
    // 0x279fe8: 0x0  nop
    ctx->pc = 0x279fe8u;
    // NOP
label_279fec:
    // 0x279fec: 0x0  nop
    ctx->pc = 0x279fecu;
    // NOP
label_279ff0:
    // 0x279ff0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x279ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_279ff4:
    // 0x279ff4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x279ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_279ff8:
    // 0x279ff8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x279ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_279ffc:
    // 0x279ffc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x279ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_27a000:
    // 0x27a000: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27a000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_27a004:
    // 0x27a004: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27a004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_27a008:
    // 0x27a008: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27a008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_27a00c:
    // 0x27a00c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27a00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27a010:
    // 0x27a010: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27a010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27a014:
    // 0x27a014: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27a014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27a018:
    // 0x27a018: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27a018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27a01c:
    // 0x27a01c: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x27a01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
label_27a020:
    // 0x27a020: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x27a020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
label_27a024:
    // 0x27a024: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x27a024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_27a028:
    // 0x27a028: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x27a028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_27a02c:
    // 0x27a02c: 0x10620135  beq         $v1, $v0, . + 4 + (0x135 << 2)
label_27a030:
    if (ctx->pc == 0x27A030u) {
        ctx->pc = 0x27A034u;
        goto label_27a034;
    }
    ctx->pc = 0x27A02Cu;
    {
        const bool branch_taken_0x27a02c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27a02c) {
            ctx->pc = 0x27A504u;
            goto label_27a504;
        }
    }
    ctx->pc = 0x27A034u;
label_27a034:
    // 0x27a034: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x27a034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_27a038:
    // 0x27a038: 0x10620118  beq         $v1, $v0, . + 4 + (0x118 << 2)
label_27a03c:
    if (ctx->pc == 0x27A03Cu) {
        ctx->pc = 0x27A040u;
        goto label_27a040;
    }
    ctx->pc = 0x27A038u;
    {
        const bool branch_taken_0x27a038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27a038) {
            ctx->pc = 0x27A49Cu;
            goto label_27a49c;
        }
    }
    ctx->pc = 0x27A040u;
label_27a040:
    // 0x27a040: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x27a040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_27a044:
    // 0x27a044: 0x106200fb  beq         $v1, $v0, . + 4 + (0xFB << 2)
label_27a048:
    if (ctx->pc == 0x27A048u) {
        ctx->pc = 0x27A04Cu;
        goto label_27a04c;
    }
    ctx->pc = 0x27A044u;
    {
        const bool branch_taken_0x27a044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27a044) {
            ctx->pc = 0x27A434u;
            goto label_27a434;
        }
    }
    ctx->pc = 0x27A04Cu;
label_27a04c:
    // 0x27a04c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27a04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27a050:
    // 0x27a050: 0x106200de  beq         $v1, $v0, . + 4 + (0xDE << 2)
label_27a054:
    if (ctx->pc == 0x27A054u) {
        ctx->pc = 0x27A058u;
        goto label_27a058;
    }
    ctx->pc = 0x27A050u;
    {
        const bool branch_taken_0x27a050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27a050) {
            ctx->pc = 0x27A3CCu;
            goto label_27a3cc;
        }
    }
    ctx->pc = 0x27A058u;
label_27a058:
    // 0x27a058: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27a058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27a05c:
    // 0x27a05c: 0x106200c0  beq         $v1, $v0, . + 4 + (0xC0 << 2)
label_27a060:
    if (ctx->pc == 0x27A060u) {
        ctx->pc = 0x27A064u;
        goto label_27a064;
    }
    ctx->pc = 0x27A05Cu;
    {
        const bool branch_taken_0x27a05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27a05c) {
            ctx->pc = 0x27A360u;
            goto label_27a360;
        }
    }
    ctx->pc = 0x27A064u;
label_27a064:
    // 0x27a064: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x27a064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_27a068:
    // 0x27a068: 0x106200a3  beq         $v1, $v0, . + 4 + (0xA3 << 2)
label_27a06c:
    if (ctx->pc == 0x27A06Cu) {
        ctx->pc = 0x27A070u;
        goto label_27a070;
    }
    ctx->pc = 0x27A068u;
    {
        const bool branch_taken_0x27a068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27a068) {
            ctx->pc = 0x27A2F8u;
            goto label_27a2f8;
        }
    }
    ctx->pc = 0x27A070u;
label_27a070:
    // 0x27a070: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x27a070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_27a074:
    // 0x27a074: 0x10620086  beq         $v1, $v0, . + 4 + (0x86 << 2)
label_27a078:
    if (ctx->pc == 0x27A078u) {
        ctx->pc = 0x27A07Cu;
        goto label_27a07c;
    }
    ctx->pc = 0x27A074u;
    {
        const bool branch_taken_0x27a074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27a074) {
            ctx->pc = 0x27A290u;
            goto label_27a290;
        }
    }
    ctx->pc = 0x27A07Cu;
label_27a07c:
    // 0x27a07c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_27a080:
    // 0x27a080: 0x10620063  beq         $v1, $v0, . + 4 + (0x63 << 2)
label_27a084:
    if (ctx->pc == 0x27A084u) {
        ctx->pc = 0x27A088u;
        goto label_27a088;
    }
    ctx->pc = 0x27A080u;
    {
        const bool branch_taken_0x27a080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27a080) {
            ctx->pc = 0x27A210u;
            goto label_27a210;
        }
    }
    ctx->pc = 0x27A088u;
label_27a088:
    // 0x27a088: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x27a088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_27a08c:
    // 0x27a08c: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
label_27a090:
    if (ctx->pc == 0x27A090u) {
        ctx->pc = 0x27A094u;
        goto label_27a094;
    }
    ctx->pc = 0x27A08Cu;
    {
        const bool branch_taken_0x27a08c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27a08c) {
            ctx->pc = 0x27A194u;
            goto label_27a194;
        }
    }
    ctx->pc = 0x27A094u;
label_27a094:
    // 0x27a094: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x27a094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_27a098:
    // 0x27a098: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
label_27a09c:
    if (ctx->pc == 0x27A09Cu) {
        ctx->pc = 0x27A0A0u;
        goto label_27a0a0;
    }
    ctx->pc = 0x27A098u;
    {
        const bool branch_taken_0x27a098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27a098) {
            ctx->pc = 0x27A124u;
            goto label_27a124;
        }
    }
    ctx->pc = 0x27A0A0u;
label_27a0a0:
    // 0x27a0a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27a0a4:
    // 0x27a0a4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_27a0a8:
    if (ctx->pc == 0x27A0A8u) {
        ctx->pc = 0x27A0ACu;
        goto label_27a0ac;
    }
    ctx->pc = 0x27A0A4u;
    {
        const bool branch_taken_0x27a0a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27a0a4) {
            ctx->pc = 0x27A0B4u;
            goto label_27a0b4;
        }
    }
    ctx->pc = 0x27A0ACu;
label_27a0ac:
    // 0x27a0ac: 0x1000012f  b           . + 4 + (0x12F << 2)
label_27a0b0:
    if (ctx->pc == 0x27A0B0u) {
        ctx->pc = 0x27A0B4u;
        goto label_27a0b4;
    }
    ctx->pc = 0x27A0ACu;
    {
        const bool branch_taken_0x27a0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a0ac) {
            ctx->pc = 0x27A56Cu;
            goto label_27a56c;
        }
    }
    ctx->pc = 0x27A0B4u;
label_27a0b4:
    // 0x27a0b4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x27a0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_27a0b8:
    // 0x27a0b8: 0xc119b68  jal         func_466DA0
label_27a0bc:
    if (ctx->pc == 0x27A0BCu) {
        ctx->pc = 0x27A0C0u;
        goto label_27a0c0;
    }
    ctx->pc = 0x27A0B8u;
    SET_GPR_U32(ctx, 31, 0x27A0C0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x27A0B8u, 0x27A0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A0C0u;
label_27a0c0:
    // 0x27a0c0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x27a0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_27a0c4:
    // 0x27a0c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27a0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a0c8:
    // 0x27a0c8: 0xc0400e0  jal         func_100380
label_27a0cc:
    if (ctx->pc == 0x27A0CCu) {
        ctx->pc = 0x27A0D0u;
        goto label_27a0d0;
    }
    ctx->pc = 0x27A0C8u;
    SET_GPR_U32(ctx, 31, 0x27A0D0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x27A0C8u, 0x27A0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A0D0u;
label_27a0d0:
    // 0x27a0d0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x27a0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_27a0d4:
    // 0x27a0d4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x27a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_27a0d8:
    // 0x27a0d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_27a0dc:
    if (ctx->pc == 0x27A0DCu) {
        ctx->pc = 0x27A0E0u;
        goto label_27a0e0;
    }
    ctx->pc = 0x27A0D8u;
    {
        const bool branch_taken_0x27a0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a0d8) {
            ctx->pc = 0x27A0F0u;
            goto label_27a0f0;
        }
    }
    ctx->pc = 0x27A0E0u;
label_27a0e0:
    // 0x27a0e0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x27a0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_27a0e4:
    // 0x27a0e4: 0xc0a1110  jal         func_284440
label_27a0e8:
    if (ctx->pc == 0x27A0E8u) {
        ctx->pc = 0x27A0ECu;
        goto label_27a0ec;
    }
    ctx->pc = 0x27A0E4u;
    SET_GPR_U32(ctx, 31, 0x27A0ECu);
    ctx->pc = 0x284440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284440u, 0x27A0E4u, 0x27A0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A0ECu;
label_27a0ec:
    // 0x27a0ec: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x27a0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_27a0f0:
    // 0x27a0f0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x27a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_27a0f4:
    // 0x27a0f4: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x27a0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
label_27a0f8:
    // 0x27a0f8: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x27a0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_27a0fc:
    // 0x27a0fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27a0fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27a100:
    // 0x27a100: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x27a100u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_27a104:
    // 0x27a104: 0x320f809  jalr        $t9
label_27a108:
    if (ctx->pc == 0x27A108u) {
        ctx->pc = 0x27A10Cu;
        goto label_27a10c;
    }
    ctx->pc = 0x27A104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27A10Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A104u, 0x27A10Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27A10Cu;
label_27a10c:
    // 0x27a10c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x27a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27a110:
    // 0x27a110: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x27a110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_27a114:
    // 0x27a114: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x27a114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_27a118:
    // 0x27a118: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x27a118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_27a11c:
    // 0x27a11c: 0x10000114  b           . + 4 + (0x114 << 2)
label_27a120:
    if (ctx->pc == 0x27A120u) {
        ctx->pc = 0x27A124u;
        goto label_27a124;
    }
    ctx->pc = 0x27A11Cu;
    {
        const bool branch_taken_0x27a11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a11c) {
            ctx->pc = 0x27A570u;
            goto label_27a570;
        }
    }
    ctx->pc = 0x27A124u;
label_27a124:
    // 0x27a124: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x27a124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_27a128:
    // 0x27a128: 0xc119b68  jal         func_466DA0
label_27a12c:
    if (ctx->pc == 0x27A12Cu) {
        ctx->pc = 0x27A130u;
        goto label_27a130;
    }
    ctx->pc = 0x27A128u;
    SET_GPR_U32(ctx, 31, 0x27A130u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x27A128u, 0x27A130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A130u;
label_27a130:
    // 0x27a130: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x27a130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_27a134:
    // 0x27a134: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27a134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a138:
    // 0x27a138: 0xc0400e0  jal         func_100380
label_27a13c:
    if (ctx->pc == 0x27A13Cu) {
        ctx->pc = 0x27A140u;
        goto label_27a140;
    }
    ctx->pc = 0x27A138u;
    SET_GPR_U32(ctx, 31, 0x27A140u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x27A138u, 0x27A140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A140u;
label_27a140:
    // 0x27a140: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x27a140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_27a144:
    // 0x27a144: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x27a144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_27a148:
    // 0x27a148: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_27a14c:
    if (ctx->pc == 0x27A14Cu) {
        ctx->pc = 0x27A150u;
        goto label_27a150;
    }
    ctx->pc = 0x27A148u;
    {
        const bool branch_taken_0x27a148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a148) {
            ctx->pc = 0x27A160u;
            goto label_27a160;
        }
    }
    ctx->pc = 0x27A150u;
label_27a150:
    // 0x27a150: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x27a150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_27a154:
    // 0x27a154: 0xc0a1274  jal         func_2849D0
label_27a158:
    if (ctx->pc == 0x27A158u) {
        ctx->pc = 0x27A15Cu;
        goto label_27a15c;
    }
    ctx->pc = 0x27A154u;
    SET_GPR_U32(ctx, 31, 0x27A15Cu);
    ctx->pc = 0x2849D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2849D0u, 0x27A154u, 0x27A15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A15Cu;
label_27a15c:
    // 0x27a15c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x27a15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_27a160:
    // 0x27a160: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x27a160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_27a164:
    // 0x27a164: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x27a164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_27a168:
    // 0x27a168: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x27a168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_27a16c:
    // 0x27a16c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27a16cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27a170:
    // 0x27a170: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x27a170u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_27a174:
    // 0x27a174: 0x320f809  jalr        $t9
label_27a178:
    if (ctx->pc == 0x27A178u) {
        ctx->pc = 0x27A17Cu;
        goto label_27a17c;
    }
    ctx->pc = 0x27A174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27A17Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A174u, 0x27A17Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27A17Cu;
label_27a17c:
    // 0x27a17c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x27a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27a180:
    // 0x27a180: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x27a180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_27a184:
    // 0x27a184: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x27a184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_27a188:
    // 0x27a188: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x27a188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_27a18c:
    // 0x27a18c: 0x100000f8  b           . + 4 + (0xF8 << 2)
label_27a190:
    if (ctx->pc == 0x27A190u) {
        ctx->pc = 0x27A194u;
        goto label_27a194;
    }
    ctx->pc = 0x27A18Cu;
    {
        const bool branch_taken_0x27a18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a18c) {
            ctx->pc = 0x27A570u;
            goto label_27a570;
        }
    }
    ctx->pc = 0x27A194u;
label_27a194:
    // 0x27a194: 0x24040460  addiu       $a0, $zero, 0x460
    ctx->pc = 0x27a194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1120));
label_27a198:
    // 0x27a198: 0xc119b68  jal         func_466DA0
label_27a19c:
    if (ctx->pc == 0x27A19Cu) {
        ctx->pc = 0x27A1A0u;
        goto label_27a1a0;
    }
    ctx->pc = 0x27A198u;
    SET_GPR_U32(ctx, 31, 0x27A1A0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x27A198u, 0x27A1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A1A0u;
label_27a1a0:
    // 0x27a1a0: 0x24040460  addiu       $a0, $zero, 0x460
    ctx->pc = 0x27a1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1120));
label_27a1a4:
    // 0x27a1a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27a1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a1a8:
    // 0x27a1a8: 0xc0400e0  jal         func_100380
label_27a1ac:
    if (ctx->pc == 0x27A1ACu) {
        ctx->pc = 0x27A1B0u;
        goto label_27a1b0;
    }
    ctx->pc = 0x27A1A8u;
    SET_GPR_U32(ctx, 31, 0x27A1B0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x27A1A8u, 0x27A1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A1B0u;
label_27a1b0:
    // 0x27a1b0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x27a1b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a1b4:
    // 0x27a1b4: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
label_27a1b8:
    if (ctx->pc == 0x27A1B8u) {
        ctx->pc = 0x27A1BCu;
        goto label_27a1bc;
    }
    ctx->pc = 0x27A1B4u;
    {
        const bool branch_taken_0x27a1b4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a1b4) {
            ctx->pc = 0x27A1CCu;
            goto label_27a1cc;
        }
    }
    ctx->pc = 0x27A1BCu;
label_27a1bc:
    // 0x27a1bc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x27a1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_27a1c0:
    // 0x27a1c0: 0xc0a7ab4  jal         func_29EAD0
label_27a1c4:
    if (ctx->pc == 0x27A1C4u) {
        ctx->pc = 0x27A1C8u;
        goto label_27a1c8;
    }
    ctx->pc = 0x27A1C0u;
    SET_GPR_U32(ctx, 31, 0x27A1C8u);
    ctx->pc = 0x29EAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EAD0u, 0x27A1C0u, 0x27A1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A1C8u;
label_27a1c8:
    // 0x27a1c8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x27a1c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a1cc:
    // 0x27a1cc: 0xafbe00d4  sw          $fp, 0xD4($sp)
    ctx->pc = 0x27a1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 30));
label_27a1d0:
    // 0x27a1d0: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x27a1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_27a1d4:
    // 0x27a1d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27a1d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27a1d8:
    // 0x27a1d8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x27a1d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_27a1dc:
    // 0x27a1dc: 0x320f809  jalr        $t9
label_27a1e0:
    if (ctx->pc == 0x27A1E0u) {
        ctx->pc = 0x27A1E4u;
        goto label_27a1e4;
    }
    ctx->pc = 0x27A1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27A1E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A1DCu, 0x27A1E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27A1E4u;
label_27a1e4:
    // 0x27a1e4: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x27a1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27a1e8:
    // 0x27a1e8: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x27a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_27a1ec:
    // 0x27a1ec: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x27a1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_27a1f0:
    // 0x27a1f0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x27a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27a1f4:
    // 0x27a1f4: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x27a1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_27a1f8:
    // 0x27a1f8: 0x27a500d4  addiu       $a1, $sp, 0xD4
    ctx->pc = 0x27a1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_27a1fc:
    // 0x27a1fc: 0xc09ea4c  jal         func_27A930
label_27a200:
    if (ctx->pc == 0x27A200u) {
        ctx->pc = 0x27A204u;
        goto label_27a204;
    }
    ctx->pc = 0x27A1FCu;
    SET_GPR_U32(ctx, 31, 0x27A204u);
    ctx->pc = 0x27A930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A930u, 0x27A1FCu, 0x27A204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A204u;
label_27a204:
    // 0x27a204: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x27a204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_27a208:
    // 0x27a208: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_27a20c:
    if (ctx->pc == 0x27A20Cu) {
        ctx->pc = 0x27A210u;
        goto label_27a210;
    }
    ctx->pc = 0x27A208u;
    {
        const bool branch_taken_0x27a208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a208) {
            ctx->pc = 0x27A570u;
            goto label_27a570;
        }
    }
    ctx->pc = 0x27A210u;
label_27a210:
    // 0x27a210: 0x240400c4  addiu       $a0, $zero, 0xC4
    ctx->pc = 0x27a210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
label_27a214:
    // 0x27a214: 0xc119b68  jal         func_466DA0
label_27a218:
    if (ctx->pc == 0x27A218u) {
        ctx->pc = 0x27A21Cu;
        goto label_27a21c;
    }
    ctx->pc = 0x27A214u;
    SET_GPR_U32(ctx, 31, 0x27A21Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x27A214u, 0x27A21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A21Cu;
label_27a21c:
    // 0x27a21c: 0x240400c4  addiu       $a0, $zero, 0xC4
    ctx->pc = 0x27a21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
label_27a220:
    // 0x27a220: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27a220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a224:
    // 0x27a224: 0xc0400e0  jal         func_100380
label_27a228:
    if (ctx->pc == 0x27A228u) {
        ctx->pc = 0x27A22Cu;
        goto label_27a22c;
    }
    ctx->pc = 0x27A224u;
    SET_GPR_U32(ctx, 31, 0x27A22Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x27A224u, 0x27A22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A22Cu;
label_27a22c:
    // 0x27a22c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x27a22cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a230:
    // 0x27a230: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
label_27a234:
    if (ctx->pc == 0x27A234u) {
        ctx->pc = 0x27A238u;
        goto label_27a238;
    }
    ctx->pc = 0x27A230u;
    {
        const bool branch_taken_0x27a230 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a230) {
            ctx->pc = 0x27A24Cu;
            goto label_27a24c;
        }
    }
    ctx->pc = 0x27A238u;
label_27a238:
    // 0x27a238: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x27a238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_27a23c:
    // 0x27a23c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x27a23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_27a240:
    // 0x27a240: 0xc0a51e4  jal         func_294790
label_27a244:
    if (ctx->pc == 0x27A244u) {
        ctx->pc = 0x27A248u;
        goto label_27a248;
    }
    ctx->pc = 0x27A240u;
    SET_GPR_U32(ctx, 31, 0x27A248u);
    ctx->pc = 0x294790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294790u, 0x27A240u, 0x27A248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A248u;
label_27a248:
    // 0x27a248: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x27a248u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a24c:
    // 0x27a24c: 0xafb700d0  sw          $s7, 0xD0($sp)
    ctx->pc = 0x27a24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 23));
label_27a250:
    // 0x27a250: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x27a250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_27a254:
    // 0x27a254: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27a254u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27a258:
    // 0x27a258: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x27a258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_27a25c:
    // 0x27a25c: 0x320f809  jalr        $t9
label_27a260:
    if (ctx->pc == 0x27A260u) {
        ctx->pc = 0x27A264u;
        goto label_27a264;
    }
    ctx->pc = 0x27A25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27A264u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A25Cu, 0x27A264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27A264u;
label_27a264:
    // 0x27a264: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x27a264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27a268:
    // 0x27a268: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x27a268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_27a26c:
    // 0x27a26c: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x27a26cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_27a270:
    // 0x27a270: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x27a270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27a274:
    // 0x27a274: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x27a274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_27a278:
    // 0x27a278: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x27a278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_27a27c:
    // 0x27a27c: 0xc09e96c  jal         func_27A5B0
label_27a280:
    if (ctx->pc == 0x27A280u) {
        ctx->pc = 0x27A284u;
        goto label_27a284;
    }
    ctx->pc = 0x27A27Cu;
    SET_GPR_U32(ctx, 31, 0x27A284u);
    ctx->pc = 0x27A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A5B0u, 0x27A27Cu, 0x27A284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A284u;
label_27a284:
    // 0x27a284: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x27a284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_27a288:
    // 0x27a288: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_27a28c:
    if (ctx->pc == 0x27A28Cu) {
        ctx->pc = 0x27A290u;
        goto label_27a290;
    }
    ctx->pc = 0x27A288u;
    {
        const bool branch_taken_0x27a288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a288) {
            ctx->pc = 0x27A570u;
            goto label_27a570;
        }
    }
    ctx->pc = 0x27A290u;
label_27a290:
    // 0x27a290: 0x240400c4  addiu       $a0, $zero, 0xC4
    ctx->pc = 0x27a290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
label_27a294:
    // 0x27a294: 0xc119b68  jal         func_466DA0
label_27a298:
    if (ctx->pc == 0x27A298u) {
        ctx->pc = 0x27A29Cu;
        goto label_27a29c;
    }
    ctx->pc = 0x27A294u;
    SET_GPR_U32(ctx, 31, 0x27A29Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x27A294u, 0x27A29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A29Cu;
label_27a29c:
    // 0x27a29c: 0x240400c4  addiu       $a0, $zero, 0xC4
    ctx->pc = 0x27a29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
label_27a2a0:
    // 0x27a2a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27a2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a2a4:
    // 0x27a2a4: 0xc0400e0  jal         func_100380
label_27a2a8:
    if (ctx->pc == 0x27A2A8u) {
        ctx->pc = 0x27A2ACu;
        goto label_27a2ac;
    }
    ctx->pc = 0x27A2A4u;
    SET_GPR_U32(ctx, 31, 0x27A2ACu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x27A2A4u, 0x27A2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A2ACu;
label_27a2ac:
    // 0x27a2ac: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x27a2acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a2b0:
    // 0x27a2b0: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_27a2b4:
    if (ctx->pc == 0x27A2B4u) {
        ctx->pc = 0x27A2B8u;
        goto label_27a2b8;
    }
    ctx->pc = 0x27A2B0u;
    {
        const bool branch_taken_0x27a2b0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a2b0) {
            ctx->pc = 0x27A2C8u;
            goto label_27a2c8;
        }
    }
    ctx->pc = 0x27A2B8u;
label_27a2b8:
    // 0x27a2b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27a2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27a2bc:
    // 0x27a2bc: 0xc0a5e08  jal         func_297820
label_27a2c0:
    if (ctx->pc == 0x27A2C0u) {
        ctx->pc = 0x27A2C4u;
        goto label_27a2c4;
    }
    ctx->pc = 0x27A2BCu;
    SET_GPR_U32(ctx, 31, 0x27A2C4u);
    ctx->pc = 0x297820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297820u, 0x27A2BCu, 0x27A2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A2C4u;
label_27a2c4:
    // 0x27a2c4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x27a2c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a2c8:
    // 0x27a2c8: 0xafb600cc  sw          $s6, 0xCC($sp)
    ctx->pc = 0x27a2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 22));
label_27a2cc:
    // 0x27a2cc: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x27a2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_27a2d0:
    // 0x27a2d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27a2d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27a2d4:
    // 0x27a2d4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x27a2d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_27a2d8:
    // 0x27a2d8: 0x320f809  jalr        $t9
label_27a2dc:
    if (ctx->pc == 0x27A2DCu) {
        ctx->pc = 0x27A2E0u;
        goto label_27a2e0;
    }
    ctx->pc = 0x27A2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27A2E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A2D8u, 0x27A2E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27A2E0u;
label_27a2e0:
    // 0x27a2e0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x27a2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27a2e4:
    // 0x27a2e4: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x27a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_27a2e8:
    // 0x27a2e8: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x27a2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_27a2ec:
    // 0x27a2ec: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x27a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_27a2f0:
    // 0x27a2f0: 0x1000009f  b           . + 4 + (0x9F << 2)
label_27a2f4:
    if (ctx->pc == 0x27A2F4u) {
        ctx->pc = 0x27A2F8u;
        goto label_27a2f8;
    }
    ctx->pc = 0x27A2F0u;
    {
        const bool branch_taken_0x27a2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a2f0) {
            ctx->pc = 0x27A570u;
            goto label_27a570;
        }
    }
    ctx->pc = 0x27A2F8u;
label_27a2f8:
    // 0x27a2f8: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x27a2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_27a2fc:
    // 0x27a2fc: 0xc119b68  jal         func_466DA0
label_27a300:
    if (ctx->pc == 0x27A300u) {
        ctx->pc = 0x27A304u;
        goto label_27a304;
    }
    ctx->pc = 0x27A2FCu;
    SET_GPR_U32(ctx, 31, 0x27A304u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x27A2FCu, 0x27A304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A304u;
label_27a304:
    // 0x27a304: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x27a304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_27a308:
    // 0x27a308: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27a308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a30c:
    // 0x27a30c: 0xc0400e0  jal         func_100380
label_27a310:
    if (ctx->pc == 0x27A310u) {
        ctx->pc = 0x27A314u;
        goto label_27a314;
    }
    ctx->pc = 0x27A30Cu;
    SET_GPR_U32(ctx, 31, 0x27A314u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x27A30Cu, 0x27A314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A314u;
label_27a314:
    // 0x27a314: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x27a314u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a318:
    // 0x27a318: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_27a31c:
    if (ctx->pc == 0x27A31Cu) {
        ctx->pc = 0x27A320u;
        goto label_27a320;
    }
    ctx->pc = 0x27A318u;
    {
        const bool branch_taken_0x27a318 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a318) {
            ctx->pc = 0x27A330u;
            goto label_27a330;
        }
    }
    ctx->pc = 0x27A320u;
label_27a320:
    // 0x27a320: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27a320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27a324:
    // 0x27a324: 0xc0a63fc  jal         func_298FF0
label_27a328:
    if (ctx->pc == 0x27A328u) {
        ctx->pc = 0x27A32Cu;
        goto label_27a32c;
    }
    ctx->pc = 0x27A324u;
    SET_GPR_U32(ctx, 31, 0x27A32Cu);
    ctx->pc = 0x298FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298FF0u, 0x27A324u, 0x27A32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A32Cu;
label_27a32c:
    // 0x27a32c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x27a32cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a330:
    // 0x27a330: 0xafb500c8  sw          $s5, 0xC8($sp)
    ctx->pc = 0x27a330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 21));
label_27a334:
    // 0x27a334: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x27a334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_27a338:
    // 0x27a338: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27a338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27a33c:
    // 0x27a33c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x27a33cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_27a340:
    // 0x27a340: 0x320f809  jalr        $t9
label_27a344:
    if (ctx->pc == 0x27A344u) {
        ctx->pc = 0x27A348u;
        goto label_27a348;
    }
    ctx->pc = 0x27A340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27A348u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A340u, 0x27A348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27A348u;
label_27a348:
    // 0x27a348: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x27a348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27a34c:
    // 0x27a34c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x27a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_27a350:
    // 0x27a350: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x27a350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_27a354:
    // 0x27a354: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x27a354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_27a358:
    // 0x27a358: 0x10000085  b           . + 4 + (0x85 << 2)
label_27a35c:
    if (ctx->pc == 0x27A35Cu) {
        ctx->pc = 0x27A360u;
        goto label_27a360;
    }
    ctx->pc = 0x27A358u;
    {
        const bool branch_taken_0x27a358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a358) {
            ctx->pc = 0x27A570u;
            goto label_27a570;
        }
    }
    ctx->pc = 0x27A360u;
label_27a360:
    // 0x27a360: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x27a360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_27a364:
    // 0x27a364: 0xc119b68  jal         func_466DA0
label_27a368:
    if (ctx->pc == 0x27A368u) {
        ctx->pc = 0x27A36Cu;
        goto label_27a36c;
    }
    ctx->pc = 0x27A364u;
    SET_GPR_U32(ctx, 31, 0x27A36Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x27A364u, 0x27A36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A36Cu;
label_27a36c:
    // 0x27a36c: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x27a36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_27a370:
    // 0x27a370: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27a370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a374:
    // 0x27a374: 0xc0400e0  jal         func_100380
label_27a378:
    if (ctx->pc == 0x27A378u) {
        ctx->pc = 0x27A37Cu;
        goto label_27a37c;
    }
    ctx->pc = 0x27A374u;
    SET_GPR_U32(ctx, 31, 0x27A37Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x27A374u, 0x27A37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A37Cu;
label_27a37c:
    // 0x27a37c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27a37cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a380:
    // 0x27a380: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
label_27a384:
    if (ctx->pc == 0x27A384u) {
        ctx->pc = 0x27A388u;
        goto label_27a388;
    }
    ctx->pc = 0x27A380u;
    {
        const bool branch_taken_0x27a380 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a380) {
            ctx->pc = 0x27A39Cu;
            goto label_27a39c;
        }
    }
    ctx->pc = 0x27A388u;
label_27a388:
    // 0x27a388: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27a388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27a38c:
    // 0x27a38c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27a38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27a390:
    // 0x27a390: 0xc0a4094  jal         func_290250
label_27a394:
    if (ctx->pc == 0x27A394u) {
        ctx->pc = 0x27A398u;
        goto label_27a398;
    }
    ctx->pc = 0x27A390u;
    SET_GPR_U32(ctx, 31, 0x27A398u);
    ctx->pc = 0x290250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290250u, 0x27A390u, 0x27A398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A398u;
label_27a398:
    // 0x27a398: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27a398u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a39c:
    // 0x27a39c: 0xafb400c4  sw          $s4, 0xC4($sp)
    ctx->pc = 0x27a39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 20));
label_27a3a0:
    // 0x27a3a0: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x27a3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_27a3a4:
    // 0x27a3a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27a3a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27a3a8:
    // 0x27a3a8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x27a3a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_27a3ac:
    // 0x27a3ac: 0x320f809  jalr        $t9
label_27a3b0:
    if (ctx->pc == 0x27A3B0u) {
        ctx->pc = 0x27A3B4u;
        goto label_27a3b4;
    }
    ctx->pc = 0x27A3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27A3B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A3ACu, 0x27A3B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27A3B4u;
label_27a3b4:
    // 0x27a3b4: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x27a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27a3b8:
    // 0x27a3b8: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x27a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_27a3bc:
    // 0x27a3bc: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x27a3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_27a3c0:
    // 0x27a3c0: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x27a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_27a3c4:
    // 0x27a3c4: 0x1000006a  b           . + 4 + (0x6A << 2)
label_27a3c8:
    if (ctx->pc == 0x27A3C8u) {
        ctx->pc = 0x27A3CCu;
        goto label_27a3cc;
    }
    ctx->pc = 0x27A3C4u;
    {
        const bool branch_taken_0x27a3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a3c4) {
            ctx->pc = 0x27A570u;
            goto label_27a570;
        }
    }
    ctx->pc = 0x27A3CCu;
label_27a3cc:
    // 0x27a3cc: 0x24040084  addiu       $a0, $zero, 0x84
    ctx->pc = 0x27a3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_27a3d0:
    // 0x27a3d0: 0xc119b68  jal         func_466DA0
label_27a3d4:
    if (ctx->pc == 0x27A3D4u) {
        ctx->pc = 0x27A3D8u;
        goto label_27a3d8;
    }
    ctx->pc = 0x27A3D0u;
    SET_GPR_U32(ctx, 31, 0x27A3D8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x27A3D0u, 0x27A3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A3D8u;
label_27a3d8:
    // 0x27a3d8: 0x24040084  addiu       $a0, $zero, 0x84
    ctx->pc = 0x27a3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_27a3dc:
    // 0x27a3dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27a3dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a3e0:
    // 0x27a3e0: 0xc0400e0  jal         func_100380
label_27a3e4:
    if (ctx->pc == 0x27A3E4u) {
        ctx->pc = 0x27A3E8u;
        goto label_27a3e8;
    }
    ctx->pc = 0x27A3E0u;
    SET_GPR_U32(ctx, 31, 0x27A3E8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x27A3E0u, 0x27A3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A3E8u;
label_27a3e8:
    // 0x27a3e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27a3e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a3ec:
    // 0x27a3ec: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_27a3f0:
    if (ctx->pc == 0x27A3F0u) {
        ctx->pc = 0x27A3F4u;
        goto label_27a3f4;
    }
    ctx->pc = 0x27A3ECu;
    {
        const bool branch_taken_0x27a3ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a3ec) {
            ctx->pc = 0x27A404u;
            goto label_27a404;
        }
    }
    ctx->pc = 0x27A3F4u;
label_27a3f4:
    // 0x27a3f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27a3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27a3f8:
    // 0x27a3f8: 0xc0a46b0  jal         func_291AC0
label_27a3fc:
    if (ctx->pc == 0x27A3FCu) {
        ctx->pc = 0x27A400u;
        goto label_27a400;
    }
    ctx->pc = 0x27A3F8u;
    SET_GPR_U32(ctx, 31, 0x27A400u);
    ctx->pc = 0x291AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291AC0u, 0x27A3F8u, 0x27A400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A400u;
label_27a400:
    // 0x27a400: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27a400u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a404:
    // 0x27a404: 0xafb300c0  sw          $s3, 0xC0($sp)
    ctx->pc = 0x27a404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 19));
label_27a408:
    // 0x27a408: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x27a408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_27a40c:
    // 0x27a40c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27a40cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27a410:
    // 0x27a410: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x27a410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_27a414:
    // 0x27a414: 0x320f809  jalr        $t9
label_27a418:
    if (ctx->pc == 0x27A418u) {
        ctx->pc = 0x27A41Cu;
        goto label_27a41c;
    }
    ctx->pc = 0x27A414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27A41Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A414u, 0x27A41Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27A41Cu;
label_27a41c:
    // 0x27a41c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x27a41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27a420:
    // 0x27a420: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x27a420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_27a424:
    // 0x27a424: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x27a424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_27a428:
    // 0x27a428: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x27a428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_27a42c:
    // 0x27a42c: 0x10000050  b           . + 4 + (0x50 << 2)
label_27a430:
    if (ctx->pc == 0x27A430u) {
        ctx->pc = 0x27A434u;
        goto label_27a434;
    }
    ctx->pc = 0x27A42Cu;
    {
        const bool branch_taken_0x27a42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a42c) {
            ctx->pc = 0x27A570u;
            goto label_27a570;
        }
    }
    ctx->pc = 0x27A434u;
label_27a434:
    // 0x27a434: 0x240400cc  addiu       $a0, $zero, 0xCC
    ctx->pc = 0x27a434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_27a438:
    // 0x27a438: 0xc119b68  jal         func_466DA0
label_27a43c:
    if (ctx->pc == 0x27A43Cu) {
        ctx->pc = 0x27A440u;
        goto label_27a440;
    }
    ctx->pc = 0x27A438u;
    SET_GPR_U32(ctx, 31, 0x27A440u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x27A438u, 0x27A440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A440u;
label_27a440:
    // 0x27a440: 0x240400cc  addiu       $a0, $zero, 0xCC
    ctx->pc = 0x27a440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_27a444:
    // 0x27a444: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27a444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a448:
    // 0x27a448: 0xc0400e0  jal         func_100380
label_27a44c:
    if (ctx->pc == 0x27A44Cu) {
        ctx->pc = 0x27A450u;
        goto label_27a450;
    }
    ctx->pc = 0x27A448u;
    SET_GPR_U32(ctx, 31, 0x27A450u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x27A448u, 0x27A450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A450u;
label_27a450:
    // 0x27a450: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27a450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a454:
    // 0x27a454: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_27a458:
    if (ctx->pc == 0x27A458u) {
        ctx->pc = 0x27A45Cu;
        goto label_27a45c;
    }
    ctx->pc = 0x27A454u;
    {
        const bool branch_taken_0x27a454 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a454) {
            ctx->pc = 0x27A46Cu;
            goto label_27a46c;
        }
    }
    ctx->pc = 0x27A45Cu;
label_27a45c:
    // 0x27a45c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27a45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27a460:
    // 0x27a460: 0xc0a5bd8  jal         func_296F60
label_27a464:
    if (ctx->pc == 0x27A464u) {
        ctx->pc = 0x27A468u;
        goto label_27a468;
    }
    ctx->pc = 0x27A460u;
    SET_GPR_U32(ctx, 31, 0x27A468u);
    ctx->pc = 0x296F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296F60u, 0x27A460u, 0x27A468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A468u;
label_27a468:
    // 0x27a468: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27a468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a46c:
    // 0x27a46c: 0xafb200bc  sw          $s2, 0xBC($sp)
    ctx->pc = 0x27a46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 18));
label_27a470:
    // 0x27a470: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x27a470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_27a474:
    // 0x27a474: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27a474u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27a478:
    // 0x27a478: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x27a478u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_27a47c:
    // 0x27a47c: 0x320f809  jalr        $t9
label_27a480:
    if (ctx->pc == 0x27A480u) {
        ctx->pc = 0x27A484u;
        goto label_27a484;
    }
    ctx->pc = 0x27A47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27A484u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A47Cu, 0x27A484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27A484u;
label_27a484:
    // 0x27a484: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x27a484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27a488:
    // 0x27a488: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x27a488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_27a48c:
    // 0x27a48c: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x27a48cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_27a490:
    // 0x27a490: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x27a490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_27a494:
    // 0x27a494: 0x10000036  b           . + 4 + (0x36 << 2)
label_27a498:
    if (ctx->pc == 0x27A498u) {
        ctx->pc = 0x27A49Cu;
        goto label_27a49c;
    }
    ctx->pc = 0x27A494u;
    {
        const bool branch_taken_0x27a494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a494) {
            ctx->pc = 0x27A570u;
            goto label_27a570;
        }
    }
    ctx->pc = 0x27A49Cu;
label_27a49c:
    // 0x27a49c: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x27a49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_27a4a0:
    // 0x27a4a0: 0xc119b68  jal         func_466DA0
label_27a4a4:
    if (ctx->pc == 0x27A4A4u) {
        ctx->pc = 0x27A4A8u;
        goto label_27a4a8;
    }
    ctx->pc = 0x27A4A0u;
    SET_GPR_U32(ctx, 31, 0x27A4A8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x27A4A0u, 0x27A4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A4A8u;
label_27a4a8:
    // 0x27a4a8: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x27a4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_27a4ac:
    // 0x27a4ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27a4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a4b0:
    // 0x27a4b0: 0xc0400e0  jal         func_100380
label_27a4b4:
    if (ctx->pc == 0x27A4B4u) {
        ctx->pc = 0x27A4B8u;
        goto label_27a4b8;
    }
    ctx->pc = 0x27A4B0u;
    SET_GPR_U32(ctx, 31, 0x27A4B8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x27A4B0u, 0x27A4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A4B8u;
label_27a4b8:
    // 0x27a4b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27a4b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a4bc:
    // 0x27a4bc: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_27a4c0:
    if (ctx->pc == 0x27A4C0u) {
        ctx->pc = 0x27A4C4u;
        goto label_27a4c4;
    }
    ctx->pc = 0x27A4BCu;
    {
        const bool branch_taken_0x27a4bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a4bc) {
            ctx->pc = 0x27A4D4u;
            goto label_27a4d4;
        }
    }
    ctx->pc = 0x27A4C4u;
label_27a4c4:
    // 0x27a4c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27a4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27a4c8:
    // 0x27a4c8: 0xc0a6190  jal         func_298640
label_27a4cc:
    if (ctx->pc == 0x27A4CCu) {
        ctx->pc = 0x27A4D0u;
        goto label_27a4d0;
    }
    ctx->pc = 0x27A4C8u;
    SET_GPR_U32(ctx, 31, 0x27A4D0u);
    ctx->pc = 0x298640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298640u, 0x27A4C8u, 0x27A4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A4D0u;
label_27a4d0:
    // 0x27a4d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27a4d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a4d4:
    // 0x27a4d4: 0xafb100b8  sw          $s1, 0xB8($sp)
    ctx->pc = 0x27a4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 17));
label_27a4d8:
    // 0x27a4d8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x27a4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_27a4dc:
    // 0x27a4dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27a4dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27a4e0:
    // 0x27a4e0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x27a4e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_27a4e4:
    // 0x27a4e4: 0x320f809  jalr        $t9
label_27a4e8:
    if (ctx->pc == 0x27A4E8u) {
        ctx->pc = 0x27A4ECu;
        goto label_27a4ec;
    }
    ctx->pc = 0x27A4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27A4ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A4E4u, 0x27A4ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27A4ECu;
label_27a4ec:
    // 0x27a4ec: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x27a4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27a4f0:
    // 0x27a4f0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x27a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_27a4f4:
    // 0x27a4f4: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x27a4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_27a4f8:
    // 0x27a4f8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x27a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_27a4fc:
    // 0x27a4fc: 0x1000001c  b           . + 4 + (0x1C << 2)
label_27a500:
    if (ctx->pc == 0x27A500u) {
        ctx->pc = 0x27A504u;
        goto label_27a504;
    }
    ctx->pc = 0x27A4FCu;
    {
        const bool branch_taken_0x27a4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a4fc) {
            ctx->pc = 0x27A570u;
            goto label_27a570;
        }
    }
    ctx->pc = 0x27A504u;
label_27a504:
    // 0x27a504: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x27a504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_27a508:
    // 0x27a508: 0xc119b68  jal         func_466DA0
label_27a50c:
    if (ctx->pc == 0x27A50Cu) {
        ctx->pc = 0x27A510u;
        goto label_27a510;
    }
    ctx->pc = 0x27A508u;
    SET_GPR_U32(ctx, 31, 0x27A510u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x27A508u, 0x27A510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A510u;
label_27a510:
    // 0x27a510: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x27a510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_27a514:
    // 0x27a514: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27a514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a518:
    // 0x27a518: 0xc0400e0  jal         func_100380
label_27a51c:
    if (ctx->pc == 0x27A51Cu) {
        ctx->pc = 0x27A520u;
        goto label_27a520;
    }
    ctx->pc = 0x27A518u;
    SET_GPR_U32(ctx, 31, 0x27A520u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x27A518u, 0x27A520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A520u;
label_27a520:
    // 0x27a520: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27a520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a524:
    // 0x27a524: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_27a528:
    if (ctx->pc == 0x27A528u) {
        ctx->pc = 0x27A52Cu;
        goto label_27a52c;
    }
    ctx->pc = 0x27A524u;
    {
        const bool branch_taken_0x27a524 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a524) {
            ctx->pc = 0x27A53Cu;
            goto label_27a53c;
        }
    }
    ctx->pc = 0x27A52Cu;
label_27a52c:
    // 0x27a52c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27a52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27a530:
    // 0x27a530: 0xc0a8900  jal         func_2A2400
label_27a534:
    if (ctx->pc == 0x27A534u) {
        ctx->pc = 0x27A538u;
        goto label_27a538;
    }
    ctx->pc = 0x27A530u;
    SET_GPR_U32(ctx, 31, 0x27A538u);
    ctx->pc = 0x2A2400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2400u, 0x27A530u, 0x27A538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A538u;
label_27a538:
    // 0x27a538: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27a538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a53c:
    // 0x27a53c: 0xafb000b4  sw          $s0, 0xB4($sp)
    ctx->pc = 0x27a53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 16));
label_27a540:
    // 0x27a540: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x27a540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_27a544:
    // 0x27a544: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27a544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27a548:
    // 0x27a548: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x27a548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_27a54c:
    // 0x27a54c: 0x320f809  jalr        $t9
label_27a550:
    if (ctx->pc == 0x27A550u) {
        ctx->pc = 0x27A554u;
        goto label_27a554;
    }
    ctx->pc = 0x27A54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27A554u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A54Cu, 0x27A554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27A554u;
label_27a554:
    // 0x27a554: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x27a554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27a558:
    // 0x27a558: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x27a558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_27a55c:
    // 0x27a55c: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x27a55cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_27a560:
    // 0x27a560: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x27a560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_27a564:
    // 0x27a564: 0x10000002  b           . + 4 + (0x2 << 2)
label_27a568:
    if (ctx->pc == 0x27A568u) {
        ctx->pc = 0x27A56Cu;
        goto label_27a56c;
    }
    ctx->pc = 0x27A564u;
    {
        const bool branch_taken_0x27a564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a564) {
            ctx->pc = 0x27A570u;
            goto label_27a570;
        }
    }
    ctx->pc = 0x27A56Cu;
label_27a56c:
    // 0x27a56c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27a56cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a570:
    // 0x27a570: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x27a570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_27a574:
    // 0x27a574: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x27a574u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27a578:
    // 0x27a578: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x27a578u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27a57c:
    // 0x27a57c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27a57cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27a580:
    // 0x27a580: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27a580u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27a584:
    // 0x27a584: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27a584u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27a588:
    // 0x27a588: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27a588u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27a58c:
    // 0x27a58c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27a58cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27a590:
    // 0x27a590: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27a590u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27a594:
    // 0x27a594: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27a594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27a598:
    // 0x27a598: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x27a598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_27a59c:
    // 0x27a59c: 0x3e00008  jr          $ra
label_27a5a0:
    if (ctx->pc == 0x27A5A0u) {
        ctx->pc = 0x27A5A4u;
        goto label_27a5a4;
    }
    ctx->pc = 0x27A59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A5A4u;
label_27a5a4:
    // 0x27a5a4: 0x0  nop
    ctx->pc = 0x27a5a4u;
    // NOP
label_27a5a8:
    // 0x27a5a8: 0x0  nop
    ctx->pc = 0x27a5a8u;
    // NOP
label_27a5ac:
    // 0x27a5ac: 0x0  nop
    ctx->pc = 0x27a5acu;
    // NOP
    ctx->pc = 0x27a5b0u;
}
