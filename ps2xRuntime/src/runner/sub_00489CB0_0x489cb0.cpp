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

// Function: sub_00489CB0
// Address: 0x489cb0 - 0x48a640
void sub_00489CB0_0x489cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00489CB0_0x489cb0");
#endif

    switch (ctx->pc) {
        case 0x489cb0u: goto label_489cb0;
        case 0x489cb4u: goto label_489cb4;
        case 0x489cb8u: goto label_489cb8;
        case 0x489cbcu: goto label_489cbc;
        case 0x489cc0u: goto label_489cc0;
        case 0x489cc4u: goto label_489cc4;
        case 0x489cc8u: goto label_489cc8;
        case 0x489cccu: goto label_489ccc;
        case 0x489cd0u: goto label_489cd0;
        case 0x489cd4u: goto label_489cd4;
        case 0x489cd8u: goto label_489cd8;
        case 0x489cdcu: goto label_489cdc;
        case 0x489ce0u: goto label_489ce0;
        case 0x489ce4u: goto label_489ce4;
        case 0x489ce8u: goto label_489ce8;
        case 0x489cecu: goto label_489cec;
        case 0x489cf0u: goto label_489cf0;
        case 0x489cf4u: goto label_489cf4;
        case 0x489cf8u: goto label_489cf8;
        case 0x489cfcu: goto label_489cfc;
        case 0x489d00u: goto label_489d00;
        case 0x489d04u: goto label_489d04;
        case 0x489d08u: goto label_489d08;
        case 0x489d0cu: goto label_489d0c;
        case 0x489d10u: goto label_489d10;
        case 0x489d14u: goto label_489d14;
        case 0x489d18u: goto label_489d18;
        case 0x489d1cu: goto label_489d1c;
        case 0x489d20u: goto label_489d20;
        case 0x489d24u: goto label_489d24;
        case 0x489d28u: goto label_489d28;
        case 0x489d2cu: goto label_489d2c;
        case 0x489d30u: goto label_489d30;
        case 0x489d34u: goto label_489d34;
        case 0x489d38u: goto label_489d38;
        case 0x489d3cu: goto label_489d3c;
        case 0x489d40u: goto label_489d40;
        case 0x489d44u: goto label_489d44;
        case 0x489d48u: goto label_489d48;
        case 0x489d4cu: goto label_489d4c;
        case 0x489d50u: goto label_489d50;
        case 0x489d54u: goto label_489d54;
        case 0x489d58u: goto label_489d58;
        case 0x489d5cu: goto label_489d5c;
        case 0x489d60u: goto label_489d60;
        case 0x489d64u: goto label_489d64;
        case 0x489d68u: goto label_489d68;
        case 0x489d6cu: goto label_489d6c;
        case 0x489d70u: goto label_489d70;
        case 0x489d74u: goto label_489d74;
        case 0x489d78u: goto label_489d78;
        case 0x489d7cu: goto label_489d7c;
        case 0x489d80u: goto label_489d80;
        case 0x489d84u: goto label_489d84;
        case 0x489d88u: goto label_489d88;
        case 0x489d8cu: goto label_489d8c;
        case 0x489d90u: goto label_489d90;
        case 0x489d94u: goto label_489d94;
        case 0x489d98u: goto label_489d98;
        case 0x489d9cu: goto label_489d9c;
        case 0x489da0u: goto label_489da0;
        case 0x489da4u: goto label_489da4;
        case 0x489da8u: goto label_489da8;
        case 0x489dacu: goto label_489dac;
        case 0x489db0u: goto label_489db0;
        case 0x489db4u: goto label_489db4;
        case 0x489db8u: goto label_489db8;
        case 0x489dbcu: goto label_489dbc;
        case 0x489dc0u: goto label_489dc0;
        case 0x489dc4u: goto label_489dc4;
        case 0x489dc8u: goto label_489dc8;
        case 0x489dccu: goto label_489dcc;
        case 0x489dd0u: goto label_489dd0;
        case 0x489dd4u: goto label_489dd4;
        case 0x489dd8u: goto label_489dd8;
        case 0x489ddcu: goto label_489ddc;
        case 0x489de0u: goto label_489de0;
        case 0x489de4u: goto label_489de4;
        case 0x489de8u: goto label_489de8;
        case 0x489decu: goto label_489dec;
        case 0x489df0u: goto label_489df0;
        case 0x489df4u: goto label_489df4;
        case 0x489df8u: goto label_489df8;
        case 0x489dfcu: goto label_489dfc;
        case 0x489e00u: goto label_489e00;
        case 0x489e04u: goto label_489e04;
        case 0x489e08u: goto label_489e08;
        case 0x489e0cu: goto label_489e0c;
        case 0x489e10u: goto label_489e10;
        case 0x489e14u: goto label_489e14;
        case 0x489e18u: goto label_489e18;
        case 0x489e1cu: goto label_489e1c;
        case 0x489e20u: goto label_489e20;
        case 0x489e24u: goto label_489e24;
        case 0x489e28u: goto label_489e28;
        case 0x489e2cu: goto label_489e2c;
        case 0x489e30u: goto label_489e30;
        case 0x489e34u: goto label_489e34;
        case 0x489e38u: goto label_489e38;
        case 0x489e3cu: goto label_489e3c;
        case 0x489e40u: goto label_489e40;
        case 0x489e44u: goto label_489e44;
        case 0x489e48u: goto label_489e48;
        case 0x489e4cu: goto label_489e4c;
        case 0x489e50u: goto label_489e50;
        case 0x489e54u: goto label_489e54;
        case 0x489e58u: goto label_489e58;
        case 0x489e5cu: goto label_489e5c;
        case 0x489e60u: goto label_489e60;
        case 0x489e64u: goto label_489e64;
        case 0x489e68u: goto label_489e68;
        case 0x489e6cu: goto label_489e6c;
        case 0x489e70u: goto label_489e70;
        case 0x489e74u: goto label_489e74;
        case 0x489e78u: goto label_489e78;
        case 0x489e7cu: goto label_489e7c;
        case 0x489e80u: goto label_489e80;
        case 0x489e84u: goto label_489e84;
        case 0x489e88u: goto label_489e88;
        case 0x489e8cu: goto label_489e8c;
        case 0x489e90u: goto label_489e90;
        case 0x489e94u: goto label_489e94;
        case 0x489e98u: goto label_489e98;
        case 0x489e9cu: goto label_489e9c;
        case 0x489ea0u: goto label_489ea0;
        case 0x489ea4u: goto label_489ea4;
        case 0x489ea8u: goto label_489ea8;
        case 0x489eacu: goto label_489eac;
        case 0x489eb0u: goto label_489eb0;
        case 0x489eb4u: goto label_489eb4;
        case 0x489eb8u: goto label_489eb8;
        case 0x489ebcu: goto label_489ebc;
        case 0x489ec0u: goto label_489ec0;
        case 0x489ec4u: goto label_489ec4;
        case 0x489ec8u: goto label_489ec8;
        case 0x489eccu: goto label_489ecc;
        case 0x489ed0u: goto label_489ed0;
        case 0x489ed4u: goto label_489ed4;
        case 0x489ed8u: goto label_489ed8;
        case 0x489edcu: goto label_489edc;
        case 0x489ee0u: goto label_489ee0;
        case 0x489ee4u: goto label_489ee4;
        case 0x489ee8u: goto label_489ee8;
        case 0x489eecu: goto label_489eec;
        case 0x489ef0u: goto label_489ef0;
        case 0x489ef4u: goto label_489ef4;
        case 0x489ef8u: goto label_489ef8;
        case 0x489efcu: goto label_489efc;
        case 0x489f00u: goto label_489f00;
        case 0x489f04u: goto label_489f04;
        case 0x489f08u: goto label_489f08;
        case 0x489f0cu: goto label_489f0c;
        case 0x489f10u: goto label_489f10;
        case 0x489f14u: goto label_489f14;
        case 0x489f18u: goto label_489f18;
        case 0x489f1cu: goto label_489f1c;
        case 0x489f20u: goto label_489f20;
        case 0x489f24u: goto label_489f24;
        case 0x489f28u: goto label_489f28;
        case 0x489f2cu: goto label_489f2c;
        case 0x489f30u: goto label_489f30;
        case 0x489f34u: goto label_489f34;
        case 0x489f38u: goto label_489f38;
        case 0x489f3cu: goto label_489f3c;
        case 0x489f40u: goto label_489f40;
        case 0x489f44u: goto label_489f44;
        case 0x489f48u: goto label_489f48;
        case 0x489f4cu: goto label_489f4c;
        case 0x489f50u: goto label_489f50;
        case 0x489f54u: goto label_489f54;
        case 0x489f58u: goto label_489f58;
        case 0x489f5cu: goto label_489f5c;
        case 0x489f60u: goto label_489f60;
        case 0x489f64u: goto label_489f64;
        case 0x489f68u: goto label_489f68;
        case 0x489f6cu: goto label_489f6c;
        case 0x489f70u: goto label_489f70;
        case 0x489f74u: goto label_489f74;
        case 0x489f78u: goto label_489f78;
        case 0x489f7cu: goto label_489f7c;
        case 0x489f80u: goto label_489f80;
        case 0x489f84u: goto label_489f84;
        case 0x489f88u: goto label_489f88;
        case 0x489f8cu: goto label_489f8c;
        case 0x489f90u: goto label_489f90;
        case 0x489f94u: goto label_489f94;
        case 0x489f98u: goto label_489f98;
        case 0x489f9cu: goto label_489f9c;
        case 0x489fa0u: goto label_489fa0;
        case 0x489fa4u: goto label_489fa4;
        case 0x489fa8u: goto label_489fa8;
        case 0x489facu: goto label_489fac;
        case 0x489fb0u: goto label_489fb0;
        case 0x489fb4u: goto label_489fb4;
        case 0x489fb8u: goto label_489fb8;
        case 0x489fbcu: goto label_489fbc;
        case 0x489fc0u: goto label_489fc0;
        case 0x489fc4u: goto label_489fc4;
        case 0x489fc8u: goto label_489fc8;
        case 0x489fccu: goto label_489fcc;
        case 0x489fd0u: goto label_489fd0;
        case 0x489fd4u: goto label_489fd4;
        case 0x489fd8u: goto label_489fd8;
        case 0x489fdcu: goto label_489fdc;
        case 0x489fe0u: goto label_489fe0;
        case 0x489fe4u: goto label_489fe4;
        case 0x489fe8u: goto label_489fe8;
        case 0x489fecu: goto label_489fec;
        case 0x489ff0u: goto label_489ff0;
        case 0x489ff4u: goto label_489ff4;
        case 0x489ff8u: goto label_489ff8;
        case 0x489ffcu: goto label_489ffc;
        case 0x48a000u: goto label_48a000;
        case 0x48a004u: goto label_48a004;
        case 0x48a008u: goto label_48a008;
        case 0x48a00cu: goto label_48a00c;
        case 0x48a010u: goto label_48a010;
        case 0x48a014u: goto label_48a014;
        case 0x48a018u: goto label_48a018;
        case 0x48a01cu: goto label_48a01c;
        case 0x48a020u: goto label_48a020;
        case 0x48a024u: goto label_48a024;
        case 0x48a028u: goto label_48a028;
        case 0x48a02cu: goto label_48a02c;
        case 0x48a030u: goto label_48a030;
        case 0x48a034u: goto label_48a034;
        case 0x48a038u: goto label_48a038;
        case 0x48a03cu: goto label_48a03c;
        case 0x48a040u: goto label_48a040;
        case 0x48a044u: goto label_48a044;
        case 0x48a048u: goto label_48a048;
        case 0x48a04cu: goto label_48a04c;
        case 0x48a050u: goto label_48a050;
        case 0x48a054u: goto label_48a054;
        case 0x48a058u: goto label_48a058;
        case 0x48a05cu: goto label_48a05c;
        case 0x48a060u: goto label_48a060;
        case 0x48a064u: goto label_48a064;
        case 0x48a068u: goto label_48a068;
        case 0x48a06cu: goto label_48a06c;
        case 0x48a070u: goto label_48a070;
        case 0x48a074u: goto label_48a074;
        case 0x48a078u: goto label_48a078;
        case 0x48a07cu: goto label_48a07c;
        case 0x48a080u: goto label_48a080;
        case 0x48a084u: goto label_48a084;
        case 0x48a088u: goto label_48a088;
        case 0x48a08cu: goto label_48a08c;
        case 0x48a090u: goto label_48a090;
        case 0x48a094u: goto label_48a094;
        case 0x48a098u: goto label_48a098;
        case 0x48a09cu: goto label_48a09c;
        case 0x48a0a0u: goto label_48a0a0;
        case 0x48a0a4u: goto label_48a0a4;
        case 0x48a0a8u: goto label_48a0a8;
        case 0x48a0acu: goto label_48a0ac;
        case 0x48a0b0u: goto label_48a0b0;
        case 0x48a0b4u: goto label_48a0b4;
        case 0x48a0b8u: goto label_48a0b8;
        case 0x48a0bcu: goto label_48a0bc;
        case 0x48a0c0u: goto label_48a0c0;
        case 0x48a0c4u: goto label_48a0c4;
        case 0x48a0c8u: goto label_48a0c8;
        case 0x48a0ccu: goto label_48a0cc;
        case 0x48a0d0u: goto label_48a0d0;
        case 0x48a0d4u: goto label_48a0d4;
        case 0x48a0d8u: goto label_48a0d8;
        case 0x48a0dcu: goto label_48a0dc;
        case 0x48a0e0u: goto label_48a0e0;
        case 0x48a0e4u: goto label_48a0e4;
        case 0x48a0e8u: goto label_48a0e8;
        case 0x48a0ecu: goto label_48a0ec;
        case 0x48a0f0u: goto label_48a0f0;
        case 0x48a0f4u: goto label_48a0f4;
        case 0x48a0f8u: goto label_48a0f8;
        case 0x48a0fcu: goto label_48a0fc;
        case 0x48a100u: goto label_48a100;
        case 0x48a104u: goto label_48a104;
        case 0x48a108u: goto label_48a108;
        case 0x48a10cu: goto label_48a10c;
        case 0x48a110u: goto label_48a110;
        case 0x48a114u: goto label_48a114;
        case 0x48a118u: goto label_48a118;
        case 0x48a11cu: goto label_48a11c;
        case 0x48a120u: goto label_48a120;
        case 0x48a124u: goto label_48a124;
        case 0x48a128u: goto label_48a128;
        case 0x48a12cu: goto label_48a12c;
        case 0x48a130u: goto label_48a130;
        case 0x48a134u: goto label_48a134;
        case 0x48a138u: goto label_48a138;
        case 0x48a13cu: goto label_48a13c;
        case 0x48a140u: goto label_48a140;
        case 0x48a144u: goto label_48a144;
        case 0x48a148u: goto label_48a148;
        case 0x48a14cu: goto label_48a14c;
        case 0x48a150u: goto label_48a150;
        case 0x48a154u: goto label_48a154;
        case 0x48a158u: goto label_48a158;
        case 0x48a15cu: goto label_48a15c;
        case 0x48a160u: goto label_48a160;
        case 0x48a164u: goto label_48a164;
        case 0x48a168u: goto label_48a168;
        case 0x48a16cu: goto label_48a16c;
        case 0x48a170u: goto label_48a170;
        case 0x48a174u: goto label_48a174;
        case 0x48a178u: goto label_48a178;
        case 0x48a17cu: goto label_48a17c;
        case 0x48a180u: goto label_48a180;
        case 0x48a184u: goto label_48a184;
        case 0x48a188u: goto label_48a188;
        case 0x48a18cu: goto label_48a18c;
        case 0x48a190u: goto label_48a190;
        case 0x48a194u: goto label_48a194;
        case 0x48a198u: goto label_48a198;
        case 0x48a19cu: goto label_48a19c;
        case 0x48a1a0u: goto label_48a1a0;
        case 0x48a1a4u: goto label_48a1a4;
        case 0x48a1a8u: goto label_48a1a8;
        case 0x48a1acu: goto label_48a1ac;
        case 0x48a1b0u: goto label_48a1b0;
        case 0x48a1b4u: goto label_48a1b4;
        case 0x48a1b8u: goto label_48a1b8;
        case 0x48a1bcu: goto label_48a1bc;
        case 0x48a1c0u: goto label_48a1c0;
        case 0x48a1c4u: goto label_48a1c4;
        case 0x48a1c8u: goto label_48a1c8;
        case 0x48a1ccu: goto label_48a1cc;
        case 0x48a1d0u: goto label_48a1d0;
        case 0x48a1d4u: goto label_48a1d4;
        case 0x48a1d8u: goto label_48a1d8;
        case 0x48a1dcu: goto label_48a1dc;
        case 0x48a1e0u: goto label_48a1e0;
        case 0x48a1e4u: goto label_48a1e4;
        case 0x48a1e8u: goto label_48a1e8;
        case 0x48a1ecu: goto label_48a1ec;
        case 0x48a1f0u: goto label_48a1f0;
        case 0x48a1f4u: goto label_48a1f4;
        case 0x48a1f8u: goto label_48a1f8;
        case 0x48a1fcu: goto label_48a1fc;
        case 0x48a200u: goto label_48a200;
        case 0x48a204u: goto label_48a204;
        case 0x48a208u: goto label_48a208;
        case 0x48a20cu: goto label_48a20c;
        case 0x48a210u: goto label_48a210;
        case 0x48a214u: goto label_48a214;
        case 0x48a218u: goto label_48a218;
        case 0x48a21cu: goto label_48a21c;
        case 0x48a220u: goto label_48a220;
        case 0x48a224u: goto label_48a224;
        case 0x48a228u: goto label_48a228;
        case 0x48a22cu: goto label_48a22c;
        case 0x48a230u: goto label_48a230;
        case 0x48a234u: goto label_48a234;
        case 0x48a238u: goto label_48a238;
        case 0x48a23cu: goto label_48a23c;
        case 0x48a240u: goto label_48a240;
        case 0x48a244u: goto label_48a244;
        case 0x48a248u: goto label_48a248;
        case 0x48a24cu: goto label_48a24c;
        case 0x48a250u: goto label_48a250;
        case 0x48a254u: goto label_48a254;
        case 0x48a258u: goto label_48a258;
        case 0x48a25cu: goto label_48a25c;
        case 0x48a260u: goto label_48a260;
        case 0x48a264u: goto label_48a264;
        case 0x48a268u: goto label_48a268;
        case 0x48a26cu: goto label_48a26c;
        case 0x48a270u: goto label_48a270;
        case 0x48a274u: goto label_48a274;
        case 0x48a278u: goto label_48a278;
        case 0x48a27cu: goto label_48a27c;
        case 0x48a280u: goto label_48a280;
        case 0x48a284u: goto label_48a284;
        case 0x48a288u: goto label_48a288;
        case 0x48a28cu: goto label_48a28c;
        case 0x48a290u: goto label_48a290;
        case 0x48a294u: goto label_48a294;
        case 0x48a298u: goto label_48a298;
        case 0x48a29cu: goto label_48a29c;
        case 0x48a2a0u: goto label_48a2a0;
        case 0x48a2a4u: goto label_48a2a4;
        case 0x48a2a8u: goto label_48a2a8;
        case 0x48a2acu: goto label_48a2ac;
        case 0x48a2b0u: goto label_48a2b0;
        case 0x48a2b4u: goto label_48a2b4;
        case 0x48a2b8u: goto label_48a2b8;
        case 0x48a2bcu: goto label_48a2bc;
        case 0x48a2c0u: goto label_48a2c0;
        case 0x48a2c4u: goto label_48a2c4;
        case 0x48a2c8u: goto label_48a2c8;
        case 0x48a2ccu: goto label_48a2cc;
        case 0x48a2d0u: goto label_48a2d0;
        case 0x48a2d4u: goto label_48a2d4;
        case 0x48a2d8u: goto label_48a2d8;
        case 0x48a2dcu: goto label_48a2dc;
        case 0x48a2e0u: goto label_48a2e0;
        case 0x48a2e4u: goto label_48a2e4;
        case 0x48a2e8u: goto label_48a2e8;
        case 0x48a2ecu: goto label_48a2ec;
        case 0x48a2f0u: goto label_48a2f0;
        case 0x48a2f4u: goto label_48a2f4;
        case 0x48a2f8u: goto label_48a2f8;
        case 0x48a2fcu: goto label_48a2fc;
        case 0x48a300u: goto label_48a300;
        case 0x48a304u: goto label_48a304;
        case 0x48a308u: goto label_48a308;
        case 0x48a30cu: goto label_48a30c;
        case 0x48a310u: goto label_48a310;
        case 0x48a314u: goto label_48a314;
        case 0x48a318u: goto label_48a318;
        case 0x48a31cu: goto label_48a31c;
        case 0x48a320u: goto label_48a320;
        case 0x48a324u: goto label_48a324;
        case 0x48a328u: goto label_48a328;
        case 0x48a32cu: goto label_48a32c;
        case 0x48a330u: goto label_48a330;
        case 0x48a334u: goto label_48a334;
        case 0x48a338u: goto label_48a338;
        case 0x48a33cu: goto label_48a33c;
        case 0x48a340u: goto label_48a340;
        case 0x48a344u: goto label_48a344;
        case 0x48a348u: goto label_48a348;
        case 0x48a34cu: goto label_48a34c;
        case 0x48a350u: goto label_48a350;
        case 0x48a354u: goto label_48a354;
        case 0x48a358u: goto label_48a358;
        case 0x48a35cu: goto label_48a35c;
        case 0x48a360u: goto label_48a360;
        case 0x48a364u: goto label_48a364;
        case 0x48a368u: goto label_48a368;
        case 0x48a36cu: goto label_48a36c;
        case 0x48a370u: goto label_48a370;
        case 0x48a374u: goto label_48a374;
        case 0x48a378u: goto label_48a378;
        case 0x48a37cu: goto label_48a37c;
        case 0x48a380u: goto label_48a380;
        case 0x48a384u: goto label_48a384;
        case 0x48a388u: goto label_48a388;
        case 0x48a38cu: goto label_48a38c;
        case 0x48a390u: goto label_48a390;
        case 0x48a394u: goto label_48a394;
        case 0x48a398u: goto label_48a398;
        case 0x48a39cu: goto label_48a39c;
        case 0x48a3a0u: goto label_48a3a0;
        case 0x48a3a4u: goto label_48a3a4;
        case 0x48a3a8u: goto label_48a3a8;
        case 0x48a3acu: goto label_48a3ac;
        case 0x48a3b0u: goto label_48a3b0;
        case 0x48a3b4u: goto label_48a3b4;
        case 0x48a3b8u: goto label_48a3b8;
        case 0x48a3bcu: goto label_48a3bc;
        case 0x48a3c0u: goto label_48a3c0;
        case 0x48a3c4u: goto label_48a3c4;
        case 0x48a3c8u: goto label_48a3c8;
        case 0x48a3ccu: goto label_48a3cc;
        case 0x48a3d0u: goto label_48a3d0;
        case 0x48a3d4u: goto label_48a3d4;
        case 0x48a3d8u: goto label_48a3d8;
        case 0x48a3dcu: goto label_48a3dc;
        case 0x48a3e0u: goto label_48a3e0;
        case 0x48a3e4u: goto label_48a3e4;
        case 0x48a3e8u: goto label_48a3e8;
        case 0x48a3ecu: goto label_48a3ec;
        case 0x48a3f0u: goto label_48a3f0;
        case 0x48a3f4u: goto label_48a3f4;
        case 0x48a3f8u: goto label_48a3f8;
        case 0x48a3fcu: goto label_48a3fc;
        case 0x48a400u: goto label_48a400;
        case 0x48a404u: goto label_48a404;
        case 0x48a408u: goto label_48a408;
        case 0x48a40cu: goto label_48a40c;
        case 0x48a410u: goto label_48a410;
        case 0x48a414u: goto label_48a414;
        case 0x48a418u: goto label_48a418;
        case 0x48a41cu: goto label_48a41c;
        case 0x48a420u: goto label_48a420;
        case 0x48a424u: goto label_48a424;
        case 0x48a428u: goto label_48a428;
        case 0x48a42cu: goto label_48a42c;
        case 0x48a430u: goto label_48a430;
        case 0x48a434u: goto label_48a434;
        case 0x48a438u: goto label_48a438;
        case 0x48a43cu: goto label_48a43c;
        case 0x48a440u: goto label_48a440;
        case 0x48a444u: goto label_48a444;
        case 0x48a448u: goto label_48a448;
        case 0x48a44cu: goto label_48a44c;
        case 0x48a450u: goto label_48a450;
        case 0x48a454u: goto label_48a454;
        case 0x48a458u: goto label_48a458;
        case 0x48a45cu: goto label_48a45c;
        case 0x48a460u: goto label_48a460;
        case 0x48a464u: goto label_48a464;
        case 0x48a468u: goto label_48a468;
        case 0x48a46cu: goto label_48a46c;
        case 0x48a470u: goto label_48a470;
        case 0x48a474u: goto label_48a474;
        case 0x48a478u: goto label_48a478;
        case 0x48a47cu: goto label_48a47c;
        case 0x48a480u: goto label_48a480;
        case 0x48a484u: goto label_48a484;
        case 0x48a488u: goto label_48a488;
        case 0x48a48cu: goto label_48a48c;
        case 0x48a490u: goto label_48a490;
        case 0x48a494u: goto label_48a494;
        case 0x48a498u: goto label_48a498;
        case 0x48a49cu: goto label_48a49c;
        case 0x48a4a0u: goto label_48a4a0;
        case 0x48a4a4u: goto label_48a4a4;
        case 0x48a4a8u: goto label_48a4a8;
        case 0x48a4acu: goto label_48a4ac;
        case 0x48a4b0u: goto label_48a4b0;
        case 0x48a4b4u: goto label_48a4b4;
        case 0x48a4b8u: goto label_48a4b8;
        case 0x48a4bcu: goto label_48a4bc;
        case 0x48a4c0u: goto label_48a4c0;
        case 0x48a4c4u: goto label_48a4c4;
        case 0x48a4c8u: goto label_48a4c8;
        case 0x48a4ccu: goto label_48a4cc;
        case 0x48a4d0u: goto label_48a4d0;
        case 0x48a4d4u: goto label_48a4d4;
        case 0x48a4d8u: goto label_48a4d8;
        case 0x48a4dcu: goto label_48a4dc;
        case 0x48a4e0u: goto label_48a4e0;
        case 0x48a4e4u: goto label_48a4e4;
        case 0x48a4e8u: goto label_48a4e8;
        case 0x48a4ecu: goto label_48a4ec;
        case 0x48a4f0u: goto label_48a4f0;
        case 0x48a4f4u: goto label_48a4f4;
        case 0x48a4f8u: goto label_48a4f8;
        case 0x48a4fcu: goto label_48a4fc;
        case 0x48a500u: goto label_48a500;
        case 0x48a504u: goto label_48a504;
        case 0x48a508u: goto label_48a508;
        case 0x48a50cu: goto label_48a50c;
        case 0x48a510u: goto label_48a510;
        case 0x48a514u: goto label_48a514;
        case 0x48a518u: goto label_48a518;
        case 0x48a51cu: goto label_48a51c;
        case 0x48a520u: goto label_48a520;
        case 0x48a524u: goto label_48a524;
        case 0x48a528u: goto label_48a528;
        case 0x48a52cu: goto label_48a52c;
        case 0x48a530u: goto label_48a530;
        case 0x48a534u: goto label_48a534;
        case 0x48a538u: goto label_48a538;
        case 0x48a53cu: goto label_48a53c;
        case 0x48a540u: goto label_48a540;
        case 0x48a544u: goto label_48a544;
        case 0x48a548u: goto label_48a548;
        case 0x48a54cu: goto label_48a54c;
        case 0x48a550u: goto label_48a550;
        case 0x48a554u: goto label_48a554;
        case 0x48a558u: goto label_48a558;
        case 0x48a55cu: goto label_48a55c;
        case 0x48a560u: goto label_48a560;
        case 0x48a564u: goto label_48a564;
        case 0x48a568u: goto label_48a568;
        case 0x48a56cu: goto label_48a56c;
        case 0x48a570u: goto label_48a570;
        case 0x48a574u: goto label_48a574;
        case 0x48a578u: goto label_48a578;
        case 0x48a57cu: goto label_48a57c;
        case 0x48a580u: goto label_48a580;
        case 0x48a584u: goto label_48a584;
        case 0x48a588u: goto label_48a588;
        case 0x48a58cu: goto label_48a58c;
        case 0x48a590u: goto label_48a590;
        case 0x48a594u: goto label_48a594;
        case 0x48a598u: goto label_48a598;
        case 0x48a59cu: goto label_48a59c;
        case 0x48a5a0u: goto label_48a5a0;
        case 0x48a5a4u: goto label_48a5a4;
        case 0x48a5a8u: goto label_48a5a8;
        case 0x48a5acu: goto label_48a5ac;
        case 0x48a5b0u: goto label_48a5b0;
        case 0x48a5b4u: goto label_48a5b4;
        case 0x48a5b8u: goto label_48a5b8;
        case 0x48a5bcu: goto label_48a5bc;
        case 0x48a5c0u: goto label_48a5c0;
        case 0x48a5c4u: goto label_48a5c4;
        case 0x48a5c8u: goto label_48a5c8;
        case 0x48a5ccu: goto label_48a5cc;
        case 0x48a5d0u: goto label_48a5d0;
        case 0x48a5d4u: goto label_48a5d4;
        case 0x48a5d8u: goto label_48a5d8;
        case 0x48a5dcu: goto label_48a5dc;
        case 0x48a5e0u: goto label_48a5e0;
        case 0x48a5e4u: goto label_48a5e4;
        case 0x48a5e8u: goto label_48a5e8;
        case 0x48a5ecu: goto label_48a5ec;
        case 0x48a5f0u: goto label_48a5f0;
        case 0x48a5f4u: goto label_48a5f4;
        case 0x48a5f8u: goto label_48a5f8;
        case 0x48a5fcu: goto label_48a5fc;
        case 0x48a600u: goto label_48a600;
        case 0x48a604u: goto label_48a604;
        case 0x48a608u: goto label_48a608;
        case 0x48a60cu: goto label_48a60c;
        case 0x48a610u: goto label_48a610;
        case 0x48a614u: goto label_48a614;
        case 0x48a618u: goto label_48a618;
        case 0x48a61cu: goto label_48a61c;
        case 0x48a620u: goto label_48a620;
        case 0x48a624u: goto label_48a624;
        case 0x48a628u: goto label_48a628;
        case 0x48a62cu: goto label_48a62c;
        case 0x48a630u: goto label_48a630;
        case 0x48a634u: goto label_48a634;
        case 0x48a638u: goto label_48a638;
        case 0x48a63cu: goto label_48a63c;
        default: break;
    }

    ctx->pc = 0x489cb0u;

label_489cb0:
    // 0x489cb0: 0x27bdfb60  addiu       $sp, $sp, -0x4A0
    ctx->pc = 0x489cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966112));
label_489cb4:
    // 0x489cb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x489cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_489cb8:
    // 0x489cb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x489cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_489cbc:
    // 0x489cbc: 0xafa40490  sw          $a0, 0x490($sp)
    ctx->pc = 0x489cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 4));
label_489cc0:
    // 0x489cc0: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x489cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_489cc4:
    // 0x489cc4: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x489cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_489cc8:
    // 0x489cc8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x489cc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_489ccc:
    // 0x489ccc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x489cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_489cd0:
    // 0x489cd0: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_489cd4:
    if (ctx->pc == 0x489CD4u) {
        ctx->pc = 0x489CD8u;
        goto label_489cd8;
    }
    ctx->pc = 0x489CD0u;
    {
        const bool branch_taken_0x489cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x489cd0) {
            ctx->pc = 0x489D7Cu;
            goto label_489d7c;
        }
    }
    ctx->pc = 0x489CD8u;
label_489cd8:
    // 0x489cd8: 0x8f82b60c  lw          $v0, -0x49F4($gp)
    ctx->pc = 0x489cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948364)));
label_489cdc:
    // 0x489cdc: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_489ce0:
    if (ctx->pc == 0x489CE0u) {
        ctx->pc = 0x489CE4u;
        goto label_489ce4;
    }
    ctx->pc = 0x489CDCu;
    {
        const bool branch_taken_0x489cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489cdc) {
            ctx->pc = 0x489D7Cu;
            goto label_489d7c;
        }
    }
    ctx->pc = 0x489CE4u;
label_489ce4:
    // 0x489ce4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x489ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_489ce8:
    // 0x489ce8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x489ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_489cec:
    // 0x489cec: 0x27a60468  addiu       $a2, $sp, 0x468
    ctx->pc = 0x489cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1128));
label_489cf0:
    // 0x489cf0: 0xc115ee8  jal         func_457BA0
label_489cf4:
    if (ctx->pc == 0x489CF4u) {
        ctx->pc = 0x489CF8u;
        goto label_489cf8;
    }
    ctx->pc = 0x489CF0u;
    SET_GPR_U32(ctx, 31, 0x489CF8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x489CF0u, 0x489CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489CF8u;
label_489cf8:
    // 0x489cf8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_489cfc:
    if (ctx->pc == 0x489CFCu) {
        ctx->pc = 0x489D00u;
        goto label_489d00;
    }
    ctx->pc = 0x489CF8u;
    {
        const bool branch_taken_0x489cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489cf8) {
            ctx->pc = 0x489D7Cu;
            goto label_489d7c;
        }
    }
    ctx->pc = 0x489D00u;
label_489d00:
    // 0x489d00: 0x8fa20470  lw          $v0, 0x470($sp)
    ctx->pc = 0x489d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1136)));
label_489d04:
    // 0x489d04: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_489d08:
    if (ctx->pc == 0x489D08u) {
        ctx->pc = 0x489D0Cu;
        goto label_489d0c;
    }
    ctx->pc = 0x489D04u;
    {
        const bool branch_taken_0x489d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489d04) {
            ctx->pc = 0x489D7Cu;
            goto label_489d7c;
        }
    }
    ctx->pc = 0x489D0Cu;
label_489d0c:
    // 0x489d0c: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x489d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_489d10:
    // 0x489d10: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x489d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_489d14:
    // 0x489d14: 0x8fa6046c  lw          $a2, 0x46C($sp)
    ctx->pc = 0x489d14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1132)));
label_489d18:
    // 0x489d18: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x489d18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_489d1c:
    // 0x489d1c: 0x24e74628  addiu       $a3, $a3, 0x4628
    ctx->pc = 0x489d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17960));
label_489d20:
    // 0x489d20: 0x240800bc  addiu       $t0, $zero, 0xBC
    ctx->pc = 0x489d20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
label_489d24:
    // 0x489d24: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x489d24u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_489d28:
    // 0x489d28: 0x25294640  addiu       $t1, $t1, 0x4640
    ctx->pc = 0x489d28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 17984));
label_489d2c:
    // 0x489d2c: 0xc113940  jal         func_44E500
label_489d30:
    if (ctx->pc == 0x489D30u) {
        ctx->pc = 0x489D34u;
        goto label_489d34;
    }
    ctx->pc = 0x489D2Cu;
    SET_GPR_U32(ctx, 31, 0x489D34u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x489D2Cu, 0x489D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489D34u;
label_489d34:
    // 0x489d34: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x489d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_489d38:
    // 0x489d38: 0x2785b618  addiu       $a1, $gp, -0x49E8
    ctx->pc = 0x489d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948376));
label_489d3c:
    // 0x489d3c: 0xc115c24  jal         func_457090
label_489d40:
    if (ctx->pc == 0x489D40u) {
        ctx->pc = 0x489D44u;
        goto label_489d44;
    }
    ctx->pc = 0x489D3Cu;
    SET_GPR_U32(ctx, 31, 0x489D44u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x489D3Cu, 0x489D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489D44u;
label_489d44:
    // 0x489d44: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x489d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_489d48:
    // 0x489d48: 0x8fa20470  lw          $v0, 0x470($sp)
    ctx->pc = 0x489d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1136)));
label_489d4c:
    // 0x489d4c: 0x40f809  jalr        $v0
label_489d50:
    if (ctx->pc == 0x489D50u) {
        ctx->pc = 0x489D54u;
        goto label_489d54;
    }
    ctx->pc = 0x489D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x489D54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489D4Cu, 0x489D54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x489D54u;
label_489d54:
    // 0x489d54: 0xaf82b60c  sw          $v0, -0x49F4($gp)
    ctx->pc = 0x489d54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948364), GPR_U32(ctx, 2));
label_489d58:
    // 0x489d58: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x489d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_489d5c:
    // 0x489d5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_489d60:
    if (ctx->pc == 0x489D60u) {
        ctx->pc = 0x489D64u;
        goto label_489d64;
    }
    ctx->pc = 0x489D5Cu;
    {
        const bool branch_taken_0x489d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489d5c) {
            ctx->pc = 0x489D6Cu;
            goto label_489d6c;
        }
    }
    ctx->pc = 0x489D64u;
label_489d64:
    // 0x489d64: 0xd  break       0
    ctx->pc = 0x489d64u;
    runtime->handleBreak(rdram, ctx);
label_489d68:
    // 0x489d68: 0x0  nop
    ctx->pc = 0x489d68u;
    // NOP
label_489d6c:
    // 0x489d6c: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x489d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_489d70:
    // 0x489d70: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x489d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_489d74:
    // 0x489d74: 0xc11392c  jal         func_44E4B0
label_489d78:
    if (ctx->pc == 0x489D78u) {
        ctx->pc = 0x489D7Cu;
        goto label_489d7c;
    }
    ctx->pc = 0x489D74u;
    SET_GPR_U32(ctx, 31, 0x489D7Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x489D74u, 0x489D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489D7Cu;
label_489d7c:
    // 0x489d7c: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x489d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_489d80:
    // 0x489d80: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x489d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_489d84:
    // 0x489d84: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x489d84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_489d88:
    // 0x489d88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x489d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_489d8c:
    // 0x489d8c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_489d90:
    if (ctx->pc == 0x489D90u) {
        ctx->pc = 0x489D94u;
        goto label_489d94;
    }
    ctx->pc = 0x489D8Cu;
    {
        const bool branch_taken_0x489d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x489d8c) {
            ctx->pc = 0x489E38u;
            goto label_489e38;
        }
    }
    ctx->pc = 0x489D94u;
label_489d94:
    // 0x489d94: 0x8f82b610  lw          $v0, -0x49F0($gp)
    ctx->pc = 0x489d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948368)));
label_489d98:
    // 0x489d98: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_489d9c:
    if (ctx->pc == 0x489D9Cu) {
        ctx->pc = 0x489DA0u;
        goto label_489da0;
    }
    ctx->pc = 0x489D98u;
    {
        const bool branch_taken_0x489d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489d98) {
            ctx->pc = 0x489E38u;
            goto label_489e38;
        }
    }
    ctx->pc = 0x489DA0u;
label_489da0:
    // 0x489da0: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x489da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_489da4:
    // 0x489da4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x489da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_489da8:
    // 0x489da8: 0x27a60458  addiu       $a2, $sp, 0x458
    ctx->pc = 0x489da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_489dac:
    // 0x489dac: 0xc115ee8  jal         func_457BA0
label_489db0:
    if (ctx->pc == 0x489DB0u) {
        ctx->pc = 0x489DB4u;
        goto label_489db4;
    }
    ctx->pc = 0x489DACu;
    SET_GPR_U32(ctx, 31, 0x489DB4u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x489DACu, 0x489DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489DB4u;
label_489db4:
    // 0x489db4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_489db8:
    if (ctx->pc == 0x489DB8u) {
        ctx->pc = 0x489DBCu;
        goto label_489dbc;
    }
    ctx->pc = 0x489DB4u;
    {
        const bool branch_taken_0x489db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489db4) {
            ctx->pc = 0x489E38u;
            goto label_489e38;
        }
    }
    ctx->pc = 0x489DBCu;
label_489dbc:
    // 0x489dbc: 0x8fa20460  lw          $v0, 0x460($sp)
    ctx->pc = 0x489dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1120)));
label_489dc0:
    // 0x489dc0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_489dc4:
    if (ctx->pc == 0x489DC4u) {
        ctx->pc = 0x489DC8u;
        goto label_489dc8;
    }
    ctx->pc = 0x489DC0u;
    {
        const bool branch_taken_0x489dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489dc0) {
            ctx->pc = 0x489E38u;
            goto label_489e38;
        }
    }
    ctx->pc = 0x489DC8u;
label_489dc8:
    // 0x489dc8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x489dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_489dcc:
    // 0x489dcc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x489dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_489dd0:
    // 0x489dd0: 0x8fa6045c  lw          $a2, 0x45C($sp)
    ctx->pc = 0x489dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1116)));
label_489dd4:
    // 0x489dd4: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x489dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_489dd8:
    // 0x489dd8: 0x24e74628  addiu       $a3, $a3, 0x4628
    ctx->pc = 0x489dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17960));
label_489ddc:
    // 0x489ddc: 0x240800bd  addiu       $t0, $zero, 0xBD
    ctx->pc = 0x489ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
label_489de0:
    // 0x489de0: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x489de0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_489de4:
    // 0x489de4: 0x25294660  addiu       $t1, $t1, 0x4660
    ctx->pc = 0x489de4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18016));
label_489de8:
    // 0x489de8: 0xc113940  jal         func_44E500
label_489dec:
    if (ctx->pc == 0x489DECu) {
        ctx->pc = 0x489DF0u;
        goto label_489df0;
    }
    ctx->pc = 0x489DE8u;
    SET_GPR_U32(ctx, 31, 0x489DF0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x489DE8u, 0x489DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489DF0u;
label_489df0:
    // 0x489df0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x489df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_489df4:
    // 0x489df4: 0x2785b618  addiu       $a1, $gp, -0x49E8
    ctx->pc = 0x489df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948376));
label_489df8:
    // 0x489df8: 0xc115c24  jal         func_457090
label_489dfc:
    if (ctx->pc == 0x489DFCu) {
        ctx->pc = 0x489E00u;
        goto label_489e00;
    }
    ctx->pc = 0x489DF8u;
    SET_GPR_U32(ctx, 31, 0x489E00u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x489DF8u, 0x489E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489E00u;
label_489e00:
    // 0x489e00: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x489e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_489e04:
    // 0x489e04: 0x8fa20460  lw          $v0, 0x460($sp)
    ctx->pc = 0x489e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1120)));
label_489e08:
    // 0x489e08: 0x40f809  jalr        $v0
label_489e0c:
    if (ctx->pc == 0x489E0Cu) {
        ctx->pc = 0x489E10u;
        goto label_489e10;
    }
    ctx->pc = 0x489E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x489E10u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489E08u, 0x489E10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x489E10u;
label_489e10:
    // 0x489e10: 0xaf82b610  sw          $v0, -0x49F0($gp)
    ctx->pc = 0x489e10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948368), GPR_U32(ctx, 2));
label_489e14:
    // 0x489e14: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x489e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_489e18:
    // 0x489e18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_489e1c:
    if (ctx->pc == 0x489E1Cu) {
        ctx->pc = 0x489E20u;
        goto label_489e20;
    }
    ctx->pc = 0x489E18u;
    {
        const bool branch_taken_0x489e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489e18) {
            ctx->pc = 0x489E28u;
            goto label_489e28;
        }
    }
    ctx->pc = 0x489E20u;
label_489e20:
    // 0x489e20: 0xd  break       0
    ctx->pc = 0x489e20u;
    runtime->handleBreak(rdram, ctx);
label_489e24:
    // 0x489e24: 0x0  nop
    ctx->pc = 0x489e24u;
    // NOP
label_489e28:
    // 0x489e28: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x489e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_489e2c:
    // 0x489e2c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x489e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_489e30:
    // 0x489e30: 0xc11392c  jal         func_44E4B0
label_489e34:
    if (ctx->pc == 0x489E34u) {
        ctx->pc = 0x489E38u;
        goto label_489e38;
    }
    ctx->pc = 0x489E30u;
    SET_GPR_U32(ctx, 31, 0x489E38u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x489E30u, 0x489E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489E38u;
label_489e38:
    // 0x489e38: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x489e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_489e3c:
    // 0x489e3c: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x489e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_489e40:
    // 0x489e40: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x489e40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_489e44:
    // 0x489e44: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x489e44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_489e48:
    // 0x489e48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x489e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_489e4c:
    // 0x489e4c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_489e50:
    if (ctx->pc == 0x489E50u) {
        ctx->pc = 0x489E54u;
        goto label_489e54;
    }
    ctx->pc = 0x489E4Cu;
    {
        const bool branch_taken_0x489e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x489e4c) {
            ctx->pc = 0x489EF8u;
            goto label_489ef8;
        }
    }
    ctx->pc = 0x489E54u;
label_489e54:
    // 0x489e54: 0x8f82b614  lw          $v0, -0x49EC($gp)
    ctx->pc = 0x489e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948372)));
label_489e58:
    // 0x489e58: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_489e5c:
    if (ctx->pc == 0x489E5Cu) {
        ctx->pc = 0x489E60u;
        goto label_489e60;
    }
    ctx->pc = 0x489E58u;
    {
        const bool branch_taken_0x489e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489e58) {
            ctx->pc = 0x489EF8u;
            goto label_489ef8;
        }
    }
    ctx->pc = 0x489E60u;
label_489e60:
    // 0x489e60: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x489e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_489e64:
    // 0x489e64: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x489e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_489e68:
    // 0x489e68: 0x27a60448  addiu       $a2, $sp, 0x448
    ctx->pc = 0x489e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1096));
label_489e6c:
    // 0x489e6c: 0xc115ee8  jal         func_457BA0
label_489e70:
    if (ctx->pc == 0x489E70u) {
        ctx->pc = 0x489E74u;
        goto label_489e74;
    }
    ctx->pc = 0x489E6Cu;
    SET_GPR_U32(ctx, 31, 0x489E74u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x489E6Cu, 0x489E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489E74u;
label_489e74:
    // 0x489e74: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_489e78:
    if (ctx->pc == 0x489E78u) {
        ctx->pc = 0x489E7Cu;
        goto label_489e7c;
    }
    ctx->pc = 0x489E74u;
    {
        const bool branch_taken_0x489e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489e74) {
            ctx->pc = 0x489EF8u;
            goto label_489ef8;
        }
    }
    ctx->pc = 0x489E7Cu;
label_489e7c:
    // 0x489e7c: 0x8fa20450  lw          $v0, 0x450($sp)
    ctx->pc = 0x489e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1104)));
label_489e80:
    // 0x489e80: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_489e84:
    if (ctx->pc == 0x489E84u) {
        ctx->pc = 0x489E88u;
        goto label_489e88;
    }
    ctx->pc = 0x489E80u;
    {
        const bool branch_taken_0x489e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489e80) {
            ctx->pc = 0x489EF8u;
            goto label_489ef8;
        }
    }
    ctx->pc = 0x489E88u;
label_489e88:
    // 0x489e88: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x489e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_489e8c:
    // 0x489e8c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x489e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_489e90:
    // 0x489e90: 0x8fa6044c  lw          $a2, 0x44C($sp)
    ctx->pc = 0x489e90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1100)));
label_489e94:
    // 0x489e94: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x489e94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_489e98:
    // 0x489e98: 0x24e74628  addiu       $a3, $a3, 0x4628
    ctx->pc = 0x489e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17960));
label_489e9c:
    // 0x489e9c: 0x240800c2  addiu       $t0, $zero, 0xC2
    ctx->pc = 0x489e9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
label_489ea0:
    // 0x489ea0: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x489ea0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_489ea4:
    // 0x489ea4: 0x25294680  addiu       $t1, $t1, 0x4680
    ctx->pc = 0x489ea4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18048));
label_489ea8:
    // 0x489ea8: 0xc113940  jal         func_44E500
label_489eac:
    if (ctx->pc == 0x489EACu) {
        ctx->pc = 0x489EB0u;
        goto label_489eb0;
    }
    ctx->pc = 0x489EA8u;
    SET_GPR_U32(ctx, 31, 0x489EB0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x489EA8u, 0x489EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489EB0u;
label_489eb0:
    // 0x489eb0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x489eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_489eb4:
    // 0x489eb4: 0x2785b618  addiu       $a1, $gp, -0x49E8
    ctx->pc = 0x489eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948376));
label_489eb8:
    // 0x489eb8: 0xc115c24  jal         func_457090
label_489ebc:
    if (ctx->pc == 0x489EBCu) {
        ctx->pc = 0x489EC0u;
        goto label_489ec0;
    }
    ctx->pc = 0x489EB8u;
    SET_GPR_U32(ctx, 31, 0x489EC0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x489EB8u, 0x489EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489EC0u;
label_489ec0:
    // 0x489ec0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x489ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_489ec4:
    // 0x489ec4: 0x8fa20450  lw          $v0, 0x450($sp)
    ctx->pc = 0x489ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1104)));
label_489ec8:
    // 0x489ec8: 0x40f809  jalr        $v0
label_489ecc:
    if (ctx->pc == 0x489ECCu) {
        ctx->pc = 0x489ED0u;
        goto label_489ed0;
    }
    ctx->pc = 0x489EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x489ED0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x489EC8u, 0x489ED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x489ED0u;
label_489ed0:
    // 0x489ed0: 0xaf82b614  sw          $v0, -0x49EC($gp)
    ctx->pc = 0x489ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948372), GPR_U32(ctx, 2));
label_489ed4:
    // 0x489ed4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x489ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_489ed8:
    // 0x489ed8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_489edc:
    if (ctx->pc == 0x489EDCu) {
        ctx->pc = 0x489EE0u;
        goto label_489ee0;
    }
    ctx->pc = 0x489ED8u;
    {
        const bool branch_taken_0x489ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x489ed8) {
            ctx->pc = 0x489EE8u;
            goto label_489ee8;
        }
    }
    ctx->pc = 0x489EE0u;
label_489ee0:
    // 0x489ee0: 0xd  break       0
    ctx->pc = 0x489ee0u;
    runtime->handleBreak(rdram, ctx);
label_489ee4:
    // 0x489ee4: 0x0  nop
    ctx->pc = 0x489ee4u;
    // NOP
label_489ee8:
    // 0x489ee8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x489ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_489eec:
    // 0x489eec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x489eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_489ef0:
    // 0x489ef0: 0xc11392c  jal         func_44E4B0
label_489ef4:
    if (ctx->pc == 0x489EF4u) {
        ctx->pc = 0x489EF8u;
        goto label_489ef8;
    }
    ctx->pc = 0x489EF0u;
    SET_GPR_U32(ctx, 31, 0x489EF8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x489EF0u, 0x489EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x489EF8u;
label_489ef8:
    // 0x489ef8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x489ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_489efc:
    // 0x489efc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x489efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_489f00:
    // 0x489f00: 0x0  nop
    ctx->pc = 0x489f00u;
    // NOP
label_489f04:
    // 0x489f04: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x489f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_489f08:
    // 0x489f08: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x489f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_489f0c:
    // 0x489f0c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x489f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_489f10:
    // 0x489f10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x489f10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_489f14:
    // 0x489f14: 0x0  nop
    ctx->pc = 0x489f14u;
    // NOP
label_489f18:
    // 0x489f18: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x489f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_489f1c:
    // 0x489f1c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x489f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_489f20:
    // 0x489f20: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x489f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_489f24:
    // 0x489f24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x489f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_489f28:
    // 0x489f28: 0x0  nop
    ctx->pc = 0x489f28u;
    // NOP
label_489f2c:
    // 0x489f2c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x489f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_489f30:
    // 0x489f30: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x489f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_489f34:
    // 0x489f34: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x489f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_489f38:
    // 0x489f38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x489f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_489f3c:
    // 0x489f3c: 0x0  nop
    ctx->pc = 0x489f3cu;
    // NOP
label_489f40:
    // 0x489f40: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x489f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_489f44:
    // 0x489f44: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x489f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_489f48:
    // 0x489f48: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x489f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_489f4c:
    // 0x489f4c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x489f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_489f50:
    // 0x489f50: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x489f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_489f54:
    // 0x489f54: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x489f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_489f58:
    // 0x489f58: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x489f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_489f5c:
    // 0x489f5c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x489f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_489f60:
    // 0x489f60: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x489f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_489f64:
    // 0x489f64: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x489f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_489f68:
    // 0x489f68: 0x1440009c  bnez        $v0, . + 4 + (0x9C << 2)
label_489f6c:
    if (ctx->pc == 0x489F6Cu) {
        ctx->pc = 0x489F70u;
        goto label_489f70;
    }
    ctx->pc = 0x489F68u;
    {
        const bool branch_taken_0x489f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x489f68) {
            ctx->pc = 0x48A1DCu;
            goto label_48a1dc;
        }
    }
    ctx->pc = 0x489F70u;
label_489f70:
    // 0x489f70: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x489f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_489f74:
    // 0x489f74: 0xc4470038  lwc1        $f7, 0x38($v0)
    ctx->pc = 0x489f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_489f78:
    // 0x489f78: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x489f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_489f7c:
    // 0x489f7c: 0xc4460038  lwc1        $f6, 0x38($v0)
    ctx->pc = 0x489f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_489f80:
    // 0x489f80: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x489f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_489f84:
    // 0x489f84: 0xc4450034  lwc1        $f5, 0x34($v0)
    ctx->pc = 0x489f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_489f88:
    // 0x489f88: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x489f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_489f8c:
    // 0x489f8c: 0xc4440034  lwc1        $f4, 0x34($v0)
    ctx->pc = 0x489f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_489f90:
    // 0x489f90: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x489f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_489f94:
    // 0x489f94: 0xc443002c  lwc1        $f3, 0x2C($v0)
    ctx->pc = 0x489f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_489f98:
    // 0x489f98: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x489f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_489f9c:
    // 0x489f9c: 0xc442002c  lwc1        $f2, 0x2C($v0)
    ctx->pc = 0x489f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_489fa0:
    // 0x489fa0: 0x8fa30490  lw          $v1, 0x490($sp)
    ctx->pc = 0x489fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_489fa4:
    // 0x489fa4: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x489fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_489fa8:
    // 0x489fa8: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x489fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_489fac:
    // 0x489fac: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x489facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_489fb0:
    // 0x489fb0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x489fb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_489fb4:
    // 0x489fb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x489fb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_489fb8:
    // 0x489fb8: 0x0  nop
    ctx->pc = 0x489fb8u;
    // NOP
label_489fbc:
    // 0x489fbc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x489fbcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_489fc0:
    // 0x489fc0: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x489fc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_489fc4:
    // 0x489fc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x489fc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_489fc8:
    // 0x489fc8: 0x0  nop
    ctx->pc = 0x489fc8u;
    // NOP
label_489fcc:
    // 0x489fcc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x489fccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_489fd0:
    // 0x489fd0: 0x4604285c  madd.s      $f1, $f5, $f4
    ctx->pc = 0x489fd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_489fd4:
    // 0x489fd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x489fd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_489fd8:
    // 0x489fd8: 0x0  nop
    ctx->pc = 0x489fd8u;
    // NOP
label_489fdc:
    // 0x489fdc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x489fdcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_489fe0:
    // 0x489fe0: 0x4606385c  madd.s      $f1, $f7, $f6
    ctx->pc = 0x489fe0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[7], ctx->f[6]));
label_489fe4:
    // 0x489fe4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x489fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_489fe8:
    // 0x489fe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x489fe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_489fec:
    // 0x489fec: 0x0  nop
    ctx->pc = 0x489fecu;
    // NOP
label_489ff0:
    // 0x489ff0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x489ff0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_489ff4:
    // 0x489ff4: 0xe7a0048c  swc1        $f0, 0x48C($sp)
    ctx->pc = 0x489ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1164), bits); }
label_489ff8:
    // 0x489ff8: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x489ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_489ffc:
    // 0x489ffc: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x489ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a000:
    // 0x48a000: 0xc7a0048c  lwc1        $f0, 0x48C($sp)
    ctx->pc = 0x48a000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a004:
    // 0x48a004: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48a004u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48a008:
    // 0x48a008: 0xe7a00438  swc1        $f0, 0x438($sp)
    ctx->pc = 0x48a008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1080), bits); }
label_48a00c:
    // 0x48a00c: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a010:
    // 0x48a010: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x48a010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a014:
    // 0x48a014: 0xc7a0048c  lwc1        $f0, 0x48C($sp)
    ctx->pc = 0x48a014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a018:
    // 0x48a018: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48a018u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48a01c:
    // 0x48a01c: 0xe7a0043c  swc1        $f0, 0x43C($sp)
    ctx->pc = 0x48a01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1084), bits); }
label_48a020:
    // 0x48a020: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a024:
    // 0x48a024: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x48a024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a028:
    // 0x48a028: 0xc7a0048c  lwc1        $f0, 0x48C($sp)
    ctx->pc = 0x48a028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a02c:
    // 0x48a02c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48a02cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48a030:
    // 0x48a030: 0xe7a00440  swc1        $f0, 0x440($sp)
    ctx->pc = 0x48a030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
label_48a034:
    // 0x48a034: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a038:
    // 0x48a038: 0xc7a10438  lwc1        $f1, 0x438($sp)
    ctx->pc = 0x48a038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a03c:
    // 0x48a03c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x48a03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a040:
    // 0x48a040: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48a040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48a044:
    // 0x48a044: 0xe7a00428  swc1        $f0, 0x428($sp)
    ctx->pc = 0x48a044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1064), bits); }
label_48a048:
    // 0x48a048: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a04c:
    // 0x48a04c: 0xc7a1043c  lwc1        $f1, 0x43C($sp)
    ctx->pc = 0x48a04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a050:
    // 0x48a050: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x48a050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a054:
    // 0x48a054: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48a054u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48a058:
    // 0x48a058: 0xe7a0042c  swc1        $f0, 0x42C($sp)
    ctx->pc = 0x48a058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1068), bits); }
label_48a05c:
    // 0x48a05c: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a060:
    // 0x48a060: 0xc7a10440  lwc1        $f1, 0x440($sp)
    ctx->pc = 0x48a060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a064:
    // 0x48a064: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x48a064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a068:
    // 0x48a068: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48a068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48a06c:
    // 0x48a06c: 0xe7a00430  swc1        $f0, 0x430($sp)
    ctx->pc = 0x48a06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
label_48a070:
    // 0x48a070: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a074:
    // 0x48a074: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x48a074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a078:
    // 0x48a078: 0xc7a00438  lwc1        $f0, 0x438($sp)
    ctx->pc = 0x48a078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a07c:
    // 0x48a07c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48a07cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48a080:
    // 0x48a080: 0xe7a00418  swc1        $f0, 0x418($sp)
    ctx->pc = 0x48a080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1048), bits); }
label_48a084:
    // 0x48a084: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a088:
    // 0x48a088: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x48a088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a08c:
    // 0x48a08c: 0xc7a0043c  lwc1        $f0, 0x43C($sp)
    ctx->pc = 0x48a08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a090:
    // 0x48a090: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48a090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48a094:
    // 0x48a094: 0xe7a0041c  swc1        $f0, 0x41C($sp)
    ctx->pc = 0x48a094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1052), bits); }
label_48a098:
    // 0x48a098: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a09c:
    // 0x48a09c: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x48a09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a0a0:
    // 0x48a0a0: 0xc7a00440  lwc1        $f0, 0x440($sp)
    ctx->pc = 0x48a0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a0a4:
    // 0x48a0a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48a0a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48a0a8:
    // 0x48a0a8: 0xe7a00420  swc1        $f0, 0x420($sp)
    ctx->pc = 0x48a0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1056), bits); }
label_48a0ac:
    // 0x48a0ac: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a0b0:
    // 0x48a0b0: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x48a0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a0b4:
    // 0x48a0b4: 0xc7a00440  lwc1        $f0, 0x440($sp)
    ctx->pc = 0x48a0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a0b8:
    // 0x48a0b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48a0b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48a0bc:
    // 0x48a0bc: 0xe7a00408  swc1        $f0, 0x408($sp)
    ctx->pc = 0x48a0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1032), bits); }
label_48a0c0:
    // 0x48a0c0: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a0c4:
    // 0x48a0c4: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x48a0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a0c8:
    // 0x48a0c8: 0xc7a00438  lwc1        $f0, 0x438($sp)
    ctx->pc = 0x48a0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a0cc:
    // 0x48a0cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48a0ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48a0d0:
    // 0x48a0d0: 0xe7a0040c  swc1        $f0, 0x40C($sp)
    ctx->pc = 0x48a0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1036), bits); }
label_48a0d4:
    // 0x48a0d4: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a0d8:
    // 0x48a0d8: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x48a0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a0dc:
    // 0x48a0dc: 0xc7a0043c  lwc1        $f0, 0x43C($sp)
    ctx->pc = 0x48a0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a0e0:
    // 0x48a0e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48a0e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48a0e4:
    // 0x48a0e4: 0xe7a00410  swc1        $f0, 0x410($sp)
    ctx->pc = 0x48a0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1040), bits); }
label_48a0e8:
    // 0x48a0e8: 0xc7a1041c  lwc1        $f1, 0x41C($sp)
    ctx->pc = 0x48a0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a0ec:
    // 0x48a0ec: 0xc7a00420  lwc1        $f0, 0x420($sp)
    ctx->pc = 0x48a0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a0f0:
    // 0x48a0f0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x48a0f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_48a0f4:
    // 0x48a0f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x48a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_48a0f8:
    // 0x48a0f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x48a0f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48a0fc:
    // 0x48a0fc: 0x0  nop
    ctx->pc = 0x48a0fcu;
    // NOP
label_48a100:
    // 0x48a100: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x48a100u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_48a104:
    // 0x48a104: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x48a104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_48a108:
    // 0x48a108: 0xc7a10410  lwc1        $f1, 0x410($sp)
    ctx->pc = 0x48a108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a10c:
    // 0x48a10c: 0xc7a00430  lwc1        $f0, 0x430($sp)
    ctx->pc = 0x48a10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a110:
    // 0x48a110: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x48a110u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_48a114:
    // 0x48a114: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x48a114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_48a118:
    // 0x48a118: 0xc7a1040c  lwc1        $f1, 0x40C($sp)
    ctx->pc = 0x48a118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a11c:
    // 0x48a11c: 0xc7a0042c  lwc1        $f0, 0x42C($sp)
    ctx->pc = 0x48a11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a120:
    // 0x48a120: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x48a120u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_48a124:
    // 0x48a124: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x48a124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_48a128:
    // 0x48a128: 0xc7a10410  lwc1        $f1, 0x410($sp)
    ctx->pc = 0x48a128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a12c:
    // 0x48a12c: 0xc7a00430  lwc1        $f0, 0x430($sp)
    ctx->pc = 0x48a12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a130:
    // 0x48a130: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x48a130u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_48a134:
    // 0x48a134: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x48a134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_48a138:
    // 0x48a138: 0xc7a10420  lwc1        $f1, 0x420($sp)
    ctx->pc = 0x48a138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a13c:
    // 0x48a13c: 0xc7a00418  lwc1        $f0, 0x418($sp)
    ctx->pc = 0x48a13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a140:
    // 0x48a140: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x48a140u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_48a144:
    // 0x48a144: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x48a144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_48a148:
    // 0x48a148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x48a148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48a14c:
    // 0x48a14c: 0x0  nop
    ctx->pc = 0x48a14cu;
    // NOP
label_48a150:
    // 0x48a150: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x48a150u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_48a154:
    // 0x48a154: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x48a154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_48a158:
    // 0x48a158: 0xc7a10408  lwc1        $f1, 0x408($sp)
    ctx->pc = 0x48a158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a15c:
    // 0x48a15c: 0xc7a00428  lwc1        $f0, 0x428($sp)
    ctx->pc = 0x48a15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a160:
    // 0x48a160: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x48a160u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_48a164:
    // 0x48a164: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x48a164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_48a168:
    // 0x48a168: 0xc7a1040c  lwc1        $f1, 0x40C($sp)
    ctx->pc = 0x48a168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a16c:
    // 0x48a16c: 0xc7a0042c  lwc1        $f0, 0x42C($sp)
    ctx->pc = 0x48a16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a170:
    // 0x48a170: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x48a170u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_48a174:
    // 0x48a174: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x48a174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_48a178:
    // 0x48a178: 0xc7a10408  lwc1        $f1, 0x408($sp)
    ctx->pc = 0x48a178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a17c:
    // 0x48a17c: 0xc7a00428  lwc1        $f0, 0x428($sp)
    ctx->pc = 0x48a17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a180:
    // 0x48a180: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x48a180u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_48a184:
    // 0x48a184: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x48a184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_48a188:
    // 0x48a188: 0xc7a10418  lwc1        $f1, 0x418($sp)
    ctx->pc = 0x48a188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a18c:
    // 0x48a18c: 0xc7a0041c  lwc1        $f0, 0x41C($sp)
    ctx->pc = 0x48a18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a190:
    // 0x48a190: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x48a190u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_48a194:
    // 0x48a194: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x48a194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_48a198:
    // 0x48a198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x48a198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48a19c:
    // 0x48a19c: 0x0  nop
    ctx->pc = 0x48a19cu;
    // NOP
label_48a1a0:
    // 0x48a1a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x48a1a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_48a1a4:
    // 0x48a1a4: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x48a1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_48a1a8:
    // 0x48a1a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48a1a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48a1ac:
    // 0x48a1ac: 0x0  nop
    ctx->pc = 0x48a1acu;
    // NOP
label_48a1b0:
    // 0x48a1b0: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x48a1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_48a1b4:
    // 0x48a1b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48a1b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48a1b8:
    // 0x48a1b8: 0x0  nop
    ctx->pc = 0x48a1b8u;
    // NOP
label_48a1bc:
    // 0x48a1bc: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x48a1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_48a1c0:
    // 0x48a1c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48a1c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48a1c4:
    // 0x48a1c4: 0x0  nop
    ctx->pc = 0x48a1c4u;
    // NOP
label_48a1c8:
    // 0x48a1c8: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x48a1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_48a1cc:
    // 0x48a1cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x48a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_48a1d0:
    // 0x48a1d0: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x48a1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_48a1d4:
    // 0x48a1d4: 0x1000009a  b           . + 4 + (0x9A << 2)
label_48a1d8:
    if (ctx->pc == 0x48A1D8u) {
        ctx->pc = 0x48A1DCu;
        goto label_48a1dc;
    }
    ctx->pc = 0x48A1D4u;
    {
        const bool branch_taken_0x48a1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a1d4) {
            ctx->pc = 0x48A440u;
            goto label_48a440;
        }
    }
    ctx->pc = 0x48A1DCu;
label_48a1dc:
    // 0x48a1dc: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a1e0:
    // 0x48a1e0: 0xc4470074  lwc1        $f7, 0x74($v0)
    ctx->pc = 0x48a1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_48a1e4:
    // 0x48a1e4: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a1e8:
    // 0x48a1e8: 0xc4460074  lwc1        $f6, 0x74($v0)
    ctx->pc = 0x48a1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_48a1ec:
    // 0x48a1ec: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a1f0:
    // 0x48a1f0: 0xc4450070  lwc1        $f5, 0x70($v0)
    ctx->pc = 0x48a1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_48a1f4:
    // 0x48a1f4: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a1f8:
    // 0x48a1f8: 0xc4440070  lwc1        $f4, 0x70($v0)
    ctx->pc = 0x48a1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_48a1fc:
    // 0x48a1fc: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a200:
    // 0x48a200: 0xc4430068  lwc1        $f3, 0x68($v0)
    ctx->pc = 0x48a200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_48a204:
    // 0x48a204: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a208:
    // 0x48a208: 0xc4420068  lwc1        $f2, 0x68($v0)
    ctx->pc = 0x48a208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48a20c:
    // 0x48a20c: 0x8fa30490  lw          $v1, 0x490($sp)
    ctx->pc = 0x48a20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a210:
    // 0x48a210: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a214:
    // 0x48a214: 0xc461006c  lwc1        $f1, 0x6C($v1)
    ctx->pc = 0x48a214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a218:
    // 0x48a218: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x48a218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a21c:
    // 0x48a21c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x48a21cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48a220:
    // 0x48a220: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48a220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48a224:
    // 0x48a224: 0x0  nop
    ctx->pc = 0x48a224u;
    // NOP
label_48a228:
    // 0x48a228: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x48a228u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_48a22c:
    // 0x48a22c: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x48a22cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_48a230:
    // 0x48a230: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48a230u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48a234:
    // 0x48a234: 0x0  nop
    ctx->pc = 0x48a234u;
    // NOP
label_48a238:
    // 0x48a238: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x48a238u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_48a23c:
    // 0x48a23c: 0x4604285c  madd.s      $f1, $f5, $f4
    ctx->pc = 0x48a23cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_48a240:
    // 0x48a240: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48a240u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48a244:
    // 0x48a244: 0x0  nop
    ctx->pc = 0x48a244u;
    // NOP
label_48a248:
    // 0x48a248: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x48a248u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_48a24c:
    // 0x48a24c: 0x4606385c  madd.s      $f1, $f7, $f6
    ctx->pc = 0x48a24cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[7], ctx->f[6]));
label_48a250:
    // 0x48a250: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x48a250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_48a254:
    // 0x48a254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x48a254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48a258:
    // 0x48a258: 0x0  nop
    ctx->pc = 0x48a258u;
    // NOP
label_48a25c:
    // 0x48a25c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x48a25cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_48a260:
    // 0x48a260: 0xe7a00488  swc1        $f0, 0x488($sp)
    ctx->pc = 0x48a260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1160), bits); }
label_48a264:
    // 0x48a264: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a268:
    // 0x48a268: 0xc4410068  lwc1        $f1, 0x68($v0)
    ctx->pc = 0x48a268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a26c:
    // 0x48a26c: 0xc7a00488  lwc1        $f0, 0x488($sp)
    ctx->pc = 0x48a26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a270:
    // 0x48a270: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48a270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48a274:
    // 0x48a274: 0xe7a003f8  swc1        $f0, 0x3F8($sp)
    ctx->pc = 0x48a274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1016), bits); }
label_48a278:
    // 0x48a278: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a27c:
    // 0x48a27c: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x48a27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a280:
    // 0x48a280: 0xc7a00488  lwc1        $f0, 0x488($sp)
    ctx->pc = 0x48a280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a284:
    // 0x48a284: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48a284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48a288:
    // 0x48a288: 0xe7a003fc  swc1        $f0, 0x3FC($sp)
    ctx->pc = 0x48a288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1020), bits); }
label_48a28c:
    // 0x48a28c: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a290:
    // 0x48a290: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x48a290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a294:
    // 0x48a294: 0xc7a00488  lwc1        $f0, 0x488($sp)
    ctx->pc = 0x48a294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a298:
    // 0x48a298: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48a298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48a29c:
    // 0x48a29c: 0xe7a00400  swc1        $f0, 0x400($sp)
    ctx->pc = 0x48a29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1024), bits); }
label_48a2a0:
    // 0x48a2a0: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a2a4:
    // 0x48a2a4: 0xc7a103f8  lwc1        $f1, 0x3F8($sp)
    ctx->pc = 0x48a2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a2a8:
    // 0x48a2a8: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x48a2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a2ac:
    // 0x48a2ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48a2acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48a2b0:
    // 0x48a2b0: 0xe7a003e8  swc1        $f0, 0x3E8($sp)
    ctx->pc = 0x48a2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1000), bits); }
label_48a2b4:
    // 0x48a2b4: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a2b8:
    // 0x48a2b8: 0xc7a103fc  lwc1        $f1, 0x3FC($sp)
    ctx->pc = 0x48a2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a2bc:
    // 0x48a2bc: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x48a2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a2c0:
    // 0x48a2c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48a2c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48a2c4:
    // 0x48a2c4: 0xe7a003ec  swc1        $f0, 0x3EC($sp)
    ctx->pc = 0x48a2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1004), bits); }
label_48a2c8:
    // 0x48a2c8: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a2cc:
    // 0x48a2cc: 0xc7a10400  lwc1        $f1, 0x400($sp)
    ctx->pc = 0x48a2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a2d0:
    // 0x48a2d0: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x48a2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a2d4:
    // 0x48a2d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48a2d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48a2d8:
    // 0x48a2d8: 0xe7a003f0  swc1        $f0, 0x3F0($sp)
    ctx->pc = 0x48a2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1008), bits); }
label_48a2dc:
    // 0x48a2dc: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a2e0:
    // 0x48a2e0: 0xc4410068  lwc1        $f1, 0x68($v0)
    ctx->pc = 0x48a2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a2e4:
    // 0x48a2e4: 0xc7a003f8  lwc1        $f0, 0x3F8($sp)
    ctx->pc = 0x48a2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a2e8:
    // 0x48a2e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48a2e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48a2ec:
    // 0x48a2ec: 0xe7a003d8  swc1        $f0, 0x3D8($sp)
    ctx->pc = 0x48a2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 984), bits); }
label_48a2f0:
    // 0x48a2f0: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a2f4:
    // 0x48a2f4: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x48a2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a2f8:
    // 0x48a2f8: 0xc7a003fc  lwc1        $f0, 0x3FC($sp)
    ctx->pc = 0x48a2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a2fc:
    // 0x48a2fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48a2fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48a300:
    // 0x48a300: 0xe7a003dc  swc1        $f0, 0x3DC($sp)
    ctx->pc = 0x48a300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 988), bits); }
label_48a304:
    // 0x48a304: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a308:
    // 0x48a308: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x48a308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a30c:
    // 0x48a30c: 0xc7a00400  lwc1        $f0, 0x400($sp)
    ctx->pc = 0x48a30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a310:
    // 0x48a310: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48a310u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48a314:
    // 0x48a314: 0xe7a003e0  swc1        $f0, 0x3E0($sp)
    ctx->pc = 0x48a314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 992), bits); }
label_48a318:
    // 0x48a318: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a31c:
    // 0x48a31c: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x48a31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a320:
    // 0x48a320: 0xc7a00400  lwc1        $f0, 0x400($sp)
    ctx->pc = 0x48a320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a324:
    // 0x48a324: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48a324u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48a328:
    // 0x48a328: 0xe7a003c8  swc1        $f0, 0x3C8($sp)
    ctx->pc = 0x48a328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 968), bits); }
label_48a32c:
    // 0x48a32c: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a330:
    // 0x48a330: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x48a330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a334:
    // 0x48a334: 0xc7a003f8  lwc1        $f0, 0x3F8($sp)
    ctx->pc = 0x48a334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a338:
    // 0x48a338: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48a338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48a33c:
    // 0x48a33c: 0xe7a003cc  swc1        $f0, 0x3CC($sp)
    ctx->pc = 0x48a33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 972), bits); }
label_48a340:
    // 0x48a340: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a344:
    // 0x48a344: 0xc4410068  lwc1        $f1, 0x68($v0)
    ctx->pc = 0x48a344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a348:
    // 0x48a348: 0xc7a003fc  lwc1        $f0, 0x3FC($sp)
    ctx->pc = 0x48a348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a34c:
    // 0x48a34c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48a34cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48a350:
    // 0x48a350: 0xe7a003d0  swc1        $f0, 0x3D0($sp)
    ctx->pc = 0x48a350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 976), bits); }
label_48a354:
    // 0x48a354: 0xc7a103dc  lwc1        $f1, 0x3DC($sp)
    ctx->pc = 0x48a354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a358:
    // 0x48a358: 0xc7a003e0  lwc1        $f0, 0x3E0($sp)
    ctx->pc = 0x48a358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a35c:
    // 0x48a35c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x48a35cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_48a360:
    // 0x48a360: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x48a360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_48a364:
    // 0x48a364: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x48a364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48a368:
    // 0x48a368: 0x0  nop
    ctx->pc = 0x48a368u;
    // NOP
label_48a36c:
    // 0x48a36c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x48a36cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_48a370:
    // 0x48a370: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x48a370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_48a374:
    // 0x48a374: 0xc7a103d0  lwc1        $f1, 0x3D0($sp)
    ctx->pc = 0x48a374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a378:
    // 0x48a378: 0xc7a003f0  lwc1        $f0, 0x3F0($sp)
    ctx->pc = 0x48a378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a37c:
    // 0x48a37c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x48a37cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_48a380:
    // 0x48a380: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x48a380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_48a384:
    // 0x48a384: 0xc7a103cc  lwc1        $f1, 0x3CC($sp)
    ctx->pc = 0x48a384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a388:
    // 0x48a388: 0xc7a003ec  lwc1        $f0, 0x3EC($sp)
    ctx->pc = 0x48a388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a38c:
    // 0x48a38c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x48a38cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_48a390:
    // 0x48a390: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x48a390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_48a394:
    // 0x48a394: 0xc7a103d0  lwc1        $f1, 0x3D0($sp)
    ctx->pc = 0x48a394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a398:
    // 0x48a398: 0xc7a003f0  lwc1        $f0, 0x3F0($sp)
    ctx->pc = 0x48a398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a39c:
    // 0x48a39c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x48a39cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_48a3a0:
    // 0x48a3a0: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x48a3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_48a3a4:
    // 0x48a3a4: 0xc7a103e0  lwc1        $f1, 0x3E0($sp)
    ctx->pc = 0x48a3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a3a8:
    // 0x48a3a8: 0xc7a003d8  lwc1        $f0, 0x3D8($sp)
    ctx->pc = 0x48a3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a3ac:
    // 0x48a3ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x48a3acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_48a3b0:
    // 0x48a3b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x48a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_48a3b4:
    // 0x48a3b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x48a3b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48a3b8:
    // 0x48a3b8: 0x0  nop
    ctx->pc = 0x48a3b8u;
    // NOP
label_48a3bc:
    // 0x48a3bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x48a3bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_48a3c0:
    // 0x48a3c0: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x48a3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_48a3c4:
    // 0x48a3c4: 0xc7a103c8  lwc1        $f1, 0x3C8($sp)
    ctx->pc = 0x48a3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a3c8:
    // 0x48a3c8: 0xc7a003e8  lwc1        $f0, 0x3E8($sp)
    ctx->pc = 0x48a3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a3cc:
    // 0x48a3cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x48a3ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_48a3d0:
    // 0x48a3d0: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x48a3d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_48a3d4:
    // 0x48a3d4: 0xc7a103cc  lwc1        $f1, 0x3CC($sp)
    ctx->pc = 0x48a3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a3d8:
    // 0x48a3d8: 0xc7a003ec  lwc1        $f0, 0x3EC($sp)
    ctx->pc = 0x48a3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a3dc:
    // 0x48a3dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x48a3dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_48a3e0:
    // 0x48a3e0: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x48a3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_48a3e4:
    // 0x48a3e4: 0xc7a103c8  lwc1        $f1, 0x3C8($sp)
    ctx->pc = 0x48a3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a3e8:
    // 0x48a3e8: 0xc7a003e8  lwc1        $f0, 0x3E8($sp)
    ctx->pc = 0x48a3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a3ec:
    // 0x48a3ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x48a3ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_48a3f0:
    // 0x48a3f0: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x48a3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_48a3f4:
    // 0x48a3f4: 0xc7a103d8  lwc1        $f1, 0x3D8($sp)
    ctx->pc = 0x48a3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a3f8:
    // 0x48a3f8: 0xc7a003dc  lwc1        $f0, 0x3DC($sp)
    ctx->pc = 0x48a3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a3fc:
    // 0x48a3fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x48a3fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_48a400:
    // 0x48a400: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x48a400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_48a404:
    // 0x48a404: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x48a404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48a408:
    // 0x48a408: 0x0  nop
    ctx->pc = 0x48a408u;
    // NOP
label_48a40c:
    // 0x48a40c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x48a40cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_48a410:
    // 0x48a410: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x48a410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_48a414:
    // 0x48a414: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48a414u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48a418:
    // 0x48a418: 0x0  nop
    ctx->pc = 0x48a418u;
    // NOP
label_48a41c:
    // 0x48a41c: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x48a41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_48a420:
    // 0x48a420: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48a420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48a424:
    // 0x48a424: 0x0  nop
    ctx->pc = 0x48a424u;
    // NOP
label_48a428:
    // 0x48a428: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x48a428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_48a42c:
    // 0x48a42c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48a42cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48a430:
    // 0x48a430: 0x0  nop
    ctx->pc = 0x48a430u;
    // NOP
label_48a434:
    // 0x48a434: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x48a434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_48a438:
    // 0x48a438: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x48a438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_48a43c:
    // 0x48a43c: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x48a43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_48a440:
    // 0x48a440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48a440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48a444:
    // 0x48a444: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x48a444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_48a448:
    // 0x48a448: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x48a448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_48a44c:
    // 0x48a44c: 0xc103df4  jal         func_40F7D0
label_48a450:
    if (ctx->pc == 0x48A450u) {
        ctx->pc = 0x48A454u;
        goto label_48a454;
    }
    ctx->pc = 0x48A44Cu;
    SET_GPR_U32(ctx, 31, 0x48A454u);
    ctx->pc = 0x40F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F7D0u, 0x48A44Cu, 0x48A454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A454u;
label_48a454:
    // 0x48a454: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a458:
    // 0x48a458: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x48a458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_48a45c:
    // 0x48a45c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_48a460:
    if (ctx->pc == 0x48A460u) {
        ctx->pc = 0x48A464u;
        goto label_48a464;
    }
    ctx->pc = 0x48A45Cu;
    {
        const bool branch_taken_0x48a45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48a45c) {
            ctx->pc = 0x48A480u;
            goto label_48a480;
        }
    }
    ctx->pc = 0x48A464u;
label_48a464:
    // 0x48a464: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a468:
    // 0x48a468: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x48a468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_48a46c:
    // 0x48a46c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x48a46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_48a470:
    // 0x48a470: 0xc041d58  jal         func_107560
label_48a474:
    if (ctx->pc == 0x48A474u) {
        ctx->pc = 0x48A478u;
        goto label_48a478;
    }
    ctx->pc = 0x48A470u;
    SET_GPR_U32(ctx, 31, 0x48A478u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x48A470u, 0x48A478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A478u;
label_48a478:
    // 0x48a478: 0x10000006  b           . + 4 + (0x6 << 2)
label_48a47c:
    if (ctx->pc == 0x48A47Cu) {
        ctx->pc = 0x48A480u;
        goto label_48a480;
    }
    ctx->pc = 0x48A478u;
    {
        const bool branch_taken_0x48a478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a478) {
            ctx->pc = 0x48A494u;
            goto label_48a494;
        }
    }
    ctx->pc = 0x48A480u;
label_48a480:
    // 0x48a480: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a484:
    // 0x48a484: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x48a484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_48a488:
    // 0x48a488: 0x2445005c  addiu       $a1, $v0, 0x5C
    ctx->pc = 0x48a488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
label_48a48c:
    // 0x48a48c: 0xc041d58  jal         func_107560
label_48a490:
    if (ctx->pc == 0x48A490u) {
        ctx->pc = 0x48A494u;
        goto label_48a494;
    }
    ctx->pc = 0x48A48Cu;
    SET_GPR_U32(ctx, 31, 0x48A494u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x48A48Cu, 0x48A494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A494u;
label_48a494:
    // 0x48a494: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48a494u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48a498:
    // 0x48a498: 0x0  nop
    ctx->pc = 0x48a498u;
    // NOP
label_48a49c:
    // 0x48a49c: 0xe7a00484  swc1        $f0, 0x484($sp)
    ctx->pc = 0x48a49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1156), bits); }
label_48a4a0:
    // 0x48a4a0: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a4a4:
    // 0x48a4a4: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x48a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_48a4a8:
    // 0x48a4a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_48a4ac:
    if (ctx->pc == 0x48A4ACu) {
        ctx->pc = 0x48A4B0u;
        goto label_48a4b0;
    }
    ctx->pc = 0x48A4A8u;
    {
        const bool branch_taken_0x48a4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48a4a8) {
            ctx->pc = 0x48A4C4u;
            goto label_48a4c4;
        }
    }
    ctx->pc = 0x48A4B0u;
label_48a4b0:
    // 0x48a4b0: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a4b4:
    // 0x48a4b4: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x48a4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a4b8:
    // 0x48a4b8: 0xe7a00484  swc1        $f0, 0x484($sp)
    ctx->pc = 0x48a4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1156), bits); }
label_48a4bc:
    // 0x48a4bc: 0x10000004  b           . + 4 + (0x4 << 2)
label_48a4c0:
    if (ctx->pc == 0x48A4C0u) {
        ctx->pc = 0x48A4C4u;
        goto label_48a4c4;
    }
    ctx->pc = 0x48A4BCu;
    {
        const bool branch_taken_0x48a4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a4bc) {
            ctx->pc = 0x48A4D0u;
            goto label_48a4d0;
        }
    }
    ctx->pc = 0x48A4C4u;
label_48a4c4:
    // 0x48a4c4: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a4c8:
    // 0x48a4c8: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x48a4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a4cc:
    // 0x48a4cc: 0xe7a00484  swc1        $f0, 0x484($sp)
    ctx->pc = 0x48a4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1156), bits); }
label_48a4d0:
    // 0x48a4d0: 0xc7a10484  lwc1        $f1, 0x484($sp)
    ctx->pc = 0x48a4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a4d4:
    // 0x48a4d4: 0xc7808040  lwc1        $f0, -0x7FC0($gp)
    ctx->pc = 0x48a4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a4d8:
    // 0x48a4d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x48a4d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48a4dc:
    // 0x48a4dc: 0xe7a00484  swc1        $f0, 0x484($sp)
    ctx->pc = 0x48a4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1156), bits); }
label_48a4e0:
    // 0x48a4e0: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a4e4:
    // 0x48a4e4: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x48a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_48a4e8:
    // 0x48a4e8: 0x24430068  addiu       $v1, $v0, 0x68
    ctx->pc = 0x48a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_48a4ec:
    // 0x48a4ec: 0x27a203c0  addiu       $v0, $sp, 0x3C0
    ctx->pc = 0x48a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_48a4f0:
    // 0x48a4f0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x48a4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a4f4:
    // 0x48a4f4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x48a4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a4f8:
    // 0x48a4f8: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x48a4f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_48a4fc:
    // 0x48a4fc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x48a4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_48a500:
    // 0x48a500: 0xc7a10484  lwc1        $f1, 0x484($sp)
    ctx->pc = 0x48a500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a504:
    // 0x48a504: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48a504u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48a508:
    // 0x48a508: 0x0  nop
    ctx->pc = 0x48a508u;
    // NOP
label_48a50c:
    // 0x48a50c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x48a50cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_48a510:
    // 0x48a510: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_48a514:
    if (ctx->pc == 0x48A514u) {
        ctx->pc = 0x48A518u;
        goto label_48a518;
    }
    ctx->pc = 0x48A510u;
    {
        const bool branch_taken_0x48a510 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x48a510) {
            ctx->pc = 0x48A528u;
            goto label_48a528;
        }
    }
    ctx->pc = 0x48A518u;
label_48a518:
    // 0x48a518: 0xc7a00484  lwc1        $f0, 0x484($sp)
    ctx->pc = 0x48a518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a51c:
    // 0x48a51c: 0xe7a00480  swc1        $f0, 0x480($sp)
    ctx->pc = 0x48a51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1152), bits); }
label_48a520:
    // 0x48a520: 0x10000004  b           . + 4 + (0x4 << 2)
label_48a524:
    if (ctx->pc == 0x48A524u) {
        ctx->pc = 0x48A528u;
        goto label_48a528;
    }
    ctx->pc = 0x48A520u;
    {
        const bool branch_taken_0x48a520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a520) {
            ctx->pc = 0x48A534u;
            goto label_48a534;
        }
    }
    ctx->pc = 0x48A528u;
label_48a528:
    // 0x48a528: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48a528u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48a52c:
    // 0x48a52c: 0x0  nop
    ctx->pc = 0x48a52cu;
    // NOP
label_48a530:
    // 0x48a530: 0xe7a00480  swc1        $f0, 0x480($sp)
    ctx->pc = 0x48a530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1152), bits); }
label_48a534:
    // 0x48a534: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x48a534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_48a538:
    // 0x48a538: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x48a538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_48a53c:
    // 0x48a53c: 0xc7a00480  lwc1        $f0, 0x480($sp)
    ctx->pc = 0x48a53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a540:
    // 0x48a540: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x48a540u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_48a544:
    // 0x48a544: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_48a548:
    if (ctx->pc == 0x48A548u) {
        ctx->pc = 0x48A54Cu;
        goto label_48a54c;
    }
    ctx->pc = 0x48A544u;
    {
        const bool branch_taken_0x48a544 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x48a544) {
            ctx->pc = 0x48A564u;
            goto label_48a564;
        }
    }
    ctx->pc = 0x48A54Cu;
label_48a54c:
    // 0x48a54c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x48a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_48a550:
    // 0x48a550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x48a550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48a554:
    // 0x48a554: 0x0  nop
    ctx->pc = 0x48a554u;
    // NOP
label_48a558:
    // 0x48a558: 0xe7a0047c  swc1        $f0, 0x47C($sp)
    ctx->pc = 0x48a558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1148), bits); }
label_48a55c:
    // 0x48a55c: 0x10000010  b           . + 4 + (0x10 << 2)
label_48a560:
    if (ctx->pc == 0x48A560u) {
        ctx->pc = 0x48A564u;
        goto label_48a564;
    }
    ctx->pc = 0x48A55Cu;
    {
        const bool branch_taken_0x48a55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a55c) {
            ctx->pc = 0x48A5A0u;
            goto label_48a5a0;
        }
    }
    ctx->pc = 0x48A564u;
label_48a564:
    // 0x48a564: 0xc7a10484  lwc1        $f1, 0x484($sp)
    ctx->pc = 0x48a564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a568:
    // 0x48a568: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48a568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48a56c:
    // 0x48a56c: 0x0  nop
    ctx->pc = 0x48a56cu;
    // NOP
label_48a570:
    // 0x48a570: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x48a570u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_48a574:
    // 0x48a574: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_48a578:
    if (ctx->pc == 0x48A578u) {
        ctx->pc = 0x48A57Cu;
        goto label_48a57c;
    }
    ctx->pc = 0x48A574u;
    {
        const bool branch_taken_0x48a574 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x48a574) {
            ctx->pc = 0x48A58Cu;
            goto label_48a58c;
        }
    }
    ctx->pc = 0x48A57Cu;
label_48a57c:
    // 0x48a57c: 0xc7a00484  lwc1        $f0, 0x484($sp)
    ctx->pc = 0x48a57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a580:
    // 0x48a580: 0xe7a00478  swc1        $f0, 0x478($sp)
    ctx->pc = 0x48a580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1144), bits); }
label_48a584:
    // 0x48a584: 0x10000004  b           . + 4 + (0x4 << 2)
label_48a588:
    if (ctx->pc == 0x48A588u) {
        ctx->pc = 0x48A58Cu;
        goto label_48a58c;
    }
    ctx->pc = 0x48A584u;
    {
        const bool branch_taken_0x48a584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a584) {
            ctx->pc = 0x48A598u;
            goto label_48a598;
        }
    }
    ctx->pc = 0x48A58Cu;
label_48a58c:
    // 0x48a58c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x48a58cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_48a590:
    // 0x48a590: 0x0  nop
    ctx->pc = 0x48a590u;
    // NOP
label_48a594:
    // 0x48a594: 0xe7a00478  swc1        $f0, 0x478($sp)
    ctx->pc = 0x48a594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1144), bits); }
label_48a598:
    // 0x48a598: 0xc7a00478  lwc1        $f0, 0x478($sp)
    ctx->pc = 0x48a598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a59c:
    // 0x48a59c: 0xe7a0047c  swc1        $f0, 0x47C($sp)
    ctx->pc = 0x48a59cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1148), bits); }
label_48a5a0:
    // 0x48a5a0: 0xc7a0047c  lwc1        $f0, 0x47C($sp)
    ctx->pc = 0x48a5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a5a4:
    // 0x48a5a4: 0xe7a00484  swc1        $f0, 0x484($sp)
    ctx->pc = 0x48a5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1156), bits); }
label_48a5a8:
    // 0x48a5a8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x48a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_48a5ac:
    // 0x48a5ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x48a5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_48a5b0:
    // 0x48a5b0: 0xc7a00484  lwc1        $f0, 0x484($sp)
    ctx->pc = 0x48a5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a5b4:
    // 0x48a5b4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x48a5b4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_48a5b8:
    // 0x48a5b8: 0x0  nop
    ctx->pc = 0x48a5b8u;
    // NOP
label_48a5bc:
    // 0x48a5bc: 0xe7a00484  swc1        $f0, 0x484($sp)
    ctx->pc = 0x48a5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1156), bits); }
label_48a5c0:
    // 0x48a5c0: 0xc7ac0484  lwc1        $f12, 0x484($sp)
    ctx->pc = 0x48a5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_48a5c4:
    // 0x48a5c4: 0xc0c39a0  jal         func_30E680
label_48a5c8:
    if (ctx->pc == 0x48A5C8u) {
        ctx->pc = 0x48A5CCu;
        goto label_48a5cc;
    }
    ctx->pc = 0x48A5C4u;
    SET_GPR_U32(ctx, 31, 0x48A5CCu);
    ctx->pc = 0x30E680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E680u, 0x48A5C4u, 0x48A5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A5CCu;
label_48a5cc:
    // 0x48a5cc: 0xe7a003b8  swc1        $f0, 0x3B8($sp)
    ctx->pc = 0x48a5ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 952), bits); }
label_48a5d0:
    // 0x48a5d0: 0xc7a103b8  lwc1        $f1, 0x3B8($sp)
    ctx->pc = 0x48a5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48a5d4:
    // 0x48a5d4: 0xc7a003c4  lwc1        $f0, 0x3C4($sp)
    ctx->pc = 0x48a5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a5d8:
    // 0x48a5d8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x48a5d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_48a5dc:
    // 0x48a5dc: 0xc7a003c0  lwc1        $f0, 0x3C0($sp)
    ctx->pc = 0x48a5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48a5e0:
    // 0x48a5e0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x48a5e0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_48a5e4:
    // 0x48a5e4: 0xe7a003bc  swc1        $f0, 0x3BC($sp)
    ctx->pc = 0x48a5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 956), bits); }
label_48a5e8:
    // 0x48a5e8: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a5ec:
    // 0x48a5ec: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x48a5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_48a5f0:
    // 0x48a5f0: 0x27a503b8  addiu       $a1, $sp, 0x3B8
    ctx->pc = 0x48a5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 952));
label_48a5f4:
    // 0x48a5f4: 0xc105fee  jal         func_417FB8
label_48a5f8:
    if (ctx->pc == 0x48A5F8u) {
        ctx->pc = 0x48A5FCu;
        goto label_48a5fc;
    }
    ctx->pc = 0x48A5F4u;
    SET_GPR_U32(ctx, 31, 0x48A5FCu);
    ctx->pc = 0x417FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417FB8u, 0x48A5F4u, 0x48A5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A5FCu;
label_48a5fc:
    // 0x48a5fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48a5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48a600:
    // 0x48a600: 0xc103eb2  jal         func_40FAC8
label_48a604:
    if (ctx->pc == 0x48A604u) {
        ctx->pc = 0x48A608u;
        goto label_48a608;
    }
    ctx->pc = 0x48A600u;
    SET_GPR_U32(ctx, 31, 0x48A608u);
    ctx->pc = 0x40FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FAC8u, 0x48A600u, 0x48A608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A608u;
label_48a608:
    // 0x48a608: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x48a608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a60c:
    // 0x48a60c: 0x8c44007c  lw          $a0, 0x7C($v0)
    ctx->pc = 0x48a60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_48a610:
    // 0x48a610: 0xc106794  jal         func_419E50
label_48a614:
    if (ctx->pc == 0x48A614u) {
        ctx->pc = 0x48A618u;
        goto label_48a618;
    }
    ctx->pc = 0x48A610u;
    SET_GPR_U32(ctx, 31, 0x48A618u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x48A610u, 0x48A618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A618u;
label_48a618:
    // 0x48a618: 0x8fa30490  lw          $v1, 0x490($sp)
    ctx->pc = 0x48a618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
label_48a61c:
    // 0x48a61c: 0xac60008c  sw          $zero, 0x8C($v1)
    ctx->pc = 0x48a61cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 0));
label_48a620:
    // 0x48a620: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48a620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_48a624:
    // 0x48a624: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48a624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48a628:
    // 0x48a628: 0x27bd04a0  addiu       $sp, $sp, 0x4A0
    ctx->pc = 0x48a628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
label_48a62c:
    // 0x48a62c: 0x3e00008  jr          $ra
label_48a630:
    if (ctx->pc == 0x48A630u) {
        ctx->pc = 0x48A634u;
        goto label_48a634;
    }
    ctx->pc = 0x48A62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48A62Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48A634u;
label_48a634:
    // 0x48a634: 0x0  nop
    ctx->pc = 0x48a634u;
    // NOP
label_48a638:
    // 0x48a638: 0x0  nop
    ctx->pc = 0x48a638u;
    // NOP
label_48a63c:
    // 0x48a63c: 0x0  nop
    ctx->pc = 0x48a63cu;
    // NOP
    ctx->pc = 0x48a640u;
}
