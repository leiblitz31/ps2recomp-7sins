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

// Function: sub_00319B40
// Address: 0x319b40 - 0x31a4e0
void sub_00319B40_0x319b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319B40_0x319b40");
#endif

    switch (ctx->pc) {
        case 0x319b40u: goto label_319b40;
        case 0x319b44u: goto label_319b44;
        case 0x319b48u: goto label_319b48;
        case 0x319b4cu: goto label_319b4c;
        case 0x319b50u: goto label_319b50;
        case 0x319b54u: goto label_319b54;
        case 0x319b58u: goto label_319b58;
        case 0x319b5cu: goto label_319b5c;
        case 0x319b60u: goto label_319b60;
        case 0x319b64u: goto label_319b64;
        case 0x319b68u: goto label_319b68;
        case 0x319b6cu: goto label_319b6c;
        case 0x319b70u: goto label_319b70;
        case 0x319b74u: goto label_319b74;
        case 0x319b78u: goto label_319b78;
        case 0x319b7cu: goto label_319b7c;
        case 0x319b80u: goto label_319b80;
        case 0x319b84u: goto label_319b84;
        case 0x319b88u: goto label_319b88;
        case 0x319b8cu: goto label_319b8c;
        case 0x319b90u: goto label_319b90;
        case 0x319b94u: goto label_319b94;
        case 0x319b98u: goto label_319b98;
        case 0x319b9cu: goto label_319b9c;
        case 0x319ba0u: goto label_319ba0;
        case 0x319ba4u: goto label_319ba4;
        case 0x319ba8u: goto label_319ba8;
        case 0x319bacu: goto label_319bac;
        case 0x319bb0u: goto label_319bb0;
        case 0x319bb4u: goto label_319bb4;
        case 0x319bb8u: goto label_319bb8;
        case 0x319bbcu: goto label_319bbc;
        case 0x319bc0u: goto label_319bc0;
        case 0x319bc4u: goto label_319bc4;
        case 0x319bc8u: goto label_319bc8;
        case 0x319bccu: goto label_319bcc;
        case 0x319bd0u: goto label_319bd0;
        case 0x319bd4u: goto label_319bd4;
        case 0x319bd8u: goto label_319bd8;
        case 0x319bdcu: goto label_319bdc;
        case 0x319be0u: goto label_319be0;
        case 0x319be4u: goto label_319be4;
        case 0x319be8u: goto label_319be8;
        case 0x319becu: goto label_319bec;
        case 0x319bf0u: goto label_319bf0;
        case 0x319bf4u: goto label_319bf4;
        case 0x319bf8u: goto label_319bf8;
        case 0x319bfcu: goto label_319bfc;
        case 0x319c00u: goto label_319c00;
        case 0x319c04u: goto label_319c04;
        case 0x319c08u: goto label_319c08;
        case 0x319c0cu: goto label_319c0c;
        case 0x319c10u: goto label_319c10;
        case 0x319c14u: goto label_319c14;
        case 0x319c18u: goto label_319c18;
        case 0x319c1cu: goto label_319c1c;
        case 0x319c20u: goto label_319c20;
        case 0x319c24u: goto label_319c24;
        case 0x319c28u: goto label_319c28;
        case 0x319c2cu: goto label_319c2c;
        case 0x319c30u: goto label_319c30;
        case 0x319c34u: goto label_319c34;
        case 0x319c38u: goto label_319c38;
        case 0x319c3cu: goto label_319c3c;
        case 0x319c40u: goto label_319c40;
        case 0x319c44u: goto label_319c44;
        case 0x319c48u: goto label_319c48;
        case 0x319c4cu: goto label_319c4c;
        case 0x319c50u: goto label_319c50;
        case 0x319c54u: goto label_319c54;
        case 0x319c58u: goto label_319c58;
        case 0x319c5cu: goto label_319c5c;
        case 0x319c60u: goto label_319c60;
        case 0x319c64u: goto label_319c64;
        case 0x319c68u: goto label_319c68;
        case 0x319c6cu: goto label_319c6c;
        case 0x319c70u: goto label_319c70;
        case 0x319c74u: goto label_319c74;
        case 0x319c78u: goto label_319c78;
        case 0x319c7cu: goto label_319c7c;
        case 0x319c80u: goto label_319c80;
        case 0x319c84u: goto label_319c84;
        case 0x319c88u: goto label_319c88;
        case 0x319c8cu: goto label_319c8c;
        case 0x319c90u: goto label_319c90;
        case 0x319c94u: goto label_319c94;
        case 0x319c98u: goto label_319c98;
        case 0x319c9cu: goto label_319c9c;
        case 0x319ca0u: goto label_319ca0;
        case 0x319ca4u: goto label_319ca4;
        case 0x319ca8u: goto label_319ca8;
        case 0x319cacu: goto label_319cac;
        case 0x319cb0u: goto label_319cb0;
        case 0x319cb4u: goto label_319cb4;
        case 0x319cb8u: goto label_319cb8;
        case 0x319cbcu: goto label_319cbc;
        case 0x319cc0u: goto label_319cc0;
        case 0x319cc4u: goto label_319cc4;
        case 0x319cc8u: goto label_319cc8;
        case 0x319cccu: goto label_319ccc;
        case 0x319cd0u: goto label_319cd0;
        case 0x319cd4u: goto label_319cd4;
        case 0x319cd8u: goto label_319cd8;
        case 0x319cdcu: goto label_319cdc;
        case 0x319ce0u: goto label_319ce0;
        case 0x319ce4u: goto label_319ce4;
        case 0x319ce8u: goto label_319ce8;
        case 0x319cecu: goto label_319cec;
        case 0x319cf0u: goto label_319cf0;
        case 0x319cf4u: goto label_319cf4;
        case 0x319cf8u: goto label_319cf8;
        case 0x319cfcu: goto label_319cfc;
        case 0x319d00u: goto label_319d00;
        case 0x319d04u: goto label_319d04;
        case 0x319d08u: goto label_319d08;
        case 0x319d0cu: goto label_319d0c;
        case 0x319d10u: goto label_319d10;
        case 0x319d14u: goto label_319d14;
        case 0x319d18u: goto label_319d18;
        case 0x319d1cu: goto label_319d1c;
        case 0x319d20u: goto label_319d20;
        case 0x319d24u: goto label_319d24;
        case 0x319d28u: goto label_319d28;
        case 0x319d2cu: goto label_319d2c;
        case 0x319d30u: goto label_319d30;
        case 0x319d34u: goto label_319d34;
        case 0x319d38u: goto label_319d38;
        case 0x319d3cu: goto label_319d3c;
        case 0x319d40u: goto label_319d40;
        case 0x319d44u: goto label_319d44;
        case 0x319d48u: goto label_319d48;
        case 0x319d4cu: goto label_319d4c;
        case 0x319d50u: goto label_319d50;
        case 0x319d54u: goto label_319d54;
        case 0x319d58u: goto label_319d58;
        case 0x319d5cu: goto label_319d5c;
        case 0x319d60u: goto label_319d60;
        case 0x319d64u: goto label_319d64;
        case 0x319d68u: goto label_319d68;
        case 0x319d6cu: goto label_319d6c;
        case 0x319d70u: goto label_319d70;
        case 0x319d74u: goto label_319d74;
        case 0x319d78u: goto label_319d78;
        case 0x319d7cu: goto label_319d7c;
        case 0x319d80u: goto label_319d80;
        case 0x319d84u: goto label_319d84;
        case 0x319d88u: goto label_319d88;
        case 0x319d8cu: goto label_319d8c;
        case 0x319d90u: goto label_319d90;
        case 0x319d94u: goto label_319d94;
        case 0x319d98u: goto label_319d98;
        case 0x319d9cu: goto label_319d9c;
        case 0x319da0u: goto label_319da0;
        case 0x319da4u: goto label_319da4;
        case 0x319da8u: goto label_319da8;
        case 0x319dacu: goto label_319dac;
        case 0x319db0u: goto label_319db0;
        case 0x319db4u: goto label_319db4;
        case 0x319db8u: goto label_319db8;
        case 0x319dbcu: goto label_319dbc;
        case 0x319dc0u: goto label_319dc0;
        case 0x319dc4u: goto label_319dc4;
        case 0x319dc8u: goto label_319dc8;
        case 0x319dccu: goto label_319dcc;
        case 0x319dd0u: goto label_319dd0;
        case 0x319dd4u: goto label_319dd4;
        case 0x319dd8u: goto label_319dd8;
        case 0x319ddcu: goto label_319ddc;
        case 0x319de0u: goto label_319de0;
        case 0x319de4u: goto label_319de4;
        case 0x319de8u: goto label_319de8;
        case 0x319decu: goto label_319dec;
        case 0x319df0u: goto label_319df0;
        case 0x319df4u: goto label_319df4;
        case 0x319df8u: goto label_319df8;
        case 0x319dfcu: goto label_319dfc;
        case 0x319e00u: goto label_319e00;
        case 0x319e04u: goto label_319e04;
        case 0x319e08u: goto label_319e08;
        case 0x319e0cu: goto label_319e0c;
        case 0x319e10u: goto label_319e10;
        case 0x319e14u: goto label_319e14;
        case 0x319e18u: goto label_319e18;
        case 0x319e1cu: goto label_319e1c;
        case 0x319e20u: goto label_319e20;
        case 0x319e24u: goto label_319e24;
        case 0x319e28u: goto label_319e28;
        case 0x319e2cu: goto label_319e2c;
        case 0x319e30u: goto label_319e30;
        case 0x319e34u: goto label_319e34;
        case 0x319e38u: goto label_319e38;
        case 0x319e3cu: goto label_319e3c;
        case 0x319e40u: goto label_319e40;
        case 0x319e44u: goto label_319e44;
        case 0x319e48u: goto label_319e48;
        case 0x319e4cu: goto label_319e4c;
        case 0x319e50u: goto label_319e50;
        case 0x319e54u: goto label_319e54;
        case 0x319e58u: goto label_319e58;
        case 0x319e5cu: goto label_319e5c;
        case 0x319e60u: goto label_319e60;
        case 0x319e64u: goto label_319e64;
        case 0x319e68u: goto label_319e68;
        case 0x319e6cu: goto label_319e6c;
        case 0x319e70u: goto label_319e70;
        case 0x319e74u: goto label_319e74;
        case 0x319e78u: goto label_319e78;
        case 0x319e7cu: goto label_319e7c;
        case 0x319e80u: goto label_319e80;
        case 0x319e84u: goto label_319e84;
        case 0x319e88u: goto label_319e88;
        case 0x319e8cu: goto label_319e8c;
        case 0x319e90u: goto label_319e90;
        case 0x319e94u: goto label_319e94;
        case 0x319e98u: goto label_319e98;
        case 0x319e9cu: goto label_319e9c;
        case 0x319ea0u: goto label_319ea0;
        case 0x319ea4u: goto label_319ea4;
        case 0x319ea8u: goto label_319ea8;
        case 0x319eacu: goto label_319eac;
        case 0x319eb0u: goto label_319eb0;
        case 0x319eb4u: goto label_319eb4;
        case 0x319eb8u: goto label_319eb8;
        case 0x319ebcu: goto label_319ebc;
        case 0x319ec0u: goto label_319ec0;
        case 0x319ec4u: goto label_319ec4;
        case 0x319ec8u: goto label_319ec8;
        case 0x319eccu: goto label_319ecc;
        case 0x319ed0u: goto label_319ed0;
        case 0x319ed4u: goto label_319ed4;
        case 0x319ed8u: goto label_319ed8;
        case 0x319edcu: goto label_319edc;
        case 0x319ee0u: goto label_319ee0;
        case 0x319ee4u: goto label_319ee4;
        case 0x319ee8u: goto label_319ee8;
        case 0x319eecu: goto label_319eec;
        case 0x319ef0u: goto label_319ef0;
        case 0x319ef4u: goto label_319ef4;
        case 0x319ef8u: goto label_319ef8;
        case 0x319efcu: goto label_319efc;
        case 0x319f00u: goto label_319f00;
        case 0x319f04u: goto label_319f04;
        case 0x319f08u: goto label_319f08;
        case 0x319f0cu: goto label_319f0c;
        case 0x319f10u: goto label_319f10;
        case 0x319f14u: goto label_319f14;
        case 0x319f18u: goto label_319f18;
        case 0x319f1cu: goto label_319f1c;
        case 0x319f20u: goto label_319f20;
        case 0x319f24u: goto label_319f24;
        case 0x319f28u: goto label_319f28;
        case 0x319f2cu: goto label_319f2c;
        case 0x319f30u: goto label_319f30;
        case 0x319f34u: goto label_319f34;
        case 0x319f38u: goto label_319f38;
        case 0x319f3cu: goto label_319f3c;
        case 0x319f40u: goto label_319f40;
        case 0x319f44u: goto label_319f44;
        case 0x319f48u: goto label_319f48;
        case 0x319f4cu: goto label_319f4c;
        case 0x319f50u: goto label_319f50;
        case 0x319f54u: goto label_319f54;
        case 0x319f58u: goto label_319f58;
        case 0x319f5cu: goto label_319f5c;
        case 0x319f60u: goto label_319f60;
        case 0x319f64u: goto label_319f64;
        case 0x319f68u: goto label_319f68;
        case 0x319f6cu: goto label_319f6c;
        case 0x319f70u: goto label_319f70;
        case 0x319f74u: goto label_319f74;
        case 0x319f78u: goto label_319f78;
        case 0x319f7cu: goto label_319f7c;
        case 0x319f80u: goto label_319f80;
        case 0x319f84u: goto label_319f84;
        case 0x319f88u: goto label_319f88;
        case 0x319f8cu: goto label_319f8c;
        case 0x319f90u: goto label_319f90;
        case 0x319f94u: goto label_319f94;
        case 0x319f98u: goto label_319f98;
        case 0x319f9cu: goto label_319f9c;
        case 0x319fa0u: goto label_319fa0;
        case 0x319fa4u: goto label_319fa4;
        case 0x319fa8u: goto label_319fa8;
        case 0x319facu: goto label_319fac;
        case 0x319fb0u: goto label_319fb0;
        case 0x319fb4u: goto label_319fb4;
        case 0x319fb8u: goto label_319fb8;
        case 0x319fbcu: goto label_319fbc;
        case 0x319fc0u: goto label_319fc0;
        case 0x319fc4u: goto label_319fc4;
        case 0x319fc8u: goto label_319fc8;
        case 0x319fccu: goto label_319fcc;
        case 0x319fd0u: goto label_319fd0;
        case 0x319fd4u: goto label_319fd4;
        case 0x319fd8u: goto label_319fd8;
        case 0x319fdcu: goto label_319fdc;
        case 0x319fe0u: goto label_319fe0;
        case 0x319fe4u: goto label_319fe4;
        case 0x319fe8u: goto label_319fe8;
        case 0x319fecu: goto label_319fec;
        case 0x319ff0u: goto label_319ff0;
        case 0x319ff4u: goto label_319ff4;
        case 0x319ff8u: goto label_319ff8;
        case 0x319ffcu: goto label_319ffc;
        case 0x31a000u: goto label_31a000;
        case 0x31a004u: goto label_31a004;
        case 0x31a008u: goto label_31a008;
        case 0x31a00cu: goto label_31a00c;
        case 0x31a010u: goto label_31a010;
        case 0x31a014u: goto label_31a014;
        case 0x31a018u: goto label_31a018;
        case 0x31a01cu: goto label_31a01c;
        case 0x31a020u: goto label_31a020;
        case 0x31a024u: goto label_31a024;
        case 0x31a028u: goto label_31a028;
        case 0x31a02cu: goto label_31a02c;
        case 0x31a030u: goto label_31a030;
        case 0x31a034u: goto label_31a034;
        case 0x31a038u: goto label_31a038;
        case 0x31a03cu: goto label_31a03c;
        case 0x31a040u: goto label_31a040;
        case 0x31a044u: goto label_31a044;
        case 0x31a048u: goto label_31a048;
        case 0x31a04cu: goto label_31a04c;
        case 0x31a050u: goto label_31a050;
        case 0x31a054u: goto label_31a054;
        case 0x31a058u: goto label_31a058;
        case 0x31a05cu: goto label_31a05c;
        case 0x31a060u: goto label_31a060;
        case 0x31a064u: goto label_31a064;
        case 0x31a068u: goto label_31a068;
        case 0x31a06cu: goto label_31a06c;
        case 0x31a070u: goto label_31a070;
        case 0x31a074u: goto label_31a074;
        case 0x31a078u: goto label_31a078;
        case 0x31a07cu: goto label_31a07c;
        case 0x31a080u: goto label_31a080;
        case 0x31a084u: goto label_31a084;
        case 0x31a088u: goto label_31a088;
        case 0x31a08cu: goto label_31a08c;
        case 0x31a090u: goto label_31a090;
        case 0x31a094u: goto label_31a094;
        case 0x31a098u: goto label_31a098;
        case 0x31a09cu: goto label_31a09c;
        case 0x31a0a0u: goto label_31a0a0;
        case 0x31a0a4u: goto label_31a0a4;
        case 0x31a0a8u: goto label_31a0a8;
        case 0x31a0acu: goto label_31a0ac;
        case 0x31a0b0u: goto label_31a0b0;
        case 0x31a0b4u: goto label_31a0b4;
        case 0x31a0b8u: goto label_31a0b8;
        case 0x31a0bcu: goto label_31a0bc;
        case 0x31a0c0u: goto label_31a0c0;
        case 0x31a0c4u: goto label_31a0c4;
        case 0x31a0c8u: goto label_31a0c8;
        case 0x31a0ccu: goto label_31a0cc;
        case 0x31a0d0u: goto label_31a0d0;
        case 0x31a0d4u: goto label_31a0d4;
        case 0x31a0d8u: goto label_31a0d8;
        case 0x31a0dcu: goto label_31a0dc;
        case 0x31a0e0u: goto label_31a0e0;
        case 0x31a0e4u: goto label_31a0e4;
        case 0x31a0e8u: goto label_31a0e8;
        case 0x31a0ecu: goto label_31a0ec;
        case 0x31a0f0u: goto label_31a0f0;
        case 0x31a0f4u: goto label_31a0f4;
        case 0x31a0f8u: goto label_31a0f8;
        case 0x31a0fcu: goto label_31a0fc;
        case 0x31a100u: goto label_31a100;
        case 0x31a104u: goto label_31a104;
        case 0x31a108u: goto label_31a108;
        case 0x31a10cu: goto label_31a10c;
        case 0x31a110u: goto label_31a110;
        case 0x31a114u: goto label_31a114;
        case 0x31a118u: goto label_31a118;
        case 0x31a11cu: goto label_31a11c;
        case 0x31a120u: goto label_31a120;
        case 0x31a124u: goto label_31a124;
        case 0x31a128u: goto label_31a128;
        case 0x31a12cu: goto label_31a12c;
        case 0x31a130u: goto label_31a130;
        case 0x31a134u: goto label_31a134;
        case 0x31a138u: goto label_31a138;
        case 0x31a13cu: goto label_31a13c;
        case 0x31a140u: goto label_31a140;
        case 0x31a144u: goto label_31a144;
        case 0x31a148u: goto label_31a148;
        case 0x31a14cu: goto label_31a14c;
        case 0x31a150u: goto label_31a150;
        case 0x31a154u: goto label_31a154;
        case 0x31a158u: goto label_31a158;
        case 0x31a15cu: goto label_31a15c;
        case 0x31a160u: goto label_31a160;
        case 0x31a164u: goto label_31a164;
        case 0x31a168u: goto label_31a168;
        case 0x31a16cu: goto label_31a16c;
        case 0x31a170u: goto label_31a170;
        case 0x31a174u: goto label_31a174;
        case 0x31a178u: goto label_31a178;
        case 0x31a17cu: goto label_31a17c;
        case 0x31a180u: goto label_31a180;
        case 0x31a184u: goto label_31a184;
        case 0x31a188u: goto label_31a188;
        case 0x31a18cu: goto label_31a18c;
        case 0x31a190u: goto label_31a190;
        case 0x31a194u: goto label_31a194;
        case 0x31a198u: goto label_31a198;
        case 0x31a19cu: goto label_31a19c;
        case 0x31a1a0u: goto label_31a1a0;
        case 0x31a1a4u: goto label_31a1a4;
        case 0x31a1a8u: goto label_31a1a8;
        case 0x31a1acu: goto label_31a1ac;
        case 0x31a1b0u: goto label_31a1b0;
        case 0x31a1b4u: goto label_31a1b4;
        case 0x31a1b8u: goto label_31a1b8;
        case 0x31a1bcu: goto label_31a1bc;
        case 0x31a1c0u: goto label_31a1c0;
        case 0x31a1c4u: goto label_31a1c4;
        case 0x31a1c8u: goto label_31a1c8;
        case 0x31a1ccu: goto label_31a1cc;
        case 0x31a1d0u: goto label_31a1d0;
        case 0x31a1d4u: goto label_31a1d4;
        case 0x31a1d8u: goto label_31a1d8;
        case 0x31a1dcu: goto label_31a1dc;
        case 0x31a1e0u: goto label_31a1e0;
        case 0x31a1e4u: goto label_31a1e4;
        case 0x31a1e8u: goto label_31a1e8;
        case 0x31a1ecu: goto label_31a1ec;
        case 0x31a1f0u: goto label_31a1f0;
        case 0x31a1f4u: goto label_31a1f4;
        case 0x31a1f8u: goto label_31a1f8;
        case 0x31a1fcu: goto label_31a1fc;
        case 0x31a200u: goto label_31a200;
        case 0x31a204u: goto label_31a204;
        case 0x31a208u: goto label_31a208;
        case 0x31a20cu: goto label_31a20c;
        case 0x31a210u: goto label_31a210;
        case 0x31a214u: goto label_31a214;
        case 0x31a218u: goto label_31a218;
        case 0x31a21cu: goto label_31a21c;
        case 0x31a220u: goto label_31a220;
        case 0x31a224u: goto label_31a224;
        case 0x31a228u: goto label_31a228;
        case 0x31a22cu: goto label_31a22c;
        case 0x31a230u: goto label_31a230;
        case 0x31a234u: goto label_31a234;
        case 0x31a238u: goto label_31a238;
        case 0x31a23cu: goto label_31a23c;
        case 0x31a240u: goto label_31a240;
        case 0x31a244u: goto label_31a244;
        case 0x31a248u: goto label_31a248;
        case 0x31a24cu: goto label_31a24c;
        case 0x31a250u: goto label_31a250;
        case 0x31a254u: goto label_31a254;
        case 0x31a258u: goto label_31a258;
        case 0x31a25cu: goto label_31a25c;
        case 0x31a260u: goto label_31a260;
        case 0x31a264u: goto label_31a264;
        case 0x31a268u: goto label_31a268;
        case 0x31a26cu: goto label_31a26c;
        case 0x31a270u: goto label_31a270;
        case 0x31a274u: goto label_31a274;
        case 0x31a278u: goto label_31a278;
        case 0x31a27cu: goto label_31a27c;
        case 0x31a280u: goto label_31a280;
        case 0x31a284u: goto label_31a284;
        case 0x31a288u: goto label_31a288;
        case 0x31a28cu: goto label_31a28c;
        case 0x31a290u: goto label_31a290;
        case 0x31a294u: goto label_31a294;
        case 0x31a298u: goto label_31a298;
        case 0x31a29cu: goto label_31a29c;
        case 0x31a2a0u: goto label_31a2a0;
        case 0x31a2a4u: goto label_31a2a4;
        case 0x31a2a8u: goto label_31a2a8;
        case 0x31a2acu: goto label_31a2ac;
        case 0x31a2b0u: goto label_31a2b0;
        case 0x31a2b4u: goto label_31a2b4;
        case 0x31a2b8u: goto label_31a2b8;
        case 0x31a2bcu: goto label_31a2bc;
        case 0x31a2c0u: goto label_31a2c0;
        case 0x31a2c4u: goto label_31a2c4;
        case 0x31a2c8u: goto label_31a2c8;
        case 0x31a2ccu: goto label_31a2cc;
        case 0x31a2d0u: goto label_31a2d0;
        case 0x31a2d4u: goto label_31a2d4;
        case 0x31a2d8u: goto label_31a2d8;
        case 0x31a2dcu: goto label_31a2dc;
        case 0x31a2e0u: goto label_31a2e0;
        case 0x31a2e4u: goto label_31a2e4;
        case 0x31a2e8u: goto label_31a2e8;
        case 0x31a2ecu: goto label_31a2ec;
        case 0x31a2f0u: goto label_31a2f0;
        case 0x31a2f4u: goto label_31a2f4;
        case 0x31a2f8u: goto label_31a2f8;
        case 0x31a2fcu: goto label_31a2fc;
        case 0x31a300u: goto label_31a300;
        case 0x31a304u: goto label_31a304;
        case 0x31a308u: goto label_31a308;
        case 0x31a30cu: goto label_31a30c;
        case 0x31a310u: goto label_31a310;
        case 0x31a314u: goto label_31a314;
        case 0x31a318u: goto label_31a318;
        case 0x31a31cu: goto label_31a31c;
        case 0x31a320u: goto label_31a320;
        case 0x31a324u: goto label_31a324;
        case 0x31a328u: goto label_31a328;
        case 0x31a32cu: goto label_31a32c;
        case 0x31a330u: goto label_31a330;
        case 0x31a334u: goto label_31a334;
        case 0x31a338u: goto label_31a338;
        case 0x31a33cu: goto label_31a33c;
        case 0x31a340u: goto label_31a340;
        case 0x31a344u: goto label_31a344;
        case 0x31a348u: goto label_31a348;
        case 0x31a34cu: goto label_31a34c;
        case 0x31a350u: goto label_31a350;
        case 0x31a354u: goto label_31a354;
        case 0x31a358u: goto label_31a358;
        case 0x31a35cu: goto label_31a35c;
        case 0x31a360u: goto label_31a360;
        case 0x31a364u: goto label_31a364;
        case 0x31a368u: goto label_31a368;
        case 0x31a36cu: goto label_31a36c;
        case 0x31a370u: goto label_31a370;
        case 0x31a374u: goto label_31a374;
        case 0x31a378u: goto label_31a378;
        case 0x31a37cu: goto label_31a37c;
        case 0x31a380u: goto label_31a380;
        case 0x31a384u: goto label_31a384;
        case 0x31a388u: goto label_31a388;
        case 0x31a38cu: goto label_31a38c;
        case 0x31a390u: goto label_31a390;
        case 0x31a394u: goto label_31a394;
        case 0x31a398u: goto label_31a398;
        case 0x31a39cu: goto label_31a39c;
        case 0x31a3a0u: goto label_31a3a0;
        case 0x31a3a4u: goto label_31a3a4;
        case 0x31a3a8u: goto label_31a3a8;
        case 0x31a3acu: goto label_31a3ac;
        case 0x31a3b0u: goto label_31a3b0;
        case 0x31a3b4u: goto label_31a3b4;
        case 0x31a3b8u: goto label_31a3b8;
        case 0x31a3bcu: goto label_31a3bc;
        case 0x31a3c0u: goto label_31a3c0;
        case 0x31a3c4u: goto label_31a3c4;
        case 0x31a3c8u: goto label_31a3c8;
        case 0x31a3ccu: goto label_31a3cc;
        case 0x31a3d0u: goto label_31a3d0;
        case 0x31a3d4u: goto label_31a3d4;
        case 0x31a3d8u: goto label_31a3d8;
        case 0x31a3dcu: goto label_31a3dc;
        case 0x31a3e0u: goto label_31a3e0;
        case 0x31a3e4u: goto label_31a3e4;
        case 0x31a3e8u: goto label_31a3e8;
        case 0x31a3ecu: goto label_31a3ec;
        case 0x31a3f0u: goto label_31a3f0;
        case 0x31a3f4u: goto label_31a3f4;
        case 0x31a3f8u: goto label_31a3f8;
        case 0x31a3fcu: goto label_31a3fc;
        case 0x31a400u: goto label_31a400;
        case 0x31a404u: goto label_31a404;
        case 0x31a408u: goto label_31a408;
        case 0x31a40cu: goto label_31a40c;
        case 0x31a410u: goto label_31a410;
        case 0x31a414u: goto label_31a414;
        case 0x31a418u: goto label_31a418;
        case 0x31a41cu: goto label_31a41c;
        case 0x31a420u: goto label_31a420;
        case 0x31a424u: goto label_31a424;
        case 0x31a428u: goto label_31a428;
        case 0x31a42cu: goto label_31a42c;
        case 0x31a430u: goto label_31a430;
        case 0x31a434u: goto label_31a434;
        case 0x31a438u: goto label_31a438;
        case 0x31a43cu: goto label_31a43c;
        case 0x31a440u: goto label_31a440;
        case 0x31a444u: goto label_31a444;
        case 0x31a448u: goto label_31a448;
        case 0x31a44cu: goto label_31a44c;
        case 0x31a450u: goto label_31a450;
        case 0x31a454u: goto label_31a454;
        case 0x31a458u: goto label_31a458;
        case 0x31a45cu: goto label_31a45c;
        case 0x31a460u: goto label_31a460;
        case 0x31a464u: goto label_31a464;
        case 0x31a468u: goto label_31a468;
        case 0x31a46cu: goto label_31a46c;
        case 0x31a470u: goto label_31a470;
        case 0x31a474u: goto label_31a474;
        case 0x31a478u: goto label_31a478;
        case 0x31a47cu: goto label_31a47c;
        case 0x31a480u: goto label_31a480;
        case 0x31a484u: goto label_31a484;
        case 0x31a488u: goto label_31a488;
        case 0x31a48cu: goto label_31a48c;
        case 0x31a490u: goto label_31a490;
        case 0x31a494u: goto label_31a494;
        case 0x31a498u: goto label_31a498;
        case 0x31a49cu: goto label_31a49c;
        case 0x31a4a0u: goto label_31a4a0;
        case 0x31a4a4u: goto label_31a4a4;
        case 0x31a4a8u: goto label_31a4a8;
        case 0x31a4acu: goto label_31a4ac;
        case 0x31a4b0u: goto label_31a4b0;
        case 0x31a4b4u: goto label_31a4b4;
        case 0x31a4b8u: goto label_31a4b8;
        case 0x31a4bcu: goto label_31a4bc;
        case 0x31a4c0u: goto label_31a4c0;
        case 0x31a4c4u: goto label_31a4c4;
        case 0x31a4c8u: goto label_31a4c8;
        case 0x31a4ccu: goto label_31a4cc;
        case 0x31a4d0u: goto label_31a4d0;
        case 0x31a4d4u: goto label_31a4d4;
        case 0x31a4d8u: goto label_31a4d8;
        case 0x31a4dcu: goto label_31a4dc;
        default: break;
    }

    ctx->pc = 0x319b40u;

label_319b40:
    // 0x319b40: 0x27bdfcc0  addiu       $sp, $sp, -0x340
    ctx->pc = 0x319b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966464));
label_319b44:
    // 0x319b44: 0x8f82a5b0  lw          $v0, -0x5A50($gp)
    ctx->pc = 0x319b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944176)));
label_319b48:
    // 0x319b48: 0x7fbe0290  sq          $fp, 0x290($sp)
    ctx->pc = 0x319b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 30));
label_319b4c:
    // 0x319b4c: 0x7fb702a0  sq          $s7, 0x2A0($sp)
    ctx->pc = 0x319b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 23));
label_319b50:
    // 0x319b50: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x319b50u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_319b54:
    // 0x319b54: 0x7fb00310  sq          $s0, 0x310($sp)
    ctx->pc = 0x319b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 16));
label_319b58:
    // 0x319b58: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x319b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_319b5c:
    // 0x319b5c: 0x7fb10300  sq          $s1, 0x300($sp)
    ctx->pc = 0x319b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 17));
label_319b60:
    // 0x319b60: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x319b60u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_319b64:
    // 0x319b64: 0x7fb202f0  sq          $s2, 0x2F0($sp)
    ctx->pc = 0x319b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 18));
label_319b68:
    // 0x319b68: 0x7fb302e0  sq          $s3, 0x2E0($sp)
    ctx->pc = 0x319b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 19));
label_319b6c:
    // 0x319b6c: 0x7fb502c0  sq          $s5, 0x2C0($sp)
    ctx->pc = 0x319b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 21));
label_319b70:
    // 0x319b70: 0x7fb602b0  sq          $s6, 0x2B0($sp)
    ctx->pc = 0x319b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 22));
label_319b74:
    // 0x319b74: 0xffbf0280  sd          $ra, 0x280($sp)
    ctx->pc = 0x319b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 31));
label_319b78:
    // 0x319b78: 0xe7b60330  swc1        $f22, 0x330($sp)
    ctx->pc = 0x319b78u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 816), bits); }
label_319b7c:
    // 0x319b7c: 0xe7b50328  swc1        $f21, 0x328($sp)
    ctx->pc = 0x319b7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 808), bits); }
label_319b80:
    // 0x319b80: 0xe7b40320  swc1        $f20, 0x320($sp)
    ctx->pc = 0x319b80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
label_319b84:
    // 0x319b84: 0xafa60238  sw          $a2, 0x238($sp)
    ctx->pc = 0x319b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 6));
label_319b88:
    // 0x319b88: 0xafa7023c  sw          $a3, 0x23C($sp)
    ctx->pc = 0x319b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 7));
label_319b8c:
    // 0x319b8c: 0x7fb402d0  sq          $s4, 0x2D0($sp)
    ctx->pc = 0x319b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 20));
label_319b90:
    // 0x319b90: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x319b90u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_319b94:
    // 0x319b94: 0x1280020b  beqz        $s4, . + 4 + (0x20B << 2)
label_319b98:
    if (ctx->pc == 0x319B98u) {
        ctx->pc = 0x319B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B94u;
        // 0x319b98: 0xafa80240  sw          $t0, 0x240($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319B9Cu;
        goto label_319b9c;
    }
    ctx->pc = 0x319B94u;
    {
        const bool branch_taken_0x319b94 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x319B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B94u;
        // 0x319b98: 0xafa80240  sw          $t0, 0x240($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319b94) {
            ctx->pc = 0x31A3C4u;
            goto label_31a3c4;
        }
    }
    ctx->pc = 0x319B9Cu;
label_319b9c:
    // 0x319b9c: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x319b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319ba0:
    // 0x319ba0: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x319ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319ba4:
    // 0x319ba4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x319ba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319ba8:
    // 0x319ba8: 0x0  nop
    ctx->pc = 0x319ba8u;
    // NOP
label_319bac:
    // 0x319bac: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_319bb0:
    if (ctx->pc == 0x319BB0u) {
        ctx->pc = 0x319BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319BACu;
        // 0x319bb0: 0xc6820004  lwc1        $f2, 0x4($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x319BB4u;
        goto label_319bb4;
    }
    ctx->pc = 0x319BACu;
    {
        const bool branch_taken_0x319bac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x319bac) {
            ctx->pc = 0x319BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319BACu;
            // 0x319bb0: 0xc6820004  lwc1        $f2, 0x4($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x319BC0u;
            goto label_319bc0;
        }
    }
    ctx->pc = 0x319BB4u;
label_319bb4:
    // 0x319bb4: 0x10000007  b           . + 4 + (0x7 << 2)
label_319bb8:
    if (ctx->pc == 0x319BB8u) {
        ctx->pc = 0x319BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319BB4u;
        // 0x319bb8: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x319BBCu;
        goto label_319bbc;
    }
    ctx->pc = 0x319BB4u;
    {
        const bool branch_taken_0x319bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319BB4u;
        // 0x319bb8: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319bb4) {
            ctx->pc = 0x319BD4u;
            goto label_319bd4;
        }
    }
    ctx->pc = 0x319BBCu;
label_319bbc:
    // 0x319bbc: 0x0  nop
    ctx->pc = 0x319bbcu;
    // NOP
label_319bc0:
    // 0x319bc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x319bc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319bc4:
    // 0x319bc4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x319bc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319bc8:
    // 0x319bc8: 0x0  nop
    ctx->pc = 0x319bc8u;
    // NOP
label_319bcc:
    // 0x319bcc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_319bd0:
    if (ctx->pc == 0x319BD0u) {
        ctx->pc = 0x319BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319BCCu;
        // 0x319bd0: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x319BD4u;
        goto label_319bd4;
    }
    ctx->pc = 0x319BCCu;
    {
        const bool branch_taken_0x319bcc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x319bcc) {
            ctx->pc = 0x319BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319BCCu;
            // 0x319bd0: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x319BD4u;
            goto label_319bd4;
        }
    }
    ctx->pc = 0x319BD4u;
label_319bd4:
    // 0x319bd4: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x319bd4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_319bd8:
    // 0x319bd8: 0xc6e10004  lwc1        $f1, 0x4($s7)
    ctx->pc = 0x319bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319bdc:
    // 0x319bdc: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x319bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319be0:
    // 0x319be0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x319be0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319be4:
    // 0x319be4: 0x0  nop
    ctx->pc = 0x319be4u;
    // NOP
label_319be8:
    // 0x319be8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_319bec:
    if (ctx->pc == 0x319BECu) {
        ctx->pc = 0x319BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319BE8u;
        // 0x319bec: 0xc6820008  lwc1        $f2, 0x8($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x319BF0u;
        goto label_319bf0;
    }
    ctx->pc = 0x319BE8u;
    {
        const bool branch_taken_0x319be8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x319be8) {
            ctx->pc = 0x319BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319BE8u;
            // 0x319bec: 0xc6820008  lwc1        $f2, 0x8($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x319BF8u;
            goto label_319bf8;
        }
    }
    ctx->pc = 0x319BF0u;
label_319bf0:
    // 0x319bf0: 0x10000006  b           . + 4 + (0x6 << 2)
label_319bf4:
    if (ctx->pc == 0x319BF4u) {
        ctx->pc = 0x319BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319BF0u;
        // 0x319bf4: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x319BF8u;
        goto label_319bf8;
    }
    ctx->pc = 0x319BF0u;
    {
        const bool branch_taken_0x319bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319BF0u;
        // 0x319bf4: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319bf0) {
            ctx->pc = 0x319C0Cu;
            goto label_319c0c;
        }
    }
    ctx->pc = 0x319BF8u;
label_319bf8:
    // 0x319bf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x319bf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319bfc:
    // 0x319bfc: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x319bfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319c00:
    // 0x319c00: 0x0  nop
    ctx->pc = 0x319c00u;
    // NOP
label_319c04:
    // 0x319c04: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_319c08:
    if (ctx->pc == 0x319C08u) {
        ctx->pc = 0x319C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319C04u;
        // 0x319c08: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x319C0Cu;
        goto label_319c0c;
    }
    ctx->pc = 0x319C04u;
    {
        const bool branch_taken_0x319c04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x319c04) {
            ctx->pc = 0x319C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319C04u;
            // 0x319c08: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x319C0Cu;
            goto label_319c0c;
        }
    }
    ctx->pc = 0x319C0Cu;
label_319c0c:
    // 0x319c0c: 0xc6e10008  lwc1        $f1, 0x8($s7)
    ctx->pc = 0x319c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319c10:
    // 0x319c10: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x319c10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_319c14:
    // 0x319c14: 0xc6820018  lwc1        $f2, 0x18($s4)
    ctx->pc = 0x319c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_319c18:
    // 0x319c18: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x319c18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319c1c:
    // 0x319c1c: 0x0  nop
    ctx->pc = 0x319c1cu;
    // NOP
label_319c20:
    // 0x319c20: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_319c24:
    if (ctx->pc == 0x319C24u) {
        ctx->pc = 0x319C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319C20u;
        // 0x319c24: 0x460018c0  add.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x319C28u;
        goto label_319c28;
    }
    ctx->pc = 0x319C20u;
    {
        const bool branch_taken_0x319c20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x319C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319C20u;
        // 0x319c24: 0x460018c0  add.s       $f3, $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319c20) {
            ctx->pc = 0x319C30u;
            goto label_319c30;
        }
    }
    ctx->pc = 0x319C28u;
label_319c28:
    // 0x319c28: 0x10000007  b           . + 4 + (0x7 << 2)
label_319c2c:
    if (ctx->pc == 0x319C2Cu) {
        ctx->pc = 0x319C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319C28u;
        // 0x319c2c: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x319C30u;
        goto label_319c30;
    }
    ctx->pc = 0x319C28u;
    {
        const bool branch_taken_0x319c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319C28u;
        // 0x319c2c: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319c28) {
            ctx->pc = 0x319C48u;
            goto label_319c48;
        }
    }
    ctx->pc = 0x319C30u;
label_319c30:
    // 0x319c30: 0xc682000c  lwc1        $f2, 0xC($s4)
    ctx->pc = 0x319c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_319c34:
    // 0x319c34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x319c34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319c38:
    // 0x319c38: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x319c38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319c3c:
    // 0x319c3c: 0x0  nop
    ctx->pc = 0x319c3cu;
    // NOP
label_319c40:
    // 0x319c40: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_319c44:
    if (ctx->pc == 0x319C44u) {
        ctx->pc = 0x319C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319C40u;
        // 0x319c44: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x319C48u;
        goto label_319c48;
    }
    ctx->pc = 0x319C40u;
    {
        const bool branch_taken_0x319c40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x319c40) {
            ctx->pc = 0x319C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319C40u;
            // 0x319c44: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x319C48u;
            goto label_319c48;
        }
    }
    ctx->pc = 0x319C48u;
label_319c48:
    // 0x319c48: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x319c48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_319c4c:
    // 0x319c4c: 0xc6e7000c  lwc1        $f7, 0xC($s7)
    ctx->pc = 0x319c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_319c50:
    // 0x319c50: 0x46073842  mul.s       $f1, $f7, $f7
    ctx->pc = 0x319c50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
label_319c54:
    // 0x319c54: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x319c54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_319c58:
    // 0x319c58: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x319c58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319c5c:
    // 0x319c5c: 0x0  nop
    ctx->pc = 0x319c5cu;
    // NOP
label_319c60:
    // 0x319c60: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_319c64:
    if (ctx->pc == 0x319C64u) {
        ctx->pc = 0x319C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319C60u;
        // 0x319c64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319C68u;
        goto label_319c68;
    }
    ctx->pc = 0x319C60u;
    {
        const bool branch_taken_0x319c60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x319C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319C60u;
        // 0x319c64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319c60) {
            ctx->pc = 0x319C6Cu;
            goto label_319c6c;
        }
    }
    ctx->pc = 0x319C68u;
label_319c68:
    // 0x319c68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x319c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_319c6c:
    // 0x319c6c: 0x1040020e  beqz        $v0, . + 4 + (0x20E << 2)
label_319c70:
    if (ctx->pc == 0x319C70u) {
        ctx->pc = 0x319C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319C6Cu;
        // 0x319c70: 0x7bb00310  lq          $s0, 0x310($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 784)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319C74u;
        goto label_319c74;
    }
    ctx->pc = 0x319C6Cu;
    {
        const bool branch_taken_0x319c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319C6Cu;
        // 0x319c70: 0x7bb00310  lq          $s0, 0x310($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319c6c) {
            ctx->pc = 0x31A4A8u;
            goto label_31a4a8;
        }
    }
    ctx->pc = 0x319C74u;
label_319c74:
    // 0x319c74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x319c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_319c78:
    // 0x319c78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x319c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_319c7c:
    // 0x319c7c: 0xc7868134  lwc1        $f6, -0x7ECC($gp)
    ctx->pc = 0x319c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_319c80:
    // 0x319c80: 0x46070583  div.s       $f22, $f0, $f7
    ctx->pc = 0x319c80u;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[0], ctx->f[7]); }
label_319c84:
    // 0x319c84: 0x46063982  mul.s       $f6, $f7, $f6
    ctx->pc = 0x319c84u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
label_319c88:
    // 0x319c88: 0x6ae20007  ldl         $v0, 0x7($s7)
    ctx->pc = 0x319c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_319c8c:
    // 0x319c8c: 0x6ee20000  ldr         $v0, 0x0($s7)
    ctx->pc = 0x319c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_319c90:
    // 0x319c90: 0x8ee30008  lw          $v1, 0x8($s7)
    ctx->pc = 0x319c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_319c94:
    // 0x319c94: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x319c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_319c98:
    // 0x319c98: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x319c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_319c9c:
    // 0x319c9c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x319c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_319ca0:
    // 0x319ca0: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x319ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_319ca4:
    // 0x319ca4: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x319ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_319ca8:
    // 0x319ca8: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x319ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_319cac:
    // 0x319cac: 0xb3a60013  sdl         $a2, 0x13($sp)
    ctx->pc = 0x319cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_319cb0:
    // 0x319cb0: 0xb7a6000c  sdr         $a2, 0xC($sp)
    ctx->pc = 0x319cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_319cb4:
    // 0x319cb4: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x319cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
label_319cb8:
    // 0x319cb8: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x319cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_319cbc:
    // 0x319cbc: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x319cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_319cc0:
    // 0x319cc0: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x319cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_319cc4:
    // 0x319cc4: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x319cc4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_319cc8:
    // 0x319cc8: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x319cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_319ccc:
    // 0x319ccc: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x319cccu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
label_319cd0:
    // 0x319cd0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x319cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319cd4:
    // 0x319cd4: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x319cd4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
label_319cd8:
    // 0x319cd8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x319cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319cdc:
    // 0x319cdc: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x319cdcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
label_319ce0:
    // 0x319ce0: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x319ce0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
label_319ce4:
    // 0x319ce4: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x319ce4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_319ce8:
    // 0x319ce8: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x319ce8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
label_319cec:
    // 0x319cec: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x319cecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_319cf0:
    // 0x319cf0: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x319cf0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_319cf4:
    // 0x319cf4: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x319cf4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_319cf8:
    // 0x319cf8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x319cf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_319cfc:
    // 0x319cfc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x319cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_319d00:
    // 0x319d00: 0x6ae30007  ldl         $v1, 0x7($s7)
    ctx->pc = 0x319d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_319d04:
    // 0x319d04: 0x6ee30000  ldr         $v1, 0x0($s7)
    ctx->pc = 0x319d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_319d08:
    // 0x319d08: 0x8ee40008  lw          $a0, 0x8($s7)
    ctx->pc = 0x319d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_319d0c:
    // 0x319d0c: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x319d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_319d10:
    // 0x319d10: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x319d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_319d14:
    // 0x319d14: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x319d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_319d18:
    // 0x319d18: 0x6ba70027  ldl         $a3, 0x27($sp)
    ctx->pc = 0x319d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_319d1c:
    // 0x319d1c: 0x6fa70020  ldr         $a3, 0x20($sp)
    ctx->pc = 0x319d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_319d20:
    // 0x319d20: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x319d20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_319d24:
    // 0x319d24: 0xb3a70033  sdl         $a3, 0x33($sp)
    ctx->pc = 0x319d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_319d28:
    // 0x319d28: 0xb7a7002c  sdr         $a3, 0x2C($sp)
    ctx->pc = 0x319d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_319d2c:
    // 0x319d2c: 0xafa80034  sw          $t0, 0x34($sp)
    ctx->pc = 0x319d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 8));
label_319d30:
    // 0x319d30: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x319d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_319d34:
    // 0x319d34: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x319d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_319d38:
    // 0x319d38: 0xc7a50034  lwc1        $f5, 0x34($sp)
    ctx->pc = 0x319d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_319d3c:
    // 0x319d3c: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x319d3cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
label_319d40:
    // 0x319d40: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x319d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_319d44:
    // 0x319d44: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x319d44u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
label_319d48:
    // 0x319d48: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x319d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319d4c:
    // 0x319d4c: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x319d4cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_319d50:
    // 0x319d50: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x319d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319d54:
    // 0x319d54: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x319d54u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
label_319d58:
    // 0x319d58: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x319d58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_319d5c:
    // 0x319d5c: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x319d5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_319d60:
    // 0x319d60: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x319d60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_319d64:
    // 0x319d64: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x319d64u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_319d68:
    // 0x319d68: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x319d68u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_319d6c:
    // 0x319d6c: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x319d6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_319d70:
    // 0x319d70: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x319d70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_319d74:
    // 0x319d74: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x319d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_319d78:
    // 0x319d78: 0x8fc2005c  lw          $v0, 0x5C($fp)
    ctx->pc = 0x319d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 92)));
label_319d7c:
    // 0x319d7c: 0x8fde002c  lw          $fp, 0x2C($fp)
    ctx->pc = 0x319d7cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
label_319d80:
    // 0x319d80: 0x8c4b0014  lw          $t3, 0x14($v0)
    ctx->pc = 0x319d80u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_319d84:
    // 0x319d84: 0xafbe0244  sw          $fp, 0x244($sp)
    ctx->pc = 0x319d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 30));
label_319d88:
    // 0x319d88: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x319d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319d8c:
    // 0x319d8c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x319d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319d90:
    // 0x319d90: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x319d90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319d94:
    // 0x319d94: 0x0  nop
    ctx->pc = 0x319d94u;
    // NOP
label_319d98:
    // 0x319d98: 0x4500006b  bc1f        . + 4 + (0x6B << 2)
label_319d9c:
    if (ctx->pc == 0x319D9Cu) {
        ctx->pc = 0x319D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319D98u;
        // 0x319d9c: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x319DA0u;
        goto label_319da0;
    }
    ctx->pc = 0x319D98u;
    {
        const bool branch_taken_0x319d98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x319D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319D98u;
        // 0x319d9c: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x319d98) {
            ctx->pc = 0x319F48u;
            goto label_319f48;
        }
    }
    ctx->pc = 0x319DA0u;
label_319da0:
    // 0x319da0: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x319da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319da4:
    // 0x319da4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x319da4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319da8:
    // 0x319da8: 0x0  nop
    ctx->pc = 0x319da8u;
    // NOP
label_319dac:
    // 0x319dac: 0x45000066  bc1f        . + 4 + (0x66 << 2)
label_319db0:
    if (ctx->pc == 0x319DB0u) {
        ctx->pc = 0x319DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319DACu;
        // 0x319db0: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x319DB4u;
        goto label_319db4;
    }
    ctx->pc = 0x319DACu;
    {
        const bool branch_taken_0x319dac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x319DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319DACu;
        // 0x319db0: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x319dac) {
            ctx->pc = 0x319F48u;
            goto label_319f48;
        }
    }
    ctx->pc = 0x319DB4u;
label_319db4:
    // 0x319db4: 0xc6810018  lwc1        $f1, 0x18($s4)
    ctx->pc = 0x319db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319db8:
    // 0x319db8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x319db8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319dbc:
    // 0x319dbc: 0x0  nop
    ctx->pc = 0x319dbcu;
    // NOP
label_319dc0:
    // 0x319dc0: 0x45000061  bc1f        . + 4 + (0x61 << 2)
label_319dc4:
    if (ctx->pc == 0x319DC4u) {
        ctx->pc = 0x319DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319DC0u;
        // 0x319dc4: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x319DC8u;
        goto label_319dc8;
    }
    ctx->pc = 0x319DC0u;
    {
        const bool branch_taken_0x319dc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x319DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319DC0u;
        // 0x319dc4: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x319dc0) {
            ctx->pc = 0x319F48u;
            goto label_319f48;
        }
    }
    ctx->pc = 0x319DC8u;
label_319dc8:
    // 0x319dc8: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x319dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319dcc:
    // 0x319dcc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x319dccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319dd0:
    // 0x319dd0: 0x0  nop
    ctx->pc = 0x319dd0u;
    // NOP
label_319dd4:
    // 0x319dd4: 0x4500005c  bc1f        . + 4 + (0x5C << 2)
label_319dd8:
    if (ctx->pc == 0x319DD8u) {
        ctx->pc = 0x319DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319DD4u;
        // 0x319dd8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x319DDCu;
        goto label_319ddc;
    }
    ctx->pc = 0x319DD4u;
    {
        const bool branch_taken_0x319dd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x319DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319DD4u;
        // 0x319dd8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x319dd4) {
            ctx->pc = 0x319F48u;
            goto label_319f48;
        }
    }
    ctx->pc = 0x319DDCu;
label_319ddc:
    // 0x319ddc: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x319ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319de0:
    // 0x319de0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x319de0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319de4:
    // 0x319de4: 0x0  nop
    ctx->pc = 0x319de4u;
    // NOP
label_319de8:
    // 0x319de8: 0x45000057  bc1f        . + 4 + (0x57 << 2)
label_319dec:
    if (ctx->pc == 0x319DECu) {
        ctx->pc = 0x319DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319DE8u;
        // 0x319dec: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x319DF0u;
        goto label_319df0;
    }
    ctx->pc = 0x319DE8u;
    {
        const bool branch_taken_0x319de8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x319DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319DE8u;
        // 0x319dec: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x319de8) {
            ctx->pc = 0x319F48u;
            goto label_319f48;
        }
    }
    ctx->pc = 0x319DF0u;
label_319df0:
    // 0x319df0: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x319df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319df4:
    // 0x319df4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x319df4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319df8:
    // 0x319df8: 0x0  nop
    ctx->pc = 0x319df8u;
    // NOP
label_319dfc:
    // 0x319dfc: 0x45000052  bc1f        . + 4 + (0x52 << 2)
label_319e00:
    if (ctx->pc == 0x319E00u) {
        ctx->pc = 0x319E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319DFCu;
        // 0x319e00: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319E04u;
        goto label_319e04;
    }
    ctx->pc = 0x319DFCu;
    {
        const bool branch_taken_0x319dfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x319E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319DFCu;
        // 0x319e00: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319dfc) {
            ctx->pc = 0x319F48u;
            goto label_319f48;
        }
    }
    ctx->pc = 0x319E04u;
label_319e04:
    // 0x319e04: 0xa7a00076  sh          $zero, 0x76($sp)
    ctx->pc = 0x319e04u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 118), (uint16_t)GPR_U32(ctx, 0));
label_319e08:
    // 0x319e08: 0xa3a20075  sb          $v0, 0x75($sp)
    ctx->pc = 0x319e08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 117), (uint8_t)GPR_U32(ctx, 2));
label_319e0c:
    // 0x319e0c: 0xafb40040  sw          $s4, 0x40($sp)
    ctx->pc = 0x319e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 20));
label_319e10:
    // 0x319e10: 0x9682001e  lhu         $v0, 0x1E($s4)
    ctx->pc = 0x319e10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 30)));
label_319e14:
    // 0x319e14: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_319e18:
    if (ctx->pc == 0x319E18u) {
        ctx->pc = 0x319E1Cu;
        goto label_319e1c;
    }
    ctx->pc = 0x319E14u;
    {
        const bool branch_taken_0x319e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x319e14) {
            ctx->pc = 0x319E28u;
            goto label_319e28;
        }
    }
    ctx->pc = 0x319E1Cu;
label_319e1c:
    // 0x319e1c: 0x9282001c  lbu         $v0, 0x1C($s4)
    ctx->pc = 0x319e1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 28)));
label_319e20:
    // 0x319e20: 0xa3a20075  sb          $v0, 0x75($sp)
    ctx->pc = 0x319e20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 117), (uint8_t)GPR_U32(ctx, 2));
label_319e24:
    // 0x319e24: 0x0  nop
    ctx->pc = 0x319e24u;
    // NOP
label_319e28:
    // 0x319e28: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x319e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_319e2c:
    // 0x319e2c: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x319e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_319e30:
    // 0x319e30: 0x6ba5000f  ldl         $a1, 0xF($sp)
    ctx->pc = 0x319e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_319e34:
    // 0x319e34: 0x6fa50008  ldr         $a1, 0x8($sp)
    ctx->pc = 0x319e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_319e38:
    // 0x319e38: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x319e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_319e3c:
    // 0x319e3c: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x319e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_319e40:
    // 0x319e40: 0xb3a4004b  sdl         $a0, 0x4B($sp)
    ctx->pc = 0x319e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_319e44:
    // 0x319e44: 0xb7a40044  sdr         $a0, 0x44($sp)
    ctx->pc = 0x319e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_319e48:
    // 0x319e48: 0xb3a50053  sdl         $a1, 0x53($sp)
    ctx->pc = 0x319e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_319e4c:
    // 0x319e4c: 0xb7a5004c  sdr         $a1, 0x4C($sp)
    ctx->pc = 0x319e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_319e50:
    // 0x319e50: 0xb3a6005b  sdl         $a2, 0x5B($sp)
    ctx->pc = 0x319e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_319e54:
    // 0x319e54: 0xb7a60054  sdr         $a2, 0x54($sp)
    ctx->pc = 0x319e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_319e58:
    // 0x319e58: 0x27a20074  addiu       $v0, $sp, 0x74
    ctx->pc = 0x319e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_319e5c:
    // 0x319e5c: 0x6ba80027  ldl         $t0, 0x27($sp)
    ctx->pc = 0x319e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_319e60:
    // 0x319e60: 0x6fa80020  ldr         $t0, 0x20($sp)
    ctx->pc = 0x319e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_319e64:
    // 0x319e64: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x319e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_319e68:
    // 0x319e68: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x319e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_319e6c:
    // 0x319e6c: 0x6ba40037  ldl         $a0, 0x37($sp)
    ctx->pc = 0x319e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_319e70:
    // 0x319e70: 0x6fa40030  ldr         $a0, 0x30($sp)
    ctx->pc = 0x319e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_319e74:
    // 0x319e74: 0xb3a80063  sdl         $t0, 0x63($sp)
    ctx->pc = 0x319e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_319e78:
    // 0x319e78: 0xb7a8005c  sdr         $t0, 0x5C($sp)
    ctx->pc = 0x319e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_319e7c:
    // 0x319e7c: 0xb3a3006b  sdl         $v1, 0x6B($sp)
    ctx->pc = 0x319e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_319e80:
    // 0x319e80: 0xb7a30064  sdr         $v1, 0x64($sp)
    ctx->pc = 0x319e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_319e84:
    // 0x319e84: 0xb3a40073  sdl         $a0, 0x73($sp)
    ctx->pc = 0x319e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_319e88:
    // 0x319e88: 0xb7a4006c  sdr         $a0, 0x6C($sp)
    ctx->pc = 0x319e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_319e8c:
    // 0x319e8c: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x319e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_319e90:
    // 0x319e90: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x319e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319e94:
    // 0x319e94: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x319e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319e98:
    // 0x319e98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x319e98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319e9c:
    // 0x319e9c: 0x0  nop
    ctx->pc = 0x319e9cu;
    // NOP
label_319ea0:
    // 0x319ea0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_319ea4:
    if (ctx->pc == 0x319EA4u) {
        ctx->pc = 0x319EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319EA0u;
        // 0x319ea4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319EA8u;
        goto label_319ea8;
    }
    ctx->pc = 0x319EA0u;
    {
        const bool branch_taken_0x319ea0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x319EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319EA0u;
        // 0x319ea4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319ea0) {
            ctx->pc = 0x319EB0u;
            goto label_319eb0;
        }
    }
    ctx->pc = 0x319EA8u;
label_319ea8:
    // 0x319ea8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x319ea8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_319eac:
    // 0x319eac: 0x0  nop
    ctx->pc = 0x319eacu;
    // NOP
label_319eb0:
    // 0x319eb0: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x319eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319eb4:
    // 0x319eb4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x319eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319eb8:
    // 0x319eb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x319eb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319ebc:
    // 0x319ebc: 0x0  nop
    ctx->pc = 0x319ebcu;
    // NOP
label_319ec0:
    // 0x319ec0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_319ec4:
    if (ctx->pc == 0x319EC4u) {
        ctx->pc = 0x319EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319EC0u;
        // 0x319ec4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319EC8u;
        goto label_319ec8;
    }
    ctx->pc = 0x319EC0u;
    {
        const bool branch_taken_0x319ec0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x319EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319EC0u;
        // 0x319ec4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319ec0) {
            ctx->pc = 0x319ECCu;
            goto label_319ecc;
        }
    }
    ctx->pc = 0x319EC8u;
label_319ec8:
    // 0x319ec8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x319ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_319ecc:
    // 0x319ecc: 0xc6810018  lwc1        $f1, 0x18($s4)
    ctx->pc = 0x319eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319ed0:
    // 0x319ed0: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x319ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319ed4:
    // 0x319ed4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x319ed4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319ed8:
    // 0x319ed8: 0x0  nop
    ctx->pc = 0x319ed8u;
    // NOP
label_319edc:
    // 0x319edc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_319ee0:
    if (ctx->pc == 0x319EE0u) {
        ctx->pc = 0x319EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319EDCu;
        // 0x319ee0: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x319EE4u;
        goto label_319ee4;
    }
    ctx->pc = 0x319EDCu;
    {
        const bool branch_taken_0x319edc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x319edc) {
            ctx->pc = 0x319EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319EDCu;
            // 0x319ee0: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x319EE4u;
            goto label_319ee4;
        }
    }
    ctx->pc = 0x319EE4u;
label_319ee4:
    // 0x319ee4: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x319ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319ee8:
    // 0x319ee8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x319ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319eec:
    // 0x319eec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x319eecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319ef0:
    // 0x319ef0: 0x0  nop
    ctx->pc = 0x319ef0u;
    // NOP
label_319ef4:
    // 0x319ef4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_319ef8:
    if (ctx->pc == 0x319EF8u) {
        ctx->pc = 0x319EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319EF4u;
        // 0x319ef8: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x319EFCu;
        goto label_319efc;
    }
    ctx->pc = 0x319EF4u;
    {
        const bool branch_taken_0x319ef4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x319ef4) {
            ctx->pc = 0x319EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319EF4u;
            // 0x319ef8: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x319EFCu;
            goto label_319efc;
        }
    }
    ctx->pc = 0x319EFCu;
label_319efc:
    // 0x319efc: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x319efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319f00:
    // 0x319f00: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x319f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319f04:
    // 0x319f04: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x319f04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319f08:
    // 0x319f08: 0x0  nop
    ctx->pc = 0x319f08u;
    // NOP
label_319f0c:
    // 0x319f0c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_319f10:
    if (ctx->pc == 0x319F10u) {
        ctx->pc = 0x319F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F0Cu;
        // 0x319f10: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x319F14u;
        goto label_319f14;
    }
    ctx->pc = 0x319F0Cu;
    {
        const bool branch_taken_0x319f0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x319f0c) {
            ctx->pc = 0x319F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319F0Cu;
            // 0x319f10: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x319F14u;
            goto label_319f14;
        }
    }
    ctx->pc = 0x319F14u;
label_319f14:
    // 0x319f14: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x319f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_319f18:
    // 0x319f18: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x319f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_319f1c:
    // 0x319f1c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x319f1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_319f20:
    // 0x319f20: 0x0  nop
    ctx->pc = 0x319f20u;
    // NOP
label_319f24:
    // 0x319f24: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_319f28:
    if (ctx->pc == 0x319F28u) {
        ctx->pc = 0x319F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F24u;
        // 0x319f28: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319F2Cu;
        goto label_319f2c;
    }
    ctx->pc = 0x319F24u;
    {
        const bool branch_taken_0x319f24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x319F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F24u;
        // 0x319f28: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f24) {
            ctx->pc = 0x319F30u;
            goto label_319f30;
        }
    }
    ctx->pc = 0x319F2Cu;
label_319f2c:
    // 0x319f2c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x319f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_319f30:
    // 0x319f30: 0x27a20084  addiu       $v0, $sp, 0x84
    ctx->pc = 0x319f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_319f34:
    // 0x319f34: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x319f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
label_319f38:
    // 0x319f38: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x319f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
label_319f3c:
    // 0x319f3c: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x319f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_319f40:
    // 0x319f40: 0x10000004  b           . + 4 + (0x4 << 2)
label_319f44:
    if (ctx->pc == 0x319F44u) {
        ctx->pc = 0x319F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F40u;
        // 0x319f44: 0xafa60258  sw          $a2, 0x258($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319F48u;
        goto label_319f48;
    }
    ctx->pc = 0x319F40u;
    {
        const bool branch_taken_0x319f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F40u;
        // 0x319f44: 0xafa60258  sw          $a2, 0x258($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f40) {
            ctx->pc = 0x319F54u;
            goto label_319f54;
        }
    }
    ctx->pc = 0x319F48u;
label_319f48:
    // 0x319f48: 0x27a2007c  addiu       $v0, $sp, 0x7C
    ctx->pc = 0x319f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_319f4c:
    // 0x319f4c: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x319f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
label_319f50:
    // 0x319f50: 0xafa20258  sw          $v0, 0x258($sp)
    ctx->pc = 0x319f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 2));
label_319f54:
    // 0x319f54: 0x8fa30184  lw          $v1, 0x184($sp)
    ctx->pc = 0x319f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_319f58:
    // 0x319f58: 0x8fa70258  lw          $a3, 0x258($sp)
    ctx->pc = 0x319f58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_319f5c:
    // 0x319f5c: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x319f5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_319f60:
    // 0x319f60: 0x10400150  beqz        $v0, . + 4 + (0x150 << 2)
label_319f64:
    if (ctx->pc == 0x319F64u) {
        ctx->pc = 0x319F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F60u;
        // 0x319f64: 0x27a80044  addiu       $t0, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319F68u;
        goto label_319f68;
    }
    ctx->pc = 0x319F60u;
    {
        const bool branch_taken_0x319f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F60u;
        // 0x319f64: 0x27a80044  addiu       $t0, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f60) {
            ctx->pc = 0x31A4A4u;
            goto label_31a4a4;
        }
    }
    ctx->pc = 0x319F68u;
label_319f68:
    // 0x319f68: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x319f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_319f6c:
    // 0x319f6c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x319f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_319f70:
    // 0x319f70: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x319f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_319f74:
    // 0x319f74: 0xafa80248  sw          $t0, 0x248($sp)
    ctx->pc = 0x319f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 8));
label_319f78:
    // 0x319f78: 0x241e00ff  addiu       $fp, $zero, 0xFF
    ctx->pc = 0x319f78u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_319f7c:
    // 0x319f7c: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x319f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
label_319f80:
    // 0x319f80: 0xafa40250  sw          $a0, 0x250($sp)
    ctx->pc = 0x319f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 4));
label_319f84:
    // 0x319f84: 0xafa50254  sw          $a1, 0x254($sp)
    ctx->pc = 0x319f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 5));
label_319f88:
    // 0x319f88: 0x8c64fff8  lw          $a0, -0x8($v1)
    ctx->pc = 0x319f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_319f8c:
    // 0x319f8c: 0x0  nop
    ctx->pc = 0x319f8cu;
    // NOP
label_319f90:
    // 0x319f90: 0x2465fff8  addiu       $a1, $v1, -0x8
    ctx->pc = 0x319f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_319f94:
    // 0x319f94: 0x10000067  b           . + 4 + (0x67 << 2)
label_319f98:
    if (ctx->pc == 0x319F98u) {
        ctx->pc = 0x319F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F94u;
        // 0x319f98: 0xafa50184  sw          $a1, 0x184($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319F9Cu;
        goto label_319f9c;
    }
    ctx->pc = 0x319F94u;
    {
        const bool branch_taken_0x319f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319F94u;
        // 0x319f98: 0xafa50184  sw          $a1, 0x184($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319f94) {
            ctx->pc = 0x31A134u;
            goto label_31a134;
        }
    }
    ctx->pc = 0x319F9Cu;
label_319f9c:
    // 0x319f9c: 0x0  nop
    ctx->pc = 0x319f9cu;
    // NOP
label_319fa0:
    // 0x319fa0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x319fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_319fa4:
    // 0x319fa4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_319fa8:
    if (ctx->pc == 0x319FA8u) {
        ctx->pc = 0x319FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319FA4u;
        // 0x319fa8: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319FACu;
        goto label_319fac;
    }
    ctx->pc = 0x319FA4u;
    {
        const bool branch_taken_0x319fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319FA4u;
        // 0x319fa8: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319fa4) {
            ctx->pc = 0x31A054u;
            goto label_31a054;
        }
    }
    ctx->pc = 0x319FACu;
label_319fac:
    // 0x319fac: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x319facu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_319fb0:
    // 0x319fb0: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x319fb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_319fb4:
    // 0x319fb4: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x319fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_319fb8:
    // 0x319fb8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x319fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_319fbc:
    // 0x319fbc: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x319fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_319fc0:
    // 0x319fc0: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x319fc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_319fc4:
    // 0x319fc4: 0x145e000b  bne         $v0, $fp, . + 4 + (0xB << 2)
label_319fc8:
    if (ctx->pc == 0x319FC8u) {
        ctx->pc = 0x319FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319FC4u;
        // 0x319fc8: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319FCCu;
        goto label_319fcc;
    }
    ctx->pc = 0x319FC4u;
    {
        const bool branch_taken_0x319fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x319FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319FC4u;
        // 0x319fc8: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319fc4) {
            ctx->pc = 0x319FF4u;
            goto label_319ff4;
        }
    }
    ctx->pc = 0x319FCCu;
label_319fcc:
    // 0x319fcc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x319fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_319fd0:
    // 0x319fd0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x319fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_319fd4:
    // 0x319fd4: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x319fd4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_319fd8:
    // 0x319fd8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x319fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_319fdc:
    // 0x319fdc: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x319fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_319fe0:
    // 0x319fe0: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x319fe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_319fe4:
    // 0x319fe4: 0x0  nop
    ctx->pc = 0x319fe4u;
    // NOP
label_319fe8:
    // 0x319fe8: 0x0  nop
    ctx->pc = 0x319fe8u;
    // NOP
label_319fec:
    // 0x319fec: 0x5066fffa  beql        $v1, $a2, . + 4 + (-0x6 << 2)
label_319ff0:
    if (ctx->pc == 0x319FF0u) {
        ctx->pc = 0x319FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319FECu;
        // 0x319ff0: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x319FF4u;
        goto label_319ff4;
    }
    ctx->pc = 0x319FECu;
    {
        const bool branch_taken_0x319fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x319fec) {
            ctx->pc = 0x319FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x319FECu;
            // 0x319ff0: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319fd8;
        }
    }
    ctx->pc = 0x319FF4u;
label_319ff4:
    // 0x319ff4: 0x24e50008  addiu       $a1, $a3, 0x8
    ctx->pc = 0x319ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_319ff8:
    // 0x319ff8: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x319ff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_319ffc:
    // 0x319ffc: 0x145e000b  bne         $v0, $fp, . + 4 + (0xB << 2)
label_31a000:
    if (ctx->pc == 0x31A000u) {
        ctx->pc = 0x31A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319FFCu;
        // 0x31a000: 0x94860002  lhu         $a2, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A004u;
        goto label_31a004;
    }
    ctx->pc = 0x319FFCu;
    {
        const bool branch_taken_0x319ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x31A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319FFCu;
        // 0x31a000: 0x94860002  lhu         $a2, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319ffc) {
            ctx->pc = 0x31A02Cu;
            goto label_31a02c;
        }
    }
    ctx->pc = 0x31A004u;
label_31a004:
    // 0x31a004: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x31a004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_31a008:
    // 0x31a008: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x31a008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_31a00c:
    // 0x31a00c: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x31a00cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_31a010:
    // 0x31a010: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31a010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_31a014:
    // 0x31a014: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x31a014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_31a018:
    // 0x31a018: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x31a018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_31a01c:
    // 0x31a01c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x31a01cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_31a020:
    // 0x31a020: 0x0  nop
    ctx->pc = 0x31a020u;
    // NOP
label_31a024:
    // 0x31a024: 0x5067fffa  beql        $v1, $a3, . + 4 + (-0x6 << 2)
label_31a028:
    if (ctx->pc == 0x31A028u) {
        ctx->pc = 0x31A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A024u;
        // 0x31a028: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A02Cu;
        goto label_31a02c;
    }
    ctx->pc = 0x31A024u;
    {
        const bool branch_taken_0x31a024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x31a024) {
            ctx->pc = 0x31A028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A024u;
            // 0x31a028: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a010;
        }
    }
    ctx->pc = 0x31A02Cu;
label_31a02c:
    // 0x31a02c: 0xa7a60190  sh          $a2, 0x190($sp)
    ctx->pc = 0x31a02cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 400), (uint16_t)GPR_U32(ctx, 6));
label_31a030:
    // 0x31a030: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x31a030u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_31a034:
    // 0x31a034: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x31a034u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_31a038:
    // 0x31a038: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31a038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31a03c:
    // 0x31a03c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x31a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_31a040:
    // 0x31a040: 0xa7a20192  sh          $v0, 0x192($sp)
    ctx->pc = 0x31a040u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 402), (uint16_t)GPR_U32(ctx, 2));
label_31a044:
    // 0x31a044: 0x10000043  b           . + 4 + (0x43 << 2)
label_31a048:
    if (ctx->pc == 0x31A048u) {
        ctx->pc = 0x31A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A044u;
        // 0x31a048: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A04Cu;
        goto label_31a04c;
    }
    ctx->pc = 0x31A044u;
    {
        const bool branch_taken_0x31a044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A044u;
        // 0x31a048: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a044) {
            ctx->pc = 0x31A154u;
            goto label_31a154;
        }
    }
    ctx->pc = 0x31A04Cu;
label_31a04c:
    // 0x31a04c: 0x10000037  b           . + 4 + (0x37 << 2)
label_31a050:
    if (ctx->pc == 0x31A050u) {
        ctx->pc = 0x31A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A04Cu;
        // 0x31a050: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A054u;
        goto label_31a054;
    }
    ctx->pc = 0x31A04Cu;
    {
        const bool branch_taken_0x31a04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A04Cu;
        // 0x31a050: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a04c) {
            ctx->pc = 0x31A12Cu;
            goto label_31a12c;
        }
    }
    ctx->pc = 0x31A054u;
label_31a054:
    // 0x31a054: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x31a054u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_31a058:
    // 0x31a058: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x31a058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_31a05c:
    // 0x31a05c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_31a060:
    // 0x31a060: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x31a060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_31a064:
    // 0x31a064: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x31a064u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_31a068:
    // 0x31a068: 0x3065000c  andi        $a1, $v1, 0xC
    ctx->pc = 0x31a068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
label_31a06c:
    // 0x31a06c: 0x8fa60248  lw          $a2, 0x248($sp)
    ctx->pc = 0x31a06cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_31a070:
    // 0x31a070: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x31a070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_31a074:
    // 0x31a074: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x31a074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a078:
    // 0x31a078: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x31a078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a07c:
    // 0x31a07c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31a07cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31a080:
    // 0x31a080: 0x0  nop
    ctx->pc = 0x31a080u;
    // NOP
label_31a084:
    // 0x31a084: 0x4501fff1  bc1t        . + 4 + (-0xF << 2)
label_31a088:
    if (ctx->pc == 0x31A088u) {
        ctx->pc = 0x31A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A084u;
        // 0x31a088: 0x8fa8024c  lw          $t0, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A08Cu;
        goto label_31a08c;
    }
    ctx->pc = 0x31A084u;
    {
        const bool branch_taken_0x31a084 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A084u;
        // 0x31a088: 0x8fa8024c  lw          $t0, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a084) {
            ctx->pc = 0x31A04Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a04c;
        }
    }
    ctx->pc = 0x31A08Cu;
label_31a08c:
    // 0x31a08c: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x31a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_31a090:
    // 0x31a090: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x31a090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a094:
    // 0x31a094: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x31a094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_31a098:
    // 0x31a098: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x31a098u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_31a09c:
    // 0x31a09c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31a09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a0a0:
    // 0x31a0a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31a0a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31a0a4:
    // 0x31a0a4: 0x0  nop
    ctx->pc = 0x31a0a4u;
    // NOP
label_31a0a8:
    // 0x31a0a8: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_31a0ac:
    if (ctx->pc == 0x31A0ACu) {
        ctx->pc = 0x31A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A0A8u;
        // 0x31a0ac: 0x8fa30250  lw          $v1, 0x250($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A0B0u;
        goto label_31a0b0;
    }
    ctx->pc = 0x31A0A8u;
    {
        const bool branch_taken_0x31a0a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A0A8u;
        // 0x31a0ac: 0x8fa30250  lw          $v1, 0x250($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a0a8) {
            ctx->pc = 0x31A12Cu;
            goto label_31a12c;
        }
    }
    ctx->pc = 0x31A0B0u;
label_31a0b0:
    // 0x31a0b0: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x31a0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
label_31a0b4:
    // 0x31a0b4: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x31a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_31a0b8:
    // 0x31a0b8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31a0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a0bc:
    // 0x31a0bc: 0x24e30008  addiu       $v1, $a3, 0x8
    ctx->pc = 0x31a0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_31a0c0:
    // 0x31a0c0: 0x8c66fffc  lw          $a2, -0x4($v1)
    ctx->pc = 0x31a0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_31a0c4:
    // 0x31a0c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31a0c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31a0c8:
    // 0x31a0c8: 0xafa30184  sw          $v1, 0x184($sp)
    ctx->pc = 0x31a0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 3));
label_31a0cc:
    // 0x31a0cc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_31a0d0:
    if (ctx->pc == 0x31A0D0u) {
        ctx->pc = 0x31A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A0CCu;
        // 0x31a0d0: 0xac660004  sw          $a2, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A0D4u;
        goto label_31a0d4;
    }
    ctx->pc = 0x31A0CCu;
    {
        const bool branch_taken_0x31a0cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A0CCu;
        // 0x31a0d0: 0xac660004  sw          $a2, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a0cc) {
            ctx->pc = 0x31A0F0u;
            goto label_31a0f0;
        }
    }
    ctx->pc = 0x31A0D4u;
label_31a0d4:
    // 0x31a0d4: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x31a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_31a0d8:
    // 0x31a0d8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x31a0d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31a0dc:
    // 0x31a0dc: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x31a0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_31a0e0:
    // 0x31a0e0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x31a0e0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_31a0e4:
    // 0x31a0e4: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x31a0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_31a0e8:
    // 0x31a0e8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x31a0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_31a0ec:
    // 0x31a0ec: 0x0  nop
    ctx->pc = 0x31a0ecu;
    // NOP
label_31a0f0:
    // 0x31a0f0: 0x8fa80254  lw          $t0, 0x254($sp)
    ctx->pc = 0x31a0f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
label_31a0f4:
    // 0x31a0f4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x31a0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a0f8:
    // 0x31a0f8: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x31a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_31a0fc:
    // 0x31a0fc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31a0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a100:
    // 0x31a100: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31a100u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31a104:
    // 0x31a104: 0x0  nop
    ctx->pc = 0x31a104u;
    // NOP
label_31a108:
    // 0x31a108: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_31a10c:
    if (ctx->pc == 0x31A10Cu) {
        ctx->pc = 0x31A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A108u;
        // 0x31a10c: 0x8fa20184  lw          $v0, 0x184($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A110u;
        goto label_31a110;
    }
    ctx->pc = 0x31A108u;
    {
        const bool branch_taken_0x31a108 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A108u;
        // 0x31a10c: 0x8fa20184  lw          $v0, 0x184($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a108) {
            ctx->pc = 0x31A12Cu;
            goto label_31a12c;
        }
    }
    ctx->pc = 0x31A110u;
label_31a110:
    // 0x31a110: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31a110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31a114:
    // 0x31a114: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x31a114u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_31a118:
    // 0x31a118: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x31a118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_31a11c:
    // 0x31a11c: 0x8c44fffc  lw          $a0, -0x4($v0)
    ctx->pc = 0x31a11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_31a120:
    // 0x31a120: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x31a120u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_31a124:
    // 0x31a124: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x31a124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_31a128:
    // 0x31a128: 0xac44fffc  sw          $a0, -0x4($v0)
    ctx->pc = 0x31a128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 4));
label_31a12c:
    // 0x31a12c: 0x8fa50184  lw          $a1, 0x184($sp)
    ctx->pc = 0x31a12cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_31a130:
    // 0x31a130: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x31a130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_31a134:
    // 0x31a134: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x31a134u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_31a138:
    // 0x31a138: 0x105eff99  beq         $v0, $fp, . + 4 + (-0x67 << 2)
label_31a13c:
    if (ctx->pc == 0x31A13Cu) {
        ctx->pc = 0x31A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A138u;
        // 0x31a13c: 0x8fa70184  lw          $a3, 0x184($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A140u;
        goto label_31a140;
    }
    ctx->pc = 0x31A138u;
    {
        const bool branch_taken_0x31a138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x31A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A138u;
        // 0x31a13c: 0x8fa70184  lw          $a3, 0x184($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a138) {
            ctx->pc = 0x319FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319fa0;
        }
    }
    ctx->pc = 0x31A140u;
label_31a140:
    // 0x31a140: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x31a140u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_31a144:
    // 0x31a144: 0x8cb60004  lw          $s6, 0x4($a1)
    ctx->pc = 0x31a144u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_31a148:
    // 0x31a148: 0xa7a30190  sh          $v1, 0x190($sp)
    ctx->pc = 0x31a148u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 400), (uint16_t)GPR_U32(ctx, 3));
label_31a14c:
    // 0x31a14c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x31a14cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_31a150:
    // 0x31a150: 0xa7a20192  sh          $v0, 0x192($sp)
    ctx->pc = 0x31a150u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 402), (uint16_t)GPR_U32(ctx, 2));
label_31a154:
    // 0x31a154: 0x97b30190  lhu         $s3, 0x190($sp)
    ctx->pc = 0x31a154u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 400)));
label_31a158:
    // 0x31a158: 0x97a20192  lhu         $v0, 0x192($sp)
    ctx->pc = 0x31a158u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 402)));
label_31a15c:
    // 0x31a15c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x31a15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_31a160:
    // 0x31a160: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x31a160u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_31a164:
    // 0x31a164: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
label_31a168:
    if (ctx->pc == 0x31A168u) {
        ctx->pc = 0x31A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A164u;
        // 0x31a168: 0x8fa30184  lw          $v1, 0x184($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A16Cu;
        goto label_31a16c;
    }
    ctx->pc = 0x31A164u;
    {
        const bool branch_taken_0x31a164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A164u;
        // 0x31a168: 0x8fa30184  lw          $v1, 0x184($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a164) {
            ctx->pc = 0x31A3ACu;
            goto label_31a3ac;
        }
    }
    ctx->pc = 0x31A16Cu;
label_31a16c:
    // 0x31a16c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x31a16cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_31a170:
    // 0x31a170: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x31a170u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_31a174:
    // 0x31a174: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31a174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_31a178:
    // 0x31a178: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x31a178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_31a17c:
    // 0x31a17c: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x31a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_31a180:
    // 0x31a180: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_31a184:
    if (ctx->pc == 0x31A184u) {
        ctx->pc = 0x31A184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A180u;
        // 0x31a184: 0x131040  sll         $v0, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A188u;
        goto label_31a188;
    }
    ctx->pc = 0x31A180u;
    {
        const bool branch_taken_0x31a180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A180u;
        // 0x31a184: 0x131040  sll         $v0, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a180) {
            ctx->pc = 0x31A194u;
            goto label_31a194;
        }
    }
    ctx->pc = 0x31A188u;
label_31a188:
    // 0x31a188: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31a188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31a18c:
    // 0x31a18c: 0x10000002  b           . + 4 + (0x2 << 2)
label_31a190:
    if (ctx->pc == 0x31A190u) {
        ctx->pc = 0x31A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A18Cu;
        // 0x31a190: 0x94550000  lhu         $s5, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A194u;
        goto label_31a194;
    }
    ctx->pc = 0x31A18Cu;
    {
        const bool branch_taken_0x31a18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A18Cu;
        // 0x31a190: 0x94550000  lhu         $s5, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a18c) {
            ctx->pc = 0x31A198u;
            goto label_31a198;
        }
    }
    ctx->pc = 0x31A194u;
label_31a194:
    // 0x31a194: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x31a194u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31a198:
    // 0x31a198: 0x8fa50244  lw          $a1, 0x244($sp)
    ctx->pc = 0x31a198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_31a19c:
    // 0x31a19c: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x31a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_31a1a0:
    // 0x31a1a0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x31a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_31a1a4:
    // 0x31a1a4: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x31a1a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_31a1a8:
    // 0x31a1a8: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x31a1a8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31a1ac:
    // 0x31a1ac: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x31a1acu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_31a1b0:
    // 0x31a1b0: 0x6a1018  mult        $v0, $v1, $t2
    ctx->pc = 0x31a1b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_31a1b4:
    // 0x31a1b4: 0x4b9021  addu        $s2, $v0, $t3
    ctx->pc = 0x31a1b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_31a1b8:
    // 0x31a1b8: 0x8a1018  mult        $v0, $a0, $t2
    ctx->pc = 0x31a1b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_31a1bc:
    // 0x31a1bc: 0x4b8021  addu        $s0, $v0, $t3
    ctx->pc = 0x31a1bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_31a1c0:
    // 0x31a1c0: 0xaa1018  mult        $v0, $a1, $t2
    ctx->pc = 0x31a1c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_31a1c4:
    // 0x31a1c4: 0x16c0004c  bnez        $s6, . + 4 + (0x4C << 2)
label_31a1c8:
    if (ctx->pc == 0x31A1C8u) {
        ctx->pc = 0x31A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A1C4u;
        // 0x31a1c8: 0x4b8821  addu        $s1, $v0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A1CCu;
        goto label_31a1cc;
    }
    ctx->pc = 0x31A1C4u;
    {
        const bool branch_taken_0x31a1c4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A1C4u;
        // 0x31a1c8: 0x4b8821  addu        $s1, $v0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a1c4) {
            ctx->pc = 0x31A2F8u;
            goto label_31a2f8;
        }
    }
    ctx->pc = 0x31A1CCu;
label_31a1cc:
    // 0x31a1cc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x31a1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a1d0:
    // 0x31a1d0: 0xc6270000  lwc1        $f7, 0x0($s1)
    ctx->pc = 0x31a1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_31a1d4:
    // 0x31a1d4: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x31a1d4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_31a1d8:
    // 0x31a1d8: 0xe7a701e0  swc1        $f7, 0x1E0($sp)
    ctx->pc = 0x31a1d8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_31a1dc:
    // 0x31a1dc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x31a1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a1e0:
    // 0x31a1e0: 0xc6260004  lwc1        $f6, 0x4($s1)
    ctx->pc = 0x31a1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_31a1e4:
    // 0x31a1e4: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x31a1e4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_31a1e8:
    // 0x31a1e8: 0xe7a601e4  swc1        $f6, 0x1E4($sp)
    ctx->pc = 0x31a1e8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
label_31a1ec:
    // 0x31a1ec: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x31a1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_31a1f0:
    // 0x31a1f0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x31a1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a1f4:
    // 0x31a1f4: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x31a1f4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_31a1f8:
    // 0x31a1f8: 0xe7a501e8  swc1        $f5, 0x1E8($sp)
    ctx->pc = 0x31a1f8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_31a1fc:
    // 0x31a1fc: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x31a1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31a200:
    // 0x31a200: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x31a200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a204:
    // 0x31a204: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x31a204u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_31a208:
    // 0x31a208: 0xe7a201f0  swc1        $f2, 0x1F0($sp)
    ctx->pc = 0x31a208u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_31a20c:
    // 0x31a20c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x31a20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a210:
    // 0x31a210: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x31a210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_31a214:
    // 0x31a214: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x31a214u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_31a218:
    // 0x31a218: 0xe7a401f4  swc1        $f4, 0x1F4($sp)
    ctx->pc = 0x31a218u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
label_31a21c:
    // 0x31a21c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x31a21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a220:
    // 0x31a220: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x31a220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a224:
    // 0x31a224: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31a224u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31a228:
    // 0x31a228: 0xe7a101f8  swc1        $f1, 0x1F8($sp)
    ctx->pc = 0x31a228u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_31a22c:
    // 0x31a22c: 0x46013002  mul.s       $f0, $f6, $f1
    ctx->pc = 0x31a22cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_31a230:
    // 0x31a230: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x31a230u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_31a234:
    // 0x31a234: 0x460438c2  mul.s       $f3, $f7, $f4
    ctx->pc = 0x31a234u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_31a238:
    // 0x31a238: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x31a238u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_31a23c:
    // 0x31a23c: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x31a23cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_31a240:
    // 0x31a240: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x31a240u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_31a244:
    // 0x31a244: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x31a244u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
label_31a248:
    // 0x31a248: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x31a248u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_31a24c:
    // 0x31a24c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x31a24cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_31a250:
    // 0x31a250: 0xe7a301a8  swc1        $f3, 0x1A8($sp)
    ctx->pc = 0x31a250u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_31a254:
    // 0x31a254: 0xe7a201a4  swc1        $f2, 0x1A4($sp)
    ctx->pc = 0x31a254u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_31a258:
    // 0x31a258: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x31a258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_31a25c:
    // 0x31a25c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x31a25cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_31a260:
    // 0x31a260: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x31a260u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_31a264:
    // 0x31a264: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x31a264u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_31a268:
    // 0x31a268: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x31a268u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_31a26c:
    // 0x31a26c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x31a26cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_31a270:
    // 0x31a270: 0x46000004  c1          0x4
    ctx->pc = 0x31a270u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_31a274:
    // 0x31a274: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x31a274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31a278:
    // 0x31a278: 0x0  nop
    ctx->pc = 0x31a278u;
    // NOP
label_31a27c:
    // 0x31a27c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_31a280:
    if (ctx->pc == 0x31A280u) {
        ctx->pc = 0x31A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A27Cu;
        // 0x31a280: 0xc7a401a0  lwc1        $f4, 0x1A0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A284u;
        goto label_31a284;
    }
    ctx->pc = 0x31A27Cu;
    {
        const bool branch_taken_0x31a27c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A27Cu;
        // 0x31a280: 0xc7a401a0  lwc1        $f4, 0x1A0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a27c) {
            ctx->pc = 0x31A288u;
            goto label_31a288;
        }
    }
    ctx->pc = 0x31A284u;
label_31a284:
    // 0x31a284: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x31a284u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_31a288:
    // 0x31a288: 0xc7a501a4  lwc1        $f5, 0x1A4($sp)
    ctx->pc = 0x31a288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_31a28c:
    // 0x31a28c: 0xc7a601a8  lwc1        $f6, 0x1A8($sp)
    ctx->pc = 0x31a28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_31a290:
    // 0x31a290: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x31a290u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_31a294:
    // 0x31a294: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x31a294u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_31a298:
    // 0x31a298: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x31a298u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_31a29c:
    // 0x31a29c: 0xe7a401a0  swc1        $f4, 0x1A0($sp)
    ctx->pc = 0x31a29cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_31a2a0:
    // 0x31a2a0: 0xe7a501a4  swc1        $f5, 0x1A4($sp)
    ctx->pc = 0x31a2a0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_31a2a4:
    // 0x31a2a4: 0xe7a601a8  swc1        $f6, 0x1A8($sp)
    ctx->pc = 0x31a2a4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_31a2a8:
    // 0x31a2a8: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x31a2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a2ac:
    // 0x31a2ac: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x31a2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a2b0:
    // 0x31a2b0: 0xc6e30004  lwc1        $f3, 0x4($s7)
    ctx->pc = 0x31a2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_31a2b4:
    // 0x31a2b4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31a2b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31a2b8:
    // 0x31a2b8: 0xc6e20008  lwc1        $f2, 0x8($s7)
    ctx->pc = 0x31a2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31a2bc:
    // 0x31a2bc: 0xe7a101d0  swc1        $f1, 0x1D0($sp)
    ctx->pc = 0x31a2bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_31a2c0:
    // 0x31a2c0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x31a2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a2c4:
    // 0x31a2c4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x31a2c4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_31a2c8:
    // 0x31a2c8: 0xe7a301d4  swc1        $f3, 0x1D4($sp)
    ctx->pc = 0x31a2c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
label_31a2cc:
    // 0x31a2cc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x31a2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a2d0:
    // 0x31a2d0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x31a2d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_31a2d4:
    // 0x31a2d4: 0xe7a201d8  swc1        $f2, 0x1D8($sp)
    ctx->pc = 0x31a2d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_31a2d8:
    // 0x31a2d8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x31a2d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_31a2dc:
    // 0x31a2dc: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x31a2dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_31a2e0:
    // 0x31a2e0: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x31a2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_31a2e4:
    // 0x31a2e4: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x31a2e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_31a2e8:
    // 0x31a2e8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x31a2e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_31a2ec:
    // 0x31a2ec: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x31a2ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_31a2f0:
    // 0x31a2f0: 0x1000000e  b           . + 4 + (0xE << 2)
label_31a2f4:
    if (ctx->pc == 0x31A2F4u) {
        ctx->pc = 0x31A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A2F0u;
        // 0x31a2f4: 0xe7a10230  swc1        $f1, 0x230($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A2F8u;
        goto label_31a2f8;
    }
    ctx->pc = 0x31A2F0u;
    {
        const bool branch_taken_0x31a2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A2F0u;
        // 0x31a2f4: 0xe7a10230  swc1        $f1, 0x230($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a2f0) {
            ctx->pc = 0x31A32Cu;
            goto label_31a32c;
        }
    }
    ctx->pc = 0x31A2F8u;
label_31a2f8:
    // 0x31a2f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31a2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31a2fc:
    // 0x31a2fc: 0x7faa0260  sq          $t2, 0x260($sp)
    ctx->pc = 0x31a2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 10));
label_31a300:
    // 0x31a300: 0x7fab0270  sq          $t3, 0x270($sp)
    ctx->pc = 0x31a300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 11));
label_31a304:
    // 0x31a304: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x31a304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_31a308:
    // 0x31a308: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x31a308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31a30c:
    // 0x31a30c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x31a30cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31a310:
    // 0x31a310: 0x27a801a0  addiu       $t0, $sp, 0x1A0
    ctx->pc = 0x31a310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_31a314:
    // 0x31a314: 0xc0f152c  jal         func_3C54B0
label_31a318:
    if (ctx->pc == 0x31A318u) {
        ctx->pc = 0x31A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A314u;
        // 0x31a318: 0x27a90230  addiu       $t1, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A31Cu;
        goto label_31a31c;
    }
    ctx->pc = 0x31A314u;
    SET_GPR_U32(ctx, 31, 0x31A31Cu);
    ctx->pc = 0x31A318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A314u;
    // 0x31a318: 0x27a90230  addiu       $t1, $sp, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C54B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C54B0u, 0x31A314u, 0x31A31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A31Cu;
label_31a31c:
    // 0x31a31c: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x31a31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_31a320:
    // 0x31a320: 0x7baa0260  lq          $t2, 0x260($sp)
    ctx->pc = 0x31a320u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_31a324:
    // 0x31a324: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_31a328:
    if (ctx->pc == 0x31A328u) {
        ctx->pc = 0x31A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A324u;
        // 0x31a328: 0x7bab0270  lq          $t3, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A32Cu;
        goto label_31a32c;
    }
    ctx->pc = 0x31A324u;
    {
        const bool branch_taken_0x31a324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A324u;
        // 0x31a328: 0x7bab0270  lq          $t3, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a324) {
            ctx->pc = 0x31A388u;
            goto label_31a388;
        }
    }
    ctx->pc = 0x31A32Cu;
label_31a32c:
    // 0x31a32c: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x31a32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a330:
    // 0x31a330: 0x8fa40238  lw          $a0, 0x238($sp)
    ctx->pc = 0x31a330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_31a334:
    // 0x31a334: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x31a334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_31a338:
    // 0x31a338: 0x8fa60240  lw          $a2, 0x240($sp)
    ctx->pc = 0x31a338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_31a33c:
    // 0x31a33c: 0xe7a00230  swc1        $f0, 0x230($sp)
    ctx->pc = 0x31a33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
label_31a340:
    // 0x31a340: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x31a340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_31a344:
    // 0x31a344: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x31a344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_31a348:
    // 0x31a348: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x31a348u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_31a34c:
    // 0x31a34c: 0xb3a301b3  sdl         $v1, 0x1B3($sp)
    ctx->pc = 0x31a34cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 435); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_31a350:
    // 0x31a350: 0xb7a301ac  sdr         $v1, 0x1AC($sp)
    ctx->pc = 0x31a350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 428); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_31a354:
    // 0x31a354: 0xafa701b4  sw          $a3, 0x1B4($sp)
    ctx->pc = 0x31a354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 7));
label_31a358:
    // 0x31a358: 0x8fa3023c  lw          $v1, 0x23C($sp)
    ctx->pc = 0x31a358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_31a35c:
    // 0x31a35c: 0xc7ac0230  lwc1        $f12, 0x230($sp)
    ctx->pc = 0x31a35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_31a360:
    // 0x31a360: 0x7faa0260  sq          $t2, 0x260($sp)
    ctx->pc = 0x31a360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 10));
label_31a364:
    // 0x31a364: 0x7fab0270  sq          $t3, 0x270($sp)
    ctx->pc = 0x31a364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 11));
label_31a368:
    // 0x31a368: 0xafb501b8  sw          $s5, 0x1B8($sp)
    ctx->pc = 0x31a368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 21));
label_31a36c:
    // 0x31a36c: 0xafb001bc  sw          $s0, 0x1BC($sp)
    ctx->pc = 0x31a36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 16));
label_31a370:
    // 0x31a370: 0xafb101c0  sw          $s1, 0x1C0($sp)
    ctx->pc = 0x31a370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 17));
label_31a374:
    // 0x31a374: 0x60f809  jalr        $v1
label_31a378:
    if (ctx->pc == 0x31A378u) {
        ctx->pc = 0x31A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A374u;
        // 0x31a378: 0xafb201c4  sw          $s2, 0x1C4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A37Cu;
        goto label_31a37c;
    }
    ctx->pc = 0x31A374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31A37Cu);
        ctx->pc = 0x31A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A374u;
        // 0x31a378: 0xafb201c4  sw          $s2, 0x1C4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A374u, 0x31A37Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31A37Cu;
label_31a37c:
    // 0x31a37c: 0x7baa0260  lq          $t2, 0x260($sp)
    ctx->pc = 0x31a37cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_31a380:
    // 0x31a380: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_31a384:
    if (ctx->pc == 0x31A384u) {
        ctx->pc = 0x31A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A380u;
        // 0x31a384: 0x7bab0270  lq          $t3, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A388u;
        goto label_31a388;
    }
    ctx->pc = 0x31A380u;
    {
        const bool branch_taken_0x31a380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A380u;
        // 0x31a384: 0x7bab0270  lq          $t3, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a380) {
            ctx->pc = 0x31A4A4u;
            goto label_31a4a4;
        }
    }
    ctx->pc = 0x31A388u;
label_31a388:
    // 0x31a388: 0x97a20190  lhu         $v0, 0x190($sp)
    ctx->pc = 0x31a388u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 400)));
label_31a38c:
    // 0x31a38c: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x31a38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_31a390:
    // 0x31a390: 0x97a40192  lhu         $a0, 0x192($sp)
    ctx->pc = 0x31a390u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 402)));
label_31a394:
    // 0x31a394: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x31a394u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_31a398:
    // 0x31a398: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31a398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_31a39c:
    // 0x31a39c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x31a39cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_31a3a0:
    // 0x31a3a0: 0x5440ff77  bnel        $v0, $zero, . + 4 + (-0x89 << 2)
label_31a3a4:
    if (ctx->pc == 0x31A3A4u) {
        ctx->pc = 0x31A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A3A0u;
        // 0x31a3a4: 0x8e830024  lw          $v1, 0x24($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A3A8u;
        goto label_31a3a8;
    }
    ctx->pc = 0x31A3A0u;
    {
        const bool branch_taken_0x31a3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a3a0) {
            ctx->pc = 0x31A3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A3A0u;
            // 0x31a3a4: 0x8e830024  lw          $v1, 0x24($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a180;
        }
    }
    ctx->pc = 0x31A3A8u;
label_31a3a8:
    // 0x31a3a8: 0x8fa30184  lw          $v1, 0x184($sp)
    ctx->pc = 0x31a3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
label_31a3ac:
    // 0x31a3ac: 0x8fa40258  lw          $a0, 0x258($sp)
    ctx->pc = 0x31a3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_31a3b0:
    // 0x31a3b0: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x31a3b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_31a3b4:
    // 0x31a3b4: 0x5440fef6  bnel        $v0, $zero, . + 4 + (-0x10A << 2)
label_31a3b8:
    if (ctx->pc == 0x31A3B8u) {
        ctx->pc = 0x31A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A3B4u;
        // 0x31a3b8: 0x8c64fff8  lw          $a0, -0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A3BCu;
        goto label_31a3bc;
    }
    ctx->pc = 0x31A3B4u;
    {
        const bool branch_taken_0x31a3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a3b4) {
            ctx->pc = 0x31A3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A3B4u;
            // 0x31a3b8: 0x8c64fff8  lw          $a0, -0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x319F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_319f90;
        }
    }
    ctx->pc = 0x31A3BCu;
label_31a3bc:
    // 0x31a3bc: 0x1000003a  b           . + 4 + (0x3A << 2)
label_31a3c0:
    if (ctx->pc == 0x31A3C0u) {
        ctx->pc = 0x31A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A3BCu;
        // 0x31a3c0: 0x7bb00310  lq          $s0, 0x310($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 784)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A3C4u;
        goto label_31a3c4;
    }
    ctx->pc = 0x31A3BCu;
    {
        const bool branch_taken_0x31a3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A3BCu;
        // 0x31a3c0: 0x7bb00310  lq          $s0, 0x310($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a3bc) {
            ctx->pc = 0x31A4A8u;
            goto label_31a4a8;
        }
    }
    ctx->pc = 0x31A3C4u;
label_31a3c4:
    // 0x31a3c4: 0x8fc2005c  lw          $v0, 0x5C($fp)
    ctx->pc = 0x31a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 92)));
label_31a3c8:
    // 0x31a3c8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x31a3c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31a3cc:
    // 0x31a3cc: 0xc6e1000c  lwc1        $f1, 0xC($s7)
    ctx->pc = 0x31a3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31a3d0:
    // 0x31a3d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31a3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_31a3d4:
    // 0x31a3d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31a3d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31a3d8:
    // 0x31a3d8: 0x8c550014  lw          $s5, 0x14($v0)
    ctx->pc = 0x31a3d8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_31a3dc:
    // 0x31a3dc: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x31a3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_31a3e0:
    // 0x31a3e0: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x31a3e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_31a3e4:
    // 0x31a3e4: 0x1860002f  blez        $v1, . + 4 + (0x2F << 2)
label_31a3e8:
    if (ctx->pc == 0x31A3E8u) {
        ctx->pc = 0x31A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A3E4u;
        // 0x31a3e8: 0x8fc2002c  lw          $v0, 0x2C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A3ECu;
        goto label_31a3ec;
    }
    ctx->pc = 0x31A3E4u;
    {
        const bool branch_taken_0x31a3e4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x31A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A3E4u;
        // 0x31a3e8: 0x8fc2002c  lw          $v0, 0x2C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a3e4) {
            ctx->pc = 0x31A4A4u;
            goto label_31a4a4;
        }
    }
    ctx->pc = 0x31A3ECu;
label_31a3ec:
    // 0x31a3ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31a3ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31a3f0:
    // 0x31a3f0: 0x2416000c  addiu       $s6, $zero, 0xC
    ctx->pc = 0x31a3f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_31a3f4:
    // 0x31a3f4: 0x0  nop
    ctx->pc = 0x31a3f4u;
    // NOP
label_31a3f8:
    // 0x31a3f8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x31a3f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_31a3fc:
    // 0x31a3fc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x31a3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_31a400:
    // 0x31a400: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x31a400u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_31a404:
    // 0x31a404: 0x27a80200  addiu       $t0, $sp, 0x200
    ctx->pc = 0x31a404u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_31a408:
    // 0x31a408: 0x563018  mult        $a2, $v0, $s6
    ctx->pc = 0x31a408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_31a40c:
    // 0x31a40c: 0x96250004  lhu         $a1, 0x4($s1)
    ctx->pc = 0x31a40cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_31a410:
    // 0x31a410: 0x761018  mult        $v0, $v1, $s6
    ctx->pc = 0x31a410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_31a414:
    // 0x31a414: 0x27a90234  addiu       $t1, $sp, 0x234
    ctx->pc = 0x31a414u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 564));
label_31a418:
    // 0x31a418: 0xd58021  addu        $s0, $a2, $s5
    ctx->pc = 0x31a418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
label_31a41c:
    // 0x31a41c: 0x559821  addu        $s3, $v0, $s5
    ctx->pc = 0x31a41cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_31a420:
    // 0x31a420: 0xb61018  mult        $v0, $a1, $s6
    ctx->pc = 0x31a420u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_31a424:
    // 0x31a424: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x31a424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31a428:
    // 0x31a428: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31a428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31a42c:
    // 0x31a42c: 0x559021  addu        $s2, $v0, $s5
    ctx->pc = 0x31a42cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_31a430:
    // 0x31a430: 0xc0f152c  jal         func_3C54B0
label_31a434:
    if (ctx->pc == 0x31A434u) {
        ctx->pc = 0x31A434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A430u;
        // 0x31a434: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A438u;
        goto label_31a438;
    }
    ctx->pc = 0x31A430u;
    SET_GPR_U32(ctx, 31, 0x31A438u);
    ctx->pc = 0x31A434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A430u;
    // 0x31a434: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C54B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C54B0u, 0x31A430u, 0x31A438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A438u;
label_31a438:
    // 0x31a438: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_31a43c:
    if (ctx->pc == 0x31A43Cu) {
        ctx->pc = 0x31A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A438u;
        // 0x31a43c: 0xc7a00234  lwc1        $f0, 0x234($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A440u;
        goto label_31a440;
    }
    ctx->pc = 0x31A438u;
    {
        const bool branch_taken_0x31a438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A438u;
        // 0x31a43c: 0xc7a00234  lwc1        $f0, 0x234($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a438) {
            ctx->pc = 0x31A490u;
            goto label_31a490;
        }
    }
    ctx->pc = 0x31A440u;
label_31a440:
    // 0x31a440: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x31a440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_31a444:
    // 0x31a444: 0x8fa40238  lw          $a0, 0x238($sp)
    ctx->pc = 0x31a444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_31a448:
    // 0x31a448: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x31a448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_31a44c:
    // 0x31a44c: 0x8fa60240  lw          $a2, 0x240($sp)
    ctx->pc = 0x31a44cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_31a450:
    // 0x31a450: 0xe7a00234  swc1        $f0, 0x234($sp)
    ctx->pc = 0x31a450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
label_31a454:
    // 0x31a454: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x31a454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_31a458:
    // 0x31a458: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x31a458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_31a45c:
    // 0x31a45c: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x31a45cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_31a460:
    // 0x31a460: 0xb3a30213  sdl         $v1, 0x213($sp)
    ctx->pc = 0x31a460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 531); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_31a464:
    // 0x31a464: 0xb7a3020c  sdr         $v1, 0x20C($sp)
    ctx->pc = 0x31a464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 524); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_31a468:
    // 0x31a468: 0xafa70214  sw          $a3, 0x214($sp)
    ctx->pc = 0x31a468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 7));
label_31a46c:
    // 0x31a46c: 0x8fa3023c  lw          $v1, 0x23C($sp)
    ctx->pc = 0x31a46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_31a470:
    // 0x31a470: 0xc7ac0234  lwc1        $f12, 0x234($sp)
    ctx->pc = 0x31a470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_31a474:
    // 0x31a474: 0xafb0021c  sw          $s0, 0x21C($sp)
    ctx->pc = 0x31a474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 16));
label_31a478:
    // 0x31a478: 0xafb30220  sw          $s3, 0x220($sp)
    ctx->pc = 0x31a478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 19));
label_31a47c:
    // 0x31a47c: 0xafb20224  sw          $s2, 0x224($sp)
    ctx->pc = 0x31a47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 18));
label_31a480:
    // 0x31a480: 0x60f809  jalr        $v1
label_31a484:
    if (ctx->pc == 0x31A484u) {
        ctx->pc = 0x31A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A480u;
        // 0x31a484: 0xafb40218  sw          $s4, 0x218($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A488u;
        goto label_31a488;
    }
    ctx->pc = 0x31A480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31A488u);
        ctx->pc = 0x31A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A480u;
        // 0x31a484: 0xafb40218  sw          $s4, 0x218($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A480u, 0x31A488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31A488u;
label_31a488:
    // 0x31a488: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_31a48c:
    if (ctx->pc == 0x31A48Cu) {
        ctx->pc = 0x31A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A488u;
        // 0x31a48c: 0x7bb00310  lq          $s0, 0x310($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 784)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A490u;
        goto label_31a490;
    }
    ctx->pc = 0x31A488u;
    {
        const bool branch_taken_0x31a488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A488u;
        // 0x31a48c: 0x7bb00310  lq          $s0, 0x310($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a488) {
            ctx->pc = 0x31A4A8u;
            goto label_31a4a8;
        }
    }
    ctx->pc = 0x31A490u;
label_31a490:
    // 0x31a490: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x31a490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_31a494:
    // 0x31a494: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x31a494u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_31a498:
    // 0x31a498: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x31a498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_31a49c:
    // 0x31a49c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
label_31a4a0:
    if (ctx->pc == 0x31A4A0u) {
        ctx->pc = 0x31A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A49Cu;
        // 0x31a4a0: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A4A4u;
        goto label_31a4a4;
    }
    ctx->pc = 0x31A49Cu;
    {
        const bool branch_taken_0x31a49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A49Cu;
        // 0x31a4a0: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a49c) {
            ctx->pc = 0x31A3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a3f8;
        }
    }
    ctx->pc = 0x31A4A4u;
label_31a4a4:
    // 0x31a4a4: 0x7bb00310  lq          $s0, 0x310($sp)
    ctx->pc = 0x31a4a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_31a4a8:
    // 0x31a4a8: 0x7bb10300  lq          $s1, 0x300($sp)
    ctx->pc = 0x31a4a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 768)));
label_31a4ac:
    // 0x31a4ac: 0x7bb202f0  lq          $s2, 0x2F0($sp)
    ctx->pc = 0x31a4acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 752)));
label_31a4b0:
    // 0x31a4b0: 0x7bb302e0  lq          $s3, 0x2E0($sp)
    ctx->pc = 0x31a4b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_31a4b4:
    // 0x31a4b4: 0x7bb402d0  lq          $s4, 0x2D0($sp)
    ctx->pc = 0x31a4b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_31a4b8:
    // 0x31a4b8: 0x7bb502c0  lq          $s5, 0x2C0($sp)
    ctx->pc = 0x31a4b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_31a4bc:
    // 0x31a4bc: 0x7bb602b0  lq          $s6, 0x2B0($sp)
    ctx->pc = 0x31a4bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_31a4c0:
    // 0x31a4c0: 0x7bb702a0  lq          $s7, 0x2A0($sp)
    ctx->pc = 0x31a4c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_31a4c4:
    // 0x31a4c4: 0x7bbe0290  lq          $fp, 0x290($sp)
    ctx->pc = 0x31a4c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_31a4c8:
    // 0x31a4c8: 0xdfbf0280  ld          $ra, 0x280($sp)
    ctx->pc = 0x31a4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_31a4cc:
    // 0x31a4cc: 0xc7b60330  lwc1        $f22, 0x330($sp)
    ctx->pc = 0x31a4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_31a4d0:
    // 0x31a4d0: 0xc7b50328  lwc1        $f21, 0x328($sp)
    ctx->pc = 0x31a4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_31a4d4:
    // 0x31a4d4: 0xc7b40320  lwc1        $f20, 0x320($sp)
    ctx->pc = 0x31a4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_31a4d8:
    // 0x31a4d8: 0x3e00008  jr          $ra
label_31a4dc:
    if (ctx->pc == 0x31A4DCu) {
        ctx->pc = 0x31A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A4D8u;
        // 0x31a4dc: 0x27bd0340  addiu       $sp, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A4E0u;
        goto label_fallthrough_0x31a4d8;
    }
    ctx->pc = 0x31A4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A4D8u;
        // 0x31a4dc: 0x27bd0340  addiu       $sp, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31a4d8:
    ctx->pc = 0x31A4E0u;
}
