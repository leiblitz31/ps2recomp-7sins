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

// Function: sub_003A7D60
// Address: 0x3a7d60 - 0x3a8a90
void sub_003A7D60_0x3a7d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7D60_0x3a7d60");
#endif

    switch (ctx->pc) {
        case 0x3a7d60u: goto label_3a7d60;
        case 0x3a7d64u: goto label_3a7d64;
        case 0x3a7d68u: goto label_3a7d68;
        case 0x3a7d6cu: goto label_3a7d6c;
        case 0x3a7d70u: goto label_3a7d70;
        case 0x3a7d74u: goto label_3a7d74;
        case 0x3a7d78u: goto label_3a7d78;
        case 0x3a7d7cu: goto label_3a7d7c;
        case 0x3a7d80u: goto label_3a7d80;
        case 0x3a7d84u: goto label_3a7d84;
        case 0x3a7d88u: goto label_3a7d88;
        case 0x3a7d8cu: goto label_3a7d8c;
        case 0x3a7d90u: goto label_3a7d90;
        case 0x3a7d94u: goto label_3a7d94;
        case 0x3a7d98u: goto label_3a7d98;
        case 0x3a7d9cu: goto label_3a7d9c;
        case 0x3a7da0u: goto label_3a7da0;
        case 0x3a7da4u: goto label_3a7da4;
        case 0x3a7da8u: goto label_3a7da8;
        case 0x3a7dacu: goto label_3a7dac;
        case 0x3a7db0u: goto label_3a7db0;
        case 0x3a7db4u: goto label_3a7db4;
        case 0x3a7db8u: goto label_3a7db8;
        case 0x3a7dbcu: goto label_3a7dbc;
        case 0x3a7dc0u: goto label_3a7dc0;
        case 0x3a7dc4u: goto label_3a7dc4;
        case 0x3a7dc8u: goto label_3a7dc8;
        case 0x3a7dccu: goto label_3a7dcc;
        case 0x3a7dd0u: goto label_3a7dd0;
        case 0x3a7dd4u: goto label_3a7dd4;
        case 0x3a7dd8u: goto label_3a7dd8;
        case 0x3a7ddcu: goto label_3a7ddc;
        case 0x3a7de0u: goto label_3a7de0;
        case 0x3a7de4u: goto label_3a7de4;
        case 0x3a7de8u: goto label_3a7de8;
        case 0x3a7decu: goto label_3a7dec;
        case 0x3a7df0u: goto label_3a7df0;
        case 0x3a7df4u: goto label_3a7df4;
        case 0x3a7df8u: goto label_3a7df8;
        case 0x3a7dfcu: goto label_3a7dfc;
        case 0x3a7e00u: goto label_3a7e00;
        case 0x3a7e04u: goto label_3a7e04;
        case 0x3a7e08u: goto label_3a7e08;
        case 0x3a7e0cu: goto label_3a7e0c;
        case 0x3a7e10u: goto label_3a7e10;
        case 0x3a7e14u: goto label_3a7e14;
        case 0x3a7e18u: goto label_3a7e18;
        case 0x3a7e1cu: goto label_3a7e1c;
        case 0x3a7e20u: goto label_3a7e20;
        case 0x3a7e24u: goto label_3a7e24;
        case 0x3a7e28u: goto label_3a7e28;
        case 0x3a7e2cu: goto label_3a7e2c;
        case 0x3a7e30u: goto label_3a7e30;
        case 0x3a7e34u: goto label_3a7e34;
        case 0x3a7e38u: goto label_3a7e38;
        case 0x3a7e3cu: goto label_3a7e3c;
        case 0x3a7e40u: goto label_3a7e40;
        case 0x3a7e44u: goto label_3a7e44;
        case 0x3a7e48u: goto label_3a7e48;
        case 0x3a7e4cu: goto label_3a7e4c;
        case 0x3a7e50u: goto label_3a7e50;
        case 0x3a7e54u: goto label_3a7e54;
        case 0x3a7e58u: goto label_3a7e58;
        case 0x3a7e5cu: goto label_3a7e5c;
        case 0x3a7e60u: goto label_3a7e60;
        case 0x3a7e64u: goto label_3a7e64;
        case 0x3a7e68u: goto label_3a7e68;
        case 0x3a7e6cu: goto label_3a7e6c;
        case 0x3a7e70u: goto label_3a7e70;
        case 0x3a7e74u: goto label_3a7e74;
        case 0x3a7e78u: goto label_3a7e78;
        case 0x3a7e7cu: goto label_3a7e7c;
        case 0x3a7e80u: goto label_3a7e80;
        case 0x3a7e84u: goto label_3a7e84;
        case 0x3a7e88u: goto label_3a7e88;
        case 0x3a7e8cu: goto label_3a7e8c;
        case 0x3a7e90u: goto label_3a7e90;
        case 0x3a7e94u: goto label_3a7e94;
        case 0x3a7e98u: goto label_3a7e98;
        case 0x3a7e9cu: goto label_3a7e9c;
        case 0x3a7ea0u: goto label_3a7ea0;
        case 0x3a7ea4u: goto label_3a7ea4;
        case 0x3a7ea8u: goto label_3a7ea8;
        case 0x3a7eacu: goto label_3a7eac;
        case 0x3a7eb0u: goto label_3a7eb0;
        case 0x3a7eb4u: goto label_3a7eb4;
        case 0x3a7eb8u: goto label_3a7eb8;
        case 0x3a7ebcu: goto label_3a7ebc;
        case 0x3a7ec0u: goto label_3a7ec0;
        case 0x3a7ec4u: goto label_3a7ec4;
        case 0x3a7ec8u: goto label_3a7ec8;
        case 0x3a7eccu: goto label_3a7ecc;
        case 0x3a7ed0u: goto label_3a7ed0;
        case 0x3a7ed4u: goto label_3a7ed4;
        case 0x3a7ed8u: goto label_3a7ed8;
        case 0x3a7edcu: goto label_3a7edc;
        case 0x3a7ee0u: goto label_3a7ee0;
        case 0x3a7ee4u: goto label_3a7ee4;
        case 0x3a7ee8u: goto label_3a7ee8;
        case 0x3a7eecu: goto label_3a7eec;
        case 0x3a7ef0u: goto label_3a7ef0;
        case 0x3a7ef4u: goto label_3a7ef4;
        case 0x3a7ef8u: goto label_3a7ef8;
        case 0x3a7efcu: goto label_3a7efc;
        case 0x3a7f00u: goto label_3a7f00;
        case 0x3a7f04u: goto label_3a7f04;
        case 0x3a7f08u: goto label_3a7f08;
        case 0x3a7f0cu: goto label_3a7f0c;
        case 0x3a7f10u: goto label_3a7f10;
        case 0x3a7f14u: goto label_3a7f14;
        case 0x3a7f18u: goto label_3a7f18;
        case 0x3a7f1cu: goto label_3a7f1c;
        case 0x3a7f20u: goto label_3a7f20;
        case 0x3a7f24u: goto label_3a7f24;
        case 0x3a7f28u: goto label_3a7f28;
        case 0x3a7f2cu: goto label_3a7f2c;
        case 0x3a7f30u: goto label_3a7f30;
        case 0x3a7f34u: goto label_3a7f34;
        case 0x3a7f38u: goto label_3a7f38;
        case 0x3a7f3cu: goto label_3a7f3c;
        case 0x3a7f40u: goto label_3a7f40;
        case 0x3a7f44u: goto label_3a7f44;
        case 0x3a7f48u: goto label_3a7f48;
        case 0x3a7f4cu: goto label_3a7f4c;
        case 0x3a7f50u: goto label_3a7f50;
        case 0x3a7f54u: goto label_3a7f54;
        case 0x3a7f58u: goto label_3a7f58;
        case 0x3a7f5cu: goto label_3a7f5c;
        case 0x3a7f60u: goto label_3a7f60;
        case 0x3a7f64u: goto label_3a7f64;
        case 0x3a7f68u: goto label_3a7f68;
        case 0x3a7f6cu: goto label_3a7f6c;
        case 0x3a7f70u: goto label_3a7f70;
        case 0x3a7f74u: goto label_3a7f74;
        case 0x3a7f78u: goto label_3a7f78;
        case 0x3a7f7cu: goto label_3a7f7c;
        case 0x3a7f80u: goto label_3a7f80;
        case 0x3a7f84u: goto label_3a7f84;
        case 0x3a7f88u: goto label_3a7f88;
        case 0x3a7f8cu: goto label_3a7f8c;
        case 0x3a7f90u: goto label_3a7f90;
        case 0x3a7f94u: goto label_3a7f94;
        case 0x3a7f98u: goto label_3a7f98;
        case 0x3a7f9cu: goto label_3a7f9c;
        case 0x3a7fa0u: goto label_3a7fa0;
        case 0x3a7fa4u: goto label_3a7fa4;
        case 0x3a7fa8u: goto label_3a7fa8;
        case 0x3a7facu: goto label_3a7fac;
        case 0x3a7fb0u: goto label_3a7fb0;
        case 0x3a7fb4u: goto label_3a7fb4;
        case 0x3a7fb8u: goto label_3a7fb8;
        case 0x3a7fbcu: goto label_3a7fbc;
        case 0x3a7fc0u: goto label_3a7fc0;
        case 0x3a7fc4u: goto label_3a7fc4;
        case 0x3a7fc8u: goto label_3a7fc8;
        case 0x3a7fccu: goto label_3a7fcc;
        case 0x3a7fd0u: goto label_3a7fd0;
        case 0x3a7fd4u: goto label_3a7fd4;
        case 0x3a7fd8u: goto label_3a7fd8;
        case 0x3a7fdcu: goto label_3a7fdc;
        case 0x3a7fe0u: goto label_3a7fe0;
        case 0x3a7fe4u: goto label_3a7fe4;
        case 0x3a7fe8u: goto label_3a7fe8;
        case 0x3a7fecu: goto label_3a7fec;
        case 0x3a7ff0u: goto label_3a7ff0;
        case 0x3a7ff4u: goto label_3a7ff4;
        case 0x3a7ff8u: goto label_3a7ff8;
        case 0x3a7ffcu: goto label_3a7ffc;
        case 0x3a8000u: goto label_3a8000;
        case 0x3a8004u: goto label_3a8004;
        case 0x3a8008u: goto label_3a8008;
        case 0x3a800cu: goto label_3a800c;
        case 0x3a8010u: goto label_3a8010;
        case 0x3a8014u: goto label_3a8014;
        case 0x3a8018u: goto label_3a8018;
        case 0x3a801cu: goto label_3a801c;
        case 0x3a8020u: goto label_3a8020;
        case 0x3a8024u: goto label_3a8024;
        case 0x3a8028u: goto label_3a8028;
        case 0x3a802cu: goto label_3a802c;
        case 0x3a8030u: goto label_3a8030;
        case 0x3a8034u: goto label_3a8034;
        case 0x3a8038u: goto label_3a8038;
        case 0x3a803cu: goto label_3a803c;
        case 0x3a8040u: goto label_3a8040;
        case 0x3a8044u: goto label_3a8044;
        case 0x3a8048u: goto label_3a8048;
        case 0x3a804cu: goto label_3a804c;
        case 0x3a8050u: goto label_3a8050;
        case 0x3a8054u: goto label_3a8054;
        case 0x3a8058u: goto label_3a8058;
        case 0x3a805cu: goto label_3a805c;
        case 0x3a8060u: goto label_3a8060;
        case 0x3a8064u: goto label_3a8064;
        case 0x3a8068u: goto label_3a8068;
        case 0x3a806cu: goto label_3a806c;
        case 0x3a8070u: goto label_3a8070;
        case 0x3a8074u: goto label_3a8074;
        case 0x3a8078u: goto label_3a8078;
        case 0x3a807cu: goto label_3a807c;
        case 0x3a8080u: goto label_3a8080;
        case 0x3a8084u: goto label_3a8084;
        case 0x3a8088u: goto label_3a8088;
        case 0x3a808cu: goto label_3a808c;
        case 0x3a8090u: goto label_3a8090;
        case 0x3a8094u: goto label_3a8094;
        case 0x3a8098u: goto label_3a8098;
        case 0x3a809cu: goto label_3a809c;
        case 0x3a80a0u: goto label_3a80a0;
        case 0x3a80a4u: goto label_3a80a4;
        case 0x3a80a8u: goto label_3a80a8;
        case 0x3a80acu: goto label_3a80ac;
        case 0x3a80b0u: goto label_3a80b0;
        case 0x3a80b4u: goto label_3a80b4;
        case 0x3a80b8u: goto label_3a80b8;
        case 0x3a80bcu: goto label_3a80bc;
        case 0x3a80c0u: goto label_3a80c0;
        case 0x3a80c4u: goto label_3a80c4;
        case 0x3a80c8u: goto label_3a80c8;
        case 0x3a80ccu: goto label_3a80cc;
        case 0x3a80d0u: goto label_3a80d0;
        case 0x3a80d4u: goto label_3a80d4;
        case 0x3a80d8u: goto label_3a80d8;
        case 0x3a80dcu: goto label_3a80dc;
        case 0x3a80e0u: goto label_3a80e0;
        case 0x3a80e4u: goto label_3a80e4;
        case 0x3a80e8u: goto label_3a80e8;
        case 0x3a80ecu: goto label_3a80ec;
        case 0x3a80f0u: goto label_3a80f0;
        case 0x3a80f4u: goto label_3a80f4;
        case 0x3a80f8u: goto label_3a80f8;
        case 0x3a80fcu: goto label_3a80fc;
        case 0x3a8100u: goto label_3a8100;
        case 0x3a8104u: goto label_3a8104;
        case 0x3a8108u: goto label_3a8108;
        case 0x3a810cu: goto label_3a810c;
        case 0x3a8110u: goto label_3a8110;
        case 0x3a8114u: goto label_3a8114;
        case 0x3a8118u: goto label_3a8118;
        case 0x3a811cu: goto label_3a811c;
        case 0x3a8120u: goto label_3a8120;
        case 0x3a8124u: goto label_3a8124;
        case 0x3a8128u: goto label_3a8128;
        case 0x3a812cu: goto label_3a812c;
        case 0x3a8130u: goto label_3a8130;
        case 0x3a8134u: goto label_3a8134;
        case 0x3a8138u: goto label_3a8138;
        case 0x3a813cu: goto label_3a813c;
        case 0x3a8140u: goto label_3a8140;
        case 0x3a8144u: goto label_3a8144;
        case 0x3a8148u: goto label_3a8148;
        case 0x3a814cu: goto label_3a814c;
        case 0x3a8150u: goto label_3a8150;
        case 0x3a8154u: goto label_3a8154;
        case 0x3a8158u: goto label_3a8158;
        case 0x3a815cu: goto label_3a815c;
        case 0x3a8160u: goto label_3a8160;
        case 0x3a8164u: goto label_3a8164;
        case 0x3a8168u: goto label_3a8168;
        case 0x3a816cu: goto label_3a816c;
        case 0x3a8170u: goto label_3a8170;
        case 0x3a8174u: goto label_3a8174;
        case 0x3a8178u: goto label_3a8178;
        case 0x3a817cu: goto label_3a817c;
        case 0x3a8180u: goto label_3a8180;
        case 0x3a8184u: goto label_3a8184;
        case 0x3a8188u: goto label_3a8188;
        case 0x3a818cu: goto label_3a818c;
        case 0x3a8190u: goto label_3a8190;
        case 0x3a8194u: goto label_3a8194;
        case 0x3a8198u: goto label_3a8198;
        case 0x3a819cu: goto label_3a819c;
        case 0x3a81a0u: goto label_3a81a0;
        case 0x3a81a4u: goto label_3a81a4;
        case 0x3a81a8u: goto label_3a81a8;
        case 0x3a81acu: goto label_3a81ac;
        case 0x3a81b0u: goto label_3a81b0;
        case 0x3a81b4u: goto label_3a81b4;
        case 0x3a81b8u: goto label_3a81b8;
        case 0x3a81bcu: goto label_3a81bc;
        case 0x3a81c0u: goto label_3a81c0;
        case 0x3a81c4u: goto label_3a81c4;
        case 0x3a81c8u: goto label_3a81c8;
        case 0x3a81ccu: goto label_3a81cc;
        case 0x3a81d0u: goto label_3a81d0;
        case 0x3a81d4u: goto label_3a81d4;
        case 0x3a81d8u: goto label_3a81d8;
        case 0x3a81dcu: goto label_3a81dc;
        case 0x3a81e0u: goto label_3a81e0;
        case 0x3a81e4u: goto label_3a81e4;
        case 0x3a81e8u: goto label_3a81e8;
        case 0x3a81ecu: goto label_3a81ec;
        case 0x3a81f0u: goto label_3a81f0;
        case 0x3a81f4u: goto label_3a81f4;
        case 0x3a81f8u: goto label_3a81f8;
        case 0x3a81fcu: goto label_3a81fc;
        case 0x3a8200u: goto label_3a8200;
        case 0x3a8204u: goto label_3a8204;
        case 0x3a8208u: goto label_3a8208;
        case 0x3a820cu: goto label_3a820c;
        case 0x3a8210u: goto label_3a8210;
        case 0x3a8214u: goto label_3a8214;
        case 0x3a8218u: goto label_3a8218;
        case 0x3a821cu: goto label_3a821c;
        case 0x3a8220u: goto label_3a8220;
        case 0x3a8224u: goto label_3a8224;
        case 0x3a8228u: goto label_3a8228;
        case 0x3a822cu: goto label_3a822c;
        case 0x3a8230u: goto label_3a8230;
        case 0x3a8234u: goto label_3a8234;
        case 0x3a8238u: goto label_3a8238;
        case 0x3a823cu: goto label_3a823c;
        case 0x3a8240u: goto label_3a8240;
        case 0x3a8244u: goto label_3a8244;
        case 0x3a8248u: goto label_3a8248;
        case 0x3a824cu: goto label_3a824c;
        case 0x3a8250u: goto label_3a8250;
        case 0x3a8254u: goto label_3a8254;
        case 0x3a8258u: goto label_3a8258;
        case 0x3a825cu: goto label_3a825c;
        case 0x3a8260u: goto label_3a8260;
        case 0x3a8264u: goto label_3a8264;
        case 0x3a8268u: goto label_3a8268;
        case 0x3a826cu: goto label_3a826c;
        case 0x3a8270u: goto label_3a8270;
        case 0x3a8274u: goto label_3a8274;
        case 0x3a8278u: goto label_3a8278;
        case 0x3a827cu: goto label_3a827c;
        case 0x3a8280u: goto label_3a8280;
        case 0x3a8284u: goto label_3a8284;
        case 0x3a8288u: goto label_3a8288;
        case 0x3a828cu: goto label_3a828c;
        case 0x3a8290u: goto label_3a8290;
        case 0x3a8294u: goto label_3a8294;
        case 0x3a8298u: goto label_3a8298;
        case 0x3a829cu: goto label_3a829c;
        case 0x3a82a0u: goto label_3a82a0;
        case 0x3a82a4u: goto label_3a82a4;
        case 0x3a82a8u: goto label_3a82a8;
        case 0x3a82acu: goto label_3a82ac;
        case 0x3a82b0u: goto label_3a82b0;
        case 0x3a82b4u: goto label_3a82b4;
        case 0x3a82b8u: goto label_3a82b8;
        case 0x3a82bcu: goto label_3a82bc;
        case 0x3a82c0u: goto label_3a82c0;
        case 0x3a82c4u: goto label_3a82c4;
        case 0x3a82c8u: goto label_3a82c8;
        case 0x3a82ccu: goto label_3a82cc;
        case 0x3a82d0u: goto label_3a82d0;
        case 0x3a82d4u: goto label_3a82d4;
        case 0x3a82d8u: goto label_3a82d8;
        case 0x3a82dcu: goto label_3a82dc;
        case 0x3a82e0u: goto label_3a82e0;
        case 0x3a82e4u: goto label_3a82e4;
        case 0x3a82e8u: goto label_3a82e8;
        case 0x3a82ecu: goto label_3a82ec;
        case 0x3a82f0u: goto label_3a82f0;
        case 0x3a82f4u: goto label_3a82f4;
        case 0x3a82f8u: goto label_3a82f8;
        case 0x3a82fcu: goto label_3a82fc;
        case 0x3a8300u: goto label_3a8300;
        case 0x3a8304u: goto label_3a8304;
        case 0x3a8308u: goto label_3a8308;
        case 0x3a830cu: goto label_3a830c;
        case 0x3a8310u: goto label_3a8310;
        case 0x3a8314u: goto label_3a8314;
        case 0x3a8318u: goto label_3a8318;
        case 0x3a831cu: goto label_3a831c;
        case 0x3a8320u: goto label_3a8320;
        case 0x3a8324u: goto label_3a8324;
        case 0x3a8328u: goto label_3a8328;
        case 0x3a832cu: goto label_3a832c;
        case 0x3a8330u: goto label_3a8330;
        case 0x3a8334u: goto label_3a8334;
        case 0x3a8338u: goto label_3a8338;
        case 0x3a833cu: goto label_3a833c;
        case 0x3a8340u: goto label_3a8340;
        case 0x3a8344u: goto label_3a8344;
        case 0x3a8348u: goto label_3a8348;
        case 0x3a834cu: goto label_3a834c;
        case 0x3a8350u: goto label_3a8350;
        case 0x3a8354u: goto label_3a8354;
        case 0x3a8358u: goto label_3a8358;
        case 0x3a835cu: goto label_3a835c;
        case 0x3a8360u: goto label_3a8360;
        case 0x3a8364u: goto label_3a8364;
        case 0x3a8368u: goto label_3a8368;
        case 0x3a836cu: goto label_3a836c;
        case 0x3a8370u: goto label_3a8370;
        case 0x3a8374u: goto label_3a8374;
        case 0x3a8378u: goto label_3a8378;
        case 0x3a837cu: goto label_3a837c;
        case 0x3a8380u: goto label_3a8380;
        case 0x3a8384u: goto label_3a8384;
        case 0x3a8388u: goto label_3a8388;
        case 0x3a838cu: goto label_3a838c;
        case 0x3a8390u: goto label_3a8390;
        case 0x3a8394u: goto label_3a8394;
        case 0x3a8398u: goto label_3a8398;
        case 0x3a839cu: goto label_3a839c;
        case 0x3a83a0u: goto label_3a83a0;
        case 0x3a83a4u: goto label_3a83a4;
        case 0x3a83a8u: goto label_3a83a8;
        case 0x3a83acu: goto label_3a83ac;
        case 0x3a83b0u: goto label_3a83b0;
        case 0x3a83b4u: goto label_3a83b4;
        case 0x3a83b8u: goto label_3a83b8;
        case 0x3a83bcu: goto label_3a83bc;
        case 0x3a83c0u: goto label_3a83c0;
        case 0x3a83c4u: goto label_3a83c4;
        case 0x3a83c8u: goto label_3a83c8;
        case 0x3a83ccu: goto label_3a83cc;
        case 0x3a83d0u: goto label_3a83d0;
        case 0x3a83d4u: goto label_3a83d4;
        case 0x3a83d8u: goto label_3a83d8;
        case 0x3a83dcu: goto label_3a83dc;
        case 0x3a83e0u: goto label_3a83e0;
        case 0x3a83e4u: goto label_3a83e4;
        case 0x3a83e8u: goto label_3a83e8;
        case 0x3a83ecu: goto label_3a83ec;
        case 0x3a83f0u: goto label_3a83f0;
        case 0x3a83f4u: goto label_3a83f4;
        case 0x3a83f8u: goto label_3a83f8;
        case 0x3a83fcu: goto label_3a83fc;
        case 0x3a8400u: goto label_3a8400;
        case 0x3a8404u: goto label_3a8404;
        case 0x3a8408u: goto label_3a8408;
        case 0x3a840cu: goto label_3a840c;
        case 0x3a8410u: goto label_3a8410;
        case 0x3a8414u: goto label_3a8414;
        case 0x3a8418u: goto label_3a8418;
        case 0x3a841cu: goto label_3a841c;
        case 0x3a8420u: goto label_3a8420;
        case 0x3a8424u: goto label_3a8424;
        case 0x3a8428u: goto label_3a8428;
        case 0x3a842cu: goto label_3a842c;
        case 0x3a8430u: goto label_3a8430;
        case 0x3a8434u: goto label_3a8434;
        case 0x3a8438u: goto label_3a8438;
        case 0x3a843cu: goto label_3a843c;
        case 0x3a8440u: goto label_3a8440;
        case 0x3a8444u: goto label_3a8444;
        case 0x3a8448u: goto label_3a8448;
        case 0x3a844cu: goto label_3a844c;
        case 0x3a8450u: goto label_3a8450;
        case 0x3a8454u: goto label_3a8454;
        case 0x3a8458u: goto label_3a8458;
        case 0x3a845cu: goto label_3a845c;
        case 0x3a8460u: goto label_3a8460;
        case 0x3a8464u: goto label_3a8464;
        case 0x3a8468u: goto label_3a8468;
        case 0x3a846cu: goto label_3a846c;
        case 0x3a8470u: goto label_3a8470;
        case 0x3a8474u: goto label_3a8474;
        case 0x3a8478u: goto label_3a8478;
        case 0x3a847cu: goto label_3a847c;
        case 0x3a8480u: goto label_3a8480;
        case 0x3a8484u: goto label_3a8484;
        case 0x3a8488u: goto label_3a8488;
        case 0x3a848cu: goto label_3a848c;
        case 0x3a8490u: goto label_3a8490;
        case 0x3a8494u: goto label_3a8494;
        case 0x3a8498u: goto label_3a8498;
        case 0x3a849cu: goto label_3a849c;
        case 0x3a84a0u: goto label_3a84a0;
        case 0x3a84a4u: goto label_3a84a4;
        case 0x3a84a8u: goto label_3a84a8;
        case 0x3a84acu: goto label_3a84ac;
        case 0x3a84b0u: goto label_3a84b0;
        case 0x3a84b4u: goto label_3a84b4;
        case 0x3a84b8u: goto label_3a84b8;
        case 0x3a84bcu: goto label_3a84bc;
        case 0x3a84c0u: goto label_3a84c0;
        case 0x3a84c4u: goto label_3a84c4;
        case 0x3a84c8u: goto label_3a84c8;
        case 0x3a84ccu: goto label_3a84cc;
        case 0x3a84d0u: goto label_3a84d0;
        case 0x3a84d4u: goto label_3a84d4;
        case 0x3a84d8u: goto label_3a84d8;
        case 0x3a84dcu: goto label_3a84dc;
        case 0x3a84e0u: goto label_3a84e0;
        case 0x3a84e4u: goto label_3a84e4;
        case 0x3a84e8u: goto label_3a84e8;
        case 0x3a84ecu: goto label_3a84ec;
        case 0x3a84f0u: goto label_3a84f0;
        case 0x3a84f4u: goto label_3a84f4;
        case 0x3a84f8u: goto label_3a84f8;
        case 0x3a84fcu: goto label_3a84fc;
        case 0x3a8500u: goto label_3a8500;
        case 0x3a8504u: goto label_3a8504;
        case 0x3a8508u: goto label_3a8508;
        case 0x3a850cu: goto label_3a850c;
        case 0x3a8510u: goto label_3a8510;
        case 0x3a8514u: goto label_3a8514;
        case 0x3a8518u: goto label_3a8518;
        case 0x3a851cu: goto label_3a851c;
        case 0x3a8520u: goto label_3a8520;
        case 0x3a8524u: goto label_3a8524;
        case 0x3a8528u: goto label_3a8528;
        case 0x3a852cu: goto label_3a852c;
        case 0x3a8530u: goto label_3a8530;
        case 0x3a8534u: goto label_3a8534;
        case 0x3a8538u: goto label_3a8538;
        case 0x3a853cu: goto label_3a853c;
        case 0x3a8540u: goto label_3a8540;
        case 0x3a8544u: goto label_3a8544;
        case 0x3a8548u: goto label_3a8548;
        case 0x3a854cu: goto label_3a854c;
        case 0x3a8550u: goto label_3a8550;
        case 0x3a8554u: goto label_3a8554;
        case 0x3a8558u: goto label_3a8558;
        case 0x3a855cu: goto label_3a855c;
        case 0x3a8560u: goto label_3a8560;
        case 0x3a8564u: goto label_3a8564;
        case 0x3a8568u: goto label_3a8568;
        case 0x3a856cu: goto label_3a856c;
        case 0x3a8570u: goto label_3a8570;
        case 0x3a8574u: goto label_3a8574;
        case 0x3a8578u: goto label_3a8578;
        case 0x3a857cu: goto label_3a857c;
        case 0x3a8580u: goto label_3a8580;
        case 0x3a8584u: goto label_3a8584;
        case 0x3a8588u: goto label_3a8588;
        case 0x3a858cu: goto label_3a858c;
        case 0x3a8590u: goto label_3a8590;
        case 0x3a8594u: goto label_3a8594;
        case 0x3a8598u: goto label_3a8598;
        case 0x3a859cu: goto label_3a859c;
        case 0x3a85a0u: goto label_3a85a0;
        case 0x3a85a4u: goto label_3a85a4;
        case 0x3a85a8u: goto label_3a85a8;
        case 0x3a85acu: goto label_3a85ac;
        case 0x3a85b0u: goto label_3a85b0;
        case 0x3a85b4u: goto label_3a85b4;
        case 0x3a85b8u: goto label_3a85b8;
        case 0x3a85bcu: goto label_3a85bc;
        case 0x3a85c0u: goto label_3a85c0;
        case 0x3a85c4u: goto label_3a85c4;
        case 0x3a85c8u: goto label_3a85c8;
        case 0x3a85ccu: goto label_3a85cc;
        case 0x3a85d0u: goto label_3a85d0;
        case 0x3a85d4u: goto label_3a85d4;
        case 0x3a85d8u: goto label_3a85d8;
        case 0x3a85dcu: goto label_3a85dc;
        case 0x3a85e0u: goto label_3a85e0;
        case 0x3a85e4u: goto label_3a85e4;
        case 0x3a85e8u: goto label_3a85e8;
        case 0x3a85ecu: goto label_3a85ec;
        case 0x3a85f0u: goto label_3a85f0;
        case 0x3a85f4u: goto label_3a85f4;
        case 0x3a85f8u: goto label_3a85f8;
        case 0x3a85fcu: goto label_3a85fc;
        case 0x3a8600u: goto label_3a8600;
        case 0x3a8604u: goto label_3a8604;
        case 0x3a8608u: goto label_3a8608;
        case 0x3a860cu: goto label_3a860c;
        case 0x3a8610u: goto label_3a8610;
        case 0x3a8614u: goto label_3a8614;
        case 0x3a8618u: goto label_3a8618;
        case 0x3a861cu: goto label_3a861c;
        case 0x3a8620u: goto label_3a8620;
        case 0x3a8624u: goto label_3a8624;
        case 0x3a8628u: goto label_3a8628;
        case 0x3a862cu: goto label_3a862c;
        case 0x3a8630u: goto label_3a8630;
        case 0x3a8634u: goto label_3a8634;
        case 0x3a8638u: goto label_3a8638;
        case 0x3a863cu: goto label_3a863c;
        case 0x3a8640u: goto label_3a8640;
        case 0x3a8644u: goto label_3a8644;
        case 0x3a8648u: goto label_3a8648;
        case 0x3a864cu: goto label_3a864c;
        case 0x3a8650u: goto label_3a8650;
        case 0x3a8654u: goto label_3a8654;
        case 0x3a8658u: goto label_3a8658;
        case 0x3a865cu: goto label_3a865c;
        case 0x3a8660u: goto label_3a8660;
        case 0x3a8664u: goto label_3a8664;
        case 0x3a8668u: goto label_3a8668;
        case 0x3a866cu: goto label_3a866c;
        case 0x3a8670u: goto label_3a8670;
        case 0x3a8674u: goto label_3a8674;
        case 0x3a8678u: goto label_3a8678;
        case 0x3a867cu: goto label_3a867c;
        case 0x3a8680u: goto label_3a8680;
        case 0x3a8684u: goto label_3a8684;
        case 0x3a8688u: goto label_3a8688;
        case 0x3a868cu: goto label_3a868c;
        case 0x3a8690u: goto label_3a8690;
        case 0x3a8694u: goto label_3a8694;
        case 0x3a8698u: goto label_3a8698;
        case 0x3a869cu: goto label_3a869c;
        case 0x3a86a0u: goto label_3a86a0;
        case 0x3a86a4u: goto label_3a86a4;
        case 0x3a86a8u: goto label_3a86a8;
        case 0x3a86acu: goto label_3a86ac;
        case 0x3a86b0u: goto label_3a86b0;
        case 0x3a86b4u: goto label_3a86b4;
        case 0x3a86b8u: goto label_3a86b8;
        case 0x3a86bcu: goto label_3a86bc;
        case 0x3a86c0u: goto label_3a86c0;
        case 0x3a86c4u: goto label_3a86c4;
        case 0x3a86c8u: goto label_3a86c8;
        case 0x3a86ccu: goto label_3a86cc;
        case 0x3a86d0u: goto label_3a86d0;
        case 0x3a86d4u: goto label_3a86d4;
        case 0x3a86d8u: goto label_3a86d8;
        case 0x3a86dcu: goto label_3a86dc;
        case 0x3a86e0u: goto label_3a86e0;
        case 0x3a86e4u: goto label_3a86e4;
        case 0x3a86e8u: goto label_3a86e8;
        case 0x3a86ecu: goto label_3a86ec;
        case 0x3a86f0u: goto label_3a86f0;
        case 0x3a86f4u: goto label_3a86f4;
        case 0x3a86f8u: goto label_3a86f8;
        case 0x3a86fcu: goto label_3a86fc;
        case 0x3a8700u: goto label_3a8700;
        case 0x3a8704u: goto label_3a8704;
        case 0x3a8708u: goto label_3a8708;
        case 0x3a870cu: goto label_3a870c;
        case 0x3a8710u: goto label_3a8710;
        case 0x3a8714u: goto label_3a8714;
        case 0x3a8718u: goto label_3a8718;
        case 0x3a871cu: goto label_3a871c;
        case 0x3a8720u: goto label_3a8720;
        case 0x3a8724u: goto label_3a8724;
        case 0x3a8728u: goto label_3a8728;
        case 0x3a872cu: goto label_3a872c;
        case 0x3a8730u: goto label_3a8730;
        case 0x3a8734u: goto label_3a8734;
        case 0x3a8738u: goto label_3a8738;
        case 0x3a873cu: goto label_3a873c;
        case 0x3a8740u: goto label_3a8740;
        case 0x3a8744u: goto label_3a8744;
        case 0x3a8748u: goto label_3a8748;
        case 0x3a874cu: goto label_3a874c;
        case 0x3a8750u: goto label_3a8750;
        case 0x3a8754u: goto label_3a8754;
        case 0x3a8758u: goto label_3a8758;
        case 0x3a875cu: goto label_3a875c;
        case 0x3a8760u: goto label_3a8760;
        case 0x3a8764u: goto label_3a8764;
        case 0x3a8768u: goto label_3a8768;
        case 0x3a876cu: goto label_3a876c;
        case 0x3a8770u: goto label_3a8770;
        case 0x3a8774u: goto label_3a8774;
        case 0x3a8778u: goto label_3a8778;
        case 0x3a877cu: goto label_3a877c;
        case 0x3a8780u: goto label_3a8780;
        case 0x3a8784u: goto label_3a8784;
        case 0x3a8788u: goto label_3a8788;
        case 0x3a878cu: goto label_3a878c;
        case 0x3a8790u: goto label_3a8790;
        case 0x3a8794u: goto label_3a8794;
        case 0x3a8798u: goto label_3a8798;
        case 0x3a879cu: goto label_3a879c;
        case 0x3a87a0u: goto label_3a87a0;
        case 0x3a87a4u: goto label_3a87a4;
        case 0x3a87a8u: goto label_3a87a8;
        case 0x3a87acu: goto label_3a87ac;
        case 0x3a87b0u: goto label_3a87b0;
        case 0x3a87b4u: goto label_3a87b4;
        case 0x3a87b8u: goto label_3a87b8;
        case 0x3a87bcu: goto label_3a87bc;
        case 0x3a87c0u: goto label_3a87c0;
        case 0x3a87c4u: goto label_3a87c4;
        case 0x3a87c8u: goto label_3a87c8;
        case 0x3a87ccu: goto label_3a87cc;
        case 0x3a87d0u: goto label_3a87d0;
        case 0x3a87d4u: goto label_3a87d4;
        case 0x3a87d8u: goto label_3a87d8;
        case 0x3a87dcu: goto label_3a87dc;
        case 0x3a87e0u: goto label_3a87e0;
        case 0x3a87e4u: goto label_3a87e4;
        case 0x3a87e8u: goto label_3a87e8;
        case 0x3a87ecu: goto label_3a87ec;
        case 0x3a87f0u: goto label_3a87f0;
        case 0x3a87f4u: goto label_3a87f4;
        case 0x3a87f8u: goto label_3a87f8;
        case 0x3a87fcu: goto label_3a87fc;
        case 0x3a8800u: goto label_3a8800;
        case 0x3a8804u: goto label_3a8804;
        case 0x3a8808u: goto label_3a8808;
        case 0x3a880cu: goto label_3a880c;
        case 0x3a8810u: goto label_3a8810;
        case 0x3a8814u: goto label_3a8814;
        case 0x3a8818u: goto label_3a8818;
        case 0x3a881cu: goto label_3a881c;
        case 0x3a8820u: goto label_3a8820;
        case 0x3a8824u: goto label_3a8824;
        case 0x3a8828u: goto label_3a8828;
        case 0x3a882cu: goto label_3a882c;
        case 0x3a8830u: goto label_3a8830;
        case 0x3a8834u: goto label_3a8834;
        case 0x3a8838u: goto label_3a8838;
        case 0x3a883cu: goto label_3a883c;
        case 0x3a8840u: goto label_3a8840;
        case 0x3a8844u: goto label_3a8844;
        case 0x3a8848u: goto label_3a8848;
        case 0x3a884cu: goto label_3a884c;
        case 0x3a8850u: goto label_3a8850;
        case 0x3a8854u: goto label_3a8854;
        case 0x3a8858u: goto label_3a8858;
        case 0x3a885cu: goto label_3a885c;
        case 0x3a8860u: goto label_3a8860;
        case 0x3a8864u: goto label_3a8864;
        case 0x3a8868u: goto label_3a8868;
        case 0x3a886cu: goto label_3a886c;
        case 0x3a8870u: goto label_3a8870;
        case 0x3a8874u: goto label_3a8874;
        case 0x3a8878u: goto label_3a8878;
        case 0x3a887cu: goto label_3a887c;
        case 0x3a8880u: goto label_3a8880;
        case 0x3a8884u: goto label_3a8884;
        case 0x3a8888u: goto label_3a8888;
        case 0x3a888cu: goto label_3a888c;
        case 0x3a8890u: goto label_3a8890;
        case 0x3a8894u: goto label_3a8894;
        case 0x3a8898u: goto label_3a8898;
        case 0x3a889cu: goto label_3a889c;
        case 0x3a88a0u: goto label_3a88a0;
        case 0x3a88a4u: goto label_3a88a4;
        case 0x3a88a8u: goto label_3a88a8;
        case 0x3a88acu: goto label_3a88ac;
        case 0x3a88b0u: goto label_3a88b0;
        case 0x3a88b4u: goto label_3a88b4;
        case 0x3a88b8u: goto label_3a88b8;
        case 0x3a88bcu: goto label_3a88bc;
        case 0x3a88c0u: goto label_3a88c0;
        case 0x3a88c4u: goto label_3a88c4;
        case 0x3a88c8u: goto label_3a88c8;
        case 0x3a88ccu: goto label_3a88cc;
        case 0x3a88d0u: goto label_3a88d0;
        case 0x3a88d4u: goto label_3a88d4;
        case 0x3a88d8u: goto label_3a88d8;
        case 0x3a88dcu: goto label_3a88dc;
        case 0x3a88e0u: goto label_3a88e0;
        case 0x3a88e4u: goto label_3a88e4;
        case 0x3a88e8u: goto label_3a88e8;
        case 0x3a88ecu: goto label_3a88ec;
        case 0x3a88f0u: goto label_3a88f0;
        case 0x3a88f4u: goto label_3a88f4;
        case 0x3a88f8u: goto label_3a88f8;
        case 0x3a88fcu: goto label_3a88fc;
        case 0x3a8900u: goto label_3a8900;
        case 0x3a8904u: goto label_3a8904;
        case 0x3a8908u: goto label_3a8908;
        case 0x3a890cu: goto label_3a890c;
        case 0x3a8910u: goto label_3a8910;
        case 0x3a8914u: goto label_3a8914;
        case 0x3a8918u: goto label_3a8918;
        case 0x3a891cu: goto label_3a891c;
        case 0x3a8920u: goto label_3a8920;
        case 0x3a8924u: goto label_3a8924;
        case 0x3a8928u: goto label_3a8928;
        case 0x3a892cu: goto label_3a892c;
        case 0x3a8930u: goto label_3a8930;
        case 0x3a8934u: goto label_3a8934;
        case 0x3a8938u: goto label_3a8938;
        case 0x3a893cu: goto label_3a893c;
        case 0x3a8940u: goto label_3a8940;
        case 0x3a8944u: goto label_3a8944;
        case 0x3a8948u: goto label_3a8948;
        case 0x3a894cu: goto label_3a894c;
        case 0x3a8950u: goto label_3a8950;
        case 0x3a8954u: goto label_3a8954;
        case 0x3a8958u: goto label_3a8958;
        case 0x3a895cu: goto label_3a895c;
        case 0x3a8960u: goto label_3a8960;
        case 0x3a8964u: goto label_3a8964;
        case 0x3a8968u: goto label_3a8968;
        case 0x3a896cu: goto label_3a896c;
        case 0x3a8970u: goto label_3a8970;
        case 0x3a8974u: goto label_3a8974;
        case 0x3a8978u: goto label_3a8978;
        case 0x3a897cu: goto label_3a897c;
        case 0x3a8980u: goto label_3a8980;
        case 0x3a8984u: goto label_3a8984;
        case 0x3a8988u: goto label_3a8988;
        case 0x3a898cu: goto label_3a898c;
        case 0x3a8990u: goto label_3a8990;
        case 0x3a8994u: goto label_3a8994;
        case 0x3a8998u: goto label_3a8998;
        case 0x3a899cu: goto label_3a899c;
        case 0x3a89a0u: goto label_3a89a0;
        case 0x3a89a4u: goto label_3a89a4;
        case 0x3a89a8u: goto label_3a89a8;
        case 0x3a89acu: goto label_3a89ac;
        case 0x3a89b0u: goto label_3a89b0;
        case 0x3a89b4u: goto label_3a89b4;
        case 0x3a89b8u: goto label_3a89b8;
        case 0x3a89bcu: goto label_3a89bc;
        case 0x3a89c0u: goto label_3a89c0;
        case 0x3a89c4u: goto label_3a89c4;
        case 0x3a89c8u: goto label_3a89c8;
        case 0x3a89ccu: goto label_3a89cc;
        case 0x3a89d0u: goto label_3a89d0;
        case 0x3a89d4u: goto label_3a89d4;
        case 0x3a89d8u: goto label_3a89d8;
        case 0x3a89dcu: goto label_3a89dc;
        case 0x3a89e0u: goto label_3a89e0;
        case 0x3a89e4u: goto label_3a89e4;
        case 0x3a89e8u: goto label_3a89e8;
        case 0x3a89ecu: goto label_3a89ec;
        case 0x3a89f0u: goto label_3a89f0;
        case 0x3a89f4u: goto label_3a89f4;
        case 0x3a89f8u: goto label_3a89f8;
        case 0x3a89fcu: goto label_3a89fc;
        case 0x3a8a00u: goto label_3a8a00;
        case 0x3a8a04u: goto label_3a8a04;
        case 0x3a8a08u: goto label_3a8a08;
        case 0x3a8a0cu: goto label_3a8a0c;
        case 0x3a8a10u: goto label_3a8a10;
        case 0x3a8a14u: goto label_3a8a14;
        case 0x3a8a18u: goto label_3a8a18;
        case 0x3a8a1cu: goto label_3a8a1c;
        case 0x3a8a20u: goto label_3a8a20;
        case 0x3a8a24u: goto label_3a8a24;
        case 0x3a8a28u: goto label_3a8a28;
        case 0x3a8a2cu: goto label_3a8a2c;
        case 0x3a8a30u: goto label_3a8a30;
        case 0x3a8a34u: goto label_3a8a34;
        case 0x3a8a38u: goto label_3a8a38;
        case 0x3a8a3cu: goto label_3a8a3c;
        case 0x3a8a40u: goto label_3a8a40;
        case 0x3a8a44u: goto label_3a8a44;
        case 0x3a8a48u: goto label_3a8a48;
        case 0x3a8a4cu: goto label_3a8a4c;
        case 0x3a8a50u: goto label_3a8a50;
        case 0x3a8a54u: goto label_3a8a54;
        case 0x3a8a58u: goto label_3a8a58;
        case 0x3a8a5cu: goto label_3a8a5c;
        case 0x3a8a60u: goto label_3a8a60;
        case 0x3a8a64u: goto label_3a8a64;
        case 0x3a8a68u: goto label_3a8a68;
        case 0x3a8a6cu: goto label_3a8a6c;
        case 0x3a8a70u: goto label_3a8a70;
        case 0x3a8a74u: goto label_3a8a74;
        case 0x3a8a78u: goto label_3a8a78;
        case 0x3a8a7cu: goto label_3a8a7c;
        case 0x3a8a80u: goto label_3a8a80;
        case 0x3a8a84u: goto label_3a8a84;
        case 0x3a8a88u: goto label_3a8a88;
        case 0x3a8a8cu: goto label_3a8a8c;
        default: break;
    }

    ctx->pc = 0x3a7d60u;

label_3a7d60:
    // 0x3a7d60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3a7d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3a7d64:
    // 0x3a7d64: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x3a7d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_3a7d68:
    // 0x3a7d68: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3a7d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3a7d6c:
    // 0x3a7d6c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3a7d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3a7d70:
    // 0x3a7d70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a7d70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a7d74:
    // 0x3a7d74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a7d74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a7d78:
    // 0x3a7d78: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3a7d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3a7d7c:
    // 0x3a7d7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a7d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a7d80:
    // 0x3a7d80: 0xc10480a  jal         func_412028
label_3a7d84:
    if (ctx->pc == 0x3A7D84u) {
        ctx->pc = 0x3A7D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7D80u;
        // 0x3a7d84: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7D88u;
        goto label_3a7d88;
    }
    ctx->pc = 0x3A7D80u;
    SET_GPR_U32(ctx, 31, 0x3A7D88u);
    ctx->pc = 0x3A7D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7D80u;
    // 0x3a7d84: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3A7D80u, 0x3A7D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7D88u;
label_3a7d88:
    // 0x3a7d88: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x3a7d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_3a7d8c:
    // 0x3a7d8c: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
label_3a7d90:
    if (ctx->pc == 0x3A7D90u) {
        ctx->pc = 0x3A7D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7D8Cu;
        // 0x3a7d90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7D94u;
        goto label_3a7d94;
    }
    ctx->pc = 0x3A7D8Cu;
    {
        const bool branch_taken_0x3a7d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A7D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7D8Cu;
        // 0x3a7d90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7d8c) {
            ctx->pc = 0x3A7DF8u;
            goto label_3a7df8;
        }
    }
    ctx->pc = 0x3A7D94u;
label_3a7d94:
    // 0x3a7d94: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3a7d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a7d98:
    // 0x3a7d98: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x3a7d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a7d9c:
    // 0x3a7d9c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a7d9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3a7da0:
    // 0x3a7da0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3a7da0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3a7da4:
    // 0x3a7da4: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x3a7da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a7da8:
    // 0x3a7da8: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a7da8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a7dac:
    // 0x3a7dac: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3a7dacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3a7db0:
    // 0x3a7db0: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x3a7db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a7db4:
    // 0x3a7db4: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a7db4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a7db8:
    // 0x3a7db8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3a7db8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3a7dbc:
    // 0x3a7dbc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a7dbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a7dc0:
    // 0x3a7dc0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3a7dc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3a7dc4:
    // 0x3a7dc4: 0xa2050060  sb          $a1, 0x60($s0)
    ctx->pc = 0x3a7dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 5));
label_3a7dc8:
    // 0x3a7dc8: 0xa2020061  sb          $v0, 0x61($s0)
    ctx->pc = 0x3a7dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 2));
label_3a7dcc:
    // 0x3a7dcc: 0xa2030062  sb          $v1, 0x62($s0)
    ctx->pc = 0x3a7dccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 98), (uint8_t)GPR_U32(ctx, 3));
label_3a7dd0:
    // 0x3a7dd0: 0xa2040063  sb          $a0, 0x63($s0)
    ctx->pc = 0x3a7dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 99), (uint8_t)GPR_U32(ctx, 4));
label_3a7dd4:
    // 0x3a7dd4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3a7dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3a7dd8:
    // 0x3a7dd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a7dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a7ddc:
    // 0x3a7ddc: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_3a7de0:
    if (ctx->pc == 0x3A7DE0u) {
        ctx->pc = 0x3A7DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7DDCu;
        // 0x3a7de0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7DE4u;
        goto label_3a7de4;
    }
    ctx->pc = 0x3A7DDCu;
    {
        const bool branch_taken_0x3a7ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A7DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7DDCu;
        // 0x3a7de0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ddc) {
            ctx->pc = 0x3A7DF8u;
            goto label_3a7df8;
        }
    }
    ctx->pc = 0x3A7DE4u;
label_3a7de4:
    // 0x3a7de4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a7de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a7de8:
    // 0x3a7de8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3a7de8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a7dec:
    // 0x3a7dec: 0xc0e9d3e  jal         func_3A74F8
label_3a7df0:
    if (ctx->pc == 0x3A7DF0u) {
        ctx->pc = 0x3A7DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7DECu;
        // 0x3a7df0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7DF4u;
        goto label_3a7df4;
    }
    ctx->pc = 0x3A7DECu;
    SET_GPR_U32(ctx, 31, 0x3A7DF4u);
    ctx->pc = 0x3A7DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7DECu;
    // 0x3a7df0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A74F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A74F8u, 0x3A7DECu, 0x3A7DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7DF4u;
label_3a7df4:
    // 0x3a7df4: 0x0  nop
    ctx->pc = 0x3a7df4u;
    // NOP
label_3a7df8:
    // 0x3a7df8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3a7df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3a7dfc:
    // 0x3a7dfc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3a7dfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a7e00:
    // 0x3a7e00: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3a7e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3a7e04:
    // 0x3a7e04: 0x3e00008  jr          $ra
label_3a7e08:
    if (ctx->pc == 0x3A7E08u) {
        ctx->pc = 0x3A7E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7E04u;
        // 0x3a7e08: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7E0Cu;
        goto label_3a7e0c;
    }
    ctx->pc = 0x3A7E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7E04u;
        // 0x3a7e08: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7E0Cu;
label_3a7e0c:
    // 0x3a7e0c: 0x0  nop
    ctx->pc = 0x3a7e0cu;
    // NOP
label_3a7e10:
    // 0x3a7e10: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x3a7e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_3a7e14:
    // 0x3a7e14: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x3a7e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
label_3a7e18:
    // 0x3a7e18: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x3a7e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
label_3a7e1c:
    // 0x3a7e1c: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x3a7e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
label_3a7e20:
    // 0x3a7e20: 0xe7b501a8  swc1        $f21, 0x1A8($sp)
    ctx->pc = 0x3a7e20u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_3a7e24:
    // 0x3a7e24: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x3a7e24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_3a7e28:
    // 0x3a7e28: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x3a7e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
label_3a7e2c:
    // 0x3a7e2c: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x3a7e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
label_3a7e30:
    // 0x3a7e30: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x3a7e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
label_3a7e34:
    // 0x3a7e34: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x3a7e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
label_3a7e38:
    // 0x3a7e38: 0x7fb60130  sq          $s6, 0x130($sp)
    ctx->pc = 0x3a7e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 22));
label_3a7e3c:
    // 0x3a7e3c: 0x7fb70120  sq          $s7, 0x120($sp)
    ctx->pc = 0x3a7e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 23));
label_3a7e40:
    // 0x3a7e40: 0x7fbe0110  sq          $fp, 0x110($sp)
    ctx->pc = 0x3a7e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 30));
label_3a7e44:
    // 0x3a7e44: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x3a7e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_3a7e48:
    // 0x3a7e48: 0xc0eb85a  jal         func_3AE168
label_3a7e4c:
    if (ctx->pc == 0x3A7E4Cu) {
        ctx->pc = 0x3A7E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7E48u;
        // 0x3a7e4c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7E50u;
        goto label_3a7e50;
    }
    ctx->pc = 0x3A7E48u;
    SET_GPR_U32(ctx, 31, 0x3A7E50u);
    ctx->pc = 0x3A7E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7E48u;
    // 0x3a7e4c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE168u, 0x3A7E48u, 0x3A7E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7E50u;
label_3a7e50:
    // 0x3a7e50: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x3a7e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
label_3a7e54:
    // 0x3a7e54: 0x8fb000f0  lw          $s0, 0xF0($sp)
    ctx->pc = 0x3a7e54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_3a7e58:
    // 0x3a7e58: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3a7e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3a7e5c:
    // 0x3a7e5c: 0x2442ce80  addiu       $v0, $v0, -0x3180
    ctx->pc = 0x3a7e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
label_3a7e60:
    // 0x3a7e60: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3a7e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3a7e64:
    // 0x3a7e64: 0xc6140010  lwc1        $f20, 0x10($s0)
    ctx->pc = 0x3a7e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a7e68:
    // 0x3a7e68: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_3a7e6c:
    if (ctx->pc == 0x3A7E6Cu) {
        ctx->pc = 0x3A7E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7E68u;
        // 0x3a7e6c: 0xc45506f8  lwc1        $f21, 0x6F8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7E70u;
        goto label_3a7e70;
    }
    ctx->pc = 0x3A7E68u;
    {
        const bool branch_taken_0x3a7e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7E68u;
        // 0x3a7e6c: 0xc45506f8  lwc1        $f21, 0x6F8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7e68) {
            ctx->pc = 0x3A7E88u;
            goto label_3a7e88;
        }
    }
    ctx->pc = 0x3A7E70u;
label_3a7e70:
    // 0x3a7e70: 0xc0ec7e8  jal         func_3B1FA0
label_3a7e74:
    if (ctx->pc == 0x3A7E74u) {
        ctx->pc = 0x3A7E78u;
        goto label_3a7e78;
    }
    ctx->pc = 0x3A7E70u;
    SET_GPR_U32(ctx, 31, 0x3A7E78u);
    ctx->pc = 0x3B1FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1FA0u, 0x3A7E70u, 0x3A7E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7E78u;
label_3a7e78:
    // 0x3a7e78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a7e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a7e7c:
    // 0x3a7e7c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x3a7e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_3a7e80:
    // 0x3a7e80: 0xc0ebf52  jal         func_3AFD48
label_3a7e84:
    if (ctx->pc == 0x3A7E84u) {
        ctx->pc = 0x3A7E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7E80u;
        // 0x3a7e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7E88u;
        goto label_3a7e88;
    }
    ctx->pc = 0x3A7E80u;
    SET_GPR_U32(ctx, 31, 0x3A7E88u);
    ctx->pc = 0x3A7E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7E80u;
    // 0x3a7e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFD48u, 0x3A7E80u, 0x3A7E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7E88u;
label_3a7e88:
    // 0x3a7e88: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3a7e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3a7e8c:
    // 0x3a7e8c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a7e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a7e90:
    // 0x3a7e90: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_3a7e94:
    if (ctx->pc == 0x3A7E94u) {
        ctx->pc = 0x3A7E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7E90u;
        // 0x3a7e94: 0x8e140000  lw          $s4, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7E98u;
        goto label_3a7e98;
    }
    ctx->pc = 0x3A7E90u;
    {
        const bool branch_taken_0x3a7e90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a7e90) {
            ctx->pc = 0x3A7E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7E90u;
            // 0x3a7e94: 0x8e140000  lw          $s4, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7EACu;
            goto label_3a7eac;
        }
    }
    ctx->pc = 0x3A7E98u;
label_3a7e98:
    // 0x3a7e98: 0xc1036d2  jal         func_40DB48
label_3a7e9c:
    if (ctx->pc == 0x3A7E9Cu) {
        ctx->pc = 0x3A7E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7E98u;
        // 0x3a7e9c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7EA0u;
        goto label_3a7ea0;
    }
    ctx->pc = 0x3A7E98u;
    SET_GPR_U32(ctx, 31, 0x3A7EA0u);
    ctx->pc = 0x3A7E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7E98u;
    // 0x3a7e9c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3A7E98u, 0x3A7EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7EA0u;
label_3a7ea0:
    // 0x3a7ea0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3a7ea0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a7ea4:
    // 0x3a7ea4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3a7ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3a7ea8:
    // 0x3a7ea8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a7ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a7eac:
    // 0x3a7eac: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_3a7eb0:
    if (ctx->pc == 0x3A7EB0u) {
        ctx->pc = 0x3A7EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7EACu;
        // 0x3a7eb0: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7EB4u;
        goto label_3a7eb4;
    }
    ctx->pc = 0x3A7EACu;
    {
        const bool branch_taken_0x3a7eac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A7EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7EACu;
        // 0x3a7eb0: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7eac) {
            ctx->pc = 0x3A7EC0u;
            goto label_3a7ec0;
        }
    }
    ctx->pc = 0x3A7EB4u;
label_3a7eb4:
    // 0x3a7eb4: 0xc10376a  jal         func_40DDA8
label_3a7eb8:
    if (ctx->pc == 0x3A7EB8u) {
        ctx->pc = 0x3A7EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7EB4u;
        // 0x3a7eb8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7EBCu;
        goto label_3a7ebc;
    }
    ctx->pc = 0x3A7EB4u;
    SET_GPR_U32(ctx, 31, 0x3A7EBCu);
    ctx->pc = 0x3A7EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7EB4u;
    // 0x3a7eb8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3A7EB4u, 0x3A7EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7EBCu;
label_3a7ebc:
    // 0x3a7ebc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x3a7ebcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a7ec0:
    // 0x3a7ec0: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x3a7ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a7ec4:
    // 0x3a7ec4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a7ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a7ec8:
    // 0x3a7ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a7ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a7ecc:
    // 0x3a7ecc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3a7eccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3a7ed0:
    // 0x3a7ed0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3a7ed0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3a7ed4:
    // 0x3a7ed4: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x3a7ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a7ed8:
    // 0x3a7ed8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3a7ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3a7edc:
    // 0x3a7edc: 0xc0ec7fe  jal         func_3B1FF8
label_3a7ee0:
    if (ctx->pc == 0x3A7EE0u) {
        ctx->pc = 0x3A7EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7EDCu;
        // 0x3a7ee0: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7EE4u;
        goto label_3a7ee4;
    }
    ctx->pc = 0x3A7EDCu;
    SET_GPR_U32(ctx, 31, 0x3A7EE4u);
    ctx->pc = 0x3A7EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7EDCu;
    // 0x3a7ee0: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1FF8u, 0x3A7EDCu, 0x3A7EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7EE4u;
label_3a7ee4:
    // 0x3a7ee4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x3a7ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a7ee8:
    // 0x3a7ee8: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x3a7ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a7eec:
    // 0x3a7eec: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x3a7eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a7ef0:
    // 0x3a7ef0: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x3a7ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a7ef4:
    // 0x3a7ef4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3a7ef4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_3a7ef8:
    // 0x3a7ef8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a7ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3a7efc:
    // 0x3a7efc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a7efcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a7f00:
    // 0x3a7f00: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x3a7f00u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_3a7f04:
    // 0x3a7f04: 0x8e650068  lw          $a1, 0x68($s3)
    ctx->pc = 0x3a7f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
label_3a7f08:
    // 0x3a7f08: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x3a7f08u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_3a7f0c:
    // 0x3a7f0c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3a7f0cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_3a7f10:
    // 0x3a7f10: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3a7f10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3a7f14:
    // 0x3a7f14: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
label_3a7f18:
    if (ctx->pc == 0x3A7F18u) {
        ctx->pc = 0x3A7F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F14u;
        // 0x3a7f18: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7F1Cu;
        goto label_3a7f1c;
    }
    ctx->pc = 0x3A7F14u;
    {
        const bool branch_taken_0x3a7f14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F14u;
        // 0x3a7f18: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7f14) {
            ctx->pc = 0x3A7F7Cu;
            goto label_3a7f7c;
        }
    }
    ctx->pc = 0x3A7F1Cu;
label_3a7f1c:
    // 0x3a7f1c: 0x8cb10050  lw          $s1, 0x50($a1)
    ctx->pc = 0x3a7f1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_3a7f20:
    // 0x3a7f20: 0x3c120062  lui         $s2, 0x62
    ctx->pc = 0x3a7f20u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
label_3a7f24:
    // 0x3a7f24: 0x2652e880  addiu       $s2, $s2, -0x1780
    ctx->pc = 0x3a7f24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961280));
label_3a7f28:
    // 0x3a7f28: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3a7f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3a7f2c:
    // 0x3a7f2c: 0x3223f000  andi        $v1, $s1, 0xF000
    ctx->pc = 0x3a7f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)61440);
label_3a7f30:
    // 0x3a7f30: 0x32300f00  andi        $s0, $s1, 0xF00
    ctx->pc = 0x3a7f30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3840);
label_3a7f34:
    // 0x3a7f34: 0x108202  srl         $s0, $s0, 8
    ctx->pc = 0x3a7f34u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
label_3a7f38:
    // 0x3a7f38: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x3a7f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_3a7f3c:
    // 0x3a7f3c: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x3a7f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
label_3a7f40:
    // 0x3a7f40: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x3a7f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3a7f44:
    // 0x3a7f44: 0x3800b  movn        $s0, $zero, $v1
    ctx->pc = 0x3a7f44u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_3a7f48:
    // 0x3a7f48: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x3a7f48u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_3a7f4c:
    // 0x3a7f4c: 0x40f809  jalr        $v0
label_3a7f50:
    if (ctx->pc == 0x3A7F50u) {
        ctx->pc = 0x3A7F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F4Cu;
        // 0x3a7f50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7F54u;
        goto label_3a7f54;
    }
    ctx->pc = 0x3A7F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A7F54u);
        ctx->pc = 0x3A7F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F4Cu;
        // 0x3a7f50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7F4Cu, 0x3A7F54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A7F54u;
label_3a7f54:
    // 0x3a7f54: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x3a7f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3a7f58:
    // 0x3a7f58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a7f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a7f5c:
    // 0x3a7f5c: 0x40f809  jalr        $v0
label_3a7f60:
    if (ctx->pc == 0x3A7F60u) {
        ctx->pc = 0x3A7F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F5Cu;
        // 0x3a7f60: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7F64u;
        goto label_3a7f64;
    }
    ctx->pc = 0x3A7F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A7F64u);
        ctx->pc = 0x3A7F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F5Cu;
        // 0x3a7f60: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7F5Cu, 0x3A7F64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A7F64u;
label_3a7f64:
    // 0x3a7f64: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x3a7f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3a7f68:
    // 0x3a7f68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a7f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a7f6c:
    // 0x3a7f6c: 0x40f809  jalr        $v0
label_3a7f70:
    if (ctx->pc == 0x3A7F70u) {
        ctx->pc = 0x3A7F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F6Cu;
        // 0x3a7f70: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7F74u;
        goto label_3a7f74;
    }
    ctx->pc = 0x3A7F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A7F74u);
        ctx->pc = 0x3A7F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F6Cu;
        // 0x3a7f70: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7F6Cu, 0x3A7F74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A7F74u;
label_3a7f74:
    // 0x3a7f74: 0x10000007  b           . + 4 + (0x7 << 2)
label_3a7f78:
    if (ctx->pc == 0x3A7F78u) {
        ctx->pc = 0x3A7F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F74u;
        // 0x3a7f78: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7F7Cu;
        goto label_3a7f7c;
    }
    ctx->pc = 0x3A7F74u;
    {
        const bool branch_taken_0x3a7f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F74u;
        // 0x3a7f78: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7f74) {
            ctx->pc = 0x3A7F94u;
            goto label_3a7f94;
        }
    }
    ctx->pc = 0x3A7F7Cu;
label_3a7f7c:
    // 0x3a7f7c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3a7f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3a7f80:
    // 0x3a7f80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a7f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a7f84:
    // 0x3a7f84: 0x8c62e8a0  lw          $v0, -0x1760($v1)
    ctx->pc = 0x3a7f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961312)));
label_3a7f88:
    // 0x3a7f88: 0x40f809  jalr        $v0
label_3a7f8c:
    if (ctx->pc == 0x3A7F8Cu) {
        ctx->pc = 0x3A7F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F88u;
        // 0x3a7f8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7F90u;
        goto label_3a7f90;
    }
    ctx->pc = 0x3A7F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A7F90u);
        ctx->pc = 0x3A7F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7F88u;
        // 0x3a7f8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7F88u, 0x3A7F90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A7F90u;
label_3a7f90:
    // 0x3a7f90: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x3a7f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3a7f94:
    // 0x3a7f94: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x3a7f94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a7f98:
    // 0x3a7f98: 0x3c22018  mult        $a0, $fp, $v0
    ctx->pc = 0x3a7f98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3a7f9c:
    // 0x3a7f9c: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3a7f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_3a7fa0:
    // 0x3a7fa0: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x3a7fa0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a7fa4:
    // 0x3a7fa4: 0x24140100  addiu       $s4, $zero, 0x100
    ctx->pc = 0x3a7fa4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3a7fa8:
    // 0x3a7fa8: 0x2fe102a  slt         $v0, $s7, $fp
    ctx->pc = 0x3a7fa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_3a7fac:
    // 0x3a7fac: 0x951821  addu        $v1, $a0, $s5
    ctx->pc = 0x3a7facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_3a7fb0:
    // 0x3a7fb0: 0x24a4ce80  addiu       $a0, $a1, -0x3180
    ctx->pc = 0x3a7fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954624));
label_3a7fb4:
    // 0x3a7fb4: 0x2476ffe8  addiu       $s6, $v1, -0x18
    ctx->pc = 0x3a7fb4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
label_3a7fb8:
    // 0x3a7fb8: 0x1040028f  beqz        $v0, . + 4 + (0x28F << 2)
label_3a7fbc:
    if (ctx->pc == 0x3A7FBCu) {
        ctx->pc = 0x3A7FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7FB8u;
        // 0x3a7fbc: 0x8c870504  lw          $a3, 0x504($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7FC0u;
        goto label_3a7fc0;
    }
    ctx->pc = 0x3A7FB8u;
    {
        const bool branch_taken_0x3a7fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7FB8u;
        // 0x3a7fbc: 0x8c870504  lw          $a3, 0x504($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7fb8) {
            ctx->pc = 0x3A89F8u;
            goto label_3a89f8;
        }
    }
    ctx->pc = 0x3A7FC0u;
label_3a7fc0:
    // 0x3a7fc0: 0x3c0238e3  lui         $v0, 0x38E3
    ctx->pc = 0x3a7fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14563 << 16));
label_3a7fc4:
    // 0x3a7fc4: 0x2472fff0  addiu       $s2, $v1, -0x10
    ctx->pc = 0x3a7fc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_3a7fc8:
    // 0x3a7fc8: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x3a7fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
label_3a7fcc:
    // 0x3a7fcc: 0x26b10008  addiu       $s1, $s5, 0x8
    ctx->pc = 0x3a7fccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_3a7fd0:
    // 0x3a7fd0: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x3a7fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
label_3a7fd4:
    // 0x3a7fd4: 0x2a8200fe  slti        $v0, $s4, 0xFE
    ctx->pc = 0x3a7fd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)254) ? 1 : 0);
label_3a7fd8:
    // 0x3a7fd8: 0x5440014b  bnel        $v0, $zero, . + 4 + (0x14B << 2)
label_3a7fdc:
    if (ctx->pc == 0x3A7FDCu) {
        ctx->pc = 0x3A7FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7FD8u;
        // 0x3a7fdc: 0xc6400004  lwc1        $f0, 0x4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7FE0u;
        goto label_3a7fe0;
    }
    ctx->pc = 0x3A7FD8u;
    {
        const bool branch_taken_0x3a7fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a7fd8) {
            ctx->pc = 0x3A7FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7FD8u;
            // 0x3a7fdc: 0xc6400004  lwc1        $f0, 0x4($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8508u;
            goto label_3a8508;
        }
    }
    ctx->pc = 0x3A7FE0u;
label_3a7fe0:
    // 0x3a7fe0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3a7fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3a7fe4:
    // 0x3a7fe4: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x3a7fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_3a7fe8:
    // 0x3a7fe8: 0x2470ce80  addiu       $s0, $v1, -0x3180
    ctx->pc = 0x3a7fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_3a7fec:
    // 0x3a7fec: 0x8e040504  lw          $a0, 0x504($s0)
    ctx->pc = 0x3a7fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1284)));
label_3a7ff0:
    // 0x3a7ff0: 0xe41023  subu        $v0, $a3, $a0
    ctx->pc = 0x3a7ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_3a7ff4:
    // 0x3a7ff4: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x3a7ff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3a7ff8:
    // 0x3a7ff8: 0x22883  sra         $a1, $v0, 2
    ctx->pc = 0x3a7ff8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
label_3a7ffc:
    // 0x3a7ffc: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_3a8000:
    if (ctx->pc == 0x3A8000u) {
        ctx->pc = 0x3A8000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7FFCu;
        // 0x3a8000: 0x8fa600f4  lw          $a2, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8004u;
        goto label_3a8004;
    }
    ctx->pc = 0x3A7FFCu;
    {
        const bool branch_taken_0x3a7ffc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7FFCu;
        // 0x3a8000: 0x8fa600f4  lw          $a2, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ffc) {
            ctx->pc = 0x3A8034u;
            goto label_3a8034;
        }
    }
    ctx->pc = 0x3A8004u;
label_3a8004:
    // 0x3a8004: 0x8e670068  lw          $a3, 0x68($s3)
    ctx->pc = 0x3a8004u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
label_3a8008:
    // 0x3a8008: 0x8e0206f4  lw          $v0, 0x6F4($s0)
    ctx->pc = 0x3a8008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1780)));
label_3a800c:
    // 0x3a800c: 0x7382b  sltu        $a3, $zero, $a3
    ctx->pc = 0x3a800cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_3a8010:
    // 0x3a8010: 0xc1111fe  jal         func_4447F8
label_3a8014:
    if (ctx->pc == 0x3A8014u) {
        ctx->pc = 0x3A8014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8010u;
        // 0x3a8014: 0x473825  or          $a3, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8018u;
        goto label_3a8018;
    }
    ctx->pc = 0x3A8010u;
    SET_GPR_U32(ctx, 31, 0x3A8018u);
    ctx->pc = 0x3A8014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8010u;
    // 0x3a8014: 0x473825  or          $a3, $v0, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4447F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4447F8u, 0x3A8010u, 0x3A8018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8018u;
label_3a8018:
    // 0x3a8018: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3a801c:
    if (ctx->pc == 0x3A801Cu) {
        ctx->pc = 0x3A801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8018u;
        // 0x3a801c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8020u;
        goto label_3a8020;
    }
    ctx->pc = 0x3A8018u;
    {
        const bool branch_taken_0x3a8018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8018u;
        // 0x3a801c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8018) {
            ctx->pc = 0x3A8034u;
            goto label_3a8034;
        }
    }
    ctx->pc = 0x3A8020u;
label_3a8020:
    // 0x3a8020: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3a8020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a8024:
    // 0x3a8024: 0xc111044  jal         func_444110
label_3a8028:
    if (ctx->pc == 0x3A8028u) {
        ctx->pc = 0x3A8028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8024u;
        // 0x3a8028: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A802Cu;
        goto label_3a802c;
    }
    ctx->pc = 0x3A8024u;
    SET_GPR_U32(ctx, 31, 0x3A802Cu);
    ctx->pc = 0x3A8028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8024u;
    // 0x3a8028: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444110u, 0x3A8024u, 0x3A802Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A802Cu;
label_3a802c:
    // 0x3a802c: 0xc111228  jal         func_4448A0
label_3a8030:
    if (ctx->pc == 0x3A8030u) {
        ctx->pc = 0x3A8034u;
        goto label_3a8034;
    }
    ctx->pc = 0x3A802Cu;
    SET_GPR_U32(ctx, 31, 0x3A8034u);
    ctx->pc = 0x4448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4448A0u, 0x3A802Cu, 0x3A8034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8034u;
label_3a8034:
    // 0x3a8034: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3a8034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3a8038:
    // 0x3a8038: 0x2442ce80  addiu       $v0, $v0, -0x3180
    ctx->pc = 0x3a8038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
label_3a803c:
    // 0x3a803c: 0x8c470504  lw          $a3, 0x504($v0)
    ctx->pc = 0x3a803cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1284)));
label_3a8040:
    // 0x3a8040: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x3a8040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8044:
    // 0x3a8044: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3a8044u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3a8048:
    // 0x3a8048: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3a8048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3a804c:
    // 0x3a804c: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x3a804cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a8050:
    // 0x3a8050: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x3a8050u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_3a8054:
    // 0x3a8054: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x3a8054u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3a8058:
    // 0x3a8058: 0xc641fffc  lwc1        $f1, -0x4($s2)
    ctx->pc = 0x3a8058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a805c:
    // 0x3a805c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3a805cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3a8060:
    // 0x3a8060: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x3a8060u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3a8064:
    // 0x3a8064: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x3a8064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8068:
    // 0x3a8068: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3a8068u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_3a806c:
    // 0x3a806c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3a806cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3a8070:
    // 0x3a8070: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x3a8070u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3a8074:
    // 0x3a8074: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x3a8074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_3a8078:
    // 0x3a8078: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x3a8078u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_3a807c:
    // 0x3a807c: 0x6ba300b7  ldl         $v1, 0xB7($sp)
    ctx->pc = 0x3a807cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3a8080:
    // 0x3a8080: 0x6fa300b0  ldr         $v1, 0xB0($sp)
    ctx->pc = 0x3a8080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3a8084:
    // 0x3a8084: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x3a8084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_3a8088:
    // 0x3a8088: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x3a8088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a808c:
    // 0x3a808c: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x3a808cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a8090:
    // 0x3a8090: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x3a8090u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
label_3a8094:
    // 0x3a8094: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x3a8094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8098:
    // 0x3a8098: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x3a8098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a809c:
    // 0x3a809c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x3a809cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a80a0:
    // 0x3a80a0: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x3a80a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a80a4:
    // 0x3a80a4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3a80a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_3a80a8:
    // 0x3a80a8: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x3a80a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a80ac:
    // 0x3a80ac: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3a80acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_3a80b0:
    // 0x3a80b0: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x3a80b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a80b4:
    // 0x3a80b4: 0x460402c2  mul.s       $f11, $f0, $f4
    ctx->pc = 0x3a80b4u;
    ctx->f[11] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_3a80b8:
    // 0x3a80b8: 0x8e620064  lw          $v0, 0x64($s3)
    ctx->pc = 0x3a80b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_3a80bc:
    // 0x3a80bc: 0x46020b02  mul.s       $f12, $f1, $f2
    ctx->pc = 0x3a80bcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3a80c0:
    // 0x3a80c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a80c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3a80c4:
    // 0x3a80c4: 0xe7ab0030  swc1        $f11, 0x30($sp)
    ctx->pc = 0x3a80c4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3a80c8:
    // 0x3a80c8: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_3a80cc:
    if (ctx->pc == 0x3A80CCu) {
        ctx->pc = 0x3A80CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A80C8u;
        // 0x3a80cc: 0xe7ac0034  swc1        $f12, 0x34($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A80D0u;
        goto label_3a80d0;
    }
    ctx->pc = 0x3A80C8u;
    {
        const bool branch_taken_0x3a80c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A80CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A80C8u;
        // 0x3a80cc: 0xe7ac0034  swc1        $f12, 0x34($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a80c8) {
            ctx->pc = 0x3A81E8u;
            goto label_3a81e8;
        }
    }
    ctx->pc = 0x3A80D0u;
label_3a80d0:
    // 0x3a80d0: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x3a80d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a80d4:
    // 0x3a80d4: 0xc661004c  lwc1        $f1, 0x4C($s3)
    ctx->pc = 0x3a80d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a80d8:
    // 0x3a80d8: 0xc6620050  lwc1        $f2, 0x50($s3)
    ctx->pc = 0x3a80d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a80dc:
    // 0x3a80dc: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x3a80dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
label_3a80e0:
    // 0x3a80e0: 0xc6630054  lwc1        $f3, 0x54($s3)
    ctx->pc = 0x3a80e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a80e4:
    // 0x3a80e4: 0x460b0842  mul.s       $f1, $f1, $f11
    ctx->pc = 0x3a80e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
label_3a80e8:
    // 0x3a80e8: 0x460b1082  mul.s       $f2, $f2, $f11
    ctx->pc = 0x3a80e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
label_3a80ec:
    // 0x3a80ec: 0x460b18c2  mul.s       $f3, $f3, $f11
    ctx->pc = 0x3a80ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
label_3a80f0:
    // 0x3a80f0: 0xc6690030  lwc1        $f9, 0x30($s3)
    ctx->pc = 0x3a80f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_3a80f4:
    // 0x3a80f4: 0xc66a0034  lwc1        $f10, 0x34($s3)
    ctx->pc = 0x3a80f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_3a80f8:
    // 0x3a80f8: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x3a80f8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_3a80fc:
    // 0x3a80fc: 0xc6670038  lwc1        $f7, 0x38($s3)
    ctx->pc = 0x3a80fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3a8100:
    // 0x3a8100: 0xc668003c  lwc1        $f8, 0x3C($s3)
    ctx->pc = 0x3a8100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_3a8104:
    // 0x3a8104: 0x46015280  add.s       $f10, $f10, $f1
    ctx->pc = 0x3a8104u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
label_3a8108:
    // 0x3a8108: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x3a8108u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
label_3a810c:
    // 0x3a810c: 0xe7a90070  swc1        $f9, 0x70($sp)
    ctx->pc = 0x3a810cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3a8110:
    // 0x3a8110: 0x46034200  add.s       $f8, $f8, $f3
    ctx->pc = 0x3a8110u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
label_3a8114:
    // 0x3a8114: 0xe7aa0074  swc1        $f10, 0x74($sp)
    ctx->pc = 0x3a8114u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3a8118:
    // 0x3a8118: 0xe7a70078  swc1        $f7, 0x78($sp)
    ctx->pc = 0x3a8118u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3a811c:
    // 0x3a811c: 0xe7a8007c  swc1        $f8, 0x7C($sp)
    ctx->pc = 0x3a811cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_3a8120:
    // 0x3a8120: 0xc6630018  lwc1        $f3, 0x18($s3)
    ctx->pc = 0x3a8120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a8124:
    // 0x3a8124: 0xc665001c  lwc1        $f5, 0x1C($s3)
    ctx->pc = 0x3a8124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3a8128:
    // 0x3a8128: 0x460b18c2  mul.s       $f3, $f3, $f11
    ctx->pc = 0x3a8128u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
label_3a812c:
    // 0x3a812c: 0xc6640020  lwc1        $f4, 0x20($s3)
    ctx->pc = 0x3a812cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a8130:
    // 0x3a8130: 0xc6660024  lwc1        $f6, 0x24($s3)
    ctx->pc = 0x3a8130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3a8134:
    // 0x3a8134: 0x460b2942  mul.s       $f5, $f5, $f11
    ctx->pc = 0x3a8134u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[11]);
label_3a8138:
    // 0x3a8138: 0x460b2102  mul.s       $f4, $f4, $f11
    ctx->pc = 0x3a8138u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[11]);
label_3a813c:
    // 0x3a813c: 0x460b3182  mul.s       $f6, $f6, $f11
    ctx->pc = 0x3a813cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
label_3a8140:
    // 0x3a8140: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x3a8140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8144:
    // 0x3a8144: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3a8144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3a8148:
    // 0x3a8148: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x3a8148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a814c:
    // 0x3a814c: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x3a814cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a8150:
    // 0x3a8150: 0xc663000c  lwc1        $f3, 0xC($s3)
    ctx->pc = 0x3a8150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a8154:
    // 0x3a8154: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x3a8154u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_3a8158:
    // 0x3a8158: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x3a8158u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_3a815c:
    // 0x3a815c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3a815cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3a8160:
    // 0x3a8160: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x3a8160u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
label_3a8164:
    // 0x3a8164: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x3a8164u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3a8168:
    // 0x3a8168: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x3a8168u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3a816c:
    // 0x3a816c: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x3a816cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_3a8170:
    // 0x3a8170: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x3a8170u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
label_3a8174:
    // 0x3a8174: 0x460a0841  sub.s       $f1, $f1, $f10
    ctx->pc = 0x3a8174u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[10]);
label_3a8178:
    // 0x3a8178: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x3a8178u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_3a817c:
    // 0x3a817c: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x3a817cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
label_3a8180:
    // 0x3a8180: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x3a8180u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_3a8184:
    // 0x3a8184: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x3a8184u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
label_3a8188:
    // 0x3a8188: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x3a8188u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_3a818c:
    // 0x3a818c: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x3a818cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
label_3a8190:
    // 0x3a8190: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x3a8190u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_3a8194:
    // 0x3a8194: 0x46015280  add.s       $f10, $f10, $f1
    ctx->pc = 0x3a8194u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
label_3a8198:
    // 0x3a8198: 0xe7a90090  swc1        $f9, 0x90($sp)
    ctx->pc = 0x3a8198u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3a819c:
    // 0x3a819c: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x3a819cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
label_3a81a0:
    // 0x3a81a0: 0x46034200  add.s       $f8, $f8, $f3
    ctx->pc = 0x3a81a0u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
label_3a81a4:
    // 0x3a81a4: 0xe7aa0094  swc1        $f10, 0x94($sp)
    ctx->pc = 0x3a81a4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3a81a8:
    // 0x3a81a8: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x3a81a8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3a81ac:
    // 0x3a81ac: 0xe7a8009c  swc1        $f8, 0x9C($sp)
    ctx->pc = 0x3a81acu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_3a81b0:
    // 0x3a81b0: 0x46004824  .word       0x46004824                   # cvt.w.s     $f0, $f9 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a81b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[9]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a81b4:
    // 0x3a81b4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3a81b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3a81b8:
    // 0x3a81b8: 0x46005024  .word       0x46005024                   # cvt.w.s     $f0, $f10 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a81b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[10]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a81bc:
    // 0x3a81bc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3a81bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3a81c0:
    // 0x3a81c0: 0x46003824  .word       0x46003824                   # cvt.w.s     $f0, $f7 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a81c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[7]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a81c4:
    // 0x3a81c4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3a81c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3a81c8:
    // 0x3a81c8: 0x46004024  .word       0x46004024                   # cvt.w.s     $f0, $f8 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a81c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[8]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a81cc:
    // 0x3a81cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3a81ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3a81d0:
    // 0x3a81d0: 0x24e2000c  addiu       $v0, $a3, 0xC
    ctx->pc = 0x3a81d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_3a81d4:
    // 0x3a81d4: 0xa0e4000c  sb          $a0, 0xC($a3)
    ctx->pc = 0x3a81d4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 12), (uint8_t)GPR_U32(ctx, 4));
label_3a81d8:
    // 0x3a81d8: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x3a81d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_3a81dc:
    // 0x3a81dc: 0xa0450001  sb          $a1, 0x1($v0)
    ctx->pc = 0x3a81dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 5));
label_3a81e0:
    // 0x3a81e0: 0x1000000b  b           . + 4 + (0xB << 2)
label_3a81e4:
    if (ctx->pc == 0x3A81E4u) {
        ctx->pc = 0x3A81E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A81E0u;
        // 0x3a81e4: 0xa0460002  sb          $a2, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A81E8u;
        goto label_3a81e8;
    }
    ctx->pc = 0x3A81E0u;
    {
        const bool branch_taken_0x3a81e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A81E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A81E0u;
        // 0x3a81e4: 0xa0460002  sb          $a2, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a81e0) {
            ctx->pc = 0x3A8210u;
            goto label_3a8210;
        }
    }
    ctx->pc = 0x3A81E8u;
label_3a81e8:
    // 0x3a81e8: 0x92630060  lbu         $v1, 0x60($s3)
    ctx->pc = 0x3a81e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 96)));
label_3a81ec:
    // 0x3a81ec: 0x24e4000c  addiu       $a0, $a3, 0xC
    ctx->pc = 0x3a81ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_3a81f0:
    // 0x3a81f0: 0xa0e3000c  sb          $v1, 0xC($a3)
    ctx->pc = 0x3a81f0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 12), (uint8_t)GPR_U32(ctx, 3));
label_3a81f4:
    // 0x3a81f4: 0x92620061  lbu         $v0, 0x61($s3)
    ctx->pc = 0x3a81f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 97)));
label_3a81f8:
    // 0x3a81f8: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x3a81f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_3a81fc:
    // 0x3a81fc: 0x92630062  lbu         $v1, 0x62($s3)
    ctx->pc = 0x3a81fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 98)));
label_3a8200:
    // 0x3a8200: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3a8200u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_3a8204:
    // 0x3a8204: 0x92620063  lbu         $v0, 0x63($s3)
    ctx->pc = 0x3a8204u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 99)));
label_3a8208:
    // 0x3a8208: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x3a8208u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_3a820c:
    // 0x3a820c: 0x0  nop
    ctx->pc = 0x3a820cu;
    // NOP
label_3a8210:
    // 0x3a8210: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x3a8210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a8214:
    // 0x3a8214: 0xc6600058  lwc1        $f0, 0x58($s3)
    ctx->pc = 0x3a8214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8218:
    // 0x3a8218: 0xc661005c  lwc1        $f1, 0x5C($s3)
    ctx->pc = 0x3a8218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a821c:
    // 0x3a821c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3a821cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3a8220:
    // 0x3a8220: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3a8220u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3a8224:
    // 0x3a8224: 0xc6650040  lwc1        $f5, 0x40($s3)
    ctx->pc = 0x3a8224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3a8228:
    // 0x3a8228: 0xc6640044  lwc1        $f4, 0x44($s3)
    ctx->pc = 0x3a8228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a822c:
    // 0x3a822c: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x3a822cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_3a8230:
    // 0x3a8230: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x3a8230u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_3a8234:
    // 0x3a8234: 0xe7a50080  swc1        $f5, 0x80($sp)
    ctx->pc = 0x3a8234u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3a8238:
    // 0x3a8238: 0xe7a40084  swc1        $f4, 0x84($sp)
    ctx->pc = 0x3a8238u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3a823c:
    // 0x3a823c: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x3a823cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8240:
    // 0x3a8240: 0xc663002c  lwc1        $f3, 0x2C($s3)
    ctx->pc = 0x3a8240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a8244:
    // 0x3a8244: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3a8244u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3a8248:
    // 0x3a8248: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x3a8248u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3a824c:
    // 0x3a824c: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x3a824cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a8250:
    // 0x3a8250: 0xc6620014  lwc1        $f2, 0x14($s3)
    ctx->pc = 0x3a8250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a8254:
    // 0x3a8254: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3a8254u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3a8258:
    // 0x3a8258: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x3a8258u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_3a825c:
    // 0x3a825c: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x3a825cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3a8260:
    // 0x3a8260: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x3a8260u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3a8264:
    // 0x3a8264: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x3a8264u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_3a8268:
    // 0x3a8268: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x3a8268u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_3a826c:
    // 0x3a826c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x3a826cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8270:
    // 0x3a8270: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3a8270u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3a8274:
    // 0x3a8274: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3a8274u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3a8278:
    // 0x3a8278: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x3a8278u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_3a827c:
    // 0x3a827c: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x3a827cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_3a8280:
    // 0x3a8280: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x3a8280u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3a8284:
    // 0x3a8284: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x3a8284u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_3a8288:
    // 0x3a8288: 0xe4e5001c  swc1        $f5, 0x1C($a3)
    ctx->pc = 0x3a8288u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
label_3a828c:
    // 0x3a828c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x3a828cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8290:
    // 0x3a8290: 0x2652ffe8  addiu       $s2, $s2, -0x18
    ctx->pc = 0x3a8290u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967272));
label_3a8294:
    // 0x3a8294: 0x26d6ffe8  addiu       $s6, $s6, -0x18
    ctx->pc = 0x3a8294u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967272));
label_3a8298:
    // 0x3a8298: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x3a8298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
label_3a829c:
    // 0x3a829c: 0x24e70024  addiu       $a3, $a3, 0x24
    ctx->pc = 0x3a829cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
label_3a82a0:
    // 0x3a82a0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3a82a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a82a4:
    // 0x3a82a4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3a82a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3a82a8:
    // 0x3a82a8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3a82a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3a82ac:
    // 0x3a82ac: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x3a82acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a82b0:
    // 0x3a82b0: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x3a82b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_3a82b4:
    // 0x3a82b4: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x3a82b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3a82b8:
    // 0x3a82b8: 0xc621fffc  lwc1        $f1, -0x4($s1)
    ctx->pc = 0x3a82b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a82bc:
    // 0x3a82bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3a82bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3a82c0:
    // 0x3a82c0: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x3a82c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3a82c4:
    // 0x3a82c4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3a82c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a82c8:
    // 0x3a82c8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3a82c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_3a82cc:
    // 0x3a82cc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3a82ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3a82d0:
    // 0x3a82d0: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x3a82d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_3a82d4:
    // 0x3a82d4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x3a82d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_3a82d8:
    // 0x3a82d8: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x3a82d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_3a82dc:
    // 0x3a82dc: 0x6ba200c7  ldl         $v0, 0xC7($sp)
    ctx->pc = 0x3a82dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3a82e0:
    // 0x3a82e0: 0x6fa200c0  ldr         $v0, 0xC0($sp)
    ctx->pc = 0x3a82e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3a82e4:
    // 0x3a82e4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3a82e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3a82e8:
    // 0x3a82e8: 0xb0e20007  sdl         $v0, 0x7($a3)
    ctx->pc = 0x3a82e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a82ec:
    // 0x3a82ec: 0xb4e20000  sdr         $v0, 0x0($a3)
    ctx->pc = 0x3a82ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a82f0:
    // 0x3a82f0: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x3a82f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_3a82f4:
    // 0x3a82f4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x3a82f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a82f8:
    // 0x3a82f8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x3a82f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a82fc:
    // 0x3a82fc: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x3a82fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a8300:
    // 0x3a8300: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x3a8300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a8304:
    // 0x3a8304: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3a8304u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_3a8308:
    // 0x3a8308: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x3a8308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a830c:
    // 0x3a830c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3a830cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_3a8310:
    // 0x3a8310: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x3a8310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a8314:
    // 0x3a8314: 0x460402c2  mul.s       $f11, $f0, $f4
    ctx->pc = 0x3a8314u;
    ctx->f[11] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_3a8318:
    // 0x3a8318: 0x8e620064  lw          $v0, 0x64($s3)
    ctx->pc = 0x3a8318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_3a831c:
    // 0x3a831c: 0x46020b02  mul.s       $f12, $f1, $f2
    ctx->pc = 0x3a831cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3a8320:
    // 0x3a8320: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a8320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3a8324:
    // 0x3a8324: 0xe7ab0030  swc1        $f11, 0x30($sp)
    ctx->pc = 0x3a8324u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3a8328:
    // 0x3a8328: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_3a832c:
    if (ctx->pc == 0x3A832Cu) {
        ctx->pc = 0x3A832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8328u;
        // 0x3a832c: 0xe7ac0034  swc1        $f12, 0x34($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8330u;
        goto label_3a8330;
    }
    ctx->pc = 0x3A8328u;
    {
        const bool branch_taken_0x3a8328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8328u;
        // 0x3a832c: 0xe7ac0034  swc1        $f12, 0x34($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8328) {
            ctx->pc = 0x3A8448u;
            goto label_3a8448;
        }
    }
    ctx->pc = 0x3A8330u;
label_3a8330:
    // 0x3a8330: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x3a8330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8334:
    // 0x3a8334: 0xc661004c  lwc1        $f1, 0x4C($s3)
    ctx->pc = 0x3a8334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a8338:
    // 0x3a8338: 0xc6620050  lwc1        $f2, 0x50($s3)
    ctx->pc = 0x3a8338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a833c:
    // 0x3a833c: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x3a833cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
label_3a8340:
    // 0x3a8340: 0xc6630054  lwc1        $f3, 0x54($s3)
    ctx->pc = 0x3a8340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a8344:
    // 0x3a8344: 0x460b0842  mul.s       $f1, $f1, $f11
    ctx->pc = 0x3a8344u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
label_3a8348:
    // 0x3a8348: 0x460b1082  mul.s       $f2, $f2, $f11
    ctx->pc = 0x3a8348u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
label_3a834c:
    // 0x3a834c: 0x460b18c2  mul.s       $f3, $f3, $f11
    ctx->pc = 0x3a834cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
label_3a8350:
    // 0x3a8350: 0xc6690030  lwc1        $f9, 0x30($s3)
    ctx->pc = 0x3a8350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_3a8354:
    // 0x3a8354: 0xc66a0034  lwc1        $f10, 0x34($s3)
    ctx->pc = 0x3a8354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_3a8358:
    // 0x3a8358: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x3a8358u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_3a835c:
    // 0x3a835c: 0xc6670038  lwc1        $f7, 0x38($s3)
    ctx->pc = 0x3a835cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3a8360:
    // 0x3a8360: 0xc668003c  lwc1        $f8, 0x3C($s3)
    ctx->pc = 0x3a8360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_3a8364:
    // 0x3a8364: 0x46015280  add.s       $f10, $f10, $f1
    ctx->pc = 0x3a8364u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
label_3a8368:
    // 0x3a8368: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x3a8368u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
label_3a836c:
    // 0x3a836c: 0xe7a90070  swc1        $f9, 0x70($sp)
    ctx->pc = 0x3a836cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3a8370:
    // 0x3a8370: 0x46034200  add.s       $f8, $f8, $f3
    ctx->pc = 0x3a8370u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
label_3a8374:
    // 0x3a8374: 0xe7aa0074  swc1        $f10, 0x74($sp)
    ctx->pc = 0x3a8374u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3a8378:
    // 0x3a8378: 0xe7a70078  swc1        $f7, 0x78($sp)
    ctx->pc = 0x3a8378u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3a837c:
    // 0x3a837c: 0xe7a8007c  swc1        $f8, 0x7C($sp)
    ctx->pc = 0x3a837cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_3a8380:
    // 0x3a8380: 0xc6630018  lwc1        $f3, 0x18($s3)
    ctx->pc = 0x3a8380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a8384:
    // 0x3a8384: 0xc665001c  lwc1        $f5, 0x1C($s3)
    ctx->pc = 0x3a8384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3a8388:
    // 0x3a8388: 0x460b18c2  mul.s       $f3, $f3, $f11
    ctx->pc = 0x3a8388u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
label_3a838c:
    // 0x3a838c: 0xc6640020  lwc1        $f4, 0x20($s3)
    ctx->pc = 0x3a838cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a8390:
    // 0x3a8390: 0xc6660024  lwc1        $f6, 0x24($s3)
    ctx->pc = 0x3a8390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3a8394:
    // 0x3a8394: 0x460b2942  mul.s       $f5, $f5, $f11
    ctx->pc = 0x3a8394u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[11]);
label_3a8398:
    // 0x3a8398: 0x460b2102  mul.s       $f4, $f4, $f11
    ctx->pc = 0x3a8398u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[11]);
label_3a839c:
    // 0x3a839c: 0x460b3182  mul.s       $f6, $f6, $f11
    ctx->pc = 0x3a839cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
label_3a83a0:
    // 0x3a83a0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x3a83a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a83a4:
    // 0x3a83a4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3a83a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3a83a8:
    // 0x3a83a8: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x3a83a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a83ac:
    // 0x3a83ac: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x3a83acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a83b0:
    // 0x3a83b0: 0xc663000c  lwc1        $f3, 0xC($s3)
    ctx->pc = 0x3a83b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a83b4:
    // 0x3a83b4: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x3a83b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_3a83b8:
    // 0x3a83b8: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x3a83b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_3a83bc:
    // 0x3a83bc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3a83bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3a83c0:
    // 0x3a83c0: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x3a83c0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
label_3a83c4:
    // 0x3a83c4: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x3a83c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3a83c8:
    // 0x3a83c8: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x3a83c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3a83cc:
    // 0x3a83cc: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x3a83ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_3a83d0:
    // 0x3a83d0: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x3a83d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
label_3a83d4:
    // 0x3a83d4: 0x460a0841  sub.s       $f1, $f1, $f10
    ctx->pc = 0x3a83d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[10]);
label_3a83d8:
    // 0x3a83d8: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x3a83d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_3a83dc:
    // 0x3a83dc: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x3a83dcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
label_3a83e0:
    // 0x3a83e0: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x3a83e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_3a83e4:
    // 0x3a83e4: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x3a83e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
label_3a83e8:
    // 0x3a83e8: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x3a83e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_3a83ec:
    // 0x3a83ec: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x3a83ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
label_3a83f0:
    // 0x3a83f0: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x3a83f0u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_3a83f4:
    // 0x3a83f4: 0x46015280  add.s       $f10, $f10, $f1
    ctx->pc = 0x3a83f4u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
label_3a83f8:
    // 0x3a83f8: 0xe7a90090  swc1        $f9, 0x90($sp)
    ctx->pc = 0x3a83f8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3a83fc:
    // 0x3a83fc: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x3a83fcu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
label_3a8400:
    // 0x3a8400: 0x46034200  add.s       $f8, $f8, $f3
    ctx->pc = 0x3a8400u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
label_3a8404:
    // 0x3a8404: 0xe7aa0094  swc1        $f10, 0x94($sp)
    ctx->pc = 0x3a8404u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3a8408:
    // 0x3a8408: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x3a8408u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3a840c:
    // 0x3a840c: 0xe7a8009c  swc1        $f8, 0x9C($sp)
    ctx->pc = 0x3a840cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_3a8410:
    // 0x3a8410: 0x46004824  .word       0x46004824                   # cvt.w.s     $f0, $f9 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a8410u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[9]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a8414:
    // 0x3a8414: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3a8414u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3a8418:
    // 0x3a8418: 0x46005024  .word       0x46005024                   # cvt.w.s     $f0, $f10 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a8418u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[10]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a841c:
    // 0x3a841c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3a841cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3a8420:
    // 0x3a8420: 0x46003824  .word       0x46003824                   # cvt.w.s     $f0, $f7 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a8420u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[7]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a8424:
    // 0x3a8424: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3a8424u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3a8428:
    // 0x3a8428: 0x46004024  .word       0x46004024                   # cvt.w.s     $f0, $f8 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a8428u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[8]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a842c:
    // 0x3a842c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3a842cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3a8430:
    // 0x3a8430: 0x24e2000c  addiu       $v0, $a3, 0xC
    ctx->pc = 0x3a8430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_3a8434:
    // 0x3a8434: 0xa0e4000c  sb          $a0, 0xC($a3)
    ctx->pc = 0x3a8434u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 12), (uint8_t)GPR_U32(ctx, 4));
label_3a8438:
    // 0x3a8438: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x3a8438u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_3a843c:
    // 0x3a843c: 0xa0450001  sb          $a1, 0x1($v0)
    ctx->pc = 0x3a843cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 5));
label_3a8440:
    // 0x3a8440: 0x1000000b  b           . + 4 + (0xB << 2)
label_3a8444:
    if (ctx->pc == 0x3A8444u) {
        ctx->pc = 0x3A8444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8440u;
        // 0x3a8444: 0xa0460002  sb          $a2, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8448u;
        goto label_3a8448;
    }
    ctx->pc = 0x3A8440u;
    {
        const bool branch_taken_0x3a8440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8440u;
        // 0x3a8444: 0xa0460002  sb          $a2, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8440) {
            ctx->pc = 0x3A8470u;
            goto label_3a8470;
        }
    }
    ctx->pc = 0x3A8448u;
label_3a8448:
    // 0x3a8448: 0x92630060  lbu         $v1, 0x60($s3)
    ctx->pc = 0x3a8448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 96)));
label_3a844c:
    // 0x3a844c: 0x24e4000c  addiu       $a0, $a3, 0xC
    ctx->pc = 0x3a844cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_3a8450:
    // 0x3a8450: 0xa0e3000c  sb          $v1, 0xC($a3)
    ctx->pc = 0x3a8450u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 12), (uint8_t)GPR_U32(ctx, 3));
label_3a8454:
    // 0x3a8454: 0x92620061  lbu         $v0, 0x61($s3)
    ctx->pc = 0x3a8454u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 97)));
label_3a8458:
    // 0x3a8458: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x3a8458u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_3a845c:
    // 0x3a845c: 0x92630062  lbu         $v1, 0x62($s3)
    ctx->pc = 0x3a845cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 98)));
label_3a8460:
    // 0x3a8460: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3a8460u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_3a8464:
    // 0x3a8464: 0x92620063  lbu         $v0, 0x63($s3)
    ctx->pc = 0x3a8464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 99)));
label_3a8468:
    // 0x3a8468: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x3a8468u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_3a846c:
    // 0x3a846c: 0x0  nop
    ctx->pc = 0x3a846cu;
    // NOP
label_3a8470:
    // 0x3a8470: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x3a8470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a8474:
    // 0x3a8474: 0xc6600058  lwc1        $f0, 0x58($s3)
    ctx->pc = 0x3a8474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8478:
    // 0x3a8478: 0xc661005c  lwc1        $f1, 0x5C($s3)
    ctx->pc = 0x3a8478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a847c:
    // 0x3a847c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3a847cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3a8480:
    // 0x3a8480: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3a8480u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3a8484:
    // 0x3a8484: 0xc6650040  lwc1        $f5, 0x40($s3)
    ctx->pc = 0x3a8484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3a8488:
    // 0x3a8488: 0xc6640044  lwc1        $f4, 0x44($s3)
    ctx->pc = 0x3a8488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a848c:
    // 0x3a848c: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x3a848cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_3a8490:
    // 0x3a8490: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x3a8490u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_3a8494:
    // 0x3a8494: 0xe7a50080  swc1        $f5, 0x80($sp)
    ctx->pc = 0x3a8494u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3a8498:
    // 0x3a8498: 0xe7a40084  swc1        $f4, 0x84($sp)
    ctx->pc = 0x3a8498u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3a849c:
    // 0x3a849c: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x3a849cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a84a0:
    // 0x3a84a0: 0xc663002c  lwc1        $f3, 0x2C($s3)
    ctx->pc = 0x3a84a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a84a4:
    // 0x3a84a4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3a84a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3a84a8:
    // 0x3a84a8: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x3a84a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3a84ac:
    // 0x3a84ac: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x3a84acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a84b0:
    // 0x3a84b0: 0xc6620014  lwc1        $f2, 0x14($s3)
    ctx->pc = 0x3a84b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a84b4:
    // 0x3a84b4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3a84b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3a84b8:
    // 0x3a84b8: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x3a84b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_3a84bc:
    // 0x3a84bc: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x3a84bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3a84c0:
    // 0x3a84c0: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x3a84c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3a84c4:
    // 0x3a84c4: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x3a84c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_3a84c8:
    // 0x3a84c8: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x3a84c8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_3a84cc:
    // 0x3a84cc: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x3a84ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a84d0:
    // 0x3a84d0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3a84d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3a84d4:
    // 0x3a84d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3a84d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3a84d8:
    // 0x3a84d8: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x3a84d8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_3a84dc:
    // 0x3a84dc: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x3a84dcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_3a84e0:
    // 0x3a84e0: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x3a84e0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3a84e4:
    // 0x3a84e4: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x3a84e4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_3a84e8:
    // 0x3a84e8: 0xe4e5001c  swc1        $f5, 0x1C($a3)
    ctx->pc = 0x3a84e8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
label_3a84ec:
    // 0x3a84ec: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x3a84ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a84f0:
    // 0x3a84f0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x3a84f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a84f4:
    // 0x3a84f4: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x3a84f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_3a84f8:
    // 0x3a84f8: 0x26b50018  addiu       $s5, $s5, 0x18
    ctx->pc = 0x3a84f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
label_3a84fc:
    // 0x3a84fc: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x3a84fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
label_3a8500:
    // 0x3a8500: 0x24e70024  addiu       $a3, $a3, 0x24
    ctx->pc = 0x3a8500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
label_3a8504:
    // 0x3a8504: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x3a8504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8508:
    // 0x3a8508: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3a8508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3a850c:
    // 0x3a850c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3a850cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3a8510:
    // 0x3a8510: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x3a8510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a8514:
    // 0x3a8514: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x3a8514u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_3a8518:
    // 0x3a8518: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x3a8518u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3a851c:
    // 0x3a851c: 0xc641fffc  lwc1        $f1, -0x4($s2)
    ctx->pc = 0x3a851cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a8520:
    // 0x3a8520: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3a8520u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3a8524:
    // 0x3a8524: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x3a8524u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3a8528:
    // 0x3a8528: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x3a8528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a852c:
    // 0x3a852c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3a852cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_3a8530:
    // 0x3a8530: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3a8530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3a8534:
    // 0x3a8534: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x3a8534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_3a8538:
    // 0x3a8538: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x3a8538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_3a853c:
    // 0x3a853c: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x3a853cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_3a8540:
    // 0x3a8540: 0x6ba200d7  ldl         $v0, 0xD7($sp)
    ctx->pc = 0x3a8540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3a8544:
    // 0x3a8544: 0x6fa200d0  ldr         $v0, 0xD0($sp)
    ctx->pc = 0x3a8544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3a8548:
    // 0x3a8548: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x3a8548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_3a854c:
    // 0x3a854c: 0xb0e20007  sdl         $v0, 0x7($a3)
    ctx->pc = 0x3a854cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a8550:
    // 0x3a8550: 0xb4e20000  sdr         $v0, 0x0($a3)
    ctx->pc = 0x3a8550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a8554:
    // 0x3a8554: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x3a8554u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_3a8558:
    // 0x3a8558: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x3a8558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a855c:
    // 0x3a855c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x3a855cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a8560:
    // 0x3a8560: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x3a8560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a8564:
    // 0x3a8564: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x3a8564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a8568:
    // 0x3a8568: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3a8568u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_3a856c:
    // 0x3a856c: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x3a856cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a8570:
    // 0x3a8570: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3a8570u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_3a8574:
    // 0x3a8574: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x3a8574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a8578:
    // 0x3a8578: 0x460402c2  mul.s       $f11, $f0, $f4
    ctx->pc = 0x3a8578u;
    ctx->f[11] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_3a857c:
    // 0x3a857c: 0x8e620064  lw          $v0, 0x64($s3)
    ctx->pc = 0x3a857cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_3a8580:
    // 0x3a8580: 0x46020b02  mul.s       $f12, $f1, $f2
    ctx->pc = 0x3a8580u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3a8584:
    // 0x3a8584: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a8584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3a8588:
    // 0x3a8588: 0xe7ab0030  swc1        $f11, 0x30($sp)
    ctx->pc = 0x3a8588u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3a858c:
    // 0x3a858c: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_3a8590:
    if (ctx->pc == 0x3A8590u) {
        ctx->pc = 0x3A8590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A858Cu;
        // 0x3a8590: 0xe7ac0034  swc1        $f12, 0x34($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8594u;
        goto label_3a8594;
    }
    ctx->pc = 0x3A858Cu;
    {
        const bool branch_taken_0x3a858c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A858Cu;
        // 0x3a8590: 0xe7ac0034  swc1        $f12, 0x34($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a858c) {
            ctx->pc = 0x3A86B0u;
            goto label_3a86b0;
        }
    }
    ctx->pc = 0x3A8594u;
label_3a8594:
    // 0x3a8594: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x3a8594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8598:
    // 0x3a8598: 0xc661004c  lwc1        $f1, 0x4C($s3)
    ctx->pc = 0x3a8598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a859c:
    // 0x3a859c: 0xc6620050  lwc1        $f2, 0x50($s3)
    ctx->pc = 0x3a859cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a85a0:
    // 0x3a85a0: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x3a85a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
label_3a85a4:
    // 0x3a85a4: 0xc6630054  lwc1        $f3, 0x54($s3)
    ctx->pc = 0x3a85a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a85a8:
    // 0x3a85a8: 0x460b0842  mul.s       $f1, $f1, $f11
    ctx->pc = 0x3a85a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
label_3a85ac:
    // 0x3a85ac: 0x460b1082  mul.s       $f2, $f2, $f11
    ctx->pc = 0x3a85acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
label_3a85b0:
    // 0x3a85b0: 0x460b18c2  mul.s       $f3, $f3, $f11
    ctx->pc = 0x3a85b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
label_3a85b4:
    // 0x3a85b4: 0xc6690030  lwc1        $f9, 0x30($s3)
    ctx->pc = 0x3a85b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_3a85b8:
    // 0x3a85b8: 0xc66a0034  lwc1        $f10, 0x34($s3)
    ctx->pc = 0x3a85b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_3a85bc:
    // 0x3a85bc: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x3a85bcu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_3a85c0:
    // 0x3a85c0: 0xc6670038  lwc1        $f7, 0x38($s3)
    ctx->pc = 0x3a85c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3a85c4:
    // 0x3a85c4: 0xc668003c  lwc1        $f8, 0x3C($s3)
    ctx->pc = 0x3a85c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_3a85c8:
    // 0x3a85c8: 0x46015280  add.s       $f10, $f10, $f1
    ctx->pc = 0x3a85c8u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
label_3a85cc:
    // 0x3a85cc: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x3a85ccu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
label_3a85d0:
    // 0x3a85d0: 0xe7a90070  swc1        $f9, 0x70($sp)
    ctx->pc = 0x3a85d0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3a85d4:
    // 0x3a85d4: 0x46034200  add.s       $f8, $f8, $f3
    ctx->pc = 0x3a85d4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
label_3a85d8:
    // 0x3a85d8: 0xe7aa0074  swc1        $f10, 0x74($sp)
    ctx->pc = 0x3a85d8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3a85dc:
    // 0x3a85dc: 0xe7a70078  swc1        $f7, 0x78($sp)
    ctx->pc = 0x3a85dcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3a85e0:
    // 0x3a85e0: 0xe7a8007c  swc1        $f8, 0x7C($sp)
    ctx->pc = 0x3a85e0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_3a85e4:
    // 0x3a85e4: 0xc6630018  lwc1        $f3, 0x18($s3)
    ctx->pc = 0x3a85e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a85e8:
    // 0x3a85e8: 0xc665001c  lwc1        $f5, 0x1C($s3)
    ctx->pc = 0x3a85e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3a85ec:
    // 0x3a85ec: 0x460b18c2  mul.s       $f3, $f3, $f11
    ctx->pc = 0x3a85ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
label_3a85f0:
    // 0x3a85f0: 0xc6640020  lwc1        $f4, 0x20($s3)
    ctx->pc = 0x3a85f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a85f4:
    // 0x3a85f4: 0xc6660024  lwc1        $f6, 0x24($s3)
    ctx->pc = 0x3a85f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3a85f8:
    // 0x3a85f8: 0x460b2942  mul.s       $f5, $f5, $f11
    ctx->pc = 0x3a85f8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[11]);
label_3a85fc:
    // 0x3a85fc: 0x460b2102  mul.s       $f4, $f4, $f11
    ctx->pc = 0x3a85fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[11]);
label_3a8600:
    // 0x3a8600: 0x460b3182  mul.s       $f6, $f6, $f11
    ctx->pc = 0x3a8600u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
label_3a8604:
    // 0x3a8604: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x3a8604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8608:
    // 0x3a8608: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3a8608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3a860c:
    // 0x3a860c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x3a860cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a8610:
    // 0x3a8610: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x3a8610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a8614:
    // 0x3a8614: 0xc663000c  lwc1        $f3, 0xC($s3)
    ctx->pc = 0x3a8614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a8618:
    // 0x3a8618: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x3a8618u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_3a861c:
    // 0x3a861c: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x3a861cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_3a8620:
    // 0x3a8620: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3a8620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3a8624:
    // 0x3a8624: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x3a8624u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
label_3a8628:
    // 0x3a8628: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x3a8628u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3a862c:
    // 0x3a862c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x3a862cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3a8630:
    // 0x3a8630: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x3a8630u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_3a8634:
    // 0x3a8634: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x3a8634u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
label_3a8638:
    // 0x3a8638: 0x460a0841  sub.s       $f1, $f1, $f10
    ctx->pc = 0x3a8638u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[10]);
label_3a863c:
    // 0x3a863c: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x3a863cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_3a8640:
    // 0x3a8640: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x3a8640u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
label_3a8644:
    // 0x3a8644: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x3a8644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_3a8648:
    // 0x3a8648: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x3a8648u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
label_3a864c:
    // 0x3a864c: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x3a864cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_3a8650:
    // 0x3a8650: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x3a8650u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
label_3a8654:
    // 0x3a8654: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x3a8654u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_3a8658:
    // 0x3a8658: 0x46015280  add.s       $f10, $f10, $f1
    ctx->pc = 0x3a8658u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
label_3a865c:
    // 0x3a865c: 0xe7a90090  swc1        $f9, 0x90($sp)
    ctx->pc = 0x3a865cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3a8660:
    // 0x3a8660: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x3a8660u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
label_3a8664:
    // 0x3a8664: 0x46034200  add.s       $f8, $f8, $f3
    ctx->pc = 0x3a8664u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
label_3a8668:
    // 0x3a8668: 0xe7aa0094  swc1        $f10, 0x94($sp)
    ctx->pc = 0x3a8668u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3a866c:
    // 0x3a866c: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x3a866cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3a8670:
    // 0x3a8670: 0xe7a8009c  swc1        $f8, 0x9C($sp)
    ctx->pc = 0x3a8670u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_3a8674:
    // 0x3a8674: 0x46004824  .word       0x46004824                   # cvt.w.s     $f0, $f9 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a8674u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[9]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a8678:
    // 0x3a8678: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3a8678u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3a867c:
    // 0x3a867c: 0x46005024  .word       0x46005024                   # cvt.w.s     $f0, $f10 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a867cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[10]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a8680:
    // 0x3a8680: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3a8680u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3a8684:
    // 0x3a8684: 0x46003824  .word       0x46003824                   # cvt.w.s     $f0, $f7 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a8684u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[7]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a8688:
    // 0x3a8688: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3a8688u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3a868c:
    // 0x3a868c: 0x46004024  .word       0x46004024                   # cvt.w.s     $f0, $f8 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a868cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[8]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a8690:
    // 0x3a8690: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3a8690u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3a8694:
    // 0x3a8694: 0x24e2000c  addiu       $v0, $a3, 0xC
    ctx->pc = 0x3a8694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_3a8698:
    // 0x3a8698: 0xa0e4000c  sb          $a0, 0xC($a3)
    ctx->pc = 0x3a8698u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 12), (uint8_t)GPR_U32(ctx, 4));
label_3a869c:
    // 0x3a869c: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x3a869cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_3a86a0:
    // 0x3a86a0: 0xa0450001  sb          $a1, 0x1($v0)
    ctx->pc = 0x3a86a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 5));
label_3a86a4:
    // 0x3a86a4: 0x1000000c  b           . + 4 + (0xC << 2)
label_3a86a8:
    if (ctx->pc == 0x3A86A8u) {
        ctx->pc = 0x3A86A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A86A4u;
        // 0x3a86a8: 0xa0460002  sb          $a2, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A86ACu;
        goto label_3a86ac;
    }
    ctx->pc = 0x3A86A4u;
    {
        const bool branch_taken_0x3a86a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A86A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A86A4u;
        // 0x3a86a8: 0xa0460002  sb          $a2, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a86a4) {
            ctx->pc = 0x3A86D8u;
            goto label_3a86d8;
        }
    }
    ctx->pc = 0x3A86ACu;
label_3a86ac:
    // 0x3a86ac: 0x0  nop
    ctx->pc = 0x3a86acu;
    // NOP
label_3a86b0:
    // 0x3a86b0: 0x92630060  lbu         $v1, 0x60($s3)
    ctx->pc = 0x3a86b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 96)));
label_3a86b4:
    // 0x3a86b4: 0x24e4000c  addiu       $a0, $a3, 0xC
    ctx->pc = 0x3a86b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_3a86b8:
    // 0x3a86b8: 0xa0e3000c  sb          $v1, 0xC($a3)
    ctx->pc = 0x3a86b8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 12), (uint8_t)GPR_U32(ctx, 3));
label_3a86bc:
    // 0x3a86bc: 0x92620061  lbu         $v0, 0x61($s3)
    ctx->pc = 0x3a86bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 97)));
label_3a86c0:
    // 0x3a86c0: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x3a86c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_3a86c4:
    // 0x3a86c4: 0x92630062  lbu         $v1, 0x62($s3)
    ctx->pc = 0x3a86c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 98)));
label_3a86c8:
    // 0x3a86c8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3a86c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_3a86cc:
    // 0x3a86cc: 0x92620063  lbu         $v0, 0x63($s3)
    ctx->pc = 0x3a86ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 99)));
label_3a86d0:
    // 0x3a86d0: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x3a86d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_3a86d4:
    // 0x3a86d4: 0x0  nop
    ctx->pc = 0x3a86d4u;
    // NOP
label_3a86d8:
    // 0x3a86d8: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x3a86d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a86dc:
    // 0x3a86dc: 0xc6600058  lwc1        $f0, 0x58($s3)
    ctx->pc = 0x3a86dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a86e0:
    // 0x3a86e0: 0xc661005c  lwc1        $f1, 0x5C($s3)
    ctx->pc = 0x3a86e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a86e4:
    // 0x3a86e4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3a86e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3a86e8:
    // 0x3a86e8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3a86e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3a86ec:
    // 0x3a86ec: 0xc6650040  lwc1        $f5, 0x40($s3)
    ctx->pc = 0x3a86ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3a86f0:
    // 0x3a86f0: 0xc6640044  lwc1        $f4, 0x44($s3)
    ctx->pc = 0x3a86f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a86f4:
    // 0x3a86f4: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x3a86f4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_3a86f8:
    // 0x3a86f8: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x3a86f8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_3a86fc:
    // 0x3a86fc: 0xe7a50080  swc1        $f5, 0x80($sp)
    ctx->pc = 0x3a86fcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3a8700:
    // 0x3a8700: 0xe7a40084  swc1        $f4, 0x84($sp)
    ctx->pc = 0x3a8700u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3a8704:
    // 0x3a8704: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x3a8704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8708:
    // 0x3a8708: 0xc663002c  lwc1        $f3, 0x2C($s3)
    ctx->pc = 0x3a8708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a870c:
    // 0x3a870c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3a870cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3a8710:
    // 0x3a8710: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x3a8710u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3a8714:
    // 0x3a8714: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x3a8714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a8718:
    // 0x3a8718: 0xc6620014  lwc1        $f2, 0x14($s3)
    ctx->pc = 0x3a8718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a871c:
    // 0x3a871c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3a871cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3a8720:
    // 0x3a8720: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x3a8720u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_3a8724:
    // 0x3a8724: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x3a8724u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3a8728:
    // 0x3a8728: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x3a8728u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3a872c:
    // 0x3a872c: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x3a872cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_3a8730:
    // 0x3a8730: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x3a8730u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_3a8734:
    // 0x3a8734: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x3a8734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8738:
    // 0x3a8738: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3a8738u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3a873c:
    // 0x3a873c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3a873cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3a8740:
    // 0x3a8740: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x3a8740u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_3a8744:
    // 0x3a8744: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x3a8744u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_3a8748:
    // 0x3a8748: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x3a8748u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3a874c:
    // 0x3a874c: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x3a874cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_3a8750:
    // 0x3a8750: 0xe4e5001c  swc1        $f5, 0x1C($a3)
    ctx->pc = 0x3a8750u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
label_3a8754:
    // 0x3a8754: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x3a8754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8758:
    // 0x3a8758: 0x26d6ffe8  addiu       $s6, $s6, -0x18
    ctx->pc = 0x3a8758u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967272));
label_3a875c:
    // 0x3a875c: 0x2652ffe8  addiu       $s2, $s2, -0x18
    ctx->pc = 0x3a875cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967272));
label_3a8760:
    // 0x3a8760: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3a8760u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3a8764:
    // 0x3a8764: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x3a8764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
label_3a8768:
    // 0x3a8768: 0x2d5102b  sltu        $v0, $s6, $s5
    ctx->pc = 0x3a8768u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_3a876c:
    // 0x3a876c: 0x144000a2  bnez        $v0, . + 4 + (0xA2 << 2)
label_3a8770:
    if (ctx->pc == 0x3A8770u) {
        ctx->pc = 0x3A8770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A876Cu;
        // 0x3a8770: 0x24e70024  addiu       $a3, $a3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8774u;
        goto label_3a8774;
    }
    ctx->pc = 0x3A876Cu;
    {
        const bool branch_taken_0x3a876c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A876Cu;
        // 0x3a8770: 0x24e70024  addiu       $a3, $a3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a876c) {
            ctx->pc = 0x3A89F8u;
            goto label_3a89f8;
        }
    }
    ctx->pc = 0x3A8774u;
label_3a8774:
    // 0x3a8774: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3a8774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8778:
    // 0x3a8778: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3a8778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3a877c:
    // 0x3a877c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3a877cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3a8780:
    // 0x3a8780: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x3a8780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a8784:
    // 0x3a8784: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x3a8784u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_3a8788:
    // 0x3a8788: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x3a8788u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3a878c:
    // 0x3a878c: 0xc621fffc  lwc1        $f1, -0x4($s1)
    ctx->pc = 0x3a878cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a8790:
    // 0x3a8790: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3a8790u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3a8794:
    // 0x3a8794: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x3a8794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3a8798:
    // 0x3a8798: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3a8798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a879c:
    // 0x3a879c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3a879cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_3a87a0:
    // 0x3a87a0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3a87a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3a87a4:
    // 0x3a87a4: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x3a87a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_3a87a8:
    // 0x3a87a8: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x3a87a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_3a87ac:
    // 0x3a87ac: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x3a87acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_3a87b0:
    // 0x3a87b0: 0x6ba200e7  ldl         $v0, 0xE7($sp)
    ctx->pc = 0x3a87b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3a87b4:
    // 0x3a87b4: 0x6fa200e0  ldr         $v0, 0xE0($sp)
    ctx->pc = 0x3a87b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3a87b8:
    // 0x3a87b8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3a87b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_3a87bc:
    // 0x3a87bc: 0xb0e20007  sdl         $v0, 0x7($a3)
    ctx->pc = 0x3a87bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a87c0:
    // 0x3a87c0: 0xb4e20000  sdr         $v0, 0x0($a3)
    ctx->pc = 0x3a87c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a87c4:
    // 0x3a87c4: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x3a87c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_3a87c8:
    // 0x3a87c8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x3a87c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a87cc:
    // 0x3a87cc: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x3a87ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a87d0:
    // 0x3a87d0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x3a87d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a87d4:
    // 0x3a87d4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x3a87d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a87d8:
    // 0x3a87d8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3a87d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_3a87dc:
    // 0x3a87dc: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x3a87dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a87e0:
    // 0x3a87e0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3a87e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_3a87e4:
    // 0x3a87e4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x3a87e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a87e8:
    // 0x3a87e8: 0x460402c2  mul.s       $f11, $f0, $f4
    ctx->pc = 0x3a87e8u;
    ctx->f[11] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_3a87ec:
    // 0x3a87ec: 0x8e620064  lw          $v0, 0x64($s3)
    ctx->pc = 0x3a87ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_3a87f0:
    // 0x3a87f0: 0x46020b02  mul.s       $f12, $f1, $f2
    ctx->pc = 0x3a87f0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3a87f4:
    // 0x3a87f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a87f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3a87f8:
    // 0x3a87f8: 0xe7ab0030  swc1        $f11, 0x30($sp)
    ctx->pc = 0x3a87f8u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3a87fc:
    // 0x3a87fc: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_3a8800:
    if (ctx->pc == 0x3A8800u) {
        ctx->pc = 0x3A8800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A87FCu;
        // 0x3a8800: 0xe7ac0034  swc1        $f12, 0x34($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8804u;
        goto label_3a8804;
    }
    ctx->pc = 0x3A87FCu;
    {
        const bool branch_taken_0x3a87fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A87FCu;
        // 0x3a8800: 0xe7ac0034  swc1        $f12, 0x34($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a87fc) {
            ctx->pc = 0x3A8920u;
            goto label_3a8920;
        }
    }
    ctx->pc = 0x3A8804u;
label_3a8804:
    // 0x3a8804: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x3a8804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8808:
    // 0x3a8808: 0xc661004c  lwc1        $f1, 0x4C($s3)
    ctx->pc = 0x3a8808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a880c:
    // 0x3a880c: 0xc6620050  lwc1        $f2, 0x50($s3)
    ctx->pc = 0x3a880cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a8810:
    // 0x3a8810: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x3a8810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
label_3a8814:
    // 0x3a8814: 0xc6630054  lwc1        $f3, 0x54($s3)
    ctx->pc = 0x3a8814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a8818:
    // 0x3a8818: 0x460b0842  mul.s       $f1, $f1, $f11
    ctx->pc = 0x3a8818u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
label_3a881c:
    // 0x3a881c: 0x460b1082  mul.s       $f2, $f2, $f11
    ctx->pc = 0x3a881cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
label_3a8820:
    // 0x3a8820: 0x460b18c2  mul.s       $f3, $f3, $f11
    ctx->pc = 0x3a8820u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
label_3a8824:
    // 0x3a8824: 0xc6690030  lwc1        $f9, 0x30($s3)
    ctx->pc = 0x3a8824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_3a8828:
    // 0x3a8828: 0xc66a0034  lwc1        $f10, 0x34($s3)
    ctx->pc = 0x3a8828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_3a882c:
    // 0x3a882c: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x3a882cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_3a8830:
    // 0x3a8830: 0xc6670038  lwc1        $f7, 0x38($s3)
    ctx->pc = 0x3a8830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3a8834:
    // 0x3a8834: 0xc668003c  lwc1        $f8, 0x3C($s3)
    ctx->pc = 0x3a8834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_3a8838:
    // 0x3a8838: 0x46015280  add.s       $f10, $f10, $f1
    ctx->pc = 0x3a8838u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
label_3a883c:
    // 0x3a883c: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x3a883cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
label_3a8840:
    // 0x3a8840: 0xe7a90070  swc1        $f9, 0x70($sp)
    ctx->pc = 0x3a8840u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3a8844:
    // 0x3a8844: 0x46034200  add.s       $f8, $f8, $f3
    ctx->pc = 0x3a8844u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
label_3a8848:
    // 0x3a8848: 0xe7aa0074  swc1        $f10, 0x74($sp)
    ctx->pc = 0x3a8848u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3a884c:
    // 0x3a884c: 0xe7a70078  swc1        $f7, 0x78($sp)
    ctx->pc = 0x3a884cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3a8850:
    // 0x3a8850: 0xe7a8007c  swc1        $f8, 0x7C($sp)
    ctx->pc = 0x3a8850u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_3a8854:
    // 0x3a8854: 0xc6630018  lwc1        $f3, 0x18($s3)
    ctx->pc = 0x3a8854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a8858:
    // 0x3a8858: 0xc665001c  lwc1        $f5, 0x1C($s3)
    ctx->pc = 0x3a8858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3a885c:
    // 0x3a885c: 0x460b18c2  mul.s       $f3, $f3, $f11
    ctx->pc = 0x3a885cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[11]);
label_3a8860:
    // 0x3a8860: 0xc6640020  lwc1        $f4, 0x20($s3)
    ctx->pc = 0x3a8860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a8864:
    // 0x3a8864: 0xc6660024  lwc1        $f6, 0x24($s3)
    ctx->pc = 0x3a8864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3a8868:
    // 0x3a8868: 0x460b2942  mul.s       $f5, $f5, $f11
    ctx->pc = 0x3a8868u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[11]);
label_3a886c:
    // 0x3a886c: 0x460b2102  mul.s       $f4, $f4, $f11
    ctx->pc = 0x3a886cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[11]);
label_3a8870:
    // 0x3a8870: 0x460b3182  mul.s       $f6, $f6, $f11
    ctx->pc = 0x3a8870u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
label_3a8874:
    // 0x3a8874: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x3a8874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8878:
    // 0x3a8878: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3a8878u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3a887c:
    // 0x3a887c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x3a887cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a8880:
    // 0x3a8880: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x3a8880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a8884:
    // 0x3a8884: 0xc663000c  lwc1        $f3, 0xC($s3)
    ctx->pc = 0x3a8884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a8888:
    // 0x3a8888: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x3a8888u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_3a888c:
    // 0x3a888c: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x3a888cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_3a8890:
    // 0x3a8890: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3a8890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3a8894:
    // 0x3a8894: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x3a8894u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
label_3a8898:
    // 0x3a8898: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x3a8898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3a889c:
    // 0x3a889c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x3a889cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3a88a0:
    // 0x3a88a0: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x3a88a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_3a88a4:
    // 0x3a88a4: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x3a88a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
label_3a88a8:
    // 0x3a88a8: 0x460a0841  sub.s       $f1, $f1, $f10
    ctx->pc = 0x3a88a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[10]);
label_3a88ac:
    // 0x3a88ac: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x3a88acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_3a88b0:
    // 0x3a88b0: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x3a88b0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
label_3a88b4:
    // 0x3a88b4: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x3a88b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_3a88b8:
    // 0x3a88b8: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x3a88b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
label_3a88bc:
    // 0x3a88bc: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x3a88bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_3a88c0:
    // 0x3a88c0: 0x460c1082  mul.s       $f2, $f2, $f12
    ctx->pc = 0x3a88c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
label_3a88c4:
    // 0x3a88c4: 0x46004a40  add.s       $f9, $f9, $f0
    ctx->pc = 0x3a88c4u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_3a88c8:
    // 0x3a88c8: 0x46015280  add.s       $f10, $f10, $f1
    ctx->pc = 0x3a88c8u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
label_3a88cc:
    // 0x3a88cc: 0xe7a90090  swc1        $f9, 0x90($sp)
    ctx->pc = 0x3a88ccu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3a88d0:
    // 0x3a88d0: 0x460239c0  add.s       $f7, $f7, $f2
    ctx->pc = 0x3a88d0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
label_3a88d4:
    // 0x3a88d4: 0x46034200  add.s       $f8, $f8, $f3
    ctx->pc = 0x3a88d4u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[3]);
label_3a88d8:
    // 0x3a88d8: 0xe7aa0094  swc1        $f10, 0x94($sp)
    ctx->pc = 0x3a88d8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3a88dc:
    // 0x3a88dc: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x3a88dcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3a88e0:
    // 0x3a88e0: 0xe7a8009c  swc1        $f8, 0x9C($sp)
    ctx->pc = 0x3a88e0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_3a88e4:
    // 0x3a88e4: 0x46004824  .word       0x46004824                   # cvt.w.s     $f0, $f9 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a88e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[9]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a88e8:
    // 0x3a88e8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3a88e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3a88ec:
    // 0x3a88ec: 0x46005024  .word       0x46005024                   # cvt.w.s     $f0, $f10 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a88ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[10]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a88f0:
    // 0x3a88f0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3a88f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3a88f4:
    // 0x3a88f4: 0x46003824  .word       0x46003824                   # cvt.w.s     $f0, $f7 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a88f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[7]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a88f8:
    // 0x3a88f8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3a88f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3a88fc:
    // 0x3a88fc: 0x46004024  .word       0x46004024                   # cvt.w.s     $f0, $f8 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a88fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[8]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a8900:
    // 0x3a8900: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3a8900u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3a8904:
    // 0x3a8904: 0x24e2000c  addiu       $v0, $a3, 0xC
    ctx->pc = 0x3a8904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_3a8908:
    // 0x3a8908: 0xa0e4000c  sb          $a0, 0xC($a3)
    ctx->pc = 0x3a8908u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 12), (uint8_t)GPR_U32(ctx, 4));
label_3a890c:
    // 0x3a890c: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x3a890cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_3a8910:
    // 0x3a8910: 0xa0450001  sb          $a1, 0x1($v0)
    ctx->pc = 0x3a8910u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 5));
label_3a8914:
    // 0x3a8914: 0x1000000c  b           . + 4 + (0xC << 2)
label_3a8918:
    if (ctx->pc == 0x3A8918u) {
        ctx->pc = 0x3A8918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8914u;
        // 0x3a8918: 0xa0460002  sb          $a2, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A891Cu;
        goto label_3a891c;
    }
    ctx->pc = 0x3A8914u;
    {
        const bool branch_taken_0x3a8914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8914u;
        // 0x3a8918: 0xa0460002  sb          $a2, 0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8914) {
            ctx->pc = 0x3A8948u;
            goto label_3a8948;
        }
    }
    ctx->pc = 0x3A891Cu;
label_3a891c:
    // 0x3a891c: 0x0  nop
    ctx->pc = 0x3a891cu;
    // NOP
label_3a8920:
    // 0x3a8920: 0x92630060  lbu         $v1, 0x60($s3)
    ctx->pc = 0x3a8920u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 96)));
label_3a8924:
    // 0x3a8924: 0x24e4000c  addiu       $a0, $a3, 0xC
    ctx->pc = 0x3a8924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_3a8928:
    // 0x3a8928: 0xa0e3000c  sb          $v1, 0xC($a3)
    ctx->pc = 0x3a8928u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 12), (uint8_t)GPR_U32(ctx, 3));
label_3a892c:
    // 0x3a892c: 0x92620061  lbu         $v0, 0x61($s3)
    ctx->pc = 0x3a892cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 97)));
label_3a8930:
    // 0x3a8930: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x3a8930u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_3a8934:
    // 0x3a8934: 0x92630062  lbu         $v1, 0x62($s3)
    ctx->pc = 0x3a8934u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 98)));
label_3a8938:
    // 0x3a8938: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3a8938u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_3a893c:
    // 0x3a893c: 0x92620063  lbu         $v0, 0x63($s3)
    ctx->pc = 0x3a893cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 99)));
label_3a8940:
    // 0x3a8940: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x3a8940u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_3a8944:
    // 0x3a8944: 0x0  nop
    ctx->pc = 0x3a8944u;
    // NOP
label_3a8948:
    // 0x3a8948: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x3a8948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a894c:
    // 0x3a894c: 0xc6600058  lwc1        $f0, 0x58($s3)
    ctx->pc = 0x3a894cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8950:
    // 0x3a8950: 0xc661005c  lwc1        $f1, 0x5C($s3)
    ctx->pc = 0x3a8950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a8954:
    // 0x3a8954: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3a8954u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3a8958:
    // 0x3a8958: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3a8958u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3a895c:
    // 0x3a895c: 0xc6650040  lwc1        $f5, 0x40($s3)
    ctx->pc = 0x3a895cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3a8960:
    // 0x3a8960: 0xc6640044  lwc1        $f4, 0x44($s3)
    ctx->pc = 0x3a8960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3a8964:
    // 0x3a8964: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x3a8964u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_3a8968:
    // 0x3a8968: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x3a8968u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_3a896c:
    // 0x3a896c: 0xe7a50080  swc1        $f5, 0x80($sp)
    ctx->pc = 0x3a896cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3a8970:
    // 0x3a8970: 0xe7a40084  swc1        $f4, 0x84($sp)
    ctx->pc = 0x3a8970u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3a8974:
    // 0x3a8974: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x3a8974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a8978:
    // 0x3a8978: 0xc663002c  lwc1        $f3, 0x2C($s3)
    ctx->pc = 0x3a8978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a897c:
    // 0x3a897c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3a897cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3a8980:
    // 0x3a8980: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x3a8980u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3a8984:
    // 0x3a8984: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x3a8984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a8988:
    // 0x3a8988: 0xc6620014  lwc1        $f2, 0x14($s3)
    ctx->pc = 0x3a8988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a898c:
    // 0x3a898c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3a898cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3a8990:
    // 0x3a8990: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x3a8990u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_3a8994:
    // 0x3a8994: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x3a8994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3a8998:
    // 0x3a8998: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x3a8998u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3a899c:
    // 0x3a899c: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x3a899cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_3a89a0:
    // 0x3a89a0: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x3a89a0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_3a89a4:
    // 0x3a89a4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x3a89a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a89a8:
    // 0x3a89a8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3a89a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3a89ac:
    // 0x3a89ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3a89acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3a89b0:
    // 0x3a89b0: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x3a89b0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_3a89b4:
    // 0x3a89b4: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x3a89b4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_3a89b8:
    // 0x3a89b8: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x3a89b8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3a89bc:
    // 0x3a89bc: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x3a89bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_3a89c0:
    // 0x3a89c0: 0xe4e5001c  swc1        $f5, 0x1C($a3)
    ctx->pc = 0x3a89c0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
label_3a89c4:
    // 0x3a89c4: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x3a89c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a89c8:
    // 0x3a89c8: 0x26b50018  addiu       $s5, $s5, 0x18
    ctx->pc = 0x3a89c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
label_3a89cc:
    // 0x3a89cc: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x3a89ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_3a89d0:
    // 0x3a89d0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3a89d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3a89d4:
    // 0x3a89d4: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x3a89d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
label_3a89d8:
    // 0x3a89d8: 0x2d5102b  sltu        $v0, $s6, $s5
    ctx->pc = 0x3a89d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_3a89dc:
    // 0x3a89dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3a89e0:
    if (ctx->pc == 0x3A89E0u) {
        ctx->pc = 0x3A89E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A89DCu;
        // 0x3a89e0: 0x24e70024  addiu       $a3, $a3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A89E4u;
        goto label_3a89e4;
    }
    ctx->pc = 0x3A89DCu;
    {
        const bool branch_taken_0x3a89dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A89E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A89DCu;
        // 0x3a89e0: 0x24e70024  addiu       $a3, $a3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a89dc) {
            ctx->pc = 0x3A89F8u;
            goto label_3a89f8;
        }
    }
    ctx->pc = 0x3A89E4u;
label_3a89e4:
    // 0x3a89e4: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3a89e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_3a89e8:
    // 0x3a89e8: 0x2fe102a  slt         $v0, $s7, $fp
    ctx->pc = 0x3a89e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_3a89ec:
    // 0x3a89ec: 0x1440fd7a  bnez        $v0, . + 4 + (-0x286 << 2)
label_3a89f0:
    if (ctx->pc == 0x3A89F0u) {
        ctx->pc = 0x3A89F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A89ECu;
        // 0x3a89f0: 0x2a8200fe  slti        $v0, $s4, 0xFE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)254) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A89F4u;
        goto label_3a89f4;
    }
    ctx->pc = 0x3A89ECu;
    {
        const bool branch_taken_0x3a89ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A89F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A89ECu;
        // 0x3a89f0: 0x2a8200fe  slti        $v0, $s4, 0xFE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)254) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a89ec) {
            ctx->pc = 0x3A7FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7fd8;
        }
    }
    ctx->pc = 0x3A89F4u;
label_3a89f4:
    // 0x3a89f4: 0x0  nop
    ctx->pc = 0x3a89f4u;
    // NOP
label_3a89f8:
    // 0x3a89f8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3a89f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3a89fc:
    // 0x3a89fc: 0x3c0338e3  lui         $v1, 0x38E3
    ctx->pc = 0x3a89fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14563 << 16));
label_3a8a00:
    // 0x3a8a00: 0x2450ce80  addiu       $s0, $v0, -0x3180
    ctx->pc = 0x3a8a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
label_3a8a04:
    // 0x3a8a04: 0x34638e39  ori         $v1, $v1, 0x8E39
    ctx->pc = 0x3a8a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36409);
label_3a8a08:
    // 0x3a8a08: 0x8e040504  lw          $a0, 0x504($s0)
    ctx->pc = 0x3a8a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1284)));
label_3a8a0c:
    // 0x3a8a0c: 0xe41023  subu        $v0, $a3, $a0
    ctx->pc = 0x3a8a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_3a8a10:
    // 0x3a8a10: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3a8a10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3a8a14:
    // 0x3a8a14: 0x22883  sra         $a1, $v0, 2
    ctx->pc = 0x3a8a14u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
label_3a8a18:
    // 0x3a8a18: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_3a8a1c:
    if (ctx->pc == 0x3A8A1Cu) {
        ctx->pc = 0x3A8A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A18u;
        // 0x3a8a1c: 0x8fa600f4  lw          $a2, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8A20u;
        goto label_3a8a20;
    }
    ctx->pc = 0x3A8A18u;
    {
        const bool branch_taken_0x3a8a18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A18u;
        // 0x3a8a1c: 0x8fa600f4  lw          $a2, 0xF4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8a18) {
            ctx->pc = 0x3A8A50u;
            goto label_3a8a50;
        }
    }
    ctx->pc = 0x3A8A20u;
label_3a8a20:
    // 0x3a8a20: 0x8e670068  lw          $a3, 0x68($s3)
    ctx->pc = 0x3a8a20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
label_3a8a24:
    // 0x3a8a24: 0x8e0206f4  lw          $v0, 0x6F4($s0)
    ctx->pc = 0x3a8a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1780)));
label_3a8a28:
    // 0x3a8a28: 0x7382b  sltu        $a3, $zero, $a3
    ctx->pc = 0x3a8a28u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_3a8a2c:
    // 0x3a8a2c: 0xc1111fe  jal         func_4447F8
label_3a8a30:
    if (ctx->pc == 0x3A8A30u) {
        ctx->pc = 0x3A8A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A2Cu;
        // 0x3a8a30: 0x473825  or          $a3, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8A34u;
        goto label_3a8a34;
    }
    ctx->pc = 0x3A8A2Cu;
    SET_GPR_U32(ctx, 31, 0x3A8A34u);
    ctx->pc = 0x3A8A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8A2Cu;
    // 0x3a8a30: 0x473825  or          $a3, $v0, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4447F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4447F8u, 0x3A8A2Cu, 0x3A8A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8A34u;
label_3a8a34:
    // 0x3a8a34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3a8a38:
    if (ctx->pc == 0x3A8A38u) {
        ctx->pc = 0x3A8A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A34u;
        // 0x3a8a38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8A3Cu;
        goto label_3a8a3c;
    }
    ctx->pc = 0x3A8A34u;
    {
        const bool branch_taken_0x3a8a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A34u;
        // 0x3a8a38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8a34) {
            ctx->pc = 0x3A8A50u;
            goto label_3a8a50;
        }
    }
    ctx->pc = 0x3A8A3Cu;
label_3a8a3c:
    // 0x3a8a3c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3a8a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a8a40:
    // 0x3a8a40: 0xc111044  jal         func_444110
label_3a8a44:
    if (ctx->pc == 0x3A8A44u) {
        ctx->pc = 0x3A8A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A40u;
        // 0x3a8a44: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8A48u;
        goto label_3a8a48;
    }
    ctx->pc = 0x3A8A40u;
    SET_GPR_U32(ctx, 31, 0x3A8A48u);
    ctx->pc = 0x3A8A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8A40u;
    // 0x3a8a44: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444110u, 0x3A8A40u, 0x3A8A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8A48u;
label_3a8a48:
    // 0x3a8a48: 0xc111228  jal         func_4448A0
label_3a8a4c:
    if (ctx->pc == 0x3A8A4Cu) {
        ctx->pc = 0x3A8A50u;
        goto label_3a8a50;
    }
    ctx->pc = 0x3A8A48u;
    SET_GPR_U32(ctx, 31, 0x3A8A50u);
    ctx->pc = 0x4448A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4448A0u, 0x3A8A48u, 0x3A8A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8A50u;
label_3a8a50:
    // 0x3a8a50: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x3a8a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_3a8a54:
    // 0x3a8a54: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x3a8a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_3a8a58:
    // 0x3a8a58: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x3a8a58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_3a8a5c:
    // 0x3a8a5c: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x3a8a5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_3a8a60:
    // 0x3a8a60: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x3a8a60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_3a8a64:
    // 0x3a8a64: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x3a8a64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_3a8a68:
    // 0x3a8a68: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x3a8a68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_3a8a6c:
    // 0x3a8a6c: 0x7bb60130  lq          $s6, 0x130($sp)
    ctx->pc = 0x3a8a6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_3a8a70:
    // 0x3a8a70: 0x7bb70120  lq          $s7, 0x120($sp)
    ctx->pc = 0x3a8a70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_3a8a74:
    // 0x3a8a74: 0x7bbe0110  lq          $fp, 0x110($sp)
    ctx->pc = 0x3a8a74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3a8a78:
    // 0x3a8a78: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x3a8a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_3a8a7c:
    // 0x3a8a7c: 0xc7b501a8  lwc1        $f21, 0x1A8($sp)
    ctx->pc = 0x3a8a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3a8a80:
    // 0x3a8a80: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x3a8a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a8a84:
    // 0x3a8a84: 0x3e00008  jr          $ra
label_3a8a88:
    if (ctx->pc == 0x3A8A88u) {
        ctx->pc = 0x3A8A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A84u;
        // 0x3a8a88: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8A8Cu;
        goto label_3a8a8c;
    }
    ctx->pc = 0x3A8A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A8A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A84u;
        // 0x3a8a88: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A8A8Cu;
label_3a8a8c:
    // 0x3a8a8c: 0x0  nop
    ctx->pc = 0x3a8a8cu;
    // NOP
    ctx->pc = 0x3a8a90u;
}
