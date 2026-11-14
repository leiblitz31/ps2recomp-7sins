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

// Function: sub_001A3BB0
// Address: 0x1a3bb0 - 0x1a4a70
void sub_001A3BB0_0x1a3bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3BB0_0x1a3bb0");
#endif

    switch (ctx->pc) {
        case 0x1a3bb0u: goto label_1a3bb0;
        case 0x1a3bb4u: goto label_1a3bb4;
        case 0x1a3bb8u: goto label_1a3bb8;
        case 0x1a3bbcu: goto label_1a3bbc;
        case 0x1a3bc0u: goto label_1a3bc0;
        case 0x1a3bc4u: goto label_1a3bc4;
        case 0x1a3bc8u: goto label_1a3bc8;
        case 0x1a3bccu: goto label_1a3bcc;
        case 0x1a3bd0u: goto label_1a3bd0;
        case 0x1a3bd4u: goto label_1a3bd4;
        case 0x1a3bd8u: goto label_1a3bd8;
        case 0x1a3bdcu: goto label_1a3bdc;
        case 0x1a3be0u: goto label_1a3be0;
        case 0x1a3be4u: goto label_1a3be4;
        case 0x1a3be8u: goto label_1a3be8;
        case 0x1a3becu: goto label_1a3bec;
        case 0x1a3bf0u: goto label_1a3bf0;
        case 0x1a3bf4u: goto label_1a3bf4;
        case 0x1a3bf8u: goto label_1a3bf8;
        case 0x1a3bfcu: goto label_1a3bfc;
        case 0x1a3c00u: goto label_1a3c00;
        case 0x1a3c04u: goto label_1a3c04;
        case 0x1a3c08u: goto label_1a3c08;
        case 0x1a3c0cu: goto label_1a3c0c;
        case 0x1a3c10u: goto label_1a3c10;
        case 0x1a3c14u: goto label_1a3c14;
        case 0x1a3c18u: goto label_1a3c18;
        case 0x1a3c1cu: goto label_1a3c1c;
        case 0x1a3c20u: goto label_1a3c20;
        case 0x1a3c24u: goto label_1a3c24;
        case 0x1a3c28u: goto label_1a3c28;
        case 0x1a3c2cu: goto label_1a3c2c;
        case 0x1a3c30u: goto label_1a3c30;
        case 0x1a3c34u: goto label_1a3c34;
        case 0x1a3c38u: goto label_1a3c38;
        case 0x1a3c3cu: goto label_1a3c3c;
        case 0x1a3c40u: goto label_1a3c40;
        case 0x1a3c44u: goto label_1a3c44;
        case 0x1a3c48u: goto label_1a3c48;
        case 0x1a3c4cu: goto label_1a3c4c;
        case 0x1a3c50u: goto label_1a3c50;
        case 0x1a3c54u: goto label_1a3c54;
        case 0x1a3c58u: goto label_1a3c58;
        case 0x1a3c5cu: goto label_1a3c5c;
        case 0x1a3c60u: goto label_1a3c60;
        case 0x1a3c64u: goto label_1a3c64;
        case 0x1a3c68u: goto label_1a3c68;
        case 0x1a3c6cu: goto label_1a3c6c;
        case 0x1a3c70u: goto label_1a3c70;
        case 0x1a3c74u: goto label_1a3c74;
        case 0x1a3c78u: goto label_1a3c78;
        case 0x1a3c7cu: goto label_1a3c7c;
        case 0x1a3c80u: goto label_1a3c80;
        case 0x1a3c84u: goto label_1a3c84;
        case 0x1a3c88u: goto label_1a3c88;
        case 0x1a3c8cu: goto label_1a3c8c;
        case 0x1a3c90u: goto label_1a3c90;
        case 0x1a3c94u: goto label_1a3c94;
        case 0x1a3c98u: goto label_1a3c98;
        case 0x1a3c9cu: goto label_1a3c9c;
        case 0x1a3ca0u: goto label_1a3ca0;
        case 0x1a3ca4u: goto label_1a3ca4;
        case 0x1a3ca8u: goto label_1a3ca8;
        case 0x1a3cacu: goto label_1a3cac;
        case 0x1a3cb0u: goto label_1a3cb0;
        case 0x1a3cb4u: goto label_1a3cb4;
        case 0x1a3cb8u: goto label_1a3cb8;
        case 0x1a3cbcu: goto label_1a3cbc;
        case 0x1a3cc0u: goto label_1a3cc0;
        case 0x1a3cc4u: goto label_1a3cc4;
        case 0x1a3cc8u: goto label_1a3cc8;
        case 0x1a3cccu: goto label_1a3ccc;
        case 0x1a3cd0u: goto label_1a3cd0;
        case 0x1a3cd4u: goto label_1a3cd4;
        case 0x1a3cd8u: goto label_1a3cd8;
        case 0x1a3cdcu: goto label_1a3cdc;
        case 0x1a3ce0u: goto label_1a3ce0;
        case 0x1a3ce4u: goto label_1a3ce4;
        case 0x1a3ce8u: goto label_1a3ce8;
        case 0x1a3cecu: goto label_1a3cec;
        case 0x1a3cf0u: goto label_1a3cf0;
        case 0x1a3cf4u: goto label_1a3cf4;
        case 0x1a3cf8u: goto label_1a3cf8;
        case 0x1a3cfcu: goto label_1a3cfc;
        case 0x1a3d00u: goto label_1a3d00;
        case 0x1a3d04u: goto label_1a3d04;
        case 0x1a3d08u: goto label_1a3d08;
        case 0x1a3d0cu: goto label_1a3d0c;
        case 0x1a3d10u: goto label_1a3d10;
        case 0x1a3d14u: goto label_1a3d14;
        case 0x1a3d18u: goto label_1a3d18;
        case 0x1a3d1cu: goto label_1a3d1c;
        case 0x1a3d20u: goto label_1a3d20;
        case 0x1a3d24u: goto label_1a3d24;
        case 0x1a3d28u: goto label_1a3d28;
        case 0x1a3d2cu: goto label_1a3d2c;
        case 0x1a3d30u: goto label_1a3d30;
        case 0x1a3d34u: goto label_1a3d34;
        case 0x1a3d38u: goto label_1a3d38;
        case 0x1a3d3cu: goto label_1a3d3c;
        case 0x1a3d40u: goto label_1a3d40;
        case 0x1a3d44u: goto label_1a3d44;
        case 0x1a3d48u: goto label_1a3d48;
        case 0x1a3d4cu: goto label_1a3d4c;
        case 0x1a3d50u: goto label_1a3d50;
        case 0x1a3d54u: goto label_1a3d54;
        case 0x1a3d58u: goto label_1a3d58;
        case 0x1a3d5cu: goto label_1a3d5c;
        case 0x1a3d60u: goto label_1a3d60;
        case 0x1a3d64u: goto label_1a3d64;
        case 0x1a3d68u: goto label_1a3d68;
        case 0x1a3d6cu: goto label_1a3d6c;
        case 0x1a3d70u: goto label_1a3d70;
        case 0x1a3d74u: goto label_1a3d74;
        case 0x1a3d78u: goto label_1a3d78;
        case 0x1a3d7cu: goto label_1a3d7c;
        case 0x1a3d80u: goto label_1a3d80;
        case 0x1a3d84u: goto label_1a3d84;
        case 0x1a3d88u: goto label_1a3d88;
        case 0x1a3d8cu: goto label_1a3d8c;
        case 0x1a3d90u: goto label_1a3d90;
        case 0x1a3d94u: goto label_1a3d94;
        case 0x1a3d98u: goto label_1a3d98;
        case 0x1a3d9cu: goto label_1a3d9c;
        case 0x1a3da0u: goto label_1a3da0;
        case 0x1a3da4u: goto label_1a3da4;
        case 0x1a3da8u: goto label_1a3da8;
        case 0x1a3dacu: goto label_1a3dac;
        case 0x1a3db0u: goto label_1a3db0;
        case 0x1a3db4u: goto label_1a3db4;
        case 0x1a3db8u: goto label_1a3db8;
        case 0x1a3dbcu: goto label_1a3dbc;
        case 0x1a3dc0u: goto label_1a3dc0;
        case 0x1a3dc4u: goto label_1a3dc4;
        case 0x1a3dc8u: goto label_1a3dc8;
        case 0x1a3dccu: goto label_1a3dcc;
        case 0x1a3dd0u: goto label_1a3dd0;
        case 0x1a3dd4u: goto label_1a3dd4;
        case 0x1a3dd8u: goto label_1a3dd8;
        case 0x1a3ddcu: goto label_1a3ddc;
        case 0x1a3de0u: goto label_1a3de0;
        case 0x1a3de4u: goto label_1a3de4;
        case 0x1a3de8u: goto label_1a3de8;
        case 0x1a3decu: goto label_1a3dec;
        case 0x1a3df0u: goto label_1a3df0;
        case 0x1a3df4u: goto label_1a3df4;
        case 0x1a3df8u: goto label_1a3df8;
        case 0x1a3dfcu: goto label_1a3dfc;
        case 0x1a3e00u: goto label_1a3e00;
        case 0x1a3e04u: goto label_1a3e04;
        case 0x1a3e08u: goto label_1a3e08;
        case 0x1a3e0cu: goto label_1a3e0c;
        case 0x1a3e10u: goto label_1a3e10;
        case 0x1a3e14u: goto label_1a3e14;
        case 0x1a3e18u: goto label_1a3e18;
        case 0x1a3e1cu: goto label_1a3e1c;
        case 0x1a3e20u: goto label_1a3e20;
        case 0x1a3e24u: goto label_1a3e24;
        case 0x1a3e28u: goto label_1a3e28;
        case 0x1a3e2cu: goto label_1a3e2c;
        case 0x1a3e30u: goto label_1a3e30;
        case 0x1a3e34u: goto label_1a3e34;
        case 0x1a3e38u: goto label_1a3e38;
        case 0x1a3e3cu: goto label_1a3e3c;
        case 0x1a3e40u: goto label_1a3e40;
        case 0x1a3e44u: goto label_1a3e44;
        case 0x1a3e48u: goto label_1a3e48;
        case 0x1a3e4cu: goto label_1a3e4c;
        case 0x1a3e50u: goto label_1a3e50;
        case 0x1a3e54u: goto label_1a3e54;
        case 0x1a3e58u: goto label_1a3e58;
        case 0x1a3e5cu: goto label_1a3e5c;
        case 0x1a3e60u: goto label_1a3e60;
        case 0x1a3e64u: goto label_1a3e64;
        case 0x1a3e68u: goto label_1a3e68;
        case 0x1a3e6cu: goto label_1a3e6c;
        case 0x1a3e70u: goto label_1a3e70;
        case 0x1a3e74u: goto label_1a3e74;
        case 0x1a3e78u: goto label_1a3e78;
        case 0x1a3e7cu: goto label_1a3e7c;
        case 0x1a3e80u: goto label_1a3e80;
        case 0x1a3e84u: goto label_1a3e84;
        case 0x1a3e88u: goto label_1a3e88;
        case 0x1a3e8cu: goto label_1a3e8c;
        case 0x1a3e90u: goto label_1a3e90;
        case 0x1a3e94u: goto label_1a3e94;
        case 0x1a3e98u: goto label_1a3e98;
        case 0x1a3e9cu: goto label_1a3e9c;
        case 0x1a3ea0u: goto label_1a3ea0;
        case 0x1a3ea4u: goto label_1a3ea4;
        case 0x1a3ea8u: goto label_1a3ea8;
        case 0x1a3eacu: goto label_1a3eac;
        case 0x1a3eb0u: goto label_1a3eb0;
        case 0x1a3eb4u: goto label_1a3eb4;
        case 0x1a3eb8u: goto label_1a3eb8;
        case 0x1a3ebcu: goto label_1a3ebc;
        case 0x1a3ec0u: goto label_1a3ec0;
        case 0x1a3ec4u: goto label_1a3ec4;
        case 0x1a3ec8u: goto label_1a3ec8;
        case 0x1a3eccu: goto label_1a3ecc;
        case 0x1a3ed0u: goto label_1a3ed0;
        case 0x1a3ed4u: goto label_1a3ed4;
        case 0x1a3ed8u: goto label_1a3ed8;
        case 0x1a3edcu: goto label_1a3edc;
        case 0x1a3ee0u: goto label_1a3ee0;
        case 0x1a3ee4u: goto label_1a3ee4;
        case 0x1a3ee8u: goto label_1a3ee8;
        case 0x1a3eecu: goto label_1a3eec;
        case 0x1a3ef0u: goto label_1a3ef0;
        case 0x1a3ef4u: goto label_1a3ef4;
        case 0x1a3ef8u: goto label_1a3ef8;
        case 0x1a3efcu: goto label_1a3efc;
        case 0x1a3f00u: goto label_1a3f00;
        case 0x1a3f04u: goto label_1a3f04;
        case 0x1a3f08u: goto label_1a3f08;
        case 0x1a3f0cu: goto label_1a3f0c;
        case 0x1a3f10u: goto label_1a3f10;
        case 0x1a3f14u: goto label_1a3f14;
        case 0x1a3f18u: goto label_1a3f18;
        case 0x1a3f1cu: goto label_1a3f1c;
        case 0x1a3f20u: goto label_1a3f20;
        case 0x1a3f24u: goto label_1a3f24;
        case 0x1a3f28u: goto label_1a3f28;
        case 0x1a3f2cu: goto label_1a3f2c;
        case 0x1a3f30u: goto label_1a3f30;
        case 0x1a3f34u: goto label_1a3f34;
        case 0x1a3f38u: goto label_1a3f38;
        case 0x1a3f3cu: goto label_1a3f3c;
        case 0x1a3f40u: goto label_1a3f40;
        case 0x1a3f44u: goto label_1a3f44;
        case 0x1a3f48u: goto label_1a3f48;
        case 0x1a3f4cu: goto label_1a3f4c;
        case 0x1a3f50u: goto label_1a3f50;
        case 0x1a3f54u: goto label_1a3f54;
        case 0x1a3f58u: goto label_1a3f58;
        case 0x1a3f5cu: goto label_1a3f5c;
        case 0x1a3f60u: goto label_1a3f60;
        case 0x1a3f64u: goto label_1a3f64;
        case 0x1a3f68u: goto label_1a3f68;
        case 0x1a3f6cu: goto label_1a3f6c;
        case 0x1a3f70u: goto label_1a3f70;
        case 0x1a3f74u: goto label_1a3f74;
        case 0x1a3f78u: goto label_1a3f78;
        case 0x1a3f7cu: goto label_1a3f7c;
        case 0x1a3f80u: goto label_1a3f80;
        case 0x1a3f84u: goto label_1a3f84;
        case 0x1a3f88u: goto label_1a3f88;
        case 0x1a3f8cu: goto label_1a3f8c;
        case 0x1a3f90u: goto label_1a3f90;
        case 0x1a3f94u: goto label_1a3f94;
        case 0x1a3f98u: goto label_1a3f98;
        case 0x1a3f9cu: goto label_1a3f9c;
        case 0x1a3fa0u: goto label_1a3fa0;
        case 0x1a3fa4u: goto label_1a3fa4;
        case 0x1a3fa8u: goto label_1a3fa8;
        case 0x1a3facu: goto label_1a3fac;
        case 0x1a3fb0u: goto label_1a3fb0;
        case 0x1a3fb4u: goto label_1a3fb4;
        case 0x1a3fb8u: goto label_1a3fb8;
        case 0x1a3fbcu: goto label_1a3fbc;
        case 0x1a3fc0u: goto label_1a3fc0;
        case 0x1a3fc4u: goto label_1a3fc4;
        case 0x1a3fc8u: goto label_1a3fc8;
        case 0x1a3fccu: goto label_1a3fcc;
        case 0x1a3fd0u: goto label_1a3fd0;
        case 0x1a3fd4u: goto label_1a3fd4;
        case 0x1a3fd8u: goto label_1a3fd8;
        case 0x1a3fdcu: goto label_1a3fdc;
        case 0x1a3fe0u: goto label_1a3fe0;
        case 0x1a3fe4u: goto label_1a3fe4;
        case 0x1a3fe8u: goto label_1a3fe8;
        case 0x1a3fecu: goto label_1a3fec;
        case 0x1a3ff0u: goto label_1a3ff0;
        case 0x1a3ff4u: goto label_1a3ff4;
        case 0x1a3ff8u: goto label_1a3ff8;
        case 0x1a3ffcu: goto label_1a3ffc;
        case 0x1a4000u: goto label_1a4000;
        case 0x1a4004u: goto label_1a4004;
        case 0x1a4008u: goto label_1a4008;
        case 0x1a400cu: goto label_1a400c;
        case 0x1a4010u: goto label_1a4010;
        case 0x1a4014u: goto label_1a4014;
        case 0x1a4018u: goto label_1a4018;
        case 0x1a401cu: goto label_1a401c;
        case 0x1a4020u: goto label_1a4020;
        case 0x1a4024u: goto label_1a4024;
        case 0x1a4028u: goto label_1a4028;
        case 0x1a402cu: goto label_1a402c;
        case 0x1a4030u: goto label_1a4030;
        case 0x1a4034u: goto label_1a4034;
        case 0x1a4038u: goto label_1a4038;
        case 0x1a403cu: goto label_1a403c;
        case 0x1a4040u: goto label_1a4040;
        case 0x1a4044u: goto label_1a4044;
        case 0x1a4048u: goto label_1a4048;
        case 0x1a404cu: goto label_1a404c;
        case 0x1a4050u: goto label_1a4050;
        case 0x1a4054u: goto label_1a4054;
        case 0x1a4058u: goto label_1a4058;
        case 0x1a405cu: goto label_1a405c;
        case 0x1a4060u: goto label_1a4060;
        case 0x1a4064u: goto label_1a4064;
        case 0x1a4068u: goto label_1a4068;
        case 0x1a406cu: goto label_1a406c;
        case 0x1a4070u: goto label_1a4070;
        case 0x1a4074u: goto label_1a4074;
        case 0x1a4078u: goto label_1a4078;
        case 0x1a407cu: goto label_1a407c;
        case 0x1a4080u: goto label_1a4080;
        case 0x1a4084u: goto label_1a4084;
        case 0x1a4088u: goto label_1a4088;
        case 0x1a408cu: goto label_1a408c;
        case 0x1a4090u: goto label_1a4090;
        case 0x1a4094u: goto label_1a4094;
        case 0x1a4098u: goto label_1a4098;
        case 0x1a409cu: goto label_1a409c;
        case 0x1a40a0u: goto label_1a40a0;
        case 0x1a40a4u: goto label_1a40a4;
        case 0x1a40a8u: goto label_1a40a8;
        case 0x1a40acu: goto label_1a40ac;
        case 0x1a40b0u: goto label_1a40b0;
        case 0x1a40b4u: goto label_1a40b4;
        case 0x1a40b8u: goto label_1a40b8;
        case 0x1a40bcu: goto label_1a40bc;
        case 0x1a40c0u: goto label_1a40c0;
        case 0x1a40c4u: goto label_1a40c4;
        case 0x1a40c8u: goto label_1a40c8;
        case 0x1a40ccu: goto label_1a40cc;
        case 0x1a40d0u: goto label_1a40d0;
        case 0x1a40d4u: goto label_1a40d4;
        case 0x1a40d8u: goto label_1a40d8;
        case 0x1a40dcu: goto label_1a40dc;
        case 0x1a40e0u: goto label_1a40e0;
        case 0x1a40e4u: goto label_1a40e4;
        case 0x1a40e8u: goto label_1a40e8;
        case 0x1a40ecu: goto label_1a40ec;
        case 0x1a40f0u: goto label_1a40f0;
        case 0x1a40f4u: goto label_1a40f4;
        case 0x1a40f8u: goto label_1a40f8;
        case 0x1a40fcu: goto label_1a40fc;
        case 0x1a4100u: goto label_1a4100;
        case 0x1a4104u: goto label_1a4104;
        case 0x1a4108u: goto label_1a4108;
        case 0x1a410cu: goto label_1a410c;
        case 0x1a4110u: goto label_1a4110;
        case 0x1a4114u: goto label_1a4114;
        case 0x1a4118u: goto label_1a4118;
        case 0x1a411cu: goto label_1a411c;
        case 0x1a4120u: goto label_1a4120;
        case 0x1a4124u: goto label_1a4124;
        case 0x1a4128u: goto label_1a4128;
        case 0x1a412cu: goto label_1a412c;
        case 0x1a4130u: goto label_1a4130;
        case 0x1a4134u: goto label_1a4134;
        case 0x1a4138u: goto label_1a4138;
        case 0x1a413cu: goto label_1a413c;
        case 0x1a4140u: goto label_1a4140;
        case 0x1a4144u: goto label_1a4144;
        case 0x1a4148u: goto label_1a4148;
        case 0x1a414cu: goto label_1a414c;
        case 0x1a4150u: goto label_1a4150;
        case 0x1a4154u: goto label_1a4154;
        case 0x1a4158u: goto label_1a4158;
        case 0x1a415cu: goto label_1a415c;
        case 0x1a4160u: goto label_1a4160;
        case 0x1a4164u: goto label_1a4164;
        case 0x1a4168u: goto label_1a4168;
        case 0x1a416cu: goto label_1a416c;
        case 0x1a4170u: goto label_1a4170;
        case 0x1a4174u: goto label_1a4174;
        case 0x1a4178u: goto label_1a4178;
        case 0x1a417cu: goto label_1a417c;
        case 0x1a4180u: goto label_1a4180;
        case 0x1a4184u: goto label_1a4184;
        case 0x1a4188u: goto label_1a4188;
        case 0x1a418cu: goto label_1a418c;
        case 0x1a4190u: goto label_1a4190;
        case 0x1a4194u: goto label_1a4194;
        case 0x1a4198u: goto label_1a4198;
        case 0x1a419cu: goto label_1a419c;
        case 0x1a41a0u: goto label_1a41a0;
        case 0x1a41a4u: goto label_1a41a4;
        case 0x1a41a8u: goto label_1a41a8;
        case 0x1a41acu: goto label_1a41ac;
        case 0x1a41b0u: goto label_1a41b0;
        case 0x1a41b4u: goto label_1a41b4;
        case 0x1a41b8u: goto label_1a41b8;
        case 0x1a41bcu: goto label_1a41bc;
        case 0x1a41c0u: goto label_1a41c0;
        case 0x1a41c4u: goto label_1a41c4;
        case 0x1a41c8u: goto label_1a41c8;
        case 0x1a41ccu: goto label_1a41cc;
        case 0x1a41d0u: goto label_1a41d0;
        case 0x1a41d4u: goto label_1a41d4;
        case 0x1a41d8u: goto label_1a41d8;
        case 0x1a41dcu: goto label_1a41dc;
        case 0x1a41e0u: goto label_1a41e0;
        case 0x1a41e4u: goto label_1a41e4;
        case 0x1a41e8u: goto label_1a41e8;
        case 0x1a41ecu: goto label_1a41ec;
        case 0x1a41f0u: goto label_1a41f0;
        case 0x1a41f4u: goto label_1a41f4;
        case 0x1a41f8u: goto label_1a41f8;
        case 0x1a41fcu: goto label_1a41fc;
        case 0x1a4200u: goto label_1a4200;
        case 0x1a4204u: goto label_1a4204;
        case 0x1a4208u: goto label_1a4208;
        case 0x1a420cu: goto label_1a420c;
        case 0x1a4210u: goto label_1a4210;
        case 0x1a4214u: goto label_1a4214;
        case 0x1a4218u: goto label_1a4218;
        case 0x1a421cu: goto label_1a421c;
        case 0x1a4220u: goto label_1a4220;
        case 0x1a4224u: goto label_1a4224;
        case 0x1a4228u: goto label_1a4228;
        case 0x1a422cu: goto label_1a422c;
        case 0x1a4230u: goto label_1a4230;
        case 0x1a4234u: goto label_1a4234;
        case 0x1a4238u: goto label_1a4238;
        case 0x1a423cu: goto label_1a423c;
        case 0x1a4240u: goto label_1a4240;
        case 0x1a4244u: goto label_1a4244;
        case 0x1a4248u: goto label_1a4248;
        case 0x1a424cu: goto label_1a424c;
        case 0x1a4250u: goto label_1a4250;
        case 0x1a4254u: goto label_1a4254;
        case 0x1a4258u: goto label_1a4258;
        case 0x1a425cu: goto label_1a425c;
        case 0x1a4260u: goto label_1a4260;
        case 0x1a4264u: goto label_1a4264;
        case 0x1a4268u: goto label_1a4268;
        case 0x1a426cu: goto label_1a426c;
        case 0x1a4270u: goto label_1a4270;
        case 0x1a4274u: goto label_1a4274;
        case 0x1a4278u: goto label_1a4278;
        case 0x1a427cu: goto label_1a427c;
        case 0x1a4280u: goto label_1a4280;
        case 0x1a4284u: goto label_1a4284;
        case 0x1a4288u: goto label_1a4288;
        case 0x1a428cu: goto label_1a428c;
        case 0x1a4290u: goto label_1a4290;
        case 0x1a4294u: goto label_1a4294;
        case 0x1a4298u: goto label_1a4298;
        case 0x1a429cu: goto label_1a429c;
        case 0x1a42a0u: goto label_1a42a0;
        case 0x1a42a4u: goto label_1a42a4;
        case 0x1a42a8u: goto label_1a42a8;
        case 0x1a42acu: goto label_1a42ac;
        case 0x1a42b0u: goto label_1a42b0;
        case 0x1a42b4u: goto label_1a42b4;
        case 0x1a42b8u: goto label_1a42b8;
        case 0x1a42bcu: goto label_1a42bc;
        case 0x1a42c0u: goto label_1a42c0;
        case 0x1a42c4u: goto label_1a42c4;
        case 0x1a42c8u: goto label_1a42c8;
        case 0x1a42ccu: goto label_1a42cc;
        case 0x1a42d0u: goto label_1a42d0;
        case 0x1a42d4u: goto label_1a42d4;
        case 0x1a42d8u: goto label_1a42d8;
        case 0x1a42dcu: goto label_1a42dc;
        case 0x1a42e0u: goto label_1a42e0;
        case 0x1a42e4u: goto label_1a42e4;
        case 0x1a42e8u: goto label_1a42e8;
        case 0x1a42ecu: goto label_1a42ec;
        case 0x1a42f0u: goto label_1a42f0;
        case 0x1a42f4u: goto label_1a42f4;
        case 0x1a42f8u: goto label_1a42f8;
        case 0x1a42fcu: goto label_1a42fc;
        case 0x1a4300u: goto label_1a4300;
        case 0x1a4304u: goto label_1a4304;
        case 0x1a4308u: goto label_1a4308;
        case 0x1a430cu: goto label_1a430c;
        case 0x1a4310u: goto label_1a4310;
        case 0x1a4314u: goto label_1a4314;
        case 0x1a4318u: goto label_1a4318;
        case 0x1a431cu: goto label_1a431c;
        case 0x1a4320u: goto label_1a4320;
        case 0x1a4324u: goto label_1a4324;
        case 0x1a4328u: goto label_1a4328;
        case 0x1a432cu: goto label_1a432c;
        case 0x1a4330u: goto label_1a4330;
        case 0x1a4334u: goto label_1a4334;
        case 0x1a4338u: goto label_1a4338;
        case 0x1a433cu: goto label_1a433c;
        case 0x1a4340u: goto label_1a4340;
        case 0x1a4344u: goto label_1a4344;
        case 0x1a4348u: goto label_1a4348;
        case 0x1a434cu: goto label_1a434c;
        case 0x1a4350u: goto label_1a4350;
        case 0x1a4354u: goto label_1a4354;
        case 0x1a4358u: goto label_1a4358;
        case 0x1a435cu: goto label_1a435c;
        case 0x1a4360u: goto label_1a4360;
        case 0x1a4364u: goto label_1a4364;
        case 0x1a4368u: goto label_1a4368;
        case 0x1a436cu: goto label_1a436c;
        case 0x1a4370u: goto label_1a4370;
        case 0x1a4374u: goto label_1a4374;
        case 0x1a4378u: goto label_1a4378;
        case 0x1a437cu: goto label_1a437c;
        case 0x1a4380u: goto label_1a4380;
        case 0x1a4384u: goto label_1a4384;
        case 0x1a4388u: goto label_1a4388;
        case 0x1a438cu: goto label_1a438c;
        case 0x1a4390u: goto label_1a4390;
        case 0x1a4394u: goto label_1a4394;
        case 0x1a4398u: goto label_1a4398;
        case 0x1a439cu: goto label_1a439c;
        case 0x1a43a0u: goto label_1a43a0;
        case 0x1a43a4u: goto label_1a43a4;
        case 0x1a43a8u: goto label_1a43a8;
        case 0x1a43acu: goto label_1a43ac;
        case 0x1a43b0u: goto label_1a43b0;
        case 0x1a43b4u: goto label_1a43b4;
        case 0x1a43b8u: goto label_1a43b8;
        case 0x1a43bcu: goto label_1a43bc;
        case 0x1a43c0u: goto label_1a43c0;
        case 0x1a43c4u: goto label_1a43c4;
        case 0x1a43c8u: goto label_1a43c8;
        case 0x1a43ccu: goto label_1a43cc;
        case 0x1a43d0u: goto label_1a43d0;
        case 0x1a43d4u: goto label_1a43d4;
        case 0x1a43d8u: goto label_1a43d8;
        case 0x1a43dcu: goto label_1a43dc;
        case 0x1a43e0u: goto label_1a43e0;
        case 0x1a43e4u: goto label_1a43e4;
        case 0x1a43e8u: goto label_1a43e8;
        case 0x1a43ecu: goto label_1a43ec;
        case 0x1a43f0u: goto label_1a43f0;
        case 0x1a43f4u: goto label_1a43f4;
        case 0x1a43f8u: goto label_1a43f8;
        case 0x1a43fcu: goto label_1a43fc;
        case 0x1a4400u: goto label_1a4400;
        case 0x1a4404u: goto label_1a4404;
        case 0x1a4408u: goto label_1a4408;
        case 0x1a440cu: goto label_1a440c;
        case 0x1a4410u: goto label_1a4410;
        case 0x1a4414u: goto label_1a4414;
        case 0x1a4418u: goto label_1a4418;
        case 0x1a441cu: goto label_1a441c;
        case 0x1a4420u: goto label_1a4420;
        case 0x1a4424u: goto label_1a4424;
        case 0x1a4428u: goto label_1a4428;
        case 0x1a442cu: goto label_1a442c;
        case 0x1a4430u: goto label_1a4430;
        case 0x1a4434u: goto label_1a4434;
        case 0x1a4438u: goto label_1a4438;
        case 0x1a443cu: goto label_1a443c;
        case 0x1a4440u: goto label_1a4440;
        case 0x1a4444u: goto label_1a4444;
        case 0x1a4448u: goto label_1a4448;
        case 0x1a444cu: goto label_1a444c;
        case 0x1a4450u: goto label_1a4450;
        case 0x1a4454u: goto label_1a4454;
        case 0x1a4458u: goto label_1a4458;
        case 0x1a445cu: goto label_1a445c;
        case 0x1a4460u: goto label_1a4460;
        case 0x1a4464u: goto label_1a4464;
        case 0x1a4468u: goto label_1a4468;
        case 0x1a446cu: goto label_1a446c;
        case 0x1a4470u: goto label_1a4470;
        case 0x1a4474u: goto label_1a4474;
        case 0x1a4478u: goto label_1a4478;
        case 0x1a447cu: goto label_1a447c;
        case 0x1a4480u: goto label_1a4480;
        case 0x1a4484u: goto label_1a4484;
        case 0x1a4488u: goto label_1a4488;
        case 0x1a448cu: goto label_1a448c;
        case 0x1a4490u: goto label_1a4490;
        case 0x1a4494u: goto label_1a4494;
        case 0x1a4498u: goto label_1a4498;
        case 0x1a449cu: goto label_1a449c;
        case 0x1a44a0u: goto label_1a44a0;
        case 0x1a44a4u: goto label_1a44a4;
        case 0x1a44a8u: goto label_1a44a8;
        case 0x1a44acu: goto label_1a44ac;
        case 0x1a44b0u: goto label_1a44b0;
        case 0x1a44b4u: goto label_1a44b4;
        case 0x1a44b8u: goto label_1a44b8;
        case 0x1a44bcu: goto label_1a44bc;
        case 0x1a44c0u: goto label_1a44c0;
        case 0x1a44c4u: goto label_1a44c4;
        case 0x1a44c8u: goto label_1a44c8;
        case 0x1a44ccu: goto label_1a44cc;
        case 0x1a44d0u: goto label_1a44d0;
        case 0x1a44d4u: goto label_1a44d4;
        case 0x1a44d8u: goto label_1a44d8;
        case 0x1a44dcu: goto label_1a44dc;
        case 0x1a44e0u: goto label_1a44e0;
        case 0x1a44e4u: goto label_1a44e4;
        case 0x1a44e8u: goto label_1a44e8;
        case 0x1a44ecu: goto label_1a44ec;
        case 0x1a44f0u: goto label_1a44f0;
        case 0x1a44f4u: goto label_1a44f4;
        case 0x1a44f8u: goto label_1a44f8;
        case 0x1a44fcu: goto label_1a44fc;
        case 0x1a4500u: goto label_1a4500;
        case 0x1a4504u: goto label_1a4504;
        case 0x1a4508u: goto label_1a4508;
        case 0x1a450cu: goto label_1a450c;
        case 0x1a4510u: goto label_1a4510;
        case 0x1a4514u: goto label_1a4514;
        case 0x1a4518u: goto label_1a4518;
        case 0x1a451cu: goto label_1a451c;
        case 0x1a4520u: goto label_1a4520;
        case 0x1a4524u: goto label_1a4524;
        case 0x1a4528u: goto label_1a4528;
        case 0x1a452cu: goto label_1a452c;
        case 0x1a4530u: goto label_1a4530;
        case 0x1a4534u: goto label_1a4534;
        case 0x1a4538u: goto label_1a4538;
        case 0x1a453cu: goto label_1a453c;
        case 0x1a4540u: goto label_1a4540;
        case 0x1a4544u: goto label_1a4544;
        case 0x1a4548u: goto label_1a4548;
        case 0x1a454cu: goto label_1a454c;
        case 0x1a4550u: goto label_1a4550;
        case 0x1a4554u: goto label_1a4554;
        case 0x1a4558u: goto label_1a4558;
        case 0x1a455cu: goto label_1a455c;
        case 0x1a4560u: goto label_1a4560;
        case 0x1a4564u: goto label_1a4564;
        case 0x1a4568u: goto label_1a4568;
        case 0x1a456cu: goto label_1a456c;
        case 0x1a4570u: goto label_1a4570;
        case 0x1a4574u: goto label_1a4574;
        case 0x1a4578u: goto label_1a4578;
        case 0x1a457cu: goto label_1a457c;
        case 0x1a4580u: goto label_1a4580;
        case 0x1a4584u: goto label_1a4584;
        case 0x1a4588u: goto label_1a4588;
        case 0x1a458cu: goto label_1a458c;
        case 0x1a4590u: goto label_1a4590;
        case 0x1a4594u: goto label_1a4594;
        case 0x1a4598u: goto label_1a4598;
        case 0x1a459cu: goto label_1a459c;
        case 0x1a45a0u: goto label_1a45a0;
        case 0x1a45a4u: goto label_1a45a4;
        case 0x1a45a8u: goto label_1a45a8;
        case 0x1a45acu: goto label_1a45ac;
        case 0x1a45b0u: goto label_1a45b0;
        case 0x1a45b4u: goto label_1a45b4;
        case 0x1a45b8u: goto label_1a45b8;
        case 0x1a45bcu: goto label_1a45bc;
        case 0x1a45c0u: goto label_1a45c0;
        case 0x1a45c4u: goto label_1a45c4;
        case 0x1a45c8u: goto label_1a45c8;
        case 0x1a45ccu: goto label_1a45cc;
        case 0x1a45d0u: goto label_1a45d0;
        case 0x1a45d4u: goto label_1a45d4;
        case 0x1a45d8u: goto label_1a45d8;
        case 0x1a45dcu: goto label_1a45dc;
        case 0x1a45e0u: goto label_1a45e0;
        case 0x1a45e4u: goto label_1a45e4;
        case 0x1a45e8u: goto label_1a45e8;
        case 0x1a45ecu: goto label_1a45ec;
        case 0x1a45f0u: goto label_1a45f0;
        case 0x1a45f4u: goto label_1a45f4;
        case 0x1a45f8u: goto label_1a45f8;
        case 0x1a45fcu: goto label_1a45fc;
        case 0x1a4600u: goto label_1a4600;
        case 0x1a4604u: goto label_1a4604;
        case 0x1a4608u: goto label_1a4608;
        case 0x1a460cu: goto label_1a460c;
        case 0x1a4610u: goto label_1a4610;
        case 0x1a4614u: goto label_1a4614;
        case 0x1a4618u: goto label_1a4618;
        case 0x1a461cu: goto label_1a461c;
        case 0x1a4620u: goto label_1a4620;
        case 0x1a4624u: goto label_1a4624;
        case 0x1a4628u: goto label_1a4628;
        case 0x1a462cu: goto label_1a462c;
        case 0x1a4630u: goto label_1a4630;
        case 0x1a4634u: goto label_1a4634;
        case 0x1a4638u: goto label_1a4638;
        case 0x1a463cu: goto label_1a463c;
        case 0x1a4640u: goto label_1a4640;
        case 0x1a4644u: goto label_1a4644;
        case 0x1a4648u: goto label_1a4648;
        case 0x1a464cu: goto label_1a464c;
        case 0x1a4650u: goto label_1a4650;
        case 0x1a4654u: goto label_1a4654;
        case 0x1a4658u: goto label_1a4658;
        case 0x1a465cu: goto label_1a465c;
        case 0x1a4660u: goto label_1a4660;
        case 0x1a4664u: goto label_1a4664;
        case 0x1a4668u: goto label_1a4668;
        case 0x1a466cu: goto label_1a466c;
        case 0x1a4670u: goto label_1a4670;
        case 0x1a4674u: goto label_1a4674;
        case 0x1a4678u: goto label_1a4678;
        case 0x1a467cu: goto label_1a467c;
        case 0x1a4680u: goto label_1a4680;
        case 0x1a4684u: goto label_1a4684;
        case 0x1a4688u: goto label_1a4688;
        case 0x1a468cu: goto label_1a468c;
        case 0x1a4690u: goto label_1a4690;
        case 0x1a4694u: goto label_1a4694;
        case 0x1a4698u: goto label_1a4698;
        case 0x1a469cu: goto label_1a469c;
        case 0x1a46a0u: goto label_1a46a0;
        case 0x1a46a4u: goto label_1a46a4;
        case 0x1a46a8u: goto label_1a46a8;
        case 0x1a46acu: goto label_1a46ac;
        case 0x1a46b0u: goto label_1a46b0;
        case 0x1a46b4u: goto label_1a46b4;
        case 0x1a46b8u: goto label_1a46b8;
        case 0x1a46bcu: goto label_1a46bc;
        case 0x1a46c0u: goto label_1a46c0;
        case 0x1a46c4u: goto label_1a46c4;
        case 0x1a46c8u: goto label_1a46c8;
        case 0x1a46ccu: goto label_1a46cc;
        case 0x1a46d0u: goto label_1a46d0;
        case 0x1a46d4u: goto label_1a46d4;
        case 0x1a46d8u: goto label_1a46d8;
        case 0x1a46dcu: goto label_1a46dc;
        case 0x1a46e0u: goto label_1a46e0;
        case 0x1a46e4u: goto label_1a46e4;
        case 0x1a46e8u: goto label_1a46e8;
        case 0x1a46ecu: goto label_1a46ec;
        case 0x1a46f0u: goto label_1a46f0;
        case 0x1a46f4u: goto label_1a46f4;
        case 0x1a46f8u: goto label_1a46f8;
        case 0x1a46fcu: goto label_1a46fc;
        case 0x1a4700u: goto label_1a4700;
        case 0x1a4704u: goto label_1a4704;
        case 0x1a4708u: goto label_1a4708;
        case 0x1a470cu: goto label_1a470c;
        case 0x1a4710u: goto label_1a4710;
        case 0x1a4714u: goto label_1a4714;
        case 0x1a4718u: goto label_1a4718;
        case 0x1a471cu: goto label_1a471c;
        case 0x1a4720u: goto label_1a4720;
        case 0x1a4724u: goto label_1a4724;
        case 0x1a4728u: goto label_1a4728;
        case 0x1a472cu: goto label_1a472c;
        case 0x1a4730u: goto label_1a4730;
        case 0x1a4734u: goto label_1a4734;
        case 0x1a4738u: goto label_1a4738;
        case 0x1a473cu: goto label_1a473c;
        case 0x1a4740u: goto label_1a4740;
        case 0x1a4744u: goto label_1a4744;
        case 0x1a4748u: goto label_1a4748;
        case 0x1a474cu: goto label_1a474c;
        case 0x1a4750u: goto label_1a4750;
        case 0x1a4754u: goto label_1a4754;
        case 0x1a4758u: goto label_1a4758;
        case 0x1a475cu: goto label_1a475c;
        case 0x1a4760u: goto label_1a4760;
        case 0x1a4764u: goto label_1a4764;
        case 0x1a4768u: goto label_1a4768;
        case 0x1a476cu: goto label_1a476c;
        case 0x1a4770u: goto label_1a4770;
        case 0x1a4774u: goto label_1a4774;
        case 0x1a4778u: goto label_1a4778;
        case 0x1a477cu: goto label_1a477c;
        case 0x1a4780u: goto label_1a4780;
        case 0x1a4784u: goto label_1a4784;
        case 0x1a4788u: goto label_1a4788;
        case 0x1a478cu: goto label_1a478c;
        case 0x1a4790u: goto label_1a4790;
        case 0x1a4794u: goto label_1a4794;
        case 0x1a4798u: goto label_1a4798;
        case 0x1a479cu: goto label_1a479c;
        case 0x1a47a0u: goto label_1a47a0;
        case 0x1a47a4u: goto label_1a47a4;
        case 0x1a47a8u: goto label_1a47a8;
        case 0x1a47acu: goto label_1a47ac;
        case 0x1a47b0u: goto label_1a47b0;
        case 0x1a47b4u: goto label_1a47b4;
        case 0x1a47b8u: goto label_1a47b8;
        case 0x1a47bcu: goto label_1a47bc;
        case 0x1a47c0u: goto label_1a47c0;
        case 0x1a47c4u: goto label_1a47c4;
        case 0x1a47c8u: goto label_1a47c8;
        case 0x1a47ccu: goto label_1a47cc;
        case 0x1a47d0u: goto label_1a47d0;
        case 0x1a47d4u: goto label_1a47d4;
        case 0x1a47d8u: goto label_1a47d8;
        case 0x1a47dcu: goto label_1a47dc;
        case 0x1a47e0u: goto label_1a47e0;
        case 0x1a47e4u: goto label_1a47e4;
        case 0x1a47e8u: goto label_1a47e8;
        case 0x1a47ecu: goto label_1a47ec;
        case 0x1a47f0u: goto label_1a47f0;
        case 0x1a47f4u: goto label_1a47f4;
        case 0x1a47f8u: goto label_1a47f8;
        case 0x1a47fcu: goto label_1a47fc;
        case 0x1a4800u: goto label_1a4800;
        case 0x1a4804u: goto label_1a4804;
        case 0x1a4808u: goto label_1a4808;
        case 0x1a480cu: goto label_1a480c;
        case 0x1a4810u: goto label_1a4810;
        case 0x1a4814u: goto label_1a4814;
        case 0x1a4818u: goto label_1a4818;
        case 0x1a481cu: goto label_1a481c;
        case 0x1a4820u: goto label_1a4820;
        case 0x1a4824u: goto label_1a4824;
        case 0x1a4828u: goto label_1a4828;
        case 0x1a482cu: goto label_1a482c;
        case 0x1a4830u: goto label_1a4830;
        case 0x1a4834u: goto label_1a4834;
        case 0x1a4838u: goto label_1a4838;
        case 0x1a483cu: goto label_1a483c;
        case 0x1a4840u: goto label_1a4840;
        case 0x1a4844u: goto label_1a4844;
        case 0x1a4848u: goto label_1a4848;
        case 0x1a484cu: goto label_1a484c;
        case 0x1a4850u: goto label_1a4850;
        case 0x1a4854u: goto label_1a4854;
        case 0x1a4858u: goto label_1a4858;
        case 0x1a485cu: goto label_1a485c;
        case 0x1a4860u: goto label_1a4860;
        case 0x1a4864u: goto label_1a4864;
        case 0x1a4868u: goto label_1a4868;
        case 0x1a486cu: goto label_1a486c;
        case 0x1a4870u: goto label_1a4870;
        case 0x1a4874u: goto label_1a4874;
        case 0x1a4878u: goto label_1a4878;
        case 0x1a487cu: goto label_1a487c;
        case 0x1a4880u: goto label_1a4880;
        case 0x1a4884u: goto label_1a4884;
        case 0x1a4888u: goto label_1a4888;
        case 0x1a488cu: goto label_1a488c;
        case 0x1a4890u: goto label_1a4890;
        case 0x1a4894u: goto label_1a4894;
        case 0x1a4898u: goto label_1a4898;
        case 0x1a489cu: goto label_1a489c;
        case 0x1a48a0u: goto label_1a48a0;
        case 0x1a48a4u: goto label_1a48a4;
        case 0x1a48a8u: goto label_1a48a8;
        case 0x1a48acu: goto label_1a48ac;
        case 0x1a48b0u: goto label_1a48b0;
        case 0x1a48b4u: goto label_1a48b4;
        case 0x1a48b8u: goto label_1a48b8;
        case 0x1a48bcu: goto label_1a48bc;
        case 0x1a48c0u: goto label_1a48c0;
        case 0x1a48c4u: goto label_1a48c4;
        case 0x1a48c8u: goto label_1a48c8;
        case 0x1a48ccu: goto label_1a48cc;
        case 0x1a48d0u: goto label_1a48d0;
        case 0x1a48d4u: goto label_1a48d4;
        case 0x1a48d8u: goto label_1a48d8;
        case 0x1a48dcu: goto label_1a48dc;
        case 0x1a48e0u: goto label_1a48e0;
        case 0x1a48e4u: goto label_1a48e4;
        case 0x1a48e8u: goto label_1a48e8;
        case 0x1a48ecu: goto label_1a48ec;
        case 0x1a48f0u: goto label_1a48f0;
        case 0x1a48f4u: goto label_1a48f4;
        case 0x1a48f8u: goto label_1a48f8;
        case 0x1a48fcu: goto label_1a48fc;
        case 0x1a4900u: goto label_1a4900;
        case 0x1a4904u: goto label_1a4904;
        case 0x1a4908u: goto label_1a4908;
        case 0x1a490cu: goto label_1a490c;
        case 0x1a4910u: goto label_1a4910;
        case 0x1a4914u: goto label_1a4914;
        case 0x1a4918u: goto label_1a4918;
        case 0x1a491cu: goto label_1a491c;
        case 0x1a4920u: goto label_1a4920;
        case 0x1a4924u: goto label_1a4924;
        case 0x1a4928u: goto label_1a4928;
        case 0x1a492cu: goto label_1a492c;
        case 0x1a4930u: goto label_1a4930;
        case 0x1a4934u: goto label_1a4934;
        case 0x1a4938u: goto label_1a4938;
        case 0x1a493cu: goto label_1a493c;
        case 0x1a4940u: goto label_1a4940;
        case 0x1a4944u: goto label_1a4944;
        case 0x1a4948u: goto label_1a4948;
        case 0x1a494cu: goto label_1a494c;
        case 0x1a4950u: goto label_1a4950;
        case 0x1a4954u: goto label_1a4954;
        case 0x1a4958u: goto label_1a4958;
        case 0x1a495cu: goto label_1a495c;
        case 0x1a4960u: goto label_1a4960;
        case 0x1a4964u: goto label_1a4964;
        case 0x1a4968u: goto label_1a4968;
        case 0x1a496cu: goto label_1a496c;
        case 0x1a4970u: goto label_1a4970;
        case 0x1a4974u: goto label_1a4974;
        case 0x1a4978u: goto label_1a4978;
        case 0x1a497cu: goto label_1a497c;
        case 0x1a4980u: goto label_1a4980;
        case 0x1a4984u: goto label_1a4984;
        case 0x1a4988u: goto label_1a4988;
        case 0x1a498cu: goto label_1a498c;
        case 0x1a4990u: goto label_1a4990;
        case 0x1a4994u: goto label_1a4994;
        case 0x1a4998u: goto label_1a4998;
        case 0x1a499cu: goto label_1a499c;
        case 0x1a49a0u: goto label_1a49a0;
        case 0x1a49a4u: goto label_1a49a4;
        case 0x1a49a8u: goto label_1a49a8;
        case 0x1a49acu: goto label_1a49ac;
        case 0x1a49b0u: goto label_1a49b0;
        case 0x1a49b4u: goto label_1a49b4;
        case 0x1a49b8u: goto label_1a49b8;
        case 0x1a49bcu: goto label_1a49bc;
        case 0x1a49c0u: goto label_1a49c0;
        case 0x1a49c4u: goto label_1a49c4;
        case 0x1a49c8u: goto label_1a49c8;
        case 0x1a49ccu: goto label_1a49cc;
        case 0x1a49d0u: goto label_1a49d0;
        case 0x1a49d4u: goto label_1a49d4;
        case 0x1a49d8u: goto label_1a49d8;
        case 0x1a49dcu: goto label_1a49dc;
        case 0x1a49e0u: goto label_1a49e0;
        case 0x1a49e4u: goto label_1a49e4;
        case 0x1a49e8u: goto label_1a49e8;
        case 0x1a49ecu: goto label_1a49ec;
        case 0x1a49f0u: goto label_1a49f0;
        case 0x1a49f4u: goto label_1a49f4;
        case 0x1a49f8u: goto label_1a49f8;
        case 0x1a49fcu: goto label_1a49fc;
        case 0x1a4a00u: goto label_1a4a00;
        case 0x1a4a04u: goto label_1a4a04;
        case 0x1a4a08u: goto label_1a4a08;
        case 0x1a4a0cu: goto label_1a4a0c;
        case 0x1a4a10u: goto label_1a4a10;
        case 0x1a4a14u: goto label_1a4a14;
        case 0x1a4a18u: goto label_1a4a18;
        case 0x1a4a1cu: goto label_1a4a1c;
        case 0x1a4a20u: goto label_1a4a20;
        case 0x1a4a24u: goto label_1a4a24;
        case 0x1a4a28u: goto label_1a4a28;
        case 0x1a4a2cu: goto label_1a4a2c;
        case 0x1a4a30u: goto label_1a4a30;
        case 0x1a4a34u: goto label_1a4a34;
        case 0x1a4a38u: goto label_1a4a38;
        case 0x1a4a3cu: goto label_1a4a3c;
        case 0x1a4a40u: goto label_1a4a40;
        case 0x1a4a44u: goto label_1a4a44;
        case 0x1a4a48u: goto label_1a4a48;
        case 0x1a4a4cu: goto label_1a4a4c;
        case 0x1a4a50u: goto label_1a4a50;
        case 0x1a4a54u: goto label_1a4a54;
        case 0x1a4a58u: goto label_1a4a58;
        case 0x1a4a5cu: goto label_1a4a5c;
        case 0x1a4a60u: goto label_1a4a60;
        case 0x1a4a64u: goto label_1a4a64;
        case 0x1a4a68u: goto label_1a4a68;
        case 0x1a4a6cu: goto label_1a4a6c;
        default: break;
    }

    ctx->pc = 0x1a3bb0u;

label_1a3bb0:
    // 0x1a3bb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a3bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a3bb4:
    // 0x1a3bb4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a3bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1a3bb8:
    // 0x1a3bb8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1a3bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3bbc:
    // 0x1a3bbc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a3bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a3bc0:
    // 0x1a3bc0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a3bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a3bc4:
    // 0x1a3bc4: 0x3e00008  jr          $ra
label_1a3bc8:
    if (ctx->pc == 0x1A3BC8u) {
        ctx->pc = 0x1A3BCCu;
        goto label_1a3bcc;
    }
    ctx->pc = 0x1A3BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3BCCu;
label_1a3bcc:
    // 0x1a3bcc: 0x0  nop
    ctx->pc = 0x1a3bccu;
    // NOP
label_1a3bd0:
    // 0x1a3bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a3bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a3bd4:
    // 0x1a3bd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a3bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a3bd8:
    // 0x1a3bd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a3bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a3bdc:
    // 0x1a3bdc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1a3bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_1a3be0:
    // 0x1a3be0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a3be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1a3be4:
    // 0x1a3be4: 0xc064a74  jal         func_1929D0
label_1a3be8:
    if (ctx->pc == 0x1A3BE8u) {
        ctx->pc = 0x1A3BECu;
        goto label_1a3bec;
    }
    ctx->pc = 0x1A3BE4u;
    SET_GPR_U32(ctx, 31, 0x1A3BECu);
    ctx->pc = 0x1929D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1929D0u, 0x1A3BE4u, 0x1A3BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3BECu;
label_1a3bec:
    // 0x1a3bec: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1a3becu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1a3bf0:
    // 0x1a3bf0: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1a3bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
label_1a3bf4:
    // 0x1a3bf4: 0x24846700  addiu       $a0, $a0, 0x6700
    ctx->pc = 0x1a3bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26368));
label_1a3bf8:
    // 0x1a3bf8: 0xc0ac004  jal         func_2B0010
label_1a3bfc:
    if (ctx->pc == 0x1A3BFCu) {
        ctx->pc = 0x1A3C00u;
        goto label_1a3c00;
    }
    ctx->pc = 0x1A3BF8u;
    SET_GPR_U32(ctx, 31, 0x1A3C00u);
    ctx->pc = 0x2B0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0010u, 0x1A3BF8u, 0x1A3C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C00u;
label_1a3c00:
    // 0x1a3c00: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1a3c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1a3c04:
    // 0x1a3c04: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x1a3c04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
label_1a3c08:
    // 0x1a3c08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a3c08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3c0c:
    // 0x1a3c0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a3c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3c10:
    // 0x1a3c10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a3c10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3c14:
    // 0x1a3c14: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a3c14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a3c18:
    // 0x1a3c18: 0x3e00008  jr          $ra
label_1a3c1c:
    if (ctx->pc == 0x1A3C1Cu) {
        ctx->pc = 0x1A3C20u;
        goto label_1a3c20;
    }
    ctx->pc = 0x1A3C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3C20u;
label_1a3c20:
    // 0x1a3c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a3c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a3c24:
    // 0x1a3c24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a3c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a3c28:
    // 0x1a3c28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a3c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a3c2c:
    // 0x1a3c2c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1a3c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_1a3c30:
    // 0x1a3c30: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a3c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1a3c34:
    // 0x1a3c34: 0xc064adc  jal         func_192B70
label_1a3c38:
    if (ctx->pc == 0x1A3C38u) {
        ctx->pc = 0x1A3C3Cu;
        goto label_1a3c3c;
    }
    ctx->pc = 0x1A3C34u;
    SET_GPR_U32(ctx, 31, 0x1A3C3Cu);
    ctx->pc = 0x192B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B70u, 0x1A3C34u, 0x1A3C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C3Cu;
label_1a3c3c:
    // 0x1a3c3c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1a3c3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1a3c40:
    // 0x1a3c40: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1a3c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1a3c44:
    // 0x1a3c44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a3c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3c48:
    // 0x1a3c48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a3c48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3c4c:
    // 0x1a3c4c: 0xc08f740  jal         func_23DD00
label_1a3c50:
    if (ctx->pc == 0x1A3C50u) {
        ctx->pc = 0x1A3C54u;
        goto label_1a3c54;
    }
    ctx->pc = 0x1A3C4Cu;
    SET_GPR_U32(ctx, 31, 0x1A3C54u);
    ctx->pc = 0x23DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DD00u, 0x1A3C4Cu, 0x1A3C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C54u;
label_1a3c54:
    // 0x1a3c54: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1a3c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1a3c58:
    // 0x1a3c58: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1a3c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1a3c5c:
    // 0x1a3c5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a3c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3c60:
    // 0x1a3c60: 0xc0ac13c  jal         func_2B04F0
label_1a3c64:
    if (ctx->pc == 0x1A3C64u) {
        ctx->pc = 0x1A3C68u;
        goto label_1a3c68;
    }
    ctx->pc = 0x1A3C60u;
    SET_GPR_U32(ctx, 31, 0x1A3C68u);
    ctx->pc = 0x2B04F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04F0u, 0x1A3C60u, 0x1A3C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C68u;
label_1a3c68:
    // 0x1a3c68: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x1a3c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1a3c6c:
    // 0x1a3c6c: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1a3c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_1a3c70:
    // 0x1a3c70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a3c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a3c74:
    // 0x1a3c74: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x1a3c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1a3c78:
    // 0x1a3c78: 0x24050534  addiu       $a1, $zero, 0x534
    ctx->pc = 0x1a3c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1332));
label_1a3c7c:
    // 0x1a3c7c: 0xc041bc4  jal         func_106F10
label_1a3c80:
    if (ctx->pc == 0x1A3C80u) {
        ctx->pc = 0x1A3C84u;
        goto label_1a3c84;
    }
    ctx->pc = 0x1A3C7Cu;
    SET_GPR_U32(ctx, 31, 0x1A3C84u);
    ctx->pc = 0x106F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F10u, 0x1A3C7Cu, 0x1A3C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3C84u;
label_1a3c84:
    // 0x1a3c84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a3c84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3c88:
    // 0x1a3c88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a3c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3c8c:
    // 0x1a3c8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a3c8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3c90:
    // 0x1a3c90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a3c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a3c94:
    // 0x1a3c94: 0x3e00008  jr          $ra
label_1a3c98:
    if (ctx->pc == 0x1A3C98u) {
        ctx->pc = 0x1A3C9Cu;
        goto label_1a3c9c;
    }
    ctx->pc = 0x1A3C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3C9Cu;
label_1a3c9c:
    // 0x1a3c9c: 0x0  nop
    ctx->pc = 0x1a3c9cu;
    // NOP
label_1a3ca0:
    // 0x1a3ca0: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x1a3ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_1a3ca4:
    // 0x1a3ca4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1a3ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1a3ca8:
    // 0x1a3ca8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1a3ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1a3cac:
    // 0x1a3cac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1a3cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1a3cb0:
    // 0x1a3cb0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1a3cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1a3cb4:
    // 0x1a3cb4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a3cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1a3cb8:
    // 0x1a3cb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a3cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1a3cbc:
    // 0x1a3cbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a3cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1a3cc0:
    // 0x1a3cc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a3cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a3cc4:
    // 0x1a3cc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a3cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a3cc8:
    // 0x1a3cc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a3cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a3ccc:
    // 0x1a3ccc: 0xafa401f0  sw          $a0, 0x1F0($sp)
    ctx->pc = 0x1a3cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 4));
label_1a3cd0:
    // 0x1a3cd0: 0xc0b06cc  jal         func_2C1B30
label_1a3cd4:
    if (ctx->pc == 0x1A3CD4u) {
        ctx->pc = 0x1A3CD8u;
        goto label_1a3cd8;
    }
    ctx->pc = 0x1A3CD0u;
    SET_GPR_U32(ctx, 31, 0x1A3CD8u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x1A3CD0u, 0x1A3CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3CD8u;
label_1a3cd8:
    // 0x1a3cd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a3cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3cdc:
    // 0x1a3cdc: 0xc0b06c4  jal         func_2C1B10
label_1a3ce0:
    if (ctx->pc == 0x1A3CE0u) {
        ctx->pc = 0x1A3CE4u;
        goto label_1a3ce4;
    }
    ctx->pc = 0x1A3CDCu;
    SET_GPR_U32(ctx, 31, 0x1A3CE4u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x1A3CDCu, 0x1A3CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3CE4u;
label_1a3ce4:
    // 0x1a3ce4: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x1a3ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
label_1a3ce8:
    // 0x1a3ce8: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x1a3ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a3cec:
    // 0x1a3cec: 0x7ba40150  lq          $a0, 0x150($sp)
    ctx->pc = 0x1a3cecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1a3cf0:
    // 0x1a3cf0: 0x24650128  addiu       $a1, $v1, 0x128
    ctx->pc = 0x1a3cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 296));
label_1a3cf4:
    // 0x1a3cf4: 0xc0b4374  jal         func_2D0DD0
label_1a3cf8:
    if (ctx->pc == 0x1A3CF8u) {
        ctx->pc = 0x1A3CFCu;
        goto label_1a3cfc;
    }
    ctx->pc = 0x1A3CF4u;
    SET_GPR_U32(ctx, 31, 0x1A3CFCu);
    ctx->pc = 0x2D0DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0DD0u, 0x1A3CF4u, 0x1A3CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3CFCu;
label_1a3cfc:
    // 0x1a3cfc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a3cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d00:
    // 0x1a3d00: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a3d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a3d04:
    // 0x1a3d04: 0x24450128  addiu       $a1, $v0, 0x128
    ctx->pc = 0x1a3d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
label_1a3d08:
    // 0x1a3d08: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a3d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d0c:
    // 0x1a3d0c: 0xc068ea0  jal         func_1A3A80
label_1a3d10:
    if (ctx->pc == 0x1A3D10u) {
        ctx->pc = 0x1A3D14u;
        goto label_1a3d14;
    }
    ctx->pc = 0x1A3D0Cu;
    SET_GPR_U32(ctx, 31, 0x1A3D14u);
    ctx->pc = 0x1A3A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A80u, 0x1A3D0Cu, 0x1A3D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D14u;
label_1a3d14:
    // 0x1a3d14: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1a3d14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d18:
    // 0x1a3d18: 0x10000148  b           . + 4 + (0x148 << 2)
label_1a3d1c:
    if (ctx->pc == 0x1A3D1Cu) {
        ctx->pc = 0x1A3D20u;
        goto label_1a3d20;
    }
    ctx->pc = 0x1A3D18u;
    {
        const bool branch_taken_0x1a3d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3d18) {
            ctx->pc = 0x1A423Cu;
            goto label_1a423c;
        }
    }
    ctx->pc = 0x1A3D20u;
label_1a3d20:
    // 0x1a3d20: 0x8ed10000  lw          $s1, 0x0($s6)
    ctx->pc = 0x1a3d20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1a3d24:
    // 0x1a3d24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d28:
    // 0x1a3d28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a3d28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a3d2c:
    // 0x1a3d2c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1a3d2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1a3d30:
    // 0x1a3d30: 0x320f809  jalr        $t9
label_1a3d34:
    if (ctx->pc == 0x1A3D34u) {
        ctx->pc = 0x1A3D38u;
        goto label_1a3d38;
    }
    ctx->pc = 0x1A3D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A3D38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3D30u, 0x1A3D38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3D38u;
label_1a3d38:
    // 0x1a3d38: 0x8e26002c  lw          $a2, 0x2C($s1)
    ctx->pc = 0x1a3d38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1a3d3c:
    // 0x1a3d3c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a3d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d40:
    // 0x1a3d40: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1a3d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1a3d44:
    // 0x1a3d44: 0xc085538  jal         func_2154E0
label_1a3d48:
    if (ctx->pc == 0x1A3D48u) {
        ctx->pc = 0x1A3D4Cu;
        goto label_1a3d4c;
    }
    ctx->pc = 0x1A3D44u;
    SET_GPR_U32(ctx, 31, 0x1A3D4Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1A3D44u, 0x1A3D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D4Cu;
label_1a3d4c:
    // 0x1a3d4c: 0xafa201e8  sw          $v0, 0x1E8($sp)
    ctx->pc = 0x1a3d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
label_1a3d50:
    // 0x1a3d50: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x1a3d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1a3d54:
    // 0x1a3d54: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1a3d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1a3d58:
    // 0x1a3d58: 0xc085538  jal         func_2154E0
label_1a3d5c:
    if (ctx->pc == 0x1A3D5Cu) {
        ctx->pc = 0x1A3D60u;
        goto label_1a3d60;
    }
    ctx->pc = 0x1A3D58u;
    SET_GPR_U32(ctx, 31, 0x1A3D60u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1A3D58u, 0x1A3D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D60u;
label_1a3d60:
    // 0x1a3d60: 0xafa201e4  sw          $v0, 0x1E4($sp)
    ctx->pc = 0x1a3d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 2));
label_1a3d64:
    // 0x1a3d64: 0x8fa601e4  lw          $a2, 0x1E4($sp)
    ctx->pc = 0x1a3d64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
label_1a3d68:
    // 0x1a3d68: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1a3d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d6c:
    // 0x1a3d6c: 0xc096fd8  jal         func_25BF60
label_1a3d70:
    if (ctx->pc == 0x1A3D70u) {
        ctx->pc = 0x1A3D74u;
        goto label_1a3d74;
    }
    ctx->pc = 0x1A3D6Cu;
    SET_GPR_U32(ctx, 31, 0x1A3D74u);
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x1A3D6Cu, 0x1A3D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D74u;
label_1a3d74:
    // 0x1a3d74: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x1a3d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
label_1a3d78:
    // 0x1a3d78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d7c:
    // 0x1a3d7c: 0xc063dd0  jal         func_18F740
label_1a3d80:
    if (ctx->pc == 0x1A3D80u) {
        ctx->pc = 0x1A3D84u;
        goto label_1a3d84;
    }
    ctx->pc = 0x1A3D7Cu;
    SET_GPR_U32(ctx, 31, 0x1A3D84u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x1A3D7Cu, 0x1A3D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3D84u;
label_1a3d84:
    // 0x1a3d84: 0x14400122  bnez        $v0, . + 4 + (0x122 << 2)
label_1a3d88:
    if (ctx->pc == 0x1A3D88u) {
        ctx->pc = 0x1A3D8Cu;
        goto label_1a3d8c;
    }
    ctx->pc = 0x1A3D84u;
    {
        const bool branch_taken_0x1a3d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3d84) {
            ctx->pc = 0x1A4210u;
            goto label_1a4210;
        }
    }
    ctx->pc = 0x1A3D8Cu;
label_1a3d8c:
    // 0x1a3d8c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1a3d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_1a3d90:
    // 0x1a3d90: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x1a3d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
label_1a3d94:
    // 0x1a3d94: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a3d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a3d98:
    // 0x1a3d98: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x1a3d98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1a3d9c:
    // 0x1a3d9c: 0x1044011c  beq         $v0, $a0, . + 4 + (0x11C << 2)
label_1a3da0:
    if (ctx->pc == 0x1A3DA0u) {
        ctx->pc = 0x1A3DA4u;
        goto label_1a3da4;
    }
    ctx->pc = 0x1A3D9Cu;
    {
        const bool branch_taken_0x1a3d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1a3d9c) {
            ctx->pc = 0x1A4210u;
            goto label_1a4210;
        }
    }
    ctx->pc = 0x1A3DA4u;
label_1a3da4:
    // 0x1a3da4: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x1a3da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_1a3da8:
    // 0x1a3da8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a3da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a3dac:
    // 0x1a3dac: 0x10620118  beq         $v1, $v0, . + 4 + (0x118 << 2)
label_1a3db0:
    if (ctx->pc == 0x1A3DB0u) {
        ctx->pc = 0x1A3DB4u;
        goto label_1a3db4;
    }
    ctx->pc = 0x1A3DACu;
    {
        const bool branch_taken_0x1a3dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a3dac) {
            ctx->pc = 0x1A4210u;
            goto label_1a4210;
        }
    }
    ctx->pc = 0x1A3DB4u;
label_1a3db4:
    // 0x1a3db4: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a3db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a3db8:
    // 0x1a3db8: 0x24450134  addiu       $a1, $v0, 0x134
    ctx->pc = 0x1a3db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
label_1a3dbc:
    // 0x1a3dbc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a3dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a3dc0:
    // 0x1a3dc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a3dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3dc4:
    // 0x1a3dc4: 0xc068c6c  jal         func_1A31B0
label_1a3dc8:
    if (ctx->pc == 0x1A3DC8u) {
        ctx->pc = 0x1A3DCCu;
        goto label_1a3dcc;
    }
    ctx->pc = 0x1A3DC4u;
    SET_GPR_U32(ctx, 31, 0x1A3DCCu);
    ctx->pc = 0x1A31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A31B0u, 0x1A3DC4u, 0x1A3DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3DCCu;
label_1a3dcc:
    // 0x1a3dcc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a3dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a3dd0:
    // 0x1a3dd0: 0xc069b98  jal         func_1A6E60
label_1a3dd4:
    if (ctx->pc == 0x1A3DD4u) {
        ctx->pc = 0x1A3DD8u;
        goto label_1a3dd8;
    }
    ctx->pc = 0x1A3DD0u;
    SET_GPR_U32(ctx, 31, 0x1A3DD8u);
    ctx->pc = 0x1A6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E60u, 0x1A3DD0u, 0x1A3DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3DD8u;
label_1a3dd8:
    // 0x1a3dd8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1a3dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a3ddc:
    // 0x1a3ddc: 0x104600fb  beq         $v0, $a2, . + 4 + (0xFB << 2)
label_1a3de0:
    if (ctx->pc == 0x1A3DE0u) {
        ctx->pc = 0x1A3DE4u;
        goto label_1a3de4;
    }
    ctx->pc = 0x1A3DDCu;
    {
        const bool branch_taken_0x1a3ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x1a3ddc) {
            ctx->pc = 0x1A41CCu;
            goto label_1a41cc;
        }
    }
    ctx->pc = 0x1A3DE4u;
label_1a3de4:
    // 0x1a3de4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a3de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a3de8:
    // 0x1a3de8: 0x104300a8  beq         $v0, $v1, . + 4 + (0xA8 << 2)
label_1a3dec:
    if (ctx->pc == 0x1A3DECu) {
        ctx->pc = 0x1A3DF0u;
        goto label_1a3df0;
    }
    ctx->pc = 0x1A3DE8u;
    {
        const bool branch_taken_0x1a3de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a3de8) {
            ctx->pc = 0x1A408Cu;
            goto label_1a408c;
        }
    }
    ctx->pc = 0x1A3DF0u;
label_1a3df0:
    // 0x1a3df0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a3df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3df4:
    // 0x1a3df4: 0x10430044  beq         $v0, $v1, . + 4 + (0x44 << 2)
label_1a3df8:
    if (ctx->pc == 0x1A3DF8u) {
        ctx->pc = 0x1A3DFCu;
        goto label_1a3dfc;
    }
    ctx->pc = 0x1A3DF4u;
    {
        const bool branch_taken_0x1a3df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a3df4) {
            ctx->pc = 0x1A3F08u;
            goto label_1a3f08;
        }
    }
    ctx->pc = 0x1A3DFCu;
label_1a3dfc:
    // 0x1a3dfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a3e00:
    if (ctx->pc == 0x1A3E00u) {
        ctx->pc = 0x1A3E04u;
        goto label_1a3e04;
    }
    ctx->pc = 0x1A3DFCu;
    {
        const bool branch_taken_0x1a3dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3dfc) {
            ctx->pc = 0x1A3E0Cu;
            goto label_1a3e0c;
        }
    }
    ctx->pc = 0x1A3E04u;
label_1a3e04:
    // 0x1a3e04: 0x10000102  b           . + 4 + (0x102 << 2)
label_1a3e08:
    if (ctx->pc == 0x1A3E08u) {
        ctx->pc = 0x1A3E0Cu;
        goto label_1a3e0c;
    }
    ctx->pc = 0x1A3E04u;
    {
        const bool branch_taken_0x1a3e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3e04) {
            ctx->pc = 0x1A4210u;
            goto label_1a4210;
        }
    }
    ctx->pc = 0x1A3E0Cu;
label_1a3e0c:
    // 0x1a3e0c: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a3e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a3e10:
    // 0x1a3e10: 0x24440134  addiu       $a0, $v0, 0x134
    ctx->pc = 0x1a3e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
label_1a3e14:
    // 0x1a3e14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a3e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3e18:
    // 0x1a3e18: 0xc068c6c  jal         func_1A31B0
label_1a3e1c:
    if (ctx->pc == 0x1A3E1Cu) {
        ctx->pc = 0x1A3E20u;
        goto label_1a3e20;
    }
    ctx->pc = 0x1A3E18u;
    SET_GPR_U32(ctx, 31, 0x1A3E20u);
    ctx->pc = 0x1A31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A31B0u, 0x1A3E18u, 0x1A3E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3E20u;
label_1a3e20:
    // 0x1a3e20: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x1a3e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_1a3e24:
    // 0x1a3e24: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x1a3e24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1a3e28:
    // 0x1a3e28: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a3e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a3e2c:
    // 0x1a3e2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a3e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3e30:
    // 0x1a3e30: 0xc069ba0  jal         func_1A6E80
label_1a3e34:
    if (ctx->pc == 0x1A3E34u) {
        ctx->pc = 0x1A3E38u;
        goto label_1a3e38;
    }
    ctx->pc = 0x1A3E30u;
    SET_GPR_U32(ctx, 31, 0x1A3E38u);
    ctx->pc = 0x1A6E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E80u, 0x1A3E30u, 0x1A3E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3E38u;
label_1a3e38:
    // 0x1a3e38: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a3e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a3e3c:
    // 0x1a3e3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a3e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3e40:
    // 0x1a3e40: 0xc0696bc  jal         func_1A5AF0
label_1a3e44:
    if (ctx->pc == 0x1A3E44u) {
        ctx->pc = 0x1A3E48u;
        goto label_1a3e48;
    }
    ctx->pc = 0x1A3E40u;
    SET_GPR_U32(ctx, 31, 0x1A3E48u);
    ctx->pc = 0x1A5AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5AF0u, 0x1A3E40u, 0x1A3E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3E48u;
label_1a3e48:
    // 0x1a3e48: 0xe7a001dc  swc1        $f0, 0x1DC($sp)
    ctx->pc = 0x1a3e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
label_1a3e4c:
    // 0x1a3e4c: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x1a3e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a3e50:
    // 0x1a3e50: 0x24a40134  addiu       $a0, $a1, 0x134
    ctx->pc = 0x1a3e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 308));
label_1a3e54:
    // 0x1a3e54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a3e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3e58:
    // 0x1a3e58: 0xc068c6c  jal         func_1A31B0
label_1a3e5c:
    if (ctx->pc == 0x1A3E5Cu) {
        ctx->pc = 0x1A3E60u;
        goto label_1a3e60;
    }
    ctx->pc = 0x1A3E58u;
    SET_GPR_U32(ctx, 31, 0x1A3E60u);
    ctx->pc = 0x1A31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A31B0u, 0x1A3E58u, 0x1A3E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3E60u;
label_1a3e60:
    // 0x1a3e60: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a3e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a3e64:
    // 0x1a3e64: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a3e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a3e68:
    // 0x1a3e68: 0xc7ac01dc  lwc1        $f12, 0x1DC($sp)
    ctx->pc = 0x1a3e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a3e6c:
    // 0x1a3e6c: 0xc069bc8  jal         func_1A6F20
label_1a3e70:
    if (ctx->pc == 0x1A3E70u) {
        ctx->pc = 0x1A3E74u;
        goto label_1a3e74;
    }
    ctx->pc = 0x1A3E6Cu;
    SET_GPR_U32(ctx, 31, 0x1A3E74u);
    ctx->pc = 0x1A6F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6F20u, 0x1A3E6Cu, 0x1A3E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3E74u;
label_1a3e74:
    // 0x1a3e74: 0x8fb201f0  lw          $s2, 0x1F0($sp)
    ctx->pc = 0x1a3e74u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a3e78:
    // 0x1a3e78: 0x264300cc  addiu       $v1, $s2, 0xCC
    ctx->pc = 0x1a3e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 204));
label_1a3e7c:
    // 0x1a3e7c: 0x27a201b8  addiu       $v0, $sp, 0x1B8
    ctx->pc = 0x1a3e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_1a3e80:
    // 0x1a3e80: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1a3e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a3e84:
    // 0x1a3e84: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1a3e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3e88:
    // 0x1a3e88: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1a3e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3e8c:
    // 0x1a3e8c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1a3e8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1a3e90:
    // 0x1a3e90: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1a3e90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1a3e94:
    // 0x1a3e94: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1a3e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1a3e98:
    // 0x1a3e98: 0xc7a101b8  lwc1        $f1, 0x1B8($sp)
    ctx->pc = 0x1a3e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3e9c:
    // 0x1a3e9c: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x1a3e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a3ea0:
    // 0x1a3ea0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a3ea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a3ea4:
    // 0x1a3ea4: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x1a3ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_1a3ea8:
    // 0x1a3ea8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1a3ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_1a3eac:
    // 0x1a3eac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a3eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1a3eb0:
    // 0x1a3eb0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1a3eb0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3eb4:
    // 0x1a3eb4: 0x0  nop
    ctx->pc = 0x1a3eb4u;
    // NOP
label_1a3eb8:
    // 0x1a3eb8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1a3eb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a3ebc:
    // 0x1a3ebc: 0xc7a101c0  lwc1        $f1, 0x1C0($sp)
    ctx->pc = 0x1a3ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3ec0:
    // 0x1a3ec0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a3ec0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3ec4:
    // 0x1a3ec4: 0x0  nop
    ctx->pc = 0x1a3ec4u;
    // NOP
label_1a3ec8:
    // 0x1a3ec8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a3ec8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1a3ecc:
    // 0x1a3ecc: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1a3eccu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1a3ed0:
    // 0x1a3ed0: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x1a3ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_1a3ed4:
    // 0x1a3ed4: 0xc0b06cc  jal         func_2C1B30
label_1a3ed8:
    if (ctx->pc == 0x1A3ED8u) {
        ctx->pc = 0x1A3EDCu;
        goto label_1a3edc;
    }
    ctx->pc = 0x1A3ED4u;
    SET_GPR_U32(ctx, 31, 0x1A3EDCu);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x1A3ED4u, 0x1A3EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3EDCu;
label_1a3edc:
    // 0x1a3edc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a3edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3ee0:
    // 0x1a3ee0: 0xc0b06c4  jal         func_2C1B10
label_1a3ee4:
    if (ctx->pc == 0x1A3EE4u) {
        ctx->pc = 0x1A3EE8u;
        goto label_1a3ee8;
    }
    ctx->pc = 0x1A3EE0u;
    SET_GPR_U32(ctx, 31, 0x1A3EE8u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x1A3EE0u, 0x1A3EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3EE8u;
label_1a3ee8:
    // 0x1a3ee8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a3ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3eec:
    // 0x1a3eec: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x1a3eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1a3ef0:
    // 0x1a3ef0: 0x27a601b8  addiu       $a2, $sp, 0x1B8
    ctx->pc = 0x1a3ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_1a3ef4:
    // 0x1a3ef4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a3ef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3ef8:
    // 0x1a3ef8: 0xc0b43b8  jal         func_2D0EE0
label_1a3efc:
    if (ctx->pc == 0x1A3EFCu) {
        ctx->pc = 0x1A3F00u;
        goto label_1a3f00;
    }
    ctx->pc = 0x1A3EF8u;
    SET_GPR_U32(ctx, 31, 0x1A3F00u);
    ctx->pc = 0x2D0EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0EE0u, 0x1A3EF8u, 0x1A3F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3F00u;
label_1a3f00:
    // 0x1a3f00: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_1a3f04:
    if (ctx->pc == 0x1A3F04u) {
        ctx->pc = 0x1A3F08u;
        goto label_1a3f08;
    }
    ctx->pc = 0x1A3F00u;
    {
        const bool branch_taken_0x1a3f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3f00) {
            ctx->pc = 0x1A4210u;
            goto label_1a4210;
        }
    }
    ctx->pc = 0x1A3F08u;
label_1a3f08:
    // 0x1a3f08: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x1a3f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a3f0c:
    // 0x1a3f0c: 0x24820134  addiu       $v0, $a0, 0x134
    ctx->pc = 0x1a3f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 308));
label_1a3f10:
    // 0x1a3f10: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1a3f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_1a3f14:
    // 0x1a3f14: 0x7ba40120  lq          $a0, 0x120($sp)
    ctx->pc = 0x1a3f14u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1a3f18:
    // 0x1a3f18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a3f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3f1c:
    // 0x1a3f1c: 0xc068c6c  jal         func_1A31B0
label_1a3f20:
    if (ctx->pc == 0x1A3F20u) {
        ctx->pc = 0x1A3F24u;
        goto label_1a3f24;
    }
    ctx->pc = 0x1A3F1Cu;
    SET_GPR_U32(ctx, 31, 0x1A3F24u);
    ctx->pc = 0x1A31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A31B0u, 0x1A3F1Cu, 0x1A3F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3F24u;
label_1a3f24:
    // 0x1a3f24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a3f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a3f28:
    // 0x1a3f28: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1a3f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a3f2c:
    // 0x1a3f2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a3f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a3f30:
    // 0x1a3f30: 0xc069ba0  jal         func_1A6E80
label_1a3f34:
    if (ctx->pc == 0x1A3F34u) {
        ctx->pc = 0x1A3F38u;
        goto label_1a3f38;
    }
    ctx->pc = 0x1A3F30u;
    SET_GPR_U32(ctx, 31, 0x1A3F38u);
    ctx->pc = 0x1A6E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E80u, 0x1A3F30u, 0x1A3F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3F38u;
label_1a3f38:
    // 0x1a3f38: 0x3c054334  lui         $a1, 0x4334
    ctx->pc = 0x1a3f38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17204 << 16));
label_1a3f3c:
    // 0x1a3f3c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1a3f3cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a3f40:
    // 0x1a3f40: 0x3c064120  lui         $a2, 0x4120
    ctx->pc = 0x1a3f40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16672 << 16));
label_1a3f44:
    // 0x1a3f44: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x1a3f44u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a3f48:
    // 0x1a3f48: 0x8fa401e8  lw          $a0, 0x1E8($sp)
    ctx->pc = 0x1a3f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_1a3f4c:
    // 0x1a3f4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a3f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3f50:
    // 0x1a3f50: 0xc090fe0  jal         func_243F80
label_1a3f54:
    if (ctx->pc == 0x1A3F54u) {
        ctx->pc = 0x1A3F58u;
        goto label_1a3f58;
    }
    ctx->pc = 0x1A3F50u;
    SET_GPR_U32(ctx, 31, 0x1A3F58u);
    ctx->pc = 0x243F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243F80u, 0x1A3F50u, 0x1A3F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3F58u;
label_1a3f58:
    // 0x1a3f58: 0x27a401a8  addiu       $a0, $sp, 0x1A8
    ctx->pc = 0x1a3f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_1a3f5c:
    // 0x1a3f5c: 0xc09ac08  jal         func_26B020
label_1a3f60:
    if (ctx->pc == 0x1A3F60u) {
        ctx->pc = 0x1A3F64u;
        goto label_1a3f64;
    }
    ctx->pc = 0x1A3F5Cu;
    SET_GPR_U32(ctx, 31, 0x1A3F64u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x1A3F5Cu, 0x1A3F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3F64u;
label_1a3f64:
    // 0x1a3f64: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1a3f64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a3f68:
    // 0x1a3f68: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1a3f68u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3f6c:
    // 0x1a3f6c: 0x10000029  b           . + 4 + (0x29 << 2)
label_1a3f70:
    if (ctx->pc == 0x1A3F70u) {
        ctx->pc = 0x1A3F74u;
        goto label_1a3f74;
    }
    ctx->pc = 0x1A3F6Cu;
    {
        const bool branch_taken_0x1a3f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3f6c) {
            ctx->pc = 0x1A4014u;
            goto label_1a4014;
        }
    }
    ctx->pc = 0x1A3F74u;
label_1a3f74:
    // 0x1a3f74: 0xc0de0d2  jal         func_378348
label_1a3f78:
    if (ctx->pc == 0x1A3F78u) {
        ctx->pc = 0x1A3F7Cu;
        goto label_1a3f7c;
    }
    ctx->pc = 0x1A3F74u;
    SET_GPR_U32(ctx, 31, 0x1A3F7Cu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1A3F74u, 0x1A3F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3F7Cu;
label_1a3f7c:
    // 0x1a3f7c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1a3f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1a3f80:
    // 0x1a3f80: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a3f80u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a3f84:
    // 0x1a3f84: 0x2010  mfhi        $a0
    ctx->pc = 0x1a3f84u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1a3f88:
    // 0x1a3f88: 0x24950001  addiu       $s5, $a0, 0x1
    ctx->pc = 0x1a3f88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1a3f8c:
    // 0x1a3f8c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a3f8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a3f90:
    // 0x1a3f90: 0x1000000f  b           . + 4 + (0xF << 2)
label_1a3f94:
    if (ctx->pc == 0x1A3F94u) {
        ctx->pc = 0x1A3F98u;
        goto label_1a3f98;
    }
    ctx->pc = 0x1A3F90u;
    {
        const bool branch_taken_0x1a3f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3f90) {
            ctx->pc = 0x1A3FD0u;
            goto label_1a3fd0;
        }
    }
    ctx->pc = 0x1A3F98u;
label_1a3f98:
    // 0x1a3f98: 0x1213000c  beq         $s0, $s3, . + 4 + (0xC << 2)
label_1a3f9c:
    if (ctx->pc == 0x1A3F9Cu) {
        ctx->pc = 0x1A3FA0u;
        goto label_1a3fa0;
    }
    ctx->pc = 0x1A3F98u;
    {
        const bool branch_taken_0x1a3f98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x1a3f98) {
            ctx->pc = 0x1A3FCCu;
            goto label_1a3fcc;
        }
    }
    ctx->pc = 0x1A3FA0u;
label_1a3fa0:
    // 0x1a3fa0: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a3fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a3fa4:
    // 0x1a3fa4: 0x24450134  addiu       $a1, $v0, 0x134
    ctx->pc = 0x1a3fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
label_1a3fa8:
    // 0x1a3fa8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a3fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a3fac:
    // 0x1a3fac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a3facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a3fb0:
    // 0x1a3fb0: 0xc068c6c  jal         func_1A31B0
label_1a3fb4:
    if (ctx->pc == 0x1A3FB4u) {
        ctx->pc = 0x1A3FB8u;
        goto label_1a3fb8;
    }
    ctx->pc = 0x1A3FB0u;
    SET_GPR_U32(ctx, 31, 0x1A3FB8u);
    ctx->pc = 0x1A31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A31B0u, 0x1A3FB0u, 0x1A3FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3FB8u;
label_1a3fb8:
    // 0x1a3fb8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a3fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a3fbc:
    // 0x1a3fbc: 0xc069bac  jal         func_1A6EB0
label_1a3fc0:
    if (ctx->pc == 0x1A3FC0u) {
        ctx->pc = 0x1A3FC4u;
        goto label_1a3fc4;
    }
    ctx->pc = 0x1A3FBCu;
    SET_GPR_U32(ctx, 31, 0x1A3FC4u);
    ctx->pc = 0x1A6EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6EB0u, 0x1A3FBCu, 0x1A3FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3FC4u;
label_1a3fc4:
    // 0x1a3fc4: 0x12a20009  beq         $s5, $v0, . + 4 + (0x9 << 2)
label_1a3fc8:
    if (ctx->pc == 0x1A3FC8u) {
        ctx->pc = 0x1A3FCCu;
        goto label_1a3fcc;
    }
    ctx->pc = 0x1A3FC4u;
    {
        const bool branch_taken_0x1a3fc4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a3fc4) {
            ctx->pc = 0x1A3FECu;
            goto label_1a3fec;
        }
    }
    ctx->pc = 0x1A3FCCu;
label_1a3fcc:
    // 0x1a3fcc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a3fccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1a3fd0:
    // 0x1a3fd0: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a3fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a3fd4:
    // 0x1a3fd4: 0x24440134  addiu       $a0, $v0, 0x134
    ctx->pc = 0x1a3fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
label_1a3fd8:
    // 0x1a3fd8: 0xc068c84  jal         func_1A3210
label_1a3fdc:
    if (ctx->pc == 0x1A3FDCu) {
        ctx->pc = 0x1A3FE0u;
        goto label_1a3fe0;
    }
    ctx->pc = 0x1A3FD8u;
    SET_GPR_U32(ctx, 31, 0x1A3FE0u);
    ctx->pc = 0x1A3210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3210u, 0x1A3FD8u, 0x1A3FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3FE0u;
label_1a3fe0:
    // 0x1a3fe0: 0x262202b  sltu        $a0, $s3, $v0
    ctx->pc = 0x1a3fe0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a3fe4:
    // 0x1a3fe4: 0x1480ffec  bnez        $a0, . + 4 + (-0x14 << 2)
label_1a3fe8:
    if (ctx->pc == 0x1A3FE8u) {
        ctx->pc = 0x1A3FECu;
        goto label_1a3fec;
    }
    ctx->pc = 0x1A3FE4u;
    {
        const bool branch_taken_0x1a3fe4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3fe4) {
            ctx->pc = 0x1A3F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a3f98;
        }
    }
    ctx->pc = 0x1A3FECu;
label_1a3fec:
    // 0x1a3fec: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a3fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a3ff0:
    // 0x1a3ff0: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x1a3ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_1a3ff4:
    // 0x1a3ff4: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x1a3ff4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1a3ff8:
    // 0x1a3ff8: 0x24440134  addiu       $a0, $v0, 0x134
    ctx->pc = 0x1a3ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
label_1a3ffc:
    // 0x1a3ffc: 0xc068c84  jal         func_1A3210
label_1a4000:
    if (ctx->pc == 0x1A4000u) {
        ctx->pc = 0x1A4004u;
        goto label_1a4004;
    }
    ctx->pc = 0x1A3FFCu;
    SET_GPR_U32(ctx, 31, 0x1A4004u);
    ctx->pc = 0x1A3210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3210u, 0x1A3FFCu, 0x1A4004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4004u;
label_1a4004:
    // 0x1a4004: 0x262082b  sltu        $at, $s3, $v0
    ctx->pc = 0x1a4004u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a4008:
    // 0x1a4008: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1a400c:
    if (ctx->pc == 0x1A400Cu) {
        ctx->pc = 0x1A4010u;
        goto label_1a4010;
    }
    ctx->pc = 0x1A4008u;
    {
        const bool branch_taken_0x1a4008 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4008) {
            ctx->pc = 0x1A4020u;
            goto label_1a4020;
        }
    }
    ctx->pc = 0x1A4010u;
label_1a4010:
    // 0x1a4010: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1a4010u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1a4014:
    // 0x1a4014: 0x2ee2000a  sltiu       $v0, $s7, 0xA
    ctx->pc = 0x1a4014u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1a4018:
    // 0x1a4018: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
label_1a401c:
    if (ctx->pc == 0x1A401Cu) {
        ctx->pc = 0x1A4020u;
        goto label_1a4020;
    }
    ctx->pc = 0x1A4018u;
    {
        const bool branch_taken_0x1a4018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4018) {
            ctx->pc = 0x1A3F74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a3f74;
        }
    }
    ctx->pc = 0x1A4020u;
label_1a4020:
    // 0x1a4020: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x1a4020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a4024:
    // 0x1a4024: 0x24a40134  addiu       $a0, $a1, 0x134
    ctx->pc = 0x1a4024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 308));
label_1a4028:
    // 0x1a4028: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a4028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a402c:
    // 0x1a402c: 0xc068c6c  jal         func_1A31B0
label_1a4030:
    if (ctx->pc == 0x1A4030u) {
        ctx->pc = 0x1A4034u;
        goto label_1a4034;
    }
    ctx->pc = 0x1A402Cu;
    SET_GPR_U32(ctx, 31, 0x1A4034u);
    ctx->pc = 0x1A31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A31B0u, 0x1A402Cu, 0x1A4034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4034u;
label_1a4034:
    // 0x1a4034: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a4034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a4038:
    // 0x1a4038: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1a4038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_1a403c:
    // 0x1a403c: 0x7ba40100  lq          $a0, 0x100($sp)
    ctx->pc = 0x1a403cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1a4040:
    // 0x1a4040: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1a4040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a4044:
    // 0x1a4044: 0xc069bb4  jal         func_1A6ED0
label_1a4048:
    if (ctx->pc == 0x1A4048u) {
        ctx->pc = 0x1A404Cu;
        goto label_1a404c;
    }
    ctx->pc = 0x1A4044u;
    SET_GPR_U32(ctx, 31, 0x1A404Cu);
    ctx->pc = 0x1A6ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6ED0u, 0x1A4044u, 0x1A404Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A404Cu;
label_1a404c:
    // 0x1a404c: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x1a404cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a4050:
    // 0x1a4050: 0x24a4011c  addiu       $a0, $a1, 0x11C
    ctx->pc = 0x1a4050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 284));
label_1a4054:
    // 0x1a4054: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1a4054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a4058:
    // 0x1a4058: 0xc068170  jal         func_1A05C0
label_1a405c:
    if (ctx->pc == 0x1A405Cu) {
        ctx->pc = 0x1A4060u;
        goto label_1a4060;
    }
    ctx->pc = 0x1A4058u;
    SET_GPR_U32(ctx, 31, 0x1A4060u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x1A4058u, 0x1A4060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4060u;
label_1a4060:
    // 0x1a4060: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a4060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a4064:
    // 0x1a4064: 0xafa501ac  sw          $a1, 0x1AC($sp)
    ctx->pc = 0x1a4064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 5));
label_1a4068:
    // 0x1a4068: 0xafa001b0  sw          $zero, 0x1B0($sp)
    ctx->pc = 0x1a4068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 0));
label_1a406c:
    // 0x1a406c: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x1a406cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1a4070:
    // 0x1a4070: 0x27a501a8  addiu       $a1, $sp, 0x1A8
    ctx->pc = 0x1a4070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
label_1a4074:
    // 0x1a4074: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a4074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4078:
    // 0x1a4078: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a4078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a407c:
    // 0x1a407c: 0xc0af03c  jal         func_2BC0F0
label_1a4080:
    if (ctx->pc == 0x1A4080u) {
        ctx->pc = 0x1A4084u;
        goto label_1a4084;
    }
    ctx->pc = 0x1A407Cu;
    SET_GPR_U32(ctx, 31, 0x1A4084u);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x1A407Cu, 0x1A4084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4084u;
label_1a4084:
    // 0x1a4084: 0x10000062  b           . + 4 + (0x62 << 2)
label_1a4088:
    if (ctx->pc == 0x1A4088u) {
        ctx->pc = 0x1A408Cu;
        goto label_1a408c;
    }
    ctx->pc = 0x1A4084u;
    {
        const bool branch_taken_0x1a4084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4084) {
            ctx->pc = 0x1A4210u;
            goto label_1a4210;
        }
    }
    ctx->pc = 0x1A408Cu;
label_1a408c:
    // 0x1a408c: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x1a408cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a4090:
    // 0x1a4090: 0x24640134  addiu       $a0, $v1, 0x134
    ctx->pc = 0x1a4090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 308));
label_1a4094:
    // 0x1a4094: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a4094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4098:
    // 0x1a4098: 0xc068c6c  jal         func_1A31B0
label_1a409c:
    if (ctx->pc == 0x1A409Cu) {
        ctx->pc = 0x1A40A0u;
        goto label_1a40a0;
    }
    ctx->pc = 0x1A4098u;
    SET_GPR_U32(ctx, 31, 0x1A40A0u);
    ctx->pc = 0x1A31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A31B0u, 0x1A4098u, 0x1A40A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A40A0u;
label_1a40a0:
    // 0x1a40a0: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1a40a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_1a40a4:
    // 0x1a40a4: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x1a40a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1a40a8:
    // 0x1a40a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a40a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a40ac:
    // 0x1a40ac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a40acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a40b0:
    // 0x1a40b0: 0xc069ba0  jal         func_1A6E80
label_1a40b4:
    if (ctx->pc == 0x1A40B4u) {
        ctx->pc = 0x1A40B8u;
        goto label_1a40b8;
    }
    ctx->pc = 0x1A40B0u;
    SET_GPR_U32(ctx, 31, 0x1A40B8u);
    ctx->pc = 0x1A6E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E80u, 0x1A40B0u, 0x1A40B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A40B8u;
label_1a40b8:
    // 0x1a40b8: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a40b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a40bc:
    // 0x1a40bc: 0x244500cc  addiu       $a1, $v0, 0xCC
    ctx->pc = 0x1a40bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
label_1a40c0:
    // 0x1a40c0: 0x27a60198  addiu       $a2, $sp, 0x198
    ctx->pc = 0x1a40c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_1a40c4:
    // 0x1a40c4: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1a40c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a40c8:
    // 0x1a40c8: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1a40c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a40cc:
    // 0x1a40cc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1a40ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a40d0:
    // 0x1a40d0: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x1a40d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_1a40d4:
    // 0x1a40d4: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x1a40d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_1a40d8:
    // 0x1a40d8: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1a40d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_1a40dc:
    // 0x1a40dc: 0xc0de0d2  jal         func_378348
label_1a40e0:
    if (ctx->pc == 0x1A40E0u) {
        ctx->pc = 0x1A40E4u;
        goto label_1a40e4;
    }
    ctx->pc = 0x1A40DCu;
    SET_GPR_U32(ctx, 31, 0x1A40E4u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1A40DCu, 0x1A40E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A40E4u;
label_1a40e4:
    // 0x1a40e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a40e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a40e8:
    // 0x1a40e8: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x1a40e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a40ec:
    // 0x1a40ec: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_1a40f0:
    if (ctx->pc == 0x1A40F0u) {
        ctx->pc = 0x1A40F4u;
        goto label_1a40f4;
    }
    ctx->pc = 0x1A40ECu;
    {
        const bool branch_taken_0x1a40ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a40ec) {
            ctx->pc = 0x1A4114u;
            goto label_1a4114;
        }
    }
    ctx->pc = 0x1A40F4u;
label_1a40f4:
    // 0x1a40f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a40f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a40f8:
    // 0x1a40f8: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1a40f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_1a40fc:
    // 0x1a40fc: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x1a40fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1a4100:
    // 0x1a4100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4104:
    // 0x1a4104: 0x0  nop
    ctx->pc = 0x1a4104u;
    // NOP
label_1a4108:
    // 0x1a4108: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x1a4108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_1a410c:
    // 0x1a410c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a4110:
    if (ctx->pc == 0x1A4110u) {
        ctx->pc = 0x1A4114u;
        goto label_1a4114;
    }
    ctx->pc = 0x1A410Cu;
    {
        const bool branch_taken_0x1a410c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a410c) {
            ctx->pc = 0x1A4120u;
            goto label_1a4120;
        }
    }
    ctx->pc = 0x1A4114u;
label_1a4114:
    // 0x1a4114: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a4114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4118:
    // 0x1a4118: 0x0  nop
    ctx->pc = 0x1a4118u;
    // NOP
label_1a411c:
    // 0x1a411c: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x1a411cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_1a4120:
    // 0x1a4120: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a4120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a4124:
    // 0x1a4124: 0xc44300d8  lwc1        $f3, 0xD8($v0)
    ctx->pc = 0x1a4124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a4128:
    // 0x1a4128: 0xc7a201c8  lwc1        $f2, 0x1C8($sp)
    ctx->pc = 0x1a4128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a412c:
    // 0x1a412c: 0xc7a10198  lwc1        $f1, 0x198($sp)
    ctx->pc = 0x1a412cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4130:
    // 0x1a4130: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a4130u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4134:
    // 0x1a4134: 0x0  nop
    ctx->pc = 0x1a4134u;
    // NOP
label_1a4138:
    // 0x1a4138: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a4138u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1a413c:
    // 0x1a413c: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1a413cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1a4140:
    // 0x1a4140: 0xe7a00198  swc1        $f0, 0x198($sp)
    ctx->pc = 0x1a4140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_1a4144:
    // 0x1a4144: 0x3c0542a0  lui         $a1, 0x42A0
    ctx->pc = 0x1a4144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17056 << 16));
label_1a4148:
    // 0x1a4148: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1a4148u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1a414c:
    // 0x1a414c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1a414cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4150:
    // 0x1a4150: 0x0  nop
    ctx->pc = 0x1a4150u;
    // NOP
label_1a4154:
    // 0x1a4154: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1a4154u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a4158:
    // 0x1a4158: 0xc7a101a0  lwc1        $f1, 0x1A0($sp)
    ctx->pc = 0x1a4158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a415c:
    // 0x1a415c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a415cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4160:
    // 0x1a4160: 0x0  nop
    ctx->pc = 0x1a4160u;
    // NOP
label_1a4164:
    // 0x1a4164: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a4164u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1a4168:
    // 0x1a4168: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1a4168u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1a416c:
    // 0x1a416c: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x1a416cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_1a4170:
    // 0x1a4170: 0xc0b06cc  jal         func_2C1B30
label_1a4174:
    if (ctx->pc == 0x1A4174u) {
        ctx->pc = 0x1A4178u;
        goto label_1a4178;
    }
    ctx->pc = 0x1A4170u;
    SET_GPR_U32(ctx, 31, 0x1A4178u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x1A4170u, 0x1A4178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4178u;
label_1a4178:
    // 0x1a4178: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a417c:
    // 0x1a417c: 0xc0b06c4  jal         func_2C1B10
label_1a4180:
    if (ctx->pc == 0x1A4180u) {
        ctx->pc = 0x1A4184u;
        goto label_1a4184;
    }
    ctx->pc = 0x1A417Cu;
    SET_GPR_U32(ctx, 31, 0x1A4184u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x1A417Cu, 0x1A4184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4184u;
label_1a4184:
    // 0x1a4184: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4188:
    // 0x1a4188: 0x8e25002c  lw          $a1, 0x2C($s1)
    ctx->pc = 0x1a4188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1a418c:
    // 0x1a418c: 0x27a60198  addiu       $a2, $sp, 0x198
    ctx->pc = 0x1a418cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_1a4190:
    // 0x1a4190: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a4190u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4194:
    // 0x1a4194: 0xc0b43b8  jal         func_2D0EE0
label_1a4198:
    if (ctx->pc == 0x1A4198u) {
        ctx->pc = 0x1A419Cu;
        goto label_1a419c;
    }
    ctx->pc = 0x1A4194u;
    SET_GPR_U32(ctx, 31, 0x1A419Cu);
    ctx->pc = 0x2D0EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0EE0u, 0x1A4194u, 0x1A419Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A419Cu;
label_1a419c:
    // 0x1a419c: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a419cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a41a0:
    // 0x1a41a0: 0x24440134  addiu       $a0, $v0, 0x134
    ctx->pc = 0x1a41a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
label_1a41a4:
    // 0x1a41a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a41a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a41a8:
    // 0x1a41a8: 0xc068c6c  jal         func_1A31B0
label_1a41ac:
    if (ctx->pc == 0x1A41ACu) {
        ctx->pc = 0x1A41B0u;
        goto label_1a41b0;
    }
    ctx->pc = 0x1A41A8u;
    SET_GPR_U32(ctx, 31, 0x1A41B0u);
    ctx->pc = 0x1A31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A31B0u, 0x1A41A8u, 0x1A41B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A41B0u;
label_1a41b0:
    // 0x1a41b0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1a41b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_1a41b4:
    // 0x1a41b4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a41b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a41b8:
    // 0x1a41b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a41b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a41bc:
    // 0x1a41bc: 0xc069bc8  jal         func_1A6F20
label_1a41c0:
    if (ctx->pc == 0x1A41C0u) {
        ctx->pc = 0x1A41C4u;
        goto label_1a41c4;
    }
    ctx->pc = 0x1A41BCu;
    SET_GPR_U32(ctx, 31, 0x1A41C4u);
    ctx->pc = 0x1A6F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6F20u, 0x1A41BCu, 0x1A41C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A41C4u;
label_1a41c4:
    // 0x1a41c4: 0x10000012  b           . + 4 + (0x12 << 2)
label_1a41c8:
    if (ctx->pc == 0x1A41C8u) {
        ctx->pc = 0x1A41CCu;
        goto label_1a41cc;
    }
    ctx->pc = 0x1A41C4u;
    {
        const bool branch_taken_0x1a41c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a41c4) {
            ctx->pc = 0x1A4210u;
            goto label_1a4210;
        }
    }
    ctx->pc = 0x1A41CCu;
label_1a41cc:
    // 0x1a41cc: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a41ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a41d0:
    // 0x1a41d0: 0x24440134  addiu       $a0, $v0, 0x134
    ctx->pc = 0x1a41d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
label_1a41d4:
    // 0x1a41d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a41d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a41d8:
    // 0x1a41d8: 0xc068c6c  jal         func_1A31B0
label_1a41dc:
    if (ctx->pc == 0x1A41DCu) {
        ctx->pc = 0x1A41E0u;
        goto label_1a41e0;
    }
    ctx->pc = 0x1A41D8u;
    SET_GPR_U32(ctx, 31, 0x1A41E0u);
    ctx->pc = 0x1A31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A31B0u, 0x1A41D8u, 0x1A41E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A41E0u;
label_1a41e0:
    // 0x1a41e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a41e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a41e4:
    // 0x1a41e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a41e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a41e8:
    // 0x1a41e8: 0xc069ba0  jal         func_1A6E80
label_1a41ec:
    if (ctx->pc == 0x1A41ECu) {
        ctx->pc = 0x1A41F0u;
        goto label_1a41f0;
    }
    ctx->pc = 0x1A41E8u;
    SET_GPR_U32(ctx, 31, 0x1A41F0u);
    ctx->pc = 0x1A6E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6E80u, 0x1A41E8u, 0x1A41F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A41F0u;
label_1a41f0:
    // 0x1a41f0: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a41f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a41f4:
    // 0x1a41f4: 0x24440134  addiu       $a0, $v0, 0x134
    ctx->pc = 0x1a41f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
label_1a41f8:
    // 0x1a41f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a41f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a41fc:
    // 0x1a41fc: 0xc068c6c  jal         func_1A31B0
label_1a4200:
    if (ctx->pc == 0x1A4200u) {
        ctx->pc = 0x1A4204u;
        goto label_1a4204;
    }
    ctx->pc = 0x1A41FCu;
    SET_GPR_U32(ctx, 31, 0x1A4204u);
    ctx->pc = 0x1A31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A31B0u, 0x1A41FCu, 0x1A4204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4204u;
label_1a4204:
    // 0x1a4204: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a4204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a4208:
    // 0x1a4208: 0xc069dc4  jal         func_1A7710
label_1a420c:
    if (ctx->pc == 0x1A420Cu) {
        ctx->pc = 0x1A4210u;
        goto label_1a4210;
    }
    ctx->pc = 0x1A4208u;
    SET_GPR_U32(ctx, 31, 0x1A4210u);
    ctx->pc = 0x1A7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7710u, 0x1A4208u, 0x1A4210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4210u;
label_1a4210:
    // 0x1a4210: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a4210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a4214:
    // 0x1a4214: 0x24440134  addiu       $a0, $v0, 0x134
    ctx->pc = 0x1a4214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
label_1a4218:
    // 0x1a4218: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a4218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a421c:
    // 0x1a421c: 0xc068c6c  jal         func_1A31B0
label_1a4220:
    if (ctx->pc == 0x1A4220u) {
        ctx->pc = 0x1A4224u;
        goto label_1a4224;
    }
    ctx->pc = 0x1A421Cu;
    SET_GPR_U32(ctx, 31, 0x1A4224u);
    ctx->pc = 0x1A31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A31B0u, 0x1A421Cu, 0x1A4224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4224u;
label_1a4224:
    // 0x1a4224: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a4224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a4228:
    // 0x1a4228: 0xc069e5c  jal         func_1A7970
label_1a422c:
    if (ctx->pc == 0x1A422Cu) {
        ctx->pc = 0x1A4230u;
        goto label_1a4230;
    }
    ctx->pc = 0x1A4228u;
    SET_GPR_U32(ctx, 31, 0x1A4230u);
    ctx->pc = 0x1A7970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7970u, 0x1A4228u, 0x1A4230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4230u;
label_1a4230:
    // 0x1a4230: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x1a4230u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_1a4234:
    // 0x1a4234: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a4234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a4238:
    // 0x1a4238: 0xafb001c4  sw          $s0, 0x1C4($sp)
    ctx->pc = 0x1a4238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 16));
label_1a423c:
    // 0x1a423c: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a423cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a4240:
    // 0x1a4240: 0x24440128  addiu       $a0, $v0, 0x128
    ctx->pc = 0x1a4240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
label_1a4244:
    // 0x1a4244: 0xc068e98  jal         func_1A3A60
label_1a4248:
    if (ctx->pc == 0x1A4248u) {
        ctx->pc = 0x1A424Cu;
        goto label_1a424c;
    }
    ctx->pc = 0x1A4244u;
    SET_GPR_U32(ctx, 31, 0x1A424Cu);
    ctx->pc = 0x1A3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A60u, 0x1A4244u, 0x1A424Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A424Cu;
label_1a424c:
    // 0x1a424c: 0x16c2feb4  bne         $s6, $v0, . + 4 + (-0x14C << 2)
label_1a4250:
    if (ctx->pc == 0x1A4250u) {
        ctx->pc = 0x1A4254u;
        goto label_1a4254;
    }
    ctx->pc = 0x1A424Cu;
    {
        const bool branch_taken_0x1a424c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a424c) {
            ctx->pc = 0x1A3D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a3d20;
        }
    }
    ctx->pc = 0x1A4254u;
label_1a4254:
    // 0x1a4254: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x1a4254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a4258:
    // 0x1a4258: 0x10000010  b           . + 4 + (0x10 << 2)
label_1a425c:
    if (ctx->pc == 0x1A425Cu) {
        ctx->pc = 0x1A4260u;
        goto label_1a4260;
    }
    ctx->pc = 0x1A4258u;
    {
        const bool branch_taken_0x1a4258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4258) {
            ctx->pc = 0x1A429Cu;
            goto label_1a429c;
        }
    }
    ctx->pc = 0x1A4260u;
label_1a4260:
    // 0x1a4260: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x1a4260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a4264:
    // 0x1a4264: 0xc06479c  jal         func_191E70
label_1a4268:
    if (ctx->pc == 0x1A4268u) {
        ctx->pc = 0x1A426Cu;
        goto label_1a426c;
    }
    ctx->pc = 0x1A4264u;
    SET_GPR_U32(ctx, 31, 0x1A426Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A4264u, 0x1A426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A426Cu;
label_1a426c:
    // 0x1a426c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1a426cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_1a4270:
    // 0x1a4270: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a4270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a4274:
    // 0x1a4274: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1a4274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
label_1a4278:
    // 0x1a4278: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a4278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a427c:
    // 0x1a427c: 0xc05612c  jal         func_1584B0
label_1a4280:
    if (ctx->pc == 0x1A4280u) {
        ctx->pc = 0x1A4284u;
        goto label_1a4284;
    }
    ctx->pc = 0x1A427Cu;
    SET_GPR_U32(ctx, 31, 0x1A4284u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A427Cu, 0x1A4284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4284u;
label_1a4284:
    // 0x1a4284: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a4284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a4288:
    // 0x1a4288: 0x7ba400d0  lq          $a0, 0xD0($sp)
    ctx->pc = 0x1a4288u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1a428c:
    // 0x1a428c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a428cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4290:
    // 0x1a4290: 0xc08c8dc  jal         func_232370
label_1a4294:
    if (ctx->pc == 0x1A4294u) {
        ctx->pc = 0x1A4298u;
        goto label_1a4298;
    }
    ctx->pc = 0x1A4290u;
    SET_GPR_U32(ctx, 31, 0x1A4298u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1A4290u, 0x1A4298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4298u;
label_1a4298:
    // 0x1a4298: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a4298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a429c:
    // 0x1a429c: 0x2a02001c  slti        $v0, $s0, 0x1C
    ctx->pc = 0x1a429cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)28) ? 1 : 0);
label_1a42a0:
    // 0x1a42a0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1a42a4:
    if (ctx->pc == 0x1A42A4u) {
        ctx->pc = 0x1A42A8u;
        goto label_1a42a8;
    }
    ctx->pc = 0x1A42A0u;
    {
        const bool branch_taken_0x1a42a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a42a0) {
            ctx->pc = 0x1A4260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4260;
        }
    }
    ctx->pc = 0x1A42A8u;
label_1a42a8:
    // 0x1a42a8: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x1a42a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a42ac:
    // 0x1a42ac: 0xc0697b8  jal         func_1A5EE0
label_1a42b0:
    if (ctx->pc == 0x1A42B0u) {
        ctx->pc = 0x1A42B4u;
        goto label_1a42b4;
    }
    ctx->pc = 0x1A42ACu;
    SET_GPR_U32(ctx, 31, 0x1A42B4u);
    ctx->pc = 0x1A5EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5EE0u, 0x1A42ACu, 0x1A42B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A42B4u;
label_1a42b4:
    // 0x1a42b4: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1a42b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1a42b8:
    // 0x1a42b8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1a42b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a42bc:
    // 0x1a42bc: 0xe7a001d8  swc1        $f0, 0x1D8($sp)
    ctx->pc = 0x1a42bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_1a42c0:
    // 0x1a42c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a42c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a42c4:
    // 0x1a42c4: 0x0  nop
    ctx->pc = 0x1a42c4u;
    // NOP
label_1a42c8:
    // 0x1a42c8: 0xe7a001d4  swc1        $f0, 0x1D4($sp)
    ctx->pc = 0x1a42c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
label_1a42cc:
    // 0x1a42cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a42ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a42d0:
    // 0x1a42d0: 0x10000073  b           . + 4 + (0x73 << 2)
label_1a42d4:
    if (ctx->pc == 0x1A42D4u) {
        ctx->pc = 0x1A42D8u;
        goto label_1a42d8;
    }
    ctx->pc = 0x1A42D0u;
    {
        const bool branch_taken_0x1a42d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a42d0) {
            ctx->pc = 0x1A44A0u;
            goto label_1a44a0;
        }
    }
    ctx->pc = 0x1A42D8u;
label_1a42d8:
    // 0x1a42d8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a42d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1a42dc:
    // 0x1a42dc: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a42dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a42e0:
    // 0x1a42e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a42e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a42e4:
    // 0x1a42e4: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1a42e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a42e8:
    // 0x1a42e8: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x1a42e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a42ec:
    // 0x1a42ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a42ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a42f0:
    // 0x1a42f0: 0xe4400114  swc1        $f0, 0x114($v0)
    ctx->pc = 0x1a42f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1a42f4:
    // 0x1a42f4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a42f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1a42f8:
    // 0x1a42f8: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a42f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a42fc:
    // 0x1a42fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a42fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a4300:
    // 0x1a4300: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1a4300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4304:
    // 0x1a4304: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a4304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4308:
    // 0x1a4308: 0x0  nop
    ctx->pc = 0x1a4308u;
    // NOP
label_1a430c:
    // 0x1a430c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a430cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4310:
    // 0x1a4310: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1a4314:
    if (ctx->pc == 0x1A4314u) {
        ctx->pc = 0x1A4318u;
        goto label_1a4318;
    }
    ctx->pc = 0x1A4310u;
    {
        const bool branch_taken_0x1a4310 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a4310) {
            ctx->pc = 0x1A432Cu;
            goto label_1a432c;
        }
    }
    ctx->pc = 0x1A4318u;
label_1a4318:
    // 0x1a4318: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a4318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a431c:
    // 0x1a431c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a431cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1a4320:
    // 0x1a4320: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a4320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a4324:
    // 0x1a4324: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a4324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a4328:
    // 0x1a4328: 0xe4400114  swc1        $f0, 0x114($v0)
    ctx->pc = 0x1a4328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1a432c:
    // 0x1a432c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a432cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1a4330:
    // 0x1a4330: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a4330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a4334:
    // 0x1a4334: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a4334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a4338:
    // 0x1a4338: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1a4338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a433c:
    // 0x1a433c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a433cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4340:
    // 0x1a4340: 0x0  nop
    ctx->pc = 0x1a4340u;
    // NOP
label_1a4344:
    // 0x1a4344: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1a4344u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4348:
    // 0x1a4348: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1a434c:
    if (ctx->pc == 0x1A434Cu) {
        ctx->pc = 0x1A4350u;
        goto label_1a4350;
    }
    ctx->pc = 0x1A4348u;
    {
        const bool branch_taken_0x1a4348 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a4348) {
            ctx->pc = 0x1A435Cu;
            goto label_1a435c;
        }
    }
    ctx->pc = 0x1A4350u;
label_1a4350:
    // 0x1a4350: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1a4350u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4354:
    // 0x1a4354: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a4358:
    if (ctx->pc == 0x1A4358u) {
        ctx->pc = 0x1A435Cu;
        goto label_1a435c;
    }
    ctx->pc = 0x1A4354u;
    {
        const bool branch_taken_0x1a4354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4354) {
            ctx->pc = 0x1A4364u;
            goto label_1a4364;
        }
    }
    ctx->pc = 0x1A435Cu;
label_1a435c:
    // 0x1a435c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a435cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4360:
    // 0x1a4360: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x1a4360u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1a4364:
    // 0x1a4364: 0xa3be01ef  sb          $fp, 0x1EF($sp)
    ctx->pc = 0x1a4364u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 495), (uint8_t)GPR_U32(ctx, 30));
label_1a4368:
    // 0x1a4368: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1a4368u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a436c:
    // 0x1a436c: 0x10000048  b           . + 4 + (0x48 << 2)
label_1a4370:
    if (ctx->pc == 0x1A4370u) {
        ctx->pc = 0x1A4374u;
        goto label_1a4374;
    }
    ctx->pc = 0x1A436Cu;
    {
        const bool branch_taken_0x1a436c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a436c) {
            ctx->pc = 0x1A4490u;
            goto label_1a4490;
        }
    }
    ctx->pc = 0x1A4374u;
label_1a4374:
    // 0x1a4374: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x1a4374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a4378:
    // 0x1a4378: 0xc06479c  jal         func_191E70
label_1a437c:
    if (ctx->pc == 0x1A437Cu) {
        ctx->pc = 0x1A4380u;
        goto label_1a4380;
    }
    ctx->pc = 0x1A4378u;
    SET_GPR_U32(ctx, 31, 0x1A4380u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A4378u, 0x1A4380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4380u;
label_1a4380:
    // 0x1a4380: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1a4380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_1a4384:
    // 0x1a4384: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x1a4384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a4388:
    // 0x1a4388: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a4388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1a438c:
    // 0x1a438c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a438cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1a4390:
    // 0x1a4390: 0x24420012  addiu       $v0, $v0, 0x12
    ctx->pc = 0x1a4390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18));
label_1a4394:
    // 0x1a4394: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x1a4394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1a4398:
    // 0x1a4398: 0x246400dc  addiu       $a0, $v1, 0xDC
    ctx->pc = 0x1a4398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 220));
label_1a439c:
    // 0x1a439c: 0xc05612c  jal         func_1584B0
label_1a43a0:
    if (ctx->pc == 0x1A43A0u) {
        ctx->pc = 0x1A43A4u;
        goto label_1a43a4;
    }
    ctx->pc = 0x1A439Cu;
    SET_GPR_U32(ctx, 31, 0x1A43A4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A439Cu, 0x1A43A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A43A4u;
label_1a43a4:
    // 0x1a43a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a43a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a43a8:
    // 0x1a43a8: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x1a43a8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1a43ac:
    // 0x1a43ac: 0x93a601ef  lbu         $a2, 0x1EF($sp)
    ctx->pc = 0x1a43acu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 495)));
label_1a43b0:
    // 0x1a43b0: 0xc08c8dc  jal         func_232370
label_1a43b4:
    if (ctx->pc == 0x1A43B4u) {
        ctx->pc = 0x1A43B8u;
        goto label_1a43b8;
    }
    ctx->pc = 0x1A43B0u;
    SET_GPR_U32(ctx, 31, 0x1A43B8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1A43B0u, 0x1A43B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A43B8u;
label_1a43b8:
    // 0x1a43b8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a43b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1a43bc:
    // 0x1a43bc: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a43bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a43c0:
    // 0x1a43c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a43c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a43c4:
    // 0x1a43c4: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1a43c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a43c8:
    // 0x1a43c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a43c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1a43cc:
    // 0x1a43cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a43ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a43d0:
    // 0x1a43d0: 0x0  nop
    ctx->pc = 0x1a43d0u;
    // NOP
label_1a43d4:
    // 0x1a43d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a43d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a43d8:
    // 0x1a43d8: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
label_1a43dc:
    if (ctx->pc == 0x1A43DCu) {
        ctx->pc = 0x1A43E0u;
        goto label_1a43e0;
    }
    ctx->pc = 0x1A43D8u;
    {
        const bool branch_taken_0x1a43d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a43d8) {
            ctx->pc = 0x1A448Cu;
            goto label_1a448c;
        }
    }
    ctx->pc = 0x1A43E0u;
label_1a43e0:
    // 0x1a43e0: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x1a43e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a43e4:
    // 0x1a43e4: 0xc06479c  jal         func_191E70
label_1a43e8:
    if (ctx->pc == 0x1A43E8u) {
        ctx->pc = 0x1A43ECu;
        goto label_1a43ec;
    }
    ctx->pc = 0x1A43E4u;
    SET_GPR_U32(ctx, 31, 0x1A43ECu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A43E4u, 0x1A43ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A43ECu;
label_1a43ec:
    // 0x1a43ec: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1a43ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_1a43f0:
    // 0x1a43f0: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x1a43f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a43f4:
    // 0x1a43f4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a43f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1a43f8:
    // 0x1a43f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a43f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1a43fc:
    // 0x1a43fc: 0x24420012  addiu       $v0, $v0, 0x12
    ctx->pc = 0x1a43fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18));
label_1a4400:
    // 0x1a4400: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x1a4400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1a4404:
    // 0x1a4404: 0x246400dc  addiu       $a0, $v1, 0xDC
    ctx->pc = 0x1a4404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 220));
label_1a4408:
    // 0x1a4408: 0xc05612c  jal         func_1584B0
label_1a440c:
    if (ctx->pc == 0x1A440Cu) {
        ctx->pc = 0x1A4410u;
        goto label_1a4410;
    }
    ctx->pc = 0x1A4408u;
    SET_GPR_U32(ctx, 31, 0x1A4410u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A4408u, 0x1A4410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4410u;
label_1a4410:
    // 0x1a4410: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a4410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a4414:
    // 0x1a4414: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x1a4414u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1a4418:
    // 0x1a4418: 0xc08c9a8  jal         func_2326A0
label_1a441c:
    if (ctx->pc == 0x1A441Cu) {
        ctx->pc = 0x1A4420u;
        goto label_1a4420;
    }
    ctx->pc = 0x1A4418u;
    SET_GPR_U32(ctx, 31, 0x1A4420u);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x1A4418u, 0x1A4420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4420u;
label_1a4420:
    // 0x1a4420: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1a4424:
    if (ctx->pc == 0x1A4424u) {
        ctx->pc = 0x1A4428u;
        goto label_1a4428;
    }
    ctx->pc = 0x1A4420u;
    {
        const bool branch_taken_0x1a4420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4420) {
            ctx->pc = 0x1A448Cu;
            goto label_1a448c;
        }
    }
    ctx->pc = 0x1A4428u;
label_1a4428:
    // 0x1a4428: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x1a4428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a442c:
    // 0x1a442c: 0xc06479c  jal         func_191E70
label_1a4430:
    if (ctx->pc == 0x1A4430u) {
        ctx->pc = 0x1A4434u;
        goto label_1a4434;
    }
    ctx->pc = 0x1A442Cu;
    SET_GPR_U32(ctx, 31, 0x1A4434u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A442Cu, 0x1A4434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4434u;
label_1a4434:
    // 0x1a4434: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1a4434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_1a4438:
    // 0x1a4438: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x1a4438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a443c:
    // 0x1a443c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a443cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1a4440:
    // 0x1a4440: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a4440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1a4444:
    // 0x1a4444: 0x24420012  addiu       $v0, $v0, 0x12
    ctx->pc = 0x1a4444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18));
label_1a4448:
    // 0x1a4448: 0x2822821  addu        $a1, $s4, $v0
    ctx->pc = 0x1a4448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1a444c:
    // 0x1a444c: 0x246400dc  addiu       $a0, $v1, 0xDC
    ctx->pc = 0x1a444cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 220));
label_1a4450:
    // 0x1a4450: 0xc05612c  jal         func_1584B0
label_1a4454:
    if (ctx->pc == 0x1A4454u) {
        ctx->pc = 0x1A4458u;
        goto label_1a4458;
    }
    ctx->pc = 0x1A4450u;
    SET_GPR_U32(ctx, 31, 0x1A4458u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A4450u, 0x1A4458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4458u;
label_1a4458:
    // 0x1a4458: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a4458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a445c:
    // 0x1a445c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a445cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a4460:
    // 0x1a4460: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1a4460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1a4464:
    // 0x1a4464: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a4464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a4468:
    // 0x1a4468: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a4468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a446c:
    // 0x1a446c: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x1a446cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1a4470:
    // 0x1a4470: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1a4470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a4474:
    // 0x1a4474: 0x27a701d4  addiu       $a3, $sp, 0x1D4
    ctx->pc = 0x1a4474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
label_1a4478:
    // 0x1a4478: 0xc44d0114  lwc1        $f13, 0x114($v0)
    ctx->pc = 0x1a4478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a447c:
    // 0x1a447c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a447cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4480:
    // 0x1a4480: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a4480u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4484:
    // 0x1a4484: 0xc08b9fc  jal         func_22E7F0
label_1a4488:
    if (ctx->pc == 0x1A4488u) {
        ctx->pc = 0x1A448Cu;
        goto label_1a448c;
    }
    ctx->pc = 0x1A4484u;
    SET_GPR_U32(ctx, 31, 0x1A448Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1A4484u, 0x1A448Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A448Cu;
label_1a448c:
    // 0x1a448c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1a448cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1a4490:
    // 0x1a4490: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x1a4490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
label_1a4494:
    // 0x1a4494: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
label_1a4498:
    if (ctx->pc == 0x1A4498u) {
        ctx->pc = 0x1A449Cu;
        goto label_1a449c;
    }
    ctx->pc = 0x1A4494u;
    {
        const bool branch_taken_0x1a4494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4494) {
            ctx->pc = 0x1A4374u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a4374;
        }
    }
    ctx->pc = 0x1A449Cu;
label_1a449c:
    // 0x1a449c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a449cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a44a0:
    // 0x1a44a0: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1a44a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1a44a4:
    // 0x1a44a4: 0x1440ff8c  bnez        $v0, . + 4 + (-0x74 << 2)
label_1a44a8:
    if (ctx->pc == 0x1A44A8u) {
        ctx->pc = 0x1A44ACu;
        goto label_1a44ac;
    }
    ctx->pc = 0x1A44A4u;
    {
        const bool branch_taken_0x1a44a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a44a4) {
            ctx->pc = 0x1A42D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a42d8;
        }
    }
    ctx->pc = 0x1A44ACu;
label_1a44ac:
    // 0x1a44ac: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a44acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a44b0:
    // 0x1a44b0: 0x24440134  addiu       $a0, $v0, 0x134
    ctx->pc = 0x1a44b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
label_1a44b4:
    // 0x1a44b4: 0xc068c84  jal         func_1A3210
label_1a44b8:
    if (ctx->pc == 0x1A44B8u) {
        ctx->pc = 0x1A44BCu;
        goto label_1a44bc;
    }
    ctx->pc = 0x1A44B4u;
    SET_GPR_U32(ctx, 31, 0x1A44BCu);
    ctx->pc = 0x1A3210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3210u, 0x1A44B4u, 0x1A44BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A44BCu;
label_1a44bc:
    // 0x1a44bc: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x1a44bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_1a44c0:
    // 0x1a44c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a44c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a44c4:
    // 0x1a44c4: 0x10000115  b           . + 4 + (0x115 << 2)
label_1a44c8:
    if (ctx->pc == 0x1A44C8u) {
        ctx->pc = 0x1A44CCu;
        goto label_1a44cc;
    }
    ctx->pc = 0x1A44C4u;
    {
        const bool branch_taken_0x1a44c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a44c4) {
            ctx->pc = 0x1A491Cu;
            goto label_1a491c;
        }
    }
    ctx->pc = 0x1A44CCu;
label_1a44cc:
    // 0x1a44cc: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a44ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a44d0:
    // 0x1a44d0: 0x24440134  addiu       $a0, $v0, 0x134
    ctx->pc = 0x1a44d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
label_1a44d4:
    // 0x1a44d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a44d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a44d8:
    // 0x1a44d8: 0xc068c6c  jal         func_1A31B0
label_1a44dc:
    if (ctx->pc == 0x1A44DCu) {
        ctx->pc = 0x1A44E0u;
        goto label_1a44e0;
    }
    ctx->pc = 0x1A44D8u;
    SET_GPR_U32(ctx, 31, 0x1A44E0u);
    ctx->pc = 0x1A31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A31B0u, 0x1A44D8u, 0x1A44E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A44E0u;
label_1a44e0:
    // 0x1a44e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a44e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a44e4:
    // 0x1a44e4: 0xc069da0  jal         func_1A7680
label_1a44e8:
    if (ctx->pc == 0x1A44E8u) {
        ctx->pc = 0x1A44ECu;
        goto label_1a44ec;
    }
    ctx->pc = 0x1A44E4u;
    SET_GPR_U32(ctx, 31, 0x1A44ECu);
    ctx->pc = 0x1A7680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7680u, 0x1A44E4u, 0x1A44ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A44ECu;
label_1a44ec:
    // 0x1a44ec: 0xafa201cc  sw          $v0, 0x1CC($sp)
    ctx->pc = 0x1a44ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 2));
label_1a44f0:
    // 0x1a44f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a44f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a44f4:
    // 0x1a44f4: 0x1000005f  b           . + 4 + (0x5F << 2)
label_1a44f8:
    if (ctx->pc == 0x1A44F8u) {
        ctx->pc = 0x1A44FCu;
        goto label_1a44fc;
    }
    ctx->pc = 0x1A44F4u;
    {
        const bool branch_taken_0x1a44f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a44f4) {
            ctx->pc = 0x1A4674u;
            goto label_1a4674;
        }
    }
    ctx->pc = 0x1A44FCu;
label_1a44fc:
    // 0x1a44fc: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a44fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a4500:
    // 0x1a4500: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4504:
    // 0x1a4504: 0xc06479c  jal         func_191E70
label_1a4508:
    if (ctx->pc == 0x1A4508u) {
        ctx->pc = 0x1A450Cu;
        goto label_1a450c;
    }
    ctx->pc = 0x1A4504u;
    SET_GPR_U32(ctx, 31, 0x1A450Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A4504u, 0x1A450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A450Cu;
label_1a450c:
    // 0x1a450c: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x1a450cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
label_1a4510:
    // 0x1a4510: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x1a4510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a4514:
    // 0x1a4514: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x1a4514u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1a4518:
    // 0x1a4518: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x1a4518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_1a451c:
    // 0x1a451c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1a451cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1a4520:
    // 0x1a4520: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x1a4520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1a4524:
    // 0x1a4524: 0x246200dc  addiu       $v0, $v1, 0xDC
    ctx->pc = 0x1a4524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 220));
label_1a4528:
    // 0x1a4528: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a452c:
    // 0x1a452c: 0xc05612c  jal         func_1584B0
label_1a4530:
    if (ctx->pc == 0x1A4530u) {
        ctx->pc = 0x1A4534u;
        goto label_1a4534;
    }
    ctx->pc = 0x1A452Cu;
    SET_GPR_U32(ctx, 31, 0x1A4534u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A452Cu, 0x1A4534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4534u;
label_1a4534:
    // 0x1a4534: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a4534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4538:
    // 0x1a4538: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a4538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a453c:
    // 0x1a453c: 0x7ba40150  lq          $a0, 0x150($sp)
    ctx->pc = 0x1a453cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1a4540:
    // 0x1a4540: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a4540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4544:
    // 0x1a4544: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a4544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4548:
    // 0x1a4548: 0xc08c8dc  jal         func_232370
label_1a454c:
    if (ctx->pc == 0x1A454Cu) {
        ctx->pc = 0x1A4550u;
        goto label_1a4550;
    }
    ctx->pc = 0x1A4548u;
    SET_GPR_U32(ctx, 31, 0x1A4550u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1A4548u, 0x1A4550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4550u;
label_1a4550:
    // 0x1a4550: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a4550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4554:
    // 0x1a4554: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a4554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a4558:
    // 0x1a4558: 0x24440134  addiu       $a0, $v0, 0x134
    ctx->pc = 0x1a4558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
label_1a455c:
    // 0x1a455c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a455cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4560:
    // 0x1a4560: 0xc068c6c  jal         func_1A31B0
label_1a4564:
    if (ctx->pc == 0x1A4564u) {
        ctx->pc = 0x1A4568u;
        goto label_1a4568;
    }
    ctx->pc = 0x1A4560u;
    SET_GPR_U32(ctx, 31, 0x1A4568u);
    ctx->pc = 0x1A31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A31B0u, 0x1A4560u, 0x1A4568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4568u;
label_1a4568:
    // 0x1a4568: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a4568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a456c:
    // 0x1a456c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a456cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a4570:
    // 0x1a4570: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4574:
    // 0x1a4574: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a4574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a4578:
    // 0x1a4578: 0x27a60188  addiu       $a2, $sp, 0x188
    ctx->pc = 0x1a4578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
label_1a457c:
    // 0x1a457c: 0xc069d6c  jal         func_1A75B0
label_1a4580:
    if (ctx->pc == 0x1A4580u) {
        ctx->pc = 0x1A4584u;
        goto label_1a4584;
    }
    ctx->pc = 0x1A457Cu;
    SET_GPR_U32(ctx, 31, 0x1A4584u);
    ctx->pc = 0x1A75B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A75B0u, 0x1A457Cu, 0x1A4584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4584u;
label_1a4584:
    // 0x1a4584: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a4584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a4588:
    // 0x1a4588: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a458c:
    // 0x1a458c: 0xc06479c  jal         func_191E70
label_1a4590:
    if (ctx->pc == 0x1A4590u) {
        ctx->pc = 0x1A4594u;
        goto label_1a4594;
    }
    ctx->pc = 0x1A458Cu;
    SET_GPR_U32(ctx, 31, 0x1A4594u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A458Cu, 0x1A4594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4594u;
label_1a4594:
    // 0x1a4594: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x1a4594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
label_1a4598:
    // 0x1a4598: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x1a4598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a459c:
    // 0x1a459c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1a459cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1a45a0:
    // 0x1a45a0: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1a45a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1a45a4:
    // 0x1a45a4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1a45a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1a45a8:
    // 0x1a45a8: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x1a45a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1a45ac:
    // 0x1a45ac: 0x248200dc  addiu       $v0, $a0, 0xDC
    ctx->pc = 0x1a45acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 220));
label_1a45b0:
    // 0x1a45b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a45b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a45b4:
    // 0x1a45b4: 0xc05612c  jal         func_1584B0
label_1a45b8:
    if (ctx->pc == 0x1A45B8u) {
        ctx->pc = 0x1A45BCu;
        goto label_1a45bc;
    }
    ctx->pc = 0x1A45B4u;
    SET_GPR_U32(ctx, 31, 0x1A45BCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A45B4u, 0x1A45BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A45BCu;
label_1a45bc:
    // 0x1a45bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a45bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a45c0:
    // 0x1a45c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a45c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a45c4:
    // 0x1a45c4: 0x7ba40140  lq          $a0, 0x140($sp)
    ctx->pc = 0x1a45c4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1a45c8:
    // 0x1a45c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a45c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a45cc:
    // 0x1a45cc: 0x27a60190  addiu       $a2, $sp, 0x190
    ctx->pc = 0x1a45ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_1a45d0:
    // 0x1a45d0: 0xc08c688  jal         func_231A20
label_1a45d4:
    if (ctx->pc == 0x1A45D4u) {
        ctx->pc = 0x1A45D8u;
        goto label_1a45d8;
    }
    ctx->pc = 0x1A45D0u;
    SET_GPR_U32(ctx, 31, 0x1A45D8u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1A45D0u, 0x1A45D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A45D8u;
label_1a45d8:
    // 0x1a45d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a45d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a45dc:
    // 0x1a45dc: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1a45dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1a45e0:
    // 0x1a45e0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1a45e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1a45e4:
    // 0x1a45e4: 0xc7a20190  lwc1        $f2, 0x190($sp)
    ctx->pc = 0x1a45e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a45e8:
    // 0x1a45e8: 0xc7a10188  lwc1        $f1, 0x188($sp)
    ctx->pc = 0x1a45e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a45ec:
    // 0x1a45ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a45ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a45f0:
    // 0x1a45f0: 0x0  nop
    ctx->pc = 0x1a45f0u;
    // NOP
label_1a45f4:
    // 0x1a45f4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a45f4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1a45f8:
    // 0x1a45f8: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1a45f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1a45fc:
    // 0x1a45fc: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x1a45fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_1a4600:
    // 0x1a4600: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a4600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1a4604:
    // 0x1a4604: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a4604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1a4608:
    // 0x1a4608: 0xc7a20194  lwc1        $f2, 0x194($sp)
    ctx->pc = 0x1a4608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a460c:
    // 0x1a460c: 0xc7a1018c  lwc1        $f1, 0x18C($sp)
    ctx->pc = 0x1a460cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4610:
    // 0x1a4610: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a4610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4614:
    // 0x1a4614: 0x0  nop
    ctx->pc = 0x1a4614u;
    // NOP
label_1a4618:
    // 0x1a4618: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a4618u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1a461c:
    // 0x1a461c: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1a461cu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1a4620:
    // 0x1a4620: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x1a4620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
label_1a4624:
    // 0x1a4624: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x1a4624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a4628:
    // 0x1a4628: 0xc06479c  jal         func_191E70
label_1a462c:
    if (ctx->pc == 0x1A462Cu) {
        ctx->pc = 0x1A4630u;
        goto label_1a4630;
    }
    ctx->pc = 0x1A4628u;
    SET_GPR_U32(ctx, 31, 0x1A4630u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A4628u, 0x1A4630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4630u;
label_1a4630:
    // 0x1a4630: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x1a4630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_1a4634:
    // 0x1a4634: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x1a4634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a4638:
    // 0x1a4638: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x1a4638u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1a463c:
    // 0x1a463c: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x1a463cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_1a4640:
    // 0x1a4640: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1a4640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_1a4644:
    // 0x1a4644: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x1a4644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1a4648:
    // 0x1a4648: 0x248400dc  addiu       $a0, $a0, 0xDC
    ctx->pc = 0x1a4648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 220));
label_1a464c:
    // 0x1a464c: 0xc05612c  jal         func_1584B0
label_1a4650:
    if (ctx->pc == 0x1A4650u) {
        ctx->pc = 0x1A4654u;
        goto label_1a4654;
    }
    ctx->pc = 0x1A464Cu;
    SET_GPR_U32(ctx, 31, 0x1A4654u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A464Cu, 0x1A4654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4654u;
label_1a4654:
    // 0x1a4654: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a4654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a4658:
    // 0x1a4658: 0x7ba40130  lq          $a0, 0x130($sp)
    ctx->pc = 0x1a4658u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1a465c:
    // 0x1a465c: 0xc7ac0188  lwc1        $f12, 0x188($sp)
    ctx->pc = 0x1a465cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a4660:
    // 0x1a4660: 0xc7ad018c  lwc1        $f13, 0x18C($sp)
    ctx->pc = 0x1a4660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a4664:
    // 0x1a4664: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a4664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4668:
    // 0x1a4668: 0xc08c208  jal         func_230820
label_1a466c:
    if (ctx->pc == 0x1A466Cu) {
        ctx->pc = 0x1A4670u;
        goto label_1a4670;
    }
    ctx->pc = 0x1A4668u;
    SET_GPR_U32(ctx, 31, 0x1A4670u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1A4668u, 0x1A4670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4670u;
label_1a4670:
    // 0x1a4670: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a4670u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1a4674:
    // 0x1a4674: 0x8fa301cc  lw          $v1, 0x1CC($sp)
    ctx->pc = 0x1a4674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
label_1a4678:
    // 0x1a4678: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x1a4678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1a467c:
    // 0x1a467c: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
label_1a4680:
    if (ctx->pc == 0x1A4680u) {
        ctx->pc = 0x1A4684u;
        goto label_1a4684;
    }
    ctx->pc = 0x1A467Cu;
    {
        const bool branch_taken_0x1a467c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a467c) {
            ctx->pc = 0x1A44FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a44fc;
        }
    }
    ctx->pc = 0x1A4684u;
label_1a4684:
    // 0x1a4684: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a4684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a4688:
    // 0x1a4688: 0x24420134  addiu       $v0, $v0, 0x134
    ctx->pc = 0x1a4688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
label_1a468c:
    // 0x1a468c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a468cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4690:
    // 0x1a4690: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a4690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4694:
    // 0x1a4694: 0xc068c6c  jal         func_1A31B0
label_1a4698:
    if (ctx->pc == 0x1A4698u) {
        ctx->pc = 0x1A469Cu;
        goto label_1a469c;
    }
    ctx->pc = 0x1A4694u;
    SET_GPR_U32(ctx, 31, 0x1A469Cu);
    ctx->pc = 0x1A31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A31B0u, 0x1A4694u, 0x1A469Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A469Cu;
label_1a469c:
    // 0x1a469c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a469cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a46a0:
    // 0x1a46a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a46a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a46a4:
    // 0x1a46a4: 0xc069dac  jal         func_1A76B0
label_1a46a8:
    if (ctx->pc == 0x1A46A8u) {
        ctx->pc = 0x1A46ACu;
        goto label_1a46ac;
    }
    ctx->pc = 0x1A46A4u;
    SET_GPR_U32(ctx, 31, 0x1A46ACu);
    ctx->pc = 0x1A76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A76B0u, 0x1A46A4u, 0x1A46ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A46ACu;
label_1a46ac:
    // 0x1a46ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a46acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a46b0:
    // 0x1a46b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a46b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a46b4:
    // 0x1a46b4: 0x10c20097  beq         $a2, $v0, . + 4 + (0x97 << 2)
label_1a46b8:
    if (ctx->pc == 0x1A46B8u) {
        ctx->pc = 0x1A46BCu;
        goto label_1a46bc;
    }
    ctx->pc = 0x1A46B4u;
    {
        const bool branch_taken_0x1a46b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a46b4) {
            ctx->pc = 0x1A4914u;
            goto label_1a4914;
        }
    }
    ctx->pc = 0x1A46BCu;
label_1a46bc:
    // 0x1a46bc: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x1a46bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a46c0:
    // 0x1a46c0: 0xc06479c  jal         func_191E70
label_1a46c4:
    if (ctx->pc == 0x1A46C4u) {
        ctx->pc = 0x1A46C8u;
        goto label_1a46c8;
    }
    ctx->pc = 0x1A46C0u;
    SET_GPR_U32(ctx, 31, 0x1A46C8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A46C0u, 0x1A46C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A46C8u;
label_1a46c8:
    // 0x1a46c8: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1a46c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_1a46cc:
    // 0x1a46cc: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a46ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a46d0:
    // 0x1a46d0: 0x2603000d  addiu       $v1, $s0, 0xD
    ctx->pc = 0x1a46d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
label_1a46d4:
    // 0x1a46d4: 0x244500dc  addiu       $a1, $v0, 0xDC
    ctx->pc = 0x1a46d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
label_1a46d8:
    // 0x1a46d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a46d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a46dc:
    // 0x1a46dc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a46dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a46e0:
    // 0x1a46e0: 0xc05612c  jal         func_1584B0
label_1a46e4:
    if (ctx->pc == 0x1A46E4u) {
        ctx->pc = 0x1A46E8u;
        goto label_1a46e8;
    }
    ctx->pc = 0x1A46E0u;
    SET_GPR_U32(ctx, 31, 0x1A46E8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A46E0u, 0x1A46E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A46E8u;
label_1a46e8:
    // 0x1a46e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a46e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a46ec:
    // 0x1a46ec: 0x7ba40120  lq          $a0, 0x120($sp)
    ctx->pc = 0x1a46ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1a46f0:
    // 0x1a46f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a46f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a46f4:
    // 0x1a46f4: 0xc08c8dc  jal         func_232370
label_1a46f8:
    if (ctx->pc == 0x1A46F8u) {
        ctx->pc = 0x1A46FCu;
        goto label_1a46fc;
    }
    ctx->pc = 0x1A46F4u;
    SET_GPR_U32(ctx, 31, 0x1A46FCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1A46F4u, 0x1A46FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A46FCu;
label_1a46fc:
    // 0x1a46fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a46fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4700:
    // 0x1a4700: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a4700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a4704:
    // 0x1a4704: 0x24440134  addiu       $a0, $v0, 0x134
    ctx->pc = 0x1a4704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 308));
label_1a4708:
    // 0x1a4708: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a4708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a470c:
    // 0x1a470c: 0xc068c6c  jal         func_1A31B0
label_1a4710:
    if (ctx->pc == 0x1A4710u) {
        ctx->pc = 0x1A4714u;
        goto label_1a4714;
    }
    ctx->pc = 0x1A470Cu;
    SET_GPR_U32(ctx, 31, 0x1A4714u);
    ctx->pc = 0x1A31B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A31B0u, 0x1A470Cu, 0x1A4714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4714u;
label_1a4714:
    // 0x1a4714: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x1a4714u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a4718:
    // 0x1a4718: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a4718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a471c:
    // 0x1a471c: 0x27a20178  addiu       $v0, $sp, 0x178
    ctx->pc = 0x1a471cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_1a4720:
    // 0x1a4720: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a4720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4724:
    // 0x1a4724: 0xc069db4  jal         func_1A76D0
label_1a4728:
    if (ctx->pc == 0x1A4728u) {
        ctx->pc = 0x1A472Cu;
        goto label_1a472c;
    }
    ctx->pc = 0x1A4724u;
    SET_GPR_U32(ctx, 31, 0x1A472Cu);
    ctx->pc = 0x1A76D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A76D0u, 0x1A4724u, 0x1A472Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A472Cu;
label_1a472c:
    // 0x1a472c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a472cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4730:
    // 0x1a4730: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x1a4730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a4734:
    // 0x1a4734: 0xc06479c  jal         func_191E70
label_1a4738:
    if (ctx->pc == 0x1A4738u) {
        ctx->pc = 0x1A473Cu;
        goto label_1a473c;
    }
    ctx->pc = 0x1A4734u;
    SET_GPR_U32(ctx, 31, 0x1A473Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A4734u, 0x1A473Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A473Cu;
label_1a473c:
    // 0x1a473c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1a473cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4740:
    // 0x1a4740: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a4740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a4744:
    // 0x1a4744: 0x2605000d  addiu       $a1, $s0, 0xD
    ctx->pc = 0x1a4744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
label_1a4748:
    // 0x1a4748: 0x244200dc  addiu       $v0, $v0, 0xDC
    ctx->pc = 0x1a4748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
label_1a474c:
    // 0x1a474c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a474cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4750:
    // 0x1a4750: 0xc05612c  jal         func_1584B0
label_1a4754:
    if (ctx->pc == 0x1A4754u) {
        ctx->pc = 0x1A4758u;
        goto label_1a4758;
    }
    ctx->pc = 0x1A4750u;
    SET_GPR_U32(ctx, 31, 0x1A4758u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A4750u, 0x1A4758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4758u;
label_1a4758:
    // 0x1a4758: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a475c:
    // 0x1a475c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a475cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a4760:
    // 0x1a4760: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1a4760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a4764:
    // 0x1a4764: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a4764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4768:
    // 0x1a4768: 0x27b30180  addiu       $s3, $sp, 0x180
    ctx->pc = 0x1a4768u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_1a476c:
    // 0x1a476c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1a476cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a4770:
    // 0x1a4770: 0xc08c688  jal         func_231A20
label_1a4774:
    if (ctx->pc == 0x1A4774u) {
        ctx->pc = 0x1A4778u;
        goto label_1a4778;
    }
    ctx->pc = 0x1A4770u;
    SET_GPR_U32(ctx, 31, 0x1A4778u);
    ctx->pc = 0x231A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A20u, 0x1A4770u, 0x1A4778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4778u;
label_1a4778:
    // 0x1a4778: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x1a4778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_1a477c:
    // 0x1a477c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1a477cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1a4780:
    // 0x1a4780: 0xc7a20180  lwc1        $f2, 0x180($sp)
    ctx->pc = 0x1a4780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a4784:
    // 0x1a4784: 0xc7a10178  lwc1        $f1, 0x178($sp)
    ctx->pc = 0x1a4784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4788:
    // 0x1a4788: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a4788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a478c:
    // 0x1a478c: 0x0  nop
    ctx->pc = 0x1a478cu;
    // NOP
label_1a4790:
    // 0x1a4790: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a4790u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1a4794:
    // 0x1a4794: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1a4794u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1a4798:
    // 0x1a4798: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x1a4798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_1a479c:
    // 0x1a479c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a479cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1a47a0:
    // 0x1a47a0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a47a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1a47a4:
    // 0x1a47a4: 0xc7a20184  lwc1        $f2, 0x184($sp)
    ctx->pc = 0x1a47a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a47a8:
    // 0x1a47a8: 0xc7a1017c  lwc1        $f1, 0x17C($sp)
    ctx->pc = 0x1a47a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a47ac:
    // 0x1a47ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a47acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a47b0:
    // 0x1a47b0: 0x0  nop
    ctx->pc = 0x1a47b0u;
    // NOP
label_1a47b4:
    // 0x1a47b4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1a47b4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1a47b8:
    // 0x1a47b8: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1a47b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1a47bc:
    // 0x1a47bc: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x1a47bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_1a47c0:
    // 0x1a47c0: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x1a47c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a47c4:
    // 0x1a47c4: 0xc06479c  jal         func_191E70
label_1a47c8:
    if (ctx->pc == 0x1A47C8u) {
        ctx->pc = 0x1A47CCu;
        goto label_1a47cc;
    }
    ctx->pc = 0x1A47C4u;
    SET_GPR_U32(ctx, 31, 0x1A47CCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A47C4u, 0x1A47CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A47CCu;
label_1a47cc:
    // 0x1a47cc: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x1a47ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_1a47d0:
    // 0x1a47d0: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x1a47d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a47d4:
    // 0x1a47d4: 0x2602000d  addiu       $v0, $s0, 0xD
    ctx->pc = 0x1a47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
label_1a47d8:
    // 0x1a47d8: 0x249700dc  addiu       $s7, $a0, 0xDC
    ctx->pc = 0x1a47d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 220));
label_1a47dc:
    // 0x1a47dc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1a47dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a47e0:
    // 0x1a47e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a47e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a47e4:
    // 0x1a47e4: 0xc05612c  jal         func_1584B0
label_1a47e8:
    if (ctx->pc == 0x1A47E8u) {
        ctx->pc = 0x1A47ECu;
        goto label_1a47ec;
    }
    ctx->pc = 0x1A47E4u;
    SET_GPR_U32(ctx, 31, 0x1A47ECu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A47E4u, 0x1A47ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A47ECu;
label_1a47ec:
    // 0x1a47ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a47ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a47f0:
    // 0x1a47f0: 0x7ba40110  lq          $a0, 0x110($sp)
    ctx->pc = 0x1a47f0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1a47f4:
    // 0x1a47f4: 0xc7ac0178  lwc1        $f12, 0x178($sp)
    ctx->pc = 0x1a47f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a47f8:
    // 0x1a47f8: 0xc7ad017c  lwc1        $f13, 0x17C($sp)
    ctx->pc = 0x1a47f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a47fc:
    // 0x1a47fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a47fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4800:
    // 0x1a4800: 0xc08c208  jal         func_230820
label_1a4804:
    if (ctx->pc == 0x1A4804u) {
        ctx->pc = 0x1A4808u;
        goto label_1a4808;
    }
    ctx->pc = 0x1A4800u;
    SET_GPR_U32(ctx, 31, 0x1A4808u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1A4800u, 0x1A4808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4808u;
label_1a4808:
    // 0x1a4808: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a480c:
    // 0x1a480c: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a480cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a4810:
    // 0x1a4810: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4814:
    // 0x1a4814: 0xc06479c  jal         func_191E70
label_1a4818:
    if (ctx->pc == 0x1A4818u) {
        ctx->pc = 0x1A481Cu;
        goto label_1a481c;
    }
    ctx->pc = 0x1A4814u;
    SET_GPR_U32(ctx, 31, 0x1A481Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A4814u, 0x1A481Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A481Cu;
label_1a481c:
    // 0x1a481c: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1a481cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_1a4820:
    // 0x1a4820: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a4820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a4824:
    // 0x1a4824: 0x2605000d  addiu       $a1, $s0, 0xD
    ctx->pc = 0x1a4824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
label_1a4828:
    // 0x1a4828: 0x244400dc  addiu       $a0, $v0, 0xDC
    ctx->pc = 0x1a4828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
label_1a482c:
    // 0x1a482c: 0xc05612c  jal         func_1584B0
label_1a4830:
    if (ctx->pc == 0x1A4830u) {
        ctx->pc = 0x1A4834u;
        goto label_1a4834;
    }
    ctx->pc = 0x1A482Cu;
    SET_GPR_U32(ctx, 31, 0x1A4834u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A482Cu, 0x1A4834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4834u;
label_1a4834:
    // 0x1a4834: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a4834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a4838:
    // 0x1a4838: 0x7ba40100  lq          $a0, 0x100($sp)
    ctx->pc = 0x1a4838u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1a483c:
    // 0x1a483c: 0xc08c9a8  jal         func_2326A0
label_1a4840:
    if (ctx->pc == 0x1A4840u) {
        ctx->pc = 0x1A4844u;
        goto label_1a4844;
    }
    ctx->pc = 0x1A483Cu;
    SET_GPR_U32(ctx, 31, 0x1A4844u);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x1A483Cu, 0x1A4844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4844u;
label_1a4844:
    // 0x1a4844: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4848:
    // 0x1a4848: 0x14800032  bnez        $a0, . + 4 + (0x32 << 2)
label_1a484c:
    if (ctx->pc == 0x1A484Cu) {
        ctx->pc = 0x1A4850u;
        goto label_1a4850;
    }
    ctx->pc = 0x1A4848u;
    {
        const bool branch_taken_0x1a4848 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4848) {
            ctx->pc = 0x1A4914u;
            goto label_1a4914;
        }
    }
    ctx->pc = 0x1A4850u;
label_1a4850:
    // 0x1a4850: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1a4850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1a4854:
    // 0x1a4854: 0xdf869380  ld          $a2, -0x6C80($gp)
    ctx->pc = 0x1a4854u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294939520)));
label_1a4858:
    // 0x1a4858: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x1a4858u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
label_1a485c:
    // 0x1a485c: 0x27a20168  addiu       $v0, $sp, 0x168
    ctx->pc = 0x1a485cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_1a4860:
    // 0x1a4860: 0xdf839388  ld          $v1, -0x6C78($gp)
    ctx->pc = 0x1a4860u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294939528)));
label_1a4864:
    // 0x1a4864: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1a4864u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_1a4868:
    // 0x1a4868: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x1a4868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a486c:
    // 0x1a486c: 0xc06479c  jal         func_191E70
label_1a4870:
    if (ctx->pc == 0x1A4870u) {
        ctx->pc = 0x1A4874u;
        goto label_1a4874;
    }
    ctx->pc = 0x1A486Cu;
    SET_GPR_U32(ctx, 31, 0x1A4874u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A486Cu, 0x1A4874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4874u;
label_1a4874:
    // 0x1a4874: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1a4874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_1a4878:
    // 0x1a4878: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x1a4878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a487c:
    // 0x1a487c: 0x2605000d  addiu       $a1, $s0, 0xD
    ctx->pc = 0x1a487cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
label_1a4880:
    // 0x1a4880: 0x248200dc  addiu       $v0, $a0, 0xDC
    ctx->pc = 0x1a4880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 220));
label_1a4884:
    // 0x1a4884: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4888:
    // 0x1a4888: 0xc05612c  jal         func_1584B0
label_1a488c:
    if (ctx->pc == 0x1A488Cu) {
        ctx->pc = 0x1A4890u;
        goto label_1a4890;
    }
    ctx->pc = 0x1A4888u;
    SET_GPR_U32(ctx, 31, 0x1A4890u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A4888u, 0x1A4890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4890u;
label_1a4890:
    // 0x1a4890: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a4890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a4894:
    // 0x1a4894: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a4894u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a4898:
    // 0x1a4898: 0x7ba400f0  lq          $a0, 0xF0($sp)
    ctx->pc = 0x1a4898u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1a489c:
    // 0x1a489c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a489cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a48a0:
    // 0x1a48a0: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x1a48a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1a48a4:
    // 0x1a48a4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a48a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a48a8:
    // 0x1a48a8: 0xc78d82c4  lwc1        $f13, -0x7D3C($gp)
    ctx->pc = 0x1a48a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a48ac:
    // 0x1a48ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a48acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a48b0:
    // 0x1a48b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a48b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a48b4:
    // 0x1a48b4: 0xc08b9fc  jal         func_22E7F0
label_1a48b8:
    if (ctx->pc == 0x1A48B8u) {
        ctx->pc = 0x1A48BCu;
        goto label_1a48bc;
    }
    ctx->pc = 0x1A48B4u;
    SET_GPR_U32(ctx, 31, 0x1A48BCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1A48B4u, 0x1A48BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A48BCu;
label_1a48bc:
    // 0x1a48bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a48bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a48c0:
    // 0x1a48c0: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x1a48c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a48c4:
    // 0x1a48c4: 0xc06479c  jal         func_191E70
label_1a48c8:
    if (ctx->pc == 0x1A48C8u) {
        ctx->pc = 0x1A48CCu;
        goto label_1a48cc;
    }
    ctx->pc = 0x1A48C4u;
    SET_GPR_U32(ctx, 31, 0x1A48CCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A48C4u, 0x1A48CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A48CCu;
label_1a48cc:
    // 0x1a48cc: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1a48ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_1a48d0:
    // 0x1a48d0: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x1a48d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a48d4:
    // 0x1a48d4: 0x2605000d  addiu       $a1, $s0, 0xD
    ctx->pc = 0x1a48d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
label_1a48d8:
    // 0x1a48d8: 0x244200dc  addiu       $v0, $v0, 0xDC
    ctx->pc = 0x1a48d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 220));
label_1a48dc:
    // 0x1a48dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a48dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a48e0:
    // 0x1a48e0: 0xc05612c  jal         func_1584B0
label_1a48e4:
    if (ctx->pc == 0x1A48E4u) {
        ctx->pc = 0x1A48E8u;
        goto label_1a48e8;
    }
    ctx->pc = 0x1A48E0u;
    SET_GPR_U32(ctx, 31, 0x1A48E8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1A48E0u, 0x1A48E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A48E8u;
label_1a48e8:
    // 0x1a48e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a48e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a48ec:
    // 0x1a48ec: 0x7ba400e0  lq          $a0, 0xE0($sp)
    ctx->pc = 0x1a48ecu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1a48f0:
    // 0x1a48f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a48f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a48f4:
    // 0x1a48f4: 0x27a20168  addiu       $v0, $sp, 0x168
    ctx->pc = 0x1a48f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_1a48f8:
    // 0x1a48f8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a48f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a48fc:
    // 0x1a48fc: 0xc78c82c4  lwc1        $f12, -0x7D3C($gp)
    ctx->pc = 0x1a48fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a4900:
    // 0x1a4900: 0xc78d82c4  lwc1        $f13, -0x7D3C($gp)
    ctx->pc = 0x1a4900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a4904:
    // 0x1a4904: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a4904u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4908:
    // 0x1a4908: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a4908u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a490c:
    // 0x1a490c: 0xc08b9fc  jal         func_22E7F0
label_1a4910:
    if (ctx->pc == 0x1A4910u) {
        ctx->pc = 0x1A4914u;
        goto label_1a4914;
    }
    ctx->pc = 0x1A490Cu;
    SET_GPR_U32(ctx, 31, 0x1A4914u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1A490Cu, 0x1A4914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4914u;
label_1a4914:
    // 0x1a4914: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1a4914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a4918:
    // 0x1a4918: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a491c:
    // 0x1a491c: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1a491cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_1a4920:
    // 0x1a4920: 0x202182a  slt         $v1, $s0, $v0
    ctx->pc = 0x1a4920u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a4924:
    // 0x1a4924: 0x1460fee9  bnez        $v1, . + 4 + (-0x117 << 2)
label_1a4928:
    if (ctx->pc == 0x1A4928u) {
        ctx->pc = 0x1A492Cu;
        goto label_1a492c;
    }
    ctx->pc = 0x1A4924u;
    {
        const bool branch_taken_0x1a4924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4924) {
            ctx->pc = 0x1A44CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a44cc;
        }
    }
    ctx->pc = 0x1A492Cu;
label_1a492c:
    // 0x1a492c: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x1a492cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a4930:
    // 0x1a4930: 0xc06479c  jal         func_191E70
label_1a4934:
    if (ctx->pc == 0x1A4934u) {
        ctx->pc = 0x1A4938u;
        goto label_1a4938;
    }
    ctx->pc = 0x1A4930u;
    SET_GPR_U32(ctx, 31, 0x1A4938u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1A4930u, 0x1A4938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4938u;
label_1a4938:
    // 0x1a4938: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a493c:
    // 0x1a493c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a493cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a4940:
    // 0x1a4940: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1a4940u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1a4944:
    // 0x1a4944: 0x320f809  jalr        $t9
label_1a4948:
    if (ctx->pc == 0x1A4948u) {
        ctx->pc = 0x1A494Cu;
        goto label_1a494c;
    }
    ctx->pc = 0x1A4944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A494Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4944u, 0x1A494Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A494Cu;
label_1a494c:
    // 0x1a494c: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x1a494cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_1a4950:
    // 0x1a4950: 0xc064cb0  jal         func_1932C0
label_1a4954:
    if (ctx->pc == 0x1A4954u) {
        ctx->pc = 0x1A4958u;
        goto label_1a4958;
    }
    ctx->pc = 0x1A4950u;
    SET_GPR_U32(ctx, 31, 0x1A4958u);
    ctx->pc = 0x1932C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932C0u, 0x1A4950u, 0x1A4958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4958u;
label_1a4958:
    // 0x1a4958: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1a4958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a495c:
    // 0x1a495c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1a495cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a4960:
    // 0x1a4960: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1a4960u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a4964:
    // 0x1a4964: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1a4964u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a4968:
    // 0x1a4968: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a4968u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a496c:
    // 0x1a496c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a496cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a4970:
    // 0x1a4970: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a4970u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a4974:
    // 0x1a4974: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a4974u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a4978:
    // 0x1a4978: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a4978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a497c:
    // 0x1a497c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a497cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4980:
    // 0x1a4980: 0x27bd0200  addiu       $sp, $sp, 0x200
    ctx->pc = 0x1a4980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_1a4984:
    // 0x1a4984: 0x3e00008  jr          $ra
label_1a4988:
    if (ctx->pc == 0x1A4988u) {
        ctx->pc = 0x1A498Cu;
        goto label_1a498c;
    }
    ctx->pc = 0x1A4984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A498Cu;
label_1a498c:
    // 0x1a498c: 0x0  nop
    ctx->pc = 0x1a498cu;
    // NOP
label_1a4990:
    // 0x1a4990: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a4990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a4994:
    // 0x1a4994: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a4998:
    // 0x1a4998: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a4998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a499c:
    // 0x1a499c: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1a499cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_1a49a0:
    // 0x1a49a0: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1a49a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1a49a4:
    // 0x1a49a4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a49a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a49a8:
    // 0x1a49a8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1a49a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1a49ac:
    // 0x1a49ac: 0xc085538  jal         func_2154E0
label_1a49b0:
    if (ctx->pc == 0x1A49B0u) {
        ctx->pc = 0x1A49B4u;
        goto label_1a49b4;
    }
    ctx->pc = 0x1A49ACu;
    SET_GPR_U32(ctx, 31, 0x1A49B4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1A49ACu, 0x1A49B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A49B4u;
label_1a49b4:
    // 0x1a49b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a49b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a49b8:
    // 0x1a49b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1a49b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a49bc:
    // 0x1a49bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a49bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a49c0:
    // 0x1a49c0: 0xc090f80  jal         func_243E00
label_1a49c4:
    if (ctx->pc == 0x1A49C4u) {
        ctx->pc = 0x1A49C8u;
        goto label_1a49c8;
    }
    ctx->pc = 0x1A49C0u;
    SET_GPR_U32(ctx, 31, 0x1A49C8u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x1A49C0u, 0x1A49C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A49C8u;
label_1a49c8:
    // 0x1a49c8: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1a49c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a49cc:
    // 0x1a49cc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a49ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a49d0:
    // 0x1a49d0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1a49d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a49d4:
    // 0x1a49d4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1a49d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a49d8:
    // 0x1a49d8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1a49d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a49dc:
    // 0x1a49dc: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1a49dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1a49e0:
    // 0x1a49e0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1a49e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1a49e4:
    // 0x1a49e4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1a49e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1a49e8:
    // 0x1a49e8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a49e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1a49ec:
    // 0x1a49ec: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1a49ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a49f0:
    // 0x1a49f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a49f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a49f4:
    // 0x1a49f4: 0xc106598  jal         func_419660
label_1a49f8:
    if (ctx->pc == 0x1A49F8u) {
        ctx->pc = 0x1A49FCu;
        goto label_1a49fc;
    }
    ctx->pc = 0x1A49F4u;
    SET_GPR_U32(ctx, 31, 0x1A49FCu);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x1A49F4u, 0x1A49FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A49FCu;
label_1a49fc:
    // 0x1a49fc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a49fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1a4a00:
    // 0x1a4a00: 0xc106794  jal         func_419E50
label_1a4a04:
    if (ctx->pc == 0x1A4A04u) {
        ctx->pc = 0x1A4A08u;
        goto label_1a4a08;
    }
    ctx->pc = 0x1A4A00u;
    SET_GPR_U32(ctx, 31, 0x1A4A08u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x1A4A00u, 0x1A4A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4A08u;
label_1a4a08:
    // 0x1a4a08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4a0c:
    // 0x1a4a0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a4a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4a10:
    // 0x1a4a10: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1a4a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1a4a14:
    // 0x1a4a14: 0x3e00008  jr          $ra
label_1a4a18:
    if (ctx->pc == 0x1A4A18u) {
        ctx->pc = 0x1A4A1Cu;
        goto label_1a4a1c;
    }
    ctx->pc = 0x1A4A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4A1Cu;
label_1a4a1c:
    // 0x1a4a1c: 0x0  nop
    ctx->pc = 0x1a4a1cu;
    // NOP
label_1a4a20:
    // 0x1a4a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a4a24:
    // 0x1a4a24: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1a4a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1a4a28:
    // 0x1a4a28: 0x24426730  addiu       $v0, $v0, 0x6730
    ctx->pc = 0x1a4a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26416));
label_1a4a2c:
    // 0x1a4a2c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a4a2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a4a30:
    // 0x1a4a30: 0x3e00008  jr          $ra
label_1a4a34:
    if (ctx->pc == 0x1A4A34u) {
        ctx->pc = 0x1A4A38u;
        goto label_1a4a38;
    }
    ctx->pc = 0x1A4A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4A38u;
label_1a4a38:
    // 0x1a4a38: 0x0  nop
    ctx->pc = 0x1a4a38u;
    // NOP
label_1a4a3c:
    // 0x1a4a3c: 0x0  nop
    ctx->pc = 0x1a4a3cu;
    // NOP
label_1a4a40:
    // 0x1a4a40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a4a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a4a44:
    // 0x1a4a44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a4a48:
    // 0x1a4a48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a4a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1a4a4c:
    // 0x1a4a4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1a4a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_1a4a50:
    // 0x1a4a50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a4a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4a54:
    // 0x1a4a54: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1a4a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1a4a58:
    // 0x1a4a58: 0xc064d00  jal         func_193400
label_1a4a5c:
    if (ctx->pc == 0x1A4A5Cu) {
        ctx->pc = 0x1A4A60u;
        goto label_1a4a60;
    }
    ctx->pc = 0x1A4A58u;
    SET_GPR_U32(ctx, 31, 0x1A4A60u);
    ctx->pc = 0x193400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193400u, 0x1A4A58u, 0x1A4A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4A60u;
label_1a4a60:
    // 0x1a4a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4a64:
    // 0x1a4a64: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a4a64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a4a68:
    // 0x1a4a68: 0x3e00008  jr          $ra
label_1a4a6c:
    if (ctx->pc == 0x1A4A6Cu) {
        ctx->pc = 0x1A4A70u;
        goto label_fallthrough_0x1a4a68;
    }
    ctx->pc = 0x1A4A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a4a68:
    ctx->pc = 0x1A4A70u;
}
