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

// Function: sub_00309DA8
// Address: 0x309da8 - 0x30c2b0
void sub_00309DA8_0x309da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309DA8_0x309da8");
#endif

    switch (ctx->pc) {
        case 0x309da8u: goto label_309da8;
        case 0x309dacu: goto label_309dac;
        case 0x309db0u: goto label_309db0;
        case 0x309db4u: goto label_309db4;
        case 0x309db8u: goto label_309db8;
        case 0x309dbcu: goto label_309dbc;
        case 0x309dc0u: goto label_309dc0;
        case 0x309dc4u: goto label_309dc4;
        case 0x309dc8u: goto label_309dc8;
        case 0x309dccu: goto label_309dcc;
        case 0x309dd0u: goto label_309dd0;
        case 0x309dd4u: goto label_309dd4;
        case 0x309dd8u: goto label_309dd8;
        case 0x309ddcu: goto label_309ddc;
        case 0x309de0u: goto label_309de0;
        case 0x309de4u: goto label_309de4;
        case 0x309de8u: goto label_309de8;
        case 0x309decu: goto label_309dec;
        case 0x309df0u: goto label_309df0;
        case 0x309df4u: goto label_309df4;
        case 0x309df8u: goto label_309df8;
        case 0x309dfcu: goto label_309dfc;
        case 0x309e00u: goto label_309e00;
        case 0x309e04u: goto label_309e04;
        case 0x309e08u: goto label_309e08;
        case 0x309e0cu: goto label_309e0c;
        case 0x309e10u: goto label_309e10;
        case 0x309e14u: goto label_309e14;
        case 0x309e18u: goto label_309e18;
        case 0x309e1cu: goto label_309e1c;
        case 0x309e20u: goto label_309e20;
        case 0x309e24u: goto label_309e24;
        case 0x309e28u: goto label_309e28;
        case 0x309e2cu: goto label_309e2c;
        case 0x309e30u: goto label_309e30;
        case 0x309e34u: goto label_309e34;
        case 0x309e38u: goto label_309e38;
        case 0x309e3cu: goto label_309e3c;
        case 0x309e40u: goto label_309e40;
        case 0x309e44u: goto label_309e44;
        case 0x309e48u: goto label_309e48;
        case 0x309e4cu: goto label_309e4c;
        case 0x309e50u: goto label_309e50;
        case 0x309e54u: goto label_309e54;
        case 0x309e58u: goto label_309e58;
        case 0x309e5cu: goto label_309e5c;
        case 0x309e60u: goto label_309e60;
        case 0x309e64u: goto label_309e64;
        case 0x309e68u: goto label_309e68;
        case 0x309e6cu: goto label_309e6c;
        case 0x309e70u: goto label_309e70;
        case 0x309e74u: goto label_309e74;
        case 0x309e78u: goto label_309e78;
        case 0x309e7cu: goto label_309e7c;
        case 0x309e80u: goto label_309e80;
        case 0x309e84u: goto label_309e84;
        case 0x309e88u: goto label_309e88;
        case 0x309e8cu: goto label_309e8c;
        case 0x309e90u: goto label_309e90;
        case 0x309e94u: goto label_309e94;
        case 0x309e98u: goto label_309e98;
        case 0x309e9cu: goto label_309e9c;
        case 0x309ea0u: goto label_309ea0;
        case 0x309ea4u: goto label_309ea4;
        case 0x309ea8u: goto label_309ea8;
        case 0x309eacu: goto label_309eac;
        case 0x309eb0u: goto label_309eb0;
        case 0x309eb4u: goto label_309eb4;
        case 0x309eb8u: goto label_309eb8;
        case 0x309ebcu: goto label_309ebc;
        case 0x309ec0u: goto label_309ec0;
        case 0x309ec4u: goto label_309ec4;
        case 0x309ec8u: goto label_309ec8;
        case 0x309eccu: goto label_309ecc;
        case 0x309ed0u: goto label_309ed0;
        case 0x309ed4u: goto label_309ed4;
        case 0x309ed8u: goto label_309ed8;
        case 0x309edcu: goto label_309edc;
        case 0x309ee0u: goto label_309ee0;
        case 0x309ee4u: goto label_309ee4;
        case 0x309ee8u: goto label_309ee8;
        case 0x309eecu: goto label_309eec;
        case 0x309ef0u: goto label_309ef0;
        case 0x309ef4u: goto label_309ef4;
        case 0x309ef8u: goto label_309ef8;
        case 0x309efcu: goto label_309efc;
        case 0x309f00u: goto label_309f00;
        case 0x309f04u: goto label_309f04;
        case 0x309f08u: goto label_309f08;
        case 0x309f0cu: goto label_309f0c;
        case 0x309f10u: goto label_309f10;
        case 0x309f14u: goto label_309f14;
        case 0x309f18u: goto label_309f18;
        case 0x309f1cu: goto label_309f1c;
        case 0x309f20u: goto label_309f20;
        case 0x309f24u: goto label_309f24;
        case 0x309f28u: goto label_309f28;
        case 0x309f2cu: goto label_309f2c;
        case 0x309f30u: goto label_309f30;
        case 0x309f34u: goto label_309f34;
        case 0x309f38u: goto label_309f38;
        case 0x309f3cu: goto label_309f3c;
        case 0x309f40u: goto label_309f40;
        case 0x309f44u: goto label_309f44;
        case 0x309f48u: goto label_309f48;
        case 0x309f4cu: goto label_309f4c;
        case 0x309f50u: goto label_309f50;
        case 0x309f54u: goto label_309f54;
        case 0x309f58u: goto label_309f58;
        case 0x309f5cu: goto label_309f5c;
        case 0x309f60u: goto label_309f60;
        case 0x309f64u: goto label_309f64;
        case 0x309f68u: goto label_309f68;
        case 0x309f6cu: goto label_309f6c;
        case 0x309f70u: goto label_309f70;
        case 0x309f74u: goto label_309f74;
        case 0x309f78u: goto label_309f78;
        case 0x309f7cu: goto label_309f7c;
        case 0x309f80u: goto label_309f80;
        case 0x309f84u: goto label_309f84;
        case 0x309f88u: goto label_309f88;
        case 0x309f8cu: goto label_309f8c;
        case 0x309f90u: goto label_309f90;
        case 0x309f94u: goto label_309f94;
        case 0x309f98u: goto label_309f98;
        case 0x309f9cu: goto label_309f9c;
        case 0x309fa0u: goto label_309fa0;
        case 0x309fa4u: goto label_309fa4;
        case 0x309fa8u: goto label_309fa8;
        case 0x309facu: goto label_309fac;
        case 0x309fb0u: goto label_309fb0;
        case 0x309fb4u: goto label_309fb4;
        case 0x309fb8u: goto label_309fb8;
        case 0x309fbcu: goto label_309fbc;
        case 0x309fc0u: goto label_309fc0;
        case 0x309fc4u: goto label_309fc4;
        case 0x309fc8u: goto label_309fc8;
        case 0x309fccu: goto label_309fcc;
        case 0x309fd0u: goto label_309fd0;
        case 0x309fd4u: goto label_309fd4;
        case 0x309fd8u: goto label_309fd8;
        case 0x309fdcu: goto label_309fdc;
        case 0x309fe0u: goto label_309fe0;
        case 0x309fe4u: goto label_309fe4;
        case 0x309fe8u: goto label_309fe8;
        case 0x309fecu: goto label_309fec;
        case 0x309ff0u: goto label_309ff0;
        case 0x309ff4u: goto label_309ff4;
        case 0x309ff8u: goto label_309ff8;
        case 0x309ffcu: goto label_309ffc;
        case 0x30a000u: goto label_30a000;
        case 0x30a004u: goto label_30a004;
        case 0x30a008u: goto label_30a008;
        case 0x30a00cu: goto label_30a00c;
        case 0x30a010u: goto label_30a010;
        case 0x30a014u: goto label_30a014;
        case 0x30a018u: goto label_30a018;
        case 0x30a01cu: goto label_30a01c;
        case 0x30a020u: goto label_30a020;
        case 0x30a024u: goto label_30a024;
        case 0x30a028u: goto label_30a028;
        case 0x30a02cu: goto label_30a02c;
        case 0x30a030u: goto label_30a030;
        case 0x30a034u: goto label_30a034;
        case 0x30a038u: goto label_30a038;
        case 0x30a03cu: goto label_30a03c;
        case 0x30a040u: goto label_30a040;
        case 0x30a044u: goto label_30a044;
        case 0x30a048u: goto label_30a048;
        case 0x30a04cu: goto label_30a04c;
        case 0x30a050u: goto label_30a050;
        case 0x30a054u: goto label_30a054;
        case 0x30a058u: goto label_30a058;
        case 0x30a05cu: goto label_30a05c;
        case 0x30a060u: goto label_30a060;
        case 0x30a064u: goto label_30a064;
        case 0x30a068u: goto label_30a068;
        case 0x30a06cu: goto label_30a06c;
        case 0x30a070u: goto label_30a070;
        case 0x30a074u: goto label_30a074;
        case 0x30a078u: goto label_30a078;
        case 0x30a07cu: goto label_30a07c;
        case 0x30a080u: goto label_30a080;
        case 0x30a084u: goto label_30a084;
        case 0x30a088u: goto label_30a088;
        case 0x30a08cu: goto label_30a08c;
        case 0x30a090u: goto label_30a090;
        case 0x30a094u: goto label_30a094;
        case 0x30a098u: goto label_30a098;
        case 0x30a09cu: goto label_30a09c;
        case 0x30a0a0u: goto label_30a0a0;
        case 0x30a0a4u: goto label_30a0a4;
        case 0x30a0a8u: goto label_30a0a8;
        case 0x30a0acu: goto label_30a0ac;
        case 0x30a0b0u: goto label_30a0b0;
        case 0x30a0b4u: goto label_30a0b4;
        case 0x30a0b8u: goto label_30a0b8;
        case 0x30a0bcu: goto label_30a0bc;
        case 0x30a0c0u: goto label_30a0c0;
        case 0x30a0c4u: goto label_30a0c4;
        case 0x30a0c8u: goto label_30a0c8;
        case 0x30a0ccu: goto label_30a0cc;
        case 0x30a0d0u: goto label_30a0d0;
        case 0x30a0d4u: goto label_30a0d4;
        case 0x30a0d8u: goto label_30a0d8;
        case 0x30a0dcu: goto label_30a0dc;
        case 0x30a0e0u: goto label_30a0e0;
        case 0x30a0e4u: goto label_30a0e4;
        case 0x30a0e8u: goto label_30a0e8;
        case 0x30a0ecu: goto label_30a0ec;
        case 0x30a0f0u: goto label_30a0f0;
        case 0x30a0f4u: goto label_30a0f4;
        case 0x30a0f8u: goto label_30a0f8;
        case 0x30a0fcu: goto label_30a0fc;
        case 0x30a100u: goto label_30a100;
        case 0x30a104u: goto label_30a104;
        case 0x30a108u: goto label_30a108;
        case 0x30a10cu: goto label_30a10c;
        case 0x30a110u: goto label_30a110;
        case 0x30a114u: goto label_30a114;
        case 0x30a118u: goto label_30a118;
        case 0x30a11cu: goto label_30a11c;
        case 0x30a120u: goto label_30a120;
        case 0x30a124u: goto label_30a124;
        case 0x30a128u: goto label_30a128;
        case 0x30a12cu: goto label_30a12c;
        case 0x30a130u: goto label_30a130;
        case 0x30a134u: goto label_30a134;
        case 0x30a138u: goto label_30a138;
        case 0x30a13cu: goto label_30a13c;
        case 0x30a140u: goto label_30a140;
        case 0x30a144u: goto label_30a144;
        case 0x30a148u: goto label_30a148;
        case 0x30a14cu: goto label_30a14c;
        case 0x30a150u: goto label_30a150;
        case 0x30a154u: goto label_30a154;
        case 0x30a158u: goto label_30a158;
        case 0x30a15cu: goto label_30a15c;
        case 0x30a160u: goto label_30a160;
        case 0x30a164u: goto label_30a164;
        case 0x30a168u: goto label_30a168;
        case 0x30a16cu: goto label_30a16c;
        case 0x30a170u: goto label_30a170;
        case 0x30a174u: goto label_30a174;
        case 0x30a178u: goto label_30a178;
        case 0x30a17cu: goto label_30a17c;
        case 0x30a180u: goto label_30a180;
        case 0x30a184u: goto label_30a184;
        case 0x30a188u: goto label_30a188;
        case 0x30a18cu: goto label_30a18c;
        case 0x30a190u: goto label_30a190;
        case 0x30a194u: goto label_30a194;
        case 0x30a198u: goto label_30a198;
        case 0x30a19cu: goto label_30a19c;
        case 0x30a1a0u: goto label_30a1a0;
        case 0x30a1a4u: goto label_30a1a4;
        case 0x30a1a8u: goto label_30a1a8;
        case 0x30a1acu: goto label_30a1ac;
        case 0x30a1b0u: goto label_30a1b0;
        case 0x30a1b4u: goto label_30a1b4;
        case 0x30a1b8u: goto label_30a1b8;
        case 0x30a1bcu: goto label_30a1bc;
        case 0x30a1c0u: goto label_30a1c0;
        case 0x30a1c4u: goto label_30a1c4;
        case 0x30a1c8u: goto label_30a1c8;
        case 0x30a1ccu: goto label_30a1cc;
        case 0x30a1d0u: goto label_30a1d0;
        case 0x30a1d4u: goto label_30a1d4;
        case 0x30a1d8u: goto label_30a1d8;
        case 0x30a1dcu: goto label_30a1dc;
        case 0x30a1e0u: goto label_30a1e0;
        case 0x30a1e4u: goto label_30a1e4;
        case 0x30a1e8u: goto label_30a1e8;
        case 0x30a1ecu: goto label_30a1ec;
        case 0x30a1f0u: goto label_30a1f0;
        case 0x30a1f4u: goto label_30a1f4;
        case 0x30a1f8u: goto label_30a1f8;
        case 0x30a1fcu: goto label_30a1fc;
        case 0x30a200u: goto label_30a200;
        case 0x30a204u: goto label_30a204;
        case 0x30a208u: goto label_30a208;
        case 0x30a20cu: goto label_30a20c;
        case 0x30a210u: goto label_30a210;
        case 0x30a214u: goto label_30a214;
        case 0x30a218u: goto label_30a218;
        case 0x30a21cu: goto label_30a21c;
        case 0x30a220u: goto label_30a220;
        case 0x30a224u: goto label_30a224;
        case 0x30a228u: goto label_30a228;
        case 0x30a22cu: goto label_30a22c;
        case 0x30a230u: goto label_30a230;
        case 0x30a234u: goto label_30a234;
        case 0x30a238u: goto label_30a238;
        case 0x30a23cu: goto label_30a23c;
        case 0x30a240u: goto label_30a240;
        case 0x30a244u: goto label_30a244;
        case 0x30a248u: goto label_30a248;
        case 0x30a24cu: goto label_30a24c;
        case 0x30a250u: goto label_30a250;
        case 0x30a254u: goto label_30a254;
        case 0x30a258u: goto label_30a258;
        case 0x30a25cu: goto label_30a25c;
        case 0x30a260u: goto label_30a260;
        case 0x30a264u: goto label_30a264;
        case 0x30a268u: goto label_30a268;
        case 0x30a26cu: goto label_30a26c;
        case 0x30a270u: goto label_30a270;
        case 0x30a274u: goto label_30a274;
        case 0x30a278u: goto label_30a278;
        case 0x30a27cu: goto label_30a27c;
        case 0x30a280u: goto label_30a280;
        case 0x30a284u: goto label_30a284;
        case 0x30a288u: goto label_30a288;
        case 0x30a28cu: goto label_30a28c;
        case 0x30a290u: goto label_30a290;
        case 0x30a294u: goto label_30a294;
        case 0x30a298u: goto label_30a298;
        case 0x30a29cu: goto label_30a29c;
        case 0x30a2a0u: goto label_30a2a0;
        case 0x30a2a4u: goto label_30a2a4;
        case 0x30a2a8u: goto label_30a2a8;
        case 0x30a2acu: goto label_30a2ac;
        case 0x30a2b0u: goto label_30a2b0;
        case 0x30a2b4u: goto label_30a2b4;
        case 0x30a2b8u: goto label_30a2b8;
        case 0x30a2bcu: goto label_30a2bc;
        case 0x30a2c0u: goto label_30a2c0;
        case 0x30a2c4u: goto label_30a2c4;
        case 0x30a2c8u: goto label_30a2c8;
        case 0x30a2ccu: goto label_30a2cc;
        case 0x30a2d0u: goto label_30a2d0;
        case 0x30a2d4u: goto label_30a2d4;
        case 0x30a2d8u: goto label_30a2d8;
        case 0x30a2dcu: goto label_30a2dc;
        case 0x30a2e0u: goto label_30a2e0;
        case 0x30a2e4u: goto label_30a2e4;
        case 0x30a2e8u: goto label_30a2e8;
        case 0x30a2ecu: goto label_30a2ec;
        case 0x30a2f0u: goto label_30a2f0;
        case 0x30a2f4u: goto label_30a2f4;
        case 0x30a2f8u: goto label_30a2f8;
        case 0x30a2fcu: goto label_30a2fc;
        case 0x30a300u: goto label_30a300;
        case 0x30a304u: goto label_30a304;
        case 0x30a308u: goto label_30a308;
        case 0x30a30cu: goto label_30a30c;
        case 0x30a310u: goto label_30a310;
        case 0x30a314u: goto label_30a314;
        case 0x30a318u: goto label_30a318;
        case 0x30a31cu: goto label_30a31c;
        case 0x30a320u: goto label_30a320;
        case 0x30a324u: goto label_30a324;
        case 0x30a328u: goto label_30a328;
        case 0x30a32cu: goto label_30a32c;
        case 0x30a330u: goto label_30a330;
        case 0x30a334u: goto label_30a334;
        case 0x30a338u: goto label_30a338;
        case 0x30a33cu: goto label_30a33c;
        case 0x30a340u: goto label_30a340;
        case 0x30a344u: goto label_30a344;
        case 0x30a348u: goto label_30a348;
        case 0x30a34cu: goto label_30a34c;
        case 0x30a350u: goto label_30a350;
        case 0x30a354u: goto label_30a354;
        case 0x30a358u: goto label_30a358;
        case 0x30a35cu: goto label_30a35c;
        case 0x30a360u: goto label_30a360;
        case 0x30a364u: goto label_30a364;
        case 0x30a368u: goto label_30a368;
        case 0x30a36cu: goto label_30a36c;
        case 0x30a370u: goto label_30a370;
        case 0x30a374u: goto label_30a374;
        case 0x30a378u: goto label_30a378;
        case 0x30a37cu: goto label_30a37c;
        case 0x30a380u: goto label_30a380;
        case 0x30a384u: goto label_30a384;
        case 0x30a388u: goto label_30a388;
        case 0x30a38cu: goto label_30a38c;
        case 0x30a390u: goto label_30a390;
        case 0x30a394u: goto label_30a394;
        case 0x30a398u: goto label_30a398;
        case 0x30a39cu: goto label_30a39c;
        case 0x30a3a0u: goto label_30a3a0;
        case 0x30a3a4u: goto label_30a3a4;
        case 0x30a3a8u: goto label_30a3a8;
        case 0x30a3acu: goto label_30a3ac;
        case 0x30a3b0u: goto label_30a3b0;
        case 0x30a3b4u: goto label_30a3b4;
        case 0x30a3b8u: goto label_30a3b8;
        case 0x30a3bcu: goto label_30a3bc;
        case 0x30a3c0u: goto label_30a3c0;
        case 0x30a3c4u: goto label_30a3c4;
        case 0x30a3c8u: goto label_30a3c8;
        case 0x30a3ccu: goto label_30a3cc;
        case 0x30a3d0u: goto label_30a3d0;
        case 0x30a3d4u: goto label_30a3d4;
        case 0x30a3d8u: goto label_30a3d8;
        case 0x30a3dcu: goto label_30a3dc;
        case 0x30a3e0u: goto label_30a3e0;
        case 0x30a3e4u: goto label_30a3e4;
        case 0x30a3e8u: goto label_30a3e8;
        case 0x30a3ecu: goto label_30a3ec;
        case 0x30a3f0u: goto label_30a3f0;
        case 0x30a3f4u: goto label_30a3f4;
        case 0x30a3f8u: goto label_30a3f8;
        case 0x30a3fcu: goto label_30a3fc;
        case 0x30a400u: goto label_30a400;
        case 0x30a404u: goto label_30a404;
        case 0x30a408u: goto label_30a408;
        case 0x30a40cu: goto label_30a40c;
        case 0x30a410u: goto label_30a410;
        case 0x30a414u: goto label_30a414;
        case 0x30a418u: goto label_30a418;
        case 0x30a41cu: goto label_30a41c;
        case 0x30a420u: goto label_30a420;
        case 0x30a424u: goto label_30a424;
        case 0x30a428u: goto label_30a428;
        case 0x30a42cu: goto label_30a42c;
        case 0x30a430u: goto label_30a430;
        case 0x30a434u: goto label_30a434;
        case 0x30a438u: goto label_30a438;
        case 0x30a43cu: goto label_30a43c;
        case 0x30a440u: goto label_30a440;
        case 0x30a444u: goto label_30a444;
        case 0x30a448u: goto label_30a448;
        case 0x30a44cu: goto label_30a44c;
        case 0x30a450u: goto label_30a450;
        case 0x30a454u: goto label_30a454;
        case 0x30a458u: goto label_30a458;
        case 0x30a45cu: goto label_30a45c;
        case 0x30a460u: goto label_30a460;
        case 0x30a464u: goto label_30a464;
        case 0x30a468u: goto label_30a468;
        case 0x30a46cu: goto label_30a46c;
        case 0x30a470u: goto label_30a470;
        case 0x30a474u: goto label_30a474;
        case 0x30a478u: goto label_30a478;
        case 0x30a47cu: goto label_30a47c;
        case 0x30a480u: goto label_30a480;
        case 0x30a484u: goto label_30a484;
        case 0x30a488u: goto label_30a488;
        case 0x30a48cu: goto label_30a48c;
        case 0x30a490u: goto label_30a490;
        case 0x30a494u: goto label_30a494;
        case 0x30a498u: goto label_30a498;
        case 0x30a49cu: goto label_30a49c;
        case 0x30a4a0u: goto label_30a4a0;
        case 0x30a4a4u: goto label_30a4a4;
        case 0x30a4a8u: goto label_30a4a8;
        case 0x30a4acu: goto label_30a4ac;
        case 0x30a4b0u: goto label_30a4b0;
        case 0x30a4b4u: goto label_30a4b4;
        case 0x30a4b8u: goto label_30a4b8;
        case 0x30a4bcu: goto label_30a4bc;
        case 0x30a4c0u: goto label_30a4c0;
        case 0x30a4c4u: goto label_30a4c4;
        case 0x30a4c8u: goto label_30a4c8;
        case 0x30a4ccu: goto label_30a4cc;
        case 0x30a4d0u: goto label_30a4d0;
        case 0x30a4d4u: goto label_30a4d4;
        case 0x30a4d8u: goto label_30a4d8;
        case 0x30a4dcu: goto label_30a4dc;
        case 0x30a4e0u: goto label_30a4e0;
        case 0x30a4e4u: goto label_30a4e4;
        case 0x30a4e8u: goto label_30a4e8;
        case 0x30a4ecu: goto label_30a4ec;
        case 0x30a4f0u: goto label_30a4f0;
        case 0x30a4f4u: goto label_30a4f4;
        case 0x30a4f8u: goto label_30a4f8;
        case 0x30a4fcu: goto label_30a4fc;
        case 0x30a500u: goto label_30a500;
        case 0x30a504u: goto label_30a504;
        case 0x30a508u: goto label_30a508;
        case 0x30a50cu: goto label_30a50c;
        case 0x30a510u: goto label_30a510;
        case 0x30a514u: goto label_30a514;
        case 0x30a518u: goto label_30a518;
        case 0x30a51cu: goto label_30a51c;
        case 0x30a520u: goto label_30a520;
        case 0x30a524u: goto label_30a524;
        case 0x30a528u: goto label_30a528;
        case 0x30a52cu: goto label_30a52c;
        case 0x30a530u: goto label_30a530;
        case 0x30a534u: goto label_30a534;
        case 0x30a538u: goto label_30a538;
        case 0x30a53cu: goto label_30a53c;
        case 0x30a540u: goto label_30a540;
        case 0x30a544u: goto label_30a544;
        case 0x30a548u: goto label_30a548;
        case 0x30a54cu: goto label_30a54c;
        case 0x30a550u: goto label_30a550;
        case 0x30a554u: goto label_30a554;
        case 0x30a558u: goto label_30a558;
        case 0x30a55cu: goto label_30a55c;
        case 0x30a560u: goto label_30a560;
        case 0x30a564u: goto label_30a564;
        case 0x30a568u: goto label_30a568;
        case 0x30a56cu: goto label_30a56c;
        case 0x30a570u: goto label_30a570;
        case 0x30a574u: goto label_30a574;
        case 0x30a578u: goto label_30a578;
        case 0x30a57cu: goto label_30a57c;
        case 0x30a580u: goto label_30a580;
        case 0x30a584u: goto label_30a584;
        case 0x30a588u: goto label_30a588;
        case 0x30a58cu: goto label_30a58c;
        case 0x30a590u: goto label_30a590;
        case 0x30a594u: goto label_30a594;
        case 0x30a598u: goto label_30a598;
        case 0x30a59cu: goto label_30a59c;
        case 0x30a5a0u: goto label_30a5a0;
        case 0x30a5a4u: goto label_30a5a4;
        case 0x30a5a8u: goto label_30a5a8;
        case 0x30a5acu: goto label_30a5ac;
        case 0x30a5b0u: goto label_30a5b0;
        case 0x30a5b4u: goto label_30a5b4;
        case 0x30a5b8u: goto label_30a5b8;
        case 0x30a5bcu: goto label_30a5bc;
        case 0x30a5c0u: goto label_30a5c0;
        case 0x30a5c4u: goto label_30a5c4;
        case 0x30a5c8u: goto label_30a5c8;
        case 0x30a5ccu: goto label_30a5cc;
        case 0x30a5d0u: goto label_30a5d0;
        case 0x30a5d4u: goto label_30a5d4;
        case 0x30a5d8u: goto label_30a5d8;
        case 0x30a5dcu: goto label_30a5dc;
        case 0x30a5e0u: goto label_30a5e0;
        case 0x30a5e4u: goto label_30a5e4;
        case 0x30a5e8u: goto label_30a5e8;
        case 0x30a5ecu: goto label_30a5ec;
        case 0x30a5f0u: goto label_30a5f0;
        case 0x30a5f4u: goto label_30a5f4;
        case 0x30a5f8u: goto label_30a5f8;
        case 0x30a5fcu: goto label_30a5fc;
        case 0x30a600u: goto label_30a600;
        case 0x30a604u: goto label_30a604;
        case 0x30a608u: goto label_30a608;
        case 0x30a60cu: goto label_30a60c;
        case 0x30a610u: goto label_30a610;
        case 0x30a614u: goto label_30a614;
        case 0x30a618u: goto label_30a618;
        case 0x30a61cu: goto label_30a61c;
        case 0x30a620u: goto label_30a620;
        case 0x30a624u: goto label_30a624;
        case 0x30a628u: goto label_30a628;
        case 0x30a62cu: goto label_30a62c;
        case 0x30a630u: goto label_30a630;
        case 0x30a634u: goto label_30a634;
        case 0x30a638u: goto label_30a638;
        case 0x30a63cu: goto label_30a63c;
        case 0x30a640u: goto label_30a640;
        case 0x30a644u: goto label_30a644;
        case 0x30a648u: goto label_30a648;
        case 0x30a64cu: goto label_30a64c;
        case 0x30a650u: goto label_30a650;
        case 0x30a654u: goto label_30a654;
        case 0x30a658u: goto label_30a658;
        case 0x30a65cu: goto label_30a65c;
        case 0x30a660u: goto label_30a660;
        case 0x30a664u: goto label_30a664;
        case 0x30a668u: goto label_30a668;
        case 0x30a66cu: goto label_30a66c;
        case 0x30a670u: goto label_30a670;
        case 0x30a674u: goto label_30a674;
        case 0x30a678u: goto label_30a678;
        case 0x30a67cu: goto label_30a67c;
        case 0x30a680u: goto label_30a680;
        case 0x30a684u: goto label_30a684;
        case 0x30a688u: goto label_30a688;
        case 0x30a68cu: goto label_30a68c;
        case 0x30a690u: goto label_30a690;
        case 0x30a694u: goto label_30a694;
        case 0x30a698u: goto label_30a698;
        case 0x30a69cu: goto label_30a69c;
        case 0x30a6a0u: goto label_30a6a0;
        case 0x30a6a4u: goto label_30a6a4;
        case 0x30a6a8u: goto label_30a6a8;
        case 0x30a6acu: goto label_30a6ac;
        case 0x30a6b0u: goto label_30a6b0;
        case 0x30a6b4u: goto label_30a6b4;
        case 0x30a6b8u: goto label_30a6b8;
        case 0x30a6bcu: goto label_30a6bc;
        case 0x30a6c0u: goto label_30a6c0;
        case 0x30a6c4u: goto label_30a6c4;
        case 0x30a6c8u: goto label_30a6c8;
        case 0x30a6ccu: goto label_30a6cc;
        case 0x30a6d0u: goto label_30a6d0;
        case 0x30a6d4u: goto label_30a6d4;
        case 0x30a6d8u: goto label_30a6d8;
        case 0x30a6dcu: goto label_30a6dc;
        case 0x30a6e0u: goto label_30a6e0;
        case 0x30a6e4u: goto label_30a6e4;
        case 0x30a6e8u: goto label_30a6e8;
        case 0x30a6ecu: goto label_30a6ec;
        case 0x30a6f0u: goto label_30a6f0;
        case 0x30a6f4u: goto label_30a6f4;
        case 0x30a6f8u: goto label_30a6f8;
        case 0x30a6fcu: goto label_30a6fc;
        case 0x30a700u: goto label_30a700;
        case 0x30a704u: goto label_30a704;
        case 0x30a708u: goto label_30a708;
        case 0x30a70cu: goto label_30a70c;
        case 0x30a710u: goto label_30a710;
        case 0x30a714u: goto label_30a714;
        case 0x30a718u: goto label_30a718;
        case 0x30a71cu: goto label_30a71c;
        case 0x30a720u: goto label_30a720;
        case 0x30a724u: goto label_30a724;
        case 0x30a728u: goto label_30a728;
        case 0x30a72cu: goto label_30a72c;
        case 0x30a730u: goto label_30a730;
        case 0x30a734u: goto label_30a734;
        case 0x30a738u: goto label_30a738;
        case 0x30a73cu: goto label_30a73c;
        case 0x30a740u: goto label_30a740;
        case 0x30a744u: goto label_30a744;
        case 0x30a748u: goto label_30a748;
        case 0x30a74cu: goto label_30a74c;
        case 0x30a750u: goto label_30a750;
        case 0x30a754u: goto label_30a754;
        case 0x30a758u: goto label_30a758;
        case 0x30a75cu: goto label_30a75c;
        case 0x30a760u: goto label_30a760;
        case 0x30a764u: goto label_30a764;
        case 0x30a768u: goto label_30a768;
        case 0x30a76cu: goto label_30a76c;
        case 0x30a770u: goto label_30a770;
        case 0x30a774u: goto label_30a774;
        case 0x30a778u: goto label_30a778;
        case 0x30a77cu: goto label_30a77c;
        case 0x30a780u: goto label_30a780;
        case 0x30a784u: goto label_30a784;
        case 0x30a788u: goto label_30a788;
        case 0x30a78cu: goto label_30a78c;
        case 0x30a790u: goto label_30a790;
        case 0x30a794u: goto label_30a794;
        case 0x30a798u: goto label_30a798;
        case 0x30a79cu: goto label_30a79c;
        case 0x30a7a0u: goto label_30a7a0;
        case 0x30a7a4u: goto label_30a7a4;
        case 0x30a7a8u: goto label_30a7a8;
        case 0x30a7acu: goto label_30a7ac;
        case 0x30a7b0u: goto label_30a7b0;
        case 0x30a7b4u: goto label_30a7b4;
        case 0x30a7b8u: goto label_30a7b8;
        case 0x30a7bcu: goto label_30a7bc;
        case 0x30a7c0u: goto label_30a7c0;
        case 0x30a7c4u: goto label_30a7c4;
        case 0x30a7c8u: goto label_30a7c8;
        case 0x30a7ccu: goto label_30a7cc;
        case 0x30a7d0u: goto label_30a7d0;
        case 0x30a7d4u: goto label_30a7d4;
        case 0x30a7d8u: goto label_30a7d8;
        case 0x30a7dcu: goto label_30a7dc;
        case 0x30a7e0u: goto label_30a7e0;
        case 0x30a7e4u: goto label_30a7e4;
        case 0x30a7e8u: goto label_30a7e8;
        case 0x30a7ecu: goto label_30a7ec;
        case 0x30a7f0u: goto label_30a7f0;
        case 0x30a7f4u: goto label_30a7f4;
        case 0x30a7f8u: goto label_30a7f8;
        case 0x30a7fcu: goto label_30a7fc;
        case 0x30a800u: goto label_30a800;
        case 0x30a804u: goto label_30a804;
        case 0x30a808u: goto label_30a808;
        case 0x30a80cu: goto label_30a80c;
        case 0x30a810u: goto label_30a810;
        case 0x30a814u: goto label_30a814;
        case 0x30a818u: goto label_30a818;
        case 0x30a81cu: goto label_30a81c;
        case 0x30a820u: goto label_30a820;
        case 0x30a824u: goto label_30a824;
        case 0x30a828u: goto label_30a828;
        case 0x30a82cu: goto label_30a82c;
        case 0x30a830u: goto label_30a830;
        case 0x30a834u: goto label_30a834;
        case 0x30a838u: goto label_30a838;
        case 0x30a83cu: goto label_30a83c;
        case 0x30a840u: goto label_30a840;
        case 0x30a844u: goto label_30a844;
        case 0x30a848u: goto label_30a848;
        case 0x30a84cu: goto label_30a84c;
        case 0x30a850u: goto label_30a850;
        case 0x30a854u: goto label_30a854;
        case 0x30a858u: goto label_30a858;
        case 0x30a85cu: goto label_30a85c;
        case 0x30a860u: goto label_30a860;
        case 0x30a864u: goto label_30a864;
        case 0x30a868u: goto label_30a868;
        case 0x30a86cu: goto label_30a86c;
        case 0x30a870u: goto label_30a870;
        case 0x30a874u: goto label_30a874;
        case 0x30a878u: goto label_30a878;
        case 0x30a87cu: goto label_30a87c;
        case 0x30a880u: goto label_30a880;
        case 0x30a884u: goto label_30a884;
        case 0x30a888u: goto label_30a888;
        case 0x30a88cu: goto label_30a88c;
        case 0x30a890u: goto label_30a890;
        case 0x30a894u: goto label_30a894;
        case 0x30a898u: goto label_30a898;
        case 0x30a89cu: goto label_30a89c;
        case 0x30a8a0u: goto label_30a8a0;
        case 0x30a8a4u: goto label_30a8a4;
        case 0x30a8a8u: goto label_30a8a8;
        case 0x30a8acu: goto label_30a8ac;
        case 0x30a8b0u: goto label_30a8b0;
        case 0x30a8b4u: goto label_30a8b4;
        case 0x30a8b8u: goto label_30a8b8;
        case 0x30a8bcu: goto label_30a8bc;
        case 0x30a8c0u: goto label_30a8c0;
        case 0x30a8c4u: goto label_30a8c4;
        case 0x30a8c8u: goto label_30a8c8;
        case 0x30a8ccu: goto label_30a8cc;
        case 0x30a8d0u: goto label_30a8d0;
        case 0x30a8d4u: goto label_30a8d4;
        case 0x30a8d8u: goto label_30a8d8;
        case 0x30a8dcu: goto label_30a8dc;
        case 0x30a8e0u: goto label_30a8e0;
        case 0x30a8e4u: goto label_30a8e4;
        case 0x30a8e8u: goto label_30a8e8;
        case 0x30a8ecu: goto label_30a8ec;
        case 0x30a8f0u: goto label_30a8f0;
        case 0x30a8f4u: goto label_30a8f4;
        case 0x30a8f8u: goto label_30a8f8;
        case 0x30a8fcu: goto label_30a8fc;
        case 0x30a900u: goto label_30a900;
        case 0x30a904u: goto label_30a904;
        case 0x30a908u: goto label_30a908;
        case 0x30a90cu: goto label_30a90c;
        case 0x30a910u: goto label_30a910;
        case 0x30a914u: goto label_30a914;
        case 0x30a918u: goto label_30a918;
        case 0x30a91cu: goto label_30a91c;
        case 0x30a920u: goto label_30a920;
        case 0x30a924u: goto label_30a924;
        case 0x30a928u: goto label_30a928;
        case 0x30a92cu: goto label_30a92c;
        case 0x30a930u: goto label_30a930;
        case 0x30a934u: goto label_30a934;
        case 0x30a938u: goto label_30a938;
        case 0x30a93cu: goto label_30a93c;
        case 0x30a940u: goto label_30a940;
        case 0x30a944u: goto label_30a944;
        case 0x30a948u: goto label_30a948;
        case 0x30a94cu: goto label_30a94c;
        case 0x30a950u: goto label_30a950;
        case 0x30a954u: goto label_30a954;
        case 0x30a958u: goto label_30a958;
        case 0x30a95cu: goto label_30a95c;
        case 0x30a960u: goto label_30a960;
        case 0x30a964u: goto label_30a964;
        case 0x30a968u: goto label_30a968;
        case 0x30a96cu: goto label_30a96c;
        case 0x30a970u: goto label_30a970;
        case 0x30a974u: goto label_30a974;
        case 0x30a978u: goto label_30a978;
        case 0x30a97cu: goto label_30a97c;
        case 0x30a980u: goto label_30a980;
        case 0x30a984u: goto label_30a984;
        case 0x30a988u: goto label_30a988;
        case 0x30a98cu: goto label_30a98c;
        case 0x30a990u: goto label_30a990;
        case 0x30a994u: goto label_30a994;
        case 0x30a998u: goto label_30a998;
        case 0x30a99cu: goto label_30a99c;
        case 0x30a9a0u: goto label_30a9a0;
        case 0x30a9a4u: goto label_30a9a4;
        case 0x30a9a8u: goto label_30a9a8;
        case 0x30a9acu: goto label_30a9ac;
        case 0x30a9b0u: goto label_30a9b0;
        case 0x30a9b4u: goto label_30a9b4;
        case 0x30a9b8u: goto label_30a9b8;
        case 0x30a9bcu: goto label_30a9bc;
        case 0x30a9c0u: goto label_30a9c0;
        case 0x30a9c4u: goto label_30a9c4;
        case 0x30a9c8u: goto label_30a9c8;
        case 0x30a9ccu: goto label_30a9cc;
        case 0x30a9d0u: goto label_30a9d0;
        case 0x30a9d4u: goto label_30a9d4;
        case 0x30a9d8u: goto label_30a9d8;
        case 0x30a9dcu: goto label_30a9dc;
        case 0x30a9e0u: goto label_30a9e0;
        case 0x30a9e4u: goto label_30a9e4;
        case 0x30a9e8u: goto label_30a9e8;
        case 0x30a9ecu: goto label_30a9ec;
        case 0x30a9f0u: goto label_30a9f0;
        case 0x30a9f4u: goto label_30a9f4;
        case 0x30a9f8u: goto label_30a9f8;
        case 0x30a9fcu: goto label_30a9fc;
        case 0x30aa00u: goto label_30aa00;
        case 0x30aa04u: goto label_30aa04;
        case 0x30aa08u: goto label_30aa08;
        case 0x30aa0cu: goto label_30aa0c;
        case 0x30aa10u: goto label_30aa10;
        case 0x30aa14u: goto label_30aa14;
        case 0x30aa18u: goto label_30aa18;
        case 0x30aa1cu: goto label_30aa1c;
        case 0x30aa20u: goto label_30aa20;
        case 0x30aa24u: goto label_30aa24;
        case 0x30aa28u: goto label_30aa28;
        case 0x30aa2cu: goto label_30aa2c;
        case 0x30aa30u: goto label_30aa30;
        case 0x30aa34u: goto label_30aa34;
        case 0x30aa38u: goto label_30aa38;
        case 0x30aa3cu: goto label_30aa3c;
        case 0x30aa40u: goto label_30aa40;
        case 0x30aa44u: goto label_30aa44;
        case 0x30aa48u: goto label_30aa48;
        case 0x30aa4cu: goto label_30aa4c;
        case 0x30aa50u: goto label_30aa50;
        case 0x30aa54u: goto label_30aa54;
        case 0x30aa58u: goto label_30aa58;
        case 0x30aa5cu: goto label_30aa5c;
        case 0x30aa60u: goto label_30aa60;
        case 0x30aa64u: goto label_30aa64;
        case 0x30aa68u: goto label_30aa68;
        case 0x30aa6cu: goto label_30aa6c;
        case 0x30aa70u: goto label_30aa70;
        case 0x30aa74u: goto label_30aa74;
        case 0x30aa78u: goto label_30aa78;
        case 0x30aa7cu: goto label_30aa7c;
        case 0x30aa80u: goto label_30aa80;
        case 0x30aa84u: goto label_30aa84;
        case 0x30aa88u: goto label_30aa88;
        case 0x30aa8cu: goto label_30aa8c;
        case 0x30aa90u: goto label_30aa90;
        case 0x30aa94u: goto label_30aa94;
        case 0x30aa98u: goto label_30aa98;
        case 0x30aa9cu: goto label_30aa9c;
        case 0x30aaa0u: goto label_30aaa0;
        case 0x30aaa4u: goto label_30aaa4;
        case 0x30aaa8u: goto label_30aaa8;
        case 0x30aaacu: goto label_30aaac;
        case 0x30aab0u: goto label_30aab0;
        case 0x30aab4u: goto label_30aab4;
        case 0x30aab8u: goto label_30aab8;
        case 0x30aabcu: goto label_30aabc;
        case 0x30aac0u: goto label_30aac0;
        case 0x30aac4u: goto label_30aac4;
        case 0x30aac8u: goto label_30aac8;
        case 0x30aaccu: goto label_30aacc;
        case 0x30aad0u: goto label_30aad0;
        case 0x30aad4u: goto label_30aad4;
        case 0x30aad8u: goto label_30aad8;
        case 0x30aadcu: goto label_30aadc;
        case 0x30aae0u: goto label_30aae0;
        case 0x30aae4u: goto label_30aae4;
        case 0x30aae8u: goto label_30aae8;
        case 0x30aaecu: goto label_30aaec;
        case 0x30aaf0u: goto label_30aaf0;
        case 0x30aaf4u: goto label_30aaf4;
        case 0x30aaf8u: goto label_30aaf8;
        case 0x30aafcu: goto label_30aafc;
        case 0x30ab00u: goto label_30ab00;
        case 0x30ab04u: goto label_30ab04;
        case 0x30ab08u: goto label_30ab08;
        case 0x30ab0cu: goto label_30ab0c;
        case 0x30ab10u: goto label_30ab10;
        case 0x30ab14u: goto label_30ab14;
        case 0x30ab18u: goto label_30ab18;
        case 0x30ab1cu: goto label_30ab1c;
        case 0x30ab20u: goto label_30ab20;
        case 0x30ab24u: goto label_30ab24;
        case 0x30ab28u: goto label_30ab28;
        case 0x30ab2cu: goto label_30ab2c;
        case 0x30ab30u: goto label_30ab30;
        case 0x30ab34u: goto label_30ab34;
        case 0x30ab38u: goto label_30ab38;
        case 0x30ab3cu: goto label_30ab3c;
        case 0x30ab40u: goto label_30ab40;
        case 0x30ab44u: goto label_30ab44;
        case 0x30ab48u: goto label_30ab48;
        case 0x30ab4cu: goto label_30ab4c;
        case 0x30ab50u: goto label_30ab50;
        case 0x30ab54u: goto label_30ab54;
        case 0x30ab58u: goto label_30ab58;
        case 0x30ab5cu: goto label_30ab5c;
        case 0x30ab60u: goto label_30ab60;
        case 0x30ab64u: goto label_30ab64;
        case 0x30ab68u: goto label_30ab68;
        case 0x30ab6cu: goto label_30ab6c;
        case 0x30ab70u: goto label_30ab70;
        case 0x30ab74u: goto label_30ab74;
        case 0x30ab78u: goto label_30ab78;
        case 0x30ab7cu: goto label_30ab7c;
        case 0x30ab80u: goto label_30ab80;
        case 0x30ab84u: goto label_30ab84;
        case 0x30ab88u: goto label_30ab88;
        case 0x30ab8cu: goto label_30ab8c;
        case 0x30ab90u: goto label_30ab90;
        case 0x30ab94u: goto label_30ab94;
        case 0x30ab98u: goto label_30ab98;
        case 0x30ab9cu: goto label_30ab9c;
        case 0x30aba0u: goto label_30aba0;
        case 0x30aba4u: goto label_30aba4;
        case 0x30aba8u: goto label_30aba8;
        case 0x30abacu: goto label_30abac;
        case 0x30abb0u: goto label_30abb0;
        case 0x30abb4u: goto label_30abb4;
        case 0x30abb8u: goto label_30abb8;
        case 0x30abbcu: goto label_30abbc;
        case 0x30abc0u: goto label_30abc0;
        case 0x30abc4u: goto label_30abc4;
        case 0x30abc8u: goto label_30abc8;
        case 0x30abccu: goto label_30abcc;
        case 0x30abd0u: goto label_30abd0;
        case 0x30abd4u: goto label_30abd4;
        case 0x30abd8u: goto label_30abd8;
        case 0x30abdcu: goto label_30abdc;
        case 0x30abe0u: goto label_30abe0;
        case 0x30abe4u: goto label_30abe4;
        case 0x30abe8u: goto label_30abe8;
        case 0x30abecu: goto label_30abec;
        case 0x30abf0u: goto label_30abf0;
        case 0x30abf4u: goto label_30abf4;
        case 0x30abf8u: goto label_30abf8;
        case 0x30abfcu: goto label_30abfc;
        case 0x30ac00u: goto label_30ac00;
        case 0x30ac04u: goto label_30ac04;
        case 0x30ac08u: goto label_30ac08;
        case 0x30ac0cu: goto label_30ac0c;
        case 0x30ac10u: goto label_30ac10;
        case 0x30ac14u: goto label_30ac14;
        case 0x30ac18u: goto label_30ac18;
        case 0x30ac1cu: goto label_30ac1c;
        case 0x30ac20u: goto label_30ac20;
        case 0x30ac24u: goto label_30ac24;
        case 0x30ac28u: goto label_30ac28;
        case 0x30ac2cu: goto label_30ac2c;
        case 0x30ac30u: goto label_30ac30;
        case 0x30ac34u: goto label_30ac34;
        case 0x30ac38u: goto label_30ac38;
        case 0x30ac3cu: goto label_30ac3c;
        case 0x30ac40u: goto label_30ac40;
        case 0x30ac44u: goto label_30ac44;
        case 0x30ac48u: goto label_30ac48;
        case 0x30ac4cu: goto label_30ac4c;
        case 0x30ac50u: goto label_30ac50;
        case 0x30ac54u: goto label_30ac54;
        case 0x30ac58u: goto label_30ac58;
        case 0x30ac5cu: goto label_30ac5c;
        case 0x30ac60u: goto label_30ac60;
        case 0x30ac64u: goto label_30ac64;
        case 0x30ac68u: goto label_30ac68;
        case 0x30ac6cu: goto label_30ac6c;
        case 0x30ac70u: goto label_30ac70;
        case 0x30ac74u: goto label_30ac74;
        case 0x30ac78u: goto label_30ac78;
        case 0x30ac7cu: goto label_30ac7c;
        case 0x30ac80u: goto label_30ac80;
        case 0x30ac84u: goto label_30ac84;
        case 0x30ac88u: goto label_30ac88;
        case 0x30ac8cu: goto label_30ac8c;
        case 0x30ac90u: goto label_30ac90;
        case 0x30ac94u: goto label_30ac94;
        case 0x30ac98u: goto label_30ac98;
        case 0x30ac9cu: goto label_30ac9c;
        case 0x30aca0u: goto label_30aca0;
        case 0x30aca4u: goto label_30aca4;
        case 0x30aca8u: goto label_30aca8;
        case 0x30acacu: goto label_30acac;
        case 0x30acb0u: goto label_30acb0;
        case 0x30acb4u: goto label_30acb4;
        case 0x30acb8u: goto label_30acb8;
        case 0x30acbcu: goto label_30acbc;
        case 0x30acc0u: goto label_30acc0;
        case 0x30acc4u: goto label_30acc4;
        case 0x30acc8u: goto label_30acc8;
        case 0x30acccu: goto label_30accc;
        case 0x30acd0u: goto label_30acd0;
        case 0x30acd4u: goto label_30acd4;
        case 0x30acd8u: goto label_30acd8;
        case 0x30acdcu: goto label_30acdc;
        case 0x30ace0u: goto label_30ace0;
        case 0x30ace4u: goto label_30ace4;
        case 0x30ace8u: goto label_30ace8;
        case 0x30acecu: goto label_30acec;
        case 0x30acf0u: goto label_30acf0;
        case 0x30acf4u: goto label_30acf4;
        case 0x30acf8u: goto label_30acf8;
        case 0x30acfcu: goto label_30acfc;
        case 0x30ad00u: goto label_30ad00;
        case 0x30ad04u: goto label_30ad04;
        case 0x30ad08u: goto label_30ad08;
        case 0x30ad0cu: goto label_30ad0c;
        case 0x30ad10u: goto label_30ad10;
        case 0x30ad14u: goto label_30ad14;
        case 0x30ad18u: goto label_30ad18;
        case 0x30ad1cu: goto label_30ad1c;
        case 0x30ad20u: goto label_30ad20;
        case 0x30ad24u: goto label_30ad24;
        case 0x30ad28u: goto label_30ad28;
        case 0x30ad2cu: goto label_30ad2c;
        case 0x30ad30u: goto label_30ad30;
        case 0x30ad34u: goto label_30ad34;
        case 0x30ad38u: goto label_30ad38;
        case 0x30ad3cu: goto label_30ad3c;
        case 0x30ad40u: goto label_30ad40;
        case 0x30ad44u: goto label_30ad44;
        case 0x30ad48u: goto label_30ad48;
        case 0x30ad4cu: goto label_30ad4c;
        case 0x30ad50u: goto label_30ad50;
        case 0x30ad54u: goto label_30ad54;
        case 0x30ad58u: goto label_30ad58;
        case 0x30ad5cu: goto label_30ad5c;
        case 0x30ad60u: goto label_30ad60;
        case 0x30ad64u: goto label_30ad64;
        case 0x30ad68u: goto label_30ad68;
        case 0x30ad6cu: goto label_30ad6c;
        case 0x30ad70u: goto label_30ad70;
        case 0x30ad74u: goto label_30ad74;
        case 0x30ad78u: goto label_30ad78;
        case 0x30ad7cu: goto label_30ad7c;
        case 0x30ad80u: goto label_30ad80;
        case 0x30ad84u: goto label_30ad84;
        case 0x30ad88u: goto label_30ad88;
        case 0x30ad8cu: goto label_30ad8c;
        case 0x30ad90u: goto label_30ad90;
        case 0x30ad94u: goto label_30ad94;
        case 0x30ad98u: goto label_30ad98;
        case 0x30ad9cu: goto label_30ad9c;
        case 0x30ada0u: goto label_30ada0;
        case 0x30ada4u: goto label_30ada4;
        case 0x30ada8u: goto label_30ada8;
        case 0x30adacu: goto label_30adac;
        case 0x30adb0u: goto label_30adb0;
        case 0x30adb4u: goto label_30adb4;
        case 0x30adb8u: goto label_30adb8;
        case 0x30adbcu: goto label_30adbc;
        case 0x30adc0u: goto label_30adc0;
        case 0x30adc4u: goto label_30adc4;
        case 0x30adc8u: goto label_30adc8;
        case 0x30adccu: goto label_30adcc;
        case 0x30add0u: goto label_30add0;
        case 0x30add4u: goto label_30add4;
        case 0x30add8u: goto label_30add8;
        case 0x30addcu: goto label_30addc;
        case 0x30ade0u: goto label_30ade0;
        case 0x30ade4u: goto label_30ade4;
        case 0x30ade8u: goto label_30ade8;
        case 0x30adecu: goto label_30adec;
        case 0x30adf0u: goto label_30adf0;
        case 0x30adf4u: goto label_30adf4;
        case 0x30adf8u: goto label_30adf8;
        case 0x30adfcu: goto label_30adfc;
        case 0x30ae00u: goto label_30ae00;
        case 0x30ae04u: goto label_30ae04;
        case 0x30ae08u: goto label_30ae08;
        case 0x30ae0cu: goto label_30ae0c;
        case 0x30ae10u: goto label_30ae10;
        case 0x30ae14u: goto label_30ae14;
        case 0x30ae18u: goto label_30ae18;
        case 0x30ae1cu: goto label_30ae1c;
        case 0x30ae20u: goto label_30ae20;
        case 0x30ae24u: goto label_30ae24;
        case 0x30ae28u: goto label_30ae28;
        case 0x30ae2cu: goto label_30ae2c;
        case 0x30ae30u: goto label_30ae30;
        case 0x30ae34u: goto label_30ae34;
        case 0x30ae38u: goto label_30ae38;
        case 0x30ae3cu: goto label_30ae3c;
        case 0x30ae40u: goto label_30ae40;
        case 0x30ae44u: goto label_30ae44;
        case 0x30ae48u: goto label_30ae48;
        case 0x30ae4cu: goto label_30ae4c;
        case 0x30ae50u: goto label_30ae50;
        case 0x30ae54u: goto label_30ae54;
        case 0x30ae58u: goto label_30ae58;
        case 0x30ae5cu: goto label_30ae5c;
        case 0x30ae60u: goto label_30ae60;
        case 0x30ae64u: goto label_30ae64;
        case 0x30ae68u: goto label_30ae68;
        case 0x30ae6cu: goto label_30ae6c;
        case 0x30ae70u: goto label_30ae70;
        case 0x30ae74u: goto label_30ae74;
        case 0x30ae78u: goto label_30ae78;
        case 0x30ae7cu: goto label_30ae7c;
        case 0x30ae80u: goto label_30ae80;
        case 0x30ae84u: goto label_30ae84;
        case 0x30ae88u: goto label_30ae88;
        case 0x30ae8cu: goto label_30ae8c;
        case 0x30ae90u: goto label_30ae90;
        case 0x30ae94u: goto label_30ae94;
        case 0x30ae98u: goto label_30ae98;
        case 0x30ae9cu: goto label_30ae9c;
        case 0x30aea0u: goto label_30aea0;
        case 0x30aea4u: goto label_30aea4;
        case 0x30aea8u: goto label_30aea8;
        case 0x30aeacu: goto label_30aeac;
        case 0x30aeb0u: goto label_30aeb0;
        case 0x30aeb4u: goto label_30aeb4;
        case 0x30aeb8u: goto label_30aeb8;
        case 0x30aebcu: goto label_30aebc;
        case 0x30aec0u: goto label_30aec0;
        case 0x30aec4u: goto label_30aec4;
        case 0x30aec8u: goto label_30aec8;
        case 0x30aeccu: goto label_30aecc;
        case 0x30aed0u: goto label_30aed0;
        case 0x30aed4u: goto label_30aed4;
        case 0x30aed8u: goto label_30aed8;
        case 0x30aedcu: goto label_30aedc;
        case 0x30aee0u: goto label_30aee0;
        case 0x30aee4u: goto label_30aee4;
        case 0x30aee8u: goto label_30aee8;
        case 0x30aeecu: goto label_30aeec;
        case 0x30aef0u: goto label_30aef0;
        case 0x30aef4u: goto label_30aef4;
        case 0x30aef8u: goto label_30aef8;
        case 0x30aefcu: goto label_30aefc;
        case 0x30af00u: goto label_30af00;
        case 0x30af04u: goto label_30af04;
        case 0x30af08u: goto label_30af08;
        case 0x30af0cu: goto label_30af0c;
        case 0x30af10u: goto label_30af10;
        case 0x30af14u: goto label_30af14;
        case 0x30af18u: goto label_30af18;
        case 0x30af1cu: goto label_30af1c;
        case 0x30af20u: goto label_30af20;
        case 0x30af24u: goto label_30af24;
        case 0x30af28u: goto label_30af28;
        case 0x30af2cu: goto label_30af2c;
        case 0x30af30u: goto label_30af30;
        case 0x30af34u: goto label_30af34;
        case 0x30af38u: goto label_30af38;
        case 0x30af3cu: goto label_30af3c;
        case 0x30af40u: goto label_30af40;
        case 0x30af44u: goto label_30af44;
        case 0x30af48u: goto label_30af48;
        case 0x30af4cu: goto label_30af4c;
        case 0x30af50u: goto label_30af50;
        case 0x30af54u: goto label_30af54;
        case 0x30af58u: goto label_30af58;
        case 0x30af5cu: goto label_30af5c;
        case 0x30af60u: goto label_30af60;
        case 0x30af64u: goto label_30af64;
        case 0x30af68u: goto label_30af68;
        case 0x30af6cu: goto label_30af6c;
        case 0x30af70u: goto label_30af70;
        case 0x30af74u: goto label_30af74;
        case 0x30af78u: goto label_30af78;
        case 0x30af7cu: goto label_30af7c;
        case 0x30af80u: goto label_30af80;
        case 0x30af84u: goto label_30af84;
        case 0x30af88u: goto label_30af88;
        case 0x30af8cu: goto label_30af8c;
        case 0x30af90u: goto label_30af90;
        case 0x30af94u: goto label_30af94;
        case 0x30af98u: goto label_30af98;
        case 0x30af9cu: goto label_30af9c;
        case 0x30afa0u: goto label_30afa0;
        case 0x30afa4u: goto label_30afa4;
        case 0x30afa8u: goto label_30afa8;
        case 0x30afacu: goto label_30afac;
        case 0x30afb0u: goto label_30afb0;
        case 0x30afb4u: goto label_30afb4;
        case 0x30afb8u: goto label_30afb8;
        case 0x30afbcu: goto label_30afbc;
        case 0x30afc0u: goto label_30afc0;
        case 0x30afc4u: goto label_30afc4;
        case 0x30afc8u: goto label_30afc8;
        case 0x30afccu: goto label_30afcc;
        case 0x30afd0u: goto label_30afd0;
        case 0x30afd4u: goto label_30afd4;
        case 0x30afd8u: goto label_30afd8;
        case 0x30afdcu: goto label_30afdc;
        case 0x30afe0u: goto label_30afe0;
        case 0x30afe4u: goto label_30afe4;
        case 0x30afe8u: goto label_30afe8;
        case 0x30afecu: goto label_30afec;
        case 0x30aff0u: goto label_30aff0;
        case 0x30aff4u: goto label_30aff4;
        case 0x30aff8u: goto label_30aff8;
        case 0x30affcu: goto label_30affc;
        case 0x30b000u: goto label_30b000;
        case 0x30b004u: goto label_30b004;
        case 0x30b008u: goto label_30b008;
        case 0x30b00cu: goto label_30b00c;
        case 0x30b010u: goto label_30b010;
        case 0x30b014u: goto label_30b014;
        case 0x30b018u: goto label_30b018;
        case 0x30b01cu: goto label_30b01c;
        case 0x30b020u: goto label_30b020;
        case 0x30b024u: goto label_30b024;
        case 0x30b028u: goto label_30b028;
        case 0x30b02cu: goto label_30b02c;
        case 0x30b030u: goto label_30b030;
        case 0x30b034u: goto label_30b034;
        case 0x30b038u: goto label_30b038;
        case 0x30b03cu: goto label_30b03c;
        case 0x30b040u: goto label_30b040;
        case 0x30b044u: goto label_30b044;
        case 0x30b048u: goto label_30b048;
        case 0x30b04cu: goto label_30b04c;
        case 0x30b050u: goto label_30b050;
        case 0x30b054u: goto label_30b054;
        case 0x30b058u: goto label_30b058;
        case 0x30b05cu: goto label_30b05c;
        case 0x30b060u: goto label_30b060;
        case 0x30b064u: goto label_30b064;
        case 0x30b068u: goto label_30b068;
        case 0x30b06cu: goto label_30b06c;
        case 0x30b070u: goto label_30b070;
        case 0x30b074u: goto label_30b074;
        case 0x30b078u: goto label_30b078;
        case 0x30b07cu: goto label_30b07c;
        case 0x30b080u: goto label_30b080;
        case 0x30b084u: goto label_30b084;
        case 0x30b088u: goto label_30b088;
        case 0x30b08cu: goto label_30b08c;
        case 0x30b090u: goto label_30b090;
        case 0x30b094u: goto label_30b094;
        case 0x30b098u: goto label_30b098;
        case 0x30b09cu: goto label_30b09c;
        case 0x30b0a0u: goto label_30b0a0;
        case 0x30b0a4u: goto label_30b0a4;
        case 0x30b0a8u: goto label_30b0a8;
        case 0x30b0acu: goto label_30b0ac;
        case 0x30b0b0u: goto label_30b0b0;
        case 0x30b0b4u: goto label_30b0b4;
        case 0x30b0b8u: goto label_30b0b8;
        case 0x30b0bcu: goto label_30b0bc;
        case 0x30b0c0u: goto label_30b0c0;
        case 0x30b0c4u: goto label_30b0c4;
        case 0x30b0c8u: goto label_30b0c8;
        case 0x30b0ccu: goto label_30b0cc;
        case 0x30b0d0u: goto label_30b0d0;
        case 0x30b0d4u: goto label_30b0d4;
        case 0x30b0d8u: goto label_30b0d8;
        case 0x30b0dcu: goto label_30b0dc;
        case 0x30b0e0u: goto label_30b0e0;
        case 0x30b0e4u: goto label_30b0e4;
        case 0x30b0e8u: goto label_30b0e8;
        case 0x30b0ecu: goto label_30b0ec;
        case 0x30b0f0u: goto label_30b0f0;
        case 0x30b0f4u: goto label_30b0f4;
        case 0x30b0f8u: goto label_30b0f8;
        case 0x30b0fcu: goto label_30b0fc;
        case 0x30b100u: goto label_30b100;
        case 0x30b104u: goto label_30b104;
        case 0x30b108u: goto label_30b108;
        case 0x30b10cu: goto label_30b10c;
        case 0x30b110u: goto label_30b110;
        case 0x30b114u: goto label_30b114;
        case 0x30b118u: goto label_30b118;
        case 0x30b11cu: goto label_30b11c;
        case 0x30b120u: goto label_30b120;
        case 0x30b124u: goto label_30b124;
        case 0x30b128u: goto label_30b128;
        case 0x30b12cu: goto label_30b12c;
        case 0x30b130u: goto label_30b130;
        case 0x30b134u: goto label_30b134;
        case 0x30b138u: goto label_30b138;
        case 0x30b13cu: goto label_30b13c;
        case 0x30b140u: goto label_30b140;
        case 0x30b144u: goto label_30b144;
        case 0x30b148u: goto label_30b148;
        case 0x30b14cu: goto label_30b14c;
        case 0x30b150u: goto label_30b150;
        case 0x30b154u: goto label_30b154;
        case 0x30b158u: goto label_30b158;
        case 0x30b15cu: goto label_30b15c;
        case 0x30b160u: goto label_30b160;
        case 0x30b164u: goto label_30b164;
        case 0x30b168u: goto label_30b168;
        case 0x30b16cu: goto label_30b16c;
        case 0x30b170u: goto label_30b170;
        case 0x30b174u: goto label_30b174;
        case 0x30b178u: goto label_30b178;
        case 0x30b17cu: goto label_30b17c;
        case 0x30b180u: goto label_30b180;
        case 0x30b184u: goto label_30b184;
        case 0x30b188u: goto label_30b188;
        case 0x30b18cu: goto label_30b18c;
        case 0x30b190u: goto label_30b190;
        case 0x30b194u: goto label_30b194;
        case 0x30b198u: goto label_30b198;
        case 0x30b19cu: goto label_30b19c;
        case 0x30b1a0u: goto label_30b1a0;
        case 0x30b1a4u: goto label_30b1a4;
        case 0x30b1a8u: goto label_30b1a8;
        case 0x30b1acu: goto label_30b1ac;
        case 0x30b1b0u: goto label_30b1b0;
        case 0x30b1b4u: goto label_30b1b4;
        case 0x30b1b8u: goto label_30b1b8;
        case 0x30b1bcu: goto label_30b1bc;
        case 0x30b1c0u: goto label_30b1c0;
        case 0x30b1c4u: goto label_30b1c4;
        case 0x30b1c8u: goto label_30b1c8;
        case 0x30b1ccu: goto label_30b1cc;
        case 0x30b1d0u: goto label_30b1d0;
        case 0x30b1d4u: goto label_30b1d4;
        case 0x30b1d8u: goto label_30b1d8;
        case 0x30b1dcu: goto label_30b1dc;
        case 0x30b1e0u: goto label_30b1e0;
        case 0x30b1e4u: goto label_30b1e4;
        case 0x30b1e8u: goto label_30b1e8;
        case 0x30b1ecu: goto label_30b1ec;
        case 0x30b1f0u: goto label_30b1f0;
        case 0x30b1f4u: goto label_30b1f4;
        case 0x30b1f8u: goto label_30b1f8;
        case 0x30b1fcu: goto label_30b1fc;
        case 0x30b200u: goto label_30b200;
        case 0x30b204u: goto label_30b204;
        case 0x30b208u: goto label_30b208;
        case 0x30b20cu: goto label_30b20c;
        case 0x30b210u: goto label_30b210;
        case 0x30b214u: goto label_30b214;
        case 0x30b218u: goto label_30b218;
        case 0x30b21cu: goto label_30b21c;
        case 0x30b220u: goto label_30b220;
        case 0x30b224u: goto label_30b224;
        case 0x30b228u: goto label_30b228;
        case 0x30b22cu: goto label_30b22c;
        case 0x30b230u: goto label_30b230;
        case 0x30b234u: goto label_30b234;
        case 0x30b238u: goto label_30b238;
        case 0x30b23cu: goto label_30b23c;
        case 0x30b240u: goto label_30b240;
        case 0x30b244u: goto label_30b244;
        case 0x30b248u: goto label_30b248;
        case 0x30b24cu: goto label_30b24c;
        case 0x30b250u: goto label_30b250;
        case 0x30b254u: goto label_30b254;
        case 0x30b258u: goto label_30b258;
        case 0x30b25cu: goto label_30b25c;
        case 0x30b260u: goto label_30b260;
        case 0x30b264u: goto label_30b264;
        case 0x30b268u: goto label_30b268;
        case 0x30b26cu: goto label_30b26c;
        case 0x30b270u: goto label_30b270;
        case 0x30b274u: goto label_30b274;
        case 0x30b278u: goto label_30b278;
        case 0x30b27cu: goto label_30b27c;
        case 0x30b280u: goto label_30b280;
        case 0x30b284u: goto label_30b284;
        case 0x30b288u: goto label_30b288;
        case 0x30b28cu: goto label_30b28c;
        case 0x30b290u: goto label_30b290;
        case 0x30b294u: goto label_30b294;
        case 0x30b298u: goto label_30b298;
        case 0x30b29cu: goto label_30b29c;
        case 0x30b2a0u: goto label_30b2a0;
        case 0x30b2a4u: goto label_30b2a4;
        case 0x30b2a8u: goto label_30b2a8;
        case 0x30b2acu: goto label_30b2ac;
        case 0x30b2b0u: goto label_30b2b0;
        case 0x30b2b4u: goto label_30b2b4;
        case 0x30b2b8u: goto label_30b2b8;
        case 0x30b2bcu: goto label_30b2bc;
        case 0x30b2c0u: goto label_30b2c0;
        case 0x30b2c4u: goto label_30b2c4;
        case 0x30b2c8u: goto label_30b2c8;
        case 0x30b2ccu: goto label_30b2cc;
        case 0x30b2d0u: goto label_30b2d0;
        case 0x30b2d4u: goto label_30b2d4;
        case 0x30b2d8u: goto label_30b2d8;
        case 0x30b2dcu: goto label_30b2dc;
        case 0x30b2e0u: goto label_30b2e0;
        case 0x30b2e4u: goto label_30b2e4;
        case 0x30b2e8u: goto label_30b2e8;
        case 0x30b2ecu: goto label_30b2ec;
        case 0x30b2f0u: goto label_30b2f0;
        case 0x30b2f4u: goto label_30b2f4;
        case 0x30b2f8u: goto label_30b2f8;
        case 0x30b2fcu: goto label_30b2fc;
        case 0x30b300u: goto label_30b300;
        case 0x30b304u: goto label_30b304;
        case 0x30b308u: goto label_30b308;
        case 0x30b30cu: goto label_30b30c;
        case 0x30b310u: goto label_30b310;
        case 0x30b314u: goto label_30b314;
        case 0x30b318u: goto label_30b318;
        case 0x30b31cu: goto label_30b31c;
        case 0x30b320u: goto label_30b320;
        case 0x30b324u: goto label_30b324;
        case 0x30b328u: goto label_30b328;
        case 0x30b32cu: goto label_30b32c;
        case 0x30b330u: goto label_30b330;
        case 0x30b334u: goto label_30b334;
        case 0x30b338u: goto label_30b338;
        case 0x30b33cu: goto label_30b33c;
        case 0x30b340u: goto label_30b340;
        case 0x30b344u: goto label_30b344;
        case 0x30b348u: goto label_30b348;
        case 0x30b34cu: goto label_30b34c;
        case 0x30b350u: goto label_30b350;
        case 0x30b354u: goto label_30b354;
        case 0x30b358u: goto label_30b358;
        case 0x30b35cu: goto label_30b35c;
        case 0x30b360u: goto label_30b360;
        case 0x30b364u: goto label_30b364;
        case 0x30b368u: goto label_30b368;
        case 0x30b36cu: goto label_30b36c;
        case 0x30b370u: goto label_30b370;
        case 0x30b374u: goto label_30b374;
        case 0x30b378u: goto label_30b378;
        case 0x30b37cu: goto label_30b37c;
        case 0x30b380u: goto label_30b380;
        case 0x30b384u: goto label_30b384;
        case 0x30b388u: goto label_30b388;
        case 0x30b38cu: goto label_30b38c;
        case 0x30b390u: goto label_30b390;
        case 0x30b394u: goto label_30b394;
        case 0x30b398u: goto label_30b398;
        case 0x30b39cu: goto label_30b39c;
        case 0x30b3a0u: goto label_30b3a0;
        case 0x30b3a4u: goto label_30b3a4;
        case 0x30b3a8u: goto label_30b3a8;
        case 0x30b3acu: goto label_30b3ac;
        case 0x30b3b0u: goto label_30b3b0;
        case 0x30b3b4u: goto label_30b3b4;
        case 0x30b3b8u: goto label_30b3b8;
        case 0x30b3bcu: goto label_30b3bc;
        case 0x30b3c0u: goto label_30b3c0;
        case 0x30b3c4u: goto label_30b3c4;
        case 0x30b3c8u: goto label_30b3c8;
        case 0x30b3ccu: goto label_30b3cc;
        case 0x30b3d0u: goto label_30b3d0;
        case 0x30b3d4u: goto label_30b3d4;
        case 0x30b3d8u: goto label_30b3d8;
        case 0x30b3dcu: goto label_30b3dc;
        case 0x30b3e0u: goto label_30b3e0;
        case 0x30b3e4u: goto label_30b3e4;
        case 0x30b3e8u: goto label_30b3e8;
        case 0x30b3ecu: goto label_30b3ec;
        case 0x30b3f0u: goto label_30b3f0;
        case 0x30b3f4u: goto label_30b3f4;
        case 0x30b3f8u: goto label_30b3f8;
        case 0x30b3fcu: goto label_30b3fc;
        case 0x30b400u: goto label_30b400;
        case 0x30b404u: goto label_30b404;
        case 0x30b408u: goto label_30b408;
        case 0x30b40cu: goto label_30b40c;
        case 0x30b410u: goto label_30b410;
        case 0x30b414u: goto label_30b414;
        case 0x30b418u: goto label_30b418;
        case 0x30b41cu: goto label_30b41c;
        case 0x30b420u: goto label_30b420;
        case 0x30b424u: goto label_30b424;
        case 0x30b428u: goto label_30b428;
        case 0x30b42cu: goto label_30b42c;
        case 0x30b430u: goto label_30b430;
        case 0x30b434u: goto label_30b434;
        case 0x30b438u: goto label_30b438;
        case 0x30b43cu: goto label_30b43c;
        case 0x30b440u: goto label_30b440;
        case 0x30b444u: goto label_30b444;
        case 0x30b448u: goto label_30b448;
        case 0x30b44cu: goto label_30b44c;
        case 0x30b450u: goto label_30b450;
        case 0x30b454u: goto label_30b454;
        case 0x30b458u: goto label_30b458;
        case 0x30b45cu: goto label_30b45c;
        case 0x30b460u: goto label_30b460;
        case 0x30b464u: goto label_30b464;
        case 0x30b468u: goto label_30b468;
        case 0x30b46cu: goto label_30b46c;
        case 0x30b470u: goto label_30b470;
        case 0x30b474u: goto label_30b474;
        case 0x30b478u: goto label_30b478;
        case 0x30b47cu: goto label_30b47c;
        case 0x30b480u: goto label_30b480;
        case 0x30b484u: goto label_30b484;
        case 0x30b488u: goto label_30b488;
        case 0x30b48cu: goto label_30b48c;
        case 0x30b490u: goto label_30b490;
        case 0x30b494u: goto label_30b494;
        case 0x30b498u: goto label_30b498;
        case 0x30b49cu: goto label_30b49c;
        case 0x30b4a0u: goto label_30b4a0;
        case 0x30b4a4u: goto label_30b4a4;
        case 0x30b4a8u: goto label_30b4a8;
        case 0x30b4acu: goto label_30b4ac;
        case 0x30b4b0u: goto label_30b4b0;
        case 0x30b4b4u: goto label_30b4b4;
        case 0x30b4b8u: goto label_30b4b8;
        case 0x30b4bcu: goto label_30b4bc;
        case 0x30b4c0u: goto label_30b4c0;
        case 0x30b4c4u: goto label_30b4c4;
        case 0x30b4c8u: goto label_30b4c8;
        case 0x30b4ccu: goto label_30b4cc;
        case 0x30b4d0u: goto label_30b4d0;
        case 0x30b4d4u: goto label_30b4d4;
        case 0x30b4d8u: goto label_30b4d8;
        case 0x30b4dcu: goto label_30b4dc;
        case 0x30b4e0u: goto label_30b4e0;
        case 0x30b4e4u: goto label_30b4e4;
        case 0x30b4e8u: goto label_30b4e8;
        case 0x30b4ecu: goto label_30b4ec;
        case 0x30b4f0u: goto label_30b4f0;
        case 0x30b4f4u: goto label_30b4f4;
        case 0x30b4f8u: goto label_30b4f8;
        case 0x30b4fcu: goto label_30b4fc;
        case 0x30b500u: goto label_30b500;
        case 0x30b504u: goto label_30b504;
        case 0x30b508u: goto label_30b508;
        case 0x30b50cu: goto label_30b50c;
        case 0x30b510u: goto label_30b510;
        case 0x30b514u: goto label_30b514;
        case 0x30b518u: goto label_30b518;
        case 0x30b51cu: goto label_30b51c;
        case 0x30b520u: goto label_30b520;
        case 0x30b524u: goto label_30b524;
        case 0x30b528u: goto label_30b528;
        case 0x30b52cu: goto label_30b52c;
        case 0x30b530u: goto label_30b530;
        case 0x30b534u: goto label_30b534;
        case 0x30b538u: goto label_30b538;
        case 0x30b53cu: goto label_30b53c;
        case 0x30b540u: goto label_30b540;
        case 0x30b544u: goto label_30b544;
        case 0x30b548u: goto label_30b548;
        case 0x30b54cu: goto label_30b54c;
        case 0x30b550u: goto label_30b550;
        case 0x30b554u: goto label_30b554;
        case 0x30b558u: goto label_30b558;
        case 0x30b55cu: goto label_30b55c;
        case 0x30b560u: goto label_30b560;
        case 0x30b564u: goto label_30b564;
        case 0x30b568u: goto label_30b568;
        case 0x30b56cu: goto label_30b56c;
        case 0x30b570u: goto label_30b570;
        case 0x30b574u: goto label_30b574;
        case 0x30b578u: goto label_30b578;
        case 0x30b57cu: goto label_30b57c;
        case 0x30b580u: goto label_30b580;
        case 0x30b584u: goto label_30b584;
        case 0x30b588u: goto label_30b588;
        case 0x30b58cu: goto label_30b58c;
        case 0x30b590u: goto label_30b590;
        case 0x30b594u: goto label_30b594;
        case 0x30b598u: goto label_30b598;
        case 0x30b59cu: goto label_30b59c;
        case 0x30b5a0u: goto label_30b5a0;
        case 0x30b5a4u: goto label_30b5a4;
        case 0x30b5a8u: goto label_30b5a8;
        case 0x30b5acu: goto label_30b5ac;
        case 0x30b5b0u: goto label_30b5b0;
        case 0x30b5b4u: goto label_30b5b4;
        case 0x30b5b8u: goto label_30b5b8;
        case 0x30b5bcu: goto label_30b5bc;
        case 0x30b5c0u: goto label_30b5c0;
        case 0x30b5c4u: goto label_30b5c4;
        case 0x30b5c8u: goto label_30b5c8;
        case 0x30b5ccu: goto label_30b5cc;
        case 0x30b5d0u: goto label_30b5d0;
        case 0x30b5d4u: goto label_30b5d4;
        case 0x30b5d8u: goto label_30b5d8;
        case 0x30b5dcu: goto label_30b5dc;
        case 0x30b5e0u: goto label_30b5e0;
        case 0x30b5e4u: goto label_30b5e4;
        case 0x30b5e8u: goto label_30b5e8;
        case 0x30b5ecu: goto label_30b5ec;
        case 0x30b5f0u: goto label_30b5f0;
        case 0x30b5f4u: goto label_30b5f4;
        case 0x30b5f8u: goto label_30b5f8;
        case 0x30b5fcu: goto label_30b5fc;
        case 0x30b600u: goto label_30b600;
        case 0x30b604u: goto label_30b604;
        case 0x30b608u: goto label_30b608;
        case 0x30b60cu: goto label_30b60c;
        case 0x30b610u: goto label_30b610;
        case 0x30b614u: goto label_30b614;
        case 0x30b618u: goto label_30b618;
        case 0x30b61cu: goto label_30b61c;
        case 0x30b620u: goto label_30b620;
        case 0x30b624u: goto label_30b624;
        case 0x30b628u: goto label_30b628;
        case 0x30b62cu: goto label_30b62c;
        case 0x30b630u: goto label_30b630;
        case 0x30b634u: goto label_30b634;
        case 0x30b638u: goto label_30b638;
        case 0x30b63cu: goto label_30b63c;
        case 0x30b640u: goto label_30b640;
        case 0x30b644u: goto label_30b644;
        case 0x30b648u: goto label_30b648;
        case 0x30b64cu: goto label_30b64c;
        case 0x30b650u: goto label_30b650;
        case 0x30b654u: goto label_30b654;
        case 0x30b658u: goto label_30b658;
        case 0x30b65cu: goto label_30b65c;
        case 0x30b660u: goto label_30b660;
        case 0x30b664u: goto label_30b664;
        case 0x30b668u: goto label_30b668;
        case 0x30b66cu: goto label_30b66c;
        case 0x30b670u: goto label_30b670;
        case 0x30b674u: goto label_30b674;
        case 0x30b678u: goto label_30b678;
        case 0x30b67cu: goto label_30b67c;
        case 0x30b680u: goto label_30b680;
        case 0x30b684u: goto label_30b684;
        case 0x30b688u: goto label_30b688;
        case 0x30b68cu: goto label_30b68c;
        case 0x30b690u: goto label_30b690;
        case 0x30b694u: goto label_30b694;
        case 0x30b698u: goto label_30b698;
        case 0x30b69cu: goto label_30b69c;
        case 0x30b6a0u: goto label_30b6a0;
        case 0x30b6a4u: goto label_30b6a4;
        case 0x30b6a8u: goto label_30b6a8;
        case 0x30b6acu: goto label_30b6ac;
        case 0x30b6b0u: goto label_30b6b0;
        case 0x30b6b4u: goto label_30b6b4;
        case 0x30b6b8u: goto label_30b6b8;
        case 0x30b6bcu: goto label_30b6bc;
        case 0x30b6c0u: goto label_30b6c0;
        case 0x30b6c4u: goto label_30b6c4;
        case 0x30b6c8u: goto label_30b6c8;
        case 0x30b6ccu: goto label_30b6cc;
        case 0x30b6d0u: goto label_30b6d0;
        case 0x30b6d4u: goto label_30b6d4;
        case 0x30b6d8u: goto label_30b6d8;
        case 0x30b6dcu: goto label_30b6dc;
        case 0x30b6e0u: goto label_30b6e0;
        case 0x30b6e4u: goto label_30b6e4;
        case 0x30b6e8u: goto label_30b6e8;
        case 0x30b6ecu: goto label_30b6ec;
        case 0x30b6f0u: goto label_30b6f0;
        case 0x30b6f4u: goto label_30b6f4;
        case 0x30b6f8u: goto label_30b6f8;
        case 0x30b6fcu: goto label_30b6fc;
        case 0x30b700u: goto label_30b700;
        case 0x30b704u: goto label_30b704;
        case 0x30b708u: goto label_30b708;
        case 0x30b70cu: goto label_30b70c;
        case 0x30b710u: goto label_30b710;
        case 0x30b714u: goto label_30b714;
        case 0x30b718u: goto label_30b718;
        case 0x30b71cu: goto label_30b71c;
        case 0x30b720u: goto label_30b720;
        case 0x30b724u: goto label_30b724;
        case 0x30b728u: goto label_30b728;
        case 0x30b72cu: goto label_30b72c;
        case 0x30b730u: goto label_30b730;
        case 0x30b734u: goto label_30b734;
        case 0x30b738u: goto label_30b738;
        case 0x30b73cu: goto label_30b73c;
        case 0x30b740u: goto label_30b740;
        case 0x30b744u: goto label_30b744;
        case 0x30b748u: goto label_30b748;
        case 0x30b74cu: goto label_30b74c;
        case 0x30b750u: goto label_30b750;
        case 0x30b754u: goto label_30b754;
        case 0x30b758u: goto label_30b758;
        case 0x30b75cu: goto label_30b75c;
        case 0x30b760u: goto label_30b760;
        case 0x30b764u: goto label_30b764;
        case 0x30b768u: goto label_30b768;
        case 0x30b76cu: goto label_30b76c;
        case 0x30b770u: goto label_30b770;
        case 0x30b774u: goto label_30b774;
        case 0x30b778u: goto label_30b778;
        case 0x30b77cu: goto label_30b77c;
        case 0x30b780u: goto label_30b780;
        case 0x30b784u: goto label_30b784;
        case 0x30b788u: goto label_30b788;
        case 0x30b78cu: goto label_30b78c;
        case 0x30b790u: goto label_30b790;
        case 0x30b794u: goto label_30b794;
        case 0x30b798u: goto label_30b798;
        case 0x30b79cu: goto label_30b79c;
        case 0x30b7a0u: goto label_30b7a0;
        case 0x30b7a4u: goto label_30b7a4;
        case 0x30b7a8u: goto label_30b7a8;
        case 0x30b7acu: goto label_30b7ac;
        case 0x30b7b0u: goto label_30b7b0;
        case 0x30b7b4u: goto label_30b7b4;
        case 0x30b7b8u: goto label_30b7b8;
        case 0x30b7bcu: goto label_30b7bc;
        case 0x30b7c0u: goto label_30b7c0;
        case 0x30b7c4u: goto label_30b7c4;
        case 0x30b7c8u: goto label_30b7c8;
        case 0x30b7ccu: goto label_30b7cc;
        case 0x30b7d0u: goto label_30b7d0;
        case 0x30b7d4u: goto label_30b7d4;
        case 0x30b7d8u: goto label_30b7d8;
        case 0x30b7dcu: goto label_30b7dc;
        case 0x30b7e0u: goto label_30b7e0;
        case 0x30b7e4u: goto label_30b7e4;
        case 0x30b7e8u: goto label_30b7e8;
        case 0x30b7ecu: goto label_30b7ec;
        case 0x30b7f0u: goto label_30b7f0;
        case 0x30b7f4u: goto label_30b7f4;
        case 0x30b7f8u: goto label_30b7f8;
        case 0x30b7fcu: goto label_30b7fc;
        case 0x30b800u: goto label_30b800;
        case 0x30b804u: goto label_30b804;
        case 0x30b808u: goto label_30b808;
        case 0x30b80cu: goto label_30b80c;
        case 0x30b810u: goto label_30b810;
        case 0x30b814u: goto label_30b814;
        case 0x30b818u: goto label_30b818;
        case 0x30b81cu: goto label_30b81c;
        case 0x30b820u: goto label_30b820;
        case 0x30b824u: goto label_30b824;
        case 0x30b828u: goto label_30b828;
        case 0x30b82cu: goto label_30b82c;
        case 0x30b830u: goto label_30b830;
        case 0x30b834u: goto label_30b834;
        case 0x30b838u: goto label_30b838;
        case 0x30b83cu: goto label_30b83c;
        case 0x30b840u: goto label_30b840;
        case 0x30b844u: goto label_30b844;
        case 0x30b848u: goto label_30b848;
        case 0x30b84cu: goto label_30b84c;
        case 0x30b850u: goto label_30b850;
        case 0x30b854u: goto label_30b854;
        case 0x30b858u: goto label_30b858;
        case 0x30b85cu: goto label_30b85c;
        case 0x30b860u: goto label_30b860;
        case 0x30b864u: goto label_30b864;
        case 0x30b868u: goto label_30b868;
        case 0x30b86cu: goto label_30b86c;
        case 0x30b870u: goto label_30b870;
        case 0x30b874u: goto label_30b874;
        case 0x30b878u: goto label_30b878;
        case 0x30b87cu: goto label_30b87c;
        case 0x30b880u: goto label_30b880;
        case 0x30b884u: goto label_30b884;
        case 0x30b888u: goto label_30b888;
        case 0x30b88cu: goto label_30b88c;
        case 0x30b890u: goto label_30b890;
        case 0x30b894u: goto label_30b894;
        case 0x30b898u: goto label_30b898;
        case 0x30b89cu: goto label_30b89c;
        case 0x30b8a0u: goto label_30b8a0;
        case 0x30b8a4u: goto label_30b8a4;
        case 0x30b8a8u: goto label_30b8a8;
        case 0x30b8acu: goto label_30b8ac;
        case 0x30b8b0u: goto label_30b8b0;
        case 0x30b8b4u: goto label_30b8b4;
        case 0x30b8b8u: goto label_30b8b8;
        case 0x30b8bcu: goto label_30b8bc;
        case 0x30b8c0u: goto label_30b8c0;
        case 0x30b8c4u: goto label_30b8c4;
        case 0x30b8c8u: goto label_30b8c8;
        case 0x30b8ccu: goto label_30b8cc;
        case 0x30b8d0u: goto label_30b8d0;
        case 0x30b8d4u: goto label_30b8d4;
        case 0x30b8d8u: goto label_30b8d8;
        case 0x30b8dcu: goto label_30b8dc;
        case 0x30b8e0u: goto label_30b8e0;
        case 0x30b8e4u: goto label_30b8e4;
        case 0x30b8e8u: goto label_30b8e8;
        case 0x30b8ecu: goto label_30b8ec;
        case 0x30b8f0u: goto label_30b8f0;
        case 0x30b8f4u: goto label_30b8f4;
        case 0x30b8f8u: goto label_30b8f8;
        case 0x30b8fcu: goto label_30b8fc;
        case 0x30b900u: goto label_30b900;
        case 0x30b904u: goto label_30b904;
        case 0x30b908u: goto label_30b908;
        case 0x30b90cu: goto label_30b90c;
        case 0x30b910u: goto label_30b910;
        case 0x30b914u: goto label_30b914;
        case 0x30b918u: goto label_30b918;
        case 0x30b91cu: goto label_30b91c;
        case 0x30b920u: goto label_30b920;
        case 0x30b924u: goto label_30b924;
        case 0x30b928u: goto label_30b928;
        case 0x30b92cu: goto label_30b92c;
        case 0x30b930u: goto label_30b930;
        case 0x30b934u: goto label_30b934;
        case 0x30b938u: goto label_30b938;
        case 0x30b93cu: goto label_30b93c;
        case 0x30b940u: goto label_30b940;
        case 0x30b944u: goto label_30b944;
        case 0x30b948u: goto label_30b948;
        case 0x30b94cu: goto label_30b94c;
        case 0x30b950u: goto label_30b950;
        case 0x30b954u: goto label_30b954;
        case 0x30b958u: goto label_30b958;
        case 0x30b95cu: goto label_30b95c;
        case 0x30b960u: goto label_30b960;
        case 0x30b964u: goto label_30b964;
        case 0x30b968u: goto label_30b968;
        case 0x30b96cu: goto label_30b96c;
        case 0x30b970u: goto label_30b970;
        case 0x30b974u: goto label_30b974;
        case 0x30b978u: goto label_30b978;
        case 0x30b97cu: goto label_30b97c;
        case 0x30b980u: goto label_30b980;
        case 0x30b984u: goto label_30b984;
        case 0x30b988u: goto label_30b988;
        case 0x30b98cu: goto label_30b98c;
        case 0x30b990u: goto label_30b990;
        case 0x30b994u: goto label_30b994;
        case 0x30b998u: goto label_30b998;
        case 0x30b99cu: goto label_30b99c;
        case 0x30b9a0u: goto label_30b9a0;
        case 0x30b9a4u: goto label_30b9a4;
        case 0x30b9a8u: goto label_30b9a8;
        case 0x30b9acu: goto label_30b9ac;
        case 0x30b9b0u: goto label_30b9b0;
        case 0x30b9b4u: goto label_30b9b4;
        case 0x30b9b8u: goto label_30b9b8;
        case 0x30b9bcu: goto label_30b9bc;
        case 0x30b9c0u: goto label_30b9c0;
        case 0x30b9c4u: goto label_30b9c4;
        case 0x30b9c8u: goto label_30b9c8;
        case 0x30b9ccu: goto label_30b9cc;
        case 0x30b9d0u: goto label_30b9d0;
        case 0x30b9d4u: goto label_30b9d4;
        case 0x30b9d8u: goto label_30b9d8;
        case 0x30b9dcu: goto label_30b9dc;
        case 0x30b9e0u: goto label_30b9e0;
        case 0x30b9e4u: goto label_30b9e4;
        case 0x30b9e8u: goto label_30b9e8;
        case 0x30b9ecu: goto label_30b9ec;
        case 0x30b9f0u: goto label_30b9f0;
        case 0x30b9f4u: goto label_30b9f4;
        case 0x30b9f8u: goto label_30b9f8;
        case 0x30b9fcu: goto label_30b9fc;
        case 0x30ba00u: goto label_30ba00;
        case 0x30ba04u: goto label_30ba04;
        case 0x30ba08u: goto label_30ba08;
        case 0x30ba0cu: goto label_30ba0c;
        case 0x30ba10u: goto label_30ba10;
        case 0x30ba14u: goto label_30ba14;
        case 0x30ba18u: goto label_30ba18;
        case 0x30ba1cu: goto label_30ba1c;
        case 0x30ba20u: goto label_30ba20;
        case 0x30ba24u: goto label_30ba24;
        case 0x30ba28u: goto label_30ba28;
        case 0x30ba2cu: goto label_30ba2c;
        case 0x30ba30u: goto label_30ba30;
        case 0x30ba34u: goto label_30ba34;
        case 0x30ba38u: goto label_30ba38;
        case 0x30ba3cu: goto label_30ba3c;
        case 0x30ba40u: goto label_30ba40;
        case 0x30ba44u: goto label_30ba44;
        case 0x30ba48u: goto label_30ba48;
        case 0x30ba4cu: goto label_30ba4c;
        case 0x30ba50u: goto label_30ba50;
        case 0x30ba54u: goto label_30ba54;
        case 0x30ba58u: goto label_30ba58;
        case 0x30ba5cu: goto label_30ba5c;
        case 0x30ba60u: goto label_30ba60;
        case 0x30ba64u: goto label_30ba64;
        case 0x30ba68u: goto label_30ba68;
        case 0x30ba6cu: goto label_30ba6c;
        case 0x30ba70u: goto label_30ba70;
        case 0x30ba74u: goto label_30ba74;
        case 0x30ba78u: goto label_30ba78;
        case 0x30ba7cu: goto label_30ba7c;
        case 0x30ba80u: goto label_30ba80;
        case 0x30ba84u: goto label_30ba84;
        case 0x30ba88u: goto label_30ba88;
        case 0x30ba8cu: goto label_30ba8c;
        case 0x30ba90u: goto label_30ba90;
        case 0x30ba94u: goto label_30ba94;
        case 0x30ba98u: goto label_30ba98;
        case 0x30ba9cu: goto label_30ba9c;
        case 0x30baa0u: goto label_30baa0;
        case 0x30baa4u: goto label_30baa4;
        case 0x30baa8u: goto label_30baa8;
        case 0x30baacu: goto label_30baac;
        case 0x30bab0u: goto label_30bab0;
        case 0x30bab4u: goto label_30bab4;
        case 0x30bab8u: goto label_30bab8;
        case 0x30babcu: goto label_30babc;
        case 0x30bac0u: goto label_30bac0;
        case 0x30bac4u: goto label_30bac4;
        case 0x30bac8u: goto label_30bac8;
        case 0x30baccu: goto label_30bacc;
        case 0x30bad0u: goto label_30bad0;
        case 0x30bad4u: goto label_30bad4;
        case 0x30bad8u: goto label_30bad8;
        case 0x30badcu: goto label_30badc;
        case 0x30bae0u: goto label_30bae0;
        case 0x30bae4u: goto label_30bae4;
        case 0x30bae8u: goto label_30bae8;
        case 0x30baecu: goto label_30baec;
        case 0x30baf0u: goto label_30baf0;
        case 0x30baf4u: goto label_30baf4;
        case 0x30baf8u: goto label_30baf8;
        case 0x30bafcu: goto label_30bafc;
        case 0x30bb00u: goto label_30bb00;
        case 0x30bb04u: goto label_30bb04;
        case 0x30bb08u: goto label_30bb08;
        case 0x30bb0cu: goto label_30bb0c;
        case 0x30bb10u: goto label_30bb10;
        case 0x30bb14u: goto label_30bb14;
        case 0x30bb18u: goto label_30bb18;
        case 0x30bb1cu: goto label_30bb1c;
        case 0x30bb20u: goto label_30bb20;
        case 0x30bb24u: goto label_30bb24;
        case 0x30bb28u: goto label_30bb28;
        case 0x30bb2cu: goto label_30bb2c;
        case 0x30bb30u: goto label_30bb30;
        case 0x30bb34u: goto label_30bb34;
        case 0x30bb38u: goto label_30bb38;
        case 0x30bb3cu: goto label_30bb3c;
        case 0x30bb40u: goto label_30bb40;
        case 0x30bb44u: goto label_30bb44;
        case 0x30bb48u: goto label_30bb48;
        case 0x30bb4cu: goto label_30bb4c;
        case 0x30bb50u: goto label_30bb50;
        case 0x30bb54u: goto label_30bb54;
        case 0x30bb58u: goto label_30bb58;
        case 0x30bb5cu: goto label_30bb5c;
        case 0x30bb60u: goto label_30bb60;
        case 0x30bb64u: goto label_30bb64;
        case 0x30bb68u: goto label_30bb68;
        case 0x30bb6cu: goto label_30bb6c;
        case 0x30bb70u: goto label_30bb70;
        case 0x30bb74u: goto label_30bb74;
        case 0x30bb78u: goto label_30bb78;
        case 0x30bb7cu: goto label_30bb7c;
        case 0x30bb80u: goto label_30bb80;
        case 0x30bb84u: goto label_30bb84;
        case 0x30bb88u: goto label_30bb88;
        case 0x30bb8cu: goto label_30bb8c;
        case 0x30bb90u: goto label_30bb90;
        case 0x30bb94u: goto label_30bb94;
        case 0x30bb98u: goto label_30bb98;
        case 0x30bb9cu: goto label_30bb9c;
        case 0x30bba0u: goto label_30bba0;
        case 0x30bba4u: goto label_30bba4;
        case 0x30bba8u: goto label_30bba8;
        case 0x30bbacu: goto label_30bbac;
        case 0x30bbb0u: goto label_30bbb0;
        case 0x30bbb4u: goto label_30bbb4;
        case 0x30bbb8u: goto label_30bbb8;
        case 0x30bbbcu: goto label_30bbbc;
        case 0x30bbc0u: goto label_30bbc0;
        case 0x30bbc4u: goto label_30bbc4;
        case 0x30bbc8u: goto label_30bbc8;
        case 0x30bbccu: goto label_30bbcc;
        case 0x30bbd0u: goto label_30bbd0;
        case 0x30bbd4u: goto label_30bbd4;
        case 0x30bbd8u: goto label_30bbd8;
        case 0x30bbdcu: goto label_30bbdc;
        case 0x30bbe0u: goto label_30bbe0;
        case 0x30bbe4u: goto label_30bbe4;
        case 0x30bbe8u: goto label_30bbe8;
        case 0x30bbecu: goto label_30bbec;
        case 0x30bbf0u: goto label_30bbf0;
        case 0x30bbf4u: goto label_30bbf4;
        case 0x30bbf8u: goto label_30bbf8;
        case 0x30bbfcu: goto label_30bbfc;
        case 0x30bc00u: goto label_30bc00;
        case 0x30bc04u: goto label_30bc04;
        case 0x30bc08u: goto label_30bc08;
        case 0x30bc0cu: goto label_30bc0c;
        case 0x30bc10u: goto label_30bc10;
        case 0x30bc14u: goto label_30bc14;
        case 0x30bc18u: goto label_30bc18;
        case 0x30bc1cu: goto label_30bc1c;
        case 0x30bc20u: goto label_30bc20;
        case 0x30bc24u: goto label_30bc24;
        case 0x30bc28u: goto label_30bc28;
        case 0x30bc2cu: goto label_30bc2c;
        case 0x30bc30u: goto label_30bc30;
        case 0x30bc34u: goto label_30bc34;
        case 0x30bc38u: goto label_30bc38;
        case 0x30bc3cu: goto label_30bc3c;
        case 0x30bc40u: goto label_30bc40;
        case 0x30bc44u: goto label_30bc44;
        case 0x30bc48u: goto label_30bc48;
        case 0x30bc4cu: goto label_30bc4c;
        case 0x30bc50u: goto label_30bc50;
        case 0x30bc54u: goto label_30bc54;
        case 0x30bc58u: goto label_30bc58;
        case 0x30bc5cu: goto label_30bc5c;
        case 0x30bc60u: goto label_30bc60;
        case 0x30bc64u: goto label_30bc64;
        case 0x30bc68u: goto label_30bc68;
        case 0x30bc6cu: goto label_30bc6c;
        case 0x30bc70u: goto label_30bc70;
        case 0x30bc74u: goto label_30bc74;
        case 0x30bc78u: goto label_30bc78;
        case 0x30bc7cu: goto label_30bc7c;
        case 0x30bc80u: goto label_30bc80;
        case 0x30bc84u: goto label_30bc84;
        case 0x30bc88u: goto label_30bc88;
        case 0x30bc8cu: goto label_30bc8c;
        case 0x30bc90u: goto label_30bc90;
        case 0x30bc94u: goto label_30bc94;
        case 0x30bc98u: goto label_30bc98;
        case 0x30bc9cu: goto label_30bc9c;
        case 0x30bca0u: goto label_30bca0;
        case 0x30bca4u: goto label_30bca4;
        case 0x30bca8u: goto label_30bca8;
        case 0x30bcacu: goto label_30bcac;
        case 0x30bcb0u: goto label_30bcb0;
        case 0x30bcb4u: goto label_30bcb4;
        case 0x30bcb8u: goto label_30bcb8;
        case 0x30bcbcu: goto label_30bcbc;
        case 0x30bcc0u: goto label_30bcc0;
        case 0x30bcc4u: goto label_30bcc4;
        case 0x30bcc8u: goto label_30bcc8;
        case 0x30bcccu: goto label_30bccc;
        case 0x30bcd0u: goto label_30bcd0;
        case 0x30bcd4u: goto label_30bcd4;
        case 0x30bcd8u: goto label_30bcd8;
        case 0x30bcdcu: goto label_30bcdc;
        case 0x30bce0u: goto label_30bce0;
        case 0x30bce4u: goto label_30bce4;
        case 0x30bce8u: goto label_30bce8;
        case 0x30bcecu: goto label_30bcec;
        case 0x30bcf0u: goto label_30bcf0;
        case 0x30bcf4u: goto label_30bcf4;
        case 0x30bcf8u: goto label_30bcf8;
        case 0x30bcfcu: goto label_30bcfc;
        case 0x30bd00u: goto label_30bd00;
        case 0x30bd04u: goto label_30bd04;
        case 0x30bd08u: goto label_30bd08;
        case 0x30bd0cu: goto label_30bd0c;
        case 0x30bd10u: goto label_30bd10;
        case 0x30bd14u: goto label_30bd14;
        case 0x30bd18u: goto label_30bd18;
        case 0x30bd1cu: goto label_30bd1c;
        case 0x30bd20u: goto label_30bd20;
        case 0x30bd24u: goto label_30bd24;
        case 0x30bd28u: goto label_30bd28;
        case 0x30bd2cu: goto label_30bd2c;
        case 0x30bd30u: goto label_30bd30;
        case 0x30bd34u: goto label_30bd34;
        case 0x30bd38u: goto label_30bd38;
        case 0x30bd3cu: goto label_30bd3c;
        case 0x30bd40u: goto label_30bd40;
        case 0x30bd44u: goto label_30bd44;
        case 0x30bd48u: goto label_30bd48;
        case 0x30bd4cu: goto label_30bd4c;
        case 0x30bd50u: goto label_30bd50;
        case 0x30bd54u: goto label_30bd54;
        case 0x30bd58u: goto label_30bd58;
        case 0x30bd5cu: goto label_30bd5c;
        case 0x30bd60u: goto label_30bd60;
        case 0x30bd64u: goto label_30bd64;
        case 0x30bd68u: goto label_30bd68;
        case 0x30bd6cu: goto label_30bd6c;
        case 0x30bd70u: goto label_30bd70;
        case 0x30bd74u: goto label_30bd74;
        case 0x30bd78u: goto label_30bd78;
        case 0x30bd7cu: goto label_30bd7c;
        case 0x30bd80u: goto label_30bd80;
        case 0x30bd84u: goto label_30bd84;
        case 0x30bd88u: goto label_30bd88;
        case 0x30bd8cu: goto label_30bd8c;
        case 0x30bd90u: goto label_30bd90;
        case 0x30bd94u: goto label_30bd94;
        case 0x30bd98u: goto label_30bd98;
        case 0x30bd9cu: goto label_30bd9c;
        case 0x30bda0u: goto label_30bda0;
        case 0x30bda4u: goto label_30bda4;
        case 0x30bda8u: goto label_30bda8;
        case 0x30bdacu: goto label_30bdac;
        case 0x30bdb0u: goto label_30bdb0;
        case 0x30bdb4u: goto label_30bdb4;
        case 0x30bdb8u: goto label_30bdb8;
        case 0x30bdbcu: goto label_30bdbc;
        case 0x30bdc0u: goto label_30bdc0;
        case 0x30bdc4u: goto label_30bdc4;
        case 0x30bdc8u: goto label_30bdc8;
        case 0x30bdccu: goto label_30bdcc;
        case 0x30bdd0u: goto label_30bdd0;
        case 0x30bdd4u: goto label_30bdd4;
        case 0x30bdd8u: goto label_30bdd8;
        case 0x30bddcu: goto label_30bddc;
        case 0x30bde0u: goto label_30bde0;
        case 0x30bde4u: goto label_30bde4;
        case 0x30bde8u: goto label_30bde8;
        case 0x30bdecu: goto label_30bdec;
        case 0x30bdf0u: goto label_30bdf0;
        case 0x30bdf4u: goto label_30bdf4;
        case 0x30bdf8u: goto label_30bdf8;
        case 0x30bdfcu: goto label_30bdfc;
        case 0x30be00u: goto label_30be00;
        case 0x30be04u: goto label_30be04;
        case 0x30be08u: goto label_30be08;
        case 0x30be0cu: goto label_30be0c;
        case 0x30be10u: goto label_30be10;
        case 0x30be14u: goto label_30be14;
        case 0x30be18u: goto label_30be18;
        case 0x30be1cu: goto label_30be1c;
        case 0x30be20u: goto label_30be20;
        case 0x30be24u: goto label_30be24;
        case 0x30be28u: goto label_30be28;
        case 0x30be2cu: goto label_30be2c;
        case 0x30be30u: goto label_30be30;
        case 0x30be34u: goto label_30be34;
        case 0x30be38u: goto label_30be38;
        case 0x30be3cu: goto label_30be3c;
        case 0x30be40u: goto label_30be40;
        case 0x30be44u: goto label_30be44;
        case 0x30be48u: goto label_30be48;
        case 0x30be4cu: goto label_30be4c;
        case 0x30be50u: goto label_30be50;
        case 0x30be54u: goto label_30be54;
        case 0x30be58u: goto label_30be58;
        case 0x30be5cu: goto label_30be5c;
        case 0x30be60u: goto label_30be60;
        case 0x30be64u: goto label_30be64;
        case 0x30be68u: goto label_30be68;
        case 0x30be6cu: goto label_30be6c;
        case 0x30be70u: goto label_30be70;
        case 0x30be74u: goto label_30be74;
        case 0x30be78u: goto label_30be78;
        case 0x30be7cu: goto label_30be7c;
        case 0x30be80u: goto label_30be80;
        case 0x30be84u: goto label_30be84;
        case 0x30be88u: goto label_30be88;
        case 0x30be8cu: goto label_30be8c;
        case 0x30be90u: goto label_30be90;
        case 0x30be94u: goto label_30be94;
        case 0x30be98u: goto label_30be98;
        case 0x30be9cu: goto label_30be9c;
        case 0x30bea0u: goto label_30bea0;
        case 0x30bea4u: goto label_30bea4;
        case 0x30bea8u: goto label_30bea8;
        case 0x30beacu: goto label_30beac;
        case 0x30beb0u: goto label_30beb0;
        case 0x30beb4u: goto label_30beb4;
        case 0x30beb8u: goto label_30beb8;
        case 0x30bebcu: goto label_30bebc;
        case 0x30bec0u: goto label_30bec0;
        case 0x30bec4u: goto label_30bec4;
        case 0x30bec8u: goto label_30bec8;
        case 0x30beccu: goto label_30becc;
        case 0x30bed0u: goto label_30bed0;
        case 0x30bed4u: goto label_30bed4;
        case 0x30bed8u: goto label_30bed8;
        case 0x30bedcu: goto label_30bedc;
        case 0x30bee0u: goto label_30bee0;
        case 0x30bee4u: goto label_30bee4;
        case 0x30bee8u: goto label_30bee8;
        case 0x30beecu: goto label_30beec;
        case 0x30bef0u: goto label_30bef0;
        case 0x30bef4u: goto label_30bef4;
        case 0x30bef8u: goto label_30bef8;
        case 0x30befcu: goto label_30befc;
        case 0x30bf00u: goto label_30bf00;
        case 0x30bf04u: goto label_30bf04;
        case 0x30bf08u: goto label_30bf08;
        case 0x30bf0cu: goto label_30bf0c;
        case 0x30bf10u: goto label_30bf10;
        case 0x30bf14u: goto label_30bf14;
        case 0x30bf18u: goto label_30bf18;
        case 0x30bf1cu: goto label_30bf1c;
        case 0x30bf20u: goto label_30bf20;
        case 0x30bf24u: goto label_30bf24;
        case 0x30bf28u: goto label_30bf28;
        case 0x30bf2cu: goto label_30bf2c;
        case 0x30bf30u: goto label_30bf30;
        case 0x30bf34u: goto label_30bf34;
        case 0x30bf38u: goto label_30bf38;
        case 0x30bf3cu: goto label_30bf3c;
        case 0x30bf40u: goto label_30bf40;
        case 0x30bf44u: goto label_30bf44;
        case 0x30bf48u: goto label_30bf48;
        case 0x30bf4cu: goto label_30bf4c;
        case 0x30bf50u: goto label_30bf50;
        case 0x30bf54u: goto label_30bf54;
        case 0x30bf58u: goto label_30bf58;
        case 0x30bf5cu: goto label_30bf5c;
        case 0x30bf60u: goto label_30bf60;
        case 0x30bf64u: goto label_30bf64;
        case 0x30bf68u: goto label_30bf68;
        case 0x30bf6cu: goto label_30bf6c;
        case 0x30bf70u: goto label_30bf70;
        case 0x30bf74u: goto label_30bf74;
        case 0x30bf78u: goto label_30bf78;
        case 0x30bf7cu: goto label_30bf7c;
        case 0x30bf80u: goto label_30bf80;
        case 0x30bf84u: goto label_30bf84;
        case 0x30bf88u: goto label_30bf88;
        case 0x30bf8cu: goto label_30bf8c;
        case 0x30bf90u: goto label_30bf90;
        case 0x30bf94u: goto label_30bf94;
        case 0x30bf98u: goto label_30bf98;
        case 0x30bf9cu: goto label_30bf9c;
        case 0x30bfa0u: goto label_30bfa0;
        case 0x30bfa4u: goto label_30bfa4;
        case 0x30bfa8u: goto label_30bfa8;
        case 0x30bfacu: goto label_30bfac;
        case 0x30bfb0u: goto label_30bfb0;
        case 0x30bfb4u: goto label_30bfb4;
        case 0x30bfb8u: goto label_30bfb8;
        case 0x30bfbcu: goto label_30bfbc;
        case 0x30bfc0u: goto label_30bfc0;
        case 0x30bfc4u: goto label_30bfc4;
        case 0x30bfc8u: goto label_30bfc8;
        case 0x30bfccu: goto label_30bfcc;
        case 0x30bfd0u: goto label_30bfd0;
        case 0x30bfd4u: goto label_30bfd4;
        case 0x30bfd8u: goto label_30bfd8;
        case 0x30bfdcu: goto label_30bfdc;
        case 0x30bfe0u: goto label_30bfe0;
        case 0x30bfe4u: goto label_30bfe4;
        case 0x30bfe8u: goto label_30bfe8;
        case 0x30bfecu: goto label_30bfec;
        case 0x30bff0u: goto label_30bff0;
        case 0x30bff4u: goto label_30bff4;
        case 0x30bff8u: goto label_30bff8;
        case 0x30bffcu: goto label_30bffc;
        case 0x30c000u: goto label_30c000;
        case 0x30c004u: goto label_30c004;
        case 0x30c008u: goto label_30c008;
        case 0x30c00cu: goto label_30c00c;
        case 0x30c010u: goto label_30c010;
        case 0x30c014u: goto label_30c014;
        case 0x30c018u: goto label_30c018;
        case 0x30c01cu: goto label_30c01c;
        case 0x30c020u: goto label_30c020;
        case 0x30c024u: goto label_30c024;
        case 0x30c028u: goto label_30c028;
        case 0x30c02cu: goto label_30c02c;
        case 0x30c030u: goto label_30c030;
        case 0x30c034u: goto label_30c034;
        case 0x30c038u: goto label_30c038;
        case 0x30c03cu: goto label_30c03c;
        case 0x30c040u: goto label_30c040;
        case 0x30c044u: goto label_30c044;
        case 0x30c048u: goto label_30c048;
        case 0x30c04cu: goto label_30c04c;
        case 0x30c050u: goto label_30c050;
        case 0x30c054u: goto label_30c054;
        case 0x30c058u: goto label_30c058;
        case 0x30c05cu: goto label_30c05c;
        case 0x30c060u: goto label_30c060;
        case 0x30c064u: goto label_30c064;
        case 0x30c068u: goto label_30c068;
        case 0x30c06cu: goto label_30c06c;
        case 0x30c070u: goto label_30c070;
        case 0x30c074u: goto label_30c074;
        case 0x30c078u: goto label_30c078;
        case 0x30c07cu: goto label_30c07c;
        case 0x30c080u: goto label_30c080;
        case 0x30c084u: goto label_30c084;
        case 0x30c088u: goto label_30c088;
        case 0x30c08cu: goto label_30c08c;
        case 0x30c090u: goto label_30c090;
        case 0x30c094u: goto label_30c094;
        case 0x30c098u: goto label_30c098;
        case 0x30c09cu: goto label_30c09c;
        case 0x30c0a0u: goto label_30c0a0;
        case 0x30c0a4u: goto label_30c0a4;
        case 0x30c0a8u: goto label_30c0a8;
        case 0x30c0acu: goto label_30c0ac;
        case 0x30c0b0u: goto label_30c0b0;
        case 0x30c0b4u: goto label_30c0b4;
        case 0x30c0b8u: goto label_30c0b8;
        case 0x30c0bcu: goto label_30c0bc;
        case 0x30c0c0u: goto label_30c0c0;
        case 0x30c0c4u: goto label_30c0c4;
        case 0x30c0c8u: goto label_30c0c8;
        case 0x30c0ccu: goto label_30c0cc;
        case 0x30c0d0u: goto label_30c0d0;
        case 0x30c0d4u: goto label_30c0d4;
        case 0x30c0d8u: goto label_30c0d8;
        case 0x30c0dcu: goto label_30c0dc;
        case 0x30c0e0u: goto label_30c0e0;
        case 0x30c0e4u: goto label_30c0e4;
        case 0x30c0e8u: goto label_30c0e8;
        case 0x30c0ecu: goto label_30c0ec;
        case 0x30c0f0u: goto label_30c0f0;
        case 0x30c0f4u: goto label_30c0f4;
        case 0x30c0f8u: goto label_30c0f8;
        case 0x30c0fcu: goto label_30c0fc;
        case 0x30c100u: goto label_30c100;
        case 0x30c104u: goto label_30c104;
        case 0x30c108u: goto label_30c108;
        case 0x30c10cu: goto label_30c10c;
        case 0x30c110u: goto label_30c110;
        case 0x30c114u: goto label_30c114;
        case 0x30c118u: goto label_30c118;
        case 0x30c11cu: goto label_30c11c;
        case 0x30c120u: goto label_30c120;
        case 0x30c124u: goto label_30c124;
        case 0x30c128u: goto label_30c128;
        case 0x30c12cu: goto label_30c12c;
        case 0x30c130u: goto label_30c130;
        case 0x30c134u: goto label_30c134;
        case 0x30c138u: goto label_30c138;
        case 0x30c13cu: goto label_30c13c;
        case 0x30c140u: goto label_30c140;
        case 0x30c144u: goto label_30c144;
        case 0x30c148u: goto label_30c148;
        case 0x30c14cu: goto label_30c14c;
        case 0x30c150u: goto label_30c150;
        case 0x30c154u: goto label_30c154;
        case 0x30c158u: goto label_30c158;
        case 0x30c15cu: goto label_30c15c;
        case 0x30c160u: goto label_30c160;
        case 0x30c164u: goto label_30c164;
        case 0x30c168u: goto label_30c168;
        case 0x30c16cu: goto label_30c16c;
        case 0x30c170u: goto label_30c170;
        case 0x30c174u: goto label_30c174;
        case 0x30c178u: goto label_30c178;
        case 0x30c17cu: goto label_30c17c;
        case 0x30c180u: goto label_30c180;
        case 0x30c184u: goto label_30c184;
        case 0x30c188u: goto label_30c188;
        case 0x30c18cu: goto label_30c18c;
        case 0x30c190u: goto label_30c190;
        case 0x30c194u: goto label_30c194;
        case 0x30c198u: goto label_30c198;
        case 0x30c19cu: goto label_30c19c;
        case 0x30c1a0u: goto label_30c1a0;
        case 0x30c1a4u: goto label_30c1a4;
        case 0x30c1a8u: goto label_30c1a8;
        case 0x30c1acu: goto label_30c1ac;
        case 0x30c1b0u: goto label_30c1b0;
        case 0x30c1b4u: goto label_30c1b4;
        case 0x30c1b8u: goto label_30c1b8;
        case 0x30c1bcu: goto label_30c1bc;
        case 0x30c1c0u: goto label_30c1c0;
        case 0x30c1c4u: goto label_30c1c4;
        case 0x30c1c8u: goto label_30c1c8;
        case 0x30c1ccu: goto label_30c1cc;
        case 0x30c1d0u: goto label_30c1d0;
        case 0x30c1d4u: goto label_30c1d4;
        case 0x30c1d8u: goto label_30c1d8;
        case 0x30c1dcu: goto label_30c1dc;
        case 0x30c1e0u: goto label_30c1e0;
        case 0x30c1e4u: goto label_30c1e4;
        case 0x30c1e8u: goto label_30c1e8;
        case 0x30c1ecu: goto label_30c1ec;
        case 0x30c1f0u: goto label_30c1f0;
        case 0x30c1f4u: goto label_30c1f4;
        case 0x30c1f8u: goto label_30c1f8;
        case 0x30c1fcu: goto label_30c1fc;
        case 0x30c200u: goto label_30c200;
        case 0x30c204u: goto label_30c204;
        case 0x30c208u: goto label_30c208;
        case 0x30c20cu: goto label_30c20c;
        case 0x30c210u: goto label_30c210;
        case 0x30c214u: goto label_30c214;
        case 0x30c218u: goto label_30c218;
        case 0x30c21cu: goto label_30c21c;
        case 0x30c220u: goto label_30c220;
        case 0x30c224u: goto label_30c224;
        case 0x30c228u: goto label_30c228;
        case 0x30c22cu: goto label_30c22c;
        case 0x30c230u: goto label_30c230;
        case 0x30c234u: goto label_30c234;
        case 0x30c238u: goto label_30c238;
        case 0x30c23cu: goto label_30c23c;
        case 0x30c240u: goto label_30c240;
        case 0x30c244u: goto label_30c244;
        case 0x30c248u: goto label_30c248;
        case 0x30c24cu: goto label_30c24c;
        case 0x30c250u: goto label_30c250;
        case 0x30c254u: goto label_30c254;
        case 0x30c258u: goto label_30c258;
        case 0x30c25cu: goto label_30c25c;
        case 0x30c260u: goto label_30c260;
        case 0x30c264u: goto label_30c264;
        case 0x30c268u: goto label_30c268;
        case 0x30c26cu: goto label_30c26c;
        case 0x30c270u: goto label_30c270;
        case 0x30c274u: goto label_30c274;
        case 0x30c278u: goto label_30c278;
        case 0x30c27cu: goto label_30c27c;
        case 0x30c280u: goto label_30c280;
        case 0x30c284u: goto label_30c284;
        case 0x30c288u: goto label_30c288;
        case 0x30c28cu: goto label_30c28c;
        case 0x30c290u: goto label_30c290;
        case 0x30c294u: goto label_30c294;
        case 0x30c298u: goto label_30c298;
        case 0x30c29cu: goto label_30c29c;
        case 0x30c2a0u: goto label_30c2a0;
        case 0x30c2a4u: goto label_30c2a4;
        case 0x30c2a8u: goto label_30c2a8;
        case 0x30c2acu: goto label_30c2ac;
        default: break;
    }

    ctx->pc = 0x309da8u;

label_309da8:
    // 0x309da8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x309da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_309dac:
    // 0x309dac: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x309dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_309db0:
    // 0x309db0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x309db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_309db4:
    // 0x309db4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x309db4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_309db8:
    // 0x309db8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x309db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_309dbc:
    // 0x309dbc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x309dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_309dc0:
    // 0x309dc0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_309dc4:
    if (ctx->pc == 0x309DC4u) {
        ctx->pc = 0x309DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309DC0u;
        // 0x309dc4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309DC8u;
        goto label_309dc8;
    }
    ctx->pc = 0x309DC0u;
    {
        const bool branch_taken_0x309dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x309DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309DC0u;
        // 0x309dc4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309dc0) {
            ctx->pc = 0x309DD8u;
            goto label_309dd8;
        }
    }
    ctx->pc = 0x309DC8u;
label_309dc8:
    // 0x309dc8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x309dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_309dcc:
    // 0x309dcc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x309dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_309dd0:
    // 0x309dd0: 0x10000005  b           . + 4 + (0x5 << 2)
label_309dd4:
    if (ctx->pc == 0x309DD4u) {
        ctx->pc = 0x309DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309DD0u;
        // 0x309dd4: 0x24426608  addiu       $v0, $v0, 0x6608 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309DD8u;
        goto label_309dd8;
    }
    ctx->pc = 0x309DD0u;
    {
        const bool branch_taken_0x309dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309DD0u;
        // 0x309dd4: 0x24426608  addiu       $v0, $v0, 0x6608 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309dd0) {
            ctx->pc = 0x309DE8u;
            goto label_309de8;
        }
    }
    ctx->pc = 0x309DD8u;
label_309dd8:
    // 0x309dd8: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x309dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_309ddc:
    // 0x309ddc: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x309ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
label_309de0:
    // 0x309de0: 0x8c422248  lw          $v0, 0x2248($v0)
    ctx->pc = 0x309de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8776)));
label_309de4:
    // 0x309de4: 0x8c63224c  lw          $v1, 0x224C($v1)
    ctx->pc = 0x309de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8780)));
label_309de8:
    // 0x309de8: 0x380902d  daddu       $s2, $gp, $zero
    ctx->pc = 0x309de8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_309dec:
    // 0x309dec: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
label_309df0:
    if (ctx->pc == 0x309DF0u) {
        ctx->pc = 0x309DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309DECu;
        // 0x309df0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309DF4u;
        goto label_309df4;
    }
    ctx->pc = 0x309DECu;
    {
        const bool branch_taken_0x309dec = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x309DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309DECu;
        // 0x309df0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309dec) {
            ctx->pc = 0x309E2Cu;
            goto label_309e2c;
        }
    }
    ctx->pc = 0x309DF4u;
label_309df4:
    // 0x309df4: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x309df4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_309df8:
    // 0x309df8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x309df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_309dfc:
    // 0x309dfc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_309e00:
    if (ctx->pc == 0x309E00u) {
        ctx->pc = 0x309E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309DFCu;
        // 0x309e00: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309E04u;
        goto label_309e04;
    }
    ctx->pc = 0x309DFCu;
    {
        const bool branch_taken_0x309dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x309dfc) {
            ctx->pc = 0x309E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309DFCu;
            // 0x309e00: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309E24u;
            goto label_309e24;
        }
    }
    ctx->pc = 0x309E04u;
label_309e04:
    // 0x309e04: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x309e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_309e08:
    // 0x309e08: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x309e08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_309e0c:
    // 0x309e0c: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x309e0cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_309e10:
    // 0x309e10: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x309e10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_309e14:
    // 0x309e14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x309e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_309e18:
    // 0x309e18: 0xc0f809  jalr        $a2
label_309e1c:
    if (ctx->pc == 0x309E1Cu) {
        ctx->pc = 0x309E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E18u;
        // 0x309e1c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309E20u;
        goto label_309e20;
    }
    ctx->pc = 0x309E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x309E20u);
        ctx->pc = 0x309E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E18u;
        // 0x309e1c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309E18u, 0x309E20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x309E20u;
label_309e20:
    // 0x309e20: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x309e20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_309e24:
    // 0x309e24: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
label_309e28:
    if (ctx->pc == 0x309E28u) {
        ctx->pc = 0x309E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E24u;
        // 0x309e28: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309E2Cu;
        goto label_309e2c;
    }
    ctx->pc = 0x309E24u;
    {
        const bool branch_taken_0x309e24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x309E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E24u;
        // 0x309e28: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309e24) {
            ctx->pc = 0x309DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309df8;
        }
    }
    ctx->pc = 0x309E2Cu;
label_309e2c:
    // 0x309e2c: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x309e2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_309e30:
    // 0x309e30: 0x240e02d  daddu       $gp, $s2, $zero
    ctx->pc = 0x309e30u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_309e34:
    // 0x309e34: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x309e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_309e38:
    // 0x309e38: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x309e38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_309e3c:
    // 0x309e3c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x309e3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_309e40:
    // 0x309e40: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x309e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_309e44:
    // 0x309e44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x309e44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_309e48:
    // 0x309e48: 0x3e00008  jr          $ra
label_309e4c:
    if (ctx->pc == 0x309E4Cu) {
        ctx->pc = 0x309E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E48u;
        // 0x309e4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309E50u;
        goto label_309e50;
    }
    ctx->pc = 0x309E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E48u;
        // 0x309e4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309E50u;
label_309e50:
    // 0x309e50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x309e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_309e54:
    // 0x309e54: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x309e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_309e58:
    // 0x309e58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x309e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_309e5c:
    // 0x309e5c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x309e5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_309e60:
    // 0x309e60: 0x2483c  dsll32      $t1, $v0, 0
    ctx->pc = 0x309e60u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
label_309e64:
    // 0x309e64: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x309e64u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
label_309e68:
    // 0x309e68: 0x2203f  dsra32      $a0, $v0, 0
    ctx->pc = 0x309e68u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 2) >> (32 + 0));
label_309e6c:
    // 0x309e6c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x309e6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_309e70:
    // 0x309e70: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x309e70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_309e74:
    // 0x309e74: 0x2603c  dsll32      $t4, $v0, 0
    ctx->pc = 0x309e74u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
label_309e78:
    // 0x309e78: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x309e78u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
label_309e7c:
    // 0x309e7c: 0x2583f  dsra32      $t3, $v0, 0
    ctx->pc = 0x309e7cu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 2) >> (32 + 0));
label_309e80:
    // 0x309e80: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x309e80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_309e84:
    // 0x309e84: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x309e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_309e88:
    // 0x309e88: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x309e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_309e8c:
    // 0x309e8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x309e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_309e90:
    // 0x309e90: 0x836824  and         $t5, $a0, $v1
    ctx->pc = 0x309e90u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_309e94:
    // 0x309e94: 0x1625824  and         $t3, $t3, $v0
    ctx->pc = 0x309e94u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
label_309e98:
    // 0x309e98: 0x16c1025  or          $v0, $t3, $t4
    ctx->pc = 0x309e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
label_309e9c:
    // 0x309e9c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_309ea0:
    if (ctx->pc == 0x309EA0u) {
        ctx->pc = 0x309EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E9Cu;
        // 0x309ea0: 0x8d2026  xor         $a0, $a0, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309EA4u;
        goto label_309ea4;
    }
    ctx->pc = 0x309E9Cu;
    {
        const bool branch_taken_0x309e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E9Cu;
        // 0x309ea0: 0x8d2026  xor         $a0, $a0, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309e9c) {
            ctx->pc = 0x309ED4u;
            goto label_309ed4;
        }
    }
    ctx->pc = 0x309EA4u;
label_309ea4:
    // 0x309ea4: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x309ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
label_309ea8:
    // 0x309ea8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x309ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_309eac:
    // 0x309eac: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x309eacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_309eb0:
    // 0x309eb0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_309eb4:
    if (ctx->pc == 0x309EB4u) {
        ctx->pc = 0x309EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309EB0u;
        // 0x309eb4: 0x3c037ff0  lui         $v1, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309EB8u;
        goto label_309eb8;
    }
    ctx->pc = 0x309EB0u;
    {
        const bool branch_taken_0x309eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309EB0u;
        // 0x309eb4: 0x3c037ff0  lui         $v1, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309eb0) {
            ctx->pc = 0x309ED4u;
            goto label_309ed4;
        }
    }
    ctx->pc = 0x309EB8u;
label_309eb8:
    // 0x309eb8: 0xc1023  negu        $v0, $t4
    ctx->pc = 0x309eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 12)));
label_309ebc:
    // 0x309ebc: 0x1821025  or          $v0, $t4, $v0
    ctx->pc = 0x309ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
label_309ec0:
    // 0x309ec0: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x309ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_309ec4:
    // 0x309ec4: 0x1621025  or          $v0, $t3, $v0
    ctx->pc = 0x309ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
label_309ec8:
    // 0x309ec8: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x309ec8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_309ecc:
    // 0x309ecc: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_309ed0:
    if (ctx->pc == 0x309ED0u) {
        ctx->pc = 0x309ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309ECCu;
        // 0x309ed0: 0x164102a  slt         $v0, $t3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x309ED4u;
        goto label_309ed4;
    }
    ctx->pc = 0x309ECCu;
    {
        const bool branch_taken_0x309ecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x309ecc) {
            ctx->pc = 0x309ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309ECCu;
            // 0x309ed0: 0x164102a  slt         $v0, $t3, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x309EF8u;
            goto label_309ef8;
        }
    }
    ctx->pc = 0x309ED4u;
label_309ed4:
    // 0x309ed4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x309ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_309ed8:
    // 0x309ed8: 0xc0bed9c  jal         func_2FB670
label_309edc:
    if (ctx->pc == 0x309EDCu) {
        ctx->pc = 0x309EE0u;
        goto label_309ee0;
    }
    ctx->pc = 0x309ED8u;
    SET_GPR_U32(ctx, 31, 0x309EE0u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x309ED8u, 0x309EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309EE0u;
label_309ee0:
    // 0x309ee0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x309ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_309ee4:
    // 0x309ee4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x309ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_309ee8:
    // 0x309ee8: 0xc0bee3e  jal         func_2FB8F8
label_309eec:
    if (ctx->pc == 0x309EECu) {
        ctx->pc = 0x309EF0u;
        goto label_309ef0;
    }
    ctx->pc = 0x309EE8u;
    SET_GPR_U32(ctx, 31, 0x309EF0u);
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x309EE8u, 0x309EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309EF0u;
label_309ef0:
    // 0x309ef0: 0x100000dc  b           . + 4 + (0xDC << 2)
label_309ef4:
    if (ctx->pc == 0x309EF4u) {
        ctx->pc = 0x309EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309EF0u;
        // 0x309ef4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309EF8u;
        goto label_309ef8;
    }
    ctx->pc = 0x309EF0u;
    {
        const bool branch_taken_0x309ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309EF0u;
        // 0x309ef4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309ef0) {
            ctx->pc = 0x30A264u;
            goto label_30a264;
        }
    }
    ctx->pc = 0x309EF8u;
label_309ef8:
    // 0x309ef8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_309efc:
    if (ctx->pc == 0x309EFCu) {
        ctx->pc = 0x309EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309EF8u;
        // 0x309efc: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309F00u;
        goto label_309f00;
    }
    ctx->pc = 0x309EF8u;
    {
        const bool branch_taken_0x309ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309EF8u;
        // 0x309efc: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309ef8) {
            ctx->pc = 0x309F20u;
            goto label_309f20;
        }
    }
    ctx->pc = 0x309F00u;
label_309f00:
    // 0x309f00: 0x8b102a  slt         $v0, $a0, $t3
    ctx->pc = 0x309f00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_309f04:
    // 0x309f04: 0x144000d5  bnez        $v0, . + 4 + (0xD5 << 2)
label_309f08:
    if (ctx->pc == 0x309F08u) {
        ctx->pc = 0x309F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F04u;
        // 0x309f08: 0x12c102b  sltu        $v0, $t1, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x309F0Cu;
        goto label_309f0c;
    }
    ctx->pc = 0x309F04u;
    {
        const bool branch_taken_0x309f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F04u;
        // 0x309f08: 0x12c102b  sltu        $v0, $t1, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f04) {
            ctx->pc = 0x30A25Cu;
            goto label_30a25c;
        }
    }
    ctx->pc = 0x309F0Cu;
label_309f0c:
    // 0x309f0c: 0x144000d3  bnez        $v0, . + 4 + (0xD3 << 2)
label_309f10:
    if (ctx->pc == 0x309F10u) {
        ctx->pc = 0x309F14u;
        goto label_309f14;
    }
    ctx->pc = 0x309F0Cu;
    {
        const bool branch_taken_0x309f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x309f0c) {
            ctx->pc = 0x30A25Cu;
            goto label_30a25c;
        }
    }
    ctx->pc = 0x309F14u;
label_309f14:
    // 0x309f14: 0x112c00bd  beq         $t1, $t4, . + 4 + (0xBD << 2)
label_309f18:
    if (ctx->pc == 0x309F18u) {
        ctx->pc = 0x309F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F14u;
        // 0x309f18: 0xd1fc2  srl         $v1, $t5, 31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309F1Cu;
        goto label_309f1c;
    }
    ctx->pc = 0x309F14u;
    {
        const bool branch_taken_0x309f14 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 12));
        ctx->pc = 0x309F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F14u;
        // 0x309f18: 0xd1fc2  srl         $v1, $t5, 31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f14) {
            ctx->pc = 0x30A20Cu;
            goto label_30a20c;
        }
    }
    ctx->pc = 0x309F1Cu;
label_309f1c:
    // 0x309f1c: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x309f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_309f20:
    // 0x309f20: 0x41d03  sra         $v1, $a0, 20
    ctx->pc = 0x309f20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 20));
label_309f24:
    // 0x309f24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x309f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_309f28:
    // 0x309f28: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x309f28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_309f2c:
    // 0x309f2c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_309f30:
    if (ctx->pc == 0x309F30u) {
        ctx->pc = 0x309F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F2Cu;
        // 0x309f30: 0x2466fc01  addiu       $a2, $v1, -0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966273));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309F34u;
        goto label_309f34;
    }
    ctx->pc = 0x309F2Cu;
    {
        const bool branch_taken_0x309f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F2Cu;
        // 0x309f30: 0x2466fc01  addiu       $a2, $v1, -0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966273));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f2c) {
            ctx->pc = 0x309F94u;
            goto label_309f94;
        }
    }
    ctx->pc = 0x309F34u;
label_309f34:
    // 0x309f34: 0x1480000e  bnez        $a0, . + 4 + (0xE << 2)
label_309f38:
    if (ctx->pc == 0x309F38u) {
        ctx->pc = 0x309F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F34u;
        // 0x309f38: 0x412c0  sll         $v0, $a0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309F3Cu;
        goto label_309f3c;
    }
    ctx->pc = 0x309F34u;
    {
        const bool branch_taken_0x309f34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x309F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F34u;
        // 0x309f38: 0x412c0  sll         $v0, $a0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f34) {
            ctx->pc = 0x309F70u;
            goto label_309f70;
        }
    }
    ctx->pc = 0x309F3Cu;
label_309f3c:
    // 0x309f3c: 0x2406fbed  addiu       $a2, $zero, -0x413
    ctx->pc = 0x309f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966253));
label_309f40:
    // 0x309f40: 0x18e00014  blez        $a3, . + 4 + (0x14 << 2)
label_309f44:
    if (ctx->pc == 0x309F44u) {
        ctx->pc = 0x309F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F40u;
        // 0x309f44: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309F48u;
        goto label_309f48;
    }
    ctx->pc = 0x309F40u;
    {
        const bool branch_taken_0x309f40 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x309F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F40u;
        // 0x309f44: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f40) {
            ctx->pc = 0x309F94u;
            goto label_309f94;
        }
    }
    ctx->pc = 0x309F48u;
label_309f48:
    // 0x309f48: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x309f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_309f4c:
    // 0x309f4c: 0x0  nop
    ctx->pc = 0x309f4cu;
    // NOP
label_309f50:
    // 0x309f50: 0x0  nop
    ctx->pc = 0x309f50u;
    // NOP
label_309f54:
    // 0x309f54: 0x0  nop
    ctx->pc = 0x309f54u;
    // NOP
label_309f58:
    // 0x309f58: 0x0  nop
    ctx->pc = 0x309f58u;
    // NOP
label_309f5c:
    // 0x309f5c: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
label_309f60:
    if (ctx->pc == 0x309F60u) {
        ctx->pc = 0x309F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F5Cu;
        // 0x309f60: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309F64u;
        goto label_309f64;
    }
    ctx->pc = 0x309F5Cu;
    {
        const bool branch_taken_0x309f5c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x309F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F5Cu;
        // 0x309f60: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f5c) {
            ctx->pc = 0x309F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309f48;
        }
    }
    ctx->pc = 0x309F64u;
label_309f64:
    // 0x309f64: 0x1000000c  b           . + 4 + (0xC << 2)
label_309f68:
    if (ctx->pc == 0x309F68u) {
        ctx->pc = 0x309F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F64u;
        // 0x309f68: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309F6Cu;
        goto label_309f6c;
    }
    ctx->pc = 0x309F64u;
    {
        const bool branch_taken_0x309f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F64u;
        // 0x309f68: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f64) {
            ctx->pc = 0x309F98u;
            goto label_309f98;
        }
    }
    ctx->pc = 0x309F6Cu;
label_309f6c:
    // 0x309f6c: 0x0  nop
    ctx->pc = 0x309f6cu;
    // NOP
label_309f70:
    // 0x309f70: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_309f74:
    if (ctx->pc == 0x309F74u) {
        ctx->pc = 0x309F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F70u;
        // 0x309f74: 0x2406fc02  addiu       $a2, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309F78u;
        goto label_309f78;
    }
    ctx->pc = 0x309F70u;
    {
        const bool branch_taken_0x309f70 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x309F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F70u;
        // 0x309f74: 0x2406fc02  addiu       $a2, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f70) {
            ctx->pc = 0x309F94u;
            goto label_309f94;
        }
    }
    ctx->pc = 0x309F78u;
label_309f78:
    // 0x309f78: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x309f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_309f7c:
    // 0x309f7c: 0x0  nop
    ctx->pc = 0x309f7cu;
    // NOP
label_309f80:
    // 0x309f80: 0x0  nop
    ctx->pc = 0x309f80u;
    // NOP
label_309f84:
    // 0x309f84: 0x0  nop
    ctx->pc = 0x309f84u;
    // NOP
label_309f88:
    // 0x309f88: 0x0  nop
    ctx->pc = 0x309f88u;
    // NOP
label_309f8c:
    // 0x309f8c: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
label_309f90:
    if (ctx->pc == 0x309F90u) {
        ctx->pc = 0x309F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F8Cu;
        // 0x309f90: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309F94u;
        goto label_309f94;
    }
    ctx->pc = 0x309F8Cu;
    {
        const bool branch_taken_0x309f8c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x309F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F8Cu;
        // 0x309f90: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f8c) {
            ctx->pc = 0x309F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309f78;
        }
    }
    ctx->pc = 0x309F94u;
label_309f94:
    // 0x309f94: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x309f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_309f98:
    // 0x309f98: 0xb1d03  sra         $v1, $t3, 20
    ctx->pc = 0x309f98u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 11), 20));
label_309f9c:
    // 0x309f9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x309f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_309fa0:
    // 0x309fa0: 0x4b102a  slt         $v0, $v0, $t3
    ctx->pc = 0x309fa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
label_309fa4:
    // 0x309fa4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_309fa8:
    if (ctx->pc == 0x309FA8u) {
        ctx->pc = 0x309FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FA4u;
        // 0x309fa8: 0x246afc01  addiu       $t2, $v1, -0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966273));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309FACu;
        goto label_309fac;
    }
    ctx->pc = 0x309FA4u;
    {
        const bool branch_taken_0x309fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x309FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FA4u;
        // 0x309fa8: 0x246afc01  addiu       $t2, $v1, -0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966273));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309fa4) {
            ctx->pc = 0x30A00Cu;
            goto label_30a00c;
        }
    }
    ctx->pc = 0x309FACu;
label_309fac:
    // 0x309fac: 0x1560000e  bnez        $t3, . + 4 + (0xE << 2)
label_309fb0:
    if (ctx->pc == 0x309FB0u) {
        ctx->pc = 0x309FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FACu;
        // 0x309fb0: 0xb12c0  sll         $v0, $t3, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309FB4u;
        goto label_309fb4;
    }
    ctx->pc = 0x309FACu;
    {
        const bool branch_taken_0x309fac = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x309FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FACu;
        // 0x309fb0: 0xb12c0  sll         $v0, $t3, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309fac) {
            ctx->pc = 0x309FE8u;
            goto label_309fe8;
        }
    }
    ctx->pc = 0x309FB4u;
label_309fb4:
    // 0x309fb4: 0x240afbed  addiu       $t2, $zero, -0x413
    ctx->pc = 0x309fb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966253));
label_309fb8:
    // 0x309fb8: 0x19000014  blez        $t0, . + 4 + (0x14 << 2)
label_309fbc:
    if (ctx->pc == 0x309FBCu) {
        ctx->pc = 0x309FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FB8u;
        // 0x309fbc: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309FC0u;
        goto label_309fc0;
    }
    ctx->pc = 0x309FB8u;
    {
        const bool branch_taken_0x309fb8 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x309FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FB8u;
        // 0x309fbc: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309fb8) {
            ctx->pc = 0x30A00Cu;
            goto label_30a00c;
        }
    }
    ctx->pc = 0x309FC0u;
label_309fc0:
    // 0x309fc0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x309fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_309fc4:
    // 0x309fc4: 0x0  nop
    ctx->pc = 0x309fc4u;
    // NOP
label_309fc8:
    // 0x309fc8: 0x0  nop
    ctx->pc = 0x309fc8u;
    // NOP
label_309fcc:
    // 0x309fcc: 0x0  nop
    ctx->pc = 0x309fccu;
    // NOP
label_309fd0:
    // 0x309fd0: 0x0  nop
    ctx->pc = 0x309fd0u;
    // NOP
label_309fd4:
    // 0x309fd4: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
label_309fd8:
    if (ctx->pc == 0x309FD8u) {
        ctx->pc = 0x309FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FD4u;
        // 0x309fd8: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309FDCu;
        goto label_309fdc;
    }
    ctx->pc = 0x309FD4u;
    {
        const bool branch_taken_0x309fd4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x309FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FD4u;
        // 0x309fd8: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309fd4) {
            ctx->pc = 0x309FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309fc0;
        }
    }
    ctx->pc = 0x309FDCu;
label_309fdc:
    // 0x309fdc: 0x1000000c  b           . + 4 + (0xC << 2)
label_309fe0:
    if (ctx->pc == 0x309FE0u) {
        ctx->pc = 0x309FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FDCu;
        // 0x309fe0: 0x28c2fc02  slti        $v0, $a2, -0x3FE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294966274) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x309FE4u;
        goto label_309fe4;
    }
    ctx->pc = 0x309FDCu;
    {
        const bool branch_taken_0x309fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x309FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FDCu;
        // 0x309fe0: 0x28c2fc02  slti        $v0, $a2, -0x3FE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294966274) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x309fdc) {
            ctx->pc = 0x30A010u;
            goto label_30a010;
        }
    }
    ctx->pc = 0x309FE4u;
label_309fe4:
    // 0x309fe4: 0x0  nop
    ctx->pc = 0x309fe4u;
    // NOP
label_309fe8:
    // 0x309fe8: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_309fec:
    if (ctx->pc == 0x309FECu) {
        ctx->pc = 0x309FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FE8u;
        // 0x309fec: 0x240afc02  addiu       $t2, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        ctx->pc = 0x309FF0u;
        goto label_309ff0;
    }
    ctx->pc = 0x309FE8u;
    {
        const bool branch_taken_0x309fe8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x309FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309FE8u;
        // 0x309fec: 0x240afc02  addiu       $t2, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309fe8) {
            ctx->pc = 0x30A00Cu;
            goto label_30a00c;
        }
    }
    ctx->pc = 0x309FF0u;
label_309ff0:
    // 0x309ff0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x309ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_309ff4:
    // 0x309ff4: 0x0  nop
    ctx->pc = 0x309ff4u;
    // NOP
label_309ff8:
    // 0x309ff8: 0x0  nop
    ctx->pc = 0x309ff8u;
    // NOP
label_309ffc:
    // 0x309ffc: 0x0  nop
    ctx->pc = 0x309ffcu;
    // NOP
label_30a000:
    // 0x30a000: 0x0  nop
    ctx->pc = 0x30a000u;
    // NOP
label_30a004:
    // 0x30a004: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
label_30a008:
    if (ctx->pc == 0x30A008u) {
        ctx->pc = 0x30A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A004u;
        // 0x30a008: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A00Cu;
        goto label_30a00c;
    }
    ctx->pc = 0x30A004u;
    {
        const bool branch_taken_0x30a004 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x30A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A004u;
        // 0x30a008: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a004) {
            ctx->pc = 0x309FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309ff0;
        }
    }
    ctx->pc = 0x30A00Cu;
label_30a00c:
    // 0x30a00c: 0x28c2fc02  slti        $v0, $a2, -0x3FE
    ctx->pc = 0x30a00cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294966274) ? 1 : 0);
label_30a010:
    // 0x30a010: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_30a014:
    if (ctx->pc == 0x30A014u) {
        ctx->pc = 0x30A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A010u;
        // 0x30a014: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A018u;
        goto label_30a018;
    }
    ctx->pc = 0x30A010u;
    {
        const bool branch_taken_0x30a010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A010u;
        // 0x30a014: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a010) {
            ctx->pc = 0x30A030u;
            goto label_30a030;
        }
    }
    ctx->pc = 0x30A018u;
label_30a018:
    // 0x30a018: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x30a018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_30a01c:
    // 0x30a01c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x30a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_30a020:
    // 0x30a020: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30a020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30a024:
    // 0x30a024: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x30a024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_30a028:
    // 0x30a028: 0x1000000c  b           . + 4 + (0xC << 2)
label_30a02c:
    if (ctx->pc == 0x30A02Cu) {
        ctx->pc = 0x30A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A028u;
        // 0x30a02c: 0x432025  or          $a0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A030u;
        goto label_30a030;
    }
    ctx->pc = 0x30A028u;
    {
        const bool branch_taken_0x30a028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A028u;
        // 0x30a02c: 0x432025  or          $a0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a028) {
            ctx->pc = 0x30A05Cu;
            goto label_30a05c;
        }
    }
    ctx->pc = 0x30A030u;
label_30a030:
    // 0x30a030: 0x462823  subu        $a1, $v0, $a2
    ctx->pc = 0x30a030u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_30a034:
    // 0x30a034: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x30a034u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_30a038:
    // 0x30a038: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_30a03c:
    if (ctx->pc == 0x30A03Cu) {
        ctx->pc = 0x30A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A038u;
        // 0x30a03c: 0xa72004  sllv        $a0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A040u;
        goto label_30a040;
    }
    ctx->pc = 0x30A038u;
    {
        const bool branch_taken_0x30a038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a038) {
            ctx->pc = 0x30A03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A038u;
            // 0x30a03c: 0xa72004  sllv        $a0, $a3, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A058u;
            goto label_30a058;
        }
    }
    ctx->pc = 0x30A040u;
label_30a040:
    // 0x30a040: 0x51023  negu        $v0, $a1
    ctx->pc = 0x30a040u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_30a044:
    // 0x30a044: 0xa41804  sllv        $v1, $a0, $a1
    ctx->pc = 0x30a044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_30a048:
    // 0x30a048: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x30a048u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_30a04c:
    // 0x30a04c: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x30a04cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_30a050:
    // 0x30a050: 0x10000002  b           . + 4 + (0x2 << 2)
label_30a054:
    if (ctx->pc == 0x30A054u) {
        ctx->pc = 0x30A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A050u;
        // 0x30a054: 0x622025  or          $a0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A058u;
        goto label_30a058;
    }
    ctx->pc = 0x30A050u;
    {
        const bool branch_taken_0x30a050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A050u;
        // 0x30a054: 0x622025  or          $a0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a050) {
            ctx->pc = 0x30A05Cu;
            goto label_30a05c;
        }
    }
    ctx->pc = 0x30A058u;
label_30a058:
    // 0x30a058: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30a058u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a05c:
    // 0x30a05c: 0x294efc02  slti        $t6, $t2, -0x3FE
    ctx->pc = 0x30a05cu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4294966274) ? 1 : 0);
label_30a060:
    // 0x30a060: 0x15c00007  bnez        $t6, . + 4 + (0x7 << 2)
label_30a064:
    if (ctx->pc == 0x30A064u) {
        ctx->pc = 0x30A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A060u;
        // 0x30a064: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A068u;
        goto label_30a068;
    }
    ctx->pc = 0x30A060u;
    {
        const bool branch_taken_0x30a060 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A060u;
        // 0x30a064: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a060) {
            ctx->pc = 0x30A080u;
            goto label_30a080;
        }
    }
    ctx->pc = 0x30A068u;
label_30a068:
    // 0x30a068: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x30a068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_30a06c:
    // 0x30a06c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x30a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_30a070:
    // 0x30a070: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30a070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30a074:
    // 0x30a074: 0x1621024  and         $v0, $t3, $v0
    ctx->pc = 0x30a074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
label_30a078:
    // 0x30a078: 0x1000000c  b           . + 4 + (0xC << 2)
label_30a07c:
    if (ctx->pc == 0x30A07Cu) {
        ctx->pc = 0x30A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A078u;
        // 0x30a07c: 0x435825  or          $t3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A080u;
        goto label_30a080;
    }
    ctx->pc = 0x30A078u;
    {
        const bool branch_taken_0x30a078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A078u;
        // 0x30a07c: 0x435825  or          $t3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a078) {
            ctx->pc = 0x30A0ACu;
            goto label_30a0ac;
        }
    }
    ctx->pc = 0x30A080u;
label_30a080:
    // 0x30a080: 0x4a2823  subu        $a1, $v0, $t2
    ctx->pc = 0x30a080u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_30a084:
    // 0x30a084: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x30a084u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_30a088:
    // 0x30a088: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_30a08c:
    if (ctx->pc == 0x30A08Cu) {
        ctx->pc = 0x30A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A088u;
        // 0x30a08c: 0xa85804  sllv        $t3, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A090u;
        goto label_30a090;
    }
    ctx->pc = 0x30A088u;
    {
        const bool branch_taken_0x30a088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a088) {
            ctx->pc = 0x30A08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A088u;
            // 0x30a08c: 0xa85804  sllv        $t3, $t0, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A0A8u;
            goto label_30a0a8;
        }
    }
    ctx->pc = 0x30A090u;
label_30a090:
    // 0x30a090: 0x51023  negu        $v0, $a1
    ctx->pc = 0x30a090u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_30a094:
    // 0x30a094: 0xab1804  sllv        $v1, $t3, $a1
    ctx->pc = 0x30a094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 5) & 0x1F));
label_30a098:
    // 0x30a098: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x30a098u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
label_30a09c:
    // 0x30a09c: 0xa86004  sllv        $t4, $t0, $a1
    ctx->pc = 0x30a09cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
label_30a0a0:
    // 0x30a0a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_30a0a4:
    if (ctx->pc == 0x30A0A4u) {
        ctx->pc = 0x30A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0A0u;
        // 0x30a0a4: 0x625825  or          $t3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A0A8u;
        goto label_30a0a8;
    }
    ctx->pc = 0x30A0A0u;
    {
        const bool branch_taken_0x30a0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0A0u;
        // 0x30a0a4: 0x625825  or          $t3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a0a0) {
            ctx->pc = 0x30A0ACu;
            goto label_30a0ac;
        }
    }
    ctx->pc = 0x30A0A8u;
label_30a0a8:
    // 0x30a0a8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x30a0a8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a0ac:
    // 0x30a0ac: 0xca2823  subu        $a1, $a2, $t2
    ctx->pc = 0x30a0acu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_30a0b0:
    // 0x30a0b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30a0b4:
    // 0x30a0b4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x30a0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_30a0b8:
    // 0x30a0b8: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
label_30a0bc:
    if (ctx->pc == 0x30A0BCu) {
        ctx->pc = 0x30A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0B8u;
        // 0x30a0bc: 0x12c102b  sltu        $v0, $t1, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A0C0u;
        goto label_30a0c0;
    }
    ctx->pc = 0x30A0B8u;
    {
        const bool branch_taken_0x30a0b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x30A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0B8u;
        // 0x30a0bc: 0x12c102b  sltu        $v0, $t1, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a0b8) {
            ctx->pc = 0x30A110u;
            goto label_30a110;
        }
    }
    ctx->pc = 0x30A0C0u;
label_30a0c0:
    // 0x30a0c0: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x30a0c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30a0c4:
    // 0x30a0c4: 0x0  nop
    ctx->pc = 0x30a0c4u;
    // NOP
label_30a0c8:
    // 0x30a0c8: 0x8b1823  subu        $v1, $a0, $t3
    ctx->pc = 0x30a0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_30a0cc:
    // 0x30a0cc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x30a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30a0d0:
    // 0x30a0d0: 0x12c1023  subu        $v0, $t1, $t4
    ctx->pc = 0x30a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_30a0d4:
    // 0x30a0d4: 0x34040  sll         $t0, $v1, 1
    ctx->pc = 0x30a0d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_30a0d8:
    // 0x30a0d8: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x30a0d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_30a0dc:
    // 0x30a0dc: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
label_30a0e0:
    if (ctx->pc == 0x30A0E0u) {
        ctx->pc = 0x30A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0DCu;
        // 0x30a0e0: 0x23fc2  srl         $a3, $v0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A0E4u;
        goto label_30a0e4;
    }
    ctx->pc = 0x30A0DCu;
    {
        const bool branch_taken_0x30a0dc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x30A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0DCu;
        // 0x30a0e0: 0x23fc2  srl         $a3, $v0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a0dc) {
            ctx->pc = 0x30A0F8u;
            goto label_30a0f8;
        }
    }
    ctx->pc = 0x30A0E4u;
label_30a0e4:
    // 0x30a0e4: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x30a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_30a0e8:
    // 0x30a0e8: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x30a0e8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_30a0ec:
    // 0x30a0ec: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x30a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_30a0f0:
    // 0x30a0f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_30a0f4:
    if (ctx->pc == 0x30A0F4u) {
        ctx->pc = 0x30A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0F0u;
        // 0x30a0f4: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A0F8u;
        goto label_30a0f8;
    }
    ctx->pc = 0x30A0F0u;
    {
        const bool branch_taken_0x30a0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0F0u;
        // 0x30a0f4: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a0f0) {
            ctx->pc = 0x30A104u;
            goto label_30a104;
        }
    }
    ctx->pc = 0x30A0F8u;
label_30a0f8:
    // 0x30a0f8: 0x10c00043  beqz        $a2, . + 4 + (0x43 << 2)
label_30a0fc:
    if (ctx->pc == 0x30A0FCu) {
        ctx->pc = 0x30A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0F8u;
        // 0x30a0fc: 0x1072021  addu        $a0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A100u;
        goto label_30a100;
    }
    ctx->pc = 0x30A0F8u;
    {
        const bool branch_taken_0x30a0f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A0F8u;
        // 0x30a0fc: 0x1072021  addu        $a0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a0f8) {
            ctx->pc = 0x30A208u;
            goto label_30a208;
        }
    }
    ctx->pc = 0x30A100u;
label_30a100:
    // 0x30a100: 0x24840  sll         $t1, $v0, 1
    ctx->pc = 0x30a100u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_30a104:
    // 0x30a104: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x30a104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_30a108:
    // 0x30a108: 0x14afffef  bne         $a1, $t7, . + 4 + (-0x11 << 2)
label_30a10c:
    if (ctx->pc == 0x30A10Cu) {
        ctx->pc = 0x30A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A108u;
        // 0x30a10c: 0x12c102b  sltu        $v0, $t1, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A110u;
        goto label_30a110;
    }
    ctx->pc = 0x30A108u;
    {
        const bool branch_taken_0x30a108 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 15));
        ctx->pc = 0x30A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A108u;
        // 0x30a10c: 0x12c102b  sltu        $v0, $t1, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a108) {
            ctx->pc = 0x30A0C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a0c8;
        }
    }
    ctx->pc = 0x30A110u;
label_30a110:
    // 0x30a110: 0x8b1823  subu        $v1, $a0, $t3
    ctx->pc = 0x30a110u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_30a114:
    // 0x30a114: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x30a114u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30a118:
    // 0x30a118: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
label_30a11c:
    if (ctx->pc == 0x30A11Cu) {
        ctx->pc = 0x30A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A118u;
        // 0x30a11c: 0x12c1023  subu        $v0, $t1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A120u;
        goto label_30a120;
    }
    ctx->pc = 0x30A118u;
    {
        const bool branch_taken_0x30a118 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x30A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A118u;
        // 0x30a11c: 0x12c1023  subu        $v0, $t1, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a118) {
            ctx->pc = 0x30A128u;
            goto label_30a128;
        }
    }
    ctx->pc = 0x30A120u;
label_30a120:
    // 0x30a120: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x30a120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_30a124:
    // 0x30a124: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x30a124u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a128:
    // 0x30a128: 0x891025  or          $v0, $a0, $t1
    ctx->pc = 0x30a128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
label_30a12c:
    // 0x30a12c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_30a130:
    if (ctx->pc == 0x30A130u) {
        ctx->pc = 0x30A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A12Cu;
        // 0x30a130: 0xd1fc2  srl         $v1, $t5, 31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A134u;
        goto label_30a134;
    }
    ctx->pc = 0x30A12Cu;
    {
        const bool branch_taken_0x30a12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A12Cu;
        // 0x30a130: 0xd1fc2  srl         $v1, $t5, 31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a12c) {
            ctx->pc = 0x30A20Cu;
            goto label_30a20c;
        }
    }
    ctx->pc = 0x30A134u;
label_30a134:
    // 0x30a134: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x30a134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_30a138:
    // 0x30a138: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30a138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30a13c:
    // 0x30a13c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x30a13cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_30a140:
    // 0x30a140: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_30a144:
    if (ctx->pc == 0x30A144u) {
        ctx->pc = 0x30A148u;
        goto label_30a148;
    }
    ctx->pc = 0x30A140u;
    {
        const bool branch_taken_0x30a140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a140) {
            ctx->pc = 0x30A170u;
            goto label_30a170;
        }
    }
    ctx->pc = 0x30A148u;
label_30a148:
    // 0x30a148: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x30a148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
label_30a14c:
    // 0x30a14c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x30a14cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_30a150:
    // 0x30a150: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x30a150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_30a154:
    // 0x30a154: 0x91fc2  srl         $v1, $t1, 31
    ctx->pc = 0x30a154u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_30a158:
    // 0x30a158: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x30a158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30a15c:
    // 0x30a15c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x30a15cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_30a160:
    // 0x30a160: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x30a160u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_30a164:
    // 0x30a164: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_30a168:
    if (ctx->pc == 0x30A168u) {
        ctx->pc = 0x30A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A164u;
        // 0x30a168: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A16Cu;
        goto label_30a16c;
    }
    ctx->pc = 0x30A164u;
    {
        const bool branch_taken_0x30a164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A164u;
        // 0x30a168: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a164) {
            ctx->pc = 0x30A150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a150;
        }
    }
    ctx->pc = 0x30A16Cu;
label_30a16c:
    // 0x30a16c: 0x294efc02  slti        $t6, $t2, -0x3FE
    ctx->pc = 0x30a16cu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4294966274) ? 1 : 0);
label_30a170:
    // 0x30a170: 0x15c00013  bnez        $t6, . + 4 + (0x13 << 2)
label_30a174:
    if (ctx->pc == 0x30A174u) {
        ctx->pc = 0x30A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A170u;
        // 0x30a174: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A178u;
        goto label_30a178;
    }
    ctx->pc = 0x30A170u;
    {
        const bool branch_taken_0x30a170 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A170u;
        // 0x30a174: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a170) {
            ctx->pc = 0x30A1C0u;
            goto label_30a1c0;
        }
    }
    ctx->pc = 0x30A178u;
label_30a178:
    // 0x30a178: 0x254303ff  addiu       $v1, $t2, 0x3FF
    ctx->pc = 0x30a178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1023));
label_30a17c:
    // 0x30a17c: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x30a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
label_30a180:
    // 0x30a180: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x30a180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_30a184:
    // 0x30a184: 0x31d00  sll         $v1, $v1, 20
    ctx->pc = 0x30a184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
label_30a188:
    // 0x30a188: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x30a188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_30a18c:
    // 0x30a18c: 0x8d2025  or          $a0, $a0, $t5
    ctx->pc = 0x30a18cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 13));
label_30a190:
    // 0x30a190: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x30a190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_30a194:
    // 0x30a194: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30a194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_30a198:
    // 0x30a198: 0x302c024  and         $t8, $t8, $v0
    ctx->pc = 0x30a198u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
label_30a19c:
    // 0x30a19c: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x30a19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
label_30a1a0:
    // 0x30a1a0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x30a1a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_30a1a4:
    // 0x30a1a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30a1a8:
    // 0x30a1a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x30a1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_30a1ac:
    // 0x30a1ac: 0x304c025  or          $t8, $t8, $a0
    ctx->pc = 0x30a1acu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 4));
label_30a1b0:
    // 0x30a1b0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30a1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_30a1b4:
    // 0x30a1b4: 0x303c024  and         $t8, $t8, $v1
    ctx->pc = 0x30a1b4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 3));
label_30a1b8:
    // 0x30a1b8: 0x10000028  b           . + 4 + (0x28 << 2)
label_30a1bc:
    if (ctx->pc == 0x30A1BCu) {
        ctx->pc = 0x30A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A1B8u;
        // 0x30a1bc: 0x3023025  or          $a2, $t8, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 24) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A1C0u;
        goto label_30a1c0;
    }
    ctx->pc = 0x30A1B8u;
    {
        const bool branch_taken_0x30a1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A1B8u;
        // 0x30a1bc: 0x3023025  or          $a2, $t8, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 24) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a1b8) {
            ctx->pc = 0x30A25Cu;
            goto label_30a25c;
        }
    }
    ctx->pc = 0x30A1C0u;
label_30a1c0:
    // 0x30a1c0: 0x4a2823  subu        $a1, $v0, $t2
    ctx->pc = 0x30a1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_30a1c4:
    // 0x30a1c4: 0x28a30015  slti        $v1, $a1, 0x15
    ctx->pc = 0x30a1c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)21) ? 1 : 0);
label_30a1c8:
    // 0x30a1c8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_30a1cc:
    if (ctx->pc == 0x30A1CCu) {
        ctx->pc = 0x30A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A1C8u;
        // 0x30a1cc: 0x28a20020  slti        $v0, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A1D0u;
        goto label_30a1d0;
    }
    ctx->pc = 0x30A1C8u;
    {
        const bool branch_taken_0x30a1c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A1C8u;
        // 0x30a1cc: 0x28a20020  slti        $v0, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a1c8) {
            ctx->pc = 0x30A1E8u;
            goto label_30a1e8;
        }
    }
    ctx->pc = 0x30A1D0u;
label_30a1d0:
    // 0x30a1d0: 0x51023  negu        $v0, $a1
    ctx->pc = 0x30a1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_30a1d4:
    // 0x30a1d4: 0xa91806  srlv        $v1, $t1, $a1
    ctx->pc = 0x30a1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
label_30a1d8:
    // 0x30a1d8: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x30a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_30a1dc:
    // 0x30a1dc: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x30a1dcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_30a1e0:
    // 0x30a1e0: 0x10000012  b           . + 4 + (0x12 << 2)
label_30a1e4:
    if (ctx->pc == 0x30A1E4u) {
        ctx->pc = 0x30A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A1E0u;
        // 0x30a1e4: 0x624825  or          $t1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A1E8u;
        goto label_30a1e8;
    }
    ctx->pc = 0x30A1E0u;
    {
        const bool branch_taken_0x30a1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A1E0u;
        // 0x30a1e4: 0x624825  or          $t1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a1e0) {
            ctx->pc = 0x30A22Cu;
            goto label_30a22c;
        }
    }
    ctx->pc = 0x30A1E8u;
label_30a1e8:
    // 0x30a1e8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_30a1ec:
    if (ctx->pc == 0x30A1ECu) {
        ctx->pc = 0x30A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A1E8u;
        // 0x30a1ec: 0xa44807  srav        $t1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A1F0u;
        goto label_30a1f0;
    }
    ctx->pc = 0x30A1E8u;
    {
        const bool branch_taken_0x30a1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a1e8) {
            ctx->pc = 0x30A1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A1E8u;
            // 0x30a1ec: 0xa44807  srav        $t1, $a0, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A228u;
            goto label_30a228;
        }
    }
    ctx->pc = 0x30A1F0u;
label_30a1f0:
    // 0x30a1f0: 0x51023  negu        $v0, $a1
    ctx->pc = 0x30a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_30a1f4:
    // 0x30a1f4: 0xa91806  srlv        $v1, $t1, $a1
    ctx->pc = 0x30a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
label_30a1f8:
    // 0x30a1f8: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x30a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_30a1fc:
    // 0x30a1fc: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x30a1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_30a200:
    // 0x30a200: 0x1000000a  b           . + 4 + (0xA << 2)
label_30a204:
    if (ctx->pc == 0x30A204u) {
        ctx->pc = 0x30A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A200u;
        // 0x30a204: 0x434825  or          $t1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A208u;
        goto label_30a208;
    }
    ctx->pc = 0x30A200u;
    {
        const bool branch_taken_0x30a200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A200u;
        // 0x30a204: 0x434825  or          $t1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a200) {
            ctx->pc = 0x30A22Cu;
            goto label_30a22c;
        }
    }
    ctx->pc = 0x30A208u;
label_30a208:
    // 0x30a208: 0xd1fc2  srl         $v1, $t5, 31
    ctx->pc = 0x30a208u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
label_30a20c:
    // 0x30a20c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x30a20cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_30a210:
    // 0x30a210: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30a210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30a214:
    // 0x30a214: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30a214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30a218:
    // 0x30a218: 0xdc42adc0  ld          $v0, -0x5240($v0)
    ctx->pc = 0x30a218u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294946240)));
label_30a21c:
    // 0x30a21c: 0x10000011  b           . + 4 + (0x11 << 2)
label_30a220:
    if (ctx->pc == 0x30A220u) {
        ctx->pc = 0x30A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A21Cu;
        // 0x30a220: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A224u;
        goto label_30a224;
    }
    ctx->pc = 0x30A21Cu;
    {
        const bool branch_taken_0x30a21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A21Cu;
        // 0x30a220: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a21c) {
            ctx->pc = 0x30A264u;
            goto label_30a264;
        }
    }
    ctx->pc = 0x30A224u;
label_30a224:
    // 0x30a224: 0x0  nop
    ctx->pc = 0x30a224u;
    // NOP
label_30a228:
    // 0x30a228: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x30a228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_30a22c:
    // 0x30a22c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x30a22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_30a230:
    // 0x30a230: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30a230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_30a234:
    // 0x30a234: 0x8d1025  or          $v0, $a0, $t5
    ctx->pc = 0x30a234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 13));
label_30a238:
    // 0x30a238: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30a238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_30a23c:
    // 0x30a23c: 0x303c024  and         $t8, $t8, $v1
    ctx->pc = 0x30a23cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 3));
label_30a240:
    // 0x30a240: 0x302c025  or          $t8, $t8, $v0
    ctx->pc = 0x30a240u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | GPR_U64(ctx, 2));
label_30a244:
    // 0x30a244: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30a244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30a248:
    // 0x30a248: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30a248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_30a24c:
    // 0x30a24c: 0x9183c  dsll32      $v1, $t1, 0
    ctx->pc = 0x30a24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 0));
label_30a250:
    // 0x30a250: 0x302c024  and         $t8, $t8, $v0
    ctx->pc = 0x30a250u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & GPR_U64(ctx, 2));
label_30a254:
    // 0x30a254: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30a254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_30a258:
    // 0x30a258: 0x3033025  or          $a2, $t8, $v1
    ctx->pc = 0x30a258u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
label_30a25c:
    // 0x30a25c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x30a25cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_30a260:
    // 0x30a260: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30a260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30a264:
    // 0x30a264: 0x3e00008  jr          $ra
label_30a268:
    if (ctx->pc == 0x30A268u) {
        ctx->pc = 0x30A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A264u;
        // 0x30a268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A26Cu;
        goto label_30a26c;
    }
    ctx->pc = 0x30A264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A264u;
        // 0x30a268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A26Cu;
label_30a26c:
    // 0x30a26c: 0x0  nop
    ctx->pc = 0x30a26cu;
    // NOP
label_30a270:
    // 0x30a270: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x30a270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_30a274:
    // 0x30a274: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x30a274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_30a278:
    // 0x30a278: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x30a278u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30a27c:
    // 0x30a27c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x30a27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_30a280:
    // 0x30a280: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x30a280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_30a284:
    // 0x30a284: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x30a284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_30a288:
    // 0x30a288: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x30a288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_30a28c:
    // 0x30a28c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x30a28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_30a290:
    // 0x30a290: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x30a290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_30a294:
    // 0x30a294: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x30a294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_30a298:
    // 0x30a298: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x30a298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
label_30a29c:
    // 0x30a29c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x30a29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_30a2a0:
    // 0x30a2a0: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x30a2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
label_30a2a4:
    // 0x30a2a4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x30a2a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30a2a8:
    // 0x30a2a8: 0x2b83c  dsll32      $s7, $v0, 0
    ctx->pc = 0x30a2a8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 0));
label_30a2ac:
    // 0x30a2ac: 0x17b83f  dsra32      $s7, $s7, 0
    ctx->pc = 0x30a2acu;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 0));
label_30a2b0:
    // 0x30a2b0: 0x2b03f  dsra32      $s6, $v0, 0
    ctx->pc = 0x30a2b0u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 2) >> (32 + 0));
label_30a2b4:
    // 0x30a2b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x30a2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_30a2b8:
    // 0x30a2b8: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x30a2b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_30a2bc:
    // 0x30a2bc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x30a2bcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_30a2c0:
    // 0x30a2c0: 0x4983f  dsra32      $s3, $a0, 0
    ctx->pc = 0x30a2c0u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 4) >> (32 + 0));
label_30a2c4:
    // 0x30a2c4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x30a2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_30a2c8:
    // 0x30a2c8: 0x3402ffc0  ori         $v0, $zero, 0xFFC0
    ctx->pc = 0x30a2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_30a2cc:
    // 0x30a2cc: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x30a2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
label_30a2d0:
    // 0x30a2d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30a2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_30a2d4:
    // 0x30a2d4: 0x2638024  and         $s0, $s3, $v1
    ctx->pc = 0x30a2d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
label_30a2d8:
    // 0x30a2d8: 0x2052025  or          $a0, $s0, $a1
    ctx->pc = 0x30a2d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
label_30a2dc:
    // 0x30a2dc: 0x108003ab  beqz        $a0, . + 4 + (0x3AB << 2)
label_30a2e0:
    if (ctx->pc == 0x30A2E0u) {
        ctx->pc = 0x30A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2DCu;
        // 0x30a2e0: 0x2c3a824  and         $s5, $s6, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A2E4u;
        goto label_30a2e4;
    }
    ctx->pc = 0x30A2DCu;
    {
        const bool branch_taken_0x30a2dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2DCu;
        // 0x30a2e0: 0x2c3a824  and         $s5, $s6, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a2dc) {
            ctx->pc = 0x30B18Cu;
            goto label_30b18c;
        }
    }
    ctx->pc = 0x30A2E4u;
label_30a2e4:
    // 0x30a2e4: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x30a2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
label_30a2e8:
    // 0x30a2e8: 0x75102a  slt         $v0, $v1, $s5
    ctx->pc = 0x30a2e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_30a2ec:
    // 0x30a2ec: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_30a2f0:
    if (ctx->pc == 0x30A2F0u) {
        ctx->pc = 0x30A2F4u;
        goto label_30a2f4;
    }
    ctx->pc = 0x30A2ECu;
    {
        const bool branch_taken_0x30a2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a2ec) {
            ctx->pc = 0x30A31Cu;
            goto label_30a31c;
        }
    }
    ctx->pc = 0x30A2F4u;
label_30a2f4:
    // 0x30a2f4: 0x16a30003  bne         $s5, $v1, . + 4 + (0x3 << 2)
label_30a2f8:
    if (ctx->pc == 0x30A2F8u) {
        ctx->pc = 0x30A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2F4u;
        // 0x30a2f8: 0x70102a  slt         $v0, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A2FCu;
        goto label_30a2fc;
    }
    ctx->pc = 0x30A2F4u;
    {
        const bool branch_taken_0x30a2f4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x30A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A2F4u;
        // 0x30a2f8: 0x70102a  slt         $v0, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a2f4) {
            ctx->pc = 0x30A304u;
            goto label_30a304;
        }
    }
    ctx->pc = 0x30A2FCu;
label_30a2fc:
    // 0x30a2fc: 0x16e00007  bnez        $s7, . + 4 + (0x7 << 2)
label_30a300:
    if (ctx->pc == 0x30A300u) {
        ctx->pc = 0x30A304u;
        goto label_30a304;
    }
    ctx->pc = 0x30A2FCu;
    {
        const bool branch_taken_0x30a2fc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a2fc) {
            ctx->pc = 0x30A31Cu;
            goto label_30a31c;
        }
    }
    ctx->pc = 0x30A304u;
label_30a304:
    // 0x30a304: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_30a308:
    if (ctx->pc == 0x30A308u) {
        ctx->pc = 0x30A30Cu;
        goto label_30a30c;
    }
    ctx->pc = 0x30A304u;
    {
        const bool branch_taken_0x30a304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a304) {
            ctx->pc = 0x30A31Cu;
            goto label_30a31c;
        }
    }
    ctx->pc = 0x30A30Cu;
label_30a30c:
    // 0x30a30c: 0x1603000a  bne         $s0, $v1, . + 4 + (0xA << 2)
label_30a310:
    if (ctx->pc == 0x30A310u) {
        ctx->pc = 0x30A314u;
        goto label_30a314;
    }
    ctx->pc = 0x30A30Cu;
    {
        const bool branch_taken_0x30a30c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x30a30c) {
            ctx->pc = 0x30A338u;
            goto label_30a338;
        }
    }
    ctx->pc = 0x30A314u;
label_30a314:
    // 0x30a314: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_30a318:
    if (ctx->pc == 0x30A318u) {
        ctx->pc = 0x30A31Cu;
        goto label_30a31c;
    }
    ctx->pc = 0x30A314u;
    {
        const bool branch_taken_0x30a314 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a314) {
            ctx->pc = 0x30A338u;
            goto label_30a338;
        }
    }
    ctx->pc = 0x30A31Cu;
label_30a31c:
    // 0x30a31c: 0xdfa50000  ld          $a1, 0x0($sp)
    ctx->pc = 0x30a31cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30a320:
    // 0x30a320: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30a320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30a324:
    // 0x30a324: 0xc0bed6c  jal         func_2FB5B0
label_30a328:
    if (ctx->pc == 0x30A328u) {
        ctx->pc = 0x30A32Cu;
        goto label_30a32c;
    }
    ctx->pc = 0x30A324u;
    SET_GPR_U32(ctx, 31, 0x30A32Cu);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30A324u, 0x30A32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A32Cu;
label_30a32c:
    // 0x30a32c: 0x10000398  b           . + 4 + (0x398 << 2)
label_30a330:
    if (ctx->pc == 0x30A330u) {
        ctx->pc = 0x30A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A32Cu;
        // 0x30a330: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A334u;
        goto label_30a334;
    }
    ctx->pc = 0x30A32Cu;
    {
        const bool branch_taken_0x30a32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A32Cu;
        // 0x30a330: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a32c) {
            ctx->pc = 0x30B190u;
            goto label_30b190;
        }
    }
    ctx->pc = 0x30A334u;
label_30a334:
    // 0x30a334: 0x0  nop
    ctx->pc = 0x30a334u;
    // NOP
label_30a338:
    // 0x30a338: 0x6c10023  bgez        $s6, . + 4 + (0x23 << 2)
label_30a33c:
    if (ctx->pc == 0x30A33Cu) {
        ctx->pc = 0x30A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A338u;
        // 0x30a33c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A340u;
        goto label_30a340;
    }
    ctx->pc = 0x30A338u;
    {
        const bool branch_taken_0x30a338 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x30A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A338u;
        // 0x30a33c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a338) {
            ctx->pc = 0x30A3C8u;
            goto label_30a3c8;
        }
    }
    ctx->pc = 0x30A340u;
label_30a340:
    // 0x30a340: 0x3c02433f  lui         $v0, 0x433F
    ctx->pc = 0x30a340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17215 << 16));
label_30a344:
    // 0x30a344: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30a344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30a348:
    // 0x30a348: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x30a348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_30a34c:
    // 0x30a34c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_30a350:
    if (ctx->pc == 0x30A350u) {
        ctx->pc = 0x30A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A34Cu;
        // 0x30a350: 0x3c023fef  lui         $v0, 0x3FEF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16367 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A354u;
        goto label_30a354;
    }
    ctx->pc = 0x30A34Cu;
    {
        const bool branch_taken_0x30a34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a34c) {
            ctx->pc = 0x30A350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A34Cu;
            // 0x30a350: 0x3c023fef  lui         $v0, 0x3FEF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16367 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A360u;
            goto label_30a360;
        }
    }
    ctx->pc = 0x30A354u;
label_30a354:
    // 0x30a354: 0x1000001b  b           . + 4 + (0x1B << 2)
label_30a358:
    if (ctx->pc == 0x30A358u) {
        ctx->pc = 0x30A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A354u;
        // 0x30a358: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A35Cu;
        goto label_30a35c;
    }
    ctx->pc = 0x30A354u;
    {
        const bool branch_taken_0x30a354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A354u;
        // 0x30a358: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a354) {
            ctx->pc = 0x30A3C4u;
            goto label_30a3c4;
        }
    }
    ctx->pc = 0x30A35Cu;
label_30a35c:
    // 0x30a35c: 0x0  nop
    ctx->pc = 0x30a35cu;
    // NOP
label_30a360:
    // 0x30a360: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30a360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30a364:
    // 0x30a364: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x30a364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_30a368:
    // 0x30a368: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_30a36c:
    if (ctx->pc == 0x30A36Cu) {
        ctx->pc = 0x30A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A368u;
        // 0x30a36c: 0x101503  sra         $v0, $s0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A370u;
        goto label_30a370;
    }
    ctx->pc = 0x30A368u;
    {
        const bool branch_taken_0x30a368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A368u;
        // 0x30a36c: 0x101503  sra         $v0, $s0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a368) {
            ctx->pc = 0x30A3C8u;
            goto label_30a3c8;
        }
    }
    ctx->pc = 0x30A370u;
label_30a370:
    // 0x30a370: 0x2452fc01  addiu       $s2, $v0, -0x3FF
    ctx->pc = 0x30a370u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966273));
label_30a374:
    // 0x30a374: 0x2a430015  slti        $v1, $s2, 0x15
    ctx->pc = 0x30a374u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)21) ? 1 : 0);
label_30a378:
    // 0x30a378: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_30a37c:
    if (ctx->pc == 0x30A37Cu) {
        ctx->pc = 0x30A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A378u;
        // 0x30a37c: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A380u;
        goto label_30a380;
    }
    ctx->pc = 0x30A378u;
    {
        const bool branch_taken_0x30a378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A378u;
        // 0x30a37c: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a378) {
            ctx->pc = 0x30A3A0u;
            goto label_30a3a0;
        }
    }
    ctx->pc = 0x30A380u;
label_30a380:
    // 0x30a380: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x30a380u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_30a384:
    // 0x30a384: 0x458806  srlv        $s1, $a1, $v0
    ctx->pc = 0x30a384u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_30a388:
    // 0x30a388: 0x511004  sllv        $v0, $s1, $v0
    ctx->pc = 0x30a388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
label_30a38c:
    // 0x30a38c: 0x1445000e  bne         $v0, $a1, . + 4 + (0xE << 2)
label_30a390:
    if (ctx->pc == 0x30A390u) {
        ctx->pc = 0x30A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A38Cu;
        // 0x30a390: 0x32230001  andi        $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A394u;
        goto label_30a394;
    }
    ctx->pc = 0x30A38Cu;
    {
        const bool branch_taken_0x30a38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x30A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A38Cu;
        // 0x30a390: 0x32230001  andi        $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a38c) {
            ctx->pc = 0x30A3C8u;
            goto label_30a3c8;
        }
    }
    ctx->pc = 0x30A394u;
label_30a394:
    // 0x30a394: 0x1000000a  b           . + 4 + (0xA << 2)
label_30a398:
    if (ctx->pc == 0x30A398u) {
        ctx->pc = 0x30A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A394u;
        // 0x30a398: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A39Cu;
        goto label_30a39c;
    }
    ctx->pc = 0x30A394u;
    {
        const bool branch_taken_0x30a394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A394u;
        // 0x30a398: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a394) {
            ctx->pc = 0x30A3C0u;
            goto label_30a3c0;
        }
    }
    ctx->pc = 0x30A39Cu;
label_30a39c:
    // 0x30a39c: 0x0  nop
    ctx->pc = 0x30a39cu;
    // NOP
label_30a3a0:
    // 0x30a3a0: 0x14a00057  bnez        $a1, . + 4 + (0x57 << 2)
label_30a3a4:
    if (ctx->pc == 0x30A3A4u) {
        ctx->pc = 0x30A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3A0u;
        // 0x30a3a4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A3A8u;
        goto label_30a3a8;
    }
    ctx->pc = 0x30A3A0u;
    {
        const bool branch_taken_0x30a3a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3A0u;
        // 0x30a3a4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a3a0) {
            ctx->pc = 0x30A500u;
            goto label_30a500;
        }
    }
    ctx->pc = 0x30A3A8u;
label_30a3a8:
    // 0x30a3a8: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x30a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_30a3ac:
    // 0x30a3ac: 0x508807  srav        $s1, $s0, $v0
    ctx->pc = 0x30a3acu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
label_30a3b0:
    // 0x30a3b0: 0x511004  sllv        $v0, $s1, $v0
    ctx->pc = 0x30a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
label_30a3b4:
    // 0x30a3b4: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
label_30a3b8:
    if (ctx->pc == 0x30A3B8u) {
        ctx->pc = 0x30A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3B4u;
        // 0x30a3b8: 0x32230001  andi        $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A3BCu;
        goto label_30a3bc;
    }
    ctx->pc = 0x30A3B4u;
    {
        const bool branch_taken_0x30a3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x30A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3B4u;
        // 0x30a3b8: 0x32230001  andi        $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a3b4) {
            ctx->pc = 0x30A3C8u;
            goto label_30a3c8;
        }
    }
    ctx->pc = 0x30A3BCu;
label_30a3bc:
    // 0x30a3bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30a3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30a3c0:
    // 0x30a3c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30a3c4:
    // 0x30a3c4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x30a3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_30a3c8:
    // 0x30a3c8: 0x14a0004d  bnez        $a1, . + 4 + (0x4D << 2)
label_30a3cc:
    if (ctx->pc == 0x30A3CCu) {
        ctx->pc = 0x30A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3C8u;
        // 0x30a3cc: 0x3c027ff0  lui         $v0, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A3D0u;
        goto label_30a3d0;
    }
    ctx->pc = 0x30A3C8u;
    {
        const bool branch_taken_0x30a3c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3C8u;
        // 0x30a3cc: 0x3c027ff0  lui         $v0, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a3c8) {
            ctx->pc = 0x30A500u;
            goto label_30a500;
        }
    }
    ctx->pc = 0x30A3D0u;
label_30a3d0:
    // 0x30a3d0: 0x16020023  bne         $s0, $v0, . + 4 + (0x23 << 2)
label_30a3d4:
    if (ctx->pc == 0x30A3D4u) {
        ctx->pc = 0x30A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3D0u;
        // 0x30a3d4: 0x3c023ff0  lui         $v0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A3D8u;
        goto label_30a3d8;
    }
    ctx->pc = 0x30A3D0u;
    {
        const bool branch_taken_0x30a3d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x30A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3D0u;
        // 0x30a3d4: 0x3c023ff0  lui         $v0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a3d0) {
            ctx->pc = 0x30A460u;
            goto label_30a460;
        }
    }
    ctx->pc = 0x30A3D8u;
label_30a3d8:
    // 0x30a3d8: 0x3c02c010  lui         $v0, 0xC010
    ctx->pc = 0x30a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49168 << 16));
label_30a3dc:
    // 0x30a3dc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x30a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_30a3e0:
    // 0x30a3e0: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x30a3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
label_30a3e4:
    // 0x30a3e4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_30a3e8:
    if (ctx->pc == 0x30A3E8u) {
        ctx->pc = 0x30A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3E4u;
        // 0x30a3e8: 0x3c023fef  lui         $v0, 0x3FEF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16367 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A3ECu;
        goto label_30a3ec;
    }
    ctx->pc = 0x30A3E4u;
    {
        const bool branch_taken_0x30a3e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a3e4) {
            ctx->pc = 0x30A3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A3E4u;
            // 0x30a3e8: 0x3c023fef  lui         $v0, 0x3FEF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16367 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A408u;
            goto label_30a408;
        }
    }
    ctx->pc = 0x30A3ECu;
label_30a3ec:
    // 0x30a3ec: 0xdfa40000  ld          $a0, 0x0($sp)
    ctx->pc = 0x30a3ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30a3f0:
    // 0x30a3f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30a3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30a3f4:
    // 0x30a3f4: 0xc0bed82  jal         func_2FB608
label_30a3f8:
    if (ctx->pc == 0x30A3F8u) {
        ctx->pc = 0x30A3FCu;
        goto label_30a3fc;
    }
    ctx->pc = 0x30A3F4u;
    SET_GPR_U32(ctx, 31, 0x30A3FCu);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30A3F4u, 0x30A3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A3FCu;
label_30a3fc:
    // 0x30a3fc: 0x10000364  b           . + 4 + (0x364 << 2)
label_30a400:
    if (ctx->pc == 0x30A400u) {
        ctx->pc = 0x30A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3FCu;
        // 0x30a400: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A404u;
        goto label_30a404;
    }
    ctx->pc = 0x30A3FCu;
    {
        const bool branch_taken_0x30a3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A3FCu;
        // 0x30a400: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a3fc) {
            ctx->pc = 0x30B190u;
            goto label_30b190;
        }
    }
    ctx->pc = 0x30A404u;
label_30a404:
    // 0x30a404: 0x0  nop
    ctx->pc = 0x30a404u;
    // NOP
label_30a408:
    // 0x30a408: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30a408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30a40c:
    // 0x30a40c: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x30a40cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_30a410:
    // 0x30a410: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_30a414:
    if (ctx->pc == 0x30A414u) {
        ctx->pc = 0x30A418u;
        goto label_30a418;
    }
    ctx->pc = 0x30A410u;
    {
        const bool branch_taken_0x30a410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a410) {
            ctx->pc = 0x30A430u;
            goto label_30a430;
        }
    }
    ctx->pc = 0x30A418u;
label_30a418:
    // 0x30a418: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x30a418u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30a41c:
    // 0x30a41c: 0x663035c  bgezl       $s3, . + 4 + (0x35C << 2)
label_30a420:
    if (ctx->pc == 0x30A420u) {
        ctx->pc = 0x30A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A41Cu;
        // 0x30a420: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A424u;
        goto label_30a424;
    }
    ctx->pc = 0x30A41Cu;
    {
        const bool branch_taken_0x30a41c = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x30a41c) {
            ctx->pc = 0x30A420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A41Cu;
            // 0x30a420: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B190u;
            goto label_30b190;
        }
    }
    ctx->pc = 0x30A424u;
label_30a424:
    // 0x30a424: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30a424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a428:
    // 0x30a428: 0x10000359  b           . + 4 + (0x359 << 2)
label_30a42c:
    if (ctx->pc == 0x30A42Cu) {
        ctx->pc = 0x30A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A428u;
        // 0x30a42c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A430u;
        goto label_30a430;
    }
    ctx->pc = 0x30A428u;
    {
        const bool branch_taken_0x30a428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A428u;
        // 0x30a42c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a428) {
            ctx->pc = 0x30B190u;
            goto label_30b190;
        }
    }
    ctx->pc = 0x30A430u;
label_30a430:
    // 0x30a430: 0x0  nop
    ctx->pc = 0x30a430u;
    // NOP
label_30a434:
    // 0x30a434: 0x0  nop
    ctx->pc = 0x30a434u;
    // NOP
label_30a438:
    // 0x30a438: 0x0  nop
    ctx->pc = 0x30a438u;
    // NOP
label_30a43c:
    // 0x30a43c: 0x0  nop
    ctx->pc = 0x30a43cu;
    // NOP
label_30a440:
    // 0x30a440: 0x661fff8  bgez        $s3, . + 4 + (-0x8 << 2)
label_30a444:
    if (ctx->pc == 0x30A444u) {
        ctx->pc = 0x30A448u;
        goto label_30a448;
    }
    ctx->pc = 0x30A440u;
    {
        const bool branch_taken_0x30a440 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x30a440) {
            ctx->pc = 0x30A424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a424;
        }
    }
    ctx->pc = 0x30A448u;
label_30a448:
    // 0x30a448: 0xdfa50000  ld          $a1, 0x0($sp)
    ctx->pc = 0x30a448u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30a44c:
    // 0x30a44c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30a44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a450:
    // 0x30a450: 0xc0bed82  jal         func_2FB608
label_30a454:
    if (ctx->pc == 0x30A454u) {
        ctx->pc = 0x30A458u;
        goto label_30a458;
    }
    ctx->pc = 0x30A450u;
    SET_GPR_U32(ctx, 31, 0x30A458u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30A450u, 0x30A458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A458u;
label_30a458:
    // 0x30a458: 0x1000034d  b           . + 4 + (0x34D << 2)
label_30a45c:
    if (ctx->pc == 0x30A45Cu) {
        ctx->pc = 0x30A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A458u;
        // 0x30a45c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A460u;
        goto label_30a460;
    }
    ctx->pc = 0x30A458u;
    {
        const bool branch_taken_0x30a458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A458u;
        // 0x30a45c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a458) {
            ctx->pc = 0x30B190u;
            goto label_30b190;
        }
    }
    ctx->pc = 0x30A460u;
label_30a460:
    // 0x30a460: 0x1602000f  bne         $s0, $v0, . + 4 + (0xF << 2)
label_30a464:
    if (ctx->pc == 0x30A464u) {
        ctx->pc = 0x30A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A460u;
        // 0x30a464: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A468u;
        goto label_30a468;
    }
    ctx->pc = 0x30A460u;
    {
        const bool branch_taken_0x30a460 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x30A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A460u;
        // 0x30a464: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a460) {
            ctx->pc = 0x30A4A0u;
            goto label_30a4a0;
        }
    }
    ctx->pc = 0x30A468u;
label_30a468:
    // 0x30a468: 0x6610009  bgez        $s3, . + 4 + (0x9 << 2)
label_30a46c:
    if (ctx->pc == 0x30A46Cu) {
        ctx->pc = 0x30A470u;
        goto label_30a470;
    }
    ctx->pc = 0x30A468u;
    {
        const bool branch_taken_0x30a468 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x30a468) {
            ctx->pc = 0x30A490u;
            goto label_30a490;
        }
    }
    ctx->pc = 0x30A470u;
label_30a470:
    // 0x30a470: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x30a470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_30a474:
    // 0x30a474: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x30a474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
label_30a478:
    // 0x30a478: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x30a478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30a47c:
    // 0x30a47c: 0xc0bee3e  jal         func_2FB8F8
label_30a480:
    if (ctx->pc == 0x30A480u) {
        ctx->pc = 0x30A484u;
        goto label_30a484;
    }
    ctx->pc = 0x30A47Cu;
    SET_GPR_U32(ctx, 31, 0x30A484u);
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x30A47Cu, 0x30A484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A484u;
label_30a484:
    // 0x30a484: 0x10000342  b           . + 4 + (0x342 << 2)
label_30a488:
    if (ctx->pc == 0x30A488u) {
        ctx->pc = 0x30A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A484u;
        // 0x30a488: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A48Cu;
        goto label_30a48c;
    }
    ctx->pc = 0x30A484u;
    {
        const bool branch_taken_0x30a484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A484u;
        // 0x30a488: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a484) {
            ctx->pc = 0x30B190u;
            goto label_30b190;
        }
    }
    ctx->pc = 0x30A48Cu;
label_30a48c:
    // 0x30a48c: 0x0  nop
    ctx->pc = 0x30a48cu;
    // NOP
label_30a490:
    // 0x30a490: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x30a490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30a494:
    // 0x30a494: 0x1000033e  b           . + 4 + (0x33E << 2)
label_30a498:
    if (ctx->pc == 0x30A498u) {
        ctx->pc = 0x30A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A494u;
        // 0x30a498: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A49Cu;
        goto label_30a49c;
    }
    ctx->pc = 0x30A494u;
    {
        const bool branch_taken_0x30a494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A494u;
        // 0x30a498: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a494) {
            ctx->pc = 0x30B190u;
            goto label_30b190;
        }
    }
    ctx->pc = 0x30A49Cu;
label_30a49c:
    // 0x30a49c: 0x0  nop
    ctx->pc = 0x30a49cu;
    // NOP
label_30a4a0:
    // 0x30a4a0: 0x56620007  bnel        $s3, $v0, . + 4 + (0x7 << 2)
label_30a4a4:
    if (ctx->pc == 0x30A4A4u) {
        ctx->pc = 0x30A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A4A0u;
        // 0x30a4a4: 0x3c023fe0  lui         $v0, 0x3FE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A4A8u;
        goto label_30a4a8;
    }
    ctx->pc = 0x30A4A0u;
    {
        const bool branch_taken_0x30a4a0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x30a4a0) {
            ctx->pc = 0x30A4A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A4A0u;
            // 0x30a4a4: 0x3c023fe0  lui         $v0, 0x3FE0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A4C0u;
            goto label_30a4c0;
        }
    }
    ctx->pc = 0x30A4A8u;
label_30a4a8:
    // 0x30a4a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30a4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30a4ac:
    // 0x30a4ac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30a4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30a4b0:
    // 0x30a4b0: 0xc0bed9c  jal         func_2FB670
label_30a4b4:
    if (ctx->pc == 0x30A4B4u) {
        ctx->pc = 0x30A4B8u;
        goto label_30a4b8;
    }
    ctx->pc = 0x30A4B0u;
    SET_GPR_U32(ctx, 31, 0x30A4B8u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30A4B0u, 0x30A4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A4B8u;
label_30a4b8:
    // 0x30a4b8: 0x10000335  b           . + 4 + (0x335 << 2)
label_30a4bc:
    if (ctx->pc == 0x30A4BCu) {
        ctx->pc = 0x30A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A4B8u;
        // 0x30a4bc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A4C0u;
        goto label_30a4c0;
    }
    ctx->pc = 0x30A4B8u;
    {
        const bool branch_taken_0x30a4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A4B8u;
        // 0x30a4bc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a4b8) {
            ctx->pc = 0x30B190u;
            goto label_30b190;
        }
    }
    ctx->pc = 0x30A4C0u;
label_30a4c0:
    // 0x30a4c0: 0x1662000f  bne         $s3, $v0, . + 4 + (0xF << 2)
label_30a4c4:
    if (ctx->pc == 0x30A4C4u) {
        ctx->pc = 0x30A4C8u;
        goto label_30a4c8;
    }
    ctx->pc = 0x30A4C0u;
    {
        const bool branch_taken_0x30a4c0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x30a4c0) {
            ctx->pc = 0x30A500u;
            goto label_30a500;
        }
    }
    ctx->pc = 0x30A4C8u;
label_30a4c8:
    // 0x30a4c8: 0x6c0000d  bltz        $s6, . + 4 + (0xD << 2)
label_30a4cc:
    if (ctx->pc == 0x30A4CCu) {
        ctx->pc = 0x30A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A4C8u;
        // 0x30a4cc: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A4D0u;
        goto label_30a4d0;
    }
    ctx->pc = 0x30A4C8u;
    {
        const bool branch_taken_0x30a4c8 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x30A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A4C8u;
        // 0x30a4cc: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a4c8) {
            ctx->pc = 0x30A500u;
            goto label_30a500;
        }
    }
    ctx->pc = 0x30A4D0u;
label_30a4d0:
    // 0x30a4d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30a4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30a4d4:
    // 0x30a4d4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x30a4d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_30a4d8:
    // 0x30a4d8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x30a4d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30a4dc:
    // 0x30a4dc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x30a4dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_30a4e0:
    // 0x30a4e0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x30a4e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_30a4e4:
    // 0x30a4e4: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x30a4e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_30a4e8:
    // 0x30a4e8: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x30a4e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_30a4ec:
    // 0x30a4ec: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x30a4ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_30a4f0:
    // 0x30a4f0: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x30a4f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_30a4f4:
    // 0x30a4f4: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x30a4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_30a4f8:
    // 0x30a4f8: 0x80c2c70  j           func_30B1C0
label_30a4fc:
    if (ctx->pc == 0x30A4FCu) {
        ctx->pc = 0x30A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A4F8u;
        // 0x30a4fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A500u;
        goto label_30a500;
    }
    ctx->pc = 0x30A4F8u;
    ctx->pc = 0x30A4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A4F8u;
    // 0x30a4fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B1C0u;
    goto label_30b1c0;
    ctx->pc = 0x30A500u;
label_30a500:
    // 0x30a500: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30a500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30a504:
    // 0x30a504: 0xc0c3808  jal         func_30E020
label_30a508:
    if (ctx->pc == 0x30A508u) {
        ctx->pc = 0x30A50Cu;
        goto label_30a50c;
    }
    ctx->pc = 0x30A504u;
    SET_GPR_U32(ctx, 31, 0x30A50Cu);
    ctx->pc = 0x30E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E020u, 0x30A504u, 0x30A50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A50Cu;
label_30a50c:
    // 0x30a50c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x30a50cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a510:
    // 0x30a510: 0x56e0002f  bnel        $s7, $zero, . + 4 + (0x2F << 2)
label_30a514:
    if (ctx->pc == 0x30A514u) {
        ctx->pc = 0x30A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A510u;
        // 0x30a514: 0x16b7c2  srl         $s6, $s6, 31 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 22), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A518u;
        goto label_30a518;
    }
    ctx->pc = 0x30A510u;
    {
        const bool branch_taken_0x30a510 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a510) {
            ctx->pc = 0x30A514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A510u;
            // 0x30a514: 0x16b7c2  srl         $s6, $s6, 31 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 22), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A5D0u;
            goto label_30a5d0;
        }
    }
    ctx->pc = 0x30A518u;
label_30a518:
    // 0x30a518: 0x3c027ff0  lui         $v0, 0x7FF0
    ctx->pc = 0x30a518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
label_30a51c:
    // 0x30a51c: 0x12a20005  beq         $s5, $v0, . + 4 + (0x5 << 2)
label_30a520:
    if (ctx->pc == 0x30A520u) {
        ctx->pc = 0x30A524u;
        goto label_30a524;
    }
    ctx->pc = 0x30A51Cu;
    {
        const bool branch_taken_0x30a51c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x30a51c) {
            ctx->pc = 0x30A534u;
            goto label_30a534;
        }
    }
    ctx->pc = 0x30A524u;
label_30a524:
    // 0x30a524: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_30a528:
    if (ctx->pc == 0x30A528u) {
        ctx->pc = 0x30A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A524u;
        // 0x30a528: 0x3c023ff0  lui         $v0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A52Cu;
        goto label_30a52c;
    }
    ctx->pc = 0x30A524u;
    {
        const bool branch_taken_0x30a524 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A524u;
        // 0x30a528: 0x3c023ff0  lui         $v0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a524) {
            ctx->pc = 0x30A534u;
            goto label_30a534;
        }
    }
    ctx->pc = 0x30A52Cu;
label_30a52c:
    // 0x30a52c: 0x56a20028  bnel        $s5, $v0, . + 4 + (0x28 << 2)
label_30a530:
    if (ctx->pc == 0x30A530u) {
        ctx->pc = 0x30A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A52Cu;
        // 0x30a530: 0x16b7c2  srl         $s6, $s6, 31 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 22), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A534u;
        goto label_30a534;
    }
    ctx->pc = 0x30A52Cu;
    {
        const bool branch_taken_0x30a52c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x30a52c) {
            ctx->pc = 0x30A530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A52Cu;
            // 0x30a530: 0x16b7c2  srl         $s6, $s6, 31 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 22), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A5D0u;
            goto label_30a5d0;
        }
    }
    ctx->pc = 0x30A534u;
label_30a534:
    // 0x30a534: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x30a534u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_30a538:
    // 0x30a538: 0x6610007  bgez        $s3, . + 4 + (0x7 << 2)
label_30a53c:
    if (ctx->pc == 0x30A53Cu) {
        ctx->pc = 0x30A540u;
        goto label_30a540;
    }
    ctx->pc = 0x30A538u;
    {
        const bool branch_taken_0x30a538 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x30a538) {
            ctx->pc = 0x30A558u;
            goto label_30a558;
        }
    }
    ctx->pc = 0x30A540u;
label_30a540:
    // 0x30a540: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x30a540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_30a544:
    // 0x30a544: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x30a544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
label_30a548:
    // 0x30a548: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30a548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30a54c:
    // 0x30a54c: 0xc0bee3e  jal         func_2FB8F8
label_30a550:
    if (ctx->pc == 0x30A550u) {
        ctx->pc = 0x30A554u;
        goto label_30a554;
    }
    ctx->pc = 0x30A54Cu;
    SET_GPR_U32(ctx, 31, 0x30A554u);
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x30A54Cu, 0x30A554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A554u;
label_30a554:
    // 0x30a554: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30a554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a558:
    // 0x30a558: 0x6c10019  bgez        $s6, . + 4 + (0x19 << 2)
label_30a55c:
    if (ctx->pc == 0x30A55Cu) {
        ctx->pc = 0x30A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A558u;
        // 0x30a55c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A560u;
        goto label_30a560;
    }
    ctx->pc = 0x30A558u;
    {
        const bool branch_taken_0x30a558 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x30A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A558u;
        // 0x30a55c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a558) {
            ctx->pc = 0x30A5C0u;
            goto label_30a5c0;
        }
    }
    ctx->pc = 0x30A560u;
label_30a560:
    // 0x30a560: 0x3c02c010  lui         $v0, 0xC010
    ctx->pc = 0x30a560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49168 << 16));
label_30a564:
    // 0x30a564: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x30a564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_30a568:
    // 0x30a568: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30a568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_30a56c:
    // 0x30a56c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_30a570:
    if (ctx->pc == 0x30A570u) {
        ctx->pc = 0x30A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A56Cu;
        // 0x30a570: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A574u;
        goto label_30a574;
    }
    ctx->pc = 0x30A56Cu;
    {
        const bool branch_taken_0x30a56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A56Cu;
        // 0x30a570: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a56c) {
            ctx->pc = 0x30A5A0u;
            goto label_30a5a0;
        }
    }
    ctx->pc = 0x30A574u;
label_30a574:
    // 0x30a574: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30a574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30a578:
    // 0x30a578: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30a578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30a57c:
    // 0x30a57c: 0xc0bed82  jal         func_2FB608
label_30a580:
    if (ctx->pc == 0x30A580u) {
        ctx->pc = 0x30A584u;
        goto label_30a584;
    }
    ctx->pc = 0x30A57Cu;
    SET_GPR_U32(ctx, 31, 0x30A584u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30A57Cu, 0x30A584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A584u;
label_30a584:
    // 0x30a584: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30a584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a588:
    // 0x30a588: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30a588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30a58c:
    // 0x30a58c: 0xc0bee3e  jal         func_2FB8F8
label_30a590:
    if (ctx->pc == 0x30A590u) {
        ctx->pc = 0x30A594u;
        goto label_30a594;
    }
    ctx->pc = 0x30A58Cu;
    SET_GPR_U32(ctx, 31, 0x30A594u);
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x30A58Cu, 0x30A594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A594u;
label_30a594:
    // 0x30a594: 0x10000009  b           . + 4 + (0x9 << 2)
label_30a598:
    if (ctx->pc == 0x30A598u) {
        ctx->pc = 0x30A59Cu;
        goto label_30a59c;
    }
    ctx->pc = 0x30A594u;
    {
        const bool branch_taken_0x30a594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a594) {
            ctx->pc = 0x30A5BCu;
            goto label_30a5bc;
        }
    }
    ctx->pc = 0x30A59Cu;
label_30a59c:
    // 0x30a59c: 0x0  nop
    ctx->pc = 0x30a59cu;
    // NOP
label_30a5a0:
    // 0x30a5a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a5a4:
    // 0x30a5a4: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
label_30a5a8:
    if (ctx->pc == 0x30A5A8u) {
        ctx->pc = 0x30A5ACu;
        goto label_30a5ac;
    }
    ctx->pc = 0x30A5A4u;
    {
        const bool branch_taken_0x30a5a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x30a5a4) {
            ctx->pc = 0x30A5C0u;
            goto label_30a5c0;
        }
    }
    ctx->pc = 0x30A5ACu;
label_30a5ac:
    // 0x30a5ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30a5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30a5b0:
    // 0x30a5b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30a5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a5b4:
    // 0x30a5b4: 0xc0bed82  jal         func_2FB608
label_30a5b8:
    if (ctx->pc == 0x30A5B8u) {
        ctx->pc = 0x30A5BCu;
        goto label_30a5bc;
    }
    ctx->pc = 0x30A5B4u;
    SET_GPR_U32(ctx, 31, 0x30A5BCu);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30A5B4u, 0x30A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A5BCu;
label_30a5bc:
    // 0x30a5bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30a5bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a5c0:
    // 0x30a5c0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x30a5c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30a5c4:
    // 0x30a5c4: 0x100002f2  b           . + 4 + (0x2F2 << 2)
label_30a5c8:
    if (ctx->pc == 0x30A5C8u) {
        ctx->pc = 0x30A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A5C4u;
        // 0x30a5c8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A5CCu;
        goto label_30a5cc;
    }
    ctx->pc = 0x30A5C4u;
    {
        const bool branch_taken_0x30a5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A5C4u;
        // 0x30a5c8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a5c4) {
            ctx->pc = 0x30B190u;
            goto label_30b190;
        }
    }
    ctx->pc = 0x30A5CCu;
label_30a5cc:
    // 0x30a5cc: 0x0  nop
    ctx->pc = 0x30a5ccu;
    // NOP
label_30a5d0:
    // 0x30a5d0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x30a5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_30a5d4:
    // 0x30a5d4: 0x26c2ffff  addiu       $v0, $s6, -0x1
    ctx->pc = 0x30a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_30a5d8:
    // 0x30a5d8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x30a5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_30a5dc:
    // 0x30a5dc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_30a5e0:
    if (ctx->pc == 0x30A5E0u) {
        ctx->pc = 0x30A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A5DCu;
        // 0x30a5e0: 0xafb60018  sw          $s6, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A5E4u;
        goto label_30a5e4;
    }
    ctx->pc = 0x30A5DCu;
    {
        const bool branch_taken_0x30a5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A5DCu;
        // 0x30a5e0: 0xafb60018  sw          $s6, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a5dc) {
            ctx->pc = 0x30A610u;
            goto label_30a610;
        }
    }
    ctx->pc = 0x30A5E4u;
label_30a5e4:
    // 0x30a5e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30a5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30a5e8:
    // 0x30a5e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30a5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30a5ec:
    // 0x30a5ec: 0xc0bed82  jal         func_2FB608
label_30a5f0:
    if (ctx->pc == 0x30A5F0u) {
        ctx->pc = 0x30A5F4u;
        goto label_30a5f4;
    }
    ctx->pc = 0x30A5ECu;
    SET_GPR_U32(ctx, 31, 0x30A5F4u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30A5ECu, 0x30A5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A5F4u;
label_30a5f4:
    // 0x30a5f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30a5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a5f8:
    // 0x30a5f8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30a5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30a5fc:
    // 0x30a5fc: 0xc0bee3e  jal         func_2FB8F8
label_30a600:
    if (ctx->pc == 0x30A600u) {
        ctx->pc = 0x30A604u;
        goto label_30a604;
    }
    ctx->pc = 0x30A5FCu;
    SET_GPR_U32(ctx, 31, 0x30A604u);
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x30A5FCu, 0x30A604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A604u;
label_30a604:
    // 0x30a604: 0x100002e2  b           . + 4 + (0x2E2 << 2)
label_30a608:
    if (ctx->pc == 0x30A608u) {
        ctx->pc = 0x30A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A604u;
        // 0x30a608: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A60Cu;
        goto label_30a60c;
    }
    ctx->pc = 0x30A604u;
    {
        const bool branch_taken_0x30a604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A604u;
        // 0x30a608: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a604) {
            ctx->pc = 0x30B190u;
            goto label_30b190;
        }
    }
    ctx->pc = 0x30A60Cu;
label_30a60c:
    // 0x30a60c: 0x0  nop
    ctx->pc = 0x30a60cu;
    // NOP
label_30a610:
    // 0x30a610: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x30a610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
label_30a614:
    // 0x30a614: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x30a614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_30a618:
    // 0x30a618: 0x50400067  beql        $v0, $zero, . + 4 + (0x67 << 2)
label_30a61c:
    if (ctx->pc == 0x30A61Cu) {
        ctx->pc = 0x30A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A618u;
        // 0x30a61c: 0x3c10000f  lui         $s0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A620u;
        goto label_30a620;
    }
    ctx->pc = 0x30A618u;
    {
        const bool branch_taken_0x30a618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a618) {
            ctx->pc = 0x30A61Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A618u;
            // 0x30a61c: 0x3c10000f  lui         $s0, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)15 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A7B8u;
            goto label_30a7b8;
        }
    }
    ctx->pc = 0x30A620u;
label_30a620:
    // 0x30a620: 0x3c0243f0  lui         $v0, 0x43F0
    ctx->pc = 0x30a620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
label_30a624:
    // 0x30a624: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x30a624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_30a628:
    // 0x30a628: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_30a62c:
    if (ctx->pc == 0x30A62Cu) {
        ctx->pc = 0x30A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A628u;
        // 0x30a62c: 0x3c023fef  lui         $v0, 0x3FEF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16367 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A630u;
        goto label_30a630;
    }
    ctx->pc = 0x30A628u;
    {
        const bool branch_taken_0x30a628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A628u;
        // 0x30a62c: 0x3c023fef  lui         $v0, 0x3FEF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16367 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a628) {
            ctx->pc = 0x30A650u;
            goto label_30a650;
        }
    }
    ctx->pc = 0x30A630u;
label_30a630:
    // 0x30a630: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30a630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30a634:
    // 0x30a634: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x30a634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_30a638:
    // 0x30a638: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_30a63c:
    if (ctx->pc == 0x30A63Cu) {
        ctx->pc = 0x30A640u;
        goto label_30a640;
    }
    ctx->pc = 0x30A638u;
    {
        const bool branch_taken_0x30a638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a638) {
            ctx->pc = 0x30A67Cu;
            goto label_30a67c;
        }
    }
    ctx->pc = 0x30A640u;
label_30a640:
    // 0x30a640: 0x661ff78  bgez        $s3, . + 4 + (-0x88 << 2)
label_30a644:
    if (ctx->pc == 0x30A644u) {
        ctx->pc = 0x30A648u;
        goto label_30a648;
    }
    ctx->pc = 0x30A640u;
    {
        const bool branch_taken_0x30a640 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x30a640) {
            ctx->pc = 0x30A424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a424;
        }
    }
    ctx->pc = 0x30A648u;
label_30a648:
    // 0x30a648: 0x1000000f  b           . + 4 + (0xF << 2)
label_30a64c:
    if (ctx->pc == 0x30A64Cu) {
        ctx->pc = 0x30A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A648u;
        // 0x30a64c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A650u;
        goto label_30a650;
    }
    ctx->pc = 0x30A648u;
    {
        const bool branch_taken_0x30a648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A648u;
        // 0x30a64c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a648) {
            ctx->pc = 0x30A688u;
            goto label_30a688;
        }
    }
    ctx->pc = 0x30A650u;
label_30a650:
    // 0x30a650: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x30a650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_30a654:
    // 0x30a654: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x30a654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_30a658:
    // 0x30a658: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_30a65c:
    if (ctx->pc == 0x30A65Cu) {
        ctx->pc = 0x30A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A658u;
        // 0x30a65c: 0x3c023ff0  lui         $v0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A660u;
        goto label_30a660;
    }
    ctx->pc = 0x30A658u;
    {
        const bool branch_taken_0x30a658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A658u;
        // 0x30a65c: 0x3c023ff0  lui         $v0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a658) {
            ctx->pc = 0x30A670u;
            goto label_30a670;
        }
    }
    ctx->pc = 0x30A660u;
label_30a660:
    // 0x30a660: 0x661ff70  bgez        $s3, . + 4 + (-0x90 << 2)
label_30a664:
    if (ctx->pc == 0x30A664u) {
        ctx->pc = 0x30A668u;
        goto label_30a668;
    }
    ctx->pc = 0x30A660u;
    {
        const bool branch_taken_0x30a660 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x30a660) {
            ctx->pc = 0x30A424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a424;
        }
    }
    ctx->pc = 0x30A668u;
label_30a668:
    // 0x30a668: 0x10000007  b           . + 4 + (0x7 << 2)
label_30a66c:
    if (ctx->pc == 0x30A66Cu) {
        ctx->pc = 0x30A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A668u;
        // 0x30a66c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A670u;
        goto label_30a670;
    }
    ctx->pc = 0x30A668u;
    {
        const bool branch_taken_0x30a668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A668u;
        // 0x30a66c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a668) {
            ctx->pc = 0x30A688u;
            goto label_30a688;
        }
    }
    ctx->pc = 0x30A670u;
label_30a670:
    // 0x30a670: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x30a670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_30a674:
    // 0x30a674: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_30a678:
    if (ctx->pc == 0x30A678u) {
        ctx->pc = 0x30A67Cu;
        goto label_30a67c;
    }
    ctx->pc = 0x30A674u;
    {
        const bool branch_taken_0x30a674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a674) {
            ctx->pc = 0x30A698u;
            goto label_30a698;
        }
    }
    ctx->pc = 0x30A67Cu;
label_30a67c:
    // 0x30a67c: 0x1a60ff69  blez        $s3, . + 4 + (-0x97 << 2)
label_30a680:
    if (ctx->pc == 0x30A680u) {
        ctx->pc = 0x30A684u;
        goto label_30a684;
    }
    ctx->pc = 0x30A67Cu;
    {
        const bool branch_taken_0x30a67c = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x30a67c) {
            ctx->pc = 0x30A424u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30a424;
        }
    }
    ctx->pc = 0x30A684u;
label_30a684:
    // 0x30a684: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30a684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30a688:
    // 0x30a688: 0xdc42aed8  ld          $v0, -0x5128($v0)
    ctx->pc = 0x30a688u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294946520)));
label_30a68c:
    // 0x30a68c: 0x100002c0  b           . + 4 + (0x2C0 << 2)
label_30a690:
    if (ctx->pc == 0x30A690u) {
        ctx->pc = 0x30A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A68Cu;
        // 0x30a690: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A694u;
        goto label_30a694;
    }
    ctx->pc = 0x30A68Cu;
    {
        const bool branch_taken_0x30a68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A68Cu;
        // 0x30a690: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a68c) {
            ctx->pc = 0x30B190u;
            goto label_30b190;
        }
    }
    ctx->pc = 0x30A694u;
label_30a694:
    // 0x30a694: 0x0  nop
    ctx->pc = 0x30a694u;
    // NOP
label_30a698:
    // 0x30a698: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x30a698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_30a69c:
    // 0x30a69c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x30a69cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_30a6a0:
    // 0x30a6a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30a6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30a6a4:
    // 0x30a6a4: 0xc0bed82  jal         func_2FB608
label_30a6a8:
    if (ctx->pc == 0x30A6A8u) {
        ctx->pc = 0x30A6ACu;
        goto label_30a6ac;
    }
    ctx->pc = 0x30A6A4u;
    SET_GPR_U32(ctx, 31, 0x30A6ACu);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30A6A4u, 0x30A6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A6ACu;
label_30a6ac:
    // 0x30a6ac: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x30a6acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a6b0:
    // 0x30a6b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30a6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a6b4:
    // 0x30a6b4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x30a6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30a6b8:
    // 0x30a6b8: 0xc0bed9c  jal         func_2FB670
label_30a6bc:
    if (ctx->pc == 0x30A6BCu) {
        ctx->pc = 0x30A6C0u;
        goto label_30a6c0;
    }
    ctx->pc = 0x30A6B8u;
    SET_GPR_U32(ctx, 31, 0x30A6C0u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30A6B8u, 0x30A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A6C0u;
label_30a6c0:
    // 0x30a6c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30a6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30a6c4:
    // 0x30a6c4: 0x3405ff40  ori         $a1, $zero, 0xFF40
    ctx->pc = 0x30a6c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65344);
label_30a6c8:
    // 0x30a6c8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x30a6c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_30a6cc:
    // 0x30a6cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30a6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a6d0:
    // 0x30a6d0: 0xc0bed9c  jal         func_2FB670
label_30a6d4:
    if (ctx->pc == 0x30A6D4u) {
        ctx->pc = 0x30A6D8u;
        goto label_30a6d8;
    }
    ctx->pc = 0x30A6D0u;
    SET_GPR_U32(ctx, 31, 0x30A6D8u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30A6D0u, 0x30A6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A6D8u;
label_30a6d8:
    // 0x30a6d8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30a6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_30a6dc:
    // 0x30a6dc: 0xdc24aef0  ld          $a0, -0x5110($at)
    ctx->pc = 0x30a6dcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 1), 4294946544)));
label_30a6e0:
    // 0x30a6e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30a6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a6e4:
    // 0x30a6e4: 0xc0bed82  jal         func_2FB608
label_30a6e8:
    if (ctx->pc == 0x30A6E8u) {
        ctx->pc = 0x30A6ECu;
        goto label_30a6ec;
    }
    ctx->pc = 0x30A6E4u;
    SET_GPR_U32(ctx, 31, 0x30A6ECu);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30A6E4u, 0x30A6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A6ECu;
label_30a6ec:
    // 0x30a6ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30a6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30a6f0:
    // 0x30a6f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30a6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a6f4:
    // 0x30a6f4: 0xc0bed9c  jal         func_2FB670
label_30a6f8:
    if (ctx->pc == 0x30A6F8u) {
        ctx->pc = 0x30A6FCu;
        goto label_30a6fc;
    }
    ctx->pc = 0x30A6F4u;
    SET_GPR_U32(ctx, 31, 0x30A6FCu);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30A6F4u, 0x30A6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A6FCu;
label_30a6fc:
    // 0x30a6fc: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x30a6fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
label_30a700:
    // 0x30a700: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x30a700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
label_30a704:
    // 0x30a704: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30a704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a708:
    // 0x30a708: 0xc0bed82  jal         func_2FB608
label_30a70c:
    if (ctx->pc == 0x30A70Cu) {
        ctx->pc = 0x30A710u;
        goto label_30a710;
    }
    ctx->pc = 0x30A708u;
    SET_GPR_U32(ctx, 31, 0x30A710u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30A708u, 0x30A710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A710u;
label_30a710:
    // 0x30a710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30a710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30a714:
    // 0x30a714: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30a714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a718:
    // 0x30a718: 0xc0bed9c  jal         func_2FB670
label_30a71c:
    if (ctx->pc == 0x30A71Cu) {
        ctx->pc = 0x30A720u;
        goto label_30a720;
    }
    ctx->pc = 0x30A718u;
    SET_GPR_U32(ctx, 31, 0x30A720u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30A718u, 0x30A720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A720u;
label_30a720:
    // 0x30a720: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30a720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30a724:
    // 0x30a724: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30a724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_30a728:
    // 0x30a728: 0xdc25aef8  ld          $a1, -0x5108($at)
    ctx->pc = 0x30a728u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294946552)));
label_30a72c:
    // 0x30a72c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30a72cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a730:
    // 0x30a730: 0xc0bed9c  jal         func_2FB670
label_30a734:
    if (ctx->pc == 0x30A734u) {
        ctx->pc = 0x30A738u;
        goto label_30a738;
    }
    ctx->pc = 0x30A730u;
    SET_GPR_U32(ctx, 31, 0x30A738u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30A730u, 0x30A738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A738u;
label_30a738:
    // 0x30a738: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30a738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30a73c:
    // 0x30a73c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30a73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_30a740:
    // 0x30a740: 0xdc25af00  ld          $a1, -0x5100($at)
    ctx->pc = 0x30a740u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294946560)));
label_30a744:
    // 0x30a744: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x30a744u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a748:
    // 0x30a748: 0xc0bed9c  jal         func_2FB670
label_30a74c:
    if (ctx->pc == 0x30A74Cu) {
        ctx->pc = 0x30A750u;
        goto label_30a750;
    }
    ctx->pc = 0x30A748u;
    SET_GPR_U32(ctx, 31, 0x30A750u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30A748u, 0x30A750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A750u;
label_30a750:
    // 0x30a750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30a750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30a754:
    // 0x30a754: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30a754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_30a758:
    // 0x30a758: 0xdc25af08  ld          $a1, -0x50F8($at)
    ctx->pc = 0x30a758u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294946568)));
label_30a75c:
    // 0x30a75c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30a75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a760:
    // 0x30a760: 0xc0bed9c  jal         func_2FB670
label_30a764:
    if (ctx->pc == 0x30A764u) {
        ctx->pc = 0x30A768u;
        goto label_30a768;
    }
    ctx->pc = 0x30A760u;
    SET_GPR_U32(ctx, 31, 0x30A768u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30A760u, 0x30A768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A768u;
label_30a768:
    // 0x30a768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30a768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30a76c:
    // 0x30a76c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30a76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a770:
    // 0x30a770: 0xc0bed82  jal         func_2FB608
label_30a774:
    if (ctx->pc == 0x30A774u) {
        ctx->pc = 0x30A778u;
        goto label_30a778;
    }
    ctx->pc = 0x30A770u;
    SET_GPR_U32(ctx, 31, 0x30A778u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30A770u, 0x30A778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A778u;
label_30a778:
    // 0x30a778: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30a778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30a77c:
    // 0x30a77c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x30a77cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a780:
    // 0x30a780: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30a780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a784:
    // 0x30a784: 0xc0bed6c  jal         func_2FB5B0
label_30a788:
    if (ctx->pc == 0x30A788u) {
        ctx->pc = 0x30A78Cu;
        goto label_30a78c;
    }
    ctx->pc = 0x30A784u;
    SET_GPR_U32(ctx, 31, 0x30A78Cu);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30A784u, 0x30A78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A78Cu;
label_30a78c:
    // 0x30a78c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30a78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30a790:
    // 0x30a790: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x30a790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_30a794:
    // 0x30a794: 0x439824  and         $s3, $v0, $v1
    ctx->pc = 0x30a794u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_30a798:
    // 0x30a798: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30a798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30a79c:
    // 0x30a79c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x30a79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30a7a0:
    // 0x30a7a0: 0xc0bed82  jal         func_2FB608
label_30a7a4:
    if (ctx->pc == 0x30A7A4u) {
        ctx->pc = 0x30A7A8u;
        goto label_30a7a8;
    }
    ctx->pc = 0x30A7A0u;
    SET_GPR_U32(ctx, 31, 0x30A7A8u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30A7A0u, 0x30A7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A7A8u;
label_30a7a8:
    // 0x30a7a8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30a7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30a7ac:
    // 0x30a7ac: 0x10000134  b           . + 4 + (0x134 << 2)
label_30a7b0:
    if (ctx->pc == 0x30A7B0u) {
        ctx->pc = 0x30A7B4u;
        goto label_30a7b4;
    }
    ctx->pc = 0x30A7ACu;
    {
        const bool branch_taken_0x30a7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a7ac) {
            ctx->pc = 0x30AC80u;
            goto label_30ac80;
        }
    }
    ctx->pc = 0x30A7B4u;
label_30a7b4:
    // 0x30a7b4: 0x0  nop
    ctx->pc = 0x30a7b4u;
    // NOP
label_30a7b8:
    // 0x30a7b8: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x30a7b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
label_30a7bc:
    // 0x30a7bc: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x30a7bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_30a7c0:
    // 0x30a7c0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_30a7c4:
    if (ctx->pc == 0x30A7C4u) {
        ctx->pc = 0x30A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A7C0u;
        // 0x30a7c4: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A7C8u;
        goto label_30a7c8;
    }
    ctx->pc = 0x30A7C0u;
    {
        const bool branch_taken_0x30a7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A7C0u;
        // 0x30a7c4: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a7c0) {
            ctx->pc = 0x30A7E8u;
            goto label_30a7e8;
        }
    }
    ctx->pc = 0x30A7C8u;
label_30a7c8:
    // 0x30a7c8: 0x34058680  ori         $a1, $zero, 0x8680
    ctx->pc = 0x30a7c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34432);
label_30a7cc:
    // 0x30a7cc: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x30a7ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_30a7d0:
    // 0x30a7d0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x30a7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_30a7d4:
    // 0x30a7d4: 0x2402ffcb  addiu       $v0, $zero, -0x35
    ctx->pc = 0x30a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967243));
label_30a7d8:
    // 0x30a7d8: 0xc0bed9c  jal         func_2FB670
label_30a7dc:
    if (ctx->pc == 0x30A7DCu) {
        ctx->pc = 0x30A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A7D8u;
        // 0x30a7dc: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A7E0u;
        goto label_30a7e0;
    }
    ctx->pc = 0x30A7D8u;
    SET_GPR_U32(ctx, 31, 0x30A7E0u);
    ctx->pc = 0x30A7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A7D8u;
    // 0x30a7dc: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30A7D8u, 0x30A7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A7E0u;
label_30a7e0:
    // 0x30a7e0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x30a7e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a7e4:
    // 0x30a7e4: 0x2a83f  dsra32      $s5, $v0, 0
    ctx->pc = 0x30a7e4u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 2) >> (32 + 0));
label_30a7e8:
    // 0x30a7e8: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x30a7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_30a7ec:
    // 0x30a7ec: 0x151d03  sra         $v1, $s5, 20
    ctx->pc = 0x30a7ecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 21), 20));
label_30a7f0:
    // 0x30a7f0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x30a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_30a7f4:
    // 0x30a7f4: 0x2b08824  and         $s1, $s5, $s0
    ctx->pc = 0x30a7f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) & GPR_U64(ctx, 16));
label_30a7f8:
    // 0x30a7f8: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x30a7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_30a7fc:
    // 0x30a7fc: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x30a7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
label_30a800:
    // 0x30a800: 0x3442988e  ori         $v0, $v0, 0x988E
    ctx->pc = 0x30a800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39054);
label_30a804:
    // 0x30a804: 0x2485fc01  addiu       $a1, $a0, -0x3FF
    ctx->pc = 0x30a804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966273));
label_30a808:
    // 0x30a808: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x30a808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_30a80c:
    // 0x30a80c: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x30a80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
label_30a810:
    // 0x30a810: 0x223a825  or          $s5, $s1, $v1
    ctx->pc = 0x30a810u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_30a814:
    // 0x30a814: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_30a818:
    if (ctx->pc == 0x30A818u) {
        ctx->pc = 0x30A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A814u;
        // 0x30a818: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A81Cu;
        goto label_30a81c;
    }
    ctx->pc = 0x30A814u;
    {
        const bool branch_taken_0x30a814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A814u;
        // 0x30a818: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a814) {
            ctx->pc = 0x30A844u;
            goto label_30a844;
        }
    }
    ctx->pc = 0x30A81Cu;
label_30a81c:
    // 0x30a81c: 0x3c02000b  lui         $v0, 0xB
    ctx->pc = 0x30a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11 << 16));
label_30a820:
    // 0x30a820: 0x3442b679  ori         $v0, $v0, 0xB679
    ctx->pc = 0x30a820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46713);
label_30a824:
    // 0x30a824: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x30a824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_30a828:
    // 0x30a828: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_30a82c:
    if (ctx->pc == 0x30A82Cu) {
        ctx->pc = 0x30A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A828u;
        // 0x30a82c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A830u;
        goto label_30a830;
    }
    ctx->pc = 0x30A828u;
    {
        const bool branch_taken_0x30a828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A828u;
        // 0x30a82c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a828) {
            ctx->pc = 0x30A844u;
            goto label_30a844;
        }
    }
    ctx->pc = 0x30A830u;
label_30a830:
    // 0x30a830: 0x2484fc02  addiu       $a0, $a0, -0x3FE
    ctx->pc = 0x30a830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966274));
label_30a834:
    // 0x30a834: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x30a834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
label_30a838:
    // 0x30a838: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x30a838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
label_30a83c:
    // 0x30a83c: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x30a83cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_30a840:
    // 0x30a840: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30a840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30a844:
    // 0x30a844: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x30a844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_30a848:
    // 0x30a848: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x30a848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_30a84c:
    // 0x30a84c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30a84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_30a850:
    // 0x30a850: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x30a850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_30a854:
    // 0x30a854: 0x15203c  dsll32      $a0, $s5, 0
    ctx->pc = 0x30a854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 0));
label_30a858:
    // 0x30a858: 0x44f025  or          $fp, $v0, $a0
    ctx->pc = 0x30a858u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_30a85c:
    // 0x30a85c: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x30a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_30a860:
    // 0x30a860: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x30a860u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_30a864:
    // 0x30a864: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x30a864u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_30a868:
    // 0x30a868: 0xde10add0  ld          $s0, -0x5230($s0)
    ctx->pc = 0x30a868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 16), 4294946256)));
label_30a86c:
    // 0x30a86c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x30a86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_30a870:
    // 0x30a870: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30a870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30a874:
    // 0x30a874: 0xc0bed82  jal         func_2FB608
label_30a878:
    if (ctx->pc == 0x30A878u) {
        ctx->pc = 0x30A878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A874u;
        // 0x30a878: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A87Cu;
        goto label_30a87c;
    }
    ctx->pc = 0x30A874u;
    SET_GPR_U32(ctx, 31, 0x30A87Cu);
    ctx->pc = 0x30A878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A874u;
    // 0x30a878: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30A874u, 0x30A87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A87Cu;
label_30a87c:
    // 0x30a87c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x30a87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_30a880:
    // 0x30a880: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30a880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30a884:
    // 0x30a884: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x30a884u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a888:
    // 0x30a888: 0xc0bed6c  jal         func_2FB5B0
label_30a88c:
    if (ctx->pc == 0x30A88Cu) {
        ctx->pc = 0x30A890u;
        goto label_30a890;
    }
    ctx->pc = 0x30A888u;
    SET_GPR_U32(ctx, 31, 0x30A890u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30A888u, 0x30A890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A890u;
label_30a890:
    // 0x30a890: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x30a890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_30a894:
    // 0x30a894: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x30a894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
label_30a898:
    // 0x30a898: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30a898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a89c:
    // 0x30a89c: 0xc0bee3e  jal         func_2FB8F8
label_30a8a0:
    if (ctx->pc == 0x30A8A0u) {
        ctx->pc = 0x30A8A4u;
        goto label_30a8a4;
    }
    ctx->pc = 0x30A89Cu;
    SET_GPR_U32(ctx, 31, 0x30A8A4u);
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x30A89Cu, 0x30A8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A8A4u;
label_30a8a4:
    // 0x30a8a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30a8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30a8a8:
    // 0x30a8a8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x30a8a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a8ac:
    // 0x30a8ac: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x30a8acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30a8b0:
    // 0x30a8b0: 0xc0bed9c  jal         func_2FB670
label_30a8b4:
    if (ctx->pc == 0x30A8B4u) {
        ctx->pc = 0x30A8B8u;
        goto label_30a8b8;
    }
    ctx->pc = 0x30A8B0u;
    SET_GPR_U32(ctx, 31, 0x30A8B8u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30A8B0u, 0x30A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A8B8u;
label_30a8b8:
    // 0x30a8b8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x30a8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_30a8bc:
    // 0x30a8bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30a8bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a8c0:
    // 0x30a8c0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x30a8c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30a8c4:
    // 0x30a8c4: 0x13983c  dsll32      $s3, $s3, 0
    ctx->pc = 0x30a8c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 0));
label_30a8c8:
    // 0x30a8c8: 0x738824  and         $s1, $v1, $s3
    ctx->pc = 0x30a8c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
label_30a8cc:
    // 0x30a8cc: 0x151043  sra         $v0, $s5, 1
    ctx->pc = 0x30a8ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
label_30a8d0:
    // 0x30a8d0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x30a8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_30a8d4:
    // 0x30a8d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30a8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_30a8d8:
    // 0x30a8d8: 0x122480  sll         $a0, $s2, 18
    ctx->pc = 0x30a8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 18));
label_30a8dc:
    // 0x30a8dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_30a8e0:
    // 0x30a8e0: 0x3c010008  lui         $at, 0x8
    ctx->pc = 0x30a8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8 << 16));
label_30a8e4:
    // 0x30a8e4: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x30a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_30a8e8:
    // 0x30a8e8: 0x2b83c  dsll32      $s7, $v0, 0
    ctx->pc = 0x30a8e8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 0));
label_30a8ec:
    // 0x30a8ec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x30a8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_30a8f0:
    // 0x30a8f0: 0x34158010  ori         $s5, $zero, 0x8010
    ctx->pc = 0x30a8f0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
label_30a8f4:
    // 0x30a8f4: 0x15abfc  dsll32      $s5, $s5, 15
    ctx->pc = 0x30a8f4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 15));
label_30a8f8:
    // 0x30a8f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30a8f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30a8fc:
    // 0x30a8fc: 0xc0bed82  jal         func_2FB608
label_30a900:
    if (ctx->pc == 0x30A900u) {
        ctx->pc = 0x30A904u;
        goto label_30a904;
    }
    ctx->pc = 0x30A8FCu;
    SET_GPR_U32(ctx, 31, 0x30A904u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30A8FCu, 0x30A904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A904u;
label_30a904:
    // 0x30a904: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x30a904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_30a908:
    // 0x30a908: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30a908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a90c:
    // 0x30a90c: 0xc0bed82  jal         func_2FB608
label_30a910:
    if (ctx->pc == 0x30A910u) {
        ctx->pc = 0x30A914u;
        goto label_30a914;
    }
    ctx->pc = 0x30A90Cu;
    SET_GPR_U32(ctx, 31, 0x30A914u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30A90Cu, 0x30A914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A914u;
label_30a914:
    // 0x30a914: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30a914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30a918:
    // 0x30a918: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x30a918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_30a91c:
    // 0x30a91c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x30a91cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a920:
    // 0x30a920: 0xc0bed9c  jal         func_2FB670
label_30a924:
    if (ctx->pc == 0x30A924u) {
        ctx->pc = 0x30A928u;
        goto label_30a928;
    }
    ctx->pc = 0x30A920u;
    SET_GPR_U32(ctx, 31, 0x30A928u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30A920u, 0x30A928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A928u;
label_30a928:
    // 0x30a928: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30a928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30a92c:
    // 0x30a92c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30a92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a930:
    // 0x30a930: 0xc0bed82  jal         func_2FB608
label_30a934:
    if (ctx->pc == 0x30A934u) {
        ctx->pc = 0x30A938u;
        goto label_30a938;
    }
    ctx->pc = 0x30A930u;
    SET_GPR_U32(ctx, 31, 0x30A938u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30A930u, 0x30A938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A938u;
label_30a938:
    // 0x30a938: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30a938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30a93c:
    // 0x30a93c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x30a93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_30a940:
    // 0x30a940: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30a940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a944:
    // 0x30a944: 0xc0bed9c  jal         func_2FB670
label_30a948:
    if (ctx->pc == 0x30A948u) {
        ctx->pc = 0x30A94Cu;
        goto label_30a94c;
    }
    ctx->pc = 0x30A944u;
    SET_GPR_U32(ctx, 31, 0x30A94Cu);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30A944u, 0x30A94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A94Cu;
label_30a94c:
    // 0x30a94c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30a94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30a950:
    // 0x30a950: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30a950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a954:
    // 0x30a954: 0xc0bed82  jal         func_2FB608
label_30a958:
    if (ctx->pc == 0x30A958u) {
        ctx->pc = 0x30A95Cu;
        goto label_30a95c;
    }
    ctx->pc = 0x30A954u;
    SET_GPR_U32(ctx, 31, 0x30A95Cu);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30A954u, 0x30A95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A95Cu;
label_30a95c:
    // 0x30a95c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30a95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30a960:
    // 0x30a960: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30a960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a964:
    // 0x30a964: 0xc0bed9c  jal         func_2FB670
label_30a968:
    if (ctx->pc == 0x30A968u) {
        ctx->pc = 0x30A96Cu;
        goto label_30a96c;
    }
    ctx->pc = 0x30A964u;
    SET_GPR_U32(ctx, 31, 0x30A96Cu);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30A964u, 0x30A96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A96Cu;
label_30a96c:
    // 0x30a96c: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x30a96cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_30a970:
    // 0x30a970: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30a970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a974:
    // 0x30a974: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30a974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30a978:
    // 0x30a978: 0xc0bed9c  jal         func_2FB670
label_30a97c:
    if (ctx->pc == 0x30A97Cu) {
        ctx->pc = 0x30A980u;
        goto label_30a980;
    }
    ctx->pc = 0x30A978u;
    SET_GPR_U32(ctx, 31, 0x30A980u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30A978u, 0x30A980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A980u;
label_30a980:
    // 0x30a980: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x30a980u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a984:
    // 0x30a984: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30a984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30a988:
    // 0x30a988: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x30a988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30a98c:
    // 0x30a98c: 0xc0bed9c  jal         func_2FB670
label_30a990:
    if (ctx->pc == 0x30A990u) {
        ctx->pc = 0x30A994u;
        goto label_30a994;
    }
    ctx->pc = 0x30A98Cu;
    SET_GPR_U32(ctx, 31, 0x30A994u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30A98Cu, 0x30A994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A994u;
label_30a994:
    // 0x30a994: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30a994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30a998:
    // 0x30a998: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30a998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_30a99c:
    // 0x30a99c: 0xdc25af10  ld          $a1, -0x50F0($at)
    ctx->pc = 0x30a99cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294946576)));
label_30a9a0:
    // 0x30a9a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30a9a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a9a4:
    // 0x30a9a4: 0xc0bed9c  jal         func_2FB670
label_30a9a8:
    if (ctx->pc == 0x30A9A8u) {
        ctx->pc = 0x30A9ACu;
        goto label_30a9ac;
    }
    ctx->pc = 0x30A9A4u;
    SET_GPR_U32(ctx, 31, 0x30A9ACu);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30A9A4u, 0x30A9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A9ACu;
label_30a9ac:
    // 0x30a9ac: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30a9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_30a9b0:
    // 0x30a9b0: 0xdc25af18  ld          $a1, -0x50E8($at)
    ctx->pc = 0x30a9b0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294946584)));
label_30a9b4:
    // 0x30a9b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30a9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a9b8:
    // 0x30a9b8: 0xc0bed6c  jal         func_2FB5B0
label_30a9bc:
    if (ctx->pc == 0x30A9BCu) {
        ctx->pc = 0x30A9C0u;
        goto label_30a9c0;
    }
    ctx->pc = 0x30A9B8u;
    SET_GPR_U32(ctx, 31, 0x30A9C0u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30A9B8u, 0x30A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A9C0u;
label_30a9c0:
    // 0x30a9c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30a9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30a9c4:
    // 0x30a9c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30a9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a9c8:
    // 0x30a9c8: 0xc0bed9c  jal         func_2FB670
label_30a9cc:
    if (ctx->pc == 0x30A9CCu) {
        ctx->pc = 0x30A9D0u;
        goto label_30a9d0;
    }
    ctx->pc = 0x30A9C8u;
    SET_GPR_U32(ctx, 31, 0x30A9D0u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30A9C8u, 0x30A9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A9D0u;
label_30a9d0:
    // 0x30a9d0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30a9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_30a9d4:
    // 0x30a9d4: 0xdc25af20  ld          $a1, -0x50E0($at)
    ctx->pc = 0x30a9d4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294946592)));
label_30a9d8:
    // 0x30a9d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30a9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a9dc:
    // 0x30a9dc: 0xc0bed6c  jal         func_2FB5B0
label_30a9e0:
    if (ctx->pc == 0x30A9E0u) {
        ctx->pc = 0x30A9E4u;
        goto label_30a9e4;
    }
    ctx->pc = 0x30A9DCu;
    SET_GPR_U32(ctx, 31, 0x30A9E4u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30A9DCu, 0x30A9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A9E4u;
label_30a9e4:
    // 0x30a9e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30a9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30a9e8:
    // 0x30a9e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30a9e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a9ec:
    // 0x30a9ec: 0xc0bed9c  jal         func_2FB670
label_30a9f0:
    if (ctx->pc == 0x30A9F0u) {
        ctx->pc = 0x30A9F4u;
        goto label_30a9f4;
    }
    ctx->pc = 0x30A9ECu;
    SET_GPR_U32(ctx, 31, 0x30A9F4u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30A9ECu, 0x30A9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A9F4u;
label_30a9f4:
    // 0x30a9f4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30a9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_30a9f8:
    // 0x30a9f8: 0xdc25af28  ld          $a1, -0x50D8($at)
    ctx->pc = 0x30a9f8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294946600)));
label_30a9fc:
    // 0x30a9fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30a9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30aa00:
    // 0x30aa00: 0xc0bed6c  jal         func_2FB5B0
label_30aa04:
    if (ctx->pc == 0x30AA04u) {
        ctx->pc = 0x30AA08u;
        goto label_30aa08;
    }
    ctx->pc = 0x30AA00u;
    SET_GPR_U32(ctx, 31, 0x30AA08u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30AA00u, 0x30AA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AA08u;
label_30aa08:
    // 0x30aa08: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30aa08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30aa0c:
    // 0x30aa0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30aa0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30aa10:
    // 0x30aa10: 0xc0bed9c  jal         func_2FB670
label_30aa14:
    if (ctx->pc == 0x30AA14u) {
        ctx->pc = 0x30AA18u;
        goto label_30aa18;
    }
    ctx->pc = 0x30AA10u;
    SET_GPR_U32(ctx, 31, 0x30AA18u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30AA10u, 0x30AA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AA18u;
label_30aa18:
    // 0x30aa18: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30aa18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_30aa1c:
    // 0x30aa1c: 0xdc25af30  ld          $a1, -0x50D0($at)
    ctx->pc = 0x30aa1cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294946608)));
label_30aa20:
    // 0x30aa20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30aa20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30aa24:
    // 0x30aa24: 0xc0bed6c  jal         func_2FB5B0
label_30aa28:
    if (ctx->pc == 0x30AA28u) {
        ctx->pc = 0x30AA2Cu;
        goto label_30aa2c;
    }
    ctx->pc = 0x30AA24u;
    SET_GPR_U32(ctx, 31, 0x30AA2Cu);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30AA24u, 0x30AA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AA2Cu;
label_30aa2c:
    // 0x30aa2c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30aa2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30aa30:
    // 0x30aa30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30aa30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30aa34:
    // 0x30aa34: 0xc0bed9c  jal         func_2FB670
label_30aa38:
    if (ctx->pc == 0x30AA38u) {
        ctx->pc = 0x30AA3Cu;
        goto label_30aa3c;
    }
    ctx->pc = 0x30AA34u;
    SET_GPR_U32(ctx, 31, 0x30AA3Cu);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30AA34u, 0x30AA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AA3Cu;
label_30aa3c:
    // 0x30aa3c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30aa3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_30aa40:
    // 0x30aa40: 0xdc25af38  ld          $a1, -0x50C8($at)
    ctx->pc = 0x30aa40u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294946616)));
label_30aa44:
    // 0x30aa44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30aa44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30aa48:
    // 0x30aa48: 0xc0bed6c  jal         func_2FB5B0
label_30aa4c:
    if (ctx->pc == 0x30AA4Cu) {
        ctx->pc = 0x30AA50u;
        goto label_30aa50;
    }
    ctx->pc = 0x30AA48u;
    SET_GPR_U32(ctx, 31, 0x30AA50u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30AA48u, 0x30AA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AA50u;
label_30aa50:
    // 0x30aa50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30aa50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30aa54:
    // 0x30aa54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30aa54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30aa58:
    // 0x30aa58: 0xc0bed9c  jal         func_2FB670
label_30aa5c:
    if (ctx->pc == 0x30AA5Cu) {
        ctx->pc = 0x30AA60u;
        goto label_30aa60;
    }
    ctx->pc = 0x30AA58u;
    SET_GPR_U32(ctx, 31, 0x30AA60u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30AA58u, 0x30AA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AA60u;
label_30aa60:
    // 0x30aa60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30aa60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30aa64:
    // 0x30aa64: 0xdfa50008  ld          $a1, 0x8($sp)
    ctx->pc = 0x30aa64u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_30aa68:
    // 0x30aa68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30aa68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30aa6c:
    // 0x30aa6c: 0xc0bed6c  jal         func_2FB5B0
label_30aa70:
    if (ctx->pc == 0x30AA70u) {
        ctx->pc = 0x30AA74u;
        goto label_30aa74;
    }
    ctx->pc = 0x30AA6Cu;
    SET_GPR_U32(ctx, 31, 0x30AA74u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30AA6Cu, 0x30AA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AA74u;
label_30aa74:
    // 0x30aa74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30aa74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30aa78:
    // 0x30aa78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30aa78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30aa7c:
    // 0x30aa7c: 0xc0bed9c  jal         func_2FB670
label_30aa80:
    if (ctx->pc == 0x30AA80u) {
        ctx->pc = 0x30AA84u;
        goto label_30aa84;
    }
    ctx->pc = 0x30AA7Cu;
    SET_GPR_U32(ctx, 31, 0x30AA84u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30AA7Cu, 0x30AA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AA84u;
label_30aa84:
    // 0x30aa84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30aa84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30aa88:
    // 0x30aa88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30aa88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30aa8c:
    // 0x30aa8c: 0xc0bed6c  jal         func_2FB5B0
label_30aa90:
    if (ctx->pc == 0x30AA90u) {
        ctx->pc = 0x30AA94u;
        goto label_30aa94;
    }
    ctx->pc = 0x30AA8Cu;
    SET_GPR_U32(ctx, 31, 0x30AA94u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30AA8Cu, 0x30AA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AA94u;
label_30aa94:
    // 0x30aa94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30aa94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30aa98:
    // 0x30aa98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30aa98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30aa9c:
    // 0x30aa9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30aa9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30aaa0:
    // 0x30aaa0: 0xc0bed9c  jal         func_2FB670
label_30aaa4:
    if (ctx->pc == 0x30AAA4u) {
        ctx->pc = 0x30AAA8u;
        goto label_30aaa8;
    }
    ctx->pc = 0x30AAA0u;
    SET_GPR_U32(ctx, 31, 0x30AAA8u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30AAA0u, 0x30AAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AAA8u;
label_30aaa8:
    // 0x30aaa8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x30aaa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30aaac:
    // 0x30aaac: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x30aaacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30aab0:
    // 0x30aab0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30aab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30aab4:
    // 0x30aab4: 0xc0bed6c  jal         func_2FB5B0
label_30aab8:
    if (ctx->pc == 0x30AAB8u) {
        ctx->pc = 0x30AABCu;
        goto label_30aabc;
    }
    ctx->pc = 0x30AAB4u;
    SET_GPR_U32(ctx, 31, 0x30AABCu);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30AAB4u, 0x30AABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AABCu;
label_30aabc:
    // 0x30aabc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30aabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30aac0:
    // 0x30aac0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30aac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30aac4:
    // 0x30aac4: 0xc0bed6c  jal         func_2FB5B0
label_30aac8:
    if (ctx->pc == 0x30AAC8u) {
        ctx->pc = 0x30AACCu;
        goto label_30aacc;
    }
    ctx->pc = 0x30AAC4u;
    SET_GPR_U32(ctx, 31, 0x30AACCu);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30AAC4u, 0x30AACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AACCu;
label_30aacc:
    // 0x30aacc: 0x53b824  and         $s7, $v0, $s3
    ctx->pc = 0x30aaccu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_30aad0:
    // 0x30aad0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x30aad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_30aad4:
    // 0x30aad4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x30aad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30aad8:
    // 0x30aad8: 0xc0bed82  jal         func_2FB608
label_30aadc:
    if (ctx->pc == 0x30AADCu) {
        ctx->pc = 0x30AAE0u;
        goto label_30aae0;
    }
    ctx->pc = 0x30AAD8u;
    SET_GPR_U32(ctx, 31, 0x30AAE0u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30AAD8u, 0x30AAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AAE0u;
label_30aae0:
    // 0x30aae0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x30aae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30aae4:
    // 0x30aae4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30aae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30aae8:
    // 0x30aae8: 0xc0bed82  jal         func_2FB608
label_30aaec:
    if (ctx->pc == 0x30AAECu) {
        ctx->pc = 0x30AAF0u;
        goto label_30aaf0;
    }
    ctx->pc = 0x30AAE8u;
    SET_GPR_U32(ctx, 31, 0x30AAF0u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30AAE8u, 0x30AAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AAF0u;
label_30aaf0:
    // 0x30aaf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30aaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30aaf4:
    // 0x30aaf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30aaf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30aaf8:
    // 0x30aaf8: 0xc0bed82  jal         func_2FB608
label_30aafc:
    if (ctx->pc == 0x30AAFCu) {
        ctx->pc = 0x30AB00u;
        goto label_30ab00;
    }
    ctx->pc = 0x30AAF8u;
    SET_GPR_U32(ctx, 31, 0x30AB00u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30AAF8u, 0x30AB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AB00u;
label_30ab00:
    // 0x30ab00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30ab00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30ab04:
    // 0x30ab04: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x30ab04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_30ab08:
    // 0x30ab08: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x30ab08u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30ab0c:
    // 0x30ab0c: 0xc0bed9c  jal         func_2FB670
label_30ab10:
    if (ctx->pc == 0x30AB10u) {
        ctx->pc = 0x30AB14u;
        goto label_30ab14;
    }
    ctx->pc = 0x30AB0Cu;
    SET_GPR_U32(ctx, 31, 0x30AB14u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30AB0Cu, 0x30AB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AB14u;
label_30ab14:
    // 0x30ab14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30ab14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30ab18:
    // 0x30ab18: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x30ab18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_30ab1c:
    // 0x30ab1c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x30ab1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30ab20:
    // 0x30ab20: 0xc0bed9c  jal         func_2FB670
label_30ab24:
    if (ctx->pc == 0x30AB24u) {
        ctx->pc = 0x30AB28u;
        goto label_30ab28;
    }
    ctx->pc = 0x30AB20u;
    SET_GPR_U32(ctx, 31, 0x30AB28u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30AB20u, 0x30AB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AB28u;
label_30ab28:
    // 0x30ab28: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x30ab28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_30ab2c:
    // 0x30ab2c: 0xdfa50008  ld          $a1, 0x8($sp)
    ctx->pc = 0x30ab2cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_30ab30:
    // 0x30ab30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30ab30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30ab34:
    // 0x30ab34: 0xc0bed9c  jal         func_2FB670
label_30ab38:
    if (ctx->pc == 0x30AB38u) {
        ctx->pc = 0x30AB3Cu;
        goto label_30ab3c;
    }
    ctx->pc = 0x30AB34u;
    SET_GPR_U32(ctx, 31, 0x30AB3Cu);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30AB34u, 0x30AB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AB3Cu;
label_30ab3c:
    // 0x30ab3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30ab3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30ab40:
    // 0x30ab40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30ab40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30ab44:
    // 0x30ab44: 0xc0bed6c  jal         func_2FB5B0
label_30ab48:
    if (ctx->pc == 0x30AB48u) {
        ctx->pc = 0x30AB4Cu;
        goto label_30ab4c;
    }
    ctx->pc = 0x30AB44u;
    SET_GPR_U32(ctx, 31, 0x30AB4Cu);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30AB44u, 0x30AB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AB4Cu;
label_30ab4c:
    // 0x30ab4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30ab4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30ab50:
    // 0x30ab50: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x30ab50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30ab54:
    // 0x30ab54: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x30ab54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30ab58:
    // 0x30ab58: 0xc0bed6c  jal         func_2FB5B0
label_30ab5c:
    if (ctx->pc == 0x30AB5Cu) {
        ctx->pc = 0x30AB60u;
        goto label_30ab60;
    }
    ctx->pc = 0x30AB58u;
    SET_GPR_U32(ctx, 31, 0x30AB60u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30AB58u, 0x30AB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AB60u;
label_30ab60:
    // 0x30ab60: 0x53b824  and         $s7, $v0, $s3
    ctx->pc = 0x30ab60u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_30ab64:
    // 0x30ab64: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x30ab64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_30ab68:
    // 0x30ab68: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x30ab68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30ab6c:
    // 0x30ab6c: 0xc0bed82  jal         func_2FB608
label_30ab70:
    if (ctx->pc == 0x30AB70u) {
        ctx->pc = 0x30AB74u;
        goto label_30ab74;
    }
    ctx->pc = 0x30AB6Cu;
    SET_GPR_U32(ctx, 31, 0x30AB74u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30AB6Cu, 0x30AB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AB74u;
label_30ab74:
    // 0x30ab74: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30ab74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30ab78:
    // 0x30ab78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30ab78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30ab7c:
    // 0x30ab7c: 0xc0bed82  jal         func_2FB608
label_30ab80:
    if (ctx->pc == 0x30AB80u) {
        ctx->pc = 0x30AB84u;
        goto label_30ab84;
    }
    ctx->pc = 0x30AB7Cu;
    SET_GPR_U32(ctx, 31, 0x30AB84u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30AB7Cu, 0x30AB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AB84u;
label_30ab84:
    // 0x30ab84: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x30ab84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_30ab88:
    // 0x30ab88: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30ab88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_30ab8c:
    // 0x30ab8c: 0xdc25af40  ld          $a1, -0x50C0($at)
    ctx->pc = 0x30ab8cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294946624)));
label_30ab90:
    // 0x30ab90: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x30ab90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30ab94:
    // 0x30ab94: 0xc0bed9c  jal         func_2FB670
label_30ab98:
    if (ctx->pc == 0x30AB98u) {
        ctx->pc = 0x30AB9Cu;
        goto label_30ab9c;
    }
    ctx->pc = 0x30AB94u;
    SET_GPR_U32(ctx, 31, 0x30AB9Cu);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30AB94u, 0x30AB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AB9Cu;
label_30ab9c:
    // 0x30ab9c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x30ab9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_30aba0:
    // 0x30aba0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30aba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_30aba4:
    // 0x30aba4: 0xdc25af48  ld          $a1, -0x50B8($at)
    ctx->pc = 0x30aba4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294946632)));
label_30aba8:
    // 0x30aba8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30aba8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30abac:
    // 0x30abac: 0xc0bed9c  jal         func_2FB670
label_30abb0:
    if (ctx->pc == 0x30ABB0u) {
        ctx->pc = 0x30ABB4u;
        goto label_30abb4;
    }
    ctx->pc = 0x30ABACu;
    SET_GPR_U32(ctx, 31, 0x30ABB4u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30ABACu, 0x30ABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ABB4u;
label_30abb4:
    // 0x30abb4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30abb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30abb8:
    // 0x30abb8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30abb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_30abbc:
    // 0x30abbc: 0xdc25af50  ld          $a1, -0x50B0($at)
    ctx->pc = 0x30abbcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294946640)));
label_30abc0:
    // 0x30abc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30abc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30abc4:
    // 0x30abc4: 0xc0bed9c  jal         func_2FB670
label_30abc8:
    if (ctx->pc == 0x30ABC8u) {
        ctx->pc = 0x30ABCCu;
        goto label_30abcc;
    }
    ctx->pc = 0x30ABC4u;
    SET_GPR_U32(ctx, 31, 0x30ABCCu);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30ABC4u, 0x30ABCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ABCCu;
label_30abcc:
    // 0x30abcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30abccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30abd0:
    // 0x30abd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30abd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30abd4:
    // 0x30abd4: 0xc0bed6c  jal         func_2FB5B0
label_30abd8:
    if (ctx->pc == 0x30ABD8u) {
        ctx->pc = 0x30ABDCu;
        goto label_30abdc;
    }
    ctx->pc = 0x30ABD4u;
    SET_GPR_U32(ctx, 31, 0x30ABDCu);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30ABD4u, 0x30ABDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ABDCu;
label_30abdc:
    // 0x30abdc: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x30abdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_30abe0:
    // 0x30abe0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30abe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30abe4:
    // 0x30abe4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x30abe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_30abe8:
    // 0x30abe8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x30abe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_30abec:
    // 0x30abec: 0xdca5adf0  ld          $a1, -0x5210($a1)
    ctx->pc = 0x30abecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 4294946288)));
label_30abf0:
    // 0x30abf0: 0xc0bed6c  jal         func_2FB5B0
label_30abf4:
    if (ctx->pc == 0x30ABF4u) {
        ctx->pc = 0x30ABF8u;
        goto label_30abf8;
    }
    ctx->pc = 0x30ABF0u;
    SET_GPR_U32(ctx, 31, 0x30ABF8u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30ABF0u, 0x30ABF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ABF8u;
label_30abf8:
    // 0x30abf8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30abf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30abfc:
    // 0x30abfc: 0xc0beeea  jal         func_2FBBA8
label_30ac00:
    if (ctx->pc == 0x30AC00u) {
        ctx->pc = 0x30AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ABFCu;
        // 0x30ac00: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30AC04u;
        goto label_30ac04;
    }
    ctx->pc = 0x30ABFCu;
    SET_GPR_U32(ctx, 31, 0x30AC04u);
    ctx->pc = 0x30AC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ABFCu;
    // 0x30ac00: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x30ABFCu, 0x30AC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AC04u;
label_30ac04:
    // 0x30ac04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30ac04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30ac08:
    // 0x30ac08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30ac08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30ac0c:
    // 0x30ac0c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x30ac0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30ac10:
    // 0x30ac10: 0xc0bed6c  jal         func_2FB5B0
label_30ac14:
    if (ctx->pc == 0x30AC14u) {
        ctx->pc = 0x30AC18u;
        goto label_30ac18;
    }
    ctx->pc = 0x30AC10u;
    SET_GPR_U32(ctx, 31, 0x30AC18u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30AC10u, 0x30AC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AC18u;
label_30ac18:
    // 0x30ac18: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x30ac18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_30ac1c:
    // 0x30ac1c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x30ac1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_30ac20:
    // 0x30ac20: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x30ac20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_30ac24:
    // 0x30ac24: 0xde10ade0  ld          $s0, -0x5220($s0)
    ctx->pc = 0x30ac24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 16), 4294946272)));
label_30ac28:
    // 0x30ac28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30ac28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30ac2c:
    // 0x30ac2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30ac2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30ac30:
    // 0x30ac30: 0xc0bed6c  jal         func_2FB5B0
label_30ac34:
    if (ctx->pc == 0x30AC34u) {
        ctx->pc = 0x30AC38u;
        goto label_30ac38;
    }
    ctx->pc = 0x30AC30u;
    SET_GPR_U32(ctx, 31, 0x30AC38u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30AC30u, 0x30AC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AC38u;
label_30ac38:
    // 0x30ac38: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x30ac38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30ac3c:
    // 0x30ac3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30ac3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30ac40:
    // 0x30ac40: 0xc0bed6c  jal         func_2FB5B0
label_30ac44:
    if (ctx->pc == 0x30AC44u) {
        ctx->pc = 0x30AC48u;
        goto label_30ac48;
    }
    ctx->pc = 0x30AC40u;
    SET_GPR_U32(ctx, 31, 0x30AC48u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30AC40u, 0x30AC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AC48u;
label_30ac48:
    // 0x30ac48: 0x539824  and         $s3, $v0, $s3
    ctx->pc = 0x30ac48u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_30ac4c:
    // 0x30ac4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30ac4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30ac50:
    // 0x30ac50: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x30ac50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30ac54:
    // 0x30ac54: 0xc0bed82  jal         func_2FB608
label_30ac58:
    if (ctx->pc == 0x30AC58u) {
        ctx->pc = 0x30AC5Cu;
        goto label_30ac5c;
    }
    ctx->pc = 0x30AC54u;
    SET_GPR_U32(ctx, 31, 0x30AC5Cu);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30AC54u, 0x30AC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AC5Cu;
label_30ac5c:
    // 0x30ac5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30ac5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30ac60:
    // 0x30ac60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30ac60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30ac64:
    // 0x30ac64: 0xc0bed82  jal         func_2FB608
label_30ac68:
    if (ctx->pc == 0x30AC68u) {
        ctx->pc = 0x30AC6Cu;
        goto label_30ac6c;
    }
    ctx->pc = 0x30AC64u;
    SET_GPR_U32(ctx, 31, 0x30AC6Cu);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30AC64u, 0x30AC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AC6Cu;
label_30ac6c:
    // 0x30ac6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30ac6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30ac70:
    // 0x30ac70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30ac70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30ac74:
    // 0x30ac74: 0xc0bed82  jal         func_2FB608
label_30ac78:
    if (ctx->pc == 0x30AC78u) {
        ctx->pc = 0x30AC7Cu;
        goto label_30ac7c;
    }
    ctx->pc = 0x30AC74u;
    SET_GPR_U32(ctx, 31, 0x30AC7Cu);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30AC74u, 0x30AC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AC7Cu;
label_30ac7c:
    // 0x30ac7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30ac7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30ac80:
    // 0x30ac80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30ac80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30ac84:
    // 0x30ac84: 0xc0bed82  jal         func_2FB608
label_30ac88:
    if (ctx->pc == 0x30AC88u) {
        ctx->pc = 0x30AC8Cu;
        goto label_30ac8c;
    }
    ctx->pc = 0x30AC84u;
    SET_GPR_U32(ctx, 31, 0x30AC8Cu);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30AC84u, 0x30AC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AC8Cu;
label_30ac8c:
    // 0x30ac8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30ac8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30ac90:
    // 0x30ac90: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x30ac90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_30ac94:
    // 0x30ac94: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x30ac94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_30ac98:
    // 0x30ac98: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x30ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_30ac9c:
    // 0x30ac9c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x30ac9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_30aca0:
    // 0x30aca0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x30aca0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_30aca4:
    // 0x30aca4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x30aca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_30aca8:
    // 0x30aca8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30aca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_30acac:
    // 0x30acac: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x30acacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
label_30acb0:
    // 0x30acb0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_30acb4:
    if (ctx->pc == 0x30ACB4u) {
        ctx->pc = 0x30ACB8u;
        goto label_30acb8;
    }
    ctx->pc = 0x30ACB0u;
    {
        const bool branch_taken_0x30acb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30acb0) {
            ctx->pc = 0x30ACC4u;
            goto label_30acc4;
        }
    }
    ctx->pc = 0x30ACB8u;
label_30acb8:
    // 0x30acb8: 0x3402bff0  ori         $v0, $zero, 0xBFF0
    ctx->pc = 0x30acb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
label_30acbc:
    // 0x30acbc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x30acbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_30acc0:
    // 0x30acc0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x30acc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_30acc4:
    // 0x30acc4: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x30acc4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30acc8:
    // 0x30acc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30accc:
    // 0x30accc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30acccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_30acd0:
    // 0x30acd0: 0x628824  and         $s1, $v1, $v0
    ctx->pc = 0x30acd0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_30acd4:
    // 0x30acd4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x30acd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_30acd8:
    // 0x30acd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30acd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30acdc:
    // 0x30acdc: 0xc0bed82  jal         func_2FB608
label_30ace0:
    if (ctx->pc == 0x30ACE0u) {
        ctx->pc = 0x30ACE4u;
        goto label_30ace4;
    }
    ctx->pc = 0x30ACDCu;
    SET_GPR_U32(ctx, 31, 0x30ACE4u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30ACDCu, 0x30ACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ACE4u;
label_30ace4:
    // 0x30ace4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30ace4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30ace8:
    // 0x30ace8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30ace8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30acec:
    // 0x30acec: 0xc0bed9c  jal         func_2FB670
label_30acf0:
    if (ctx->pc == 0x30ACF0u) {
        ctx->pc = 0x30ACF4u;
        goto label_30acf4;
    }
    ctx->pc = 0x30ACECu;
    SET_GPR_U32(ctx, 31, 0x30ACF4u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30ACECu, 0x30ACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ACF4u;
label_30acf4:
    // 0x30acf4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30acf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30acf8:
    // 0x30acf8: 0xdfa40000  ld          $a0, 0x0($sp)
    ctx->pc = 0x30acf8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30acfc:
    // 0x30acfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30acfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30ad00:
    // 0x30ad00: 0xc0bed9c  jal         func_2FB670
label_30ad04:
    if (ctx->pc == 0x30AD04u) {
        ctx->pc = 0x30AD08u;
        goto label_30ad08;
    }
    ctx->pc = 0x30AD00u;
    SET_GPR_U32(ctx, 31, 0x30AD08u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30AD00u, 0x30AD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AD08u;
label_30ad08:
    // 0x30ad08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30ad08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30ad0c:
    // 0x30ad0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30ad0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30ad10:
    // 0x30ad10: 0xc0bed6c  jal         func_2FB5B0
label_30ad14:
    if (ctx->pc == 0x30AD14u) {
        ctx->pc = 0x30AD18u;
        goto label_30ad18;
    }
    ctx->pc = 0x30AD10u;
    SET_GPR_U32(ctx, 31, 0x30AD18u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30AD10u, 0x30AD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AD18u;
label_30ad18:
    // 0x30ad18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30ad18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30ad1c:
    // 0x30ad1c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30ad1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30ad20:
    // 0x30ad20: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x30ad20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30ad24:
    // 0x30ad24: 0xc0bed9c  jal         func_2FB670
label_30ad28:
    if (ctx->pc == 0x30AD28u) {
        ctx->pc = 0x30AD2Cu;
        goto label_30ad2c;
    }
    ctx->pc = 0x30AD24u;
    SET_GPR_U32(ctx, 31, 0x30AD2Cu);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30AD24u, 0x30AD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AD2Cu;
label_30ad2c:
    // 0x30ad2c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30ad2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30ad30:
    // 0x30ad30: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x30ad30u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30ad34:
    // 0x30ad34: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x30ad34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_30ad38:
    // 0x30ad38: 0xc0bed6c  jal         func_2FB5B0
label_30ad3c:
    if (ctx->pc == 0x30AD3Cu) {
        ctx->pc = 0x30AD40u;
        goto label_30ad40;
    }
    ctx->pc = 0x30AD38u;
    SET_GPR_U32(ctx, 31, 0x30AD40u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30AD38u, 0x30AD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AD40u;
label_30ad40:
    // 0x30ad40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30ad40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30ad44:
    // 0x30ad44: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x30ad44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30ad48:
    // 0x30ad48: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x30ad48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_30ad4c:
    // 0x30ad4c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x30ad4cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_30ad50:
    // 0x30ad50: 0x3883f  dsra32      $s1, $v1, 0
    ctx->pc = 0x30ad50u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 3) >> (32 + 0));
label_30ad54:
    // 0x30ad54: 0x3c02408f  lui         $v0, 0x408F
    ctx->pc = 0x30ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16527 << 16));
label_30ad58:
    // 0x30ad58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30ad58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30ad5c:
    // 0x30ad5c: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x30ad5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_30ad60:
    // 0x30ad60: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_30ad64:
    if (ctx->pc == 0x30AD64u) {
        ctx->pc = 0x30AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AD60u;
        // 0x30ad64: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30AD68u;
        goto label_30ad68;
    }
    ctx->pc = 0x30AD60u;
    {
        const bool branch_taken_0x30ad60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AD60u;
        // 0x30ad64: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ad60) {
            ctx->pc = 0x30ADE8u;
            goto label_30ade8;
        }
    }
    ctx->pc = 0x30AD68u;
label_30ad68:
    // 0x30ad68: 0x3c02bf70  lui         $v0, 0xBF70
    ctx->pc = 0x30ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49008 << 16));
label_30ad6c:
    // 0x30ad6c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x30ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_30ad70:
    // 0x30ad70: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30ad70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_30ad74:
    // 0x30ad74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_30ad78:
    if (ctx->pc == 0x30AD78u) {
        ctx->pc = 0x30AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AD74u;
        // 0x30ad78: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30AD7Cu;
        goto label_30ad7c;
    }
    ctx->pc = 0x30AD74u;
    {
        const bool branch_taken_0x30ad74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AD74u;
        // 0x30ad78: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ad74) {
            ctx->pc = 0x30AD90u;
            goto label_30ad90;
        }
    }
    ctx->pc = 0x30AD7Cu;
label_30ad7c:
    // 0x30ad7c: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x30ad7cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_30ad80:
    // 0x30ad80: 0xdc50aee0  ld          $s0, -0x5120($v0)
    ctx->pc = 0x30ad80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4294946528)));
label_30ad84:
    // 0x30ad84: 0x10000032  b           . + 4 + (0x32 << 2)
label_30ad88:
    if (ctx->pc == 0x30AD88u) {
        ctx->pc = 0x30AD8Cu;
        goto label_30ad8c;
    }
    ctx->pc = 0x30AD84u;
    {
        const bool branch_taken_0x30ad84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ad84) {
            ctx->pc = 0x30AE50u;
            goto label_30ae50;
        }
    }
    ctx->pc = 0x30AD8Cu;
label_30ad8c:
    // 0x30ad8c: 0x0  nop
    ctx->pc = 0x30ad8cu;
    // NOP
label_30ad90:
    // 0x30ad90: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30ad90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_30ad94:
    // 0x30ad94: 0xdc25af58  ld          $a1, -0x50A8($at)
    ctx->pc = 0x30ad94u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294946648)));
label_30ad98:
    // 0x30ad98: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30ad98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30ad9c:
    // 0x30ad9c: 0xc0bed6c  jal         func_2FB5B0
label_30ada0:
    if (ctx->pc == 0x30ADA0u) {
        ctx->pc = 0x30ADA4u;
        goto label_30ada4;
    }
    ctx->pc = 0x30AD9Cu;
    SET_GPR_U32(ctx, 31, 0x30ADA4u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30AD9Cu, 0x30ADA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ADA4u;
label_30ada4:
    // 0x30ada4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30ada4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30ada8:
    // 0x30ada8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x30ada8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_30adac:
    // 0x30adac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30adacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30adb0:
    // 0x30adb0: 0xc0bed82  jal         func_2FB608
label_30adb4:
    if (ctx->pc == 0x30ADB4u) {
        ctx->pc = 0x30ADB8u;
        goto label_30adb8;
    }
    ctx->pc = 0x30ADB0u;
    SET_GPR_U32(ctx, 31, 0x30ADB8u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30ADB0u, 0x30ADB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ADB8u;
label_30adb8:
    // 0x30adb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30adb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30adbc:
    // 0x30adbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30adbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30adc0:
    // 0x30adc0: 0xc0beed6  jal         func_2FBB58
label_30adc4:
    if (ctx->pc == 0x30ADC4u) {
        ctx->pc = 0x30ADC8u;
        goto label_30adc8;
    }
    ctx->pc = 0x30ADC0u;
    SET_GPR_U32(ctx, 31, 0x30ADC8u);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x30ADC0u, 0x30ADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ADC8u;
label_30adc8:
    // 0x30adc8: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
label_30adcc:
    if (ctx->pc == 0x30ADCCu) {
        ctx->pc = 0x30ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ADC8u;
        // 0x30adcc: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30ADD0u;
        goto label_30add0;
    }
    ctx->pc = 0x30ADC8u;
    {
        const bool branch_taken_0x30adc8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ADC8u;
        // 0x30adcc: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30adc8) {
            ctx->pc = 0x30AE78u;
            goto label_30ae78;
        }
    }
    ctx->pc = 0x30ADD0u;
label_30add0:
    // 0x30add0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30add0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30add4:
    // 0x30add4: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x30add4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_30add8:
    // 0x30add8: 0xdc50aee0  ld          $s0, -0x5120($v0)
    ctx->pc = 0x30add8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4294946528)));
label_30addc:
    // 0x30addc: 0x1000001c  b           . + 4 + (0x1C << 2)
label_30ade0:
    if (ctx->pc == 0x30ADE0u) {
        ctx->pc = 0x30ADE4u;
        goto label_30ade4;
    }
    ctx->pc = 0x30ADDCu;
    {
        const bool branch_taken_0x30addc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30addc) {
            ctx->pc = 0x30AE50u;
            goto label_30ae50;
        }
    }
    ctx->pc = 0x30ADE4u;
label_30ade4:
    // 0x30ade4: 0x0  nop
    ctx->pc = 0x30ade4u;
    // NOP
label_30ade8:
    // 0x30ade8: 0x3c034090  lui         $v1, 0x4090
    ctx->pc = 0x30ade8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16528 << 16));
label_30adec:
    // 0x30adec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30adecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30adf0:
    // 0x30adf0: 0x3463cbff  ori         $v1, $v1, 0xCBFF
    ctx->pc = 0x30adf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52223);
label_30adf4:
    // 0x30adf4: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x30adf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_30adf8:
    // 0x30adf8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x30adf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_30adfc:
    // 0x30adfc: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_30ae00:
    if (ctx->pc == 0x30AE00u) {
        ctx->pc = 0x30AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ADFCu;
        // 0x30ae00: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30AE04u;
        goto label_30ae04;
    }
    ctx->pc = 0x30ADFCu;
    {
        const bool branch_taken_0x30adfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ADFCu;
        // 0x30ae00: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30adfc) {
            ctx->pc = 0x30AE78u;
            goto label_30ae78;
        }
    }
    ctx->pc = 0x30AE04u;
label_30ae04:
    // 0x30ae04: 0x3c023f6f  lui         $v0, 0x3F6F
    ctx->pc = 0x30ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16239 << 16));
label_30ae08:
    // 0x30ae08: 0x34423400  ori         $v0, $v0, 0x3400
    ctx->pc = 0x30ae08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13312);
label_30ae0c:
    // 0x30ae0c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x30ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_30ae10:
    // 0x30ae10: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30ae10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_30ae14:
    // 0x30ae14: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_30ae18:
    if (ctx->pc == 0x30AE18u) {
        ctx->pc = 0x30AE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE14u;
        // 0x30ae18: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30AE1Cu;
        goto label_30ae1c;
    }
    ctx->pc = 0x30AE14u;
    {
        const bool branch_taken_0x30ae14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30AE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE14u;
        // 0x30ae18: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae14) {
            ctx->pc = 0x30AE48u;
            goto label_30ae48;
        }
    }
    ctx->pc = 0x30AE1Cu;
label_30ae1c:
    // 0x30ae1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30ae1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30ae20:
    // 0x30ae20: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x30ae20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_30ae24:
    // 0x30ae24: 0xc0bed82  jal         func_2FB608
label_30ae28:
    if (ctx->pc == 0x30AE28u) {
        ctx->pc = 0x30AE2Cu;
        goto label_30ae2c;
    }
    ctx->pc = 0x30AE24u;
    SET_GPR_U32(ctx, 31, 0x30AE2Cu);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30AE24u, 0x30AE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AE2Cu;
label_30ae2c:
    // 0x30ae2c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30ae2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30ae30:
    // 0x30ae30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30ae30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30ae34:
    // 0x30ae34: 0xc0beed6  jal         func_2FBB58
label_30ae38:
    if (ctx->pc == 0x30AE38u) {
        ctx->pc = 0x30AE3Cu;
        goto label_30ae3c;
    }
    ctx->pc = 0x30AE34u;
    SET_GPR_U32(ctx, 31, 0x30AE3Cu);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x30AE34u, 0x30AE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AE3Cu;
label_30ae3c:
    // 0x30ae3c: 0x1c40000e  bgtz        $v0, . + 4 + (0xE << 2)
label_30ae40:
    if (ctx->pc == 0x30AE40u) {
        ctx->pc = 0x30AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE3Cu;
        // 0x30ae40: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30AE44u;
        goto label_30ae44;
    }
    ctx->pc = 0x30AE3Cu;
    {
        const bool branch_taken_0x30ae3c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x30AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE3Cu;
        // 0x30ae40: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae3c) {
            ctx->pc = 0x30AE78u;
            goto label_30ae78;
        }
    }
    ctx->pc = 0x30AE44u;
label_30ae44:
    // 0x30ae44: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30ae48:
    // 0x30ae48: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x30ae48u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_30ae4c:
    // 0x30ae4c: 0xdc50aee8  ld          $s0, -0x5118($v0)
    ctx->pc = 0x30ae4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4294946536)));
label_30ae50:
    // 0x30ae50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30ae50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30ae54:
    // 0x30ae54: 0xc0bed9c  jal         func_2FB670
label_30ae58:
    if (ctx->pc == 0x30AE58u) {
        ctx->pc = 0x30AE5Cu;
        goto label_30ae5c;
    }
    ctx->pc = 0x30AE54u;
    SET_GPR_U32(ctx, 31, 0x30AE5Cu);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30AE54u, 0x30AE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AE5Cu;
label_30ae5c:
    // 0x30ae5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30ae5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30ae60:
    // 0x30ae60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30ae60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30ae64:
    // 0x30ae64: 0xc0bed9c  jal         func_2FB670
label_30ae68:
    if (ctx->pc == 0x30AE68u) {
        ctx->pc = 0x30AE6Cu;
        goto label_30ae6c;
    }
    ctx->pc = 0x30AE64u;
    SET_GPR_U32(ctx, 31, 0x30AE6Cu);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30AE64u, 0x30AE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AE6Cu;
label_30ae6c:
    // 0x30ae6c: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_30ae70:
    if (ctx->pc == 0x30AE70u) {
        ctx->pc = 0x30AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE6Cu;
        // 0x30ae70: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30AE74u;
        goto label_30ae74;
    }
    ctx->pc = 0x30AE6Cu;
    {
        const bool branch_taken_0x30ae6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE6Cu;
        // 0x30ae70: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae6c) {
            ctx->pc = 0x30B190u;
            goto label_30b190;
        }
    }
    ctx->pc = 0x30AE74u;
label_30ae74:
    // 0x30ae74: 0x0  nop
    ctx->pc = 0x30ae74u;
    // NOP
label_30ae78:
    // 0x30ae78: 0x3c023fe0  lui         $v0, 0x3FE0
    ctx->pc = 0x30ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
label_30ae7c:
    // 0x30ae7c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x30ae7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_30ae80:
    // 0x30ae80: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x30ae80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_30ae84:
    // 0x30ae84: 0x2262024  and         $a0, $s1, $a2
    ctx->pc = 0x30ae84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 6));
label_30ae88:
    // 0x30ae88: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x30ae88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_30ae8c:
    // 0x30ae8c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_30ae90:
    if (ctx->pc == 0x30AE90u) {
        ctx->pc = 0x30AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE8Cu;
        // 0x30ae90: 0x41d03  sra         $v1, $a0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30AE94u;
        goto label_30ae94;
    }
    ctx->pc = 0x30AE8Cu;
    {
        const bool branch_taken_0x30ae8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AE8Cu;
        // 0x30ae90: 0x41d03  sra         $v1, $a0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ae8c) {
            ctx->pc = 0x30AF04u;
            goto label_30af04;
        }
    }
    ctx->pc = 0x30AE94u;
label_30ae94:
    // 0x30ae94: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x30ae94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
label_30ae98:
    // 0x30ae98: 0x2463fc02  addiu       $v1, $v1, -0x3FE
    ctx->pc = 0x30ae98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966274));
label_30ae9c:
    // 0x30ae9c: 0x641807  srav        $v1, $a0, $v1
    ctx->pc = 0x30ae9cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_30aea0:
    // 0x30aea0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x30aea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_30aea4:
    // 0x30aea4: 0x661024  and         $v0, $v1, $a2
    ctx->pc = 0x30aea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_30aea8:
    // 0x30aea8: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x30aea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_30aeac:
    // 0x30aeac: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x30aeacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
label_30aeb0:
    // 0x30aeb0: 0x2452fc01  addiu       $s2, $v0, -0x3FF
    ctx->pc = 0x30aeb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966273));
label_30aeb4:
    // 0x30aeb4: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x30aeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
label_30aeb8:
    // 0x30aeb8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30aeb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_30aebc:
    // 0x30aebc: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x30aebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_30aec0:
    // 0x30aec0: 0x2431007  srav        $v0, $v1, $s2
    ctx->pc = 0x30aec0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
label_30aec4:
    // 0x30aec4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x30aec4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_30aec8:
    // 0x30aec8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x30aec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_30aecc:
    // 0x30aecc: 0x2a83c  dsll32      $s5, $v0, 0
    ctx->pc = 0x30aeccu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 0));
label_30aed0:
    // 0x30aed0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x30aed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_30aed4:
    // 0x30aed4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x30aed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_30aed8:
    // 0x30aed8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x30aed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_30aedc:
    // 0x30aedc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x30aedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_30aee0:
    // 0x30aee0: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x30aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_30aee4:
    // 0x30aee4: 0x2a260000  slti        $a2, $s1, 0x0
    ctx->pc = 0x30aee4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
label_30aee8:
    // 0x30aee8: 0x431807  srav        $v1, $v1, $v0
    ctx->pc = 0x30aee8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_30aeec:
    // 0x30aeec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x30aeecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30aef0:
    // 0x30aef0: 0x31023  negu        $v0, $v1
    ctx->pc = 0x30aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_30aef4:
    // 0x30aef4: 0x46180b  movn        $v1, $v0, $a2
    ctx->pc = 0x30aef4u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_30aef8:
    // 0x30aef8: 0xc0bed82  jal         func_2FB608
label_30aefc:
    if (ctx->pc == 0x30AEFCu) {
        ctx->pc = 0x30AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AEF8u;
        // 0x30aefc: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30AF00u;
        goto label_30af00;
    }
    ctx->pc = 0x30AEF8u;
    SET_GPR_U32(ctx, 31, 0x30AF00u);
    ctx->pc = 0x30AEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AEF8u;
    // 0x30aefc: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30AEF8u, 0x30AF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF00u;
label_30af00:
    // 0x30af00: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x30af00u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30af04:
    // 0x30af04: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30af04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30af08:
    // 0x30af08: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x30af08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_30af0c:
    // 0x30af0c: 0xc0bed6c  jal         func_2FB5B0
label_30af10:
    if (ctx->pc == 0x30AF10u) {
        ctx->pc = 0x30AF14u;
        goto label_30af14;
    }
    ctx->pc = 0x30AF0Cu;
    SET_GPR_U32(ctx, 31, 0x30AF14u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30AF0Cu, 0x30AF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF14u;
label_30af14:
    // 0x30af14: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30af14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30af18:
    // 0x30af18: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x30af18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_30af1c:
    // 0x30af1c: 0x43a824  and         $s5, $v0, $v1
    ctx->pc = 0x30af1cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_30af20:
    // 0x30af20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30af20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30af24:
    // 0x30af24: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30af24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_30af28:
    // 0x30af28: 0xdc25af60  ld          $a1, -0x50A0($at)
    ctx->pc = 0x30af28u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294946656)));
label_30af2c:
    // 0x30af2c: 0xc0bed9c  jal         func_2FB670
label_30af30:
    if (ctx->pc == 0x30AF30u) {
        ctx->pc = 0x30AF34u;
        goto label_30af34;
    }
    ctx->pc = 0x30AF2Cu;
    SET_GPR_U32(ctx, 31, 0x30AF34u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30AF2Cu, 0x30AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF34u;
label_30af34:
    // 0x30af34: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30af34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30af38:
    // 0x30af38: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x30af38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_30af3c:
    // 0x30af3c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x30af3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30af40:
    // 0x30af40: 0xc0bed82  jal         func_2FB608
label_30af44:
    if (ctx->pc == 0x30AF44u) {
        ctx->pc = 0x30AF48u;
        goto label_30af48;
    }
    ctx->pc = 0x30AF40u;
    SET_GPR_U32(ctx, 31, 0x30AF48u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30AF40u, 0x30AF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF48u;
label_30af48:
    // 0x30af48: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30af48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30af4c:
    // 0x30af4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30af4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30af50:
    // 0x30af50: 0xc0bed82  jal         func_2FB608
label_30af54:
    if (ctx->pc == 0x30AF54u) {
        ctx->pc = 0x30AF58u;
        goto label_30af58;
    }
    ctx->pc = 0x30AF50u;
    SET_GPR_U32(ctx, 31, 0x30AF58u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30AF50u, 0x30AF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF58u;
label_30af58:
    // 0x30af58: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30af58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_30af5c:
    // 0x30af5c: 0xdc25af68  ld          $a1, -0x5098($at)
    ctx->pc = 0x30af5cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294946664)));
label_30af60:
    // 0x30af60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30af60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30af64:
    // 0x30af64: 0xc0bed9c  jal         func_2FB670
label_30af68:
    if (ctx->pc == 0x30AF68u) {
        ctx->pc = 0x30AF6Cu;
        goto label_30af6c;
    }
    ctx->pc = 0x30AF64u;
    SET_GPR_U32(ctx, 31, 0x30AF6Cu);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30AF64u, 0x30AF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF6Cu;
label_30af6c:
    // 0x30af6c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30af6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30af70:
    // 0x30af70: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30af70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_30af74:
    // 0x30af74: 0xdc25af70  ld          $a1, -0x5090($at)
    ctx->pc = 0x30af74u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294946672)));
label_30af78:
    // 0x30af78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30af78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30af7c:
    // 0x30af7c: 0xc0bed9c  jal         func_2FB670
label_30af80:
    if (ctx->pc == 0x30AF80u) {
        ctx->pc = 0x30AF84u;
        goto label_30af84;
    }
    ctx->pc = 0x30AF7Cu;
    SET_GPR_U32(ctx, 31, 0x30AF84u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30AF7Cu, 0x30AF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF84u;
label_30af84:
    // 0x30af84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30af84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30af88:
    // 0x30af88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30af88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30af8c:
    // 0x30af8c: 0xc0bed6c  jal         func_2FB5B0
label_30af90:
    if (ctx->pc == 0x30AF90u) {
        ctx->pc = 0x30AF94u;
        goto label_30af94;
    }
    ctx->pc = 0x30AF8Cu;
    SET_GPR_U32(ctx, 31, 0x30AF94u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30AF8Cu, 0x30AF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AF94u;
label_30af94:
    // 0x30af94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30af94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30af98:
    // 0x30af98: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x30af98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30af9c:
    // 0x30af9c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x30af9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30afa0:
    // 0x30afa0: 0xc0bed6c  jal         func_2FB5B0
label_30afa4:
    if (ctx->pc == 0x30AFA4u) {
        ctx->pc = 0x30AFA8u;
        goto label_30afa8;
    }
    ctx->pc = 0x30AFA0u;
    SET_GPR_U32(ctx, 31, 0x30AFA8u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30AFA0u, 0x30AFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AFA8u;
label_30afa8:
    // 0x30afa8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x30afa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_30afac:
    // 0x30afac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30afacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30afb0:
    // 0x30afb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30afb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30afb4:
    // 0x30afb4: 0xc0bed82  jal         func_2FB608
label_30afb8:
    if (ctx->pc == 0x30AFB8u) {
        ctx->pc = 0x30AFBCu;
        goto label_30afbc;
    }
    ctx->pc = 0x30AFB4u;
    SET_GPR_U32(ctx, 31, 0x30AFBCu);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30AFB4u, 0x30AFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AFBCu;
label_30afbc:
    // 0x30afbc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x30afbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_30afc0:
    // 0x30afc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30afc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30afc4:
    // 0x30afc4: 0xc0bed82  jal         func_2FB608
label_30afc8:
    if (ctx->pc == 0x30AFC8u) {
        ctx->pc = 0x30AFCCu;
        goto label_30afcc;
    }
    ctx->pc = 0x30AFC4u;
    SET_GPR_U32(ctx, 31, 0x30AFCCu);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30AFC4u, 0x30AFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AFCCu;
label_30afcc:
    // 0x30afcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30afccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30afd0:
    // 0x30afd0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30afd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30afd4:
    // 0x30afd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x30afd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30afd8:
    // 0x30afd8: 0xc0bed9c  jal         func_2FB670
label_30afdc:
    if (ctx->pc == 0x30AFDCu) {
        ctx->pc = 0x30AFE0u;
        goto label_30afe0;
    }
    ctx->pc = 0x30AFD8u;
    SET_GPR_U32(ctx, 31, 0x30AFE0u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30AFD8u, 0x30AFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AFE0u;
label_30afe0:
    // 0x30afe0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30afe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_30afe4:
    // 0x30afe4: 0xdc25af78  ld          $a1, -0x5088($at)
    ctx->pc = 0x30afe4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294946680)));
label_30afe8:
    // 0x30afe8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x30afe8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30afec:
    // 0x30afec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30afecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30aff0:
    // 0x30aff0: 0xc0bed9c  jal         func_2FB670
label_30aff4:
    if (ctx->pc == 0x30AFF4u) {
        ctx->pc = 0x30AFF8u;
        goto label_30aff8;
    }
    ctx->pc = 0x30AFF0u;
    SET_GPR_U32(ctx, 31, 0x30AFF8u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30AFF0u, 0x30AFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AFF8u;
label_30aff8:
    // 0x30aff8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30aff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_30affc:
    // 0x30affc: 0xdc25af80  ld          $a1, -0x5080($at)
    ctx->pc = 0x30affcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294946688)));
label_30b000:
    // 0x30b000: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30b000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b004:
    // 0x30b004: 0xc0bed6c  jal         func_2FB5B0
label_30b008:
    if (ctx->pc == 0x30B008u) {
        ctx->pc = 0x30B00Cu;
        goto label_30b00c;
    }
    ctx->pc = 0x30B004u;
    SET_GPR_U32(ctx, 31, 0x30B00Cu);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30B004u, 0x30B00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B00Cu;
label_30b00c:
    // 0x30b00c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30b00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30b010:
    // 0x30b010: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30b010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b014:
    // 0x30b014: 0xc0bed9c  jal         func_2FB670
label_30b018:
    if (ctx->pc == 0x30B018u) {
        ctx->pc = 0x30B01Cu;
        goto label_30b01c;
    }
    ctx->pc = 0x30B014u;
    SET_GPR_U32(ctx, 31, 0x30B01Cu);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30B014u, 0x30B01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B01Cu;
label_30b01c:
    // 0x30b01c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30b01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_30b020:
    // 0x30b020: 0xdc25af88  ld          $a1, -0x5078($at)
    ctx->pc = 0x30b020u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294946696)));
label_30b024:
    // 0x30b024: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30b024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b028:
    // 0x30b028: 0xc0bed6c  jal         func_2FB5B0
label_30b02c:
    if (ctx->pc == 0x30B02Cu) {
        ctx->pc = 0x30B030u;
        goto label_30b030;
    }
    ctx->pc = 0x30B028u;
    SET_GPR_U32(ctx, 31, 0x30B030u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30B028u, 0x30B030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B030u;
label_30b030:
    // 0x30b030: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30b030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30b034:
    // 0x30b034: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30b034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b038:
    // 0x30b038: 0xc0bed9c  jal         func_2FB670
label_30b03c:
    if (ctx->pc == 0x30B03Cu) {
        ctx->pc = 0x30B040u;
        goto label_30b040;
    }
    ctx->pc = 0x30B038u;
    SET_GPR_U32(ctx, 31, 0x30B040u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30B038u, 0x30B040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B040u;
label_30b040:
    // 0x30b040: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30b040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_30b044:
    // 0x30b044: 0xdc25af90  ld          $a1, -0x5070($at)
    ctx->pc = 0x30b044u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294946704)));
label_30b048:
    // 0x30b048: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30b048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b04c:
    // 0x30b04c: 0xc0bed6c  jal         func_2FB5B0
label_30b050:
    if (ctx->pc == 0x30B050u) {
        ctx->pc = 0x30B054u;
        goto label_30b054;
    }
    ctx->pc = 0x30B04Cu;
    SET_GPR_U32(ctx, 31, 0x30B054u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30B04Cu, 0x30B054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B054u;
label_30b054:
    // 0x30b054: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30b054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30b058:
    // 0x30b058: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30b058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b05c:
    // 0x30b05c: 0xc0bed9c  jal         func_2FB670
label_30b060:
    if (ctx->pc == 0x30B060u) {
        ctx->pc = 0x30B064u;
        goto label_30b064;
    }
    ctx->pc = 0x30B05Cu;
    SET_GPR_U32(ctx, 31, 0x30B064u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30B05Cu, 0x30B064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B064u;
label_30b064:
    // 0x30b064: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30b064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_30b068:
    // 0x30b068: 0xdc25af98  ld          $a1, -0x5068($at)
    ctx->pc = 0x30b068u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294946712)));
label_30b06c:
    // 0x30b06c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30b06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b070:
    // 0x30b070: 0xc0bed6c  jal         func_2FB5B0
label_30b074:
    if (ctx->pc == 0x30B074u) {
        ctx->pc = 0x30B078u;
        goto label_30b078;
    }
    ctx->pc = 0x30B070u;
    SET_GPR_U32(ctx, 31, 0x30B078u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30B070u, 0x30B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B078u;
label_30b078:
    // 0x30b078: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x30b078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_30b07c:
    // 0x30b07c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30b07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b080:
    // 0x30b080: 0xc0bed9c  jal         func_2FB670
label_30b084:
    if (ctx->pc == 0x30B084u) {
        ctx->pc = 0x30B088u;
        goto label_30b088;
    }
    ctx->pc = 0x30B080u;
    SET_GPR_U32(ctx, 31, 0x30B088u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30B080u, 0x30B088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B088u;
label_30b088:
    // 0x30b088: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30b088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30b08c:
    // 0x30b08c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30b08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b090:
    // 0x30b090: 0xc0bed82  jal         func_2FB608
label_30b094:
    if (ctx->pc == 0x30B094u) {
        ctx->pc = 0x30B098u;
        goto label_30b098;
    }
    ctx->pc = 0x30B090u;
    SET_GPR_U32(ctx, 31, 0x30B098u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30B090u, 0x30B098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B098u;
label_30b098:
    // 0x30b098: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30b098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30b09c:
    // 0x30b09c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x30b09cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b0a0:
    // 0x30b0a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x30b0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30b0a4:
    // 0x30b0a4: 0xc0bed9c  jal         func_2FB670
label_30b0a8:
    if (ctx->pc == 0x30B0A8u) {
        ctx->pc = 0x30B0ACu;
        goto label_30b0ac;
    }
    ctx->pc = 0x30B0A4u;
    SET_GPR_U32(ctx, 31, 0x30B0ACu);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30B0A4u, 0x30B0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B0ACu;
label_30b0ac:
    // 0x30b0ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30b0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_30b0b0:
    // 0x30b0b0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x30b0b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_30b0b4:
    // 0x30b0b4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x30b0b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_30b0b8:
    // 0x30b0b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30b0b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b0bc:
    // 0x30b0bc: 0xc0bed82  jal         func_2FB608
label_30b0c0:
    if (ctx->pc == 0x30B0C0u) {
        ctx->pc = 0x30B0C4u;
        goto label_30b0c4;
    }
    ctx->pc = 0x30B0BCu;
    SET_GPR_U32(ctx, 31, 0x30B0C4u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30B0BCu, 0x30B0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B0C4u;
label_30b0c4:
    // 0x30b0c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30b0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30b0c8:
    // 0x30b0c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30b0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b0cc:
    // 0x30b0cc: 0xc0bee3e  jal         func_2FB8F8
label_30b0d0:
    if (ctx->pc == 0x30B0D0u) {
        ctx->pc = 0x30B0D4u;
        goto label_30b0d4;
    }
    ctx->pc = 0x30B0CCu;
    SET_GPR_U32(ctx, 31, 0x30B0D4u);
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x30B0CCu, 0x30B0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B0D4u;
label_30b0d4:
    // 0x30b0d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30b0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30b0d8:
    // 0x30b0d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30b0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30b0dc:
    // 0x30b0dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30b0dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b0e0:
    // 0x30b0e0: 0xc0bed9c  jal         func_2FB670
label_30b0e4:
    if (ctx->pc == 0x30B0E4u) {
        ctx->pc = 0x30B0E8u;
        goto label_30b0e8;
    }
    ctx->pc = 0x30B0E0u;
    SET_GPR_U32(ctx, 31, 0x30B0E8u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30B0E0u, 0x30B0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B0E8u;
label_30b0e8:
    // 0x30b0e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30b0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30b0ec:
    // 0x30b0ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30b0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b0f0:
    // 0x30b0f0: 0xc0bed6c  jal         func_2FB5B0
label_30b0f4:
    if (ctx->pc == 0x30B0F4u) {
        ctx->pc = 0x30B0F8u;
        goto label_30b0f8;
    }
    ctx->pc = 0x30B0F0u;
    SET_GPR_U32(ctx, 31, 0x30B0F8u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30B0F0u, 0x30B0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B0F8u;
label_30b0f8:
    // 0x30b0f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30b0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30b0fc:
    // 0x30b0fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30b0fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b100:
    // 0x30b100: 0xc0bed82  jal         func_2FB608
label_30b104:
    if (ctx->pc == 0x30B104u) {
        ctx->pc = 0x30B108u;
        goto label_30b108;
    }
    ctx->pc = 0x30B100u;
    SET_GPR_U32(ctx, 31, 0x30B108u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30B100u, 0x30B108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B108u;
label_30b108:
    // 0x30b108: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30b108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30b10c:
    // 0x30b10c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30b10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b110:
    // 0x30b110: 0xc0bed82  jal         func_2FB608
label_30b114:
    if (ctx->pc == 0x30B114u) {
        ctx->pc = 0x30B118u;
        goto label_30b118;
    }
    ctx->pc = 0x30B110u;
    SET_GPR_U32(ctx, 31, 0x30B118u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30B110u, 0x30B118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B118u;
label_30b118:
    // 0x30b118: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x30b118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_30b11c:
    // 0x30b11c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x30b11cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
label_30b120:
    // 0x30b120: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30b120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b124:
    // 0x30b124: 0xc0bed82  jal         func_2FB608
label_30b128:
    if (ctx->pc == 0x30B128u) {
        ctx->pc = 0x30B12Cu;
        goto label_30b12c;
    }
    ctx->pc = 0x30B124u;
    SET_GPR_U32(ctx, 31, 0x30B12Cu);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30B124u, 0x30B12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B12Cu;
label_30b12c:
    // 0x30b12c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30b12cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b130:
    // 0x30b130: 0x2883f  dsra32      $s1, $v0, 0
    ctx->pc = 0x30b130u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 2) >> (32 + 0));
label_30b134:
    // 0x30b134: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x30b134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_30b138:
    // 0x30b138: 0x21d00  sll         $v1, $v0, 20
    ctx->pc = 0x30b138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
label_30b13c:
    // 0x30b13c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x30b13cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_30b140:
    // 0x30b140: 0x111503  sra         $v0, $s1, 20
    ctx->pc = 0x30b140u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 20));
label_30b144:
    // 0x30b144: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
label_30b148:
    if (ctx->pc == 0x30B148u) {
        ctx->pc = 0x30B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B144u;
        // 0x30b148: 0x11203c  dsll32      $a0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B14Cu;
        goto label_30b14c;
    }
    ctx->pc = 0x30B144u;
    {
        const bool branch_taken_0x30b144 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x30B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B144u;
        // 0x30b148: 0x11203c  dsll32      $a0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b144) {
            ctx->pc = 0x30B168u;
            goto label_30b168;
        }
    }
    ctx->pc = 0x30B14Cu;
label_30b14c:
    // 0x30b14c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30b14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30b150:
    // 0x30b150: 0xc0bc174  jal         func_2F05D0
label_30b154:
    if (ctx->pc == 0x30B154u) {
        ctx->pc = 0x30B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B150u;
        // 0x30b154: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B158u;
        goto label_30b158;
    }
    ctx->pc = 0x30B150u;
    SET_GPR_U32(ctx, 31, 0x30B158u);
    ctx->pc = 0x30B154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B150u;
    // 0x30b154: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F05D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F05D0u, 0x30B150u, 0x30B158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B158u;
label_30b158:
    // 0x30b158: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x30b158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b15c:
    // 0x30b15c: 0x10000007  b           . + 4 + (0x7 << 2)
label_30b160:
    if (ctx->pc == 0x30B160u) {
        ctx->pc = 0x30B164u;
        goto label_30b164;
    }
    ctx->pc = 0x30B15Cu;
    {
        const bool branch_taken_0x30b15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b15c) {
            ctx->pc = 0x30B17Cu;
            goto label_30b17c;
        }
    }
    ctx->pc = 0x30B164u;
label_30b164:
    // 0x30b164: 0x0  nop
    ctx->pc = 0x30b164u;
    // NOP
label_30b168:
    // 0x30b168: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x30b168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30b16c:
    // 0x30b16c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x30b16cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_30b170:
    // 0x30b170: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30b170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_30b174:
    // 0x30b174: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x30b174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_30b178:
    // 0x30b178: 0x449025  or          $s2, $v0, $a0
    ctx->pc = 0x30b178u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_30b17c:
    // 0x30b17c: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x30b17cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_30b180:
    // 0x30b180: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x30b180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30b184:
    // 0x30b184: 0xc0bed9c  jal         func_2FB670
label_30b188:
    if (ctx->pc == 0x30B188u) {
        ctx->pc = 0x30B18Cu;
        goto label_30b18c;
    }
    ctx->pc = 0x30B184u;
    SET_GPR_U32(ctx, 31, 0x30B18Cu);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30B184u, 0x30B18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B18Cu;
label_30b18c:
    // 0x30b18c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x30b18cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30b190:
    // 0x30b190: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x30b190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_30b194:
    // 0x30b194: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x30b194u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_30b198:
    // 0x30b198: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x30b198u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_30b19c:
    // 0x30b19c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x30b19cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_30b1a0:
    // 0x30b1a0: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x30b1a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_30b1a4:
    // 0x30b1a4: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x30b1a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_30b1a8:
    // 0x30b1a8: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x30b1a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_30b1ac:
    // 0x30b1ac: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x30b1acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_30b1b0:
    // 0x30b1b0: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x30b1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_30b1b4:
    // 0x30b1b4: 0x3e00008  jr          $ra
label_30b1b8:
    if (ctx->pc == 0x30B1B8u) {
        ctx->pc = 0x30B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B1B4u;
        // 0x30b1b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B1BCu;
        goto label_30b1bc;
    }
    ctx->pc = 0x30B1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B1B4u;
        // 0x30b1b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B1BCu;
label_30b1bc:
    // 0x30b1bc: 0x0  nop
    ctx->pc = 0x30b1bcu;
    // NOP
label_30b1c0:
    // 0x30b1c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30b1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_30b1c4:
    // 0x30b1c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30b1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_30b1c8:
    // 0x30b1c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30b1c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30b1cc:
    // 0x30b1cc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x30b1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_30b1d0:
    // 0x30b1d0: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x30b1d0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
label_30b1d4:
    // 0x30b1d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30b1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_30b1d8:
    // 0x30b1d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30b1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_30b1dc:
    // 0x30b1dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x30b1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_30b1e0:
    // 0x30b1e0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x30b1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_30b1e4:
    // 0x30b1e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30b1e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30b1e8:
    // 0x30b1e8: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x30b1e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
label_30b1ec:
    // 0x30b1ec: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x30b1ecu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_30b1f0:
    // 0x30b1f0: 0x2283f  dsra32      $a1, $v0, 0
    ctx->pc = 0x30b1f0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 2) >> (32 + 0));
label_30b1f4:
    // 0x30b1f4: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x30b1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
label_30b1f8:
    // 0x30b1f8: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x30b1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_30b1fc:
    // 0x30b1fc: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_30b200:
    if (ctx->pc == 0x30B200u) {
        ctx->pc = 0x30B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B1FCu;
        // 0x30b200: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B204u;
        goto label_30b204;
    }
    ctx->pc = 0x30B1FCu;
    {
        const bool branch_taken_0x30b1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B1FCu;
        // 0x30b200: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b1fc) {
            ctx->pc = 0x30B228u;
            goto label_30b228;
        }
    }
    ctx->pc = 0x30B204u;
label_30b204:
    // 0x30b204: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30b204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30b208:
    // 0x30b208: 0xc0bed9c  jal         func_2FB670
label_30b20c:
    if (ctx->pc == 0x30B20Cu) {
        ctx->pc = 0x30B210u;
        goto label_30b210;
    }
    ctx->pc = 0x30B208u;
    SET_GPR_U32(ctx, 31, 0x30B210u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x30B208u, 0x30B210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B210u;
label_30b210:
    // 0x30b210: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30b210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30b214:
    // 0x30b214: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30b214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b218:
    // 0x30b218: 0xc0bed6c  jal         func_2FB5B0
label_30b21c:
    if (ctx->pc == 0x30B21Cu) {
        ctx->pc = 0x30B220u;
        goto label_30b220;
    }
    ctx->pc = 0x30B218u;
    SET_GPR_U32(ctx, 31, 0x30B220u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x30B218u, 0x30B220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B220u;
label_30b220:
    // 0x30b220: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_30b224:
    if (ctx->pc == 0x30B224u) {
        ctx->pc = 0x30B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B220u;
        // 0x30b224: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B228u;
        goto label_30b228;
    }
    ctx->pc = 0x30B220u;
    {
        const bool branch_taken_0x30b220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B220u;
        // 0x30b224: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b220) {
            ctx->pc = 0x30B4BCu;
            goto label_30b4bc;
        }
    }
    ctx->pc = 0x30B228u;
label_30b228:
    // 0x30b228: 0x1ca00013  bgtz        $a1, . + 4 + (0x13 << 2)
label_30b22c:
    if (ctx->pc == 0x30B22Cu) {
        ctx->pc = 0x30B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B228u;
        // 0x30b22c: 0x58d03  sra         $s1, $a1, 20 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B230u;
        goto label_30b230;
    }
    ctx->pc = 0x30B228u;
    {
        const bool branch_taken_0x30b228 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x30B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B228u;
        // 0x30b22c: 0x58d03  sra         $s1, $a1, 20 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b228) {
            ctx->pc = 0x30B278u;
            goto label_30b278;
        }
    }
    ctx->pc = 0x30B230u;
label_30b230:
    // 0x30b230: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x30b230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_30b234:
    // 0x30b234: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30b234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30b238:
    // 0x30b238: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30b238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_30b23c:
    // 0x30b23c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x30b23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_30b240:
    // 0x30b240: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x30b240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_30b244:
    // 0x30b244: 0x5060009d  beql        $v1, $zero, . + 4 + (0x9D << 2)
label_30b248:
    if (ctx->pc == 0x30B248u) {
        ctx->pc = 0x30B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B244u;
        // 0x30b248: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B24Cu;
        goto label_30b24c;
    }
    ctx->pc = 0x30B244u;
    {
        const bool branch_taken_0x30b244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b244) {
            ctx->pc = 0x30B248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B244u;
            // 0x30b248: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B4BCu;
            goto label_30b4bc;
        }
    }
    ctx->pc = 0x30B24Cu;
label_30b24c:
    // 0x30b24c: 0x4a1000a  bgez        $a1, . + 4 + (0xA << 2)
label_30b250:
    if (ctx->pc == 0x30B250u) {
        ctx->pc = 0x30B254u;
        goto label_30b254;
    }
    ctx->pc = 0x30B24Cu;
    {
        const bool branch_taken_0x30b24c = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x30b24c) {
            ctx->pc = 0x30B278u;
            goto label_30b278;
        }
    }
    ctx->pc = 0x30B254u;
label_30b254:
    // 0x30b254: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30b254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30b258:
    // 0x30b258: 0xc0bed82  jal         func_2FB608
label_30b25c:
    if (ctx->pc == 0x30B25Cu) {
        ctx->pc = 0x30B260u;
        goto label_30b260;
    }
    ctx->pc = 0x30B258u;
    SET_GPR_U32(ctx, 31, 0x30B260u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x30B258u, 0x30B260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B260u;
label_30b260:
    // 0x30b260: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x30b260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b264:
    // 0x30b264: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30b264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b268:
    // 0x30b268: 0xc0bee3e  jal         func_2FB8F8
label_30b26c:
    if (ctx->pc == 0x30B26Cu) {
        ctx->pc = 0x30B270u;
        goto label_30b270;
    }
    ctx->pc = 0x30B268u;
    SET_GPR_U32(ctx, 31, 0x30B270u);
    ctx->pc = 0x2FB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB8F8u, 0x30B268u, 0x30B270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B270u;
label_30b270:
    // 0x30b270: 0x10000092  b           . + 4 + (0x92 << 2)
label_30b274:
    if (ctx->pc == 0x30B274u) {
        ctx->pc = 0x30B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B270u;
        // 0x30b274: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B278u;
        goto label_30b278;
    }
    ctx->pc = 0x30B270u;
    {
        const bool branch_taken_0x30b270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B270u;
        // 0x30b274: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b270) {
            ctx->pc = 0x30B4BCu;
            goto label_30b4bc;
        }
    }
    ctx->pc = 0x30B278u;
label_30b278:
    // 0x30b278: 0x1620001d  bnez        $s1, . + 4 + (0x1D << 2)
label_30b27c:
    if (ctx->pc == 0x30B27Cu) {
        ctx->pc = 0x30B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B278u;
        // 0x30b27c: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B280u;
        goto label_30b280;
    }
    ctx->pc = 0x30B278u;
    {
        const bool branch_taken_0x30b278 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B278u;
        // 0x30b27c: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b278) {
            ctx->pc = 0x30B2F0u;
            goto label_30b2f0;
        }
    }
    ctx->pc = 0x30B280u;
label_30b280:
    // 0x30b280: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
label_30b284:
    if (ctx->pc == 0x30B284u) {
        ctx->pc = 0x30B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B280u;
        // 0x30b284: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B288u;
        goto label_30b288;
    }
    ctx->pc = 0x30B280u;
    {
        const bool branch_taken_0x30b280 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B280u;
        // 0x30b284: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b280) {
            ctx->pc = 0x30B2A8u;
            goto label_30b2a8;
        }
    }
    ctx->pc = 0x30B288u;
label_30b288:
    // 0x30b288: 0x712c2  srl         $v0, $a3, 11
    ctx->pc = 0x30b288u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 11));
label_30b28c:
    // 0x30b28c: 0x73d40  sll         $a3, $a3, 21
    ctx->pc = 0x30b28cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 21));
label_30b290:
    // 0x30b290: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x30b290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_30b294:
    // 0x30b294: 0x0  nop
    ctx->pc = 0x30b294u;
    // NOP
label_30b298:
    // 0x30b298: 0x0  nop
    ctx->pc = 0x30b298u;
    // NOP
label_30b29c:
    // 0x30b29c: 0x10a0fffa  beqz        $a1, . + 4 + (-0x6 << 2)
label_30b2a0:
    if (ctx->pc == 0x30B2A0u) {
        ctx->pc = 0x30B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B29Cu;
        // 0x30b2a0: 0x2631ffeb  addiu       $s1, $s1, -0x15 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967275));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B2A4u;
        goto label_30b2a4;
    }
    ctx->pc = 0x30B29Cu;
    {
        const bool branch_taken_0x30b29c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B29Cu;
        // 0x30b2a0: 0x2631ffeb  addiu       $s1, $s1, -0x15 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967275));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b29c) {
            ctx->pc = 0x30B288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b288;
        }
    }
    ctx->pc = 0x30B2A4u;
label_30b2a4:
    // 0x30b2a4: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x30b2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_30b2a8:
    // 0x30b2a8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x30b2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_30b2ac:
    // 0x30b2ac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_30b2b0:
    if (ctx->pc == 0x30B2B0u) {
        ctx->pc = 0x30B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2ACu;
        // 0x30b2b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B2B4u;
        goto label_30b2b4;
    }
    ctx->pc = 0x30B2ACu;
    {
        const bool branch_taken_0x30b2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2ACu;
        // 0x30b2b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b2ac) {
            ctx->pc = 0x30B2D4u;
            goto label_30b2d4;
        }
    }
    ctx->pc = 0x30B2B4u;
label_30b2b4:
    // 0x30b2b4: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x30b2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_30b2b8:
    // 0x30b2b8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x30b2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_30b2bc:
    // 0x30b2bc: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x30b2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_30b2c0:
    // 0x30b2c0: 0x0  nop
    ctx->pc = 0x30b2c0u;
    // NOP
label_30b2c4:
    // 0x30b2c4: 0x0  nop
    ctx->pc = 0x30b2c4u;
    // NOP
label_30b2c8:
    // 0x30b2c8: 0x0  nop
    ctx->pc = 0x30b2c8u;
    // NOP
label_30b2cc:
    // 0x30b2cc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_30b2d0:
    if (ctx->pc == 0x30B2D0u) {
        ctx->pc = 0x30B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2CCu;
        // 0x30b2d0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B2D4u;
        goto label_30b2d4;
    }
    ctx->pc = 0x30B2CCu;
    {
        const bool branch_taken_0x30b2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B2CCu;
        // 0x30b2d0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b2cc) {
            ctx->pc = 0x30B2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b2b8;
        }
    }
    ctx->pc = 0x30B2D4u;
label_30b2d4:
    // 0x30b2d4: 0x41023  negu        $v0, $a0
    ctx->pc = 0x30b2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_30b2d8:
    // 0x30b2d8: 0x2241823  subu        $v1, $s1, $a0
    ctx->pc = 0x30b2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_30b2dc:
    // 0x30b2dc: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x30b2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_30b2e0:
    // 0x30b2e0: 0x873804  sllv        $a3, $a3, $a0
    ctx->pc = 0x30b2e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
label_30b2e4:
    // 0x30b2e4: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x30b2e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_30b2e8:
    // 0x30b2e8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x30b2e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_30b2ec:
    // 0x30b2ec: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x30b2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_30b2f0:
    // 0x30b2f0: 0x2631fc01  addiu       $s1, $s1, -0x3FF
    ctx->pc = 0x30b2f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966273));
label_30b2f4:
    // 0x30b2f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30b2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30b2f8:
    // 0x30b2f8: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x30b2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
label_30b2fc:
    // 0x30b2fc: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x30b2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_30b300:
    // 0x30b300: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x30b300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_30b304:
    // 0x30b304: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_30b308:
    if (ctx->pc == 0x30B308u) {
        ctx->pc = 0x30B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B304u;
        // 0x30b308: 0x442825  or          $a1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B30Cu;
        goto label_30b30c;
    }
    ctx->pc = 0x30B304u;
    {
        const bool branch_taken_0x30b304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B304u;
        // 0x30b308: 0x442825  or          $a1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b304) {
            ctx->pc = 0x30B320u;
            goto label_30b320;
        }
    }
    ctx->pc = 0x30B30Cu;
label_30b30c:
    // 0x30b30c: 0xf41024  and         $v0, $a3, $s4
    ctx->pc = 0x30b30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 20));
label_30b310:
    // 0x30b310: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x30b310u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_30b314:
    // 0x30b314: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x30b314u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_30b318:
    // 0x30b318: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x30b318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_30b31c:
    // 0x30b31c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x30b31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_30b320:
    // 0x30b320: 0xf41024  and         $v0, $a3, $s4
    ctx->pc = 0x30b320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 20));
label_30b324:
    // 0x30b324: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x30b324u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_30b328:
    // 0x30b328: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x30b328u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_30b32c:
    // 0x30b32c: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x30b32cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
label_30b330:
    // 0x30b330: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x30b330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_30b334:
    // 0x30b334: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x30b334u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30b338:
    // 0x30b338: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x30b338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_30b33c:
    // 0x30b33c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x30b33cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30b340:
    // 0x30b340: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30b340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30b344:
    // 0x30b344: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30b344u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30b348:
    // 0x30b348: 0x3c090020  lui         $t1, 0x20
    ctx->pc = 0x30b348u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32 << 16));
label_30b34c:
    // 0x30b34c: 0x0  nop
    ctx->pc = 0x30b34cu;
    // NOP
label_30b350:
    // 0x30b350: 0x1691821  addu        $v1, $t3, $t1
    ctx->pc = 0x30b350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
label_30b354:
    // 0x30b354: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x30b354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_30b358:
    // 0x30b358: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_30b35c:
    if (ctx->pc == 0x30B35Cu) {
        ctx->pc = 0x30B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B358u;
        // 0x30b35c: 0xf41024  and         $v0, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B360u;
        goto label_30b360;
    }
    ctx->pc = 0x30B358u;
    {
        const bool branch_taken_0x30b358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B358u;
        // 0x30b35c: 0xf41024  and         $v0, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b358) {
            ctx->pc = 0x30B36Cu;
            goto label_30b36c;
        }
    }
    ctx->pc = 0x30B360u;
label_30b360:
    // 0x30b360: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x30b360u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_30b364:
    // 0x30b364: 0x695821  addu        $t3, $v1, $t1
    ctx->pc = 0x30b364u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_30b368:
    // 0x30b368: 0x2699821  addu        $s3, $s3, $t1
    ctx->pc = 0x30b368u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
label_30b36c:
    // 0x30b36c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x30b36cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_30b370:
    // 0x30b370: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x30b370u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_30b374:
    // 0x30b374: 0x94842  srl         $t1, $t1, 1
    ctx->pc = 0x30b374u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
label_30b378:
    // 0x30b378: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x30b378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_30b37c:
    // 0x30b37c: 0x1520fff4  bnez        $t1, . + 4 + (-0xC << 2)
label_30b380:
    if (ctx->pc == 0x30B380u) {
        ctx->pc = 0x30B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B37Cu;
        // 0x30b380: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B384u;
        goto label_30b384;
    }
    ctx->pc = 0x30B37Cu;
    {
        const bool branch_taken_0x30b37c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B37Cu;
        // 0x30b380: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b37c) {
            ctx->pc = 0x30B350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b350;
        }
    }
    ctx->pc = 0x30B384u;
label_30b384:
    // 0x30b384: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x30b384u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
label_30b388:
    // 0x30b388: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x30b388u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_30b38c:
    // 0x30b38c: 0x1892021  addu        $a0, $t4, $t1
    ctx->pc = 0x30b38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
label_30b390:
    // 0x30b390: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x30b390u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_30b394:
    // 0x30b394: 0x945024  and         $t2, $a0, $s4
    ctx->pc = 0x30b394u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & GPR_U64(ctx, 20));
label_30b398:
    // 0x30b398: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_30b39c:
    if (ctx->pc == 0x30B39Cu) {
        ctx->pc = 0x30B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B398u;
        // 0x30b39c: 0xe4402b  sltu        $t0, $a3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B3A0u;
        goto label_30b3a0;
    }
    ctx->pc = 0x30B398u;
    {
        const bool branch_taken_0x30b398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B398u;
        // 0x30b39c: 0xe4402b  sltu        $t0, $a3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b398) {
            ctx->pc = 0x30B3B0u;
            goto label_30b3b0;
        }
    }
    ctx->pc = 0x30B3A0u;
label_30b3a0:
    // 0x30b3a0: 0x1465000d  bne         $v1, $a1, . + 4 + (0xD << 2)
label_30b3a4:
    if (ctx->pc == 0x30B3A4u) {
        ctx->pc = 0x30B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B3A0u;
        // 0x30b3a4: 0xf41024  and         $v0, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B3A8u;
        goto label_30b3a8;
    }
    ctx->pc = 0x30B3A0u;
    {
        const bool branch_taken_0x30b3a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x30B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B3A0u;
        // 0x30b3a4: 0xf41024  and         $v0, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b3a0) {
            ctx->pc = 0x30B3D8u;
            goto label_30b3d8;
        }
    }
    ctx->pc = 0x30B3A8u;
label_30b3a8:
    // 0x30b3a8: 0x5500000c  bnel        $t0, $zero, . + 4 + (0xC << 2)
label_30b3ac:
    if (ctx->pc == 0x30B3ACu) {
        ctx->pc = 0x30B3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B3A8u;
        // 0x30b3ac: 0x73840  sll         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B3B0u;
        goto label_30b3b0;
    }
    ctx->pc = 0x30B3A8u;
    {
        const bool branch_taken_0x30b3a8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b3a8) {
            ctx->pc = 0x30B3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B3A8u;
            // 0x30b3ac: 0x73840  sll         $a3, $a3, 1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B3DCu;
            goto label_30b3dc;
        }
    }
    ctx->pc = 0x30B3B0u;
label_30b3b0:
    // 0x30b3b0: 0x896021  addu        $t4, $a0, $t1
    ctx->pc = 0x30b3b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_30b3b4:
    // 0x30b3b4: 0x15540003  bne         $t2, $s4, . + 4 + (0x3 << 2)
label_30b3b8:
    if (ctx->pc == 0x30B3B8u) {
        ctx->pc = 0x30B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B3B4u;
        // 0x30b3b8: 0x1943024  and         $a2, $t4, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) & GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B3BCu;
        goto label_30b3bc;
    }
    ctx->pc = 0x30B3B4u;
    {
        const bool branch_taken_0x30b3b4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 20));
        ctx->pc = 0x30B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B3B4u;
        // 0x30b3b8: 0x1943024  and         $a2, $t4, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) & GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b3b4) {
            ctx->pc = 0x30B3C4u;
            goto label_30b3c4;
        }
    }
    ctx->pc = 0x30B3BCu;
label_30b3bc:
    // 0x30b3bc: 0x25620001  addiu       $v0, $t3, 0x1
    ctx->pc = 0x30b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_30b3c0:
    // 0x30b3c0: 0x46580a  movz        $t3, $v0, $a2
    ctx->pc = 0x30b3c0u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 2));
label_30b3c4:
    // 0x30b3c4: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x30b3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_30b3c8:
    // 0x30b3c8: 0xe43823  subu        $a3, $a3, $a0
    ctx->pc = 0x30b3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_30b3cc:
    // 0x30b3cc: 0x2499021  addu        $s2, $s2, $t1
    ctx->pc = 0x30b3ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
label_30b3d0:
    // 0x30b3d0: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x30b3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_30b3d4:
    // 0x30b3d4: 0xf41024  and         $v0, $a3, $s4
    ctx->pc = 0x30b3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 20));
label_30b3d8:
    // 0x30b3d8: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x30b3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_30b3dc:
    // 0x30b3dc: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x30b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_30b3e0:
    // 0x30b3e0: 0x94842  srl         $t1, $t1, 1
    ctx->pc = 0x30b3e0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
label_30b3e4:
    // 0x30b3e4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x30b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_30b3e8:
    // 0x30b3e8: 0x1520ffe7  bnez        $t1, . + 4 + (-0x19 << 2)
label_30b3ec:
    if (ctx->pc == 0x30B3ECu) {
        ctx->pc = 0x30B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B3E8u;
        // 0x30b3ec: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B3F0u;
        goto label_30b3f0;
    }
    ctx->pc = 0x30B3E8u;
    {
        const bool branch_taken_0x30b3e8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B3E8u;
        // 0x30b3ec: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b3e8) {
            ctx->pc = 0x30B388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30b388;
        }
    }
    ctx->pc = 0x30B3F0u;
label_30b3f0:
    // 0x30b3f0: 0xa71025  or          $v0, $a1, $a3
    ctx->pc = 0x30b3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_30b3f4:
    // 0x30b3f4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_30b3f8:
    if (ctx->pc == 0x30B3F8u) {
        ctx->pc = 0x30B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B3F4u;
        // 0x30b3f8: 0x123842  srl         $a3, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B3FCu;
        goto label_30b3fc;
    }
    ctx->pc = 0x30B3F4u;
    {
        const bool branch_taken_0x30b3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B3F4u;
        // 0x30b3f8: 0x123842  srl         $a3, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b3f4) {
            ctx->pc = 0x30B468u;
            goto label_30b468;
        }
    }
    ctx->pc = 0x30B3FCu;
label_30b3fc:
    // 0x30b3fc: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x30b3fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
label_30b400:
    // 0x30b400: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x30b400u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
label_30b404:
    // 0x30b404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30b404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30b408:
    // 0x30b408: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30b408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30b40c:
    // 0x30b40c: 0xc0beed6  jal         func_2FBB58
label_30b410:
    if (ctx->pc == 0x30B410u) {
        ctx->pc = 0x30B414u;
        goto label_30b414;
    }
    ctx->pc = 0x30B40Cu;
    SET_GPR_U32(ctx, 31, 0x30B414u);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x30B40Cu, 0x30B414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B414u;
label_30b414:
    // 0x30b414: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
label_30b418:
    if (ctx->pc == 0x30B418u) {
        ctx->pc = 0x30B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B414u;
        // 0x30b418: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B41Cu;
        goto label_30b41c;
    }
    ctx->pc = 0x30B414u;
    {
        const bool branch_taken_0x30b414 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B414u;
        // 0x30b418: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b414) {
            ctx->pc = 0x30B464u;
            goto label_30b464;
        }
    }
    ctx->pc = 0x30B41Cu;
label_30b41c:
    // 0x30b41c: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
label_30b420:
    if (ctx->pc == 0x30B420u) {
        ctx->pc = 0x30B424u;
        goto label_30b424;
    }
    ctx->pc = 0x30B41Cu;
    {
        const bool branch_taken_0x30b41c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x30b41c) {
            ctx->pc = 0x30B430u;
            goto label_30b430;
        }
    }
    ctx->pc = 0x30B424u;
label_30b424:
    // 0x30b424: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30b424u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30b428:
    // 0x30b428: 0x1000000e  b           . + 4 + (0xE << 2)
label_30b42c:
    if (ctx->pc == 0x30B42Cu) {
        ctx->pc = 0x30B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B428u;
        // 0x30b42c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B430u;
        goto label_30b430;
    }
    ctx->pc = 0x30B428u;
    {
        const bool branch_taken_0x30b428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B428u;
        // 0x30b42c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b428) {
            ctx->pc = 0x30B464u;
            goto label_30b464;
        }
    }
    ctx->pc = 0x30B430u;
label_30b430:
    // 0x30b430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30b430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30b434:
    // 0x30b434: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30b434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30b438:
    // 0x30b438: 0xc0beed6  jal         func_2FBB58
label_30b43c:
    if (ctx->pc == 0x30B43Cu) {
        ctx->pc = 0x30B440u;
        goto label_30b440;
    }
    ctx->pc = 0x30B438u;
    SET_GPR_U32(ctx, 31, 0x30B440u);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x30B438u, 0x30B440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B440u;
label_30b440:
    // 0x30b440: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_30b444:
    if (ctx->pc == 0x30B444u) {
        ctx->pc = 0x30B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B440u;
        // 0x30b444: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B448u;
        goto label_30b448;
    }
    ctx->pc = 0x30B440u;
    {
        const bool branch_taken_0x30b440 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x30B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B440u;
        // 0x30b444: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b440) {
            ctx->pc = 0x30B460u;
            goto label_30b460;
        }
    }
    ctx->pc = 0x30B448u;
label_30b448:
    // 0x30b448: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x30b448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_30b44c:
    // 0x30b44c: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x30b44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_30b450:
    // 0x30b450: 0x2421026  xor         $v0, $s2, $v0
    ctx->pc = 0x30b450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 2));
label_30b454:
    // 0x30b454: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x30b454u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_30b458:
    // 0x30b458: 0x10000002  b           . + 4 + (0x2 << 2)
label_30b45c:
    if (ctx->pc == 0x30B45Cu) {
        ctx->pc = 0x30B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B458u;
        // 0x30b45c: 0x62980a  movz        $s3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B460u;
        goto label_30b460;
    }
    ctx->pc = 0x30B458u;
    {
        const bool branch_taken_0x30b458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B458u;
        // 0x30b45c: 0x62980a  movz        $s3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b458) {
            ctx->pc = 0x30B464u;
            goto label_30b464;
        }
    }
    ctx->pc = 0x30B460u;
label_30b460:
    // 0x30b460: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x30b460u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_30b464:
    // 0x30b464: 0x123842  srl         $a3, $s2, 1
    ctx->pc = 0x30b464u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_30b468:
    // 0x30b468: 0x131043  sra         $v0, $s3, 1
    ctx->pc = 0x30b468u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), 1));
label_30b46c:
    // 0x30b46c: 0x3c053fe0  lui         $a1, 0x3FE0
    ctx->pc = 0x30b46cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16352 << 16));
label_30b470:
    // 0x30b470: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x30b470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_30b474:
    // 0x30b474: 0xf41025  or          $v0, $a3, $s4
    ctx->pc = 0x30b474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 20));
label_30b478:
    // 0x30b478: 0x32640001  andi        $a0, $s3, 0x1
    ctx->pc = 0x30b478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_30b47c:
    // 0x30b47c: 0x111d00  sll         $v1, $s1, 20
    ctx->pc = 0x30b47cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 20));
label_30b480:
    // 0x30b480: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x30b480u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_30b484:
    // 0x30b484: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x30b484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_30b488:
    // 0x30b488: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x30b488u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
label_30b48c:
    // 0x30b48c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x30b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_30b490:
    // 0x30b490: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30b490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_30b494:
    // 0x30b494: 0x2a2a824  and         $s5, $s5, $v0
    ctx->pc = 0x30b494u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_30b498:
    // 0x30b498: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30b498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30b49c:
    // 0x30b49c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30b49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_30b4a0:
    // 0x30b4a0: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x30b4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
label_30b4a4:
    // 0x30b4a4: 0x2a4a825  or          $s5, $s5, $a0
    ctx->pc = 0x30b4a4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 4));
label_30b4a8:
    // 0x30b4a8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30b4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_30b4ac:
    // 0x30b4ac: 0x2a2a824  and         $s5, $s5, $v0
    ctx->pc = 0x30b4acu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_30b4b0:
    // 0x30b4b0: 0x2a38025  or          $s0, $s5, $v1
    ctx->pc = 0x30b4b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 21) | GPR_U64(ctx, 3));
label_30b4b4:
    // 0x30b4b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30b4b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30b4b8:
    // 0x30b4b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30b4b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30b4bc:
    // 0x30b4bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30b4bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_30b4c0:
    // 0x30b4c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30b4c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30b4c4:
    // 0x30b4c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x30b4c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_30b4c8:
    // 0x30b4c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x30b4c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30b4cc:
    // 0x30b4cc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x30b4ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_30b4d0:
    // 0x30b4d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30b4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_30b4d4:
    // 0x30b4d4: 0x3e00008  jr          $ra
label_30b4d8:
    if (ctx->pc == 0x30B4D8u) {
        ctx->pc = 0x30B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4D4u;
        // 0x30b4d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B4DCu;
        goto label_30b4dc;
    }
    ctx->pc = 0x30B4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B4D4u;
        // 0x30b4d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B4DCu;
label_30b4dc:
    // 0x30b4dc: 0x0  nop
    ctx->pc = 0x30b4dcu;
    // NOP
label_30b4e0:
    // 0x30b4e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30b4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_30b4e4:
    // 0x30b4e4: 0x460062c6  mov.s       $f11, $f12
    ctx->pc = 0x30b4e4u;
    ctx->f[11] = FPU_MOV_S(ctx->f[12]);
label_30b4e8:
    // 0x30b4e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30b4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_30b4ec:
    // 0x30b4ec: 0xe7b60028  swc1        $f22, 0x28($sp)
    ctx->pc = 0x30b4ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_30b4f0:
    // 0x30b4f0: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x30b4f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_30b4f4:
    // 0x30b4f4: 0x44045800  mfc1        $a0, $f11
    ctx->pc = 0x30b4f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[11], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_30b4f8:
    // 0x30b4f8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x30b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_30b4fc:
    // 0x30b4fc: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x30b4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_30b500:
    // 0x30b500: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30b500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30b504:
    // 0x30b504: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x30b504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_30b508:
    // 0x30b508: 0x14650009  bne         $v1, $a1, . + 4 + (0x9 << 2)
label_30b50c:
    if (ctx->pc == 0x30B50Cu) {
        ctx->pc = 0x30B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B508u;
        // 0x30b50c: 0xe7b40018  swc1        $f20, 0x18($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B510u;
        goto label_30b510;
    }
    ctx->pc = 0x30B508u;
    {
        const bool branch_taken_0x30b508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x30B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B508u;
        // 0x30b50c: 0xe7b40018  swc1        $f20, 0x18($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b508) {
            ctx->pc = 0x30B530u;
            goto label_30b530;
        }
    }
    ctx->pc = 0x30B510u;
label_30b510:
    // 0x30b510: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30b510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30b514:
    // 0x30b514: 0x1c8000f6  bgtz        $a0, . + 4 + (0xF6 << 2)
label_30b518:
    if (ctx->pc == 0x30B518u) {
        ctx->pc = 0x30B518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B514u;
        // 0x30b518: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B51Cu;
        goto label_30b51c;
    }
    ctx->pc = 0x30B514u;
    {
        const bool branch_taken_0x30b514 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x30B518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B514u;
        // 0x30b518: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b514) {
            ctx->pc = 0x30B8F0u;
            goto label_30b8f0;
        }
    }
    ctx->pc = 0x30B51Cu;
label_30b51c:
    // 0x30b51c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x30b51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_30b520:
    // 0x30b520: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x30b520u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
label_30b524:
    // 0x30b524: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30b524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30b528:
    // 0x30b528: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_30b52c:
    if (ctx->pc == 0x30B52Cu) {
        ctx->pc = 0x30B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B528u;
        // 0x30b52c: 0xc7b60028  lwc1        $f22, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B530u;
        goto label_30b530;
    }
    ctx->pc = 0x30B528u;
    {
        const bool branch_taken_0x30b528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B528u;
        // 0x30b52c: 0xc7b60028  lwc1        $f22, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b528) {
            ctx->pc = 0x30B8F4u;
            goto label_30b8f4;
        }
    }
    ctx->pc = 0x30B530u;
label_30b530:
    // 0x30b530: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x30b530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_30b534:
    // 0x30b534: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_30b538:
    if (ctx->pc == 0x30B538u) {
        ctx->pc = 0x30B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B534u;
        // 0x30b538: 0x3c023eff  lui         $v0, 0x3EFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B53Cu;
        goto label_30b53c;
    }
    ctx->pc = 0x30B534u;
    {
        const bool branch_taken_0x30b534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B534u;
        // 0x30b538: 0x3c023eff  lui         $v0, 0x3EFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b534) {
            ctx->pc = 0x30B558u;
            goto label_30b558;
        }
    }
    ctx->pc = 0x30B53Cu;
label_30b53c:
    // 0x30b53c: 0x460b5801  sub.s       $f0, $f11, $f11
    ctx->pc = 0x30b53cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[11]);
label_30b540:
    // 0x30b540: 0x0  nop
    ctx->pc = 0x30b540u;
    // NOP
label_30b544:
    // 0x30b544: 0x0  nop
    ctx->pc = 0x30b544u;
    // NOP
label_30b548:
    // 0x30b548: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x30b548u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
label_30b54c:
    // 0x30b54c: 0x100000e8  b           . + 4 + (0xE8 << 2)
label_30b550:
    if (ctx->pc == 0x30B550u) {
        ctx->pc = 0x30B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B54Cu;
        // 0x30b550: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B554u;
        goto label_30b554;
    }
    ctx->pc = 0x30B54Cu;
    {
        const bool branch_taken_0x30b54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B54Cu;
        // 0x30b550: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b54c) {
            ctx->pc = 0x30B8F0u;
            goto label_30b8f0;
        }
    }
    ctx->pc = 0x30B554u;
label_30b554:
    // 0x30b554: 0x0  nop
    ctx->pc = 0x30b554u;
    // NOP
label_30b558:
    // 0x30b558: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30b558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30b55c:
    // 0x30b55c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x30b55cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_30b560:
    // 0x30b560: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
label_30b564:
    if (ctx->pc == 0x30B564u) {
        ctx->pc = 0x30B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B560u;
        // 0x30b564: 0x3c022300  lui         $v0, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B568u;
        goto label_30b568;
    }
    ctx->pc = 0x30B560u;
    {
        const bool branch_taken_0x30b560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B560u;
        // 0x30b564: 0x3c022300  lui         $v0, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b560) {
            ctx->pc = 0x30B688u;
            goto label_30b688;
        }
    }
    ctx->pc = 0x30B568u;
label_30b568:
    // 0x30b568: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x30b568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_30b56c:
    // 0x30b56c: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x30b56cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
label_30b570:
    // 0x30b570: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30b570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30b574:
    // 0x30b574: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x30b574u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_30b578:
    // 0x30b578: 0x104000dd  beqz        $v0, . + 4 + (0xDD << 2)
label_30b57c:
    if (ctx->pc == 0x30B57Cu) {
        ctx->pc = 0x30B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B578u;
        // 0x30b57c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B580u;
        goto label_30b580;
    }
    ctx->pc = 0x30B578u;
    {
        const bool branch_taken_0x30b578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B578u;
        // 0x30b57c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b578) {
            ctx->pc = 0x30B8F0u;
            goto label_30b8f0;
        }
    }
    ctx->pc = 0x30B580u;
label_30b580:
    // 0x30b580: 0x460b5d42  mul.s       $f21, $f11, $f11
    ctx->pc = 0x30b580u;
    ctx->f[21] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
label_30b584:
    // 0x30b584: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x30b584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
label_30b588:
    // 0x30b588: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x30b588u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
label_30b58c:
    // 0x30b58c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30b58cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30b590:
    // 0x30b590: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x30b590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
label_30b594:
    // 0x30b594: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x30b594u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
label_30b598:
    // 0x30b598: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x30b598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_30b59c:
    // 0x30b59c: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x30b59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
label_30b5a0:
    // 0x30b5a0: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x30b5a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
label_30b5a4:
    // 0x30b5a4: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x30b5a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_30b5a8:
    // 0x30b5a8: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x30b5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
label_30b5ac:
    // 0x30b5ac: 0x3421c62d  ori         $at, $at, 0xC62D
    ctx->pc = 0x30b5acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50733);
label_30b5b0:
    // 0x30b5b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30b5b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30b5b4:
    // 0x30b5b4: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x30b5b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_30b5b8:
    // 0x30b5b8: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x30b5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
label_30b5bc:
    // 0x30b5bc: 0x34213360  ori         $at, $at, 0x3360
    ctx->pc = 0x30b5bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13152);
label_30b5c0:
    // 0x30b5c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30b5c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30b5c4:
    // 0x30b5c4: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x30b5c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
label_30b5c8:
    // 0x30b5c8: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x30b5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
label_30b5cc:
    // 0x30b5cc: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x30b5ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
label_30b5d0:
    // 0x30b5d0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x30b5d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_30b5d4:
    // 0x30b5d4: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x30b5d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
label_30b5d8:
    // 0x30b5d8: 0x3421572c  ori         $at, $at, 0x572C
    ctx->pc = 0x30b5d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22316);
label_30b5dc:
    // 0x30b5dc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x30b5dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30b5e0:
    // 0x30b5e0: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x30b5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
label_30b5e4:
    // 0x30b5e4: 0x3421b08f  ori         $at, $at, 0xB08F
    ctx->pc = 0x30b5e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45199);
label_30b5e8:
    // 0x30b5e8: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x30b5e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_30b5ec:
    // 0x30b5ec: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x30b5ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_30b5f0:
    // 0x30b5f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30b5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_30b5f4:
    // 0x30b5f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x30b5f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_30b5f8:
    // 0x30b5f8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x30b5f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_30b5fc:
    // 0x30b5fc: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x30b5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
label_30b600:
    // 0x30b600: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x30b600u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
label_30b604:
    // 0x30b604: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30b604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30b608:
    // 0x30b608: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x30b608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
label_30b60c:
    // 0x30b60c: 0x3421d138  ori         $at, $at, 0xD138
    ctx->pc = 0x30b60cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53560);
label_30b610:
    // 0x30b610: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x30b610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_30b614:
    // 0x30b614: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x30b614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_30b618:
    // 0x30b618: 0x3421aaaa  ori         $at, $at, 0xAAAA
    ctx->pc = 0x30b618u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43690);
label_30b61c:
    // 0x30b61c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x30b61cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_30b620:
    // 0x30b620: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x30b620u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_30b624:
    // 0x30b624: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x30b624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_30b628:
    // 0x30b628: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x30b628u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
label_30b62c:
    // 0x30b62c: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x30b62cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_30b630:
    // 0x30b630: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x30b630u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
label_30b634:
    // 0x30b634: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x30b634u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
label_30b638:
    // 0x30b638: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x30b638u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_30b63c:
    // 0x30b63c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x30b63cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_30b640:
    // 0x30b640: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x30b640u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
label_30b644:
    // 0x30b644: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x30b644u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_30b648:
    // 0x30b648: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x30b648u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_30b64c:
    // 0x30b64c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x30b64cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_30b650:
    // 0x30b650: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x30b650u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
label_30b654:
    // 0x30b654: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x30b654u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
label_30b658:
    // 0x30b658: 0x46031580  add.s       $f22, $f2, $f3
    ctx->pc = 0x30b658u;
    ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_30b65c:
    // 0x30b65c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x30b65cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_30b660:
    // 0x30b660: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x30b660u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
label_30b664:
    // 0x30b664: 0x4601ad02  mul.s       $f20, $f21, $f1
    ctx->pc = 0x30b664u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_30b668:
    // 0x30b668: 0x0  nop
    ctx->pc = 0x30b668u;
    // NOP
label_30b66c:
    // 0x30b66c: 0x0  nop
    ctx->pc = 0x30b66cu;
    // NOP
label_30b670:
    // 0x30b670: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x30b670u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[22]); }
label_30b674:
    // 0x30b674: 0x460c5842  mul.s       $f1, $f11, $f12
    ctx->pc = 0x30b674u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[12]);
label_30b678:
    // 0x30b678: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x30b678u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_30b67c:
    // 0x30b67c: 0x46005801  sub.s       $f0, $f11, $f0
    ctx->pc = 0x30b67cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[0]);
label_30b680:
    // 0x30b680: 0x1000009b  b           . + 4 + (0x9B << 2)
label_30b684:
    if (ctx->pc == 0x30B684u) {
        ctx->pc = 0x30B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B680u;
        // 0x30b684: 0x46005001  sub.s       $f0, $f10, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B688u;
        goto label_30b688;
    }
    ctx->pc = 0x30B680u;
    {
        const bool branch_taken_0x30b680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B680u;
        // 0x30b684: 0x46005001  sub.s       $f0, $f10, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b680) {
            ctx->pc = 0x30B8F0u;
            goto label_30b8f0;
        }
    }
    ctx->pc = 0x30B688u;
label_30b688:
    // 0x30b688: 0x481004b  bgez        $a0, . + 4 + (0x4B << 2)
label_30b68c:
    if (ctx->pc == 0x30B68Cu) {
        ctx->pc = 0x30B690u;
        goto label_30b690;
    }
    ctx->pc = 0x30B688u;
    {
        const bool branch_taken_0x30b688 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x30b688) {
            ctx->pc = 0x30B7B8u;
            goto label_30b7b8;
        }
    }
    ctx->pc = 0x30B690u;
label_30b690:
    // 0x30b690: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30b690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_30b694:
    // 0x30b694: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x30b694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_30b698:
    // 0x30b698: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x30b698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_30b69c:
    // 0x30b69c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x30b69cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_30b6a0:
    // 0x30b6a0: 0x460a5880  add.s       $f2, $f11, $f10
    ctx->pc = 0x30b6a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
label_30b6a4:
    // 0x30b6a4: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x30b6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
label_30b6a8:
    // 0x30b6a8: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x30b6a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
label_30b6ac:
    // 0x30b6ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30b6acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30b6b0:
    // 0x30b6b0: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x30b6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
label_30b6b4:
    // 0x30b6b4: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x30b6b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
label_30b6b8:
    // 0x30b6b8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x30b6b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_30b6bc:
    // 0x30b6bc: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x30b6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
label_30b6c0:
    // 0x30b6c0: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x30b6c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
label_30b6c4:
    // 0x30b6c4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x30b6c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_30b6c8:
    // 0x30b6c8: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x30b6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
label_30b6cc:
    // 0x30b6cc: 0x3421c62d  ori         $at, $at, 0xC62D
    ctx->pc = 0x30b6ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50733);
label_30b6d0:
    // 0x30b6d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30b6d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30b6d4:
    // 0x30b6d4: 0x46031542  mul.s       $f21, $f2, $f3
    ctx->pc = 0x30b6d4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_30b6d8:
    // 0x30b6d8: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x30b6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
label_30b6dc:
    // 0x30b6dc: 0x3421572c  ori         $at, $at, 0x572C
    ctx->pc = 0x30b6dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22316);
label_30b6e0:
    // 0x30b6e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30b6e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30b6e4:
    // 0x30b6e4: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x30b6e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
label_30b6e8:
    // 0x30b6e8: 0x34213360  ori         $at, $at, 0x3360
    ctx->pc = 0x30b6e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13152);
label_30b6ec:
    // 0x30b6ec: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x30b6ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30b6f0:
    // 0x30b6f0: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x30b6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
label_30b6f4:
    // 0x30b6f4: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x30b6f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
label_30b6f8:
    // 0x30b6f8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x30b6f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_30b6fc:
    // 0x30b6fc: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x30b6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
label_30b700:
    // 0x30b700: 0x3421b08f  ori         $at, $at, 0xB08F
    ctx->pc = 0x30b700u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45199);
label_30b704:
    // 0x30b704: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x30b704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_30b708:
    // 0x30b708: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x30b708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_30b70c:
    // 0x30b70c: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x30b70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
label_30b710:
    // 0x30b710: 0x3421d138  ori         $at, $at, 0xD138
    ctx->pc = 0x30b710u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53560);
label_30b714:
    // 0x30b714: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x30b714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_30b718:
    // 0x30b718: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x30b718u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_30b71c:
    // 0x30b71c: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x30b71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_30b720:
    // 0x30b720: 0x3421aaaa  ori         $at, $at, 0xAAAA
    ctx->pc = 0x30b720u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43690);
label_30b724:
    // 0x30b724: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x30b724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_30b728:
    // 0x30b728: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x30b728u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_30b72c:
    // 0x30b72c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x30b72cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_30b730:
    // 0x30b730: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x30b730u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_30b734:
    // 0x30b734: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x30b734u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_30b738:
    // 0x30b738: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x30b738u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_30b73c:
    // 0x30b73c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x30b73cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_30b740:
    // 0x30b740: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x30b740u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_30b744:
    // 0x30b744: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x30b744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_30b748:
    // 0x30b748: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x30b748u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_30b74c:
    // 0x30b74c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x30b74cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
label_30b750:
    // 0x30b750: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x30b750u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_30b754:
    // 0x30b754: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x30b754u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_30b758:
    // 0x30b758: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x30b758u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_30b75c:
    // 0x30b75c: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x30b75cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
label_30b760:
    // 0x30b760: 0x460a0d80  add.s       $f22, $f1, $f10
    ctx->pc = 0x30b760u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
label_30b764:
    // 0x30b764: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x30b764u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_30b768:
    // 0x30b768: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x30b768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
label_30b76c:
    // 0x30b76c: 0xc0c3482  jal         func_30D208
label_30b770:
    if (ctx->pc == 0x30B770u) {
        ctx->pc = 0x30B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B76Cu;
        // 0x30b770: 0x4600ad02  mul.s       $f20, $f21, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B774u;
        goto label_30b774;
    }
    ctx->pc = 0x30B76Cu;
    SET_GPR_U32(ctx, 31, 0x30B774u);
    ctx->pc = 0x30B770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B76Cu;
    // 0x30b770: 0x4600ad02  mul.s       $f20, $f21, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D208u, 0x30B76Cu, 0x30B774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B774u;
label_30b774:
    // 0x30b774: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x30b774u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_30b778:
    // 0x30b778: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x30b778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
label_30b77c:
    // 0x30b77c: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x30b77cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
label_30b780:
    // 0x30b780: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30b780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30b784:
    // 0x30b784: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x30b784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_30b788:
    // 0x30b788: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x30b788u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
label_30b78c:
    // 0x30b78c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30b78cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30b790:
    // 0x30b790: 0x0  nop
    ctx->pc = 0x30b790u;
    // NOP
label_30b794:
    // 0x30b794: 0x0  nop
    ctx->pc = 0x30b794u;
    // NOP
label_30b798:
    // 0x30b798: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x30b798u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[22]); }
label_30b79c:
    // 0x30b79c: 0x460d6002  mul.s       $f0, $f12, $f13
    ctx->pc = 0x30b79cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
label_30b7a0:
    // 0x30b7a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x30b7a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_30b7a4:
    // 0x30b7a4: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x30b7a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_30b7a8:
    // 0x30b7a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x30b7a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_30b7ac:
    // 0x30b7ac: 0x1000004f  b           . + 4 + (0x4F << 2)
label_30b7b0:
    if (ctx->pc == 0x30B7B0u) {
        ctx->pc = 0x30B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B7ACu;
        // 0x30b7b0: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B7B4u;
        goto label_30b7b4;
    }
    ctx->pc = 0x30B7ACu;
    {
        const bool branch_taken_0x30b7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B7ACu;
        // 0x30b7b0: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b7ac) {
            ctx->pc = 0x30B8ECu;
            goto label_30b8ec;
        }
    }
    ctx->pc = 0x30B7B4u;
label_30b7b4:
    // 0x30b7b4: 0x0  nop
    ctx->pc = 0x30b7b4u;
    // NOP
label_30b7b8:
    // 0x30b7b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30b7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_30b7bc:
    // 0x30b7bc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x30b7bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_30b7c0:
    // 0x30b7c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x30b7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_30b7c4:
    // 0x30b7c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30b7c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30b7c8:
    // 0x30b7c8: 0x460ba001  sub.s       $f0, $f20, $f11
    ctx->pc = 0x30b7c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[11]);
label_30b7cc:
    // 0x30b7cc: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x30b7ccu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_30b7d0:
    // 0x30b7d0: 0xc0c3482  jal         func_30D208
label_30b7d4:
    if (ctx->pc == 0x30B7D4u) {
        ctx->pc = 0x30B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B7D0u;
        // 0x30b7d4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B7D8u;
        goto label_30b7d8;
    }
    ctx->pc = 0x30B7D0u;
    SET_GPR_U32(ctx, 31, 0x30B7D8u);
    ctx->pc = 0x30B7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B7D0u;
    // 0x30b7d4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D208u, 0x30B7D0u, 0x30B7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B7D8u;
label_30b7d8:
    // 0x30b7d8: 0x460002c6  mov.s       $f11, $f0
    ctx->pc = 0x30b7d8u;
    ctx->f[11] = FPU_MOV_S(ctx->f[0]);
label_30b7dc:
    // 0x30b7dc: 0x46005b46  mov.s       $f13, $f11
    ctx->pc = 0x30b7dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[11]);
label_30b7e0:
    // 0x30b7e0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x30b7e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_30b7e4:
    // 0x30b7e4: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x30b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
label_30b7e8:
    // 0x30b7e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x30b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_30b7ec:
    // 0x30b7ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x30b7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_30b7f0:
    // 0x30b7f0: 0x44835800  mtc1        $v1, $f11
    ctx->pc = 0x30b7f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_30b7f4:
    // 0x30b7f4: 0x460b58c2  mul.s       $f3, $f11, $f11
    ctx->pc = 0x30b7f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
label_30b7f8:
    // 0x30b7f8: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x30b7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
label_30b7fc:
    // 0x30b7fc: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x30b7fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
label_30b800:
    // 0x30b800: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30b800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30b804:
    // 0x30b804: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x30b804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
label_30b808:
    // 0x30b808: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x30b808u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
label_30b80c:
    // 0x30b80c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x30b80cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_30b810:
    // 0x30b810: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x30b810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
label_30b814:
    // 0x30b814: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x30b814u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
label_30b818:
    // 0x30b818: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x30b818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_30b81c:
    // 0x30b81c: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x30b81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
label_30b820:
    // 0x30b820: 0x3421c62d  ori         $at, $at, 0xC62D
    ctx->pc = 0x30b820u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50733);
label_30b824:
    // 0x30b824: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30b824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30b828:
    // 0x30b828: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x30b828u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_30b82c:
    // 0x30b82c: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x30b82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
label_30b830:
    // 0x30b830: 0x34213360  ori         $at, $at, 0x3360
    ctx->pc = 0x30b830u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13152);
label_30b834:
    // 0x30b834: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x30b834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30b838:
    // 0x30b838: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x30b838u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_30b83c:
    // 0x30b83c: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x30b83cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
label_30b840:
    // 0x30b840: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x30b840u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
label_30b844:
    // 0x30b844: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x30b844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_30b848:
    // 0x30b848: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x30b848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
label_30b84c:
    // 0x30b84c: 0x3421572c  ori         $at, $at, 0x572C
    ctx->pc = 0x30b84cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22316);
label_30b850:
    // 0x30b850: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x30b850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_30b854:
    // 0x30b854: 0x4603a8c1  sub.s       $f3, $f21, $f3
    ctx->pc = 0x30b854u;
    ctx->f[3] = FPU_SUB_S(ctx->f[21], ctx->f[3]);
label_30b858:
    // 0x30b858: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x30b858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
label_30b85c:
    // 0x30b85c: 0x3421b08f  ori         $at, $at, 0xB08F
    ctx->pc = 0x30b85cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45199);
label_30b860:
    // 0x30b860: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x30b860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_30b864:
    // 0x30b864: 0x460b6880  add.s       $f2, $f13, $f11
    ctx->pc = 0x30b864u;
    ctx->f[2] = FPU_ADD_S(ctx->f[13], ctx->f[11]);
label_30b868:
    // 0x30b868: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x30b868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_30b86c:
    // 0x30b86c: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x30b86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_30b870:
    // 0x30b870: 0x3421aaaa  ori         $at, $at, 0xAAAA
    ctx->pc = 0x30b870u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43690);
label_30b874:
    // 0x30b874: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x30b874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_30b878:
    // 0x30b878: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x30b878u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_30b87c:
    // 0x30b87c: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x30b87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
label_30b880:
    // 0x30b880: 0x3421d138  ori         $at, $at, 0xD138
    ctx->pc = 0x30b880u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53560);
label_30b884:
    // 0x30b884: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x30b884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_30b888:
    // 0x30b888: 0x0  nop
    ctx->pc = 0x30b888u;
    // NOP
label_30b88c:
    // 0x30b88c: 0x0  nop
    ctx->pc = 0x30b88cu;
    // NOP
label_30b890:
    // 0x30b890: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x30b890u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
label_30b894:
    // 0x30b894: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x30b894u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_30b898:
    // 0x30b898: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x30b898u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_30b89c:
    // 0x30b89c: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x30b89cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
label_30b8a0:
    // 0x30b8a0: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x30b8a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
label_30b8a4:
    // 0x30b8a4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x30b8a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_30b8a8:
    // 0x30b8a8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x30b8a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_30b8ac:
    // 0x30b8ac: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x30b8acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
label_30b8b0:
    // 0x30b8b0: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x30b8b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_30b8b4:
    // 0x30b8b4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x30b8b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_30b8b8:
    // 0x30b8b8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x30b8b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_30b8bc:
    // 0x30b8bc: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x30b8bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
label_30b8c0:
    // 0x30b8c0: 0x46140d80  add.s       $f22, $f1, $f20
    ctx->pc = 0x30b8c0u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_30b8c4:
    // 0x30b8c4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x30b8c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_30b8c8:
    // 0x30b8c8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x30b8c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_30b8cc:
    // 0x30b8cc: 0x4600ad02  mul.s       $f20, $f21, $f0
    ctx->pc = 0x30b8ccu;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_30b8d0:
    // 0x30b8d0: 0x0  nop
    ctx->pc = 0x30b8d0u;
    // NOP
label_30b8d4:
    // 0x30b8d4: 0x0  nop
    ctx->pc = 0x30b8d4u;
    // NOP
label_30b8d8:
    // 0x30b8d8: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x30b8d8u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[22]); }
label_30b8dc:
    // 0x30b8dc: 0x460d6002  mul.s       $f0, $f12, $f13
    ctx->pc = 0x30b8dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
label_30b8e0:
    // 0x30b8e0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x30b8e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_30b8e4:
    // 0x30b8e4: 0x46005800  add.s       $f0, $f11, $f0
    ctx->pc = 0x30b8e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
label_30b8e8:
    // 0x30b8e8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x30b8e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_30b8ec:
    // 0x30b8ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30b8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30b8f0:
    // 0x30b8f0: 0xc7b60028  lwc1        $f22, 0x28($sp)
    ctx->pc = 0x30b8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_30b8f4:
    // 0x30b8f4: 0xc7b50020  lwc1        $f21, 0x20($sp)
    ctx->pc = 0x30b8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_30b8f8:
    // 0x30b8f8: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x30b8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_30b8fc:
    // 0x30b8fc: 0x3e00008  jr          $ra
label_30b900:
    if (ctx->pc == 0x30B900u) {
        ctx->pc = 0x30B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B8FCu;
        // 0x30b900: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B904u;
        goto label_30b904;
    }
    ctx->pc = 0x30B8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B8FCu;
        // 0x30b900: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B904u;
label_30b904:
    // 0x30b904: 0x0  nop
    ctx->pc = 0x30b904u;
    // NOP
label_30b908:
    // 0x30b908: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30b908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_30b90c:
    // 0x30b90c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30b90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_30b910:
    // 0x30b910: 0x44116000  mfc1        $s1, $f12
    ctx->pc = 0x30b910u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_30b914:
    // 0x30b914: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30b914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_30b918:
    // 0x30b918: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30b918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_30b91c:
    // 0x30b91c: 0xe7b60028  swc1        $f22, 0x28($sp)
    ctx->pc = 0x30b91cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_30b920:
    // 0x30b920: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x30b920u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_30b924:
    // 0x30b924: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x30b924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_30b928:
    // 0x30b928: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30b928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30b92c:
    // 0x30b92c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30b92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_30b930:
    // 0x30b930: 0x2228024  and         $s0, $s1, $v0
    ctx->pc = 0x30b930u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_30b934:
    // 0x30b934: 0x1603000c  bne         $s0, $v1, . + 4 + (0xC << 2)
label_30b938:
    if (ctx->pc == 0x30B938u) {
        ctx->pc = 0x30B938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B934u;
        // 0x30b938: 0xe7b40018  swc1        $f20, 0x18($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B93Cu;
        goto label_30b93c;
    }
    ctx->pc = 0x30B934u;
    {
        const bool branch_taken_0x30b934 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x30B938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B934u;
        // 0x30b938: 0xe7b40018  swc1        $f20, 0x18($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b934) {
            ctx->pc = 0x30B968u;
            goto label_30b968;
        }
    }
    ctx->pc = 0x30B93Cu;
label_30b93c:
    // 0x30b93c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x30b93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_30b940:
    // 0x30b940: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x30b940u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
label_30b944:
    // 0x30b944: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30b944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30b948:
    // 0x30b948: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x30b948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
label_30b94c:
    // 0x30b94c: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x30b94cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
label_30b950:
    // 0x30b950: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30b950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30b954:
    // 0x30b954: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x30b954u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_30b958:
    // 0x30b958: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x30b958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_30b95c:
    // 0x30b95c: 0x100000ca  b           . + 4 + (0xCA << 2)
label_30b960:
    if (ctx->pc == 0x30B960u) {
        ctx->pc = 0x30B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B95Cu;
        // 0x30b960: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B964u;
        goto label_30b964;
    }
    ctx->pc = 0x30B95Cu;
    {
        const bool branch_taken_0x30b95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B95Cu;
        // 0x30b960: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b95c) {
            ctx->pc = 0x30BC88u;
            goto label_30bc88;
        }
    }
    ctx->pc = 0x30B964u;
label_30b964:
    // 0x30b964: 0x0  nop
    ctx->pc = 0x30b964u;
    // NOP
label_30b968:
    // 0x30b968: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x30b968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_30b96c:
    // 0x30b96c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_30b970:
    if (ctx->pc == 0x30B970u) {
        ctx->pc = 0x30B970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B96Cu;
        // 0x30b970: 0x3c023eff  lui         $v0, 0x3EFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B974u;
        goto label_30b974;
    }
    ctx->pc = 0x30B96Cu;
    {
        const bool branch_taken_0x30b96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B96Cu;
        // 0x30b970: 0x3c023eff  lui         $v0, 0x3EFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b96c) {
            ctx->pc = 0x30B990u;
            goto label_30b990;
        }
    }
    ctx->pc = 0x30B974u;
label_30b974:
    // 0x30b974: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x30b974u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
label_30b978:
    // 0x30b978: 0x0  nop
    ctx->pc = 0x30b978u;
    // NOP
label_30b97c:
    // 0x30b97c: 0x0  nop
    ctx->pc = 0x30b97cu;
    // NOP
label_30b980:
    // 0x30b980: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x30b980u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
label_30b984:
    // 0x30b984: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_30b988:
    if (ctx->pc == 0x30B988u) {
        ctx->pc = 0x30B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B984u;
        // 0x30b988: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B98Cu;
        goto label_30b98c;
    }
    ctx->pc = 0x30B984u;
    {
        const bool branch_taken_0x30b984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B984u;
        // 0x30b988: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b984) {
            ctx->pc = 0x30BC8Cu;
            goto label_30bc8c;
        }
    }
    ctx->pc = 0x30B98Cu;
label_30b98c:
    // 0x30b98c: 0x0  nop
    ctx->pc = 0x30b98cu;
    // NOP
label_30b990:
    // 0x30b990: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30b990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30b994:
    // 0x30b994: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x30b994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_30b998:
    // 0x30b998: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
label_30b99c:
    if (ctx->pc == 0x30B99Cu) {
        ctx->pc = 0x30B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B998u;
        // 0x30b99c: 0x3c0231ff  lui         $v0, 0x31FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12799 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B9A0u;
        goto label_30b9a0;
    }
    ctx->pc = 0x30B998u;
    {
        const bool branch_taken_0x30b998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B998u;
        // 0x30b99c: 0x3c0231ff  lui         $v0, 0x31FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12799 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b998) {
            ctx->pc = 0x30BAC8u;
            goto label_30bac8;
        }
    }
    ctx->pc = 0x30B9A0u;
label_30b9a0:
    // 0x30b9a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30b9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30b9a4:
    // 0x30b9a4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x30b9a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_30b9a8:
    // 0x30b9a8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_30b9ac:
    if (ctx->pc == 0x30B9ACu) {
        ctx->pc = 0x30B9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B9A8u;
        // 0x30b9ac: 0x460c6502  mul.s       $f20, $f12, $f12 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B9B0u;
        goto label_30b9b0;
    }
    ctx->pc = 0x30B9A8u;
    {
        const bool branch_taken_0x30b9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30b9a8) {
            ctx->pc = 0x30B9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B9A8u;
            // 0x30b9ac: 0x460c6502  mul.s       $f20, $f12, $f12 (Delay Slot)
            ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B9E0u;
            goto label_30b9e0;
        }
    }
    ctx->pc = 0x30B9B0u;
label_30b9b0:
    // 0x30b9b0: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x30b9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
label_30b9b4:
    // 0x30b9b4: 0x3421f2c9  ori         $at, $at, 0xF2C9
    ctx->pc = 0x30b9b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62153);
label_30b9b8:
    // 0x30b9b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30b9b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30b9bc:
    // 0x30b9bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30b9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_30b9c0:
    // 0x30b9c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30b9c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30b9c4:
    // 0x30b9c4: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x30b9c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_30b9c8:
    // 0x30b9c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30b9c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30b9cc:
    // 0x30b9cc: 0x4500003e  bc1f        . + 4 + (0x3E << 2)
label_30b9d0:
    if (ctx->pc == 0x30B9D0u) {
        ctx->pc = 0x30B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B9CCu;
        // 0x30b9d0: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B9D4u;
        goto label_30b9d4;
    }
    ctx->pc = 0x30B9CCu;
    {
        const bool branch_taken_0x30b9cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B9CCu;
        // 0x30b9d0: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b9cc) {
            ctx->pc = 0x30BAC8u;
            goto label_30bac8;
        }
    }
    ctx->pc = 0x30B9D4u;
label_30b9d4:
    // 0x30b9d4: 0x100000ad  b           . + 4 + (0xAD << 2)
label_30b9d8:
    if (ctx->pc == 0x30B9D8u) {
        ctx->pc = 0x30B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B9D4u;
        // 0x30b9d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B9DCu;
        goto label_30b9dc;
    }
    ctx->pc = 0x30B9D4u;
    {
        const bool branch_taken_0x30b9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B9D4u;
        // 0x30b9d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b9d4) {
            ctx->pc = 0x30BC8Cu;
            goto label_30bc8c;
        }
    }
    ctx->pc = 0x30B9DCu;
label_30b9dc:
    // 0x30b9dc: 0x0  nop
    ctx->pc = 0x30b9dcu;
    // NOP
label_30b9e0:
    // 0x30b9e0: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x30b9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
label_30b9e4:
    // 0x30b9e4: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x30b9e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
label_30b9e8:
    // 0x30b9e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30b9e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30b9ec:
    // 0x30b9ec: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x30b9ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
label_30b9f0:
    // 0x30b9f0: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x30b9f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
label_30b9f4:
    // 0x30b9f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x30b9f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_30b9f8:
    // 0x30b9f8: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x30b9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
label_30b9fc:
    // 0x30b9fc: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x30b9fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
label_30ba00:
    // 0x30ba00: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x30ba00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_30ba04:
    // 0x30ba04: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x30ba04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
label_30ba08:
    // 0x30ba08: 0x3421c62d  ori         $at, $at, 0xC62D
    ctx->pc = 0x30ba08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50733);
label_30ba0c:
    // 0x30ba0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30ba0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30ba10:
    // 0x30ba10: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x30ba10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_30ba14:
    // 0x30ba14: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x30ba14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
label_30ba18:
    // 0x30ba18: 0x34213360  ori         $at, $at, 0x3360
    ctx->pc = 0x30ba18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13152);
label_30ba1c:
    // 0x30ba1c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30ba1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30ba20:
    // 0x30ba20: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x30ba20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_30ba24:
    // 0x30ba24: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x30ba24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
label_30ba28:
    // 0x30ba28: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x30ba28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
label_30ba2c:
    // 0x30ba2c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x30ba2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_30ba30:
    // 0x30ba30: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x30ba30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
label_30ba34:
    // 0x30ba34: 0x3421572c  ori         $at, $at, 0x572C
    ctx->pc = 0x30ba34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22316);
label_30ba38:
    // 0x30ba38: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x30ba38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30ba3c:
    // 0x30ba3c: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x30ba3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
label_30ba40:
    // 0x30ba40: 0x3421b08f  ori         $at, $at, 0xB08F
    ctx->pc = 0x30ba40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45199);
label_30ba44:
    // 0x30ba44: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x30ba44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_30ba48:
    // 0x30ba48: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x30ba48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_30ba4c:
    // 0x30ba4c: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x30ba4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_30ba50:
    // 0x30ba50: 0x3421aaaa  ori         $at, $at, 0xAAAA
    ctx->pc = 0x30ba50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43690);
label_30ba54:
    // 0x30ba54: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x30ba54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_30ba58:
    // 0x30ba58: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x30ba58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_30ba5c:
    // 0x30ba5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30ba5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_30ba60:
    // 0x30ba60: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30ba60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30ba64:
    // 0x30ba64: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x30ba64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
label_30ba68:
    // 0x30ba68: 0x3421d138  ori         $at, $at, 0xD138
    ctx->pc = 0x30ba68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53560);
label_30ba6c:
    // 0x30ba6c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x30ba6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_30ba70:
    // 0x30ba70: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x30ba70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_30ba74:
    // 0x30ba74: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x30ba74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_30ba78:
    // 0x30ba78: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x30ba78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
label_30ba7c:
    // 0x30ba7c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x30ba7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_30ba80:
    // 0x30ba80: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x30ba80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_30ba84:
    // 0x30ba84: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x30ba84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_30ba88:
    // 0x30ba88: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x30ba88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_30ba8c:
    // 0x30ba8c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x30ba8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_30ba90:
    // 0x30ba90: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x30ba90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_30ba94:
    // 0x30ba94: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x30ba94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_30ba98:
    // 0x30ba98: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x30ba98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
label_30ba9c:
    // 0x30ba9c: 0x46020d80  add.s       $f22, $f1, $f2
    ctx->pc = 0x30ba9cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_30baa0:
    // 0x30baa0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x30baa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_30baa4:
    // 0x30baa4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x30baa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_30baa8:
    // 0x30baa8: 0x4600a542  mul.s       $f21, $f20, $f0
    ctx->pc = 0x30baa8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_30baac:
    // 0x30baac: 0x0  nop
    ctx->pc = 0x30baacu;
    // NOP
label_30bab0:
    // 0x30bab0: 0x0  nop
    ctx->pc = 0x30bab0u;
    // NOP
label_30bab4:
    // 0x30bab4: 0x4616a9c3  div.s       $f7, $f21, $f22
    ctx->pc = 0x30bab4u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[21], ctx->f[22]); }
label_30bab8:
    // 0x30bab8: 0x46076002  mul.s       $f0, $f12, $f7
    ctx->pc = 0x30bab8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[7]);
label_30babc:
    // 0x30babc: 0x10000072  b           . + 4 + (0x72 << 2)
label_30bac0:
    if (ctx->pc == 0x30BAC0u) {
        ctx->pc = 0x30BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BABCu;
        // 0x30bac0: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BAC4u;
        goto label_30bac4;
    }
    ctx->pc = 0x30BABCu;
    {
        const bool branch_taken_0x30babc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BABCu;
        // 0x30bac0: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30babc) {
            ctx->pc = 0x30BC88u;
            goto label_30bc88;
        }
    }
    ctx->pc = 0x30BAC4u;
label_30bac4:
    // 0x30bac4: 0x0  nop
    ctx->pc = 0x30bac4u;
    // NOP
label_30bac8:
    // 0x30bac8: 0xc0c3926  jal         func_30E498
label_30bacc:
    if (ctx->pc == 0x30BACCu) {
        ctx->pc = 0x30BAD0u;
        goto label_30bad0;
    }
    ctx->pc = 0x30BAC8u;
    SET_GPR_U32(ctx, 31, 0x30BAD0u);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x30BAC8u, 0x30BAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BAD0u;
label_30bad0:
    // 0x30bad0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30bad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_30bad4:
    // 0x30bad4: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x30bad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_30bad8:
    // 0x30bad8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x30bad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_30badc:
    // 0x30badc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30badcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30bae0:
    // 0x30bae0: 0x460051c1  sub.s       $f7, $f10, $f0
    ctx->pc = 0x30bae0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
label_30bae4:
    // 0x30bae4: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x30bae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
label_30bae8:
    // 0x30bae8: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x30bae8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
label_30baec:
    // 0x30baec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30baecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30baf0:
    // 0x30baf0: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x30baf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
label_30baf4:
    // 0x30baf4: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x30baf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
label_30baf8:
    // 0x30baf8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x30baf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30bafc:
    // 0x30bafc: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x30bafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
label_30bb00:
    // 0x30bb00: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x30bb00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
label_30bb04:
    // 0x30bb04: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x30bb04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_30bb08:
    // 0x30bb08: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x30bb08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
label_30bb0c:
    // 0x30bb0c: 0x3421c62d  ori         $at, $at, 0xC62D
    ctx->pc = 0x30bb0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50733);
label_30bb10:
    // 0x30bb10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30bb10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30bb14:
    // 0x30bb14: 0x46023d02  mul.s       $f20, $f7, $f2
    ctx->pc = 0x30bb14u;
    ctx->f[20] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
label_30bb18:
    // 0x30bb18: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x30bb18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
label_30bb1c:
    // 0x30bb1c: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x30bb1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
label_30bb20:
    // 0x30bb20: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x30bb20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_30bb24:
    // 0x30bb24: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x30bb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
label_30bb28:
    // 0x30bb28: 0x34213360  ori         $at, $at, 0x3360
    ctx->pc = 0x30bb28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13152);
label_30bb2c:
    // 0x30bb2c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x30bb2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_30bb30:
    // 0x30bb30: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x30bb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
label_30bb34:
    // 0x30bb34: 0x3421572c  ori         $at, $at, 0x572C
    ctx->pc = 0x30bb34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22316);
label_30bb38:
    // 0x30bb38: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30bb38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30bb3c:
    // 0x30bb3c: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x30bb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
label_30bb40:
    // 0x30bb40: 0x3421b08f  ori         $at, $at, 0xB08F
    ctx->pc = 0x30bb40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45199);
label_30bb44:
    // 0x30bb44: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x30bb44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_30bb48:
    // 0x30bb48: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x30bb48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_30bb4c:
    // 0x30bb4c: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x30bb4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
label_30bb50:
    // 0x30bb50: 0x3421d138  ori         $at, $at, 0xD138
    ctx->pc = 0x30bb50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53560);
label_30bb54:
    // 0x30bb54: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x30bb54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_30bb58:
    // 0x30bb58: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x30bb58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_30bb5c:
    // 0x30bb5c: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x30bb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_30bb60:
    // 0x30bb60: 0x3421aaaa  ori         $at, $at, 0xAAAA
    ctx->pc = 0x30bb60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43690);
label_30bb64:
    // 0x30bb64: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x30bb64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_30bb68:
    // 0x30bb68: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x30bb68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_30bb6c:
    // 0x30bb6c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x30bb6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_30bb70:
    // 0x30bb70: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x30bb70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_30bb74:
    // 0x30bb74: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x30bb74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_30bb78:
    // 0x30bb78: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x30bb78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_30bb7c:
    // 0x30bb7c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x30bb7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_30bb80:
    // 0x30bb80: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x30bb80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_30bb84:
    // 0x30bb84: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x30bb84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_30bb88:
    // 0x30bb88: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x30bb88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_30bb8c:
    // 0x30bb8c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x30bb8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
label_30bb90:
    // 0x30bb90: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x30bb90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_30bb94:
    // 0x30bb94: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x30bb94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_30bb98:
    // 0x30bb98: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x30bb98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_30bb9c:
    // 0x30bb9c: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x30bb9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
label_30bba0:
    // 0x30bba0: 0x460a0d80  add.s       $f22, $f1, $f10
    ctx->pc = 0x30bba0u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
label_30bba4:
    // 0x30bba4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x30bba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_30bba8:
    // 0x30bba8: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x30bba8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
label_30bbac:
    // 0x30bbac: 0xc0c3482  jal         func_30D208
label_30bbb0:
    if (ctx->pc == 0x30BBB0u) {
        ctx->pc = 0x30BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BBACu;
        // 0x30bbb0: 0x4600a542  mul.s       $f21, $f20, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BBB4u;
        goto label_30bbb4;
    }
    ctx->pc = 0x30BBACu;
    SET_GPR_U32(ctx, 31, 0x30BBB4u);
    ctx->pc = 0x30BBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BBACu;
    // 0x30bbb0: 0x4600a542  mul.s       $f21, $f20, $f0 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D208u, 0x30BBACu, 0x30BBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BBB4u;
label_30bbb4:
    // 0x30bbb4: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x30bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
label_30bbb8:
    // 0x30bbb8: 0x34429999  ori         $v0, $v0, 0x9999
    ctx->pc = 0x30bbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39321);
label_30bbbc:
    // 0x30bbbc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x30bbbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_30bbc0:
    // 0x30bbc0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_30bbc4:
    if (ctx->pc == 0x30BBC4u) {
        ctx->pc = 0x30BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BBC0u;
        // 0x30bbc4: 0x46000206  mov.s       $f8, $f0 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BBC8u;
        goto label_30bbc8;
    }
    ctx->pc = 0x30BBC0u;
    {
        const bool branch_taken_0x30bbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BBC0u;
        // 0x30bbc4: 0x46000206  mov.s       $f8, $f0 (Delay Slot)
        ctx->f[8] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bbc0) {
            ctx->pc = 0x30BC08u;
            goto label_30bc08;
        }
    }
    ctx->pc = 0x30BBC8u;
label_30bbc8:
    // 0x30bbc8: 0x0  nop
    ctx->pc = 0x30bbc8u;
    // NOP
label_30bbcc:
    // 0x30bbcc: 0x0  nop
    ctx->pc = 0x30bbccu;
    // NOP
label_30bbd0:
    // 0x30bbd0: 0x4616a9c3  div.s       $f7, $f21, $f22
    ctx->pc = 0x30bbd0u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[21], ctx->f[22]); }
label_30bbd4:
    // 0x30bbd4: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x30bbd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
label_30bbd8:
    // 0x30bbd8: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x30bbd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
label_30bbdc:
    // 0x30bbdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30bbdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30bbe0:
    // 0x30bbe0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x30bbe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_30bbe4:
    // 0x30bbe4: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x30bbe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
label_30bbe8:
    // 0x30bbe8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30bbe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30bbec:
    // 0x30bbec: 0x46074042  mul.s       $f1, $f8, $f7
    ctx->pc = 0x30bbecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
label_30bbf0:
    // 0x30bbf0: 0x46014040  add.s       $f1, $f8, $f1
    ctx->pc = 0x30bbf0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[8], ctx->f[1]);
label_30bbf4:
    // 0x30bbf4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x30bbf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_30bbf8:
    // 0x30bbf8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30bbf8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_30bbfc:
    // 0x30bbfc: 0x1000001f  b           . + 4 + (0x1F << 2)
label_30bc00:
    if (ctx->pc == 0x30BC00u) {
        ctx->pc = 0x30BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BBFCu;
        // 0x30bc00: 0x46011501  sub.s       $f20, $f2, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BC04u;
        goto label_30bc04;
    }
    ctx->pc = 0x30BBFCu;
    {
        const bool branch_taken_0x30bbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BBFCu;
        // 0x30bc00: 0x46011501  sub.s       $f20, $f2, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bbfc) {
            ctx->pc = 0x30BC7Cu;
            goto label_30bc7c;
        }
    }
    ctx->pc = 0x30BC04u;
label_30bc04:
    // 0x30bc04: 0x0  nop
    ctx->pc = 0x30bc04u;
    // NOP
label_30bc08:
    // 0x30bc08: 0x44024000  mfc1        $v0, $f8
    ctx->pc = 0x30bc08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[8], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_30bc0c:
    // 0x30bc0c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30bc0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30bc10:
    // 0x30bc10: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x30bc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
label_30bc14:
    // 0x30bc14: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x30bc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_30bc18:
    // 0x30bc18: 0x44833800  mtc1        $v1, $f7
    ctx->pc = 0x30bc18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_30bc1c:
    // 0x30bc1c: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x30bc1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
label_30bc20:
    // 0x30bc20: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x30bc20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
label_30bc24:
    // 0x30bc24: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x30bc24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
label_30bc28:
    // 0x30bc28: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x30bc28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_30bc2c:
    // 0x30bc2c: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x30bc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_30bc30:
    // 0x30bc30: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x30bc30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
label_30bc34:
    // 0x30bc34: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x30bc34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_30bc38:
    // 0x30bc38: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x30bc38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_30bc3c:
    // 0x30bc3c: 0x46074100  add.s       $f4, $f8, $f7
    ctx->pc = 0x30bc3cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
label_30bc40:
    // 0x30bc40: 0x0  nop
    ctx->pc = 0x30bc40u;
    // NOP
label_30bc44:
    // 0x30bc44: 0x0  nop
    ctx->pc = 0x30bc44u;
    // NOP
label_30bc48:
    // 0x30bc48: 0x4616a943  div.s       $f5, $f21, $f22
    ctx->pc = 0x30bc48u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[21], ctx->f[22]); }
label_30bc4c:
    // 0x30bc4c: 0x46084040  add.s       $f1, $f8, $f8
    ctx->pc = 0x30bc4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
label_30bc50:
    // 0x30bc50: 0x46073880  add.s       $f2, $f7, $f7
    ctx->pc = 0x30bc50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
label_30bc54:
    // 0x30bc54: 0x0  nop
    ctx->pc = 0x30bc54u;
    // NOP
label_30bc58:
    // 0x30bc58: 0x0  nop
    ctx->pc = 0x30bc58u;
    // NOP
label_30bc5c:
    // 0x30bc5c: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x30bc5cu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
label_30bc60:
    // 0x30bc60: 0x46023581  sub.s       $f22, $f6, $f2
    ctx->pc = 0x30bc60u;
    ctx->f[22] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
label_30bc64:
    // 0x30bc64: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x30bc64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_30bc68:
    // 0x30bc68: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x30bc68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_30bc6c:
    // 0x30bc6c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x30bc6cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_30bc70:
    // 0x30bc70: 0x46030d41  sub.s       $f21, $f1, $f3
    ctx->pc = 0x30bc70u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_30bc74:
    // 0x30bc74: 0x4616a801  sub.s       $f0, $f21, $f22
    ctx->pc = 0x30bc74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
label_30bc78:
    // 0x30bc78: 0x46003501  sub.s       $f20, $f6, $f0
    ctx->pc = 0x30bc78u;
    ctx->f[20] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_30bc7c:
    // 0x30bc7c: 0x1e200002  bgtz        $s1, . + 4 + (0x2 << 2)
label_30bc80:
    if (ctx->pc == 0x30BC80u) {
        ctx->pc = 0x30BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC7Cu;
        // 0x30bc80: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BC84u;
        goto label_30bc84;
    }
    ctx->pc = 0x30BC7Cu;
    {
        const bool branch_taken_0x30bc7c = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x30BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC7Cu;
        // 0x30bc80: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc7c) {
            ctx->pc = 0x30BC88u;
            goto label_30bc88;
        }
    }
    ctx->pc = 0x30BC84u;
label_30bc84:
    // 0x30bc84: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x30bc84u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
label_30bc88:
    // 0x30bc88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30bc88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30bc8c:
    // 0x30bc8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30bc8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_30bc90:
    // 0x30bc90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30bc90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30bc94:
    // 0x30bc94: 0xc7b60028  lwc1        $f22, 0x28($sp)
    ctx->pc = 0x30bc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_30bc98:
    // 0x30bc98: 0xc7b50020  lwc1        $f21, 0x20($sp)
    ctx->pc = 0x30bc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_30bc9c:
    // 0x30bc9c: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x30bc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_30bca0:
    // 0x30bca0: 0x3e00008  jr          $ra
label_30bca4:
    if (ctx->pc == 0x30BCA4u) {
        ctx->pc = 0x30BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BCA0u;
        // 0x30bca4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BCA8u;
        goto label_30bca8;
    }
    ctx->pc = 0x30BCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BCA0u;
        // 0x30bca4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30BCA8u;
label_30bca8:
    // 0x30bca8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30bca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_30bcac:
    // 0x30bcac: 0x46006046  mov.s       $f1, $f12
    ctx->pc = 0x30bcacu;
    ctx->f[1] = FPU_MOV_S(ctx->f[12]);
label_30bcb0:
    // 0x30bcb0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x30bcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_30bcb4:
    // 0x30bcb4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x30bcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_30bcb8:
    // 0x30bcb8: 0x44066800  mfc1        $a2, $f13
    ctx->pc = 0x30bcb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_30bcbc:
    // 0x30bcbc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x30bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_30bcc0:
    // 0x30bcc0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30bcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30bcc4:
    // 0x30bcc4: 0xc24024  and         $t0, $a2, $v0
    ctx->pc = 0x30bcc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_30bcc8:
    // 0x30bcc8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x30bcc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_30bccc:
    // 0x30bccc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x30bcccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_30bcd0:
    // 0x30bcd0: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
label_30bcd4:
    if (ctx->pc == 0x30BCD4u) {
        ctx->pc = 0x30BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BCD0u;
        // 0x30bcd4: 0xa23824  and         $a3, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BCD8u;
        goto label_30bcd8;
    }
    ctx->pc = 0x30BCD0u;
    {
        const bool branch_taken_0x30bcd0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x30BCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BCD0u;
        // 0x30bcd4: 0xa23824  and         $a3, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bcd0) {
            ctx->pc = 0x30BCE8u;
            goto label_30bce8;
        }
    }
    ctx->pc = 0x30BCD8u;
label_30bcd8:
    // 0x30bcd8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x30bcd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30bcdc:
    // 0x30bcdc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x30bcdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_30bce0:
    // 0x30bce0: 0x80c3816  j           func_30E058
label_30bce4:
    if (ctx->pc == 0x30BCE4u) {
        ctx->pc = 0x30BCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BCE0u;
        // 0x30bce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BCE8u;
        goto label_30bce8;
    }
    ctx->pc = 0x30BCE0u;
    ctx->pc = 0x30BCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BCE0u;
    // 0x30bce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E058u;
    sub_0030E058_0x30e058(rdram, ctx, runtime); return;
    ctx->pc = 0x30BCE8u;
label_30bce8:
    // 0x30bce8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x30bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_30bcec:
    // 0x30bcec: 0x62783  sra         $a0, $a2, 30
    ctx->pc = 0x30bcecu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 30));
label_30bcf0:
    // 0x30bcf0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30bcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30bcf4:
    // 0x30bcf4: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x30bcf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_30bcf8:
    // 0x30bcf8: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x30bcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_30bcfc:
    // 0x30bcfc: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x30bcfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_30bd00:
    // 0x30bd00: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_30bd04:
    if (ctx->pc == 0x30BD04u) {
        ctx->pc = 0x30BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD00u;
        // 0x30bd04: 0x648025  or          $s0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BD08u;
        goto label_30bd08;
    }
    ctx->pc = 0x30BD00u;
    {
        const bool branch_taken_0x30bd00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD00u;
        // 0x30bd04: 0x648025  or          $s0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd00) {
            ctx->pc = 0x30BD4Cu;
            goto label_30bd4c;
        }
    }
    ctx->pc = 0x30BD08u;
label_30bd08:
    // 0x30bd08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30bd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_30bd0c:
    // 0x30bd0c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x30bd0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_30bd10:
    // 0x30bd10: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x30bd10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
label_30bd14:
    // 0x30bd14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30bd14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30bd18:
    // 0x30bd18: 0x12020057  beq         $s0, $v0, . + 4 + (0x57 << 2)
label_30bd1c:
    if (ctx->pc == 0x30BD1Cu) {
        ctx->pc = 0x30BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD18u;
        // 0x30bd1c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BD20u;
        goto label_30bd20;
    }
    ctx->pc = 0x30BD18u;
    {
        const bool branch_taken_0x30bd18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x30BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD18u;
        // 0x30bd1c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd18) {
            ctx->pc = 0x30BE78u;
            goto label_30be78;
        }
    }
    ctx->pc = 0x30BD20u;
label_30bd20:
    // 0x30bd20: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_30bd24:
    if (ctx->pc == 0x30BD24u) {
        ctx->pc = 0x30BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD20u;
        // 0x30bd24: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BD28u;
        goto label_30bd28;
    }
    ctx->pc = 0x30BD20u;
    {
        const bool branch_taken_0x30bd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bd20) {
            ctx->pc = 0x30BD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30BD20u;
            // 0x30bd24: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30BD38u;
            goto label_30bd38;
        }
    }
    ctx->pc = 0x30BD28u;
label_30bd28:
    // 0x30bd28: 0x6000009  bltz        $s0, . + 4 + (0x9 << 2)
label_30bd2c:
    if (ctx->pc == 0x30BD2Cu) {
        ctx->pc = 0x30BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD28u;
        // 0x30bd2c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BD30u;
        goto label_30bd30;
    }
    ctx->pc = 0x30BD28u;
    {
        const bool branch_taken_0x30bd28 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x30BD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD28u;
        // 0x30bd2c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd28) {
            ctx->pc = 0x30BD50u;
            goto label_30bd50;
        }
    }
    ctx->pc = 0x30BD30u;
label_30bd30:
    // 0x30bd30: 0x10000051  b           . + 4 + (0x51 << 2)
label_30bd34:
    if (ctx->pc == 0x30BD34u) {
        ctx->pc = 0x30BD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD30u;
        // 0x30bd34: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BD38u;
        goto label_30bd38;
    }
    ctx->pc = 0x30BD30u;
    {
        const bool branch_taken_0x30bd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD30u;
        // 0x30bd34: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd30) {
            ctx->pc = 0x30BE78u;
            goto label_30be78;
        }
    }
    ctx->pc = 0x30BD38u;
label_30bd38:
    // 0x30bd38: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x30bd38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_30bd3c:
    // 0x30bd3c: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x30bd3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
label_30bd40:
    // 0x30bd40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30bd40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30bd44:
    // 0x30bd44: 0x5202004d  beql        $s0, $v0, . + 4 + (0x4D << 2)
label_30bd48:
    if (ctx->pc == 0x30BD48u) {
        ctx->pc = 0x30BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD44u;
        // 0x30bd48: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BD4Cu;
        goto label_30bd4c;
    }
    ctx->pc = 0x30BD44u;
    {
        const bool branch_taken_0x30bd44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x30bd44) {
            ctx->pc = 0x30BD48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30BD44u;
            // 0x30bd48: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30BE7Cu;
            goto label_30be7c;
        }
    }
    ctx->pc = 0x30BD4Cu;
label_30bd4c:
    // 0x30bd4c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x30bd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_30bd50:
    // 0x30bd50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30bd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30bd54:
    // 0x30bd54: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x30bd54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_30bd58:
    // 0x30bd58: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_30bd5c:
    if (ctx->pc == 0x30BD5Cu) {
        ctx->pc = 0x30BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD58u;
        // 0x30bd5c: 0xe81823  subu        $v1, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BD60u;
        goto label_30bd60;
    }
    ctx->pc = 0x30BD58u;
    {
        const bool branch_taken_0x30bd58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD58u;
        // 0x30bd5c: 0xe81823  subu        $v1, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd58) {
            ctx->pc = 0x30BD88u;
            goto label_30bd88;
        }
    }
    ctx->pc = 0x30BD60u;
label_30bd60:
    // 0x30bd60: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x30bd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
label_30bd64:
    // 0x30bd64: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x30bd64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
label_30bd68:
    // 0x30bd68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30bd68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30bd6c:
    // 0x30bd6c: 0x4a00042  bltz        $a1, . + 4 + (0x42 << 2)
label_30bd70:
    if (ctx->pc == 0x30BD70u) {
        ctx->pc = 0x30BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD6Cu;
        // 0x30bd70: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BD74u;
        goto label_30bd74;
    }
    ctx->pc = 0x30BD6Cu;
    {
        const bool branch_taken_0x30bd6c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x30BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD6Cu;
        // 0x30bd70: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd6c) {
            ctx->pc = 0x30BE78u;
            goto label_30be78;
        }
    }
    ctx->pc = 0x30BD74u;
label_30bd74:
    // 0x30bd74: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x30bd74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_30bd78:
    // 0x30bd78: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x30bd78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
label_30bd7c:
    // 0x30bd7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30bd7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30bd80:
    // 0x30bd80: 0x1000003f  b           . + 4 + (0x3F << 2)
label_30bd84:
    if (ctx->pc == 0x30BD84u) {
        ctx->pc = 0x30BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD80u;
        // 0x30bd84: 0xdfbf0018  ld          $ra, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BD88u;
        goto label_30bd88;
    }
    ctx->pc = 0x30BD80u;
    {
        const bool branch_taken_0x30bd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD80u;
        // 0x30bd84: 0xdfbf0018  ld          $ra, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd80) {
            ctx->pc = 0x30BE80u;
            goto label_30be80;
        }
    }
    ctx->pc = 0x30BD88u;
label_30bd88:
    // 0x30bd88: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x30bd88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_30bd8c:
    // 0x30bd8c: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x30bd8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
label_30bd90:
    // 0x30bd90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30bd90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30bd94:
    // 0x30bd94: 0x31dc3  sra         $v1, $v1, 23
    ctx->pc = 0x30bd94u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
label_30bd98:
    // 0x30bd98: 0x2862003d  slti        $v0, $v1, 0x3D
    ctx->pc = 0x30bd98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
label_30bd9c:
    // 0x30bd9c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_30bda0:
    if (ctx->pc == 0x30BDA0u) {
        ctx->pc = 0x30BDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD9Cu;
        // 0x30bda0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BDA4u;
        goto label_30bda4;
    }
    ctx->pc = 0x30BD9Cu;
    {
        const bool branch_taken_0x30bd9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD9Cu;
        // 0x30bda0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd9c) {
            ctx->pc = 0x30BDDCu;
            goto label_30bddc;
        }
    }
    ctx->pc = 0x30BDA4u;
label_30bda4:
    // 0x30bda4: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
label_30bda8:
    if (ctx->pc == 0x30BDA8u) {
        ctx->pc = 0x30BDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDA4u;
        // 0x30bda8: 0x2862ffc4  slti        $v0, $v1, -0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967236) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BDACu;
        goto label_30bdac;
    }
    ctx->pc = 0x30BDA4u;
    {
        const bool branch_taken_0x30bda4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x30BDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDA4u;
        // 0x30bda8: 0x2862ffc4  slti        $v0, $v1, -0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967236) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bda4) {
            ctx->pc = 0x30BDB8u;
            goto label_30bdb8;
        }
    }
    ctx->pc = 0x30BDACu;
label_30bdac:
    // 0x30bdac: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x30bdacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30bdb0:
    // 0x30bdb0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_30bdb4:
    if (ctx->pc == 0x30BDB4u) {
        ctx->pc = 0x30BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDB0u;
        // 0x30bdb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BDB8u;
        goto label_30bdb8;
    }
    ctx->pc = 0x30BDB0u;
    {
        const bool branch_taken_0x30bdb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDB0u;
        // 0x30bdb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bdb0) {
            ctx->pc = 0x30BDDCu;
            goto label_30bddc;
        }
    }
    ctx->pc = 0x30BDB8u;
label_30bdb8:
    // 0x30bdb8: 0x0  nop
    ctx->pc = 0x30bdb8u;
    // NOP
label_30bdbc:
    // 0x30bdbc: 0x0  nop
    ctx->pc = 0x30bdbcu;
    // NOP
label_30bdc0:
    // 0x30bdc0: 0x460d0b03  div.s       $f12, $f1, $f13
    ctx->pc = 0x30bdc0u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[13]); }
label_30bdc4:
    // 0x30bdc4: 0xc0c3926  jal         func_30E498
label_30bdc8:
    if (ctx->pc == 0x30BDC8u) {
        ctx->pc = 0x30BDCCu;
        goto label_30bdcc;
    }
    ctx->pc = 0x30BDC4u;
    SET_GPR_U32(ctx, 31, 0x30BDCCu);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x30BDC4u, 0x30BDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BDCCu;
label_30bdcc:
    // 0x30bdcc: 0xc0c3816  jal         func_30E058
label_30bdd0:
    if (ctx->pc == 0x30BDD0u) {
        ctx->pc = 0x30BDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDCCu;
        // 0x30bdd0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BDD4u;
        goto label_30bdd4;
    }
    ctx->pc = 0x30BDCCu;
    SET_GPR_U32(ctx, 31, 0x30BDD4u);
    ctx->pc = 0x30BDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30BDCCu;
    // 0x30bdd0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E058u, 0x30BDCCu, 0x30BDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30BDD4u;
label_30bdd4:
    // 0x30bdd4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x30bdd4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_30bdd8:
    // 0x30bdd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30bdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30bddc:
    // 0x30bddc: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
label_30bde0:
    if (ctx->pc == 0x30BDE0u) {
        ctx->pc = 0x30BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDDCu;
        // 0x30bde0: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BDE4u;
        goto label_30bde4;
    }
    ctx->pc = 0x30BDDCu;
    {
        const bool branch_taken_0x30bddc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x30BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDDCu;
        // 0x30bde0: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bddc) {
            ctx->pc = 0x30BE10u;
            goto label_30be10;
        }
    }
    ctx->pc = 0x30BDE4u;
label_30bde4:
    // 0x30bde4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_30bde8:
    if (ctx->pc == 0x30BDE8u) {
        ctx->pc = 0x30BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDE4u;
        // 0x30bde8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BDECu;
        goto label_30bdec;
    }
    ctx->pc = 0x30BDE4u;
    {
        const bool branch_taken_0x30bde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bde4) {
            ctx->pc = 0x30BDE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30BDE4u;
            // 0x30bde8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30BE00u;
            goto label_30be00;
        }
    }
    ctx->pc = 0x30BDECu;
label_30bdec:
    // 0x30bdec: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
label_30bdf0:
    if (ctx->pc == 0x30BDF0u) {
        ctx->pc = 0x30BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDECu;
        // 0x30bdf0: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BDF4u;
        goto label_30bdf4;
    }
    ctx->pc = 0x30BDECu;
    {
        const bool branch_taken_0x30bdec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDECu;
        // 0x30bdf0: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bdec) {
            ctx->pc = 0x30BE78u;
            goto label_30be78;
        }
    }
    ctx->pc = 0x30BDF4u;
label_30bdf4:
    // 0x30bdf4: 0x10000018  b           . + 4 + (0x18 << 2)
label_30bdf8:
    if (ctx->pc == 0x30BDF8u) {
        ctx->pc = 0x30BDFCu;
        goto label_30bdfc;
    }
    ctx->pc = 0x30BDF4u;
    {
        const bool branch_taken_0x30bdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30bdf4) {
            ctx->pc = 0x30BE58u;
            goto label_30be58;
        }
    }
    ctx->pc = 0x30BDFCu;
label_30bdfc:
    // 0x30bdfc: 0x0  nop
    ctx->pc = 0x30bdfcu;
    // NOP
label_30be00:
    // 0x30be00: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
label_30be04:
    if (ctx->pc == 0x30BE04u) {
        ctx->pc = 0x30BE08u;
        goto label_30be08;
    }
    ctx->pc = 0x30BE00u;
    {
        const bool branch_taken_0x30be00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x30be00) {
            ctx->pc = 0x30BE30u;
            goto label_30be30;
        }
    }
    ctx->pc = 0x30BE08u;
label_30be08:
    // 0x30be08: 0x10000013  b           . + 4 + (0x13 << 2)
label_30be0c:
    if (ctx->pc == 0x30BE0Cu) {
        ctx->pc = 0x30BE10u;
        goto label_30be10;
    }
    ctx->pc = 0x30BE08u;
    {
        const bool branch_taken_0x30be08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30be08) {
            ctx->pc = 0x30BE58u;
            goto label_30be58;
        }
    }
    ctx->pc = 0x30BE10u;
label_30be10:
    // 0x30be10: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x30be10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_30be14:
    // 0x30be14: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x30be14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_30be18:
    // 0x30be18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x30be18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_30be1c:
    // 0x30be1c: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x30be1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_30be20:
    // 0x30be20: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x30be20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30be24:
    // 0x30be24: 0x10000014  b           . + 4 + (0x14 << 2)
label_30be28:
    if (ctx->pc == 0x30BE28u) {
        ctx->pc = 0x30BE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE24u;
        // 0x30be28: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BE2Cu;
        goto label_30be2c;
    }
    ctx->pc = 0x30BE24u;
    {
        const bool branch_taken_0x30be24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE24u;
        // 0x30be28: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30be24) {
            ctx->pc = 0x30BE78u;
            goto label_30be78;
        }
    }
    ctx->pc = 0x30BE2Cu;
label_30be2c:
    // 0x30be2c: 0x0  nop
    ctx->pc = 0x30be2cu;
    // NOP
label_30be30:
    // 0x30be30: 0x3c013422  lui         $at, 0x3422
    ctx->pc = 0x30be30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13346 << 16));
label_30be34:
    // 0x30be34: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x30be34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
label_30be38:
    // 0x30be38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30be38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30be3c:
    // 0x30be3c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x30be3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_30be40:
    // 0x30be40: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x30be40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
label_30be44:
    // 0x30be44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30be44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30be48:
    // 0x30be48: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x30be48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_30be4c:
    // 0x30be4c: 0x1000000a  b           . + 4 + (0xA << 2)
label_30be50:
    if (ctx->pc == 0x30BE50u) {
        ctx->pc = 0x30BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE4Cu;
        // 0x30be50: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BE54u;
        goto label_30be54;
    }
    ctx->pc = 0x30BE4Cu;
    {
        const bool branch_taken_0x30be4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE4Cu;
        // 0x30be50: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30be4c) {
            ctx->pc = 0x30BE78u;
            goto label_30be78;
        }
    }
    ctx->pc = 0x30BE54u;
label_30be54:
    // 0x30be54: 0x0  nop
    ctx->pc = 0x30be54u;
    // NOP
label_30be58:
    // 0x30be58: 0x3c013422  lui         $at, 0x3422
    ctx->pc = 0x30be58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13346 << 16));
label_30be5c:
    // 0x30be5c: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x30be5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
label_30be60:
    // 0x30be60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30be60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30be64:
    // 0x30be64: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x30be64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_30be68:
    // 0x30be68: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x30be68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
label_30be6c:
    // 0x30be6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30be6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30be70:
    // 0x30be70: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x30be70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_30be74:
    // 0x30be74: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x30be74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_30be78:
    // 0x30be78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x30be78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30be7c:
    // 0x30be7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x30be7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_30be80:
    // 0x30be80: 0x3e00008  jr          $ra
label_30be84:
    if (ctx->pc == 0x30BE84u) {
        ctx->pc = 0x30BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE80u;
        // 0x30be84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BE88u;
        goto label_30be88;
    }
    ctx->pc = 0x30BE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BE80u;
        // 0x30be84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30BE88u;
label_30be88:
    // 0x30be88: 0x44046000  mfc1        $a0, $f12
    ctx->pc = 0x30be88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_30be8c:
    // 0x30be8c: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x30be8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_30be90:
    // 0x30be90: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x30be90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_30be94:
    // 0x30be94: 0x3c0242b2  lui         $v0, 0x42B2
    ctx->pc = 0x30be94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17074 << 16));
label_30be98:
    // 0x30be98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30be98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_30be9c:
    // 0x30be9c: 0x3442d4fc  ori         $v0, $v0, 0xD4FC
    ctx->pc = 0x30be9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54524);
label_30bea0:
    // 0x30bea0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x30bea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_30bea4:
    // 0x30bea4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_30bea8:
    if (ctx->pc == 0x30BEA8u) {
        ctx->pc = 0x30BEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BEA4u;
        // 0x30bea8: 0x831824  and         $v1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BEACu;
        goto label_30beac;
    }
    ctx->pc = 0x30BEA4u;
    {
        const bool branch_taken_0x30bea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BEA4u;
        // 0x30bea8: 0x831824  and         $v1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bea4) {
            ctx->pc = 0x30BEB8u;
            goto label_30beb8;
        }
    }
    ctx->pc = 0x30BEACu;
label_30beac:
    // 0x30beac: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30beacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30beb0:
    // 0x30beb0: 0x3e00008  jr          $ra
label_30beb4:
    if (ctx->pc == 0x30BEB4u) {
        ctx->pc = 0x30BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BEB0u;
        // 0x30beb4: 0xc440afe0  lwc1        $f0, -0x5020($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BEB8u;
        goto label_30beb8;
    }
    ctx->pc = 0x30BEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BEB0u;
        // 0x30beb4: 0xc440afe0  lwc1        $f0, -0x5020($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30BEB8u;
label_30beb8:
    // 0x30beb8: 0x4810007  bgez        $a0, . + 4 + (0x7 << 2)
label_30bebc:
    if (ctx->pc == 0x30BEBCu) {
        ctx->pc = 0x30BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BEB8u;
        // 0x30bebc: 0x3c023eb1  lui         $v0, 0x3EB1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16049 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BEC0u;
        goto label_30bec0;
    }
    ctx->pc = 0x30BEB8u;
    {
        const bool branch_taken_0x30beb8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x30BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BEB8u;
        // 0x30bebc: 0x3c023eb1  lui         $v0, 0x3EB1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16049 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30beb8) {
            ctx->pc = 0x30BED8u;
            goto label_30bed8;
        }
    }
    ctx->pc = 0x30BEC0u;
label_30bec0:
    // 0x30bec0: 0x3c0242ae  lui         $v0, 0x42AE
    ctx->pc = 0x30bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17070 << 16));
label_30bec4:
    // 0x30bec4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30bec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30bec8:
    // 0x30bec8: 0x3442ac50  ori         $v0, $v0, 0xAC50
    ctx->pc = 0x30bec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44112);
label_30becc:
    // 0x30becc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x30beccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_30bed0:
    // 0x30bed0: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
label_30bed4:
    if (ctx->pc == 0x30BED4u) {
        ctx->pc = 0x30BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BED0u;
        // 0x30bed4: 0x3c023eb1  lui         $v0, 0x3EB1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16049 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BED8u;
        goto label_30bed8;
    }
    ctx->pc = 0x30BED0u;
    {
        const bool branch_taken_0x30bed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BED0u;
        // 0x30bed4: 0x3c023eb1  lui         $v0, 0x3EB1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16049 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bed0) {
            ctx->pc = 0x30C0D4u;
            goto label_30c0d4;
        }
    }
    ctx->pc = 0x30BED8u;
label_30bed8:
    // 0x30bed8: 0x34427218  ori         $v0, $v0, 0x7218
    ctx->pc = 0x30bed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29208);
label_30bedc:
    // 0x30bedc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x30bedcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_30bee0:
    // 0x30bee0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_30bee4:
    if (ctx->pc == 0x30BEE4u) {
        ctx->pc = 0x30BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BEE0u;
        // 0x30bee4: 0x3c02317f  lui         $v0, 0x317F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12671 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BEE8u;
        goto label_30bee8;
    }
    ctx->pc = 0x30BEE0u;
    {
        const bool branch_taken_0x30bee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BEE0u;
        // 0x30bee4: 0x3c02317f  lui         $v0, 0x317F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12671 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bee0) {
            ctx->pc = 0x30BF80u;
            goto label_30bf80;
        }
    }
    ctx->pc = 0x30BEE8u;
label_30bee8:
    // 0x30bee8: 0x3c023f85  lui         $v0, 0x3F85
    ctx->pc = 0x30bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16261 << 16));
label_30beec:
    // 0x30beec: 0x34421591  ori         $v0, $v0, 0x1591
    ctx->pc = 0x30beecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5521);
label_30bef0:
    // 0x30bef0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x30bef0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_30bef4:
    // 0x30bef4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_30bef8:
    if (ctx->pc == 0x30BEF8u) {
        ctx->pc = 0x30BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BEF4u;
        // 0x30bef8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BEFCu;
        goto label_30befc;
    }
    ctx->pc = 0x30BEF4u;
    {
        const bool branch_taken_0x30bef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BEF4u;
        // 0x30bef8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bef4) {
            ctx->pc = 0x30BF28u;
            goto label_30bf28;
        }
    }
    ctx->pc = 0x30BEFCu;
label_30befc:
    // 0x30befc: 0x51823  negu        $v1, $a1
    ctx->pc = 0x30befcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_30bf00:
    // 0x30bf00: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30bf00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_30bf04:
    // 0x30bf04: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x30bf04u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_30bf08:
    // 0x30bf08: 0xc420afb8  lwc1        $f0, -0x5048($at)
    ctx->pc = 0x30bf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30bf0c:
    // 0x30bf0c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x30bf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_30bf10:
    // 0x30bf10: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30bf10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_30bf14:
    // 0x30bf14: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x30bf14u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_30bf18:
    // 0x30bf18: 0xc427afc0  lwc1        $f7, -0x5040($at)
    ctx->pc = 0x30bf18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_30bf1c:
    // 0x30bf1c: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x30bf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_30bf20:
    // 0x30bf20: 0x10000014  b           . + 4 + (0x14 << 2)
label_30bf24:
    if (ctx->pc == 0x30BF24u) {
        ctx->pc = 0x30BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF20u;
        // 0x30bf24: 0x46006181  sub.s       $f6, $f12, $f0 (Delay Slot)
        ctx->f[6] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BF28u;
        goto label_30bf28;
    }
    ctx->pc = 0x30BF20u;
    {
        const bool branch_taken_0x30bf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF20u;
        // 0x30bf24: 0x46006181  sub.s       $f6, $f12, $f0 (Delay Slot)
        ctx->f[6] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bf20) {
            ctx->pc = 0x30BF74u;
            goto label_30bf74;
        }
    }
    ctx->pc = 0x30BF28u;
label_30bf28:
    // 0x30bf28: 0x3c013fb8  lui         $at, 0x3FB8
    ctx->pc = 0x30bf28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16312 << 16));
label_30bf2c:
    // 0x30bf2c: 0x3421aa3a  ori         $at, $at, 0xAA3A
    ctx->pc = 0x30bf2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43578);
label_30bf30:
    // 0x30bf30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30bf30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30bf34:
    // 0x30bf34: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30bf34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_30bf38:
    // 0x30bf38: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x30bf38u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_30bf3c:
    // 0x30bf3c: 0xc423afa8  lwc1        $f3, -0x5058($at)
    ctx->pc = 0x30bf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_30bf40:
    // 0x30bf40: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_30bf44:
    // 0x30bf44: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x30bf44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_30bf48:
    // 0x30bf48: 0xc442afc0  lwc1        $f2, -0x5040($v0)
    ctx->pc = 0x30bf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_30bf4c:
    // 0x30bf4c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x30bf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_30bf50:
    // 0x30bf50: 0xc461afb8  lwc1        $f1, -0x5048($v1)
    ctx->pc = 0x30bf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294946744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_30bf54:
    // 0x30bf54: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x30bf54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_30bf58:
    // 0x30bf58: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30bf58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_30bf5c:
    // 0x30bf5c: 0x44061800  mfc1        $a2, $f3
    ctx->pc = 0x30bf5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_30bf60:
    // 0x30bf60: 0x44862800  mtc1        $a2, $f5
    ctx->pc = 0x30bf60u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_30bf64:
    // 0x30bf64: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x30bf64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_30bf68:
    // 0x30bf68: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x30bf68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_30bf6c:
    // 0x30bf6c: 0x460229c2  mul.s       $f7, $f5, $f2
    ctx->pc = 0x30bf6cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_30bf70:
    // 0x30bf70: 0x46016181  sub.s       $f6, $f12, $f1
    ctx->pc = 0x30bf70u;
    ctx->f[6] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_30bf74:
    // 0x30bf74: 0x10000012  b           . + 4 + (0x12 << 2)
label_30bf78:
    if (ctx->pc == 0x30BF78u) {
        ctx->pc = 0x30BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF74u;
        // 0x30bf78: 0x46073301  sub.s       $f12, $f6, $f7 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[6], ctx->f[7]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BF7Cu;
        goto label_30bf7c;
    }
    ctx->pc = 0x30BF74u;
    {
        const bool branch_taken_0x30bf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF74u;
        // 0x30bf78: 0x46073301  sub.s       $f12, $f6, $f7 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[6], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bf74) {
            ctx->pc = 0x30BFC0u;
            goto label_30bfc0;
        }
    }
    ctx->pc = 0x30BF7Cu;
label_30bf7c:
    // 0x30bf7c: 0x0  nop
    ctx->pc = 0x30bf7cu;
    // NOP
label_30bf80:
    // 0x30bf80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30bf80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30bf84:
    // 0x30bf84: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x30bf84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_30bf88:
    // 0x30bf88: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_30bf8c:
    if (ctx->pc == 0x30BF8Cu) {
        ctx->pc = 0x30BF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF88u;
        // 0x30bf8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BF90u;
        goto label_30bf90;
    }
    ctx->pc = 0x30BF88u;
    {
        const bool branch_taken_0x30bf88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30bf88) {
            ctx->pc = 0x30BF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30BF88u;
            // 0x30bf8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30BFC0u;
            goto label_30bfc0;
        }
    }
    ctx->pc = 0x30BF90u;
label_30bf90:
    // 0x30bf90: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x30bf90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
label_30bf94:
    // 0x30bf94: 0x3421f2c9  ori         $at, $at, 0xF2C9
    ctx->pc = 0x30bf94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62153);
label_30bf98:
    // 0x30bf98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30bf98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30bf9c:
    // 0x30bf9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30bf9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_30bfa0:
    // 0x30bfa0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30bfa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30bfa4:
    // 0x30bfa4: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x30bfa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_30bfa8:
    // 0x30bfa8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30bfa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_30bfac:
    // 0x30bfac: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_30bfb0:
    if (ctx->pc == 0x30BFB0u) {
        ctx->pc = 0x30BFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFACu;
        // 0x30bfb0: 0x460c6142  mul.s       $f5, $f12, $f12 (Delay Slot)
        ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BFB4u;
        goto label_30bfb4;
    }
    ctx->pc = 0x30BFACu;
    {
        const bool branch_taken_0x30bfac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30bfac) {
            ctx->pc = 0x30BFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30BFACu;
            // 0x30bfb0: 0x460c6142  mul.s       $f5, $f12, $f12 (Delay Slot)
            ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30BFC4u;
            goto label_30bfc4;
        }
    }
    ctx->pc = 0x30BFB4u;
label_30bfb4:
    // 0x30bfb4: 0x3e00008  jr          $ra
label_30bfb8:
    if (ctx->pc == 0x30BFB8u) {
        ctx->pc = 0x30BFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFB4u;
        // 0x30bfb8: 0x46016000  add.s       $f0, $f12, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30BFBCu;
        goto label_30bfbc;
    }
    ctx->pc = 0x30BFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30BFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFB4u;
        // 0x30bfb8: 0x46016000  add.s       $f0, $f12, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30BFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30BFBCu;
label_30bfbc:
    // 0x30bfbc: 0x0  nop
    ctx->pc = 0x30bfbcu;
    // NOP
label_30bfc0:
    // 0x30bfc0: 0x460c6142  mul.s       $f5, $f12, $f12
    ctx->pc = 0x30bfc0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_30bfc4:
    // 0x30bfc4: 0x3c013331  lui         $at, 0x3331
    ctx->pc = 0x30bfc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13105 << 16));
label_30bfc8:
    // 0x30bfc8: 0x3421bb4b  ori         $at, $at, 0xBB4B
    ctx->pc = 0x30bfc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47947);
label_30bfcc:
    // 0x30bfcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30bfccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30bfd0:
    // 0x30bfd0: 0x3c01b5dd  lui         $at, 0xB5DD
    ctx->pc = 0x30bfd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46557 << 16));
label_30bfd4:
    // 0x30bfd4: 0x3421ea0e  ori         $at, $at, 0xEA0E
    ctx->pc = 0x30bfd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59918);
label_30bfd8:
    // 0x30bfd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30bfd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30bfdc:
    // 0x30bfdc: 0x3c01388a  lui         $at, 0x388A
    ctx->pc = 0x30bfdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14474 << 16));
label_30bfe0:
    // 0x30bfe0: 0x3421b354  ori         $at, $at, 0xB354
    ctx->pc = 0x30bfe0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45908);
label_30bfe4:
    // 0x30bfe4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30bfe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30bfe8:
    // 0x30bfe8: 0x3c01bb36  lui         $at, 0xBB36
    ctx->pc = 0x30bfe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47926 << 16));
label_30bfec:
    // 0x30bfec: 0x34210b60  ori         $at, $at, 0xB60
    ctx->pc = 0x30bfecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2912);
label_30bff0:
    // 0x30bff0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x30bff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_30bff4:
    // 0x30bff4: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x30bff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_30bff8:
    // 0x30bff8: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x30bff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_30bffc:
    // 0x30bffc: 0x3421aaaa  ori         $at, $at, 0xAAAA
    ctx->pc = 0x30bffcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43690);
label_30c000:
    // 0x30c000: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x30c000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30c004:
    // 0x30c004: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30c004u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_30c008:
    // 0x30c008: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x30c008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_30c00c:
    // 0x30c00c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x30c00cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_30c010:
    // 0x30c010: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x30c010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_30c014:
    // 0x30c014: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x30c014u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_30c018:
    // 0x30c018: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x30c018u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_30c01c:
    // 0x30c01c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x30c01cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_30c020:
    // 0x30c020: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x30c020u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_30c024:
    // 0x30c024: 0x14c0000e  bnez        $a2, . + 4 + (0xE << 2)
label_30c028:
    if (ctx->pc == 0x30C028u) {
        ctx->pc = 0x30C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C024u;
        // 0x30c028: 0x460060c1  sub.s       $f3, $f12, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C02Cu;
        goto label_30c02c;
    }
    ctx->pc = 0x30C024u;
    {
        const bool branch_taken_0x30c024 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C024u;
        // 0x30c028: 0x460060c1  sub.s       $f3, $f12, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c024) {
            ctx->pc = 0x30C060u;
            goto label_30c060;
        }
    }
    ctx->pc = 0x30C02Cu;
label_30c02c:
    // 0x30c02c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x30c02cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_30c030:
    // 0x30c030: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30c030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30c034:
    // 0x30c034: 0x46036002  mul.s       $f0, $f12, $f3
    ctx->pc = 0x30c034u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
label_30c038:
    // 0x30c038: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30c038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_30c03c:
    // 0x30c03c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30c03cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30c040:
    // 0x30c040: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x30c040u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_30c044:
    // 0x30c044: 0x0  nop
    ctx->pc = 0x30c044u;
    // NOP
label_30c048:
    // 0x30c048: 0x0  nop
    ctx->pc = 0x30c048u;
    // NOP
label_30c04c:
    // 0x30c04c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x30c04cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_30c050:
    // 0x30c050: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x30c050u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
label_30c054:
    // 0x30c054: 0x3e00008  jr          $ra
label_30c058:
    if (ctx->pc == 0x30C058u) {
        ctx->pc = 0x30C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C054u;
        // 0x30c058: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C05Cu;
        goto label_30c05c;
    }
    ctx->pc = 0x30C054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C054u;
        // 0x30c058: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C05Cu;
label_30c05c:
    // 0x30c05c: 0x0  nop
    ctx->pc = 0x30c05cu;
    // NOP
label_30c060:
    // 0x30c060: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x30c060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_30c064:
    // 0x30c064: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30c064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30c068:
    // 0x30c068: 0x46036002  mul.s       $f0, $f12, $f3
    ctx->pc = 0x30c068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
label_30c06c:
    // 0x30c06c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30c06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_30c070:
    // 0x30c070: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30c070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_30c074:
    // 0x30c074: 0x28c2ff83  slti        $v0, $a2, -0x7D
    ctx->pc = 0x30c074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967171) ? 1 : 0);
label_30c078:
    // 0x30c078: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x30c078u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_30c07c:
    // 0x30c07c: 0x0  nop
    ctx->pc = 0x30c07cu;
    // NOP
label_30c080:
    // 0x30c080: 0x0  nop
    ctx->pc = 0x30c080u;
    // NOP
label_30c084:
    // 0x30c084: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x30c084u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_30c088:
    // 0x30c088: 0x46003801  sub.s       $f0, $f7, $f0
    ctx->pc = 0x30c088u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_30c08c:
    // 0x30c08c: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x30c08cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_30c090:
    // 0x30c090: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_30c094:
    if (ctx->pc == 0x30C094u) {
        ctx->pc = 0x30C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C090u;
        // 0x30c094: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C098u;
        goto label_30c098;
    }
    ctx->pc = 0x30C090u;
    {
        const bool branch_taken_0x30c090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C090u;
        // 0x30c094: 0x46001041  sub.s       $f1, $f2, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c090) {
            ctx->pc = 0x30C0B0u;
            goto label_30c0b0;
        }
    }
    ctx->pc = 0x30C098u;
label_30c098:
    // 0x30c098: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x30c098u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_30c09c:
    // 0x30c09c: 0x615c0  sll         $v0, $a2, 23
    ctx->pc = 0x30c09cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
label_30c0a0:
    // 0x30c0a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30c0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30c0a4:
    // 0x30c0a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x30c0a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30c0a8:
    // 0x30c0a8: 0x3e00008  jr          $ra
label_30c0ac:
    if (ctx->pc == 0x30C0ACu) {
        ctx->pc = 0x30C0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C0A8u;
        // 0x30c0ac: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C0B0u;
        goto label_30c0b0;
    }
    ctx->pc = 0x30C0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C0A8u;
        // 0x30c0ac: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C0B0u;
label_30c0b0:
    // 0x30c0b0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x30c0b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_30c0b4:
    // 0x30c0b4: 0x24c30064  addiu       $v1, $a2, 0x64
    ctx->pc = 0x30c0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 100));
label_30c0b8:
    // 0x30c0b8: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x30c0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
label_30c0bc:
    // 0x30c0bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30c0c0:
    // 0x30c0c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x30c0c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_30c0c4:
    // 0x30c0c4: 0x3c010d7f  lui         $at, 0xD7F
    ctx->pc = 0x30c0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3455 << 16));
label_30c0c8:
    // 0x30c0c8: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x30c0c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_30c0cc:
    // 0x30c0cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30c0ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30c0d0:
    // 0x30c0d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x30c0d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_30c0d4:
    // 0x30c0d4: 0x3e00008  jr          $ra
label_30c0d8:
    if (ctx->pc == 0x30C0D8u) {
        ctx->pc = 0x30C0DCu;
        goto label_30c0dc;
    }
    ctx->pc = 0x30C0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C0DCu;
label_30c0dc:
    // 0x30c0dc: 0x0  nop
    ctx->pc = 0x30c0dcu;
    // NOP
label_30c0e0:
    // 0x30c0e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30c0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_30c0e4:
    // 0x30c0e4: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x30c0e4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
label_30c0e8:
    // 0x30c0e8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x30c0e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_30c0ec:
    // 0x30c0ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30c0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30c0f0:
    // 0x30c0f0: 0x46006846  mov.s       $f1, $f13
    ctx->pc = 0x30c0f0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[13]);
label_30c0f4:
    // 0x30c0f4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x30c0f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_30c0f8:
    // 0x30c0f8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x30c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_30c0fc:
    // 0x30c0fc: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x30c0fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_30c100:
    // 0x30c100: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x30c100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_30c104:
    // 0x30c104: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30c104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30c108:
    // 0x30c108: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x30c108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_30c10c:
    // 0x30c10c: 0xe23024  and         $a2, $a3, $v0
    ctx->pc = 0x30c10cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_30c110:
    // 0x30c110: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x30c110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_30c114:
    // 0x30c114: 0xa35024  and         $t2, $a1, $v1
    ctx->pc = 0x30c114u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_30c118:
    // 0x30c118: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x30c118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_30c11c:
    // 0x30c11c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_30c120:
    if (ctx->pc == 0x30C120u) {
        ctx->pc = 0x30C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C11Cu;
        // 0x30c120: 0xaa2826  xor         $a1, $a1, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C124u;
        goto label_30c124;
    }
    ctx->pc = 0x30C11Cu;
    {
        const bool branch_taken_0x30c11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C11Cu;
        // 0x30c120: 0xaa2826  xor         $a1, $a1, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c11c) {
            ctx->pc = 0x30C140u;
            goto label_30c140;
        }
    }
    ctx->pc = 0x30C124u;
label_30c124:
    // 0x30c124: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x30c124u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_30c128:
    // 0x30c128: 0x0  nop
    ctx->pc = 0x30c128u;
    // NOP
label_30c12c:
    // 0x30c12c: 0x0  nop
    ctx->pc = 0x30c12cu;
    // NOP
label_30c130:
    // 0x30c130: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x30c130u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
label_30c134:
    // 0x30c134: 0x1000005c  b           . + 4 + (0x5C << 2)
label_30c138:
    if (ctx->pc == 0x30C138u) {
        ctx->pc = 0x30C13Cu;
        goto label_30c13c;
    }
    ctx->pc = 0x30C134u;
    {
        const bool branch_taken_0x30c134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c134) {
            ctx->pc = 0x30C2A8u;
            goto label_30c2a8;
        }
    }
    ctx->pc = 0x30C13Cu;
label_30c13c:
    // 0x30c13c: 0x0  nop
    ctx->pc = 0x30c13cu;
    // NOP
label_30c140:
    // 0x30c140: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x30c140u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_30c144:
    // 0x30c144: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
label_30c148:
    if (ctx->pc == 0x30C148u) {
        ctx->pc = 0x30C14Cu;
        goto label_30c14c;
    }
    ctx->pc = 0x30C144u;
    {
        const bool branch_taken_0x30c144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c144) {
            ctx->pc = 0x30C2A8u;
            goto label_30c2a8;
        }
    }
    ctx->pc = 0x30C14Cu;
label_30c14c:
    // 0x30c14c: 0x10a60030  beq         $a1, $a2, . + 4 + (0x30 << 2)
label_30c150:
    if (ctx->pc == 0x30C150u) {
        ctx->pc = 0x30C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C14Cu;
        // 0x30c150: 0x515c3  sra         $v0, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C154u;
        goto label_30c154;
    }
    ctx->pc = 0x30C14Cu;
    {
        const bool branch_taken_0x30c14c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x30C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C14Cu;
        // 0x30c150: 0x515c3  sra         $v0, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c14c) {
            ctx->pc = 0x30C210u;
            goto label_30c210;
        }
    }
    ctx->pc = 0x30C154u;
label_30c154:
    // 0x30c154: 0x2448ff81  addiu       $t0, $v0, -0x7F
    ctx->pc = 0x30c154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
label_30c158:
    // 0x30c158: 0x61dc3  sra         $v1, $a2, 23
    ctx->pc = 0x30c158u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 23));
label_30c15c:
    // 0x30c15c: 0x2902ff82  slti        $v0, $t0, -0x7E
    ctx->pc = 0x30c15cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4294967170) ? 1 : 0);
label_30c160:
    // 0x30c160: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_30c164:
    if (ctx->pc == 0x30C164u) {
        ctx->pc = 0x30C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C160u;
        // 0x30c164: 0x2467ff81  addiu       $a3, $v1, -0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967169));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C168u;
        goto label_30c168;
    }
    ctx->pc = 0x30C160u;
    {
        const bool branch_taken_0x30c160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C160u;
        // 0x30c164: 0x2467ff81  addiu       $a3, $v1, -0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967169));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c160) {
            ctx->pc = 0x30C178u;
            goto label_30c178;
        }
    }
    ctx->pc = 0x30C168u;
label_30c168:
    // 0x30c168: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x30c168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_30c16c:
    // 0x30c16c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x30c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_30c170:
    // 0x30c170: 0x10000004  b           . + 4 + (0x4 << 2)
label_30c174:
    if (ctx->pc == 0x30C174u) {
        ctx->pc = 0x30C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C170u;
        // 0x30c174: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C178u;
        goto label_30c178;
    }
    ctx->pc = 0x30C170u;
    {
        const bool branch_taken_0x30c170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C170u;
        // 0x30c174: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c170) {
            ctx->pc = 0x30C184u;
            goto label_30c184;
        }
    }
    ctx->pc = 0x30C178u;
label_30c178:
    // 0x30c178: 0x2402ff82  addiu       $v0, $zero, -0x7E
    ctx->pc = 0x30c178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
label_30c17c:
    // 0x30c17c: 0x482023  subu        $a0, $v0, $t0
    ctx->pc = 0x30c17cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_30c180:
    // 0x30c180: 0x852804  sllv        $a1, $a1, $a0
    ctx->pc = 0x30c180u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_30c184:
    // 0x30c184: 0x28e9ff82  slti        $t1, $a3, -0x7E
    ctx->pc = 0x30c184u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294967170) ? 1 : 0);
label_30c188:
    // 0x30c188: 0x15200007  bnez        $t1, . + 4 + (0x7 << 2)
label_30c18c:
    if (ctx->pc == 0x30C18Cu) {
        ctx->pc = 0x30C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C188u;
        // 0x30c18c: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C190u;
        goto label_30c190;
    }
    ctx->pc = 0x30C188u;
    {
        const bool branch_taken_0x30c188 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C188u;
        // 0x30c18c: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c188) {
            ctx->pc = 0x30C1A8u;
            goto label_30c1a8;
        }
    }
    ctx->pc = 0x30C190u;
label_30c190:
    // 0x30c190: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x30c190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_30c194:
    // 0x30c194: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x30c194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_30c198:
    // 0x30c198: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30c198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30c19c:
    // 0x30c19c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x30c19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_30c1a0:
    // 0x30c1a0: 0x10000003  b           . + 4 + (0x3 << 2)
label_30c1a4:
    if (ctx->pc == 0x30C1A4u) {
        ctx->pc = 0x30C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1A0u;
        // 0x30c1a4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C1A8u;
        goto label_30c1a8;
    }
    ctx->pc = 0x30C1A0u;
    {
        const bool branch_taken_0x30c1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1A0u;
        // 0x30c1a4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c1a0) {
            ctx->pc = 0x30C1B0u;
            goto label_30c1b0;
        }
    }
    ctx->pc = 0x30C1A8u;
label_30c1a8:
    // 0x30c1a8: 0x472023  subu        $a0, $v0, $a3
    ctx->pc = 0x30c1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_30c1ac:
    // 0x30c1ac: 0x863004  sllv        $a2, $a2, $a0
    ctx->pc = 0x30c1acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
label_30c1b0:
    // 0x30c1b0: 0x1072023  subu        $a0, $t0, $a3
    ctx->pc = 0x30c1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_30c1b4:
    // 0x30c1b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30c1b8:
    // 0x30c1b8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x30c1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_30c1bc:
    // 0x30c1bc: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
label_30c1c0:
    if (ctx->pc == 0x30C1C0u) {
        ctx->pc = 0x30C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1BCu;
        // 0x30c1c0: 0xa61823  subu        $v1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C1C4u;
        goto label_30c1c4;
    }
    ctx->pc = 0x30C1BCu;
    {
        const bool branch_taken_0x30c1bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x30C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1BCu;
        // 0x30c1c0: 0xa61823  subu        $v1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c1bc) {
            ctx->pc = 0x30C200u;
            goto label_30c200;
        }
    }
    ctx->pc = 0x30C1C4u;
label_30c1c4:
    // 0x30c1c4: 0x0  nop
    ctx->pc = 0x30c1c4u;
    // NOP
label_30c1c8:
    // 0x30c1c8: 0x0  nop
    ctx->pc = 0x30c1c8u;
    // NOP
label_30c1cc:
    // 0x30c1cc: 0x0  nop
    ctx->pc = 0x30c1ccu;
    // NOP
label_30c1d0:
    // 0x30c1d0: 0x0  nop
    ctx->pc = 0x30c1d0u;
    // NOP
label_30c1d4:
    // 0x30c1d4: 0x460fff8  bltz        $v1, . + 4 + (-0x8 << 2)
label_30c1d8:
    if (ctx->pc == 0x30C1D8u) {
        ctx->pc = 0x30C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1D4u;
        // 0x30c1d8: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C1DCu;
        goto label_30c1dc;
    }
    ctx->pc = 0x30C1D4u;
    {
        const bool branch_taken_0x30c1d4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x30C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1D4u;
        // 0x30c1d8: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c1d4) {
            ctx->pc = 0x30C1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30c1b8;
        }
    }
    ctx->pc = 0x30C1DCu;
label_30c1dc:
    // 0x30c1dc: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
label_30c1e0:
    if (ctx->pc == 0x30C1E0u) {
        ctx->pc = 0x30C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1DCu;
        // 0x30c1e0: 0xa17c2  srl         $v0, $t2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C1E4u;
        goto label_30c1e4;
    }
    ctx->pc = 0x30C1DCu;
    {
        const bool branch_taken_0x30c1dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c1dc) {
            ctx->pc = 0x30C1E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C1DCu;
            // 0x30c1e0: 0xa17c2  srl         $v0, $t2, 31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C214u;
            goto label_30c214;
        }
    }
    ctx->pc = 0x30C1E4u;
label_30c1e4:
    // 0x30c1e4: 0x0  nop
    ctx->pc = 0x30c1e4u;
    // NOP
label_30c1e8:
    // 0x30c1e8: 0x0  nop
    ctx->pc = 0x30c1e8u;
    // NOP
label_30c1ec:
    // 0x30c1ec: 0x0  nop
    ctx->pc = 0x30c1ecu;
    // NOP
label_30c1f0:
    // 0x30c1f0: 0x0  nop
    ctx->pc = 0x30c1f0u;
    // NOP
label_30c1f4:
    // 0x30c1f4: 0x1000fff0  b           . + 4 + (-0x10 << 2)
label_30c1f8:
    if (ctx->pc == 0x30C1F8u) {
        ctx->pc = 0x30C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1F4u;
        // 0x30c1f8: 0x32840  sll         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C1FCu;
        goto label_30c1fc;
    }
    ctx->pc = 0x30C1F4u;
    {
        const bool branch_taken_0x30c1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1F4u;
        // 0x30c1f8: 0x32840  sll         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c1f4) {
            ctx->pc = 0x30C1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30c1b8;
        }
    }
    ctx->pc = 0x30C1FCu;
label_30c1fc:
    // 0x30c1fc: 0x0  nop
    ctx->pc = 0x30c1fcu;
    // NOP
label_30c200:
    // 0x30c200: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x30c200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_30c204:
    // 0x30c204: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x30c204u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_30c208:
    // 0x30c208: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
label_30c20c:
    if (ctx->pc == 0x30C20Cu) {
        ctx->pc = 0x30C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C208u;
        // 0x30c20c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C210u;
        goto label_30c210;
    }
    ctx->pc = 0x30C208u;
    {
        const bool branch_taken_0x30c208 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C208u;
        // 0x30c20c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c208) {
            ctx->pc = 0x30C230u;
            goto label_30c230;
        }
    }
    ctx->pc = 0x30C210u;
label_30c210:
    // 0x30c210: 0xa17c2  srl         $v0, $t2, 31
    ctx->pc = 0x30c210u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
label_30c214:
    // 0x30c214: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x30c214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_30c218:
    // 0x30c218: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30c218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_30c21c:
    // 0x30c21c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x30c21cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_30c220:
    // 0x30c220: 0xc420aff0  lwc1        $f0, -0x5010($at)
    ctx->pc = 0x30c220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_30c224:
    // 0x30c224: 0x10000020  b           . + 4 + (0x20 << 2)
label_30c228:
    if (ctx->pc == 0x30C228u) {
        ctx->pc = 0x30C22Cu;
        goto label_30c22c;
    }
    ctx->pc = 0x30C224u;
    {
        const bool branch_taken_0x30c224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c224) {
            ctx->pc = 0x30C2A8u;
            goto label_30c2a8;
        }
    }
    ctx->pc = 0x30C22Cu;
label_30c22c:
    // 0x30c22c: 0x0  nop
    ctx->pc = 0x30c22cu;
    // NOP
label_30c230:
    // 0x30c230: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30c230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_30c234:
    // 0x30c234: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x30c234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_30c238:
    // 0x30c238: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_30c23c:
    if (ctx->pc == 0x30C23Cu) {
        ctx->pc = 0x30C240u;
        goto label_30c240;
    }
    ctx->pc = 0x30C238u;
    {
        const bool branch_taken_0x30c238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c238) {
            ctx->pc = 0x30C268u;
            goto label_30c268;
        }
    }
    ctx->pc = 0x30C240u;
label_30c240:
    // 0x30c240: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x30c240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_30c244:
    // 0x30c244: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30c244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_30c248:
    // 0x30c248: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x30c248u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_30c24c:
    // 0x30c24c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x30c24cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_30c250:
    // 0x30c250: 0x0  nop
    ctx->pc = 0x30c250u;
    // NOP
label_30c254:
    // 0x30c254: 0x0  nop
    ctx->pc = 0x30c254u;
    // NOP
label_30c258:
    // 0x30c258: 0x0  nop
    ctx->pc = 0x30c258u;
    // NOP
label_30c25c:
    // 0x30c25c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_30c260:
    if (ctx->pc == 0x30C260u) {
        ctx->pc = 0x30C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C25Cu;
        // 0x30c260: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C264u;
        goto label_30c264;
    }
    ctx->pc = 0x30C25Cu;
    {
        const bool branch_taken_0x30c25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C25Cu;
        // 0x30c260: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c25c) {
            ctx->pc = 0x30C248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30c248;
        }
    }
    ctx->pc = 0x30C264u;
label_30c264:
    // 0x30c264: 0x28e9ff82  slti        $t1, $a3, -0x7E
    ctx->pc = 0x30c264u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294967170) ? 1 : 0);
label_30c268:
    // 0x30c268: 0x1520000b  bnez        $t1, . + 4 + (0xB << 2)
label_30c26c:
    if (ctx->pc == 0x30C26Cu) {
        ctx->pc = 0x30C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C268u;
        // 0x30c26c: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C270u;
        goto label_30c270;
    }
    ctx->pc = 0x30C268u;
    {
        const bool branch_taken_0x30c268 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C268u;
        // 0x30c26c: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c268) {
            ctx->pc = 0x30C298u;
            goto label_30c298;
        }
    }
    ctx->pc = 0x30C270u;
label_30c270:
    // 0x30c270: 0x24e3007f  addiu       $v1, $a3, 0x7F
    ctx->pc = 0x30c270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 127));
label_30c274:
    // 0x30c274: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x30c274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
label_30c278:
    // 0x30c278: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x30c278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_30c27c:
    // 0x30c27c: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x30c27cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
label_30c280:
    // 0x30c280: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x30c280u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_30c284:
    // 0x30c284: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x30c284u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
label_30c288:
    // 0x30c288: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x30c288u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30c28c:
    // 0x30c28c: 0x10000006  b           . + 4 + (0x6 << 2)
label_30c290:
    if (ctx->pc == 0x30C290u) {
        ctx->pc = 0x30C294u;
        goto label_30c294;
    }
    ctx->pc = 0x30C28Cu;
    {
        const bool branch_taken_0x30c28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c28c) {
            ctx->pc = 0x30C2A8u;
            goto label_30c2a8;
        }
    }
    ctx->pc = 0x30C294u;
label_30c294:
    // 0x30c294: 0x0  nop
    ctx->pc = 0x30c294u;
    // NOP
label_30c298:
    // 0x30c298: 0x472023  subu        $a0, $v0, $a3
    ctx->pc = 0x30c298u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_30c29c:
    // 0x30c29c: 0x852807  srav        $a1, $a1, $a0
    ctx->pc = 0x30c29cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_30c2a0:
    // 0x30c2a0: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x30c2a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
label_30c2a4:
    // 0x30c2a4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x30c2a4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30c2a8:
    // 0x30c2a8: 0x3e00008  jr          $ra
label_30c2ac:
    if (ctx->pc == 0x30C2ACu) {
        ctx->pc = 0x30C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C2A8u;
        // 0x30c2ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30C2B0u;
        goto label_fallthrough_0x30c2a8;
    }
    ctx->pc = 0x30C2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C2A8u;
        // 0x30c2ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x30c2a8:
    ctx->pc = 0x30C2B0u;
}
