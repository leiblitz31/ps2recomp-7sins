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

// Function: sub_00121B50
// Address: 0x121b50 - 0x122c60
void sub_00121B50_0x121b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121B50_0x121b50");
#endif

    switch (ctx->pc) {
        case 0x121b50u: goto label_121b50;
        case 0x121b54u: goto label_121b54;
        case 0x121b58u: goto label_121b58;
        case 0x121b5cu: goto label_121b5c;
        case 0x121b60u: goto label_121b60;
        case 0x121b64u: goto label_121b64;
        case 0x121b68u: goto label_121b68;
        case 0x121b6cu: goto label_121b6c;
        case 0x121b70u: goto label_121b70;
        case 0x121b74u: goto label_121b74;
        case 0x121b78u: goto label_121b78;
        case 0x121b7cu: goto label_121b7c;
        case 0x121b80u: goto label_121b80;
        case 0x121b84u: goto label_121b84;
        case 0x121b88u: goto label_121b88;
        case 0x121b8cu: goto label_121b8c;
        case 0x121b90u: goto label_121b90;
        case 0x121b94u: goto label_121b94;
        case 0x121b98u: goto label_121b98;
        case 0x121b9cu: goto label_121b9c;
        case 0x121ba0u: goto label_121ba0;
        case 0x121ba4u: goto label_121ba4;
        case 0x121ba8u: goto label_121ba8;
        case 0x121bacu: goto label_121bac;
        case 0x121bb0u: goto label_121bb0;
        case 0x121bb4u: goto label_121bb4;
        case 0x121bb8u: goto label_121bb8;
        case 0x121bbcu: goto label_121bbc;
        case 0x121bc0u: goto label_121bc0;
        case 0x121bc4u: goto label_121bc4;
        case 0x121bc8u: goto label_121bc8;
        case 0x121bccu: goto label_121bcc;
        case 0x121bd0u: goto label_121bd0;
        case 0x121bd4u: goto label_121bd4;
        case 0x121bd8u: goto label_121bd8;
        case 0x121bdcu: goto label_121bdc;
        case 0x121be0u: goto label_121be0;
        case 0x121be4u: goto label_121be4;
        case 0x121be8u: goto label_121be8;
        case 0x121becu: goto label_121bec;
        case 0x121bf0u: goto label_121bf0;
        case 0x121bf4u: goto label_121bf4;
        case 0x121bf8u: goto label_121bf8;
        case 0x121bfcu: goto label_121bfc;
        case 0x121c00u: goto label_121c00;
        case 0x121c04u: goto label_121c04;
        case 0x121c08u: goto label_121c08;
        case 0x121c0cu: goto label_121c0c;
        case 0x121c10u: goto label_121c10;
        case 0x121c14u: goto label_121c14;
        case 0x121c18u: goto label_121c18;
        case 0x121c1cu: goto label_121c1c;
        case 0x121c20u: goto label_121c20;
        case 0x121c24u: goto label_121c24;
        case 0x121c28u: goto label_121c28;
        case 0x121c2cu: goto label_121c2c;
        case 0x121c30u: goto label_121c30;
        case 0x121c34u: goto label_121c34;
        case 0x121c38u: goto label_121c38;
        case 0x121c3cu: goto label_121c3c;
        case 0x121c40u: goto label_121c40;
        case 0x121c44u: goto label_121c44;
        case 0x121c48u: goto label_121c48;
        case 0x121c4cu: goto label_121c4c;
        case 0x121c50u: goto label_121c50;
        case 0x121c54u: goto label_121c54;
        case 0x121c58u: goto label_121c58;
        case 0x121c5cu: goto label_121c5c;
        case 0x121c60u: goto label_121c60;
        case 0x121c64u: goto label_121c64;
        case 0x121c68u: goto label_121c68;
        case 0x121c6cu: goto label_121c6c;
        case 0x121c70u: goto label_121c70;
        case 0x121c74u: goto label_121c74;
        case 0x121c78u: goto label_121c78;
        case 0x121c7cu: goto label_121c7c;
        case 0x121c80u: goto label_121c80;
        case 0x121c84u: goto label_121c84;
        case 0x121c88u: goto label_121c88;
        case 0x121c8cu: goto label_121c8c;
        case 0x121c90u: goto label_121c90;
        case 0x121c94u: goto label_121c94;
        case 0x121c98u: goto label_121c98;
        case 0x121c9cu: goto label_121c9c;
        case 0x121ca0u: goto label_121ca0;
        case 0x121ca4u: goto label_121ca4;
        case 0x121ca8u: goto label_121ca8;
        case 0x121cacu: goto label_121cac;
        case 0x121cb0u: goto label_121cb0;
        case 0x121cb4u: goto label_121cb4;
        case 0x121cb8u: goto label_121cb8;
        case 0x121cbcu: goto label_121cbc;
        case 0x121cc0u: goto label_121cc0;
        case 0x121cc4u: goto label_121cc4;
        case 0x121cc8u: goto label_121cc8;
        case 0x121cccu: goto label_121ccc;
        case 0x121cd0u: goto label_121cd0;
        case 0x121cd4u: goto label_121cd4;
        case 0x121cd8u: goto label_121cd8;
        case 0x121cdcu: goto label_121cdc;
        case 0x121ce0u: goto label_121ce0;
        case 0x121ce4u: goto label_121ce4;
        case 0x121ce8u: goto label_121ce8;
        case 0x121cecu: goto label_121cec;
        case 0x121cf0u: goto label_121cf0;
        case 0x121cf4u: goto label_121cf4;
        case 0x121cf8u: goto label_121cf8;
        case 0x121cfcu: goto label_121cfc;
        case 0x121d00u: goto label_121d00;
        case 0x121d04u: goto label_121d04;
        case 0x121d08u: goto label_121d08;
        case 0x121d0cu: goto label_121d0c;
        case 0x121d10u: goto label_121d10;
        case 0x121d14u: goto label_121d14;
        case 0x121d18u: goto label_121d18;
        case 0x121d1cu: goto label_121d1c;
        case 0x121d20u: goto label_121d20;
        case 0x121d24u: goto label_121d24;
        case 0x121d28u: goto label_121d28;
        case 0x121d2cu: goto label_121d2c;
        case 0x121d30u: goto label_121d30;
        case 0x121d34u: goto label_121d34;
        case 0x121d38u: goto label_121d38;
        case 0x121d3cu: goto label_121d3c;
        case 0x121d40u: goto label_121d40;
        case 0x121d44u: goto label_121d44;
        case 0x121d48u: goto label_121d48;
        case 0x121d4cu: goto label_121d4c;
        case 0x121d50u: goto label_121d50;
        case 0x121d54u: goto label_121d54;
        case 0x121d58u: goto label_121d58;
        case 0x121d5cu: goto label_121d5c;
        case 0x121d60u: goto label_121d60;
        case 0x121d64u: goto label_121d64;
        case 0x121d68u: goto label_121d68;
        case 0x121d6cu: goto label_121d6c;
        case 0x121d70u: goto label_121d70;
        case 0x121d74u: goto label_121d74;
        case 0x121d78u: goto label_121d78;
        case 0x121d7cu: goto label_121d7c;
        case 0x121d80u: goto label_121d80;
        case 0x121d84u: goto label_121d84;
        case 0x121d88u: goto label_121d88;
        case 0x121d8cu: goto label_121d8c;
        case 0x121d90u: goto label_121d90;
        case 0x121d94u: goto label_121d94;
        case 0x121d98u: goto label_121d98;
        case 0x121d9cu: goto label_121d9c;
        case 0x121da0u: goto label_121da0;
        case 0x121da4u: goto label_121da4;
        case 0x121da8u: goto label_121da8;
        case 0x121dacu: goto label_121dac;
        case 0x121db0u: goto label_121db0;
        case 0x121db4u: goto label_121db4;
        case 0x121db8u: goto label_121db8;
        case 0x121dbcu: goto label_121dbc;
        case 0x121dc0u: goto label_121dc0;
        case 0x121dc4u: goto label_121dc4;
        case 0x121dc8u: goto label_121dc8;
        case 0x121dccu: goto label_121dcc;
        case 0x121dd0u: goto label_121dd0;
        case 0x121dd4u: goto label_121dd4;
        case 0x121dd8u: goto label_121dd8;
        case 0x121ddcu: goto label_121ddc;
        case 0x121de0u: goto label_121de0;
        case 0x121de4u: goto label_121de4;
        case 0x121de8u: goto label_121de8;
        case 0x121decu: goto label_121dec;
        case 0x121df0u: goto label_121df0;
        case 0x121df4u: goto label_121df4;
        case 0x121df8u: goto label_121df8;
        case 0x121dfcu: goto label_121dfc;
        case 0x121e00u: goto label_121e00;
        case 0x121e04u: goto label_121e04;
        case 0x121e08u: goto label_121e08;
        case 0x121e0cu: goto label_121e0c;
        case 0x121e10u: goto label_121e10;
        case 0x121e14u: goto label_121e14;
        case 0x121e18u: goto label_121e18;
        case 0x121e1cu: goto label_121e1c;
        case 0x121e20u: goto label_121e20;
        case 0x121e24u: goto label_121e24;
        case 0x121e28u: goto label_121e28;
        case 0x121e2cu: goto label_121e2c;
        case 0x121e30u: goto label_121e30;
        case 0x121e34u: goto label_121e34;
        case 0x121e38u: goto label_121e38;
        case 0x121e3cu: goto label_121e3c;
        case 0x121e40u: goto label_121e40;
        case 0x121e44u: goto label_121e44;
        case 0x121e48u: goto label_121e48;
        case 0x121e4cu: goto label_121e4c;
        case 0x121e50u: goto label_121e50;
        case 0x121e54u: goto label_121e54;
        case 0x121e58u: goto label_121e58;
        case 0x121e5cu: goto label_121e5c;
        case 0x121e60u: goto label_121e60;
        case 0x121e64u: goto label_121e64;
        case 0x121e68u: goto label_121e68;
        case 0x121e6cu: goto label_121e6c;
        case 0x121e70u: goto label_121e70;
        case 0x121e74u: goto label_121e74;
        case 0x121e78u: goto label_121e78;
        case 0x121e7cu: goto label_121e7c;
        case 0x121e80u: goto label_121e80;
        case 0x121e84u: goto label_121e84;
        case 0x121e88u: goto label_121e88;
        case 0x121e8cu: goto label_121e8c;
        case 0x121e90u: goto label_121e90;
        case 0x121e94u: goto label_121e94;
        case 0x121e98u: goto label_121e98;
        case 0x121e9cu: goto label_121e9c;
        case 0x121ea0u: goto label_121ea0;
        case 0x121ea4u: goto label_121ea4;
        case 0x121ea8u: goto label_121ea8;
        case 0x121eacu: goto label_121eac;
        case 0x121eb0u: goto label_121eb0;
        case 0x121eb4u: goto label_121eb4;
        case 0x121eb8u: goto label_121eb8;
        case 0x121ebcu: goto label_121ebc;
        case 0x121ec0u: goto label_121ec0;
        case 0x121ec4u: goto label_121ec4;
        case 0x121ec8u: goto label_121ec8;
        case 0x121eccu: goto label_121ecc;
        case 0x121ed0u: goto label_121ed0;
        case 0x121ed4u: goto label_121ed4;
        case 0x121ed8u: goto label_121ed8;
        case 0x121edcu: goto label_121edc;
        case 0x121ee0u: goto label_121ee0;
        case 0x121ee4u: goto label_121ee4;
        case 0x121ee8u: goto label_121ee8;
        case 0x121eecu: goto label_121eec;
        case 0x121ef0u: goto label_121ef0;
        case 0x121ef4u: goto label_121ef4;
        case 0x121ef8u: goto label_121ef8;
        case 0x121efcu: goto label_121efc;
        case 0x121f00u: goto label_121f00;
        case 0x121f04u: goto label_121f04;
        case 0x121f08u: goto label_121f08;
        case 0x121f0cu: goto label_121f0c;
        case 0x121f10u: goto label_121f10;
        case 0x121f14u: goto label_121f14;
        case 0x121f18u: goto label_121f18;
        case 0x121f1cu: goto label_121f1c;
        case 0x121f20u: goto label_121f20;
        case 0x121f24u: goto label_121f24;
        case 0x121f28u: goto label_121f28;
        case 0x121f2cu: goto label_121f2c;
        case 0x121f30u: goto label_121f30;
        case 0x121f34u: goto label_121f34;
        case 0x121f38u: goto label_121f38;
        case 0x121f3cu: goto label_121f3c;
        case 0x121f40u: goto label_121f40;
        case 0x121f44u: goto label_121f44;
        case 0x121f48u: goto label_121f48;
        case 0x121f4cu: goto label_121f4c;
        case 0x121f50u: goto label_121f50;
        case 0x121f54u: goto label_121f54;
        case 0x121f58u: goto label_121f58;
        case 0x121f5cu: goto label_121f5c;
        case 0x121f60u: goto label_121f60;
        case 0x121f64u: goto label_121f64;
        case 0x121f68u: goto label_121f68;
        case 0x121f6cu: goto label_121f6c;
        case 0x121f70u: goto label_121f70;
        case 0x121f74u: goto label_121f74;
        case 0x121f78u: goto label_121f78;
        case 0x121f7cu: goto label_121f7c;
        case 0x121f80u: goto label_121f80;
        case 0x121f84u: goto label_121f84;
        case 0x121f88u: goto label_121f88;
        case 0x121f8cu: goto label_121f8c;
        case 0x121f90u: goto label_121f90;
        case 0x121f94u: goto label_121f94;
        case 0x121f98u: goto label_121f98;
        case 0x121f9cu: goto label_121f9c;
        case 0x121fa0u: goto label_121fa0;
        case 0x121fa4u: goto label_121fa4;
        case 0x121fa8u: goto label_121fa8;
        case 0x121facu: goto label_121fac;
        case 0x121fb0u: goto label_121fb0;
        case 0x121fb4u: goto label_121fb4;
        case 0x121fb8u: goto label_121fb8;
        case 0x121fbcu: goto label_121fbc;
        case 0x121fc0u: goto label_121fc0;
        case 0x121fc4u: goto label_121fc4;
        case 0x121fc8u: goto label_121fc8;
        case 0x121fccu: goto label_121fcc;
        case 0x121fd0u: goto label_121fd0;
        case 0x121fd4u: goto label_121fd4;
        case 0x121fd8u: goto label_121fd8;
        case 0x121fdcu: goto label_121fdc;
        case 0x121fe0u: goto label_121fe0;
        case 0x121fe4u: goto label_121fe4;
        case 0x121fe8u: goto label_121fe8;
        case 0x121fecu: goto label_121fec;
        case 0x121ff0u: goto label_121ff0;
        case 0x121ff4u: goto label_121ff4;
        case 0x121ff8u: goto label_121ff8;
        case 0x121ffcu: goto label_121ffc;
        case 0x122000u: goto label_122000;
        case 0x122004u: goto label_122004;
        case 0x122008u: goto label_122008;
        case 0x12200cu: goto label_12200c;
        case 0x122010u: goto label_122010;
        case 0x122014u: goto label_122014;
        case 0x122018u: goto label_122018;
        case 0x12201cu: goto label_12201c;
        case 0x122020u: goto label_122020;
        case 0x122024u: goto label_122024;
        case 0x122028u: goto label_122028;
        case 0x12202cu: goto label_12202c;
        case 0x122030u: goto label_122030;
        case 0x122034u: goto label_122034;
        case 0x122038u: goto label_122038;
        case 0x12203cu: goto label_12203c;
        case 0x122040u: goto label_122040;
        case 0x122044u: goto label_122044;
        case 0x122048u: goto label_122048;
        case 0x12204cu: goto label_12204c;
        case 0x122050u: goto label_122050;
        case 0x122054u: goto label_122054;
        case 0x122058u: goto label_122058;
        case 0x12205cu: goto label_12205c;
        case 0x122060u: goto label_122060;
        case 0x122064u: goto label_122064;
        case 0x122068u: goto label_122068;
        case 0x12206cu: goto label_12206c;
        case 0x122070u: goto label_122070;
        case 0x122074u: goto label_122074;
        case 0x122078u: goto label_122078;
        case 0x12207cu: goto label_12207c;
        case 0x122080u: goto label_122080;
        case 0x122084u: goto label_122084;
        case 0x122088u: goto label_122088;
        case 0x12208cu: goto label_12208c;
        case 0x122090u: goto label_122090;
        case 0x122094u: goto label_122094;
        case 0x122098u: goto label_122098;
        case 0x12209cu: goto label_12209c;
        case 0x1220a0u: goto label_1220a0;
        case 0x1220a4u: goto label_1220a4;
        case 0x1220a8u: goto label_1220a8;
        case 0x1220acu: goto label_1220ac;
        case 0x1220b0u: goto label_1220b0;
        case 0x1220b4u: goto label_1220b4;
        case 0x1220b8u: goto label_1220b8;
        case 0x1220bcu: goto label_1220bc;
        case 0x1220c0u: goto label_1220c0;
        case 0x1220c4u: goto label_1220c4;
        case 0x1220c8u: goto label_1220c8;
        case 0x1220ccu: goto label_1220cc;
        case 0x1220d0u: goto label_1220d0;
        case 0x1220d4u: goto label_1220d4;
        case 0x1220d8u: goto label_1220d8;
        case 0x1220dcu: goto label_1220dc;
        case 0x1220e0u: goto label_1220e0;
        case 0x1220e4u: goto label_1220e4;
        case 0x1220e8u: goto label_1220e8;
        case 0x1220ecu: goto label_1220ec;
        case 0x1220f0u: goto label_1220f0;
        case 0x1220f4u: goto label_1220f4;
        case 0x1220f8u: goto label_1220f8;
        case 0x1220fcu: goto label_1220fc;
        case 0x122100u: goto label_122100;
        case 0x122104u: goto label_122104;
        case 0x122108u: goto label_122108;
        case 0x12210cu: goto label_12210c;
        case 0x122110u: goto label_122110;
        case 0x122114u: goto label_122114;
        case 0x122118u: goto label_122118;
        case 0x12211cu: goto label_12211c;
        case 0x122120u: goto label_122120;
        case 0x122124u: goto label_122124;
        case 0x122128u: goto label_122128;
        case 0x12212cu: goto label_12212c;
        case 0x122130u: goto label_122130;
        case 0x122134u: goto label_122134;
        case 0x122138u: goto label_122138;
        case 0x12213cu: goto label_12213c;
        case 0x122140u: goto label_122140;
        case 0x122144u: goto label_122144;
        case 0x122148u: goto label_122148;
        case 0x12214cu: goto label_12214c;
        case 0x122150u: goto label_122150;
        case 0x122154u: goto label_122154;
        case 0x122158u: goto label_122158;
        case 0x12215cu: goto label_12215c;
        case 0x122160u: goto label_122160;
        case 0x122164u: goto label_122164;
        case 0x122168u: goto label_122168;
        case 0x12216cu: goto label_12216c;
        case 0x122170u: goto label_122170;
        case 0x122174u: goto label_122174;
        case 0x122178u: goto label_122178;
        case 0x12217cu: goto label_12217c;
        case 0x122180u: goto label_122180;
        case 0x122184u: goto label_122184;
        case 0x122188u: goto label_122188;
        case 0x12218cu: goto label_12218c;
        case 0x122190u: goto label_122190;
        case 0x122194u: goto label_122194;
        case 0x122198u: goto label_122198;
        case 0x12219cu: goto label_12219c;
        case 0x1221a0u: goto label_1221a0;
        case 0x1221a4u: goto label_1221a4;
        case 0x1221a8u: goto label_1221a8;
        case 0x1221acu: goto label_1221ac;
        case 0x1221b0u: goto label_1221b0;
        case 0x1221b4u: goto label_1221b4;
        case 0x1221b8u: goto label_1221b8;
        case 0x1221bcu: goto label_1221bc;
        case 0x1221c0u: goto label_1221c0;
        case 0x1221c4u: goto label_1221c4;
        case 0x1221c8u: goto label_1221c8;
        case 0x1221ccu: goto label_1221cc;
        case 0x1221d0u: goto label_1221d0;
        case 0x1221d4u: goto label_1221d4;
        case 0x1221d8u: goto label_1221d8;
        case 0x1221dcu: goto label_1221dc;
        case 0x1221e0u: goto label_1221e0;
        case 0x1221e4u: goto label_1221e4;
        case 0x1221e8u: goto label_1221e8;
        case 0x1221ecu: goto label_1221ec;
        case 0x1221f0u: goto label_1221f0;
        case 0x1221f4u: goto label_1221f4;
        case 0x1221f8u: goto label_1221f8;
        case 0x1221fcu: goto label_1221fc;
        case 0x122200u: goto label_122200;
        case 0x122204u: goto label_122204;
        case 0x122208u: goto label_122208;
        case 0x12220cu: goto label_12220c;
        case 0x122210u: goto label_122210;
        case 0x122214u: goto label_122214;
        case 0x122218u: goto label_122218;
        case 0x12221cu: goto label_12221c;
        case 0x122220u: goto label_122220;
        case 0x122224u: goto label_122224;
        case 0x122228u: goto label_122228;
        case 0x12222cu: goto label_12222c;
        case 0x122230u: goto label_122230;
        case 0x122234u: goto label_122234;
        case 0x122238u: goto label_122238;
        case 0x12223cu: goto label_12223c;
        case 0x122240u: goto label_122240;
        case 0x122244u: goto label_122244;
        case 0x122248u: goto label_122248;
        case 0x12224cu: goto label_12224c;
        case 0x122250u: goto label_122250;
        case 0x122254u: goto label_122254;
        case 0x122258u: goto label_122258;
        case 0x12225cu: goto label_12225c;
        case 0x122260u: goto label_122260;
        case 0x122264u: goto label_122264;
        case 0x122268u: goto label_122268;
        case 0x12226cu: goto label_12226c;
        case 0x122270u: goto label_122270;
        case 0x122274u: goto label_122274;
        case 0x122278u: goto label_122278;
        case 0x12227cu: goto label_12227c;
        case 0x122280u: goto label_122280;
        case 0x122284u: goto label_122284;
        case 0x122288u: goto label_122288;
        case 0x12228cu: goto label_12228c;
        case 0x122290u: goto label_122290;
        case 0x122294u: goto label_122294;
        case 0x122298u: goto label_122298;
        case 0x12229cu: goto label_12229c;
        case 0x1222a0u: goto label_1222a0;
        case 0x1222a4u: goto label_1222a4;
        case 0x1222a8u: goto label_1222a8;
        case 0x1222acu: goto label_1222ac;
        case 0x1222b0u: goto label_1222b0;
        case 0x1222b4u: goto label_1222b4;
        case 0x1222b8u: goto label_1222b8;
        case 0x1222bcu: goto label_1222bc;
        case 0x1222c0u: goto label_1222c0;
        case 0x1222c4u: goto label_1222c4;
        case 0x1222c8u: goto label_1222c8;
        case 0x1222ccu: goto label_1222cc;
        case 0x1222d0u: goto label_1222d0;
        case 0x1222d4u: goto label_1222d4;
        case 0x1222d8u: goto label_1222d8;
        case 0x1222dcu: goto label_1222dc;
        case 0x1222e0u: goto label_1222e0;
        case 0x1222e4u: goto label_1222e4;
        case 0x1222e8u: goto label_1222e8;
        case 0x1222ecu: goto label_1222ec;
        case 0x1222f0u: goto label_1222f0;
        case 0x1222f4u: goto label_1222f4;
        case 0x1222f8u: goto label_1222f8;
        case 0x1222fcu: goto label_1222fc;
        case 0x122300u: goto label_122300;
        case 0x122304u: goto label_122304;
        case 0x122308u: goto label_122308;
        case 0x12230cu: goto label_12230c;
        case 0x122310u: goto label_122310;
        case 0x122314u: goto label_122314;
        case 0x122318u: goto label_122318;
        case 0x12231cu: goto label_12231c;
        case 0x122320u: goto label_122320;
        case 0x122324u: goto label_122324;
        case 0x122328u: goto label_122328;
        case 0x12232cu: goto label_12232c;
        case 0x122330u: goto label_122330;
        case 0x122334u: goto label_122334;
        case 0x122338u: goto label_122338;
        case 0x12233cu: goto label_12233c;
        case 0x122340u: goto label_122340;
        case 0x122344u: goto label_122344;
        case 0x122348u: goto label_122348;
        case 0x12234cu: goto label_12234c;
        case 0x122350u: goto label_122350;
        case 0x122354u: goto label_122354;
        case 0x122358u: goto label_122358;
        case 0x12235cu: goto label_12235c;
        case 0x122360u: goto label_122360;
        case 0x122364u: goto label_122364;
        case 0x122368u: goto label_122368;
        case 0x12236cu: goto label_12236c;
        case 0x122370u: goto label_122370;
        case 0x122374u: goto label_122374;
        case 0x122378u: goto label_122378;
        case 0x12237cu: goto label_12237c;
        case 0x122380u: goto label_122380;
        case 0x122384u: goto label_122384;
        case 0x122388u: goto label_122388;
        case 0x12238cu: goto label_12238c;
        case 0x122390u: goto label_122390;
        case 0x122394u: goto label_122394;
        case 0x122398u: goto label_122398;
        case 0x12239cu: goto label_12239c;
        case 0x1223a0u: goto label_1223a0;
        case 0x1223a4u: goto label_1223a4;
        case 0x1223a8u: goto label_1223a8;
        case 0x1223acu: goto label_1223ac;
        case 0x1223b0u: goto label_1223b0;
        case 0x1223b4u: goto label_1223b4;
        case 0x1223b8u: goto label_1223b8;
        case 0x1223bcu: goto label_1223bc;
        case 0x1223c0u: goto label_1223c0;
        case 0x1223c4u: goto label_1223c4;
        case 0x1223c8u: goto label_1223c8;
        case 0x1223ccu: goto label_1223cc;
        case 0x1223d0u: goto label_1223d0;
        case 0x1223d4u: goto label_1223d4;
        case 0x1223d8u: goto label_1223d8;
        case 0x1223dcu: goto label_1223dc;
        case 0x1223e0u: goto label_1223e0;
        case 0x1223e4u: goto label_1223e4;
        case 0x1223e8u: goto label_1223e8;
        case 0x1223ecu: goto label_1223ec;
        case 0x1223f0u: goto label_1223f0;
        case 0x1223f4u: goto label_1223f4;
        case 0x1223f8u: goto label_1223f8;
        case 0x1223fcu: goto label_1223fc;
        case 0x122400u: goto label_122400;
        case 0x122404u: goto label_122404;
        case 0x122408u: goto label_122408;
        case 0x12240cu: goto label_12240c;
        case 0x122410u: goto label_122410;
        case 0x122414u: goto label_122414;
        case 0x122418u: goto label_122418;
        case 0x12241cu: goto label_12241c;
        case 0x122420u: goto label_122420;
        case 0x122424u: goto label_122424;
        case 0x122428u: goto label_122428;
        case 0x12242cu: goto label_12242c;
        case 0x122430u: goto label_122430;
        case 0x122434u: goto label_122434;
        case 0x122438u: goto label_122438;
        case 0x12243cu: goto label_12243c;
        case 0x122440u: goto label_122440;
        case 0x122444u: goto label_122444;
        case 0x122448u: goto label_122448;
        case 0x12244cu: goto label_12244c;
        case 0x122450u: goto label_122450;
        case 0x122454u: goto label_122454;
        case 0x122458u: goto label_122458;
        case 0x12245cu: goto label_12245c;
        case 0x122460u: goto label_122460;
        case 0x122464u: goto label_122464;
        case 0x122468u: goto label_122468;
        case 0x12246cu: goto label_12246c;
        case 0x122470u: goto label_122470;
        case 0x122474u: goto label_122474;
        case 0x122478u: goto label_122478;
        case 0x12247cu: goto label_12247c;
        case 0x122480u: goto label_122480;
        case 0x122484u: goto label_122484;
        case 0x122488u: goto label_122488;
        case 0x12248cu: goto label_12248c;
        case 0x122490u: goto label_122490;
        case 0x122494u: goto label_122494;
        case 0x122498u: goto label_122498;
        case 0x12249cu: goto label_12249c;
        case 0x1224a0u: goto label_1224a0;
        case 0x1224a4u: goto label_1224a4;
        case 0x1224a8u: goto label_1224a8;
        case 0x1224acu: goto label_1224ac;
        case 0x1224b0u: goto label_1224b0;
        case 0x1224b4u: goto label_1224b4;
        case 0x1224b8u: goto label_1224b8;
        case 0x1224bcu: goto label_1224bc;
        case 0x1224c0u: goto label_1224c0;
        case 0x1224c4u: goto label_1224c4;
        case 0x1224c8u: goto label_1224c8;
        case 0x1224ccu: goto label_1224cc;
        case 0x1224d0u: goto label_1224d0;
        case 0x1224d4u: goto label_1224d4;
        case 0x1224d8u: goto label_1224d8;
        case 0x1224dcu: goto label_1224dc;
        case 0x1224e0u: goto label_1224e0;
        case 0x1224e4u: goto label_1224e4;
        case 0x1224e8u: goto label_1224e8;
        case 0x1224ecu: goto label_1224ec;
        case 0x1224f0u: goto label_1224f0;
        case 0x1224f4u: goto label_1224f4;
        case 0x1224f8u: goto label_1224f8;
        case 0x1224fcu: goto label_1224fc;
        case 0x122500u: goto label_122500;
        case 0x122504u: goto label_122504;
        case 0x122508u: goto label_122508;
        case 0x12250cu: goto label_12250c;
        case 0x122510u: goto label_122510;
        case 0x122514u: goto label_122514;
        case 0x122518u: goto label_122518;
        case 0x12251cu: goto label_12251c;
        case 0x122520u: goto label_122520;
        case 0x122524u: goto label_122524;
        case 0x122528u: goto label_122528;
        case 0x12252cu: goto label_12252c;
        case 0x122530u: goto label_122530;
        case 0x122534u: goto label_122534;
        case 0x122538u: goto label_122538;
        case 0x12253cu: goto label_12253c;
        case 0x122540u: goto label_122540;
        case 0x122544u: goto label_122544;
        case 0x122548u: goto label_122548;
        case 0x12254cu: goto label_12254c;
        case 0x122550u: goto label_122550;
        case 0x122554u: goto label_122554;
        case 0x122558u: goto label_122558;
        case 0x12255cu: goto label_12255c;
        case 0x122560u: goto label_122560;
        case 0x122564u: goto label_122564;
        case 0x122568u: goto label_122568;
        case 0x12256cu: goto label_12256c;
        case 0x122570u: goto label_122570;
        case 0x122574u: goto label_122574;
        case 0x122578u: goto label_122578;
        case 0x12257cu: goto label_12257c;
        case 0x122580u: goto label_122580;
        case 0x122584u: goto label_122584;
        case 0x122588u: goto label_122588;
        case 0x12258cu: goto label_12258c;
        case 0x122590u: goto label_122590;
        case 0x122594u: goto label_122594;
        case 0x122598u: goto label_122598;
        case 0x12259cu: goto label_12259c;
        case 0x1225a0u: goto label_1225a0;
        case 0x1225a4u: goto label_1225a4;
        case 0x1225a8u: goto label_1225a8;
        case 0x1225acu: goto label_1225ac;
        case 0x1225b0u: goto label_1225b0;
        case 0x1225b4u: goto label_1225b4;
        case 0x1225b8u: goto label_1225b8;
        case 0x1225bcu: goto label_1225bc;
        case 0x1225c0u: goto label_1225c0;
        case 0x1225c4u: goto label_1225c4;
        case 0x1225c8u: goto label_1225c8;
        case 0x1225ccu: goto label_1225cc;
        case 0x1225d0u: goto label_1225d0;
        case 0x1225d4u: goto label_1225d4;
        case 0x1225d8u: goto label_1225d8;
        case 0x1225dcu: goto label_1225dc;
        case 0x1225e0u: goto label_1225e0;
        case 0x1225e4u: goto label_1225e4;
        case 0x1225e8u: goto label_1225e8;
        case 0x1225ecu: goto label_1225ec;
        case 0x1225f0u: goto label_1225f0;
        case 0x1225f4u: goto label_1225f4;
        case 0x1225f8u: goto label_1225f8;
        case 0x1225fcu: goto label_1225fc;
        case 0x122600u: goto label_122600;
        case 0x122604u: goto label_122604;
        case 0x122608u: goto label_122608;
        case 0x12260cu: goto label_12260c;
        case 0x122610u: goto label_122610;
        case 0x122614u: goto label_122614;
        case 0x122618u: goto label_122618;
        case 0x12261cu: goto label_12261c;
        case 0x122620u: goto label_122620;
        case 0x122624u: goto label_122624;
        case 0x122628u: goto label_122628;
        case 0x12262cu: goto label_12262c;
        case 0x122630u: goto label_122630;
        case 0x122634u: goto label_122634;
        case 0x122638u: goto label_122638;
        case 0x12263cu: goto label_12263c;
        case 0x122640u: goto label_122640;
        case 0x122644u: goto label_122644;
        case 0x122648u: goto label_122648;
        case 0x12264cu: goto label_12264c;
        case 0x122650u: goto label_122650;
        case 0x122654u: goto label_122654;
        case 0x122658u: goto label_122658;
        case 0x12265cu: goto label_12265c;
        case 0x122660u: goto label_122660;
        case 0x122664u: goto label_122664;
        case 0x122668u: goto label_122668;
        case 0x12266cu: goto label_12266c;
        case 0x122670u: goto label_122670;
        case 0x122674u: goto label_122674;
        case 0x122678u: goto label_122678;
        case 0x12267cu: goto label_12267c;
        case 0x122680u: goto label_122680;
        case 0x122684u: goto label_122684;
        case 0x122688u: goto label_122688;
        case 0x12268cu: goto label_12268c;
        case 0x122690u: goto label_122690;
        case 0x122694u: goto label_122694;
        case 0x122698u: goto label_122698;
        case 0x12269cu: goto label_12269c;
        case 0x1226a0u: goto label_1226a0;
        case 0x1226a4u: goto label_1226a4;
        case 0x1226a8u: goto label_1226a8;
        case 0x1226acu: goto label_1226ac;
        case 0x1226b0u: goto label_1226b0;
        case 0x1226b4u: goto label_1226b4;
        case 0x1226b8u: goto label_1226b8;
        case 0x1226bcu: goto label_1226bc;
        case 0x1226c0u: goto label_1226c0;
        case 0x1226c4u: goto label_1226c4;
        case 0x1226c8u: goto label_1226c8;
        case 0x1226ccu: goto label_1226cc;
        case 0x1226d0u: goto label_1226d0;
        case 0x1226d4u: goto label_1226d4;
        case 0x1226d8u: goto label_1226d8;
        case 0x1226dcu: goto label_1226dc;
        case 0x1226e0u: goto label_1226e0;
        case 0x1226e4u: goto label_1226e4;
        case 0x1226e8u: goto label_1226e8;
        case 0x1226ecu: goto label_1226ec;
        case 0x1226f0u: goto label_1226f0;
        case 0x1226f4u: goto label_1226f4;
        case 0x1226f8u: goto label_1226f8;
        case 0x1226fcu: goto label_1226fc;
        case 0x122700u: goto label_122700;
        case 0x122704u: goto label_122704;
        case 0x122708u: goto label_122708;
        case 0x12270cu: goto label_12270c;
        case 0x122710u: goto label_122710;
        case 0x122714u: goto label_122714;
        case 0x122718u: goto label_122718;
        case 0x12271cu: goto label_12271c;
        case 0x122720u: goto label_122720;
        case 0x122724u: goto label_122724;
        case 0x122728u: goto label_122728;
        case 0x12272cu: goto label_12272c;
        case 0x122730u: goto label_122730;
        case 0x122734u: goto label_122734;
        case 0x122738u: goto label_122738;
        case 0x12273cu: goto label_12273c;
        case 0x122740u: goto label_122740;
        case 0x122744u: goto label_122744;
        case 0x122748u: goto label_122748;
        case 0x12274cu: goto label_12274c;
        case 0x122750u: goto label_122750;
        case 0x122754u: goto label_122754;
        case 0x122758u: goto label_122758;
        case 0x12275cu: goto label_12275c;
        case 0x122760u: goto label_122760;
        case 0x122764u: goto label_122764;
        case 0x122768u: goto label_122768;
        case 0x12276cu: goto label_12276c;
        case 0x122770u: goto label_122770;
        case 0x122774u: goto label_122774;
        case 0x122778u: goto label_122778;
        case 0x12277cu: goto label_12277c;
        case 0x122780u: goto label_122780;
        case 0x122784u: goto label_122784;
        case 0x122788u: goto label_122788;
        case 0x12278cu: goto label_12278c;
        case 0x122790u: goto label_122790;
        case 0x122794u: goto label_122794;
        case 0x122798u: goto label_122798;
        case 0x12279cu: goto label_12279c;
        case 0x1227a0u: goto label_1227a0;
        case 0x1227a4u: goto label_1227a4;
        case 0x1227a8u: goto label_1227a8;
        case 0x1227acu: goto label_1227ac;
        case 0x1227b0u: goto label_1227b0;
        case 0x1227b4u: goto label_1227b4;
        case 0x1227b8u: goto label_1227b8;
        case 0x1227bcu: goto label_1227bc;
        case 0x1227c0u: goto label_1227c0;
        case 0x1227c4u: goto label_1227c4;
        case 0x1227c8u: goto label_1227c8;
        case 0x1227ccu: goto label_1227cc;
        case 0x1227d0u: goto label_1227d0;
        case 0x1227d4u: goto label_1227d4;
        case 0x1227d8u: goto label_1227d8;
        case 0x1227dcu: goto label_1227dc;
        case 0x1227e0u: goto label_1227e0;
        case 0x1227e4u: goto label_1227e4;
        case 0x1227e8u: goto label_1227e8;
        case 0x1227ecu: goto label_1227ec;
        case 0x1227f0u: goto label_1227f0;
        case 0x1227f4u: goto label_1227f4;
        case 0x1227f8u: goto label_1227f8;
        case 0x1227fcu: goto label_1227fc;
        case 0x122800u: goto label_122800;
        case 0x122804u: goto label_122804;
        case 0x122808u: goto label_122808;
        case 0x12280cu: goto label_12280c;
        case 0x122810u: goto label_122810;
        case 0x122814u: goto label_122814;
        case 0x122818u: goto label_122818;
        case 0x12281cu: goto label_12281c;
        case 0x122820u: goto label_122820;
        case 0x122824u: goto label_122824;
        case 0x122828u: goto label_122828;
        case 0x12282cu: goto label_12282c;
        case 0x122830u: goto label_122830;
        case 0x122834u: goto label_122834;
        case 0x122838u: goto label_122838;
        case 0x12283cu: goto label_12283c;
        case 0x122840u: goto label_122840;
        case 0x122844u: goto label_122844;
        case 0x122848u: goto label_122848;
        case 0x12284cu: goto label_12284c;
        case 0x122850u: goto label_122850;
        case 0x122854u: goto label_122854;
        case 0x122858u: goto label_122858;
        case 0x12285cu: goto label_12285c;
        case 0x122860u: goto label_122860;
        case 0x122864u: goto label_122864;
        case 0x122868u: goto label_122868;
        case 0x12286cu: goto label_12286c;
        case 0x122870u: goto label_122870;
        case 0x122874u: goto label_122874;
        case 0x122878u: goto label_122878;
        case 0x12287cu: goto label_12287c;
        case 0x122880u: goto label_122880;
        case 0x122884u: goto label_122884;
        case 0x122888u: goto label_122888;
        case 0x12288cu: goto label_12288c;
        case 0x122890u: goto label_122890;
        case 0x122894u: goto label_122894;
        case 0x122898u: goto label_122898;
        case 0x12289cu: goto label_12289c;
        case 0x1228a0u: goto label_1228a0;
        case 0x1228a4u: goto label_1228a4;
        case 0x1228a8u: goto label_1228a8;
        case 0x1228acu: goto label_1228ac;
        case 0x1228b0u: goto label_1228b0;
        case 0x1228b4u: goto label_1228b4;
        case 0x1228b8u: goto label_1228b8;
        case 0x1228bcu: goto label_1228bc;
        case 0x1228c0u: goto label_1228c0;
        case 0x1228c4u: goto label_1228c4;
        case 0x1228c8u: goto label_1228c8;
        case 0x1228ccu: goto label_1228cc;
        case 0x1228d0u: goto label_1228d0;
        case 0x1228d4u: goto label_1228d4;
        case 0x1228d8u: goto label_1228d8;
        case 0x1228dcu: goto label_1228dc;
        case 0x1228e0u: goto label_1228e0;
        case 0x1228e4u: goto label_1228e4;
        case 0x1228e8u: goto label_1228e8;
        case 0x1228ecu: goto label_1228ec;
        case 0x1228f0u: goto label_1228f0;
        case 0x1228f4u: goto label_1228f4;
        case 0x1228f8u: goto label_1228f8;
        case 0x1228fcu: goto label_1228fc;
        case 0x122900u: goto label_122900;
        case 0x122904u: goto label_122904;
        case 0x122908u: goto label_122908;
        case 0x12290cu: goto label_12290c;
        case 0x122910u: goto label_122910;
        case 0x122914u: goto label_122914;
        case 0x122918u: goto label_122918;
        case 0x12291cu: goto label_12291c;
        case 0x122920u: goto label_122920;
        case 0x122924u: goto label_122924;
        case 0x122928u: goto label_122928;
        case 0x12292cu: goto label_12292c;
        case 0x122930u: goto label_122930;
        case 0x122934u: goto label_122934;
        case 0x122938u: goto label_122938;
        case 0x12293cu: goto label_12293c;
        case 0x122940u: goto label_122940;
        case 0x122944u: goto label_122944;
        case 0x122948u: goto label_122948;
        case 0x12294cu: goto label_12294c;
        case 0x122950u: goto label_122950;
        case 0x122954u: goto label_122954;
        case 0x122958u: goto label_122958;
        case 0x12295cu: goto label_12295c;
        case 0x122960u: goto label_122960;
        case 0x122964u: goto label_122964;
        case 0x122968u: goto label_122968;
        case 0x12296cu: goto label_12296c;
        case 0x122970u: goto label_122970;
        case 0x122974u: goto label_122974;
        case 0x122978u: goto label_122978;
        case 0x12297cu: goto label_12297c;
        case 0x122980u: goto label_122980;
        case 0x122984u: goto label_122984;
        case 0x122988u: goto label_122988;
        case 0x12298cu: goto label_12298c;
        case 0x122990u: goto label_122990;
        case 0x122994u: goto label_122994;
        case 0x122998u: goto label_122998;
        case 0x12299cu: goto label_12299c;
        case 0x1229a0u: goto label_1229a0;
        case 0x1229a4u: goto label_1229a4;
        case 0x1229a8u: goto label_1229a8;
        case 0x1229acu: goto label_1229ac;
        case 0x1229b0u: goto label_1229b0;
        case 0x1229b4u: goto label_1229b4;
        case 0x1229b8u: goto label_1229b8;
        case 0x1229bcu: goto label_1229bc;
        case 0x1229c0u: goto label_1229c0;
        case 0x1229c4u: goto label_1229c4;
        case 0x1229c8u: goto label_1229c8;
        case 0x1229ccu: goto label_1229cc;
        case 0x1229d0u: goto label_1229d0;
        case 0x1229d4u: goto label_1229d4;
        case 0x1229d8u: goto label_1229d8;
        case 0x1229dcu: goto label_1229dc;
        case 0x1229e0u: goto label_1229e0;
        case 0x1229e4u: goto label_1229e4;
        case 0x1229e8u: goto label_1229e8;
        case 0x1229ecu: goto label_1229ec;
        case 0x1229f0u: goto label_1229f0;
        case 0x1229f4u: goto label_1229f4;
        case 0x1229f8u: goto label_1229f8;
        case 0x1229fcu: goto label_1229fc;
        case 0x122a00u: goto label_122a00;
        case 0x122a04u: goto label_122a04;
        case 0x122a08u: goto label_122a08;
        case 0x122a0cu: goto label_122a0c;
        case 0x122a10u: goto label_122a10;
        case 0x122a14u: goto label_122a14;
        case 0x122a18u: goto label_122a18;
        case 0x122a1cu: goto label_122a1c;
        case 0x122a20u: goto label_122a20;
        case 0x122a24u: goto label_122a24;
        case 0x122a28u: goto label_122a28;
        case 0x122a2cu: goto label_122a2c;
        case 0x122a30u: goto label_122a30;
        case 0x122a34u: goto label_122a34;
        case 0x122a38u: goto label_122a38;
        case 0x122a3cu: goto label_122a3c;
        case 0x122a40u: goto label_122a40;
        case 0x122a44u: goto label_122a44;
        case 0x122a48u: goto label_122a48;
        case 0x122a4cu: goto label_122a4c;
        case 0x122a50u: goto label_122a50;
        case 0x122a54u: goto label_122a54;
        case 0x122a58u: goto label_122a58;
        case 0x122a5cu: goto label_122a5c;
        case 0x122a60u: goto label_122a60;
        case 0x122a64u: goto label_122a64;
        case 0x122a68u: goto label_122a68;
        case 0x122a6cu: goto label_122a6c;
        case 0x122a70u: goto label_122a70;
        case 0x122a74u: goto label_122a74;
        case 0x122a78u: goto label_122a78;
        case 0x122a7cu: goto label_122a7c;
        case 0x122a80u: goto label_122a80;
        case 0x122a84u: goto label_122a84;
        case 0x122a88u: goto label_122a88;
        case 0x122a8cu: goto label_122a8c;
        case 0x122a90u: goto label_122a90;
        case 0x122a94u: goto label_122a94;
        case 0x122a98u: goto label_122a98;
        case 0x122a9cu: goto label_122a9c;
        case 0x122aa0u: goto label_122aa0;
        case 0x122aa4u: goto label_122aa4;
        case 0x122aa8u: goto label_122aa8;
        case 0x122aacu: goto label_122aac;
        case 0x122ab0u: goto label_122ab0;
        case 0x122ab4u: goto label_122ab4;
        case 0x122ab8u: goto label_122ab8;
        case 0x122abcu: goto label_122abc;
        case 0x122ac0u: goto label_122ac0;
        case 0x122ac4u: goto label_122ac4;
        case 0x122ac8u: goto label_122ac8;
        case 0x122accu: goto label_122acc;
        case 0x122ad0u: goto label_122ad0;
        case 0x122ad4u: goto label_122ad4;
        case 0x122ad8u: goto label_122ad8;
        case 0x122adcu: goto label_122adc;
        case 0x122ae0u: goto label_122ae0;
        case 0x122ae4u: goto label_122ae4;
        case 0x122ae8u: goto label_122ae8;
        case 0x122aecu: goto label_122aec;
        case 0x122af0u: goto label_122af0;
        case 0x122af4u: goto label_122af4;
        case 0x122af8u: goto label_122af8;
        case 0x122afcu: goto label_122afc;
        case 0x122b00u: goto label_122b00;
        case 0x122b04u: goto label_122b04;
        case 0x122b08u: goto label_122b08;
        case 0x122b0cu: goto label_122b0c;
        case 0x122b10u: goto label_122b10;
        case 0x122b14u: goto label_122b14;
        case 0x122b18u: goto label_122b18;
        case 0x122b1cu: goto label_122b1c;
        case 0x122b20u: goto label_122b20;
        case 0x122b24u: goto label_122b24;
        case 0x122b28u: goto label_122b28;
        case 0x122b2cu: goto label_122b2c;
        case 0x122b30u: goto label_122b30;
        case 0x122b34u: goto label_122b34;
        case 0x122b38u: goto label_122b38;
        case 0x122b3cu: goto label_122b3c;
        case 0x122b40u: goto label_122b40;
        case 0x122b44u: goto label_122b44;
        case 0x122b48u: goto label_122b48;
        case 0x122b4cu: goto label_122b4c;
        case 0x122b50u: goto label_122b50;
        case 0x122b54u: goto label_122b54;
        case 0x122b58u: goto label_122b58;
        case 0x122b5cu: goto label_122b5c;
        case 0x122b60u: goto label_122b60;
        case 0x122b64u: goto label_122b64;
        case 0x122b68u: goto label_122b68;
        case 0x122b6cu: goto label_122b6c;
        case 0x122b70u: goto label_122b70;
        case 0x122b74u: goto label_122b74;
        case 0x122b78u: goto label_122b78;
        case 0x122b7cu: goto label_122b7c;
        case 0x122b80u: goto label_122b80;
        case 0x122b84u: goto label_122b84;
        case 0x122b88u: goto label_122b88;
        case 0x122b8cu: goto label_122b8c;
        case 0x122b90u: goto label_122b90;
        case 0x122b94u: goto label_122b94;
        case 0x122b98u: goto label_122b98;
        case 0x122b9cu: goto label_122b9c;
        case 0x122ba0u: goto label_122ba0;
        case 0x122ba4u: goto label_122ba4;
        case 0x122ba8u: goto label_122ba8;
        case 0x122bacu: goto label_122bac;
        case 0x122bb0u: goto label_122bb0;
        case 0x122bb4u: goto label_122bb4;
        case 0x122bb8u: goto label_122bb8;
        case 0x122bbcu: goto label_122bbc;
        case 0x122bc0u: goto label_122bc0;
        case 0x122bc4u: goto label_122bc4;
        case 0x122bc8u: goto label_122bc8;
        case 0x122bccu: goto label_122bcc;
        case 0x122bd0u: goto label_122bd0;
        case 0x122bd4u: goto label_122bd4;
        case 0x122bd8u: goto label_122bd8;
        case 0x122bdcu: goto label_122bdc;
        case 0x122be0u: goto label_122be0;
        case 0x122be4u: goto label_122be4;
        case 0x122be8u: goto label_122be8;
        case 0x122becu: goto label_122bec;
        case 0x122bf0u: goto label_122bf0;
        case 0x122bf4u: goto label_122bf4;
        case 0x122bf8u: goto label_122bf8;
        case 0x122bfcu: goto label_122bfc;
        case 0x122c00u: goto label_122c00;
        case 0x122c04u: goto label_122c04;
        case 0x122c08u: goto label_122c08;
        case 0x122c0cu: goto label_122c0c;
        case 0x122c10u: goto label_122c10;
        case 0x122c14u: goto label_122c14;
        case 0x122c18u: goto label_122c18;
        case 0x122c1cu: goto label_122c1c;
        case 0x122c20u: goto label_122c20;
        case 0x122c24u: goto label_122c24;
        case 0x122c28u: goto label_122c28;
        case 0x122c2cu: goto label_122c2c;
        case 0x122c30u: goto label_122c30;
        case 0x122c34u: goto label_122c34;
        case 0x122c38u: goto label_122c38;
        case 0x122c3cu: goto label_122c3c;
        case 0x122c40u: goto label_122c40;
        case 0x122c44u: goto label_122c44;
        case 0x122c48u: goto label_122c48;
        case 0x122c4cu: goto label_122c4c;
        case 0x122c50u: goto label_122c50;
        case 0x122c54u: goto label_122c54;
        case 0x122c58u: goto label_122c58;
        case 0x122c5cu: goto label_122c5c;
        default: break;
    }

    ctx->pc = 0x121b50u;

label_121b50:
    // 0x121b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x121b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_121b54:
    // 0x121b54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x121b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_121b58:
    // 0x121b58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x121b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_121b5c:
    // 0x121b5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x121b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_121b60:
    // 0x121b60: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x121b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_121b64:
    // 0x121b64: 0xc047074  jal         func_11C1D0
label_121b68:
    if (ctx->pc == 0x121B68u) {
        ctx->pc = 0x121B6Cu;
        goto label_121b6c;
    }
    ctx->pc = 0x121B64u;
    SET_GPR_U32(ctx, 31, 0x121B6Cu);
    ctx->pc = 0x11C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C1D0u, 0x121B64u, 0x121B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B6Cu;
label_121b6c:
    // 0x121b6c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x121b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_121b70:
    // 0x121b70: 0x24633650  addiu       $v1, $v1, 0x3650
    ctx->pc = 0x121b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13904));
label_121b74:
    // 0x121b74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x121b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_121b78:
    // 0x121b78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x121b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_121b7c:
    // 0x121b7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x121b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_121b80:
    // 0x121b80: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x121b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_121b84:
    // 0x121b84: 0xc040b6c  jal         func_102DB0
label_121b88:
    if (ctx->pc == 0x121B88u) {
        ctx->pc = 0x121B8Cu;
        goto label_121b8c;
    }
    ctx->pc = 0x121B84u;
    SET_GPR_U32(ctx, 31, 0x121B8Cu);
    ctx->pc = 0x102DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102DB0u, 0x121B84u, 0x121B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121B8Cu;
label_121b8c:
    // 0x121b8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x121b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_121b90:
    // 0x121b90: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x121b90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_121b94:
    // 0x121b94: 0x24a52100  addiu       $a1, $a1, 0x2100
    ctx->pc = 0x121b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8448));
label_121b98:
    // 0x121b98: 0xc04322c  jal         func_10C8B0
label_121b9c:
    if (ctx->pc == 0x121B9Cu) {
        ctx->pc = 0x121BA0u;
        goto label_121ba0;
    }
    ctx->pc = 0x121B98u;
    SET_GPR_U32(ctx, 31, 0x121BA0u);
    ctx->pc = 0x10C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C8B0u, 0x121B98u, 0x121BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121BA0u;
label_121ba0:
    // 0x121ba0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x121ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_121ba4:
    // 0x121ba4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x121ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_121ba8:
    // 0x121ba8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x121ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_121bac:
    // 0x121bac: 0x3e00008  jr          $ra
label_121bb0:
    if (ctx->pc == 0x121BB0u) {
        ctx->pc = 0x121BB4u;
        goto label_121bb4;
    }
    ctx->pc = 0x121BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121BB4u;
label_121bb4:
    // 0x121bb4: 0x0  nop
    ctx->pc = 0x121bb4u;
    // NOP
label_121bb8:
    // 0x121bb8: 0x0  nop
    ctx->pc = 0x121bb8u;
    // NOP
label_121bbc:
    // 0x121bbc: 0x0  nop
    ctx->pc = 0x121bbcu;
    // NOP
label_121bc0:
    // 0x121bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x121bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_121bc4:
    // 0x121bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x121bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_121bc8:
    // 0x121bc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x121bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_121bcc:
    // 0x121bcc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x121bccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_121bd0:
    // 0x121bd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x121bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_121bd4:
    // 0x121bd4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_121bd8:
    if (ctx->pc == 0x121BD8u) {
        ctx->pc = 0x121BDCu;
        goto label_121bdc;
    }
    ctx->pc = 0x121BD4u;
    {
        const bool branch_taken_0x121bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121bd4) {
            ctx->pc = 0x121C30u;
            goto label_121c30;
        }
    }
    ctx->pc = 0x121BDCu;
label_121bdc:
    // 0x121bdc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x121bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_121be0:
    // 0x121be0: 0x24633650  addiu       $v1, $v1, 0x3650
    ctx->pc = 0x121be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13904));
label_121be4:
    // 0x121be4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x121be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_121be8:
    // 0x121be8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x121be8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_121bec:
    // 0x121bec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x121becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_121bf0:
    // 0x121bf0: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x121bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_121bf4:
    // 0x121bf4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x121bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_121bf8:
    // 0x121bf8: 0xc040ae4  jal         func_102B90
label_121bfc:
    if (ctx->pc == 0x121BFCu) {
        ctx->pc = 0x121C00u;
        goto label_121c00;
    }
    ctx->pc = 0x121BF8u;
    SET_GPR_U32(ctx, 31, 0x121C00u);
    ctx->pc = 0x102B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102B90u, 0x121BF8u, 0x121C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C00u;
label_121c00:
    // 0x121c00: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x121c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_121c04:
    // 0x121c04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x121c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_121c08:
    // 0x121c08: 0xc047088  jal         func_11C220
label_121c0c:
    if (ctx->pc == 0x121C0Cu) {
        ctx->pc = 0x121C10u;
        goto label_121c10;
    }
    ctx->pc = 0x121C08u;
    SET_GPR_U32(ctx, 31, 0x121C10u);
    ctx->pc = 0x11C220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C220u, 0x121C08u, 0x121C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C10u;
label_121c10:
    // 0x121c10: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x121c10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_121c14:
    // 0x121c14: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x121c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_121c18:
    // 0x121c18: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x121c18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_121c1c:
    // 0x121c1c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_121c20:
    if (ctx->pc == 0x121C20u) {
        ctx->pc = 0x121C24u;
        goto label_121c24;
    }
    ctx->pc = 0x121C1Cu;
    {
        const bool branch_taken_0x121c1c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x121c1c) {
            ctx->pc = 0x121C30u;
            goto label_121c30;
        }
    }
    ctx->pc = 0x121C24u;
label_121c24:
    // 0x121c24: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x121c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_121c28:
    // 0x121c28: 0xc0ba070  jal         func_2E81C0
label_121c2c:
    if (ctx->pc == 0x121C2Cu) {
        ctx->pc = 0x121C30u;
        goto label_121c30;
    }
    ctx->pc = 0x121C28u;
    SET_GPR_U32(ctx, 31, 0x121C30u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x121C28u, 0x121C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121C30u;
label_121c30:
    // 0x121c30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x121c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_121c34:
    // 0x121c34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x121c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_121c38:
    // 0x121c38: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x121c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_121c3c:
    // 0x121c3c: 0x3e00008  jr          $ra
label_121c40:
    if (ctx->pc == 0x121C40u) {
        ctx->pc = 0x121C44u;
        goto label_121c44;
    }
    ctx->pc = 0x121C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121C44u;
label_121c44:
    // 0x121c44: 0x0  nop
    ctx->pc = 0x121c44u;
    // NOP
label_121c48:
    // 0x121c48: 0x0  nop
    ctx->pc = 0x121c48u;
    // NOP
label_121c4c:
    // 0x121c4c: 0x0  nop
    ctx->pc = 0x121c4cu;
    // NOP
label_121c50:
    // 0x121c50: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x121c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
label_121c54:
    // 0x121c54: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x121c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_121c58:
    // 0x121c58: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x121c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_121c5c:
    // 0x121c5c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x121c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_121c60:
    // 0x121c60: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x121c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_121c64:
    // 0x121c64: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x121c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_121c68:
    // 0x121c68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x121c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_121c6c:
    // 0x121c6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x121c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_121c70:
    // 0x121c70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x121c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_121c74:
    // 0x121c74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x121c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_121c78:
    // 0x121c78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x121c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_121c7c:
    // 0x121c7c: 0xafa40240  sw          $a0, 0x240($sp)
    ctx->pc = 0x121c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 4));
label_121c80:
    // 0x121c80: 0xa3a50250  sb          $a1, 0x250($sp)
    ctx->pc = 0x121c80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 592), (uint8_t)GPR_U32(ctx, 5));
label_121c84:
    // 0x121c84: 0x93a40250  lbu         $a0, 0x250($sp)
    ctx->pc = 0x121c84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 592)));
label_121c88:
    // 0x121c88: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x121c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_121c8c:
    // 0x121c8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x121c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121c90:
    // 0x121c90: 0x14640273  bne         $v1, $a0, . + 4 + (0x273 << 2)
label_121c94:
    if (ctx->pc == 0x121C94u) {
        ctx->pc = 0x121C98u;
        goto label_121c98;
    }
    ctx->pc = 0x121C90u;
    {
        const bool branch_taken_0x121c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x121c90) {
            ctx->pc = 0x122660u;
            goto label_122660;
        }
    }
    ctx->pc = 0x121C98u;
label_121c98:
    // 0x121c98: 0xc090864  jal         func_242190
label_121c9c:
    if (ctx->pc == 0x121C9Cu) {
        ctx->pc = 0x121CA0u;
        goto label_121ca0;
    }
    ctx->pc = 0x121C98u;
    SET_GPR_U32(ctx, 31, 0x121CA0u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x121C98u, 0x121CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121CA0u;
label_121ca0:
    // 0x121ca0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x121ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121ca4:
    // 0x121ca4: 0xc090590  jal         func_241640
label_121ca8:
    if (ctx->pc == 0x121CA8u) {
        ctx->pc = 0x121CACu;
        goto label_121cac;
    }
    ctx->pc = 0x121CA4u;
    SET_GPR_U32(ctx, 31, 0x121CACu);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x121CA4u, 0x121CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121CACu;
label_121cac:
    // 0x121cac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x121cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121cb0:
    // 0x121cb0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x121cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_121cb4:
    // 0x121cb4: 0xc09157c  jal         func_2455F0
label_121cb8:
    if (ctx->pc == 0x121CB8u) {
        ctx->pc = 0x121CBCu;
        goto label_121cbc;
    }
    ctx->pc = 0x121CB4u;
    SET_GPR_U32(ctx, 31, 0x121CBCu);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x121CB4u, 0x121CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121CBCu;
label_121cbc:
    // 0x121cbc: 0xafa20238  sw          $v0, 0x238($sp)
    ctx->pc = 0x121cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 2));
label_121cc0:
    // 0x121cc0: 0x8fa50238  lw          $a1, 0x238($sp)
    ctx->pc = 0x121cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_121cc4:
    // 0x121cc4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x121cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_121cc8:
    // 0x121cc8: 0xc040e7c  jal         func_1039F0
label_121ccc:
    if (ctx->pc == 0x121CCCu) {
        ctx->pc = 0x121CD0u;
        goto label_121cd0;
    }
    ctx->pc = 0x121CC8u;
    SET_GPR_U32(ctx, 31, 0x121CD0u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x121CC8u, 0x121CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121CD0u;
label_121cd0:
    // 0x121cd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x121cd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121cd4:
    // 0x121cd4: 0x1000000a  b           . + 4 + (0xA << 2)
label_121cd8:
    if (ctx->pc == 0x121CD8u) {
        ctx->pc = 0x121CDCu;
        goto label_121cdc;
    }
    ctx->pc = 0x121CD4u;
    {
        const bool branch_taken_0x121cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121cd4) {
            ctx->pc = 0x121D00u;
            goto label_121d00;
        }
    }
    ctx->pc = 0x121CDCu;
label_121cdc:
    // 0x121cdc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x121cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_121ce0:
    // 0x121ce0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x121ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_121ce4:
    // 0x121ce4: 0xc085538  jal         func_2154E0
label_121ce8:
    if (ctx->pc == 0x121CE8u) {
        ctx->pc = 0x121CECu;
        goto label_121cec;
    }
    ctx->pc = 0x121CE4u;
    SET_GPR_U32(ctx, 31, 0x121CECu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x121CE4u, 0x121CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121CECu;
label_121cec:
    // 0x121cec: 0xafa20234  sw          $v0, 0x234($sp)
    ctx->pc = 0x121cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 2));
label_121cf0:
    // 0x121cf0: 0x8fa40234  lw          $a0, 0x234($sp)
    ctx->pc = 0x121cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
label_121cf4:
    // 0x121cf4: 0xc0ac634  jal         func_2B18D0
label_121cf8:
    if (ctx->pc == 0x121CF8u) {
        ctx->pc = 0x121CFCu;
        goto label_121cfc;
    }
    ctx->pc = 0x121CF4u;
    SET_GPR_U32(ctx, 31, 0x121CFCu);
    ctx->pc = 0x2B18D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B18D0u, 0x121CF4u, 0x121CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121CFCu;
label_121cfc:
    // 0x121cfc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x121cfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_121d00:
    // 0x121d00: 0x8fa40238  lw          $a0, 0x238($sp)
    ctx->pc = 0x121d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_121d04:
    // 0x121d04: 0xc04147c  jal         func_1051F0
label_121d08:
    if (ctx->pc == 0x121D08u) {
        ctx->pc = 0x121D0Cu;
        goto label_121d0c;
    }
    ctx->pc = 0x121D04u;
    SET_GPR_U32(ctx, 31, 0x121D0Cu);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x121D04u, 0x121D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D0Cu;
label_121d0c:
    // 0x121d0c: 0x1622fff3  bne         $s1, $v0, . + 4 + (-0xD << 2)
label_121d10:
    if (ctx->pc == 0x121D10u) {
        ctx->pc = 0x121D14u;
        goto label_121d14;
    }
    ctx->pc = 0x121D0Cu;
    {
        const bool branch_taken_0x121d0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x121d0c) {
            ctx->pc = 0x121CDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_121cdc;
        }
    }
    ctx->pc = 0x121D14u;
label_121d14:
    // 0x121d14: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x121d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
label_121d18:
    // 0x121d18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x121d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121d1c:
    // 0x121d1c: 0xc04fbd0  jal         func_13EF40
label_121d20:
    if (ctx->pc == 0x121D20u) {
        ctx->pc = 0x121D24u;
        goto label_121d24;
    }
    ctx->pc = 0x121D1Cu;
    SET_GPR_U32(ctx, 31, 0x121D24u);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x121D1Cu, 0x121D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D24u;
label_121d24:
    // 0x121d24: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x121d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
label_121d28:
    // 0x121d28: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x121d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_121d2c:
    // 0x121d2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_121d30:
    if (ctx->pc == 0x121D30u) {
        ctx->pc = 0x121D34u;
        goto label_121d34;
    }
    ctx->pc = 0x121D2Cu;
    {
        const bool branch_taken_0x121d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121d2c) {
            ctx->pc = 0x121D40u;
            goto label_121d40;
        }
    }
    ctx->pc = 0x121D34u;
label_121d34:
    // 0x121d34: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x121d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_121d38:
    // 0x121d38: 0xc050444  jal         func_141110
label_121d3c:
    if (ctx->pc == 0x121D3Cu) {
        ctx->pc = 0x121D40u;
        goto label_121d40;
    }
    ctx->pc = 0x121D38u;
    SET_GPR_U32(ctx, 31, 0x121D40u);
    ctx->pc = 0x141110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141110u, 0x121D38u, 0x121D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D40u;
label_121d40:
    // 0x121d40: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x121d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_121d44:
    // 0x121d44: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x121d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_121d48:
    // 0x121d48: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x121d48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_121d4c:
    // 0x121d4c: 0x24a52110  addiu       $a1, $a1, 0x2110
    ctx->pc = 0x121d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8464));
label_121d50:
    // 0x121d50: 0x27868af8  addiu       $a2, $gp, -0x7508
    ctx->pc = 0x121d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937336));
label_121d54:
    // 0x121d54: 0xc04206c  jal         func_1081B0
label_121d58:
    if (ctx->pc == 0x121D58u) {
        ctx->pc = 0x121D5Cu;
        goto label_121d5c;
    }
    ctx->pc = 0x121D54u;
    SET_GPR_U32(ctx, 31, 0x121D5Cu);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x121D54u, 0x121D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D5Cu;
label_121d5c:
    // 0x121d5c: 0xafa2022c  sw          $v0, 0x22C($sp)
    ctx->pc = 0x121d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 2));
label_121d60:
    // 0x121d60: 0x8fa4022c  lw          $a0, 0x22C($sp)
    ctx->pc = 0x121d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
label_121d64:
    // 0x121d64: 0x8fa5022c  lw          $a1, 0x22C($sp)
    ctx->pc = 0x121d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
label_121d68:
    // 0x121d68: 0xc11949c  jal         func_465270
label_121d6c:
    if (ctx->pc == 0x121D6Cu) {
        ctx->pc = 0x121D70u;
        goto label_121d70;
    }
    ctx->pc = 0x121D68u;
    SET_GPR_U32(ctx, 31, 0x121D70u);
    ctx->pc = 0x465270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465270u, 0x121D68u, 0x121D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D70u;
label_121d70:
    // 0x121d70: 0x8fa4022c  lw          $a0, 0x22C($sp)
    ctx->pc = 0x121d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
label_121d74:
    // 0x121d74: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x121d74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_121d78:
    // 0x121d78: 0x24a52120  addiu       $a1, $a1, 0x2120
    ctx->pc = 0x121d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8480));
label_121d7c:
    // 0x121d7c: 0xc0bc824  jal         func_2F2090
label_121d80:
    if (ctx->pc == 0x121D80u) {
        ctx->pc = 0x121D84u;
        goto label_121d84;
    }
    ctx->pc = 0x121D7Cu;
    SET_GPR_U32(ctx, 31, 0x121D84u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x121D7Cu, 0x121D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D84u;
label_121d84:
    // 0x121d84: 0x10400175  beqz        $v0, . + 4 + (0x175 << 2)
label_121d88:
    if (ctx->pc == 0x121D88u) {
        ctx->pc = 0x121D8Cu;
        goto label_121d8c;
    }
    ctx->pc = 0x121D84u;
    {
        const bool branch_taken_0x121d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121d84) {
            ctx->pc = 0x12235Cu;
            goto label_12235c;
        }
    }
    ctx->pc = 0x121D8Cu;
label_121d8c:
    // 0x121d8c: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x121d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_121d90:
    // 0x121d90: 0xc050c6c  jal         func_1431B0
label_121d94:
    if (ctx->pc == 0x121D94u) {
        ctx->pc = 0x121D98u;
        goto label_121d98;
    }
    ctx->pc = 0x121D90u;
    SET_GPR_U32(ctx, 31, 0x121D98u);
    ctx->pc = 0x1431B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1431B0u, 0x121D90u, 0x121D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D98u;
label_121d98:
    // 0x121d98: 0x8f85bbb4  lw          $a1, -0x444C($gp)
    ctx->pc = 0x121d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_121d9c:
    // 0x121d9c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x121d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_121da0:
    // 0x121da0: 0xc047eb8  jal         func_11FAE0
label_121da4:
    if (ctx->pc == 0x121DA4u) {
        ctx->pc = 0x121DA8u;
        goto label_121da8;
    }
    ctx->pc = 0x121DA0u;
    SET_GPR_U32(ctx, 31, 0x121DA8u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x121DA0u, 0x121DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121DA8u;
label_121da8:
    // 0x121da8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x121da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121dac:
    // 0x121dac: 0xc047eb0  jal         func_11FAC0
label_121db0:
    if (ctx->pc == 0x121DB0u) {
        ctx->pc = 0x121DB4u;
        goto label_121db4;
    }
    ctx->pc = 0x121DACu;
    SET_GPR_U32(ctx, 31, 0x121DB4u);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x121DACu, 0x121DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121DB4u;
label_121db4:
    // 0x121db4: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x121db4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_121db8:
    // 0x121db8: 0xafb60228  sw          $s6, 0x228($sp)
    ctx->pc = 0x121db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 22));
label_121dbc:
    // 0x121dbc: 0xc090864  jal         func_242190
label_121dc0:
    if (ctx->pc == 0x121DC0u) {
        ctx->pc = 0x121DC4u;
        goto label_121dc4;
    }
    ctx->pc = 0x121DBCu;
    SET_GPR_U32(ctx, 31, 0x121DC4u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x121DBCu, 0x121DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121DC4u;
label_121dc4:
    // 0x121dc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x121dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121dc8:
    // 0x121dc8: 0xc090590  jal         func_241640
label_121dcc:
    if (ctx->pc == 0x121DCCu) {
        ctx->pc = 0x121DD0u;
        goto label_121dd0;
    }
    ctx->pc = 0x121DC8u;
    SET_GPR_U32(ctx, 31, 0x121DD0u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x121DC8u, 0x121DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121DD0u;
label_121dd0:
    // 0x121dd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x121dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121dd4:
    // 0x121dd4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x121dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_121dd8:
    // 0x121dd8: 0xc09157c  jal         func_2455F0
label_121ddc:
    if (ctx->pc == 0x121DDCu) {
        ctx->pc = 0x121DE0u;
        goto label_121de0;
    }
    ctx->pc = 0x121DD8u;
    SET_GPR_U32(ctx, 31, 0x121DE0u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x121DD8u, 0x121DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121DE0u;
label_121de0:
    // 0x121de0: 0xafa20224  sw          $v0, 0x224($sp)
    ctx->pc = 0x121de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
label_121de4:
    // 0x121de4: 0x8fa40224  lw          $a0, 0x224($sp)
    ctx->pc = 0x121de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
label_121de8:
    // 0x121de8: 0xc040e7c  jal         func_1039F0
label_121dec:
    if (ctx->pc == 0x121DECu) {
        ctx->pc = 0x121DF0u;
        goto label_121df0;
    }
    ctx->pc = 0x121DE8u;
    SET_GPR_U32(ctx, 31, 0x121DF0u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x121DE8u, 0x121DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121DF0u;
label_121df0:
    // 0x121df0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x121df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121df4:
    // 0x121df4: 0x10000131  b           . + 4 + (0x131 << 2)
label_121df8:
    if (ctx->pc == 0x121DF8u) {
        ctx->pc = 0x121DFCu;
        goto label_121dfc;
    }
    ctx->pc = 0x121DF4u;
    {
        const bool branch_taken_0x121df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121df4) {
            ctx->pc = 0x1222BCu;
            goto label_1222bc;
        }
    }
    ctx->pc = 0x121DFCu;
label_121dfc:
    // 0x121dfc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x121dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_121e00:
    // 0x121e00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x121e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121e04:
    // 0x121e04: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x121e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_121e08:
    // 0x121e08: 0xc085538  jal         func_2154E0
label_121e0c:
    if (ctx->pc == 0x121E0Cu) {
        ctx->pc = 0x121E10u;
        goto label_121e10;
    }
    ctx->pc = 0x121E08u;
    SET_GPR_U32(ctx, 31, 0x121E10u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x121E08u, 0x121E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121E10u;
label_121e10:
    // 0x121e10: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x121e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
label_121e14:
    // 0x121e14: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x121e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_121e18:
    // 0x121e18: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x121e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_121e1c:
    // 0x121e1c: 0xc085538  jal         func_2154E0
label_121e20:
    if (ctx->pc == 0x121E20u) {
        ctx->pc = 0x121E24u;
        goto label_121e24;
    }
    ctx->pc = 0x121E1Cu;
    SET_GPR_U32(ctx, 31, 0x121E24u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x121E1Cu, 0x121E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121E24u;
label_121e24:
    // 0x121e24: 0xafa2021c  sw          $v0, 0x21C($sp)
    ctx->pc = 0x121e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 2));
label_121e28:
    // 0x121e28: 0x8fa40220  lw          $a0, 0x220($sp)
    ctx->pc = 0x121e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_121e2c:
    // 0x121e2c: 0xc094178  jal         func_2505E0
label_121e30:
    if (ctx->pc == 0x121E30u) {
        ctx->pc = 0x121E34u;
        goto label_121e34;
    }
    ctx->pc = 0x121E2Cu;
    SET_GPR_U32(ctx, 31, 0x121E34u);
    ctx->pc = 0x2505E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2505E0u, 0x121E2Cu, 0x121E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121E34u;
label_121e34:
    // 0x121e34: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x121e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_121e38:
    // 0x121e38: 0x1444011f  bne         $v0, $a0, . + 4 + (0x11F << 2)
label_121e3c:
    if (ctx->pc == 0x121E3Cu) {
        ctx->pc = 0x121E40u;
        goto label_121e40;
    }
    ctx->pc = 0x121E38u;
    {
        const bool branch_taken_0x121e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x121e38) {
            ctx->pc = 0x1222B8u;
            goto label_1222b8;
        }
    }
    ctx->pc = 0x121E40u;
label_121e40:
    // 0x121e40: 0xafa00218  sw          $zero, 0x218($sp)
    ctx->pc = 0x121e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 0));
label_121e44:
    // 0x121e44: 0xafa00214  sw          $zero, 0x214($sp)
    ctx->pc = 0x121e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 0));
label_121e48:
    // 0x121e48: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x121e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_121e4c:
    // 0x121e4c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x121e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_121e50:
    // 0x121e50: 0x27858af8  addiu       $a1, $gp, -0x7508
    ctx->pc = 0x121e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937336));
label_121e54:
    // 0x121e54: 0xc040304  jal         func_100C10
label_121e58:
    if (ctx->pc == 0x121E58u) {
        ctx->pc = 0x121E5Cu;
        goto label_121e5c;
    }
    ctx->pc = 0x121E54u;
    SET_GPR_U32(ctx, 31, 0x121E5Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x121E54u, 0x121E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121E5Cu;
label_121e5c:
    // 0x121e5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x121e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_121e60:
    // 0x121e60: 0x27a301a0  addiu       $v1, $sp, 0x1A0
    ctx->pc = 0x121e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_121e64:
    // 0x121e64: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x121e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_121e68:
    // 0x121e68: 0xc048bc4  jal         func_122F10
label_121e6c:
    if (ctx->pc == 0x121E6Cu) {
        ctx->pc = 0x121E70u;
        goto label_121e70;
    }
    ctx->pc = 0x121E68u;
    SET_GPR_U32(ctx, 31, 0x121E70u);
    ctx->pc = 0x122F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F10u, 0x121E68u, 0x121E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121E70u;
label_121e70:
    // 0x121e70: 0x8fa5021c  lw          $a1, 0x21C($sp)
    ctx->pc = 0x121e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_121e74:
    // 0x121e74: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x121e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_121e78:
    // 0x121e78: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x121e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_121e7c:
    // 0x121e7c: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x121e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_121e80:
    // 0x121e80: 0xc09bc24  jal         func_26F090
label_121e84:
    if (ctx->pc == 0x121E84u) {
        ctx->pc = 0x121E88u;
        goto label_121e88;
    }
    ctx->pc = 0x121E80u;
    SET_GPR_U32(ctx, 31, 0x121E88u);
    ctx->pc = 0x26F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F090u, 0x121E80u, 0x121E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121E88u;
label_121e88:
    // 0x121e88: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x121e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_121e8c:
    // 0x121e8c: 0xc048bb4  jal         func_122ED0
label_121e90:
    if (ctx->pc == 0x121E90u) {
        ctx->pc = 0x121E94u;
        goto label_121e94;
    }
    ctx->pc = 0x121E8Cu;
    SET_GPR_U32(ctx, 31, 0x121E94u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x121E8Cu, 0x121E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121E94u;
label_121e94:
    // 0x121e94: 0x104000a3  beqz        $v0, . + 4 + (0xA3 << 2)
label_121e98:
    if (ctx->pc == 0x121E98u) {
        ctx->pc = 0x121E9Cu;
        goto label_121e9c;
    }
    ctx->pc = 0x121E94u;
    {
        const bool branch_taken_0x121e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121e94) {
            ctx->pc = 0x122124u;
            goto label_122124;
        }
    }
    ctx->pc = 0x121E9Cu;
label_121e9c:
    // 0x121e9c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x121e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_121ea0:
    // 0x121ea0: 0xc041a60  jal         func_106980
label_121ea4:
    if (ctx->pc == 0x121EA4u) {
        ctx->pc = 0x121EA8u;
        goto label_121ea8;
    }
    ctx->pc = 0x121EA0u;
    SET_GPR_U32(ctx, 31, 0x121EA8u);
    ctx->pc = 0x106980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106980u, 0x121EA0u, 0x121EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121EA8u;
label_121ea8:
    // 0x121ea8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x121ea8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121eac:
    // 0x121eac: 0x1000001e  b           . + 4 + (0x1E << 2)
label_121eb0:
    if (ctx->pc == 0x121EB0u) {
        ctx->pc = 0x121EB4u;
        goto label_121eb4;
    }
    ctx->pc = 0x121EACu;
    {
        const bool branch_taken_0x121eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121eac) {
            ctx->pc = 0x121F28u;
            goto label_121f28;
        }
    }
    ctx->pc = 0x121EB4u;
label_121eb4:
    // 0x121eb4: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x121eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_121eb8:
    // 0x121eb8: 0x240504bd  addiu       $a1, $zero, 0x4BD
    ctx->pc = 0x121eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1213));
label_121ebc:
    // 0x121ebc: 0x27868af8  addiu       $a2, $gp, -0x7508
    ctx->pc = 0x121ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937336));
label_121ec0:
    // 0x121ec0: 0xc041a50  jal         func_106940
label_121ec4:
    if (ctx->pc == 0x121EC4u) {
        ctx->pc = 0x121EC8u;
        goto label_121ec8;
    }
    ctx->pc = 0x121EC0u;
    SET_GPR_U32(ctx, 31, 0x121EC8u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x121EC0u, 0x121EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121EC8u;
label_121ec8:
    // 0x121ec8: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x121ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_121ecc:
    // 0x121ecc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x121eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121ed0:
    // 0x121ed0: 0xc041ba4  jal         func_106E90
label_121ed4:
    if (ctx->pc == 0x121ED4u) {
        ctx->pc = 0x121ED8u;
        goto label_121ed8;
    }
    ctx->pc = 0x121ED0u;
    SET_GPR_U32(ctx, 31, 0x121ED8u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x121ED0u, 0x121ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121ED8u;
label_121ed8:
    // 0x121ed8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x121ed8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121edc:
    // 0x121edc: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x121edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_121ee0:
    // 0x121ee0: 0xc042514  jal         func_109450
label_121ee4:
    if (ctx->pc == 0x121EE4u) {
        ctx->pc = 0x121EE8u;
        goto label_121ee8;
    }
    ctx->pc = 0x121EE0u;
    SET_GPR_U32(ctx, 31, 0x121EE8u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x121EE0u, 0x121EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121EE8u;
label_121ee8:
    // 0x121ee8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_121eec:
    if (ctx->pc == 0x121EECu) {
        ctx->pc = 0x121EF0u;
        goto label_121ef0;
    }
    ctx->pc = 0x121EE8u;
    {
        const bool branch_taken_0x121ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121ee8) {
            ctx->pc = 0x121F24u;
            goto label_121f24;
        }
    }
    ctx->pc = 0x121EF0u;
label_121ef0:
    // 0x121ef0: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x121ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_121ef4:
    // 0x121ef4: 0xc041b40  jal         func_106D00
label_121ef8:
    if (ctx->pc == 0x121EF8u) {
        ctx->pc = 0x121EFCu;
        goto label_121efc;
    }
    ctx->pc = 0x121EF4u;
    SET_GPR_U32(ctx, 31, 0x121EFCu);
    ctx->pc = 0x106D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D00u, 0x121EF4u, 0x121EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121EFCu;
label_121efc:
    // 0x121efc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x121efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_121f00:
    // 0x121f00: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x121f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_121f04:
    // 0x121f04: 0xc041b38  jal         func_106CE0
label_121f08:
    if (ctx->pc == 0x121F08u) {
        ctx->pc = 0x121F0Cu;
        goto label_121f0c;
    }
    ctx->pc = 0x121F04u;
    SET_GPR_U32(ctx, 31, 0x121F0Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x121F04u, 0x121F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121F0Cu;
label_121f0c:
    // 0x121f0c: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x121f0cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_121f10:
    // 0x121f10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x121f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121f14:
    // 0x121f14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x121f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_121f18:
    // 0x121f18: 0xc047970  jal         func_11E5C0
label_121f1c:
    if (ctx->pc == 0x121F1Cu) {
        ctx->pc = 0x121F20u;
        goto label_121f20;
    }
    ctx->pc = 0x121F18u;
    SET_GPR_U32(ctx, 31, 0x121F20u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x121F18u, 0x121F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121F20u;
label_121f20:
    // 0x121f20: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x121f20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_121f24:
    // 0x121f24: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x121f24u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_121f28:
    // 0x121f28: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x121f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_121f2c:
    // 0x121f2c: 0xc041a14  jal         func_106850
label_121f30:
    if (ctx->pc == 0x121F30u) {
        ctx->pc = 0x121F34u;
        goto label_121f34;
    }
    ctx->pc = 0x121F2Cu;
    SET_GPR_U32(ctx, 31, 0x121F34u);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x121F2Cu, 0x121F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121F34u;
label_121f34:
    // 0x121f34: 0x17c2ffdf  bne         $fp, $v0, . + 4 + (-0x21 << 2)
label_121f38:
    if (ctx->pc == 0x121F38u) {
        ctx->pc = 0x121F3Cu;
        goto label_121f3c;
    }
    ctx->pc = 0x121F34u;
    {
        const bool branch_taken_0x121f34 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x121f34) {
            ctx->pc = 0x121EB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_121eb4;
        }
    }
    ctx->pc = 0x121F3Cu;
label_121f3c:
    // 0x121f3c: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x121f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_121f40:
    // 0x121f40: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x121f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_121f44:
    // 0x121f44: 0xc041a60  jal         func_106980
label_121f48:
    if (ctx->pc == 0x121F48u) {
        ctx->pc = 0x121F4Cu;
        goto label_121f4c;
    }
    ctx->pc = 0x121F44u;
    SET_GPR_U32(ctx, 31, 0x121F4Cu);
    ctx->pc = 0x106980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106980u, 0x121F44u, 0x121F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121F4Cu;
label_121f4c:
    // 0x121f4c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x121f4cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121f50:
    // 0x121f50: 0x1000006f  b           . + 4 + (0x6F << 2)
label_121f54:
    if (ctx->pc == 0x121F54u) {
        ctx->pc = 0x121F58u;
        goto label_121f58;
    }
    ctx->pc = 0x121F50u;
    {
        const bool branch_taken_0x121f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121f50) {
            ctx->pc = 0x122110u;
            goto label_122110;
        }
    }
    ctx->pc = 0x121F58u;
label_121f58:
    // 0x121f58: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x121f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_121f5c:
    // 0x121f5c: 0x240504bd  addiu       $a1, $zero, 0x4BD
    ctx->pc = 0x121f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1213));
label_121f60:
    // 0x121f60: 0x27868af8  addiu       $a2, $gp, -0x7508
    ctx->pc = 0x121f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937336));
label_121f64:
    // 0x121f64: 0xc041a50  jal         func_106940
label_121f68:
    if (ctx->pc == 0x121F68u) {
        ctx->pc = 0x121F6Cu;
        goto label_121f6c;
    }
    ctx->pc = 0x121F64u;
    SET_GPR_U32(ctx, 31, 0x121F6Cu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x121F64u, 0x121F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121F6Cu;
label_121f6c:
    // 0x121f6c: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x121f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_121f70:
    // 0x121f70: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x121f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_121f74:
    // 0x121f74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x121f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121f78:
    // 0x121f78: 0xc041ba4  jal         func_106E90
label_121f7c:
    if (ctx->pc == 0x121F7Cu) {
        ctx->pc = 0x121F80u;
        goto label_121f80;
    }
    ctx->pc = 0x121F78u;
    SET_GPR_U32(ctx, 31, 0x121F80u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x121F78u, 0x121F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121F80u;
label_121f80:
    // 0x121f80: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_121f84:
    if (ctx->pc == 0x121F84u) {
        ctx->pc = 0x121F88u;
        goto label_121f88;
    }
    ctx->pc = 0x121F80u;
    {
        const bool branch_taken_0x121f80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x121f80) {
            ctx->pc = 0x121F8Cu;
            goto label_121f8c;
        }
    }
    ctx->pc = 0x121F88u;
label_121f88:
    // 0x121f88: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x121f88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_121f8c:
    // 0x121f8c: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x121f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
label_121f90:
    // 0x121f90: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x121f90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_121f94:
    // 0x121f94: 0x1020005d  beqz        $at, . + 4 + (0x5D << 2)
label_121f98:
    if (ctx->pc == 0x121F98u) {
        ctx->pc = 0x121F9Cu;
        goto label_121f9c;
    }
    ctx->pc = 0x121F94u;
    {
        const bool branch_taken_0x121f94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x121f94) {
            ctx->pc = 0x12210Cu;
            goto label_12210c;
        }
    }
    ctx->pc = 0x121F9Cu;
label_121f9c:
    // 0x121f9c: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x121f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
label_121fa0:
    // 0x121fa0: 0x24847ef0  addiu       $a0, $a0, 0x7EF0
    ctx->pc = 0x121fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32496));
label_121fa4:
    // 0x121fa4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x121fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_121fa8:
    // 0x121fa8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x121fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_121fac:
    // 0x121fac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x121facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_121fb0:
    // 0x121fb0: 0x800008  jr          $a0
label_121fb4:
    if (ctx->pc == 0x121FB4u) {
        ctx->pc = 0x121FB8u;
        goto label_121fb8;
    }
    ctx->pc = 0x121FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x121FB8u: goto label_121fb8;
            case 0x121FE8u: goto label_121fe8;
            case 0x122030u: goto label_122030;
            case 0x122058u: goto label_122058;
            case 0x122080u: goto label_122080;
            case 0x1220CCu: goto label_1220cc;
            case 0x12210Cu: goto label_12210c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121FB0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x121FB8u;
label_121fb8:
    // 0x121fb8: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x121fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_121fbc:
    // 0x121fbc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x121fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_121fc0:
    // 0x121fc0: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x121fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
label_121fc4:
    // 0x121fc4: 0x24c62130  addiu       $a2, $a2, 0x2130
    ctx->pc = 0x121fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8496));
label_121fc8:
    // 0x121fc8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x121fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_121fcc:
    // 0x121fcc: 0xc048c30  jal         func_1230C0
label_121fd0:
    if (ctx->pc == 0x121FD0u) {
        ctx->pc = 0x121FD4u;
        goto label_121fd4;
    }
    ctx->pc = 0x121FCCu;
    SET_GPR_U32(ctx, 31, 0x121FD4u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x121FCCu, 0x121FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121FD4u;
label_121fd4:
    // 0x121fd4: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_121fd8:
    if (ctx->pc == 0x121FD8u) {
        ctx->pc = 0x121FDCu;
        goto label_121fdc;
    }
    ctx->pc = 0x121FD4u;
    {
        const bool branch_taken_0x121fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121fd4) {
            ctx->pc = 0x12210Cu;
            goto label_12210c;
        }
    }
    ctx->pc = 0x121FDCu;
label_121fdc:
    // 0x121fdc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x121fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121fe0:
    // 0x121fe0: 0x1000004a  b           . + 4 + (0x4A << 2)
label_121fe4:
    if (ctx->pc == 0x121FE4u) {
        ctx->pc = 0x121FE8u;
        goto label_121fe8;
    }
    ctx->pc = 0x121FE0u;
    {
        const bool branch_taken_0x121fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121fe0) {
            ctx->pc = 0x12210Cu;
            goto label_12210c;
        }
    }
    ctx->pc = 0x121FE8u;
label_121fe8:
    // 0x121fe8: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x121fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_121fec:
    // 0x121fec: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x121fecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_121ff0:
    // 0x121ff0: 0x24a52140  addiu       $a1, $a1, 0x2140
    ctx->pc = 0x121ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8512));
label_121ff4:
    // 0x121ff4: 0xc048c30  jal         func_1230C0
label_121ff8:
    if (ctx->pc == 0x121FF8u) {
        ctx->pc = 0x121FFCu;
        goto label_121ffc;
    }
    ctx->pc = 0x121FF4u;
    SET_GPR_U32(ctx, 31, 0x121FFCu);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x121FF4u, 0x121FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121FFCu;
label_121ffc:
    // 0x121ffc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_122000:
    if (ctx->pc == 0x122000u) {
        ctx->pc = 0x122004u;
        goto label_122004;
    }
    ctx->pc = 0x121FFCu;
    {
        const bool branch_taken_0x121ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121ffc) {
            ctx->pc = 0x122008u;
            goto label_122008;
        }
    }
    ctx->pc = 0x122004u;
label_122004:
    // 0x122004: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x122004u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122008:
    // 0x122008: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x122008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_12200c:
    // 0x12200c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x12200cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_122010:
    // 0x122010: 0x24a52150  addiu       $a1, $a1, 0x2150
    ctx->pc = 0x122010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8528));
label_122014:
    // 0x122014: 0xc048c30  jal         func_1230C0
label_122018:
    if (ctx->pc == 0x122018u) {
        ctx->pc = 0x12201Cu;
        goto label_12201c;
    }
    ctx->pc = 0x122014u;
    SET_GPR_U32(ctx, 31, 0x12201Cu);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x122014u, 0x12201Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12201Cu;
label_12201c:
    // 0x12201c: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_122020:
    if (ctx->pc == 0x122020u) {
        ctx->pc = 0x122024u;
        goto label_122024;
    }
    ctx->pc = 0x12201Cu;
    {
        const bool branch_taken_0x12201c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12201c) {
            ctx->pc = 0x12210Cu;
            goto label_12210c;
        }
    }
    ctx->pc = 0x122024u;
label_122024:
    // 0x122024: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x122024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122028:
    // 0x122028: 0x10000038  b           . + 4 + (0x38 << 2)
label_12202c:
    if (ctx->pc == 0x12202Cu) {
        ctx->pc = 0x122030u;
        goto label_122030;
    }
    ctx->pc = 0x122028u;
    {
        const bool branch_taken_0x122028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122028) {
            ctx->pc = 0x12210Cu;
            goto label_12210c;
        }
    }
    ctx->pc = 0x122030u;
label_122030:
    // 0x122030: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x122030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_122034:
    // 0x122034: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x122034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_122038:
    // 0x122038: 0x24a52168  addiu       $a1, $a1, 0x2168
    ctx->pc = 0x122038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8552));
label_12203c:
    // 0x12203c: 0xc048c30  jal         func_1230C0
label_122040:
    if (ctx->pc == 0x122040u) {
        ctx->pc = 0x122044u;
        goto label_122044;
    }
    ctx->pc = 0x12203Cu;
    SET_GPR_U32(ctx, 31, 0x122044u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x12203Cu, 0x122044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122044u;
label_122044:
    // 0x122044: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_122048:
    if (ctx->pc == 0x122048u) {
        ctx->pc = 0x12204Cu;
        goto label_12204c;
    }
    ctx->pc = 0x122044u;
    {
        const bool branch_taken_0x122044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x122044) {
            ctx->pc = 0x12210Cu;
            goto label_12210c;
        }
    }
    ctx->pc = 0x12204Cu;
label_12204c:
    // 0x12204c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12204cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122050:
    // 0x122050: 0x1000002e  b           . + 4 + (0x2E << 2)
label_122054:
    if (ctx->pc == 0x122054u) {
        ctx->pc = 0x122058u;
        goto label_122058;
    }
    ctx->pc = 0x122050u;
    {
        const bool branch_taken_0x122050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122050) {
            ctx->pc = 0x12210Cu;
            goto label_12210c;
        }
    }
    ctx->pc = 0x122058u;
label_122058:
    // 0x122058: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x122058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_12205c:
    // 0x12205c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x12205cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_122060:
    // 0x122060: 0x24a52178  addiu       $a1, $a1, 0x2178
    ctx->pc = 0x122060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8568));
label_122064:
    // 0x122064: 0xc048c30  jal         func_1230C0
label_122068:
    if (ctx->pc == 0x122068u) {
        ctx->pc = 0x12206Cu;
        goto label_12206c;
    }
    ctx->pc = 0x122064u;
    SET_GPR_U32(ctx, 31, 0x12206Cu);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x122064u, 0x12206Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12206Cu;
label_12206c:
    // 0x12206c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_122070:
    if (ctx->pc == 0x122070u) {
        ctx->pc = 0x122074u;
        goto label_122074;
    }
    ctx->pc = 0x12206Cu;
    {
        const bool branch_taken_0x12206c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12206c) {
            ctx->pc = 0x12210Cu;
            goto label_12210c;
        }
    }
    ctx->pc = 0x122074u;
label_122074:
    // 0x122074: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x122074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122078:
    // 0x122078: 0x10000024  b           . + 4 + (0x24 << 2)
label_12207c:
    if (ctx->pc == 0x12207Cu) {
        ctx->pc = 0x122080u;
        goto label_122080;
    }
    ctx->pc = 0x122078u;
    {
        const bool branch_taken_0x122078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122078) {
            ctx->pc = 0x12210Cu;
            goto label_12210c;
        }
    }
    ctx->pc = 0x122080u;
label_122080:
    // 0x122080: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x122080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_122084:
    // 0x122084: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x122084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_122088:
    // 0x122088: 0x24a52188  addiu       $a1, $a1, 0x2188
    ctx->pc = 0x122088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8584));
label_12208c:
    // 0x12208c: 0xc048c30  jal         func_1230C0
label_122090:
    if (ctx->pc == 0x122090u) {
        ctx->pc = 0x122094u;
        goto label_122094;
    }
    ctx->pc = 0x12208Cu;
    SET_GPR_U32(ctx, 31, 0x122094u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x12208Cu, 0x122094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122094u;
label_122094:
    // 0x122094: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_122098:
    if (ctx->pc == 0x122098u) {
        ctx->pc = 0x12209Cu;
        goto label_12209c;
    }
    ctx->pc = 0x122094u;
    {
        const bool branch_taken_0x122094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x122094) {
            ctx->pc = 0x1220A0u;
            goto label_1220a0;
        }
    }
    ctx->pc = 0x12209Cu;
label_12209c:
    // 0x12209c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12209cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1220a0:
    // 0x1220a0: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1220a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_1220a4:
    // 0x1220a4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1220a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1220a8:
    // 0x1220a8: 0x24a52150  addiu       $a1, $a1, 0x2150
    ctx->pc = 0x1220a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8528));
label_1220ac:
    // 0x1220ac: 0xc048c30  jal         func_1230C0
label_1220b0:
    if (ctx->pc == 0x1220B0u) {
        ctx->pc = 0x1220B4u;
        goto label_1220b4;
    }
    ctx->pc = 0x1220ACu;
    SET_GPR_U32(ctx, 31, 0x1220B4u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x1220ACu, 0x1220B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1220B4u;
label_1220b4:
    // 0x1220b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1220b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1220b8:
    // 0x1220b8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_1220bc:
    if (ctx->pc == 0x1220BCu) {
        ctx->pc = 0x1220C0u;
        goto label_1220c0;
    }
    ctx->pc = 0x1220B8u;
    {
        const bool branch_taken_0x1220b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1220b8) {
            ctx->pc = 0x12210Cu;
            goto label_12210c;
        }
    }
    ctx->pc = 0x1220C0u;
label_1220c0:
    // 0x1220c0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1220c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1220c4:
    // 0x1220c4: 0x10000011  b           . + 4 + (0x11 << 2)
label_1220c8:
    if (ctx->pc == 0x1220C8u) {
        ctx->pc = 0x1220CCu;
        goto label_1220cc;
    }
    ctx->pc = 0x1220C4u;
    {
        const bool branch_taken_0x1220c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1220c4) {
            ctx->pc = 0x12210Cu;
            goto label_12210c;
        }
    }
    ctx->pc = 0x1220CCu;
label_1220cc:
    // 0x1220cc: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1220ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_1220d0:
    // 0x1220d0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1220d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1220d4:
    // 0x1220d4: 0x24a52198  addiu       $a1, $a1, 0x2198
    ctx->pc = 0x1220d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8600));
label_1220d8:
    // 0x1220d8: 0xc048c30  jal         func_1230C0
label_1220dc:
    if (ctx->pc == 0x1220DCu) {
        ctx->pc = 0x1220E0u;
        goto label_1220e0;
    }
    ctx->pc = 0x1220D8u;
    SET_GPR_U32(ctx, 31, 0x1220E0u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x1220D8u, 0x1220E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1220E0u;
label_1220e0:
    // 0x1220e0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1220e4:
    if (ctx->pc == 0x1220E4u) {
        ctx->pc = 0x1220E8u;
        goto label_1220e8;
    }
    ctx->pc = 0x1220E0u;
    {
        const bool branch_taken_0x1220e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1220e0) {
            ctx->pc = 0x1220ECu;
            goto label_1220ec;
        }
    }
    ctx->pc = 0x1220E8u;
label_1220e8:
    // 0x1220e8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1220e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1220ec:
    // 0x1220ec: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1220ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_1220f0:
    // 0x1220f0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1220f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1220f4:
    // 0x1220f4: 0x24a52150  addiu       $a1, $a1, 0x2150
    ctx->pc = 0x1220f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8528));
label_1220f8:
    // 0x1220f8: 0xc048c30  jal         func_1230C0
label_1220fc:
    if (ctx->pc == 0x1220FCu) {
        ctx->pc = 0x122100u;
        goto label_122100;
    }
    ctx->pc = 0x1220F8u;
    SET_GPR_U32(ctx, 31, 0x122100u);
    ctx->pc = 0x1230C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1230C0u, 0x1220F8u, 0x122100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122100u;
label_122100:
    // 0x122100: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_122104:
    if (ctx->pc == 0x122104u) {
        ctx->pc = 0x122108u;
        goto label_122108;
    }
    ctx->pc = 0x122100u;
    {
        const bool branch_taken_0x122100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x122100) {
            ctx->pc = 0x12210Cu;
            goto label_12210c;
        }
    }
    ctx->pc = 0x122108u;
label_122108:
    // 0x122108: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x122108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12210c:
    // 0x12210c: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x12210cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_122110:
    // 0x122110: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x122110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_122114:
    // 0x122114: 0xc041a14  jal         func_106850
label_122118:
    if (ctx->pc == 0x122118u) {
        ctx->pc = 0x12211Cu;
        goto label_12211c;
    }
    ctx->pc = 0x122114u;
    SET_GPR_U32(ctx, 31, 0x12211Cu);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x122114u, 0x12211Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12211Cu;
label_12211c:
    // 0x12211c: 0x16e2ff8e  bne         $s7, $v0, . + 4 + (-0x72 << 2)
label_122120:
    if (ctx->pc == 0x122120u) {
        ctx->pc = 0x122124u;
        goto label_122124;
    }
    ctx->pc = 0x12211Cu;
    {
        const bool branch_taken_0x12211c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x12211c) {
            ctx->pc = 0x121F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_121f58;
        }
    }
    ctx->pc = 0x122124u;
label_122124:
    // 0x122124: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x122124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_122128:
    // 0x122128: 0xc088560  jal         func_221580
label_12212c:
    if (ctx->pc == 0x12212Cu) {
        ctx->pc = 0x122130u;
        goto label_122130;
    }
    ctx->pc = 0x122128u;
    SET_GPR_U32(ctx, 31, 0x122130u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x122128u, 0x122130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122130u;
label_122130:
    // 0x122130: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_122134:
    if (ctx->pc == 0x122134u) {
        ctx->pc = 0x122138u;
        goto label_122138;
    }
    ctx->pc = 0x122130u;
    {
        const bool branch_taken_0x122130 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x122130) {
            ctx->pc = 0x122148u;
            goto label_122148;
        }
    }
    ctx->pc = 0x122138u;
label_122138:
    // 0x122138: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x122138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12213c:
    // 0x12213c: 0xafa501c0  sw          $a1, 0x1C0($sp)
    ctx->pc = 0x12213cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 5));
label_122140:
    // 0x122140: 0x10000002  b           . + 4 + (0x2 << 2)
label_122144:
    if (ctx->pc == 0x122144u) {
        ctx->pc = 0x122148u;
        goto label_122148;
    }
    ctx->pc = 0x122140u;
    {
        const bool branch_taken_0x122140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122140) {
            ctx->pc = 0x12214Cu;
            goto label_12214c;
        }
    }
    ctx->pc = 0x122148u;
label_122148:
    // 0x122148: 0xafa001c0  sw          $zero, 0x1C0($sp)
    ctx->pc = 0x122148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 0));
label_12214c:
    // 0x12214c: 0x8fa60220  lw          $a2, 0x220($sp)
    ctx->pc = 0x12214cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_122150:
    // 0x122150: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x122150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_122154:
    // 0x122154: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x122154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_122158:
    // 0x122158: 0xc094180  jal         func_250600
label_12215c:
    if (ctx->pc == 0x12215Cu) {
        ctx->pc = 0x122160u;
        goto label_122160;
    }
    ctx->pc = 0x122158u;
    SET_GPR_U32(ctx, 31, 0x122160u);
    ctx->pc = 0x250600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250600u, 0x122158u, 0x122160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122160u;
label_122160:
    // 0x122160: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122164:
    // 0x122164: 0xc041874  jal         func_1061D0
label_122168:
    if (ctx->pc == 0x122168u) {
        ctx->pc = 0x12216Cu;
        goto label_12216c;
    }
    ctx->pc = 0x122164u;
    SET_GPR_U32(ctx, 31, 0x12216Cu);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x122164u, 0x12216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12216Cu;
label_12216c:
    // 0x12216c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x12216cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_122170:
    // 0x122170: 0x240503e9  addiu       $a1, $zero, 0x3E9
    ctx->pc = 0x122170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
label_122174:
    // 0x122174: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x122174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122178:
    // 0x122178: 0xc0433dc  jal         func_10CF70
label_12217c:
    if (ctx->pc == 0x12217Cu) {
        ctx->pc = 0x122180u;
        goto label_122180;
    }
    ctx->pc = 0x122178u;
    SET_GPR_U32(ctx, 31, 0x122180u);
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x122178u, 0x122180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122180u;
label_122180:
    // 0x122180: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x122180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_122184:
    // 0x122184: 0x240203fa  addiu       $v0, $zero, 0x3FA
    ctx->pc = 0x122184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1018));
label_122188:
    // 0x122188: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x122188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_12218c:
    // 0x12218c: 0x7ba500b0  lq          $a1, 0xB0($sp)
    ctx->pc = 0x12218cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_122190:
    // 0x122190: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x122190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122194:
    // 0x122194: 0xc041b54  jal         func_106D50
label_122198:
    if (ctx->pc == 0x122198u) {
        ctx->pc = 0x12219Cu;
        goto label_12219c;
    }
    ctx->pc = 0x122194u;
    SET_GPR_U32(ctx, 31, 0x12219Cu);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x122194u, 0x12219Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12219Cu;
label_12219c:
    // 0x12219c: 0x27a20190  addiu       $v0, $sp, 0x190
    ctx->pc = 0x12219cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1221a0:
    // 0x1221a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1221a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1221a4:
    // 0x1221a4: 0x240503fb  addiu       $a1, $zero, 0x3FB
    ctx->pc = 0x1221a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1019));
label_1221a8:
    // 0x1221a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1221a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1221ac:
    // 0x1221ac: 0xc040924  jal         func_102490
label_1221b0:
    if (ctx->pc == 0x1221B0u) {
        ctx->pc = 0x1221B4u;
        goto label_1221b4;
    }
    ctx->pc = 0x1221ACu;
    SET_GPR_U32(ctx, 31, 0x1221B4u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x1221ACu, 0x1221B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1221B4u;
label_1221b4:
    // 0x1221b4: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1221b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1221b8:
    // 0x1221b8: 0x240503fc  addiu       $a1, $zero, 0x3FC
    ctx->pc = 0x1221b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1020));
label_1221bc:
    // 0x1221bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1221bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1221c0:
    // 0x1221c0: 0xc040924  jal         func_102490
label_1221c4:
    if (ctx->pc == 0x1221C4u) {
        ctx->pc = 0x1221C8u;
        goto label_1221c8;
    }
    ctx->pc = 0x1221C0u;
    SET_GPR_U32(ctx, 31, 0x1221C8u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x1221C0u, 0x1221C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1221C8u;
label_1221c8:
    // 0x1221c8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1221c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_1221cc:
    // 0x1221cc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1221ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1221d0:
    // 0x1221d0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_1221d4:
    if (ctx->pc == 0x1221D4u) {
        ctx->pc = 0x1221D8u;
        goto label_1221d8;
    }
    ctx->pc = 0x1221D0u;
    {
        const bool branch_taken_0x1221d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1221d0) {
            ctx->pc = 0x1221F8u;
            goto label_1221f8;
        }
    }
    ctx->pc = 0x1221D8u;
label_1221d8:
    // 0x1221d8: 0x803021  addu        $a2, $a0, $zero
    ctx->pc = 0x1221d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1221dc:
    // 0x1221dc: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1221dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_1221e0:
    // 0x1221e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1221e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1221e4:
    // 0x1221e4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1221e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1221e8:
    // 0x1221e8: 0x0  nop
    ctx->pc = 0x1221e8u;
    // NOP
label_1221ec:
    // 0x1221ec: 0x0  nop
    ctx->pc = 0x1221ecu;
    // NOP
label_1221f0:
    // 0x1221f0: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
label_1221f4:
    if (ctx->pc == 0x1221F4u) {
        ctx->pc = 0x1221F8u;
        goto label_1221f8;
    }
    ctx->pc = 0x1221F0u;
    {
        const bool branch_taken_0x1221f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1221f0) {
            ctx->pc = 0x1221DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1221dc;
        }
    }
    ctx->pc = 0x1221F8u;
label_1221f8:
    // 0x1221f8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1221f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1221fc:
    // 0x1221fc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1221fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_122200:
    // 0x122200: 0xc085538  jal         func_2154E0
label_122204:
    if (ctx->pc == 0x122204u) {
        ctx->pc = 0x122208u;
        goto label_122208;
    }
    ctx->pc = 0x122200u;
    SET_GPR_U32(ctx, 31, 0x122208u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x122200u, 0x122208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122208u;
label_122208:
    // 0x122208: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x122208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
label_12220c:
    // 0x12220c: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x12220cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_122210:
    // 0x122210: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x122210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_122214:
    // 0x122214: 0xc090f6c  jal         func_243DB0
label_122218:
    if (ctx->pc == 0x122218u) {
        ctx->pc = 0x12221Cu;
        goto label_12221c;
    }
    ctx->pc = 0x122214u;
    SET_GPR_U32(ctx, 31, 0x12221Cu);
    ctx->pc = 0x243DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243DB0u, 0x122214u, 0x12221Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12221Cu;
label_12221c:
    // 0x12221c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12221cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122220:
    // 0x122220: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x122220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_122224:
    // 0x122224: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x122224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_122228:
    // 0x122228: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x122228u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12222c:
    // 0x12222c: 0xc08cd28  jal         func_2334A0
label_122230:
    if (ctx->pc == 0x122230u) {
        ctx->pc = 0x122234u;
        goto label_122234;
    }
    ctx->pc = 0x12222Cu;
    SET_GPR_U32(ctx, 31, 0x122234u);
    ctx->pc = 0x2334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2334A0u, 0x12222Cu, 0x122234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122234u;
label_122234:
    // 0x122234: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x122234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
label_122238:
    // 0x122238: 0x8fa2020c  lw          $v0, 0x20C($sp)
    ctx->pc = 0x122238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_12223c:
    // 0x12223c: 0x10020012  beq         $zero, $v0, . + 4 + (0x12 << 2)
label_122240:
    if (ctx->pc == 0x122240u) {
        ctx->pc = 0x122244u;
        goto label_122244;
    }
    ctx->pc = 0x12223Cu;
    {
        const bool branch_taken_0x12223c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x12223c) {
            ctx->pc = 0x122288u;
            goto label_122288;
        }
    }
    ctx->pc = 0x122244u;
label_122244:
    // 0x122244: 0x8fa4020c  lw          $a0, 0x20C($sp)
    ctx->pc = 0x122244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_122248:
    // 0x122248: 0xc0913ec  jal         func_244FB0
label_12224c:
    if (ctx->pc == 0x12224Cu) {
        ctx->pc = 0x122250u;
        goto label_122250;
    }
    ctx->pc = 0x122248u;
    SET_GPR_U32(ctx, 31, 0x122250u);
    ctx->pc = 0x244FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244FB0u, 0x122248u, 0x122250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122250u;
label_122250:
    // 0x122250: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x122250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
label_122254:
    // 0x122254: 0x8fa50208  lw          $a1, 0x208($sp)
    ctx->pc = 0x122254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_122258:
    // 0x122258: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_12225c:
    if (ctx->pc == 0x12225Cu) {
        ctx->pc = 0x122260u;
        goto label_122260;
    }
    ctx->pc = 0x122258u;
    {
        const bool branch_taken_0x122258 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x122258) {
            ctx->pc = 0x122278u;
            goto label_122278;
        }
    }
    ctx->pc = 0x122260u;
label_122260:
    // 0x122260: 0x8fa60208  lw          $a2, 0x208($sp)
    ctx->pc = 0x122260u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_122264:
    // 0x122264: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x122264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_122268:
    // 0x122268: 0x24050562  addiu       $a1, $zero, 0x562
    ctx->pc = 0x122268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1378));
label_12226c:
    // 0x12226c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12226cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_122270:
    // 0x122270: 0xc040924  jal         func_102490
label_122274:
    if (ctx->pc == 0x122274u) {
        ctx->pc = 0x122278u;
        goto label_122278;
    }
    ctx->pc = 0x122270u;
    SET_GPR_U32(ctx, 31, 0x122278u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x122270u, 0x122278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122278u;
label_122278:
    // 0x122278: 0x8fa40220  lw          $a0, 0x220($sp)
    ctx->pc = 0x122278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_12227c:
    // 0x12227c: 0x8fa5020c  lw          $a1, 0x20C($sp)
    ctx->pc = 0x12227cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_122280:
    // 0x122280: 0xc094198  jal         func_250660
label_122284:
    if (ctx->pc == 0x122284u) {
        ctx->pc = 0x122288u;
        goto label_122288;
    }
    ctx->pc = 0x122280u;
    SET_GPR_U32(ctx, 31, 0x122288u);
    ctx->pc = 0x250660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250660u, 0x122280u, 0x122288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122288u;
label_122288:
    // 0x122288: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x122288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_12228c:
    // 0x12228c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x12228cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_122290:
    // 0x122290: 0xc0887b4  jal         func_221ED0
label_122294:
    if (ctx->pc == 0x122294u) {
        ctx->pc = 0x122298u;
        goto label_122298;
    }
    ctx->pc = 0x122290u;
    SET_GPR_U32(ctx, 31, 0x122298u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x122290u, 0x122298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122298u;
label_122298:
    // 0x122298: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x122298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_12229c:
    // 0x12229c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x12229cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1222a0:
    // 0x1222a0: 0xc048b2c  jal         func_122CB0
label_1222a4:
    if (ctx->pc == 0x1222A4u) {
        ctx->pc = 0x1222A8u;
        goto label_1222a8;
    }
    ctx->pc = 0x1222A0u;
    SET_GPR_U32(ctx, 31, 0x1222A8u);
    ctx->pc = 0x122CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122CB0u, 0x1222A0u, 0x1222A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1222A8u;
label_1222a8:
    // 0x1222a8: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1222a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_1222ac:
    // 0x1222ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1222acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1222b0:
    // 0x1222b0: 0xc0402d4  jal         func_100B50
label_1222b4:
    if (ctx->pc == 0x1222B4u) {
        ctx->pc = 0x1222B8u;
        goto label_1222b8;
    }
    ctx->pc = 0x1222B0u;
    SET_GPR_U32(ctx, 31, 0x1222B8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1222B0u, 0x1222B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1222B8u;
label_1222b8:
    // 0x1222b8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1222b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1222bc:
    // 0x1222bc: 0x8fa60224  lw          $a2, 0x224($sp)
    ctx->pc = 0x1222bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
label_1222c0:
    // 0x1222c0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1222c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1222c4:
    // 0x1222c4: 0xc04147c  jal         func_1051F0
label_1222c8:
    if (ctx->pc == 0x1222C8u) {
        ctx->pc = 0x1222CCu;
        goto label_1222cc;
    }
    ctx->pc = 0x1222C4u;
    SET_GPR_U32(ctx, 31, 0x1222CCu);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x1222C4u, 0x1222CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1222CCu;
label_1222cc:
    // 0x1222cc: 0x1622fecb  bne         $s1, $v0, . + 4 + (-0x135 << 2)
label_1222d0:
    if (ctx->pc == 0x1222D0u) {
        ctx->pc = 0x1222D4u;
        goto label_1222d4;
    }
    ctx->pc = 0x1222CCu;
    {
        const bool branch_taken_0x1222cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1222cc) {
            ctx->pc = 0x121DFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_121dfc;
        }
    }
    ctx->pc = 0x1222D4u;
label_1222d4:
    // 0x1222d4: 0x8fa40240  lw          $a0, 0x240($sp)
    ctx->pc = 0x1222d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_1222d8:
    // 0x1222d8: 0x24820028  addiu       $v0, $a0, 0x28
    ctx->pc = 0x1222d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
label_1222dc:
    // 0x1222dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1222dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1222e0:
    // 0x1222e0: 0x240504c6  addiu       $a1, $zero, 0x4C6
    ctx->pc = 0x1222e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1222));
label_1222e4:
    // 0x1222e4: 0x27868af8  addiu       $a2, $gp, -0x7508
    ctx->pc = 0x1222e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937336));
label_1222e8:
    // 0x1222e8: 0xc041a50  jal         func_106940
label_1222ec:
    if (ctx->pc == 0x1222ECu) {
        ctx->pc = 0x1222F0u;
        goto label_1222f0;
    }
    ctx->pc = 0x1222E8u;
    SET_GPR_U32(ctx, 31, 0x1222F0u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x1222E8u, 0x1222F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1222F0u;
label_1222f0:
    // 0x1222f0: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x1222f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
label_1222f4:
    // 0x1222f4: 0x8fa40204  lw          $a0, 0x204($sp)
    ctx->pc = 0x1222f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_1222f8:
    // 0x1222f8: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x1222f8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1222fc:
    // 0x1222fc: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_122300:
    if (ctx->pc == 0x122300u) {
        ctx->pc = 0x122304u;
        goto label_122304;
    }
    ctx->pc = 0x1222FCu;
    {
        const bool branch_taken_0x1222fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1222fc) {
            ctx->pc = 0x122344u;
            goto label_122344;
        }
    }
    ctx->pc = 0x122304u;
label_122304:
    // 0x122304: 0x8fa20240  lw          $v0, 0x240($sp)
    ctx->pc = 0x122304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_122308:
    // 0x122308: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x122308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12230c:
    // 0x12230c: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x12230cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_122310:
    // 0x122310: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x122310u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_122314:
    // 0x122314: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x122314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_122318:
    // 0x122318: 0xc08ef28  jal         func_23BCA0
label_12231c:
    if (ctx->pc == 0x12231Cu) {
        ctx->pc = 0x122320u;
        goto label_122320;
    }
    ctx->pc = 0x122318u;
    SET_GPR_U32(ctx, 31, 0x122320u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x122318u, 0x122320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122320u;
label_122320:
    // 0x122320: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x122320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_122324:
    // 0x122324: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x122324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_122328:
    // 0x122328: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x122328u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12232c:
    // 0x12232c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x12232cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_122330:
    // 0x122330: 0x24050534  addiu       $a1, $zero, 0x534
    ctx->pc = 0x122330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
label_122334:
    // 0x122334: 0xc041bc4  jal         func_106F10
label_122338:
    if (ctx->pc == 0x122338u) {
        ctx->pc = 0x12233Cu;
        goto label_12233c;
    }
    ctx->pc = 0x122334u;
    SET_GPR_U32(ctx, 31, 0x12233Cu);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x122334u, 0x12233Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12233Cu;
label_12233c:
    // 0x12233c: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_122340:
    if (ctx->pc == 0x122340u) {
        ctx->pc = 0x122344u;
        goto label_122344;
    }
    ctx->pc = 0x12233Cu;
    {
        const bool branch_taken_0x12233c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12233c) {
            ctx->pc = 0x122660u;
            goto label_122660;
        }
    }
    ctx->pc = 0x122344u;
label_122344:
    // 0x122344: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x122344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122348:
    // 0x122348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x122348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12234c:
    // 0x12234c: 0xc08ef28  jal         func_23BCA0
label_122350:
    if (ctx->pc == 0x122350u) {
        ctx->pc = 0x122354u;
        goto label_122354;
    }
    ctx->pc = 0x12234Cu;
    SET_GPR_U32(ctx, 31, 0x122354u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x12234Cu, 0x122354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122354u;
label_122354:
    // 0x122354: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_122358:
    if (ctx->pc == 0x122358u) {
        ctx->pc = 0x12235Cu;
        goto label_12235c;
    }
    ctx->pc = 0x122354u;
    {
        const bool branch_taken_0x122354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122354) {
            ctx->pc = 0x122660u;
            goto label_122660;
        }
    }
    ctx->pc = 0x12235Cu;
label_12235c:
    // 0x12235c: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x12235cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_122360:
    // 0x122360: 0xc050c6c  jal         func_1431B0
label_122364:
    if (ctx->pc == 0x122364u) {
        ctx->pc = 0x122368u;
        goto label_122368;
    }
    ctx->pc = 0x122360u;
    SET_GPR_U32(ctx, 31, 0x122368u);
    ctx->pc = 0x1431B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1431B0u, 0x122360u, 0x122368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122368u;
label_122368:
    // 0x122368: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x122368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
label_12236c:
    // 0x12236c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x12236cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_122370:
    // 0x122370: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x122370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_122374:
    // 0x122374: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x122374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_122378:
    // 0x122378: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x122378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12237c:
    // 0x12237c: 0xc08d48c  jal         func_235230
label_122380:
    if (ctx->pc == 0x122380u) {
        ctx->pc = 0x122384u;
        goto label_122384;
    }
    ctx->pc = 0x12237Cu;
    SET_GPR_U32(ctx, 31, 0x122384u);
    ctx->pc = 0x235230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235230u, 0x12237Cu, 0x122384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122384u;
label_122384:
    // 0x122384: 0x8fa50240  lw          $a1, 0x240($sp)
    ctx->pc = 0x122384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_122388:
    // 0x122388: 0x24a40028  addiu       $a0, $a1, 0x28
    ctx->pc = 0x122388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
label_12238c:
    // 0x12238c: 0x240504c6  addiu       $a1, $zero, 0x4C6
    ctx->pc = 0x12238cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1222));
label_122390:
    // 0x122390: 0x27868af8  addiu       $a2, $gp, -0x7508
    ctx->pc = 0x122390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937336));
label_122394:
    // 0x122394: 0xc041a50  jal         func_106940
label_122398:
    if (ctx->pc == 0x122398u) {
        ctx->pc = 0x12239Cu;
        goto label_12239c;
    }
    ctx->pc = 0x122394u;
    SET_GPR_U32(ctx, 31, 0x12239Cu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x122394u, 0x12239Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12239Cu;
label_12239c:
    // 0x12239c: 0xafa201fc  sw          $v0, 0x1FC($sp)
    ctx->pc = 0x12239cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 2));
label_1223a0:
    // 0x1223a0: 0x8fa301fc  lw          $v1, 0x1FC($sp)
    ctx->pc = 0x1223a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
label_1223a4:
    // 0x1223a4: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x1223a4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1223a8:
    // 0x1223a8: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_1223ac:
    if (ctx->pc == 0x1223ACu) {
        ctx->pc = 0x1223B0u;
        goto label_1223b0;
    }
    ctx->pc = 0x1223A8u;
    {
        const bool branch_taken_0x1223a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1223a8) {
            ctx->pc = 0x1223ECu;
            goto label_1223ec;
        }
    }
    ctx->pc = 0x1223B0u;
label_1223b0:
    // 0x1223b0: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x1223b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_1223b4:
    // 0x1223b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1223b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1223b8:
    // 0x1223b8: 0x24650028  addiu       $a1, $v1, 0x28
    ctx->pc = 0x1223b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_1223bc:
    // 0x1223bc: 0xc08ef28  jal         func_23BCA0
label_1223c0:
    if (ctx->pc == 0x1223C0u) {
        ctx->pc = 0x1223C4u;
        goto label_1223c4;
    }
    ctx->pc = 0x1223BCu;
    SET_GPR_U32(ctx, 31, 0x1223C4u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x1223BCu, 0x1223C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1223C4u;
label_1223c4:
    // 0x1223c4: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1223c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1223c8:
    // 0x1223c8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1223c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1223cc:
    // 0x1223cc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1223ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1223d0:
    // 0x1223d0: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x1223d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_1223d4:
    // 0x1223d4: 0x24020534  addiu       $v0, $zero, 0x534
    ctx->pc = 0x1223d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
label_1223d8:
    // 0x1223d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1223d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1223dc:
    // 0x1223dc: 0xc041bc4  jal         func_106F10
label_1223e0:
    if (ctx->pc == 0x1223E0u) {
        ctx->pc = 0x1223E4u;
        goto label_1223e4;
    }
    ctx->pc = 0x1223DCu;
    SET_GPR_U32(ctx, 31, 0x1223E4u);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x1223DCu, 0x1223E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1223E4u;
label_1223e4:
    // 0x1223e4: 0x1000009e  b           . + 4 + (0x9E << 2)
label_1223e8:
    if (ctx->pc == 0x1223E8u) {
        ctx->pc = 0x1223ECu;
        goto label_1223ec;
    }
    ctx->pc = 0x1223E4u;
    {
        const bool branch_taken_0x1223e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1223e4) {
            ctx->pc = 0x122660u;
            goto label_122660;
        }
    }
    ctx->pc = 0x1223ECu;
label_1223ec:
    // 0x1223ec: 0x8fa50240  lw          $a1, 0x240($sp)
    ctx->pc = 0x1223ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_1223f0:
    // 0x1223f0: 0x24a20028  addiu       $v0, $a1, 0x28
    ctx->pc = 0x1223f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
label_1223f4:
    // 0x1223f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1223f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1223f8:
    // 0x1223f8: 0x24050542  addiu       $a1, $zero, 0x542
    ctx->pc = 0x1223f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1346));
label_1223fc:
    // 0x1223fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1223fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122400:
    // 0x122400: 0xc04146c  jal         func_1051B0
label_122404:
    if (ctx->pc == 0x122404u) {
        ctx->pc = 0x122408u;
        goto label_122408;
    }
    ctx->pc = 0x122400u;
    SET_GPR_U32(ctx, 31, 0x122408u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x122400u, 0x122408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122408u;
label_122408:
    // 0x122408: 0xa3a2023f  sb          $v0, 0x23F($sp)
    ctx->pc = 0x122408u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 575), (uint8_t)GPR_U32(ctx, 2));
label_12240c:
    // 0x12240c: 0x93a4023f  lbu         $a0, 0x23F($sp)
    ctx->pc = 0x12240cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 575)));
label_122410:
    // 0x122410: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x122410u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_122414:
    // 0x122414: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x122414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122418:
    // 0x122418: 0x14a20086  bne         $a1, $v0, . + 4 + (0x86 << 2)
label_12241c:
    if (ctx->pc == 0x12241Cu) {
        ctx->pc = 0x122420u;
        goto label_122420;
    }
    ctx->pc = 0x122418u;
    {
        const bool branch_taken_0x122418 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x122418) {
            ctx->pc = 0x122634u;
            goto label_122634;
        }
    }
    ctx->pc = 0x122420u;
label_122420:
    // 0x122420: 0x8fa40240  lw          $a0, 0x240($sp)
    ctx->pc = 0x122420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_122424:
    // 0x122424: 0x24820028  addiu       $v0, $a0, 0x28
    ctx->pc = 0x122424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
label_122428:
    // 0x122428: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12242c:
    // 0x12242c: 0x24110542  addiu       $s1, $zero, 0x542
    ctx->pc = 0x12242cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1346));
label_122430:
    // 0x122430: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x122430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_122434:
    // 0x122434: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x122434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122438:
    // 0x122438: 0xc041b54  jal         func_106D50
label_12243c:
    if (ctx->pc == 0x12243Cu) {
        ctx->pc = 0x122440u;
        goto label_122440;
    }
    ctx->pc = 0x122438u;
    SET_GPR_U32(ctx, 31, 0x122440u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x122438u, 0x122440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122440u;
label_122440:
    // 0x122440: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122444:
    // 0x122444: 0xc090864  jal         func_242190
label_122448:
    if (ctx->pc == 0x122448u) {
        ctx->pc = 0x12244Cu;
        goto label_12244c;
    }
    ctx->pc = 0x122444u;
    SET_GPR_U32(ctx, 31, 0x12244Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x122444u, 0x12244Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12244Cu;
label_12244c:
    // 0x12244c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12244cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122450:
    // 0x122450: 0xc090598  jal         func_241660
label_122454:
    if (ctx->pc == 0x122454u) {
        ctx->pc = 0x122458u;
        goto label_122458;
    }
    ctx->pc = 0x122450u;
    SET_GPR_U32(ctx, 31, 0x122458u);
    ctx->pc = 0x241660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241660u, 0x122450u, 0x122458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122458u;
label_122458:
    // 0x122458: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12245c:
    // 0x12245c: 0x8fa50200  lw          $a1, 0x200($sp)
    ctx->pc = 0x12245cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_122460:
    // 0x122460: 0xc095a34  jal         func_2568D0
label_122464:
    if (ctx->pc == 0x122464u) {
        ctx->pc = 0x122468u;
        goto label_122468;
    }
    ctx->pc = 0x122460u;
    SET_GPR_U32(ctx, 31, 0x122468u);
    ctx->pc = 0x2568D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2568D0u, 0x122460u, 0x122468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122468u;
label_122468:
    // 0x122468: 0xafa201f8  sw          $v0, 0x1F8($sp)
    ctx->pc = 0x122468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 2));
label_12246c:
    // 0x12246c: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x12246cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_122470:
    // 0x122470: 0x1002001a  beq         $zero, $v0, . + 4 + (0x1A << 2)
label_122474:
    if (ctx->pc == 0x122474u) {
        ctx->pc = 0x122478u;
        goto label_122478;
    }
    ctx->pc = 0x122470u;
    {
        const bool branch_taken_0x122470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x122470) {
            ctx->pc = 0x1224DCu;
            goto label_1224dc;
        }
    }
    ctx->pc = 0x122478u;
label_122478:
    // 0x122478: 0x8fa40200  lw          $a0, 0x200($sp)
    ctx->pc = 0x122478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
label_12247c:
    // 0x12247c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x12247cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_122480:
    // 0x122480: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x122480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122484:
    // 0x122484: 0xc085538  jal         func_2154E0
label_122488:
    if (ctx->pc == 0x122488u) {
        ctx->pc = 0x12248Cu;
        goto label_12248c;
    }
    ctx->pc = 0x122484u;
    SET_GPR_U32(ctx, 31, 0x12248Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x122484u, 0x12248Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12248Cu;
label_12248c:
    // 0x12248c: 0xafa201f4  sw          $v0, 0x1F4($sp)
    ctx->pc = 0x12248cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
label_122490:
    // 0x122490: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x122490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_122494:
    // 0x122494: 0x10040011  beq         $zero, $a0, . + 4 + (0x11 << 2)
label_122498:
    if (ctx->pc == 0x122498u) {
        ctx->pc = 0x12249Cu;
        goto label_12249c;
    }
    ctx->pc = 0x122494u;
    {
        const bool branch_taken_0x122494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x122494) {
            ctx->pc = 0x1224DCu;
            goto label_1224dc;
        }
    }
    ctx->pc = 0x12249Cu;
label_12249c:
    // 0x12249c: 0x8fa501f8  lw          $a1, 0x1F8($sp)
    ctx->pc = 0x12249cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_1224a0:
    // 0x1224a0: 0x8fa601f4  lw          $a2, 0x1F4($sp)
    ctx->pc = 0x1224a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_1224a4:
    // 0x1224a4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1224a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1224a8:
    // 0x1224a8: 0x24a20014  addiu       $v0, $a1, 0x14
    ctx->pc = 0x1224a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
label_1224ac:
    // 0x1224ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1224acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1224b0:
    // 0x1224b0: 0xc090f14  jal         func_243C50
label_1224b4:
    if (ctx->pc == 0x1224B4u) {
        ctx->pc = 0x1224B8u;
        goto label_1224b8;
    }
    ctx->pc = 0x1224B0u;
    SET_GPR_U32(ctx, 31, 0x1224B8u);
    ctx->pc = 0x243C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C50u, 0x1224B0u, 0x1224B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1224B8u;
label_1224b8:
    // 0x1224b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1224b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1224bc:
    // 0x1224bc: 0x8fa501f8  lw          $a1, 0x1F8($sp)
    ctx->pc = 0x1224bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_1224c0:
    // 0x1224c0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1224c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1224c4:
    // 0x1224c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1224c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1224c8:
    // 0x1224c8: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x1224c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_1224cc:
    // 0x1224cc: 0xc4ac0010  lwc1        $f12, 0x10($a1)
    ctx->pc = 0x1224ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1224d0:
    // 0x1224d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1224d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1224d4:
    // 0x1224d4: 0xc090fe0  jal         func_243F80
label_1224d8:
    if (ctx->pc == 0x1224D8u) {
        ctx->pc = 0x1224DCu;
        goto label_1224dc;
    }
    ctx->pc = 0x1224D4u;
    SET_GPR_U32(ctx, 31, 0x1224DCu);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x1224D4u, 0x1224DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1224DCu;
label_1224dc:
    // 0x1224dc: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1224dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1224e0:
    // 0x1224e0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1224e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_1224e4:
    // 0x1224e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1224e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1224e8:
    // 0x1224e8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1224e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1224ec:
    // 0x1224ec: 0x24a521b0  addiu       $a1, $a1, 0x21B0
    ctx->pc = 0x1224ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8624));
label_1224f0:
    // 0x1224f0: 0x27828af8  addiu       $v0, $gp, -0x7508
    ctx->pc = 0x1224f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937336));
label_1224f4:
    // 0x1224f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1224f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1224f8:
    // 0x1224f8: 0xc04206c  jal         func_1081B0
label_1224fc:
    if (ctx->pc == 0x1224FCu) {
        ctx->pc = 0x122500u;
        goto label_122500;
    }
    ctx->pc = 0x1224F8u;
    SET_GPR_U32(ctx, 31, 0x122500u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x1224F8u, 0x122500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122500u;
label_122500:
    // 0x122500: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x122500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
label_122504:
    // 0x122504: 0x8fb601f0  lw          $s6, 0x1F0($sp)
    ctx->pc = 0x122504u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_122508:
    // 0x122508: 0x10000047  b           . + 4 + (0x47 << 2)
label_12250c:
    if (ctx->pc == 0x12250Cu) {
        ctx->pc = 0x122510u;
        goto label_122510;
    }
    ctx->pc = 0x122508u;
    {
        const bool branch_taken_0x122508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122508) {
            ctx->pc = 0x122628u;
            goto label_122628;
        }
    }
    ctx->pc = 0x122510u;
label_122510:
    // 0x122510: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x122510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_122514:
    // 0x122514: 0x27828b00  addiu       $v0, $gp, -0x7500
    ctx->pc = 0x122514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937344));
label_122518:
    // 0x122518: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x122518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12251c:
    // 0x12251c: 0x27a201ec  addiu       $v0, $sp, 0x1EC
    ctx->pc = 0x12251cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 492));
label_122520:
    // 0x122520: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x122520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122524:
    // 0x122524: 0xc0bc408  jal         func_2F1020
label_122528:
    if (ctx->pc == 0x122528u) {
        ctx->pc = 0x12252Cu;
        goto label_12252c;
    }
    ctx->pc = 0x122524u;
    SET_GPR_U32(ctx, 31, 0x12252Cu);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x122524u, 0x12252Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12252Cu;
label_12252c:
    // 0x12252c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12252cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122530:
    // 0x122530: 0xc0434e0  jal         func_10D380
label_122534:
    if (ctx->pc == 0x122534u) {
        ctx->pc = 0x122538u;
        goto label_122538;
    }
    ctx->pc = 0x122530u;
    SET_GPR_U32(ctx, 31, 0x122538u);
    ctx->pc = 0x10D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D380u, 0x122530u, 0x122538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122538u;
label_122538:
    // 0x122538: 0x3c040011  lui         $a0, 0x11
    ctx->pc = 0x122538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17 << 16));
label_12253c:
    // 0x12253c: 0x2484d120  addiu       $a0, $a0, -0x2EE0
    ctx->pc = 0x12253cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955296));
label_122540:
    // 0x122540: 0xafa401bc  sw          $a0, 0x1BC($sp)
    ctx->pc = 0x122540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 4));
label_122544:
    // 0x122544: 0x8fa201ec  lw          $v0, 0x1EC($sp)
    ctx->pc = 0x122544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
label_122548:
    // 0x122548: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12254c:
    // 0x12254c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12254cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122550:
    // 0x122550: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x122550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122554:
    // 0x122554: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x122554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122558:
    // 0x122558: 0x8fa201bc  lw          $v0, 0x1BC($sp)
    ctx->pc = 0x122558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_12255c:
    // 0x12255c: 0x40f809  jalr        $v0
label_122560:
    if (ctx->pc == 0x122560u) {
        ctx->pc = 0x122564u;
        goto label_122564;
    }
    ctx->pc = 0x12255Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x122564u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12255Cu, 0x122564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122564u;
label_122564:
    // 0x122564: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x122564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122568:
    // 0x122568: 0xafa501e8  sw          $a1, 0x1E8($sp)
    ctx->pc = 0x122568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 5));
label_12256c:
    // 0x12256c: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x12256cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_122570:
    // 0x122570: 0x1002002b  beq         $zero, $v0, . + 4 + (0x2B << 2)
label_122574:
    if (ctx->pc == 0x122574u) {
        ctx->pc = 0x122578u;
        goto label_122578;
    }
    ctx->pc = 0x122570u;
    {
        const bool branch_taken_0x122570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x122570) {
            ctx->pc = 0x122620u;
            goto label_122620;
        }
    }
    ctx->pc = 0x122578u;
label_122578:
    // 0x122578: 0xc090864  jal         func_242190
label_12257c:
    if (ctx->pc == 0x12257Cu) {
        ctx->pc = 0x122580u;
        goto label_122580;
    }
    ctx->pc = 0x122578u;
    SET_GPR_U32(ctx, 31, 0x122580u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x122578u, 0x122580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122580u;
label_122580:
    // 0x122580: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122584:
    // 0x122584: 0xc090598  jal         func_241660
label_122588:
    if (ctx->pc == 0x122588u) {
        ctx->pc = 0x12258Cu;
        goto label_12258c;
    }
    ctx->pc = 0x122584u;
    SET_GPR_U32(ctx, 31, 0x12258Cu);
    ctx->pc = 0x241660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241660u, 0x122584u, 0x12258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12258Cu;
label_12258c:
    // 0x12258c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12258cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122590:
    // 0x122590: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x122590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_122594:
    // 0x122594: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x122594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_122598:
    // 0x122598: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x122598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12259c:
    // 0x12259c: 0xc095a34  jal         func_2568D0
label_1225a0:
    if (ctx->pc == 0x1225A0u) {
        ctx->pc = 0x1225A4u;
        goto label_1225a4;
    }
    ctx->pc = 0x12259Cu;
    SET_GPR_U32(ctx, 31, 0x1225A4u);
    ctx->pc = 0x2568D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2568D0u, 0x12259Cu, 0x1225A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1225A4u;
label_1225a4:
    // 0x1225a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1225a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1225a8:
    // 0x1225a8: 0xafa401e4  sw          $a0, 0x1E4($sp)
    ctx->pc = 0x1225a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 4));
label_1225ac:
    // 0x1225ac: 0x8fa201e4  lw          $v0, 0x1E4($sp)
    ctx->pc = 0x1225acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
label_1225b0:
    // 0x1225b0: 0x1002001b  beq         $zero, $v0, . + 4 + (0x1B << 2)
label_1225b4:
    if (ctx->pc == 0x1225B4u) {
        ctx->pc = 0x1225B8u;
        goto label_1225b8;
    }
    ctx->pc = 0x1225B0u;
    {
        const bool branch_taken_0x1225b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x1225b0) {
            ctx->pc = 0x122620u;
            goto label_122620;
        }
    }
    ctx->pc = 0x1225B8u;
label_1225b8:
    // 0x1225b8: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1225b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_1225bc:
    // 0x1225bc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1225bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1225c0:
    // 0x1225c0: 0xc085538  jal         func_2154E0
label_1225c4:
    if (ctx->pc == 0x1225C4u) {
        ctx->pc = 0x1225C8u;
        goto label_1225c8;
    }
    ctx->pc = 0x1225C0u;
    SET_GPR_U32(ctx, 31, 0x1225C8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1225C0u, 0x1225C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1225C8u;
label_1225c8:
    // 0x1225c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1225c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1225cc:
    // 0x1225cc: 0xafa501e0  sw          $a1, 0x1E0($sp)
    ctx->pc = 0x1225ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 5));
label_1225d0:
    // 0x1225d0: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1225d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_1225d4:
    // 0x1225d4: 0x10020012  beq         $zero, $v0, . + 4 + (0x12 << 2)
label_1225d8:
    if (ctx->pc == 0x1225D8u) {
        ctx->pc = 0x1225DCu;
        goto label_1225dc;
    }
    ctx->pc = 0x1225D4u;
    {
        const bool branch_taken_0x1225d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x1225d4) {
            ctx->pc = 0x122620u;
            goto label_122620;
        }
    }
    ctx->pc = 0x1225DCu;
label_1225dc:
    // 0x1225dc: 0x8fa301e4  lw          $v1, 0x1E4($sp)
    ctx->pc = 0x1225dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
label_1225e0:
    // 0x1225e0: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1225e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_1225e4:
    // 0x1225e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1225e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1225e8:
    // 0x1225e8: 0x24650014  addiu       $a1, $v1, 0x14
    ctx->pc = 0x1225e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_1225ec:
    // 0x1225ec: 0xc090f14  jal         func_243C50
label_1225f0:
    if (ctx->pc == 0x1225F0u) {
        ctx->pc = 0x1225F4u;
        goto label_1225f4;
    }
    ctx->pc = 0x1225ECu;
    SET_GPR_U32(ctx, 31, 0x1225F4u);
    ctx->pc = 0x243C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243C50u, 0x1225ECu, 0x1225F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1225F4u;
label_1225f4:
    // 0x1225f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1225f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1225f8:
    // 0x1225f8: 0x8fa601e4  lw          $a2, 0x1E4($sp)
    ctx->pc = 0x1225f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
label_1225fc:
    // 0x1225fc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1225fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_122600:
    // 0x122600: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x122600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_122604:
    // 0x122604: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x122604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_122608:
    // 0x122608: 0xc4cc0010  lwc1        $f12, 0x10($a2)
    ctx->pc = 0x122608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12260c:
    // 0x12260c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12260cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122610:
    // 0x122610: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x122610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122614:
    // 0x122614: 0xc090fe0  jal         func_243F80
label_122618:
    if (ctx->pc == 0x122618u) {
        ctx->pc = 0x12261Cu;
        goto label_12261c;
    }
    ctx->pc = 0x122614u;
    SET_GPR_U32(ctx, 31, 0x12261Cu);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x122614u, 0x12261Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12261Cu;
label_12261c:
    // 0x12261c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12261cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122620:
    // 0x122620: 0x26c20009  addiu       $v0, $s6, 0x9
    ctx->pc = 0x122620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 9));
label_122624:
    // 0x122624: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x122624u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122628:
    // 0x122628: 0x82c40000  lb          $a0, 0x0($s6)
    ctx->pc = 0x122628u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_12262c:
    // 0x12262c: 0x1480ffb8  bnez        $a0, . + 4 + (-0x48 << 2)
label_122630:
    if (ctx->pc == 0x122630u) {
        ctx->pc = 0x122634u;
        goto label_122634;
    }
    ctx->pc = 0x12262Cu;
    {
        const bool branch_taken_0x12262c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x12262c) {
            ctx->pc = 0x122510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122510;
        }
    }
    ctx->pc = 0x122634u;
label_122634:
    // 0x122634: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x122634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122638:
    // 0x122638: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x122638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12263c:
    // 0x12263c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12263cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122640:
    // 0x122640: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x122640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122644:
    // 0x122644: 0xc08d4a4  jal         func_235290
label_122648:
    if (ctx->pc == 0x122648u) {
        ctx->pc = 0x12264Cu;
        goto label_12264c;
    }
    ctx->pc = 0x122644u;
    SET_GPR_U32(ctx, 31, 0x12264Cu);
    ctx->pc = 0x235290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235290u, 0x122644u, 0x12264Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12264Cu;
label_12264c:
    // 0x12264c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x12264cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122650:
    // 0x122650: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x122650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122654:
    // 0x122654: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x122654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122658:
    // 0x122658: 0xc08ef28  jal         func_23BCA0
label_12265c:
    if (ctx->pc == 0x12265Cu) {
        ctx->pc = 0x122660u;
        goto label_122660;
    }
    ctx->pc = 0x122658u;
    SET_GPR_U32(ctx, 31, 0x122660u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x122658u, 0x122660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122660u;
label_122660:
    // 0x122660: 0x93a40250  lbu         $a0, 0x250($sp)
    ctx->pc = 0x122660u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 592)));
label_122664:
    // 0x122664: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x122664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_122668:
    // 0x122668: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x122668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12266c:
    // 0x12266c: 0x1464007f  bne         $v1, $a0, . + 4 + (0x7F << 2)
label_122670:
    if (ctx->pc == 0x122670u) {
        ctx->pc = 0x122674u;
        goto label_122674;
    }
    ctx->pc = 0x12266Cu;
    {
        const bool branch_taken_0x12266c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x12266c) {
            ctx->pc = 0x12286Cu;
            goto label_12286c;
        }
    }
    ctx->pc = 0x122674u;
label_122674:
    // 0x122674: 0xc090864  jal         func_242190
label_122678:
    if (ctx->pc == 0x122678u) {
        ctx->pc = 0x12267Cu;
        goto label_12267c;
    }
    ctx->pc = 0x122674u;
    SET_GPR_U32(ctx, 31, 0x12267Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x122674u, 0x12267Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12267Cu;
label_12267c:
    // 0x12267c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12267cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122680:
    // 0x122680: 0xc090590  jal         func_241640
label_122684:
    if (ctx->pc == 0x122684u) {
        ctx->pc = 0x122688u;
        goto label_122688;
    }
    ctx->pc = 0x122680u;
    SET_GPR_U32(ctx, 31, 0x122688u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x122680u, 0x122688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122688u;
label_122688:
    // 0x122688: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12268c:
    // 0x12268c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12268cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_122690:
    // 0x122690: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x122690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_122694:
    // 0x122694: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x122694u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_122698:
    // 0x122698: 0xc09157c  jal         func_2455F0
label_12269c:
    if (ctx->pc == 0x12269Cu) {
        ctx->pc = 0x1226A0u;
        goto label_1226a0;
    }
    ctx->pc = 0x122698u;
    SET_GPR_U32(ctx, 31, 0x1226A0u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x122698u, 0x1226A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1226A0u;
label_1226a0:
    // 0x1226a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1226a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1226a4:
    // 0x1226a4: 0xafa401dc  sw          $a0, 0x1DC($sp)
    ctx->pc = 0x1226a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 4));
label_1226a8:
    // 0x1226a8: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x1226a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_1226ac:
    // 0x1226ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1226acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1226b0:
    // 0x1226b0: 0xc040e7c  jal         func_1039F0
label_1226b4:
    if (ctx->pc == 0x1226B4u) {
        ctx->pc = 0x1226B8u;
        goto label_1226b8;
    }
    ctx->pc = 0x1226B0u;
    SET_GPR_U32(ctx, 31, 0x1226B8u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x1226B0u, 0x1226B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1226B8u;
label_1226b8:
    // 0x1226b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1226b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1226bc:
    // 0x1226bc: 0x10000064  b           . + 4 + (0x64 << 2)
label_1226c0:
    if (ctx->pc == 0x1226C0u) {
        ctx->pc = 0x1226C4u;
        goto label_1226c4;
    }
    ctx->pc = 0x1226BCu;
    {
        const bool branch_taken_0x1226bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1226bc) {
            ctx->pc = 0x122850u;
            goto label_122850;
        }
    }
    ctx->pc = 0x1226C4u;
label_1226c4:
    // 0x1226c4: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x1226c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1226c8:
    // 0x1226c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1226c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1226cc:
    // 0x1226cc: 0x241e0014  addiu       $fp, $zero, 0x14
    ctx->pc = 0x1226ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1226d0:
    // 0x1226d0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1226d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1226d4:
    // 0x1226d4: 0xc085538  jal         func_2154E0
label_1226d8:
    if (ctx->pc == 0x1226D8u) {
        ctx->pc = 0x1226DCu;
        goto label_1226dc;
    }
    ctx->pc = 0x1226D4u;
    SET_GPR_U32(ctx, 31, 0x1226DCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1226D4u, 0x1226DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1226DCu;
label_1226dc:
    // 0x1226dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1226dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1226e0:
    // 0x1226e0: 0xafa401d8  sw          $a0, 0x1D8($sp)
    ctx->pc = 0x1226e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 4));
label_1226e4:
    // 0x1226e4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1226e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1226e8:
    // 0x1226e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1226e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1226ec:
    // 0x1226ec: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1226ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1226f0:
    // 0x1226f0: 0xc085538  jal         func_2154E0
label_1226f4:
    if (ctx->pc == 0x1226F4u) {
        ctx->pc = 0x1226F8u;
        goto label_1226f8;
    }
    ctx->pc = 0x1226F0u;
    SET_GPR_U32(ctx, 31, 0x1226F8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1226F0u, 0x1226F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1226F8u;
label_1226f8:
    // 0x1226f8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1226f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1226fc:
    // 0x1226fc: 0x8fa401d8  lw          $a0, 0x1D8($sp)
    ctx->pc = 0x1226fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_122700:
    // 0x122700: 0x10800051  beqz        $a0, . + 4 + (0x51 << 2)
label_122704:
    if (ctx->pc == 0x122704u) {
        ctx->pc = 0x122708u;
        goto label_122708;
    }
    ctx->pc = 0x122700u;
    {
        const bool branch_taken_0x122700 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x122700) {
            ctx->pc = 0x122848u;
            goto label_122848;
        }
    }
    ctx->pc = 0x122708u;
label_122708:
    // 0x122708: 0x12a0004f  beqz        $s5, . + 4 + (0x4F << 2)
label_12270c:
    if (ctx->pc == 0x12270Cu) {
        ctx->pc = 0x122710u;
        goto label_122710;
    }
    ctx->pc = 0x122708u;
    {
        const bool branch_taken_0x122708 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x122708) {
            ctx->pc = 0x122848u;
            goto label_122848;
        }
    }
    ctx->pc = 0x122710u;
label_122710:
    // 0x122710: 0xaea00034  sw          $zero, 0x34($s5)
    ctx->pc = 0x122710u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 0));
label_122714:
    // 0x122714: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x122714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_122718:
    // 0x122718: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x122718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12271c:
    // 0x12271c: 0xc0480a4  jal         func_120290
label_122720:
    if (ctx->pc == 0x122720u) {
        ctx->pc = 0x122724u;
        goto label_122724;
    }
    ctx->pc = 0x12271Cu;
    SET_GPR_U32(ctx, 31, 0x122724u);
    ctx->pc = 0x120290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120290u, 0x12271Cu, 0x122724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122724u;
label_122724:
    // 0x122724: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x122724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122728:
    // 0x122728: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x122728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_12272c:
    // 0x12272c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12272cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122730:
    // 0x122730: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x122730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_122734:
    // 0x122734: 0xc09adac  jal         func_26B6B0
label_122738:
    if (ctx->pc == 0x122738u) {
        ctx->pc = 0x12273Cu;
        goto label_12273c;
    }
    ctx->pc = 0x122734u;
    SET_GPR_U32(ctx, 31, 0x12273Cu);
    ctx->pc = 0x26B6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B6B0u, 0x122734u, 0x12273Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12273Cu;
label_12273c:
    // 0x12273c: 0x27b00170  addiu       $s0, $sp, 0x170
    ctx->pc = 0x12273cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_122740:
    // 0x122740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x122740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_122744:
    // 0x122744: 0xc048b20  jal         func_122C80
label_122748:
    if (ctx->pc == 0x122748u) {
        ctx->pc = 0x12274Cu;
        goto label_12274c;
    }
    ctx->pc = 0x122744u;
    SET_GPR_U32(ctx, 31, 0x12274Cu);
    ctx->pc = 0x122C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C80u, 0x122744u, 0x12274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12274Cu;
label_12274c:
    // 0x12274c: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
label_122750:
    if (ctx->pc == 0x122750u) {
        ctx->pc = 0x122754u;
        goto label_122754;
    }
    ctx->pc = 0x12274Cu;
    {
        const bool branch_taken_0x12274c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12274c) {
            ctx->pc = 0x12282Cu;
            goto label_12282c;
        }
    }
    ctx->pc = 0x122754u;
label_122754:
    // 0x122754: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x122754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_122758:
    // 0x122758: 0xc04809c  jal         func_120270
label_12275c:
    if (ctx->pc == 0x12275Cu) {
        ctx->pc = 0x122760u;
        goto label_122760;
    }
    ctx->pc = 0x122758u;
    SET_GPR_U32(ctx, 31, 0x122760u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x122758u, 0x122760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122760u;
label_122760:
    // 0x122760: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x122760u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122764:
    // 0x122764: 0x1000002b  b           . + 4 + (0x2B << 2)
label_122768:
    if (ctx->pc == 0x122768u) {
        ctx->pc = 0x12276Cu;
        goto label_12276c;
    }
    ctx->pc = 0x122764u;
    {
        const bool branch_taken_0x122764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122764) {
            ctx->pc = 0x122814u;
            goto label_122814;
        }
    }
    ctx->pc = 0x12276Cu;
label_12276c:
    // 0x12276c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x12276cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_122770:
    // 0x122770: 0xafa201d4  sw          $v0, 0x1D4($sp)
    ctx->pc = 0x122770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
label_122774:
    // 0x122774: 0x8fa401d4  lw          $a0, 0x1D4($sp)
    ctx->pc = 0x122774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_122778:
    // 0x122778: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x122778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_12277c:
    // 0x12277c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x12277cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122780:
    // 0x122780: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x122780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122784:
    // 0x122784: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x122784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122788:
    // 0x122788: 0xc09a060  jal         func_268180
label_12278c:
    if (ctx->pc == 0x12278Cu) {
        ctx->pc = 0x122790u;
        goto label_122790;
    }
    ctx->pc = 0x122788u;
    SET_GPR_U32(ctx, 31, 0x122790u);
    ctx->pc = 0x268180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268180u, 0x122788u, 0x122790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122790u;
label_122790:
    // 0x122790: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x122790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122794:
    // 0x122794: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
label_122798:
    if (ctx->pc == 0x122798u) {
        ctx->pc = 0x12279Cu;
        goto label_12279c;
    }
    ctx->pc = 0x122794u;
    {
        const bool branch_taken_0x122794 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x122794) {
            ctx->pc = 0x12280Cu;
            goto label_12280c;
        }
    }
    ctx->pc = 0x12279Cu;
label_12279c:
    // 0x12279c: 0x8fa401d4  lw          $a0, 0x1D4($sp)
    ctx->pc = 0x12279cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_1227a0:
    // 0x1227a0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1227a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1227a4:
    // 0x1227a4: 0xc09a0b8  jal         func_2682E0
label_1227a8:
    if (ctx->pc == 0x1227A8u) {
        ctx->pc = 0x1227ACu;
        goto label_1227ac;
    }
    ctx->pc = 0x1227A4u;
    SET_GPR_U32(ctx, 31, 0x1227ACu);
    ctx->pc = 0x2682E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2682E0u, 0x1227A4u, 0x1227ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1227ACu;
label_1227ac:
    // 0x1227ac: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x1227acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_1227b0:
    // 0x1227b0: 0x8fb001d0  lw          $s0, 0x1D0($sp)
    ctx->pc = 0x1227b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_1227b4:
    // 0x1227b4: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1227b8:
    if (ctx->pc == 0x1227B8u) {
        ctx->pc = 0x1227BCu;
        goto label_1227bc;
    }
    ctx->pc = 0x1227B4u;
    {
        const bool branch_taken_0x1227b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1227b4) {
            ctx->pc = 0x1227E4u;
            goto label_1227e4;
        }
    }
    ctx->pc = 0x1227BCu;
label_1227bc:
    // 0x1227bc: 0x8fa401d0  lw          $a0, 0x1D0($sp)
    ctx->pc = 0x1227bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_1227c0:
    // 0x1227c0: 0x240504e9  addiu       $a1, $zero, 0x4E9
    ctx->pc = 0x1227c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1257));
label_1227c4:
    // 0x1227c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1227c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1227c8:
    // 0x1227c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1227c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1227cc:
    // 0x1227cc: 0xc04146c  jal         func_1051B0
label_1227d0:
    if (ctx->pc == 0x1227D0u) {
        ctx->pc = 0x1227D4u;
        goto label_1227d4;
    }
    ctx->pc = 0x1227CCu;
    SET_GPR_U32(ctx, 31, 0x1227D4u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x1227CCu, 0x1227D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1227D4u;
label_1227d4:
    // 0x1227d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1227d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1227d8:
    // 0x1227d8: 0xa3b0023d  sb          $s0, 0x23D($sp)
    ctx->pc = 0x1227d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 573), (uint8_t)GPR_U32(ctx, 16));
label_1227dc:
    // 0x1227dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1227e0:
    if (ctx->pc == 0x1227E0u) {
        ctx->pc = 0x1227E4u;
        goto label_1227e4;
    }
    ctx->pc = 0x1227DCu;
    {
        const bool branch_taken_0x1227dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1227dc) {
            ctx->pc = 0x1227E8u;
            goto label_1227e8;
        }
    }
    ctx->pc = 0x1227E4u;
label_1227e4:
    // 0x1227e4: 0xa3a0023d  sb          $zero, 0x23D($sp)
    ctx->pc = 0x1227e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 573), (uint8_t)GPR_U32(ctx, 0));
label_1227e8:
    // 0x1227e8: 0x93a4023d  lbu         $a0, 0x23D($sp)
    ctx->pc = 0x1227e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 573)));
label_1227ec:
    // 0x1227ec: 0xa3a4023e  sb          $a0, 0x23E($sp)
    ctx->pc = 0x1227ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 574), (uint8_t)GPR_U32(ctx, 4));
label_1227f0:
    // 0x1227f0: 0x93a5023e  lbu         $a1, 0x23E($sp)
    ctx->pc = 0x1227f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 574)));
label_1227f4:
    // 0x1227f4: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_1227f8:
    if (ctx->pc == 0x1227F8u) {
        ctx->pc = 0x1227FCu;
        goto label_1227fc;
    }
    ctx->pc = 0x1227F4u;
    {
        const bool branch_taken_0x1227f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1227f4) {
            ctx->pc = 0x12280Cu;
            goto label_12280c;
        }
    }
    ctx->pc = 0x1227FCu;
label_1227fc:
    // 0x1227fc: 0x8fa201d4  lw          $v0, 0x1D4($sp)
    ctx->pc = 0x1227fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_122800:
    // 0x122800: 0xaea20034  sw          $v0, 0x34($s5)
    ctx->pc = 0x122800u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 2));
label_122804:
    // 0x122804: 0x10000009  b           . + 4 + (0x9 << 2)
label_122808:
    if (ctx->pc == 0x122808u) {
        ctx->pc = 0x12280Cu;
        goto label_12280c;
    }
    ctx->pc = 0x122804u;
    {
        const bool branch_taken_0x122804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122804) {
            ctx->pc = 0x12282Cu;
            goto label_12282c;
        }
    }
    ctx->pc = 0x12280Cu;
label_12280c:
    // 0x12280c: 0x26900004  addiu       $s0, $s4, 0x4
    ctx->pc = 0x12280cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_122810:
    // 0x122810: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x122810u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_122814:
    // 0x122814: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x122814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_122818:
    // 0x122818: 0xc04808c  jal         func_120230
label_12281c:
    if (ctx->pc == 0x12281Cu) {
        ctx->pc = 0x122820u;
        goto label_122820;
    }
    ctx->pc = 0x122818u;
    SET_GPR_U32(ctx, 31, 0x122820u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x122818u, 0x122820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122820u;
label_122820:
    // 0x122820: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x122820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122824:
    // 0x122824: 0x1685ffd1  bne         $s4, $a1, . + 4 + (-0x2F << 2)
label_122828:
    if (ctx->pc == 0x122828u) {
        ctx->pc = 0x12282Cu;
        goto label_12282c;
    }
    ctx->pc = 0x122824u;
    {
        const bool branch_taken_0x122824 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 5));
        if (branch_taken_0x122824) {
            ctx->pc = 0x12276Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12276c;
        }
    }
    ctx->pc = 0x12282Cu;
label_12282c:
    // 0x12282c: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x12282cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_122830:
    // 0x122830: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122834:
    // 0x122834: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x122834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_122838:
    // 0x122838: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x122838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12283c:
    // 0x12283c: 0xc048004  jal         func_120010
label_122840:
    if (ctx->pc == 0x122840u) {
        ctx->pc = 0x122844u;
        goto label_122844;
    }
    ctx->pc = 0x12283Cu;
    SET_GPR_U32(ctx, 31, 0x122844u);
    ctx->pc = 0x120010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120010u, 0x12283Cu, 0x122844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122844u;
label_122844:
    // 0x122844: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122848:
    // 0x122848: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x122848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_12284c:
    // 0x12284c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12284cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_122850:
    // 0x122850: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x122850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
label_122854:
    // 0x122854: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122858:
    // 0x122858: 0xc04147c  jal         func_1051F0
label_12285c:
    if (ctx->pc == 0x12285Cu) {
        ctx->pc = 0x122860u;
        goto label_122860;
    }
    ctx->pc = 0x122858u;
    SET_GPR_U32(ctx, 31, 0x122860u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x122858u, 0x122860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122860u;
label_122860:
    // 0x122860: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x122860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122864:
    // 0x122864: 0x1670ff97  bne         $s3, $s0, . + 4 + (-0x69 << 2)
label_122868:
    if (ctx->pc == 0x122868u) {
        ctx->pc = 0x12286Cu;
        goto label_12286c;
    }
    ctx->pc = 0x122864u;
    {
        const bool branch_taken_0x122864 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        if (branch_taken_0x122864) {
            ctx->pc = 0x1226C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1226c4;
        }
    }
    ctx->pc = 0x12286Cu;
label_12286c:
    // 0x12286c: 0x93a40250  lbu         $a0, 0x250($sp)
    ctx->pc = 0x12286cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 592)));
label_122870:
    // 0x122870: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x122870u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_122874:
    // 0x122874: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x122874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122878:
    // 0x122878: 0x14a300de  bne         $a1, $v1, . + 4 + (0xDE << 2)
label_12287c:
    if (ctx->pc == 0x12287Cu) {
        ctx->pc = 0x122880u;
        goto label_122880;
    }
    ctx->pc = 0x122878u;
    {
        const bool branch_taken_0x122878 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x122878) {
            ctx->pc = 0x122BF4u;
            goto label_122bf4;
        }
    }
    ctx->pc = 0x122880u;
label_122880:
    // 0x122880: 0xc090864  jal         func_242190
label_122884:
    if (ctx->pc == 0x122884u) {
        ctx->pc = 0x122888u;
        goto label_122888;
    }
    ctx->pc = 0x122880u;
    SET_GPR_U32(ctx, 31, 0x122888u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x122880u, 0x122888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122888u;
label_122888:
    // 0x122888: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x122888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12288c:
    // 0x12288c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12288cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_122890:
    // 0x122890: 0xc090590  jal         func_241640
label_122894:
    if (ctx->pc == 0x122894u) {
        ctx->pc = 0x122898u;
        goto label_122898;
    }
    ctx->pc = 0x122890u;
    SET_GPR_U32(ctx, 31, 0x122898u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x122890u, 0x122898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122898u;
label_122898:
    // 0x122898: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12289c:
    // 0x12289c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x12289cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1228a0:
    // 0x1228a0: 0xc09157c  jal         func_2455F0
label_1228a4:
    if (ctx->pc == 0x1228A4u) {
        ctx->pc = 0x1228A8u;
        goto label_1228a8;
    }
    ctx->pc = 0x1228A0u;
    SET_GPR_U32(ctx, 31, 0x1228A8u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x1228A0u, 0x1228A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1228A8u;
label_1228a8:
    // 0x1228a8: 0xafa201cc  sw          $v0, 0x1CC($sp)
    ctx->pc = 0x1228a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 2));
label_1228ac:
    // 0x1228ac: 0x8fb001cc  lw          $s0, 0x1CC($sp)
    ctx->pc = 0x1228acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
label_1228b0:
    // 0x1228b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1228b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1228b4:
    // 0x1228b4: 0xc040e7c  jal         func_1039F0
label_1228b8:
    if (ctx->pc == 0x1228B8u) {
        ctx->pc = 0x1228BCu;
        goto label_1228bc;
    }
    ctx->pc = 0x1228B4u;
    SET_GPR_U32(ctx, 31, 0x1228BCu);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x1228B4u, 0x1228BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1228BCu;
label_1228bc:
    // 0x1228bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1228bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1228c0:
    // 0x1228c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1228c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1228c4:
    // 0x1228c4: 0x10000052  b           . + 4 + (0x52 << 2)
label_1228c8:
    if (ctx->pc == 0x1228C8u) {
        ctx->pc = 0x1228CCu;
        goto label_1228cc;
    }
    ctx->pc = 0x1228C4u;
    {
        const bool branch_taken_0x1228c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1228c4) {
            ctx->pc = 0x122A10u;
            goto label_122a10;
        }
    }
    ctx->pc = 0x1228CCu;
label_1228cc:
    // 0x1228cc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1228ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1228d0:
    // 0x1228d0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1228d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1228d4:
    // 0x1228d4: 0xc048b18  jal         func_122C60
label_1228d8:
    if (ctx->pc == 0x1228D8u) {
        ctx->pc = 0x1228DCu;
        goto label_1228dc;
    }
    ctx->pc = 0x1228D4u;
    SET_GPR_U32(ctx, 31, 0x1228DCu);
    ctx->pc = 0x122C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C60u, 0x1228D4u, 0x1228DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1228DCu;
label_1228dc:
    // 0x1228dc: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x1228dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1228e0:
    // 0x1228e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1228e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1228e4:
    // 0x1228e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1228e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1228e8:
    // 0x1228e8: 0x2417001f  addiu       $s7, $zero, 0x1F
    ctx->pc = 0x1228e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1228ec:
    // 0x1228ec: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1228ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1228f0:
    // 0x1228f0: 0xc0bc77e  jal         func_2F1DF8
label_1228f4:
    if (ctx->pc == 0x1228F4u) {
        ctx->pc = 0x1228F8u;
        goto label_1228f8;
    }
    ctx->pc = 0x1228F0u;
    SET_GPR_U32(ctx, 31, 0x1228F8u);
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x1228F0u, 0x1228F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1228F8u;
label_1228f8:
    // 0x1228f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1228f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1228fc:
    // 0x1228fc: 0xa3a0010f  sb          $zero, 0x10F($sp)
    ctx->pc = 0x1228fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 271), (uint8_t)GPR_U32(ctx, 0));
label_122900:
    // 0x122900: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x122900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_122904:
    // 0x122904: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122908:
    // 0x122908: 0xc0bc65a  jal         func_2F1968
label_12290c:
    if (ctx->pc == 0x12290Cu) {
        ctx->pc = 0x122910u;
        goto label_122910;
    }
    ctx->pc = 0x122908u;
    SET_GPR_U32(ctx, 31, 0x122910u);
    ctx->pc = 0x2F1968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1968u, 0x122908u, 0x122910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122910u;
label_122910:
    // 0x122910: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122914:
    // 0x122914: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x122914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_122918:
    // 0x122918: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12291c:
    // 0x12291c: 0x27858b08  addiu       $a1, $gp, -0x74F8
    ctx->pc = 0x12291cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937352));
label_122920:
    // 0x122920: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x122920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_122924:
    // 0x122924: 0xc0bc710  jal         func_2F1C40
label_122928:
    if (ctx->pc == 0x122928u) {
        ctx->pc = 0x12292Cu;
        goto label_12292c;
    }
    ctx->pc = 0x122924u;
    SET_GPR_U32(ctx, 31, 0x12292Cu);
    ctx->pc = 0x2F1C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C40u, 0x122924u, 0x12292Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12292Cu;
label_12292c:
    // 0x12292c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12292cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122930:
    // 0x122930: 0x14a00035  bnez        $a1, . + 4 + (0x35 << 2)
label_122934:
    if (ctx->pc == 0x122934u) {
        ctx->pc = 0x122938u;
        goto label_122938;
    }
    ctx->pc = 0x122930u;
    {
        const bool branch_taken_0x122930 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x122930) {
            ctx->pc = 0x122A08u;
            goto label_122a08;
        }
    }
    ctx->pc = 0x122938u;
label_122938:
    // 0x122938: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x122938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_12293c:
    // 0x12293c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12293cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122940:
    // 0x122940: 0x27828b10  addiu       $v0, $gp, -0x74F0
    ctx->pc = 0x122940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937360));
label_122944:
    // 0x122944: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x122944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122948:
    // 0x122948: 0xc040304  jal         func_100C10
label_12294c:
    if (ctx->pc == 0x12294Cu) {
        ctx->pc = 0x122950u;
        goto label_122950;
    }
    ctx->pc = 0x122948u;
    SET_GPR_U32(ctx, 31, 0x122950u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x122948u, 0x122950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122950u;
label_122950:
    // 0x122950: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122954:
    // 0x122954: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x122954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_122958:
    // 0x122958: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x122958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12295c:
    // 0x12295c: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x12295cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_122960:
    // 0x122960: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x122960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122964:
    // 0x122964: 0xc0424e8  jal         func_1093A0
label_122968:
    if (ctx->pc == 0x122968u) {
        ctx->pc = 0x12296Cu;
        goto label_12296c;
    }
    ctx->pc = 0x122964u;
    SET_GPR_U32(ctx, 31, 0x12296Cu);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x122964u, 0x12296Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12296Cu;
label_12296c:
    // 0x12296c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12296cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122970:
    // 0x122970: 0xc09a360  jal         func_268D80
label_122974:
    if (ctx->pc == 0x122974u) {
        ctx->pc = 0x122978u;
        goto label_122978;
    }
    ctx->pc = 0x122970u;
    SET_GPR_U32(ctx, 31, 0x122978u);
    ctx->pc = 0x268D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D80u, 0x122970u, 0x122978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122978u;
label_122978:
    // 0x122978: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x122978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_12297c:
    // 0x12297c: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x12297cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_122980:
    // 0x122980: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122984:
    // 0x122984: 0xc041b38  jal         func_106CE0
label_122988:
    if (ctx->pc == 0x122988u) {
        ctx->pc = 0x12298Cu;
        goto label_12298c;
    }
    ctx->pc = 0x122984u;
    SET_GPR_U32(ctx, 31, 0x12298Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x122984u, 0x12298Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12298Cu;
label_12298c:
    // 0x12298c: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x12298cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_122990:
    // 0x122990: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x122990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122994:
    // 0x122994: 0xc09a364  jal         func_268D90
label_122998:
    if (ctx->pc == 0x122998u) {
        ctx->pc = 0x12299Cu;
        goto label_12299c;
    }
    ctx->pc = 0x122994u;
    SET_GPR_U32(ctx, 31, 0x12299Cu);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x122994u, 0x12299Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12299Cu;
label_12299c:
    // 0x12299c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12299cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1229a0:
    // 0x1229a0: 0xafa501c8  sw          $a1, 0x1C8($sp)
    ctx->pc = 0x1229a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 5));
label_1229a4:
    // 0x1229a4: 0x8fa201c8  lw          $v0, 0x1C8($sp)
    ctx->pc = 0x1229a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_1229a8:
    // 0x1229a8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1229ac:
    if (ctx->pc == 0x1229ACu) {
        ctx->pc = 0x1229B0u;
        goto label_1229b0;
    }
    ctx->pc = 0x1229A8u;
    {
        const bool branch_taken_0x1229a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1229a8) {
            ctx->pc = 0x1229ECu;
            goto label_1229ec;
        }
    }
    ctx->pc = 0x1229B0u;
label_1229b0:
    // 0x1229b0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1229b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1229b4:
    // 0x1229b4: 0xc09ac08  jal         func_26B020
label_1229b8:
    if (ctx->pc == 0x1229B8u) {
        ctx->pc = 0x1229BCu;
        goto label_1229bc;
    }
    ctx->pc = 0x1229B4u;
    SET_GPR_U32(ctx, 31, 0x1229BCu);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x1229B4u, 0x1229BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1229BCu;
label_1229bc:
    // 0x1229bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1229bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1229c0:
    // 0x1229c0: 0x8fa201c8  lw          $v0, 0x1C8($sp)
    ctx->pc = 0x1229c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_1229c4:
    // 0x1229c4: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x1229c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
label_1229c8:
    // 0x1229c8: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x1229c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
label_1229cc:
    // 0x1229cc: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x1229ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
label_1229d0:
    // 0x1229d0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1229d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1229d4:
    // 0x1229d4: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1229d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1229d8:
    // 0x1229d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1229d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1229dc:
    // 0x1229dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1229dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1229e0:
    // 0x1229e0: 0xc0af050  jal         func_2BC140
label_1229e4:
    if (ctx->pc == 0x1229E4u) {
        ctx->pc = 0x1229E8u;
        goto label_1229e8;
    }
    ctx->pc = 0x1229E0u;
    SET_GPR_U32(ctx, 31, 0x1229E8u);
    ctx->pc = 0x2BC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC140u, 0x1229E0u, 0x1229E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1229E8u;
label_1229e8:
    // 0x1229e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1229e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1229ec:
    // 0x1229ec: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1229ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_1229f0:
    // 0x1229f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1229f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1229f4:
    // 0x1229f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1229f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1229f8:
    // 0x1229f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1229f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1229fc:
    // 0x1229fc: 0xc0402d4  jal         func_100B50
label_122a00:
    if (ctx->pc == 0x122A00u) {
        ctx->pc = 0x122A04u;
        goto label_122a04;
    }
    ctx->pc = 0x1229FCu;
    SET_GPR_U32(ctx, 31, 0x122A04u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1229FCu, 0x122A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A04u;
label_122a04:
    // 0x122a04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122a08:
    // 0x122a08: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x122a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_122a0c:
    // 0x122a0c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x122a0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_122a10:
    // 0x122a10: 0x8fa201cc  lw          $v0, 0x1CC($sp)
    ctx->pc = 0x122a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
label_122a14:
    // 0x122a14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122a18:
    // 0x122a18: 0xc04147c  jal         func_1051F0
label_122a1c:
    if (ctx->pc == 0x122A1Cu) {
        ctx->pc = 0x122A20u;
        goto label_122a20;
    }
    ctx->pc = 0x122A18u;
    SET_GPR_U32(ctx, 31, 0x122A20u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x122A18u, 0x122A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A20u;
label_122a20:
    // 0x122a20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122a24:
    // 0x122a24: 0x1644ffa9  bne         $s2, $a0, . + 4 + (-0x57 << 2)
label_122a28:
    if (ctx->pc == 0x122A28u) {
        ctx->pc = 0x122A2Cu;
        goto label_122a2c;
    }
    ctx->pc = 0x122A24u;
    {
        const bool branch_taken_0x122a24 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        if (branch_taken_0x122a24) {
            ctx->pc = 0x1228CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1228cc;
        }
    }
    ctx->pc = 0x122A2Cu;
label_122a2c:
    // 0x122a2c: 0x8f85bcc4  lw          $a1, -0x433C($gp)
    ctx->pc = 0x122a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_122a30:
    // 0x122a30: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x122a30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_122a34:
    // 0x122a34: 0x10c0006f  beqz        $a2, . + 4 + (0x6F << 2)
label_122a38:
    if (ctx->pc == 0x122A38u) {
        ctx->pc = 0x122A3Cu;
        goto label_122a3c;
    }
    ctx->pc = 0x122A34u;
    {
        const bool branch_taken_0x122a34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x122a34) {
            ctx->pc = 0x122BF4u;
            goto label_122bf4;
        }
    }
    ctx->pc = 0x122A3Cu;
label_122a3c:
    // 0x122a3c: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x122a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_122a40:
    // 0x122a40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122a44:
    // 0x122a44: 0xc041b48  jal         func_106D20
label_122a48:
    if (ctx->pc == 0x122A48u) {
        ctx->pc = 0x122A4Cu;
        goto label_122a4c;
    }
    ctx->pc = 0x122A44u;
    SET_GPR_U32(ctx, 31, 0x122A4Cu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x122A44u, 0x122A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A4Cu;
label_122a4c:
    // 0x122a4c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x122a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_122a50:
    // 0x122a50: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x122a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_122a54:
    // 0x122a54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122a58:
    // 0x122a58: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x122a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_122a5c:
    // 0x122a5c: 0x24a521d0  addiu       $a1, $a1, 0x21D0
    ctx->pc = 0x122a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8656));
label_122a60:
    // 0x122a60: 0x27868af8  addiu       $a2, $gp, -0x7508
    ctx->pc = 0x122a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937336));
label_122a64:
    // 0x122a64: 0xc04206c  jal         func_1081B0
label_122a68:
    if (ctx->pc == 0x122A68u) {
        ctx->pc = 0x122A6Cu;
        goto label_122a6c;
    }
    ctx->pc = 0x122A64u;
    SET_GPR_U32(ctx, 31, 0x122A6Cu);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x122A64u, 0x122A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A6Cu;
label_122a6c:
    // 0x122a6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x122a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122a70:
    // 0x122a70: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x122a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_122a74:
    // 0x122a74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122a78:
    // 0x122a78: 0xc040304  jal         func_100C10
label_122a7c:
    if (ctx->pc == 0x122A7Cu) {
        ctx->pc = 0x122A80u;
        goto label_122a80;
    }
    ctx->pc = 0x122A78u;
    SET_GPR_U32(ctx, 31, 0x122A80u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x122A78u, 0x122A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A80u;
label_122a80:
    // 0x122a80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122a84:
    // 0x122a84: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x122a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_122a88:
    // 0x122a88: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x122a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_122a8c:
    // 0x122a8c: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x122a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_122a90:
    // 0x122a90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x122a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122a94:
    // 0x122a94: 0xc1190f4  jal         func_4643D0
label_122a98:
    if (ctx->pc == 0x122A98u) {
        ctx->pc = 0x122A9Cu;
        goto label_122a9c;
    }
    ctx->pc = 0x122A94u;
    SET_GPR_U32(ctx, 31, 0x122A9Cu);
    ctx->pc = 0x4643D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4643D0u, 0x122A94u, 0x122A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A9Cu;
label_122a9c:
    // 0x122a9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122aa0:
    // 0x122aa0: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x122aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_122aa4:
    // 0x122aa4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x122aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_122aa8:
    // 0x122aa8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x122aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_122aac:
    // 0x122aac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x122aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122ab0:
    // 0x122ab0: 0xc0402d4  jal         func_100B50
label_122ab4:
    if (ctx->pc == 0x122AB4u) {
        ctx->pc = 0x122AB8u;
        goto label_122ab8;
    }
    ctx->pc = 0x122AB0u;
    SET_GPR_U32(ctx, 31, 0x122AB8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x122AB0u, 0x122AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122AB8u;
label_122ab8:
    // 0x122ab8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122abc:
    // 0x122abc: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x122abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_122ac0:
    // 0x122ac0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x122ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_122ac4:
    // 0x122ac4: 0x27828b10  addiu       $v0, $gp, -0x74F0
    ctx->pc = 0x122ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937360));
label_122ac8:
    // 0x122ac8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x122ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122acc:
    // 0x122acc: 0xc040304  jal         func_100C10
label_122ad0:
    if (ctx->pc == 0x122AD0u) {
        ctx->pc = 0x122AD4u;
        goto label_122ad4;
    }
    ctx->pc = 0x122ACCu;
    SET_GPR_U32(ctx, 31, 0x122AD4u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x122ACCu, 0x122AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122AD4u;
label_122ad4:
    // 0x122ad4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122ad8:
    // 0x122ad8: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x122ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_122adc:
    // 0x122adc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x122adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_122ae0:
    // 0x122ae0: 0xc041b38  jal         func_106CE0
label_122ae4:
    if (ctx->pc == 0x122AE4u) {
        ctx->pc = 0x122AE8u;
        goto label_122ae8;
    }
    ctx->pc = 0x122AE0u;
    SET_GPR_U32(ctx, 31, 0x122AE8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x122AE0u, 0x122AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122AE8u;
label_122ae8:
    // 0x122ae8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122aec:
    // 0x122aec: 0x27918b18  addiu       $s1, $gp, -0x74E8
    ctx->pc = 0x122aecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937368));
label_122af0:
    // 0x122af0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x122af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_122af4:
    // 0x122af4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x122af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_122af8:
    // 0x122af8: 0xc0bc66e  jal         func_2F19B8
label_122afc:
    if (ctx->pc == 0x122AFCu) {
        ctx->pc = 0x122B00u;
        goto label_122b00;
    }
    ctx->pc = 0x122AF8u;
    SET_GPR_U32(ctx, 31, 0x122B00u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x122AF8u, 0x122B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B00u;
label_122b00:
    // 0x122b00: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_122b04:
    if (ctx->pc == 0x122B04u) {
        ctx->pc = 0x122B08u;
        goto label_122b08;
    }
    ctx->pc = 0x122B00u;
    {
        const bool branch_taken_0x122b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x122b00) {
            ctx->pc = 0x122B34u;
            goto label_122b34;
        }
    }
    ctx->pc = 0x122B08u;
label_122b08:
    // 0x122b08: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x122b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_122b0c:
    // 0x122b0c: 0xc041b38  jal         func_106CE0
label_122b10:
    if (ctx->pc == 0x122B10u) {
        ctx->pc = 0x122B14u;
        goto label_122b14;
    }
    ctx->pc = 0x122B0Cu;
    SET_GPR_U32(ctx, 31, 0x122B14u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x122B0Cu, 0x122B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B14u;
label_122b14:
    // 0x122b14: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x122b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_122b18:
    // 0x122b18: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x122b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_122b1c:
    // 0x122b1c: 0x24460005  addiu       $a2, $v0, 0x5
    ctx->pc = 0x122b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_122b20:
    // 0x122b20: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x122b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_122b24:
    // 0x122b24: 0xc0424e8  jal         func_1093A0
label_122b28:
    if (ctx->pc == 0x122B28u) {
        ctx->pc = 0x122B2Cu;
        goto label_122b2c;
    }
    ctx->pc = 0x122B24u;
    SET_GPR_U32(ctx, 31, 0x122B2Cu);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x122B24u, 0x122B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B2Cu;
label_122b2c:
    // 0x122b2c: 0x10000005  b           . + 4 + (0x5 << 2)
label_122b30:
    if (ctx->pc == 0x122B30u) {
        ctx->pc = 0x122B34u;
        goto label_122b34;
    }
    ctx->pc = 0x122B2Cu;
    {
        const bool branch_taken_0x122b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122b2c) {
            ctx->pc = 0x122B44u;
            goto label_122b44;
        }
    }
    ctx->pc = 0x122B34u;
label_122b34:
    // 0x122b34: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x122b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_122b38:
    // 0x122b38: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x122b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_122b3c:
    // 0x122b3c: 0xc048c50  jal         func_123140
label_122b40:
    if (ctx->pc == 0x122B40u) {
        ctx->pc = 0x122B44u;
        goto label_122b44;
    }
    ctx->pc = 0x122B3Cu;
    SET_GPR_U32(ctx, 31, 0x122B44u);
    ctx->pc = 0x123140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123140u, 0x122B3Cu, 0x122B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B44u;
label_122b44:
    // 0x122b44: 0xc09a360  jal         func_268D80
label_122b48:
    if (ctx->pc == 0x122B48u) {
        ctx->pc = 0x122B4Cu;
        goto label_122b4c;
    }
    ctx->pc = 0x122B44u;
    SET_GPR_U32(ctx, 31, 0x122B4Cu);
    ctx->pc = 0x268D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D80u, 0x122B44u, 0x122B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B4Cu;
label_122b4c:
    // 0x122b4c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x122b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_122b50:
    // 0x122b50: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x122b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_122b54:
    // 0x122b54: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x122b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_122b58:
    // 0x122b58: 0xc041b38  jal         func_106CE0
label_122b5c:
    if (ctx->pc == 0x122B5Cu) {
        ctx->pc = 0x122B60u;
        goto label_122b60;
    }
    ctx->pc = 0x122B58u;
    SET_GPR_U32(ctx, 31, 0x122B60u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x122B58u, 0x122B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B60u;
label_122b60:
    // 0x122b60: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x122b60u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_122b64:
    // 0x122b64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x122b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122b68:
    // 0x122b68: 0xc09a364  jal         func_268D90
label_122b6c:
    if (ctx->pc == 0x122B6Cu) {
        ctx->pc = 0x122B70u;
        goto label_122b70;
    }
    ctx->pc = 0x122B68u;
    SET_GPR_U32(ctx, 31, 0x122B70u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x122B68u, 0x122B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B70u;
label_122b70:
    // 0x122b70: 0xafa201c4  sw          $v0, 0x1C4($sp)
    ctx->pc = 0x122b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 2));
label_122b74:
    // 0x122b74: 0x8fa301c4  lw          $v1, 0x1C4($sp)
    ctx->pc = 0x122b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_122b78:
    // 0x122b78: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_122b7c:
    if (ctx->pc == 0x122B7Cu) {
        ctx->pc = 0x122B80u;
        goto label_122b80;
    }
    ctx->pc = 0x122B78u;
    {
        const bool branch_taken_0x122b78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x122b78) {
            ctx->pc = 0x122BC4u;
            goto label_122bc4;
        }
    }
    ctx->pc = 0x122B80u;
label_122b80:
    // 0x122b80: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x122b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_122b84:
    // 0x122b84: 0xc09ac08  jal         func_26B020
label_122b88:
    if (ctx->pc == 0x122B88u) {
        ctx->pc = 0x122B8Cu;
        goto label_122b8c;
    }
    ctx->pc = 0x122B84u;
    SET_GPR_U32(ctx, 31, 0x122B8Cu);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x122B84u, 0x122B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122B8Cu;
label_122b8c:
    // 0x122b8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x122b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122b90:
    // 0x122b90: 0x8fa201c4  lw          $v0, 0x1C4($sp)
    ctx->pc = 0x122b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_122b94:
    // 0x122b94: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x122b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
label_122b98:
    // 0x122b98: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x122b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
label_122b9c:
    // 0x122b9c: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x122b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_122ba0:
    // 0x122ba0: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x122ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_122ba4:
    // 0x122ba4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x122ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_122ba8:
    // 0x122ba8: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x122ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_122bac:
    // 0x122bac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x122bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122bb0:
    // 0x122bb0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x122bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122bb4:
    // 0x122bb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x122bb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122bb8:
    // 0x122bb8: 0xc0af050  jal         func_2BC140
label_122bbc:
    if (ctx->pc == 0x122BBCu) {
        ctx->pc = 0x122BC0u;
        goto label_122bc0;
    }
    ctx->pc = 0x122BB8u;
    SET_GPR_U32(ctx, 31, 0x122BC0u);
    ctx->pc = 0x2BC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC140u, 0x122BB8u, 0x122BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122BC0u;
label_122bc0:
    // 0x122bc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x122bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122bc4:
    // 0x122bc4: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x122bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_122bc8:
    // 0x122bc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122bcc:
    // 0x122bcc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x122bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_122bd0:
    // 0x122bd0: 0xc0402d4  jal         func_100B50
label_122bd4:
    if (ctx->pc == 0x122BD4u) {
        ctx->pc = 0x122BD8u;
        goto label_122bd8;
    }
    ctx->pc = 0x122BD0u;
    SET_GPR_U32(ctx, 31, 0x122BD8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x122BD0u, 0x122BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122BD8u;
label_122bd8:
    // 0x122bd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122bdc:
    // 0x122bdc: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x122bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_122be0:
    // 0x122be0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x122be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_122be4:
    // 0x122be4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x122be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_122be8:
    // 0x122be8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x122be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_122bec:
    // 0x122bec: 0xc0402d4  jal         func_100B50
label_122bf0:
    if (ctx->pc == 0x122BF0u) {
        ctx->pc = 0x122BF4u;
        goto label_122bf4;
    }
    ctx->pc = 0x122BECu;
    SET_GPR_U32(ctx, 31, 0x122BF4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x122BECu, 0x122BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122BF4u;
label_122bf4:
    // 0x122bf4: 0x93a30250  lbu         $v1, 0x250($sp)
    ctx->pc = 0x122bf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 592)));
label_122bf8:
    // 0x122bf8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x122bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_122bfc:
    // 0x122bfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x122bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122c00:
    // 0x122c00: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
label_122c04:
    if (ctx->pc == 0x122C04u) {
        ctx->pc = 0x122C08u;
        goto label_122c08;
    }
    ctx->pc = 0x122C00u;
    {
        const bool branch_taken_0x122c00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x122c00) {
            ctx->pc = 0x122C2Cu;
            goto label_122c2c;
        }
    }
    ctx->pc = 0x122C08u;
label_122c08:
    // 0x122c08: 0xc05548c  jal         func_155230
label_122c0c:
    if (ctx->pc == 0x122C0Cu) {
        ctx->pc = 0x122C10u;
        goto label_122c10;
    }
    ctx->pc = 0x122C08u;
    SET_GPR_U32(ctx, 31, 0x122C10u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x122C08u, 0x122C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C10u;
label_122c10:
    // 0x122c10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122c14:
    // 0x122c14: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x122c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_122c18:
    // 0x122c18: 0xc0553d4  jal         func_154F50
label_122c1c:
    if (ctx->pc == 0x122C1Cu) {
        ctx->pc = 0x122C20u;
        goto label_122c20;
    }
    ctx->pc = 0x122C18u;
    SET_GPR_U32(ctx, 31, 0x122C20u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x122C18u, 0x122C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C20u;
label_122c20:
    // 0x122c20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x122c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_122c24:
    // 0x122c24: 0xc05c990  jal         func_172640
label_122c28:
    if (ctx->pc == 0x122C28u) {
        ctx->pc = 0x122C2Cu;
        goto label_122c2c;
    }
    ctx->pc = 0x122C24u;
    SET_GPR_U32(ctx, 31, 0x122C2Cu);
    ctx->pc = 0x172640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172640u, 0x122C24u, 0x122C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122C2Cu;
label_122c2c:
    // 0x122c2c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x122c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_122c30:
    // 0x122c30: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x122c30u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_122c34:
    // 0x122c34: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x122c34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_122c38:
    // 0x122c38: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x122c38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_122c3c:
    // 0x122c3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x122c3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_122c40:
    // 0x122c40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x122c40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_122c44:
    // 0x122c44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x122c44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_122c48:
    // 0x122c48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x122c48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_122c4c:
    // 0x122c4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x122c4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_122c50:
    // 0x122c50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x122c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_122c54:
    // 0x122c54: 0x27bd0260  addiu       $sp, $sp, 0x260
    ctx->pc = 0x122c54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_122c58:
    // 0x122c58: 0x3e00008  jr          $ra
label_122c5c:
    if (ctx->pc == 0x122C5Cu) {
        ctx->pc = 0x122C60u;
        goto label_fallthrough_0x122c58;
    }
    ctx->pc = 0x122C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x122c58:
    ctx->pc = 0x122C60u;
}
