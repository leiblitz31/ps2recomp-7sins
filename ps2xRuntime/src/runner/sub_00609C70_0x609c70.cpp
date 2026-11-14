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

// Function: sub_00609C70
// Address: 0x609c70 - 0x60a900
void sub_00609C70_0x609c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00609C70_0x609c70");
#endif

    switch (ctx->pc) {
        case 0x609c70u: goto label_609c70;
        case 0x609c74u: goto label_609c74;
        case 0x609c78u: goto label_609c78;
        case 0x609c7cu: goto label_609c7c;
        case 0x609c80u: goto label_609c80;
        case 0x609c84u: goto label_609c84;
        case 0x609c88u: goto label_609c88;
        case 0x609c8cu: goto label_609c8c;
        case 0x609c90u: goto label_609c90;
        case 0x609c94u: goto label_609c94;
        case 0x609c98u: goto label_609c98;
        case 0x609c9cu: goto label_609c9c;
        case 0x609ca0u: goto label_609ca0;
        case 0x609ca4u: goto label_609ca4;
        case 0x609ca8u: goto label_609ca8;
        case 0x609cacu: goto label_609cac;
        case 0x609cb0u: goto label_609cb0;
        case 0x609cb4u: goto label_609cb4;
        case 0x609cb8u: goto label_609cb8;
        case 0x609cbcu: goto label_609cbc;
        case 0x609cc0u: goto label_609cc0;
        case 0x609cc4u: goto label_609cc4;
        case 0x609cc8u: goto label_609cc8;
        case 0x609cccu: goto label_609ccc;
        case 0x609cd0u: goto label_609cd0;
        case 0x609cd4u: goto label_609cd4;
        case 0x609cd8u: goto label_609cd8;
        case 0x609cdcu: goto label_609cdc;
        case 0x609ce0u: goto label_609ce0;
        case 0x609ce4u: goto label_609ce4;
        case 0x609ce8u: goto label_609ce8;
        case 0x609cecu: goto label_609cec;
        case 0x609cf0u: goto label_609cf0;
        case 0x609cf4u: goto label_609cf4;
        case 0x609cf8u: goto label_609cf8;
        case 0x609cfcu: goto label_609cfc;
        case 0x609d00u: goto label_609d00;
        case 0x609d04u: goto label_609d04;
        case 0x609d08u: goto label_609d08;
        case 0x609d0cu: goto label_609d0c;
        case 0x609d10u: goto label_609d10;
        case 0x609d14u: goto label_609d14;
        case 0x609d18u: goto label_609d18;
        case 0x609d1cu: goto label_609d1c;
        case 0x609d20u: goto label_609d20;
        case 0x609d24u: goto label_609d24;
        case 0x609d28u: goto label_609d28;
        case 0x609d2cu: goto label_609d2c;
        case 0x609d30u: goto label_609d30;
        case 0x609d34u: goto label_609d34;
        case 0x609d38u: goto label_609d38;
        case 0x609d3cu: goto label_609d3c;
        case 0x609d40u: goto label_609d40;
        case 0x609d44u: goto label_609d44;
        case 0x609d48u: goto label_609d48;
        case 0x609d4cu: goto label_609d4c;
        case 0x609d50u: goto label_609d50;
        case 0x609d54u: goto label_609d54;
        case 0x609d58u: goto label_609d58;
        case 0x609d5cu: goto label_609d5c;
        case 0x609d60u: goto label_609d60;
        case 0x609d64u: goto label_609d64;
        case 0x609d68u: goto label_609d68;
        case 0x609d6cu: goto label_609d6c;
        case 0x609d70u: goto label_609d70;
        case 0x609d74u: goto label_609d74;
        case 0x609d78u: goto label_609d78;
        case 0x609d7cu: goto label_609d7c;
        case 0x609d80u: goto label_609d80;
        case 0x609d84u: goto label_609d84;
        case 0x609d88u: goto label_609d88;
        case 0x609d8cu: goto label_609d8c;
        case 0x609d90u: goto label_609d90;
        case 0x609d94u: goto label_609d94;
        case 0x609d98u: goto label_609d98;
        case 0x609d9cu: goto label_609d9c;
        case 0x609da0u: goto label_609da0;
        case 0x609da4u: goto label_609da4;
        case 0x609da8u: goto label_609da8;
        case 0x609dacu: goto label_609dac;
        case 0x609db0u: goto label_609db0;
        case 0x609db4u: goto label_609db4;
        case 0x609db8u: goto label_609db8;
        case 0x609dbcu: goto label_609dbc;
        case 0x609dc0u: goto label_609dc0;
        case 0x609dc4u: goto label_609dc4;
        case 0x609dc8u: goto label_609dc8;
        case 0x609dccu: goto label_609dcc;
        case 0x609dd0u: goto label_609dd0;
        case 0x609dd4u: goto label_609dd4;
        case 0x609dd8u: goto label_609dd8;
        case 0x609ddcu: goto label_609ddc;
        case 0x609de0u: goto label_609de0;
        case 0x609de4u: goto label_609de4;
        case 0x609de8u: goto label_609de8;
        case 0x609decu: goto label_609dec;
        case 0x609df0u: goto label_609df0;
        case 0x609df4u: goto label_609df4;
        case 0x609df8u: goto label_609df8;
        case 0x609dfcu: goto label_609dfc;
        case 0x609e00u: goto label_609e00;
        case 0x609e04u: goto label_609e04;
        case 0x609e08u: goto label_609e08;
        case 0x609e0cu: goto label_609e0c;
        case 0x609e10u: goto label_609e10;
        case 0x609e14u: goto label_609e14;
        case 0x609e18u: goto label_609e18;
        case 0x609e1cu: goto label_609e1c;
        case 0x609e20u: goto label_609e20;
        case 0x609e24u: goto label_609e24;
        case 0x609e28u: goto label_609e28;
        case 0x609e2cu: goto label_609e2c;
        case 0x609e30u: goto label_609e30;
        case 0x609e34u: goto label_609e34;
        case 0x609e38u: goto label_609e38;
        case 0x609e3cu: goto label_609e3c;
        case 0x609e40u: goto label_609e40;
        case 0x609e44u: goto label_609e44;
        case 0x609e48u: goto label_609e48;
        case 0x609e4cu: goto label_609e4c;
        case 0x609e50u: goto label_609e50;
        case 0x609e54u: goto label_609e54;
        case 0x609e58u: goto label_609e58;
        case 0x609e5cu: goto label_609e5c;
        case 0x609e60u: goto label_609e60;
        case 0x609e64u: goto label_609e64;
        case 0x609e68u: goto label_609e68;
        case 0x609e6cu: goto label_609e6c;
        case 0x609e70u: goto label_609e70;
        case 0x609e74u: goto label_609e74;
        case 0x609e78u: goto label_609e78;
        case 0x609e7cu: goto label_609e7c;
        case 0x609e80u: goto label_609e80;
        case 0x609e84u: goto label_609e84;
        case 0x609e88u: goto label_609e88;
        case 0x609e8cu: goto label_609e8c;
        case 0x609e90u: goto label_609e90;
        case 0x609e94u: goto label_609e94;
        case 0x609e98u: goto label_609e98;
        case 0x609e9cu: goto label_609e9c;
        case 0x609ea0u: goto label_609ea0;
        case 0x609ea4u: goto label_609ea4;
        case 0x609ea8u: goto label_609ea8;
        case 0x609eacu: goto label_609eac;
        case 0x609eb0u: goto label_609eb0;
        case 0x609eb4u: goto label_609eb4;
        case 0x609eb8u: goto label_609eb8;
        case 0x609ebcu: goto label_609ebc;
        case 0x609ec0u: goto label_609ec0;
        case 0x609ec4u: goto label_609ec4;
        case 0x609ec8u: goto label_609ec8;
        case 0x609eccu: goto label_609ecc;
        case 0x609ed0u: goto label_609ed0;
        case 0x609ed4u: goto label_609ed4;
        case 0x609ed8u: goto label_609ed8;
        case 0x609edcu: goto label_609edc;
        case 0x609ee0u: goto label_609ee0;
        case 0x609ee4u: goto label_609ee4;
        case 0x609ee8u: goto label_609ee8;
        case 0x609eecu: goto label_609eec;
        case 0x609ef0u: goto label_609ef0;
        case 0x609ef4u: goto label_609ef4;
        case 0x609ef8u: goto label_609ef8;
        case 0x609efcu: goto label_609efc;
        case 0x609f00u: goto label_609f00;
        case 0x609f04u: goto label_609f04;
        case 0x609f08u: goto label_609f08;
        case 0x609f0cu: goto label_609f0c;
        case 0x609f10u: goto label_609f10;
        case 0x609f14u: goto label_609f14;
        case 0x609f18u: goto label_609f18;
        case 0x609f1cu: goto label_609f1c;
        case 0x609f20u: goto label_609f20;
        case 0x609f24u: goto label_609f24;
        case 0x609f28u: goto label_609f28;
        case 0x609f2cu: goto label_609f2c;
        case 0x609f30u: goto label_609f30;
        case 0x609f34u: goto label_609f34;
        case 0x609f38u: goto label_609f38;
        case 0x609f3cu: goto label_609f3c;
        case 0x609f40u: goto label_609f40;
        case 0x609f44u: goto label_609f44;
        case 0x609f48u: goto label_609f48;
        case 0x609f4cu: goto label_609f4c;
        case 0x609f50u: goto label_609f50;
        case 0x609f54u: goto label_609f54;
        case 0x609f58u: goto label_609f58;
        case 0x609f5cu: goto label_609f5c;
        case 0x609f60u: goto label_609f60;
        case 0x609f64u: goto label_609f64;
        case 0x609f68u: goto label_609f68;
        case 0x609f6cu: goto label_609f6c;
        case 0x609f70u: goto label_609f70;
        case 0x609f74u: goto label_609f74;
        case 0x609f78u: goto label_609f78;
        case 0x609f7cu: goto label_609f7c;
        case 0x609f80u: goto label_609f80;
        case 0x609f84u: goto label_609f84;
        case 0x609f88u: goto label_609f88;
        case 0x609f8cu: goto label_609f8c;
        case 0x609f90u: goto label_609f90;
        case 0x609f94u: goto label_609f94;
        case 0x609f98u: goto label_609f98;
        case 0x609f9cu: goto label_609f9c;
        case 0x609fa0u: goto label_609fa0;
        case 0x609fa4u: goto label_609fa4;
        case 0x609fa8u: goto label_609fa8;
        case 0x609facu: goto label_609fac;
        case 0x609fb0u: goto label_609fb0;
        case 0x609fb4u: goto label_609fb4;
        case 0x609fb8u: goto label_609fb8;
        case 0x609fbcu: goto label_609fbc;
        case 0x609fc0u: goto label_609fc0;
        case 0x609fc4u: goto label_609fc4;
        case 0x609fc8u: goto label_609fc8;
        case 0x609fccu: goto label_609fcc;
        case 0x609fd0u: goto label_609fd0;
        case 0x609fd4u: goto label_609fd4;
        case 0x609fd8u: goto label_609fd8;
        case 0x609fdcu: goto label_609fdc;
        case 0x609fe0u: goto label_609fe0;
        case 0x609fe4u: goto label_609fe4;
        case 0x609fe8u: goto label_609fe8;
        case 0x609fecu: goto label_609fec;
        case 0x609ff0u: goto label_609ff0;
        case 0x609ff4u: goto label_609ff4;
        case 0x609ff8u: goto label_609ff8;
        case 0x609ffcu: goto label_609ffc;
        case 0x60a000u: goto label_60a000;
        case 0x60a004u: goto label_60a004;
        case 0x60a008u: goto label_60a008;
        case 0x60a00cu: goto label_60a00c;
        case 0x60a010u: goto label_60a010;
        case 0x60a014u: goto label_60a014;
        case 0x60a018u: goto label_60a018;
        case 0x60a01cu: goto label_60a01c;
        case 0x60a020u: goto label_60a020;
        case 0x60a024u: goto label_60a024;
        case 0x60a028u: goto label_60a028;
        case 0x60a02cu: goto label_60a02c;
        case 0x60a030u: goto label_60a030;
        case 0x60a034u: goto label_60a034;
        case 0x60a038u: goto label_60a038;
        case 0x60a03cu: goto label_60a03c;
        case 0x60a040u: goto label_60a040;
        case 0x60a044u: goto label_60a044;
        case 0x60a048u: goto label_60a048;
        case 0x60a04cu: goto label_60a04c;
        case 0x60a050u: goto label_60a050;
        case 0x60a054u: goto label_60a054;
        case 0x60a058u: goto label_60a058;
        case 0x60a05cu: goto label_60a05c;
        case 0x60a060u: goto label_60a060;
        case 0x60a064u: goto label_60a064;
        case 0x60a068u: goto label_60a068;
        case 0x60a06cu: goto label_60a06c;
        case 0x60a070u: goto label_60a070;
        case 0x60a074u: goto label_60a074;
        case 0x60a078u: goto label_60a078;
        case 0x60a07cu: goto label_60a07c;
        case 0x60a080u: goto label_60a080;
        case 0x60a084u: goto label_60a084;
        case 0x60a088u: goto label_60a088;
        case 0x60a08cu: goto label_60a08c;
        case 0x60a090u: goto label_60a090;
        case 0x60a094u: goto label_60a094;
        case 0x60a098u: goto label_60a098;
        case 0x60a09cu: goto label_60a09c;
        case 0x60a0a0u: goto label_60a0a0;
        case 0x60a0a4u: goto label_60a0a4;
        case 0x60a0a8u: goto label_60a0a8;
        case 0x60a0acu: goto label_60a0ac;
        case 0x60a0b0u: goto label_60a0b0;
        case 0x60a0b4u: goto label_60a0b4;
        case 0x60a0b8u: goto label_60a0b8;
        case 0x60a0bcu: goto label_60a0bc;
        case 0x60a0c0u: goto label_60a0c0;
        case 0x60a0c4u: goto label_60a0c4;
        case 0x60a0c8u: goto label_60a0c8;
        case 0x60a0ccu: goto label_60a0cc;
        case 0x60a0d0u: goto label_60a0d0;
        case 0x60a0d4u: goto label_60a0d4;
        case 0x60a0d8u: goto label_60a0d8;
        case 0x60a0dcu: goto label_60a0dc;
        case 0x60a0e0u: goto label_60a0e0;
        case 0x60a0e4u: goto label_60a0e4;
        case 0x60a0e8u: goto label_60a0e8;
        case 0x60a0ecu: goto label_60a0ec;
        case 0x60a0f0u: goto label_60a0f0;
        case 0x60a0f4u: goto label_60a0f4;
        case 0x60a0f8u: goto label_60a0f8;
        case 0x60a0fcu: goto label_60a0fc;
        case 0x60a100u: goto label_60a100;
        case 0x60a104u: goto label_60a104;
        case 0x60a108u: goto label_60a108;
        case 0x60a10cu: goto label_60a10c;
        case 0x60a110u: goto label_60a110;
        case 0x60a114u: goto label_60a114;
        case 0x60a118u: goto label_60a118;
        case 0x60a11cu: goto label_60a11c;
        case 0x60a120u: goto label_60a120;
        case 0x60a124u: goto label_60a124;
        case 0x60a128u: goto label_60a128;
        case 0x60a12cu: goto label_60a12c;
        case 0x60a130u: goto label_60a130;
        case 0x60a134u: goto label_60a134;
        case 0x60a138u: goto label_60a138;
        case 0x60a13cu: goto label_60a13c;
        case 0x60a140u: goto label_60a140;
        case 0x60a144u: goto label_60a144;
        case 0x60a148u: goto label_60a148;
        case 0x60a14cu: goto label_60a14c;
        case 0x60a150u: goto label_60a150;
        case 0x60a154u: goto label_60a154;
        case 0x60a158u: goto label_60a158;
        case 0x60a15cu: goto label_60a15c;
        case 0x60a160u: goto label_60a160;
        case 0x60a164u: goto label_60a164;
        case 0x60a168u: goto label_60a168;
        case 0x60a16cu: goto label_60a16c;
        case 0x60a170u: goto label_60a170;
        case 0x60a174u: goto label_60a174;
        case 0x60a178u: goto label_60a178;
        case 0x60a17cu: goto label_60a17c;
        case 0x60a180u: goto label_60a180;
        case 0x60a184u: goto label_60a184;
        case 0x60a188u: goto label_60a188;
        case 0x60a18cu: goto label_60a18c;
        case 0x60a190u: goto label_60a190;
        case 0x60a194u: goto label_60a194;
        case 0x60a198u: goto label_60a198;
        case 0x60a19cu: goto label_60a19c;
        case 0x60a1a0u: goto label_60a1a0;
        case 0x60a1a4u: goto label_60a1a4;
        case 0x60a1a8u: goto label_60a1a8;
        case 0x60a1acu: goto label_60a1ac;
        case 0x60a1b0u: goto label_60a1b0;
        case 0x60a1b4u: goto label_60a1b4;
        case 0x60a1b8u: goto label_60a1b8;
        case 0x60a1bcu: goto label_60a1bc;
        case 0x60a1c0u: goto label_60a1c0;
        case 0x60a1c4u: goto label_60a1c4;
        case 0x60a1c8u: goto label_60a1c8;
        case 0x60a1ccu: goto label_60a1cc;
        case 0x60a1d0u: goto label_60a1d0;
        case 0x60a1d4u: goto label_60a1d4;
        case 0x60a1d8u: goto label_60a1d8;
        case 0x60a1dcu: goto label_60a1dc;
        case 0x60a1e0u: goto label_60a1e0;
        case 0x60a1e4u: goto label_60a1e4;
        case 0x60a1e8u: goto label_60a1e8;
        case 0x60a1ecu: goto label_60a1ec;
        case 0x60a1f0u: goto label_60a1f0;
        case 0x60a1f4u: goto label_60a1f4;
        case 0x60a1f8u: goto label_60a1f8;
        case 0x60a1fcu: goto label_60a1fc;
        case 0x60a200u: goto label_60a200;
        case 0x60a204u: goto label_60a204;
        case 0x60a208u: goto label_60a208;
        case 0x60a20cu: goto label_60a20c;
        case 0x60a210u: goto label_60a210;
        case 0x60a214u: goto label_60a214;
        case 0x60a218u: goto label_60a218;
        case 0x60a21cu: goto label_60a21c;
        case 0x60a220u: goto label_60a220;
        case 0x60a224u: goto label_60a224;
        case 0x60a228u: goto label_60a228;
        case 0x60a22cu: goto label_60a22c;
        case 0x60a230u: goto label_60a230;
        case 0x60a234u: goto label_60a234;
        case 0x60a238u: goto label_60a238;
        case 0x60a23cu: goto label_60a23c;
        case 0x60a240u: goto label_60a240;
        case 0x60a244u: goto label_60a244;
        case 0x60a248u: goto label_60a248;
        case 0x60a24cu: goto label_60a24c;
        case 0x60a250u: goto label_60a250;
        case 0x60a254u: goto label_60a254;
        case 0x60a258u: goto label_60a258;
        case 0x60a25cu: goto label_60a25c;
        case 0x60a260u: goto label_60a260;
        case 0x60a264u: goto label_60a264;
        case 0x60a268u: goto label_60a268;
        case 0x60a26cu: goto label_60a26c;
        case 0x60a270u: goto label_60a270;
        case 0x60a274u: goto label_60a274;
        case 0x60a278u: goto label_60a278;
        case 0x60a27cu: goto label_60a27c;
        case 0x60a280u: goto label_60a280;
        case 0x60a284u: goto label_60a284;
        case 0x60a288u: goto label_60a288;
        case 0x60a28cu: goto label_60a28c;
        case 0x60a290u: goto label_60a290;
        case 0x60a294u: goto label_60a294;
        case 0x60a298u: goto label_60a298;
        case 0x60a29cu: goto label_60a29c;
        case 0x60a2a0u: goto label_60a2a0;
        case 0x60a2a4u: goto label_60a2a4;
        case 0x60a2a8u: goto label_60a2a8;
        case 0x60a2acu: goto label_60a2ac;
        case 0x60a2b0u: goto label_60a2b0;
        case 0x60a2b4u: goto label_60a2b4;
        case 0x60a2b8u: goto label_60a2b8;
        case 0x60a2bcu: goto label_60a2bc;
        case 0x60a2c0u: goto label_60a2c0;
        case 0x60a2c4u: goto label_60a2c4;
        case 0x60a2c8u: goto label_60a2c8;
        case 0x60a2ccu: goto label_60a2cc;
        case 0x60a2d0u: goto label_60a2d0;
        case 0x60a2d4u: goto label_60a2d4;
        case 0x60a2d8u: goto label_60a2d8;
        case 0x60a2dcu: goto label_60a2dc;
        case 0x60a2e0u: goto label_60a2e0;
        case 0x60a2e4u: goto label_60a2e4;
        case 0x60a2e8u: goto label_60a2e8;
        case 0x60a2ecu: goto label_60a2ec;
        case 0x60a2f0u: goto label_60a2f0;
        case 0x60a2f4u: goto label_60a2f4;
        case 0x60a2f8u: goto label_60a2f8;
        case 0x60a2fcu: goto label_60a2fc;
        case 0x60a300u: goto label_60a300;
        case 0x60a304u: goto label_60a304;
        case 0x60a308u: goto label_60a308;
        case 0x60a30cu: goto label_60a30c;
        case 0x60a310u: goto label_60a310;
        case 0x60a314u: goto label_60a314;
        case 0x60a318u: goto label_60a318;
        case 0x60a31cu: goto label_60a31c;
        case 0x60a320u: goto label_60a320;
        case 0x60a324u: goto label_60a324;
        case 0x60a328u: goto label_60a328;
        case 0x60a32cu: goto label_60a32c;
        case 0x60a330u: goto label_60a330;
        case 0x60a334u: goto label_60a334;
        case 0x60a338u: goto label_60a338;
        case 0x60a33cu: goto label_60a33c;
        case 0x60a340u: goto label_60a340;
        case 0x60a344u: goto label_60a344;
        case 0x60a348u: goto label_60a348;
        case 0x60a34cu: goto label_60a34c;
        case 0x60a350u: goto label_60a350;
        case 0x60a354u: goto label_60a354;
        case 0x60a358u: goto label_60a358;
        case 0x60a35cu: goto label_60a35c;
        case 0x60a360u: goto label_60a360;
        case 0x60a364u: goto label_60a364;
        case 0x60a368u: goto label_60a368;
        case 0x60a36cu: goto label_60a36c;
        case 0x60a370u: goto label_60a370;
        case 0x60a374u: goto label_60a374;
        case 0x60a378u: goto label_60a378;
        case 0x60a37cu: goto label_60a37c;
        case 0x60a380u: goto label_60a380;
        case 0x60a384u: goto label_60a384;
        case 0x60a388u: goto label_60a388;
        case 0x60a38cu: goto label_60a38c;
        case 0x60a390u: goto label_60a390;
        case 0x60a394u: goto label_60a394;
        case 0x60a398u: goto label_60a398;
        case 0x60a39cu: goto label_60a39c;
        case 0x60a3a0u: goto label_60a3a0;
        case 0x60a3a4u: goto label_60a3a4;
        case 0x60a3a8u: goto label_60a3a8;
        case 0x60a3acu: goto label_60a3ac;
        case 0x60a3b0u: goto label_60a3b0;
        case 0x60a3b4u: goto label_60a3b4;
        case 0x60a3b8u: goto label_60a3b8;
        case 0x60a3bcu: goto label_60a3bc;
        case 0x60a3c0u: goto label_60a3c0;
        case 0x60a3c4u: goto label_60a3c4;
        case 0x60a3c8u: goto label_60a3c8;
        case 0x60a3ccu: goto label_60a3cc;
        case 0x60a3d0u: goto label_60a3d0;
        case 0x60a3d4u: goto label_60a3d4;
        case 0x60a3d8u: goto label_60a3d8;
        case 0x60a3dcu: goto label_60a3dc;
        case 0x60a3e0u: goto label_60a3e0;
        case 0x60a3e4u: goto label_60a3e4;
        case 0x60a3e8u: goto label_60a3e8;
        case 0x60a3ecu: goto label_60a3ec;
        case 0x60a3f0u: goto label_60a3f0;
        case 0x60a3f4u: goto label_60a3f4;
        case 0x60a3f8u: goto label_60a3f8;
        case 0x60a3fcu: goto label_60a3fc;
        case 0x60a400u: goto label_60a400;
        case 0x60a404u: goto label_60a404;
        case 0x60a408u: goto label_60a408;
        case 0x60a40cu: goto label_60a40c;
        case 0x60a410u: goto label_60a410;
        case 0x60a414u: goto label_60a414;
        case 0x60a418u: goto label_60a418;
        case 0x60a41cu: goto label_60a41c;
        case 0x60a420u: goto label_60a420;
        case 0x60a424u: goto label_60a424;
        case 0x60a428u: goto label_60a428;
        case 0x60a42cu: goto label_60a42c;
        case 0x60a430u: goto label_60a430;
        case 0x60a434u: goto label_60a434;
        case 0x60a438u: goto label_60a438;
        case 0x60a43cu: goto label_60a43c;
        case 0x60a440u: goto label_60a440;
        case 0x60a444u: goto label_60a444;
        case 0x60a448u: goto label_60a448;
        case 0x60a44cu: goto label_60a44c;
        case 0x60a450u: goto label_60a450;
        case 0x60a454u: goto label_60a454;
        case 0x60a458u: goto label_60a458;
        case 0x60a45cu: goto label_60a45c;
        case 0x60a460u: goto label_60a460;
        case 0x60a464u: goto label_60a464;
        case 0x60a468u: goto label_60a468;
        case 0x60a46cu: goto label_60a46c;
        case 0x60a470u: goto label_60a470;
        case 0x60a474u: goto label_60a474;
        case 0x60a478u: goto label_60a478;
        case 0x60a47cu: goto label_60a47c;
        case 0x60a480u: goto label_60a480;
        case 0x60a484u: goto label_60a484;
        case 0x60a488u: goto label_60a488;
        case 0x60a48cu: goto label_60a48c;
        case 0x60a490u: goto label_60a490;
        case 0x60a494u: goto label_60a494;
        case 0x60a498u: goto label_60a498;
        case 0x60a49cu: goto label_60a49c;
        case 0x60a4a0u: goto label_60a4a0;
        case 0x60a4a4u: goto label_60a4a4;
        case 0x60a4a8u: goto label_60a4a8;
        case 0x60a4acu: goto label_60a4ac;
        case 0x60a4b0u: goto label_60a4b0;
        case 0x60a4b4u: goto label_60a4b4;
        case 0x60a4b8u: goto label_60a4b8;
        case 0x60a4bcu: goto label_60a4bc;
        case 0x60a4c0u: goto label_60a4c0;
        case 0x60a4c4u: goto label_60a4c4;
        case 0x60a4c8u: goto label_60a4c8;
        case 0x60a4ccu: goto label_60a4cc;
        case 0x60a4d0u: goto label_60a4d0;
        case 0x60a4d4u: goto label_60a4d4;
        case 0x60a4d8u: goto label_60a4d8;
        case 0x60a4dcu: goto label_60a4dc;
        case 0x60a4e0u: goto label_60a4e0;
        case 0x60a4e4u: goto label_60a4e4;
        case 0x60a4e8u: goto label_60a4e8;
        case 0x60a4ecu: goto label_60a4ec;
        case 0x60a4f0u: goto label_60a4f0;
        case 0x60a4f4u: goto label_60a4f4;
        case 0x60a4f8u: goto label_60a4f8;
        case 0x60a4fcu: goto label_60a4fc;
        case 0x60a500u: goto label_60a500;
        case 0x60a504u: goto label_60a504;
        case 0x60a508u: goto label_60a508;
        case 0x60a50cu: goto label_60a50c;
        case 0x60a510u: goto label_60a510;
        case 0x60a514u: goto label_60a514;
        case 0x60a518u: goto label_60a518;
        case 0x60a51cu: goto label_60a51c;
        case 0x60a520u: goto label_60a520;
        case 0x60a524u: goto label_60a524;
        case 0x60a528u: goto label_60a528;
        case 0x60a52cu: goto label_60a52c;
        case 0x60a530u: goto label_60a530;
        case 0x60a534u: goto label_60a534;
        case 0x60a538u: goto label_60a538;
        case 0x60a53cu: goto label_60a53c;
        case 0x60a540u: goto label_60a540;
        case 0x60a544u: goto label_60a544;
        case 0x60a548u: goto label_60a548;
        case 0x60a54cu: goto label_60a54c;
        case 0x60a550u: goto label_60a550;
        case 0x60a554u: goto label_60a554;
        case 0x60a558u: goto label_60a558;
        case 0x60a55cu: goto label_60a55c;
        case 0x60a560u: goto label_60a560;
        case 0x60a564u: goto label_60a564;
        case 0x60a568u: goto label_60a568;
        case 0x60a56cu: goto label_60a56c;
        case 0x60a570u: goto label_60a570;
        case 0x60a574u: goto label_60a574;
        case 0x60a578u: goto label_60a578;
        case 0x60a57cu: goto label_60a57c;
        case 0x60a580u: goto label_60a580;
        case 0x60a584u: goto label_60a584;
        case 0x60a588u: goto label_60a588;
        case 0x60a58cu: goto label_60a58c;
        case 0x60a590u: goto label_60a590;
        case 0x60a594u: goto label_60a594;
        case 0x60a598u: goto label_60a598;
        case 0x60a59cu: goto label_60a59c;
        case 0x60a5a0u: goto label_60a5a0;
        case 0x60a5a4u: goto label_60a5a4;
        case 0x60a5a8u: goto label_60a5a8;
        case 0x60a5acu: goto label_60a5ac;
        case 0x60a5b0u: goto label_60a5b0;
        case 0x60a5b4u: goto label_60a5b4;
        case 0x60a5b8u: goto label_60a5b8;
        case 0x60a5bcu: goto label_60a5bc;
        case 0x60a5c0u: goto label_60a5c0;
        case 0x60a5c4u: goto label_60a5c4;
        case 0x60a5c8u: goto label_60a5c8;
        case 0x60a5ccu: goto label_60a5cc;
        case 0x60a5d0u: goto label_60a5d0;
        case 0x60a5d4u: goto label_60a5d4;
        case 0x60a5d8u: goto label_60a5d8;
        case 0x60a5dcu: goto label_60a5dc;
        case 0x60a5e0u: goto label_60a5e0;
        case 0x60a5e4u: goto label_60a5e4;
        case 0x60a5e8u: goto label_60a5e8;
        case 0x60a5ecu: goto label_60a5ec;
        case 0x60a5f0u: goto label_60a5f0;
        case 0x60a5f4u: goto label_60a5f4;
        case 0x60a5f8u: goto label_60a5f8;
        case 0x60a5fcu: goto label_60a5fc;
        case 0x60a600u: goto label_60a600;
        case 0x60a604u: goto label_60a604;
        case 0x60a608u: goto label_60a608;
        case 0x60a60cu: goto label_60a60c;
        case 0x60a610u: goto label_60a610;
        case 0x60a614u: goto label_60a614;
        case 0x60a618u: goto label_60a618;
        case 0x60a61cu: goto label_60a61c;
        case 0x60a620u: goto label_60a620;
        case 0x60a624u: goto label_60a624;
        case 0x60a628u: goto label_60a628;
        case 0x60a62cu: goto label_60a62c;
        case 0x60a630u: goto label_60a630;
        case 0x60a634u: goto label_60a634;
        case 0x60a638u: goto label_60a638;
        case 0x60a63cu: goto label_60a63c;
        case 0x60a640u: goto label_60a640;
        case 0x60a644u: goto label_60a644;
        case 0x60a648u: goto label_60a648;
        case 0x60a64cu: goto label_60a64c;
        case 0x60a650u: goto label_60a650;
        case 0x60a654u: goto label_60a654;
        case 0x60a658u: goto label_60a658;
        case 0x60a65cu: goto label_60a65c;
        case 0x60a660u: goto label_60a660;
        case 0x60a664u: goto label_60a664;
        case 0x60a668u: goto label_60a668;
        case 0x60a66cu: goto label_60a66c;
        case 0x60a670u: goto label_60a670;
        case 0x60a674u: goto label_60a674;
        case 0x60a678u: goto label_60a678;
        case 0x60a67cu: goto label_60a67c;
        case 0x60a680u: goto label_60a680;
        case 0x60a684u: goto label_60a684;
        case 0x60a688u: goto label_60a688;
        case 0x60a68cu: goto label_60a68c;
        case 0x60a690u: goto label_60a690;
        case 0x60a694u: goto label_60a694;
        case 0x60a698u: goto label_60a698;
        case 0x60a69cu: goto label_60a69c;
        case 0x60a6a0u: goto label_60a6a0;
        case 0x60a6a4u: goto label_60a6a4;
        case 0x60a6a8u: goto label_60a6a8;
        case 0x60a6acu: goto label_60a6ac;
        case 0x60a6b0u: goto label_60a6b0;
        case 0x60a6b4u: goto label_60a6b4;
        case 0x60a6b8u: goto label_60a6b8;
        case 0x60a6bcu: goto label_60a6bc;
        case 0x60a6c0u: goto label_60a6c0;
        case 0x60a6c4u: goto label_60a6c4;
        case 0x60a6c8u: goto label_60a6c8;
        case 0x60a6ccu: goto label_60a6cc;
        case 0x60a6d0u: goto label_60a6d0;
        case 0x60a6d4u: goto label_60a6d4;
        case 0x60a6d8u: goto label_60a6d8;
        case 0x60a6dcu: goto label_60a6dc;
        case 0x60a6e0u: goto label_60a6e0;
        case 0x60a6e4u: goto label_60a6e4;
        case 0x60a6e8u: goto label_60a6e8;
        case 0x60a6ecu: goto label_60a6ec;
        case 0x60a6f0u: goto label_60a6f0;
        case 0x60a6f4u: goto label_60a6f4;
        case 0x60a6f8u: goto label_60a6f8;
        case 0x60a6fcu: goto label_60a6fc;
        case 0x60a700u: goto label_60a700;
        case 0x60a704u: goto label_60a704;
        case 0x60a708u: goto label_60a708;
        case 0x60a70cu: goto label_60a70c;
        case 0x60a710u: goto label_60a710;
        case 0x60a714u: goto label_60a714;
        case 0x60a718u: goto label_60a718;
        case 0x60a71cu: goto label_60a71c;
        case 0x60a720u: goto label_60a720;
        case 0x60a724u: goto label_60a724;
        case 0x60a728u: goto label_60a728;
        case 0x60a72cu: goto label_60a72c;
        case 0x60a730u: goto label_60a730;
        case 0x60a734u: goto label_60a734;
        case 0x60a738u: goto label_60a738;
        case 0x60a73cu: goto label_60a73c;
        case 0x60a740u: goto label_60a740;
        case 0x60a744u: goto label_60a744;
        case 0x60a748u: goto label_60a748;
        case 0x60a74cu: goto label_60a74c;
        case 0x60a750u: goto label_60a750;
        case 0x60a754u: goto label_60a754;
        case 0x60a758u: goto label_60a758;
        case 0x60a75cu: goto label_60a75c;
        case 0x60a760u: goto label_60a760;
        case 0x60a764u: goto label_60a764;
        case 0x60a768u: goto label_60a768;
        case 0x60a76cu: goto label_60a76c;
        case 0x60a770u: goto label_60a770;
        case 0x60a774u: goto label_60a774;
        case 0x60a778u: goto label_60a778;
        case 0x60a77cu: goto label_60a77c;
        case 0x60a780u: goto label_60a780;
        case 0x60a784u: goto label_60a784;
        case 0x60a788u: goto label_60a788;
        case 0x60a78cu: goto label_60a78c;
        case 0x60a790u: goto label_60a790;
        case 0x60a794u: goto label_60a794;
        case 0x60a798u: goto label_60a798;
        case 0x60a79cu: goto label_60a79c;
        case 0x60a7a0u: goto label_60a7a0;
        case 0x60a7a4u: goto label_60a7a4;
        case 0x60a7a8u: goto label_60a7a8;
        case 0x60a7acu: goto label_60a7ac;
        case 0x60a7b0u: goto label_60a7b0;
        case 0x60a7b4u: goto label_60a7b4;
        case 0x60a7b8u: goto label_60a7b8;
        case 0x60a7bcu: goto label_60a7bc;
        case 0x60a7c0u: goto label_60a7c0;
        case 0x60a7c4u: goto label_60a7c4;
        case 0x60a7c8u: goto label_60a7c8;
        case 0x60a7ccu: goto label_60a7cc;
        case 0x60a7d0u: goto label_60a7d0;
        case 0x60a7d4u: goto label_60a7d4;
        case 0x60a7d8u: goto label_60a7d8;
        case 0x60a7dcu: goto label_60a7dc;
        case 0x60a7e0u: goto label_60a7e0;
        case 0x60a7e4u: goto label_60a7e4;
        case 0x60a7e8u: goto label_60a7e8;
        case 0x60a7ecu: goto label_60a7ec;
        case 0x60a7f0u: goto label_60a7f0;
        case 0x60a7f4u: goto label_60a7f4;
        case 0x60a7f8u: goto label_60a7f8;
        case 0x60a7fcu: goto label_60a7fc;
        case 0x60a800u: goto label_60a800;
        case 0x60a804u: goto label_60a804;
        case 0x60a808u: goto label_60a808;
        case 0x60a80cu: goto label_60a80c;
        case 0x60a810u: goto label_60a810;
        case 0x60a814u: goto label_60a814;
        case 0x60a818u: goto label_60a818;
        case 0x60a81cu: goto label_60a81c;
        case 0x60a820u: goto label_60a820;
        case 0x60a824u: goto label_60a824;
        case 0x60a828u: goto label_60a828;
        case 0x60a82cu: goto label_60a82c;
        case 0x60a830u: goto label_60a830;
        case 0x60a834u: goto label_60a834;
        case 0x60a838u: goto label_60a838;
        case 0x60a83cu: goto label_60a83c;
        case 0x60a840u: goto label_60a840;
        case 0x60a844u: goto label_60a844;
        case 0x60a848u: goto label_60a848;
        case 0x60a84cu: goto label_60a84c;
        case 0x60a850u: goto label_60a850;
        case 0x60a854u: goto label_60a854;
        case 0x60a858u: goto label_60a858;
        case 0x60a85cu: goto label_60a85c;
        case 0x60a860u: goto label_60a860;
        case 0x60a864u: goto label_60a864;
        case 0x60a868u: goto label_60a868;
        case 0x60a86cu: goto label_60a86c;
        case 0x60a870u: goto label_60a870;
        case 0x60a874u: goto label_60a874;
        case 0x60a878u: goto label_60a878;
        case 0x60a87cu: goto label_60a87c;
        case 0x60a880u: goto label_60a880;
        case 0x60a884u: goto label_60a884;
        case 0x60a888u: goto label_60a888;
        case 0x60a88cu: goto label_60a88c;
        case 0x60a890u: goto label_60a890;
        case 0x60a894u: goto label_60a894;
        case 0x60a898u: goto label_60a898;
        case 0x60a89cu: goto label_60a89c;
        case 0x60a8a0u: goto label_60a8a0;
        case 0x60a8a4u: goto label_60a8a4;
        case 0x60a8a8u: goto label_60a8a8;
        case 0x60a8acu: goto label_60a8ac;
        case 0x60a8b0u: goto label_60a8b0;
        case 0x60a8b4u: goto label_60a8b4;
        case 0x60a8b8u: goto label_60a8b8;
        case 0x60a8bcu: goto label_60a8bc;
        case 0x60a8c0u: goto label_60a8c0;
        case 0x60a8c4u: goto label_60a8c4;
        case 0x60a8c8u: goto label_60a8c8;
        case 0x60a8ccu: goto label_60a8cc;
        case 0x60a8d0u: goto label_60a8d0;
        case 0x60a8d4u: goto label_60a8d4;
        case 0x60a8d8u: goto label_60a8d8;
        case 0x60a8dcu: goto label_60a8dc;
        case 0x60a8e0u: goto label_60a8e0;
        case 0x60a8e4u: goto label_60a8e4;
        case 0x60a8e8u: goto label_60a8e8;
        case 0x60a8ecu: goto label_60a8ec;
        case 0x60a8f0u: goto label_60a8f0;
        case 0x60a8f4u: goto label_60a8f4;
        case 0x60a8f8u: goto label_60a8f8;
        case 0x60a8fcu: goto label_60a8fc;
        default: break;
    }

    ctx->pc = 0x609c70u;

label_609c70:
    // 0x609c70: 0x474e5089  .word       0x474E5089                   # INVALID     $k0, $t6, 0x5089 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x609c70u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x9 at 0x609C70 raw=0x474E5089");
label_609c74:
    // 0x609c74: 0xa1a0a0d  j           func_8682834
label_609c78:
    if (ctx->pc == 0x609C78u) {
        ctx->pc = 0x609C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x609C74u;
        // 0x609c78: 0x2e312e31  sltiu       $s1, $s1, 0x2E31 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)11825) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x609C7Cu;
        goto label_609c7c;
    }
    ctx->pc = 0x609C74u;
    ctx->pc = 0x609C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x609C74u;
    // 0x609c78: 0x2e312e31  sltiu       $s1, $s1, 0x2E31 (Delay Slot)
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)11825) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x8682834u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8682834u, 0x609C74u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x609C7Cu;
label_609c7c:
    // 0x609c7c: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x609c7cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_609c80:
    // 0x609c80: 0x0  nop
    ctx->pc = 0x609c80u;
    // NOP
label_609c84:
    // 0x609c84: 0x0  nop
    ctx->pc = 0x609c84u;
    // NOP
label_609c88:
    // 0x609c88: 0x2e302e31  sltiu       $s0, $s1, 0x2E31
    ctx->pc = 0x609c88u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)11825) ? 1 : 0);
label_609c8c:
    // 0x609c8c: 0x3231  tgeu        $zero, $zero, 200
    ctx->pc = 0x609c8cu;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_609c90:
    // 0x609c90: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x609c90u;
    
label_609c94:
    // 0x609c94: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609c94u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609C94 raw=0x00000001");
label_609c98:
    // 0x609c98: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609c98u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609C98 raw=0x00000001");
label_609c9c:
    // 0x609c9c: 0x0  nop
    ctx->pc = 0x609c9cu;
    // NOP
label_609ca0:
    // 0x609ca0: 0x0  nop
    ctx->pc = 0x609ca0u;
    // NOP
label_609ca4:
    // 0x609ca4: 0x0  nop
    ctx->pc = 0x609ca4u;
    // NOP
label_609ca8:
    // 0x609ca8: 0x10  mfhi        $zero
    ctx->pc = 0x609ca8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_609cac:
    // 0x609cac: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609cacu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609CAC raw=0x00000001");
label_609cb0:
    // 0x609cb0: 0x6272  tlt         $zero, $zero, 393
    ctx->pc = 0x609cb0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_609cb4:
    // 0x609cb4: 0x0  nop
    ctx->pc = 0x609cb4u;
    // NOP
label_609cb8:
    // 0x609cb8: 0x6277  .word       0x00006277                   # INVALID     $zero, $zero, 0x6277 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609cb8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x609CB8 raw=0x00006277");
label_609cbc:
    // 0x609cbc: 0x0  nop
    ctx->pc = 0x609cbcu;
    // NOP
label_609cc0:
    // 0x609cc0: 0x6261  .word       0x00006261                   # addu        $t4, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609cc0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_609cc4:
    // 0x609cc4: 0x0  nop
    ctx->pc = 0x609cc4u;
    // NOP
label_609cc8:
    // 0x609cc8: 0x0  nop
    ctx->pc = 0x609cc8u;
    // NOP
label_609ccc:
    // 0x609ccc: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x609cccu;
    
label_609cd0:
    // 0x609cd0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609cd0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609CD0 raw=0x00000001");
label_609cd4:
    // 0x609cd4: 0x10  mfhi        $zero
    ctx->pc = 0x609cd4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_609cd8:
    // 0x609cd8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609cd8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609CD8 raw=0x00000001");
label_609cdc:
    // 0x609cdc: 0x0  nop
    ctx->pc = 0x609cdcu;
    // NOP
label_609ce0:
    // 0x609ce0: 0x0  nop
    ctx->pc = 0x609ce0u;
    // NOP
label_609ce4:
    // 0x609ce4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609ce4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609CE4 raw=0x00000001");
label_609ce8:
    // 0x609ce8: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x609ce8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_609cec:
    // 0x609cec: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609cecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609CEC raw=0x00000001");
label_609cf0:
    // 0x609cf0: 0x0  nop
    ctx->pc = 0x609cf0u;
    // NOP
label_609cf4:
    // 0x609cf4: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x609cf4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_609cf8:
    // 0x609cf8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609cf8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609CF8 raw=0x00000001");
label_609cfc:
    // 0x609cfc: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x609cfcu;
    
label_609d00:
    // 0x609d00: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609d00u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609D00 raw=0x00000001");
label_609d04:
    // 0x609d04: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x609d04u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_609d08:
    // 0x609d08: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609d08u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609D08 raw=0x00000001");
label_609d0c:
    // 0x609d0c: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x609d0cu;
    
label_609d10:
    // 0x609d10: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609d10u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609D10 raw=0x00000001");
label_609d14:
    // 0x609d14: 0x0  nop
    ctx->pc = 0x609d14u;
    // NOP
label_609d18:
    // 0x609d18: 0x0  nop
    ctx->pc = 0x609d18u;
    // NOP
label_609d1c:
    // 0x609d1c: 0x0  nop
    ctx->pc = 0x609d1cu;
    // NOP
label_609d20:
    // 0x609d20: 0x0  nop
    ctx->pc = 0x609d20u;
    // NOP
label_609d24:
    // 0x609d24: 0x0  nop
    ctx->pc = 0x609d24u;
    // NOP
label_609d28:
    // 0x609d28: 0x6c756e28  ldr         $s5, 0x6E28($v1)
    ctx->pc = 0x609d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_609d2c:
    // 0x609d2c: 0x296c  .word       0x0000296C                   # dadd        $a1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609d2cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_609d30:
    // 0x609d30: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x609d30u;
    
label_609d34:
    // 0x609d34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609d34u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609D34 raw=0x00000001");
label_609d38:
    // 0x609d38: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609d38u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x609D38 raw=0x00000005");
label_609d3c:
    // 0x609d3c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609d3cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609D3C raw=0x00000001");
label_609d40:
    // 0x609d40: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x609d40u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_609d44:
    // 0x609d44: 0x0  nop
    ctx->pc = 0x609d44u;
    // NOP
label_609d48:
    // 0x609d48: 0x0  nop
    ctx->pc = 0x609d48u;
    // NOP
label_609d4c:
    // 0x609d4c: 0x0  nop
    ctx->pc = 0x609d4cu;
    // NOP
label_609d50:
    // 0x609d50: 0x0  nop
    ctx->pc = 0x609d50u;
    // NOP
label_609d54:
    // 0x609d54: 0x4000000  bltz        $zero, . + 4 + (0x0 << 2)
label_609d58:
    if (ctx->pc == 0x609D58u) {
        ctx->pc = 0x609D5Cu;
        goto label_609d5c;
    }
    ctx->pc = 0x609D54u;
    {
        const bool branch_taken_0x609d54 = (GPR_S32(ctx, 0) < 0);
        if (branch_taken_0x609d54) {
            ctx->pc = 0x609D58u;
            goto label_609d58;
        }
    }
    ctx->pc = 0x609D5Cu;
label_609d5c:
    // 0x609d5c: 0x0  nop
    ctx->pc = 0x609d5cu;
    // NOP
label_609d60:
    // 0x609d60: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x609d60u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_609d64:
    // 0x609d64: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x609d64u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_609d68:
    // 0x609d68: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x609d68u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_609d6c:
    // 0x609d6c: 0x0  nop
    ctx->pc = 0x609d6cu;
    // NOP
label_609d70:
    // 0x609d70: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609d70u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609D70 raw=0x00000001");
label_609d74:
    // 0x609d74: 0x0  nop
    ctx->pc = 0x609d74u;
    // NOP
label_609d78:
    // 0x609d78: 0x0  nop
    ctx->pc = 0x609d78u;
    // NOP
label_609d7c:
    // 0x609d7c: 0x0  nop
    ctx->pc = 0x609d7cu;
    // NOP
label_609d80:
    // 0x609d80: 0x0  nop
    ctx->pc = 0x609d80u;
    // NOP
label_609d84:
    // 0x609d84: 0x0  nop
    ctx->pc = 0x609d84u;
    // NOP
label_609d88:
    // 0x609d88: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609d88u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609D88 raw=0x00000001");
label_609d8c:
    // 0x609d8c: 0x0  nop
    ctx->pc = 0x609d8cu;
    // NOP
label_609d90:
    // 0x609d90: 0x0  nop
    ctx->pc = 0x609d90u;
    // NOP
label_609d94:
    // 0x609d94: 0x0  nop
    ctx->pc = 0x609d94u;
    // NOP
label_609d98:
    // 0x609d98: 0x0  nop
    ctx->pc = 0x609d98u;
    // NOP
label_609d9c:
    // 0x609d9c: 0x0  nop
    ctx->pc = 0x609d9cu;
    // NOP
label_609da0:
    // 0x609da0: 0x0  nop
    ctx->pc = 0x609da0u;
    // NOP
label_609da4:
    // 0x609da4: 0x0  nop
    ctx->pc = 0x609da4u;
    // NOP
label_609da8:
    // 0x609da8: 0x0  nop
    ctx->pc = 0x609da8u;
    // NOP
label_609dac:
    // 0x609dac: 0x0  nop
    ctx->pc = 0x609dacu;
    // NOP
label_609db0:
    // 0x609db0: 0x0  nop
    ctx->pc = 0x609db0u;
    // NOP
label_609db4:
    // 0x609db4: 0x0  nop
    ctx->pc = 0x609db4u;
    // NOP
label_609db8:
    // 0x609db8: 0x0  nop
    ctx->pc = 0x609db8u;
    // NOP
label_609dbc:
    // 0x609dbc: 0x0  nop
    ctx->pc = 0x609dbcu;
    // NOP
label_609dc0:
    // 0x609dc0: 0x0  nop
    ctx->pc = 0x609dc0u;
    // NOP
label_609dc4:
    // 0x609dc4: 0x0  nop
    ctx->pc = 0x609dc4u;
    // NOP
label_609dc8:
    // 0x609dc8: 0x0  nop
    ctx->pc = 0x609dc8u;
    // NOP
label_609dcc:
    // 0x609dcc: 0x0  nop
    ctx->pc = 0x609dccu;
    // NOP
label_609dd0:
    // 0x609dd0: 0x0  nop
    ctx->pc = 0x609dd0u;
    // NOP
label_609dd4:
    // 0x609dd4: 0x0  nop
    ctx->pc = 0x609dd4u;
    // NOP
label_609dd8:
    // 0x609dd8: 0x0  nop
    ctx->pc = 0x609dd8u;
    // NOP
label_609ddc:
    // 0x609ddc: 0x0  nop
    ctx->pc = 0x609ddcu;
    // NOP
label_609de0:
    // 0x609de0: 0x0  nop
    ctx->pc = 0x609de0u;
    // NOP
label_609de4:
    // 0x609de4: 0x0  nop
    ctx->pc = 0x609de4u;
    // NOP
label_609de8:
    // 0x609de8: 0x0  nop
    ctx->pc = 0x609de8u;
    // NOP
label_609dec:
    // 0x609dec: 0x0  nop
    ctx->pc = 0x609decu;
    // NOP
label_609df0:
    // 0x609df0: 0x8  jr          $zero
label_609df4:
    if (ctx->pc == 0x609DF4u) {
        ctx->pc = 0x609DF8u;
        goto label_609df8;
    }
    ctx->pc = 0x609DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x609DF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x609DF8u;
label_609df8:
    // 0x609df8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x609df8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_609dfc:
    // 0x609dfc: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x609dfcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_609e00:
    // 0x609e00: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x609e00u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_609e04:
    // 0x609e04: 0x0  nop
    ctx->pc = 0x609e04u;
    // NOP
label_609e08:
    // 0x609e08: 0x0  nop
    ctx->pc = 0x609e08u;
    // NOP
label_609e0c:
    // 0x609e0c: 0x0  nop
    ctx->pc = 0x609e0cu;
    // NOP
label_609e10:
    // 0x609e10: 0x0  nop
    ctx->pc = 0x609e10u;
    // NOP
label_609e14:
    // 0x609e14: 0x0  nop
    ctx->pc = 0x609e14u;
    // NOP
label_609e18:
    // 0x609e18: 0xfc0  sll         $at, $zero, 31
    ctx->pc = 0x609e18u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_609e1c:
    // 0x609e1c: 0x10  mfhi        $zero
    ctx->pc = 0x609e1cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_609e20:
    // 0x609e20: 0x0  nop
    ctx->pc = 0x609e20u;
    // NOP
label_609e24:
    // 0x609e24: 0x0  nop
    ctx->pc = 0x609e24u;
    // NOP
label_609e28:
    // 0x609e28: 0x325350  .word       0x00325350                   # mfhi        $t2 # 00320340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609e28u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_609e2c:
    // 0x609e2c: 0x0  nop
    ctx->pc = 0x609e2cu;
    // NOP
label_609e30:
    // 0x609e30: 0x0  nop
    ctx->pc = 0x609e30u;
    // NOP
label_609e34:
    // 0x609e34: 0x0  nop
    ctx->pc = 0x609e34u;
    // NOP
label_609e38:
    // 0x609e38: 0x0  nop
    ctx->pc = 0x609e38u;
    // NOP
label_609e3c:
    // 0x609e3c: 0x0  nop
    ctx->pc = 0x609e3cu;
    // NOP
label_609e40:
    // 0x609e40: 0x0  nop
    ctx->pc = 0x609e40u;
    // NOP
label_609e44:
    // 0x609e44: 0x0  nop
    ctx->pc = 0x609e44u;
    // NOP
label_609e48:
    // 0x609e48: 0x0  nop
    ctx->pc = 0x609e48u;
    // NOP
label_609e4c:
    // 0x609e4c: 0x0  nop
    ctx->pc = 0x609e4cu;
    // NOP
label_609e50:
    // 0x609e50: 0x0  nop
    ctx->pc = 0x609e50u;
    // NOP
label_609e54:
    // 0x609e54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609e54u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609E54 raw=0x00000001");
label_609e58:
    // 0x609e58: 0x0  nop
    ctx->pc = 0x609e58u;
    // NOP
label_609e5c:
    // 0x609e5c: 0x0  nop
    ctx->pc = 0x609e5cu;
    // NOP
label_609e60:
    // 0x609e60: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609e60u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609E60 raw=0x00000001");
label_609e64:
    // 0x609e64: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609e64u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609E64 raw=0x00000001");
label_609e68:
    // 0x609e68: 0x0  nop
    ctx->pc = 0x609e68u;
    // NOP
label_609e6c:
    // 0x609e6c: 0x0  nop
    ctx->pc = 0x609e6cu;
    // NOP
label_609e70:
    // 0x609e70: 0xc4  .word       0x000000C4                   # sllv        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609e70u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_609e74:
    // 0x609e74: 0x0  nop
    ctx->pc = 0x609e74u;
    // NOP
label_609e78:
    // 0x609e78: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609e78u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609E78 raw=0x00000001");
label_609e7c:
    // 0x609e7c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609e7cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609E7C raw=0x00000001");
label_609e80:
    // 0x609e80: 0x0  nop
    ctx->pc = 0x609e80u;
    // NOP
label_609e84:
    // 0x609e84: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x609e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_609e88:
    // 0x609e88: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x609e88u;
    
label_609e8c:
    // 0x609e8c: 0x0  nop
    ctx->pc = 0x609e8cu;
    // NOP
label_609e90:
    // 0x609e90: 0x0  nop
    ctx->pc = 0x609e90u;
    // NOP
label_609e94:
    // 0x609e94: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x609e94u;
    
label_609e98:
    // 0x609e98: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609e98u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609E98 raw=0x00000001");
label_609e9c:
    // 0x609e9c: 0x0  nop
    ctx->pc = 0x609e9cu;
    // NOP
label_609ea0:
    // 0x609ea0: 0x0  nop
    ctx->pc = 0x609ea0u;
    // NOP
label_609ea4:
    // 0x609ea4: 0x0  nop
    ctx->pc = 0x609ea4u;
    // NOP
label_609ea8:
    // 0x609ea8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x609ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_609eac:
    // 0x609eac: 0x0  nop
    ctx->pc = 0x609eacu;
    // NOP
label_609eb0:
    // 0x609eb0: 0x41455243  .word       0x41455243                   # INVALID     $t2, $a1, 0x5243 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x609eb0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x609EB0 raw=0x41455243");
label_609eb4:
    // 0x609eb4: 0x4554  .word       0x00004554                   # dsllv       $t0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609eb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_609eb8:
    // 0x609eb8: 0x45444146  .word       0x45444146                   # INVALID     $t2, $a0, 0x4146 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x609eb8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x6 at 0x609EB8 raw=0x45444146");
label_609ebc:
    // 0x609ebc: 0x0  nop
    ctx->pc = 0x609ebcu;
    // NOP
label_609ec0:
    // 0x609ec0: 0x45444948  .word       0x45444948                   # INVALID     $t2, $a0, 0x4948 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x609ec0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x8 at 0x609EC0 raw=0x45444948");
label_609ec4:
    // 0x609ec4: 0x0  nop
    ctx->pc = 0x609ec4u;
    // NOP
label_609ec8:
    // 0x609ec8: 0x45564f4d  .word       0x45564F4D                   # INVALID     $t2, $s6, 0x4F4D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x609ec8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xD at 0x609EC8 raw=0x45564F4D");
label_609ecc:
    // 0x609ecc: 0x4f54  .word       0x00004F54                   # dsllv       $t1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609eccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_609ed0:
    // 0x609ed0: 0x59414c50  .word       0x59414C50                   # blezl       $t2, . + 4 + (0x4C50 << 2) # 00010000 <InstrIdType: CPU_NORMAL>
label_609ed4:
    if (ctx->pc == 0x609ED4u) {
        ctx->pc = 0x609ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x609ED0u;
        // 0x609ed4: 0x5846  .word       0x00005846                   # srlv        $t3, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x609ED8u;
        goto label_609ed8;
    }
    ctx->pc = 0x609ED0u;
    {
        const bool branch_taken_0x609ed0 = (GPR_S32(ctx, 10) <= 0);
        if (branch_taken_0x609ed0) {
            ctx->pc = 0x609ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x609ED0u;
            // 0x609ed4: 0x5846  .word       0x00005846                   # srlv        $t3, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
            ctx->in_delay_slot = false;
            ctx->pc = 0x61D014u;
            return;
        }
    }
    ctx->pc = 0x609ED8u;
label_609ed8:
    // 0x609ed8: 0x45444952  .word       0x45444952                   # INVALID     $t2, $a0, 0x4952 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x609ed8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x12 at 0x609ED8 raw=0x45444952");
label_609edc:
    // 0x609edc: 0x4d4143  .word       0x004D4143                   # sra         $t0, $t5, 5 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609edcu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 13), 5));
label_609ee0:
    // 0x609ee0: 0x57415053  bnel        $k0, $at, . + 4 + (0x5053 << 2)
label_609ee4:
    if (ctx->pc == 0x609EE4u) {
        ctx->pc = 0x609EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x609EE0u;
        // 0x609ee4: 0x4e  .word       0x0000004E                   # INVALID     $zero, $zero, 0x4E # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x609EE4 raw=0x0000004E");
        ctx->in_delay_slot = false;
        ctx->pc = 0x609EE8u;
        goto label_609ee8;
    }
    ctx->pc = 0x609EE0u;
    {
        const bool branch_taken_0x609ee0 = (GPR_U64(ctx, 26) != GPR_U64(ctx, 1));
        if (branch_taken_0x609ee0) {
            ctx->pc = 0x609EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x609EE0u;
            // 0x609ee4: 0x4e  .word       0x0000004E                   # INVALID     $zero, $zero, 0x4E # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x609EE4 raw=0x0000004E");
            ctx->in_delay_slot = false;
            ctx->pc = 0x61E030u;
            return;
        }
    }
    ctx->pc = 0x609EE8u;
label_609ee8:
    // 0x609ee8: 0x50544553  beql        $v0, $s4, . + 4 + (0x4553 << 2)
label_609eec:
    if (ctx->pc == 0x609EECu) {
        ctx->pc = 0x609EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x609EE8u;
        // 0x609eec: 0x534f  .word       0x0000534F                   # sync # 00005000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // SYNC instruction - memory barrier
        // In recompiled code, we don't need explicit memory barriers
        ctx->in_delay_slot = false;
        ctx->pc = 0x609EF0u;
        goto label_609ef0;
    }
    ctx->pc = 0x609EE8u;
    {
        const bool branch_taken_0x609ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x609ee8) {
            ctx->pc = 0x609EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x609EE8u;
            // 0x609eec: 0x534f  .word       0x0000534F                   # sync # 00005000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            // SYNC instruction - memory barrier
            // In recompiled code, we don't need explicit memory barriers
            ctx->in_delay_slot = false;
            ctx->pc = 0x61B438u;
            return;
        }
    }
    ctx->pc = 0x609EF0u;
label_609ef0:
    // 0x609ef0: 0x54494157  bnel        $v0, $t1, . + 4 + (0x4157 << 2)
label_609ef4:
    if (ctx->pc == 0x609EF4u) {
        ctx->pc = 0x609EF8u;
        goto label_609ef8;
    }
    ctx->pc = 0x609EF0u;
    {
        const bool branch_taken_0x609ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x609ef0) {
            ctx->pc = 0x61A450u;
            return;
        }
    }
    ctx->pc = 0x609EF8u;
label_609ef8:
    // 0x609ef8: 0x54495257  bnel        $v0, $t1, . + 4 + (0x5257 << 2)
label_609efc:
    if (ctx->pc == 0x609EFCu) {
        ctx->pc = 0x609EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x609EF8u;
        // 0x609efc: 0x45  .word       0x00000045                   # INVALID     $zero, $zero, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x609EFC raw=0x00000045");
        ctx->in_delay_slot = false;
        ctx->pc = 0x609F00u;
        goto label_609f00;
    }
    ctx->pc = 0x609EF8u;
    {
        const bool branch_taken_0x609ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x609ef8) {
            ctx->pc = 0x609EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x609EF8u;
            // 0x609efc: 0x45  .word       0x00000045                   # INVALID     $zero, $zero, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x609EFC raw=0x00000045");
            ctx->in_delay_slot = false;
            ctx->pc = 0x61E858u;
            return;
        }
    }
    ctx->pc = 0x609F00u;
label_609f00:
    // 0x609f00: 0x0  nop
    ctx->pc = 0x609f00u;
    // NOP
label_609f04:
    // 0x609f04: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609f04u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609F04 raw=0x00000001");
label_609f08:
    // 0x609f08: 0x72655a75  .word       0x72655A75                   # INVALID     $s3, $a1, 0x5A75 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x609f08u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x609F08 raw=0x72655A75");
label_609f0c:
    // 0x609f0c: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609f0cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_609f10:
    // 0x609f10: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609f10u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609F10 raw=0x00000001");
label_609f14:
    // 0x609f14: 0x0  nop
    ctx->pc = 0x609f14u;
    // NOP
label_609f18:
    // 0x609f18: 0x22732522  addi        $s3, $s3, 0x2522
    ctx->pc = 0x609f18u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 19), (int32_t)9506, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_609f1c:
    // 0x609f1c: 0x0  nop
    ctx->pc = 0x609f1cu;
    // NOP
label_609f20:
    // 0x609f20: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609f20u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609F20 raw=0x00000001");
label_609f24:
    // 0x609f24: 0x0  nop
    ctx->pc = 0x609f24u;
    // NOP
label_609f28:
    // 0x609f28: 0x72655a75  .word       0x72655A75                   # INVALID     $s3, $a1, 0x5A75 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x609f28u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x609F28 raw=0x72655A75");
label_609f2c:
    // 0x609f2c: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609f2cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_609f30:
    // 0x609f30: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609f30u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609F30 raw=0x00000001");
label_609f34:
    // 0x609f34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609f34u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609F34 raw=0x00000001");
label_609f38:
    // 0x609f38: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609f38u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609F38 raw=0x00000001");
label_609f3c:
    // 0x609f3c: 0x0  nop
    ctx->pc = 0x609f3cu;
    // NOP
label_609f40:
    // 0x609f40: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609f40u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609F40 raw=0x00000001");
label_609f44:
    // 0x609f44: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609f44u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609F44 raw=0x00000001");
label_609f48:
    // 0x609f48: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609f48u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609F48 raw=0x00000001");
label_609f4c:
    // 0x609f4c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609f4cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609F4C raw=0x00000001");
label_609f50:
    // 0x609f50: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609f50u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609F50 raw=0x00000001");
label_609f54:
    // 0x609f54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609f54u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609F54 raw=0x00000001");
label_609f58:
    // 0x609f58: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609f58u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609F58 raw=0x00000001");
label_609f5c:
    // 0x609f5c: 0x0  nop
    ctx->pc = 0x609f5cu;
    // NOP
label_609f60:
    // 0x609f60: 0x7365722e  .word       0x7365722E                   # INVALID     $k1, $a1, 0x722E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x609f60u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x609F60 raw=0x7365722E");
label_609f64:
    // 0x609f64: 0x0  nop
    ctx->pc = 0x609f64u;
    // NOP
label_609f68:
    // 0x609f68: 0x6e69632e  ldr         $t1, 0x632E($s3)
    ctx->pc = 0x609f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25390); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_609f6c:
    // 0x609f6c: 0x0  nop
    ctx->pc = 0x609f6cu;
    // NOP
label_609f70:
    // 0x609f70: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609f70u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609F70 raw=0x00000001");
label_609f74:
    // 0x609f74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609f74u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609F74 raw=0x00000001");
label_609f78:
    // 0x609f78: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609f78u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609F78 raw=0x00000001");
label_609f7c:
    // 0x609f7c: 0x0  nop
    ctx->pc = 0x609f7cu;
    // NOP
label_609f80:
    // 0x609f80: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609f80u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609F80 raw=0x00000001");
label_609f84:
    // 0x609f84: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609f84u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609F84 raw=0x00000001");
label_609f88:
    // 0x609f88: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609f88u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609F88 raw=0x00000001");
label_609f8c:
    // 0x609f8c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609f8cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609F8C raw=0x00000001");
label_609f90:
    // 0x609f90: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x609f90u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_609f94:
    // 0x609f94: 0x0  nop
    ctx->pc = 0x609f94u;
    // NOP
label_609f98:
    // 0x609f98: 0x43535444  .word       0x43535444                   # INVALID     $k0, $s3, 0x5444 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x609f98u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x609F98 raw=0x43535444");
label_609f9c:
    // 0x609f9c: 0x454e45  .word       0x00454E45                   # INVALID     $v0, $a1, 0x4E45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609f9cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x609F9C raw=0x00454E45");
label_609fa0:
    // 0x609fa0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609fa0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609FA0 raw=0x00000001");
label_609fa4:
    // 0x609fa4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609fa4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609FA4 raw=0x00000001");
label_609fa8:
    // 0x609fa8: 0x23  negu        $zero, $zero
    ctx->pc = 0x609fa8u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_609fac:
    // 0x609fac: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609facu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609FAC raw=0x00000001");
label_609fb0:
    // 0x609fb0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609fb0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609FB0 raw=0x00000001");
label_609fb4:
    // 0x609fb4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609fb4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609FB4 raw=0x00000001");
label_609fb8:
    // 0x609fb8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609fb8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609FB8 raw=0x00000001");
label_609fbc:
    // 0x609fbc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609fbcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609FBC raw=0x00000001");
label_609fc0:
    // 0x609fc0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609fc0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609FC0 raw=0x00000001");
label_609fc4:
    // 0x609fc4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609fc4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609FC4 raw=0x00000001");
label_609fc8:
    // 0x609fc8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609fc8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609FC8 raw=0x00000001");
label_609fcc:
    // 0x609fcc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609fccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609FCC raw=0x00000001");
label_609fd0:
    // 0x609fd0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609fd0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609FD0 raw=0x00000001");
label_609fd4:
    // 0x609fd4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609fd4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609FD4 raw=0x00000001");
label_609fd8:
    // 0x609fd8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609fd8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609FD8 raw=0x00000001");
label_609fdc:
    // 0x609fdc: 0x0  nop
    ctx->pc = 0x609fdcu;
    // NOP
label_609fe0:
    // 0x609fe0: 0x4c41463d  .word       0x4C41463D                   # INVALID     $v0, $at, 0x463D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x609fe0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x609FE0 raw=0x4C41463D");
label_609fe4:
    // 0x609fe4: 0x4553  .word       0x00004553                   # mtlo        $zero # 00004540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609fe4u;
    ctx->lo = GPR_U64(ctx, 0);
label_609fe8:
    // 0x609fe8: 0x7525  .word       0x00007525                   # move        $t6, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609fe8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_609fec:
    // 0x609fec: 0x0  nop
    ctx->pc = 0x609fecu;
    // NOP
label_609ff0:
    // 0x609ff0: 0x49544e55  .word       0x49544E55                   # INVALID     $t2, $s4, 0x4E55 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x609ff0u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x609FF0 raw=0x49544E55");
label_609ff4:
    // 0x609ff4: 0x22284c  .word       0x0022284C                   # syscall     161 # 00220000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609ff4u;
    ctx->pc = 0x609FF8u;
runtime->handleSyscall(rdram, ctx, 0x88A1u);
label_609ff8:
    // 0x609ff8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609ff8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609FF8 raw=0x00000001");
label_609ffc:
    // 0x609ffc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x609ffcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x609FFC raw=0x00000001");
label_60a000:
    // 0x60a000: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a000u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A000 raw=0x00000001");
label_60a004:
    // 0x60a004: 0x0  nop
    ctx->pc = 0x60a004u;
    // NOP
label_60a008:
    // 0x60a008: 0x72655a75  .word       0x72655A75                   # INVALID     $s3, $a1, 0x5A75 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x60a008u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x60A008 raw=0x72655A75");
label_60a00c:
    // 0x60a00c: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a00cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_60a010:
    // 0x60a010: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a010u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A010 raw=0x00000001");
label_60a014:
    // 0x60a014: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a014u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A014 raw=0x00000001");
label_60a018:
    // 0x60a018: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a018u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A018 raw=0x00000001");
label_60a01c:
    // 0x60a01c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a01cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A01C raw=0x00000001");
label_60a020:
    // 0x60a020: 0x0  nop
    ctx->pc = 0x60a020u;
    // NOP
label_60a024:
    // 0x60a024: 0x0  nop
    ctx->pc = 0x60a024u;
    // NOP
label_60a028:
    // 0x60a028: 0x65737341  daddiu      $s3, $t3, 0x7341
    ctx->pc = 0x60a028u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29505);
label_60a02c:
    // 0x60a02c: 0x7472  tlt         $zero, $zero, 465
    ctx->pc = 0x60a02cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_60a030:
    // 0x60a030: 0x4e524157  .word       0x4E524157                   # INVALID     $s2, $s2, 0x4157 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60a030u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x60A030 raw=0x4E524157");
label_60a034:
    // 0x60a034: 0x474e49  .word       0x00474E49                   # jalr        $t1, $v0 # 00070640 <InstrIdType: CPU_SPECIAL>
label_60a038:
    if (ctx->pc == 0x60A038u) {
        ctx->pc = 0x60A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x60A034u;
        // 0x60a038: 0x29642528  slti        $a0, $t3, 0x2528 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)9512) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x60A03Cu;
        goto label_60a03c;
    }
    ctx->pc = 0x60A034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 9, 0x60A03Cu);
        ctx->pc = 0x60A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x60A034u;
        // 0x60a038: 0x29642528  slti        $a0, $t3, 0x2528 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)9512) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x60A034u, 0x60A03Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x60A03Cu;
label_60a03c:
    // 0x60a03c: 0x203a20  .word       0x00203A20                   # add         $a3, $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a03cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_60a040:
    // 0x60a040: 0x203e2d20  addi        $fp, $at, 0x2D20
    ctx->pc = 0x60a040u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11552, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_60a044:
    // 0x60a044: 0x0  nop
    ctx->pc = 0x60a044u;
    // NOP
label_60a048:
    // 0x60a048: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x60a048u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_60a04c:
    // 0x60a04c: 0x742b61  .word       0x00742B61                   # addu        $a1, $v1, $s4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_60a050:
    // 0x60a050: 0x7325  .word       0x00007325                   # move        $t6, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a050u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_60a054:
    // 0x60a054: 0x7825  move        $t7, $zero
    ctx->pc = 0x60a054u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_60a058:
    // 0x60a058: 0x74736f68  .word       0x74736F68                   # INVALID     $v1, $s3, 0x6F68 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60a058u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x60A058 raw=0x74736F68");
label_60a05c:
    // 0x60a05c: 0x3a30  tge         $zero, $zero, 232
    ctx->pc = 0x60a05cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_60a060:
    // 0x60a060: 0x0  nop
    ctx->pc = 0x60a060u;
    // NOP
label_60a064:
    // 0x60a064: 0x0  nop
    ctx->pc = 0x60a064u;
    // NOP
label_60a068:
    // 0x60a068: 0x6f726463  ldr         $s2, 0x6463($k1)
    ctx->pc = 0x60a068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25699); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_60a06c:
    // 0x60a06c: 0x3a306d  .word       0x003A306D                   # daddu       $a2, $at, $k0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a06cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 26));
label_60a070:
    // 0x60a070: 0x676d692e  daddiu      $t5, $k1, 0x692E
    ctx->pc = 0x60a070u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26926);
label_60a074:
    // 0x60a074: 0x0  nop
    ctx->pc = 0x60a074u;
    // NOP
label_60a078:
    // 0x60a078: 0x474d492e  .word       0x474D492E                   # INVALID     $k0, $t5, 0x492E # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x60a078u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x2E at 0x60A078 raw=0x474D492E");
label_60a07c:
    // 0x60a07c: 0x0  nop
    ctx->pc = 0x60a07cu;
    // NOP
label_60a080:
    // 0x60a080: 0x7872692e  lq          $s2, 0x692E($v1)
    ctx->pc = 0x60a080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 3), 26926)));
label_60a084:
    // 0x60a084: 0x0  nop
    ctx->pc = 0x60a084u;
    // NOP
label_60a088:
    // 0x60a088: 0x5852492e  .word       0x5852492E                   # blezl       $v0, . + 4 + (0x492E << 2) # 00120000 <InstrIdType: CPU_NORMAL>
label_60a08c:
    if (ctx->pc == 0x60A08Cu) {
        ctx->pc = 0x60A090u;
        goto label_60a090;
    }
    ctx->pc = 0x60A088u;
    {
        const bool branch_taken_0x60a088 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x60a088) {
            ctx->pc = 0x61C544u;
            return;
        }
    }
    ctx->pc = 0x60A090u;
label_60a090:
    // 0x60a090: 0x73257325  .word       0x73257325                   # INVALID     $t9, $a1, 0x7325 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x60a090u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x60A090 raw=0x73257325");
label_60a094:
    // 0x60a094: 0x7325  .word       0x00007325                   # move        $t6, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a094u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_60a098:
    // 0x60a098: 0x73257325  .word       0x73257325                   # INVALID     $t9, $a1, 0x7325 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x60a098u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x60A098 raw=0x73257325");
label_60a09c:
    // 0x60a09c: 0x0  nop
    ctx->pc = 0x60a09cu;
    // NOP
label_60a0a0:
    // 0x60a0a0: 0x313b  dsra        $a2, $zero, 4
    ctx->pc = 0x60a0a0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 4);
label_60a0a4:
    // 0x60a0a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a0a4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A0A4 raw=0x00000001");
label_60a0a8:
    // 0x60a0a8: 0x7525  .word       0x00007525                   # move        $t6, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a0a8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_60a0ac:
    // 0x60a0ac: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a0acu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A0AC raw=0x00000001");
label_60a0b0:
    // 0x60a0b0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a0b0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A0B0 raw=0x00000001");
label_60a0b4:
    // 0x60a0b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a0b4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A0B4 raw=0x00000001");
label_60a0b8:
    // 0x60a0b8: 0x0  nop
    ctx->pc = 0x60a0b8u;
    // NOP
label_60a0bc:
    // 0x60a0bc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a0bcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A0BC raw=0x00000001");
label_60a0c0:
    // 0x60a0c0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a0c0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A0C0 raw=0x00000001");
label_60a0c4:
    // 0x60a0c4: 0x0  nop
    ctx->pc = 0x60a0c4u;
    // NOP
label_60a0c8:
    // 0x60a0c8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a0c8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A0C8 raw=0x00000001");
label_60a0cc:
    // 0x60a0cc: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x60a0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_60a0d0:
    // 0x60a0d0: 0x5c  .word       0x0000005C                   # dmult       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a0d0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x60A0D0 raw=0x0000005C");
label_60a0d4:
    // 0x60a0d4: 0x6272  tlt         $zero, $zero, 393
    ctx->pc = 0x60a0d4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_60a0d8:
    // 0x60a0d8: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x60a0d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_60a0dc:
    // 0x60a0dc: 0x0  nop
    ctx->pc = 0x60a0dcu;
    // NOP
label_60a0e0:
    // 0x60a0e0: 0x3a647664  xori        $a0, $s3, 0x7664
    ctx->pc = 0x60a0e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)30308);
label_60a0e4:
    // 0x60a0e4: 0x0  nop
    ctx->pc = 0x60a0e4u;
    // NOP
label_60a0e8:
    // 0x60a0e8: 0x647664  .word       0x00647664                   # and         $t6, $v1, $a0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a0e8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_60a0ec:
    // 0x60a0ec: 0x0  nop
    ctx->pc = 0x60a0ecu;
    // NOP
label_60a0f0:
    // 0x60a0f0: 0x3a736668  xori        $s3, $s3, 0x6668
    ctx->pc = 0x60a0f0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)26216);
label_60a0f4:
    // 0x60a0f4: 0x0  nop
    ctx->pc = 0x60a0f4u;
    // NOP
label_60a0f8:
    // 0x60a0f8: 0x747368  .word       0x00747368                   # mfsa        $t6 # 00740340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x60a0f8u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_60a0fc:
    // 0x60a0fc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x60a0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_60a100:
    // 0x60a100: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x60a100u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_60a104:
    // 0x60a104: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a104u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A104 raw=0x00000001");
label_60a108:
    // 0x60a108: 0x0  nop
    ctx->pc = 0x60a108u;
    // NOP
label_60a10c:
    // 0x60a10c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a10cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A10C raw=0x00000001");
label_60a110:
    // 0x60a110: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a110u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A110 raw=0x00000001");
label_60a114:
    // 0x60a114: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a114u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A114 raw=0x00000001");
label_60a118:
    // 0x60a118: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a118u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A118 raw=0x00000001");
label_60a11c:
    // 0x60a11c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a11cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A11C raw=0x00000001");
label_60a120:
    // 0x60a120: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a120u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A120 raw=0x00000001");
label_60a124:
    // 0x60a124: 0x0  nop
    ctx->pc = 0x60a124u;
    // NOP
label_60a128:
    // 0x60a128: 0x74614470  .word       0x74614470                   # INVALID     $v1, $at, 0x4470 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60a128u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x60A128 raw=0x74614470");
label_60a12c:
    // 0x60a12c: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a12cu;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_60a130:
    // 0x60a130: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a130u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A130 raw=0x00000001");
label_60a134:
    // 0x60a134: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a134u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A134 raw=0x00000001");
label_60a138:
    // 0x60a138: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a138u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A138 raw=0x00000001");
label_60a13c:
    // 0x60a13c: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x60a13cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_60a140:
    // 0x60a140: 0x2573252f  addiu       $s3, $t3, 0x252F
    ctx->pc = 0x60a140u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), 9519));
label_60a144:
    // 0x60a144: 0x732573  tltu        $v1, $s3, 149
    ctx->pc = 0x60a144u;
    if (GPR_U64(ctx, 3) < GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
label_60a148:
    // 0x60a148: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a148u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A148 raw=0x00000001");
label_60a14c:
    // 0x60a14c: 0x0  nop
    ctx->pc = 0x60a14cu;
    // NOP
label_60a150:
    // 0x60a150: 0x73257325  .word       0x73257325                   # INVALID     $t9, $a1, 0x7325 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x60a150u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x60A150 raw=0x73257325");
label_60a154:
    // 0x60a154: 0x7325  .word       0x00007325                   # move        $t6, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a154u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_60a158:
    // 0x60a158: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a158u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A158 raw=0x00000001");
label_60a15c:
    // 0x60a15c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a15cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A15C raw=0x00000001");
label_60a160:
    // 0x60a160: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a160u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A160 raw=0x00000001");
label_60a164:
    // 0x60a164: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a164u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A164 raw=0x00000001");
label_60a168:
    // 0x60a168: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a168u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A168 raw=0x00000001");
label_60a16c:
    // 0x60a16c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a16cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A16C raw=0x00000001");
label_60a170:
    // 0x60a170: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a170u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A170 raw=0x00000001");
label_60a174:
    // 0x60a174: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a174u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A174 raw=0x00000001");
label_60a178:
    // 0x60a178: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a178u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A178 raw=0x00000001");
label_60a17c:
    // 0x60a17c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a17cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A17C raw=0x00000001");
label_60a180:
    // 0x60a180: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a180u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A180 raw=0x00000001");
label_60a184:
    // 0x60a184: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a184u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A184 raw=0x00000001");
label_60a188:
    // 0x60a188: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a188u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A188 raw=0x00000001");
label_60a18c:
    // 0x60a18c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a18cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A18C raw=0x00000001");
label_60a190:
    // 0x60a190: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a190u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A190 raw=0x00000001");
label_60a194:
    // 0x60a194: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a194u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A194 raw=0x00000001");
label_60a198:
    // 0x60a198: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a198u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A198 raw=0x00000001");
label_60a19c:
    // 0x60a19c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a19cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A19C raw=0x00000001");
label_60a1a0:
    // 0x60a1a0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a1a0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A1A0 raw=0x00000001");
label_60a1a4:
    // 0x60a1a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a1a4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A1A4 raw=0x00000001");
label_60a1a8:
    // 0x60a1a8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a1a8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A1A8 raw=0x00000001");
label_60a1ac:
    // 0x60a1ac: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a1acu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A1AC raw=0x00000001");
label_60a1b0:
    // 0x60a1b0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a1b0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A1B0 raw=0x00000001");
label_60a1b4:
    // 0x60a1b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a1b4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A1B4 raw=0x00000001");
label_60a1b8:
    // 0x60a1b8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a1b8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A1B8 raw=0x00000001");
label_60a1bc:
    // 0x60a1bc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a1bcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A1BC raw=0x00000001");
label_60a1c0:
    // 0x60a1c0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a1c0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A1C0 raw=0x00000001");
label_60a1c4:
    // 0x60a1c4: 0x2a7325  .word       0x002A7325                   # or          $t6, $at, $t2 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a1c4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) | GPR_U64(ctx, 10));
label_60a1c8:
    // 0x60a1c8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a1c8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A1C8 raw=0x00000001");
label_60a1cc:
    // 0x60a1cc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a1ccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A1CC raw=0x00000001");
label_60a1d0:
    // 0x60a1d0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a1d0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A1D0 raw=0x00000001");
label_60a1d4:
    // 0x60a1d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a1d4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A1D4 raw=0x00000001");
label_60a1d8:
    // 0x60a1d8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a1d8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A1D8 raw=0x00000001");
label_60a1dc:
    // 0x60a1dc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a1dcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A1DC raw=0x00000001");
label_60a1e0:
    // 0x60a1e0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a1e0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A1E0 raw=0x00000001");
label_60a1e4:
    // 0x60a1e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a1e4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A1E4 raw=0x00000001");
label_60a1e8:
    // 0x60a1e8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a1e8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A1E8 raw=0x00000001");
label_60a1ec:
    // 0x60a1ec: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a1ecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A1EC raw=0x00000001");
label_60a1f0:
    // 0x60a1f0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a1f0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A1F0 raw=0x00000001");
label_60a1f4:
    // 0x60a1f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a1f4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A1F4 raw=0x00000001");
label_60a1f8:
    // 0x60a1f8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a1f8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A1F8 raw=0x00000001");
label_60a1fc:
    // 0x60a1fc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a1fcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A1FC raw=0x00000001");
label_60a200:
    // 0x60a200: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x60a200u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_60a204:
    // 0x60a204: 0x0  nop
    ctx->pc = 0x60a204u;
    // NOP
label_60a208:
    // 0x60a208: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a208u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A208 raw=0x00000001");
label_60a20c:
    // 0x60a20c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a20cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A20C raw=0x00000001");
label_60a210:
    // 0x60a210: 0x203c2063  addi        $gp, $at, 0x2063
    ctx->pc = 0x60a210u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8291, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 28, (int32_t)tmp); }
label_60a214:
    // 0x60a214: 0x363532  tlt         $at, $s6, 212
    ctx->pc = 0x60a214u;
    if (GPR_S64(ctx, 1) < GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_60a218:
    // 0x60a218: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a218u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_60a21c:
    // 0x60a21c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a21cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A21C raw=0x00000001");
label_60a220:
    // 0x60a220: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a220u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A220 raw=0x00000001");
label_60a224:
    // 0x60a224: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a224u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A224 raw=0x00000001");
label_60a228:
    // 0x60a228: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a228u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A228 raw=0x00000001");
label_60a22c:
    // 0x60a22c: 0x787561  .word       0x00787561                   # addu        $t6, $v1, $t8 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a22cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
label_60a230:
    // 0x60a230: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a230u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A230 raw=0x00000001");
label_60a234:
    // 0x60a234: 0x6272  tlt         $zero, $zero, 393
    ctx->pc = 0x60a234u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_60a238:
    // 0x60a238: 0x6277  .word       0x00006277                   # INVALID     $zero, $zero, 0x6277 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a238u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x60A238 raw=0x00006277");
label_60a23c:
    // 0x60a23c: 0x0  nop
    ctx->pc = 0x60a23cu;
    // NOP
label_60a240:
    // 0x60a240: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a240u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A240 raw=0x00000001");
label_60a244:
    // 0x60a244: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a244u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A244 raw=0x00000001");
label_60a248:
    // 0x60a248: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a248u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A248 raw=0x00000001");
label_60a24c:
    // 0x60a24c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a24cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A24C raw=0x00000001");
label_60a250:
    // 0x60a250: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a250u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A250 raw=0x00000001");
label_60a254:
    // 0x60a254: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a254u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A254 raw=0x00000001");
label_60a258:
    // 0x60a258: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a258u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A258 raw=0x00000001");
label_60a25c:
    // 0x60a25c: 0x0  nop
    ctx->pc = 0x60a25cu;
    // NOP
label_60a260:
    // 0x60a260: 0x5c  .word       0x0000005C                   # dmult       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a260u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x60A260 raw=0x0000005C");
label_60a264:
    // 0x60a264: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x60a264u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_60a268:
    // 0x60a268: 0x5c  .word       0x0000005C                   # dmult       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a268u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x60A268 raw=0x0000005C");
label_60a26c:
    // 0x60a26c: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x60a26cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_60a270:
    // 0x60a270: 0x7472  tlt         $zero, $zero, 465
    ctx->pc = 0x60a270u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_60a274:
    // 0x60a274: 0x6272  tlt         $zero, $zero, 393
    ctx->pc = 0x60a274u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_60a278:
    // 0x60a278: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a278u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A278 raw=0x00000001");
label_60a27c:
    // 0x60a27c: 0x0  nop
    ctx->pc = 0x60a27cu;
    // NOP
label_60a280:
    // 0x60a280: 0x73655262  .word       0x73655262                   # INVALID     $k1, $a1, 0x5262 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x60a280u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x60A280 raw=0x73655262");
label_60a284:
    // 0x60a284: 0x746c75  .word       0x00746C75                   # INVALID     $v1, $s4, 0x6C75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a284u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x60A284 raw=0x00746C75");
label_60a288:
    // 0x60a288: 0x5c  .word       0x0000005C                   # dmult       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a288u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x60A288 raw=0x0000005C");
label_60a28c:
    // 0x60a28c: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x60a28cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_60a290:
    // 0x60a290: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a290u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A290 raw=0x00000001");
label_60a294:
    // 0x60a294: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a294u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A294 raw=0x00000001");
label_60a298:
    // 0x60a298: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a298u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A298 raw=0x00000001");
label_60a29c:
    // 0x60a29c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a29cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A29C raw=0x00000001");
label_60a2a0:
    // 0x60a2a0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a2a0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A2A0 raw=0x00000001");
label_60a2a4:
    // 0x60a2a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a2a4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A2A4 raw=0x00000001");
label_60a2a8:
    // 0x60a2a8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a2a8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A2A8 raw=0x00000001");
label_60a2ac:
    // 0x60a2ac: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a2acu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A2AC raw=0x00000001");
label_60a2b0:
    // 0x60a2b0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a2b0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A2B0 raw=0x00000001");
label_60a2b4:
    // 0x60a2b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a2b4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A2B4 raw=0x00000001");
label_60a2b8:
    // 0x60a2b8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a2b8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A2B8 raw=0x00000001");
label_60a2bc:
    // 0x60a2bc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a2bcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A2BC raw=0x00000001");
label_60a2c0:
    // 0x60a2c0: 0x0  nop
    ctx->pc = 0x60a2c0u;
    // NOP
label_60a2c4:
    // 0x60a2c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a2c4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A2C4 raw=0x00000001");
label_60a2c8:
    // 0x60a2c8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a2c8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A2C8 raw=0x00000001");
label_60a2cc:
    // 0x60a2cc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a2ccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A2CC raw=0x00000001");
label_60a2d0:
    // 0x60a2d0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a2d0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A2D0 raw=0x00000001");
label_60a2d4:
    // 0x60a2d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a2d4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A2D4 raw=0x00000001");
label_60a2d8:
    // 0x60a2d8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a2d8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A2D8 raw=0x00000001");
label_60a2dc:
    // 0x60a2dc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a2dcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A2DC raw=0x00000001");
label_60a2e0:
    // 0x60a2e0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a2e0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A2E0 raw=0x00000001");
label_60a2e4:
    // 0x60a2e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a2e4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A2E4 raw=0x00000001");
label_60a2e8:
    // 0x60a2e8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a2e8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A2E8 raw=0x00000001");
label_60a2ec:
    // 0x60a2ec: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a2ecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A2EC raw=0x00000001");
label_60a2f0:
    // 0x60a2f0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a2f0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A2F0 raw=0x00000001");
label_60a2f4:
    // 0x60a2f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a2f4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A2F4 raw=0x00000001");
label_60a2f8:
    // 0x60a2f8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a2f8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A2F8 raw=0x00000001");
label_60a2fc:
    // 0x60a2fc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a2fcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A2FC raw=0x00000001");
label_60a300:
    // 0x60a300: 0x616d4970  daddi       $t5, $t3, 0x4970
    ctx->pc = 0x60a300u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)18800; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_60a304:
    // 0x60a304: 0x6567  .word       0x00006567                   # not         $t4, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a304u;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_60a308:
    // 0x60a308: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a308u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A308 raw=0x00000001");
label_60a30c:
    // 0x60a30c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a30cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A30C raw=0x00000001");
label_60a310:
    // 0x60a310: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a310u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A310 raw=0x00000001");
label_60a314:
    // 0x60a314: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a314u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A314 raw=0x00000001");
label_60a318:
    // 0x60a318: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a318u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A318 raw=0x00000001");
label_60a31c:
    // 0x60a31c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a31cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A31C raw=0x00000001");
label_60a320:
    // 0x60a320: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a320u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A320 raw=0x00000001");
label_60a324:
    // 0x60a324: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a324u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A324 raw=0x00000001");
label_60a328:
    // 0x60a328: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a328u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A328 raw=0x00000001");
label_60a32c:
    // 0x60a32c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a32cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A32C raw=0x00000001");
label_60a330:
    // 0x60a330: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a330u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A330 raw=0x00000001");
label_60a334:
    // 0x60a334: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a334u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A334 raw=0x00000001");
label_60a338:
    // 0x60a338: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x60a338u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_60a33c:
    // 0x60a33c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a33cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A33C raw=0x00000001");
label_60a340:
    // 0x60a340: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a340u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A340 raw=0x00000001");
label_60a344:
    // 0x60a344: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a344u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A344 raw=0x00000001");
label_60a348:
    // 0x60a348: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a348u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A348 raw=0x00000001");
label_60a34c:
    // 0x60a34c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a34cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A34C raw=0x00000001");
label_60a350:
    // 0x60a350: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a350u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A350 raw=0x00000001");
label_60a354:
    // 0x60a354: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a354u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A354 raw=0x00000001");
label_60a358:
    // 0x60a358: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a358u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A358 raw=0x00000001");
label_60a35c:
    // 0x60a35c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a35cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A35C raw=0x00000001");
label_60a360:
    // 0x60a360: 0x0  nop
    ctx->pc = 0x60a360u;
    // NOP
label_60a364:
    // 0x60a364: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a364u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A364 raw=0x00000001");
label_60a368:
    // 0x60a368: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a368u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A368 raw=0x00000001");
label_60a36c:
    // 0x60a36c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a36cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A36C raw=0x00000001");
label_60a370:
    // 0x60a370: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a370u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A370 raw=0x00000001");
label_60a374:
    // 0x60a374: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a374u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A374 raw=0x00000001");
label_60a378:
    // 0x60a378: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a378u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A378 raw=0x00000001");
label_60a37c:
    // 0x60a37c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a37cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A37C raw=0x00000001");
label_60a380:
    // 0x60a380: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a380u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A380 raw=0x00000001");
label_60a384:
    // 0x60a384: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a384u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A384 raw=0x00000001");
label_60a388:
    // 0x60a388: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a388u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A388 raw=0x00000001");
label_60a38c:
    // 0x60a38c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a38cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A38C raw=0x00000001");
label_60a390:
    // 0x60a390: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a390u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A390 raw=0x00000001");
label_60a394:
    // 0x60a394: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a394u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A394 raw=0x00000001");
label_60a398:
    // 0x60a398: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a398u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A398 raw=0x00000001");
label_60a39c:
    // 0x60a39c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a39cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A39C raw=0x00000001");
label_60a3a0:
    // 0x60a3a0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a3a0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A3A0 raw=0x00000001");
label_60a3a4:
    // 0x60a3a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a3a4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A3A4 raw=0x00000001");
label_60a3a8:
    // 0x60a3a8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a3a8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A3A8 raw=0x00000001");
label_60a3ac:
    // 0x60a3ac: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a3acu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A3AC raw=0x00000001");
label_60a3b0:
    // 0x60a3b0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a3b0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A3B0 raw=0x00000001");
label_60a3b4:
    // 0x60a3b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a3b4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A3B4 raw=0x00000001");
label_60a3b8:
    // 0x60a3b8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a3b8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A3B8 raw=0x00000001");
label_60a3bc:
    // 0x60a3bc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a3bcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A3BC raw=0x00000001");
label_60a3c0:
    // 0x60a3c0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a3c0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A3C0 raw=0x00000001");
label_60a3c4:
    // 0x60a3c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a3c4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A3C4 raw=0x00000001");
label_60a3c8:
    // 0x60a3c8: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x60a3c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_60a3cc:
    // 0x60a3cc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a3ccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A3CC raw=0x00000001");
label_60a3d0:
    // 0x60a3d0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a3d0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A3D0 raw=0x00000001");
label_60a3d4:
    // 0x60a3d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a3d4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A3D4 raw=0x00000001");
label_60a3d8:
    // 0x60a3d8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a3d8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A3D8 raw=0x00000001");
label_60a3dc:
    // 0x60a3dc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a3dcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A3DC raw=0x00000001");
label_60a3e0:
    // 0x60a3e0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a3e0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A3E0 raw=0x00000001");
label_60a3e4:
    // 0x60a3e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a3e4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A3E4 raw=0x00000001");
label_60a3e8:
    // 0x60a3e8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a3e8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A3E8 raw=0x00000001");
label_60a3ec:
    // 0x60a3ec: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a3ecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A3EC raw=0x00000001");
label_60a3f0:
    // 0x60a3f0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a3f0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A3F0 raw=0x00000001");
label_60a3f4:
    // 0x60a3f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a3f4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A3F4 raw=0x00000001");
label_60a3f8:
    // 0x60a3f8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a3f8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A3F8 raw=0x00000001");
label_60a3fc:
    // 0x60a3fc: 0x0  nop
    ctx->pc = 0x60a3fcu;
    // NOP
label_60a400:
    // 0x60a400: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a400u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A400 raw=0x00000001");
label_60a404:
    // 0x60a404: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a404u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A404 raw=0x00000001");
label_60a408:
    // 0x60a408: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a408u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A408 raw=0x00000001");
label_60a40c:
    // 0x60a40c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a40cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A40C raw=0x00000001");
label_60a410:
    // 0x60a410: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a410u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A410 raw=0x00000001");
label_60a414:
    // 0x60a414: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a414u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A414 raw=0x00000001");
label_60a418:
    // 0x60a418: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a418u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A418 raw=0x00000001");
label_60a41c:
    // 0x60a41c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a41cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A41C raw=0x00000001");
label_60a420:
    // 0x60a420: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a420u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A420 raw=0x00000001");
label_60a424:
    // 0x60a424: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x60a424u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_60a428:
    // 0x60a428: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a428u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A428 raw=0x00000001");
label_60a42c:
    // 0x60a42c: 0x0  nop
    ctx->pc = 0x60a42cu;
    // NOP
label_60a430:
    // 0x60a430: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a430u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A430 raw=0x00000001");
label_60a434:
    // 0x60a434: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a434u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A434 raw=0x00000001");
label_60a438:
    // 0x60a438: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a438u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A438 raw=0x00000001");
label_60a43c:
    // 0x60a43c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a43cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A43C raw=0x00000001");
label_60a440:
    // 0x60a440: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a440u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A440 raw=0x00000001");
label_60a444:
    // 0x60a444: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a444u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A444 raw=0x00000001");
label_60a448:
    // 0x60a448: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a448u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A448 raw=0x00000001");
label_60a44c:
    // 0x60a44c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a44cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A44C raw=0x00000001");
label_60a450:
    // 0x60a450: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a450u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A450 raw=0x00000001");
label_60a454:
    // 0x60a454: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a454u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A454 raw=0x00000001");
label_60a458:
    // 0x60a458: 0x0  nop
    ctx->pc = 0x60a458u;
    // NOP
label_60a45c:
    // 0x60a45c: 0x0  nop
    ctx->pc = 0x60a45cu;
    // NOP
label_60a460:
    // 0x60a460: 0x72655a75  .word       0x72655A75                   # INVALID     $s3, $a1, 0x5A75 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x60a460u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x60A460 raw=0x72655A75");
label_60a464:
    // 0x60a464: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a464u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_60a468:
    // 0x60a468: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a468u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A468 raw=0x00000001");
label_60a46c:
    // 0x60a46c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a46cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A46C raw=0x00000001");
label_60a470:
    // 0x60a470: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a470u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A470 raw=0x00000001");
label_60a474:
    // 0x60a474: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a474u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A474 raw=0x00000001");
label_60a478:
    // 0x60a478: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x60a478u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_60a47c:
    // 0x60a47c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a47cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A47C raw=0x00000001");
label_60a480:
    // 0x60a480: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a480u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A480 raw=0x00000001");
label_60a484:
    // 0x60a484: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a484u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A484 raw=0x00000001");
label_60a488:
    // 0x60a488: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a488u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A488 raw=0x00000001");
label_60a48c:
    // 0x60a48c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a48cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A48C raw=0x00000001");
label_60a490:
    // 0x60a490: 0x706d746c  .word       0x706D746C                   # INVALID     $v1, $t5, 0x746C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x60a490u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x60A490 raw=0x706D746C");
label_60a494:
    // 0x60a494: 0x0  nop
    ctx->pc = 0x60a494u;
    // NOP
label_60a498:
    // 0x60a498: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a498u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A498 raw=0x00000001");
label_60a49c:
    // 0x60a49c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a49cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A49C raw=0x00000001");
label_60a4a0:
    // 0x60a4a0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a4a0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A4A0 raw=0x00000001");
label_60a4a4:
    // 0x60a4a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a4a4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A4A4 raw=0x00000001");
label_60a4a8:
    // 0x60a4a8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a4a8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A4A8 raw=0x00000001");
label_60a4ac:
    // 0x60a4ac: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a4acu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A4AC raw=0x00000001");
label_60a4b0:
    // 0x60a4b0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a4b0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A4B0 raw=0x00000001");
label_60a4b4:
    // 0x60a4b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a4b4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A4B4 raw=0x00000001");
label_60a4b8:
    // 0x60a4b8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a4b8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A4B8 raw=0x00000001");
label_60a4bc:
    // 0x60a4bc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a4bcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A4BC raw=0x00000001");
label_60a4c0:
    // 0x60a4c0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a4c0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A4C0 raw=0x00000001");
label_60a4c4:
    // 0x60a4c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a4c4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A4C4 raw=0x00000001");
label_60a4c8:
    // 0x60a4c8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a4c8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A4C8 raw=0x00000001");
label_60a4cc:
    // 0x60a4cc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a4ccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A4CC raw=0x00000001");
label_60a4d0:
    // 0x60a4d0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a4d0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A4D0 raw=0x00000001");
label_60a4d4:
    // 0x60a4d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a4d4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A4D4 raw=0x00000001");
label_60a4d8:
    // 0x60a4d8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a4d8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A4D8 raw=0x00000001");
label_60a4dc:
    // 0x60a4dc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a4dcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A4DC raw=0x00000001");
label_60a4e0:
    // 0x60a4e0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a4e0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A4E0 raw=0x00000001");
label_60a4e4:
    // 0x60a4e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a4e4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A4E4 raw=0x00000001");
label_60a4e8:
    // 0x60a4e8: 0x676e702e  daddiu      $t6, $k1, 0x702E
    ctx->pc = 0x60a4e8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28718);
label_60a4ec:
    // 0x60a4ec: 0x0  nop
    ctx->pc = 0x60a4ecu;
    // NOP
label_60a4f0:
    // 0x60a4f0: 0x0  nop
    ctx->pc = 0x60a4f0u;
    // NOP
label_60a4f4:
    // 0x60a4f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a4f4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A4F4 raw=0x00000001");
label_60a4f8:
    // 0x60a4f8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x60a4f8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_60a4fc:
    // 0x60a4fc: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x60a4fcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_60a500:
    // 0x60a500: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a500u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A500 raw=0x00000001");
label_60a504:
    // 0x60a504: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a504u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A504 raw=0x00000001");
label_60a508:
    // 0x60a508: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a508u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A508 raw=0x00000001");
label_60a50c:
    // 0x60a50c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a50cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A50C raw=0x00000001");
label_60a510:
    // 0x60a510: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a510u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A510 raw=0x00000001");
label_60a514:
    // 0x60a514: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a514u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A514 raw=0x00000001");
label_60a518:
    // 0x60a518: 0x6c43705f  ldr         $v1, 0x705F($v0)
    ctx->pc = 0x60a518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 28767); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_60a51c:
    // 0x60a51c: 0x706d75  .word       0x00706D75                   # INVALID     $v1, $s0, 0x6D75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a51cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x60A51C raw=0x00706D75");
label_60a520:
    // 0x60a520: 0x656d616e  daddiu      $t5, $t3, 0x616E
    ctx->pc = 0x60a520u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
label_60a524:
    // 0x60a524: 0x0  nop
    ctx->pc = 0x60a524u;
    // NOP
label_60a528:
    // 0x60a528: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a528u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A528 raw=0x00000001");
label_60a52c:
    // 0x60a52c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a52cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A52C raw=0x00000001");
label_60a530:
    // 0x60a530: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a530u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A530 raw=0x00000001");
label_60a534:
    // 0x60a534: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a534u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A534 raw=0x00000001");
label_60a538:
    // 0x60a538: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a538u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A538 raw=0x00000001");
label_60a53c:
    // 0x60a53c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a53cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A53C raw=0x00000001");
label_60a540:
    // 0x60a540: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a540u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A540 raw=0x00000001");
label_60a544:
    // 0x60a544: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a544u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A544 raw=0x00000001");
label_60a548:
    // 0x60a548: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a548u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A548 raw=0x00000001");
label_60a54c:
    // 0x60a54c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a54cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A54C raw=0x00000001");
label_60a550:
    // 0x60a550: 0x3d676174  .word       0x3D676174                   # lui         $a3, 0x6174 # 01600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x60a550u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24948 << 16));
label_60a554:
    // 0x60a554: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a554u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_60a558:
    // 0x60a558: 0x0  nop
    ctx->pc = 0x60a558u;
    // NOP
label_60a55c:
    // 0x60a55c: 0x0  nop
    ctx->pc = 0x60a55cu;
    // NOP
label_60a560:
    // 0x60a560: 0xa4b4f20  j           func_92D3C80
label_60a564:
    if (ctx->pc == 0x60A564u) {
        ctx->pc = 0x60A568u;
        goto label_60a568;
    }
    ctx->pc = 0x60A560u;
    ctx->pc = 0x92D3C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x92D3C80u, 0x60A560u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x60A568u;
label_60a568:
    // 0x60a568: 0x7825  move        $t7, $zero
    ctx->pc = 0x60a568u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_60a56c:
    // 0x60a56c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a56cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A56C raw=0x00000001");
label_60a570:
    // 0x60a570: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x60a570u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_60a574:
    // 0x60a574: 0x706d62  .word       0x00706D62                   # sub         $t5, $v1, $s0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a574u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 3), GPR_U32(ctx, 16), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_60a578:
    // 0x60a578: 0x676e70  tge         $v1, $a3, 441
    ctx->pc = 0x60a578u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_60a57c:
    // 0x60a57c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a57cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A57C raw=0x00000001");
label_60a580:
    // 0x60a580: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a580u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A580 raw=0x00000001");
label_60a584:
    // 0x60a584: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a584u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A584 raw=0x00000001");
label_60a588:
    // 0x60a588: 0x0  nop
    ctx->pc = 0x60a588u;
    // NOP
label_60a58c:
    // 0x60a58c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a58cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A58C raw=0x00000001");
label_60a590:
    // 0x60a590: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a590u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A590 raw=0x00000001");
label_60a594:
    // 0x60a594: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a594u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A594 raw=0x00000001");
label_60a598:
    // 0x60a598: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a598u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A598 raw=0x00000001");
label_60a59c:
    // 0x60a59c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a59cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A59C raw=0x00000001");
label_60a5a0:
    // 0x60a5a0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a5a0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A5A0 raw=0x00000001");
label_60a5a4:
    // 0x60a5a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a5a4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A5A4 raw=0x00000001");
label_60a5a8:
    // 0x60a5a8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a5a8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A5A8 raw=0x00000001");
label_60a5ac:
    // 0x60a5ac: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a5acu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A5AC raw=0x00000001");
label_60a5b0:
    // 0x60a5b0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a5b0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A5B0 raw=0x00000001");
label_60a5b4:
    // 0x60a5b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a5b4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A5B4 raw=0x00000001");
label_60a5b8:
    // 0x60a5b8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a5b8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A5B8 raw=0x00000001");
label_60a5bc:
    // 0x60a5bc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a5bcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A5BC raw=0x00000001");
label_60a5c0:
    // 0x60a5c0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a5c0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A5C0 raw=0x00000001");
label_60a5c4:
    // 0x60a5c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a5c4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A5C4 raw=0x00000001");
label_60a5c8:
    // 0x60a5c8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a5c8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A5C8 raw=0x00000001");
label_60a5cc:
    // 0x60a5cc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a5ccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A5CC raw=0x00000001");
label_60a5d0:
    // 0x60a5d0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a5d0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A5D0 raw=0x00000001");
label_60a5d4:
    // 0x60a5d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a5d4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A5D4 raw=0x00000001");
label_60a5d8:
    // 0x60a5d8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a5d8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A5D8 raw=0x00000001");
label_60a5dc:
    // 0x60a5dc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a5dcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A5DC raw=0x00000001");
label_60a5e0:
    // 0x60a5e0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a5e0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A5E0 raw=0x00000001");
label_60a5e4:
    // 0x60a5e4: 0x0  nop
    ctx->pc = 0x60a5e4u;
    // NOP
label_60a5e8:
    // 0x60a5e8: 0x68706c61  ldl         $s0, 0x6C61($v1)
    ctx->pc = 0x60a5e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27745); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_60a5ec:
    // 0x60a5ec: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a5ecu;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_60a5f0:
    // 0x60a5f0: 0x0  nop
    ctx->pc = 0x60a5f0u;
    // NOP
label_60a5f4:
    // 0x60a5f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a5f4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A5F4 raw=0x00000001");
label_60a5f8:
    // 0x60a5f8: 0x7377722e  .word       0x7377722E                   # INVALID     $k1, $s7, 0x722E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x60a5f8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x60A5F8 raw=0x7377722E");
label_60a5fc:
    // 0x60a5fc: 0x0  nop
    ctx->pc = 0x60a5fcu;
    // NOP
label_60a600:
    // 0x60a600: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a600u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A600 raw=0x00000001");
label_60a604:
    // 0x60a604: 0x0  nop
    ctx->pc = 0x60a604u;
    // NOP
label_60a608:
    // 0x60a608: 0x534c4146  beql        $k0, $t4, . + 4 + (0x4146 << 2)
label_60a60c:
    if (ctx->pc == 0x60A60Cu) {
        ctx->pc = 0x60A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x60A608u;
        // 0x60a60c: 0x45  .word       0x00000045                   # INVALID     $zero, $zero, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x60A60C raw=0x00000045");
        ctx->in_delay_slot = false;
        ctx->pc = 0x60A610u;
        goto label_60a610;
    }
    ctx->pc = 0x60A608u;
    {
        const bool branch_taken_0x60a608 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 12));
        if (branch_taken_0x60a608) {
            ctx->pc = 0x60A60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x60A608u;
            // 0x60a60c: 0x45  .word       0x00000045                   # INVALID     $zero, $zero, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x60A60C raw=0x00000045");
            ctx->in_delay_slot = false;
            ctx->pc = 0x61AB24u;
            return;
        }
    }
    ctx->pc = 0x60A610u;
label_60a610:
    // 0x60a610: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a610u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A610 raw=0x00000001");
label_60a614:
    // 0x60a614: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a614u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A614 raw=0x00000001");
label_60a618:
    // 0x60a618: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a618u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A618 raw=0x00000001");
label_60a61c:
    // 0x60a61c: 0xff0000ff  sd          $zero, 0xFF($t8)
    ctx->pc = 0x60a61cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 255), GPR_U64(ctx, 0));
label_60a620:
    // 0x60a620: 0xff00ff00  sd          $zero, -0x100($t8)
    ctx->pc = 0x60a620u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 4294967040), GPR_U64(ctx, 0));
label_60a624:
    // 0x60a624: 0xffff0000  sd          $ra, 0x0($ra)
    ctx->pc = 0x60a624u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 0), GPR_U64(ctx, 31));
label_60a628:
    // 0x60a628: 0xff000000  sd          $zero, 0x0($t8)
    ctx->pc = 0x60a628u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 0));
label_60a62c:
    // 0x60a62c: 0xff7f7f7f  sd          $ra, 0x7F7F($k1)
    ctx->pc = 0x60a62cu;
    WRITE64(ADD32(GPR_U32(ctx, 27), 32639), GPR_U64(ctx, 31));
label_60a630:
    // 0x60a630: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x60a630u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_60a634:
    // 0x60a634: 0xff004080  sd          $zero, 0x4080($t8)
    ctx->pc = 0x60a634u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 16512), GPR_U64(ctx, 0));
label_60a638:
    // 0x60a638: 0xffcbc0ff  sd          $t3, -0x3F01($fp)
    ctx->pc = 0x60a638u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 4294951167), GPR_U64(ctx, 11));
label_60a63c:
    // 0x60a63c: 0xff00ffff  sd          $zero, -0x1($t8)
    ctx->pc = 0x60a63cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 4294967295), GPR_U64(ctx, 0));
label_60a640:
    // 0x60a640: 0xff00a5ff  sd          $zero, -0x5A01($t8)
    ctx->pc = 0x60a640u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 4294944255), GPR_U64(ctx, 0));
label_60a644:
    // 0x60a644: 0xffaaffff  sd          $t2, -0x1($sp)
    ctx->pc = 0x60a644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4294967295), GPR_U64(ctx, 10));
label_60a648:
    // 0x60a648: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x60a648u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_60a64c:
    // 0x60a64c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a64cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A64C raw=0x00000001");
label_60a650:
    // 0x60a650: 0x0  nop
    ctx->pc = 0x60a650u;
    // NOP
label_60a654:
    // 0x60a654: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a654u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A654 raw=0x00000001");
label_60a658:
    // 0x60a658: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a658u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A658 raw=0x00000001");
label_60a65c:
    // 0x60a65c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a65cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A65C raw=0x00000001");
label_60a660:
    // 0x60a660: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a660u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A660 raw=0x00000001");
label_60a664:
    // 0x60a664: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a664u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A664 raw=0x00000001");
label_60a668:
    // 0x60a668: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a668u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A668 raw=0x00000001");
label_60a66c:
    // 0x60a66c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a66cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A66C raw=0x00000001");
label_60a670:
    // 0x60a670: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a670u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A670 raw=0x00000001");
label_60a674:
    // 0x60a674: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a674u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A674 raw=0x00000001");
label_60a678:
    // 0x60a678: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a678u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A678 raw=0x00000001");
label_60a67c:
    // 0x60a67c: 0x0  nop
    ctx->pc = 0x60a67cu;
    // NOP
label_60a680:
    // 0x60a680: 0x6c43705f  ldr         $v1, 0x705F($v0)
    ctx->pc = 0x60a680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 28767); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_60a684:
    // 0x60a684: 0x706d75  .word       0x00706D75                   # INVALID     $v1, $s0, 0x6D75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a684u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x60A684 raw=0x00706D75");
label_60a688:
    // 0x60a688: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a688u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A688 raw=0x00000001");
label_60a68c:
    // 0x60a68c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a68cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A68C raw=0x00000001");
label_60a690:
    // 0x60a690: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a690u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A690 raw=0x00000001");
label_60a694:
    // 0x60a694: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a694u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A694 raw=0x00000001");
label_60a698:
    // 0x60a698: 0x41c80000  .word       0x41C80000                   # INVALID     $t6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x60a698u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x60A698 raw=0x41C80000");
label_60a69c:
    // 0x60a69c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x60a69cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_60a6a0:
    // 0x60a6a0: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x60a6a0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_60a6a4:
    // 0x60a6a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a6a4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A6A4 raw=0x00000001");
label_60a6a8:
    // 0x60a6a8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a6a8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A6A8 raw=0x00000001");
label_60a6ac:
    // 0x60a6ac: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a6acu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A6AC raw=0x00000001");
label_60a6b0:
    // 0x60a6b0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a6b0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A6B0 raw=0x00000001");
label_60a6b4:
    // 0x60a6b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a6b4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A6B4 raw=0x00000001");
label_60a6b8:
    // 0x60a6b8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a6b8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A6B8 raw=0x00000001");
label_60a6bc:
    // 0x60a6bc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a6bcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A6BC raw=0x00000001");
label_60a6c0:
    // 0x60a6c0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a6c0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A6C0 raw=0x00000001");
label_60a6c4:
    // 0x60a6c4: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x60a6c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_60a6c8:
    // 0x60a6c8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a6c8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A6C8 raw=0x00000001");
label_60a6cc:
    // 0x60a6cc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a6ccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A6CC raw=0x00000001");
label_60a6d0:
    // 0x60a6d0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a6d0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A6D0 raw=0x00000001");
label_60a6d4:
    // 0x60a6d4: 0x0  nop
    ctx->pc = 0x60a6d4u;
    // NOP
label_60a6d8:
    // 0x60a6d8: 0x4b624e5f  .word       0x4B624E5F                   # vminii.xzw  $vf25, $vf9, $I # 00020000 <InstrIdType: R5900_COP2_SPECIAL1>
    ctx->pc = 0x60a6d8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[9], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
label_60a6dc:
    // 0x60a6dc: 0x62  .word       0x00000062                   # neg         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a6dcu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_60a6e0:
    // 0x60a6e0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a6e0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A6E0 raw=0x00000001");
label_60a6e4:
    // 0x60a6e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a6e4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A6E4 raw=0x00000001");
label_60a6e8:
    // 0x60a6e8: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a6e8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A6E8 raw=0x00000001");
label_60a6ec:
    // 0x60a6ec: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a6ecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A6EC raw=0x00000001");
label_60a6f0:
    // 0x60a6f0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a6f0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A6F0 raw=0x00000001");
label_60a6f4:
    // 0x60a6f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a6f4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A6F4 raw=0x00000001");
label_60a6f8:
    // 0x60a6f8: 0x0  nop
    ctx->pc = 0x60a6f8u;
    // NOP
label_60a6fc:
    // 0x60a6fc: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a6fcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A6FC raw=0x00000001");
label_60a700:
    // 0x60a700: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a700u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A700 raw=0x00000001");
label_60a704:
    // 0x60a704: 0x0  nop
    ctx->pc = 0x60a704u;
    // NOP
label_60a708:
    // 0x60a708: 0x73706f4f  .word       0x73706F4F                   # INVALID     $k1, $s0, 0x6F4F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x60a708u;
    throw std::runtime_error("Unhandled MMI instruction: function 0xF at 0x60A708 raw=0x73706F4F");
label_60a70c:
    // 0x60a70c: 0x3020  add         $a2, $zero, $zero
    ctx->pc = 0x60a70cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_60a710:
    // 0x60a710: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a710u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A710 raw=0x00000001");
label_60a714:
    // 0x60a714: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a714u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A714 raw=0x00000001");
label_60a718:
    // 0x60a718: 0x0  nop
    ctx->pc = 0x60a718u;
    // NOP
label_60a71c:
    // 0x60a71c: 0x0  nop
    ctx->pc = 0x60a71cu;
    // NOP
label_60a720:
    // 0x60a720: 0x0  nop
    ctx->pc = 0x60a720u;
    // NOP
label_60a724:
    // 0x60a724: 0x0  nop
    ctx->pc = 0x60a724u;
    // NOP
label_60a728:
    // 0x60a728: 0x0  nop
    ctx->pc = 0x60a728u;
    // NOP
label_60a72c:
    // 0x60a72c: 0x0  nop
    ctx->pc = 0x60a72cu;
    // NOP
label_60a730:
    // 0x60a730: 0x0  nop
    ctx->pc = 0x60a730u;
    // NOP
label_60a734:
    // 0x60a734: 0x0  nop
    ctx->pc = 0x60a734u;
    // NOP
label_60a738:
    // 0x60a738: 0x0  nop
    ctx->pc = 0x60a738u;
    // NOP
label_60a73c:
    // 0x60a73c: 0x0  nop
    ctx->pc = 0x60a73cu;
    // NOP
label_60a740:
    // 0x60a740: 0x800000  .word       0x00800000                   # sll         $zero, $zero, 0 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a740u;
    // NOP
label_60a744:
    // 0x60a744: 0x7f7fffff  sq          $ra, -0x1($k1)
    ctx->pc = 0x60a744u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 4294967295), GPR_VEC(ctx, 31));
label_60a748:
    // 0x60a748: 0x0  nop
    ctx->pc = 0x60a748u;
    // NOP
label_60a74c:
    // 0x60a74c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a74cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A74C raw=0x00000001");
label_60a750:
    // 0x60a750: 0x7f80  sll         $t7, $zero, 30
    ctx->pc = 0x60a750u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_60a754:
    // 0x60a754: 0x0  nop
    ctx->pc = 0x60a754u;
    // NOP
label_60a758:
    // 0x60a758: 0xff00  sll         $ra, $zero, 28
    ctx->pc = 0x60a758u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_60a75c:
    // 0x60a75c: 0x0  nop
    ctx->pc = 0x60a75cu;
    // NOP
label_60a760:
    // 0x60a760: 0x7fff8000  sq          $ra, -0x8000($ra)
    ctx->pc = 0x60a760u;
    WRITE128(ADD32(GPR_U32(ctx, 31), 4294934528), GPR_VEC(ctx, 31));
label_60a764:
    // 0x60a764: 0x0  nop
    ctx->pc = 0x60a764u;
    // NOP
label_60a768:
    // 0x60a768: 0xffff0000  sd          $ra, 0x0($ra)
    ctx->pc = 0x60a768u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 0), GPR_U64(ctx, 31));
label_60a76c:
    // 0x60a76c: 0x0  nop
    ctx->pc = 0x60a76cu;
    // NOP
label_60a770:
    // 0x60a770: 0x80000000  lb          $zero, 0x0($zero)
    ctx->pc = 0x60a770u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x0u));
label_60a774:
    // 0x60a774: 0x7fffffff  sq          $ra, -0x1($ra)
    ctx->pc = 0x60a774u;
    WRITE128(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_VEC(ctx, 31));
label_60a778:
    // 0x60a778: 0x0  nop
    ctx->pc = 0x60a778u;
    // NOP
label_60a77c:
    // 0x60a77c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x60a77cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_60a780:
    // 0x60a780: 0x0  nop
    ctx->pc = 0x60a780u;
    // NOP
label_60a784:
    // 0x60a784: 0x0  nop
    ctx->pc = 0x60a784u;
    // NOP
label_60a788:
    // 0x60a788: 0x0  nop
    ctx->pc = 0x60a788u;
    // NOP
label_60a78c:
    // 0x60a78c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a78cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A78C raw=0x00000001");
label_60a790:
    // 0x60a790: 0x0  nop
    ctx->pc = 0x60a790u;
    // NOP
label_60a794:
    // 0x60a794: 0x0  nop
    ctx->pc = 0x60a794u;
    // NOP
label_60a798:
    // 0x60a798: 0x0  nop
    ctx->pc = 0x60a798u;
    // NOP
label_60a79c:
    // 0x60a79c: 0x0  nop
    ctx->pc = 0x60a79cu;
    // NOP
label_60a7a0:
    // 0x60a7a0: 0x0  nop
    ctx->pc = 0x60a7a0u;
    // NOP
label_60a7a4:
    // 0x60a7a4: 0x0  nop
    ctx->pc = 0x60a7a4u;
    // NOP
label_60a7a8:
    // 0x60a7a8: 0x0  nop
    ctx->pc = 0x60a7a8u;
    // NOP
label_60a7ac:
    // 0x60a7ac: 0x0  nop
    ctx->pc = 0x60a7acu;
    // NOP
label_60a7b0:
    // 0x60a7b0: 0x0  nop
    ctx->pc = 0x60a7b0u;
    // NOP
label_60a7b4:
    // 0x60a7b4: 0x0  nop
    ctx->pc = 0x60a7b4u;
    // NOP
label_60a7b8:
    // 0x60a7b8: 0x0  nop
    ctx->pc = 0x60a7b8u;
    // NOP
label_60a7bc:
    // 0x60a7bc: 0x0  nop
    ctx->pc = 0x60a7bcu;
    // NOP
label_60a7c0:
    // 0x60a7c0: 0x7f7fffff  sq          $ra, -0x1($k1)
    ctx->pc = 0x60a7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 4294967295), GPR_VEC(ctx, 31));
label_60a7c4:
    // 0x60a7c4: 0x0  nop
    ctx->pc = 0x60a7c4u;
    // NOP
label_60a7c8:
    // 0x60a7c8: 0x0  nop
    ctx->pc = 0x60a7c8u;
    // NOP
label_60a7cc:
    // 0x60a7cc: 0x0  nop
    ctx->pc = 0x60a7ccu;
    // NOP
label_60a7d0:
    // 0x60a7d0: 0x0  nop
    ctx->pc = 0x60a7d0u;
    // NOP
label_60a7d4:
    // 0x60a7d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a7d4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A7D4 raw=0x00000001");
label_60a7d8:
    // 0x60a7d8: 0x322e3225  andi        $t6, $s1, 0x3225
    ctx->pc = 0x60a7d8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)12837);
label_60a7dc:
    // 0x60a7dc: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x60a7dcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
label_60a7e0:
    // 0x60a7e0: 0x0  nop
    ctx->pc = 0x60a7e0u;
    // NOP
label_60a7e4:
    // 0x60a7e4: 0x0  nop
    ctx->pc = 0x60a7e4u;
    // NOP
label_60a7e8:
    // 0x60a7e8: 0x0  nop
    ctx->pc = 0x60a7e8u;
    // NOP
label_60a7ec:
    // 0x60a7ec: 0x0  nop
    ctx->pc = 0x60a7ecu;
    // NOP
label_60a7f0:
    // 0x60a7f0: 0x0  nop
    ctx->pc = 0x60a7f0u;
    // NOP
label_60a7f4:
    // 0x60a7f4: 0x0  nop
    ctx->pc = 0x60a7f4u;
    // NOP
label_60a7f8:
    // 0x60a7f8: 0x41200000  .word       0x41200000                   # INVALID     $t1, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x60a7f8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x60A7F8 raw=0x41200000");
label_60a7fc:
    // 0x60a7fc: 0x0  nop
    ctx->pc = 0x60a7fcu;
    // NOP
label_60a800:
    // 0x60a800: 0x0  nop
    ctx->pc = 0x60a800u;
    // NOP
label_60a804:
    // 0x60a804: 0x0  nop
    ctx->pc = 0x60a804u;
    // NOP
label_60a808:
    // 0x60a808: 0x0  nop
    ctx->pc = 0x60a808u;
    // NOP
label_60a80c:
    // 0x60a80c: 0x0  nop
    ctx->pc = 0x60a80cu;
    // NOP
label_60a810:
    // 0x60a810: 0x0  nop
    ctx->pc = 0x60a810u;
    // NOP
label_60a814:
    // 0x60a814: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x60a814u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_60a818:
    // 0x60a818: 0x0  nop
    ctx->pc = 0x60a818u;
    // NOP
label_60a81c:
    // 0x60a81c: 0x0  nop
    ctx->pc = 0x60a81cu;
    // NOP
label_60a820:
    // 0x60a820: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x60a820u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x60A820 raw=0x00000001");
label_60a824:
    // 0x60a824: 0x0  nop
    ctx->pc = 0x60a824u;
    // NOP
label_60a828:
    // 0x60a828: 0x0  nop
    ctx->pc = 0x60a828u;
    // NOP
label_60a82c:
    // 0x60a82c: 0x0  nop
    ctx->pc = 0x60a82cu;
    // NOP
label_60a830:
    // 0x60a830: 0x0  nop
    ctx->pc = 0x60a830u;
    // NOP
label_60a834:
    // 0x60a834: 0x0  nop
    ctx->pc = 0x60a834u;
    // NOP
label_60a838:
    // 0x60a838: 0x0  nop
    ctx->pc = 0x60a838u;
    // NOP
label_60a83c:
    // 0x60a83c: 0x0  nop
    ctx->pc = 0x60a83cu;
    // NOP
label_60a840:
    // 0x60a840: 0x0  nop
    ctx->pc = 0x60a840u;
    // NOP
label_60a844:
    // 0x60a844: 0x0  nop
    ctx->pc = 0x60a844u;
    // NOP
label_60a848:
    // 0x60a848: 0x0  nop
    ctx->pc = 0x60a848u;
    // NOP
label_60a84c:
    // 0x60a84c: 0x0  nop
    ctx->pc = 0x60a84cu;
    // NOP
label_60a850:
    // 0x60a850: 0x0  nop
    ctx->pc = 0x60a850u;
    // NOP
label_60a854:
    // 0x60a854: 0x0  nop
    ctx->pc = 0x60a854u;
    // NOP
label_60a858:
    // 0x60a858: 0x0  nop
    ctx->pc = 0x60a858u;
    // NOP
label_60a85c:
    // 0x60a85c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x60a85cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_60a860:
    // 0x60a860: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x60a860u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_60a864:
    // 0x60a864: 0x0  nop
    ctx->pc = 0x60a864u;
    // NOP
label_60a868:
    // 0x60a868: 0x0  nop
    ctx->pc = 0x60a868u;
    // NOP
label_60a86c:
    // 0x60a86c: 0x0  nop
    ctx->pc = 0x60a86cu;
    // NOP
label_60a870:
    // 0x60a870: 0x0  nop
    ctx->pc = 0x60a870u;
    // NOP
label_60a874:
    // 0x60a874: 0x0  nop
    ctx->pc = 0x60a874u;
    // NOP
label_60a878:
    // 0x60a878: 0x0  nop
    ctx->pc = 0x60a878u;
    // NOP
label_60a87c:
    // 0x60a87c: 0x0  nop
    ctx->pc = 0x60a87cu;
    // NOP
label_60a880:
    // 0x60a880: 0x0  nop
    ctx->pc = 0x60a880u;
    // NOP
label_60a884:
    // 0x60a884: 0x0  nop
    ctx->pc = 0x60a884u;
    // NOP
label_60a888:
    // 0x60a888: 0x0  nop
    ctx->pc = 0x60a888u;
    // NOP
label_60a88c:
    // 0x60a88c: 0x0  nop
    ctx->pc = 0x60a88cu;
    // NOP
label_60a890:
    // 0x60a890: 0x0  nop
    ctx->pc = 0x60a890u;
    // NOP
label_60a894:
    // 0x60a894: 0x0  nop
    ctx->pc = 0x60a894u;
    // NOP
label_60a898:
    // 0x60a898: 0x0  nop
    ctx->pc = 0x60a898u;
    // NOP
label_60a89c:
    // 0x60a89c: 0x0  nop
    ctx->pc = 0x60a89cu;
    // NOP
label_60a8a0:
    // 0x60a8a0: 0x0  nop
    ctx->pc = 0x60a8a0u;
    // NOP
label_60a8a4:
    // 0x60a8a4: 0x0  nop
    ctx->pc = 0x60a8a4u;
    // NOP
label_60a8a8:
    // 0x60a8a8: 0x0  nop
    ctx->pc = 0x60a8a8u;
    // NOP
label_60a8ac:
    // 0x60a8ac: 0x0  nop
    ctx->pc = 0x60a8acu;
    // NOP
label_60a8b0:
    // 0x60a8b0: 0x0  nop
    ctx->pc = 0x60a8b0u;
    // NOP
label_60a8b4:
    // 0x60a8b4: 0x0  nop
    ctx->pc = 0x60a8b4u;
    // NOP
label_60a8b8:
    // 0x60a8b8: 0x0  nop
    ctx->pc = 0x60a8b8u;
    // NOP
label_60a8bc:
    // 0x60a8bc: 0x0  nop
    ctx->pc = 0x60a8bcu;
    // NOP
label_60a8c0:
    // 0x60a8c0: 0x0  nop
    ctx->pc = 0x60a8c0u;
    // NOP
label_60a8c4:
    // 0x60a8c4: 0x0  nop
    ctx->pc = 0x60a8c4u;
    // NOP
label_60a8c8:
    // 0x60a8c8: 0x0  nop
    ctx->pc = 0x60a8c8u;
    // NOP
label_60a8cc:
    // 0x60a8cc: 0x0  nop
    ctx->pc = 0x60a8ccu;
    // NOP
label_60a8d0:
    // 0x60a8d0: 0x0  nop
    ctx->pc = 0x60a8d0u;
    // NOP
label_60a8d4:
    // 0x60a8d4: 0x0  nop
    ctx->pc = 0x60a8d4u;
    // NOP
label_60a8d8:
    // 0x60a8d8: 0x0  nop
    ctx->pc = 0x60a8d8u;
    // NOP
label_60a8dc:
    // 0x60a8dc: 0x0  nop
    ctx->pc = 0x60a8dcu;
    // NOP
label_60a8e0:
    // 0x60a8e0: 0x0  nop
    ctx->pc = 0x60a8e0u;
    // NOP
label_60a8e4:
    // 0x60a8e4: 0x0  nop
    ctx->pc = 0x60a8e4u;
    // NOP
label_60a8e8:
    // 0x60a8e8: 0x0  nop
    ctx->pc = 0x60a8e8u;
    // NOP
label_60a8ec:
    // 0x60a8ec: 0x0  nop
    ctx->pc = 0x60a8ecu;
    // NOP
label_60a8f0:
    // 0x60a8f0: 0x0  nop
    ctx->pc = 0x60a8f0u;
    // NOP
label_60a8f4:
    // 0x60a8f4: 0x0  nop
    ctx->pc = 0x60a8f4u;
    // NOP
label_60a8f8:
    // 0x60a8f8: 0x0  nop
    ctx->pc = 0x60a8f8u;
    // NOP
label_60a8fc:
    // 0x60a8fc: 0x0  nop
    ctx->pc = 0x60a8fcu;
    // NOP
    ctx->pc = 0x60a900u;
}
