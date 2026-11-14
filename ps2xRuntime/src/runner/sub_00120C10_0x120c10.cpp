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

// Function: sub_00120C10
// Address: 0x120c10 - 0x1214e0
void sub_00120C10_0x120c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120C10_0x120c10");
#endif

    switch (ctx->pc) {
        case 0x120c10u: goto label_120c10;
        case 0x120c14u: goto label_120c14;
        case 0x120c18u: goto label_120c18;
        case 0x120c1cu: goto label_120c1c;
        case 0x120c20u: goto label_120c20;
        case 0x120c24u: goto label_120c24;
        case 0x120c28u: goto label_120c28;
        case 0x120c2cu: goto label_120c2c;
        case 0x120c30u: goto label_120c30;
        case 0x120c34u: goto label_120c34;
        case 0x120c38u: goto label_120c38;
        case 0x120c3cu: goto label_120c3c;
        case 0x120c40u: goto label_120c40;
        case 0x120c44u: goto label_120c44;
        case 0x120c48u: goto label_120c48;
        case 0x120c4cu: goto label_120c4c;
        case 0x120c50u: goto label_120c50;
        case 0x120c54u: goto label_120c54;
        case 0x120c58u: goto label_120c58;
        case 0x120c5cu: goto label_120c5c;
        case 0x120c60u: goto label_120c60;
        case 0x120c64u: goto label_120c64;
        case 0x120c68u: goto label_120c68;
        case 0x120c6cu: goto label_120c6c;
        case 0x120c70u: goto label_120c70;
        case 0x120c74u: goto label_120c74;
        case 0x120c78u: goto label_120c78;
        case 0x120c7cu: goto label_120c7c;
        case 0x120c80u: goto label_120c80;
        case 0x120c84u: goto label_120c84;
        case 0x120c88u: goto label_120c88;
        case 0x120c8cu: goto label_120c8c;
        case 0x120c90u: goto label_120c90;
        case 0x120c94u: goto label_120c94;
        case 0x120c98u: goto label_120c98;
        case 0x120c9cu: goto label_120c9c;
        case 0x120ca0u: goto label_120ca0;
        case 0x120ca4u: goto label_120ca4;
        case 0x120ca8u: goto label_120ca8;
        case 0x120cacu: goto label_120cac;
        case 0x120cb0u: goto label_120cb0;
        case 0x120cb4u: goto label_120cb4;
        case 0x120cb8u: goto label_120cb8;
        case 0x120cbcu: goto label_120cbc;
        case 0x120cc0u: goto label_120cc0;
        case 0x120cc4u: goto label_120cc4;
        case 0x120cc8u: goto label_120cc8;
        case 0x120cccu: goto label_120ccc;
        case 0x120cd0u: goto label_120cd0;
        case 0x120cd4u: goto label_120cd4;
        case 0x120cd8u: goto label_120cd8;
        case 0x120cdcu: goto label_120cdc;
        case 0x120ce0u: goto label_120ce0;
        case 0x120ce4u: goto label_120ce4;
        case 0x120ce8u: goto label_120ce8;
        case 0x120cecu: goto label_120cec;
        case 0x120cf0u: goto label_120cf0;
        case 0x120cf4u: goto label_120cf4;
        case 0x120cf8u: goto label_120cf8;
        case 0x120cfcu: goto label_120cfc;
        case 0x120d00u: goto label_120d00;
        case 0x120d04u: goto label_120d04;
        case 0x120d08u: goto label_120d08;
        case 0x120d0cu: goto label_120d0c;
        case 0x120d10u: goto label_120d10;
        case 0x120d14u: goto label_120d14;
        case 0x120d18u: goto label_120d18;
        case 0x120d1cu: goto label_120d1c;
        case 0x120d20u: goto label_120d20;
        case 0x120d24u: goto label_120d24;
        case 0x120d28u: goto label_120d28;
        case 0x120d2cu: goto label_120d2c;
        case 0x120d30u: goto label_120d30;
        case 0x120d34u: goto label_120d34;
        case 0x120d38u: goto label_120d38;
        case 0x120d3cu: goto label_120d3c;
        case 0x120d40u: goto label_120d40;
        case 0x120d44u: goto label_120d44;
        case 0x120d48u: goto label_120d48;
        case 0x120d4cu: goto label_120d4c;
        case 0x120d50u: goto label_120d50;
        case 0x120d54u: goto label_120d54;
        case 0x120d58u: goto label_120d58;
        case 0x120d5cu: goto label_120d5c;
        case 0x120d60u: goto label_120d60;
        case 0x120d64u: goto label_120d64;
        case 0x120d68u: goto label_120d68;
        case 0x120d6cu: goto label_120d6c;
        case 0x120d70u: goto label_120d70;
        case 0x120d74u: goto label_120d74;
        case 0x120d78u: goto label_120d78;
        case 0x120d7cu: goto label_120d7c;
        case 0x120d80u: goto label_120d80;
        case 0x120d84u: goto label_120d84;
        case 0x120d88u: goto label_120d88;
        case 0x120d8cu: goto label_120d8c;
        case 0x120d90u: goto label_120d90;
        case 0x120d94u: goto label_120d94;
        case 0x120d98u: goto label_120d98;
        case 0x120d9cu: goto label_120d9c;
        case 0x120da0u: goto label_120da0;
        case 0x120da4u: goto label_120da4;
        case 0x120da8u: goto label_120da8;
        case 0x120dacu: goto label_120dac;
        case 0x120db0u: goto label_120db0;
        case 0x120db4u: goto label_120db4;
        case 0x120db8u: goto label_120db8;
        case 0x120dbcu: goto label_120dbc;
        case 0x120dc0u: goto label_120dc0;
        case 0x120dc4u: goto label_120dc4;
        case 0x120dc8u: goto label_120dc8;
        case 0x120dccu: goto label_120dcc;
        case 0x120dd0u: goto label_120dd0;
        case 0x120dd4u: goto label_120dd4;
        case 0x120dd8u: goto label_120dd8;
        case 0x120ddcu: goto label_120ddc;
        case 0x120de0u: goto label_120de0;
        case 0x120de4u: goto label_120de4;
        case 0x120de8u: goto label_120de8;
        case 0x120decu: goto label_120dec;
        case 0x120df0u: goto label_120df0;
        case 0x120df4u: goto label_120df4;
        case 0x120df8u: goto label_120df8;
        case 0x120dfcu: goto label_120dfc;
        case 0x120e00u: goto label_120e00;
        case 0x120e04u: goto label_120e04;
        case 0x120e08u: goto label_120e08;
        case 0x120e0cu: goto label_120e0c;
        case 0x120e10u: goto label_120e10;
        case 0x120e14u: goto label_120e14;
        case 0x120e18u: goto label_120e18;
        case 0x120e1cu: goto label_120e1c;
        case 0x120e20u: goto label_120e20;
        case 0x120e24u: goto label_120e24;
        case 0x120e28u: goto label_120e28;
        case 0x120e2cu: goto label_120e2c;
        case 0x120e30u: goto label_120e30;
        case 0x120e34u: goto label_120e34;
        case 0x120e38u: goto label_120e38;
        case 0x120e3cu: goto label_120e3c;
        case 0x120e40u: goto label_120e40;
        case 0x120e44u: goto label_120e44;
        case 0x120e48u: goto label_120e48;
        case 0x120e4cu: goto label_120e4c;
        case 0x120e50u: goto label_120e50;
        case 0x120e54u: goto label_120e54;
        case 0x120e58u: goto label_120e58;
        case 0x120e5cu: goto label_120e5c;
        case 0x120e60u: goto label_120e60;
        case 0x120e64u: goto label_120e64;
        case 0x120e68u: goto label_120e68;
        case 0x120e6cu: goto label_120e6c;
        case 0x120e70u: goto label_120e70;
        case 0x120e74u: goto label_120e74;
        case 0x120e78u: goto label_120e78;
        case 0x120e7cu: goto label_120e7c;
        case 0x120e80u: goto label_120e80;
        case 0x120e84u: goto label_120e84;
        case 0x120e88u: goto label_120e88;
        case 0x120e8cu: goto label_120e8c;
        case 0x120e90u: goto label_120e90;
        case 0x120e94u: goto label_120e94;
        case 0x120e98u: goto label_120e98;
        case 0x120e9cu: goto label_120e9c;
        case 0x120ea0u: goto label_120ea0;
        case 0x120ea4u: goto label_120ea4;
        case 0x120ea8u: goto label_120ea8;
        case 0x120eacu: goto label_120eac;
        case 0x120eb0u: goto label_120eb0;
        case 0x120eb4u: goto label_120eb4;
        case 0x120eb8u: goto label_120eb8;
        case 0x120ebcu: goto label_120ebc;
        case 0x120ec0u: goto label_120ec0;
        case 0x120ec4u: goto label_120ec4;
        case 0x120ec8u: goto label_120ec8;
        case 0x120eccu: goto label_120ecc;
        case 0x120ed0u: goto label_120ed0;
        case 0x120ed4u: goto label_120ed4;
        case 0x120ed8u: goto label_120ed8;
        case 0x120edcu: goto label_120edc;
        case 0x120ee0u: goto label_120ee0;
        case 0x120ee4u: goto label_120ee4;
        case 0x120ee8u: goto label_120ee8;
        case 0x120eecu: goto label_120eec;
        case 0x120ef0u: goto label_120ef0;
        case 0x120ef4u: goto label_120ef4;
        case 0x120ef8u: goto label_120ef8;
        case 0x120efcu: goto label_120efc;
        case 0x120f00u: goto label_120f00;
        case 0x120f04u: goto label_120f04;
        case 0x120f08u: goto label_120f08;
        case 0x120f0cu: goto label_120f0c;
        case 0x120f10u: goto label_120f10;
        case 0x120f14u: goto label_120f14;
        case 0x120f18u: goto label_120f18;
        case 0x120f1cu: goto label_120f1c;
        case 0x120f20u: goto label_120f20;
        case 0x120f24u: goto label_120f24;
        case 0x120f28u: goto label_120f28;
        case 0x120f2cu: goto label_120f2c;
        case 0x120f30u: goto label_120f30;
        case 0x120f34u: goto label_120f34;
        case 0x120f38u: goto label_120f38;
        case 0x120f3cu: goto label_120f3c;
        case 0x120f40u: goto label_120f40;
        case 0x120f44u: goto label_120f44;
        case 0x120f48u: goto label_120f48;
        case 0x120f4cu: goto label_120f4c;
        case 0x120f50u: goto label_120f50;
        case 0x120f54u: goto label_120f54;
        case 0x120f58u: goto label_120f58;
        case 0x120f5cu: goto label_120f5c;
        case 0x120f60u: goto label_120f60;
        case 0x120f64u: goto label_120f64;
        case 0x120f68u: goto label_120f68;
        case 0x120f6cu: goto label_120f6c;
        case 0x120f70u: goto label_120f70;
        case 0x120f74u: goto label_120f74;
        case 0x120f78u: goto label_120f78;
        case 0x120f7cu: goto label_120f7c;
        case 0x120f80u: goto label_120f80;
        case 0x120f84u: goto label_120f84;
        case 0x120f88u: goto label_120f88;
        case 0x120f8cu: goto label_120f8c;
        case 0x120f90u: goto label_120f90;
        case 0x120f94u: goto label_120f94;
        case 0x120f98u: goto label_120f98;
        case 0x120f9cu: goto label_120f9c;
        case 0x120fa0u: goto label_120fa0;
        case 0x120fa4u: goto label_120fa4;
        case 0x120fa8u: goto label_120fa8;
        case 0x120facu: goto label_120fac;
        case 0x120fb0u: goto label_120fb0;
        case 0x120fb4u: goto label_120fb4;
        case 0x120fb8u: goto label_120fb8;
        case 0x120fbcu: goto label_120fbc;
        case 0x120fc0u: goto label_120fc0;
        case 0x120fc4u: goto label_120fc4;
        case 0x120fc8u: goto label_120fc8;
        case 0x120fccu: goto label_120fcc;
        case 0x120fd0u: goto label_120fd0;
        case 0x120fd4u: goto label_120fd4;
        case 0x120fd8u: goto label_120fd8;
        case 0x120fdcu: goto label_120fdc;
        case 0x120fe0u: goto label_120fe0;
        case 0x120fe4u: goto label_120fe4;
        case 0x120fe8u: goto label_120fe8;
        case 0x120fecu: goto label_120fec;
        case 0x120ff0u: goto label_120ff0;
        case 0x120ff4u: goto label_120ff4;
        case 0x120ff8u: goto label_120ff8;
        case 0x120ffcu: goto label_120ffc;
        case 0x121000u: goto label_121000;
        case 0x121004u: goto label_121004;
        case 0x121008u: goto label_121008;
        case 0x12100cu: goto label_12100c;
        case 0x121010u: goto label_121010;
        case 0x121014u: goto label_121014;
        case 0x121018u: goto label_121018;
        case 0x12101cu: goto label_12101c;
        case 0x121020u: goto label_121020;
        case 0x121024u: goto label_121024;
        case 0x121028u: goto label_121028;
        case 0x12102cu: goto label_12102c;
        case 0x121030u: goto label_121030;
        case 0x121034u: goto label_121034;
        case 0x121038u: goto label_121038;
        case 0x12103cu: goto label_12103c;
        case 0x121040u: goto label_121040;
        case 0x121044u: goto label_121044;
        case 0x121048u: goto label_121048;
        case 0x12104cu: goto label_12104c;
        case 0x121050u: goto label_121050;
        case 0x121054u: goto label_121054;
        case 0x121058u: goto label_121058;
        case 0x12105cu: goto label_12105c;
        case 0x121060u: goto label_121060;
        case 0x121064u: goto label_121064;
        case 0x121068u: goto label_121068;
        case 0x12106cu: goto label_12106c;
        case 0x121070u: goto label_121070;
        case 0x121074u: goto label_121074;
        case 0x121078u: goto label_121078;
        case 0x12107cu: goto label_12107c;
        case 0x121080u: goto label_121080;
        case 0x121084u: goto label_121084;
        case 0x121088u: goto label_121088;
        case 0x12108cu: goto label_12108c;
        case 0x121090u: goto label_121090;
        case 0x121094u: goto label_121094;
        case 0x121098u: goto label_121098;
        case 0x12109cu: goto label_12109c;
        case 0x1210a0u: goto label_1210a0;
        case 0x1210a4u: goto label_1210a4;
        case 0x1210a8u: goto label_1210a8;
        case 0x1210acu: goto label_1210ac;
        case 0x1210b0u: goto label_1210b0;
        case 0x1210b4u: goto label_1210b4;
        case 0x1210b8u: goto label_1210b8;
        case 0x1210bcu: goto label_1210bc;
        case 0x1210c0u: goto label_1210c0;
        case 0x1210c4u: goto label_1210c4;
        case 0x1210c8u: goto label_1210c8;
        case 0x1210ccu: goto label_1210cc;
        case 0x1210d0u: goto label_1210d0;
        case 0x1210d4u: goto label_1210d4;
        case 0x1210d8u: goto label_1210d8;
        case 0x1210dcu: goto label_1210dc;
        case 0x1210e0u: goto label_1210e0;
        case 0x1210e4u: goto label_1210e4;
        case 0x1210e8u: goto label_1210e8;
        case 0x1210ecu: goto label_1210ec;
        case 0x1210f0u: goto label_1210f0;
        case 0x1210f4u: goto label_1210f4;
        case 0x1210f8u: goto label_1210f8;
        case 0x1210fcu: goto label_1210fc;
        case 0x121100u: goto label_121100;
        case 0x121104u: goto label_121104;
        case 0x121108u: goto label_121108;
        case 0x12110cu: goto label_12110c;
        case 0x121110u: goto label_121110;
        case 0x121114u: goto label_121114;
        case 0x121118u: goto label_121118;
        case 0x12111cu: goto label_12111c;
        case 0x121120u: goto label_121120;
        case 0x121124u: goto label_121124;
        case 0x121128u: goto label_121128;
        case 0x12112cu: goto label_12112c;
        case 0x121130u: goto label_121130;
        case 0x121134u: goto label_121134;
        case 0x121138u: goto label_121138;
        case 0x12113cu: goto label_12113c;
        case 0x121140u: goto label_121140;
        case 0x121144u: goto label_121144;
        case 0x121148u: goto label_121148;
        case 0x12114cu: goto label_12114c;
        case 0x121150u: goto label_121150;
        case 0x121154u: goto label_121154;
        case 0x121158u: goto label_121158;
        case 0x12115cu: goto label_12115c;
        case 0x121160u: goto label_121160;
        case 0x121164u: goto label_121164;
        case 0x121168u: goto label_121168;
        case 0x12116cu: goto label_12116c;
        case 0x121170u: goto label_121170;
        case 0x121174u: goto label_121174;
        case 0x121178u: goto label_121178;
        case 0x12117cu: goto label_12117c;
        case 0x121180u: goto label_121180;
        case 0x121184u: goto label_121184;
        case 0x121188u: goto label_121188;
        case 0x12118cu: goto label_12118c;
        case 0x121190u: goto label_121190;
        case 0x121194u: goto label_121194;
        case 0x121198u: goto label_121198;
        case 0x12119cu: goto label_12119c;
        case 0x1211a0u: goto label_1211a0;
        case 0x1211a4u: goto label_1211a4;
        case 0x1211a8u: goto label_1211a8;
        case 0x1211acu: goto label_1211ac;
        case 0x1211b0u: goto label_1211b0;
        case 0x1211b4u: goto label_1211b4;
        case 0x1211b8u: goto label_1211b8;
        case 0x1211bcu: goto label_1211bc;
        case 0x1211c0u: goto label_1211c0;
        case 0x1211c4u: goto label_1211c4;
        case 0x1211c8u: goto label_1211c8;
        case 0x1211ccu: goto label_1211cc;
        case 0x1211d0u: goto label_1211d0;
        case 0x1211d4u: goto label_1211d4;
        case 0x1211d8u: goto label_1211d8;
        case 0x1211dcu: goto label_1211dc;
        case 0x1211e0u: goto label_1211e0;
        case 0x1211e4u: goto label_1211e4;
        case 0x1211e8u: goto label_1211e8;
        case 0x1211ecu: goto label_1211ec;
        case 0x1211f0u: goto label_1211f0;
        case 0x1211f4u: goto label_1211f4;
        case 0x1211f8u: goto label_1211f8;
        case 0x1211fcu: goto label_1211fc;
        case 0x121200u: goto label_121200;
        case 0x121204u: goto label_121204;
        case 0x121208u: goto label_121208;
        case 0x12120cu: goto label_12120c;
        case 0x121210u: goto label_121210;
        case 0x121214u: goto label_121214;
        case 0x121218u: goto label_121218;
        case 0x12121cu: goto label_12121c;
        case 0x121220u: goto label_121220;
        case 0x121224u: goto label_121224;
        case 0x121228u: goto label_121228;
        case 0x12122cu: goto label_12122c;
        case 0x121230u: goto label_121230;
        case 0x121234u: goto label_121234;
        case 0x121238u: goto label_121238;
        case 0x12123cu: goto label_12123c;
        case 0x121240u: goto label_121240;
        case 0x121244u: goto label_121244;
        case 0x121248u: goto label_121248;
        case 0x12124cu: goto label_12124c;
        case 0x121250u: goto label_121250;
        case 0x121254u: goto label_121254;
        case 0x121258u: goto label_121258;
        case 0x12125cu: goto label_12125c;
        case 0x121260u: goto label_121260;
        case 0x121264u: goto label_121264;
        case 0x121268u: goto label_121268;
        case 0x12126cu: goto label_12126c;
        case 0x121270u: goto label_121270;
        case 0x121274u: goto label_121274;
        case 0x121278u: goto label_121278;
        case 0x12127cu: goto label_12127c;
        case 0x121280u: goto label_121280;
        case 0x121284u: goto label_121284;
        case 0x121288u: goto label_121288;
        case 0x12128cu: goto label_12128c;
        case 0x121290u: goto label_121290;
        case 0x121294u: goto label_121294;
        case 0x121298u: goto label_121298;
        case 0x12129cu: goto label_12129c;
        case 0x1212a0u: goto label_1212a0;
        case 0x1212a4u: goto label_1212a4;
        case 0x1212a8u: goto label_1212a8;
        case 0x1212acu: goto label_1212ac;
        case 0x1212b0u: goto label_1212b0;
        case 0x1212b4u: goto label_1212b4;
        case 0x1212b8u: goto label_1212b8;
        case 0x1212bcu: goto label_1212bc;
        case 0x1212c0u: goto label_1212c0;
        case 0x1212c4u: goto label_1212c4;
        case 0x1212c8u: goto label_1212c8;
        case 0x1212ccu: goto label_1212cc;
        case 0x1212d0u: goto label_1212d0;
        case 0x1212d4u: goto label_1212d4;
        case 0x1212d8u: goto label_1212d8;
        case 0x1212dcu: goto label_1212dc;
        case 0x1212e0u: goto label_1212e0;
        case 0x1212e4u: goto label_1212e4;
        case 0x1212e8u: goto label_1212e8;
        case 0x1212ecu: goto label_1212ec;
        case 0x1212f0u: goto label_1212f0;
        case 0x1212f4u: goto label_1212f4;
        case 0x1212f8u: goto label_1212f8;
        case 0x1212fcu: goto label_1212fc;
        case 0x121300u: goto label_121300;
        case 0x121304u: goto label_121304;
        case 0x121308u: goto label_121308;
        case 0x12130cu: goto label_12130c;
        case 0x121310u: goto label_121310;
        case 0x121314u: goto label_121314;
        case 0x121318u: goto label_121318;
        case 0x12131cu: goto label_12131c;
        case 0x121320u: goto label_121320;
        case 0x121324u: goto label_121324;
        case 0x121328u: goto label_121328;
        case 0x12132cu: goto label_12132c;
        case 0x121330u: goto label_121330;
        case 0x121334u: goto label_121334;
        case 0x121338u: goto label_121338;
        case 0x12133cu: goto label_12133c;
        case 0x121340u: goto label_121340;
        case 0x121344u: goto label_121344;
        case 0x121348u: goto label_121348;
        case 0x12134cu: goto label_12134c;
        case 0x121350u: goto label_121350;
        case 0x121354u: goto label_121354;
        case 0x121358u: goto label_121358;
        case 0x12135cu: goto label_12135c;
        case 0x121360u: goto label_121360;
        case 0x121364u: goto label_121364;
        case 0x121368u: goto label_121368;
        case 0x12136cu: goto label_12136c;
        case 0x121370u: goto label_121370;
        case 0x121374u: goto label_121374;
        case 0x121378u: goto label_121378;
        case 0x12137cu: goto label_12137c;
        case 0x121380u: goto label_121380;
        case 0x121384u: goto label_121384;
        case 0x121388u: goto label_121388;
        case 0x12138cu: goto label_12138c;
        case 0x121390u: goto label_121390;
        case 0x121394u: goto label_121394;
        case 0x121398u: goto label_121398;
        case 0x12139cu: goto label_12139c;
        case 0x1213a0u: goto label_1213a0;
        case 0x1213a4u: goto label_1213a4;
        case 0x1213a8u: goto label_1213a8;
        case 0x1213acu: goto label_1213ac;
        case 0x1213b0u: goto label_1213b0;
        case 0x1213b4u: goto label_1213b4;
        case 0x1213b8u: goto label_1213b8;
        case 0x1213bcu: goto label_1213bc;
        case 0x1213c0u: goto label_1213c0;
        case 0x1213c4u: goto label_1213c4;
        case 0x1213c8u: goto label_1213c8;
        case 0x1213ccu: goto label_1213cc;
        case 0x1213d0u: goto label_1213d0;
        case 0x1213d4u: goto label_1213d4;
        case 0x1213d8u: goto label_1213d8;
        case 0x1213dcu: goto label_1213dc;
        case 0x1213e0u: goto label_1213e0;
        case 0x1213e4u: goto label_1213e4;
        case 0x1213e8u: goto label_1213e8;
        case 0x1213ecu: goto label_1213ec;
        case 0x1213f0u: goto label_1213f0;
        case 0x1213f4u: goto label_1213f4;
        case 0x1213f8u: goto label_1213f8;
        case 0x1213fcu: goto label_1213fc;
        case 0x121400u: goto label_121400;
        case 0x121404u: goto label_121404;
        case 0x121408u: goto label_121408;
        case 0x12140cu: goto label_12140c;
        case 0x121410u: goto label_121410;
        case 0x121414u: goto label_121414;
        case 0x121418u: goto label_121418;
        case 0x12141cu: goto label_12141c;
        case 0x121420u: goto label_121420;
        case 0x121424u: goto label_121424;
        case 0x121428u: goto label_121428;
        case 0x12142cu: goto label_12142c;
        case 0x121430u: goto label_121430;
        case 0x121434u: goto label_121434;
        case 0x121438u: goto label_121438;
        case 0x12143cu: goto label_12143c;
        case 0x121440u: goto label_121440;
        case 0x121444u: goto label_121444;
        case 0x121448u: goto label_121448;
        case 0x12144cu: goto label_12144c;
        case 0x121450u: goto label_121450;
        case 0x121454u: goto label_121454;
        case 0x121458u: goto label_121458;
        case 0x12145cu: goto label_12145c;
        case 0x121460u: goto label_121460;
        case 0x121464u: goto label_121464;
        case 0x121468u: goto label_121468;
        case 0x12146cu: goto label_12146c;
        case 0x121470u: goto label_121470;
        case 0x121474u: goto label_121474;
        case 0x121478u: goto label_121478;
        case 0x12147cu: goto label_12147c;
        case 0x121480u: goto label_121480;
        case 0x121484u: goto label_121484;
        case 0x121488u: goto label_121488;
        case 0x12148cu: goto label_12148c;
        case 0x121490u: goto label_121490;
        case 0x121494u: goto label_121494;
        case 0x121498u: goto label_121498;
        case 0x12149cu: goto label_12149c;
        case 0x1214a0u: goto label_1214a0;
        case 0x1214a4u: goto label_1214a4;
        case 0x1214a8u: goto label_1214a8;
        case 0x1214acu: goto label_1214ac;
        case 0x1214b0u: goto label_1214b0;
        case 0x1214b4u: goto label_1214b4;
        case 0x1214b8u: goto label_1214b8;
        case 0x1214bcu: goto label_1214bc;
        case 0x1214c0u: goto label_1214c0;
        case 0x1214c4u: goto label_1214c4;
        case 0x1214c8u: goto label_1214c8;
        case 0x1214ccu: goto label_1214cc;
        case 0x1214d0u: goto label_1214d0;
        case 0x1214d4u: goto label_1214d4;
        case 0x1214d8u: goto label_1214d8;
        case 0x1214dcu: goto label_1214dc;
        default: break;
    }

    ctx->pc = 0x120c10u;

label_120c10:
    // 0x120c10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x120c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_120c14:
    // 0x120c14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x120c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_120c18:
    // 0x120c18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x120c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_120c1c:
    // 0x120c1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x120c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_120c20:
    // 0x120c20: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x120c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_120c24:
    // 0x120c24: 0xc047074  jal         func_11C1D0
label_120c28:
    if (ctx->pc == 0x120C28u) {
        ctx->pc = 0x120C2Cu;
        goto label_120c2c;
    }
    ctx->pc = 0x120C24u;
    SET_GPR_U32(ctx, 31, 0x120C2Cu);
    ctx->pc = 0x11C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C1D0u, 0x120C24u, 0x120C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120C2Cu;
label_120c2c:
    // 0x120c2c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x120c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_120c30:
    // 0x120c30: 0x246335c0  addiu       $v1, $v1, 0x35C0
    ctx->pc = 0x120c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13760));
label_120c34:
    // 0x120c34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_120c38:
    // 0x120c38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x120c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_120c3c:
    // 0x120c3c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x120c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_120c40:
    // 0x120c40: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x120c40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_120c44:
    // 0x120c44: 0x24a51fa8  addiu       $a1, $a1, 0x1FA8
    ctx->pc = 0x120c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8104));
label_120c48:
    // 0x120c48: 0xc04322c  jal         func_10C8B0
label_120c4c:
    if (ctx->pc == 0x120C4Cu) {
        ctx->pc = 0x120C50u;
        goto label_120c50;
    }
    ctx->pc = 0x120C48u;
    SET_GPR_U32(ctx, 31, 0x120C50u);
    ctx->pc = 0x10C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C8B0u, 0x120C48u, 0x120C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120C50u;
label_120c50:
    // 0x120c50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_120c54:
    // 0x120c54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x120c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_120c58:
    // 0x120c58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x120c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_120c5c:
    // 0x120c5c: 0x3e00008  jr          $ra
label_120c60:
    if (ctx->pc == 0x120C60u) {
        ctx->pc = 0x120C64u;
        goto label_120c64;
    }
    ctx->pc = 0x120C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120C64u;
label_120c64:
    // 0x120c64: 0x0  nop
    ctx->pc = 0x120c64u;
    // NOP
label_120c68:
    // 0x120c68: 0x0  nop
    ctx->pc = 0x120c68u;
    // NOP
label_120c6c:
    // 0x120c6c: 0x0  nop
    ctx->pc = 0x120c6cu;
    // NOP
label_120c70:
    // 0x120c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x120c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_120c74:
    // 0x120c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x120c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_120c78:
    // 0x120c78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x120c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_120c7c:
    // 0x120c7c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x120c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_120c80:
    // 0x120c80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_120c84:
    // 0x120c84: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_120c88:
    if (ctx->pc == 0x120C88u) {
        ctx->pc = 0x120C8Cu;
        goto label_120c8c;
    }
    ctx->pc = 0x120C84u;
    {
        const bool branch_taken_0x120c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120c84) {
            ctx->pc = 0x120CCCu;
            goto label_120ccc;
        }
    }
    ctx->pc = 0x120C8Cu;
label_120c8c:
    // 0x120c8c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x120c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_120c90:
    // 0x120c90: 0x246335c0  addiu       $v1, $v1, 0x35C0
    ctx->pc = 0x120c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13760));
label_120c94:
    // 0x120c94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_120c98:
    // 0x120c98: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x120c98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_120c9c:
    // 0x120c9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x120c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_120ca0:
    // 0x120ca0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x120ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120ca4:
    // 0x120ca4: 0xc047088  jal         func_11C220
label_120ca8:
    if (ctx->pc == 0x120CA8u) {
        ctx->pc = 0x120CACu;
        goto label_120cac;
    }
    ctx->pc = 0x120CA4u;
    SET_GPR_U32(ctx, 31, 0x120CACu);
    ctx->pc = 0x11C220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C220u, 0x120CA4u, 0x120CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120CACu;
label_120cac:
    // 0x120cac: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x120cacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_120cb0:
    // 0x120cb0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x120cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_120cb4:
    // 0x120cb4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x120cb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_120cb8:
    // 0x120cb8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_120cbc:
    if (ctx->pc == 0x120CBCu) {
        ctx->pc = 0x120CC0u;
        goto label_120cc0;
    }
    ctx->pc = 0x120CB8u;
    {
        const bool branch_taken_0x120cb8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x120cb8) {
            ctx->pc = 0x120CCCu;
            goto label_120ccc;
        }
    }
    ctx->pc = 0x120CC0u;
label_120cc0:
    // 0x120cc0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x120cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_120cc4:
    // 0x120cc4: 0xc0ba070  jal         func_2E81C0
label_120cc8:
    if (ctx->pc == 0x120CC8u) {
        ctx->pc = 0x120CCCu;
        goto label_120ccc;
    }
    ctx->pc = 0x120CC4u;
    SET_GPR_U32(ctx, 31, 0x120CCCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x120CC4u, 0x120CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120CCCu;
label_120ccc:
    // 0x120ccc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x120cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_120cd0:
    // 0x120cd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x120cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_120cd4:
    // 0x120cd4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x120cd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_120cd8:
    // 0x120cd8: 0x3e00008  jr          $ra
label_120cdc:
    if (ctx->pc == 0x120CDCu) {
        ctx->pc = 0x120CE0u;
        goto label_120ce0;
    }
    ctx->pc = 0x120CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120CE0u;
label_120ce0:
    // 0x120ce0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x120ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_120ce4:
    // 0x120ce4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x120ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_120ce8:
    // 0x120ce8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x120ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_120cec:
    // 0x120cec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x120cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_120cf0:
    // 0x120cf0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x120cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_120cf4:
    // 0x120cf4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x120cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_120cf8:
    // 0x120cf8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x120cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_120cfc:
    // 0x120cfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x120cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_120d00:
    // 0x120d00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x120d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_120d04:
    // 0x120d04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x120d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_120d08:
    // 0x120d08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x120d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_120d0c:
    // 0x120d0c: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x120d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
label_120d10:
    // 0x120d10: 0xa3a500d0  sb          $a1, 0xD0($sp)
    ctx->pc = 0x120d10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 5));
label_120d14:
    // 0x120d14: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x120d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_120d18:
    // 0x120d18: 0xc050c5c  jal         func_143170
label_120d1c:
    if (ctx->pc == 0x120D1Cu) {
        ctx->pc = 0x120D20u;
        goto label_120d20;
    }
    ctx->pc = 0x120D18u;
    SET_GPR_U32(ctx, 31, 0x120D20u);
    ctx->pc = 0x143170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143170u, 0x120D18u, 0x120D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120D20u;
label_120d20:
    // 0x120d20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x120d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120d24:
    // 0x120d24: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x120d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_120d28:
    // 0x120d28: 0xc04fbd0  jal         func_13EF40
label_120d2c:
    if (ctx->pc == 0x120D2Cu) {
        ctx->pc = 0x120D30u;
        goto label_120d30;
    }
    ctx->pc = 0x120D28u;
    SET_GPR_U32(ctx, 31, 0x120D30u);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x120D28u, 0x120D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120D30u;
label_120d30:
    // 0x120d30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x120d30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120d34:
    // 0x120d34: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x120d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_120d38:
    // 0x120d38: 0xc050c5c  jal         func_143170
label_120d3c:
    if (ctx->pc == 0x120D3Cu) {
        ctx->pc = 0x120D40u;
        goto label_120d40;
    }
    ctx->pc = 0x120D38u;
    SET_GPR_U32(ctx, 31, 0x120D40u);
    ctx->pc = 0x143170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143170u, 0x120D38u, 0x120D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120D40u;
label_120d40:
    // 0x120d40: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x120d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_120d44:
    // 0x120d44: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x120d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_120d48:
    // 0x120d48: 0xc050c64  jal         func_143190
label_120d4c:
    if (ctx->pc == 0x120D4Cu) {
        ctx->pc = 0x120D50u;
        goto label_120d50;
    }
    ctx->pc = 0x120D48u;
    SET_GPR_U32(ctx, 31, 0x120D50u);
    ctx->pc = 0x143190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143190u, 0x120D48u, 0x120D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120D50u;
label_120d50:
    // 0x120d50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x120d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120d54:
    // 0x120d54: 0xc04738c  jal         func_11CE30
label_120d58:
    if (ctx->pc == 0x120D58u) {
        ctx->pc = 0x120D5Cu;
        goto label_120d5c;
    }
    ctx->pc = 0x120D54u;
    SET_GPR_U32(ctx, 31, 0x120D5Cu);
    ctx->pc = 0x11CE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CE30u, 0x120D54u, 0x120D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120D5Cu;
label_120d5c:
    // 0x120d5c: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x120d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
label_120d60:
    // 0x120d60: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x120d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_120d64:
    // 0x120d64: 0x93a500d0  lbu         $a1, 0xD0($sp)
    ctx->pc = 0x120d64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
label_120d68:
    // 0x120d68: 0xc08edb0  jal         func_23B6C0
label_120d6c:
    if (ctx->pc == 0x120D6Cu) {
        ctx->pc = 0x120D70u;
        goto label_120d70;
    }
    ctx->pc = 0x120D68u;
    SET_GPR_U32(ctx, 31, 0x120D70u);
    ctx->pc = 0x23B6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B6C0u, 0x120D68u, 0x120D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120D70u;
label_120d70:
    // 0x120d70: 0x93a200d0  lbu         $v0, 0xD0($sp)
    ctx->pc = 0x120d70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
label_120d74:
    // 0x120d74: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x120d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_120d78:
    // 0x120d78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x120d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120d7c:
    // 0x120d7c: 0x1462017a  bne         $v1, $v0, . + 4 + (0x17A << 2)
label_120d80:
    if (ctx->pc == 0x120D80u) {
        ctx->pc = 0x120D84u;
        goto label_120d84;
    }
    ctx->pc = 0x120D7Cu;
    {
        const bool branch_taken_0x120d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x120d7c) {
            ctx->pc = 0x121368u;
            goto label_121368;
        }
    }
    ctx->pc = 0x120D84u;
label_120d84:
    // 0x120d84: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x120d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_120d88:
    // 0x120d88: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x120d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_120d8c:
    // 0x120d8c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x120d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_120d90:
    // 0x120d90: 0x24a51fc0  addiu       $a1, $a1, 0x1FC0
    ctx->pc = 0x120d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8128));
label_120d94:
    // 0x120d94: 0x27868a60  addiu       $a2, $gp, -0x75A0
    ctx->pc = 0x120d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937184));
label_120d98:
    // 0x120d98: 0xc04206c  jal         func_1081B0
label_120d9c:
    if (ctx->pc == 0x120D9Cu) {
        ctx->pc = 0x120DA0u;
        goto label_120da0;
    }
    ctx->pc = 0x120D98u;
    SET_GPR_U32(ctx, 31, 0x120DA0u);
    ctx->pc = 0x1081B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081B0u, 0x120D98u, 0x120DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120DA0u;
label_120da0:
    // 0x120da0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x120da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_120da4:
    // 0x120da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_120da8:
    // 0x120da8: 0x27858a68  addiu       $a1, $gp, -0x7598
    ctx->pc = 0x120da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937192));
label_120dac:
    // 0x120dac: 0xc0bc824  jal         func_2F2090
label_120db0:
    if (ctx->pc == 0x120DB0u) {
        ctx->pc = 0x120DB4u;
        goto label_120db4;
    }
    ctx->pc = 0x120DACu;
    SET_GPR_U32(ctx, 31, 0x120DB4u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x120DACu, 0x120DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120DB4u;
label_120db4:
    // 0x120db4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_120db8:
    if (ctx->pc == 0x120DB8u) {
        ctx->pc = 0x120DBCu;
        goto label_120dbc;
    }
    ctx->pc = 0x120DB4u;
    {
        const bool branch_taken_0x120db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120db4) {
            ctx->pc = 0x120DE4u;
            goto label_120de4;
        }
    }
    ctx->pc = 0x120DBCu;
label_120dbc:
    // 0x120dbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x120dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_120dc0:
    // 0x120dc0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x120dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_120dc4:
    // 0x120dc4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x120dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_120dc8:
    // 0x120dc8: 0x27858a70  addiu       $a1, $gp, -0x7590
    ctx->pc = 0x120dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937200));
label_120dcc:
    // 0x120dcc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x120dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120dd0:
    // 0x120dd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x120dd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120dd4:
    // 0x120dd4: 0xc08f6a0  jal         func_23DA80
label_120dd8:
    if (ctx->pc == 0x120DD8u) {
        ctx->pc = 0x120DDCu;
        goto label_120ddc;
    }
    ctx->pc = 0x120DD4u;
    SET_GPR_U32(ctx, 31, 0x120DDCu);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x120DD4u, 0x120DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120DDCu;
label_120ddc:
    // 0x120ddc: 0x10000103  b           . + 4 + (0x103 << 2)
label_120de0:
    if (ctx->pc == 0x120DE0u) {
        ctx->pc = 0x120DE4u;
        goto label_120de4;
    }
    ctx->pc = 0x120DDCu;
    {
        const bool branch_taken_0x120ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120ddc) {
            ctx->pc = 0x1211ECu;
            goto label_1211ec;
        }
    }
    ctx->pc = 0x120DE4u;
label_120de4:
    // 0x120de4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_120de8:
    // 0x120de8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x120de8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_120dec:
    // 0x120dec: 0x24a51fe0  addiu       $a1, $a1, 0x1FE0
    ctx->pc = 0x120decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8160));
label_120df0:
    // 0x120df0: 0xc0bc824  jal         func_2F2090
label_120df4:
    if (ctx->pc == 0x120DF4u) {
        ctx->pc = 0x120DF8u;
        goto label_120df8;
    }
    ctx->pc = 0x120DF0u;
    SET_GPR_U32(ctx, 31, 0x120DF8u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x120DF0u, 0x120DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120DF8u;
label_120df8:
    // 0x120df8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_120dfc:
    if (ctx->pc == 0x120DFCu) {
        ctx->pc = 0x120E00u;
        goto label_120e00;
    }
    ctx->pc = 0x120DF8u;
    {
        const bool branch_taken_0x120df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120df8) {
            ctx->pc = 0x120E28u;
            goto label_120e28;
        }
    }
    ctx->pc = 0x120E00u;
label_120e00:
    // 0x120e00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x120e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_120e04:
    // 0x120e04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x120e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_120e08:
    // 0x120e08: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x120e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_120e0c:
    // 0x120e0c: 0x27858a78  addiu       $a1, $gp, -0x7588
    ctx->pc = 0x120e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937208));
label_120e10:
    // 0x120e10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x120e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120e14:
    // 0x120e14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x120e14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120e18:
    // 0x120e18: 0xc08f6a0  jal         func_23DA80
label_120e1c:
    if (ctx->pc == 0x120E1Cu) {
        ctx->pc = 0x120E20u;
        goto label_120e20;
    }
    ctx->pc = 0x120E18u;
    SET_GPR_U32(ctx, 31, 0x120E20u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x120E18u, 0x120E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120E20u;
label_120e20:
    // 0x120e20: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_120e24:
    if (ctx->pc == 0x120E24u) {
        ctx->pc = 0x120E28u;
        goto label_120e28;
    }
    ctx->pc = 0x120E20u;
    {
        const bool branch_taken_0x120e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120e20) {
            ctx->pc = 0x1211ECu;
            goto label_1211ec;
        }
    }
    ctx->pc = 0x120E28u;
label_120e28:
    // 0x120e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_120e2c:
    // 0x120e2c: 0x27858a80  addiu       $a1, $gp, -0x7580
    ctx->pc = 0x120e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937216));
label_120e30:
    // 0x120e30: 0xc0bc824  jal         func_2F2090
label_120e34:
    if (ctx->pc == 0x120E34u) {
        ctx->pc = 0x120E38u;
        goto label_120e38;
    }
    ctx->pc = 0x120E30u;
    SET_GPR_U32(ctx, 31, 0x120E38u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x120E30u, 0x120E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120E38u;
label_120e38:
    // 0x120e38: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_120e3c:
    if (ctx->pc == 0x120E3Cu) {
        ctx->pc = 0x120E40u;
        goto label_120e40;
    }
    ctx->pc = 0x120E38u;
    {
        const bool branch_taken_0x120e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120e38) {
            ctx->pc = 0x120E6Cu;
            goto label_120e6c;
        }
    }
    ctx->pc = 0x120E40u;
label_120e40:
    // 0x120e40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x120e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_120e44:
    // 0x120e44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x120e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_120e48:
    // 0x120e48: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x120e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_120e4c:
    // 0x120e4c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x120e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_120e50:
    // 0x120e50: 0x24a51ff0  addiu       $a1, $a1, 0x1FF0
    ctx->pc = 0x120e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8176));
label_120e54:
    // 0x120e54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x120e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120e58:
    // 0x120e58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x120e58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120e5c:
    // 0x120e5c: 0xc08f6a0  jal         func_23DA80
label_120e60:
    if (ctx->pc == 0x120E60u) {
        ctx->pc = 0x120E64u;
        goto label_120e64;
    }
    ctx->pc = 0x120E5Cu;
    SET_GPR_U32(ctx, 31, 0x120E64u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x120E5Cu, 0x120E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120E64u;
label_120e64:
    // 0x120e64: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_120e68:
    if (ctx->pc == 0x120E68u) {
        ctx->pc = 0x120E6Cu;
        goto label_120e6c;
    }
    ctx->pc = 0x120E64u;
    {
        const bool branch_taken_0x120e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120e64) {
            ctx->pc = 0x1211ECu;
            goto label_1211ec;
        }
    }
    ctx->pc = 0x120E6Cu;
label_120e6c:
    // 0x120e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_120e70:
    // 0x120e70: 0x27858a88  addiu       $a1, $gp, -0x7578
    ctx->pc = 0x120e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937224));
label_120e74:
    // 0x120e74: 0xc0bc824  jal         func_2F2090
label_120e78:
    if (ctx->pc == 0x120E78u) {
        ctx->pc = 0x120E7Cu;
        goto label_120e7c;
    }
    ctx->pc = 0x120E74u;
    SET_GPR_U32(ctx, 31, 0x120E7Cu);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x120E74u, 0x120E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120E7Cu;
label_120e7c:
    // 0x120e7c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_120e80:
    if (ctx->pc == 0x120E80u) {
        ctx->pc = 0x120E84u;
        goto label_120e84;
    }
    ctx->pc = 0x120E7Cu;
    {
        const bool branch_taken_0x120e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120e7c) {
            ctx->pc = 0x120EB0u;
            goto label_120eb0;
        }
    }
    ctx->pc = 0x120E84u;
label_120e84:
    // 0x120e84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x120e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_120e88:
    // 0x120e88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x120e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_120e8c:
    // 0x120e8c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x120e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_120e90:
    // 0x120e90: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x120e90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_120e94:
    // 0x120e94: 0x24a52000  addiu       $a1, $a1, 0x2000
    ctx->pc = 0x120e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8192));
label_120e98:
    // 0x120e98: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x120e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120e9c:
    // 0x120e9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x120e9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120ea0:
    // 0x120ea0: 0xc08f6a0  jal         func_23DA80
label_120ea4:
    if (ctx->pc == 0x120EA4u) {
        ctx->pc = 0x120EA8u;
        goto label_120ea8;
    }
    ctx->pc = 0x120EA0u;
    SET_GPR_U32(ctx, 31, 0x120EA8u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x120EA0u, 0x120EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120EA8u;
label_120ea8:
    // 0x120ea8: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_120eac:
    if (ctx->pc == 0x120EACu) {
        ctx->pc = 0x120EB0u;
        goto label_120eb0;
    }
    ctx->pc = 0x120EA8u;
    {
        const bool branch_taken_0x120ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120ea8) {
            ctx->pc = 0x1211ECu;
            goto label_1211ec;
        }
    }
    ctx->pc = 0x120EB0u;
label_120eb0:
    // 0x120eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_120eb4:
    // 0x120eb4: 0x27858a90  addiu       $a1, $gp, -0x7570
    ctx->pc = 0x120eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937232));
label_120eb8:
    // 0x120eb8: 0xc0bc824  jal         func_2F2090
label_120ebc:
    if (ctx->pc == 0x120EBCu) {
        ctx->pc = 0x120EC0u;
        goto label_120ec0;
    }
    ctx->pc = 0x120EB8u;
    SET_GPR_U32(ctx, 31, 0x120EC0u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x120EB8u, 0x120EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120EC0u;
label_120ec0:
    // 0x120ec0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_120ec4:
    if (ctx->pc == 0x120EC4u) {
        ctx->pc = 0x120EC8u;
        goto label_120ec8;
    }
    ctx->pc = 0x120EC0u;
    {
        const bool branch_taken_0x120ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120ec0) {
            ctx->pc = 0x120EF0u;
            goto label_120ef0;
        }
    }
    ctx->pc = 0x120EC8u;
label_120ec8:
    // 0x120ec8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x120ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_120ecc:
    // 0x120ecc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x120eccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_120ed0:
    // 0x120ed0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x120ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_120ed4:
    // 0x120ed4: 0x27858a98  addiu       $a1, $gp, -0x7568
    ctx->pc = 0x120ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937240));
label_120ed8:
    // 0x120ed8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x120ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120edc:
    // 0x120edc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x120edcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120ee0:
    // 0x120ee0: 0xc08f6a0  jal         func_23DA80
label_120ee4:
    if (ctx->pc == 0x120EE4u) {
        ctx->pc = 0x120EE8u;
        goto label_120ee8;
    }
    ctx->pc = 0x120EE0u;
    SET_GPR_U32(ctx, 31, 0x120EE8u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x120EE0u, 0x120EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120EE8u;
label_120ee8:
    // 0x120ee8: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_120eec:
    if (ctx->pc == 0x120EECu) {
        ctx->pc = 0x120EF0u;
        goto label_120ef0;
    }
    ctx->pc = 0x120EE8u;
    {
        const bool branch_taken_0x120ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120ee8) {
            ctx->pc = 0x1211ECu;
            goto label_1211ec;
        }
    }
    ctx->pc = 0x120EF0u;
label_120ef0:
    // 0x120ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_120ef4:
    // 0x120ef4: 0x27858aa0  addiu       $a1, $gp, -0x7560
    ctx->pc = 0x120ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937248));
label_120ef8:
    // 0x120ef8: 0xc0bc824  jal         func_2F2090
label_120efc:
    if (ctx->pc == 0x120EFCu) {
        ctx->pc = 0x120F00u;
        goto label_120f00;
    }
    ctx->pc = 0x120EF8u;
    SET_GPR_U32(ctx, 31, 0x120F00u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x120EF8u, 0x120F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120F00u;
label_120f00:
    // 0x120f00: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_120f04:
    if (ctx->pc == 0x120F04u) {
        ctx->pc = 0x120F08u;
        goto label_120f08;
    }
    ctx->pc = 0x120F00u;
    {
        const bool branch_taken_0x120f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120f00) {
            ctx->pc = 0x120F30u;
            goto label_120f30;
        }
    }
    ctx->pc = 0x120F08u;
label_120f08:
    // 0x120f08: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x120f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_120f0c:
    // 0x120f0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x120f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_120f10:
    // 0x120f10: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x120f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_120f14:
    // 0x120f14: 0x27858a98  addiu       $a1, $gp, -0x7568
    ctx->pc = 0x120f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937240));
label_120f18:
    // 0x120f18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x120f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120f1c:
    // 0x120f1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x120f1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120f20:
    // 0x120f20: 0xc08f6a0  jal         func_23DA80
label_120f24:
    if (ctx->pc == 0x120F24u) {
        ctx->pc = 0x120F28u;
        goto label_120f28;
    }
    ctx->pc = 0x120F20u;
    SET_GPR_U32(ctx, 31, 0x120F28u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x120F20u, 0x120F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120F28u;
label_120f28:
    // 0x120f28: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_120f2c:
    if (ctx->pc == 0x120F2Cu) {
        ctx->pc = 0x120F30u;
        goto label_120f30;
    }
    ctx->pc = 0x120F28u;
    {
        const bool branch_taken_0x120f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120f28) {
            ctx->pc = 0x1211ECu;
            goto label_1211ec;
        }
    }
    ctx->pc = 0x120F30u;
label_120f30:
    // 0x120f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_120f34:
    // 0x120f34: 0x27858aa8  addiu       $a1, $gp, -0x7558
    ctx->pc = 0x120f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937256));
label_120f38:
    // 0x120f38: 0xc0bc824  jal         func_2F2090
label_120f3c:
    if (ctx->pc == 0x120F3Cu) {
        ctx->pc = 0x120F40u;
        goto label_120f40;
    }
    ctx->pc = 0x120F38u;
    SET_GPR_U32(ctx, 31, 0x120F40u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x120F38u, 0x120F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120F40u;
label_120f40:
    // 0x120f40: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_120f44:
    if (ctx->pc == 0x120F44u) {
        ctx->pc = 0x120F48u;
        goto label_120f48;
    }
    ctx->pc = 0x120F40u;
    {
        const bool branch_taken_0x120f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120f40) {
            ctx->pc = 0x120F70u;
            goto label_120f70;
        }
    }
    ctx->pc = 0x120F48u;
label_120f48:
    // 0x120f48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x120f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_120f4c:
    // 0x120f4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x120f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_120f50:
    // 0x120f50: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x120f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_120f54:
    // 0x120f54: 0x27858aa8  addiu       $a1, $gp, -0x7558
    ctx->pc = 0x120f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937256));
label_120f58:
    // 0x120f58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x120f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120f5c:
    // 0x120f5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x120f5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120f60:
    // 0x120f60: 0xc08f6a0  jal         func_23DA80
label_120f64:
    if (ctx->pc == 0x120F64u) {
        ctx->pc = 0x120F68u;
        goto label_120f68;
    }
    ctx->pc = 0x120F60u;
    SET_GPR_U32(ctx, 31, 0x120F68u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x120F60u, 0x120F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120F68u;
label_120f68:
    // 0x120f68: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_120f6c:
    if (ctx->pc == 0x120F6Cu) {
        ctx->pc = 0x120F70u;
        goto label_120f70;
    }
    ctx->pc = 0x120F68u;
    {
        const bool branch_taken_0x120f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120f68) {
            ctx->pc = 0x1211ECu;
            goto label_1211ec;
        }
    }
    ctx->pc = 0x120F70u;
label_120f70:
    // 0x120f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_120f74:
    // 0x120f74: 0x27858ab0  addiu       $a1, $gp, -0x7550
    ctx->pc = 0x120f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937264));
label_120f78:
    // 0x120f78: 0xc0bc824  jal         func_2F2090
label_120f7c:
    if (ctx->pc == 0x120F7Cu) {
        ctx->pc = 0x120F80u;
        goto label_120f80;
    }
    ctx->pc = 0x120F78u;
    SET_GPR_U32(ctx, 31, 0x120F80u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x120F78u, 0x120F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120F80u;
label_120f80:
    // 0x120f80: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_120f84:
    if (ctx->pc == 0x120F84u) {
        ctx->pc = 0x120F88u;
        goto label_120f88;
    }
    ctx->pc = 0x120F80u;
    {
        const bool branch_taken_0x120f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x120f80) {
            ctx->pc = 0x120FA0u;
            goto label_120fa0;
        }
    }
    ctx->pc = 0x120F88u;
label_120f88:
    // 0x120f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_120f8c:
    // 0x120f8c: 0x27858ab8  addiu       $a1, $gp, -0x7548
    ctx->pc = 0x120f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937272));
label_120f90:
    // 0x120f90: 0xc0bc824  jal         func_2F2090
label_120f94:
    if (ctx->pc == 0x120F94u) {
        ctx->pc = 0x120F98u;
        goto label_120f98;
    }
    ctx->pc = 0x120F90u;
    SET_GPR_U32(ctx, 31, 0x120F98u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x120F90u, 0x120F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120F98u;
label_120f98:
    // 0x120f98: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_120f9c:
    if (ctx->pc == 0x120F9Cu) {
        ctx->pc = 0x120FA0u;
        goto label_120fa0;
    }
    ctx->pc = 0x120F98u;
    {
        const bool branch_taken_0x120f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120f98) {
            ctx->pc = 0x120FCCu;
            goto label_120fcc;
        }
    }
    ctx->pc = 0x120FA0u;
label_120fa0:
    // 0x120fa0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x120fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_120fa4:
    // 0x120fa4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x120fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_120fa8:
    // 0x120fa8: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x120fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_120fac:
    // 0x120fac: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x120facu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_120fb0:
    // 0x120fb0: 0x24a52010  addiu       $a1, $a1, 0x2010
    ctx->pc = 0x120fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8208));
label_120fb4:
    // 0x120fb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x120fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120fb8:
    // 0x120fb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x120fb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_120fbc:
    // 0x120fbc: 0xc08f6a0  jal         func_23DA80
label_120fc0:
    if (ctx->pc == 0x120FC0u) {
        ctx->pc = 0x120FC4u;
        goto label_120fc4;
    }
    ctx->pc = 0x120FBCu;
    SET_GPR_U32(ctx, 31, 0x120FC4u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x120FBCu, 0x120FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120FC4u;
label_120fc4:
    // 0x120fc4: 0x10000089  b           . + 4 + (0x89 << 2)
label_120fc8:
    if (ctx->pc == 0x120FC8u) {
        ctx->pc = 0x120FCCu;
        goto label_120fcc;
    }
    ctx->pc = 0x120FC4u;
    {
        const bool branch_taken_0x120fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x120fc4) {
            ctx->pc = 0x1211ECu;
            goto label_1211ec;
        }
    }
    ctx->pc = 0x120FCCu;
label_120fcc:
    // 0x120fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x120fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_120fd0:
    // 0x120fd0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x120fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_120fd4:
    // 0x120fd4: 0x24a52020  addiu       $a1, $a1, 0x2020
    ctx->pc = 0x120fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8224));
label_120fd8:
    // 0x120fd8: 0xc0bc824  jal         func_2F2090
label_120fdc:
    if (ctx->pc == 0x120FDCu) {
        ctx->pc = 0x120FE0u;
        goto label_120fe0;
    }
    ctx->pc = 0x120FD8u;
    SET_GPR_U32(ctx, 31, 0x120FE0u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x120FD8u, 0x120FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120FE0u;
label_120fe0:
    // 0x120fe0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_120fe4:
    if (ctx->pc == 0x120FE4u) {
        ctx->pc = 0x120FE8u;
        goto label_120fe8;
    }
    ctx->pc = 0x120FE0u;
    {
        const bool branch_taken_0x120fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x120fe0) {
            ctx->pc = 0x121010u;
            goto label_121010;
        }
    }
    ctx->pc = 0x120FE8u;
label_120fe8:
    // 0x120fe8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x120fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_120fec:
    // 0x120fec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x120fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_120ff0:
    // 0x120ff0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x120ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_120ff4:
    // 0x120ff4: 0x27858ac0  addiu       $a1, $gp, -0x7540
    ctx->pc = 0x120ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937280));
label_120ff8:
    // 0x120ff8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x120ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_120ffc:
    // 0x120ffc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x120ffcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_121000:
    // 0x121000: 0xc08f6a0  jal         func_23DA80
label_121004:
    if (ctx->pc == 0x121004u) {
        ctx->pc = 0x121008u;
        goto label_121008;
    }
    ctx->pc = 0x121000u;
    SET_GPR_U32(ctx, 31, 0x121008u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x121000u, 0x121008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121008u;
label_121008:
    // 0x121008: 0x10000078  b           . + 4 + (0x78 << 2)
label_12100c:
    if (ctx->pc == 0x12100Cu) {
        ctx->pc = 0x121010u;
        goto label_121010;
    }
    ctx->pc = 0x121008u;
    {
        const bool branch_taken_0x121008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121008) {
            ctx->pc = 0x1211ECu;
            goto label_1211ec;
        }
    }
    ctx->pc = 0x121010u;
label_121010:
    // 0x121010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_121014:
    // 0x121014: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x121014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_121018:
    // 0x121018: 0x24a52030  addiu       $a1, $a1, 0x2030
    ctx->pc = 0x121018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8240));
label_12101c:
    // 0x12101c: 0xc0bc824  jal         func_2F2090
label_121020:
    if (ctx->pc == 0x121020u) {
        ctx->pc = 0x121024u;
        goto label_121024;
    }
    ctx->pc = 0x12101Cu;
    SET_GPR_U32(ctx, 31, 0x121024u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x12101Cu, 0x121024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121024u;
label_121024:
    // 0x121024: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_121028:
    if (ctx->pc == 0x121028u) {
        ctx->pc = 0x12102Cu;
        goto label_12102c;
    }
    ctx->pc = 0x121024u;
    {
        const bool branch_taken_0x121024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121024) {
            ctx->pc = 0x121058u;
            goto label_121058;
        }
    }
    ctx->pc = 0x12102Cu;
label_12102c:
    // 0x12102c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x12102cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_121030:
    // 0x121030: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x121030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_121034:
    // 0x121034: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x121034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_121038:
    // 0x121038: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x121038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_12103c:
    // 0x12103c: 0x24a52040  addiu       $a1, $a1, 0x2040
    ctx->pc = 0x12103cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8256));
label_121040:
    // 0x121040: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x121040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121044:
    // 0x121044: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x121044u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_121048:
    // 0x121048: 0xc08f6a0  jal         func_23DA80
label_12104c:
    if (ctx->pc == 0x12104Cu) {
        ctx->pc = 0x121050u;
        goto label_121050;
    }
    ctx->pc = 0x121048u;
    SET_GPR_U32(ctx, 31, 0x121050u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x121048u, 0x121050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121050u;
label_121050:
    // 0x121050: 0x10000066  b           . + 4 + (0x66 << 2)
label_121054:
    if (ctx->pc == 0x121054u) {
        ctx->pc = 0x121058u;
        goto label_121058;
    }
    ctx->pc = 0x121050u;
    {
        const bool branch_taken_0x121050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121050) {
            ctx->pc = 0x1211ECu;
            goto label_1211ec;
        }
    }
    ctx->pc = 0x121058u;
label_121058:
    // 0x121058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12105c:
    // 0x12105c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x12105cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_121060:
    // 0x121060: 0x24a52050  addiu       $a1, $a1, 0x2050
    ctx->pc = 0x121060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8272));
label_121064:
    // 0x121064: 0xc0bc824  jal         func_2F2090
label_121068:
    if (ctx->pc == 0x121068u) {
        ctx->pc = 0x12106Cu;
        goto label_12106c;
    }
    ctx->pc = 0x121064u;
    SET_GPR_U32(ctx, 31, 0x12106Cu);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x121064u, 0x12106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12106Cu;
label_12106c:
    // 0x12106c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_121070:
    if (ctx->pc == 0x121070u) {
        ctx->pc = 0x121074u;
        goto label_121074;
    }
    ctx->pc = 0x12106Cu;
    {
        const bool branch_taken_0x12106c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12106c) {
            ctx->pc = 0x1210A0u;
            goto label_1210a0;
        }
    }
    ctx->pc = 0x121074u;
label_121074:
    // 0x121074: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x121074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_121078:
    // 0x121078: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x121078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12107c:
    // 0x12107c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x12107cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_121080:
    // 0x121080: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x121080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_121084:
    // 0x121084: 0x24a52060  addiu       $a1, $a1, 0x2060
    ctx->pc = 0x121084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8288));
label_121088:
    // 0x121088: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x121088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12108c:
    // 0x12108c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12108cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_121090:
    // 0x121090: 0xc08f6a0  jal         func_23DA80
label_121094:
    if (ctx->pc == 0x121094u) {
        ctx->pc = 0x121098u;
        goto label_121098;
    }
    ctx->pc = 0x121090u;
    SET_GPR_U32(ctx, 31, 0x121098u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x121090u, 0x121098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121098u;
label_121098:
    // 0x121098: 0x10000054  b           . + 4 + (0x54 << 2)
label_12109c:
    if (ctx->pc == 0x12109Cu) {
        ctx->pc = 0x1210A0u;
        goto label_1210a0;
    }
    ctx->pc = 0x121098u;
    {
        const bool branch_taken_0x121098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121098) {
            ctx->pc = 0x1211ECu;
            goto label_1211ec;
        }
    }
    ctx->pc = 0x1210A0u;
label_1210a0:
    // 0x1210a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1210a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1210a4:
    // 0x1210a4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1210a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1210a8:
    // 0x1210a8: 0x24a52070  addiu       $a1, $a1, 0x2070
    ctx->pc = 0x1210a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8304));
label_1210ac:
    // 0x1210ac: 0xc0bc824  jal         func_2F2090
label_1210b0:
    if (ctx->pc == 0x1210B0u) {
        ctx->pc = 0x1210B4u;
        goto label_1210b4;
    }
    ctx->pc = 0x1210ACu;
    SET_GPR_U32(ctx, 31, 0x1210B4u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x1210ACu, 0x1210B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1210B4u;
label_1210b4:
    // 0x1210b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1210b8:
    if (ctx->pc == 0x1210B8u) {
        ctx->pc = 0x1210BCu;
        goto label_1210bc;
    }
    ctx->pc = 0x1210B4u;
    {
        const bool branch_taken_0x1210b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1210b4) {
            ctx->pc = 0x1210E8u;
            goto label_1210e8;
        }
    }
    ctx->pc = 0x1210BCu;
label_1210bc:
    // 0x1210bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1210bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1210c0:
    // 0x1210c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1210c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1210c4:
    // 0x1210c4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1210c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1210c8:
    // 0x1210c8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1210c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1210cc:
    // 0x1210cc: 0x24a52080  addiu       $a1, $a1, 0x2080
    ctx->pc = 0x1210ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8320));
label_1210d0:
    // 0x1210d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1210d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1210d4:
    // 0x1210d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1210d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1210d8:
    // 0x1210d8: 0xc08f6a0  jal         func_23DA80
label_1210dc:
    if (ctx->pc == 0x1210DCu) {
        ctx->pc = 0x1210E0u;
        goto label_1210e0;
    }
    ctx->pc = 0x1210D8u;
    SET_GPR_U32(ctx, 31, 0x1210E0u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x1210D8u, 0x1210E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1210E0u;
label_1210e0:
    // 0x1210e0: 0x10000042  b           . + 4 + (0x42 << 2)
label_1210e4:
    if (ctx->pc == 0x1210E4u) {
        ctx->pc = 0x1210E8u;
        goto label_1210e8;
    }
    ctx->pc = 0x1210E0u;
    {
        const bool branch_taken_0x1210e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1210e0) {
            ctx->pc = 0x1211ECu;
            goto label_1211ec;
        }
    }
    ctx->pc = 0x1210E8u;
label_1210e8:
    // 0x1210e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1210e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1210ec:
    // 0x1210ec: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1210ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1210f0:
    // 0x1210f0: 0x24a52090  addiu       $a1, $a1, 0x2090
    ctx->pc = 0x1210f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8336));
label_1210f4:
    // 0x1210f4: 0xc0bc824  jal         func_2F2090
label_1210f8:
    if (ctx->pc == 0x1210F8u) {
        ctx->pc = 0x1210FCu;
        goto label_1210fc;
    }
    ctx->pc = 0x1210F4u;
    SET_GPR_U32(ctx, 31, 0x1210FCu);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x1210F4u, 0x1210FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1210FCu;
label_1210fc:
    // 0x1210fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_121100:
    if (ctx->pc == 0x121100u) {
        ctx->pc = 0x121104u;
        goto label_121104;
    }
    ctx->pc = 0x1210FCu;
    {
        const bool branch_taken_0x1210fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1210fc) {
            ctx->pc = 0x12112Cu;
            goto label_12112c;
        }
    }
    ctx->pc = 0x121104u;
label_121104:
    // 0x121104: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x121104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_121108:
    // 0x121108: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x121108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12110c:
    // 0x12110c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x12110cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_121110:
    // 0x121110: 0x27858ac8  addiu       $a1, $gp, -0x7538
    ctx->pc = 0x121110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937288));
label_121114:
    // 0x121114: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x121114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121118:
    // 0x121118: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x121118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12111c:
    // 0x12111c: 0xc08f6a0  jal         func_23DA80
label_121120:
    if (ctx->pc == 0x121120u) {
        ctx->pc = 0x121124u;
        goto label_121124;
    }
    ctx->pc = 0x12111Cu;
    SET_GPR_U32(ctx, 31, 0x121124u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x12111Cu, 0x121124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121124u;
label_121124:
    // 0x121124: 0x10000031  b           . + 4 + (0x31 << 2)
label_121128:
    if (ctx->pc == 0x121128u) {
        ctx->pc = 0x12112Cu;
        goto label_12112c;
    }
    ctx->pc = 0x121124u;
    {
        const bool branch_taken_0x121124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121124) {
            ctx->pc = 0x1211ECu;
            goto label_1211ec;
        }
    }
    ctx->pc = 0x12112Cu;
label_12112c:
    // 0x12112c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12112cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_121130:
    // 0x121130: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x121130u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_121134:
    // 0x121134: 0x24a520a0  addiu       $a1, $a1, 0x20A0
    ctx->pc = 0x121134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8352));
label_121138:
    // 0x121138: 0xc0bc824  jal         func_2F2090
label_12113c:
    if (ctx->pc == 0x12113Cu) {
        ctx->pc = 0x121140u;
        goto label_121140;
    }
    ctx->pc = 0x121138u;
    SET_GPR_U32(ctx, 31, 0x121140u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x121138u, 0x121140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121140u;
label_121140:
    // 0x121140: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_121144:
    if (ctx->pc == 0x121144u) {
        ctx->pc = 0x121148u;
        goto label_121148;
    }
    ctx->pc = 0x121140u;
    {
        const bool branch_taken_0x121140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121140) {
            ctx->pc = 0x121170u;
            goto label_121170;
        }
    }
    ctx->pc = 0x121148u;
label_121148:
    // 0x121148: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x121148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_12114c:
    // 0x12114c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12114cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_121150:
    // 0x121150: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x121150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_121154:
    // 0x121154: 0x27858ad0  addiu       $a1, $gp, -0x7530
    ctx->pc = 0x121154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937296));
label_121158:
    // 0x121158: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x121158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12115c:
    // 0x12115c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12115cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_121160:
    // 0x121160: 0xc08f6a0  jal         func_23DA80
label_121164:
    if (ctx->pc == 0x121164u) {
        ctx->pc = 0x121168u;
        goto label_121168;
    }
    ctx->pc = 0x121160u;
    SET_GPR_U32(ctx, 31, 0x121168u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x121160u, 0x121168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121168u;
label_121168:
    // 0x121168: 0x10000020  b           . + 4 + (0x20 << 2)
label_12116c:
    if (ctx->pc == 0x12116Cu) {
        ctx->pc = 0x121170u;
        goto label_121170;
    }
    ctx->pc = 0x121168u;
    {
        const bool branch_taken_0x121168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121168) {
            ctx->pc = 0x1211ECu;
            goto label_1211ec;
        }
    }
    ctx->pc = 0x121170u;
label_121170:
    // 0x121170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_121174:
    // 0x121174: 0x27858ad8  addiu       $a1, $gp, -0x7528
    ctx->pc = 0x121174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937304));
label_121178:
    // 0x121178: 0xc0bc824  jal         func_2F2090
label_12117c:
    if (ctx->pc == 0x12117Cu) {
        ctx->pc = 0x121180u;
        goto label_121180;
    }
    ctx->pc = 0x121178u;
    SET_GPR_U32(ctx, 31, 0x121180u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x121178u, 0x121180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121180u;
label_121180:
    // 0x121180: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_121184:
    if (ctx->pc == 0x121184u) {
        ctx->pc = 0x121188u;
        goto label_121188;
    }
    ctx->pc = 0x121180u;
    {
        const bool branch_taken_0x121180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121180) {
            ctx->pc = 0x1211B0u;
            goto label_1211b0;
        }
    }
    ctx->pc = 0x121188u;
label_121188:
    // 0x121188: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x121188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_12118c:
    // 0x12118c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12118cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_121190:
    // 0x121190: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x121190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_121194:
    // 0x121194: 0x27858ae0  addiu       $a1, $gp, -0x7520
    ctx->pc = 0x121194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937312));
label_121198:
    // 0x121198: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x121198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12119c:
    // 0x12119c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12119cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1211a0:
    // 0x1211a0: 0xc08f6a0  jal         func_23DA80
label_1211a4:
    if (ctx->pc == 0x1211A4u) {
        ctx->pc = 0x1211A8u;
        goto label_1211a8;
    }
    ctx->pc = 0x1211A0u;
    SET_GPR_U32(ctx, 31, 0x1211A8u);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x1211A0u, 0x1211A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1211A8u;
label_1211a8:
    // 0x1211a8: 0x10000010  b           . + 4 + (0x10 << 2)
label_1211ac:
    if (ctx->pc == 0x1211ACu) {
        ctx->pc = 0x1211B0u;
        goto label_1211b0;
    }
    ctx->pc = 0x1211A8u;
    {
        const bool branch_taken_0x1211a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1211a8) {
            ctx->pc = 0x1211ECu;
            goto label_1211ec;
        }
    }
    ctx->pc = 0x1211B0u;
label_1211b0:
    // 0x1211b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1211b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1211b4:
    // 0x1211b4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1211b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1211b8:
    // 0x1211b8: 0x24a520b0  addiu       $a1, $a1, 0x20B0
    ctx->pc = 0x1211b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8368));
label_1211bc:
    // 0x1211bc: 0xc0bc824  jal         func_2F2090
label_1211c0:
    if (ctx->pc == 0x1211C0u) {
        ctx->pc = 0x1211C4u;
        goto label_1211c4;
    }
    ctx->pc = 0x1211BCu;
    SET_GPR_U32(ctx, 31, 0x1211C4u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x1211BCu, 0x1211C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1211C4u;
label_1211c4:
    // 0x1211c4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1211c8:
    if (ctx->pc == 0x1211C8u) {
        ctx->pc = 0x1211CCu;
        goto label_1211cc;
    }
    ctx->pc = 0x1211C4u;
    {
        const bool branch_taken_0x1211c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1211c4) {
            ctx->pc = 0x1211ECu;
            goto label_1211ec;
        }
    }
    ctx->pc = 0x1211CCu;
label_1211cc:
    // 0x1211cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1211ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1211d0:
    // 0x1211d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1211d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1211d4:
    // 0x1211d4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1211d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1211d8:
    // 0x1211d8: 0x27858ae8  addiu       $a1, $gp, -0x7518
    ctx->pc = 0x1211d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937320));
label_1211dc:
    // 0x1211dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1211dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1211e0:
    // 0x1211e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1211e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1211e4:
    // 0x1211e4: 0xc08f6a0  jal         func_23DA80
label_1211e8:
    if (ctx->pc == 0x1211E8u) {
        ctx->pc = 0x1211ECu;
        goto label_1211ec;
    }
    ctx->pc = 0x1211E4u;
    SET_GPR_U32(ctx, 31, 0x1211ECu);
    ctx->pc = 0x23DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DA80u, 0x1211E4u, 0x1211ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1211ECu;
label_1211ec:
    // 0x1211ec: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x1211ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_1211f0:
    // 0x1211f0: 0xc050b24  jal         func_142C90
label_1211f4:
    if (ctx->pc == 0x1211F4u) {
        ctx->pc = 0x1211F8u;
        goto label_1211f8;
    }
    ctx->pc = 0x1211F0u;
    SET_GPR_U32(ctx, 31, 0x1211F8u);
    ctx->pc = 0x142C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142C90u, 0x1211F0u, 0x1211F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1211F8u;
label_1211f8:
    // 0x1211f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1211f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1211fc:
    // 0x1211fc: 0xc0412dc  jal         func_104B70
label_121200:
    if (ctx->pc == 0x121200u) {
        ctx->pc = 0x121204u;
        goto label_121204;
    }
    ctx->pc = 0x1211FCu;
    SET_GPR_U32(ctx, 31, 0x121204u);
    ctx->pc = 0x104B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104B70u, 0x1211FCu, 0x121204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121204u;
label_121204:
    // 0x121204: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x121204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_121208:
    // 0x121208: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x121208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_12120c:
    // 0x12120c: 0xc090590  jal         func_241640
label_121210:
    if (ctx->pc == 0x121210u) {
        ctx->pc = 0x121214u;
        goto label_121214;
    }
    ctx->pc = 0x12120Cu;
    SET_GPR_U32(ctx, 31, 0x121214u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x12120Cu, 0x121214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121214u;
label_121214:
    // 0x121214: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x121214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121218:
    // 0x121218: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x121218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_12121c:
    // 0x12121c: 0xc09157c  jal         func_2455F0
label_121220:
    if (ctx->pc == 0x121220u) {
        ctx->pc = 0x121224u;
        goto label_121224;
    }
    ctx->pc = 0x12121Cu;
    SET_GPR_U32(ctx, 31, 0x121224u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x12121Cu, 0x121224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121224u;
label_121224:
    // 0x121224: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x121224u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121228:
    // 0x121228: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x121228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12122c:
    // 0x12122c: 0xc040e7c  jal         func_1039F0
label_121230:
    if (ctx->pc == 0x121230u) {
        ctx->pc = 0x121234u;
        goto label_121234;
    }
    ctx->pc = 0x12122Cu;
    SET_GPR_U32(ctx, 31, 0x121234u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x12122Cu, 0x121234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121234u;
label_121234:
    // 0x121234: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x121234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121238:
    // 0x121238: 0x1000000b  b           . + 4 + (0xB << 2)
label_12123c:
    if (ctx->pc == 0x12123Cu) {
        ctx->pc = 0x121240u;
        goto label_121240;
    }
    ctx->pc = 0x121238u;
    {
        const bool branch_taken_0x121238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121238) {
            ctx->pc = 0x121268u;
            goto label_121268;
        }
    }
    ctx->pc = 0x121240u;
label_121240:
    // 0x121240: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x121240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_121244:
    // 0x121244: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x121244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_121248:
    // 0x121248: 0xc085538  jal         func_2154E0
label_12124c:
    if (ctx->pc == 0x12124Cu) {
        ctx->pc = 0x121250u;
        goto label_121250;
    }
    ctx->pc = 0x121248u;
    SET_GPR_U32(ctx, 31, 0x121250u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x121248u, 0x121250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121250u;
label_121250:
    // 0x121250: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x121250u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121254:
    // 0x121254: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x121254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_121258:
    // 0x121258: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x121258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12125c:
    // 0x12125c: 0xc0ae044  jal         func_2B8110
label_121260:
    if (ctx->pc == 0x121260u) {
        ctx->pc = 0x121264u;
        goto label_121264;
    }
    ctx->pc = 0x12125Cu;
    SET_GPR_U32(ctx, 31, 0x121264u);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x12125Cu, 0x121264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121264u;
label_121264:
    // 0x121264: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x121264u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_121268:
    // 0x121268: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x121268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_12126c:
    // 0x12126c: 0xc04147c  jal         func_1051F0
label_121270:
    if (ctx->pc == 0x121270u) {
        ctx->pc = 0x121274u;
        goto label_121274;
    }
    ctx->pc = 0x12126Cu;
    SET_GPR_U32(ctx, 31, 0x121274u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x12126Cu, 0x121274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121274u;
label_121274:
    // 0x121274: 0x1622fff2  bne         $s1, $v0, . + 4 + (-0xE << 2)
label_121278:
    if (ctx->pc == 0x121278u) {
        ctx->pc = 0x12127Cu;
        goto label_12127c;
    }
    ctx->pc = 0x121274u;
    {
        const bool branch_taken_0x121274 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x121274) {
            ctx->pc = 0x121240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_121240;
        }
    }
    ctx->pc = 0x12127Cu;
label_12127c:
    // 0x12127c: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x12127cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_121280:
    // 0x121280: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x121280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_121284:
    // 0x121284: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x121284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_121288:
    // 0x121288: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x121288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_12128c:
    // 0x12128c: 0x24050534  addiu       $a1, $zero, 0x534
    ctx->pc = 0x12128cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
label_121290:
    // 0x121290: 0xc041bc4  jal         func_106F10
label_121294:
    if (ctx->pc == 0x121294u) {
        ctx->pc = 0x121298u;
        goto label_121298;
    }
    ctx->pc = 0x121290u;
    SET_GPR_U32(ctx, 31, 0x121298u);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x121290u, 0x121298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121298u;
label_121298:
    // 0x121298: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x121298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_12129c:
    // 0x12129c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x12129cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_1212a0:
    // 0x1212a0: 0x240504c6  addiu       $a1, $zero, 0x4C6
    ctx->pc = 0x1212a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1222));
label_1212a4:
    // 0x1212a4: 0x27868a60  addiu       $a2, $gp, -0x75A0
    ctx->pc = 0x1212a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937184));
label_1212a8:
    // 0x1212a8: 0xc041a50  jal         func_106940
label_1212ac:
    if (ctx->pc == 0x1212ACu) {
        ctx->pc = 0x1212B0u;
        goto label_1212b0;
    }
    ctx->pc = 0x1212A8u;
    SET_GPR_U32(ctx, 31, 0x1212B0u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x1212A8u, 0x1212B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1212B0u;
label_1212b0:
    // 0x1212b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1212b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1212b4:
    // 0x1212b4: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x1212b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_1212b8:
    // 0x1212b8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1212b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_1212bc:
    // 0x1212bc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1212bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_1212c0:
    // 0x1212c0: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
label_1212c4:
    if (ctx->pc == 0x1212C4u) {
        ctx->pc = 0x1212C8u;
        goto label_1212c8;
    }
    ctx->pc = 0x1212C0u;
    {
        const bool branch_taken_0x1212c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1212c0) {
            ctx->pc = 0x12141Cu;
            goto label_12141c;
        }
    }
    ctx->pc = 0x1212C8u;
label_1212c8:
    // 0x1212c8: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x1212c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_1212cc:
    // 0x1212cc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1212ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1212d0:
    // 0x1212d0: 0x24a520c0  addiu       $a1, $a1, 0x20C0
    ctx->pc = 0x1212d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8384));
label_1212d4:
    // 0x1212d4: 0xc040304  jal         func_100C10
label_1212d8:
    if (ctx->pc == 0x1212D8u) {
        ctx->pc = 0x1212DCu;
        goto label_1212dc;
    }
    ctx->pc = 0x1212D4u;
    SET_GPR_U32(ctx, 31, 0x1212DCu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1212D4u, 0x1212DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1212DCu;
label_1212dc:
    // 0x1212dc: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x1212dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_1212e0:
    // 0x1212e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1212e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1212e4:
    // 0x1212e4: 0xc0424e8  jal         func_1093A0
label_1212e8:
    if (ctx->pc == 0x1212E8u) {
        ctx->pc = 0x1212ECu;
        goto label_1212ec;
    }
    ctx->pc = 0x1212E4u;
    SET_GPR_U32(ctx, 31, 0x1212ECu);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x1212E4u, 0x1212ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1212ECu;
label_1212ec:
    // 0x1212ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1212ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1212f0:
    // 0x1212f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1212f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1212f4:
    // 0x1212f4: 0xc04e248  jal         func_138920
label_1212f8:
    if (ctx->pc == 0x1212F8u) {
        ctx->pc = 0x1212FCu;
        goto label_1212fc;
    }
    ctx->pc = 0x1212F4u;
    SET_GPR_U32(ctx, 31, 0x1212FCu);
    ctx->pc = 0x138920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138920u, 0x1212F4u, 0x1212FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1212FCu;
label_1212fc:
    // 0x1212fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1212fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_121300:
    // 0x121300: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x121300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_121304:
    // 0x121304: 0xc04e310  jal         func_138C40
label_121308:
    if (ctx->pc == 0x121308u) {
        ctx->pc = 0x12130Cu;
        goto label_12130c;
    }
    ctx->pc = 0x121304u;
    SET_GPR_U32(ctx, 31, 0x12130Cu);
    ctx->pc = 0x138C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138C40u, 0x121304u, 0x12130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12130Cu;
label_12130c:
    // 0x12130c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12130cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_121310:
    // 0x121310: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_121314:
    if (ctx->pc == 0x121314u) {
        ctx->pc = 0x121318u;
        goto label_121318;
    }
    ctx->pc = 0x121310u;
    {
        const bool branch_taken_0x121310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x121310) {
            ctx->pc = 0x121330u;
            goto label_121330;
        }
    }
    ctx->pc = 0x121318u;
label_121318:
    // 0x121318: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x121318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_12131c:
    // 0x12131c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x12131cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_121320:
    // 0x121320: 0xc0402d4  jal         func_100B50
label_121324:
    if (ctx->pc == 0x121324u) {
        ctx->pc = 0x121328u;
        goto label_121328;
    }
    ctx->pc = 0x121320u;
    SET_GPR_U32(ctx, 31, 0x121328u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x121320u, 0x121328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121328u;
label_121328:
    // 0x121328: 0x1000003c  b           . + 4 + (0x3C << 2)
label_12132c:
    if (ctx->pc == 0x12132Cu) {
        ctx->pc = 0x121330u;
        goto label_121330;
    }
    ctx->pc = 0x121328u;
    {
        const bool branch_taken_0x121328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121328) {
            ctx->pc = 0x12141Cu;
            goto label_12141c;
        }
    }
    ctx->pc = 0x121330u;
label_121330:
    // 0x121330: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x121330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_121334:
    // 0x121334: 0xc04e370  jal         func_138DC0
label_121338:
    if (ctx->pc == 0x121338u) {
        ctx->pc = 0x12133Cu;
        goto label_12133c;
    }
    ctx->pc = 0x121334u;
    SET_GPR_U32(ctx, 31, 0x12133Cu);
    ctx->pc = 0x138DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138DC0u, 0x121334u, 0x12133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12133Cu;
label_12133c:
    // 0x12133c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12133cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_121340:
    // 0x121340: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x121340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_121344:
    // 0x121344: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x121344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_121348:
    // 0x121348: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x121348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_12134c:
    // 0x12134c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12134cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121350:
    // 0x121350: 0xc04c608  jal         func_131820
label_121354:
    if (ctx->pc == 0x121354u) {
        ctx->pc = 0x121358u;
        goto label_121358;
    }
    ctx->pc = 0x121350u;
    SET_GPR_U32(ctx, 31, 0x121358u);
    ctx->pc = 0x131820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131820u, 0x121350u, 0x121358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121358u;
label_121358:
    // 0x121358: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x121358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_12135c:
    // 0x12135c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x12135cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_121360:
    // 0x121360: 0xc0402d4  jal         func_100B50
label_121364:
    if (ctx->pc == 0x121364u) {
        ctx->pc = 0x121368u;
        goto label_121368;
    }
    ctx->pc = 0x121360u;
    SET_GPR_U32(ctx, 31, 0x121368u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x121360u, 0x121368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121368u;
label_121368:
    // 0x121368: 0xc05548c  jal         func_155230
label_12136c:
    if (ctx->pc == 0x12136Cu) {
        ctx->pc = 0x121370u;
        goto label_121370;
    }
    ctx->pc = 0x121368u;
    SET_GPR_U32(ctx, 31, 0x121370u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x121368u, 0x121370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121370u;
label_121370:
    // 0x121370: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x121370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121374:
    // 0x121374: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x121374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_121378:
    // 0x121378: 0xc0553d4  jal         func_154F50
label_12137c:
    if (ctx->pc == 0x12137Cu) {
        ctx->pc = 0x121380u;
        goto label_121380;
    }
    ctx->pc = 0x121378u;
    SET_GPR_U32(ctx, 31, 0x121380u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x121378u, 0x121380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121380u;
label_121380:
    // 0x121380: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x121380u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121384:
    // 0x121384: 0x93a300d0  lbu         $v1, 0xD0($sp)
    ctx->pc = 0x121384u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
label_121388:
    // 0x121388: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_12138c:
    if (ctx->pc == 0x12138Cu) {
        ctx->pc = 0x121390u;
        goto label_121390;
    }
    ctx->pc = 0x121388u;
    {
        const bool branch_taken_0x121388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x121388) {
            ctx->pc = 0x121414u;
            goto label_121414;
        }
    }
    ctx->pc = 0x121390u;
label_121390:
    // 0x121390: 0x12800020  beqz        $s4, . + 4 + (0x20 << 2)
label_121394:
    if (ctx->pc == 0x121394u) {
        ctx->pc = 0x121398u;
        goto label_121398;
    }
    ctx->pc = 0x121390u;
    {
        const bool branch_taken_0x121390 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x121390) {
            ctx->pc = 0x121414u;
            goto label_121414;
        }
    }
    ctx->pc = 0x121398u;
label_121398:
    // 0x121398: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x121398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_12139c:
    // 0x12139c: 0xc047eb8  jal         func_11FAE0
label_1213a0:
    if (ctx->pc == 0x1213A0u) {
        ctx->pc = 0x1213A4u;
        goto label_1213a4;
    }
    ctx->pc = 0x12139Cu;
    SET_GPR_U32(ctx, 31, 0x1213A4u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x12139Cu, 0x1213A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1213A4u;
label_1213a4:
    // 0x1213a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1213a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1213a8:
    // 0x1213a8: 0xc047eb0  jal         func_11FAC0
label_1213ac:
    if (ctx->pc == 0x1213ACu) {
        ctx->pc = 0x1213B0u;
        goto label_1213b0;
    }
    ctx->pc = 0x1213A8u;
    SET_GPR_U32(ctx, 31, 0x1213B0u);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x1213A8u, 0x1213B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1213B0u;
label_1213b0:
    // 0x1213b0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1213b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1213b4:
    // 0x1213b4: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1213b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1213b8:
    // 0x1213b8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1213b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1213bc:
    // 0x1213bc: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
label_1213c0:
    if (ctx->pc == 0x1213C0u) {
        ctx->pc = 0x1213C4u;
        goto label_1213c4;
    }
    ctx->pc = 0x1213BCu;
    {
        const bool branch_taken_0x1213bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1213bc) {
            ctx->pc = 0x121414u;
            goto label_121414;
        }
    }
    ctx->pc = 0x1213C4u;
label_1213c4:
    // 0x1213c4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1213c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1213c8:
    // 0x1213c8: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x1213c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_1213cc:
    // 0x1213cc: 0x240504c6  addiu       $a1, $zero, 0x4C6
    ctx->pc = 0x1213ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1222));
label_1213d0:
    // 0x1213d0: 0x27868a60  addiu       $a2, $gp, -0x75A0
    ctx->pc = 0x1213d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937184));
label_1213d4:
    // 0x1213d4: 0xc041a50  jal         func_106940
label_1213d8:
    if (ctx->pc == 0x1213D8u) {
        ctx->pc = 0x1213DCu;
        goto label_1213dc;
    }
    ctx->pc = 0x1213D4u;
    SET_GPR_U32(ctx, 31, 0x1213DCu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x1213D4u, 0x1213DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1213DCu;
label_1213dc:
    // 0x1213dc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1213dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1213e0:
    // 0x1213e0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1213e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1213e4:
    // 0x1213e4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1213e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1213e8:
    // 0x1213e8: 0x24a520d0  addiu       $a1, $a1, 0x20D0
    ctx->pc = 0x1213e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8400));
label_1213ec:
    // 0x1213ec: 0xc0bc48e  jal         func_2F1238
label_1213f0:
    if (ctx->pc == 0x1213F0u) {
        ctx->pc = 0x1213F4u;
        goto label_1213f4;
    }
    ctx->pc = 0x1213ECu;
    SET_GPR_U32(ctx, 31, 0x1213F4u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x1213ECu, 0x1213F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1213F4u;
label_1213f4:
    // 0x1213f4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1213f8:
    if (ctx->pc == 0x1213F8u) {
        ctx->pc = 0x1213FCu;
        goto label_1213fc;
    }
    ctx->pc = 0x1213F4u;
    {
        const bool branch_taken_0x1213f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1213f4) {
            ctx->pc = 0x121414u;
            goto label_121414;
        }
    }
    ctx->pc = 0x1213FCu;
label_1213fc:
    // 0x1213fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1213fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_121400:
    // 0x121400: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x121400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121404:
    // 0x121404: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x121404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_121408:
    // 0x121408: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x121408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_12140c:
    // 0x12140c: 0x320f809  jalr        $t9
label_121410:
    if (ctx->pc == 0x121410u) {
        ctx->pc = 0x121414u;
        goto label_121414;
    }
    ctx->pc = 0x12140Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x121414u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12140Cu, 0x121414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121414u;
label_121414:
    // 0x121414: 0x10000005  b           . + 4 + (0x5 << 2)
label_121418:
    if (ctx->pc == 0x121418u) {
        ctx->pc = 0x12141Cu;
        goto label_12141c;
    }
    ctx->pc = 0x121414u;
    {
        const bool branch_taken_0x121414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121414) {
            ctx->pc = 0x12142Cu;
            goto label_12142c;
        }
    }
    ctx->pc = 0x12141Cu;
label_12141c:
    // 0x12141c: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x12141cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_121420:
    // 0x121420: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x121420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_121424:
    // 0x121424: 0xc08ef28  jal         func_23BCA0
label_121428:
    if (ctx->pc == 0x121428u) {
        ctx->pc = 0x12142Cu;
        goto label_12142c;
    }
    ctx->pc = 0x121424u;
    SET_GPR_U32(ctx, 31, 0x12142Cu);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x121424u, 0x12142Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12142Cu;
label_12142c:
    // 0x12142c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x12142cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_121430:
    // 0x121430: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x121430u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_121434:
    // 0x121434: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x121434u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_121438:
    // 0x121438: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x121438u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_12143c:
    // 0x12143c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12143cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_121440:
    // 0x121440: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x121440u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_121444:
    // 0x121444: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x121444u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_121448:
    // 0x121448: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x121448u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12144c:
    // 0x12144c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12144cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_121450:
    // 0x121450: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x121450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_121454:
    // 0x121454: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x121454u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_121458:
    // 0x121458: 0x3e00008  jr          $ra
label_12145c:
    if (ctx->pc == 0x12145Cu) {
        ctx->pc = 0x121460u;
        goto label_121460;
    }
    ctx->pc = 0x121458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121460u;
label_121460:
    // 0x121460: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x121460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_121464:
    // 0x121464: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x121464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_121468:
    // 0x121468: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x121468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_12146c:
    // 0x12146c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x12146cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_121470:
    // 0x121470: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x121470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_121474:
    // 0x121474: 0xc047800  jal         func_11E000
label_121478:
    if (ctx->pc == 0x121478u) {
        ctx->pc = 0x12147Cu;
        goto label_12147c;
    }
    ctx->pc = 0x121474u;
    SET_GPR_U32(ctx, 31, 0x12147Cu);
    ctx->pc = 0x11E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E000u, 0x121474u, 0x12147Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12147Cu;
label_12147c:
    // 0x12147c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x12147cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_121480:
    // 0x121480: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x121480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121484:
    // 0x121484: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
label_121488:
    if (ctx->pc == 0x121488u) {
        ctx->pc = 0x12148Cu;
        goto label_12148c;
    }
    ctx->pc = 0x121484u;
    {
        const bool branch_taken_0x121484 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x121484) {
            ctx->pc = 0x1214C4u;
            goto label_1214c4;
        }
    }
    ctx->pc = 0x12148Cu;
label_12148c:
    // 0x12148c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x12148cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_121490:
    // 0x121490: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x121490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_121494:
    // 0x121494: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x121494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_121498:
    // 0x121498: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x121498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_12149c:
    // 0x12149c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x12149cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1214a0:
    // 0x1214a0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1214a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1214a4:
    // 0x1214a4: 0x8f84b9d8  lw          $a0, -0x4628($gp)
    ctx->pc = 0x1214a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_1214a8:
    // 0x1214a8: 0xc050c5c  jal         func_143170
label_1214ac:
    if (ctx->pc == 0x1214ACu) {
        ctx->pc = 0x1214B0u;
        goto label_1214b0;
    }
    ctx->pc = 0x1214A8u;
    SET_GPR_U32(ctx, 31, 0x1214B0u);
    ctx->pc = 0x143170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143170u, 0x1214A8u, 0x1214B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1214B0u;
label_1214b0:
    // 0x1214b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1214b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1214b4:
    // 0x1214b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1214b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1214b8:
    // 0x1214b8: 0xc04fbd0  jal         func_13EF40
label_1214bc:
    if (ctx->pc == 0x1214BCu) {
        ctx->pc = 0x1214C0u;
        goto label_1214c0;
    }
    ctx->pc = 0x1214B8u;
    SET_GPR_U32(ctx, 31, 0x1214C0u);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x1214B8u, 0x1214C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1214C0u;
label_1214c0:
    // 0x1214c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1214c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1214c4:
    // 0x1214c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1214c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1214c8:
    // 0x1214c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1214c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1214cc:
    // 0x1214cc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1214ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1214d0:
    // 0x1214d0: 0x3e00008  jr          $ra
label_1214d4:
    if (ctx->pc == 0x1214D4u) {
        ctx->pc = 0x1214D8u;
        goto label_1214d8;
    }
    ctx->pc = 0x1214D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1214D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1214D8u;
label_1214d8:
    // 0x1214d8: 0x0  nop
    ctx->pc = 0x1214d8u;
    // NOP
label_1214dc:
    // 0x1214dc: 0x0  nop
    ctx->pc = 0x1214dcu;
    // NOP
    ctx->pc = 0x1214e0u;
}
