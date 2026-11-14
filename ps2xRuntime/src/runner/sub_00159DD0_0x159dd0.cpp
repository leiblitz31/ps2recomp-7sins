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

// Function: sub_00159DD0
// Address: 0x159dd0 - 0x15aa50
void sub_00159DD0_0x159dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159DD0_0x159dd0");
#endif

    switch (ctx->pc) {
        case 0x159dd0u: goto label_159dd0;
        case 0x159dd4u: goto label_159dd4;
        case 0x159dd8u: goto label_159dd8;
        case 0x159ddcu: goto label_159ddc;
        case 0x159de0u: goto label_159de0;
        case 0x159de4u: goto label_159de4;
        case 0x159de8u: goto label_159de8;
        case 0x159decu: goto label_159dec;
        case 0x159df0u: goto label_159df0;
        case 0x159df4u: goto label_159df4;
        case 0x159df8u: goto label_159df8;
        case 0x159dfcu: goto label_159dfc;
        case 0x159e00u: goto label_159e00;
        case 0x159e04u: goto label_159e04;
        case 0x159e08u: goto label_159e08;
        case 0x159e0cu: goto label_159e0c;
        case 0x159e10u: goto label_159e10;
        case 0x159e14u: goto label_159e14;
        case 0x159e18u: goto label_159e18;
        case 0x159e1cu: goto label_159e1c;
        case 0x159e20u: goto label_159e20;
        case 0x159e24u: goto label_159e24;
        case 0x159e28u: goto label_159e28;
        case 0x159e2cu: goto label_159e2c;
        case 0x159e30u: goto label_159e30;
        case 0x159e34u: goto label_159e34;
        case 0x159e38u: goto label_159e38;
        case 0x159e3cu: goto label_159e3c;
        case 0x159e40u: goto label_159e40;
        case 0x159e44u: goto label_159e44;
        case 0x159e48u: goto label_159e48;
        case 0x159e4cu: goto label_159e4c;
        case 0x159e50u: goto label_159e50;
        case 0x159e54u: goto label_159e54;
        case 0x159e58u: goto label_159e58;
        case 0x159e5cu: goto label_159e5c;
        case 0x159e60u: goto label_159e60;
        case 0x159e64u: goto label_159e64;
        case 0x159e68u: goto label_159e68;
        case 0x159e6cu: goto label_159e6c;
        case 0x159e70u: goto label_159e70;
        case 0x159e74u: goto label_159e74;
        case 0x159e78u: goto label_159e78;
        case 0x159e7cu: goto label_159e7c;
        case 0x159e80u: goto label_159e80;
        case 0x159e84u: goto label_159e84;
        case 0x159e88u: goto label_159e88;
        case 0x159e8cu: goto label_159e8c;
        case 0x159e90u: goto label_159e90;
        case 0x159e94u: goto label_159e94;
        case 0x159e98u: goto label_159e98;
        case 0x159e9cu: goto label_159e9c;
        case 0x159ea0u: goto label_159ea0;
        case 0x159ea4u: goto label_159ea4;
        case 0x159ea8u: goto label_159ea8;
        case 0x159eacu: goto label_159eac;
        case 0x159eb0u: goto label_159eb0;
        case 0x159eb4u: goto label_159eb4;
        case 0x159eb8u: goto label_159eb8;
        case 0x159ebcu: goto label_159ebc;
        case 0x159ec0u: goto label_159ec0;
        case 0x159ec4u: goto label_159ec4;
        case 0x159ec8u: goto label_159ec8;
        case 0x159eccu: goto label_159ecc;
        case 0x159ed0u: goto label_159ed0;
        case 0x159ed4u: goto label_159ed4;
        case 0x159ed8u: goto label_159ed8;
        case 0x159edcu: goto label_159edc;
        case 0x159ee0u: goto label_159ee0;
        case 0x159ee4u: goto label_159ee4;
        case 0x159ee8u: goto label_159ee8;
        case 0x159eecu: goto label_159eec;
        case 0x159ef0u: goto label_159ef0;
        case 0x159ef4u: goto label_159ef4;
        case 0x159ef8u: goto label_159ef8;
        case 0x159efcu: goto label_159efc;
        case 0x159f00u: goto label_159f00;
        case 0x159f04u: goto label_159f04;
        case 0x159f08u: goto label_159f08;
        case 0x159f0cu: goto label_159f0c;
        case 0x159f10u: goto label_159f10;
        case 0x159f14u: goto label_159f14;
        case 0x159f18u: goto label_159f18;
        case 0x159f1cu: goto label_159f1c;
        case 0x159f20u: goto label_159f20;
        case 0x159f24u: goto label_159f24;
        case 0x159f28u: goto label_159f28;
        case 0x159f2cu: goto label_159f2c;
        case 0x159f30u: goto label_159f30;
        case 0x159f34u: goto label_159f34;
        case 0x159f38u: goto label_159f38;
        case 0x159f3cu: goto label_159f3c;
        case 0x159f40u: goto label_159f40;
        case 0x159f44u: goto label_159f44;
        case 0x159f48u: goto label_159f48;
        case 0x159f4cu: goto label_159f4c;
        case 0x159f50u: goto label_159f50;
        case 0x159f54u: goto label_159f54;
        case 0x159f58u: goto label_159f58;
        case 0x159f5cu: goto label_159f5c;
        case 0x159f60u: goto label_159f60;
        case 0x159f64u: goto label_159f64;
        case 0x159f68u: goto label_159f68;
        case 0x159f6cu: goto label_159f6c;
        case 0x159f70u: goto label_159f70;
        case 0x159f74u: goto label_159f74;
        case 0x159f78u: goto label_159f78;
        case 0x159f7cu: goto label_159f7c;
        case 0x159f80u: goto label_159f80;
        case 0x159f84u: goto label_159f84;
        case 0x159f88u: goto label_159f88;
        case 0x159f8cu: goto label_159f8c;
        case 0x159f90u: goto label_159f90;
        case 0x159f94u: goto label_159f94;
        case 0x159f98u: goto label_159f98;
        case 0x159f9cu: goto label_159f9c;
        case 0x159fa0u: goto label_159fa0;
        case 0x159fa4u: goto label_159fa4;
        case 0x159fa8u: goto label_159fa8;
        case 0x159facu: goto label_159fac;
        case 0x159fb0u: goto label_159fb0;
        case 0x159fb4u: goto label_159fb4;
        case 0x159fb8u: goto label_159fb8;
        case 0x159fbcu: goto label_159fbc;
        case 0x159fc0u: goto label_159fc0;
        case 0x159fc4u: goto label_159fc4;
        case 0x159fc8u: goto label_159fc8;
        case 0x159fccu: goto label_159fcc;
        case 0x159fd0u: goto label_159fd0;
        case 0x159fd4u: goto label_159fd4;
        case 0x159fd8u: goto label_159fd8;
        case 0x159fdcu: goto label_159fdc;
        case 0x159fe0u: goto label_159fe0;
        case 0x159fe4u: goto label_159fe4;
        case 0x159fe8u: goto label_159fe8;
        case 0x159fecu: goto label_159fec;
        case 0x159ff0u: goto label_159ff0;
        case 0x159ff4u: goto label_159ff4;
        case 0x159ff8u: goto label_159ff8;
        case 0x159ffcu: goto label_159ffc;
        case 0x15a000u: goto label_15a000;
        case 0x15a004u: goto label_15a004;
        case 0x15a008u: goto label_15a008;
        case 0x15a00cu: goto label_15a00c;
        case 0x15a010u: goto label_15a010;
        case 0x15a014u: goto label_15a014;
        case 0x15a018u: goto label_15a018;
        case 0x15a01cu: goto label_15a01c;
        case 0x15a020u: goto label_15a020;
        case 0x15a024u: goto label_15a024;
        case 0x15a028u: goto label_15a028;
        case 0x15a02cu: goto label_15a02c;
        case 0x15a030u: goto label_15a030;
        case 0x15a034u: goto label_15a034;
        case 0x15a038u: goto label_15a038;
        case 0x15a03cu: goto label_15a03c;
        case 0x15a040u: goto label_15a040;
        case 0x15a044u: goto label_15a044;
        case 0x15a048u: goto label_15a048;
        case 0x15a04cu: goto label_15a04c;
        case 0x15a050u: goto label_15a050;
        case 0x15a054u: goto label_15a054;
        case 0x15a058u: goto label_15a058;
        case 0x15a05cu: goto label_15a05c;
        case 0x15a060u: goto label_15a060;
        case 0x15a064u: goto label_15a064;
        case 0x15a068u: goto label_15a068;
        case 0x15a06cu: goto label_15a06c;
        case 0x15a070u: goto label_15a070;
        case 0x15a074u: goto label_15a074;
        case 0x15a078u: goto label_15a078;
        case 0x15a07cu: goto label_15a07c;
        case 0x15a080u: goto label_15a080;
        case 0x15a084u: goto label_15a084;
        case 0x15a088u: goto label_15a088;
        case 0x15a08cu: goto label_15a08c;
        case 0x15a090u: goto label_15a090;
        case 0x15a094u: goto label_15a094;
        case 0x15a098u: goto label_15a098;
        case 0x15a09cu: goto label_15a09c;
        case 0x15a0a0u: goto label_15a0a0;
        case 0x15a0a4u: goto label_15a0a4;
        case 0x15a0a8u: goto label_15a0a8;
        case 0x15a0acu: goto label_15a0ac;
        case 0x15a0b0u: goto label_15a0b0;
        case 0x15a0b4u: goto label_15a0b4;
        case 0x15a0b8u: goto label_15a0b8;
        case 0x15a0bcu: goto label_15a0bc;
        case 0x15a0c0u: goto label_15a0c0;
        case 0x15a0c4u: goto label_15a0c4;
        case 0x15a0c8u: goto label_15a0c8;
        case 0x15a0ccu: goto label_15a0cc;
        case 0x15a0d0u: goto label_15a0d0;
        case 0x15a0d4u: goto label_15a0d4;
        case 0x15a0d8u: goto label_15a0d8;
        case 0x15a0dcu: goto label_15a0dc;
        case 0x15a0e0u: goto label_15a0e0;
        case 0x15a0e4u: goto label_15a0e4;
        case 0x15a0e8u: goto label_15a0e8;
        case 0x15a0ecu: goto label_15a0ec;
        case 0x15a0f0u: goto label_15a0f0;
        case 0x15a0f4u: goto label_15a0f4;
        case 0x15a0f8u: goto label_15a0f8;
        case 0x15a0fcu: goto label_15a0fc;
        case 0x15a100u: goto label_15a100;
        case 0x15a104u: goto label_15a104;
        case 0x15a108u: goto label_15a108;
        case 0x15a10cu: goto label_15a10c;
        case 0x15a110u: goto label_15a110;
        case 0x15a114u: goto label_15a114;
        case 0x15a118u: goto label_15a118;
        case 0x15a11cu: goto label_15a11c;
        case 0x15a120u: goto label_15a120;
        case 0x15a124u: goto label_15a124;
        case 0x15a128u: goto label_15a128;
        case 0x15a12cu: goto label_15a12c;
        case 0x15a130u: goto label_15a130;
        case 0x15a134u: goto label_15a134;
        case 0x15a138u: goto label_15a138;
        case 0x15a13cu: goto label_15a13c;
        case 0x15a140u: goto label_15a140;
        case 0x15a144u: goto label_15a144;
        case 0x15a148u: goto label_15a148;
        case 0x15a14cu: goto label_15a14c;
        case 0x15a150u: goto label_15a150;
        case 0x15a154u: goto label_15a154;
        case 0x15a158u: goto label_15a158;
        case 0x15a15cu: goto label_15a15c;
        case 0x15a160u: goto label_15a160;
        case 0x15a164u: goto label_15a164;
        case 0x15a168u: goto label_15a168;
        case 0x15a16cu: goto label_15a16c;
        case 0x15a170u: goto label_15a170;
        case 0x15a174u: goto label_15a174;
        case 0x15a178u: goto label_15a178;
        case 0x15a17cu: goto label_15a17c;
        case 0x15a180u: goto label_15a180;
        case 0x15a184u: goto label_15a184;
        case 0x15a188u: goto label_15a188;
        case 0x15a18cu: goto label_15a18c;
        case 0x15a190u: goto label_15a190;
        case 0x15a194u: goto label_15a194;
        case 0x15a198u: goto label_15a198;
        case 0x15a19cu: goto label_15a19c;
        case 0x15a1a0u: goto label_15a1a0;
        case 0x15a1a4u: goto label_15a1a4;
        case 0x15a1a8u: goto label_15a1a8;
        case 0x15a1acu: goto label_15a1ac;
        case 0x15a1b0u: goto label_15a1b0;
        case 0x15a1b4u: goto label_15a1b4;
        case 0x15a1b8u: goto label_15a1b8;
        case 0x15a1bcu: goto label_15a1bc;
        case 0x15a1c0u: goto label_15a1c0;
        case 0x15a1c4u: goto label_15a1c4;
        case 0x15a1c8u: goto label_15a1c8;
        case 0x15a1ccu: goto label_15a1cc;
        case 0x15a1d0u: goto label_15a1d0;
        case 0x15a1d4u: goto label_15a1d4;
        case 0x15a1d8u: goto label_15a1d8;
        case 0x15a1dcu: goto label_15a1dc;
        case 0x15a1e0u: goto label_15a1e0;
        case 0x15a1e4u: goto label_15a1e4;
        case 0x15a1e8u: goto label_15a1e8;
        case 0x15a1ecu: goto label_15a1ec;
        case 0x15a1f0u: goto label_15a1f0;
        case 0x15a1f4u: goto label_15a1f4;
        case 0x15a1f8u: goto label_15a1f8;
        case 0x15a1fcu: goto label_15a1fc;
        case 0x15a200u: goto label_15a200;
        case 0x15a204u: goto label_15a204;
        case 0x15a208u: goto label_15a208;
        case 0x15a20cu: goto label_15a20c;
        case 0x15a210u: goto label_15a210;
        case 0x15a214u: goto label_15a214;
        case 0x15a218u: goto label_15a218;
        case 0x15a21cu: goto label_15a21c;
        case 0x15a220u: goto label_15a220;
        case 0x15a224u: goto label_15a224;
        case 0x15a228u: goto label_15a228;
        case 0x15a22cu: goto label_15a22c;
        case 0x15a230u: goto label_15a230;
        case 0x15a234u: goto label_15a234;
        case 0x15a238u: goto label_15a238;
        case 0x15a23cu: goto label_15a23c;
        case 0x15a240u: goto label_15a240;
        case 0x15a244u: goto label_15a244;
        case 0x15a248u: goto label_15a248;
        case 0x15a24cu: goto label_15a24c;
        case 0x15a250u: goto label_15a250;
        case 0x15a254u: goto label_15a254;
        case 0x15a258u: goto label_15a258;
        case 0x15a25cu: goto label_15a25c;
        case 0x15a260u: goto label_15a260;
        case 0x15a264u: goto label_15a264;
        case 0x15a268u: goto label_15a268;
        case 0x15a26cu: goto label_15a26c;
        case 0x15a270u: goto label_15a270;
        case 0x15a274u: goto label_15a274;
        case 0x15a278u: goto label_15a278;
        case 0x15a27cu: goto label_15a27c;
        case 0x15a280u: goto label_15a280;
        case 0x15a284u: goto label_15a284;
        case 0x15a288u: goto label_15a288;
        case 0x15a28cu: goto label_15a28c;
        case 0x15a290u: goto label_15a290;
        case 0x15a294u: goto label_15a294;
        case 0x15a298u: goto label_15a298;
        case 0x15a29cu: goto label_15a29c;
        case 0x15a2a0u: goto label_15a2a0;
        case 0x15a2a4u: goto label_15a2a4;
        case 0x15a2a8u: goto label_15a2a8;
        case 0x15a2acu: goto label_15a2ac;
        case 0x15a2b0u: goto label_15a2b0;
        case 0x15a2b4u: goto label_15a2b4;
        case 0x15a2b8u: goto label_15a2b8;
        case 0x15a2bcu: goto label_15a2bc;
        case 0x15a2c0u: goto label_15a2c0;
        case 0x15a2c4u: goto label_15a2c4;
        case 0x15a2c8u: goto label_15a2c8;
        case 0x15a2ccu: goto label_15a2cc;
        case 0x15a2d0u: goto label_15a2d0;
        case 0x15a2d4u: goto label_15a2d4;
        case 0x15a2d8u: goto label_15a2d8;
        case 0x15a2dcu: goto label_15a2dc;
        case 0x15a2e0u: goto label_15a2e0;
        case 0x15a2e4u: goto label_15a2e4;
        case 0x15a2e8u: goto label_15a2e8;
        case 0x15a2ecu: goto label_15a2ec;
        case 0x15a2f0u: goto label_15a2f0;
        case 0x15a2f4u: goto label_15a2f4;
        case 0x15a2f8u: goto label_15a2f8;
        case 0x15a2fcu: goto label_15a2fc;
        case 0x15a300u: goto label_15a300;
        case 0x15a304u: goto label_15a304;
        case 0x15a308u: goto label_15a308;
        case 0x15a30cu: goto label_15a30c;
        case 0x15a310u: goto label_15a310;
        case 0x15a314u: goto label_15a314;
        case 0x15a318u: goto label_15a318;
        case 0x15a31cu: goto label_15a31c;
        case 0x15a320u: goto label_15a320;
        case 0x15a324u: goto label_15a324;
        case 0x15a328u: goto label_15a328;
        case 0x15a32cu: goto label_15a32c;
        case 0x15a330u: goto label_15a330;
        case 0x15a334u: goto label_15a334;
        case 0x15a338u: goto label_15a338;
        case 0x15a33cu: goto label_15a33c;
        case 0x15a340u: goto label_15a340;
        case 0x15a344u: goto label_15a344;
        case 0x15a348u: goto label_15a348;
        case 0x15a34cu: goto label_15a34c;
        case 0x15a350u: goto label_15a350;
        case 0x15a354u: goto label_15a354;
        case 0x15a358u: goto label_15a358;
        case 0x15a35cu: goto label_15a35c;
        case 0x15a360u: goto label_15a360;
        case 0x15a364u: goto label_15a364;
        case 0x15a368u: goto label_15a368;
        case 0x15a36cu: goto label_15a36c;
        case 0x15a370u: goto label_15a370;
        case 0x15a374u: goto label_15a374;
        case 0x15a378u: goto label_15a378;
        case 0x15a37cu: goto label_15a37c;
        case 0x15a380u: goto label_15a380;
        case 0x15a384u: goto label_15a384;
        case 0x15a388u: goto label_15a388;
        case 0x15a38cu: goto label_15a38c;
        case 0x15a390u: goto label_15a390;
        case 0x15a394u: goto label_15a394;
        case 0x15a398u: goto label_15a398;
        case 0x15a39cu: goto label_15a39c;
        case 0x15a3a0u: goto label_15a3a0;
        case 0x15a3a4u: goto label_15a3a4;
        case 0x15a3a8u: goto label_15a3a8;
        case 0x15a3acu: goto label_15a3ac;
        case 0x15a3b0u: goto label_15a3b0;
        case 0x15a3b4u: goto label_15a3b4;
        case 0x15a3b8u: goto label_15a3b8;
        case 0x15a3bcu: goto label_15a3bc;
        case 0x15a3c0u: goto label_15a3c0;
        case 0x15a3c4u: goto label_15a3c4;
        case 0x15a3c8u: goto label_15a3c8;
        case 0x15a3ccu: goto label_15a3cc;
        case 0x15a3d0u: goto label_15a3d0;
        case 0x15a3d4u: goto label_15a3d4;
        case 0x15a3d8u: goto label_15a3d8;
        case 0x15a3dcu: goto label_15a3dc;
        case 0x15a3e0u: goto label_15a3e0;
        case 0x15a3e4u: goto label_15a3e4;
        case 0x15a3e8u: goto label_15a3e8;
        case 0x15a3ecu: goto label_15a3ec;
        case 0x15a3f0u: goto label_15a3f0;
        case 0x15a3f4u: goto label_15a3f4;
        case 0x15a3f8u: goto label_15a3f8;
        case 0x15a3fcu: goto label_15a3fc;
        case 0x15a400u: goto label_15a400;
        case 0x15a404u: goto label_15a404;
        case 0x15a408u: goto label_15a408;
        case 0x15a40cu: goto label_15a40c;
        case 0x15a410u: goto label_15a410;
        case 0x15a414u: goto label_15a414;
        case 0x15a418u: goto label_15a418;
        case 0x15a41cu: goto label_15a41c;
        case 0x15a420u: goto label_15a420;
        case 0x15a424u: goto label_15a424;
        case 0x15a428u: goto label_15a428;
        case 0x15a42cu: goto label_15a42c;
        case 0x15a430u: goto label_15a430;
        case 0x15a434u: goto label_15a434;
        case 0x15a438u: goto label_15a438;
        case 0x15a43cu: goto label_15a43c;
        case 0x15a440u: goto label_15a440;
        case 0x15a444u: goto label_15a444;
        case 0x15a448u: goto label_15a448;
        case 0x15a44cu: goto label_15a44c;
        case 0x15a450u: goto label_15a450;
        case 0x15a454u: goto label_15a454;
        case 0x15a458u: goto label_15a458;
        case 0x15a45cu: goto label_15a45c;
        case 0x15a460u: goto label_15a460;
        case 0x15a464u: goto label_15a464;
        case 0x15a468u: goto label_15a468;
        case 0x15a46cu: goto label_15a46c;
        case 0x15a470u: goto label_15a470;
        case 0x15a474u: goto label_15a474;
        case 0x15a478u: goto label_15a478;
        case 0x15a47cu: goto label_15a47c;
        case 0x15a480u: goto label_15a480;
        case 0x15a484u: goto label_15a484;
        case 0x15a488u: goto label_15a488;
        case 0x15a48cu: goto label_15a48c;
        case 0x15a490u: goto label_15a490;
        case 0x15a494u: goto label_15a494;
        case 0x15a498u: goto label_15a498;
        case 0x15a49cu: goto label_15a49c;
        case 0x15a4a0u: goto label_15a4a0;
        case 0x15a4a4u: goto label_15a4a4;
        case 0x15a4a8u: goto label_15a4a8;
        case 0x15a4acu: goto label_15a4ac;
        case 0x15a4b0u: goto label_15a4b0;
        case 0x15a4b4u: goto label_15a4b4;
        case 0x15a4b8u: goto label_15a4b8;
        case 0x15a4bcu: goto label_15a4bc;
        case 0x15a4c0u: goto label_15a4c0;
        case 0x15a4c4u: goto label_15a4c4;
        case 0x15a4c8u: goto label_15a4c8;
        case 0x15a4ccu: goto label_15a4cc;
        case 0x15a4d0u: goto label_15a4d0;
        case 0x15a4d4u: goto label_15a4d4;
        case 0x15a4d8u: goto label_15a4d8;
        case 0x15a4dcu: goto label_15a4dc;
        case 0x15a4e0u: goto label_15a4e0;
        case 0x15a4e4u: goto label_15a4e4;
        case 0x15a4e8u: goto label_15a4e8;
        case 0x15a4ecu: goto label_15a4ec;
        case 0x15a4f0u: goto label_15a4f0;
        case 0x15a4f4u: goto label_15a4f4;
        case 0x15a4f8u: goto label_15a4f8;
        case 0x15a4fcu: goto label_15a4fc;
        case 0x15a500u: goto label_15a500;
        case 0x15a504u: goto label_15a504;
        case 0x15a508u: goto label_15a508;
        case 0x15a50cu: goto label_15a50c;
        case 0x15a510u: goto label_15a510;
        case 0x15a514u: goto label_15a514;
        case 0x15a518u: goto label_15a518;
        case 0x15a51cu: goto label_15a51c;
        case 0x15a520u: goto label_15a520;
        case 0x15a524u: goto label_15a524;
        case 0x15a528u: goto label_15a528;
        case 0x15a52cu: goto label_15a52c;
        case 0x15a530u: goto label_15a530;
        case 0x15a534u: goto label_15a534;
        case 0x15a538u: goto label_15a538;
        case 0x15a53cu: goto label_15a53c;
        case 0x15a540u: goto label_15a540;
        case 0x15a544u: goto label_15a544;
        case 0x15a548u: goto label_15a548;
        case 0x15a54cu: goto label_15a54c;
        case 0x15a550u: goto label_15a550;
        case 0x15a554u: goto label_15a554;
        case 0x15a558u: goto label_15a558;
        case 0x15a55cu: goto label_15a55c;
        case 0x15a560u: goto label_15a560;
        case 0x15a564u: goto label_15a564;
        case 0x15a568u: goto label_15a568;
        case 0x15a56cu: goto label_15a56c;
        case 0x15a570u: goto label_15a570;
        case 0x15a574u: goto label_15a574;
        case 0x15a578u: goto label_15a578;
        case 0x15a57cu: goto label_15a57c;
        case 0x15a580u: goto label_15a580;
        case 0x15a584u: goto label_15a584;
        case 0x15a588u: goto label_15a588;
        case 0x15a58cu: goto label_15a58c;
        case 0x15a590u: goto label_15a590;
        case 0x15a594u: goto label_15a594;
        case 0x15a598u: goto label_15a598;
        case 0x15a59cu: goto label_15a59c;
        case 0x15a5a0u: goto label_15a5a0;
        case 0x15a5a4u: goto label_15a5a4;
        case 0x15a5a8u: goto label_15a5a8;
        case 0x15a5acu: goto label_15a5ac;
        case 0x15a5b0u: goto label_15a5b0;
        case 0x15a5b4u: goto label_15a5b4;
        case 0x15a5b8u: goto label_15a5b8;
        case 0x15a5bcu: goto label_15a5bc;
        case 0x15a5c0u: goto label_15a5c0;
        case 0x15a5c4u: goto label_15a5c4;
        case 0x15a5c8u: goto label_15a5c8;
        case 0x15a5ccu: goto label_15a5cc;
        case 0x15a5d0u: goto label_15a5d0;
        case 0x15a5d4u: goto label_15a5d4;
        case 0x15a5d8u: goto label_15a5d8;
        case 0x15a5dcu: goto label_15a5dc;
        case 0x15a5e0u: goto label_15a5e0;
        case 0x15a5e4u: goto label_15a5e4;
        case 0x15a5e8u: goto label_15a5e8;
        case 0x15a5ecu: goto label_15a5ec;
        case 0x15a5f0u: goto label_15a5f0;
        case 0x15a5f4u: goto label_15a5f4;
        case 0x15a5f8u: goto label_15a5f8;
        case 0x15a5fcu: goto label_15a5fc;
        case 0x15a600u: goto label_15a600;
        case 0x15a604u: goto label_15a604;
        case 0x15a608u: goto label_15a608;
        case 0x15a60cu: goto label_15a60c;
        case 0x15a610u: goto label_15a610;
        case 0x15a614u: goto label_15a614;
        case 0x15a618u: goto label_15a618;
        case 0x15a61cu: goto label_15a61c;
        case 0x15a620u: goto label_15a620;
        case 0x15a624u: goto label_15a624;
        case 0x15a628u: goto label_15a628;
        case 0x15a62cu: goto label_15a62c;
        case 0x15a630u: goto label_15a630;
        case 0x15a634u: goto label_15a634;
        case 0x15a638u: goto label_15a638;
        case 0x15a63cu: goto label_15a63c;
        case 0x15a640u: goto label_15a640;
        case 0x15a644u: goto label_15a644;
        case 0x15a648u: goto label_15a648;
        case 0x15a64cu: goto label_15a64c;
        case 0x15a650u: goto label_15a650;
        case 0x15a654u: goto label_15a654;
        case 0x15a658u: goto label_15a658;
        case 0x15a65cu: goto label_15a65c;
        case 0x15a660u: goto label_15a660;
        case 0x15a664u: goto label_15a664;
        case 0x15a668u: goto label_15a668;
        case 0x15a66cu: goto label_15a66c;
        case 0x15a670u: goto label_15a670;
        case 0x15a674u: goto label_15a674;
        case 0x15a678u: goto label_15a678;
        case 0x15a67cu: goto label_15a67c;
        case 0x15a680u: goto label_15a680;
        case 0x15a684u: goto label_15a684;
        case 0x15a688u: goto label_15a688;
        case 0x15a68cu: goto label_15a68c;
        case 0x15a690u: goto label_15a690;
        case 0x15a694u: goto label_15a694;
        case 0x15a698u: goto label_15a698;
        case 0x15a69cu: goto label_15a69c;
        case 0x15a6a0u: goto label_15a6a0;
        case 0x15a6a4u: goto label_15a6a4;
        case 0x15a6a8u: goto label_15a6a8;
        case 0x15a6acu: goto label_15a6ac;
        case 0x15a6b0u: goto label_15a6b0;
        case 0x15a6b4u: goto label_15a6b4;
        case 0x15a6b8u: goto label_15a6b8;
        case 0x15a6bcu: goto label_15a6bc;
        case 0x15a6c0u: goto label_15a6c0;
        case 0x15a6c4u: goto label_15a6c4;
        case 0x15a6c8u: goto label_15a6c8;
        case 0x15a6ccu: goto label_15a6cc;
        case 0x15a6d0u: goto label_15a6d0;
        case 0x15a6d4u: goto label_15a6d4;
        case 0x15a6d8u: goto label_15a6d8;
        case 0x15a6dcu: goto label_15a6dc;
        case 0x15a6e0u: goto label_15a6e0;
        case 0x15a6e4u: goto label_15a6e4;
        case 0x15a6e8u: goto label_15a6e8;
        case 0x15a6ecu: goto label_15a6ec;
        case 0x15a6f0u: goto label_15a6f0;
        case 0x15a6f4u: goto label_15a6f4;
        case 0x15a6f8u: goto label_15a6f8;
        case 0x15a6fcu: goto label_15a6fc;
        case 0x15a700u: goto label_15a700;
        case 0x15a704u: goto label_15a704;
        case 0x15a708u: goto label_15a708;
        case 0x15a70cu: goto label_15a70c;
        case 0x15a710u: goto label_15a710;
        case 0x15a714u: goto label_15a714;
        case 0x15a718u: goto label_15a718;
        case 0x15a71cu: goto label_15a71c;
        case 0x15a720u: goto label_15a720;
        case 0x15a724u: goto label_15a724;
        case 0x15a728u: goto label_15a728;
        case 0x15a72cu: goto label_15a72c;
        case 0x15a730u: goto label_15a730;
        case 0x15a734u: goto label_15a734;
        case 0x15a738u: goto label_15a738;
        case 0x15a73cu: goto label_15a73c;
        case 0x15a740u: goto label_15a740;
        case 0x15a744u: goto label_15a744;
        case 0x15a748u: goto label_15a748;
        case 0x15a74cu: goto label_15a74c;
        case 0x15a750u: goto label_15a750;
        case 0x15a754u: goto label_15a754;
        case 0x15a758u: goto label_15a758;
        case 0x15a75cu: goto label_15a75c;
        case 0x15a760u: goto label_15a760;
        case 0x15a764u: goto label_15a764;
        case 0x15a768u: goto label_15a768;
        case 0x15a76cu: goto label_15a76c;
        case 0x15a770u: goto label_15a770;
        case 0x15a774u: goto label_15a774;
        case 0x15a778u: goto label_15a778;
        case 0x15a77cu: goto label_15a77c;
        case 0x15a780u: goto label_15a780;
        case 0x15a784u: goto label_15a784;
        case 0x15a788u: goto label_15a788;
        case 0x15a78cu: goto label_15a78c;
        case 0x15a790u: goto label_15a790;
        case 0x15a794u: goto label_15a794;
        case 0x15a798u: goto label_15a798;
        case 0x15a79cu: goto label_15a79c;
        case 0x15a7a0u: goto label_15a7a0;
        case 0x15a7a4u: goto label_15a7a4;
        case 0x15a7a8u: goto label_15a7a8;
        case 0x15a7acu: goto label_15a7ac;
        case 0x15a7b0u: goto label_15a7b0;
        case 0x15a7b4u: goto label_15a7b4;
        case 0x15a7b8u: goto label_15a7b8;
        case 0x15a7bcu: goto label_15a7bc;
        case 0x15a7c0u: goto label_15a7c0;
        case 0x15a7c4u: goto label_15a7c4;
        case 0x15a7c8u: goto label_15a7c8;
        case 0x15a7ccu: goto label_15a7cc;
        case 0x15a7d0u: goto label_15a7d0;
        case 0x15a7d4u: goto label_15a7d4;
        case 0x15a7d8u: goto label_15a7d8;
        case 0x15a7dcu: goto label_15a7dc;
        case 0x15a7e0u: goto label_15a7e0;
        case 0x15a7e4u: goto label_15a7e4;
        case 0x15a7e8u: goto label_15a7e8;
        case 0x15a7ecu: goto label_15a7ec;
        case 0x15a7f0u: goto label_15a7f0;
        case 0x15a7f4u: goto label_15a7f4;
        case 0x15a7f8u: goto label_15a7f8;
        case 0x15a7fcu: goto label_15a7fc;
        case 0x15a800u: goto label_15a800;
        case 0x15a804u: goto label_15a804;
        case 0x15a808u: goto label_15a808;
        case 0x15a80cu: goto label_15a80c;
        case 0x15a810u: goto label_15a810;
        case 0x15a814u: goto label_15a814;
        case 0x15a818u: goto label_15a818;
        case 0x15a81cu: goto label_15a81c;
        case 0x15a820u: goto label_15a820;
        case 0x15a824u: goto label_15a824;
        case 0x15a828u: goto label_15a828;
        case 0x15a82cu: goto label_15a82c;
        case 0x15a830u: goto label_15a830;
        case 0x15a834u: goto label_15a834;
        case 0x15a838u: goto label_15a838;
        case 0x15a83cu: goto label_15a83c;
        case 0x15a840u: goto label_15a840;
        case 0x15a844u: goto label_15a844;
        case 0x15a848u: goto label_15a848;
        case 0x15a84cu: goto label_15a84c;
        case 0x15a850u: goto label_15a850;
        case 0x15a854u: goto label_15a854;
        case 0x15a858u: goto label_15a858;
        case 0x15a85cu: goto label_15a85c;
        case 0x15a860u: goto label_15a860;
        case 0x15a864u: goto label_15a864;
        case 0x15a868u: goto label_15a868;
        case 0x15a86cu: goto label_15a86c;
        case 0x15a870u: goto label_15a870;
        case 0x15a874u: goto label_15a874;
        case 0x15a878u: goto label_15a878;
        case 0x15a87cu: goto label_15a87c;
        case 0x15a880u: goto label_15a880;
        case 0x15a884u: goto label_15a884;
        case 0x15a888u: goto label_15a888;
        case 0x15a88cu: goto label_15a88c;
        case 0x15a890u: goto label_15a890;
        case 0x15a894u: goto label_15a894;
        case 0x15a898u: goto label_15a898;
        case 0x15a89cu: goto label_15a89c;
        case 0x15a8a0u: goto label_15a8a0;
        case 0x15a8a4u: goto label_15a8a4;
        case 0x15a8a8u: goto label_15a8a8;
        case 0x15a8acu: goto label_15a8ac;
        case 0x15a8b0u: goto label_15a8b0;
        case 0x15a8b4u: goto label_15a8b4;
        case 0x15a8b8u: goto label_15a8b8;
        case 0x15a8bcu: goto label_15a8bc;
        case 0x15a8c0u: goto label_15a8c0;
        case 0x15a8c4u: goto label_15a8c4;
        case 0x15a8c8u: goto label_15a8c8;
        case 0x15a8ccu: goto label_15a8cc;
        case 0x15a8d0u: goto label_15a8d0;
        case 0x15a8d4u: goto label_15a8d4;
        case 0x15a8d8u: goto label_15a8d8;
        case 0x15a8dcu: goto label_15a8dc;
        case 0x15a8e0u: goto label_15a8e0;
        case 0x15a8e4u: goto label_15a8e4;
        case 0x15a8e8u: goto label_15a8e8;
        case 0x15a8ecu: goto label_15a8ec;
        case 0x15a8f0u: goto label_15a8f0;
        case 0x15a8f4u: goto label_15a8f4;
        case 0x15a8f8u: goto label_15a8f8;
        case 0x15a8fcu: goto label_15a8fc;
        case 0x15a900u: goto label_15a900;
        case 0x15a904u: goto label_15a904;
        case 0x15a908u: goto label_15a908;
        case 0x15a90cu: goto label_15a90c;
        case 0x15a910u: goto label_15a910;
        case 0x15a914u: goto label_15a914;
        case 0x15a918u: goto label_15a918;
        case 0x15a91cu: goto label_15a91c;
        case 0x15a920u: goto label_15a920;
        case 0x15a924u: goto label_15a924;
        case 0x15a928u: goto label_15a928;
        case 0x15a92cu: goto label_15a92c;
        case 0x15a930u: goto label_15a930;
        case 0x15a934u: goto label_15a934;
        case 0x15a938u: goto label_15a938;
        case 0x15a93cu: goto label_15a93c;
        case 0x15a940u: goto label_15a940;
        case 0x15a944u: goto label_15a944;
        case 0x15a948u: goto label_15a948;
        case 0x15a94cu: goto label_15a94c;
        case 0x15a950u: goto label_15a950;
        case 0x15a954u: goto label_15a954;
        case 0x15a958u: goto label_15a958;
        case 0x15a95cu: goto label_15a95c;
        case 0x15a960u: goto label_15a960;
        case 0x15a964u: goto label_15a964;
        case 0x15a968u: goto label_15a968;
        case 0x15a96cu: goto label_15a96c;
        case 0x15a970u: goto label_15a970;
        case 0x15a974u: goto label_15a974;
        case 0x15a978u: goto label_15a978;
        case 0x15a97cu: goto label_15a97c;
        case 0x15a980u: goto label_15a980;
        case 0x15a984u: goto label_15a984;
        case 0x15a988u: goto label_15a988;
        case 0x15a98cu: goto label_15a98c;
        case 0x15a990u: goto label_15a990;
        case 0x15a994u: goto label_15a994;
        case 0x15a998u: goto label_15a998;
        case 0x15a99cu: goto label_15a99c;
        case 0x15a9a0u: goto label_15a9a0;
        case 0x15a9a4u: goto label_15a9a4;
        case 0x15a9a8u: goto label_15a9a8;
        case 0x15a9acu: goto label_15a9ac;
        case 0x15a9b0u: goto label_15a9b0;
        case 0x15a9b4u: goto label_15a9b4;
        case 0x15a9b8u: goto label_15a9b8;
        case 0x15a9bcu: goto label_15a9bc;
        case 0x15a9c0u: goto label_15a9c0;
        case 0x15a9c4u: goto label_15a9c4;
        case 0x15a9c8u: goto label_15a9c8;
        case 0x15a9ccu: goto label_15a9cc;
        case 0x15a9d0u: goto label_15a9d0;
        case 0x15a9d4u: goto label_15a9d4;
        case 0x15a9d8u: goto label_15a9d8;
        case 0x15a9dcu: goto label_15a9dc;
        case 0x15a9e0u: goto label_15a9e0;
        case 0x15a9e4u: goto label_15a9e4;
        case 0x15a9e8u: goto label_15a9e8;
        case 0x15a9ecu: goto label_15a9ec;
        case 0x15a9f0u: goto label_15a9f0;
        case 0x15a9f4u: goto label_15a9f4;
        case 0x15a9f8u: goto label_15a9f8;
        case 0x15a9fcu: goto label_15a9fc;
        case 0x15aa00u: goto label_15aa00;
        case 0x15aa04u: goto label_15aa04;
        case 0x15aa08u: goto label_15aa08;
        case 0x15aa0cu: goto label_15aa0c;
        case 0x15aa10u: goto label_15aa10;
        case 0x15aa14u: goto label_15aa14;
        case 0x15aa18u: goto label_15aa18;
        case 0x15aa1cu: goto label_15aa1c;
        case 0x15aa20u: goto label_15aa20;
        case 0x15aa24u: goto label_15aa24;
        case 0x15aa28u: goto label_15aa28;
        case 0x15aa2cu: goto label_15aa2c;
        case 0x15aa30u: goto label_15aa30;
        case 0x15aa34u: goto label_15aa34;
        case 0x15aa38u: goto label_15aa38;
        case 0x15aa3cu: goto label_15aa3c;
        case 0x15aa40u: goto label_15aa40;
        case 0x15aa44u: goto label_15aa44;
        case 0x15aa48u: goto label_15aa48;
        case 0x15aa4cu: goto label_15aa4c;
        default: break;
    }

    ctx->pc = 0x159dd0u;

label_159dd0:
    // 0x159dd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x159dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_159dd4:
    // 0x159dd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x159dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_159dd8:
    // 0x159dd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x159dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_159ddc:
    // 0x159ddc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x159ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_159de0:
    // 0x159de0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x159de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_159de4:
    // 0x159de4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x159de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_159de8:
    // 0x159de8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x159de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_159dec:
    // 0x159dec: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x159decu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_159df0:
    // 0x159df0: 0xc041934  jal         func_1064D0
label_159df4:
    if (ctx->pc == 0x159DF4u) {
        ctx->pc = 0x159DF8u;
        goto label_159df8;
    }
    ctx->pc = 0x159DF0u;
    SET_GPR_U32(ctx, 31, 0x159DF8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x159DF0u, 0x159DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159DF8u;
label_159df8:
    // 0x159df8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_159dfc:
    // 0x159dfc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x159dfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_159e00:
    // 0x159e00: 0x3e00008  jr          $ra
label_159e04:
    if (ctx->pc == 0x159E04u) {
        ctx->pc = 0x159E08u;
        goto label_159e08;
    }
    ctx->pc = 0x159E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159E08u;
label_159e08:
    // 0x159e08: 0x0  nop
    ctx->pc = 0x159e08u;
    // NOP
label_159e0c:
    // 0x159e0c: 0x0  nop
    ctx->pc = 0x159e0cu;
    // NOP
label_159e10:
    // 0x159e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x159e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_159e14:
    // 0x159e14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x159e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_159e18:
    // 0x159e18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_159e1c:
    // 0x159e1c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x159e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_159e20:
    // 0x159e20: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x159e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_159e24:
    // 0x159e24: 0xc058e8c  jal         func_163A30
label_159e28:
    if (ctx->pc == 0x159E28u) {
        ctx->pc = 0x159E2Cu;
        goto label_159e2c;
    }
    ctx->pc = 0x159E24u;
    SET_GPR_U32(ctx, 31, 0x159E2Cu);
    ctx->pc = 0x163A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163A30u, 0x159E24u, 0x159E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159E2Cu;
label_159e2c:
    // 0x159e2c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x159e2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_159e30:
    // 0x159e30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x159e30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_159e34:
    // 0x159e34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x159e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_159e38:
    // 0x159e38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x159e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_159e3c:
    // 0x159e3c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x159e3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_159e40:
    // 0x159e40: 0x3e00008  jr          $ra
label_159e44:
    if (ctx->pc == 0x159E44u) {
        ctx->pc = 0x159E48u;
        goto label_159e48;
    }
    ctx->pc = 0x159E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159E48u;
label_159e48:
    // 0x159e48: 0x0  nop
    ctx->pc = 0x159e48u;
    // NOP
label_159e4c:
    // 0x159e4c: 0x0  nop
    ctx->pc = 0x159e4cu;
    // NOP
label_159e50:
    // 0x159e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x159e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_159e54:
    // 0x159e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x159e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_159e58:
    // 0x159e58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x159e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_159e5c:
    // 0x159e5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x159e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_159e60:
    // 0x159e60: 0xc058e9c  jal         func_163A70
label_159e64:
    if (ctx->pc == 0x159E64u) {
        ctx->pc = 0x159E68u;
        goto label_159e68;
    }
    ctx->pc = 0x159E60u;
    SET_GPR_U32(ctx, 31, 0x159E68u);
    ctx->pc = 0x163A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163A70u, 0x159E60u, 0x159E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159E68u;
label_159e68:
    // 0x159e68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_159e6c:
    // 0x159e6c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x159e6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_159e70:
    // 0x159e70: 0x3e00008  jr          $ra
label_159e74:
    if (ctx->pc == 0x159E74u) {
        ctx->pc = 0x159E78u;
        goto label_159e78;
    }
    ctx->pc = 0x159E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159E78u;
label_159e78:
    // 0x159e78: 0x0  nop
    ctx->pc = 0x159e78u;
    // NOP
label_159e7c:
    // 0x159e7c: 0x0  nop
    ctx->pc = 0x159e7cu;
    // NOP
label_159e80:
    // 0x159e80: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x159e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_159e84:
    // 0x159e84: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x159e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_159e88:
    // 0x159e88: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x159e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_159e8c:
    // 0x159e8c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x159e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_159e90:
    // 0x159e90: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x159e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_159e94:
    // 0x159e94: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x159e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_159e98:
    // 0x159e98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x159e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_159e9c:
    // 0x159e9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x159e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_159ea0:
    // 0x159ea0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x159ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_159ea4:
    // 0x159ea4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x159ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_159ea8:
    // 0x159ea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_159eac:
    // 0x159eac: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x159eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_159eb0:
    // 0x159eb0: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x159eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_159eb4:
    // 0x159eb4: 0xc055b3c  jal         func_156CF0
label_159eb8:
    if (ctx->pc == 0x159EB8u) {
        ctx->pc = 0x159EBCu;
        goto label_159ebc;
    }
    ctx->pc = 0x159EB4u;
    SET_GPR_U32(ctx, 31, 0x159EBCu);
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x159EB4u, 0x159EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159EBCu;
label_159ebc:
    // 0x159ebc: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x159ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_159ec0:
    // 0x159ec0: 0x90830028  lbu         $v1, 0x28($a0)
    ctx->pc = 0x159ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 40)));
label_159ec4:
    // 0x159ec4: 0xa3a3013f  sb          $v1, 0x13F($sp)
    ctx->pc = 0x159ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 319), (uint8_t)GPR_U32(ctx, 3));
label_159ec8:
    // 0x159ec8: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x159ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_159ecc:
    // 0x159ecc: 0x90a400a4  lbu         $a0, 0xA4($a1)
    ctx->pc = 0x159eccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 164)));
label_159ed0:
    // 0x159ed0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x159ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_159ed4:
    // 0x159ed4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x159ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_159ed8:
    // 0x159ed8: 0x14640013  bne         $v1, $a0, . + 4 + (0x13 << 2)
label_159edc:
    if (ctx->pc == 0x159EDCu) {
        ctx->pc = 0x159EE0u;
        goto label_159ee0;
    }
    ctx->pc = 0x159ED8u;
    {
        const bool branch_taken_0x159ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x159ed8) {
            ctx->pc = 0x159F28u;
            goto label_159f28;
        }
    }
    ctx->pc = 0x159EE0u;
label_159ee0:
    // 0x159ee0: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x159ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_159ee4:
    // 0x159ee4: 0x8cc70034  lw          $a3, 0x34($a2)
    ctx->pc = 0x159ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_159ee8:
    // 0x159ee8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x159ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_159eec:
    // 0x159eec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x159eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_159ef0:
    // 0x159ef0: 0xc08c9a8  jal         func_2326A0
label_159ef4:
    if (ctx->pc == 0x159EF4u) {
        ctx->pc = 0x159EF8u;
        goto label_159ef8;
    }
    ctx->pc = 0x159EF0u;
    SET_GPR_U32(ctx, 31, 0x159EF8u);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x159EF0u, 0x159EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159EF8u;
label_159ef8:
    // 0x159ef8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x159ef8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_159efc:
    // 0x159efc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x159efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_159f00:
    // 0x159f00: 0x10a302c3  beq         $a1, $v1, . + 4 + (0x2C3 << 2)
label_159f04:
    if (ctx->pc == 0x159F04u) {
        ctx->pc = 0x159F08u;
        goto label_159f08;
    }
    ctx->pc = 0x159F00u;
    {
        const bool branch_taken_0x159f00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x159f00) {
            ctx->pc = 0x15AA10u;
            goto label_15aa10;
        }
    }
    ctx->pc = 0x159F08u;
label_159f08:
    // 0x159f08: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x159f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_159f0c:
    // 0x159f0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x159f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159f10:
    // 0x159f10: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x159f10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_159f14:
    // 0x159f14: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x159f14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_159f18:
    // 0x159f18: 0x320f809  jalr        $t9
label_159f1c:
    if (ctx->pc == 0x159F1Cu) {
        ctx->pc = 0x159F20u;
        goto label_159f20;
    }
    ctx->pc = 0x159F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x159F20u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159F18u, 0x159F20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159F20u;
label_159f20:
    // 0x159f20: 0x100002bb  b           . + 4 + (0x2BB << 2)
label_159f24:
    if (ctx->pc == 0x159F24u) {
        ctx->pc = 0x159F28u;
        goto label_159f28;
    }
    ctx->pc = 0x159F20u;
    {
        const bool branch_taken_0x159f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159f20) {
            ctx->pc = 0x15AA10u;
            goto label_15aa10;
        }
    }
    ctx->pc = 0x159F28u;
label_159f28:
    // 0x159f28: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x159f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_159f2c:
    // 0x159f2c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x159f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_159f30:
    // 0x159f30: 0xafa30138  sw          $v1, 0x138($sp)
    ctx->pc = 0x159f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 3));
label_159f34:
    // 0x159f34: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x159f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_159f38:
    // 0x159f38: 0x106002b5  beqz        $v1, . + 4 + (0x2B5 << 2)
label_159f3c:
    if (ctx->pc == 0x159F3Cu) {
        ctx->pc = 0x159F40u;
        goto label_159f40;
    }
    ctx->pc = 0x159F38u;
    {
        const bool branch_taken_0x159f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x159f38) {
            ctx->pc = 0x15AA10u;
            goto label_15aa10;
        }
    }
    ctx->pc = 0x159F40u;
label_159f40:
    // 0x159f40: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x159f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_159f44:
    // 0x159f44: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x159f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_159f48:
    // 0x159f48: 0xc085538  jal         func_2154E0
label_159f4c:
    if (ctx->pc == 0x159F4Cu) {
        ctx->pc = 0x159F50u;
        goto label_159f50;
    }
    ctx->pc = 0x159F48u;
    SET_GPR_U32(ctx, 31, 0x159F50u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x159F48u, 0x159F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159F50u;
label_159f50:
    // 0x159f50: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x159f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
label_159f54:
    // 0x159f54: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x159f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_159f58:
    // 0x159f58: 0x24632f30  addiu       $v1, $v1, 0x2F30
    ctx->pc = 0x159f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12080));
label_159f5c:
    // 0x159f5c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x159f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_159f60:
    // 0x159f60: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x159f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_159f64:
    // 0x159f64: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x159f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_159f68:
    // 0x159f68: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x159f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_159f6c:
    // 0x159f6c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x159f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_159f70:
    // 0x159f70: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x159f70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_159f74:
    // 0x159f74: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x159f74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_159f78:
    // 0x159f78: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x159f78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_159f7c:
    // 0x159f7c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x159f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_159f80:
    // 0x159f80: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x159f80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_159f84:
    // 0x159f84: 0x24a52f40  addiu       $a1, $a1, 0x2F40
    ctx->pc = 0x159f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12096));
label_159f88:
    // 0x159f88: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x159f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_159f8c:
    // 0x159f8c: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x159f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_159f90:
    // 0x159f90: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x159f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_159f94:
    // 0x159f94: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x159f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_159f98:
    // 0x159f98: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x159f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_159f9c:
    // 0x159f9c: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x159f9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_159fa0:
    // 0x159fa0: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x159fa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_159fa4:
    // 0x159fa4: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x159fa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_159fa8:
    // 0x159fa8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x159fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_159fac:
    // 0x159fac: 0xa3a0013e  sb          $zero, 0x13E($sp)
    ctx->pc = 0x159facu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 318), (uint8_t)GPR_U32(ctx, 0));
label_159fb0:
    // 0x159fb0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x159fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159fb4:
    // 0x159fb4: 0x10000293  b           . + 4 + (0x293 << 2)
label_159fb8:
    if (ctx->pc == 0x159FB8u) {
        ctx->pc = 0x159FBCu;
        goto label_159fbc;
    }
    ctx->pc = 0x159FB4u;
    {
        const bool branch_taken_0x159fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x159fb4) {
            ctx->pc = 0x15AA04u;
            goto label_15aa04;
        }
    }
    ctx->pc = 0x159FBCu;
label_159fbc:
    // 0x159fbc: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x159fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_159fc0:
    // 0x159fc0: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x159fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_159fc4:
    // 0x159fc4: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x159fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_159fc8:
    // 0x159fc8: 0x8c4500b0  lw          $a1, 0xB0($v0)
    ctx->pc = 0x159fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_159fcc:
    // 0x159fcc: 0xc09681c  jal         func_25A070
label_159fd0:
    if (ctx->pc == 0x159FD0u) {
        ctx->pc = 0x159FD4u;
        goto label_159fd4;
    }
    ctx->pc = 0x159FCCu;
    SET_GPR_U32(ctx, 31, 0x159FD4u);
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x159FCCu, 0x159FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159FD4u;
label_159fd4:
    // 0x159fd4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x159fd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159fd8:
    // 0x159fd8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x159fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_159fdc:
    // 0x159fdc: 0xc056a94  jal         func_15AA50
label_159fe0:
    if (ctx->pc == 0x159FE0u) {
        ctx->pc = 0x159FE4u;
        goto label_159fe4;
    }
    ctx->pc = 0x159FDCu;
    SET_GPR_U32(ctx, 31, 0x159FE4u);
    ctx->pc = 0x15AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA50u, 0x159FDCu, 0x159FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159FE4u;
label_159fe4:
    // 0x159fe4: 0x1440019f  bnez        $v0, . + 4 + (0x19F << 2)
label_159fe8:
    if (ctx->pc == 0x159FE8u) {
        ctx->pc = 0x159FECu;
        goto label_159fec;
    }
    ctx->pc = 0x159FE4u;
    {
        const bool branch_taken_0x159fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159fe4) {
            ctx->pc = 0x15A664u;
            goto label_15a664;
        }
    }
    ctx->pc = 0x159FECu;
label_159fec:
    // 0x159fec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x159fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_159ff0:
    // 0x159ff0: 0xc0525e4  jal         func_149790
label_159ff4:
    if (ctx->pc == 0x159FF4u) {
        ctx->pc = 0x159FF8u;
        goto label_159ff8;
    }
    ctx->pc = 0x159FF0u;
    SET_GPR_U32(ctx, 31, 0x159FF8u);
    ctx->pc = 0x149790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149790u, 0x159FF0u, 0x159FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159FF8u;
label_159ff8:
    // 0x159ff8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x159ff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159ffc:
    // 0x159ffc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x159ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_15a000:
    // 0x15a000: 0x1003023e  beq         $zero, $v1, . + 4 + (0x23E << 2)
label_15a004:
    if (ctx->pc == 0x15A004u) {
        ctx->pc = 0x15A008u;
        goto label_15a008;
    }
    ctx->pc = 0x15A000u;
    {
        const bool branch_taken_0x15a000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x15a000) {
            ctx->pc = 0x15A8FCu;
            goto label_15a8fc;
        }
    }
    ctx->pc = 0x15A008u;
label_15a008:
    // 0x15a008: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x15a008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_15a00c:
    // 0x15a00c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15a00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15a010:
    // 0x15a010: 0xc048094  jal         func_120250
label_15a014:
    if (ctx->pc == 0x15A014u) {
        ctx->pc = 0x15A018u;
        goto label_15a018;
    }
    ctx->pc = 0x15A010u;
    SET_GPR_U32(ctx, 31, 0x15A018u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x15A010u, 0x15A018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A018u;
label_15a018:
    // 0x15a018: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x15a018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_15a01c:
    // 0x15a01c: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x15a01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_15a020:
    // 0x15a020: 0x24050474  addiu       $a1, $zero, 0x474
    ctx->pc = 0x15a020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1140));
label_15a024:
    // 0x15a024: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x15a024u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_15a028:
    // 0x15a028: 0x24c62f60  addiu       $a2, $a2, 0x2F60
    ctx->pc = 0x15a028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12128));
label_15a02c:
    // 0x15a02c: 0xc041a50  jal         func_106940
label_15a030:
    if (ctx->pc == 0x15A030u) {
        ctx->pc = 0x15A034u;
        goto label_15a034;
    }
    ctx->pc = 0x15A02Cu;
    SET_GPR_U32(ctx, 31, 0x15A034u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x15A02Cu, 0x15A034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A034u;
label_15a034:
    // 0x15a034: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15a034u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a038:
    // 0x15a038: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x15a038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_15a03c:
    // 0x15a03c: 0xc0495d4  jal         func_125750
label_15a040:
    if (ctx->pc == 0x15A040u) {
        ctx->pc = 0x15A044u;
        goto label_15a044;
    }
    ctx->pc = 0x15A03Cu;
    SET_GPR_U32(ctx, 31, 0x15A044u);
    ctx->pc = 0x125750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125750u, 0x15A03Cu, 0x15A044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A044u;
label_15a044:
    // 0x15a044: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x15a044u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_15a048:
    // 0x15a048: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x15a048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
label_15a04c:
    // 0x15a04c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x15a04cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_15a050:
    // 0x15a050: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x15a050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_15a054:
    // 0x15a054: 0x10820018  beq         $a0, $v0, . + 4 + (0x18 << 2)
label_15a058:
    if (ctx->pc == 0x15A058u) {
        ctx->pc = 0x15A05Cu;
        goto label_15a05c;
    }
    ctx->pc = 0x15A054u;
    {
        const bool branch_taken_0x15a054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x15a054) {
            ctx->pc = 0x15A0B8u;
            goto label_15a0b8;
        }
    }
    ctx->pc = 0x15A05Cu;
label_15a05c:
    // 0x15a05c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x15a05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_15a060:
    // 0x15a060: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15a060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15a064:
    // 0x15a064: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15a064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15a068:
    // 0x15a068: 0xc040304  jal         func_100C10
label_15a06c:
    if (ctx->pc == 0x15A06Cu) {
        ctx->pc = 0x15A070u;
        goto label_15a070;
    }
    ctx->pc = 0x15A068u;
    SET_GPR_U32(ctx, 31, 0x15A070u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x15A068u, 0x15A070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A070u;
label_15a070:
    // 0x15a070: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x15a070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_15a074:
    // 0x15a074: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x15a074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_15a078:
    // 0x15a078: 0xc119568  jal         func_4655A0
label_15a07c:
    if (ctx->pc == 0x15A07Cu) {
        ctx->pc = 0x15A080u;
        goto label_15a080;
    }
    ctx->pc = 0x15A078u;
    SET_GPR_U32(ctx, 31, 0x15A080u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x15A078u, 0x15A080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A080u;
label_15a080:
    // 0x15a080: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x15a080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_15a084:
    // 0x15a084: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x15a084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_15a088:
    // 0x15a088: 0xc0477e8  jal         func_11DFA0
label_15a08c:
    if (ctx->pc == 0x15A08Cu) {
        ctx->pc = 0x15A090u;
        goto label_15a090;
    }
    ctx->pc = 0x15A088u;
    SET_GPR_U32(ctx, 31, 0x15A090u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x15A088u, 0x15A090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A090u;
label_15a090:
    // 0x15a090: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x15a090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_15a094:
    // 0x15a094: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15a094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15a098:
    // 0x15a098: 0xc0406a0  jal         func_101A80
label_15a09c:
    if (ctx->pc == 0x15A09Cu) {
        ctx->pc = 0x15A0A0u;
        goto label_15a0a0;
    }
    ctx->pc = 0x15A098u;
    SET_GPR_U32(ctx, 31, 0x15A0A0u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x15A098u, 0x15A0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A0A0u;
label_15a0a0:
    // 0x15a0a0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x15a0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_15a0a4:
    // 0x15a0a4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15a0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15a0a8:
    // 0x15a0a8: 0xc0402d4  jal         func_100B50
label_15a0ac:
    if (ctx->pc == 0x15A0ACu) {
        ctx->pc = 0x15A0B0u;
        goto label_15a0b0;
    }
    ctx->pc = 0x15A0A8u;
    SET_GPR_U32(ctx, 31, 0x15A0B0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x15A0A8u, 0x15A0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A0B0u;
label_15a0b0:
    // 0x15a0b0: 0x10000071  b           . + 4 + (0x71 << 2)
label_15a0b4:
    if (ctx->pc == 0x15A0B4u) {
        ctx->pc = 0x15A0B8u;
        goto label_15a0b8;
    }
    ctx->pc = 0x15A0B0u;
    {
        const bool branch_taken_0x15a0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a0b0) {
            ctx->pc = 0x15A278u;
            goto label_15a278;
        }
    }
    ctx->pc = 0x15A0B8u;
label_15a0b8:
    // 0x15a0b8: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x15a0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_15a0bc:
    // 0x15a0bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15a0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15a0c0:
    // 0x15a0c0: 0xc08e57c  jal         func_2395F0
label_15a0c4:
    if (ctx->pc == 0x15A0C4u) {
        ctx->pc = 0x15A0C8u;
        goto label_15a0c8;
    }
    ctx->pc = 0x15A0C0u;
    SET_GPR_U32(ctx, 31, 0x15A0C8u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x15A0C0u, 0x15A0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A0C8u;
label_15a0c8:
    // 0x15a0c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15a0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a0cc:
    // 0x15a0cc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x15a0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_15a0d0:
    // 0x15a0d0: 0xc0477e8  jal         func_11DFA0
label_15a0d4:
    if (ctx->pc == 0x15A0D4u) {
        ctx->pc = 0x15A0D8u;
        goto label_15a0d8;
    }
    ctx->pc = 0x15A0D0u;
    SET_GPR_U32(ctx, 31, 0x15A0D8u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x15A0D0u, 0x15A0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A0D8u;
label_15a0d8:
    // 0x15a0d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15a0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15a0dc:
    // 0x15a0dc: 0x27878dd8  addiu       $a3, $gp, -0x7228
    ctx->pc = 0x15a0dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938072));
label_15a0e0:
    // 0x15a0e0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x15a0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15a0e4:
    // 0x15a0e4: 0xc0bc824  jal         func_2F2090
label_15a0e8:
    if (ctx->pc == 0x15A0E8u) {
        ctx->pc = 0x15A0ECu;
        goto label_15a0ec;
    }
    ctx->pc = 0x15A0E4u;
    SET_GPR_U32(ctx, 31, 0x15A0ECu);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x15A0E4u, 0x15A0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A0ECu;
label_15a0ec:
    // 0x15a0ec: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_15a0f0:
    if (ctx->pc == 0x15A0F0u) {
        ctx->pc = 0x15A0F4u;
        goto label_15a0f4;
    }
    ctx->pc = 0x15A0ECu;
    {
        const bool branch_taken_0x15a0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a0ec) {
            ctx->pc = 0x15A10Cu;
            goto label_15a10c;
        }
    }
    ctx->pc = 0x15A0F4u;
label_15a0f4:
    // 0x15a0f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15a0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15a0f8:
    // 0x15a0f8: 0x27858de0  addiu       $a1, $gp, -0x7220
    ctx->pc = 0x15a0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938080));
label_15a0fc:
    // 0x15a0fc: 0xc0bc824  jal         func_2F2090
label_15a100:
    if (ctx->pc == 0x15A100u) {
        ctx->pc = 0x15A104u;
        goto label_15a104;
    }
    ctx->pc = 0x15A0FCu;
    SET_GPR_U32(ctx, 31, 0x15A104u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x15A0FCu, 0x15A104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A104u;
label_15a104:
    // 0x15a104: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_15a108:
    if (ctx->pc == 0x15A108u) {
        ctx->pc = 0x15A10Cu;
        goto label_15a10c;
    }
    ctx->pc = 0x15A104u;
    {
        const bool branch_taken_0x15a104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a104) {
            ctx->pc = 0x15A11Cu;
            goto label_15a11c;
        }
    }
    ctx->pc = 0x15A10Cu;
label_15a10c:
    // 0x15a10c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x15a10cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a110:
    // 0x15a110: 0xa3b7013e  sb          $s7, 0x13E($sp)
    ctx->pc = 0x15a110u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 318), (uint8_t)GPR_U32(ctx, 23));
label_15a114:
    // 0x15a114: 0x10000058  b           . + 4 + (0x58 << 2)
label_15a118:
    if (ctx->pc == 0x15A118u) {
        ctx->pc = 0x15A11Cu;
        goto label_15a11c;
    }
    ctx->pc = 0x15A114u;
    {
        const bool branch_taken_0x15a114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a114) {
            ctx->pc = 0x15A278u;
            goto label_15a278;
        }
    }
    ctx->pc = 0x15A11Cu;
label_15a11c:
    // 0x15a11c: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x15a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_15a120:
    // 0x15a120: 0x24632f50  addiu       $v1, $v1, 0x2F50
    ctx->pc = 0x15a120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12112));
label_15a124:
    // 0x15a124: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x15a124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_15a128:
    // 0x15a128: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x15a128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_15a12c:
    // 0x15a12c: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x15a12cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15a130:
    // 0x15a130: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x15a130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_15a134:
    // 0x15a134: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15a134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_15a138:
    // 0x15a138: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x15a138u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
label_15a13c:
    // 0x15a13c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x15a13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_15a140:
    // 0x15a140: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
label_15a144:
    if (ctx->pc == 0x15A144u) {
        ctx->pc = 0x15A148u;
        goto label_15a148;
    }
    ctx->pc = 0x15A140u;
    {
        const bool branch_taken_0x15a140 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x15a140) {
            ctx->pc = 0x15A12Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a12c;
        }
    }
    ctx->pc = 0x15A148u;
label_15a148:
    // 0x15a148: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x15a148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_15a14c:
    // 0x15a14c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x15a14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15a150:
    // 0x15a150: 0xc099948  jal         func_266520
label_15a154:
    if (ctx->pc == 0x15A154u) {
        ctx->pc = 0x15A158u;
        goto label_15a158;
    }
    ctx->pc = 0x15A150u;
    SET_GPR_U32(ctx, 31, 0x15A158u);
    ctx->pc = 0x266520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266520u, 0x15A150u, 0x15A158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A158u;
label_15a158:
    // 0x15a158: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x15a158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
label_15a15c:
    // 0x15a15c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x15a15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_15a160:
    // 0x15a160: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
label_15a164:
    if (ctx->pc == 0x15A164u) {
        ctx->pc = 0x15A168u;
        goto label_15a168;
    }
    ctx->pc = 0x15A160u;
    {
        const bool branch_taken_0x15a160 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x15a160) {
            ctx->pc = 0x15A1A4u;
            goto label_15a1a4;
        }
    }
    ctx->pc = 0x15A168u;
label_15a168:
    // 0x15a168: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x15a168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
label_15a16c:
    // 0x15a16c: 0x10000008  b           . + 4 + (0x8 << 2)
label_15a170:
    if (ctx->pc == 0x15A170u) {
        ctx->pc = 0x15A174u;
        goto label_15a174;
    }
    ctx->pc = 0x15A16Cu;
    {
        const bool branch_taken_0x15a16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a16c) {
            ctx->pc = 0x15A190u;
            goto label_15a190;
        }
    }
    ctx->pc = 0x15A174u;
label_15a174:
    // 0x15a174: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x15a174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_15a178:
    // 0x15a178: 0x2405013a  addiu       $a1, $zero, 0x13A
    ctx->pc = 0x15a178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 314));
label_15a17c:
    // 0x15a17c: 0xc056cdc  jal         func_15B370
label_15a180:
    if (ctx->pc == 0x15A180u) {
        ctx->pc = 0x15A184u;
        goto label_15a184;
    }
    ctx->pc = 0x15A17Cu;
    SET_GPR_U32(ctx, 31, 0x15A184u);
    ctx->pc = 0x15B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B370u, 0x15A17Cu, 0x15A184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A184u;
label_15a184:
    // 0x15a184: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x15a184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_15a188:
    // 0x15a188: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x15a188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15a18c:
    // 0x15a18c: 0xafa50124  sw          $a1, 0x124($sp)
    ctx->pc = 0x15a18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 5));
label_15a190:
    // 0x15a190: 0x8fa30124  lw          $v1, 0x124($sp)
    ctx->pc = 0x15a190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_15a194:
    // 0x15a194: 0x1060fff7  beqz        $v1, . + 4 + (-0x9 << 2)
label_15a198:
    if (ctx->pc == 0x15A198u) {
        ctx->pc = 0x15A19Cu;
        goto label_15a19c;
    }
    ctx->pc = 0x15A194u;
    {
        const bool branch_taken_0x15a194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a194) {
            ctx->pc = 0x15A174u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a174;
        }
    }
    ctx->pc = 0x15A19Cu;
label_15a19c:
    // 0x15a19c: 0x10000036  b           . + 4 + (0x36 << 2)
label_15a1a0:
    if (ctx->pc == 0x15A1A0u) {
        ctx->pc = 0x15A1A4u;
        goto label_15a1a4;
    }
    ctx->pc = 0x15A19Cu;
    {
        const bool branch_taken_0x15a19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a19c) {
            ctx->pc = 0x15A278u;
            goto label_15a278;
        }
    }
    ctx->pc = 0x15A1A4u;
label_15a1a4:
    // 0x15a1a4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x15a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_15a1a8:
    // 0x15a1a8: 0x18400033  blez        $v0, . + 4 + (0x33 << 2)
label_15a1ac:
    if (ctx->pc == 0x15A1ACu) {
        ctx->pc = 0x15A1B0u;
        goto label_15a1b0;
    }
    ctx->pc = 0x15A1A8u;
    {
        const bool branch_taken_0x15a1a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15a1a8) {
            ctx->pc = 0x15A278u;
            goto label_15a278;
        }
    }
    ctx->pc = 0x15A1B0u;
label_15a1b0:
    // 0x15a1b0: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x15a1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_15a1b4:
    // 0x15a1b4: 0x1000002b  b           . + 4 + (0x2B << 2)
label_15a1b8:
    if (ctx->pc == 0x15A1B8u) {
        ctx->pc = 0x15A1BCu;
        goto label_15a1bc;
    }
    ctx->pc = 0x15A1B4u;
    {
        const bool branch_taken_0x15a1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a1b4) {
            ctx->pc = 0x15A264u;
            goto label_15a264;
        }
    }
    ctx->pc = 0x15A1BCu;
label_15a1bc:
    // 0x15a1bc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x15a1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_15a1c0:
    // 0x15a1c0: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x15a1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_15a1c4:
    // 0x15a1c4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x15a1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15a1c8:
    // 0x15a1c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15a1c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a1cc:
    // 0x15a1cc: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x15a1ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15a1d0:
    // 0x15a1d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15a1d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a1d4:
    // 0x15a1d4: 0xc09a060  jal         func_268180
label_15a1d8:
    if (ctx->pc == 0x15A1D8u) {
        ctx->pc = 0x15A1DCu;
        goto label_15a1dc;
    }
    ctx->pc = 0x15A1D4u;
    SET_GPR_U32(ctx, 31, 0x15A1DCu);
    ctx->pc = 0x268180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268180u, 0x15A1D4u, 0x15A1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A1DCu;
label_15a1dc:
    // 0x15a1dc: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x15a1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
label_15a1e0:
    // 0x15a1e0: 0x8fa5011c  lw          $a1, 0x11C($sp)
    ctx->pc = 0x15a1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_15a1e4:
    // 0x15a1e4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_15a1e8:
    if (ctx->pc == 0x15A1E8u) {
        ctx->pc = 0x15A1ECu;
        goto label_15a1ec;
    }
    ctx->pc = 0x15A1E4u;
    {
        const bool branch_taken_0x15a1e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a1e4) {
            ctx->pc = 0x15A1FCu;
            goto label_15a1fc;
        }
    }
    ctx->pc = 0x15A1ECu;
label_15a1ec:
    // 0x15a1ec: 0x24040145  addiu       $a0, $zero, 0x145
    ctx->pc = 0x15a1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
label_15a1f0:
    // 0x15a1f0: 0xa7a4013c  sh          $a0, 0x13C($sp)
    ctx->pc = 0x15a1f0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 316), (uint16_t)GPR_U32(ctx, 4));
label_15a1f4:
    // 0x15a1f4: 0x10000003  b           . + 4 + (0x3 << 2)
label_15a1f8:
    if (ctx->pc == 0x15A1F8u) {
        ctx->pc = 0x15A1FCu;
        goto label_15a1fc;
    }
    ctx->pc = 0x15A1F4u;
    {
        const bool branch_taken_0x15a1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a1f4) {
            ctx->pc = 0x15A204u;
            goto label_15a204;
        }
    }
    ctx->pc = 0x15A1FCu;
label_15a1fc:
    // 0x15a1fc: 0x2402013b  addiu       $v0, $zero, 0x13B
    ctx->pc = 0x15a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 315));
label_15a200:
    // 0x15a200: 0xa7a2013c  sh          $v0, 0x13C($sp)
    ctx->pc = 0x15a200u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 316), (uint16_t)GPR_U32(ctx, 2));
label_15a204:
    // 0x15a204: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x15a204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_15a208:
    // 0x15a208: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x15a208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_15a20c:
    // 0x15a20c: 0x97a5013c  lhu         $a1, 0x13C($sp)
    ctx->pc = 0x15a20cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 316)));
label_15a210:
    // 0x15a210: 0xc056cdc  jal         func_15B370
label_15a214:
    if (ctx->pc == 0x15A214u) {
        ctx->pc = 0x15A218u;
        goto label_15a218;
    }
    ctx->pc = 0x15A210u;
    SET_GPR_U32(ctx, 31, 0x15A218u);
    ctx->pc = 0x15B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B370u, 0x15A210u, 0x15A218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A218u;
label_15a218:
    // 0x15a218: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x15a218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_15a21c:
    // 0x15a21c: 0xc058880  jal         func_162200
label_15a220:
    if (ctx->pc == 0x15A220u) {
        ctx->pc = 0x15A224u;
        goto label_15a224;
    }
    ctx->pc = 0x15A21Cu;
    SET_GPR_U32(ctx, 31, 0x15A224u);
    ctx->pc = 0x162200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162200u, 0x15A21Cu, 0x15A224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A224u;
label_15a224:
    // 0x15a224: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x15a224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
label_15a228:
    // 0x15a228: 0x8fa70118  lw          $a3, 0x118($sp)
    ctx->pc = 0x15a228u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_15a22c:
    // 0x15a22c: 0x2ce10005  sltiu       $at, $a3, 0x5
    ctx->pc = 0x15a22cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_15a230:
    // 0x15a230: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_15a234:
    if (ctx->pc == 0x15A234u) {
        ctx->pc = 0x15A238u;
        goto label_15a238;
    }
    ctx->pc = 0x15A230u;
    {
        const bool branch_taken_0x15a230 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a230) {
            ctx->pc = 0x15A258u;
            goto label_15a258;
        }
    }
    ctx->pc = 0x15A238u;
label_15a238:
    // 0x15a238: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x15a238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_15a23c:
    // 0x15a23c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x15a23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_15a240:
    // 0x15a240: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x15a240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_15a244:
    // 0x15a244: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x15a244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_15a248:
    // 0x15a248: 0x946500f0  lhu         $a1, 0xF0($v1)
    ctx->pc = 0x15a248u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_15a24c:
    // 0x15a24c: 0xc056cdc  jal         func_15B370
label_15a250:
    if (ctx->pc == 0x15A250u) {
        ctx->pc = 0x15A254u;
        goto label_15a254;
    }
    ctx->pc = 0x15A24Cu;
    SET_GPR_U32(ctx, 31, 0x15A254u);
    ctx->pc = 0x15B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B370u, 0x15A24Cu, 0x15A254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A254u;
label_15a254:
    // 0x15a254: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15a254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a258:
    // 0x15a258: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x15a258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_15a25c:
    // 0x15a25c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x15a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_15a260:
    // 0x15a260: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x15a260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_15a264:
    // 0x15a264: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x15a264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_15a268:
    // 0x15a268: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x15a268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_15a26c:
    // 0x15a26c: 0x62b02b  sltu        $s6, $v1, $v0
    ctx->pc = 0x15a26cu;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_15a270:
    // 0x15a270: 0x16c0ffd2  bnez        $s6, . + 4 + (-0x2E << 2)
label_15a274:
    if (ctx->pc == 0x15A274u) {
        ctx->pc = 0x15A278u;
        goto label_15a278;
    }
    ctx->pc = 0x15A270u;
    {
        const bool branch_taken_0x15a270 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a270) {
            ctx->pc = 0x15A1BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a1bc;
        }
    }
    ctx->pc = 0x15A278u;
label_15a278:
    // 0x15a278: 0x93a3013f  lbu         $v1, 0x13F($sp)
    ctx->pc = 0x15a278u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 319)));
label_15a27c:
    // 0x15a27c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x15a27cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_15a280:
    // 0x15a280: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15a280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a284:
    // 0x15a284: 0x14830076  bne         $a0, $v1, . + 4 + (0x76 << 2)
label_15a288:
    if (ctx->pc == 0x15A288u) {
        ctx->pc = 0x15A28Cu;
        goto label_15a28c;
    }
    ctx->pc = 0x15A284u;
    {
        const bool branch_taken_0x15a284 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15a284) {
            ctx->pc = 0x15A460u;
            goto label_15a460;
        }
    }
    ctx->pc = 0x15A28Cu;
label_15a28c:
    // 0x15a28c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15a28cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15a290:
    // 0x15a290: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x15a290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_15a294:
    // 0x15a294: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x15a294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_15a298:
    // 0x15a298: 0x14800071  bnez        $a0, . + 4 + (0x71 << 2)
label_15a29c:
    if (ctx->pc == 0x15A29Cu) {
        ctx->pc = 0x15A2A0u;
        goto label_15a2a0;
    }
    ctx->pc = 0x15A298u;
    {
        const bool branch_taken_0x15a298 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a298) {
            ctx->pc = 0x15A460u;
            goto label_15a460;
        }
    }
    ctx->pc = 0x15A2A0u;
label_15a2a0:
    // 0x15a2a0: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x15a2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a2a4:
    // 0x15a2a4: 0x24a40098  addiu       $a0, $a1, 0x98
    ctx->pc = 0x15a2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 152));
label_15a2a8:
    // 0x15a2a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15a2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a2ac:
    // 0x15a2ac: 0xc05612c  jal         func_1584B0
label_15a2b0:
    if (ctx->pc == 0x15A2B0u) {
        ctx->pc = 0x15A2B4u;
        goto label_15a2b4;
    }
    ctx->pc = 0x15A2ACu;
    SET_GPR_U32(ctx, 31, 0x15A2B4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15A2ACu, 0x15A2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A2B4u;
label_15a2b4:
    // 0x15a2b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15a2b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a2b8:
    // 0x15a2b8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x15a2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15a2bc:
    // 0x15a2bc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a2c0:
    // 0x15a2c0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15a2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15a2c4:
    // 0x15a2c4: 0xc08c9a8  jal         func_2326A0
label_15a2c8:
    if (ctx->pc == 0x15A2C8u) {
        ctx->pc = 0x15A2CCu;
        goto label_15a2cc;
    }
    ctx->pc = 0x15A2C4u;
    SET_GPR_U32(ctx, 31, 0x15A2CCu);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x15A2C4u, 0x15A2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A2CCu;
label_15a2cc:
    // 0x15a2cc: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x15a2ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15a2d0:
    // 0x15a2d0: 0x14c00063  bnez        $a2, . + 4 + (0x63 << 2)
label_15a2d4:
    if (ctx->pc == 0x15A2D4u) {
        ctx->pc = 0x15A2D8u;
        goto label_15a2d8;
    }
    ctx->pc = 0x15A2D0u;
    {
        const bool branch_taken_0x15a2d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a2d0) {
            ctx->pc = 0x15A460u;
            goto label_15a460;
        }
    }
    ctx->pc = 0x15A2D8u;
label_15a2d8:
    // 0x15a2d8: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x15a2d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15a2dc:
    // 0x15a2dc: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x15a2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_15a2e0:
    // 0x15a2e0: 0xc085530  jal         func_2154C0
label_15a2e4:
    if (ctx->pc == 0x15A2E4u) {
        ctx->pc = 0x15A2E8u;
        goto label_15a2e8;
    }
    ctx->pc = 0x15A2E0u;
    SET_GPR_U32(ctx, 31, 0x15A2E8u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x15A2E0u, 0x15A2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A2E8u;
label_15a2e8:
    // 0x15a2e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15a2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a2ec:
    // 0x15a2ec: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x15a2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_15a2f0:
    // 0x15a2f0: 0x1483005b  bne         $a0, $v1, . + 4 + (0x5B << 2)
label_15a2f4:
    if (ctx->pc == 0x15A2F4u) {
        ctx->pc = 0x15A2F8u;
        goto label_15a2f8;
    }
    ctx->pc = 0x15A2F0u;
    {
        const bool branch_taken_0x15a2f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15a2f0) {
            ctx->pc = 0x15A460u;
            goto label_15a460;
        }
    }
    ctx->pc = 0x15A2F8u;
label_15a2f8:
    // 0x15a2f8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15a2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a2fc:
    // 0x15a2fc: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x15a2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_15a300:
    // 0x15a300: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x15a300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_15a304:
    // 0x15a304: 0x10850056  beq         $a0, $a1, . + 4 + (0x56 << 2)
label_15a308:
    if (ctx->pc == 0x15A308u) {
        ctx->pc = 0x15A30Cu;
        goto label_15a30c;
    }
    ctx->pc = 0x15A304u;
    {
        const bool branch_taken_0x15a304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x15a304) {
            ctx->pc = 0x15A460u;
            goto label_15a460;
        }
    }
    ctx->pc = 0x15A30Cu;
label_15a30c:
    // 0x15a30c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a310:
    // 0x15a310: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x15a310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_15a314:
    // 0x15a314: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15a314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a318:
    // 0x15a318: 0xc05612c  jal         func_1584B0
label_15a31c:
    if (ctx->pc == 0x15A31Cu) {
        ctx->pc = 0x15A320u;
        goto label_15a320;
    }
    ctx->pc = 0x15A318u;
    SET_GPR_U32(ctx, 31, 0x15A320u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15A318u, 0x15A320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A320u;
label_15a320:
    // 0x15a320: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15a320u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a324:
    // 0x15a324: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x15a324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15a328:
    // 0x15a328: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15a328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a32c:
    // 0x15a32c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15a32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15a330:
    // 0x15a330: 0xc08c9a8  jal         func_2326A0
label_15a334:
    if (ctx->pc == 0x15A334u) {
        ctx->pc = 0x15A338u;
        goto label_15a338;
    }
    ctx->pc = 0x15A330u;
    SET_GPR_U32(ctx, 31, 0x15A338u);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x15A330u, 0x15A338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A338u;
label_15a338:
    // 0x15a338: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15a338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15a33c:
    // 0x15a33c: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
label_15a340:
    if (ctx->pc == 0x15A340u) {
        ctx->pc = 0x15A344u;
        goto label_15a344;
    }
    ctx->pc = 0x15A33Cu;
    {
        const bool branch_taken_0x15a33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a33c) {
            ctx->pc = 0x15A460u;
            goto label_15a460;
        }
    }
    ctx->pc = 0x15A344u;
label_15a344:
    // 0x15a344: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15a344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a348:
    // 0x15a348: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x15a348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_15a34c:
    // 0x15a34c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a350:
    // 0x15a350: 0xc05612c  jal         func_1584B0
label_15a354:
    if (ctx->pc == 0x15A354u) {
        ctx->pc = 0x15A358u;
        goto label_15a358;
    }
    ctx->pc = 0x15A350u;
    SET_GPR_U32(ctx, 31, 0x15A358u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15A350u, 0x15A358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A358u;
label_15a358:
    // 0x15a358: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15a358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15a35c:
    // 0x15a35c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a360:
    // 0x15a360: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15a360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15a364:
    // 0x15a364: 0xc08c9a8  jal         func_2326A0
label_15a368:
    if (ctx->pc == 0x15A368u) {
        ctx->pc = 0x15A36Cu;
        goto label_15a36c;
    }
    ctx->pc = 0x15A364u;
    SET_GPR_U32(ctx, 31, 0x15A36Cu);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x15A364u, 0x15A36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A36Cu;
label_15a36c:
    // 0x15a36c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15a36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15a370:
    // 0x15a370: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_15a374:
    if (ctx->pc == 0x15A374u) {
        ctx->pc = 0x15A378u;
        goto label_15a378;
    }
    ctx->pc = 0x15A370u;
    {
        const bool branch_taken_0x15a370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a370) {
            ctx->pc = 0x15A460u;
            goto label_15a460;
        }
    }
    ctx->pc = 0x15A378u;
label_15a378:
    // 0x15a378: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x15a378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_15a37c:
    // 0x15a37c: 0xc041a70  jal         func_1069C0
label_15a380:
    if (ctx->pc == 0x15A380u) {
        ctx->pc = 0x15A384u;
        goto label_15a384;
    }
    ctx->pc = 0x15A37Cu;
    SET_GPR_U32(ctx, 31, 0x15A384u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x15A37Cu, 0x15A384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A384u;
label_15a384:
    // 0x15a384: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x15a384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
label_15a388:
    // 0x15a388: 0x8fa40114  lw          $a0, 0x114($sp)
    ctx->pc = 0x15a388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_15a38c:
    // 0x15a38c: 0xc041a60  jal         func_106980
label_15a390:
    if (ctx->pc == 0x15A390u) {
        ctx->pc = 0x15A394u;
        goto label_15a394;
    }
    ctx->pc = 0x15A38Cu;
    SET_GPR_U32(ctx, 31, 0x15A394u);
    ctx->pc = 0x106980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106980u, 0x15A38Cu, 0x15A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A394u;
label_15a394:
    // 0x15a394: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x15a394u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a398:
    // 0x15a398: 0x1000002c  b           . + 4 + (0x2C << 2)
label_15a39c:
    if (ctx->pc == 0x15A39Cu) {
        ctx->pc = 0x15A3A0u;
        goto label_15a3a0;
    }
    ctx->pc = 0x15A398u;
    {
        const bool branch_taken_0x15a398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a398) {
            ctx->pc = 0x15A44Cu;
            goto label_15a44c;
        }
    }
    ctx->pc = 0x15A3A0u;
label_15a3a0:
    // 0x15a3a0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x15a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15a3a4:
    // 0x15a3a4: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x15a3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_15a3a8:
    // 0x15a3a8: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x15a3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_15a3ac:
    // 0x15a3ac: 0xc09d0b8  jal         func_2742E0
label_15a3b0:
    if (ctx->pc == 0x15A3B0u) {
        ctx->pc = 0x15A3B4u;
        goto label_15a3b4;
    }
    ctx->pc = 0x15A3ACu;
    SET_GPR_U32(ctx, 31, 0x15A3B4u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x15A3ACu, 0x15A3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A3B4u;
label_15a3b4:
    // 0x15a3b4: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x15a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_15a3b8:
    // 0x15a3b8: 0x14430023  bne         $v0, $v1, . + 4 + (0x23 << 2)
label_15a3bc:
    if (ctx->pc == 0x15A3BCu) {
        ctx->pc = 0x15A3C0u;
        goto label_15a3c0;
    }
    ctx->pc = 0x15A3B8u;
    {
        const bool branch_taken_0x15a3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x15a3b8) {
            ctx->pc = 0x15A448u;
            goto label_15a448;
        }
    }
    ctx->pc = 0x15A3C0u;
label_15a3c0:
    // 0x15a3c0: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x15a3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_15a3c4:
    // 0x15a3c4: 0x240504bd  addiu       $a1, $zero, 0x4BD
    ctx->pc = 0x15a3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1213));
label_15a3c8:
    // 0x15a3c8: 0x27868de8  addiu       $a2, $gp, -0x7218
    ctx->pc = 0x15a3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938088));
label_15a3cc:
    // 0x15a3cc: 0xc041a50  jal         func_106940
label_15a3d0:
    if (ctx->pc == 0x15A3D0u) {
        ctx->pc = 0x15A3D4u;
        goto label_15a3d4;
    }
    ctx->pc = 0x15A3CCu;
    SET_GPR_U32(ctx, 31, 0x15A3D4u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x15A3CCu, 0x15A3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A3D4u;
label_15a3d4:
    // 0x15a3d4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x15a3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_15a3d8:
    // 0x15a3d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15a3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a3dc:
    // 0x15a3dc: 0xc040304  jal         func_100C10
label_15a3e0:
    if (ctx->pc == 0x15A3E0u) {
        ctx->pc = 0x15A3E4u;
        goto label_15a3e4;
    }
    ctx->pc = 0x15A3DCu;
    SET_GPR_U32(ctx, 31, 0x15A3E4u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x15A3DCu, 0x15A3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A3E4u;
label_15a3e4:
    // 0x15a3e4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x15a3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_15a3e8:
    // 0x15a3e8: 0xc042514  jal         func_109450
label_15a3ec:
    if (ctx->pc == 0x15A3ECu) {
        ctx->pc = 0x15A3F0u;
        goto label_15a3f0;
    }
    ctx->pc = 0x15A3E8u;
    SET_GPR_U32(ctx, 31, 0x15A3F0u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x15A3E8u, 0x15A3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A3F0u;
label_15a3f0:
    // 0x15a3f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15a3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_15a3f4:
    // 0x15a3f4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x15a3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_15a3f8:
    // 0x15a3f8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_15a3fc:
    if (ctx->pc == 0x15A3FCu) {
        ctx->pc = 0x15A400u;
        goto label_15a400;
    }
    ctx->pc = 0x15A3F8u;
    {
        const bool branch_taken_0x15a3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a3f8) {
            ctx->pc = 0x15A438u;
            goto label_15a438;
        }
    }
    ctx->pc = 0x15A400u;
label_15a400:
    // 0x15a400: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x15a400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_15a404:
    // 0x15a404: 0xc041b38  jal         func_106CE0
label_15a408:
    if (ctx->pc == 0x15A408u) {
        ctx->pc = 0x15A40Cu;
        goto label_15a40c;
    }
    ctx->pc = 0x15A404u;
    SET_GPR_U32(ctx, 31, 0x15A40Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x15A404u, 0x15A40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A40Cu;
label_15a40c:
    // 0x15a40c: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x15a40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a410:
    // 0x15a410: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15a410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a414:
    // 0x15a414: 0xc056b34  jal         func_15ACD0
label_15a418:
    if (ctx->pc == 0x15A418u) {
        ctx->pc = 0x15A41Cu;
        goto label_15a41c;
    }
    ctx->pc = 0x15A414u;
    SET_GPR_U32(ctx, 31, 0x15A41Cu);
    ctx->pc = 0x15ACD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ACD0u, 0x15A414u, 0x15A41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A41Cu;
label_15a41c:
    // 0x15a41c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x15a41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15a420:
    // 0x15a420: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a424:
    // 0x15a424: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_15a428:
    if (ctx->pc == 0x15A428u) {
        ctx->pc = 0x15A42Cu;
        goto label_15a42c;
    }
    ctx->pc = 0x15A424u;
    {
        const bool branch_taken_0x15a424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15a424) {
            ctx->pc = 0x15A438u;
            goto label_15a438;
        }
    }
    ctx->pc = 0x15A42Cu;
label_15a42c:
    // 0x15a42c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x15a42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_15a430:
    // 0x15a430: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15a430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a434:
    // 0x15a434: 0xac4300a8  sw          $v1, 0xA8($v0)
    ctx->pc = 0x15a434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 3));
label_15a438:
    // 0x15a438: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x15a438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_15a43c:
    // 0x15a43c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15a43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15a440:
    // 0x15a440: 0xc0402d4  jal         func_100B50
label_15a444:
    if (ctx->pc == 0x15A444u) {
        ctx->pc = 0x15A448u;
        goto label_15a448;
    }
    ctx->pc = 0x15A440u;
    SET_GPR_U32(ctx, 31, 0x15A448u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x15A440u, 0x15A448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A448u;
label_15a448:
    // 0x15a448: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x15a448u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_15a44c:
    // 0x15a44c: 0x8fa40114  lw          $a0, 0x114($sp)
    ctx->pc = 0x15a44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_15a450:
    // 0x15a450: 0xc041a14  jal         func_106850
label_15a454:
    if (ctx->pc == 0x15A454u) {
        ctx->pc = 0x15A458u;
        goto label_15a458;
    }
    ctx->pc = 0x15A450u;
    SET_GPR_U32(ctx, 31, 0x15A458u);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x15A450u, 0x15A458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A458u;
label_15a458:
    // 0x15a458: 0x1682ffd1  bne         $s4, $v0, . + 4 + (-0x2F << 2)
label_15a45c:
    if (ctx->pc == 0x15A45Cu) {
        ctx->pc = 0x15A460u;
        goto label_15a460;
    }
    ctx->pc = 0x15A458u;
    {
        const bool branch_taken_0x15a458 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x15a458) {
            ctx->pc = 0x15A3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a3a0;
        }
    }
    ctx->pc = 0x15A460u;
label_15a460:
    // 0x15a460: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15a460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a464:
    // 0x15a464: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x15a464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
label_15a468:
    // 0x15a468: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15a468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15a46c:
    // 0x15a46c: 0xc05612c  jal         func_1584B0
label_15a470:
    if (ctx->pc == 0x15A470u) {
        ctx->pc = 0x15A474u;
        goto label_15a474;
    }
    ctx->pc = 0x15A46Cu;
    SET_GPR_U32(ctx, 31, 0x15A474u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15A46Cu, 0x15A474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A474u;
label_15a474:
    // 0x15a474: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15a474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15a478:
    // 0x15a478: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15a478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a47c:
    // 0x15a47c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15a47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15a480:
    // 0x15a480: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x15a480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_15a484:
    // 0x15a484: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15a484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a488:
    // 0x15a488: 0xc08c378  jal         func_230DE0
label_15a48c:
    if (ctx->pc == 0x15A48Cu) {
        ctx->pc = 0x15A490u;
        goto label_15a490;
    }
    ctx->pc = 0x15A488u;
    SET_GPR_U32(ctx, 31, 0x15A490u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x15A488u, 0x15A490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A490u;
label_15a490:
    // 0x15a490: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15a490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a494:
    // 0x15a494: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x15a494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
label_15a498:
    // 0x15a498: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15a498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15a49c:
    // 0x15a49c: 0xc05612c  jal         func_1584B0
label_15a4a0:
    if (ctx->pc == 0x15A4A0u) {
        ctx->pc = 0x15A4A4u;
        goto label_15a4a4;
    }
    ctx->pc = 0x15A49Cu;
    SET_GPR_U32(ctx, 31, 0x15A4A4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15A49Cu, 0x15A4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A4A4u;
label_15a4a4:
    // 0x15a4a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15a4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15a4a8:
    // 0x15a4a8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a4ac:
    // 0x15a4ac: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15a4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15a4b0:
    // 0x15a4b0: 0xc08c49c  jal         func_231270
label_15a4b4:
    if (ctx->pc == 0x15A4B4u) {
        ctx->pc = 0x15A4B8u;
        goto label_15a4b8;
    }
    ctx->pc = 0x15A4B0u;
    SET_GPR_U32(ctx, 31, 0x15A4B8u);
    ctx->pc = 0x231270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231270u, 0x15A4B0u, 0x15A4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A4B8u;
label_15a4b8:
    // 0x15a4b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_15a4bc:
    // 0x15a4bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15a4bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15a4c0:
    // 0x15a4c0: 0x0  nop
    ctx->pc = 0x15a4c0u;
    // NOP
label_15a4c4:
    // 0x15a4c4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x15a4c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15a4c8:
    // 0x15a4c8: 0x4501005e  bc1t        . + 4 + (0x5E << 2)
label_15a4cc:
    if (ctx->pc == 0x15A4CCu) {
        ctx->pc = 0x15A4D0u;
        goto label_15a4d0;
    }
    ctx->pc = 0x15A4C8u;
    {
        const bool branch_taken_0x15a4c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a4c8) {
            ctx->pc = 0x15A644u;
            goto label_15a644;
        }
    }
    ctx->pc = 0x15A4D0u;
label_15a4d0:
    // 0x15a4d0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a4d4:
    // 0x15a4d4: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x15a4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
label_15a4d8:
    // 0x15a4d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15a4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15a4dc:
    // 0x15a4dc: 0xc05612c  jal         func_1584B0
label_15a4e0:
    if (ctx->pc == 0x15A4E0u) {
        ctx->pc = 0x15A4E4u;
        goto label_15a4e4;
    }
    ctx->pc = 0x15A4DCu;
    SET_GPR_U32(ctx, 31, 0x15A4E4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15A4DCu, 0x15A4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A4E4u;
label_15a4e4:
    // 0x15a4e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15a4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15a4e8:
    // 0x15a4e8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a4ec:
    // 0x15a4ec: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15a4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15a4f0:
    // 0x15a4f0: 0xc08c954  jal         func_232550
label_15a4f4:
    if (ctx->pc == 0x15A4F4u) {
        ctx->pc = 0x15A4F8u;
        goto label_15a4f8;
    }
    ctx->pc = 0x15A4F0u;
    SET_GPR_U32(ctx, 31, 0x15A4F8u);
    ctx->pc = 0x232550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232550u, 0x15A4F0u, 0x15A4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A4F8u;
label_15a4f8:
    // 0x15a4f8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15a4f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15a4fc:
    // 0x15a4fc: 0x0  nop
    ctx->pc = 0x15a4fcu;
    // NOP
label_15a500:
    // 0x15a500: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x15a500u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15a504:
    // 0x15a504: 0x4500004f  bc1f        . + 4 + (0x4F << 2)
label_15a508:
    if (ctx->pc == 0x15A508u) {
        ctx->pc = 0x15A50Cu;
        goto label_15a50c;
    }
    ctx->pc = 0x15A504u;
    {
        const bool branch_taken_0x15a504 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a504) {
            ctx->pc = 0x15A644u;
            goto label_15a644;
        }
    }
    ctx->pc = 0x15A50Cu;
label_15a50c:
    // 0x15a50c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_15a510:
    // 0x15a510: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15a514:
    // 0x15a514: 0x0  nop
    ctx->pc = 0x15a514u;
    // NOP
label_15a518:
    // 0x15a518: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x15a518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_15a51c:
    // 0x15a51c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a520:
    // 0x15a520: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x15a520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
label_15a524:
    // 0x15a524: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15a524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15a528:
    // 0x15a528: 0xc05612c  jal         func_1584B0
label_15a52c:
    if (ctx->pc == 0x15A52Cu) {
        ctx->pc = 0x15A530u;
        goto label_15a530;
    }
    ctx->pc = 0x15A528u;
    SET_GPR_U32(ctx, 31, 0x15A530u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15A528u, 0x15A530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A530u;
label_15a530:
    // 0x15a530: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15a530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15a534:
    // 0x15a534: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x15a534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a538:
    // 0x15a538: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15a538u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15a53c:
    // 0x15a53c: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x15a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_15a540:
    // 0x15a540: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15a540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_15a544:
    // 0x15a544: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x15a544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_15a548:
    // 0x15a548: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15a548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15a54c:
    // 0x15a54c: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x15a54cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_15a550:
    // 0x15a550: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15a550u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a554:
    // 0x15a554: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15a554u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a558:
    // 0x15a558: 0xc08b9fc  jal         func_22E7F0
label_15a55c:
    if (ctx->pc == 0x15A55Cu) {
        ctx->pc = 0x15A560u;
        goto label_15a560;
    }
    ctx->pc = 0x15A558u;
    SET_GPR_U32(ctx, 31, 0x15A560u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15A558u, 0x15A560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A560u;
label_15a560:
    // 0x15a560: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15a560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15a564:
    // 0x15a564: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x15a564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_15a568:
    // 0x15a568: 0x8c5e00a0  lw          $fp, 0xA0($v0)
    ctx->pc = 0x15a568u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_15a56c:
    // 0x15a56c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a570:
    // 0x15a570: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x15a570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_15a574:
    // 0x15a574: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x15a574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_15a578:
    // 0x15a578: 0xc05612c  jal         func_1584B0
label_15a57c:
    if (ctx->pc == 0x15A57Cu) {
        ctx->pc = 0x15A580u;
        goto label_15a580;
    }
    ctx->pc = 0x15A578u;
    SET_GPR_U32(ctx, 31, 0x15A580u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15A578u, 0x15A580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A580u;
label_15a580:
    // 0x15a580: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15a580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15a584:
    // 0x15a584: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x15a584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a588:
    // 0x15a588: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15a588u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15a58c:
    // 0x15a58c: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x15a58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_15a590:
    // 0x15a590: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15a590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_15a594:
    // 0x15a594: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x15a594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_15a598:
    // 0x15a598: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15a598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15a59c:
    // 0x15a59c: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x15a59cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_15a5a0:
    // 0x15a5a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15a5a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a5a4:
    // 0x15a5a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15a5a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a5a8:
    // 0x15a5a8: 0xc08b9fc  jal         func_22E7F0
label_15a5ac:
    if (ctx->pc == 0x15A5ACu) {
        ctx->pc = 0x15A5B0u;
        goto label_15a5b0;
    }
    ctx->pc = 0x15A5A8u;
    SET_GPR_U32(ctx, 31, 0x15A5B0u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15A5A8u, 0x15A5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A5B0u;
label_15a5b0:
    // 0x15a5b0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a5b4:
    // 0x15a5b4: 0x27c50004  addiu       $a1, $fp, 0x4
    ctx->pc = 0x15a5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_15a5b8:
    // 0x15a5b8: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x15a5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_15a5bc:
    // 0x15a5bc: 0xc05612c  jal         func_1584B0
label_15a5c0:
    if (ctx->pc == 0x15A5C0u) {
        ctx->pc = 0x15A5C4u;
        goto label_15a5c4;
    }
    ctx->pc = 0x15A5BCu;
    SET_GPR_U32(ctx, 31, 0x15A5C4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15A5BCu, 0x15A5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A5C4u;
label_15a5c4:
    // 0x15a5c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15a5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15a5c8:
    // 0x15a5c8: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x15a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a5cc:
    // 0x15a5cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15a5ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15a5d0:
    // 0x15a5d0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x15a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_15a5d4:
    // 0x15a5d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15a5d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_15a5d8:
    // 0x15a5d8: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x15a5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_15a5dc:
    // 0x15a5dc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15a5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15a5e0:
    // 0x15a5e0: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x15a5e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_15a5e4:
    // 0x15a5e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15a5e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a5e8:
    // 0x15a5e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15a5e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a5ec:
    // 0x15a5ec: 0xc08b9fc  jal         func_22E7F0
label_15a5f0:
    if (ctx->pc == 0x15A5F0u) {
        ctx->pc = 0x15A5F4u;
        goto label_15a5f4;
    }
    ctx->pc = 0x15A5ECu;
    SET_GPR_U32(ctx, 31, 0x15A5F4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15A5ECu, 0x15A5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A5F4u;
label_15a5f4:
    // 0x15a5f4: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x15a5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a5f8:
    // 0x15a5f8: 0x27c20008  addiu       $v0, $fp, 0x8
    ctx->pc = 0x15a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_15a5fc:
    // 0x15a5fc: 0x24840074  addiu       $a0, $a0, 0x74
    ctx->pc = 0x15a5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
label_15a600:
    // 0x15a600: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15a600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a604:
    // 0x15a604: 0xc05612c  jal         func_1584B0
label_15a608:
    if (ctx->pc == 0x15A608u) {
        ctx->pc = 0x15A60Cu;
        goto label_15a60c;
    }
    ctx->pc = 0x15A604u;
    SET_GPR_U32(ctx, 31, 0x15A60Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15A604u, 0x15A60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A60Cu;
label_15a60c:
    // 0x15a60c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15a60cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a610:
    // 0x15a610: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x15a610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15a614:
    // 0x15a614: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x15a614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a618:
    // 0x15a618: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15a618u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15a61c:
    // 0x15a61c: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x15a61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_15a620:
    // 0x15a620: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x15a620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_15a624:
    // 0x15a624: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x15a624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_15a628:
    // 0x15a628: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15a628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15a62c:
    // 0x15a62c: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x15a62cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_15a630:
    // 0x15a630: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15a630u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a634:
    // 0x15a634: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15a634u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a638:
    // 0x15a638: 0xc08b9fc  jal         func_22E7F0
label_15a63c:
    if (ctx->pc == 0x15A63Cu) {
        ctx->pc = 0x15A640u;
        goto label_15a640;
    }
    ctx->pc = 0x15A638u;
    SET_GPR_U32(ctx, 31, 0x15A640u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15A638u, 0x15A640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A640u;
label_15a640:
    // 0x15a640: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15a640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a644:
    // 0x15a644: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x15a644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_15a648:
    // 0x15a648: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15a648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a64c:
    // 0x15a64c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15a64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15a650:
    // 0x15a650: 0xc0406a0  jal         func_101A80
label_15a654:
    if (ctx->pc == 0x15A654u) {
        ctx->pc = 0x15A658u;
        goto label_15a658;
    }
    ctx->pc = 0x15A650u;
    SET_GPR_U32(ctx, 31, 0x15A658u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x15A650u, 0x15A658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A658u;
label_15a658:
    // 0x15a658: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15a658u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a65c:
    // 0x15a65c: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_15a660:
    if (ctx->pc == 0x15A660u) {
        ctx->pc = 0x15A664u;
        goto label_15a664;
    }
    ctx->pc = 0x15A65Cu;
    {
        const bool branch_taken_0x15a65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a65c) {
            ctx->pc = 0x15A8FCu;
            goto label_15a8fc;
        }
    }
    ctx->pc = 0x15A664u;
label_15a664:
    // 0x15a664: 0x93a4013f  lbu         $a0, 0x13F($sp)
    ctx->pc = 0x15a664u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 319)));
label_15a668:
    // 0x15a668: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x15a668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_15a66c:
    // 0x15a66c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15a66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a670:
    // 0x15a670: 0x1443002e  bne         $v0, $v1, . + 4 + (0x2E << 2)
label_15a674:
    if (ctx->pc == 0x15A674u) {
        ctx->pc = 0x15A678u;
        goto label_15a678;
    }
    ctx->pc = 0x15A670u;
    {
        const bool branch_taken_0x15a670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x15a670) {
            ctx->pc = 0x15A72Cu;
            goto label_15a72c;
        }
    }
    ctx->pc = 0x15A678u;
label_15a678:
    // 0x15a678: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15a678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15a67c:
    // 0x15a67c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x15a67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_15a680:
    // 0x15a680: 0x8c6400b0  lw          $a0, 0xB0($v1)
    ctx->pc = 0x15a680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
label_15a684:
    // 0x15a684: 0x14800029  bnez        $a0, . + 4 + (0x29 << 2)
label_15a688:
    if (ctx->pc == 0x15A688u) {
        ctx->pc = 0x15A68Cu;
        goto label_15a68c;
    }
    ctx->pc = 0x15A684u;
    {
        const bool branch_taken_0x15a684 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a684) {
            ctx->pc = 0x15A72Cu;
            goto label_15a72c;
        }
    }
    ctx->pc = 0x15A68Cu;
label_15a68c:
    // 0x15a68c: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x15a68cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a690:
    // 0x15a690: 0x8ca200a8  lw          $v0, 0xA8($a1)
    ctx->pc = 0x15a690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 168)));
label_15a694:
    // 0x15a694: 0x10020025  beq         $zero, $v0, . + 4 + (0x25 << 2)
label_15a698:
    if (ctx->pc == 0x15A698u) {
        ctx->pc = 0x15A69Cu;
        goto label_15a69c;
    }
    ctx->pc = 0x15A694u;
    {
        const bool branch_taken_0x15a694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x15a694) {
            ctx->pc = 0x15A72Cu;
            goto label_15a72c;
        }
    }
    ctx->pc = 0x15A69Cu;
label_15a69c:
    // 0x15a69c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x15a69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a6a0:
    // 0x15a6a0: 0x24640098  addiu       $a0, $v1, 0x98
    ctx->pc = 0x15a6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 152));
label_15a6a4:
    // 0x15a6a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15a6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a6a8:
    // 0x15a6a8: 0xc05612c  jal         func_1584B0
label_15a6ac:
    if (ctx->pc == 0x15A6ACu) {
        ctx->pc = 0x15A6B0u;
        goto label_15a6b0;
    }
    ctx->pc = 0x15A6A8u;
    SET_GPR_U32(ctx, 31, 0x15A6B0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15A6A8u, 0x15A6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A6B0u;
label_15a6b0:
    // 0x15a6b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15a6b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a6b4:
    // 0x15a6b4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x15a6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15a6b8:
    // 0x15a6b8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a6bc:
    // 0x15a6bc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15a6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15a6c0:
    // 0x15a6c0: 0xc08c9a8  jal         func_2326A0
label_15a6c4:
    if (ctx->pc == 0x15A6C4u) {
        ctx->pc = 0x15A6C8u;
        goto label_15a6c8;
    }
    ctx->pc = 0x15A6C0u;
    SET_GPR_U32(ctx, 31, 0x15A6C8u);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x15A6C0u, 0x15A6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A6C8u;
label_15a6c8:
    // 0x15a6c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15a6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a6cc:
    // 0x15a6cc: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x15a6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_15a6d0:
    // 0x15a6d0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_15a6d4:
    if (ctx->pc == 0x15A6D4u) {
        ctx->pc = 0x15A6D8u;
        goto label_15a6d8;
    }
    ctx->pc = 0x15A6D0u;
    {
        const bool branch_taken_0x15a6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a6d0) {
            ctx->pc = 0x15A72Cu;
            goto label_15a72c;
        }
    }
    ctx->pc = 0x15A6D8u;
label_15a6d8:
    // 0x15a6d8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a6dc:
    // 0x15a6dc: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x15a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_15a6e0:
    // 0x15a6e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15a6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a6e4:
    // 0x15a6e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a6e8:
    // 0x15a6e8: 0xc05612c  jal         func_1584B0
label_15a6ec:
    if (ctx->pc == 0x15A6ECu) {
        ctx->pc = 0x15A6F0u;
        goto label_15a6f0;
    }
    ctx->pc = 0x15A6E8u;
    SET_GPR_U32(ctx, 31, 0x15A6F0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15A6E8u, 0x15A6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A6F0u;
label_15a6f0:
    // 0x15a6f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15a6f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a6f4:
    // 0x15a6f4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x15a6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15a6f8:
    // 0x15a6f8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a6fc:
    // 0x15a6fc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15a6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15a700:
    // 0x15a700: 0xc08c9a8  jal         func_2326A0
label_15a704:
    if (ctx->pc == 0x15A704u) {
        ctx->pc = 0x15A708u;
        goto label_15a708;
    }
    ctx->pc = 0x15A700u;
    SET_GPR_U32(ctx, 31, 0x15A708u);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x15A700u, 0x15A708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A708u;
label_15a708:
    // 0x15a708: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15a708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a70c:
    // 0x15a70c: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x15a70cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_15a710:
    // 0x15a710: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
label_15a714:
    if (ctx->pc == 0x15A714u) {
        ctx->pc = 0x15A718u;
        goto label_15a718;
    }
    ctx->pc = 0x15A710u;
    {
        const bool branch_taken_0x15a710 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a710) {
            ctx->pc = 0x15A72Cu;
            goto label_15a72c;
        }
    }
    ctx->pc = 0x15A718u;
label_15a718:
    // 0x15a718: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15a718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a71c:
    // 0x15a71c: 0xac4000a8  sw          $zero, 0xA8($v0)
    ctx->pc = 0x15a71cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 0));
label_15a720:
    // 0x15a720: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x15a720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a724:
    // 0x15a724: 0xc056aec  jal         func_15ABB0
label_15a728:
    if (ctx->pc == 0x15A728u) {
        ctx->pc = 0x15A72Cu;
        goto label_15a72c;
    }
    ctx->pc = 0x15A724u;
    SET_GPR_U32(ctx, 31, 0x15A72Cu);
    ctx->pc = 0x15ABB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ABB0u, 0x15A724u, 0x15A72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A72Cu;
label_15a72c:
    // 0x15a72c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a730:
    // 0x15a730: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x15a730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
label_15a734:
    // 0x15a734: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15a734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15a738:
    // 0x15a738: 0xc05612c  jal         func_1584B0
label_15a73c:
    if (ctx->pc == 0x15A73Cu) {
        ctx->pc = 0x15A740u;
        goto label_15a740;
    }
    ctx->pc = 0x15A738u;
    SET_GPR_U32(ctx, 31, 0x15A740u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15A738u, 0x15A740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A740u;
label_15a740:
    // 0x15a740: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15a740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15a744:
    // 0x15a744: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15a744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a748:
    // 0x15a748: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15a748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15a74c:
    // 0x15a74c: 0xc08c49c  jal         func_231270
label_15a750:
    if (ctx->pc == 0x15A750u) {
        ctx->pc = 0x15A754u;
        goto label_15a754;
    }
    ctx->pc = 0x15A74Cu;
    SET_GPR_U32(ctx, 31, 0x15A754u);
    ctx->pc = 0x231270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231270u, 0x15A74Cu, 0x15A754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A754u;
label_15a754:
    // 0x15a754: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15a754u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15a758:
    // 0x15a758: 0x0  nop
    ctx->pc = 0x15a758u;
    // NOP
label_15a75c:
    // 0x15a75c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x15a75cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15a760:
    // 0x15a760: 0x45010066  bc1t        . + 4 + (0x66 << 2)
label_15a764:
    if (ctx->pc == 0x15A764u) {
        ctx->pc = 0x15A768u;
        goto label_15a768;
    }
    ctx->pc = 0x15A760u;
    {
        const bool branch_taken_0x15a760 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a760) {
            ctx->pc = 0x15A8FCu;
            goto label_15a8fc;
        }
    }
    ctx->pc = 0x15A768u;
label_15a768:
    // 0x15a768: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x15a768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a76c:
    // 0x15a76c: 0x24a4008c  addiu       $a0, $a1, 0x8C
    ctx->pc = 0x15a76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 140));
label_15a770:
    // 0x15a770: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15a770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15a774:
    // 0x15a774: 0xc05612c  jal         func_1584B0
label_15a778:
    if (ctx->pc == 0x15A778u) {
        ctx->pc = 0x15A77Cu;
        goto label_15a77c;
    }
    ctx->pc = 0x15A774u;
    SET_GPR_U32(ctx, 31, 0x15A77Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15A774u, 0x15A77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A77Cu;
label_15a77c:
    // 0x15a77c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15a77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a780:
    // 0x15a780: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15a780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15a784:
    // 0x15a784: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x15a784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a788:
    // 0x15a788: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x15a788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_15a78c:
    // 0x15a78c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15a78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15a790:
    // 0x15a790: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15a790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a794:
    // 0x15a794: 0xc08c954  jal         func_232550
label_15a798:
    if (ctx->pc == 0x15A798u) {
        ctx->pc = 0x15A79Cu;
        goto label_15a79c;
    }
    ctx->pc = 0x15A794u;
    SET_GPR_U32(ctx, 31, 0x15A79Cu);
    ctx->pc = 0x232550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232550u, 0x15A794u, 0x15A79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A79Cu;
label_15a79c:
    // 0x15a79c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15a79cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15a7a0:
    // 0x15a7a0: 0x0  nop
    ctx->pc = 0x15a7a0u;
    // NOP
label_15a7a4:
    // 0x15a7a4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x15a7a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_15a7a8:
    // 0x15a7a8: 0x45000054  bc1f        . + 4 + (0x54 << 2)
label_15a7ac:
    if (ctx->pc == 0x15A7ACu) {
        ctx->pc = 0x15A7B0u;
        goto label_15a7b0;
    }
    ctx->pc = 0x15A7A8u;
    {
        const bool branch_taken_0x15a7a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a7a8) {
            ctx->pc = 0x15A8FCu;
            goto label_15a8fc;
        }
    }
    ctx->pc = 0x15A7B0u;
label_15a7b0:
    // 0x15a7b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15a7b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15a7b4:
    // 0x15a7b4: 0x0  nop
    ctx->pc = 0x15a7b4u;
    // NOP
label_15a7b8:
    // 0x15a7b8: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x15a7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_15a7bc:
    // 0x15a7bc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a7c0:
    // 0x15a7c0: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x15a7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
label_15a7c4:
    // 0x15a7c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15a7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15a7c8:
    // 0x15a7c8: 0xc05612c  jal         func_1584B0
label_15a7cc:
    if (ctx->pc == 0x15A7CCu) {
        ctx->pc = 0x15A7D0u;
        goto label_15a7d0;
    }
    ctx->pc = 0x15A7C8u;
    SET_GPR_U32(ctx, 31, 0x15A7D0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15A7C8u, 0x15A7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A7D0u;
label_15a7d0:
    // 0x15a7d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15a7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a7d4:
    // 0x15a7d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15a7d8:
    // 0x15a7d8: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x15a7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a7dc:
    // 0x15a7dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15a7dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15a7e0:
    // 0x15a7e0: 0x3c053e80  lui         $a1, 0x3E80
    ctx->pc = 0x15a7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16000 << 16));
label_15a7e4:
    // 0x15a7e4: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x15a7e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_15a7e8:
    // 0x15a7e8: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x15a7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_15a7ec:
    // 0x15a7ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15a7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a7f0:
    // 0x15a7f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15a7f4:
    // 0x15a7f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15a7f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a7f8:
    // 0x15a7f8: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x15a7f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_15a7fc:
    // 0x15a7fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15a7fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a800:
    // 0x15a800: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15a800u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a804:
    // 0x15a804: 0xc08b9fc  jal         func_22E7F0
label_15a808:
    if (ctx->pc == 0x15A808u) {
        ctx->pc = 0x15A80Cu;
        goto label_15a80c;
    }
    ctx->pc = 0x15A804u;
    SET_GPR_U32(ctx, 31, 0x15A80Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15A804u, 0x15A80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A80Cu;
label_15a80c:
    // 0x15a80c: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x15a80cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15a810:
    // 0x15a810: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x15a810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_15a814:
    // 0x15a814: 0x8c5700a0  lw          $s7, 0xA0($v0)
    ctx->pc = 0x15a814u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_15a818:
    // 0x15a818: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x15a818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a81c:
    // 0x15a81c: 0x24640074  addiu       $a0, $v1, 0x74
    ctx->pc = 0x15a81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 116));
label_15a820:
    // 0x15a820: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x15a820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_15a824:
    // 0x15a824: 0xc05612c  jal         func_1584B0
label_15a828:
    if (ctx->pc == 0x15A828u) {
        ctx->pc = 0x15A82Cu;
        goto label_15a82c;
    }
    ctx->pc = 0x15A824u;
    SET_GPR_U32(ctx, 31, 0x15A82Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15A824u, 0x15A82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A82Cu;
label_15a82c:
    // 0x15a82c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15a82cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15a830:
    // 0x15a830: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x15a830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a834:
    // 0x15a834: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15a834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15a838:
    // 0x15a838: 0x3c043e80  lui         $a0, 0x3E80
    ctx->pc = 0x15a838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16000 << 16));
label_15a83c:
    // 0x15a83c: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x15a83cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_15a840:
    // 0x15a840: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x15a840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_15a844:
    // 0x15a844: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15a844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a848:
    // 0x15a848: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15a848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15a84c:
    // 0x15a84c: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x15a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_15a850:
    // 0x15a850: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15a850u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a854:
    // 0x15a854: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15a854u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a858:
    // 0x15a858: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15a858u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a85c:
    // 0x15a85c: 0xc08b9fc  jal         func_22E7F0
label_15a860:
    if (ctx->pc == 0x15A860u) {
        ctx->pc = 0x15A864u;
        goto label_15a864;
    }
    ctx->pc = 0x15A85Cu;
    SET_GPR_U32(ctx, 31, 0x15A864u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15A85Cu, 0x15A864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A864u;
label_15a864:
    // 0x15a864: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x15a864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a868:
    // 0x15a868: 0x26e50004  addiu       $a1, $s7, 0x4
    ctx->pc = 0x15a868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_15a86c:
    // 0x15a86c: 0x24820074  addiu       $v0, $a0, 0x74
    ctx->pc = 0x15a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
label_15a870:
    // 0x15a870: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15a870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a874:
    // 0x15a874: 0xc05612c  jal         func_1584B0
label_15a878:
    if (ctx->pc == 0x15A878u) {
        ctx->pc = 0x15A87Cu;
        goto label_15a87c;
    }
    ctx->pc = 0x15A874u;
    SET_GPR_U32(ctx, 31, 0x15A87Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15A874u, 0x15A87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A87Cu;
label_15a87c:
    // 0x15a87c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15a87cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15a880:
    // 0x15a880: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x15a880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a884:
    // 0x15a884: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15a884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15a888:
    // 0x15a888: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x15a888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_15a88c:
    // 0x15a88c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15a88cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_15a890:
    // 0x15a890: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x15a890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_15a894:
    // 0x15a894: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15a894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15a898:
    // 0x15a898: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x15a898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_15a89c:
    // 0x15a89c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15a89cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a8a0:
    // 0x15a8a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15a8a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a8a4:
    // 0x15a8a4: 0xc08b9fc  jal         func_22E7F0
label_15a8a8:
    if (ctx->pc == 0x15A8A8u) {
        ctx->pc = 0x15A8ACu;
        goto label_15a8ac;
    }
    ctx->pc = 0x15A8A4u;
    SET_GPR_U32(ctx, 31, 0x15A8ACu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15A8A4u, 0x15A8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A8ACu;
label_15a8ac:
    // 0x15a8ac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15a8acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a8b0:
    // 0x15a8b0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a8b4:
    // 0x15a8b4: 0x26e50008  addiu       $a1, $s7, 0x8
    ctx->pc = 0x15a8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
label_15a8b8:
    // 0x15a8b8: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x15a8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
label_15a8bc:
    // 0x15a8bc: 0xc05612c  jal         func_1584B0
label_15a8c0:
    if (ctx->pc == 0x15A8C0u) {
        ctx->pc = 0x15A8C4u;
        goto label_15a8c4;
    }
    ctx->pc = 0x15A8BCu;
    SET_GPR_U32(ctx, 31, 0x15A8C4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15A8BCu, 0x15A8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A8C4u;
label_15a8c4:
    // 0x15a8c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15a8c8:
    // 0x15a8c8: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x15a8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a8cc:
    // 0x15a8cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15a8ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15a8d0:
    // 0x15a8d0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x15a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_15a8d4:
    // 0x15a8d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15a8d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_15a8d8:
    // 0x15a8d8: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x15a8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_15a8dc:
    // 0x15a8dc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x15a8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_15a8e0:
    // 0x15a8e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15a8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15a8e4:
    // 0x15a8e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15a8e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a8e8:
    // 0x15a8e8: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x15a8e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_15a8ec:
    // 0x15a8ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15a8ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a8f0:
    // 0x15a8f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15a8f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a8f4:
    // 0x15a8f4: 0xc08b9fc  jal         func_22E7F0
label_15a8f8:
    if (ctx->pc == 0x15A8F8u) {
        ctx->pc = 0x15A8FCu;
        goto label_15a8fc;
    }
    ctx->pc = 0x15A8F4u;
    SET_GPR_U32(ctx, 31, 0x15A8FCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x15A8F4u, 0x15A8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A8FCu;
label_15a8fc:
    // 0x15a8fc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x15a8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_15a900:
    // 0x15a900: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x15a900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_15a904:
    // 0x15a904: 0x8c6400b0  lw          $a0, 0xB0($v1)
    ctx->pc = 0x15a904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
label_15a908:
    // 0x15a908: 0x1480003c  bnez        $a0, . + 4 + (0x3C << 2)
label_15a90c:
    if (ctx->pc == 0x15A90Cu) {
        ctx->pc = 0x15A910u;
        goto label_15a910;
    }
    ctx->pc = 0x15A908u;
    {
        const bool branch_taken_0x15a908 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a908) {
            ctx->pc = 0x15A9FCu;
            goto label_15a9fc;
        }
    }
    ctx->pc = 0x15A910u;
label_15a910:
    // 0x15a910: 0x93a5013e  lbu         $a1, 0x13E($sp)
    ctx->pc = 0x15a910u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 318)));
label_15a914:
    // 0x15a914: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x15a914u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_15a918:
    // 0x15a918: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15a918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a91c:
    // 0x15a91c: 0x1483002b  bne         $a0, $v1, . + 4 + (0x2B << 2)
label_15a920:
    if (ctx->pc == 0x15A920u) {
        ctx->pc = 0x15A924u;
        goto label_15a924;
    }
    ctx->pc = 0x15A91Cu;
    {
        const bool branch_taken_0x15a91c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15a91c) {
            ctx->pc = 0x15A9CCu;
            goto label_15a9cc;
        }
    }
    ctx->pc = 0x15A924u;
label_15a924:
    // 0x15a924: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x15a924u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a928:
    // 0x15a928: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15a928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15a92c:
    // 0x15a92c: 0xc056a94  jal         func_15AA50
label_15a930:
    if (ctx->pc == 0x15A930u) {
        ctx->pc = 0x15A934u;
        goto label_15a934;
    }
    ctx->pc = 0x15A92Cu;
    SET_GPR_U32(ctx, 31, 0x15A934u);
    ctx->pc = 0x15AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA50u, 0x15A92Cu, 0x15A934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A934u;
label_15a934:
    // 0x15a934: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x15a934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15a938:
    // 0x15a938: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_15a93c:
    if (ctx->pc == 0x15A93Cu) {
        ctx->pc = 0x15A940u;
        goto label_15a940;
    }
    ctx->pc = 0x15A938u;
    {
        const bool branch_taken_0x15a938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a938) {
            ctx->pc = 0x15A950u;
            goto label_15a950;
        }
    }
    ctx->pc = 0x15A940u;
label_15a940:
    // 0x15a940: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15a940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15a944:
    // 0x15a944: 0xc0525e4  jal         func_149790
label_15a948:
    if (ctx->pc == 0x15A948u) {
        ctx->pc = 0x15A94Cu;
        goto label_15a94c;
    }
    ctx->pc = 0x15A944u;
    SET_GPR_U32(ctx, 31, 0x15A94Cu);
    ctx->pc = 0x149790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149790u, 0x15A944u, 0x15A94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A94Cu;
label_15a94c:
    // 0x15a94c: 0x8c560008  lw          $s6, 0x8($v0)
    ctx->pc = 0x15a94cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_15a950:
    // 0x15a950: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x15a950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a954:
    // 0x15a954: 0x8c6400ac  lw          $a0, 0xAC($v1)
    ctx->pc = 0x15a954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_15a958:
    // 0x15a958: 0x10960028  beq         $a0, $s6, . + 4 + (0x28 << 2)
label_15a95c:
    if (ctx->pc == 0x15A95Cu) {
        ctx->pc = 0x15A960u;
        goto label_15a960;
    }
    ctx->pc = 0x15A958u;
    {
        const bool branch_taken_0x15a958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 22));
        if (branch_taken_0x15a958) {
            ctx->pc = 0x15A9FCu;
            goto label_15a9fc;
        }
    }
    ctx->pc = 0x15A960u;
label_15a960:
    // 0x15a960: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x15a960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a964:
    // 0x15a964: 0x8c6300ac  lw          $v1, 0xAC($v1)
    ctx->pc = 0x15a964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_15a968:
    // 0x15a968: 0x10030008  beq         $zero, $v1, . + 4 + (0x8 << 2)
label_15a96c:
    if (ctx->pc == 0x15A96Cu) {
        ctx->pc = 0x15A970u;
        goto label_15a970;
    }
    ctx->pc = 0x15A968u;
    {
        const bool branch_taken_0x15a968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x15a968) {
            ctx->pc = 0x15A98Cu;
            goto label_15a98c;
        }
    }
    ctx->pc = 0x15A970u;
label_15a970:
    // 0x15a970: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15a970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a974:
    // 0x15a974: 0x8c4400ac  lw          $a0, 0xAC($v0)
    ctx->pc = 0x15a974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_15a978:
    // 0x15a978: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x15a978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_15a97c:
    // 0x15a97c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15a97cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a980:
    // 0x15a980: 0xc0913a0  jal         func_244E80
label_15a984:
    if (ctx->pc == 0x15A984u) {
        ctx->pc = 0x15A988u;
        goto label_15a988;
    }
    ctx->pc = 0x15A980u;
    SET_GPR_U32(ctx, 31, 0x15A988u);
    ctx->pc = 0x244E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E80u, 0x15A980u, 0x15A988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A988u;
label_15a988:
    // 0x15a988: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15a988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a98c:
    // 0x15a98c: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x15a98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a990:
    // 0x15a990: 0xacb600ac  sw          $s6, 0xAC($a1)
    ctx->pc = 0x15a990u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 172), GPR_U32(ctx, 22));
label_15a994:
    // 0x15a994: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x15a994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a998:
    // 0x15a998: 0x8c6500ac  lw          $a1, 0xAC($v1)
    ctx->pc = 0x15a998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_15a99c:
    // 0x15a99c: 0x10050017  beq         $zero, $a1, . + 4 + (0x17 << 2)
label_15a9a0:
    if (ctx->pc == 0x15A9A0u) {
        ctx->pc = 0x15A9A4u;
        goto label_15a9a4;
    }
    ctx->pc = 0x15A99Cu;
    {
        const bool branch_taken_0x15a99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        if (branch_taken_0x15a99c) {
            ctx->pc = 0x15A9FCu;
            goto label_15a9fc;
        }
    }
    ctx->pc = 0x15A9A4u;
label_15a9a4:
    // 0x15a9a4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a9a8:
    // 0x15a9a8: 0x8c4400ac  lw          $a0, 0xAC($v0)
    ctx->pc = 0x15a9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_15a9ac:
    // 0x15a9ac: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x15a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_15a9b0:
    // 0x15a9b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15a9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a9b4:
    // 0x15a9b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15a9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a9b8:
    // 0x15a9b8: 0xc0913a0  jal         func_244E80
label_15a9bc:
    if (ctx->pc == 0x15A9BCu) {
        ctx->pc = 0x15A9C0u;
        goto label_15a9c0;
    }
    ctx->pc = 0x15A9B8u;
    SET_GPR_U32(ctx, 31, 0x15A9C0u);
    ctx->pc = 0x244E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E80u, 0x15A9B8u, 0x15A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A9C0u;
label_15a9c0:
    // 0x15a9c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15a9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15a9c4:
    // 0x15a9c4: 0x1000000d  b           . + 4 + (0xD << 2)
label_15a9c8:
    if (ctx->pc == 0x15A9C8u) {
        ctx->pc = 0x15A9CCu;
        goto label_15a9cc;
    }
    ctx->pc = 0x15A9C4u;
    {
        const bool branch_taken_0x15a9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a9c4) {
            ctx->pc = 0x15A9FCu;
            goto label_15a9fc;
        }
    }
    ctx->pc = 0x15A9CCu;
label_15a9cc:
    // 0x15a9cc: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x15a9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a9d0:
    // 0x15a9d0: 0x8c8300ac  lw          $v1, 0xAC($a0)
    ctx->pc = 0x15a9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_15a9d4:
    // 0x15a9d4: 0x10030009  beq         $zero, $v1, . + 4 + (0x9 << 2)
label_15a9d8:
    if (ctx->pc == 0x15A9D8u) {
        ctx->pc = 0x15A9DCu;
        goto label_15a9dc;
    }
    ctx->pc = 0x15A9D4u;
    {
        const bool branch_taken_0x15a9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x15a9d4) {
            ctx->pc = 0x15A9FCu;
            goto label_15a9fc;
        }
    }
    ctx->pc = 0x15A9DCu;
label_15a9dc:
    // 0x15a9dc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x15a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a9e0:
    // 0x15a9e0: 0x8c4400ac  lw          $a0, 0xAC($v0)
    ctx->pc = 0x15a9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_15a9e4:
    // 0x15a9e4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x15a9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_15a9e8:
    // 0x15a9e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15a9e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a9ec:
    // 0x15a9ec: 0xc0913a0  jal         func_244E80
label_15a9f0:
    if (ctx->pc == 0x15A9F0u) {
        ctx->pc = 0x15A9F4u;
        goto label_15a9f4;
    }
    ctx->pc = 0x15A9ECu;
    SET_GPR_U32(ctx, 31, 0x15A9F4u);
    ctx->pc = 0x244E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E80u, 0x15A9ECu, 0x15A9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A9F4u;
label_15a9f4:
    // 0x15a9f4: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x15a9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_15a9f8:
    // 0x15a9f8: 0xac8000ac  sw          $zero, 0xAC($a0)
    ctx->pc = 0x15a9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
label_15a9fc:
    // 0x15a9fc: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x15a9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15aa00:
    // 0x15aa00: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15aa00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15aa04:
    // 0x15aa04: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x15aa04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_15aa08:
    // 0x15aa08: 0x1460fd6c  bnez        $v1, . + 4 + (-0x294 << 2)
label_15aa0c:
    if (ctx->pc == 0x15AA0Cu) {
        ctx->pc = 0x15AA10u;
        goto label_15aa10;
    }
    ctx->pc = 0x15AA08u;
    {
        const bool branch_taken_0x15aa08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15aa08) {
            ctx->pc = 0x159FBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159fbc;
        }
    }
    ctx->pc = 0x15AA10u;
label_15aa10:
    // 0x15aa10: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x15aa10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_15aa14:
    // 0x15aa14: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x15aa14u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15aa18:
    // 0x15aa18: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15aa18u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15aa1c:
    // 0x15aa1c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15aa1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15aa20:
    // 0x15aa20: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15aa20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15aa24:
    // 0x15aa24: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15aa24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15aa28:
    // 0x15aa28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15aa28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15aa2c:
    // 0x15aa2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15aa2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15aa30:
    // 0x15aa30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15aa30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15aa34:
    // 0x15aa34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15aa34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15aa38:
    // 0x15aa38: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x15aa38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_15aa3c:
    // 0x15aa3c: 0x3e00008  jr          $ra
label_15aa40:
    if (ctx->pc == 0x15AA40u) {
        ctx->pc = 0x15AA44u;
        goto label_15aa44;
    }
    ctx->pc = 0x15AA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15AA44u;
label_15aa44:
    // 0x15aa44: 0x0  nop
    ctx->pc = 0x15aa44u;
    // NOP
label_15aa48:
    // 0x15aa48: 0x0  nop
    ctx->pc = 0x15aa48u;
    // NOP
label_15aa4c:
    // 0x15aa4c: 0x0  nop
    ctx->pc = 0x15aa4cu;
    // NOP
    ctx->pc = 0x15aa50u;
}
