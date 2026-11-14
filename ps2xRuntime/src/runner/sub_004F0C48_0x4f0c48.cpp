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

// Function: sub_004F0C48
// Address: 0x4f0c48 - 0x4f12b8
void sub_004F0C48_0x4f0c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0C48_0x4f0c48");
#endif

    switch (ctx->pc) {
        case 0x4f0c48u: goto label_4f0c48;
        case 0x4f0c4cu: goto label_4f0c4c;
        case 0x4f0c50u: goto label_4f0c50;
        case 0x4f0c54u: goto label_4f0c54;
        case 0x4f0c58u: goto label_4f0c58;
        case 0x4f0c5cu: goto label_4f0c5c;
        case 0x4f0c60u: goto label_4f0c60;
        case 0x4f0c64u: goto label_4f0c64;
        case 0x4f0c68u: goto label_4f0c68;
        case 0x4f0c6cu: goto label_4f0c6c;
        case 0x4f0c70u: goto label_4f0c70;
        case 0x4f0c74u: goto label_4f0c74;
        case 0x4f0c78u: goto label_4f0c78;
        case 0x4f0c7cu: goto label_4f0c7c;
        case 0x4f0c80u: goto label_4f0c80;
        case 0x4f0c84u: goto label_4f0c84;
        case 0x4f0c88u: goto label_4f0c88;
        case 0x4f0c8cu: goto label_4f0c8c;
        case 0x4f0c90u: goto label_4f0c90;
        case 0x4f0c94u: goto label_4f0c94;
        case 0x4f0c98u: goto label_4f0c98;
        case 0x4f0c9cu: goto label_4f0c9c;
        case 0x4f0ca0u: goto label_4f0ca0;
        case 0x4f0ca4u: goto label_4f0ca4;
        case 0x4f0ca8u: goto label_4f0ca8;
        case 0x4f0cacu: goto label_4f0cac;
        case 0x4f0cb0u: goto label_4f0cb0;
        case 0x4f0cb4u: goto label_4f0cb4;
        case 0x4f0cb8u: goto label_4f0cb8;
        case 0x4f0cbcu: goto label_4f0cbc;
        case 0x4f0cc0u: goto label_4f0cc0;
        case 0x4f0cc4u: goto label_4f0cc4;
        case 0x4f0cc8u: goto label_4f0cc8;
        case 0x4f0cccu: goto label_4f0ccc;
        case 0x4f0cd0u: goto label_4f0cd0;
        case 0x4f0cd4u: goto label_4f0cd4;
        case 0x4f0cd8u: goto label_4f0cd8;
        case 0x4f0cdcu: goto label_4f0cdc;
        case 0x4f0ce0u: goto label_4f0ce0;
        case 0x4f0ce4u: goto label_4f0ce4;
        case 0x4f0ce8u: goto label_4f0ce8;
        case 0x4f0cecu: goto label_4f0cec;
        case 0x4f0cf0u: goto label_4f0cf0;
        case 0x4f0cf4u: goto label_4f0cf4;
        case 0x4f0cf8u: goto label_4f0cf8;
        case 0x4f0cfcu: goto label_4f0cfc;
        case 0x4f0d00u: goto label_4f0d00;
        case 0x4f0d04u: goto label_4f0d04;
        case 0x4f0d08u: goto label_4f0d08;
        case 0x4f0d0cu: goto label_4f0d0c;
        case 0x4f0d10u: goto label_4f0d10;
        case 0x4f0d14u: goto label_4f0d14;
        case 0x4f0d18u: goto label_4f0d18;
        case 0x4f0d1cu: goto label_4f0d1c;
        case 0x4f0d20u: goto label_4f0d20;
        case 0x4f0d24u: goto label_4f0d24;
        case 0x4f0d28u: goto label_4f0d28;
        case 0x4f0d2cu: goto label_4f0d2c;
        case 0x4f0d30u: goto label_4f0d30;
        case 0x4f0d34u: goto label_4f0d34;
        case 0x4f0d38u: goto label_4f0d38;
        case 0x4f0d3cu: goto label_4f0d3c;
        case 0x4f0d40u: goto label_4f0d40;
        case 0x4f0d44u: goto label_4f0d44;
        case 0x4f0d48u: goto label_4f0d48;
        case 0x4f0d4cu: goto label_4f0d4c;
        case 0x4f0d50u: goto label_4f0d50;
        case 0x4f0d54u: goto label_4f0d54;
        case 0x4f0d58u: goto label_4f0d58;
        case 0x4f0d5cu: goto label_4f0d5c;
        case 0x4f0d60u: goto label_4f0d60;
        case 0x4f0d64u: goto label_4f0d64;
        case 0x4f0d68u: goto label_4f0d68;
        case 0x4f0d6cu: goto label_4f0d6c;
        case 0x4f0d70u: goto label_4f0d70;
        case 0x4f0d74u: goto label_4f0d74;
        case 0x4f0d78u: goto label_4f0d78;
        case 0x4f0d7cu: goto label_4f0d7c;
        case 0x4f0d80u: goto label_4f0d80;
        case 0x4f0d84u: goto label_4f0d84;
        case 0x4f0d88u: goto label_4f0d88;
        case 0x4f0d8cu: goto label_4f0d8c;
        case 0x4f0d90u: goto label_4f0d90;
        case 0x4f0d94u: goto label_4f0d94;
        case 0x4f0d98u: goto label_4f0d98;
        case 0x4f0d9cu: goto label_4f0d9c;
        case 0x4f0da0u: goto label_4f0da0;
        case 0x4f0da4u: goto label_4f0da4;
        case 0x4f0da8u: goto label_4f0da8;
        case 0x4f0dacu: goto label_4f0dac;
        case 0x4f0db0u: goto label_4f0db0;
        case 0x4f0db4u: goto label_4f0db4;
        case 0x4f0db8u: goto label_4f0db8;
        case 0x4f0dbcu: goto label_4f0dbc;
        case 0x4f0dc0u: goto label_4f0dc0;
        case 0x4f0dc4u: goto label_4f0dc4;
        case 0x4f0dc8u: goto label_4f0dc8;
        case 0x4f0dccu: goto label_4f0dcc;
        case 0x4f0dd0u: goto label_4f0dd0;
        case 0x4f0dd4u: goto label_4f0dd4;
        case 0x4f0dd8u: goto label_4f0dd8;
        case 0x4f0ddcu: goto label_4f0ddc;
        case 0x4f0de0u: goto label_4f0de0;
        case 0x4f0de4u: goto label_4f0de4;
        case 0x4f0de8u: goto label_4f0de8;
        case 0x4f0decu: goto label_4f0dec;
        case 0x4f0df0u: goto label_4f0df0;
        case 0x4f0df4u: goto label_4f0df4;
        case 0x4f0df8u: goto label_4f0df8;
        case 0x4f0dfcu: goto label_4f0dfc;
        case 0x4f0e00u: goto label_4f0e00;
        case 0x4f0e04u: goto label_4f0e04;
        case 0x4f0e08u: goto label_4f0e08;
        case 0x4f0e0cu: goto label_4f0e0c;
        case 0x4f0e10u: goto label_4f0e10;
        case 0x4f0e14u: goto label_4f0e14;
        case 0x4f0e18u: goto label_4f0e18;
        case 0x4f0e1cu: goto label_4f0e1c;
        case 0x4f0e20u: goto label_4f0e20;
        case 0x4f0e24u: goto label_4f0e24;
        case 0x4f0e28u: goto label_4f0e28;
        case 0x4f0e2cu: goto label_4f0e2c;
        case 0x4f0e30u: goto label_4f0e30;
        case 0x4f0e34u: goto label_4f0e34;
        case 0x4f0e38u: goto label_4f0e38;
        case 0x4f0e3cu: goto label_4f0e3c;
        case 0x4f0e40u: goto label_4f0e40;
        case 0x4f0e44u: goto label_4f0e44;
        case 0x4f0e48u: goto label_4f0e48;
        case 0x4f0e4cu: goto label_4f0e4c;
        case 0x4f0e50u: goto label_4f0e50;
        case 0x4f0e54u: goto label_4f0e54;
        case 0x4f0e58u: goto label_4f0e58;
        case 0x4f0e5cu: goto label_4f0e5c;
        case 0x4f0e60u: goto label_4f0e60;
        case 0x4f0e64u: goto label_4f0e64;
        case 0x4f0e68u: goto label_4f0e68;
        case 0x4f0e6cu: goto label_4f0e6c;
        case 0x4f0e70u: goto label_4f0e70;
        case 0x4f0e74u: goto label_4f0e74;
        case 0x4f0e78u: goto label_4f0e78;
        case 0x4f0e7cu: goto label_4f0e7c;
        case 0x4f0e80u: goto label_4f0e80;
        case 0x4f0e84u: goto label_4f0e84;
        case 0x4f0e88u: goto label_4f0e88;
        case 0x4f0e8cu: goto label_4f0e8c;
        case 0x4f0e90u: goto label_4f0e90;
        case 0x4f0e94u: goto label_4f0e94;
        case 0x4f0e98u: goto label_4f0e98;
        case 0x4f0e9cu: goto label_4f0e9c;
        case 0x4f0ea0u: goto label_4f0ea0;
        case 0x4f0ea4u: goto label_4f0ea4;
        case 0x4f0ea8u: goto label_4f0ea8;
        case 0x4f0eacu: goto label_4f0eac;
        case 0x4f0eb0u: goto label_4f0eb0;
        case 0x4f0eb4u: goto label_4f0eb4;
        case 0x4f0eb8u: goto label_4f0eb8;
        case 0x4f0ebcu: goto label_4f0ebc;
        case 0x4f0ec0u: goto label_4f0ec0;
        case 0x4f0ec4u: goto label_4f0ec4;
        case 0x4f0ec8u: goto label_4f0ec8;
        case 0x4f0eccu: goto label_4f0ecc;
        case 0x4f0ed0u: goto label_4f0ed0;
        case 0x4f0ed4u: goto label_4f0ed4;
        case 0x4f0ed8u: goto label_4f0ed8;
        case 0x4f0edcu: goto label_4f0edc;
        case 0x4f0ee0u: goto label_4f0ee0;
        case 0x4f0ee4u: goto label_4f0ee4;
        case 0x4f0ee8u: goto label_4f0ee8;
        case 0x4f0eecu: goto label_4f0eec;
        case 0x4f0ef0u: goto label_4f0ef0;
        case 0x4f0ef4u: goto label_4f0ef4;
        case 0x4f0ef8u: goto label_4f0ef8;
        case 0x4f0efcu: goto label_4f0efc;
        case 0x4f0f00u: goto label_4f0f00;
        case 0x4f0f04u: goto label_4f0f04;
        case 0x4f0f08u: goto label_4f0f08;
        case 0x4f0f0cu: goto label_4f0f0c;
        case 0x4f0f10u: goto label_4f0f10;
        case 0x4f0f14u: goto label_4f0f14;
        case 0x4f0f18u: goto label_4f0f18;
        case 0x4f0f1cu: goto label_4f0f1c;
        case 0x4f0f20u: goto label_4f0f20;
        case 0x4f0f24u: goto label_4f0f24;
        case 0x4f0f28u: goto label_4f0f28;
        case 0x4f0f2cu: goto label_4f0f2c;
        case 0x4f0f30u: goto label_4f0f30;
        case 0x4f0f34u: goto label_4f0f34;
        case 0x4f0f38u: goto label_4f0f38;
        case 0x4f0f3cu: goto label_4f0f3c;
        case 0x4f0f40u: goto label_4f0f40;
        case 0x4f0f44u: goto label_4f0f44;
        case 0x4f0f48u: goto label_4f0f48;
        case 0x4f0f4cu: goto label_4f0f4c;
        case 0x4f0f50u: goto label_4f0f50;
        case 0x4f0f54u: goto label_4f0f54;
        case 0x4f0f58u: goto label_4f0f58;
        case 0x4f0f5cu: goto label_4f0f5c;
        case 0x4f0f60u: goto label_4f0f60;
        case 0x4f0f64u: goto label_4f0f64;
        case 0x4f0f68u: goto label_4f0f68;
        case 0x4f0f6cu: goto label_4f0f6c;
        case 0x4f0f70u: goto label_4f0f70;
        case 0x4f0f74u: goto label_4f0f74;
        case 0x4f0f78u: goto label_4f0f78;
        case 0x4f0f7cu: goto label_4f0f7c;
        case 0x4f0f80u: goto label_4f0f80;
        case 0x4f0f84u: goto label_4f0f84;
        case 0x4f0f88u: goto label_4f0f88;
        case 0x4f0f8cu: goto label_4f0f8c;
        case 0x4f0f90u: goto label_4f0f90;
        case 0x4f0f94u: goto label_4f0f94;
        case 0x4f0f98u: goto label_4f0f98;
        case 0x4f0f9cu: goto label_4f0f9c;
        case 0x4f0fa0u: goto label_4f0fa0;
        case 0x4f0fa4u: goto label_4f0fa4;
        case 0x4f0fa8u: goto label_4f0fa8;
        case 0x4f0facu: goto label_4f0fac;
        case 0x4f0fb0u: goto label_4f0fb0;
        case 0x4f0fb4u: goto label_4f0fb4;
        case 0x4f0fb8u: goto label_4f0fb8;
        case 0x4f0fbcu: goto label_4f0fbc;
        case 0x4f0fc0u: goto label_4f0fc0;
        case 0x4f0fc4u: goto label_4f0fc4;
        case 0x4f0fc8u: goto label_4f0fc8;
        case 0x4f0fccu: goto label_4f0fcc;
        case 0x4f0fd0u: goto label_4f0fd0;
        case 0x4f0fd4u: goto label_4f0fd4;
        case 0x4f0fd8u: goto label_4f0fd8;
        case 0x4f0fdcu: goto label_4f0fdc;
        case 0x4f0fe0u: goto label_4f0fe0;
        case 0x4f0fe4u: goto label_4f0fe4;
        case 0x4f0fe8u: goto label_4f0fe8;
        case 0x4f0fecu: goto label_4f0fec;
        case 0x4f0ff0u: goto label_4f0ff0;
        case 0x4f0ff4u: goto label_4f0ff4;
        case 0x4f0ff8u: goto label_4f0ff8;
        case 0x4f0ffcu: goto label_4f0ffc;
        case 0x4f1000u: goto label_4f1000;
        case 0x4f1004u: goto label_4f1004;
        case 0x4f1008u: goto label_4f1008;
        case 0x4f100cu: goto label_4f100c;
        case 0x4f1010u: goto label_4f1010;
        case 0x4f1014u: goto label_4f1014;
        case 0x4f1018u: goto label_4f1018;
        case 0x4f101cu: goto label_4f101c;
        case 0x4f1020u: goto label_4f1020;
        case 0x4f1024u: goto label_4f1024;
        case 0x4f1028u: goto label_4f1028;
        case 0x4f102cu: goto label_4f102c;
        case 0x4f1030u: goto label_4f1030;
        case 0x4f1034u: goto label_4f1034;
        case 0x4f1038u: goto label_4f1038;
        case 0x4f103cu: goto label_4f103c;
        case 0x4f1040u: goto label_4f1040;
        case 0x4f1044u: goto label_4f1044;
        case 0x4f1048u: goto label_4f1048;
        case 0x4f104cu: goto label_4f104c;
        case 0x4f1050u: goto label_4f1050;
        case 0x4f1054u: goto label_4f1054;
        case 0x4f1058u: goto label_4f1058;
        case 0x4f105cu: goto label_4f105c;
        case 0x4f1060u: goto label_4f1060;
        case 0x4f1064u: goto label_4f1064;
        case 0x4f1068u: goto label_4f1068;
        case 0x4f106cu: goto label_4f106c;
        case 0x4f1070u: goto label_4f1070;
        case 0x4f1074u: goto label_4f1074;
        case 0x4f1078u: goto label_4f1078;
        case 0x4f107cu: goto label_4f107c;
        case 0x4f1080u: goto label_4f1080;
        case 0x4f1084u: goto label_4f1084;
        case 0x4f1088u: goto label_4f1088;
        case 0x4f108cu: goto label_4f108c;
        case 0x4f1090u: goto label_4f1090;
        case 0x4f1094u: goto label_4f1094;
        case 0x4f1098u: goto label_4f1098;
        case 0x4f109cu: goto label_4f109c;
        case 0x4f10a0u: goto label_4f10a0;
        case 0x4f10a4u: goto label_4f10a4;
        case 0x4f10a8u: goto label_4f10a8;
        case 0x4f10acu: goto label_4f10ac;
        case 0x4f10b0u: goto label_4f10b0;
        case 0x4f10b4u: goto label_4f10b4;
        case 0x4f10b8u: goto label_4f10b8;
        case 0x4f10bcu: goto label_4f10bc;
        case 0x4f10c0u: goto label_4f10c0;
        case 0x4f10c4u: goto label_4f10c4;
        case 0x4f10c8u: goto label_4f10c8;
        case 0x4f10ccu: goto label_4f10cc;
        case 0x4f10d0u: goto label_4f10d0;
        case 0x4f10d4u: goto label_4f10d4;
        case 0x4f10d8u: goto label_4f10d8;
        case 0x4f10dcu: goto label_4f10dc;
        case 0x4f10e0u: goto label_4f10e0;
        case 0x4f10e4u: goto label_4f10e4;
        case 0x4f10e8u: goto label_4f10e8;
        case 0x4f10ecu: goto label_4f10ec;
        case 0x4f10f0u: goto label_4f10f0;
        case 0x4f10f4u: goto label_4f10f4;
        case 0x4f10f8u: goto label_4f10f8;
        case 0x4f10fcu: goto label_4f10fc;
        case 0x4f1100u: goto label_4f1100;
        case 0x4f1104u: goto label_4f1104;
        case 0x4f1108u: goto label_4f1108;
        case 0x4f110cu: goto label_4f110c;
        case 0x4f1110u: goto label_4f1110;
        case 0x4f1114u: goto label_4f1114;
        case 0x4f1118u: goto label_4f1118;
        case 0x4f111cu: goto label_4f111c;
        case 0x4f1120u: goto label_4f1120;
        case 0x4f1124u: goto label_4f1124;
        case 0x4f1128u: goto label_4f1128;
        case 0x4f112cu: goto label_4f112c;
        case 0x4f1130u: goto label_4f1130;
        case 0x4f1134u: goto label_4f1134;
        case 0x4f1138u: goto label_4f1138;
        case 0x4f113cu: goto label_4f113c;
        case 0x4f1140u: goto label_4f1140;
        case 0x4f1144u: goto label_4f1144;
        case 0x4f1148u: goto label_4f1148;
        case 0x4f114cu: goto label_4f114c;
        case 0x4f1150u: goto label_4f1150;
        case 0x4f1154u: goto label_4f1154;
        case 0x4f1158u: goto label_4f1158;
        case 0x4f115cu: goto label_4f115c;
        case 0x4f1160u: goto label_4f1160;
        case 0x4f1164u: goto label_4f1164;
        case 0x4f1168u: goto label_4f1168;
        case 0x4f116cu: goto label_4f116c;
        case 0x4f1170u: goto label_4f1170;
        case 0x4f1174u: goto label_4f1174;
        case 0x4f1178u: goto label_4f1178;
        case 0x4f117cu: goto label_4f117c;
        case 0x4f1180u: goto label_4f1180;
        case 0x4f1184u: goto label_4f1184;
        case 0x4f1188u: goto label_4f1188;
        case 0x4f118cu: goto label_4f118c;
        case 0x4f1190u: goto label_4f1190;
        case 0x4f1194u: goto label_4f1194;
        case 0x4f1198u: goto label_4f1198;
        case 0x4f119cu: goto label_4f119c;
        case 0x4f11a0u: goto label_4f11a0;
        case 0x4f11a4u: goto label_4f11a4;
        case 0x4f11a8u: goto label_4f11a8;
        case 0x4f11acu: goto label_4f11ac;
        case 0x4f11b0u: goto label_4f11b0;
        case 0x4f11b4u: goto label_4f11b4;
        case 0x4f11b8u: goto label_4f11b8;
        case 0x4f11bcu: goto label_4f11bc;
        case 0x4f11c0u: goto label_4f11c0;
        case 0x4f11c4u: goto label_4f11c4;
        case 0x4f11c8u: goto label_4f11c8;
        case 0x4f11ccu: goto label_4f11cc;
        case 0x4f11d0u: goto label_4f11d0;
        case 0x4f11d4u: goto label_4f11d4;
        case 0x4f11d8u: goto label_4f11d8;
        case 0x4f11dcu: goto label_4f11dc;
        case 0x4f11e0u: goto label_4f11e0;
        case 0x4f11e4u: goto label_4f11e4;
        case 0x4f11e8u: goto label_4f11e8;
        case 0x4f11ecu: goto label_4f11ec;
        case 0x4f11f0u: goto label_4f11f0;
        case 0x4f11f4u: goto label_4f11f4;
        case 0x4f11f8u: goto label_4f11f8;
        case 0x4f11fcu: goto label_4f11fc;
        case 0x4f1200u: goto label_4f1200;
        case 0x4f1204u: goto label_4f1204;
        case 0x4f1208u: goto label_4f1208;
        case 0x4f120cu: goto label_4f120c;
        case 0x4f1210u: goto label_4f1210;
        case 0x4f1214u: goto label_4f1214;
        case 0x4f1218u: goto label_4f1218;
        case 0x4f121cu: goto label_4f121c;
        case 0x4f1220u: goto label_4f1220;
        case 0x4f1224u: goto label_4f1224;
        case 0x4f1228u: goto label_4f1228;
        case 0x4f122cu: goto label_4f122c;
        case 0x4f1230u: goto label_4f1230;
        case 0x4f1234u: goto label_4f1234;
        case 0x4f1238u: goto label_4f1238;
        case 0x4f123cu: goto label_4f123c;
        case 0x4f1240u: goto label_4f1240;
        case 0x4f1244u: goto label_4f1244;
        case 0x4f1248u: goto label_4f1248;
        case 0x4f124cu: goto label_4f124c;
        case 0x4f1250u: goto label_4f1250;
        case 0x4f1254u: goto label_4f1254;
        case 0x4f1258u: goto label_4f1258;
        case 0x4f125cu: goto label_4f125c;
        case 0x4f1260u: goto label_4f1260;
        case 0x4f1264u: goto label_4f1264;
        case 0x4f1268u: goto label_4f1268;
        case 0x4f126cu: goto label_4f126c;
        case 0x4f1270u: goto label_4f1270;
        case 0x4f1274u: goto label_4f1274;
        case 0x4f1278u: goto label_4f1278;
        case 0x4f127cu: goto label_4f127c;
        case 0x4f1280u: goto label_4f1280;
        case 0x4f1284u: goto label_4f1284;
        case 0x4f1288u: goto label_4f1288;
        case 0x4f128cu: goto label_4f128c;
        case 0x4f1290u: goto label_4f1290;
        case 0x4f1294u: goto label_4f1294;
        case 0x4f1298u: goto label_4f1298;
        case 0x4f129cu: goto label_4f129c;
        case 0x4f12a0u: goto label_4f12a0;
        case 0x4f12a4u: goto label_4f12a4;
        case 0x4f12a8u: goto label_4f12a8;
        case 0x4f12acu: goto label_4f12ac;
        case 0x4f12b0u: goto label_4f12b0;
        case 0x4f12b4u: goto label_4f12b4;
        default: break;
    }

    ctx->pc = 0x4f0c48u;

label_4f0c48:
    // 0x4f0c48: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x4f0c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_4f0c4c:
    // 0x4f0c4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4f0c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f0c50:
    // 0x4f0c50: 0x24435300  addiu       $v1, $v0, 0x5300
    ctx->pc = 0x4f0c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 21248));
label_4f0c54:
    // 0x4f0c54: 0x0  nop
    ctx->pc = 0x4f0c54u;
    // NOP
label_4f0c58:
    // 0x4f0c58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4f0c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4f0c5c:
    // 0x4f0c5c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_4f0c60:
    if (ctx->pc == 0x4F0C60u) {
        ctx->pc = 0x4F0C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0C5Cu;
        // 0x4f0c60: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0C64u;
        goto label_4f0c64;
    }
    ctx->pc = 0x4F0C5Cu;
    {
        const bool branch_taken_0x4f0c5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4F0C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0C5Cu;
        // 0x4f0c60: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0c5c) {
            ctx->pc = 0x4F0C6Cu;
            goto label_4f0c6c;
        }
    }
    ctx->pc = 0x4F0C64u;
label_4f0c64:
    // 0x4f0c64: 0x3e00008  jr          $ra
label_4f0c68:
    if (ctx->pc == 0x4F0C68u) {
        ctx->pc = 0x4F0C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0C64u;
        // 0x4f0c68: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0C6Cu;
        goto label_4f0c6c;
    }
    ctx->pc = 0x4F0C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0C64u;
        // 0x4f0c68: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F0C6Cu;
label_4f0c6c:
    // 0x4f0c6c: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x4f0c6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_4f0c70:
    // 0x4f0c70: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_4f0c74:
    if (ctx->pc == 0x4F0C74u) {
        ctx->pc = 0x4F0C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0C70u;
        // 0x4f0c74: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0C78u;
        goto label_4f0c78;
    }
    ctx->pc = 0x4F0C70u;
    {
        const bool branch_taken_0x4f0c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F0C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0C70u;
        // 0x4f0c74: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0c70) {
            ctx->pc = 0x4F0C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f0c58;
        }
    }
    ctx->pc = 0x4F0C78u;
label_4f0c78:
    // 0x4f0c78: 0x3e00008  jr          $ra
label_4f0c7c:
    if (ctx->pc == 0x4F0C7Cu) {
        ctx->pc = 0x4F0C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0C78u;
        // 0x4f0c7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0C80u;
        goto label_4f0c80;
    }
    ctx->pc = 0x4F0C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0C78u;
        // 0x4f0c7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F0C80u;
label_4f0c80:
    // 0x4f0c80: 0x51602  srl         $v0, $a1, 24
    ctx->pc = 0x4f0c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
label_4f0c84:
    // 0x4f0c84: 0x304300f0  andi        $v1, $v0, 0xF0
    ctx->pc = 0x4f0c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_4f0c88:
    // 0x4f0c88: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x4f0c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4f0c8c:
    // 0x4f0c8c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_4f0c90:
    if (ctx->pc == 0x4F0C90u) {
        ctx->pc = 0x4F0C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0C8Cu;
        // 0x4f0c90: 0x2c620031  sltiu       $v0, $v1, 0x31 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0C94u;
        goto label_4f0c94;
    }
    ctx->pc = 0x4F0C8Cu;
    {
        const bool branch_taken_0x4f0c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F0C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0C8Cu;
        // 0x4f0c90: 0x2c620031  sltiu       $v0, $v1, 0x31 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0c8c) {
            ctx->pc = 0x4F0CE0u;
            goto label_4f0ce0;
        }
    }
    ctx->pc = 0x4F0C94u;
label_4f0c94:
    // 0x4f0c94: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_4f0c98:
    if (ctx->pc == 0x4F0C98u) {
        ctx->pc = 0x4F0C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0C94u;
        // 0x4f0c98: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0C9Cu;
        goto label_4f0c9c;
    }
    ctx->pc = 0x4F0C94u;
    {
        const bool branch_taken_0x4f0c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0C94u;
        // 0x4f0c98: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0c94) {
            ctx->pc = 0x4F0CBCu;
            goto label_4f0cbc;
        }
    }
    ctx->pc = 0x4F0C9Cu;
label_4f0c9c:
    // 0x4f0c9c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_4f0ca0:
    if (ctx->pc == 0x4F0CA0u) {
        ctx->pc = 0x4F0CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0C9Cu;
        // 0x4f0ca0: 0x2c620011  sltiu       $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0CA4u;
        goto label_4f0ca4;
    }
    ctx->pc = 0x4F0C9Cu;
    {
        const bool branch_taken_0x4f0c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F0CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0C9Cu;
        // 0x4f0ca0: 0x2c620011  sltiu       $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0c9c) {
            ctx->pc = 0x4F0CD8u;
            goto label_4f0cd8;
        }
    }
    ctx->pc = 0x4F0CA4u;
label_4f0ca4:
    // 0x4f0ca4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_4f0ca8:
    if (ctx->pc == 0x4F0CA8u) {
        ctx->pc = 0x4F0CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0CA4u;
        // 0x4f0ca8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0CACu;
        goto label_4f0cac;
    }
    ctx->pc = 0x4F0CA4u;
    {
        const bool branch_taken_0x4f0ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0CA4u;
        // 0x4f0ca8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0ca4) {
            ctx->pc = 0x4F0CD0u;
            goto label_4f0cd0;
        }
    }
    ctx->pc = 0x4F0CACu;
label_4f0cac:
    // 0x4f0cac: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_4f0cb0:
    if (ctx->pc == 0x4F0CB0u) {
        ctx->pc = 0x4F0CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0CACu;
        // 0x4f0cb0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0CB4u;
        goto label_4f0cb4;
    }
    ctx->pc = 0x4F0CACu;
    {
        const bool branch_taken_0x4f0cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0CACu;
        // 0x4f0cb0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0cac) {
            ctx->pc = 0x4F0CE0u;
            goto label_4f0ce0;
        }
    }
    ctx->pc = 0x4F0CB4u;
label_4f0cb4:
    // 0x4f0cb4: 0x10000014  b           . + 4 + (0x14 << 2)
label_4f0cb8:
    if (ctx->pc == 0x4F0CB8u) {
        ctx->pc = 0x4F0CBCu;
        goto label_4f0cbc;
    }
    ctx->pc = 0x4F0CB4u;
    {
        const bool branch_taken_0x4f0cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f0cb4) {
            ctx->pc = 0x4F0D08u;
            goto label_4f0d08;
        }
    }
    ctx->pc = 0x4F0CBCu;
label_4f0cbc:
    // 0x4f0cbc: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x4f0cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_4f0cc0:
    // 0x4f0cc0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_4f0cc4:
    if (ctx->pc == 0x4F0CC4u) {
        ctx->pc = 0x4F0CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0CC0u;
        // 0x4f0cc4: 0x2c620051  sltiu       $v0, $v1, 0x51 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)81) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0CC8u;
        goto label_4f0cc8;
    }
    ctx->pc = 0x4F0CC0u;
    {
        const bool branch_taken_0x4f0cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F0CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0CC0u;
        // 0x4f0cc4: 0x2c620051  sltiu       $v0, $v1, 0x51 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)81) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0cc0) {
            ctx->pc = 0x4F0CD8u;
            goto label_4f0cd8;
        }
    }
    ctx->pc = 0x4F0CC8u;
label_4f0cc8:
    // 0x4f0cc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4f0ccc:
    if (ctx->pc == 0x4F0CCCu) {
        ctx->pc = 0x4F0CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0CC8u;
        // 0x4f0ccc: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0CD0u;
        goto label_4f0cd0;
    }
    ctx->pc = 0x4F0CC8u;
    {
        const bool branch_taken_0x4f0cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0CC8u;
        // 0x4f0ccc: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0cc8) {
            ctx->pc = 0x4F0CD8u;
            goto label_4f0cd8;
        }
    }
    ctx->pc = 0x4F0CD0u;
label_4f0cd0:
    // 0x4f0cd0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_4f0cd4:
    if (ctx->pc == 0x4F0CD4u) {
        ctx->pc = 0x4F0CD8u;
        goto label_4f0cd8;
    }
    ctx->pc = 0x4F0CD0u;
    {
        const bool branch_taken_0x4f0cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f0cd0) {
            ctx->pc = 0x4F0CE0u;
            goto label_4f0ce0;
        }
    }
    ctx->pc = 0x4F0CD8u;
label_4f0cd8:
    // 0x4f0cd8: 0x3e00008  jr          $ra
label_4f0cdc:
    if (ctx->pc == 0x4F0CDCu) {
        ctx->pc = 0x4F0CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0CD8u;
        // 0x4f0cdc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0CE0u;
        goto label_4f0ce0;
    }
    ctx->pc = 0x4F0CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0CD8u;
        // 0x4f0cdc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F0CE0u;
label_4f0ce0:
    // 0x4f0ce0: 0x40842800  mtc0        $a0, PageMask
    ctx->pc = 0x4f0ce0u;
    ctx->cop0_pagemask = GPR_U32(ctx, 4) & 0x01FFE000;
label_4f0ce4:
    // 0x4f0ce4: 0x40855000  mtc0        $a1, EntryHi
    ctx->pc = 0x4f0ce4u;
    ctx->cop0_entryhi = GPR_U32(ctx, 5) & 0xC00000FF;
label_4f0ce8:
    // 0x4f0ce8: 0x40861000  mtc0        $a2, EntryLo0
    ctx->pc = 0x4f0ce8u;
    ctx->cop0_entrylo0 = GPR_U32(ctx, 6) & 0x3FFFFFFF;
label_4f0cec:
    // 0x4f0cec: 0x40871800  mtc0        $a3, EntryLo1
    ctx->pc = 0x4f0cecu;
    ctx->cop0_entrylo1 = GPR_U32(ctx, 7) & 0x3FFFFFFF;
label_4f0cf0:
    // 0x4f0cf0: 0x40f  sync.p
    ctx->pc = 0x4f0cf0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4f0cf4:
    // 0x4f0cf4: 0x42000006  tlbwr
    ctx->pc = 0x4f0cf4u;
    runtime->handleTLBWR(rdram, ctx);
label_4f0cf8:
    // 0x4f0cf8: 0x40f  sync.p
    ctx->pc = 0x4f0cf8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4f0cfc:
    // 0x4f0cfc: 0x42000008  tlbp
    ctx->pc = 0x4f0cfcu;
    runtime->handleTLBP(rdram, ctx);
label_4f0d00:
    // 0x4f0d00: 0x40f  sync.p
    ctx->pc = 0x4f0d00u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4f0d04:
    // 0x4f0d04: 0x40020000  mfc0        $v0, Index
    ctx->pc = 0x4f0d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_index);
label_4f0d08:
    // 0x4f0d08: 0x3e00008  jr          $ra
label_4f0d0c:
    if (ctx->pc == 0x4F0D0Cu) {
        ctx->pc = 0x4F0D10u;
        goto label_4f0d10;
    }
    ctx->pc = 0x4F0D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F0D10u;
label_4f0d10:
    // 0x4f0d10: 0x2c820030  sltiu       $v0, $a0, 0x30
    ctx->pc = 0x4f0d10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
label_4f0d14:
    // 0x4f0d14: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_4f0d18:
    if (ctx->pc == 0x4F0D18u) {
        ctx->pc = 0x4F0D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0D14u;
        // 0x4f0d18: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0D1Cu;
        goto label_4f0d1c;
    }
    ctx->pc = 0x4F0D14u;
    {
        const bool branch_taken_0x4f0d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0D14u;
        // 0x4f0d18: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0d14) {
            ctx->pc = 0x4F0D44u;
            goto label_4f0d44;
        }
    }
    ctx->pc = 0x4F0D1Cu;
label_4f0d1c:
    // 0x4f0d1c: 0x40840000  mtc0        $a0, Index
    ctx->pc = 0x4f0d1cu;
    ctx->cop0_index = GPR_U32(ctx, 4) & 0x3F;
label_4f0d20:
    // 0x4f0d20: 0x40852800  mtc0        $a1, PageMask
    ctx->pc = 0x4f0d20u;
    ctx->cop0_pagemask = GPR_U32(ctx, 5) & 0x01FFE000;
label_4f0d24:
    // 0x4f0d24: 0x40865000  mtc0        $a2, EntryHi
    ctx->pc = 0x4f0d24u;
    ctx->cop0_entryhi = GPR_U32(ctx, 6) & 0xC00000FF;
label_4f0d28:
    // 0x4f0d28: 0x40871000  mtc0        $a3, EntryLo0
    ctx->pc = 0x4f0d28u;
    ctx->cop0_entrylo0 = GPR_U32(ctx, 7) & 0x3FFFFFFF;
label_4f0d2c:
    // 0x4f0d2c: 0x40881800  mtc0        $t0, EntryLo1
    ctx->pc = 0x4f0d2cu;
    ctx->cop0_entrylo1 = GPR_U32(ctx, 8) & 0x3FFFFFFF;
label_4f0d30:
    // 0x4f0d30: 0x40f  sync.p
    ctx->pc = 0x4f0d30u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4f0d34:
    // 0x4f0d34: 0x42000002  tlbwi
    ctx->pc = 0x4f0d34u;
    runtime->handleTLBWI(rdram, ctx);
label_4f0d38:
    // 0x4f0d38: 0x40f  sync.p
    ctx->pc = 0x4f0d38u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4f0d3c:
    // 0x4f0d3c: 0x3e00008  jr          $ra
label_4f0d40:
    if (ctx->pc == 0x4F0D40u) {
        ctx->pc = 0x4F0D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0D3Cu;
        // 0x4f0d40: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0D44u;
        goto label_4f0d44;
    }
    ctx->pc = 0x4F0D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0D3Cu;
        // 0x4f0d40: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F0D44u;
label_4f0d44:
    // 0x4f0d44: 0x3e00008  jr          $ra
label_4f0d48:
    if (ctx->pc == 0x4F0D48u) {
        ctx->pc = 0x4F0D4Cu;
        goto label_4f0d4c;
    }
    ctx->pc = 0x4F0D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F0D4Cu;
label_4f0d4c:
    // 0x4f0d4c: 0x0  nop
    ctx->pc = 0x4f0d4cu;
    // NOP
label_4f0d50:
    // 0x4f0d50: 0x2c820030  sltiu       $v0, $a0, 0x30
    ctx->pc = 0x4f0d50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
label_4f0d54:
    // 0x4f0d54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4f0d58:
    if (ctx->pc == 0x4F0D58u) {
        ctx->pc = 0x4F0D5Cu;
        goto label_4f0d5c;
    }
    ctx->pc = 0x4F0D54u;
    {
        const bool branch_taken_0x4f0d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f0d54) {
            ctx->pc = 0x4F0D64u;
            goto label_4f0d64;
        }
    }
    ctx->pc = 0x4F0D5Cu;
label_4f0d5c:
    // 0x4f0d5c: 0x3e00008  jr          $ra
label_4f0d60:
    if (ctx->pc == 0x4F0D60u) {
        ctx->pc = 0x4F0D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0D5Cu;
        // 0x4f0d60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0D64u;
        goto label_4f0d64;
    }
    ctx->pc = 0x4F0D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0D5Cu;
        // 0x4f0d60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F0D64u;
label_4f0d64:
    // 0x4f0d64: 0x40840000  mtc0        $a0, Index
    ctx->pc = 0x4f0d64u;
    ctx->cop0_index = GPR_U32(ctx, 4) & 0x3F;
label_4f0d68:
    // 0x4f0d68: 0x40f  sync.p
    ctx->pc = 0x4f0d68u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4f0d6c:
    // 0x4f0d6c: 0x42000001  tlbr
    ctx->pc = 0x4f0d6cu;
    runtime->handleTLBR(rdram, ctx);
label_4f0d70:
    // 0x4f0d70: 0x40f  sync.p
    ctx->pc = 0x4f0d70u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4f0d74:
    // 0x4f0d74: 0x40022800  mfc0        $v0, PageMask
    ctx->pc = 0x4f0d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_pagemask);
label_4f0d78:
    // 0x4f0d78: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4f0d78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4f0d7c:
    // 0x4f0d7c: 0x40035000  mfc0        $v1, EntryHi
    ctx->pc = 0x4f0d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_entryhi);
label_4f0d80:
    // 0x4f0d80: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4f0d80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_4f0d84:
    // 0x4f0d84: 0x40021000  mfc0        $v0, EntryLo0
    ctx->pc = 0x4f0d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_entrylo0);
label_4f0d88:
    // 0x4f0d88: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4f0d88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_4f0d8c:
    // 0x4f0d8c: 0x40031800  mfc0        $v1, EntryLo1
    ctx->pc = 0x4f0d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_entrylo1);
label_4f0d90:
    // 0x4f0d90: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4f0d90u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_4f0d94:
    // 0x4f0d94: 0x3e00008  jr          $ra
label_4f0d98:
    if (ctx->pc == 0x4F0D98u) {
        ctx->pc = 0x4F0D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0D94u;
        // 0x4f0d98: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0D9Cu;
        goto label_4f0d9c;
    }
    ctx->pc = 0x4F0D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0D94u;
        // 0x4f0d98: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F0D9Cu;
label_4f0d9c:
    // 0x4f0d9c: 0x0  nop
    ctx->pc = 0x4f0d9cu;
    // NOP
label_4f0da0:
    // 0x4f0da0: 0x40845000  mtc0        $a0, EntryHi
    ctx->pc = 0x4f0da0u;
    ctx->cop0_entryhi = GPR_U32(ctx, 4) & 0xC00000FF;
label_4f0da4:
    // 0x4f0da4: 0x40f  sync.p
    ctx->pc = 0x4f0da4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4f0da8:
    // 0x4f0da8: 0x42000008  tlbp
    ctx->pc = 0x4f0da8u;
    runtime->handleTLBP(rdram, ctx);
label_4f0dac:
    // 0x4f0dac: 0x40f  sync.p
    ctx->pc = 0x4f0dacu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4f0db0:
    // 0x4f0db0: 0x40040000  mfc0        $a0, Index
    ctx->pc = 0x4f0db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_index);
label_4f0db4:
    // 0x4f0db4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_4f0db8:
    if (ctx->pc == 0x4F0DB8u) {
        ctx->pc = 0x4F0DBCu;
        goto label_4f0dbc;
    }
    ctx->pc = 0x4F0DB4u;
    {
        const bool branch_taken_0x4f0db4 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x4f0db4) {
            ctx->pc = 0x4F0DC4u;
            goto label_4f0dc4;
        }
    }
    ctx->pc = 0x4F0DBCu;
label_4f0dbc:
    // 0x4f0dbc: 0x10000009  b           . + 4 + (0x9 << 2)
label_4f0dc0:
    if (ctx->pc == 0x4F0DC0u) {
        ctx->pc = 0x4F0DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0DBCu;
        // 0x4f0dc0: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0DC4u;
        goto label_4f0dc4;
    }
    ctx->pc = 0x4F0DBCu;
    {
        const bool branch_taken_0x4f0dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0DBCu;
        // 0x4f0dc0: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0dbc) {
            ctx->pc = 0x4F0DE4u;
            goto label_4f0de4;
        }
    }
    ctx->pc = 0x4F0DC4u;
label_4f0dc4:
    // 0x4f0dc4: 0x42000001  tlbr
    ctx->pc = 0x4f0dc4u;
    runtime->handleTLBR(rdram, ctx);
label_4f0dc8:
    // 0x4f0dc8: 0x40f  sync.p
    ctx->pc = 0x4f0dc8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4f0dcc:
    // 0x4f0dcc: 0x40022800  mfc0        $v0, PageMask
    ctx->pc = 0x4f0dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_pagemask);
label_4f0dd0:
    // 0x4f0dd0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4f0dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4f0dd4:
    // 0x4f0dd4: 0x40031000  mfc0        $v1, EntryLo0
    ctx->pc = 0x4f0dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_entrylo0);
label_4f0dd8:
    // 0x4f0dd8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4f0dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_4f0ddc:
    // 0x4f0ddc: 0x40021800  mfc0        $v0, EntryLo1
    ctx->pc = 0x4f0ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_entrylo1);
label_4f0de0:
    // 0x4f0de0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4f0de0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_4f0de4:
    // 0x4f0de4: 0x3e00008  jr          $ra
label_4f0de8:
    if (ctx->pc == 0x4F0DE8u) {
        ctx->pc = 0x4F0DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0DE4u;
        // 0x4f0de8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0DECu;
        goto label_4f0dec;
    }
    ctx->pc = 0x4F0DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0DE4u;
        // 0x4f0de8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F0DECu;
label_4f0dec:
    // 0x4f0dec: 0x0  nop
    ctx->pc = 0x4f0decu;
    // NOP
label_4f0df0:
    // 0x4f0df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f0df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4f0df4:
    // 0x4f0df4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4f0df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_4f0df8:
    // 0x4f0df8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f0df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f0dfc:
    // 0x4f0dfc: 0x32020fff  andi        $v0, $s0, 0xFFF
    ctx->pc = 0x4f0dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4095);
label_4f0e00:
    // 0x4f0e00: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_4f0e04:
    if (ctx->pc == 0x4F0E04u) {
        ctx->pc = 0x4F0E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0E00u;
        // 0x4f0e04: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0E08u;
        goto label_4f0e08;
    }
    ctx->pc = 0x4F0E00u;
    {
        const bool branch_taken_0x4f0e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F0E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0E00u;
        // 0x4f0e04: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0e00) {
            ctx->pc = 0x4F0E20u;
            goto label_4f0e20;
        }
    }
    ctx->pc = 0x4F0E08u;
label_4f0e08:
    // 0x4f0e08: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x4f0e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_4f0e0c:
    // 0x4f0e0c: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x4f0e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_4f0e10:
    // 0x4f0e10: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x4f0e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_4f0e14:
    // 0x4f0e14: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4f0e14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4f0e18:
    // 0x4f0e18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4f0e1c:
    if (ctx->pc == 0x4F0E1Cu) {
        ctx->pc = 0x4F0E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0E18u;
        // 0x4f0e1c: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0E20u;
        goto label_4f0e20;
    }
    ctx->pc = 0x4F0E18u;
    {
        const bool branch_taken_0x4f0e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F0E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0E18u;
        // 0x4f0e1c: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0e18) {
            ctx->pc = 0x4F0E28u;
            goto label_4f0e28;
        }
    }
    ctx->pc = 0x4F0E20u;
label_4f0e20:
    // 0x4f0e20: 0x1000003b  b           . + 4 + (0x3B << 2)
label_4f0e24:
    if (ctx->pc == 0x4F0E24u) {
        ctx->pc = 0x4F0E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0E20u;
        // 0x4f0e24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0E28u;
        goto label_4f0e28;
    }
    ctx->pc = 0x4F0E20u;
    {
        const bool branch_taken_0x4f0e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0E20u;
        // 0x4f0e24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0e20) {
            ctx->pc = 0x4F0F10u;
            goto label_4f0f10;
        }
    }
    ctx->pc = 0x4F0E28u;
label_4f0e28:
    // 0x4f0e28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4f0e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4f0e2c:
    // 0x4f0e2c: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x4f0e2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_4f0e30:
    // 0x4f0e30: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x4f0e30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_4f0e34:
    // 0x4f0e34: 0xc01d456  jal         func_075158
label_4f0e38:
    if (ctx->pc == 0x4F0E38u) {
        ctx->pc = 0x4F0E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0E34u;
        // 0x4f0e38: 0x37a70008  ori         $a3, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0E3Cu;
        goto label_4f0e3c;
    }
    ctx->pc = 0x4F0E34u;
    SET_GPR_U32(ctx, 31, 0x4F0E3Cu);
    ctx->pc = 0x4F0E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F0E34u;
    // 0x4f0e38: 0x37a70008  ori         $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x75158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x75158u, 0x4F0E34u, 0x4F0E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F0E3Cu;
label_4f0e3c:
    // 0x4f0e3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4f0e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f0e40:
    // 0x4f0e40: 0x4a10009  bgez        $a1, . + 4 + (0x9 << 2)
label_4f0e44:
    if (ctx->pc == 0x4F0E44u) {
        ctx->pc = 0x4F0E48u;
        goto label_4f0e48;
    }
    ctx->pc = 0x4F0E40u;
    {
        const bool branch_taken_0x4f0e40 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x4f0e40) {
            ctx->pc = 0x4F0E68u;
            goto label_4f0e68;
        }
    }
    ctx->pc = 0x4F0E48u;
label_4f0e48:
    // 0x4f0e48: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_4f0e4c:
    if (ctx->pc == 0x4F0E4Cu) {
        ctx->pc = 0x4F0E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0E48u;
        // 0x4f0e4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0E50u;
        goto label_4f0e50;
    }
    ctx->pc = 0x4F0E48u;
    {
        const bool branch_taken_0x4f0e48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0E48u;
        // 0x4f0e4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0e48) {
            ctx->pc = 0x4F0F10u;
            goto label_4f0f10;
        }
    }
    ctx->pc = 0x4F0E50u;
label_4f0e50:
    // 0x4f0e50: 0x40053000  mfc0        $a1, Wired
    ctx->pc = 0x4f0e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_wired);
label_4f0e54:
    // 0x4f0e54: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x4f0e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4f0e58:
    // 0x4f0e58: 0x40823000  mtc0        $v0, Wired
    ctx->pc = 0x4f0e58u;
    ctx->cop0_wired = GPR_U32(ctx, 2) & 0x3F; ctx->cop0_random = 47;
label_4f0e5c:
    // 0x4f0e5c: 0x40f  sync.p
    ctx->pc = 0x4f0e5cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4f0e60:
    // 0x4f0e60: 0x10000013  b           . + 4 + (0x13 << 2)
label_4f0e64:
    if (ctx->pc == 0x4F0E64u) {
        ctx->pc = 0x4F0E68u;
        goto label_4f0e68;
    }
    ctx->pc = 0x4F0E60u;
    {
        const bool branch_taken_0x4f0e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f0e60) {
            ctx->pc = 0x4F0EB0u;
            goto label_4f0eb0;
        }
    }
    ctx->pc = 0x4F0E68u;
label_4f0e68:
    // 0x4f0e68: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
label_4f0e6c:
    if (ctx->pc == 0x4F0E6Cu) {
        ctx->pc = 0x4F0E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0E68u;
        // 0x4f0e6c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0E70u;
        goto label_4f0e70;
    }
    ctx->pc = 0x4F0E68u;
    {
        const bool branch_taken_0x4f0e68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F0E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0E68u;
        // 0x4f0e6c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0e68) {
            ctx->pc = 0x4F0EB0u;
            goto label_4f0eb0;
        }
    }
    ctx->pc = 0x4F0E70u;
label_4f0e70:
    // 0x4f0e70: 0x3c03e001  lui         $v1, 0xE001
    ctx->pc = 0x4f0e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57345 << 16));
label_4f0e74:
    // 0x4f0e74: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x4f0e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_4f0e78:
    // 0x4f0e78: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x4f0e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f0e7c:
    // 0x4f0e7c: 0x40023000  mfc0        $v0, Wired
    ctx->pc = 0x4f0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_wired);
label_4f0e80:
    // 0x4f0e80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4f0e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4f0e84:
    // 0x4f0e84: 0x40823000  mtc0        $v0, Wired
    ctx->pc = 0x4f0e84u;
    ctx->cop0_wired = GPR_U32(ctx, 2) & 0x3F; ctx->cop0_random = 47;
label_4f0e88:
    // 0x4f0e88: 0x40850000  mtc0        $a1, Index
    ctx->pc = 0x4f0e88u;
    ctx->cop0_index = GPR_U32(ctx, 5) & 0x3F;
label_4f0e8c:
    // 0x4f0e8c: 0x40802800  mtc0        $zero, PageMask
    ctx->pc = 0x4f0e8cu;
    ctx->cop0_pagemask = GPR_U32(ctx, 0) & 0x01FFE000;
label_4f0e90:
    // 0x4f0e90: 0x40865000  mtc0        $a2, EntryHi
    ctx->pc = 0x4f0e90u;
    ctx->cop0_entryhi = GPR_U32(ctx, 6) & 0xC00000FF;
label_4f0e94:
    // 0x4f0e94: 0x40801000  mtc0        $zero, EntryLo0
    ctx->pc = 0x4f0e94u;
    ctx->cop0_entrylo0 = GPR_U32(ctx, 0) & 0x3FFFFFFF;
label_4f0e98:
    // 0x4f0e98: 0x40801800  mtc0        $zero, EntryLo1
    ctx->pc = 0x4f0e98u;
    ctx->cop0_entrylo1 = GPR_U32(ctx, 0) & 0x3FFFFFFF;
label_4f0e9c:
    // 0x4f0e9c: 0x40f  sync.p
    ctx->pc = 0x4f0e9cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4f0ea0:
    // 0x4f0ea0: 0x42000002  tlbwi
    ctx->pc = 0x4f0ea0u;
    runtime->handleTLBWI(rdram, ctx);
label_4f0ea4:
    // 0x4f0ea4: 0x40f  sync.p
    ctx->pc = 0x4f0ea4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4f0ea8:
    // 0x4f0ea8: 0x10000019  b           . + 4 + (0x19 << 2)
label_4f0eac:
    if (ctx->pc == 0x4F0EACu) {
        ctx->pc = 0x4F0EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0EA8u;
        // 0x4f0eac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0EB0u;
        goto label_4f0eb0;
    }
    ctx->pc = 0x4F0EA8u;
    {
        const bool branch_taken_0x4f0ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F0EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0EA8u;
        // 0x4f0eac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0ea8) {
            ctx->pc = 0x4F0F10u;
            goto label_4f0f10;
        }
    }
    ctx->pc = 0x4F0EB0u;
label_4f0eb0:
    // 0x4f0eb0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4f0eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4f0eb4:
    // 0x4f0eb4: 0x26041000  addiu       $a0, $s0, 0x1000
    ctx->pc = 0x4f0eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4096));
label_4f0eb8:
    // 0x4f0eb8: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x4f0eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_4f0ebc:
    // 0x4f0ebc: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x4f0ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
label_4f0ec0:
    // 0x4f0ec0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4f0ec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4f0ec4:
    // 0x4f0ec4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x4f0ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_4f0ec8:
    // 0x4f0ec8: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x4f0ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_4f0ecc:
    // 0x4f0ecc: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x4f0eccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
label_4f0ed0:
    // 0x4f0ed0: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x4f0ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_4f0ed4:
    // 0x4f0ed4: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x4f0ed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31);
label_4f0ed8:
    // 0x4f0ed8: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x4f0ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
label_4f0edc:
    // 0x4f0edc: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x4f0edcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
label_4f0ee0:
    // 0x4f0ee0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4f0ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_4f0ee4:
    // 0x4f0ee4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x4f0ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_4f0ee8:
    // 0x4f0ee8: 0x40850000  mtc0        $a1, Index
    ctx->pc = 0x4f0ee8u;
    ctx->cop0_index = GPR_U32(ctx, 5) & 0x3F;
label_4f0eec:
    // 0x4f0eec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4f0eecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f0ef0:
    // 0x4f0ef0: 0x40832800  mtc0        $v1, PageMask
    ctx->pc = 0x4f0ef0u;
    ctx->cop0_pagemask = GPR_U32(ctx, 3) & 0x01FFE000;
label_4f0ef4:
    // 0x4f0ef4: 0x40865000  mtc0        $a2, EntryHi
    ctx->pc = 0x4f0ef4u;
    ctx->cop0_entryhi = GPR_U32(ctx, 6) & 0xC00000FF;
label_4f0ef8:
    // 0x4f0ef8: 0x40821000  mtc0        $v0, EntryLo0
    ctx->pc = 0x4f0ef8u;
    ctx->cop0_entrylo0 = GPR_U32(ctx, 2) & 0x3FFFFFFF;
label_4f0efc:
    // 0x4f0efc: 0x40841800  mtc0        $a0, EntryLo1
    ctx->pc = 0x4f0efcu;
    ctx->cop0_entrylo1 = GPR_U32(ctx, 4) & 0x3FFFFFFF;
label_4f0f00:
    // 0x4f0f00: 0x40f  sync.p
    ctx->pc = 0x4f0f00u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4f0f04:
    // 0x4f0f04: 0x42000002  tlbwi
    ctx->pc = 0x4f0f04u;
    runtime->handleTLBWI(rdram, ctx);
label_4f0f08:
    // 0x4f0f08: 0x40f  sync.p
    ctx->pc = 0x4f0f08u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4f0f0c:
    // 0x4f0f0c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4f0f0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f0f10:
    // 0x4f0f10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4f0f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4f0f14:
    // 0x4f0f14: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4f0f14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f0f18:
    // 0x4f0f18: 0x3e00008  jr          $ra
label_4f0f1c:
    if (ctx->pc == 0x4F0F1Cu) {
        ctx->pc = 0x4F0F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0F18u;
        // 0x4f0f1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0F20u;
        goto label_4f0f20;
    }
    ctx->pc = 0x4F0F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F0F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0F18u;
        // 0x4f0f1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F0F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F0F20u;
label_4f0f20:
    // 0x4f0f20: 0x0  nop
    ctx->pc = 0x4f0f20u;
    // NOP
label_4f0f24:
    // 0x4f0f24: 0x0  nop
    ctx->pc = 0x4f0f24u;
    // NOP
label_4f0f28:
    // 0x4f0f28: 0x0  nop
    ctx->pc = 0x4f0f28u;
    // NOP
label_4f0f2c:
    // 0x4f0f2c: 0x0  nop
    ctx->pc = 0x4f0f2cu;
    // NOP
label_4f0f30:
    // 0x4f0f30: 0x0  nop
    ctx->pc = 0x4f0f30u;
    // NOP
label_4f0f34:
    // 0x4f0f34: 0x0  nop
    ctx->pc = 0x4f0f34u;
    // NOP
label_4f0f38:
    // 0x4f0f38: 0x0  nop
    ctx->pc = 0x4f0f38u;
    // NOP
label_4f0f3c:
    // 0x4f0f3c: 0x0  nop
    ctx->pc = 0x4f0f3cu;
    // NOP
label_4f0f40:
    // 0x4f0f40: 0x0  nop
    ctx->pc = 0x4f0f40u;
    // NOP
label_4f0f44:
    // 0x4f0f44: 0x0  nop
    ctx->pc = 0x4f0f44u;
    // NOP
label_4f0f48:
    // 0x4f0f48: 0x55  .word       0x00000055                   # INVALID     $zero, $zero, 0x55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f0f48u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x4F0F48 raw=0x00000055");
label_4f0f4c:
    // 0x4f0f4c: 0x80075038  lb          $a3, 0x5038($zero)
    ctx->pc = 0x4f0f4cu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x5038u));
label_4f0f50:
    // 0x4f0f50: 0x56  .word       0x00000056                   # dsrlv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f0f50u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_4f0f54:
    // 0x4f0f54: 0x800750c8  lb          $a3, 0x50C8($zero)
    ctx->pc = 0x4f0f54u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x50C8u));
label_4f0f58:
    // 0x4f0f58: 0x57  .word       0x00000057                   # dsrav       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f0f58u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_4f0f5c:
    // 0x4f0f5c: 0x80075108  lb          $a3, 0x5108($zero)
    ctx->pc = 0x4f0f5cu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x5108u));
label_4f0f60:
    // 0x4f0f60: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4f0f60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4f0f64:
    // 0x4f0f64: 0x80075158  lb          $a3, 0x5158($zero)
    ctx->pc = 0x4f0f64u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x5158u));
label_4f0f68:
    // 0x4f0f68: 0x59  .word       0x00000059                   # multu       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f0f68u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4f0f6c:
    // 0x4f0f6c: 0x800751a8  lb          $a3, 0x51A8($zero)
    ctx->pc = 0x4f0f6cu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x51A8u));
label_4f0f70:
    // 0x4f0f70: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x4f0f70u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_4f0f74:
    // 0x4f0f74: 0x80075330  lb          $a3, 0x5330($zero)
    ctx->pc = 0x4f0f74u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x5330u));
label_4f0f78:
    // 0x4f0f78: 0x0  nop
    ctx->pc = 0x4f0f78u;
    // NOP
label_4f0f7c:
    // 0x4f0f7c: 0x0  nop
    ctx->pc = 0x4f0f7cu;
    // NOP
label_4f0f80:
    // 0x4f0f80: 0x0  nop
    ctx->pc = 0x4f0f80u;
    // NOP
label_4f0f84:
    // 0x4f0f84: 0x0  nop
    ctx->pc = 0x4f0f84u;
    // NOP
label_4f0f88:
    // 0x4f0f88: 0x0  nop
    ctx->pc = 0x4f0f88u;
    // NOP
label_4f0f8c:
    // 0x4f0f8c: 0x0  nop
    ctx->pc = 0x4f0f8cu;
    // NOP
label_4f0f90:
    // 0x4f0f90: 0x0  nop
    ctx->pc = 0x4f0f90u;
    // NOP
label_4f0f94:
    // 0x4f0f94: 0x0  nop
    ctx->pc = 0x4f0f94u;
    // NOP
label_4f0f98:
    // 0x4f0f98: 0x0  nop
    ctx->pc = 0x4f0f98u;
    // NOP
label_4f0f9c:
    // 0x4f0f9c: 0x0  nop
    ctx->pc = 0x4f0f9cu;
    // NOP
label_4f0fa0:
    // 0x4f0fa0: 0x0  nop
    ctx->pc = 0x4f0fa0u;
    // NOP
label_4f0fa4:
    // 0x4f0fa4: 0x0  nop
    ctx->pc = 0x4f0fa4u;
    // NOP
label_4f0fa8:
    // 0x4f0fa8: 0x0  nop
    ctx->pc = 0x4f0fa8u;
    // NOP
label_4f0fac:
    // 0x4f0fac: 0x0  nop
    ctx->pc = 0x4f0facu;
    // NOP
label_4f0fb0:
    // 0x4f0fb0: 0x0  nop
    ctx->pc = 0x4f0fb0u;
    // NOP
label_4f0fb4:
    // 0x4f0fb4: 0x0  nop
    ctx->pc = 0x4f0fb4u;
    // NOP
label_4f0fb8:
    // 0x4f0fb8: 0x0  nop
    ctx->pc = 0x4f0fb8u;
    // NOP
label_4f0fbc:
    // 0x4f0fbc: 0x0  nop
    ctx->pc = 0x4f0fbcu;
    // NOP
label_4f0fc0:
    // 0x4f0fc0: 0x0  nop
    ctx->pc = 0x4f0fc0u;
    // NOP
label_4f0fc4:
    // 0x4f0fc4: 0x0  nop
    ctx->pc = 0x4f0fc4u;
    // NOP
label_4f0fc8:
    // 0x4f0fc8: 0x5a  .word       0x0000005A                   # div         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f0fc8u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_4f0fcc:
    // 0x4f0fcc: 0x307498  .word       0x00307498                   # mult        $t6, $at, $s0 # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4f0fccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_4f0fd0:
    // 0x4f0fd0: 0x5b  .word       0x0000005B                   # divu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f0fd0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_4f0fd4:
    // 0x4f0fd4: 0x80075000  lb          $a3, 0x5000($zero)
    ctx->pc = 0x4f0fd4u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x5000u));
label_4f0fd8:
    // 0x4f0fd8: 0x54  .word       0x00000054                   # dsllv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f0fd8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_4f0fdc:
    // 0x4f0fdc: 0x307a00  .word       0x00307A00                   # sll         $t7, $s0, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f0fdcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
label_4f0fe0:
    // 0x4f0fe0: 0x55  .word       0x00000055                   # INVALID     $zero, $zero, 0x55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f0fe0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x4F0FE0 raw=0x00000055");
label_4f0fe4:
    // 0x4f0fe4: 0x0  nop
    ctx->pc = 0x4f0fe4u;
    // NOP
label_4f0fe8:
    // 0x4f0fe8: 0x56  .word       0x00000056                   # dsrlv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f0fe8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_4f0fec:
    // 0x4f0fec: 0x0  nop
    ctx->pc = 0x4f0fecu;
    // NOP
label_4f0ff0:
    // 0x4f0ff0: 0x57  .word       0x00000057                   # dsrav       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f0ff0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_4f0ff4:
    // 0x4f0ff4: 0x0  nop
    ctx->pc = 0x4f0ff4u;
    // NOP
label_4f0ff8:
    // 0x4f0ff8: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4f0ff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4f0ffc:
    // 0x4f0ffc: 0x0  nop
    ctx->pc = 0x4f0ffcu;
    // NOP
label_4f1000:
    // 0x4f1000: 0x59  .word       0x00000059                   # multu       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f1000u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4f1004:
    // 0x4f1004: 0x0  nop
    ctx->pc = 0x4f1004u;
    // NOP
label_4f1008:
    // 0x4f1008: 0x0  nop
    ctx->pc = 0x4f1008u;
    // NOP
label_4f100c:
    // 0x4f100c: 0x70000000  madd        $zero, $zero, $zero
    ctx->pc = 0x4f100cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
label_4f1010:
    // 0x4f1010: 0x80000007  lb          $zero, 0x7($zero)
    ctx->pc = 0x4f1010u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x7u));
label_4f1014:
    // 0x4f1014: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x4f1014u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_4f1018:
    // 0x4f1018: 0x6000  sll         $t4, $zero, 0
    ctx->pc = 0x4f1018u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_4f101c:
    // 0x4f101c: 0xffff8000  sd          $ra, -0x8000($ra)
    ctx->pc = 0x4f101cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294934528), GPR_U64(ctx, 31));
label_4f1020:
    // 0x4f1020: 0x1e1f  .word       0x00001E1F                   # ddivu       $v1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f1020u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4F1020 raw=0x00001E1F");
label_4f1024:
    // 0x4f1024: 0x1f1f  .word       0x00001F1F                   # ddivu       $v1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f1024u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4F1024 raw=0x00001F1F");
label_4f1028:
    // 0x4f1028: 0x0  nop
    ctx->pc = 0x4f1028u;
    // NOP
label_4f102c:
    // 0x4f102c: 0x10000000  b           . + 4 + (0x0 << 2)
label_4f1030:
    if (ctx->pc == 0x4F1030u) {
        ctx->pc = 0x4F1030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F102Cu;
        // 0x4f1030: 0x400017  dsrav       $zero, $zero, $v0 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1034u;
        goto label_4f1034;
    }
    ctx->pc = 0x4F102Cu;
    {
        const bool branch_taken_0x4f102c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F102Cu;
        // 0x4f1030: 0x400017  dsrav       $zero, $zero, $v0 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f102c) {
            ctx->pc = 0x4F1030u;
            goto label_4f1030;
        }
    }
    ctx->pc = 0x4F1034u;
label_4f1034:
    // 0x4f1034: 0x400053  .word       0x00400053                   # mtlo        $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f1034u;
    ctx->lo = GPR_U64(ctx, 2);
label_4f1038:
    // 0x4f1038: 0x0  nop
    ctx->pc = 0x4f1038u;
    // NOP
label_4f103c:
    // 0x4f103c: 0x10002000  b           . + 4 + (0x2000 << 2)
label_4f1040:
    if (ctx->pc == 0x4F1040u) {
        ctx->pc = 0x4F1040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F103Cu;
        // 0x4f1040: 0x400097  .word       0x00400097                   # dsrav       $zero, $zero, $v0 # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1044u;
        goto label_4f1044;
    }
    ctx->pc = 0x4F103Cu;
    {
        const bool branch_taken_0x4f103c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F103Cu;
        // 0x4f1040: 0x400097  .word       0x00400097                   # dsrav       $zero, $zero, $v0 # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f103c) {
            ctx->pc = 0x4F9040u;
            return;
        }
    }
    ctx->pc = 0x4F1044u;
label_4f1044:
    // 0x4f1044: 0x4000d7  .word       0x004000D7                   # dsrav       $zero, $zero, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f1044u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_4f1048:
    // 0x4f1048: 0x0  nop
    ctx->pc = 0x4f1048u;
    // NOP
label_4f104c:
    // 0x4f104c: 0x10004000  b           . + 4 + (0x4000 << 2)
label_4f1050:
    if (ctx->pc == 0x4F1050u) {
        ctx->pc = 0x4F1050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F104Cu;
        // 0x4f1050: 0x400117  .word       0x00400117                   # dsrav       $zero, $zero, $v0 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1054u;
        goto label_4f1054;
    }
    ctx->pc = 0x4F104Cu;
    {
        const bool branch_taken_0x4f104c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F104Cu;
        // 0x4f1050: 0x400117  .word       0x00400117                   # dsrav       $zero, $zero, $v0 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f104c) {
            ctx->pc = 0x501050u;
            return;
        }
    }
    ctx->pc = 0x4F1054u;
label_4f1054:
    // 0x4f1054: 0x400157  .word       0x00400157                   # dsrav       $zero, $zero, $v0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f1054u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_4f1058:
    // 0x4f1058: 0x0  nop
    ctx->pc = 0x4f1058u;
    // NOP
label_4f105c:
    // 0x4f105c: 0x10006000  b           . + 4 + (0x6000 << 2)
label_4f1060:
    if (ctx->pc == 0x4F1060u) {
        ctx->pc = 0x4F1060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F105Cu;
        // 0x4f1060: 0x400197  .word       0x00400197                   # dsrav       $zero, $zero, $v0 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1064u;
        goto label_4f1064;
    }
    ctx->pc = 0x4F105Cu;
    {
        const bool branch_taken_0x4f105c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F105Cu;
        // 0x4f1060: 0x400197  .word       0x00400197                   # dsrav       $zero, $zero, $v0 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f105c) {
            ctx->pc = 0x509060u;
            return;
        }
    }
    ctx->pc = 0x4F1064u;
label_4f1064:
    // 0x4f1064: 0x4001d7  .word       0x004001D7                   # dsrav       $zero, $zero, $v0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f1064u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_4f1068:
    // 0x4f1068: 0x0  nop
    ctx->pc = 0x4f1068u;
    // NOP
label_4f106c:
    // 0x4f106c: 0x10008000  b           . + 4 + (-0x8000 << 2)
label_4f1070:
    if (ctx->pc == 0x4F1070u) {
        ctx->pc = 0x4F1070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F106Cu;
        // 0x4f1070: 0x400217  .word       0x00400217                   # dsrav       $zero, $zero, $v0 # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1074u;
        goto label_4f1074;
    }
    ctx->pc = 0x4F106Cu;
    {
        const bool branch_taken_0x4f106c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F106Cu;
        // 0x4f1070: 0x400217  .word       0x00400217                   # dsrav       $zero, $zero, $v0 # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f106c) {
            ctx->pc = 0x4D1070u;
            return;
        }
    }
    ctx->pc = 0x4F1074u;
label_4f1074:
    // 0x4f1074: 0x400257  .word       0x00400257                   # dsrav       $zero, $zero, $v0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f1074u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_4f1078:
    // 0x4f1078: 0x0  nop
    ctx->pc = 0x4f1078u;
    // NOP
label_4f107c:
    // 0x4f107c: 0x1000a000  b           . + 4 + (-0x6000 << 2)
label_4f1080:
    if (ctx->pc == 0x4F1080u) {
        ctx->pc = 0x4F1080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F107Cu;
        // 0x4f1080: 0x400297  .word       0x00400297                   # dsrav       $zero, $zero, $v0 # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1084u;
        goto label_4f1084;
    }
    ctx->pc = 0x4F107Cu;
    {
        const bool branch_taken_0x4f107c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F107Cu;
        // 0x4f1080: 0x400297  .word       0x00400297                   # dsrav       $zero, $zero, $v0 # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f107c) {
            ctx->pc = 0x4D9080u;
            return;
        }
    }
    ctx->pc = 0x4F1084u;
label_4f1084:
    // 0x4f1084: 0x4002d7  .word       0x004002D7                   # dsrav       $zero, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f1084u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_4f1088:
    // 0x4f1088: 0x0  nop
    ctx->pc = 0x4f1088u;
    // NOP
label_4f108c:
    // 0x4f108c: 0x1000c000  b           . + 4 + (-0x4000 << 2)
label_4f1090:
    if (ctx->pc == 0x4F1090u) {
        ctx->pc = 0x4F1090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F108Cu;
        // 0x4f1090: 0x400313  .word       0x00400313                   # mtlo        $v0 # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->lo = GPR_U64(ctx, 2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1094u;
        goto label_4f1094;
    }
    ctx->pc = 0x4F108Cu;
    {
        const bool branch_taken_0x4f108c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F108Cu;
        // 0x4f1090: 0x400313  .word       0x00400313                   # mtlo        $v0 # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->lo = GPR_U64(ctx, 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f108c) {
            ctx->pc = 0x4E1090u;
            return;
        }
    }
    ctx->pc = 0x4F1094u;
label_4f1094:
    // 0x4f1094: 0x400357  .word       0x00400357                   # dsrav       $zero, $zero, $v0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f1094u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_4f1098:
    // 0x4f1098: 0x0  nop
    ctx->pc = 0x4f1098u;
    // NOP
label_4f109c:
    // 0x4f109c: 0x1000e000  b           . + 4 + (-0x2000 << 2)
label_4f10a0:
    if (ctx->pc == 0x4F10A0u) {
        ctx->pc = 0x4F10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F109Cu;
        // 0x4f10a0: 0x400397  .word       0x00400397                   # dsrav       $zero, $zero, $v0 # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F10A4u;
        goto label_4f10a4;
    }
    ctx->pc = 0x4F109Cu;
    {
        const bool branch_taken_0x4f109c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F109Cu;
        // 0x4f10a0: 0x400397  .word       0x00400397                   # dsrav       $zero, $zero, $v0 # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f109c) {
            ctx->pc = 0x4E90A0u;
            return;
        }
    }
    ctx->pc = 0x4F10A4u;
label_4f10a4:
    // 0x4f10a4: 0x4003d7  .word       0x004003D7                   # dsrav       $zero, $zero, $v0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f10a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_4f10a8:
    // 0x4f10a8: 0x1e000  sll         $gp, $at, 0
    ctx->pc = 0x4f10a8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_4f10ac:
    // 0x4f10ac: 0x11000000  beqz        $t0, . + 4 + (0x0 << 2)
label_4f10b0:
    if (ctx->pc == 0x4F10B0u) {
        ctx->pc = 0x4F10B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F10ACu;
        // 0x4f10b0: 0x440017  dsrav       $zero, $a0, $v0 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 4) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F10B4u;
        goto label_4f10b4;
    }
    ctx->pc = 0x4F10ACu;
    {
        const bool branch_taken_0x4f10ac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F10B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F10ACu;
        // 0x4f10b0: 0x440017  dsrav       $zero, $a0, $v0 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 4) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f10ac) {
            ctx->pc = 0x4F10B0u;
            goto label_4f10b0;
        }
    }
    ctx->pc = 0x4F10B4u;
label_4f10b4:
    // 0x4f10b4: 0x440415  .word       0x00440415                   # INVALID     $v0, $a0, 0x415 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f10b4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x4F10B4 raw=0x00440415");
label_4f10b8:
    // 0x4f10b8: 0x1e000  sll         $gp, $at, 0
    ctx->pc = 0x4f10b8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_4f10bc:
    // 0x4f10bc: 0x12000000  beqz        $s0, . + 4 + (0x0 << 2)
label_4f10c0:
    if (ctx->pc == 0x4F10C0u) {
        ctx->pc = 0x4F10C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F10BCu;
        // 0x4f10c0: 0x480017  dsrav       $zero, $t0, $v0 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 8) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F10C4u;
        goto label_4f10c4;
    }
    ctx->pc = 0x4F10BCu;
    {
        const bool branch_taken_0x4f10bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F10C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F10BCu;
        // 0x4f10c0: 0x480017  dsrav       $zero, $t0, $v0 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 8) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f10bc) {
            ctx->pc = 0x4F10C0u;
            goto label_4f10c0;
        }
    }
    ctx->pc = 0x4F10C4u;
label_4f10c4:
    // 0x4f10c4: 0x480415  .word       0x00480415                   # INVALID     $v0, $t0, 0x415 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f10c4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x4F10C4 raw=0x00480415");
label_4f10c8:
    // 0x4f10c8: 0x1ffe000  .word       0x01FFE000                   # sll         $gp, $ra, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f10c8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_4f10cc:
    // 0x4f10cc: 0x1e000000  bgtz        $s0, . + 4 + (0x0 << 2)
label_4f10d0:
    if (ctx->pc == 0x4F10D0u) {
        ctx->pc = 0x4F10D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F10CCu;
        // 0x4f10d0: 0x780017  dsrav       $zero, $t8, $v1 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 24) >> (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F10D4u;
        goto label_4f10d4;
    }
    ctx->pc = 0x4F10CCu;
    {
        const bool branch_taken_0x4f10cc = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x4F10D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F10CCu;
        // 0x4f10d0: 0x780017  dsrav       $zero, $t8, $v1 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 24) >> (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f10cc) {
            ctx->pc = 0x4F10D0u;
            goto label_4f10d0;
        }
    }
    ctx->pc = 0x4F10D4u;
label_4f10d4:
    // 0x4f10d4: 0x7c0017  dsrav       $zero, $gp, $v1
    ctx->pc = 0x4f10d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 28) >> (GPR_U32(ctx, 3) & 0x3F));
label_4f10d8:
    // 0x4f10d8: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x4f10d8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_4f10dc:
    // 0x4f10dc: 0x80000  sll         $zero, $t0, 0
    ctx->pc = 0x4f10dcu;
    
label_4f10e0:
    // 0x4f10e0: 0x201f  ddivu       $a0, $zero, $zero
    ctx->pc = 0x4f10e0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4F10E0 raw=0x0000201F");
label_4f10e4:
    // 0x4f10e4: 0x301f  ddivu       $a2, $zero, $zero
    ctx->pc = 0x4f10e4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4F10E4 raw=0x0000301F");
label_4f10e8:
    // 0x4f10e8: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x4f10e8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_4f10ec:
    // 0x4f10ec: 0x100000  sll         $zero, $s0, 0
    ctx->pc = 0x4f10ecu;
    
label_4f10f0:
    // 0x4f10f0: 0x401f  ddivu       $t0, $zero, $zero
    ctx->pc = 0x4f10f0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4F10F0 raw=0x0000401F");
label_4f10f4:
    // 0x4f10f4: 0x501f  ddivu       $t2, $zero, $zero
    ctx->pc = 0x4f10f4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4F10F4 raw=0x0000501F");
label_4f10f8:
    // 0x4f10f8: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x4f10f8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_4f10fc:
    // 0x4f10fc: 0x180000  sll         $zero, $t8, 0
    ctx->pc = 0x4f10fcu;
    
label_4f1100:
    // 0x4f1100: 0x601f  ddivu       $t4, $zero, $zero
    ctx->pc = 0x4f1100u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4F1100 raw=0x0000601F");
label_4f1104:
    // 0x4f1104: 0x701f  ddivu       $t6, $zero, $zero
    ctx->pc = 0x4f1104u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4F1104 raw=0x0000701F");
label_4f1108:
    // 0x4f1108: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x4f1108u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_4f110c:
    // 0x4f110c: 0x200000  .word       0x00200000                   # sll         $zero, $zero, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f110cu;
    // NOP
label_4f1110:
    // 0x4f1110: 0x801f  ddivu       $s0, $zero, $zero
    ctx->pc = 0x4f1110u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4F1110 raw=0x0000801F");
label_4f1114:
    // 0x4f1114: 0xc01f  ddivu       $t8, $zero, $zero
    ctx->pc = 0x4f1114u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4F1114 raw=0x0000C01F");
label_4f1118:
    // 0x4f1118: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x4f1118u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_4f111c:
    // 0x4f111c: 0x400000  .word       0x00400000                   # sll         $zero, $zero, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f111cu;
    // NOP
label_4f1120:
    // 0x4f1120: 0x1001f  ddivu       $zero, $zero, $at
    ctx->pc = 0x4f1120u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4F1120 raw=0x0001001F");
label_4f1124:
    // 0x4f1124: 0x1401f  ddivu       $t0, $zero, $at
    ctx->pc = 0x4f1124u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4F1124 raw=0x0001401F");
label_4f1128:
    // 0x4f1128: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x4f1128u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_4f112c:
    // 0x4f112c: 0x600000  .word       0x00600000                   # sll         $zero, $zero, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f112cu;
    // NOP
label_4f1130:
    // 0x4f1130: 0x1801f  ddivu       $s0, $zero, $at
    ctx->pc = 0x4f1130u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4F1130 raw=0x0001801F");
label_4f1134:
    // 0x4f1134: 0x1c01f  ddivu       $t8, $zero, $at
    ctx->pc = 0x4f1134u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4F1134 raw=0x0001C01F");
label_4f1138:
    // 0x4f1138: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f1138u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_4f113c:
    // 0x4f113c: 0x800000  .word       0x00800000                   # sll         $zero, $zero, 0 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f113cu;
    // NOP
label_4f1140:
    // 0x4f1140: 0x2001f  ddivu       $zero, $zero, $v0
    ctx->pc = 0x4f1140u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4F1140 raw=0x0002001F");
label_4f1144:
    // 0x4f1144: 0x3001f  ddivu       $zero, $zero, $v1
    ctx->pc = 0x4f1144u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4F1144 raw=0x0003001F");
label_4f1148:
    // 0x4f1148: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f1148u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_4f114c:
    // 0x4f114c: 0x1000000  .word       0x01000000                   # sll         $zero, $zero, 0 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f114cu;
    // NOP
label_4f1150:
    // 0x4f1150: 0x4001f  ddivu       $zero, $zero, $a0
    ctx->pc = 0x4f1150u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4F1150 raw=0x0004001F");
label_4f1154:
    // 0x4f1154: 0x5001f  ddivu       $zero, $zero, $a1
    ctx->pc = 0x4f1154u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4F1154 raw=0x0005001F");
label_4f1158:
    // 0x4f1158: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f1158u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_4f115c:
    // 0x4f115c: 0x1800000  .word       0x01800000                   # sll         $zero, $zero, 0 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f115cu;
    // NOP
label_4f1160:
    // 0x4f1160: 0x6001f  ddivu       $zero, $zero, $a2
    ctx->pc = 0x4f1160u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4F1160 raw=0x0006001F");
label_4f1164:
    // 0x4f1164: 0x7001f  ddivu       $zero, $zero, $a3
    ctx->pc = 0x4f1164u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4F1164 raw=0x0007001F");
label_4f1168:
    // 0x4f1168: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x4f1168u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_4f116c:
    // 0x4f116c: 0x20080000  addi        $t0, $zero, 0x0
    ctx->pc = 0x4f116cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_4f1170:
    // 0x4f1170: 0x2017  dsrav       $a0, $zero, $zero
    ctx->pc = 0x4f1170u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_4f1174:
    // 0x4f1174: 0x3017  dsrav       $a2, $zero, $zero
    ctx->pc = 0x4f1174u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_4f1178:
    // 0x4f1178: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x4f1178u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_4f117c:
    // 0x4f117c: 0x20100000  addi        $s0, $zero, 0x0
    ctx->pc = 0x4f117cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
label_4f1180:
    // 0x4f1180: 0x4017  dsrav       $t0, $zero, $zero
    ctx->pc = 0x4f1180u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_4f1184:
    // 0x4f1184: 0x5017  dsrav       $t2, $zero, $zero
    ctx->pc = 0x4f1184u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_4f1188:
    // 0x4f1188: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x4f1188u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_4f118c:
    // 0x4f118c: 0x20180000  addi        $t8, $zero, 0x0
    ctx->pc = 0x4f118cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
label_4f1190:
    // 0x4f1190: 0x6017  dsrav       $t4, $zero, $zero
    ctx->pc = 0x4f1190u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_4f1194:
    // 0x4f1194: 0x7017  dsrav       $t6, $zero, $zero
    ctx->pc = 0x4f1194u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_4f1198:
    // 0x4f1198: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x4f1198u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_4f119c:
    // 0x4f119c: 0x20200000  addi        $zero, $at, 0x0
    ctx->pc = 0x4f119cu;
    // NOP (addi to $zero)
label_4f11a0:
    // 0x4f11a0: 0x8017  dsrav       $s0, $zero, $zero
    ctx->pc = 0x4f11a0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_4f11a4:
    // 0x4f11a4: 0xc017  dsrav       $t8, $zero, $zero
    ctx->pc = 0x4f11a4u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_4f11a8:
    // 0x4f11a8: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x4f11a8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_4f11ac:
    // 0x4f11ac: 0x20400000  addi        $zero, $v0, 0x0
    ctx->pc = 0x4f11acu;
    // NOP (addi to $zero)
label_4f11b0:
    // 0x4f11b0: 0x10017  dsrav       $zero, $at, $zero
    ctx->pc = 0x4f11b0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_4f11b4:
    // 0x4f11b4: 0x14017  dsrav       $t0, $at, $zero
    ctx->pc = 0x4f11b4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_4f11b8:
    // 0x4f11b8: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x4f11b8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_4f11bc:
    // 0x4f11bc: 0x20600000  addi        $zero, $v1, 0x0
    ctx->pc = 0x4f11bcu;
    // NOP (addi to $zero)
label_4f11c0:
    // 0x4f11c0: 0x18017  dsrav       $s0, $at, $zero
    ctx->pc = 0x4f11c0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_4f11c4:
    // 0x4f11c4: 0x1c017  dsrav       $t8, $at, $zero
    ctx->pc = 0x4f11c4u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_4f11c8:
    // 0x4f11c8: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f11c8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_4f11cc:
    // 0x4f11cc: 0x20800000  addi        $zero, $a0, 0x0
    ctx->pc = 0x4f11ccu;
    // NOP (addi to $zero)
label_4f11d0:
    // 0x4f11d0: 0x20017  dsrav       $zero, $v0, $zero
    ctx->pc = 0x4f11d0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_4f11d4:
    // 0x4f11d4: 0x30017  dsrav       $zero, $v1, $zero
    ctx->pc = 0x4f11d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_4f11d8:
    // 0x4f11d8: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f11d8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_4f11dc:
    // 0x4f11dc: 0x21000000  addi        $zero, $t0, 0x0
    ctx->pc = 0x4f11dcu;
    // NOP (addi to $zero)
label_4f11e0:
    // 0x4f11e0: 0x40017  dsrav       $zero, $a0, $zero
    ctx->pc = 0x4f11e0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 4) >> (GPR_U32(ctx, 0) & 0x3F));
label_4f11e4:
    // 0x4f11e4: 0x50017  dsrav       $zero, $a1, $zero
    ctx->pc = 0x4f11e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 5) >> (GPR_U32(ctx, 0) & 0x3F));
label_4f11e8:
    // 0x4f11e8: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f11e8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_4f11ec:
    // 0x4f11ec: 0x21800000  addi        $zero, $t4, 0x0
    ctx->pc = 0x4f11ecu;
    // NOP (addi to $zero)
label_4f11f0:
    // 0x4f11f0: 0x60017  dsrav       $zero, $a2, $zero
    ctx->pc = 0x4f11f0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 6) >> (GPR_U32(ctx, 0) & 0x3F));
label_4f11f4:
    // 0x4f11f4: 0x70017  dsrav       $zero, $a3, $zero
    ctx->pc = 0x4f11f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 7) >> (GPR_U32(ctx, 0) & 0x3F));
label_4f11f8:
    // 0x4f11f8: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x4f11f8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_4f11fc:
    // 0x4f11fc: 0x30100000  andi        $s0, $zero, 0x0
    ctx->pc = 0x4f11fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)0);
label_4f1200:
    // 0x4f1200: 0x403f  dsra32      $t0, $zero, 0
    ctx->pc = 0x4f1200u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> (32 + 0));
label_4f1204:
    // 0x4f1204: 0x503f  dsra32      $t2, $zero, 0
    ctx->pc = 0x4f1204u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 0) >> (32 + 0));
label_4f1208:
    // 0x4f1208: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x4f1208u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_4f120c:
    // 0x4f120c: 0x30180000  andi        $t8, $zero, 0x0
    ctx->pc = 0x4f120cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)0);
label_4f1210:
    // 0x4f1210: 0x603f  dsra32      $t4, $zero, 0
    ctx->pc = 0x4f1210u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 0) >> (32 + 0));
label_4f1214:
    // 0x4f1214: 0x703f  dsra32      $t6, $zero, 0
    ctx->pc = 0x4f1214u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> (32 + 0));
label_4f1218:
    // 0x4f1218: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x4f1218u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_4f121c:
    // 0x4f121c: 0x30200000  andi        $zero, $at, 0x0
    ctx->pc = 0x4f121cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)0);
label_4f1220:
    // 0x4f1220: 0x803f  dsra32      $s0, $zero, 0
    ctx->pc = 0x4f1220u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (32 + 0));
label_4f1224:
    // 0x4f1224: 0xc03f  dsra32      $t8, $zero, 0
    ctx->pc = 0x4f1224u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 0) >> (32 + 0));
label_4f1228:
    // 0x4f1228: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x4f1228u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_4f122c:
    // 0x4f122c: 0x30400000  andi        $zero, $v0, 0x0
    ctx->pc = 0x4f122cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)0);
label_4f1230:
    // 0x4f1230: 0x1003f  dsra32      $zero, $at, 0
    ctx->pc = 0x4f1230u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (32 + 0));
label_4f1234:
    // 0x4f1234: 0x1403f  dsra32      $t0, $at, 0
    ctx->pc = 0x4f1234u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> (32 + 0));
label_4f1238:
    // 0x4f1238: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x4f1238u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_4f123c:
    // 0x4f123c: 0x30600000  andi        $zero, $v1, 0x0
    ctx->pc = 0x4f123cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)0);
label_4f1240:
    // 0x4f1240: 0x1803f  dsra32      $s0, $at, 0
    ctx->pc = 0x4f1240u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 1) >> (32 + 0));
label_4f1244:
    // 0x4f1244: 0x1c03f  dsra32      $t8, $at, 0
    ctx->pc = 0x4f1244u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 1) >> (32 + 0));
label_4f1248:
    // 0x4f1248: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f1248u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_4f124c:
    // 0x4f124c: 0x30800000  andi        $zero, $a0, 0x0
    ctx->pc = 0x4f124cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)0);
label_4f1250:
    // 0x4f1250: 0x2003f  dsra32      $zero, $v0, 0
    ctx->pc = 0x4f1250u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 2) >> (32 + 0));
label_4f1254:
    // 0x4f1254: 0x3003f  dsra32      $zero, $v1, 0
    ctx->pc = 0x4f1254u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 3) >> (32 + 0));
label_4f1258:
    // 0x4f1258: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f1258u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_4f125c:
    // 0x4f125c: 0x31000000  andi        $zero, $t0, 0x0
    ctx->pc = 0x4f125cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)0);
label_4f1260:
    // 0x4f1260: 0x4003f  dsra32      $zero, $a0, 0
    ctx->pc = 0x4f1260u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 4) >> (32 + 0));
label_4f1264:
    // 0x4f1264: 0x5003f  dsra32      $zero, $a1, 0
    ctx->pc = 0x4f1264u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 5) >> (32 + 0));
label_4f1268:
    // 0x4f1268: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f1268u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_4f126c:
    // 0x4f126c: 0x31800000  andi        $zero, $t4, 0x0
    ctx->pc = 0x4f126cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)0);
label_4f1270:
    // 0x4f1270: 0x6003f  dsra32      $zero, $a2, 0
    ctx->pc = 0x4f1270u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 6) >> (32 + 0));
label_4f1274:
    // 0x4f1274: 0x7003f  dsra32      $zero, $a3, 0
    ctx->pc = 0x4f1274u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 7) >> (32 + 0));
label_4f1278:
    // 0x4f1278: 0xd  break       0
    ctx->pc = 0x4f1278u;
    runtime->handleBreak(rdram, ctx);
label_4f127c:
    // 0x4f127c: 0x12  mflo        $zero
    ctx->pc = 0x4f127cu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_4f1280:
    // 0x4f1280: 0x8  jr          $zero
label_4f1284:
    if (ctx->pc == 0x4F1284u) {
        ctx->pc = 0x4F1288u;
        goto label_4f1288;
    }
    ctx->pc = 0x4F1280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1280u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4F1288u;
label_4f1288:
    // 0x4f1288: 0x4f1008  .word       0x004F1008                   # jr          $v0 # 000F1000 <InstrIdType: CPU_SPECIAL>
label_4f128c:
    if (ctx->pc == 0x4F128Cu) {
        ctx->pc = 0x4F128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1288u;
        // 0x4f128c: 0x4f10d8  .word       0x004F10D8                   # mult        $v0, $v0, $t7 # 000000C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1290u;
        goto label_4f1290;
    }
    ctx->pc = 0x4F1288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x4F128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1288u;
        // 0x4f128c: 0x4f10d8  .word       0x004F10D8                   # mult        $v0, $v0, $t7 # 000000C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1288u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4F1290u;
label_4f1290:
    // 0x4f1290: 0x4f11f8  .word       0x004F11F8                   # dsll        $v0, $t7, 7 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f1290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) << 7);
label_4f1294:
    // 0x4f1294: 0x0  nop
    ctx->pc = 0x4f1294u;
    // NOP
label_4f1298:
    // 0x4f1298: 0x0  nop
    ctx->pc = 0x4f1298u;
    // NOP
label_4f129c:
    // 0x4f129c: 0x0  nop
    ctx->pc = 0x4f129cu;
    // NOP
label_4f12a0:
    // 0x4f12a0: 0x83  sra         $zero, $zero, 2
    ctx->pc = 0x4f12a0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 2));
label_4f12a4:
    // 0x4f12a4: 0x307d40  .word       0x00307D40                   # sll         $t7, $s0, 21 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f12a4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 21));
label_4f12a8:
    // 0x4f12a8: 0x5a  .word       0x0000005A                   # div         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4f12a8u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_4f12ac:
    // 0x4f12ac: 0x307d08  .word       0x00307D08                   # jr          $at # 00107D00 <InstrIdType: CPU_SPECIAL>
label_4f12b0:
    if (ctx->pc == 0x4F12B0u) {
        ctx->pc = 0x4F12B4u;
        goto label_4f12b4;
    }
    ctx->pc = 0x4F12ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F12ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4F12B4u;
label_4f12b4:
    // 0x4f12b4: 0x0  nop
    ctx->pc = 0x4f12b4u;
    // NOP
    ctx->pc = 0x4f12b8u;
}
